// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.RuleConstruct.Match
// Imports: public import Lean.Elab.Tactic.Do.Internal.VCGen.Types public import Lean.Elab.Tactic.Do.VCGen.Split
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
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_Pred(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_inferType___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_altInfos(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqMPR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getRevArg_x21(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_rwIfOrMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_TransformAltFVars_all(lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
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
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Array_mask___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_abstractM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Meta_check___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mapErrorImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_MatcherApp_altNumParams(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isCasesOnRecursor(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
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
lean_object* l_Array_instInhabited(lean_object*);
lean_object* l_Subarray_empty(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_forallAltVarsTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(lean_object*);
lean_object* l_Lean_Meta_MatcherApp_toExpr(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_EPred(lean_object*);
lean_object* l_Lean_Expr_eta(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_etaExpand(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_m(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* l_Lean_Meta_abstractMVars(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19_spec__33___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "congrArg"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(188, 17, 22, 243, 206, 91, 171, 36)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "mkBackwardRuleForSplit: rwIfOrMatcher failed for alt "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isFalse"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(113, 70, 3, 12, 31, 103, 230, 247)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__1_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__14___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__14___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__14___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__14(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__0_value;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "unexpected matcher application, motive must be lambda expression with #"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__1_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__2;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " arguments"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__3 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__3_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__1 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__2 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__3 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__4 = (const lean_object*)&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "unexpected matcher application, insufficient number of parameters in alternative"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Meta.Match.MatcherApp.Transform"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Meta.MatcherApp.transform"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "assertion violation: ys.size == splitterAltInfo.numFields\n        "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__2_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__3;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Function"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__4_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "const"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__5_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(225, 8, 186, 189, 152, 89, 197, 12)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__6_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(231, 33, 22, 82, 100, 121, 126, 178)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__6_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Unit"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__7_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__8_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__9;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__10;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "unit"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__11 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__11_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(230, 84, 106, 234, 91, 210, 120, 136)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__12_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__11_value),LEAN_SCALAR_PTR_LITERAL(87, 186, 243, 194, 96, 12, 218, 7)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__12_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__13;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___boxed(lean_object**);
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__0;
static lean_once_cell_t l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__1;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "assertion violation: altInfo.numOverlaps = 0\n      "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__15(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__3___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__13(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "failed to transform matcher, type error when constructing new motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__0 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__0_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__1;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "failed to transform matcher, type error when constructing new pre-splitter motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__2 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__2_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__3;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "\nfailed with"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__4 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__4_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__5;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "failed to transform matcher, type error when constructing splitter motive:"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__6 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__6_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__7;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matcher "};
static const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__8 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__8_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__9;
static const lean_string_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " has no MatchInfo found"};
static const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__10 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__10_value;
static lean_once_cell_t l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__11;
static const lean_ctor_object l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___boxed__const__1 = (const lean_object*)&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___boxed__const__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isTrue"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 82, 240, 34, 69, 121, 64, 234)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(15, 2, 151, 246, 61, 29, 192, 254)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__3_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__4___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__5___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__28(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__28___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PartialOrder"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rel"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__2_value),LEAN_SCALAR_PTR_LITERAL(179, 3, 218, 237, 219, 72, 94, 177)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__3_value),LEAN_SCALAR_PTR_LITERAL(41, 174, 7, 105, 99, 77, 97, 125)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pre"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(234, 68, 201, 77, 117, 184, 192, 140)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "epost"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(85, 242, 133, 56, 224, 241, 177, 168)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___boxed(lean_object**);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "post"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 28, 93, 107, 152, 77, 110, 29)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__11(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__11___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 235, 49, 11, 232, 138, 137, 74)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__20(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "alt"};
static const lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg___closed__0 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg___closed__0_value;
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 128, 245, 49, 225, 62, 36, 86)}};
static const lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg___closed__1 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 154, 90, 102, 217, 192, 49, 255)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 228, 43, 115, 146, 126, 91, 53)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "dec"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 11, 154, 178, 201, 214, 183, 192)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "discr"};
static const lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg___closed__0 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg___closed__0_value;
static const lean_ctor_object l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 61, 20, 168, 108, 94, 13, 165)}};
static const lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg___closed__1 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(38, 183, 255, 58, 84, 31, 100, 5)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Expected monad type constructor at "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__2_value),LEAN_SCALAR_PTR_LITERAL(247, 80, 99, 121, 74, 33, 203, 108)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19_spec__33(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___x_8_; 
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc_ref(v___y_3_);
v___x_8_ = lean_apply_6(v_k_1_, v_b_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, lean_box(0));
return v___x_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg___lam__0___boxed(lean_object* v_k_9_, lean_object* v_b_10_, lean_object* v___y_11_, lean_object* v___y_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg___lam__0(v_k_9_, v_b_10_, v___y_11_, v___y_12_, v___y_13_, v___y_14_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
lean_dec(v___y_12_);
lean_dec_ref(v___y_11_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg(lean_object* v_name_17_, uint8_t v_bi_18_, lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_kind_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___f_27_; lean_object* v___x_28_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_27_, 0, v_k_20_);
v___x_28_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_17_, v_bi_18_, v_type_19_, v___f_27_, v_kind_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
if (lean_obj_tag(v___x_28_) == 0)
{
lean_object* v_a_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_36_; 
v_a_29_ = lean_ctor_get(v___x_28_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_36_ == 0)
{
v___x_31_ = v___x_28_;
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_a_29_);
lean_dec(v___x_28_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_34_; 
if (v_isShared_32_ == 0)
{
v___x_34_ = v___x_31_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v_a_29_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
else
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_44_; 
v_a_37_ = lean_ctor_get(v___x_28_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_28_);
if (v_isSharedCheck_44_ == 0)
{
v___x_39_ = v___x_28_;
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v___x_28_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_42_; 
if (v_isShared_40_ == 0)
{
v___x_42_ = v___x_39_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_a_37_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg___boxed(lean_object* v_name_45_, lean_object* v_bi_46_, lean_object* v_type_47_, lean_object* v_k_48_, lean_object* v_kind_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_bi_boxed_55_; uint8_t v_kind_boxed_56_; lean_object* v_res_57_; 
v_bi_boxed_55_ = lean_unbox(v_bi_46_);
v_kind_boxed_56_ = lean_unbox(v_kind_49_);
v_res_57_ = l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg(v_name_45_, v_bi_boxed_55_, v_type_47_, v_k_48_, v_kind_boxed_56_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2(lean_object* v_00_u03b1_58_, lean_object* v_name_59_, uint8_t v_bi_60_, lean_object* v_type_61_, lean_object* v_k_62_, uint8_t v_kind_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg(v_name_59_, v_bi_60_, v_type_61_, v_k_62_, v_kind_63_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___boxed(lean_object* v_00_u03b1_70_, lean_object* v_name_71_, lean_object* v_bi_72_, lean_object* v_type_73_, lean_object* v_k_74_, lean_object* v_kind_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
uint8_t v_bi_boxed_81_; uint8_t v_kind_boxed_82_; lean_object* v_res_83_; 
v_bi_boxed_81_ = lean_unbox(v_bi_72_);
v_kind_boxed_82_ = lean_unbox(v_kind_75_);
v_res_83_ = l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2(v_00_u03b1_70_, v_name_71_, v_bi_boxed_81_, v_type_73_, v_k_74_, v_kind_boxed_82_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
return v_res_83_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__3(lean_object* v_msg_84_){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = l_Lean_instInhabitedExpr;
v___x_86_ = lean_panic_fn_borrowed(v___x_85_, v_msg_84_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6___redArg(lean_object* v_e_87_, lean_object* v___y_88_){
_start:
{
uint8_t v___x_90_; 
v___x_90_ = l_Lean_Expr_hasMVar(v_e_87_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; 
v___x_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_91_, 0, v_e_87_);
return v___x_91_;
}
else
{
lean_object* v___x_92_; lean_object* v_mctx_93_; lean_object* v___x_94_; lean_object* v_fst_95_; lean_object* v_snd_96_; lean_object* v___x_97_; lean_object* v_cache_98_; lean_object* v_zetaDeltaFVarIds_99_; lean_object* v_postponed_100_; lean_object* v_diag_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_110_; 
v___x_92_ = lean_st_ref_get(v___y_88_);
v_mctx_93_ = lean_ctor_get(v___x_92_, 0);
lean_inc_ref(v_mctx_93_);
lean_dec(v___x_92_);
v___x_94_ = l_Lean_instantiateMVarsCore(v_mctx_93_, v_e_87_);
v_fst_95_ = lean_ctor_get(v___x_94_, 0);
lean_inc(v_fst_95_);
v_snd_96_ = lean_ctor_get(v___x_94_, 1);
lean_inc(v_snd_96_);
lean_dec_ref(v___x_94_);
v___x_97_ = lean_st_ref_take(v___y_88_);
v_cache_98_ = lean_ctor_get(v___x_97_, 1);
v_zetaDeltaFVarIds_99_ = lean_ctor_get(v___x_97_, 2);
v_postponed_100_ = lean_ctor_get(v___x_97_, 3);
v_diag_101_ = lean_ctor_get(v___x_97_, 4);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_97_);
if (v_isSharedCheck_110_ == 0)
{
lean_object* v_unused_111_; 
v_unused_111_ = lean_ctor_get(v___x_97_, 0);
lean_dec(v_unused_111_);
v___x_103_ = v___x_97_;
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_diag_101_);
lean_inc(v_postponed_100_);
lean_inc(v_zetaDeltaFVarIds_99_);
lean_inc(v_cache_98_);
lean_dec(v___x_97_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 0, v_snd_96_);
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_snd_96_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v_cache_98_);
lean_ctor_set(v_reuseFailAlloc_109_, 2, v_zetaDeltaFVarIds_99_);
lean_ctor_set(v_reuseFailAlloc_109_, 3, v_postponed_100_);
lean_ctor_set(v_reuseFailAlloc_109_, 4, v_diag_101_);
v___x_106_ = v_reuseFailAlloc_109_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_107_ = lean_st_ref_set(v___y_88_, v___x_106_);
v___x_108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_108_, 0, v_fst_95_);
return v___x_108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6___redArg___boxed(lean_object* v_e_112_, lean_object* v___y_113_, lean_object* v___y_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6___redArg(v_e_112_, v___y_113_);
lean_dec(v___y_113_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6(lean_object* v_e_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_, lean_object* v___y_120_){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6___redArg(v_e_116_, v___y_118_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6___boxed(lean_object* v_e_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6(v_e_123_, v___y_124_, v___y_125_, v___y_126_, v___y_127_);
lean_dec(v___y_127_);
lean_dec_ref(v___y_126_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14___redArg(lean_object* v_e_130_, lean_object* v___y_131_){
_start:
{
uint8_t v___x_133_; 
v___x_133_ = l_Lean_Expr_hasMVar(v_e_130_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; 
v___x_134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_134_, 0, v_e_130_);
return v___x_134_;
}
else
{
lean_object* v___x_135_; lean_object* v_mctx_136_; lean_object* v___x_137_; lean_object* v_fst_138_; lean_object* v_snd_139_; lean_object* v___x_140_; lean_object* v_cache_141_; lean_object* v_zetaDeltaFVarIds_142_; lean_object* v_postponed_143_; lean_object* v_diag_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_153_; 
v___x_135_ = lean_st_ref_get(v___y_131_);
v_mctx_136_ = lean_ctor_get(v___x_135_, 0);
lean_inc_ref(v_mctx_136_);
lean_dec(v___x_135_);
v___x_137_ = l_Lean_instantiateMVarsCore(v_mctx_136_, v_e_130_);
v_fst_138_ = lean_ctor_get(v___x_137_, 0);
lean_inc(v_fst_138_);
v_snd_139_ = lean_ctor_get(v___x_137_, 1);
lean_inc(v_snd_139_);
lean_dec_ref(v___x_137_);
v___x_140_ = lean_st_ref_take(v___y_131_);
v_cache_141_ = lean_ctor_get(v___x_140_, 1);
v_zetaDeltaFVarIds_142_ = lean_ctor_get(v___x_140_, 2);
v_postponed_143_ = lean_ctor_get(v___x_140_, 3);
v_diag_144_ = lean_ctor_get(v___x_140_, 4);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_140_);
if (v_isSharedCheck_153_ == 0)
{
lean_object* v_unused_154_; 
v_unused_154_ = lean_ctor_get(v___x_140_, 0);
lean_dec(v_unused_154_);
v___x_146_ = v___x_140_;
v_isShared_147_ = v_isSharedCheck_153_;
goto v_resetjp_145_;
}
else
{
lean_inc(v_diag_144_);
lean_inc(v_postponed_143_);
lean_inc(v_zetaDeltaFVarIds_142_);
lean_inc(v_cache_141_);
lean_dec(v___x_140_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_153_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
lean_object* v___x_149_; 
if (v_isShared_147_ == 0)
{
lean_ctor_set(v___x_146_, 0, v_snd_139_);
v___x_149_ = v___x_146_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_snd_139_);
lean_ctor_set(v_reuseFailAlloc_152_, 1, v_cache_141_);
lean_ctor_set(v_reuseFailAlloc_152_, 2, v_zetaDeltaFVarIds_142_);
lean_ctor_set(v_reuseFailAlloc_152_, 3, v_postponed_143_);
lean_ctor_set(v_reuseFailAlloc_152_, 4, v_diag_144_);
v___x_149_ = v_reuseFailAlloc_152_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_st_ref_set(v___y_131_, v___x_149_);
v___x_151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_151_, 0, v_fst_138_);
return v___x_151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14___redArg___boxed(lean_object* v_e_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
lean_object* v_res_158_; 
v_res_158_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14___redArg(v_e_155_, v___y_156_);
lean_dec(v___y_156_);
return v_res_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14(lean_object* v_e_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14___redArg(v_e_159_, v___y_163_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14___boxed(lean_object* v_e_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14(v_e_168_, v___y_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_, v___y_174_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
lean_dec(v___y_172_);
lean_dec_ref(v___y_171_);
lean_dec(v___y_170_);
lean_dec_ref(v___y_169_);
return v_res_176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__0(lean_object* v_args_177_, lean_object* v_a_178_, lean_object* v_post_179_, lean_object* v_epost_180_, lean_object* v_head_181_, lean_object* v_ss_182_, lean_object* v_prog_183_){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_184_ = lean_unsigned_to_nat(7u);
v___x_185_ = lean_unsigned_to_nat(0u);
v___x_186_ = l_Array_extract___redArg(v_args_177_, v___x_185_, v___x_184_);
v___x_187_ = lean_unsigned_to_nat(4u);
v___x_188_ = lean_mk_empty_array_with_capacity(v___x_187_);
v___x_189_ = lean_array_push(v___x_188_, v_a_178_);
v___x_190_ = lean_array_push(v___x_189_, v_prog_183_);
v___x_191_ = lean_array_push(v___x_190_, v_post_179_);
v___x_192_ = lean_array_push(v___x_191_, v_epost_180_);
v___x_193_ = l_Array_append___redArg(v___x_186_, v___x_192_);
lean_dec_ref(v___x_192_);
v___x_194_ = l_Lean_mkAppN(v_head_181_, v___x_193_);
lean_dec_ref(v___x_193_);
v___x_195_ = l_Lean_mkAppN(v___x_194_, v_ss_182_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__0___boxed(lean_object* v_args_196_, lean_object* v_a_197_, lean_object* v_post_198_, lean_object* v_epost_199_, lean_object* v_head_200_, lean_object* v_ss_201_, lean_object* v_prog_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__0(v_args_196_, v_a_197_, v_post_198_, v_epost_199_, v_head_200_, v_ss_201_, v_prog_202_);
lean_dec_ref(v_ss_201_);
lean_dec_ref(v_args_196_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__1(lean_object* v___f_204_, lean_object* v___x_205_, lean_object* v_prog_206_){
_start:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_apply_1(v___f_204_, v_prog_206_);
v___x_208_ = l_Lean_Expr_app___override(v___x_205_, v___x_207_);
return v___x_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__2(lean_object* v___x_209_, lean_object* v___f_210_, uint8_t v___x_211_, uint8_t v___x_212_, uint8_t v___x_213_, lean_object* v_x_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_220_ = lean_mk_empty_array_with_capacity(v___x_209_);
lean_inc_ref(v_x_214_);
v___x_221_ = lean_array_push(v___x_220_, v_x_214_);
v___x_222_ = lean_apply_1(v___f_210_, v_x_214_);
v___x_223_ = l_Lean_Meta_mkLambdaFVars(v___x_221_, v___x_222_, v___x_211_, v___x_212_, v___x_211_, v___x_212_, v___x_213_, v___y_215_, v___y_216_, v___y_217_, v___y_218_);
lean_dec_ref(v___x_221_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__2___boxed(lean_object* v___x_224_, lean_object* v___f_225_, lean_object* v___x_226_, lean_object* v___x_227_, lean_object* v___x_228_, lean_object* v_x_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_){
_start:
{
uint8_t v___x_67729__boxed_235_; uint8_t v___x_67730__boxed_236_; uint8_t v___x_67731__boxed_237_; lean_object* v_res_238_; 
v___x_67729__boxed_235_ = lean_unbox(v___x_226_);
v___x_67730__boxed_236_ = lean_unbox(v___x_227_);
v___x_67731__boxed_237_ = lean_unbox(v___x_228_);
v_res_238_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__2(v___x_224_, v___f_225_, v___x_67729__boxed_235_, v___x_67730__boxed_236_, v___x_67731__boxed_237_, v_x_229_, v___y_230_, v___y_231_, v___y_232_, v___y_233_);
lean_dec(v___y_233_);
lean_dec_ref(v___y_232_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___x_224_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19_spec__33___redArg(lean_object* v_x_239_, lean_object* v_x_240_, lean_object* v_x_241_, lean_object* v_x_242_){
_start:
{
lean_object* v_ks_243_; lean_object* v_vs_244_; lean_object* v___x_246_; uint8_t v_isShared_247_; uint8_t v_isSharedCheck_268_; 
v_ks_243_ = lean_ctor_get(v_x_239_, 0);
v_vs_244_ = lean_ctor_get(v_x_239_, 1);
v_isSharedCheck_268_ = !lean_is_exclusive(v_x_239_);
if (v_isSharedCheck_268_ == 0)
{
v___x_246_ = v_x_239_;
v_isShared_247_ = v_isSharedCheck_268_;
goto v_resetjp_245_;
}
else
{
lean_inc(v_vs_244_);
lean_inc(v_ks_243_);
lean_dec(v_x_239_);
v___x_246_ = lean_box(0);
v_isShared_247_ = v_isSharedCheck_268_;
goto v_resetjp_245_;
}
v_resetjp_245_:
{
lean_object* v___x_248_; uint8_t v___x_249_; 
v___x_248_ = lean_array_get_size(v_ks_243_);
v___x_249_ = lean_nat_dec_lt(v_x_240_, v___x_248_);
if (v___x_249_ == 0)
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_253_; 
lean_dec(v_x_240_);
v___x_250_ = lean_array_push(v_ks_243_, v_x_241_);
v___x_251_ = lean_array_push(v_vs_244_, v_x_242_);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 1, v___x_251_);
lean_ctor_set(v___x_246_, 0, v___x_250_);
v___x_253_ = v___x_246_;
goto v_reusejp_252_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v___x_250_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v___x_251_);
v___x_253_ = v_reuseFailAlloc_254_;
goto v_reusejp_252_;
}
v_reusejp_252_:
{
return v___x_253_;
}
}
else
{
lean_object* v_k_x27_255_; uint8_t v___x_256_; 
v_k_x27_255_ = lean_array_fget_borrowed(v_ks_243_, v_x_240_);
v___x_256_ = l_Lean_instBEqMVarId_beq(v_x_241_, v_k_x27_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_258_; 
if (v_isShared_247_ == 0)
{
v___x_258_ = v___x_246_;
goto v_reusejp_257_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_ks_243_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_vs_244_);
v___x_258_ = v_reuseFailAlloc_262_;
goto v_reusejp_257_;
}
v_reusejp_257_:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = lean_unsigned_to_nat(1u);
v___x_260_ = lean_nat_add(v_x_240_, v___x_259_);
lean_dec(v_x_240_);
v_x_239_ = v___x_258_;
v_x_240_ = v___x_260_;
goto _start;
}
}
else
{
lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_266_; 
v___x_263_ = lean_array_fset(v_ks_243_, v_x_240_, v_x_241_);
v___x_264_ = lean_array_fset(v_vs_244_, v_x_240_, v_x_242_);
lean_dec(v_x_240_);
if (v_isShared_247_ == 0)
{
lean_ctor_set(v___x_246_, 1, v___x_264_);
lean_ctor_set(v___x_246_, 0, v___x_263_);
v___x_266_ = v___x_246_;
goto v_reusejp_265_;
}
else
{
lean_object* v_reuseFailAlloc_267_; 
v_reuseFailAlloc_267_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_267_, 0, v___x_263_);
lean_ctor_set(v_reuseFailAlloc_267_, 1, v___x_264_);
v___x_266_ = v_reuseFailAlloc_267_;
goto v_reusejp_265_;
}
v_reusejp_265_:
{
return v___x_266_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19___redArg(lean_object* v_n_269_, lean_object* v_k_270_, lean_object* v_v_271_){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = lean_unsigned_to_nat(0u);
v___x_273_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19_spec__33___redArg(v_n_269_, v___x_272_, v_k_270_, v_v_271_);
return v___x_273_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__0(void){
_start:
{
size_t v___x_274_; size_t v___x_275_; size_t v___x_276_; 
v___x_274_ = ((size_t)5ULL);
v___x_275_ = ((size_t)1ULL);
v___x_276_ = lean_usize_shift_left(v___x_275_, v___x_274_);
return v___x_276_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__1(void){
_start:
{
size_t v___x_277_; size_t v___x_278_; size_t v___x_279_; 
v___x_277_ = ((size_t)1ULL);
v___x_278_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__0);
v___x_279_ = lean_usize_sub(v___x_278_, v___x_277_);
return v___x_279_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg(lean_object* v_x_281_, size_t v_x_282_, size_t v_x_283_, lean_object* v_x_284_, lean_object* v_x_285_){
_start:
{
if (lean_obj_tag(v_x_281_) == 0)
{
lean_object* v_es_286_; size_t v___x_287_; size_t v___x_288_; size_t v___x_289_; size_t v___x_290_; lean_object* v_j_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v_es_286_ = lean_ctor_get(v_x_281_, 0);
v___x_287_ = ((size_t)5ULL);
v___x_288_ = ((size_t)1ULL);
v___x_289_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__1);
v___x_290_ = lean_usize_land(v_x_282_, v___x_289_);
v_j_291_ = lean_usize_to_nat(v___x_290_);
v___x_292_ = lean_array_get_size(v_es_286_);
v___x_293_ = lean_nat_dec_lt(v_j_291_, v___x_292_);
if (v___x_293_ == 0)
{
lean_dec(v_j_291_);
lean_dec(v_x_285_);
lean_dec(v_x_284_);
return v_x_281_;
}
else
{
lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_330_; 
lean_inc_ref(v_es_286_);
v_isSharedCheck_330_ = !lean_is_exclusive(v_x_281_);
if (v_isSharedCheck_330_ == 0)
{
lean_object* v_unused_331_; 
v_unused_331_ = lean_ctor_get(v_x_281_, 0);
lean_dec(v_unused_331_);
v___x_295_ = v_x_281_;
v_isShared_296_ = v_isSharedCheck_330_;
goto v_resetjp_294_;
}
else
{
lean_dec(v_x_281_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_330_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v_v_297_; lean_object* v___x_298_; lean_object* v_xs_x27_299_; lean_object* v___y_301_; 
v_v_297_ = lean_array_fget(v_es_286_, v_j_291_);
v___x_298_ = lean_box(0);
v_xs_x27_299_ = lean_array_fset(v_es_286_, v_j_291_, v___x_298_);
switch(lean_obj_tag(v_v_297_))
{
case 0:
{
lean_object* v_key_306_; lean_object* v_val_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_317_; 
v_key_306_ = lean_ctor_get(v_v_297_, 0);
v_val_307_ = lean_ctor_get(v_v_297_, 1);
v_isSharedCheck_317_ = !lean_is_exclusive(v_v_297_);
if (v_isSharedCheck_317_ == 0)
{
v___x_309_ = v_v_297_;
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_val_307_);
lean_inc(v_key_306_);
lean_dec(v_v_297_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_317_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
uint8_t v___x_311_; 
v___x_311_ = l_Lean_instBEqMVarId_beq(v_x_284_, v_key_306_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; lean_object* v___x_313_; 
lean_del_object(v___x_309_);
v___x_312_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_306_, v_val_307_, v_x_284_, v_x_285_);
v___x_313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
v___y_301_ = v___x_313_;
goto v___jp_300_;
}
else
{
lean_object* v___x_315_; 
lean_dec(v_val_307_);
lean_dec(v_key_306_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 1, v_x_285_);
lean_ctor_set(v___x_309_, 0, v_x_284_);
v___x_315_ = v___x_309_;
goto v_reusejp_314_;
}
else
{
lean_object* v_reuseFailAlloc_316_; 
v_reuseFailAlloc_316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_316_, 0, v_x_284_);
lean_ctor_set(v_reuseFailAlloc_316_, 1, v_x_285_);
v___x_315_ = v_reuseFailAlloc_316_;
goto v_reusejp_314_;
}
v_reusejp_314_:
{
v___y_301_ = v___x_315_;
goto v___jp_300_;
}
}
}
}
case 1:
{
lean_object* v_node_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_328_; 
v_node_318_ = lean_ctor_get(v_v_297_, 0);
v_isSharedCheck_328_ = !lean_is_exclusive(v_v_297_);
if (v_isSharedCheck_328_ == 0)
{
v___x_320_ = v_v_297_;
v_isShared_321_ = v_isSharedCheck_328_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_node_318_);
lean_dec(v_v_297_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_328_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
size_t v___x_322_; size_t v___x_323_; lean_object* v___x_324_; lean_object* v___x_326_; 
v___x_322_ = lean_usize_shift_right(v_x_282_, v___x_287_);
v___x_323_ = lean_usize_add(v_x_283_, v___x_288_);
v___x_324_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg(v_node_318_, v___x_322_, v___x_323_, v_x_284_, v_x_285_);
if (v_isShared_321_ == 0)
{
lean_ctor_set(v___x_320_, 0, v___x_324_);
v___x_326_ = v___x_320_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_324_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
v___y_301_ = v___x_326_;
goto v___jp_300_;
}
}
}
default: 
{
lean_object* v___x_329_; 
v___x_329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_329_, 0, v_x_284_);
lean_ctor_set(v___x_329_, 1, v_x_285_);
v___y_301_ = v___x_329_;
goto v___jp_300_;
}
}
v___jp_300_:
{
lean_object* v___x_302_; lean_object* v___x_304_; 
v___x_302_ = lean_array_fset(v_xs_x27_299_, v_j_291_, v___y_301_);
lean_dec(v_j_291_);
if (v_isShared_296_ == 0)
{
lean_ctor_set(v___x_295_, 0, v___x_302_);
v___x_304_ = v___x_295_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v___x_302_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
else
{
lean_object* v_ks_332_; lean_object* v_vs_333_; lean_object* v___x_335_; uint8_t v_isShared_336_; uint8_t v_isSharedCheck_353_; 
v_ks_332_ = lean_ctor_get(v_x_281_, 0);
v_vs_333_ = lean_ctor_get(v_x_281_, 1);
v_isSharedCheck_353_ = !lean_is_exclusive(v_x_281_);
if (v_isSharedCheck_353_ == 0)
{
v___x_335_ = v_x_281_;
v_isShared_336_ = v_isSharedCheck_353_;
goto v_resetjp_334_;
}
else
{
lean_inc(v_vs_333_);
lean_inc(v_ks_332_);
lean_dec(v_x_281_);
v___x_335_ = lean_box(0);
v_isShared_336_ = v_isSharedCheck_353_;
goto v_resetjp_334_;
}
v_resetjp_334_:
{
lean_object* v___x_338_; 
if (v_isShared_336_ == 0)
{
v___x_338_ = v___x_335_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_ks_332_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_vs_333_);
v___x_338_ = v_reuseFailAlloc_352_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
lean_object* v_newNode_339_; uint8_t v___y_341_; size_t v___x_347_; uint8_t v___x_348_; 
v_newNode_339_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19___redArg(v___x_338_, v_x_284_, v_x_285_);
v___x_347_ = ((size_t)7ULL);
v___x_348_ = lean_usize_dec_le(v___x_347_, v_x_283_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_349_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_339_);
v___x_350_ = lean_unsigned_to_nat(4u);
v___x_351_ = lean_nat_dec_lt(v___x_349_, v___x_350_);
lean_dec(v___x_349_);
v___y_341_ = v___x_351_;
goto v___jp_340_;
}
else
{
v___y_341_ = v___x_348_;
goto v___jp_340_;
}
v___jp_340_:
{
if (v___y_341_ == 0)
{
lean_object* v_ks_342_; lean_object* v_vs_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_ks_342_ = lean_ctor_get(v_newNode_339_, 0);
lean_inc_ref(v_ks_342_);
v_vs_343_ = lean_ctor_get(v_newNode_339_, 1);
lean_inc_ref(v_vs_343_);
lean_dec_ref(v_newNode_339_);
v___x_344_ = lean_unsigned_to_nat(0u);
v___x_345_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___closed__2);
v___x_346_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20___redArg(v_x_283_, v_ks_342_, v_vs_343_, v___x_344_, v___x_345_);
lean_dec_ref(v_vs_343_);
lean_dec_ref(v_ks_342_);
return v___x_346_;
}
else
{
return v_newNode_339_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20___redArg(size_t v_depth_354_, lean_object* v_keys_355_, lean_object* v_vals_356_, lean_object* v_i_357_, lean_object* v_entries_358_){
_start:
{
lean_object* v___x_359_; uint8_t v___x_360_; 
v___x_359_ = lean_array_get_size(v_keys_355_);
v___x_360_ = lean_nat_dec_lt(v_i_357_, v___x_359_);
if (v___x_360_ == 0)
{
lean_dec(v_i_357_);
return v_entries_358_;
}
else
{
lean_object* v_k_361_; lean_object* v_v_362_; uint64_t v___x_363_; size_t v_h_364_; size_t v___x_365_; lean_object* v___x_366_; size_t v___x_367_; size_t v___x_368_; size_t v___x_369_; size_t v_h_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v_k_361_ = lean_array_fget_borrowed(v_keys_355_, v_i_357_);
v_v_362_ = lean_array_fget_borrowed(v_vals_356_, v_i_357_);
v___x_363_ = l_Lean_instHashableMVarId_hash(v_k_361_);
v_h_364_ = lean_uint64_to_usize(v___x_363_);
v___x_365_ = ((size_t)5ULL);
v___x_366_ = lean_unsigned_to_nat(1u);
v___x_367_ = ((size_t)1ULL);
v___x_368_ = lean_usize_sub(v_depth_354_, v___x_367_);
v___x_369_ = lean_usize_mul(v___x_365_, v___x_368_);
v_h_370_ = lean_usize_shift_right(v_h_364_, v___x_369_);
v___x_371_ = lean_nat_add(v_i_357_, v___x_366_);
lean_dec(v_i_357_);
lean_inc(v_v_362_);
lean_inc(v_k_361_);
v___x_372_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg(v_entries_358_, v_h_370_, v_depth_354_, v_k_361_, v_v_362_);
v_i_357_ = v___x_371_;
v_entries_358_ = v___x_372_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20___redArg___boxed(lean_object* v_depth_374_, lean_object* v_keys_375_, lean_object* v_vals_376_, lean_object* v_i_377_, lean_object* v_entries_378_){
_start:
{
size_t v_depth_boxed_379_; lean_object* v_res_380_; 
v_depth_boxed_379_ = lean_unbox_usize(v_depth_374_);
lean_dec(v_depth_374_);
v_res_380_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20___redArg(v_depth_boxed_379_, v_keys_375_, v_vals_376_, v_i_377_, v_entries_378_);
lean_dec_ref(v_vals_376_);
lean_dec_ref(v_keys_375_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg___boxed(lean_object* v_x_381_, lean_object* v_x_382_, lean_object* v_x_383_, lean_object* v_x_384_, lean_object* v_x_385_){
_start:
{
size_t v_x_67854__boxed_386_; size_t v_x_67855__boxed_387_; lean_object* v_res_388_; 
v_x_67854__boxed_386_ = lean_unbox_usize(v_x_382_);
lean_dec(v_x_382_);
v_x_67855__boxed_387_ = lean_unbox_usize(v_x_383_);
lean_dec(v_x_383_);
v_res_388_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg(v_x_381_, v_x_67854__boxed_386_, v_x_67855__boxed_387_, v_x_384_, v_x_385_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1___redArg(lean_object* v_x_389_, lean_object* v_x_390_, lean_object* v_x_391_){
_start:
{
uint64_t v___x_392_; size_t v___x_393_; size_t v___x_394_; lean_object* v___x_395_; 
v___x_392_ = l_Lean_instHashableMVarId_hash(v_x_390_);
v___x_393_ = lean_uint64_to_usize(v___x_392_);
v___x_394_ = ((size_t)1ULL);
v___x_395_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg(v_x_389_, v___x_393_, v___x_394_, v_x_390_, v_x_391_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1___redArg(lean_object* v_mvarId_396_, lean_object* v_val_397_, lean_object* v___y_398_){
_start:
{
lean_object* v___x_400_; lean_object* v_mctx_401_; lean_object* v_cache_402_; lean_object* v_zetaDeltaFVarIds_403_; lean_object* v_postponed_404_; lean_object* v_diag_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_433_; 
v___x_400_ = lean_st_ref_take(v___y_398_);
v_mctx_401_ = lean_ctor_get(v___x_400_, 0);
v_cache_402_ = lean_ctor_get(v___x_400_, 1);
v_zetaDeltaFVarIds_403_ = lean_ctor_get(v___x_400_, 2);
v_postponed_404_ = lean_ctor_get(v___x_400_, 3);
v_diag_405_ = lean_ctor_get(v___x_400_, 4);
v_isSharedCheck_433_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_433_ == 0)
{
v___x_407_ = v___x_400_;
v_isShared_408_ = v_isSharedCheck_433_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_diag_405_);
lean_inc(v_postponed_404_);
lean_inc(v_zetaDeltaFVarIds_403_);
lean_inc(v_cache_402_);
lean_inc(v_mctx_401_);
lean_dec(v___x_400_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_433_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v_depth_409_; lean_object* v_levelAssignDepth_410_; lean_object* v_lmvarCounter_411_; lean_object* v_mvarCounter_412_; lean_object* v_lDecls_413_; lean_object* v_decls_414_; lean_object* v_userNames_415_; lean_object* v_lAssignment_416_; lean_object* v_eAssignment_417_; lean_object* v_dAssignment_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_432_; 
v_depth_409_ = lean_ctor_get(v_mctx_401_, 0);
v_levelAssignDepth_410_ = lean_ctor_get(v_mctx_401_, 1);
v_lmvarCounter_411_ = lean_ctor_get(v_mctx_401_, 2);
v_mvarCounter_412_ = lean_ctor_get(v_mctx_401_, 3);
v_lDecls_413_ = lean_ctor_get(v_mctx_401_, 4);
v_decls_414_ = lean_ctor_get(v_mctx_401_, 5);
v_userNames_415_ = lean_ctor_get(v_mctx_401_, 6);
v_lAssignment_416_ = lean_ctor_get(v_mctx_401_, 7);
v_eAssignment_417_ = lean_ctor_get(v_mctx_401_, 8);
v_dAssignment_418_ = lean_ctor_get(v_mctx_401_, 9);
v_isSharedCheck_432_ = !lean_is_exclusive(v_mctx_401_);
if (v_isSharedCheck_432_ == 0)
{
v___x_420_ = v_mctx_401_;
v_isShared_421_ = v_isSharedCheck_432_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_dAssignment_418_);
lean_inc(v_eAssignment_417_);
lean_inc(v_lAssignment_416_);
lean_inc(v_userNames_415_);
lean_inc(v_decls_414_);
lean_inc(v_lDecls_413_);
lean_inc(v_mvarCounter_412_);
lean_inc(v_lmvarCounter_411_);
lean_inc(v_levelAssignDepth_410_);
lean_inc(v_depth_409_);
lean_dec(v_mctx_401_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_432_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_422_; lean_object* v___x_424_; 
v___x_422_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1___redArg(v_eAssignment_417_, v_mvarId_396_, v_val_397_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 8, v___x_422_);
v___x_424_ = v___x_420_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_depth_409_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v_levelAssignDepth_410_);
lean_ctor_set(v_reuseFailAlloc_431_, 2, v_lmvarCounter_411_);
lean_ctor_set(v_reuseFailAlloc_431_, 3, v_mvarCounter_412_);
lean_ctor_set(v_reuseFailAlloc_431_, 4, v_lDecls_413_);
lean_ctor_set(v_reuseFailAlloc_431_, 5, v_decls_414_);
lean_ctor_set(v_reuseFailAlloc_431_, 6, v_userNames_415_);
lean_ctor_set(v_reuseFailAlloc_431_, 7, v_lAssignment_416_);
lean_ctor_set(v_reuseFailAlloc_431_, 8, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_431_, 9, v_dAssignment_418_);
v___x_424_ = v_reuseFailAlloc_431_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
lean_object* v___x_426_; 
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_424_);
v___x_426_ = v___x_407_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_cache_402_);
lean_ctor_set(v_reuseFailAlloc_430_, 2, v_zetaDeltaFVarIds_403_);
lean_ctor_set(v_reuseFailAlloc_430_, 3, v_postponed_404_);
lean_ctor_set(v_reuseFailAlloc_430_, 4, v_diag_405_);
v___x_426_ = v_reuseFailAlloc_430_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_427_ = lean_st_ref_set(v___y_398_, v___x_426_);
v___x_428_ = lean_box(0);
v___x_429_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
return v___x_429_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1___redArg___boxed(lean_object* v_mvarId_434_, lean_object* v_val_435_, lean_object* v___y_436_, lean_object* v___y_437_){
_start:
{
lean_object* v_res_438_; 
v_res_438_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1___redArg(v_mvarId_434_, v_val_435_, v___y_436_);
lean_dec(v___y_436_);
return v_res_438_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4_spec__5(lean_object* v_msgData_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v___x_445_; lean_object* v_env_446_; lean_object* v___x_447_; lean_object* v_mctx_448_; lean_object* v_lctx_449_; lean_object* v_options_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_445_ = lean_st_ref_get(v___y_443_);
v_env_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc_ref(v_env_446_);
lean_dec(v___x_445_);
v___x_447_ = lean_st_ref_get(v___y_441_);
v_mctx_448_ = lean_ctor_get(v___x_447_, 0);
lean_inc_ref(v_mctx_448_);
lean_dec(v___x_447_);
v_lctx_449_ = lean_ctor_get(v___y_440_, 2);
v_options_450_ = lean_ctor_get(v___y_442_, 2);
lean_inc_ref(v_options_450_);
lean_inc_ref(v_lctx_449_);
v___x_451_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_451_, 0, v_env_446_);
lean_ctor_set(v___x_451_, 1, v_mctx_448_);
lean_ctor_set(v___x_451_, 2, v_lctx_449_);
lean_ctor_set(v___x_451_, 3, v_options_450_);
v___x_452_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_451_);
lean_ctor_set(v___x_452_, 1, v_msgData_439_);
v___x_453_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4_spec__5___boxed(lean_object* v_msgData_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4_spec__5(v_msgData_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___redArg(lean_object* v_msg_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v_ref_467_; lean_object* v___x_468_; lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_477_; 
v_ref_467_ = lean_ctor_get(v___y_464_, 5);
v___x_468_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4_spec__5(v_msg_461_, v___y_462_, v___y_463_, v___y_464_, v___y_465_);
v_a_469_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_477_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_477_ == 0)
{
v___x_471_ = v___x_468_;
v_isShared_472_ = v_isSharedCheck_477_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_468_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_477_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v___x_475_; 
lean_inc(v_ref_467_);
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v_ref_467_);
lean_ctor_set(v___x_473_, 1, v_a_469_);
if (v_isShared_472_ == 0)
{
lean_ctor_set_tag(v___x_471_, 1);
lean_ctor_set(v___x_471_, 0, v___x_473_);
v___x_475_ = v___x_471_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_473_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___redArg___boxed(lean_object* v_msg_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___redArg(v_msg_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
return v_res_484_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__7(void){
_start:
{
lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v___x_494_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__6));
v___x_495_ = lean_unsigned_to_nat(14u);
v___x_496_ = lean_unsigned_to_nat(22u);
v___x_497_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__5));
v___x_498_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__4));
v___x_499_ = l_mkPanicMessageWithDecl(v___x_498_, v___x_497_, v___x_496_, v___x_495_, v___x_494_);
return v___x_499_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__9(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_501_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__8));
v___x_502_ = l_Lean_stringToMessageData(v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3(lean_object* v___x_503_, lean_object* v___x_504_, lean_object* v___x_505_, lean_object* v___x_506_, lean_object* v_subgoalHyps_507_, lean_object* v___f_508_, uint8_t v___x_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v___name_512_, lean_object* v_bodyType_513_, lean_object* v_idx_514_, lean_object* v_altFVars_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v___y_522_; lean_object* v___y_523_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___y_526_; lean_object* v___y_527_; lean_object* v___y_528_; lean_object* v___y_529_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_537_ = l_Lean_Expr_getAppNumArgs(v_bodyType_513_);
v___x_538_ = lean_nat_sub(v___x_537_, v___x_503_);
lean_dec(v___x_537_);
v___x_539_ = lean_nat_sub(v___x_538_, v___x_504_);
lean_dec(v___x_538_);
v___x_540_ = l_Lean_Expr_getRevArg_x21(v_bodyType_513_, v___x_539_);
v___x_541_ = lean_unsigned_to_nat(8u);
v___x_542_ = l_Lean_Expr_getAppNumArgs(v___x_540_);
v___x_543_ = lean_nat_sub(v___x_542_, v___x_541_);
lean_dec(v___x_542_);
v___x_544_ = lean_nat_sub(v___x_543_, v___x_504_);
lean_dec(v___x_543_);
v___x_545_ = l_Lean_Expr_getRevArg_x21(v___x_540_, v___x_544_);
lean_dec_ref(v___x_540_);
lean_inc(v_idx_514_);
v___x_546_ = l_Lean_Elab_Tactic_Do_rwIfOrMatcher(v_idx_514_, v___x_545_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
if (lean_obj_tag(v___x_546_) == 0)
{
lean_object* v_a_547_; lean_object* v_expr_548_; lean_object* v_proof_x3f_549_; lean_object* v___y_551_; lean_object* v___y_552_; lean_object* v___y_553_; lean_object* v___y_554_; 
v_a_547_ = lean_ctor_get(v___x_546_, 0);
lean_inc(v_a_547_);
lean_dec_ref_known(v___x_546_, 1);
v_expr_548_ = lean_ctor_get(v_a_547_, 0);
lean_inc_ref(v_expr_548_);
v_proof_x3f_549_ = lean_ctor_get(v_a_547_, 1);
lean_inc(v_proof_x3f_549_);
lean_dec(v_a_547_);
if (lean_obj_tag(v_proof_x3f_549_) == 0)
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v_a_583_; lean_object* v___x_585_; uint8_t v_isShared_586_; uint8_t v_isSharedCheck_590_; 
lean_dec_ref(v_expr_548_);
lean_dec_ref(v_altFVars_515_);
lean_dec_ref(v_a_511_);
lean_dec_ref(v___f_508_);
lean_dec_ref(v___x_505_);
lean_dec(v___x_504_);
v___x_577_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__9, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__9_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__9);
v___x_578_ = l_Nat_reprFast(v_idx_514_);
v___x_579_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
v___x_580_ = l_Lean_MessageData_ofFormat(v___x_579_);
v___x_581_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_581_, 0, v___x_577_);
lean_ctor_set(v___x_581_, 1, v___x_580_);
v___x_582_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___redArg(v___x_581_, v___y_516_, v___y_517_, v___y_518_, v___y_519_);
v_a_583_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_590_ == 0)
{
v___x_585_ = v___x_582_;
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
else
{
lean_inc(v_a_583_);
lean_dec(v___x_582_);
v___x_585_ = lean_box(0);
v_isShared_586_ = v_isSharedCheck_590_;
goto v_resetjp_584_;
}
v_resetjp_584_:
{
lean_object* v___x_588_; 
if (v_isShared_586_ == 0)
{
v___x_588_ = v___x_585_;
goto v_reusejp_587_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_a_583_);
v___x_588_ = v_reuseFailAlloc_589_;
goto v_reusejp_587_;
}
v_reusejp_587_:
{
return v___x_588_;
}
}
}
else
{
v___y_551_ = v___y_516_;
v___y_552_ = v___y_517_;
v___y_553_ = v___y_518_;
v___y_554_ = v___y_519_;
goto v___jp_550_;
}
v___jp_550_:
{
lean_object* v___x_555_; lean_object* v___x_556_; uint8_t v___x_557_; uint8_t v___x_558_; lean_object* v___x_559_; 
v___x_555_ = l_Lean_Meta_MatcherApp_TransformAltFVars_all(v_altFVars_515_);
lean_inc_ref(v___f_508_);
v___x_556_ = lean_apply_1(v___f_508_, v_expr_548_);
v___x_557_ = 0;
v___x_558_ = 1;
v___x_559_ = l_Lean_Meta_mkForallFVars(v___x_555_, v___x_556_, v___x_557_, v___x_509_, v___x_509_, v___x_558_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
if (lean_obj_tag(v___x_559_) == 0)
{
lean_object* v_a_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___f_567_; lean_object* v___x_568_; uint8_t v___x_569_; uint8_t v___x_570_; lean_object* v___x_571_; 
v_a_560_ = lean_ctor_get(v___x_559_, 0);
lean_inc(v_a_560_);
lean_dec_ref_known(v___x_559_, 1);
v___x_561_ = lean_array_get_borrowed(v___x_506_, v_a_510_, v_idx_514_);
v___x_562_ = l_Lean_Expr_mvarId_x21(v___x_561_);
v___x_563_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1___redArg(v___x_562_, v_a_560_, v___y_552_);
lean_dec_ref(v___x_563_);
v___x_564_ = lean_box(v___x_557_);
v___x_565_ = lean_box(v___x_509_);
v___x_566_ = lean_box(v___x_558_);
v___f_567_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__2___boxed), 11, 5);
lean_closure_set(v___f_567_, 0, v___x_504_);
lean_closure_set(v___f_567_, 1, v___f_508_);
lean_closure_set(v___f_567_, 2, v___x_564_);
lean_closure_set(v___f_567_, 3, v___x_565_);
lean_closure_set(v___f_567_, 4, v___x_566_);
v___x_568_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__1));
v___x_569_ = 0;
v___x_570_ = 0;
v___x_571_ = l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg(v___x_568_, v___x_569_, v_a_511_, v___f_567_, v___x_570_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v_a_572_; lean_object* v___x_573_; 
v_a_572_ = lean_ctor_get(v___x_571_, 0);
lean_inc(v_a_572_);
lean_dec_ref_known(v___x_571_, 1);
v___x_573_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__3));
if (lean_obj_tag(v_proof_x3f_549_) == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; 
v___x_574_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__7, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__7_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___closed__7);
v___x_575_ = l_panic___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__3(v___x_574_);
v___y_522_ = v___y_552_;
v___y_523_ = v___y_553_;
v___y_524_ = v___x_573_;
v___y_525_ = v___y_551_;
v___y_526_ = v___y_554_;
v___y_527_ = v___x_555_;
v___y_528_ = v_a_572_;
v___y_529_ = v___x_575_;
goto v___jp_521_;
}
else
{
lean_object* v_val_576_; 
v_val_576_ = lean_ctor_get(v_proof_x3f_549_, 0);
lean_inc(v_val_576_);
lean_dec_ref_known(v_proof_x3f_549_, 1);
v___y_522_ = v___y_552_;
v___y_523_ = v___y_553_;
v___y_524_ = v___x_573_;
v___y_525_ = v___y_551_;
v___y_526_ = v___y_554_;
v___y_527_ = v___x_555_;
v___y_528_ = v_a_572_;
v___y_529_ = v_val_576_;
goto v___jp_521_;
}
}
else
{
lean_dec_ref(v___x_555_);
lean_dec(v_proof_x3f_549_);
lean_dec(v_idx_514_);
lean_dec_ref(v___x_505_);
return v___x_571_;
}
}
else
{
lean_dec_ref(v___x_555_);
lean_dec(v_proof_x3f_549_);
lean_dec(v_idx_514_);
lean_dec_ref(v_a_511_);
lean_dec_ref(v___f_508_);
lean_dec_ref(v___x_505_);
lean_dec(v___x_504_);
return v___x_559_;
}
}
}
else
{
lean_object* v_a_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_598_; 
lean_dec_ref(v_altFVars_515_);
lean_dec(v_idx_514_);
lean_dec_ref(v_a_511_);
lean_dec_ref(v___f_508_);
lean_dec_ref(v___x_505_);
lean_dec(v___x_504_);
v_a_591_ = lean_ctor_get(v___x_546_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_546_);
if (v_isSharedCheck_598_ == 0)
{
v___x_593_ = v___x_546_;
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_a_591_);
lean_dec(v___x_546_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_598_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_a_591_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
v___jp_521_:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_530_ = lean_array_push(v___x_505_, v___y_528_);
v___x_531_ = lean_array_push(v___x_530_, v___y_529_);
lean_inc(v___y_524_);
v___x_532_ = l_Lean_Meta_mkAppM(v___y_524_, v___x_531_, v___y_525_, v___y_522_, v___y_523_, v___y_526_);
if (lean_obj_tag(v___x_532_) == 0)
{
lean_object* v_a_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
v_a_533_ = lean_ctor_get(v___x_532_, 0);
lean_inc(v_a_533_);
lean_dec_ref_known(v___x_532_, 1);
v___x_534_ = lean_array_get_borrowed(v___x_506_, v_subgoalHyps_507_, v_idx_514_);
lean_dec(v_idx_514_);
lean_inc(v___x_534_);
v___x_535_ = l_Lean_mkAppN(v___x_534_, v___y_527_);
lean_dec_ref(v___y_527_);
v___x_536_ = l_Lean_Meta_mkEqMPR(v_a_533_, v___x_535_, v___y_525_, v___y_522_, v___y_523_, v___y_526_);
return v___x_536_;
}
else
{
lean_dec_ref(v___y_527_);
lean_dec(v_idx_514_);
return v___x_532_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___boxed(lean_object** _args){
lean_object* v___x_599_ = _args[0];
lean_object* v___x_600_ = _args[1];
lean_object* v___x_601_ = _args[2];
lean_object* v___x_602_ = _args[3];
lean_object* v_subgoalHyps_603_ = _args[4];
lean_object* v___f_604_ = _args[5];
lean_object* v___x_605_ = _args[6];
lean_object* v_a_606_ = _args[7];
lean_object* v_a_607_ = _args[8];
lean_object* v___name_608_ = _args[9];
lean_object* v_bodyType_609_ = _args[10];
lean_object* v_idx_610_ = _args[11];
lean_object* v_altFVars_611_ = _args[12];
lean_object* v___y_612_ = _args[13];
lean_object* v___y_613_ = _args[14];
lean_object* v___y_614_ = _args[15];
lean_object* v___y_615_ = _args[16];
lean_object* v___y_616_ = _args[17];
_start:
{
uint8_t v___x_68175__boxed_617_; lean_object* v_res_618_; 
v___x_68175__boxed_617_ = lean_unbox(v___x_605_);
v_res_618_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3(v___x_599_, v___x_600_, v___x_601_, v___x_602_, v_subgoalHyps_603_, v___f_604_, v___x_68175__boxed_617_, v_a_606_, v_a_607_, v___name_608_, v_bodyType_609_, v_idx_610_, v_altFVars_611_, v___y_612_, v___y_613_, v___y_614_, v___y_615_);
lean_dec(v___y_615_);
lean_dec_ref(v___y_614_);
lean_dec(v___y_613_);
lean_dec_ref(v___y_612_);
lean_dec_ref(v_bodyType_609_);
lean_dec(v___name_608_);
lean_dec_ref(v_a_606_);
lean_dec_ref(v_subgoalHyps_603_);
lean_dec_ref(v___x_602_);
lean_dec(v___x_599_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__7(lean_object* v_mask_619_, lean_object* v_a_620_, lean_object* v_xs_621_, lean_object* v___body_622_, lean_object* v___y_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_628_ = l_Array_mask___redArg(v_mask_619_, v_xs_621_);
v___x_629_ = lean_expr_instantiate_rev(v_a_620_, v___x_628_);
lean_dec(v___x_628_);
v___x_630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__7___boxed(lean_object* v_mask_631_, lean_object* v_a_632_, lean_object* v_xs_633_, lean_object* v___body_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
lean_object* v_res_640_; 
v_res_640_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__7(v_mask_631_, v_a_632_, v_xs_633_, v___body_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_);
lean_dec(v___y_638_);
lean_dec_ref(v___y_637_);
lean_dec(v___y_636_);
lean_dec_ref(v___y_635_);
lean_dec_ref(v___body_634_);
lean_dec_ref(v_a_632_);
lean_dec_ref(v_mask_631_);
return v_res_640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1(lean_object* v___x_646_, lean_object* v_onAlt_647_, lean_object* v_resTy_648_, uint8_t v_useSplitter_649_, lean_object* v_h_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_){
_start:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_656_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__1));
v___x_657_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2));
v___x_658_ = lean_mk_empty_array_with_capacity(v___x_646_);
v___x_659_ = lean_array_push(v___x_658_, v_h_650_);
lean_inc_ref(v___x_659_);
v___x_660_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_660_, 0, v___x_657_);
lean_ctor_set(v___x_660_, 1, v___x_659_);
lean_ctor_set(v___x_660_, 2, v___x_657_);
lean_ctor_set(v___x_660_, 3, v___x_657_);
lean_ctor_set(v___x_660_, 4, v___x_657_);
lean_inc(v___y_654_);
lean_inc_ref(v___y_653_);
lean_inc(v___y_652_);
lean_inc_ref(v___y_651_);
v___x_661_ = lean_apply_9(v_onAlt_647_, v___x_656_, v_resTy_648_, v___x_646_, v___x_660_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, lean_box(0));
if (lean_obj_tag(v___x_661_) == 0)
{
lean_object* v_a_662_; uint8_t v___x_663_; uint8_t v___x_664_; lean_object* v___x_665_; 
v_a_662_ = lean_ctor_get(v___x_661_, 0);
lean_inc(v_a_662_);
lean_dec_ref_known(v___x_661_, 1);
v___x_663_ = 0;
v___x_664_ = 1;
v___x_665_ = l_Lean_Meta_mkLambdaFVars(v___x_659_, v_a_662_, v___x_663_, v_useSplitter_649_, v___x_663_, v_useSplitter_649_, v___x_664_, v___y_651_, v___y_652_, v___y_653_, v___y_654_);
lean_dec_ref(v___x_659_);
return v___x_665_;
}
else
{
lean_dec_ref(v___x_659_);
return v___x_661_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___boxed(lean_object* v___x_666_, lean_object* v_onAlt_667_, lean_object* v_resTy_668_, lean_object* v_useSplitter_669_, lean_object* v_h_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
uint8_t v_useSplitter_boxed_676_; lean_object* v_res_677_; 
v_useSplitter_boxed_676_ = lean_unbox(v_useSplitter_669_);
v_res_677_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1(v___x_666_, v_onAlt_667_, v_resTy_668_, v_useSplitter_boxed_676_, v_h_670_, v___y_671_, v___y_672_, v___y_673_, v___y_674_);
lean_dec(v___y_674_);
lean_dec_ref(v___y_673_);
lean_dec(v___y_672_);
lean_dec_ref(v___y_671_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__14(uint8_t v_addEqualities_680_, lean_object* v_as_681_, size_t v_sz_682_, size_t v_i_683_, lean_object* v_b_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_){
_start:
{
lean_object* v_a_691_; uint8_t v___x_695_; 
v___x_695_ = lean_usize_dec_lt(v_i_683_, v_sz_682_);
if (v___x_695_ == 0)
{
lean_object* v___x_696_; 
v___x_696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_696_, 0, v_b_684_);
return v___x_696_;
}
else
{
lean_object* v_snd_697_; lean_object* v_snd_698_; lean_object* v_snd_699_; lean_object* v_snd_700_; lean_object* v_fst_701_; lean_object* v___x_703_; uint8_t v_isShared_704_; uint8_t v_isSharedCheck_847_; 
v_snd_697_ = lean_ctor_get(v_b_684_, 1);
lean_inc(v_snd_697_);
v_snd_698_ = lean_ctor_get(v_snd_697_, 1);
lean_inc(v_snd_698_);
v_snd_699_ = lean_ctor_get(v_snd_698_, 1);
lean_inc(v_snd_699_);
v_snd_700_ = lean_ctor_get(v_snd_699_, 1);
lean_inc(v_snd_700_);
v_fst_701_ = lean_ctor_get(v_b_684_, 0);
v_isSharedCheck_847_ = !lean_is_exclusive(v_b_684_);
if (v_isSharedCheck_847_ == 0)
{
lean_object* v_unused_848_; 
v_unused_848_ = lean_ctor_get(v_b_684_, 1);
lean_dec(v_unused_848_);
v___x_703_ = v_b_684_;
v_isShared_704_ = v_isSharedCheck_847_;
goto v_resetjp_702_;
}
else
{
lean_inc(v_fst_701_);
lean_dec(v_b_684_);
v___x_703_ = lean_box(0);
v_isShared_704_ = v_isSharedCheck_847_;
goto v_resetjp_702_;
}
v_resetjp_702_:
{
lean_object* v_fst_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_845_; 
v_fst_705_ = lean_ctor_get(v_snd_697_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v_snd_697_);
if (v_isSharedCheck_845_ == 0)
{
lean_object* v_unused_846_; 
v_unused_846_ = lean_ctor_get(v_snd_697_, 1);
lean_dec(v_unused_846_);
v___x_707_ = v_snd_697_;
v_isShared_708_ = v_isSharedCheck_845_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_fst_705_);
lean_dec(v_snd_697_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_845_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v_fst_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_843_; 
v_fst_709_ = lean_ctor_get(v_snd_698_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v_snd_698_);
if (v_isSharedCheck_843_ == 0)
{
lean_object* v_unused_844_; 
v_unused_844_ = lean_ctor_get(v_snd_698_, 1);
lean_dec(v_unused_844_);
v___x_711_ = v_snd_698_;
v_isShared_712_ = v_isSharedCheck_843_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_fst_709_);
lean_dec(v_snd_698_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_843_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v_fst_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_841_; 
v_fst_713_ = lean_ctor_get(v_snd_699_, 0);
v_isSharedCheck_841_ = !lean_is_exclusive(v_snd_699_);
if (v_isSharedCheck_841_ == 0)
{
lean_object* v_unused_842_; 
v_unused_842_ = lean_ctor_get(v_snd_699_, 1);
lean_dec(v_unused_842_);
v___x_715_ = v_snd_699_;
v_isShared_716_ = v_isSharedCheck_841_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_fst_713_);
lean_dec(v_snd_699_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_841_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v_array_717_; lean_object* v_start_718_; lean_object* v_stop_719_; uint8_t v___x_720_; 
v_array_717_ = lean_ctor_get(v_snd_700_, 0);
v_start_718_ = lean_ctor_get(v_snd_700_, 1);
v_stop_719_ = lean_ctor_get(v_snd_700_, 2);
v___x_720_ = lean_nat_dec_lt(v_start_718_, v_stop_719_);
if (v___x_720_ == 0)
{
lean_object* v___x_722_; 
if (v_isShared_716_ == 0)
{
v___x_722_ = v___x_715_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_fst_713_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_snd_700_);
v___x_722_ = v_reuseFailAlloc_733_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
lean_object* v___x_724_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_722_);
v___x_724_ = v___x_711_;
goto v_reusejp_723_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v_fst_709_);
lean_ctor_set(v_reuseFailAlloc_732_, 1, v___x_722_);
v___x_724_ = v_reuseFailAlloc_732_;
goto v_reusejp_723_;
}
v_reusejp_723_:
{
lean_object* v___x_726_; 
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v___x_724_);
v___x_726_ = v___x_707_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_fst_705_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v___x_724_);
v___x_726_ = v_reuseFailAlloc_731_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_728_; 
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 1, v___x_726_);
v___x_728_ = v___x_703_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_fst_701_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v___x_726_);
v___x_728_ = v_reuseFailAlloc_730_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_729_; 
v___x_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
return v___x_729_;
}
}
}
}
}
else
{
lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_837_; 
lean_inc(v_stop_719_);
lean_inc(v_start_718_);
lean_inc_ref(v_array_717_);
v_isSharedCheck_837_ = !lean_is_exclusive(v_snd_700_);
if (v_isSharedCheck_837_ == 0)
{
lean_object* v_unused_838_; lean_object* v_unused_839_; lean_object* v_unused_840_; 
v_unused_838_ = lean_ctor_get(v_snd_700_, 2);
lean_dec(v_unused_838_);
v_unused_839_ = lean_ctor_get(v_snd_700_, 1);
lean_dec(v_unused_839_);
v_unused_840_ = lean_ctor_get(v_snd_700_, 0);
lean_dec(v_unused_840_);
v___x_735_ = v_snd_700_;
v_isShared_736_ = v_isSharedCheck_837_;
goto v_resetjp_734_;
}
else
{
lean_dec(v_snd_700_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_837_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v_array_737_; lean_object* v_start_738_; lean_object* v_stop_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_744_; 
v_array_737_ = lean_ctor_get(v_fst_713_, 0);
v_start_738_ = lean_ctor_get(v_fst_713_, 1);
v_stop_739_ = lean_ctor_get(v_fst_713_, 2);
v___x_740_ = lean_array_fget(v_array_717_, v_start_718_);
v___x_741_ = lean_unsigned_to_nat(1u);
v___x_742_ = lean_nat_add(v_start_718_, v___x_741_);
lean_dec(v_start_718_);
if (v_isShared_736_ == 0)
{
lean_ctor_set(v___x_735_, 1, v___x_742_);
v___x_744_ = v___x_735_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_array_717_);
lean_ctor_set(v_reuseFailAlloc_836_, 1, v___x_742_);
lean_ctor_set(v_reuseFailAlloc_836_, 2, v_stop_719_);
v___x_744_ = v_reuseFailAlloc_836_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
uint8_t v___x_745_; 
v___x_745_ = lean_nat_dec_lt(v_start_738_, v_stop_739_);
if (v___x_745_ == 0)
{
lean_object* v___x_747_; 
lean_dec(v___x_740_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_744_);
v___x_747_ = v___x_715_;
goto v_reusejp_746_;
}
else
{
lean_object* v_reuseFailAlloc_758_; 
v_reuseFailAlloc_758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_758_, 0, v_fst_713_);
lean_ctor_set(v_reuseFailAlloc_758_, 1, v___x_744_);
v___x_747_ = v_reuseFailAlloc_758_;
goto v_reusejp_746_;
}
v_reusejp_746_:
{
lean_object* v___x_749_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_747_);
v___x_749_ = v___x_711_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_fst_709_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v___x_747_);
v___x_749_ = v_reuseFailAlloc_757_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
lean_object* v___x_751_; 
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v___x_749_);
v___x_751_ = v___x_707_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_fst_705_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v___x_749_);
v___x_751_ = v_reuseFailAlloc_756_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
lean_object* v___x_753_; 
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 1, v___x_751_);
v___x_753_ = v___x_703_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_fst_701_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v___x_751_);
v___x_753_ = v_reuseFailAlloc_755_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_754_; 
v___x_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_754_, 0, v___x_753_);
return v___x_754_;
}
}
}
}
}
else
{
lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_832_; 
lean_inc(v_stop_739_);
lean_inc(v_start_738_);
lean_inc_ref(v_array_737_);
v_isSharedCheck_832_ = !lean_is_exclusive(v_fst_713_);
if (v_isSharedCheck_832_ == 0)
{
lean_object* v_unused_833_; lean_object* v_unused_834_; lean_object* v_unused_835_; 
v_unused_833_ = lean_ctor_get(v_fst_713_, 2);
lean_dec(v_unused_833_);
v_unused_834_ = lean_ctor_get(v_fst_713_, 1);
lean_dec(v_unused_834_);
v_unused_835_ = lean_ctor_get(v_fst_713_, 0);
lean_dec(v_unused_835_);
v___x_760_ = v_fst_713_;
v_isShared_761_ = v_isSharedCheck_832_;
goto v_resetjp_759_;
}
else
{
lean_dec(v_fst_713_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_832_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_765_; 
v___x_762_ = lean_array_fget(v_array_737_, v_start_738_);
v___x_763_ = lean_nat_add(v_start_738_, v___x_741_);
lean_dec(v_start_738_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 1, v___x_763_);
v___x_765_ = v___x_760_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_array_737_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v___x_763_);
lean_ctor_set(v_reuseFailAlloc_831_, 2, v_stop_739_);
v___x_765_ = v_reuseFailAlloc_831_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
if (v_addEqualities_680_ == 0)
{
lean_dec(v___x_762_);
goto v___jp_766_;
}
else
{
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_782_; lean_object* v___x_783_; 
lean_del_object(v___x_715_);
lean_del_object(v___x_711_);
lean_del_object(v___x_707_);
lean_del_object(v___x_703_);
v_a_782_ = lean_array_uget_borrowed(v_as_681_, v_i_683_);
lean_inc(v_a_782_);
v___x_783_ = l_Lean_Meta_isProof(v_a_782_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
if (lean_obj_tag(v___x_783_) == 0)
{
lean_object* v_a_784_; uint8_t v___x_785_; 
v_a_784_ = lean_ctor_get(v___x_783_, 0);
lean_inc(v_a_784_);
lean_dec_ref_known(v___x_783_, 1);
v___x_785_ = lean_unbox(v_a_784_);
lean_dec(v_a_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
lean_inc(v_a_782_);
v___x_786_ = l_Lean_Meta_mkEqHEq(v___x_762_, v_a_782_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
if (lean_obj_tag(v___x_786_) == 0)
{
lean_object* v_a_787_; lean_object* v___x_788_; 
v_a_787_ = lean_ctor_get(v___x_786_, 0);
lean_inc_n(v_a_787_, 2);
lean_dec_ref_known(v___x_786_, 1);
v___x_788_ = l_Lean_mkArrow(v_a_787_, v_fst_701_, v___y_687_, v___y_688_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; uint8_t v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; 
v_a_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_788_, 1);
v___x_790_ = l_Lean_Expr_isHEq(v_a_787_);
lean_dec(v_a_787_);
v___x_791_ = lean_box(v___x_790_);
v___x_792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_792_, 0, v___x_791_);
v___x_793_ = lean_array_push(v_fst_705_, v___x_792_);
v___x_794_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__14___closed__0));
v___x_795_ = lean_array_push(v_fst_709_, v___x_794_);
v___x_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_765_);
lean_ctor_set(v___x_796_, 1, v___x_744_);
v___x_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_797_, 0, v___x_795_);
lean_ctor_set(v___x_797_, 1, v___x_796_);
v___x_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_798_, 0, v___x_793_);
lean_ctor_set(v___x_798_, 1, v___x_797_);
v___x_799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_799_, 0, v_a_789_);
lean_ctor_set(v___x_799_, 1, v___x_798_);
v_a_691_ = v___x_799_;
goto v___jp_690_;
}
else
{
lean_object* v_a_800_; lean_object* v___x_802_; uint8_t v_isShared_803_; uint8_t v_isSharedCheck_807_; 
lean_dec(v_a_787_);
lean_dec_ref(v___x_765_);
lean_dec_ref(v___x_744_);
lean_dec(v_fst_709_);
lean_dec(v_fst_705_);
v_a_800_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_807_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_807_ == 0)
{
v___x_802_ = v___x_788_;
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
else
{
lean_inc(v_a_800_);
lean_dec(v___x_788_);
v___x_802_ = lean_box(0);
v_isShared_803_ = v_isSharedCheck_807_;
goto v_resetjp_801_;
}
v_resetjp_801_:
{
lean_object* v___x_805_; 
if (v_isShared_803_ == 0)
{
v___x_805_ = v___x_802_;
goto v_reusejp_804_;
}
else
{
lean_object* v_reuseFailAlloc_806_; 
v_reuseFailAlloc_806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_806_, 0, v_a_800_);
v___x_805_ = v_reuseFailAlloc_806_;
goto v_reusejp_804_;
}
v_reusejp_804_:
{
return v___x_805_;
}
}
}
}
else
{
lean_object* v_a_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_815_; 
lean_dec_ref(v___x_765_);
lean_dec_ref(v___x_744_);
lean_dec(v_fst_709_);
lean_dec(v_fst_705_);
lean_dec(v_fst_701_);
v_a_808_ = lean_ctor_get(v___x_786_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_786_);
if (v_isSharedCheck_815_ == 0)
{
v___x_810_ = v___x_786_;
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_a_808_);
lean_dec(v___x_786_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_815_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_813_; 
if (v_isShared_811_ == 0)
{
v___x_813_ = v___x_810_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v_a_808_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
}
else
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
lean_dec(v___x_762_);
v___x_816_ = lean_box(0);
v___x_817_ = lean_array_push(v_fst_705_, v___x_816_);
v___x_818_ = lean_array_push(v_fst_709_, v___x_740_);
v___x_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_765_);
lean_ctor_set(v___x_819_, 1, v___x_744_);
v___x_820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_818_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_821_, 0, v___x_817_);
lean_ctor_set(v___x_821_, 1, v___x_820_);
v___x_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_822_, 0, v_fst_701_);
lean_ctor_set(v___x_822_, 1, v___x_821_);
v_a_691_ = v___x_822_;
goto v___jp_690_;
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
lean_dec_ref(v___x_765_);
lean_dec(v___x_762_);
lean_dec_ref(v___x_744_);
lean_dec(v_fst_709_);
lean_dec(v_fst_705_);
lean_dec(v_fst_701_);
v_a_823_ = lean_ctor_get(v___x_783_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_783_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_783_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_783_);
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
else
{
lean_dec(v___x_762_);
goto v___jp_766_;
}
}
v___jp_766_:
{
lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_771_; 
v___x_767_ = lean_box(0);
v___x_768_ = lean_array_push(v_fst_705_, v___x_767_);
v___x_769_ = lean_array_push(v_fst_709_, v___x_740_);
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_744_);
lean_ctor_set(v___x_715_, 0, v___x_765_);
v___x_771_ = v___x_715_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_781_; 
v_reuseFailAlloc_781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_781_, 0, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_781_, 1, v___x_744_);
v___x_771_ = v_reuseFailAlloc_781_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
lean_object* v___x_773_; 
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_771_);
lean_ctor_set(v___x_711_, 0, v___x_769_);
v___x_773_ = v___x_711_;
goto v_reusejp_772_;
}
else
{
lean_object* v_reuseFailAlloc_780_; 
v_reuseFailAlloc_780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_780_, 0, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_780_, 1, v___x_771_);
v___x_773_ = v_reuseFailAlloc_780_;
goto v_reusejp_772_;
}
v_reusejp_772_:
{
lean_object* v___x_775_; 
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v___x_773_);
lean_ctor_set(v___x_707_, 0, v___x_768_);
v___x_775_ = v___x_707_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_768_);
lean_ctor_set(v_reuseFailAlloc_779_, 1, v___x_773_);
v___x_775_ = v_reuseFailAlloc_779_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
lean_object* v___x_777_; 
if (v_isShared_704_ == 0)
{
lean_ctor_set(v___x_703_, 1, v___x_775_);
v___x_777_ = v___x_703_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_fst_701_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v___x_775_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
v_a_691_ = v___x_777_;
goto v___jp_690_;
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
v___jp_690_:
{
size_t v___x_692_; size_t v___x_693_; 
v___x_692_ = ((size_t)1ULL);
v___x_693_ = lean_usize_add(v_i_683_, v___x_692_);
v_i_683_ = v___x_693_;
v_b_684_ = v_a_691_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__14___boxed(lean_object* v_addEqualities_849_, lean_object* v_as_850_, lean_object* v_sz_851_, lean_object* v_i_852_, lean_object* v_b_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
uint8_t v_addEqualities_boxed_859_; size_t v_sz_boxed_860_; size_t v_i_boxed_861_; lean_object* v_res_862_; 
v_addEqualities_boxed_859_ = lean_unbox(v_addEqualities_849_);
v_sz_boxed_860_ = lean_unbox_usize(v_sz_851_);
lean_dec(v_sz_851_);
v_i_boxed_861_ = lean_unbox_usize(v_i_852_);
lean_dec(v_i_852_);
v_res_862_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__14(v_addEqualities_boxed_859_, v_as_850_, v_sz_boxed_860_, v_i_boxed_861_, v_b_853_, v___y_854_, v___y_855_, v___y_856_, v___y_857_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec_ref(v_as_850_);
return v_res_862_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__2(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__1));
v___x_867_ = l_Lean_stringToMessageData(v___x_866_);
return v___x_867_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__4(void){
_start:
{
lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_869_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__3));
v___x_870_ = l_Lean_stringToMessageData(v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3(lean_object* v_onMotive_871_, lean_object* v_toMatcherInfo_872_, lean_object* v_a_873_, uint8_t v_addEqualities_874_, size_t v___x_875_, lean_object* v_discrs_876_, lean_object* v_motiveArgs_877_, lean_object* v_motiveBody_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; uint8_t v___x_978_; 
v___x_976_ = lean_array_get_size(v_motiveArgs_877_);
v___x_977_ = lean_array_get_size(v_discrs_876_);
v___x_978_ = lean_nat_dec_eq(v___x_976_, v___x_977_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v_a_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_994_; 
lean_dec_ref(v_motiveBody_878_);
lean_dec_ref(v_motiveArgs_877_);
lean_dec_ref(v_a_873_);
lean_dec_ref(v_toMatcherInfo_872_);
lean_dec_ref(v_onMotive_871_);
v___x_979_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__2, &l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__2_once, _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__2);
v___x_980_ = l_Nat_reprFast(v___x_977_);
v___x_981_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_981_, 0, v___x_980_);
v___x_982_ = l_Lean_MessageData_ofFormat(v___x_981_);
v___x_983_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_983_, 0, v___x_979_);
lean_ctor_set(v___x_983_, 1, v___x_982_);
v___x_984_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__4, &l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__4_once, _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__4);
v___x_985_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_983_);
lean_ctor_set(v___x_985_, 1, v___x_984_);
v___x_986_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___redArg(v___x_985_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
v_a_987_ = lean_ctor_get(v___x_986_, 0);
v_isSharedCheck_994_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_994_ == 0)
{
v___x_989_ = v___x_986_;
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_a_987_);
lean_dec(v___x_986_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_994_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_992_; 
if (v_isShared_990_ == 0)
{
v___x_992_ = v___x_989_;
goto v_reusejp_991_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_a_987_);
v___x_992_ = v_reuseFailAlloc_993_;
goto v_reusejp_991_;
}
v_reusejp_991_:
{
return v___x_992_;
}
}
}
else
{
goto v___jp_884_;
}
v___jp_884_:
{
lean_object* v___x_885_; 
lean_inc(v___y_882_);
lean_inc_ref(v___y_881_);
lean_inc(v___y_880_);
lean_inc_ref(v___y_879_);
lean_inc_ref(v_motiveArgs_877_);
v___x_885_ = lean_apply_7(v_onMotive_871_, v_motiveArgs_877_, v_motiveBody_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, lean_box(0));
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; lean_object* v_discrInfos_887_; lean_object* v___x_888_; lean_object* v_addHEqualities_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; size_t v_sz_898_; lean_object* v___x_899_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v_discrInfos_887_ = lean_ctor_get(v_toMatcherInfo_872_, 4);
lean_inc_ref(v_discrInfos_887_);
lean_dec_ref(v_toMatcherInfo_872_);
v___x_888_ = lean_unsigned_to_nat(0u);
v_addHEqualities_889_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___closed__0));
v___x_890_ = lean_array_get_size(v_a_873_);
v___x_891_ = l_Array_toSubarray___redArg(v_a_873_, v___x_888_, v___x_890_);
v___x_892_ = lean_array_get_size(v_discrInfos_887_);
v___x_893_ = l_Array_toSubarray___redArg(v_discrInfos_887_, v___x_888_, v___x_892_);
v___x_894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_894_, 0, v___x_891_);
lean_ctor_set(v___x_894_, 1, v___x_893_);
v___x_895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_895_, 0, v_addHEqualities_889_);
lean_ctor_set(v___x_895_, 1, v___x_894_);
v___x_896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_896_, 0, v_addHEqualities_889_);
lean_ctor_set(v___x_896_, 1, v___x_895_);
v___x_897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_897_, 0, v_a_886_);
lean_ctor_set(v___x_897_, 1, v___x_896_);
v_sz_898_ = lean_array_size(v_motiveArgs_877_);
v___x_899_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__14(v_addEqualities_874_, v_motiveArgs_877_, v_sz_898_, v___x_875_, v___x_897_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v_snd_901_; lean_object* v_snd_902_; lean_object* v_fst_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_958_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
lean_inc(v_a_900_);
lean_dec_ref_known(v___x_899_, 1);
v_snd_901_ = lean_ctor_get(v_a_900_, 1);
lean_inc(v_snd_901_);
v_snd_902_ = lean_ctor_get(v_snd_901_, 1);
lean_inc(v_snd_902_);
v_fst_903_ = lean_ctor_get(v_a_900_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v_a_900_);
if (v_isSharedCheck_958_ == 0)
{
lean_object* v_unused_959_; 
v_unused_959_ = lean_ctor_get(v_a_900_, 1);
lean_dec(v_unused_959_);
v___x_905_ = v_a_900_;
v_isShared_906_ = v_isSharedCheck_958_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_fst_903_);
lean_dec(v_a_900_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_958_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v_fst_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_956_; 
v_fst_907_ = lean_ctor_get(v_snd_901_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v_snd_901_);
if (v_isSharedCheck_956_ == 0)
{
lean_object* v_unused_957_; 
v_unused_957_ = lean_ctor_get(v_snd_901_, 1);
lean_dec(v_unused_957_);
v___x_909_ = v_snd_901_;
v_isShared_910_ = v_isSharedCheck_956_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_fst_907_);
lean_dec(v_snd_901_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_956_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v_fst_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_954_; 
v_fst_911_ = lean_ctor_get(v_snd_902_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v_snd_902_);
if (v_isSharedCheck_954_ == 0)
{
lean_object* v_unused_955_; 
v_unused_955_ = lean_ctor_get(v_snd_902_, 1);
lean_dec(v_unused_955_);
v___x_913_ = v_snd_902_;
v_isShared_914_ = v_isSharedCheck_954_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_fst_911_);
lean_dec(v_snd_902_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_954_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
uint8_t v___x_915_; uint8_t v___x_916_; uint8_t v___x_917_; lean_object* v___x_918_; 
v___x_915_ = 0;
v___x_916_ = 1;
v___x_917_ = 1;
lean_inc(v_fst_903_);
v___x_918_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_877_, v_fst_903_, v___x_915_, v___x_916_, v___x_915_, v___x_916_, v___x_917_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
lean_dec_ref(v_motiveArgs_877_);
if (lean_obj_tag(v___x_918_) == 0)
{
lean_object* v_a_919_; lean_object* v___x_920_; 
v_a_919_ = lean_ctor_get(v___x_918_, 0);
lean_inc(v_a_919_);
lean_dec_ref_known(v___x_918_, 1);
v___x_920_ = l_Lean_Meta_getLevel(v_fst_903_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_937_; 
v_a_921_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_937_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_937_ == 0)
{
v___x_923_ = v___x_920_;
v_isShared_924_ = v_isSharedCheck_937_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_dec(v___x_920_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_937_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_914_ == 0)
{
lean_ctor_set(v___x_913_, 1, v_fst_911_);
lean_ctor_set(v___x_913_, 0, v_fst_907_);
v___x_926_ = v___x_913_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_936_; 
v_reuseFailAlloc_936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_936_, 0, v_fst_907_);
lean_ctor_set(v_reuseFailAlloc_936_, 1, v_fst_911_);
v___x_926_ = v_reuseFailAlloc_936_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
lean_object* v___x_928_; 
if (v_isShared_910_ == 0)
{
lean_ctor_set(v___x_909_, 1, v___x_926_);
lean_ctor_set(v___x_909_, 0, v_a_921_);
v___x_928_ = v___x_909_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_a_921_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v___x_926_);
v___x_928_ = v_reuseFailAlloc_935_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
lean_object* v___x_930_; 
if (v_isShared_906_ == 0)
{
lean_ctor_set(v___x_905_, 1, v___x_928_);
lean_ctor_set(v___x_905_, 0, v_a_919_);
v___x_930_ = v___x_905_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_934_; 
v_reuseFailAlloc_934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_934_, 0, v_a_919_);
lean_ctor_set(v_reuseFailAlloc_934_, 1, v___x_928_);
v___x_930_ = v_reuseFailAlloc_934_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
lean_object* v___x_932_; 
if (v_isShared_924_ == 0)
{
lean_ctor_set(v___x_923_, 0, v___x_930_);
v___x_932_ = v___x_923_;
goto v_reusejp_931_;
}
else
{
lean_object* v_reuseFailAlloc_933_; 
v_reuseFailAlloc_933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_933_, 0, v___x_930_);
v___x_932_ = v_reuseFailAlloc_933_;
goto v_reusejp_931_;
}
v_reusejp_931_:
{
return v___x_932_;
}
}
}
}
}
}
else
{
lean_object* v_a_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_945_; 
lean_dec(v_a_919_);
lean_del_object(v___x_913_);
lean_dec(v_fst_911_);
lean_del_object(v___x_909_);
lean_dec(v_fst_907_);
lean_del_object(v___x_905_);
v_a_938_ = lean_ctor_get(v___x_920_, 0);
v_isSharedCheck_945_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_945_ == 0)
{
v___x_940_ = v___x_920_;
v_isShared_941_ = v_isSharedCheck_945_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_a_938_);
lean_dec(v___x_920_);
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
else
{
lean_object* v_a_946_; lean_object* v___x_948_; uint8_t v_isShared_949_; uint8_t v_isSharedCheck_953_; 
lean_del_object(v___x_913_);
lean_dec(v_fst_911_);
lean_del_object(v___x_909_);
lean_dec(v_fst_907_);
lean_del_object(v___x_905_);
lean_dec(v_fst_903_);
v_a_946_ = lean_ctor_get(v___x_918_, 0);
v_isSharedCheck_953_ = !lean_is_exclusive(v___x_918_);
if (v_isSharedCheck_953_ == 0)
{
v___x_948_ = v___x_918_;
v_isShared_949_ = v_isSharedCheck_953_;
goto v_resetjp_947_;
}
else
{
lean_inc(v_a_946_);
lean_dec(v___x_918_);
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
}
}
}
else
{
lean_object* v_a_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_967_; 
lean_dec_ref(v_motiveArgs_877_);
v_a_960_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_967_ == 0)
{
v___x_962_ = v___x_899_;
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_a_960_);
lean_dec(v___x_899_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_967_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
lean_object* v___x_965_; 
if (v_isShared_963_ == 0)
{
v___x_965_ = v___x_962_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v_a_960_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
}
else
{
lean_object* v_a_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_975_; 
lean_dec_ref(v_motiveArgs_877_);
lean_dec_ref(v_a_873_);
lean_dec_ref(v_toMatcherInfo_872_);
v_a_968_ = lean_ctor_get(v___x_885_, 0);
v_isSharedCheck_975_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_975_ == 0)
{
v___x_970_ = v___x_885_;
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_a_968_);
lean_dec(v___x_885_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_975_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_973_; 
if (v_isShared_971_ == 0)
{
v___x_973_ = v___x_970_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_a_968_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___boxed(lean_object* v_onMotive_995_, lean_object* v_toMatcherInfo_996_, lean_object* v_a_997_, lean_object* v_addEqualities_998_, lean_object* v___x_999_, lean_object* v_discrs_1000_, lean_object* v_motiveArgs_1001_, lean_object* v_motiveBody_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
uint8_t v_addEqualities_boxed_1008_; size_t v___x_68789__boxed_1009_; lean_object* v_res_1010_; 
v_addEqualities_boxed_1008_ = lean_unbox(v_addEqualities_998_);
v___x_68789__boxed_1009_ = lean_unbox_usize(v___x_999_);
lean_dec(v___x_999_);
v_res_1010_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3(v_onMotive_995_, v_toMatcherInfo_996_, v_a_997_, v_addEqualities_boxed_1008_, v___x_68789__boxed_1009_, v_discrs_1000_, v_motiveArgs_1001_, v_motiveBody_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_);
lean_dec(v___y_1006_);
lean_dec_ref(v___y_1005_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
lean_dec_ref(v_discrs_1000_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23___redArg(lean_object* v_declName_1011_, lean_object* v___y_1012_){
_start:
{
lean_object* v___x_1014_; lean_object* v_env_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1014_ = lean_st_ref_get(v___y_1012_);
v_env_1015_ = lean_ctor_get(v___x_1014_, 0);
lean_inc_ref(v_env_1015_);
lean_dec(v___x_1014_);
v___x_1016_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_1015_, v_declName_1011_);
v___x_1017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23___redArg___boxed(lean_object* v_declName_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23___redArg(v_declName_1018_, v___y_1019_);
lean_dec(v___y_1019_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg___lam__0(lean_object* v_k_1022_, lean_object* v_ys_1023_, lean_object* v_args_1024_, lean_object* v___mask_1025_, lean_object* v___bodyType_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; 
lean_inc(v___y_1030_);
lean_inc_ref(v___y_1029_);
lean_inc(v___y_1028_);
lean_inc_ref(v___y_1027_);
v___x_1032_ = lean_apply_7(v_k_1022_, v_ys_1023_, v_args_1024_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, lean_box(0));
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg___lam__0___boxed(lean_object* v_k_1033_, lean_object* v_ys_1034_, lean_object* v_args_1035_, lean_object* v___mask_1036_, lean_object* v___bodyType_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_){
_start:
{
lean_object* v_res_1043_; 
v_res_1043_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg___lam__0(v_k_1033_, v_ys_1034_, v_args_1035_, v___mask_1036_, v___bodyType_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec_ref(v___bodyType_1037_);
lean_dec_ref(v___mask_1036_);
return v_res_1043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg(lean_object* v_origAltType_1044_, lean_object* v_altInfo_1045_, lean_object* v_k_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v___f_1052_; lean_object* v___x_1053_; 
v___f_1052_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg___lam__0___boxed), 10, 1);
lean_closure_set(v___f_1052_, 0, v_k_1046_);
v___x_1053_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_origAltType_1044_, v_altInfo_1045_, v___f_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1053_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1053_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
v_a_1062_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1053_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1053_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg___boxed(lean_object* v_origAltType_1070_, lean_object* v_altInfo_1071_, lean_object* v_k_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg(v_origAltType_1070_, v_altInfo_1071_, v_k_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__4(lean_object* v___x_1079_, lean_object* v___x_1080_, lean_object* v___f_1081_, lean_object* v_fst_1082_, lean_object* v___x_1083_, lean_object* v___x_1084_, lean_object* v___x_1085_, lean_object* v___x_1086_, lean_object* v___x_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v___x_1093_; 
v___x_1093_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg(v___x_1079_, v___x_1080_, v___f_1081_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1108_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1096_ = v___x_1093_;
v_isShared_1097_ = v_isSharedCheck_1108_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v___x_1093_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1108_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1098_ = lean_array_push(v_fst_1082_, v_a_1094_);
v___x_1099_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1083_);
lean_ctor_set(v___x_1099_, 1, v___x_1084_);
v___x_1100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1085_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1086_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1102_, 0, v___x_1087_);
lean_ctor_set(v___x_1102_, 1, v___x_1101_);
v___x_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1098_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
v___x_1104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1103_);
if (v_isShared_1097_ == 0)
{
lean_ctor_set(v___x_1096_, 0, v___x_1104_);
v___x_1106_ = v___x_1096_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
else
{
lean_object* v_a_1109_; lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1116_; 
lean_dec_ref(v___x_1087_);
lean_dec_ref(v___x_1086_);
lean_dec_ref(v___x_1085_);
lean_dec_ref(v___x_1084_);
lean_dec_ref(v___x_1083_);
lean_dec(v_fst_1082_);
v_a_1109_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1116_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1116_ == 0)
{
v___x_1111_ = v___x_1093_;
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
else
{
lean_inc(v_a_1109_);
lean_dec(v___x_1093_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1116_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v___x_1114_; 
if (v_isShared_1112_ == 0)
{
v___x_1114_ = v___x_1111_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v_a_1109_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__4___boxed(lean_object* v___x_1117_, lean_object* v___x_1118_, lean_object* v___f_1119_, lean_object* v_fst_1120_, lean_object* v___x_1121_, lean_object* v___x_1122_, lean_object* v___x_1123_, lean_object* v___x_1124_, lean_object* v___x_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__4(v___x_1117_, v___x_1118_, v___f_1119_, v_fst_1120_, v___x_1121_, v___x_1122_, v___x_1123_, v___x_1124_, v___x_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__0(lean_object* v___x_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1138_, 0, v___x_1132_);
return v___x_1138_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__0___boxed(lean_object* v___x_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
lean_object* v_res_1145_; 
v_res_1145_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__0(v___x_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
return v_res_1145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg___lam__0(lean_object* v_k_1146_, lean_object* v_b_1147_, lean_object* v_c_1148_, lean_object* v___y_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_){
_start:
{
lean_object* v___x_1154_; 
lean_inc(v___y_1152_);
lean_inc_ref(v___y_1151_);
lean_inc(v___y_1150_);
lean_inc_ref(v___y_1149_);
v___x_1154_ = lean_apply_7(v_k_1146_, v_b_1147_, v_c_1148_, v___y_1149_, v___y_1150_, v___y_1151_, v___y_1152_, lean_box(0));
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg___lam__0___boxed(lean_object* v_k_1155_, lean_object* v_b_1156_, lean_object* v_c_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_){
_start:
{
lean_object* v_res_1163_; 
v_res_1163_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg___lam__0(v_k_1155_, v_b_1156_, v_c_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
return v_res_1163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg(lean_object* v_type_1164_, lean_object* v_maxFVars_x3f_1165_, lean_object* v_k_1166_, uint8_t v_cleanupAnnotations_1167_, uint8_t v_whnfType_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
lean_object* v___f_1174_; lean_object* v___x_1175_; 
v___f_1174_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1174_, 0, v_k_1166_);
v___x_1175_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_1164_, v_maxFVars_x3f_1165_, v___f_1174_, v_cleanupAnnotations_1167_, v_whnfType_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
if (lean_obj_tag(v___x_1175_) == 0)
{
lean_object* v_a_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1183_; 
v_a_1176_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1183_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1178_ = v___x_1175_;
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_a_1176_);
lean_dec(v___x_1175_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1183_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v___x_1181_; 
if (v_isShared_1179_ == 0)
{
v___x_1181_ = v___x_1178_;
goto v_reusejp_1180_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v_a_1176_);
v___x_1181_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1180_;
}
v_reusejp_1180_:
{
return v___x_1181_;
}
}
}
else
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1191_; 
v_a_1184_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1186_ = v___x_1175_;
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1175_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1191_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1189_; 
if (v_isShared_1187_ == 0)
{
v___x_1189_ = v___x_1186_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1190_; 
v_reuseFailAlloc_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1190_, 0, v_a_1184_);
v___x_1189_ = v_reuseFailAlloc_1190_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
return v___x_1189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg___boxed(lean_object* v_type_1192_, lean_object* v_maxFVars_x3f_1193_, lean_object* v_k_1194_, lean_object* v_cleanupAnnotations_1195_, lean_object* v_whnfType_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_1202_; uint8_t v_whnfType_boxed_1203_; lean_object* v_res_1204_; 
v_cleanupAnnotations_boxed_1202_ = lean_unbox(v_cleanupAnnotations_1195_);
v_whnfType_boxed_1203_ = lean_unbox(v_whnfType_1196_);
v_res_1204_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg(v_type_1192_, v_maxFVars_x3f_1193_, v_k_1194_, v_cleanupAnnotations_boxed_1202_, v_whnfType_boxed_1203_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
return v_res_1204_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0(void){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l_instMonadEIO(lean_box(0));
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20(lean_object* v_msg_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v_toApplicative_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1279_; 
v___x_1216_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0);
v___x_1217_ = l_StateRefT_x27_instMonad___redArg(v___x_1216_);
v_toApplicative_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1279_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1279_ == 0)
{
lean_object* v_unused_1280_; 
v_unused_1280_ = lean_ctor_get(v___x_1217_, 1);
lean_dec(v_unused_1280_);
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1279_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_toApplicative_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1279_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v_toFunctor_1222_; lean_object* v_toSeq_1223_; lean_object* v_toSeqLeft_1224_; lean_object* v_toSeqRight_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1277_; 
v_toFunctor_1222_ = lean_ctor_get(v_toApplicative_1218_, 0);
v_toSeq_1223_ = lean_ctor_get(v_toApplicative_1218_, 2);
v_toSeqLeft_1224_ = lean_ctor_get(v_toApplicative_1218_, 3);
v_toSeqRight_1225_ = lean_ctor_get(v_toApplicative_1218_, 4);
v_isSharedCheck_1277_ = !lean_is_exclusive(v_toApplicative_1218_);
if (v_isSharedCheck_1277_ == 0)
{
lean_object* v_unused_1278_; 
v_unused_1278_ = lean_ctor_get(v_toApplicative_1218_, 1);
lean_dec(v_unused_1278_);
v___x_1227_ = v_toApplicative_1218_;
v_isShared_1228_ = v_isSharedCheck_1277_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_toSeqRight_1225_);
lean_inc(v_toSeqLeft_1224_);
lean_inc(v_toSeq_1223_);
lean_inc(v_toFunctor_1222_);
lean_dec(v_toApplicative_1218_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1277_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___f_1229_; lean_object* v___f_1230_; lean_object* v___f_1231_; lean_object* v___f_1232_; lean_object* v___x_1233_; lean_object* v___f_1234_; lean_object* v___f_1235_; lean_object* v___f_1236_; lean_object* v___x_1238_; 
v___f_1229_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__1));
v___f_1230_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__2));
lean_inc_ref(v_toFunctor_1222_);
v___f_1231_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1231_, 0, v_toFunctor_1222_);
v___f_1232_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1232_, 0, v_toFunctor_1222_);
v___x_1233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1233_, 0, v___f_1231_);
lean_ctor_set(v___x_1233_, 1, v___f_1232_);
v___f_1234_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1234_, 0, v_toSeqRight_1225_);
v___f_1235_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1235_, 0, v_toSeqLeft_1224_);
v___f_1236_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1236_, 0, v_toSeq_1223_);
if (v_isShared_1228_ == 0)
{
lean_ctor_set(v___x_1227_, 4, v___f_1234_);
lean_ctor_set(v___x_1227_, 3, v___f_1235_);
lean_ctor_set(v___x_1227_, 2, v___f_1236_);
lean_ctor_set(v___x_1227_, 1, v___f_1229_);
lean_ctor_set(v___x_1227_, 0, v___x_1233_);
v___x_1238_ = v___x_1227_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v___x_1233_);
lean_ctor_set(v_reuseFailAlloc_1276_, 1, v___f_1229_);
lean_ctor_set(v_reuseFailAlloc_1276_, 2, v___f_1236_);
lean_ctor_set(v_reuseFailAlloc_1276_, 3, v___f_1235_);
lean_ctor_set(v_reuseFailAlloc_1276_, 4, v___f_1234_);
v___x_1238_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
lean_object* v___x_1240_; 
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 1, v___f_1230_);
lean_ctor_set(v___x_1220_, 0, v___x_1238_);
v___x_1240_ = v___x_1220_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1238_);
lean_ctor_set(v_reuseFailAlloc_1275_, 1, v___f_1230_);
v___x_1240_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
lean_object* v___x_1241_; lean_object* v_toApplicative_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1273_; 
v___x_1241_ = l_StateRefT_x27_instMonad___redArg(v___x_1240_);
v_toApplicative_1242_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1273_ == 0)
{
lean_object* v_unused_1274_; 
v_unused_1274_ = lean_ctor_get(v___x_1241_, 1);
lean_dec(v_unused_1274_);
v___x_1244_ = v___x_1241_;
v_isShared_1245_ = v_isSharedCheck_1273_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_toApplicative_1242_);
lean_dec(v___x_1241_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1273_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v_toFunctor_1246_; lean_object* v_toSeq_1247_; lean_object* v_toSeqLeft_1248_; lean_object* v_toSeqRight_1249_; lean_object* v___x_1251_; uint8_t v_isShared_1252_; uint8_t v_isSharedCheck_1271_; 
v_toFunctor_1246_ = lean_ctor_get(v_toApplicative_1242_, 0);
v_toSeq_1247_ = lean_ctor_get(v_toApplicative_1242_, 2);
v_toSeqLeft_1248_ = lean_ctor_get(v_toApplicative_1242_, 3);
v_toSeqRight_1249_ = lean_ctor_get(v_toApplicative_1242_, 4);
v_isSharedCheck_1271_ = !lean_is_exclusive(v_toApplicative_1242_);
if (v_isSharedCheck_1271_ == 0)
{
lean_object* v_unused_1272_; 
v_unused_1272_ = lean_ctor_get(v_toApplicative_1242_, 1);
lean_dec(v_unused_1272_);
v___x_1251_ = v_toApplicative_1242_;
v_isShared_1252_ = v_isSharedCheck_1271_;
goto v_resetjp_1250_;
}
else
{
lean_inc(v_toSeqRight_1249_);
lean_inc(v_toSeqLeft_1248_);
lean_inc(v_toSeq_1247_);
lean_inc(v_toFunctor_1246_);
lean_dec(v_toApplicative_1242_);
v___x_1251_ = lean_box(0);
v_isShared_1252_ = v_isSharedCheck_1271_;
goto v_resetjp_1250_;
}
v_resetjp_1250_:
{
lean_object* v___f_1253_; lean_object* v___f_1254_; lean_object* v___f_1255_; lean_object* v___f_1256_; lean_object* v___x_1257_; lean_object* v___f_1258_; lean_object* v___f_1259_; lean_object* v___f_1260_; lean_object* v___x_1262_; 
v___f_1253_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__3));
v___f_1254_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__4));
lean_inc_ref(v_toFunctor_1246_);
v___f_1255_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1255_, 0, v_toFunctor_1246_);
v___f_1256_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1256_, 0, v_toFunctor_1246_);
v___x_1257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1257_, 0, v___f_1255_);
lean_ctor_set(v___x_1257_, 1, v___f_1256_);
v___f_1258_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1258_, 0, v_toSeqRight_1249_);
v___f_1259_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1259_, 0, v_toSeqLeft_1248_);
v___f_1260_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1260_, 0, v_toSeq_1247_);
if (v_isShared_1252_ == 0)
{
lean_ctor_set(v___x_1251_, 4, v___f_1258_);
lean_ctor_set(v___x_1251_, 3, v___f_1259_);
lean_ctor_set(v___x_1251_, 2, v___f_1260_);
lean_ctor_set(v___x_1251_, 1, v___f_1253_);
lean_ctor_set(v___x_1251_, 0, v___x_1257_);
v___x_1262_ = v___x_1251_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1257_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v___f_1253_);
lean_ctor_set(v_reuseFailAlloc_1270_, 2, v___f_1260_);
lean_ctor_set(v_reuseFailAlloc_1270_, 3, v___f_1259_);
lean_ctor_set(v_reuseFailAlloc_1270_, 4, v___f_1258_);
v___x_1262_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
lean_object* v___x_1264_; 
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 1, v___f_1254_);
lean_ctor_set(v___x_1244_, 0, v___x_1262_);
v___x_1264_ = v___x_1244_;
goto v_reusejp_1263_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v___x_1262_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v___f_1254_);
v___x_1264_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1263_;
}
v_reusejp_1263_:
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_62931__overap_1267_; lean_object* v___x_1268_; 
v___x_1265_ = l_Lean_instInhabitedExpr;
v___x_1266_ = l_instInhabitedOfMonad___redArg(v___x_1264_, v___x_1265_);
v___x_62931__overap_1267_ = lean_panic_fn_borrowed(v___x_1266_, v_msg_1210_);
lean_dec(v___x_1266_);
lean_inc(v___y_1214_);
lean_inc_ref(v___y_1213_);
lean_inc(v___y_1212_);
lean_inc_ref(v___y_1211_);
v___x_1268_ = lean_apply_5(v___x_62931__overap_1267_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_, lean_box(0));
return v___x_1268_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___boxed(lean_object* v_msg_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
lean_object* v_res_1287_; 
v_res_1287_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20(v_msg_1281_, v___y_1282_, v___y_1283_, v___y_1284_, v___y_1285_);
lean_dec(v___y_1285_);
lean_dec_ref(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec_ref(v___y_1282_);
return v_res_1287_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___closed__1(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___closed__0));
v___x_1290_ = l_Lean_stringToMessageData(v___x_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5(lean_object* v_args_1291_, lean_object* v_ys_1292_, lean_object* v_ys2_1293_, lean_object* v_ys3_1294_, lean_object* v_onAlt_1295_, lean_object* v_a_1296_, uint8_t v___x_1297_, uint8_t v_useSplitter_1298_, lean_object* v___x_1299_, lean_object* v_ys4_1300_, lean_object* v_altType_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_){
_start:
{
lean_object* v___y_1308_; lean_object* v___x_1318_; lean_object* v___x_1319_; 
lean_inc_ref(v_args_1291_);
v___x_1318_ = l_Array_append___redArg(v_args_1291_, v_ys3_1294_);
v___x_1319_ = l_Lean_Meta_instantiateLambda(v___x_1299_, v___x_1318_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
lean_dec_ref(v___x_1318_);
if (lean_obj_tag(v___x_1319_) == 0)
{
v___y_1308_ = v___x_1319_;
goto v___jp_1307_;
}
else
{
lean_object* v_a_1320_; uint8_t v___y_1322_; uint8_t v___x_1325_; 
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
lean_inc(v_a_1320_);
v___x_1325_ = l_Lean_Exception_isInterrupt(v_a_1320_);
if (v___x_1325_ == 0)
{
uint8_t v___x_1326_; 
v___x_1326_ = l_Lean_Exception_isRuntime(v_a_1320_);
v___y_1322_ = v___x_1326_;
goto v___jp_1321_;
}
else
{
lean_dec(v_a_1320_);
v___y_1322_ = v___x_1325_;
goto v___jp_1321_;
}
v___jp_1321_:
{
if (v___y_1322_ == 0)
{
lean_object* v___x_1323_; lean_object* v___x_1324_; 
lean_dec_ref_known(v___x_1319_, 1);
v___x_1323_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___closed__1);
v___x_1324_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___redArg(v___x_1323_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
v___y_1308_ = v___x_1324_;
goto v___jp_1307_;
}
else
{
v___y_1308_ = v___x_1319_;
goto v___jp_1307_;
}
}
}
v___jp_1307_:
{
if (lean_obj_tag(v___y_1308_) == 0)
{
lean_object* v_a_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v_a_1309_ = lean_ctor_get(v___y_1308_, 0);
lean_inc(v_a_1309_);
lean_dec_ref_known(v___y_1308_, 1);
lean_inc_ref(v_ys4_1300_);
lean_inc_ref(v_ys3_1294_);
lean_inc_ref(v_ys2_1293_);
lean_inc_ref(v_ys_1292_);
v___x_1310_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1310_, 0, v_args_1291_);
lean_ctor_set(v___x_1310_, 1, v_ys_1292_);
lean_ctor_set(v___x_1310_, 2, v_ys2_1293_);
lean_ctor_set(v___x_1310_, 3, v_ys3_1294_);
lean_ctor_set(v___x_1310_, 4, v_ys4_1300_);
lean_inc(v___y_1305_);
lean_inc_ref(v___y_1304_);
lean_inc(v___y_1303_);
lean_inc_ref(v___y_1302_);
v___x_1311_ = lean_apply_9(v_onAlt_1295_, v_a_1296_, v_altType_1301_, v___x_1310_, v_a_1309_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, lean_box(0));
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; lean_object* v___x_1317_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1311_, 1);
v___x_1313_ = l_Array_append___redArg(v_ys_1292_, v_ys2_1293_);
lean_dec_ref(v_ys2_1293_);
v___x_1314_ = l_Array_append___redArg(v___x_1313_, v_ys3_1294_);
lean_dec_ref(v_ys3_1294_);
v___x_1315_ = l_Array_append___redArg(v___x_1314_, v_ys4_1300_);
lean_dec_ref(v_ys4_1300_);
v___x_1316_ = 1;
v___x_1317_ = l_Lean_Meta_mkLambdaFVars(v___x_1315_, v_a_1312_, v___x_1297_, v_useSplitter_1298_, v___x_1297_, v_useSplitter_1298_, v___x_1316_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_);
lean_dec_ref(v___x_1315_);
return v___x_1317_;
}
else
{
lean_dec_ref(v_ys4_1300_);
lean_dec_ref(v_ys3_1294_);
lean_dec_ref(v_ys2_1293_);
lean_dec_ref(v_ys_1292_);
return v___x_1311_;
}
}
else
{
lean_dec_ref(v_altType_1301_);
lean_dec_ref(v_ys4_1300_);
lean_dec(v_a_1296_);
lean_dec_ref(v_onAlt_1295_);
lean_dec_ref(v_ys3_1294_);
lean_dec_ref(v_ys2_1293_);
lean_dec_ref(v_ys_1292_);
lean_dec_ref(v_args_1291_);
return v___y_1308_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___boxed(lean_object* v_args_1327_, lean_object* v_ys_1328_, lean_object* v_ys2_1329_, lean_object* v_ys3_1330_, lean_object* v_onAlt_1331_, lean_object* v_a_1332_, lean_object* v___x_1333_, lean_object* v_useSplitter_1334_, lean_object* v___x_1335_, lean_object* v_ys4_1336_, lean_object* v_altType_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
uint8_t v___x_69422__boxed_1343_; uint8_t v_useSplitter_boxed_1344_; lean_object* v_res_1345_; 
v___x_69422__boxed_1343_ = lean_unbox(v___x_1333_);
v_useSplitter_boxed_1344_ = lean_unbox(v_useSplitter_1334_);
v_res_1345_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5(v_args_1327_, v_ys_1328_, v_ys2_1329_, v_ys3_1330_, v_onAlt_1331_, v_a_1332_, v___x_69422__boxed_1343_, v_useSplitter_boxed_1344_, v___x_1335_, v_ys4_1336_, v_altType_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__1(lean_object* v_args_1346_, lean_object* v_ys_1347_, lean_object* v_ys2_1348_, lean_object* v_onAlt_1349_, lean_object* v_a_1350_, uint8_t v___x_1351_, uint8_t v_useSplitter_1352_, lean_object* v___x_1353_, lean_object* v_extraEqualities_1354_, lean_object* v_ys3_1355_, lean_object* v_altType_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___f_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1362_ = lean_box(v___x_1351_);
v___x_1363_ = lean_box(v_useSplitter_1352_);
v___f_1364_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__5___boxed), 16, 9);
lean_closure_set(v___f_1364_, 0, v_args_1346_);
lean_closure_set(v___f_1364_, 1, v_ys_1347_);
lean_closure_set(v___f_1364_, 2, v_ys2_1348_);
lean_closure_set(v___f_1364_, 3, v_ys3_1355_);
lean_closure_set(v___f_1364_, 4, v_onAlt_1349_);
lean_closure_set(v___f_1364_, 5, v_a_1350_);
lean_closure_set(v___f_1364_, 6, v___x_1362_);
lean_closure_set(v___f_1364_, 7, v___x_1363_);
lean_closure_set(v___f_1364_, 8, v___x_1353_);
v___x_1365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1365_, 0, v_extraEqualities_1354_);
v___x_1366_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg(v_altType_1356_, v___x_1365_, v___f_1364_, v___x_1351_, v___x_1351_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
return v___x_1366_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__1___boxed(lean_object* v_args_1367_, lean_object* v_ys_1368_, lean_object* v_ys2_1369_, lean_object* v_onAlt_1370_, lean_object* v_a_1371_, lean_object* v___x_1372_, lean_object* v_useSplitter_1373_, lean_object* v___x_1374_, lean_object* v_extraEqualities_1375_, lean_object* v_ys3_1376_, lean_object* v_altType_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_){
_start:
{
uint8_t v___x_69489__boxed_1383_; uint8_t v_useSplitter_boxed_1384_; lean_object* v_res_1385_; 
v___x_69489__boxed_1383_ = lean_unbox(v___x_1372_);
v_useSplitter_boxed_1384_ = lean_unbox(v_useSplitter_1373_);
v_res_1385_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__1(v_args_1367_, v_ys_1368_, v_ys2_1369_, v_onAlt_1370_, v_a_1371_, v___x_69489__boxed_1383_, v_useSplitter_boxed_1384_, v___x_1374_, v_extraEqualities_1375_, v_ys3_1376_, v_altType_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
lean_dec(v___y_1379_);
lean_dec_ref(v___y_1378_);
return v_res_1385_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__2(lean_object* v_args_1386_, lean_object* v_ys_1387_, lean_object* v_onAlt_1388_, lean_object* v_a_1389_, uint8_t v___x_1390_, uint8_t v_useSplitter_1391_, lean_object* v___x_1392_, lean_object* v_extraEqualities_1393_, lean_object* v_numDiscrEqs_1394_, lean_object* v_ys2_1395_, lean_object* v_altType_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___f_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1402_ = lean_box(v___x_1390_);
v___x_1403_ = lean_box(v_useSplitter_1391_);
v___f_1404_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__1___boxed), 16, 9);
lean_closure_set(v___f_1404_, 0, v_args_1386_);
lean_closure_set(v___f_1404_, 1, v_ys_1387_);
lean_closure_set(v___f_1404_, 2, v_ys2_1395_);
lean_closure_set(v___f_1404_, 3, v_onAlt_1388_);
lean_closure_set(v___f_1404_, 4, v_a_1389_);
lean_closure_set(v___f_1404_, 5, v___x_1402_);
lean_closure_set(v___f_1404_, 6, v___x_1403_);
lean_closure_set(v___f_1404_, 7, v___x_1392_);
lean_closure_set(v___f_1404_, 8, v_extraEqualities_1393_);
v___x_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1405_, 0, v_numDiscrEqs_1394_);
v___x_1406_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg(v_altType_1396_, v___x_1405_, v___f_1404_, v___x_1390_, v___x_1390_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_);
return v___x_1406_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__2___boxed(lean_object* v_args_1407_, lean_object* v_ys_1408_, lean_object* v_onAlt_1409_, lean_object* v_a_1410_, lean_object* v___x_1411_, lean_object* v_useSplitter_1412_, lean_object* v___x_1413_, lean_object* v_extraEqualities_1414_, lean_object* v_numDiscrEqs_1415_, lean_object* v_ys2_1416_, lean_object* v_altType_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
uint8_t v___x_69520__boxed_1423_; uint8_t v_useSplitter_boxed_1424_; lean_object* v_res_1425_; 
v___x_69520__boxed_1423_ = lean_unbox(v___x_1411_);
v_useSplitter_boxed_1424_ = lean_unbox(v_useSplitter_1412_);
v_res_1425_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__2(v_args_1407_, v_ys_1408_, v_onAlt_1409_, v_a_1410_, v___x_69520__boxed_1423_, v_useSplitter_boxed_1424_, v___x_1413_, v_extraEqualities_1414_, v_numDiscrEqs_1415_, v_ys2_1416_, v_altType_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
lean_dec(v___y_1421_);
lean_dec_ref(v___y_1420_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
return v_res_1425_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1429_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__2));
v___x_1430_ = lean_unsigned_to_nat(8u);
v___x_1431_ = lean_unsigned_to_nat(360u);
v___x_1432_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__1));
v___x_1433_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__0));
v___x_1434_ = l_mkPanicMessageWithDecl(v___x_1433_, v___x_1432_, v___x_1431_, v___x_1430_, v___x_1429_);
return v___x_1434_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__9(void){
_start:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1443_ = lean_box(0);
v___x_1444_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__8));
v___x_1445_ = l_Lean_mkConst(v___x_1444_, v___x_1443_);
return v___x_1445_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__10(void){
_start:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1446_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__9);
v___x_1447_ = lean_unsigned_to_nat(2u);
v___x_1448_ = lean_mk_empty_array_with_capacity(v___x_1447_);
v___x_1449_ = lean_array_push(v___x_1448_, v___x_1446_);
return v___x_1449_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__13(void){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1454_ = lean_box(0);
v___x_1455_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__12));
v___x_1456_ = l_Lean_mkConst(v___x_1455_, v___x_1454_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3(lean_object* v___x_1457_, lean_object* v___x_1458_, lean_object* v_onAlt_1459_, lean_object* v_a_1460_, uint8_t v___x_1461_, uint8_t v_useSplitter_1462_, lean_object* v___x_1463_, lean_object* v_extraEqualities_1464_, lean_object* v_numDiscrEqs_1465_, uint8_t v_hasUnitThunk_1466_, lean_object* v___x_1467_, lean_object* v_ys_1468_, lean_object* v_args_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_){
_start:
{
lean_object* v_numFields_1475_; lean_object* v_numOverlaps_1476_; uint8_t v_hasUnitThunk_1477_; lean_object* v___x_1478_; uint8_t v___x_1479_; 
v_numFields_1475_ = lean_ctor_get(v___x_1457_, 0);
v_numOverlaps_1476_ = lean_ctor_get(v___x_1457_, 1);
v_hasUnitThunk_1477_ = lean_ctor_get_uint8(v___x_1457_, sizeof(void*)*2);
v___x_1478_ = lean_array_get_size(v_ys_1468_);
v___x_1479_ = lean_nat_dec_eq(v___x_1478_, v_numFields_1475_);
if (v___x_1479_ == 0)
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
lean_dec_ref(v_args_1469_);
lean_dec_ref(v_ys_1468_);
lean_dec(v_numDiscrEqs_1465_);
lean_dec(v_extraEqualities_1464_);
lean_dec_ref(v___x_1463_);
lean_dec(v_a_1460_);
lean_dec_ref(v_onAlt_1459_);
lean_dec_ref(v___x_1458_);
v___x_1480_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__3);
v___x_1481_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20(v___x_1480_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
return v___x_1481_;
}
else
{
lean_object* v___x_1482_; 
v___x_1482_ = l_Lean_Meta_instantiateForall(v___x_1458_, v_ys_1468_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
if (lean_obj_tag(v___x_1482_) == 0)
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1510_; 
v_a_1483_ = lean_ctor_get(v___x_1482_, 0);
v_isSharedCheck_1510_ = !lean_is_exclusive(v___x_1482_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1485_ = v___x_1482_;
v_isShared_1486_ = v_isSharedCheck_1510_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1482_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1510_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___f_1489_; lean_object* v_altType_1491_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; 
v___x_1487_ = lean_box(v___x_1461_);
v___x_1488_ = lean_box(v_useSplitter_1462_);
v___f_1489_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__2___boxed), 16, 9);
lean_closure_set(v___f_1489_, 0, v_args_1469_);
lean_closure_set(v___f_1489_, 1, v_ys_1468_);
lean_closure_set(v___f_1489_, 2, v_onAlt_1459_);
lean_closure_set(v___f_1489_, 3, v_a_1460_);
lean_closure_set(v___f_1489_, 4, v___x_1487_);
lean_closure_set(v___f_1489_, 5, v___x_1488_);
lean_closure_set(v___f_1489_, 6, v___x_1463_);
lean_closure_set(v___f_1489_, 7, v_extraEqualities_1464_);
lean_closure_set(v___f_1489_, 8, v_numDiscrEqs_1465_);
if (v_hasUnitThunk_1466_ == 0)
{
v_altType_1491_ = v_a_1483_;
v___y_1492_ = v___y_1470_;
v___y_1493_ = v___y_1471_;
v___y_1494_ = v___y_1472_;
v___y_1495_ = v___y_1473_;
goto v___jp_1490_;
}
else
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1505_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__13, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__13_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__13);
v___x_1506_ = lean_mk_empty_array_with_capacity(v___x_1467_);
v___x_1507_ = lean_array_push(v___x_1506_, v___x_1505_);
v___x_1508_ = l_Lean_Meta_instantiateForall(v_a_1483_, v___x_1507_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
lean_dec_ref(v___x_1507_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_a_1509_);
lean_dec_ref_known(v___x_1508_, 1);
v_altType_1491_ = v_a_1509_;
v___y_1492_ = v___y_1470_;
v___y_1493_ = v___y_1471_;
v___y_1494_ = v___y_1472_;
v___y_1495_ = v___y_1473_;
goto v___jp_1490_;
}
else
{
lean_dec_ref(v___f_1489_);
lean_del_object(v___x_1485_);
return v___x_1508_;
}
}
v___jp_1490_:
{
lean_object* v___x_1497_; 
lean_inc(v_numOverlaps_1476_);
if (v_isShared_1486_ == 0)
{
lean_ctor_set_tag(v___x_1485_, 1);
lean_ctor_set(v___x_1485_, 0, v_numOverlaps_1476_);
v___x_1497_ = v___x_1485_;
goto v_reusejp_1496_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_numOverlaps_1476_);
v___x_1497_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1496_;
}
v_reusejp_1496_:
{
lean_object* v___x_1498_; 
v___x_1498_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg(v_altType_1491_, v___x_1497_, v___f_1489_, v___x_1461_, v___x_1461_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
if (lean_obj_tag(v___x_1498_) == 0)
{
if (v_hasUnitThunk_1477_ == 0)
{
return v___x_1498_;
}
else
{
lean_object* v_a_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v_a_1499_ = lean_ctor_get(v___x_1498_, 0);
lean_inc(v_a_1499_);
lean_dec_ref_known(v___x_1498_, 1);
v___x_1500_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__6));
v___x_1501_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__10, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__10_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__10);
v___x_1502_ = lean_array_push(v___x_1501_, v_a_1499_);
v___x_1503_ = l_Lean_Meta_mkAppM(v___x_1500_, v___x_1502_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
return v___x_1503_;
}
}
else
{
return v___x_1498_;
}
}
}
}
}
else
{
lean_dec_ref(v_args_1469_);
lean_dec_ref(v_ys_1468_);
lean_dec(v_numDiscrEqs_1465_);
lean_dec(v_extraEqualities_1464_);
lean_dec_ref(v___x_1463_);
lean_dec(v_a_1460_);
lean_dec_ref(v_onAlt_1459_);
return v___x_1482_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_1511_ = _args[0];
lean_object* v___x_1512_ = _args[1];
lean_object* v_onAlt_1513_ = _args[2];
lean_object* v_a_1514_ = _args[3];
lean_object* v___x_1515_ = _args[4];
lean_object* v_useSplitter_1516_ = _args[5];
lean_object* v___x_1517_ = _args[6];
lean_object* v_extraEqualities_1518_ = _args[7];
lean_object* v_numDiscrEqs_1519_ = _args[8];
lean_object* v_hasUnitThunk_1520_ = _args[9];
lean_object* v___x_1521_ = _args[10];
lean_object* v_ys_1522_ = _args[11];
lean_object* v_args_1523_ = _args[12];
lean_object* v___y_1524_ = _args[13];
lean_object* v___y_1525_ = _args[14];
lean_object* v___y_1526_ = _args[15];
lean_object* v___y_1527_ = _args[16];
lean_object* v___y_1528_ = _args[17];
_start:
{
uint8_t v___x_69616__boxed_1529_; uint8_t v_useSplitter_boxed_1530_; uint8_t v_hasUnitThunk_boxed_1531_; lean_object* v_res_1532_; 
v___x_69616__boxed_1529_ = lean_unbox(v___x_1515_);
v_useSplitter_boxed_1530_ = lean_unbox(v_useSplitter_1516_);
v_hasUnitThunk_boxed_1531_ = lean_unbox(v_hasUnitThunk_1520_);
v_res_1532_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3(v___x_1511_, v___x_1512_, v_onAlt_1513_, v_a_1514_, v___x_69616__boxed_1529_, v_useSplitter_boxed_1530_, v___x_1517_, v_extraEqualities_1518_, v_numDiscrEqs_1519_, v_hasUnitThunk_boxed_1531_, v___x_1521_, v_ys_1522_, v_args_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
lean_dec(v___y_1527_);
lean_dec_ref(v___y_1526_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec(v___x_1521_);
lean_dec_ref(v___x_1511_);
return v_res_1532_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__0(void){
_start:
{
lean_object* v___x_1533_; 
v___x_1533_ = l_Array_instInhabited(lean_box(0));
return v___x_1533_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__1(void){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = l_Subarray_empty(lean_box(0));
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19(lean_object* v_msg_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v_toApplicative_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1611_; 
v___x_1541_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0);
v___x_1542_ = l_StateRefT_x27_instMonad___redArg(v___x_1541_);
v_toApplicative_1543_ = lean_ctor_get(v___x_1542_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1542_);
if (v_isSharedCheck_1611_ == 0)
{
lean_object* v_unused_1612_; 
v_unused_1612_ = lean_ctor_get(v___x_1542_, 1);
lean_dec(v_unused_1612_);
v___x_1545_ = v___x_1542_;
v_isShared_1546_ = v_isSharedCheck_1611_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_toApplicative_1543_);
lean_dec(v___x_1542_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1611_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v_toFunctor_1547_; lean_object* v_toSeq_1548_; lean_object* v_toSeqLeft_1549_; lean_object* v_toSeqRight_1550_; lean_object* v___x_1552_; uint8_t v_isShared_1553_; uint8_t v_isSharedCheck_1609_; 
v_toFunctor_1547_ = lean_ctor_get(v_toApplicative_1543_, 0);
v_toSeq_1548_ = lean_ctor_get(v_toApplicative_1543_, 2);
v_toSeqLeft_1549_ = lean_ctor_get(v_toApplicative_1543_, 3);
v_toSeqRight_1550_ = lean_ctor_get(v_toApplicative_1543_, 4);
v_isSharedCheck_1609_ = !lean_is_exclusive(v_toApplicative_1543_);
if (v_isSharedCheck_1609_ == 0)
{
lean_object* v_unused_1610_; 
v_unused_1610_ = lean_ctor_get(v_toApplicative_1543_, 1);
lean_dec(v_unused_1610_);
v___x_1552_ = v_toApplicative_1543_;
v_isShared_1553_ = v_isSharedCheck_1609_;
goto v_resetjp_1551_;
}
else
{
lean_inc(v_toSeqRight_1550_);
lean_inc(v_toSeqLeft_1549_);
lean_inc(v_toSeq_1548_);
lean_inc(v_toFunctor_1547_);
lean_dec(v_toApplicative_1543_);
v___x_1552_ = lean_box(0);
v_isShared_1553_ = v_isSharedCheck_1609_;
goto v_resetjp_1551_;
}
v_resetjp_1551_:
{
lean_object* v___f_1554_; lean_object* v___f_1555_; lean_object* v___f_1556_; lean_object* v___f_1557_; lean_object* v___x_1558_; lean_object* v___f_1559_; lean_object* v___f_1560_; lean_object* v___f_1561_; lean_object* v___x_1563_; 
v___f_1554_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__1));
v___f_1555_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__2));
lean_inc_ref(v_toFunctor_1547_);
v___f_1556_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1556_, 0, v_toFunctor_1547_);
v___f_1557_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1557_, 0, v_toFunctor_1547_);
v___x_1558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1558_, 0, v___f_1556_);
lean_ctor_set(v___x_1558_, 1, v___f_1557_);
v___f_1559_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1559_, 0, v_toSeqRight_1550_);
v___f_1560_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1560_, 0, v_toSeqLeft_1549_);
v___f_1561_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1561_, 0, v_toSeq_1548_);
if (v_isShared_1553_ == 0)
{
lean_ctor_set(v___x_1552_, 4, v___f_1559_);
lean_ctor_set(v___x_1552_, 3, v___f_1560_);
lean_ctor_set(v___x_1552_, 2, v___f_1561_);
lean_ctor_set(v___x_1552_, 1, v___f_1554_);
lean_ctor_set(v___x_1552_, 0, v___x_1558_);
v___x_1563_ = v___x_1552_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1608_; 
v_reuseFailAlloc_1608_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1608_, 0, v___x_1558_);
lean_ctor_set(v_reuseFailAlloc_1608_, 1, v___f_1554_);
lean_ctor_set(v_reuseFailAlloc_1608_, 2, v___f_1561_);
lean_ctor_set(v_reuseFailAlloc_1608_, 3, v___f_1560_);
lean_ctor_set(v_reuseFailAlloc_1608_, 4, v___f_1559_);
v___x_1563_ = v_reuseFailAlloc_1608_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
lean_object* v___x_1565_; 
if (v_isShared_1546_ == 0)
{
lean_ctor_set(v___x_1545_, 1, v___f_1555_);
lean_ctor_set(v___x_1545_, 0, v___x_1563_);
v___x_1565_ = v___x_1545_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1607_; 
v_reuseFailAlloc_1607_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1607_, 0, v___x_1563_);
lean_ctor_set(v_reuseFailAlloc_1607_, 1, v___f_1555_);
v___x_1565_ = v_reuseFailAlloc_1607_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
lean_object* v___x_1566_; lean_object* v_toApplicative_1567_; lean_object* v___x_1569_; uint8_t v_isShared_1570_; uint8_t v_isSharedCheck_1605_; 
v___x_1566_ = l_StateRefT_x27_instMonad___redArg(v___x_1565_);
v_toApplicative_1567_ = lean_ctor_get(v___x_1566_, 0);
v_isSharedCheck_1605_ = !lean_is_exclusive(v___x_1566_);
if (v_isSharedCheck_1605_ == 0)
{
lean_object* v_unused_1606_; 
v_unused_1606_ = lean_ctor_get(v___x_1566_, 1);
lean_dec(v_unused_1606_);
v___x_1569_ = v___x_1566_;
v_isShared_1570_ = v_isSharedCheck_1605_;
goto v_resetjp_1568_;
}
else
{
lean_inc(v_toApplicative_1567_);
lean_dec(v___x_1566_);
v___x_1569_ = lean_box(0);
v_isShared_1570_ = v_isSharedCheck_1605_;
goto v_resetjp_1568_;
}
v_resetjp_1568_:
{
lean_object* v_toFunctor_1571_; lean_object* v_toSeq_1572_; lean_object* v_toSeqLeft_1573_; lean_object* v_toSeqRight_1574_; lean_object* v___x_1576_; uint8_t v_isShared_1577_; uint8_t v_isSharedCheck_1603_; 
v_toFunctor_1571_ = lean_ctor_get(v_toApplicative_1567_, 0);
v_toSeq_1572_ = lean_ctor_get(v_toApplicative_1567_, 2);
v_toSeqLeft_1573_ = lean_ctor_get(v_toApplicative_1567_, 3);
v_toSeqRight_1574_ = lean_ctor_get(v_toApplicative_1567_, 4);
v_isSharedCheck_1603_ = !lean_is_exclusive(v_toApplicative_1567_);
if (v_isSharedCheck_1603_ == 0)
{
lean_object* v_unused_1604_; 
v_unused_1604_ = lean_ctor_get(v_toApplicative_1567_, 1);
lean_dec(v_unused_1604_);
v___x_1576_ = v_toApplicative_1567_;
v_isShared_1577_ = v_isSharedCheck_1603_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_toSeqRight_1574_);
lean_inc(v_toSeqLeft_1573_);
lean_inc(v_toSeq_1572_);
lean_inc(v_toFunctor_1571_);
lean_dec(v_toApplicative_1567_);
v___x_1576_ = lean_box(0);
v_isShared_1577_ = v_isSharedCheck_1603_;
goto v_resetjp_1575_;
}
v_resetjp_1575_:
{
lean_object* v___f_1578_; lean_object* v___f_1579_; lean_object* v___f_1580_; lean_object* v___f_1581_; lean_object* v___x_1582_; lean_object* v___f_1583_; lean_object* v___f_1584_; lean_object* v___f_1585_; lean_object* v___x_1587_; 
v___f_1578_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__3));
v___f_1579_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__4));
lean_inc_ref(v_toFunctor_1571_);
v___f_1580_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1580_, 0, v_toFunctor_1571_);
v___f_1581_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1581_, 0, v_toFunctor_1571_);
v___x_1582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1582_, 0, v___f_1580_);
lean_ctor_set(v___x_1582_, 1, v___f_1581_);
v___f_1583_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1583_, 0, v_toSeqRight_1574_);
v___f_1584_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1584_, 0, v_toSeqLeft_1573_);
v___f_1585_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1585_, 0, v_toSeq_1572_);
if (v_isShared_1577_ == 0)
{
lean_ctor_set(v___x_1576_, 4, v___f_1583_);
lean_ctor_set(v___x_1576_, 3, v___f_1584_);
lean_ctor_set(v___x_1576_, 2, v___f_1585_);
lean_ctor_set(v___x_1576_, 1, v___f_1578_);
lean_ctor_set(v___x_1576_, 0, v___x_1582_);
v___x_1587_ = v___x_1576_;
goto v_reusejp_1586_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v___x_1582_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v___f_1578_);
lean_ctor_set(v_reuseFailAlloc_1602_, 2, v___f_1585_);
lean_ctor_set(v_reuseFailAlloc_1602_, 3, v___f_1584_);
lean_ctor_set(v_reuseFailAlloc_1602_, 4, v___f_1583_);
v___x_1587_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1586_;
}
v_reusejp_1586_:
{
lean_object* v___x_1589_; 
if (v_isShared_1570_ == 0)
{
lean_ctor_set(v___x_1569_, 1, v___f_1579_);
lean_ctor_set(v___x_1569_, 0, v___x_1587_);
v___x_1589_ = v___x_1569_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v___x_1587_);
lean_ctor_set(v_reuseFailAlloc_1601_, 1, v___f_1579_);
v___x_1589_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_62919__overap_1599_; lean_object* v___x_1600_; 
v___x_1590_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__0);
v___x_1591_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__1, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__1_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___closed__1);
v___x_1592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1592_, 0, v___x_1591_);
lean_ctor_set(v___x_1592_, 1, v___x_1591_);
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1591_);
lean_ctor_set(v___x_1593_, 1, v___x_1592_);
v___x_1594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1594_, 0, v___x_1591_);
lean_ctor_set(v___x_1594_, 1, v___x_1593_);
v___x_1595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1591_);
lean_ctor_set(v___x_1595_, 1, v___x_1594_);
v___x_1596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1590_);
lean_ctor_set(v___x_1596_, 1, v___x_1595_);
v___x_1597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1597_, 0, v___x_1596_);
v___x_1598_ = l_instInhabitedOfMonad___redArg(v___x_1589_, v___x_1597_);
v___x_62919__overap_1599_ = lean_panic_fn_borrowed(v___x_1598_, v_msg_1535_);
lean_dec(v___x_1598_);
lean_inc(v___y_1539_);
lean_inc_ref(v___y_1538_);
lean_inc(v___y_1537_);
lean_inc_ref(v___y_1536_);
v___x_1600_ = lean_apply_5(v___x_62919__overap_1599_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_, lean_box(0));
return v___x_1600_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___boxed(lean_object* v_msg_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19(v_msg_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
return v_res_1619_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___closed__1(void){
_start:
{
lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; 
v___x_1621_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___closed__0));
v___x_1622_ = lean_unsigned_to_nat(6u);
v___x_1623_ = lean_unsigned_to_nat(358u);
v___x_1624_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__1));
v___x_1625_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___closed__0));
v___x_1626_ = l_mkPanicMessageWithDecl(v___x_1625_, v___x_1624_, v___x_1623_, v___x_1622_, v___x_1621_);
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg(lean_object* v_upperBound_1627_, lean_object* v_onAlt_1628_, uint8_t v_useSplitter_1629_, lean_object* v_extraEqualities_1630_, lean_object* v_numDiscrEqs_1631_, lean_object* v_a_1632_, lean_object* v_b_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_){
_start:
{
lean_object* v___y_1640_; uint8_t v___x_1663_; 
v___x_1663_ = lean_nat_dec_lt(v_a_1632_, v_upperBound_1627_);
if (v___x_1663_ == 0)
{
lean_object* v___x_1664_; 
lean_dec(v_a_1632_);
lean_dec(v_numDiscrEqs_1631_);
lean_dec(v_extraEqualities_1630_);
lean_dec_ref(v_onAlt_1628_);
v___x_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1664_, 0, v_b_1633_);
return v___x_1664_;
}
else
{
lean_object* v_snd_1665_; lean_object* v_snd_1666_; lean_object* v_snd_1667_; lean_object* v_snd_1668_; lean_object* v_snd_1669_; lean_object* v_fst_1670_; lean_object* v___x_1672_; uint8_t v_isShared_1673_; uint8_t v_isSharedCheck_1876_; 
v_snd_1665_ = lean_ctor_get(v_b_1633_, 1);
lean_inc(v_snd_1665_);
v_snd_1666_ = lean_ctor_get(v_snd_1665_, 1);
lean_inc(v_snd_1666_);
v_snd_1667_ = lean_ctor_get(v_snd_1666_, 1);
lean_inc(v_snd_1667_);
v_snd_1668_ = lean_ctor_get(v_snd_1667_, 1);
lean_inc(v_snd_1668_);
v_snd_1669_ = lean_ctor_get(v_snd_1668_, 1);
lean_inc(v_snd_1669_);
v_fst_1670_ = lean_ctor_get(v_b_1633_, 0);
v_isSharedCheck_1876_ = !lean_is_exclusive(v_b_1633_);
if (v_isSharedCheck_1876_ == 0)
{
lean_object* v_unused_1877_; 
v_unused_1877_ = lean_ctor_get(v_b_1633_, 1);
lean_dec(v_unused_1877_);
v___x_1672_ = v_b_1633_;
v_isShared_1673_ = v_isSharedCheck_1876_;
goto v_resetjp_1671_;
}
else
{
lean_inc(v_fst_1670_);
lean_dec(v_b_1633_);
v___x_1672_ = lean_box(0);
v_isShared_1673_ = v_isSharedCheck_1876_;
goto v_resetjp_1671_;
}
v_resetjp_1671_:
{
lean_object* v_fst_1674_; lean_object* v___x_1676_; uint8_t v_isShared_1677_; uint8_t v_isSharedCheck_1874_; 
v_fst_1674_ = lean_ctor_get(v_snd_1665_, 0);
v_isSharedCheck_1874_ = !lean_is_exclusive(v_snd_1665_);
if (v_isSharedCheck_1874_ == 0)
{
lean_object* v_unused_1875_; 
v_unused_1875_ = lean_ctor_get(v_snd_1665_, 1);
lean_dec(v_unused_1875_);
v___x_1676_ = v_snd_1665_;
v_isShared_1677_ = v_isSharedCheck_1874_;
goto v_resetjp_1675_;
}
else
{
lean_inc(v_fst_1674_);
lean_dec(v_snd_1665_);
v___x_1676_ = lean_box(0);
v_isShared_1677_ = v_isSharedCheck_1874_;
goto v_resetjp_1675_;
}
v_resetjp_1675_:
{
lean_object* v_fst_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1872_; 
v_fst_1678_ = lean_ctor_get(v_snd_1666_, 0);
v_isSharedCheck_1872_ = !lean_is_exclusive(v_snd_1666_);
if (v_isSharedCheck_1872_ == 0)
{
lean_object* v_unused_1873_; 
v_unused_1873_ = lean_ctor_get(v_snd_1666_, 1);
lean_dec(v_unused_1873_);
v___x_1680_ = v_snd_1666_;
v_isShared_1681_ = v_isSharedCheck_1872_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_fst_1678_);
lean_dec(v_snd_1666_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1872_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v_fst_1682_; lean_object* v___x_1684_; uint8_t v_isShared_1685_; uint8_t v_isSharedCheck_1870_; 
v_fst_1682_ = lean_ctor_get(v_snd_1667_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v_snd_1667_);
if (v_isSharedCheck_1870_ == 0)
{
lean_object* v_unused_1871_; 
v_unused_1871_ = lean_ctor_get(v_snd_1667_, 1);
lean_dec(v_unused_1871_);
v___x_1684_ = v_snd_1667_;
v_isShared_1685_ = v_isSharedCheck_1870_;
goto v_resetjp_1683_;
}
else
{
lean_inc(v_fst_1682_);
lean_dec(v_snd_1667_);
v___x_1684_ = lean_box(0);
v_isShared_1685_ = v_isSharedCheck_1870_;
goto v_resetjp_1683_;
}
v_resetjp_1683_:
{
lean_object* v_fst_1686_; lean_object* v___x_1688_; uint8_t v_isShared_1689_; uint8_t v_isSharedCheck_1868_; 
v_fst_1686_ = lean_ctor_get(v_snd_1668_, 0);
v_isSharedCheck_1868_ = !lean_is_exclusive(v_snd_1668_);
if (v_isSharedCheck_1868_ == 0)
{
lean_object* v_unused_1869_; 
v_unused_1869_ = lean_ctor_get(v_snd_1668_, 1);
lean_dec(v_unused_1869_);
v___x_1688_ = v_snd_1668_;
v_isShared_1689_ = v_isSharedCheck_1868_;
goto v_resetjp_1687_;
}
else
{
lean_inc(v_fst_1686_);
lean_dec(v_snd_1668_);
v___x_1688_ = lean_box(0);
v_isShared_1689_ = v_isSharedCheck_1868_;
goto v_resetjp_1687_;
}
v_resetjp_1687_:
{
lean_object* v_array_1690_; lean_object* v_start_1691_; lean_object* v_stop_1692_; uint8_t v___x_1693_; 
v_array_1690_ = lean_ctor_get(v_snd_1669_, 0);
v_start_1691_ = lean_ctor_get(v_snd_1669_, 1);
v_stop_1692_ = lean_ctor_get(v_snd_1669_, 2);
v___x_1693_ = lean_nat_dec_lt(v_start_1691_, v_stop_1692_);
if (v___x_1693_ == 0)
{
lean_object* v___x_1695_; 
if (v_isShared_1689_ == 0)
{
v___x_1695_ = v___x_1688_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v_fst_1686_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v_snd_1669_);
v___x_1695_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
lean_object* v___x_1697_; 
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 1, v___x_1695_);
v___x_1697_ = v___x_1684_;
goto v_reusejp_1696_;
}
else
{
lean_object* v_reuseFailAlloc_1709_; 
v_reuseFailAlloc_1709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1709_, 0, v_fst_1682_);
lean_ctor_set(v_reuseFailAlloc_1709_, 1, v___x_1695_);
v___x_1697_ = v_reuseFailAlloc_1709_;
goto v_reusejp_1696_;
}
v_reusejp_1696_:
{
lean_object* v___x_1699_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___x_1697_);
v___x_1699_ = v___x_1680_;
goto v_reusejp_1698_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_fst_1678_);
lean_ctor_set(v_reuseFailAlloc_1708_, 1, v___x_1697_);
v___x_1699_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1698_;
}
v_reusejp_1698_:
{
lean_object* v___x_1701_; 
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v___x_1699_);
v___x_1701_ = v___x_1676_;
goto v_reusejp_1700_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v_fst_1674_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v___x_1699_);
v___x_1701_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1700_;
}
v_reusejp_1700_:
{
lean_object* v___x_1703_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 1, v___x_1701_);
v___x_1703_ = v___x_1672_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_fst_1670_);
lean_ctor_set(v_reuseFailAlloc_1706_, 1, v___x_1701_);
v___x_1703_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
lean_object* v___x_1704_; lean_object* v___f_1705_; 
v___x_1704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1704_, 0, v___x_1703_);
v___f_1705_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1705_, 0, v___x_1704_);
v___y_1640_ = v___f_1705_;
goto v___jp_1639_;
}
}
}
}
}
}
else
{
lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1864_; 
lean_inc(v_stop_1692_);
lean_inc(v_start_1691_);
lean_inc_ref(v_array_1690_);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_snd_1669_);
if (v_isSharedCheck_1864_ == 0)
{
lean_object* v_unused_1865_; lean_object* v_unused_1866_; lean_object* v_unused_1867_; 
v_unused_1865_ = lean_ctor_get(v_snd_1669_, 2);
lean_dec(v_unused_1865_);
v_unused_1866_ = lean_ctor_get(v_snd_1669_, 1);
lean_dec(v_unused_1866_);
v_unused_1867_ = lean_ctor_get(v_snd_1669_, 0);
lean_dec(v_unused_1867_);
v___x_1712_ = v_snd_1669_;
v_isShared_1713_ = v_isSharedCheck_1864_;
goto v_resetjp_1711_;
}
else
{
lean_dec(v_snd_1669_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1864_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v_array_1714_; lean_object* v_start_1715_; lean_object* v_stop_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1721_; 
v_array_1714_ = lean_ctor_get(v_fst_1686_, 0);
v_start_1715_ = lean_ctor_get(v_fst_1686_, 1);
v_stop_1716_ = lean_ctor_get(v_fst_1686_, 2);
v___x_1717_ = lean_array_fget(v_array_1690_, v_start_1691_);
v___x_1718_ = lean_unsigned_to_nat(1u);
v___x_1719_ = lean_nat_add(v_start_1691_, v___x_1718_);
lean_dec(v_start_1691_);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 1, v___x_1719_);
v___x_1721_ = v___x_1712_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v_array_1690_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v___x_1719_);
lean_ctor_set(v_reuseFailAlloc_1863_, 2, v_stop_1692_);
v___x_1721_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
uint8_t v___x_1722_; 
v___x_1722_ = lean_nat_dec_lt(v_start_1715_, v_stop_1716_);
if (v___x_1722_ == 0)
{
lean_object* v___x_1724_; 
lean_dec(v___x_1717_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 1, v___x_1721_);
v___x_1724_ = v___x_1688_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_fst_1686_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v___x_1721_);
v___x_1724_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
lean_object* v___x_1726_; 
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 1, v___x_1724_);
v___x_1726_ = v___x_1684_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_fst_1682_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v___x_1724_);
v___x_1726_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
lean_object* v___x_1728_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___x_1726_);
v___x_1728_ = v___x_1680_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_fst_1678_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v___x_1726_);
v___x_1728_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
lean_object* v___x_1730_; 
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v___x_1728_);
v___x_1730_ = v___x_1676_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_fst_1674_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v___x_1728_);
v___x_1730_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
lean_object* v___x_1732_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 1, v___x_1730_);
v___x_1732_ = v___x_1672_;
goto v_reusejp_1731_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v_fst_1670_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v___x_1730_);
v___x_1732_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1731_;
}
v_reusejp_1731_:
{
lean_object* v___x_1733_; lean_object* v___f_1734_; 
v___x_1733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1733_, 0, v___x_1732_);
v___f_1734_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1734_, 0, v___x_1733_);
v___y_1640_ = v___f_1734_;
goto v___jp_1639_;
}
}
}
}
}
}
else
{
lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1859_; 
lean_inc(v_stop_1716_);
lean_inc(v_start_1715_);
lean_inc_ref(v_array_1714_);
v_isSharedCheck_1859_ = !lean_is_exclusive(v_fst_1686_);
if (v_isSharedCheck_1859_ == 0)
{
lean_object* v_unused_1860_; lean_object* v_unused_1861_; lean_object* v_unused_1862_; 
v_unused_1860_ = lean_ctor_get(v_fst_1686_, 2);
lean_dec(v_unused_1860_);
v_unused_1861_ = lean_ctor_get(v_fst_1686_, 1);
lean_dec(v_unused_1861_);
v_unused_1862_ = lean_ctor_get(v_fst_1686_, 0);
lean_dec(v_unused_1862_);
v___x_1741_ = v_fst_1686_;
v_isShared_1742_ = v_isSharedCheck_1859_;
goto v_resetjp_1740_;
}
else
{
lean_dec(v_fst_1686_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1859_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v_array_1743_; lean_object* v_start_1744_; lean_object* v_stop_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1749_; 
v_array_1743_ = lean_ctor_get(v_fst_1682_, 0);
v_start_1744_ = lean_ctor_get(v_fst_1682_, 1);
v_stop_1745_ = lean_ctor_get(v_fst_1682_, 2);
v___x_1746_ = lean_array_fget(v_array_1714_, v_start_1715_);
v___x_1747_ = lean_nat_add(v_start_1715_, v___x_1718_);
lean_dec(v_start_1715_);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 1, v___x_1747_);
v___x_1749_ = v___x_1741_;
goto v_reusejp_1748_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_array_1714_);
lean_ctor_set(v_reuseFailAlloc_1858_, 1, v___x_1747_);
lean_ctor_set(v_reuseFailAlloc_1858_, 2, v_stop_1716_);
v___x_1749_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1748_;
}
v_reusejp_1748_:
{
uint8_t v___x_1750_; 
v___x_1750_ = lean_nat_dec_lt(v_start_1744_, v_stop_1745_);
if (v___x_1750_ == 0)
{
lean_object* v___x_1752_; 
lean_dec(v___x_1746_);
lean_dec(v___x_1717_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 1, v___x_1721_);
lean_ctor_set(v___x_1688_, 0, v___x_1749_);
v___x_1752_ = v___x_1688_;
goto v_reusejp_1751_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1749_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v___x_1721_);
v___x_1752_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1751_;
}
v_reusejp_1751_:
{
lean_object* v___x_1754_; 
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 1, v___x_1752_);
v___x_1754_ = v___x_1684_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_fst_1682_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v___x_1752_);
v___x_1754_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
lean_object* v___x_1756_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___x_1754_);
v___x_1756_ = v___x_1680_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v_fst_1678_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v___x_1754_);
v___x_1756_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
lean_object* v___x_1758_; 
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v___x_1756_);
v___x_1758_ = v___x_1676_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_fst_1674_);
lean_ctor_set(v_reuseFailAlloc_1764_, 1, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
lean_object* v___x_1760_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 1, v___x_1758_);
v___x_1760_ = v___x_1672_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_fst_1670_);
lean_ctor_set(v_reuseFailAlloc_1763_, 1, v___x_1758_);
v___x_1760_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
lean_object* v___x_1761_; lean_object* v___f_1762_; 
v___x_1761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1761_, 0, v___x_1760_);
v___f_1762_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1762_, 0, v___x_1761_);
v___y_1640_ = v___f_1762_;
goto v___jp_1639_;
}
}
}
}
}
}
else
{
lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1854_; 
lean_inc(v_stop_1745_);
lean_inc(v_start_1744_);
lean_inc_ref(v_array_1743_);
v_isSharedCheck_1854_ = !lean_is_exclusive(v_fst_1682_);
if (v_isSharedCheck_1854_ == 0)
{
lean_object* v_unused_1855_; lean_object* v_unused_1856_; lean_object* v_unused_1857_; 
v_unused_1855_ = lean_ctor_get(v_fst_1682_, 2);
lean_dec(v_unused_1855_);
v_unused_1856_ = lean_ctor_get(v_fst_1682_, 1);
lean_dec(v_unused_1856_);
v_unused_1857_ = lean_ctor_get(v_fst_1682_, 0);
lean_dec(v_unused_1857_);
v___x_1769_ = v_fst_1682_;
v_isShared_1770_ = v_isSharedCheck_1854_;
goto v_resetjp_1768_;
}
else
{
lean_dec(v_fst_1682_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1854_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v_array_1771_; lean_object* v_start_1772_; lean_object* v_stop_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1777_; 
v_array_1771_ = lean_ctor_get(v_fst_1678_, 0);
v_start_1772_ = lean_ctor_get(v_fst_1678_, 1);
v_stop_1773_ = lean_ctor_get(v_fst_1678_, 2);
v___x_1774_ = lean_array_fget(v_array_1743_, v_start_1744_);
v___x_1775_ = lean_nat_add(v_start_1744_, v___x_1718_);
lean_dec(v_start_1744_);
if (v_isShared_1770_ == 0)
{
lean_ctor_set(v___x_1769_, 1, v___x_1775_);
v___x_1777_ = v___x_1769_;
goto v_reusejp_1776_;
}
else
{
lean_object* v_reuseFailAlloc_1853_; 
v_reuseFailAlloc_1853_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1853_, 0, v_array_1743_);
lean_ctor_set(v_reuseFailAlloc_1853_, 1, v___x_1775_);
lean_ctor_set(v_reuseFailAlloc_1853_, 2, v_stop_1745_);
v___x_1777_ = v_reuseFailAlloc_1853_;
goto v_reusejp_1776_;
}
v_reusejp_1776_:
{
uint8_t v___x_1778_; 
v___x_1778_ = lean_nat_dec_lt(v_start_1772_, v_stop_1773_);
if (v___x_1778_ == 0)
{
lean_object* v___x_1780_; 
lean_dec(v___x_1774_);
lean_dec(v___x_1746_);
lean_dec(v___x_1717_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 1, v___x_1721_);
lean_ctor_set(v___x_1688_, 0, v___x_1749_);
v___x_1780_ = v___x_1688_;
goto v_reusejp_1779_;
}
else
{
lean_object* v_reuseFailAlloc_1795_; 
v_reuseFailAlloc_1795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1795_, 0, v___x_1749_);
lean_ctor_set(v_reuseFailAlloc_1795_, 1, v___x_1721_);
v___x_1780_ = v_reuseFailAlloc_1795_;
goto v_reusejp_1779_;
}
v_reusejp_1779_:
{
lean_object* v___x_1782_; 
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 1, v___x_1780_);
lean_ctor_set(v___x_1684_, 0, v___x_1777_);
v___x_1782_ = v___x_1684_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v___x_1777_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
lean_object* v___x_1784_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___x_1782_);
v___x_1784_ = v___x_1680_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1793_; 
v_reuseFailAlloc_1793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1793_, 0, v_fst_1678_);
lean_ctor_set(v_reuseFailAlloc_1793_, 1, v___x_1782_);
v___x_1784_ = v_reuseFailAlloc_1793_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
lean_object* v___x_1786_; 
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v___x_1784_);
v___x_1786_ = v___x_1676_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1792_; 
v_reuseFailAlloc_1792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1792_, 0, v_fst_1674_);
lean_ctor_set(v_reuseFailAlloc_1792_, 1, v___x_1784_);
v___x_1786_ = v_reuseFailAlloc_1792_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
lean_object* v___x_1788_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 1, v___x_1786_);
v___x_1788_ = v___x_1672_;
goto v_reusejp_1787_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_fst_1670_);
lean_ctor_set(v_reuseFailAlloc_1791_, 1, v___x_1786_);
v___x_1788_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1787_;
}
v_reusejp_1787_:
{
lean_object* v___x_1789_; lean_object* v___f_1790_; 
v___x_1789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1789_, 0, v___x_1788_);
v___f_1790_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1790_, 0, v___x_1789_);
v___y_1640_ = v___f_1790_;
goto v___jp_1639_;
}
}
}
}
}
}
else
{
lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1849_; 
lean_inc(v_stop_1773_);
lean_inc(v_start_1772_);
lean_inc_ref(v_array_1771_);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_fst_1678_);
if (v_isSharedCheck_1849_ == 0)
{
lean_object* v_unused_1850_; lean_object* v_unused_1851_; lean_object* v_unused_1852_; 
v_unused_1850_ = lean_ctor_get(v_fst_1678_, 2);
lean_dec(v_unused_1850_);
v_unused_1851_ = lean_ctor_get(v_fst_1678_, 1);
lean_dec(v_unused_1851_);
v_unused_1852_ = lean_ctor_get(v_fst_1678_, 0);
lean_dec(v_unused_1852_);
v___x_1797_ = v_fst_1678_;
v_isShared_1798_ = v_isSharedCheck_1849_;
goto v_resetjp_1796_;
}
else
{
lean_dec(v_fst_1678_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1849_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v_array_1799_; lean_object* v_start_1800_; lean_object* v_stop_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1805_; 
v_array_1799_ = lean_ctor_get(v_fst_1674_, 0);
v_start_1800_ = lean_ctor_get(v_fst_1674_, 1);
v_stop_1801_ = lean_ctor_get(v_fst_1674_, 2);
v___x_1802_ = lean_array_fget(v_array_1771_, v_start_1772_);
v___x_1803_ = lean_nat_add(v_start_1772_, v___x_1718_);
lean_dec(v_start_1772_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 1, v___x_1803_);
v___x_1805_ = v___x_1797_;
goto v_reusejp_1804_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v_array_1771_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v___x_1803_);
lean_ctor_set(v_reuseFailAlloc_1848_, 2, v_stop_1773_);
v___x_1805_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1804_;
}
v_reusejp_1804_:
{
uint8_t v___x_1806_; 
v___x_1806_ = lean_nat_dec_lt(v_start_1800_, v_stop_1801_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1808_; 
lean_dec(v___x_1802_);
lean_dec(v___x_1774_);
lean_dec(v___x_1746_);
lean_dec(v___x_1717_);
if (v_isShared_1689_ == 0)
{
lean_ctor_set(v___x_1688_, 1, v___x_1721_);
lean_ctor_set(v___x_1688_, 0, v___x_1749_);
v___x_1808_ = v___x_1688_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1823_; 
v_reuseFailAlloc_1823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1823_, 0, v___x_1749_);
lean_ctor_set(v_reuseFailAlloc_1823_, 1, v___x_1721_);
v___x_1808_ = v_reuseFailAlloc_1823_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
lean_object* v___x_1810_; 
if (v_isShared_1685_ == 0)
{
lean_ctor_set(v___x_1684_, 1, v___x_1808_);
lean_ctor_set(v___x_1684_, 0, v___x_1777_);
v___x_1810_ = v___x_1684_;
goto v_reusejp_1809_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1777_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v___x_1808_);
v___x_1810_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1809_;
}
v_reusejp_1809_:
{
lean_object* v___x_1812_; 
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 1, v___x_1810_);
lean_ctor_set(v___x_1680_, 0, v___x_1805_);
v___x_1812_ = v___x_1680_;
goto v_reusejp_1811_;
}
else
{
lean_object* v_reuseFailAlloc_1821_; 
v_reuseFailAlloc_1821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1821_, 0, v___x_1805_);
lean_ctor_set(v_reuseFailAlloc_1821_, 1, v___x_1810_);
v___x_1812_ = v_reuseFailAlloc_1821_;
goto v_reusejp_1811_;
}
v_reusejp_1811_:
{
lean_object* v___x_1814_; 
if (v_isShared_1677_ == 0)
{
lean_ctor_set(v___x_1676_, 1, v___x_1812_);
v___x_1814_ = v___x_1676_;
goto v_reusejp_1813_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v_fst_1674_);
lean_ctor_set(v_reuseFailAlloc_1820_, 1, v___x_1812_);
v___x_1814_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1813_;
}
v_reusejp_1813_:
{
lean_object* v___x_1816_; 
if (v_isShared_1673_ == 0)
{
lean_ctor_set(v___x_1672_, 1, v___x_1814_);
v___x_1816_ = v___x_1672_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_fst_1670_);
lean_ctor_set(v_reuseFailAlloc_1819_, 1, v___x_1814_);
v___x_1816_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
lean_object* v___x_1817_; lean_object* v___f_1818_; 
v___x_1817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1816_);
v___f_1818_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1818_, 0, v___x_1817_);
v___y_1640_ = v___f_1818_;
goto v___jp_1639_;
}
}
}
}
}
}
else
{
lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1844_; 
lean_inc(v_stop_1801_);
lean_inc(v_start_1800_);
lean_inc_ref(v_array_1799_);
lean_del_object(v___x_1688_);
lean_del_object(v___x_1684_);
lean_del_object(v___x_1680_);
lean_del_object(v___x_1676_);
lean_del_object(v___x_1672_);
v_isSharedCheck_1844_ = !lean_is_exclusive(v_fst_1674_);
if (v_isSharedCheck_1844_ == 0)
{
lean_object* v_unused_1845_; lean_object* v_unused_1846_; lean_object* v_unused_1847_; 
v_unused_1845_ = lean_ctor_get(v_fst_1674_, 2);
lean_dec(v_unused_1845_);
v_unused_1846_ = lean_ctor_get(v_fst_1674_, 1);
lean_dec(v_unused_1846_);
v_unused_1847_ = lean_ctor_get(v_fst_1674_, 0);
lean_dec(v_unused_1847_);
v___x_1825_ = v_fst_1674_;
v_isShared_1826_ = v_isSharedCheck_1844_;
goto v_resetjp_1824_;
}
else
{
lean_dec(v_fst_1674_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1844_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v_numOverlaps_1827_; uint8_t v_hasUnitThunk_1828_; lean_object* v___x_1829_; uint8_t v___x_1830_; 
v_numOverlaps_1827_ = lean_ctor_get(v___x_1802_, 1);
v_hasUnitThunk_1828_ = lean_ctor_get_uint8(v___x_1802_, sizeof(void*)*2);
v___x_1829_ = lean_unsigned_to_nat(0u);
v___x_1830_ = lean_nat_dec_eq(v_numOverlaps_1827_, v___x_1829_);
if (v___x_1830_ == 0)
{
lean_object* v___x_1831_; lean_object* v___x_1832_; 
lean_del_object(v___x_1825_);
lean_dec_ref(v___x_1805_);
lean_dec(v___x_1802_);
lean_dec(v_stop_1801_);
lean_dec(v_start_1800_);
lean_dec_ref(v_array_1799_);
lean_dec_ref(v___x_1777_);
lean_dec(v___x_1774_);
lean_dec_ref(v___x_1749_);
lean_dec(v___x_1746_);
lean_dec_ref(v___x_1721_);
lean_dec(v___x_1717_);
lean_dec(v_fst_1670_);
v___x_1831_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___closed__1);
v___x_1832_ = lean_alloc_closure((void*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__19___boxed), 6, 1);
lean_closure_set(v___x_1832_, 0, v___x_1831_);
v___y_1640_ = v___x_1832_;
goto v___jp_1639_;
}
else
{
uint8_t v___x_1833_; lean_object* v___x_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___f_1838_; lean_object* v___x_1839_; lean_object* v___x_1841_; 
v___x_1833_ = 0;
v___x_1834_ = lean_array_fget_borrowed(v_array_1799_, v_start_1800_);
v___x_1835_ = lean_box(v___x_1833_);
v___x_1836_ = lean_box(v_useSplitter_1629_);
v___x_1837_ = lean_box(v_hasUnitThunk_1828_);
lean_inc(v_numDiscrEqs_1631_);
lean_inc(v_extraEqualities_1630_);
lean_inc(v___x_1834_);
lean_inc(v_a_1632_);
lean_inc_ref(v_onAlt_1628_);
v___f_1838_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__3___boxed), 18, 11);
lean_closure_set(v___f_1838_, 0, v___x_1774_);
lean_closure_set(v___f_1838_, 1, v___x_1717_);
lean_closure_set(v___f_1838_, 2, v_onAlt_1628_);
lean_closure_set(v___f_1838_, 3, v_a_1632_);
lean_closure_set(v___f_1838_, 4, v___x_1835_);
lean_closure_set(v___f_1838_, 5, v___x_1836_);
lean_closure_set(v___f_1838_, 6, v___x_1834_);
lean_closure_set(v___f_1838_, 7, v_extraEqualities_1630_);
lean_closure_set(v___f_1838_, 8, v_numDiscrEqs_1631_);
lean_closure_set(v___f_1838_, 9, v___x_1837_);
lean_closure_set(v___f_1838_, 10, v___x_1718_);
v___x_1839_ = lean_nat_add(v_start_1800_, v___x_1718_);
lean_dec(v_start_1800_);
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 1, v___x_1839_);
v___x_1841_ = v___x_1825_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_array_1799_);
lean_ctor_set(v_reuseFailAlloc_1843_, 1, v___x_1839_);
lean_ctor_set(v_reuseFailAlloc_1843_, 2, v_stop_1801_);
v___x_1841_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
lean_object* v___f_1842_; 
v___f_1842_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___lam__4___boxed), 14, 9);
lean_closure_set(v___f_1842_, 0, v___x_1746_);
lean_closure_set(v___f_1842_, 1, v___x_1802_);
lean_closure_set(v___f_1842_, 2, v___f_1838_);
lean_closure_set(v___f_1842_, 3, v_fst_1670_);
lean_closure_set(v___f_1842_, 4, v___x_1749_);
lean_closure_set(v___f_1842_, 5, v___x_1721_);
lean_closure_set(v___f_1842_, 6, v___x_1777_);
lean_closure_set(v___f_1842_, 7, v___x_1805_);
lean_closure_set(v___f_1842_, 8, v___x_1841_);
v___y_1640_ = v___f_1842_;
goto v___jp_1639_;
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
v___jp_1639_:
{
lean_object* v___x_1641_; 
lean_inc(v___y_1637_);
lean_inc_ref(v___y_1636_);
lean_inc(v___y_1635_);
lean_inc_ref(v___y_1634_);
v___x_1641_ = lean_apply_5(v___y_1640_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, lean_box(0));
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1654_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1644_ = v___x_1641_;
v_isShared_1645_ = v_isSharedCheck_1654_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_a_1642_);
lean_dec(v___x_1641_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1654_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
if (lean_obj_tag(v_a_1642_) == 0)
{
lean_object* v_a_1646_; lean_object* v___x_1648_; 
lean_dec(v_a_1632_);
lean_dec(v_numDiscrEqs_1631_);
lean_dec(v_extraEqualities_1630_);
lean_dec_ref(v_onAlt_1628_);
v_a_1646_ = lean_ctor_get(v_a_1642_, 0);
lean_inc(v_a_1646_);
lean_dec_ref_known(v_a_1642_, 1);
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 0, v_a_1646_);
v___x_1648_ = v___x_1644_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1646_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
else
{
lean_object* v_a_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
lean_del_object(v___x_1644_);
v_a_1650_ = lean_ctor_get(v_a_1642_, 0);
lean_inc(v_a_1650_);
lean_dec_ref_known(v_a_1642_, 1);
v___x_1651_ = lean_unsigned_to_nat(1u);
v___x_1652_ = lean_nat_add(v_a_1632_, v___x_1651_);
lean_dec(v_a_1632_);
v_a_1632_ = v___x_1652_;
v_b_1633_ = v_a_1650_;
goto _start;
}
}
}
else
{
lean_object* v_a_1655_; lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1662_; 
lean_dec(v_a_1632_);
lean_dec(v_numDiscrEqs_1631_);
lean_dec(v_extraEqualities_1630_);
lean_dec_ref(v_onAlt_1628_);
v_a_1655_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1657_ = v___x_1641_;
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
else
{
lean_inc(v_a_1655_);
lean_dec(v___x_1641_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1662_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1658_ == 0)
{
v___x_1660_ = v___x_1657_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_a_1655_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg___boxed(lean_object* v_upperBound_1878_, lean_object* v_onAlt_1879_, lean_object* v_useSplitter_1880_, lean_object* v_extraEqualities_1881_, lean_object* v_numDiscrEqs_1882_, lean_object* v_a_1883_, lean_object* v_b_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
uint8_t v_useSplitter_boxed_1890_; lean_object* v_res_1891_; 
v_useSplitter_boxed_1890_ = lean_unbox(v_useSplitter_1880_);
v_res_1891_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg(v_upperBound_1878_, v_onAlt_1879_, v_useSplitter_boxed_1890_, v_extraEqualities_1881_, v_numDiscrEqs_1882_, v_a_1883_, v_b_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_);
lean_dec(v___y_1888_);
lean_dec_ref(v___y_1887_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v_upperBound_1878_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__15(lean_object* v_as_1892_, size_t v_sz_1893_, size_t v_i_1894_, lean_object* v_b_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_){
_start:
{
lean_object* v_a_1902_; uint8_t v___x_1906_; 
v___x_1906_ = lean_usize_dec_lt(v_i_1894_, v_sz_1893_);
if (v___x_1906_ == 0)
{
lean_object* v___x_1907_; 
v___x_1907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1907_, 0, v_b_1895_);
return v___x_1907_;
}
else
{
lean_object* v_snd_1908_; lean_object* v_snd_1909_; lean_object* v_fst_1910_; lean_object* v___x_1912_; uint8_t v_isShared_1913_; uint8_t v_isSharedCheck_1970_; 
v_snd_1908_ = lean_ctor_get(v_b_1895_, 1);
lean_inc(v_snd_1908_);
v_snd_1909_ = lean_ctor_get(v_snd_1908_, 1);
lean_inc(v_snd_1909_);
v_fst_1910_ = lean_ctor_get(v_b_1895_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v_b_1895_);
if (v_isSharedCheck_1970_ == 0)
{
lean_object* v_unused_1971_; 
v_unused_1971_ = lean_ctor_get(v_b_1895_, 1);
lean_dec(v_unused_1971_);
v___x_1912_ = v_b_1895_;
v_isShared_1913_ = v_isSharedCheck_1970_;
goto v_resetjp_1911_;
}
else
{
lean_inc(v_fst_1910_);
lean_dec(v_b_1895_);
v___x_1912_ = lean_box(0);
v_isShared_1913_ = v_isSharedCheck_1970_;
goto v_resetjp_1911_;
}
v_resetjp_1911_:
{
lean_object* v_fst_1914_; lean_object* v___x_1916_; uint8_t v_isShared_1917_; uint8_t v_isSharedCheck_1968_; 
v_fst_1914_ = lean_ctor_get(v_snd_1908_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v_snd_1908_);
if (v_isSharedCheck_1968_ == 0)
{
lean_object* v_unused_1969_; 
v_unused_1969_ = lean_ctor_get(v_snd_1908_, 1);
lean_dec(v_unused_1969_);
v___x_1916_ = v_snd_1908_;
v_isShared_1917_ = v_isSharedCheck_1968_;
goto v_resetjp_1915_;
}
else
{
lean_inc(v_fst_1914_);
lean_dec(v_snd_1908_);
v___x_1916_ = lean_box(0);
v_isShared_1917_ = v_isSharedCheck_1968_;
goto v_resetjp_1915_;
}
v_resetjp_1915_:
{
lean_object* v_array_1918_; lean_object* v_start_1919_; lean_object* v_stop_1920_; uint8_t v___x_1921_; 
v_array_1918_ = lean_ctor_get(v_snd_1909_, 0);
v_start_1919_ = lean_ctor_get(v_snd_1909_, 1);
v_stop_1920_ = lean_ctor_get(v_snd_1909_, 2);
v___x_1921_ = lean_nat_dec_lt(v_start_1919_, v_stop_1920_);
if (v___x_1921_ == 0)
{
lean_object* v___x_1923_; 
if (v_isShared_1917_ == 0)
{
v___x_1923_ = v___x_1916_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_fst_1914_);
lean_ctor_set(v_reuseFailAlloc_1928_, 1, v_snd_1909_);
v___x_1923_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
lean_object* v___x_1925_; 
if (v_isShared_1913_ == 0)
{
lean_ctor_set(v___x_1912_, 1, v___x_1923_);
v___x_1925_ = v___x_1912_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_fst_1910_);
lean_ctor_set(v_reuseFailAlloc_1927_, 1, v___x_1923_);
v___x_1925_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
lean_object* v___x_1926_; 
v___x_1926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1926_, 0, v___x_1925_);
return v___x_1926_;
}
}
}
else
{
lean_object* v___x_1930_; uint8_t v_isShared_1931_; uint8_t v_isSharedCheck_1964_; 
lean_inc(v_stop_1920_);
lean_inc(v_start_1919_);
lean_inc_ref(v_array_1918_);
v_isSharedCheck_1964_ = !lean_is_exclusive(v_snd_1909_);
if (v_isSharedCheck_1964_ == 0)
{
lean_object* v_unused_1965_; lean_object* v_unused_1966_; lean_object* v_unused_1967_; 
v_unused_1965_ = lean_ctor_get(v_snd_1909_, 2);
lean_dec(v_unused_1965_);
v_unused_1966_ = lean_ctor_get(v_snd_1909_, 1);
lean_dec(v_unused_1966_);
v_unused_1967_ = lean_ctor_get(v_snd_1909_, 0);
lean_dec(v_unused_1967_);
v___x_1930_ = v_snd_1909_;
v_isShared_1931_ = v_isSharedCheck_1964_;
goto v_resetjp_1929_;
}
else
{
lean_dec(v_snd_1909_);
v___x_1930_ = lean_box(0);
v_isShared_1931_ = v_isSharedCheck_1964_;
goto v_resetjp_1929_;
}
v_resetjp_1929_:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1936_; 
v___x_1932_ = lean_array_fget(v_array_1918_, v_start_1919_);
v___x_1933_ = lean_unsigned_to_nat(1u);
v___x_1934_ = lean_nat_add(v_start_1919_, v___x_1933_);
lean_dec(v_start_1919_);
if (v_isShared_1931_ == 0)
{
lean_ctor_set(v___x_1930_, 1, v___x_1934_);
v___x_1936_ = v___x_1930_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v_array_1918_);
lean_ctor_set(v_reuseFailAlloc_1963_, 1, v___x_1934_);
lean_ctor_set(v_reuseFailAlloc_1963_, 2, v_stop_1920_);
v___x_1936_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
lean_object* v___y_1938_; 
if (lean_obj_tag(v___x_1932_) == 0)
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
lean_del_object(v___x_1916_);
lean_del_object(v___x_1912_);
v___x_1956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1956_, 0, v_fst_1914_);
lean_ctor_set(v___x_1956_, 1, v___x_1936_);
v___x_1957_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1957_, 0, v_fst_1910_);
lean_ctor_set(v___x_1957_, 1, v___x_1956_);
v_a_1902_ = v___x_1957_;
goto v___jp_1901_;
}
else
{
lean_object* v_val_1958_; lean_object* v_a_1959_; uint8_t v___x_1960_; 
v_val_1958_ = lean_ctor_get(v___x_1932_, 0);
lean_inc(v_val_1958_);
lean_dec_ref_known(v___x_1932_, 1);
v_a_1959_ = lean_array_uget_borrowed(v_as_1892_, v_i_1894_);
v___x_1960_ = lean_unbox(v_val_1958_);
lean_dec(v_val_1958_);
if (v___x_1960_ == 0)
{
lean_object* v___x_1961_; 
lean_inc(v_a_1959_);
v___x_1961_ = l_Lean_Meta_mkEqRefl(v_a_1959_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
v___y_1938_ = v___x_1961_;
goto v___jp_1937_;
}
else
{
lean_object* v___x_1962_; 
lean_inc(v_a_1959_);
v___x_1962_ = l_Lean_Meta_mkHEqRefl(v_a_1959_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
v___y_1938_ = v___x_1962_;
goto v___jp_1937_;
}
}
v___jp_1937_:
{
if (lean_obj_tag(v___y_1938_) == 0)
{
lean_object* v_a_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1943_; 
v_a_1939_ = lean_ctor_get(v___y_1938_, 0);
lean_inc(v_a_1939_);
lean_dec_ref_known(v___y_1938_, 1);
v___x_1940_ = lean_array_push(v_fst_1910_, v_a_1939_);
v___x_1941_ = lean_nat_add(v_fst_1914_, v___x_1933_);
lean_dec(v_fst_1914_);
if (v_isShared_1917_ == 0)
{
lean_ctor_set(v___x_1916_, 1, v___x_1936_);
lean_ctor_set(v___x_1916_, 0, v___x_1941_);
v___x_1943_ = v___x_1916_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v___x_1941_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v___x_1936_);
v___x_1943_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
lean_object* v___x_1945_; 
if (v_isShared_1913_ == 0)
{
lean_ctor_set(v___x_1912_, 1, v___x_1943_);
lean_ctor_set(v___x_1912_, 0, v___x_1940_);
v___x_1945_ = v___x_1912_;
goto v_reusejp_1944_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1940_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v___x_1943_);
v___x_1945_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1944_;
}
v_reusejp_1944_:
{
v_a_1902_ = v___x_1945_;
goto v___jp_1901_;
}
}
}
else
{
lean_object* v_a_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1955_; 
lean_dec_ref(v___x_1936_);
lean_del_object(v___x_1916_);
lean_dec(v_fst_1914_);
lean_del_object(v___x_1912_);
lean_dec(v_fst_1910_);
v_a_1948_ = lean_ctor_get(v___y_1938_, 0);
v_isSharedCheck_1955_ = !lean_is_exclusive(v___y_1938_);
if (v_isSharedCheck_1955_ == 0)
{
v___x_1950_ = v___y_1938_;
v_isShared_1951_ = v_isSharedCheck_1955_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_a_1948_);
lean_dec(v___y_1938_);
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
}
}
}
}
}
v___jp_1901_:
{
size_t v___x_1903_; size_t v___x_1904_; 
v___x_1903_ = ((size_t)1ULL);
v___x_1904_ = lean_usize_add(v_i_1894_, v___x_1903_);
v_i_1894_ = v___x_1904_;
v_b_1895_ = v_a_1902_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__15___boxed(lean_object* v_as_1972_, lean_object* v_sz_1973_, lean_object* v_i_1974_, lean_object* v_b_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
size_t v_sz_boxed_1981_; size_t v_i_boxed_1982_; lean_object* v_res_1983_; 
v_sz_boxed_1981_ = lean_unbox_usize(v_sz_1973_);
lean_dec(v_sz_1973_);
v_i_boxed_1982_ = lean_unbox_usize(v_i_1974_);
lean_dec(v_i_1974_);
v_res_1983_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__15(v_as_1972_, v_sz_boxed_1981_, v_i_boxed_1982_, v_b_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
lean_dec_ref(v_as_1972_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__5(lean_object* v___x_1984_, lean_object* v___x_1985_, lean_object* v___f_1986_, uint8_t v___x_1987_, lean_object* v_fst_1988_, lean_object* v___x_1989_, lean_object* v___x_1990_, lean_object* v___x_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v___x_1997_; 
v___x_1997_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg(v___x_1984_, v___x_1985_, v___f_1986_, v___x_1987_, v___x_1987_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_);
if (lean_obj_tag(v___x_1997_) == 0)
{
lean_object* v_a_1998_; lean_object* v___x_2000_; uint8_t v_isShared_2001_; uint8_t v_isSharedCheck_2010_; 
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2010_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2010_ == 0)
{
v___x_2000_ = v___x_1997_;
v_isShared_2001_ = v_isSharedCheck_2010_;
goto v_resetjp_1999_;
}
else
{
lean_inc(v_a_1998_);
lean_dec(v___x_1997_);
v___x_2000_ = lean_box(0);
v_isShared_2001_ = v_isSharedCheck_2010_;
goto v_resetjp_1999_;
}
v_resetjp_1999_:
{
lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2008_; 
v___x_2002_ = lean_array_push(v_fst_1988_, v_a_1998_);
v___x_2003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2003_, 0, v___x_1989_);
lean_ctor_set(v___x_2003_, 1, v___x_1990_);
v___x_2004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2004_, 0, v___x_1991_);
lean_ctor_set(v___x_2004_, 1, v___x_2003_);
v___x_2005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2005_, 0, v___x_2002_);
lean_ctor_set(v___x_2005_, 1, v___x_2004_);
v___x_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2006_, 0, v___x_2005_);
if (v_isShared_2001_ == 0)
{
lean_ctor_set(v___x_2000_, 0, v___x_2006_);
v___x_2008_ = v___x_2000_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_2006_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
return v___x_2008_;
}
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
lean_dec_ref(v___x_1991_);
lean_dec_ref(v___x_1990_);
lean_dec_ref(v___x_1989_);
lean_dec(v_fst_1988_);
v_a_2011_ = lean_ctor_get(v___x_1997_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_1997_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_1997_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_1997_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__5___boxed(lean_object* v___x_2019_, lean_object* v___x_2020_, lean_object* v___f_2021_, lean_object* v___x_2022_, lean_object* v_fst_2023_, lean_object* v___x_2024_, lean_object* v___x_2025_, lean_object* v___x_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
uint8_t v___x_70499__boxed_2032_; lean_object* v_res_2033_; 
v___x_70499__boxed_2032_ = lean_unbox(v___x_2022_);
v_res_2033_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__5(v___x_2019_, v___x_2020_, v___f_2021_, v___x_70499__boxed_2032_, v_fst_2023_, v___x_2024_, v___x_2025_, v___x_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16___redArg(lean_object* v_fvars_2034_, lean_object* v_names_2035_, lean_object* v_k_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_){
_start:
{
lean_object* v___x_2042_; 
v___x_2042_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_withUserNamesImpl(lean_box(0), v_fvars_2034_, v_names_2035_, v_k_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2042_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2042_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2048_; 
if (v_isShared_2046_ == 0)
{
v___x_2048_ = v___x_2045_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v_a_2043_);
v___x_2048_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
return v___x_2048_;
}
}
}
else
{
lean_object* v_a_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2058_; 
v_a_2051_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2058_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2058_ == 0)
{
v___x_2053_ = v___x_2042_;
v_isShared_2054_ = v_isSharedCheck_2058_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_a_2051_);
lean_dec(v___x_2042_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16___redArg___boxed(lean_object* v_fvars_2059_, lean_object* v_names_2060_, lean_object* v_k_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_){
_start:
{
lean_object* v_res_2067_; 
v_res_2067_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16___redArg(v_fvars_2059_, v_names_2060_, v_k_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
lean_dec(v___y_2063_);
lean_dec_ref(v___y_2062_);
lean_dec_ref(v_names_2060_);
lean_dec_ref(v_fvars_2059_);
return v_res_2067_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__1(lean_object* v___x_2068_, lean_object* v_xs_2069_, lean_object* v_remaining_x27_2070_, lean_object* v_ys4_2071_, lean_object* v_onAlt_2072_, lean_object* v_a_2073_, lean_object* v_altType_2074_, uint8_t v___x_2075_, uint8_t v___x_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_){
_start:
{
lean_object* v___x_2082_; 
v___x_2082_ = l_Lean_Meta_instantiateLambda(v___x_2068_, v_xs_2069_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v_a_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v_a_2083_ = lean_ctor_get(v___x_2082_, 0);
lean_inc(v_a_2083_);
lean_dec_ref_known(v___x_2082_, 1);
lean_inc_ref(v_ys4_2071_);
lean_inc_ref(v_remaining_x27_2070_);
lean_inc_ref_n(v_xs_2069_, 2);
v___x_2084_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2084_, 0, v_xs_2069_);
lean_ctor_set(v___x_2084_, 1, v_xs_2069_);
lean_ctor_set(v___x_2084_, 2, v_remaining_x27_2070_);
lean_ctor_set(v___x_2084_, 3, v_remaining_x27_2070_);
lean_ctor_set(v___x_2084_, 4, v_ys4_2071_);
lean_inc(v___y_2080_);
lean_inc_ref(v___y_2079_);
lean_inc(v___y_2078_);
lean_inc_ref(v___y_2077_);
v___x_2085_ = lean_apply_9(v_onAlt_2072_, v_a_2073_, v_altType_2074_, v___x_2084_, v_a_2083_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_, lean_box(0));
if (lean_obj_tag(v___x_2085_) == 0)
{
lean_object* v_a_2086_; lean_object* v___x_2087_; uint8_t v___x_2088_; lean_object* v___x_2089_; 
v_a_2086_ = lean_ctor_get(v___x_2085_, 0);
lean_inc(v_a_2086_);
lean_dec_ref_known(v___x_2085_, 1);
v___x_2087_ = l_Array_append___redArg(v_xs_2069_, v_ys4_2071_);
lean_dec_ref(v_ys4_2071_);
v___x_2088_ = 1;
v___x_2089_ = l_Lean_Meta_mkLambdaFVars(v___x_2087_, v_a_2086_, v___x_2075_, v___x_2076_, v___x_2075_, v___x_2076_, v___x_2088_, v___y_2077_, v___y_2078_, v___y_2079_, v___y_2080_);
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec_ref(v___x_2087_);
return v___x_2089_;
}
else
{
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec_ref(v_ys4_2071_);
lean_dec_ref(v_xs_2069_);
return v___x_2085_;
}
}
else
{
lean_dec(v___y_2080_);
lean_dec_ref(v___y_2079_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec_ref(v_altType_2074_);
lean_dec(v_a_2073_);
lean_dec_ref(v_onAlt_2072_);
lean_dec_ref(v_ys4_2071_);
lean_dec_ref(v_remaining_x27_2070_);
lean_dec_ref(v_xs_2069_);
return v___x_2082_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__1___boxed(lean_object* v___x_2090_, lean_object* v_xs_2091_, lean_object* v_remaining_x27_2092_, lean_object* v_ys4_2093_, lean_object* v_onAlt_2094_, lean_object* v_a_2095_, lean_object* v_altType_2096_, lean_object* v___x_2097_, lean_object* v___x_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
uint8_t v___x_70626__boxed_2104_; uint8_t v___x_70627__boxed_2105_; lean_object* v_res_2106_; 
v___x_70626__boxed_2104_ = lean_unbox(v___x_2097_);
v___x_70627__boxed_2105_ = lean_unbox(v___x_2098_);
v_res_2106_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__1(v___x_2090_, v_xs_2091_, v_remaining_x27_2092_, v_ys4_2093_, v_onAlt_2094_, v_a_2095_, v_altType_2096_, v___x_70626__boxed_2104_, v___x_70627__boxed_2105_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
return v_res_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg(lean_object* v_e_2107_, lean_object* v_k_2108_, uint8_t v_cleanupAnnotations_2109_, lean_object* v___y_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_){
_start:
{
lean_object* v___f_2115_; uint8_t v___x_2116_; uint8_t v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___f_2115_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2115_, 0, v_k_2108_);
v___x_2116_ = 1;
v___x_2117_ = 0;
v___x_2118_ = lean_box(0);
v___x_2119_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_2107_, v___x_2116_, v___x_2117_, v___x_2116_, v___x_2117_, v___x_2118_, v___f_2115_, v_cleanupAnnotations_2109_, v___y_2110_, v___y_2111_, v___y_2112_, v___y_2113_);
if (lean_obj_tag(v___x_2119_) == 0)
{
lean_object* v_a_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2127_; 
v_a_2120_ = lean_ctor_get(v___x_2119_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2119_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2122_ = v___x_2119_;
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_a_2120_);
lean_dec(v___x_2119_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2125_; 
if (v_isShared_2123_ == 0)
{
v___x_2125_ = v___x_2122_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_a_2120_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
else
{
lean_object* v_a_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2135_; 
v_a_2128_ = lean_ctor_get(v___x_2119_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2119_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2130_ = v___x_2119_;
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_a_2128_);
lean_dec(v___x_2119_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2135_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
lean_object* v___x_2133_; 
if (v_isShared_2131_ == 0)
{
v___x_2133_ = v___x_2130_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_a_2128_);
v___x_2133_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2132_;
}
v_reusejp_2132_:
{
return v___x_2133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg___boxed(lean_object* v_e_2136_, lean_object* v_k_2137_, lean_object* v_cleanupAnnotations_2138_, lean_object* v___y_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2144_; lean_object* v_res_2145_; 
v_cleanupAnnotations_boxed_2144_ = lean_unbox(v_cleanupAnnotations_2138_);
v_res_2145_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg(v_e_2136_, v_k_2137_, v_cleanupAnnotations_boxed_2144_, v___y_2139_, v___y_2140_, v___y_2141_, v___y_2142_);
lean_dec(v___y_2142_);
lean_dec_ref(v___y_2141_);
lean_dec(v___y_2140_);
lean_dec_ref(v___y_2139_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__2(lean_object* v___x_2146_, lean_object* v___f_2147_, uint8_t v___x_2148_, lean_object* v_xs_2149_, lean_object* v_remaining_x27_2150_, lean_object* v_onAlt_2151_, lean_object* v_a_2152_, uint8_t v___x_2153_, lean_object* v_ys4_2154_, lean_object* v_altType_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_){
_start:
{
lean_object* v___x_2161_; 
lean_inc_ref(v___x_2146_);
v___x_2161_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg(v___x_2146_, v___f_2147_, v___x_2148_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_);
if (lean_obj_tag(v___x_2161_) == 0)
{
lean_object* v_a_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___f_2165_; lean_object* v___x_2166_; 
v_a_2162_ = lean_ctor_get(v___x_2161_, 0);
lean_inc(v_a_2162_);
lean_dec_ref_known(v___x_2161_, 1);
v___x_2163_ = lean_box(v___x_2148_);
v___x_2164_ = lean_box(v___x_2153_);
lean_inc_ref(v_xs_2149_);
v___f_2165_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__1___boxed), 14, 9);
lean_closure_set(v___f_2165_, 0, v___x_2146_);
lean_closure_set(v___f_2165_, 1, v_xs_2149_);
lean_closure_set(v___f_2165_, 2, v_remaining_x27_2150_);
lean_closure_set(v___f_2165_, 3, v_ys4_2154_);
lean_closure_set(v___f_2165_, 4, v_onAlt_2151_);
lean_closure_set(v___f_2165_, 5, v_a_2152_);
lean_closure_set(v___f_2165_, 6, v_altType_2155_);
lean_closure_set(v___f_2165_, 7, v___x_2163_);
lean_closure_set(v___f_2165_, 8, v___x_2164_);
v___x_2166_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16___redArg(v_xs_2149_, v_a_2162_, v___f_2165_, v___y_2156_, v___y_2157_, v___y_2158_, v___y_2159_);
lean_dec(v_a_2162_);
lean_dec_ref(v_xs_2149_);
return v___x_2166_;
}
else
{
lean_object* v_a_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2174_; 
lean_dec_ref(v_altType_2155_);
lean_dec_ref(v_ys4_2154_);
lean_dec(v_a_2152_);
lean_dec_ref(v_onAlt_2151_);
lean_dec_ref(v_remaining_x27_2150_);
lean_dec_ref(v_xs_2149_);
lean_dec_ref(v___x_2146_);
v_a_2167_ = lean_ctor_get(v___x_2161_, 0);
v_isSharedCheck_2174_ = !lean_is_exclusive(v___x_2161_);
if (v_isSharedCheck_2174_ == 0)
{
v___x_2169_ = v___x_2161_;
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_a_2167_);
lean_dec(v___x_2161_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2174_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2172_; 
if (v_isShared_2170_ == 0)
{
v___x_2172_ = v___x_2169_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v_a_2167_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__2___boxed(lean_object* v___x_2175_, lean_object* v___f_2176_, lean_object* v___x_2177_, lean_object* v_xs_2178_, lean_object* v_remaining_x27_2179_, lean_object* v_onAlt_2180_, lean_object* v_a_2181_, lean_object* v___x_2182_, lean_object* v_ys4_2183_, lean_object* v_altType_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_){
_start:
{
uint8_t v___x_70726__boxed_2190_; uint8_t v___x_70727__boxed_2191_; lean_object* v_res_2192_; 
v___x_70726__boxed_2190_ = lean_unbox(v___x_2177_);
v___x_70727__boxed_2191_ = lean_unbox(v___x_2182_);
v_res_2192_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__2(v___x_2175_, v___f_2176_, v___x_70726__boxed_2190_, v_xs_2178_, v_remaining_x27_2179_, v_onAlt_2180_, v_a_2181_, v___x_70727__boxed_2191_, v_ys4_2183_, v_altType_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_);
lean_dec(v___y_2188_);
lean_dec_ref(v___y_2187_);
lean_dec(v___y_2186_);
lean_dec_ref(v___y_2185_);
return v_res_2192_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__4(lean_object* v___x_2193_, lean_object* v___f_2194_, uint8_t v___x_2195_, lean_object* v_remaining_x27_2196_, lean_object* v_onAlt_2197_, lean_object* v_a_2198_, uint8_t v___x_2199_, lean_object* v_extraEqualities_2200_, lean_object* v_xs_2201_, lean_object* v_altType_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___f_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; 
v___x_2208_ = lean_box(v___x_2195_);
v___x_2209_ = lean_box(v___x_2199_);
v___f_2210_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__2___boxed), 15, 8);
lean_closure_set(v___f_2210_, 0, v___x_2193_);
lean_closure_set(v___f_2210_, 1, v___f_2194_);
lean_closure_set(v___f_2210_, 2, v___x_2208_);
lean_closure_set(v___f_2210_, 3, v_xs_2201_);
lean_closure_set(v___f_2210_, 4, v_remaining_x27_2196_);
lean_closure_set(v___f_2210_, 5, v_onAlt_2197_);
lean_closure_set(v___f_2210_, 6, v_a_2198_);
lean_closure_set(v___f_2210_, 7, v___x_2209_);
v___x_2211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2211_, 0, v_extraEqualities_2200_);
v___x_2212_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg(v_altType_2202_, v___x_2211_, v___f_2210_, v___x_2195_, v___x_2195_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_);
return v___x_2212_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__4___boxed(lean_object* v___x_2213_, lean_object* v___f_2214_, lean_object* v___x_2215_, lean_object* v_remaining_x27_2216_, lean_object* v_onAlt_2217_, lean_object* v_a_2218_, lean_object* v___x_2219_, lean_object* v_extraEqualities_2220_, lean_object* v_xs_2221_, lean_object* v_altType_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
uint8_t v___x_70781__boxed_2228_; uint8_t v___x_70782__boxed_2229_; lean_object* v_res_2230_; 
v___x_70781__boxed_2228_ = lean_unbox(v___x_2215_);
v___x_70782__boxed_2229_ = lean_unbox(v___x_2219_);
v_res_2230_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__4(v___x_2213_, v___f_2214_, v___x_70781__boxed_2228_, v_remaining_x27_2216_, v_onAlt_2217_, v_a_2218_, v___x_70782__boxed_2229_, v_extraEqualities_2220_, v_xs_2221_, v_altType_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
lean_dec(v___y_2226_);
lean_dec_ref(v___y_2225_);
lean_dec(v___y_2224_);
lean_dec_ref(v___y_2223_);
return v_res_2230_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12___redArg(size_t v_sz_2231_, size_t v_i_2232_, lean_object* v_bs_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
uint8_t v___x_2238_; 
v___x_2238_ = lean_usize_dec_lt(v_i_2232_, v_sz_2231_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; 
v___x_2239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2239_, 0, v_bs_2233_);
return v___x_2239_;
}
else
{
lean_object* v_v_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; 
v_v_2240_ = lean_array_uget_borrowed(v_bs_2233_, v_i_2232_);
v___x_2241_ = l_Lean_Expr_fvarId_x21(v_v_2240_);
v___x_2242_ = l_Lean_FVarId_getUserName___redArg(v___x_2241_, v___y_2234_, v___y_2235_, v___y_2236_);
if (lean_obj_tag(v___x_2242_) == 0)
{
lean_object* v_a_2243_; lean_object* v___x_2244_; lean_object* v_bs_x27_2245_; size_t v___x_2246_; size_t v___x_2247_; lean_object* v___x_2248_; 
v_a_2243_ = lean_ctor_get(v___x_2242_, 0);
lean_inc(v_a_2243_);
lean_dec_ref_known(v___x_2242_, 1);
v___x_2244_ = lean_unsigned_to_nat(0u);
v_bs_x27_2245_ = lean_array_uset(v_bs_2233_, v_i_2232_, v___x_2244_);
v___x_2246_ = ((size_t)1ULL);
v___x_2247_ = lean_usize_add(v_i_2232_, v___x_2246_);
v___x_2248_ = lean_array_uset(v_bs_x27_2245_, v_i_2232_, v_a_2243_);
v_i_2232_ = v___x_2247_;
v_bs_2233_ = v___x_2248_;
goto _start;
}
else
{
lean_object* v_a_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2257_; 
lean_dec_ref(v_bs_2233_);
v_a_2250_ = lean_ctor_get(v___x_2242_, 0);
v_isSharedCheck_2257_ = !lean_is_exclusive(v___x_2242_);
if (v_isSharedCheck_2257_ == 0)
{
v___x_2252_ = v___x_2242_;
v_isShared_2253_ = v_isSharedCheck_2257_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_a_2250_);
lean_dec(v___x_2242_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2257_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___x_2255_; 
if (v_isShared_2253_ == 0)
{
v___x_2255_ = v___x_2252_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2256_; 
v_reuseFailAlloc_2256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2256_, 0, v_a_2250_);
v___x_2255_ = v_reuseFailAlloc_2256_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
return v___x_2255_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12___redArg___boxed(lean_object* v_sz_2258_, lean_object* v_i_2259_, lean_object* v_bs_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_){
_start:
{
size_t v_sz_boxed_2265_; size_t v_i_boxed_2266_; lean_object* v_res_2267_; 
v_sz_boxed_2265_ = lean_unbox_usize(v_sz_2258_);
lean_dec(v_sz_2258_);
v_i_boxed_2266_ = lean_unbox_usize(v_i_2259_);
lean_dec(v_i_2259_);
v_res_2267_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12___redArg(v_sz_boxed_2265_, v_i_boxed_2266_, v_bs_2260_, v___y_2261_, v___y_2262_, v___y_2263_);
lean_dec(v___y_2263_);
lean_dec_ref(v___y_2262_);
lean_dec_ref(v___y_2261_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__3(lean_object* v_xs_2268_, lean_object* v_x_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
size_t v_sz_2275_; size_t v___x_2276_; lean_object* v___x_2277_; 
v_sz_2275_ = lean_array_size(v_xs_2268_);
v___x_2276_ = ((size_t)0ULL);
v___x_2277_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12___redArg(v_sz_2275_, v___x_2276_, v_xs_2268_, v___y_2270_, v___y_2272_, v___y_2273_);
return v___x_2277_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__3___boxed(lean_object* v_xs_2278_, lean_object* v_x_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__3(v_xs_2278_, v_x_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec_ref(v_x_2279_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__0(lean_object* v___x_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v___x_2292_; 
v___x_2292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2292_, 0, v___x_2286_);
return v___x_2292_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__0___boxed(lean_object* v___x_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_){
_start:
{
lean_object* v_res_2299_; 
v_res_2299_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__0(v___x_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
return v_res_2299_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg(lean_object* v_upperBound_2301_, lean_object* v_onAlt_2302_, lean_object* v_extraEqualities_2303_, lean_object* v_a_2304_, lean_object* v_b_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_){
_start:
{
lean_object* v___y_2312_; uint8_t v___x_2335_; 
v___x_2335_ = lean_nat_dec_lt(v_a_2304_, v_upperBound_2301_);
if (v___x_2335_ == 0)
{
lean_object* v___x_2336_; 
lean_dec(v_a_2304_);
lean_dec(v_extraEqualities_2303_);
lean_dec_ref(v_onAlt_2302_);
v___x_2336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2336_, 0, v_b_2305_);
return v___x_2336_;
}
else
{
lean_object* v_snd_2337_; lean_object* v_snd_2338_; lean_object* v_snd_2339_; lean_object* v_fst_2340_; lean_object* v___x_2342_; uint8_t v_isShared_2343_; uint8_t v_isSharedCheck_2447_; 
v_snd_2337_ = lean_ctor_get(v_b_2305_, 1);
lean_inc(v_snd_2337_);
v_snd_2338_ = lean_ctor_get(v_snd_2337_, 1);
lean_inc(v_snd_2338_);
v_snd_2339_ = lean_ctor_get(v_snd_2338_, 1);
lean_inc(v_snd_2339_);
v_fst_2340_ = lean_ctor_get(v_b_2305_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v_b_2305_);
if (v_isSharedCheck_2447_ == 0)
{
lean_object* v_unused_2448_; 
v_unused_2448_ = lean_ctor_get(v_b_2305_, 1);
lean_dec(v_unused_2448_);
v___x_2342_ = v_b_2305_;
v_isShared_2343_ = v_isSharedCheck_2447_;
goto v_resetjp_2341_;
}
else
{
lean_inc(v_fst_2340_);
lean_dec(v_b_2305_);
v___x_2342_ = lean_box(0);
v_isShared_2343_ = v_isSharedCheck_2447_;
goto v_resetjp_2341_;
}
v_resetjp_2341_:
{
lean_object* v_fst_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2445_; 
v_fst_2344_ = lean_ctor_get(v_snd_2337_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v_snd_2337_);
if (v_isSharedCheck_2445_ == 0)
{
lean_object* v_unused_2446_; 
v_unused_2446_ = lean_ctor_get(v_snd_2337_, 1);
lean_dec(v_unused_2446_);
v___x_2346_ = v_snd_2337_;
v_isShared_2347_ = v_isSharedCheck_2445_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_fst_2344_);
lean_dec(v_snd_2337_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2445_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v_fst_2348_; lean_object* v___x_2350_; uint8_t v_isShared_2351_; uint8_t v_isSharedCheck_2443_; 
v_fst_2348_ = lean_ctor_get(v_snd_2338_, 0);
v_isSharedCheck_2443_ = !lean_is_exclusive(v_snd_2338_);
if (v_isSharedCheck_2443_ == 0)
{
lean_object* v_unused_2444_; 
v_unused_2444_ = lean_ctor_get(v_snd_2338_, 1);
lean_dec(v_unused_2444_);
v___x_2350_ = v_snd_2338_;
v_isShared_2351_ = v_isSharedCheck_2443_;
goto v_resetjp_2349_;
}
else
{
lean_inc(v_fst_2348_);
lean_dec(v_snd_2338_);
v___x_2350_ = lean_box(0);
v_isShared_2351_ = v_isSharedCheck_2443_;
goto v_resetjp_2349_;
}
v_resetjp_2349_:
{
lean_object* v_array_2352_; lean_object* v_start_2353_; lean_object* v_stop_2354_; uint8_t v___x_2355_; 
v_array_2352_ = lean_ctor_get(v_snd_2339_, 0);
v_start_2353_ = lean_ctor_get(v_snd_2339_, 1);
v_stop_2354_ = lean_ctor_get(v_snd_2339_, 2);
v___x_2355_ = lean_nat_dec_lt(v_start_2353_, v_stop_2354_);
if (v___x_2355_ == 0)
{
lean_object* v___x_2357_; 
if (v_isShared_2351_ == 0)
{
v___x_2357_ = v___x_2350_;
goto v_reusejp_2356_;
}
else
{
lean_object* v_reuseFailAlloc_2366_; 
v_reuseFailAlloc_2366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2366_, 0, v_fst_2348_);
lean_ctor_set(v_reuseFailAlloc_2366_, 1, v_snd_2339_);
v___x_2357_ = v_reuseFailAlloc_2366_;
goto v_reusejp_2356_;
}
v_reusejp_2356_:
{
lean_object* v___x_2359_; 
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 1, v___x_2357_);
v___x_2359_ = v___x_2346_;
goto v_reusejp_2358_;
}
else
{
lean_object* v_reuseFailAlloc_2365_; 
v_reuseFailAlloc_2365_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2365_, 0, v_fst_2344_);
lean_ctor_set(v_reuseFailAlloc_2365_, 1, v___x_2357_);
v___x_2359_ = v_reuseFailAlloc_2365_;
goto v_reusejp_2358_;
}
v_reusejp_2358_:
{
lean_object* v___x_2361_; 
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 1, v___x_2359_);
v___x_2361_ = v___x_2342_;
goto v_reusejp_2360_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_fst_2340_);
lean_ctor_set(v_reuseFailAlloc_2364_, 1, v___x_2359_);
v___x_2361_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2360_;
}
v_reusejp_2360_:
{
lean_object* v___x_2362_; lean_object* v___f_2363_; 
v___x_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
v___f_2363_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2363_, 0, v___x_2362_);
v___y_2312_ = v___f_2363_;
goto v___jp_2311_;
}
}
}
}
else
{
lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2439_; 
lean_inc(v_stop_2354_);
lean_inc(v_start_2353_);
lean_inc_ref(v_array_2352_);
v_isSharedCheck_2439_ = !lean_is_exclusive(v_snd_2339_);
if (v_isSharedCheck_2439_ == 0)
{
lean_object* v_unused_2440_; lean_object* v_unused_2441_; lean_object* v_unused_2442_; 
v_unused_2440_ = lean_ctor_get(v_snd_2339_, 2);
lean_dec(v_unused_2440_);
v_unused_2441_ = lean_ctor_get(v_snd_2339_, 1);
lean_dec(v_unused_2441_);
v_unused_2442_ = lean_ctor_get(v_snd_2339_, 0);
lean_dec(v_unused_2442_);
v___x_2368_ = v_snd_2339_;
v_isShared_2369_ = v_isSharedCheck_2439_;
goto v_resetjp_2367_;
}
else
{
lean_dec(v_snd_2339_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2439_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v_array_2370_; lean_object* v_start_2371_; lean_object* v_stop_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2377_; 
v_array_2370_ = lean_ctor_get(v_fst_2348_, 0);
v_start_2371_ = lean_ctor_get(v_fst_2348_, 1);
v_stop_2372_ = lean_ctor_get(v_fst_2348_, 2);
v___x_2373_ = lean_array_fget(v_array_2352_, v_start_2353_);
v___x_2374_ = lean_unsigned_to_nat(1u);
v___x_2375_ = lean_nat_add(v_start_2353_, v___x_2374_);
lean_dec(v_start_2353_);
if (v_isShared_2369_ == 0)
{
lean_ctor_set(v___x_2368_, 1, v___x_2375_);
v___x_2377_ = v___x_2368_;
goto v_reusejp_2376_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v_array_2352_);
lean_ctor_set(v_reuseFailAlloc_2438_, 1, v___x_2375_);
lean_ctor_set(v_reuseFailAlloc_2438_, 2, v_stop_2354_);
v___x_2377_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2376_;
}
v_reusejp_2376_:
{
uint8_t v___x_2378_; 
v___x_2378_ = lean_nat_dec_lt(v_start_2371_, v_stop_2372_);
if (v___x_2378_ == 0)
{
lean_object* v___x_2380_; 
lean_dec(v___x_2373_);
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 1, v___x_2377_);
v___x_2380_ = v___x_2350_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_fst_2348_);
lean_ctor_set(v_reuseFailAlloc_2389_, 1, v___x_2377_);
v___x_2380_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
lean_object* v___x_2382_; 
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 1, v___x_2380_);
v___x_2382_ = v___x_2346_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2388_; 
v_reuseFailAlloc_2388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2388_, 0, v_fst_2344_);
lean_ctor_set(v_reuseFailAlloc_2388_, 1, v___x_2380_);
v___x_2382_ = v_reuseFailAlloc_2388_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
lean_object* v___x_2384_; 
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 1, v___x_2382_);
v___x_2384_ = v___x_2342_;
goto v_reusejp_2383_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_fst_2340_);
lean_ctor_set(v_reuseFailAlloc_2387_, 1, v___x_2382_);
v___x_2384_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2383_;
}
v_reusejp_2383_:
{
lean_object* v___x_2385_; lean_object* v___f_2386_; 
v___x_2385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2385_, 0, v___x_2384_);
v___f_2386_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2386_, 0, v___x_2385_);
v___y_2312_ = v___f_2386_;
goto v___jp_2311_;
}
}
}
}
else
{
lean_object* v___x_2391_; uint8_t v_isShared_2392_; uint8_t v_isSharedCheck_2434_; 
lean_inc(v_stop_2372_);
lean_inc(v_start_2371_);
lean_inc_ref(v_array_2370_);
v_isSharedCheck_2434_ = !lean_is_exclusive(v_fst_2348_);
if (v_isSharedCheck_2434_ == 0)
{
lean_object* v_unused_2435_; lean_object* v_unused_2436_; lean_object* v_unused_2437_; 
v_unused_2435_ = lean_ctor_get(v_fst_2348_, 2);
lean_dec(v_unused_2435_);
v_unused_2436_ = lean_ctor_get(v_fst_2348_, 1);
lean_dec(v_unused_2436_);
v_unused_2437_ = lean_ctor_get(v_fst_2348_, 0);
lean_dec(v_unused_2437_);
v___x_2391_ = v_fst_2348_;
v_isShared_2392_ = v_isSharedCheck_2434_;
goto v_resetjp_2390_;
}
else
{
lean_dec(v_fst_2348_);
v___x_2391_ = lean_box(0);
v_isShared_2392_ = v_isSharedCheck_2434_;
goto v_resetjp_2390_;
}
v_resetjp_2390_:
{
lean_object* v_array_2393_; lean_object* v_start_2394_; lean_object* v_stop_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2399_; 
v_array_2393_ = lean_ctor_get(v_fst_2344_, 0);
v_start_2394_ = lean_ctor_get(v_fst_2344_, 1);
v_stop_2395_ = lean_ctor_get(v_fst_2344_, 2);
v___x_2396_ = lean_array_fget(v_array_2370_, v_start_2371_);
v___x_2397_ = lean_nat_add(v_start_2371_, v___x_2374_);
lean_dec(v_start_2371_);
if (v_isShared_2392_ == 0)
{
lean_ctor_set(v___x_2391_, 1, v___x_2397_);
v___x_2399_ = v___x_2391_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2433_; 
v_reuseFailAlloc_2433_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2433_, 0, v_array_2370_);
lean_ctor_set(v_reuseFailAlloc_2433_, 1, v___x_2397_);
lean_ctor_set(v_reuseFailAlloc_2433_, 2, v_stop_2372_);
v___x_2399_ = v_reuseFailAlloc_2433_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
uint8_t v___x_2400_; 
v___x_2400_ = lean_nat_dec_lt(v_start_2394_, v_stop_2395_);
if (v___x_2400_ == 0)
{
lean_object* v___x_2402_; 
lean_dec(v___x_2396_);
lean_dec(v___x_2373_);
if (v_isShared_2351_ == 0)
{
lean_ctor_set(v___x_2350_, 1, v___x_2377_);
lean_ctor_set(v___x_2350_, 0, v___x_2399_);
v___x_2402_ = v___x_2350_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v___x_2399_);
lean_ctor_set(v_reuseFailAlloc_2411_, 1, v___x_2377_);
v___x_2402_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
lean_object* v___x_2404_; 
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 1, v___x_2402_);
v___x_2404_ = v___x_2346_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v_fst_2344_);
lean_ctor_set(v_reuseFailAlloc_2410_, 1, v___x_2402_);
v___x_2404_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
lean_object* v___x_2406_; 
if (v_isShared_2343_ == 0)
{
lean_ctor_set(v___x_2342_, 1, v___x_2404_);
v___x_2406_ = v___x_2342_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_fst_2340_);
lean_ctor_set(v_reuseFailAlloc_2409_, 1, v___x_2404_);
v___x_2406_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___x_2407_; lean_object* v___f_2408_; 
v___x_2407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2407_, 0, v___x_2406_);
v___f_2408_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2408_, 0, v___x_2407_);
v___y_2312_ = v___f_2408_;
goto v___jp_2311_;
}
}
}
}
else
{
lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2429_; 
lean_inc(v_stop_2395_);
lean_inc(v_start_2394_);
lean_inc_ref(v_array_2393_);
lean_del_object(v___x_2350_);
lean_del_object(v___x_2346_);
lean_del_object(v___x_2342_);
v_isSharedCheck_2429_ = !lean_is_exclusive(v_fst_2344_);
if (v_isSharedCheck_2429_ == 0)
{
lean_object* v_unused_2430_; lean_object* v_unused_2431_; lean_object* v_unused_2432_; 
v_unused_2430_ = lean_ctor_get(v_fst_2344_, 2);
lean_dec(v_unused_2430_);
v_unused_2431_ = lean_ctor_get(v_fst_2344_, 1);
lean_dec(v_unused_2431_);
v_unused_2432_ = lean_ctor_get(v_fst_2344_, 0);
lean_dec(v_unused_2432_);
v___x_2413_ = v_fst_2344_;
v_isShared_2414_ = v_isSharedCheck_2429_;
goto v_resetjp_2412_;
}
else
{
lean_dec(v_fst_2344_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2429_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___f_2415_; uint8_t v___x_2416_; lean_object* v_remaining_x27_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___f_2421_; lean_object* v___x_2422_; lean_object* v___x_2424_; 
v___f_2415_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___closed__0));
v___x_2416_ = 0;
v_remaining_x27_2417_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2));
v___x_2418_ = lean_array_fget_borrowed(v_array_2393_, v_start_2394_);
v___x_2419_ = lean_box(v___x_2416_);
v___x_2420_ = lean_box(v___x_2400_);
lean_inc(v_extraEqualities_2303_);
lean_inc(v_a_2304_);
lean_inc_ref(v_onAlt_2302_);
lean_inc(v___x_2418_);
v___f_2421_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__4___boxed), 15, 8);
lean_closure_set(v___f_2421_, 0, v___x_2418_);
lean_closure_set(v___f_2421_, 1, v___f_2415_);
lean_closure_set(v___f_2421_, 2, v___x_2419_);
lean_closure_set(v___f_2421_, 3, v_remaining_x27_2417_);
lean_closure_set(v___f_2421_, 4, v_onAlt_2302_);
lean_closure_set(v___f_2421_, 5, v_a_2304_);
lean_closure_set(v___f_2421_, 6, v___x_2420_);
lean_closure_set(v___f_2421_, 7, v_extraEqualities_2303_);
v___x_2422_ = lean_nat_add(v_start_2394_, v___x_2374_);
lean_dec(v_start_2394_);
if (v_isShared_2414_ == 0)
{
lean_ctor_set(v___x_2413_, 1, v___x_2422_);
v___x_2424_ = v___x_2413_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_array_2393_);
lean_ctor_set(v_reuseFailAlloc_2428_, 1, v___x_2422_);
lean_ctor_set(v_reuseFailAlloc_2428_, 2, v_stop_2395_);
v___x_2424_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___f_2427_; 
v___x_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2396_);
v___x_2426_ = lean_box(v___x_2416_);
v___f_2427_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___lam__5___boxed), 13, 8);
lean_closure_set(v___f_2427_, 0, v___x_2373_);
lean_closure_set(v___f_2427_, 1, v___x_2425_);
lean_closure_set(v___f_2427_, 2, v___f_2421_);
lean_closure_set(v___f_2427_, 3, v___x_2426_);
lean_closure_set(v___f_2427_, 4, v_fst_2340_);
lean_closure_set(v___f_2427_, 5, v___x_2399_);
lean_closure_set(v___f_2427_, 6, v___x_2377_);
lean_closure_set(v___f_2427_, 7, v___x_2424_);
v___y_2312_ = v___f_2427_;
goto v___jp_2311_;
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
v___jp_2311_:
{
lean_object* v___x_2313_; 
lean_inc(v___y_2309_);
lean_inc_ref(v___y_2308_);
lean_inc(v___y_2307_);
lean_inc_ref(v___y_2306_);
v___x_2313_ = lean_apply_5(v___y_2312_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, lean_box(0));
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2326_; 
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2316_ = v___x_2313_;
v_isShared_2317_ = v_isSharedCheck_2326_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2313_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2326_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
if (lean_obj_tag(v_a_2314_) == 0)
{
lean_object* v_a_2318_; lean_object* v___x_2320_; 
lean_dec(v_a_2304_);
lean_dec(v_extraEqualities_2303_);
lean_dec_ref(v_onAlt_2302_);
v_a_2318_ = lean_ctor_get(v_a_2314_, 0);
lean_inc(v_a_2318_);
lean_dec_ref_known(v_a_2314_, 1);
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 0, v_a_2318_);
v___x_2320_ = v___x_2316_;
goto v_reusejp_2319_;
}
else
{
lean_object* v_reuseFailAlloc_2321_; 
v_reuseFailAlloc_2321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2321_, 0, v_a_2318_);
v___x_2320_ = v_reuseFailAlloc_2321_;
goto v_reusejp_2319_;
}
v_reusejp_2319_:
{
return v___x_2320_;
}
}
else
{
lean_object* v_a_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
lean_del_object(v___x_2316_);
v_a_2322_ = lean_ctor_get(v_a_2314_, 0);
lean_inc(v_a_2322_);
lean_dec_ref_known(v_a_2314_, 1);
v___x_2323_ = lean_unsigned_to_nat(1u);
v___x_2324_ = lean_nat_add(v_a_2304_, v___x_2323_);
lean_dec(v_a_2304_);
v_a_2304_ = v___x_2324_;
v_b_2305_ = v_a_2322_;
goto _start;
}
}
}
else
{
lean_object* v_a_2327_; lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2334_; 
lean_dec(v_a_2304_);
lean_dec(v_extraEqualities_2303_);
lean_dec_ref(v_onAlt_2302_);
v_a_2327_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2329_ = v___x_2313_;
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
else
{
lean_inc(v_a_2327_);
lean_dec(v___x_2313_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2334_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2332_; 
if (v_isShared_2330_ == 0)
{
v___x_2332_ = v___x_2329_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2333_; 
v_reuseFailAlloc_2333_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2333_, 0, v_a_2327_);
v___x_2332_ = v_reuseFailAlloc_2333_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
return v___x_2332_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg___boxed(lean_object* v_upperBound_2449_, lean_object* v_onAlt_2450_, lean_object* v_extraEqualities_2451_, lean_object* v_a_2452_, lean_object* v_b_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_){
_start:
{
lean_object* v_res_2459_; 
v_res_2459_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg(v_upperBound_2449_, v_onAlt_2450_, v_extraEqualities_2451_, v_a_2452_, v_b_2453_, v___y_2454_, v___y_2455_, v___y_2456_, v___y_2457_);
lean_dec(v___y_2457_);
lean_dec_ref(v___y_2456_);
lean_dec(v___y_2455_);
lean_dec_ref(v___y_2454_);
lean_dec(v_upperBound_2449_);
return v_res_2459_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__13(lean_object* v_onParams_2460_, size_t v_sz_2461_, size_t v_i_2462_, lean_object* v_bs_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_){
_start:
{
uint8_t v___x_2469_; 
v___x_2469_ = lean_usize_dec_lt(v_i_2462_, v_sz_2461_);
if (v___x_2469_ == 0)
{
lean_object* v___x_2470_; 
lean_dec_ref(v_onParams_2460_);
v___x_2470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2470_, 0, v_bs_2463_);
return v___x_2470_;
}
else
{
lean_object* v_v_2471_; lean_object* v___x_2472_; 
v_v_2471_ = lean_array_uget_borrowed(v_bs_2463_, v_i_2462_);
lean_inc_ref(v_onParams_2460_);
lean_inc(v___y_2467_);
lean_inc_ref(v___y_2466_);
lean_inc(v___y_2465_);
lean_inc_ref(v___y_2464_);
lean_inc(v_v_2471_);
v___x_2472_ = lean_apply_6(v_onParams_2460_, v_v_2471_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, lean_box(0));
if (lean_obj_tag(v___x_2472_) == 0)
{
lean_object* v_a_2473_; lean_object* v___x_2474_; lean_object* v_bs_x27_2475_; size_t v___x_2476_; size_t v___x_2477_; lean_object* v___x_2478_; 
v_a_2473_ = lean_ctor_get(v___x_2472_, 0);
lean_inc(v_a_2473_);
lean_dec_ref_known(v___x_2472_, 1);
v___x_2474_ = lean_unsigned_to_nat(0u);
v_bs_x27_2475_ = lean_array_uset(v_bs_2463_, v_i_2462_, v___x_2474_);
v___x_2476_ = ((size_t)1ULL);
v___x_2477_ = lean_usize_add(v_i_2462_, v___x_2476_);
v___x_2478_ = lean_array_uset(v_bs_x27_2475_, v_i_2462_, v_a_2473_);
v_i_2462_ = v___x_2477_;
v_bs_2463_ = v___x_2478_;
goto _start;
}
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec_ref(v_bs_2463_);
lean_dec_ref(v_onParams_2460_);
v_a_2480_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2472_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2472_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__13___boxed(lean_object* v_onParams_2488_, lean_object* v_sz_2489_, lean_object* v_i_2490_, lean_object* v_bs_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_){
_start:
{
size_t v_sz_boxed_2497_; size_t v_i_boxed_2498_; lean_object* v_res_2499_; 
v_sz_boxed_2497_ = lean_unbox_usize(v_sz_2489_);
lean_dec(v_sz_2489_);
v_i_boxed_2498_ = lean_unbox_usize(v_i_2490_);
lean_dec(v_i_2490_);
v_res_2499_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__13(v_onParams_2488_, v_sz_boxed_2497_, v_i_boxed_2498_, v_bs_2491_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_);
lean_dec(v___y_2495_);
lean_dec_ref(v___y_2494_);
lean_dec(v___y_2493_);
lean_dec_ref(v___y_2492_);
return v_res_2499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__0(lean_object* v___x_2500_, lean_object* v_e_2501_){
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
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__1(void){
_start:
{
lean_object* v___x_2505_; lean_object* v___x_2506_; 
v___x_2505_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__0));
v___x_2506_ = l_Lean_stringToMessageData(v___x_2505_);
return v___x_2506_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__3(void){
_start:
{
lean_object* v___x_2508_; lean_object* v___x_2509_; 
v___x_2508_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__2));
v___x_2509_ = l_Lean_stringToMessageData(v___x_2508_);
return v___x_2509_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__5(void){
_start:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; 
v___x_2511_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__4));
v___x_2512_ = l_Lean_stringToMessageData(v___x_2511_);
return v___x_2512_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__7(void){
_start:
{
lean_object* v___x_2514_; lean_object* v___x_2515_; 
v___x_2514_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__6));
v___x_2515_ = l_Lean_stringToMessageData(v___x_2514_);
return v___x_2515_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__9(void){
_start:
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
v___x_2517_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__8));
v___x_2518_ = l_Lean_stringToMessageData(v___x_2517_);
return v___x_2518_;
}
}
static lean_object* _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__11(void){
_start:
{
lean_object* v___x_2520_; lean_object* v___x_2521_; 
v___x_2520_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__10));
v___x_2521_ = l_Lean_stringToMessageData(v___x_2520_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8(lean_object* v_matcherApp_2524_, uint8_t v_useSplitter_2525_, uint8_t v_addEqualities_2526_, lean_object* v_onParams_2527_, lean_object* v_onMotive_2528_, lean_object* v_onAlt_2529_, lean_object* v_onRemaining_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_){
_start:
{
lean_object* v___x_2536_; lean_object* v_env_2537_; lean_object* v_toMatcherInfo_2538_; lean_object* v_matcherName_2539_; lean_object* v_matcherLevels_2540_; lean_object* v_params_2541_; lean_object* v_motive_2542_; lean_object* v_discrs_2543_; lean_object* v_alts_2544_; lean_object* v_remaining_2545_; lean_object* v___y_2547_; lean_object* v___y_2548_; lean_object* v___y_2549_; lean_object* v___y_2550_; lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; uint8_t v_isCasesOn_2644_; size_t v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; lean_object* v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v_matcherLevels_2653_; lean_object* v___y_2654_; lean_object* v___y_2655_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v_numDiscrEqs_2851_; lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v___y_2854_; lean_object* v___y_2855_; 
v___x_2536_ = lean_st_ref_get(v___y_2534_);
v_env_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc_ref(v_env_2537_);
lean_dec(v___x_2536_);
v_toMatcherInfo_2538_ = lean_ctor_get(v_matcherApp_2524_, 0);
lean_inc_ref(v_toMatcherInfo_2538_);
v_matcherName_2539_ = lean_ctor_get(v_matcherApp_2524_, 1);
lean_inc_n(v_matcherName_2539_, 2);
v_matcherLevels_2540_ = lean_ctor_get(v_matcherApp_2524_, 2);
v_params_2541_ = lean_ctor_get(v_matcherApp_2524_, 3);
v_motive_2542_ = lean_ctor_get(v_matcherApp_2524_, 4);
v_discrs_2543_ = lean_ctor_get(v_matcherApp_2524_, 5);
v_alts_2544_ = lean_ctor_get(v_matcherApp_2524_, 6);
lean_inc_ref(v_alts_2544_);
v_remaining_2545_ = lean_ctor_get(v_matcherApp_2524_, 7);
lean_inc_ref(v_remaining_2545_);
v_isCasesOn_2644_ = l_Lean_isCasesOnRecursor(v_env_2537_, v_matcherName_2539_);
if (v_isCasesOn_2644_ == 0)
{
lean_object* v___x_2905_; lean_object* v_a_2906_; 
lean_inc(v_matcherName_2539_);
v___x_2905_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23___redArg(v_matcherName_2539_, v___y_2534_);
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref(v___x_2905_);
if (lean_obj_tag(v_a_2906_) == 0)
{
lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v_a_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2920_; 
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
lean_dec_ref(v_onMotive_2528_);
lean_dec_ref(v_onParams_2527_);
lean_dec_ref(v_matcherApp_2524_);
v___x_2907_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__9, &l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__9_once, _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__9);
v___x_2908_ = l_Lean_MessageData_ofName(v_matcherName_2539_);
v___x_2909_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2907_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___x_2910_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__11, &l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__11_once, _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__11);
v___x_2911_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2911_, 0, v___x_2909_);
lean_ctor_set(v___x_2911_, 1, v___x_2910_);
v___x_2912_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___redArg(v___x_2911_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_);
v_a_2913_ = lean_ctor_get(v___x_2912_, 0);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2912_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2915_ = v___x_2912_;
v_isShared_2916_ = v_isSharedCheck_2920_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_a_2913_);
lean_dec(v___x_2912_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2920_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2918_; 
if (v_isShared_2916_ == 0)
{
v___x_2918_ = v___x_2915_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_a_2913_);
v___x_2918_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
return v___x_2918_;
}
}
}
else
{
lean_object* v_val_2921_; lean_object* v___x_2922_; 
v_val_2921_ = lean_ctor_get(v_a_2906_, 0);
lean_inc(v_val_2921_);
lean_dec_ref_known(v_a_2906_, 1);
v___x_2922_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_2921_);
lean_dec(v_val_2921_);
v_numDiscrEqs_2851_ = v___x_2922_;
v___y_2852_ = v___y_2531_;
v___y_2853_ = v___y_2532_;
v___y_2854_ = v___y_2533_;
v___y_2855_ = v___y_2534_;
goto v___jp_2850_;
}
}
else
{
lean_object* v___x_2923_; 
v___x_2923_ = lean_unsigned_to_nat(0u);
v_numDiscrEqs_2851_ = v___x_2923_;
v___y_2852_ = v___y_2531_;
v___y_2853_ = v___y_2532_;
v___y_2854_ = v___y_2533_;
v___y_2855_ = v___y_2534_;
goto v___jp_2850_;
}
v___jp_2546_:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v_aux_2562_; lean_object* v_aux_2563_; lean_object* v_aux_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___f_2568_; uint8_t v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
lean_inc_ref(v___y_2557_);
v___x_2560_ = lean_array_to_list(v___y_2557_);
lean_inc(v_matcherName_2539_);
v___x_2561_ = l_Lean_mkConst(v_matcherName_2539_, v___x_2560_);
v_aux_2562_ = l_Lean_mkAppN(v___x_2561_, v___y_2550_);
lean_inc_ref(v___y_2547_);
v_aux_2563_ = l_Lean_Expr_app___override(v_aux_2562_, v___y_2547_);
v_aux_2564_ = l_Lean_mkAppN(v_aux_2563_, v___y_2551_);
v___x_2565_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__1, &l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__1_once, _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__1);
lean_inc_ref_n(v_aux_2564_, 2);
v___x_2566_ = l_Lean_indentExpr(v_aux_2564_);
v___x_2567_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2565_);
lean_ctor_set(v___x_2567_, 1, v___x_2566_);
v___f_2568_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__0), 2, 1);
lean_closure_set(v___f_2568_, 0, v___x_2567_);
v___x_2569_ = 0;
v___x_2570_ = lean_box(v___x_2569_);
v___x_2571_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_2571_, 0, v_aux_2564_);
lean_closure_set(v___x_2571_, 1, v___x_2570_);
v___x_2572_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2571_, v___f_2568_, v___y_2556_, v___y_2555_, v___y_2559_, v___y_2549_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v___x_2573_; lean_object* v___x_2574_; 
lean_dec_ref_known(v___x_2572_, 1);
v___x_2573_ = lean_array_get_size(v_alts_2544_);
v___x_2574_ = l_Lean_Meta_inferArgumentTypesN(v___x_2573_, v_aux_2564_, v___y_2556_, v___y_2555_, v___y_2559_, v___y_2549_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v___x_2574_, 1);
v___x_2576_ = l_Lean_Meta_MatcherApp_altNumParams(v_matcherApp_2524_);
v___x_2577_ = lean_array_get_size(v___x_2576_);
v___x_2578_ = lean_array_get_size(v_a_2575_);
lean_inc_n(v___y_2548_, 3);
v___x_2579_ = l_Array_toSubarray___redArg(v_alts_2544_, v___y_2548_, v___x_2573_);
v___x_2580_ = l_Array_toSubarray___redArg(v___x_2576_, v___y_2548_, v___x_2577_);
v___x_2581_ = l_Array_toSubarray___redArg(v_a_2575_, v___y_2548_, v___x_2578_);
v___x_2582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2582_, 0, v___x_2580_);
lean_ctor_set(v___x_2582_, 1, v___x_2581_);
v___x_2583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2579_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
lean_inc_ref(v___y_2552_);
v___x_2584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2584_, 0, v___y_2552_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
v___x_2585_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg(v___x_2573_, v_onAlt_2529_, v___y_2558_, v___y_2548_, v___x_2584_, v___y_2556_, v___y_2555_, v___y_2559_, v___y_2549_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v_fst_2587_; lean_object* v___x_2588_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
lean_inc(v_a_2586_);
lean_dec_ref_known(v___x_2585_, 1);
v_fst_2587_ = lean_ctor_get(v_a_2586_, 0);
lean_inc(v_fst_2587_);
lean_dec(v_a_2586_);
lean_inc(v___y_2549_);
lean_inc_ref(v___y_2559_);
lean_inc(v___y_2555_);
lean_inc_ref(v___y_2556_);
v___x_2588_ = lean_apply_6(v_onRemaining_2530_, v_remaining_2545_, v___y_2556_, v___y_2555_, v___y_2559_, v___y_2549_, lean_box(0));
if (lean_obj_tag(v___x_2588_) == 0)
{
lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2611_; 
v_a_2589_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2591_ = v___x_2588_;
v_isShared_2592_ = v_isSharedCheck_2611_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_dec(v___x_2588_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2611_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v_numParams_2593_; lean_object* v_numDiscrs_2594_; lean_object* v_altInfos_2595_; lean_object* v_uElimPos_x3f_2596_; lean_object* v_overlaps_2597_; lean_object* v___x_2599_; uint8_t v_isShared_2600_; uint8_t v_isSharedCheck_2609_; 
v_numParams_2593_ = lean_ctor_get(v_toMatcherInfo_2538_, 0);
v_numDiscrs_2594_ = lean_ctor_get(v_toMatcherInfo_2538_, 1);
v_altInfos_2595_ = lean_ctor_get(v_toMatcherInfo_2538_, 2);
v_uElimPos_x3f_2596_ = lean_ctor_get(v_toMatcherInfo_2538_, 3);
v_overlaps_2597_ = lean_ctor_get(v_toMatcherInfo_2538_, 5);
v_isSharedCheck_2609_ = !lean_is_exclusive(v_toMatcherInfo_2538_);
if (v_isSharedCheck_2609_ == 0)
{
lean_object* v_unused_2610_; 
v_unused_2610_ = lean_ctor_get(v_toMatcherInfo_2538_, 4);
lean_dec(v_unused_2610_);
v___x_2599_ = v_toMatcherInfo_2538_;
v_isShared_2600_ = v_isSharedCheck_2609_;
goto v_resetjp_2598_;
}
else
{
lean_inc(v_overlaps_2597_);
lean_inc(v_uElimPos_x3f_2596_);
lean_inc(v_altInfos_2595_);
lean_inc(v_numDiscrs_2594_);
lean_inc(v_numParams_2593_);
lean_dec(v_toMatcherInfo_2538_);
v___x_2599_ = lean_box(0);
v_isShared_2600_ = v_isSharedCheck_2609_;
goto v_resetjp_2598_;
}
v_resetjp_2598_:
{
lean_object* v_remaining_x27_2601_; lean_object* v___x_2603_; 
v_remaining_x27_2601_ = l_Array_append___redArg(v___y_2553_, v_a_2589_);
lean_dec(v_a_2589_);
if (v_isShared_2600_ == 0)
{
lean_ctor_set(v___x_2599_, 4, v___y_2554_);
v___x_2603_ = v___x_2599_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_numParams_2593_);
lean_ctor_set(v_reuseFailAlloc_2608_, 1, v_numDiscrs_2594_);
lean_ctor_set(v_reuseFailAlloc_2608_, 2, v_altInfos_2595_);
lean_ctor_set(v_reuseFailAlloc_2608_, 3, v_uElimPos_x3f_2596_);
lean_ctor_set(v_reuseFailAlloc_2608_, 4, v___y_2554_);
lean_ctor_set(v_reuseFailAlloc_2608_, 5, v_overlaps_2597_);
v___x_2603_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
lean_object* v___x_2604_; lean_object* v___x_2606_; 
v___x_2604_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
lean_ctor_set(v___x_2604_, 1, v_matcherName_2539_);
lean_ctor_set(v___x_2604_, 2, v___y_2557_);
lean_ctor_set(v___x_2604_, 3, v___y_2550_);
lean_ctor_set(v___x_2604_, 4, v___y_2547_);
lean_ctor_set(v___x_2604_, 5, v___y_2551_);
lean_ctor_set(v___x_2604_, 6, v_fst_2587_);
lean_ctor_set(v___x_2604_, 7, v_remaining_x27_2601_);
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 0, v___x_2604_);
v___x_2606_ = v___x_2591_;
goto v_reusejp_2605_;
}
else
{
lean_object* v_reuseFailAlloc_2607_; 
v_reuseFailAlloc_2607_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2607_, 0, v___x_2604_);
v___x_2606_ = v_reuseFailAlloc_2607_;
goto v_reusejp_2605_;
}
v_reusejp_2605_:
{
return v___x_2606_;
}
}
}
}
}
else
{
lean_object* v_a_2612_; lean_object* v___x_2614_; uint8_t v_isShared_2615_; uint8_t v_isSharedCheck_2619_; 
lean_dec(v_fst_2587_);
lean_dec_ref(v___y_2557_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2547_);
lean_dec(v_matcherName_2539_);
lean_dec_ref(v_toMatcherInfo_2538_);
v_a_2612_ = lean_ctor_get(v___x_2588_, 0);
v_isSharedCheck_2619_ = !lean_is_exclusive(v___x_2588_);
if (v_isSharedCheck_2619_ == 0)
{
v___x_2614_ = v___x_2588_;
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
else
{
lean_inc(v_a_2612_);
lean_dec(v___x_2588_);
v___x_2614_ = lean_box(0);
v_isShared_2615_ = v_isSharedCheck_2619_;
goto v_resetjp_2613_;
}
v_resetjp_2613_:
{
lean_object* v___x_2617_; 
if (v_isShared_2615_ == 0)
{
v___x_2617_ = v___x_2614_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v_a_2612_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
}
else
{
lean_object* v_a_2620_; lean_object* v___x_2622_; uint8_t v_isShared_2623_; uint8_t v_isSharedCheck_2627_; 
lean_dec_ref(v___y_2557_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec_ref(v___y_2547_);
lean_dec_ref(v_remaining_2545_);
lean_dec(v_matcherName_2539_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
v_a_2620_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2627_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2627_ == 0)
{
v___x_2622_ = v___x_2585_;
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
else
{
lean_inc(v_a_2620_);
lean_dec(v___x_2585_);
v___x_2622_ = lean_box(0);
v_isShared_2623_ = v_isSharedCheck_2627_;
goto v_resetjp_2621_;
}
v_resetjp_2621_:
{
lean_object* v___x_2625_; 
if (v_isShared_2623_ == 0)
{
v___x_2625_ = v___x_2622_;
goto v_reusejp_2624_;
}
else
{
lean_object* v_reuseFailAlloc_2626_; 
v_reuseFailAlloc_2626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2626_, 0, v_a_2620_);
v___x_2625_ = v_reuseFailAlloc_2626_;
goto v_reusejp_2624_;
}
v_reusejp_2624_:
{
return v___x_2625_;
}
}
}
}
else
{
lean_object* v_a_2628_; lean_object* v___x_2630_; uint8_t v_isShared_2631_; uint8_t v_isSharedCheck_2635_; 
lean_dec(v___y_2558_);
lean_dec_ref(v___y_2557_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec(v_matcherName_2539_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
lean_dec_ref(v_matcherApp_2524_);
v_a_2628_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2635_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2635_ == 0)
{
v___x_2630_ = v___x_2574_;
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
else
{
lean_inc(v_a_2628_);
lean_dec(v___x_2574_);
v___x_2630_ = lean_box(0);
v_isShared_2631_ = v_isSharedCheck_2635_;
goto v_resetjp_2629_;
}
v_resetjp_2629_:
{
lean_object* v___x_2633_; 
if (v_isShared_2631_ == 0)
{
v___x_2633_ = v___x_2630_;
goto v_reusejp_2632_;
}
else
{
lean_object* v_reuseFailAlloc_2634_; 
v_reuseFailAlloc_2634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2634_, 0, v_a_2628_);
v___x_2633_ = v_reuseFailAlloc_2634_;
goto v_reusejp_2632_;
}
v_reusejp_2632_:
{
return v___x_2633_;
}
}
}
}
else
{
lean_object* v_a_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2643_; 
lean_dec_ref(v_aux_2564_);
lean_dec(v___y_2558_);
lean_dec_ref(v___y_2557_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2548_);
lean_dec_ref(v___y_2547_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec(v_matcherName_2539_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
lean_dec_ref(v_matcherApp_2524_);
v_a_2636_ = lean_ctor_get(v___x_2572_, 0);
v_isSharedCheck_2643_ = !lean_is_exclusive(v___x_2572_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2638_ = v___x_2572_;
v_isShared_2639_ = v_isSharedCheck_2643_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_a_2636_);
lean_dec(v___x_2572_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2643_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2641_; 
if (v_isShared_2639_ == 0)
{
v___x_2641_ = v___x_2638_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v_a_2636_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
}
}
v___jp_2645_:
{
lean_object* v___x_2658_; lean_object* v_remaining_x27_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; size_t v_sz_2666_; lean_object* v___x_2667_; 
v___x_2658_ = lean_unsigned_to_nat(0u);
v_remaining_x27_2659_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2));
v___x_2660_ = l_Array_reverse___redArg(v___y_2650_);
v___x_2661_ = lean_array_get_size(v___x_2660_);
v___x_2662_ = l_Array_toSubarray___redArg(v___x_2660_, v___x_2658_, v___x_2661_);
lean_inc_ref(v___y_2651_);
v___x_2663_ = l_Array_reverse___redArg(v___y_2651_);
v___x_2664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2658_);
lean_ctor_set(v___x_2664_, 1, v___x_2662_);
v___x_2665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2665_, 0, v_remaining_x27_2659_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
v_sz_2666_ = lean_array_size(v___x_2663_);
v___x_2667_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__15(v___x_2663_, v_sz_2666_, v___y_2646_, v___x_2665_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec_ref(v___x_2663_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; lean_object* v_snd_2669_; 
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
lean_inc(v_a_2668_);
lean_dec_ref_known(v___x_2667_, 1);
v_snd_2669_ = lean_ctor_get(v_a_2668_, 1);
lean_inc(v_snd_2669_);
if (v_useSplitter_2525_ == 0)
{
lean_object* v_fst_2670_; lean_object* v_fst_2671_; 
lean_dec(v___y_2652_);
v_fst_2670_ = lean_ctor_get(v_a_2668_, 0);
lean_inc(v_fst_2670_);
lean_dec(v_a_2668_);
v_fst_2671_ = lean_ctor_get(v_snd_2669_, 0);
lean_inc(v_fst_2671_);
lean_dec(v_snd_2669_);
v___y_2547_ = v___y_2647_;
v___y_2548_ = v___x_2658_;
v___y_2549_ = v___y_2657_;
v___y_2550_ = v___y_2649_;
v___y_2551_ = v___y_2651_;
v___y_2552_ = v_remaining_x27_2659_;
v___y_2553_ = v_fst_2670_;
v___y_2554_ = v___y_2648_;
v___y_2555_ = v___y_2655_;
v___y_2556_ = v___y_2654_;
v___y_2557_ = v_matcherLevels_2653_;
v___y_2558_ = v_fst_2671_;
v___y_2559_ = v___y_2656_;
goto v___jp_2546_;
}
else
{
if (v_isCasesOn_2644_ == 0)
{
lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2831_; 
v_isSharedCheck_2831_ = !lean_is_exclusive(v_matcherApp_2524_);
if (v_isSharedCheck_2831_ == 0)
{
lean_object* v_unused_2832_; lean_object* v_unused_2833_; lean_object* v_unused_2834_; lean_object* v_unused_2835_; lean_object* v_unused_2836_; lean_object* v_unused_2837_; lean_object* v_unused_2838_; lean_object* v_unused_2839_; 
v_unused_2832_ = lean_ctor_get(v_matcherApp_2524_, 7);
lean_dec(v_unused_2832_);
v_unused_2833_ = lean_ctor_get(v_matcherApp_2524_, 6);
lean_dec(v_unused_2833_);
v_unused_2834_ = lean_ctor_get(v_matcherApp_2524_, 5);
lean_dec(v_unused_2834_);
v_unused_2835_ = lean_ctor_get(v_matcherApp_2524_, 4);
lean_dec(v_unused_2835_);
v_unused_2836_ = lean_ctor_get(v_matcherApp_2524_, 3);
lean_dec(v_unused_2836_);
v_unused_2837_ = lean_ctor_get(v_matcherApp_2524_, 2);
lean_dec(v_unused_2837_);
v_unused_2838_ = lean_ctor_get(v_matcherApp_2524_, 1);
lean_dec(v_unused_2838_);
v_unused_2839_ = lean_ctor_get(v_matcherApp_2524_, 0);
lean_dec(v_unused_2839_);
v___x_2673_ = v_matcherApp_2524_;
v_isShared_2674_ = v_isSharedCheck_2831_;
goto v_resetjp_2672_;
}
else
{
lean_dec(v_matcherApp_2524_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2831_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v_fst_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2829_; 
v_fst_2675_ = lean_ctor_get(v_a_2668_, 0);
v_isSharedCheck_2829_ = !lean_is_exclusive(v_a_2668_);
if (v_isSharedCheck_2829_ == 0)
{
lean_object* v_unused_2830_; 
v_unused_2830_ = lean_ctor_get(v_a_2668_, 1);
lean_dec(v_unused_2830_);
v___x_2677_ = v_a_2668_;
v_isShared_2678_ = v_isSharedCheck_2829_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_fst_2675_);
lean_dec(v_a_2668_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2829_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v_fst_2679_; lean_object* v___x_2681_; uint8_t v_isShared_2682_; uint8_t v_isSharedCheck_2827_; 
v_fst_2679_ = lean_ctor_get(v_snd_2669_, 0);
v_isSharedCheck_2827_ = !lean_is_exclusive(v_snd_2669_);
if (v_isSharedCheck_2827_ == 0)
{
lean_object* v_unused_2828_; 
v_unused_2828_ = lean_ctor_get(v_snd_2669_, 1);
lean_dec(v_unused_2828_);
v___x_2681_ = v_snd_2669_;
v_isShared_2682_ = v_isSharedCheck_2827_;
goto v_resetjp_2680_;
}
else
{
lean_inc(v_fst_2679_);
lean_dec(v_snd_2669_);
v___x_2681_ = lean_box(0);
v_isShared_2682_ = v_isSharedCheck_2827_;
goto v_resetjp_2680_;
}
v_resetjp_2680_:
{
lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v_aux1_2685_; lean_object* v_aux1_2686_; lean_object* v_aux1_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___f_2693_; uint8_t v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
lean_inc_ref(v_matcherLevels_2653_);
v___x_2683_ = lean_array_to_list(v_matcherLevels_2653_);
lean_inc(v___x_2683_);
lean_inc(v_matcherName_2539_);
v___x_2684_ = l_Lean_mkConst(v_matcherName_2539_, v___x_2683_);
v_aux1_2685_ = l_Lean_mkAppN(v___x_2684_, v___y_2649_);
lean_inc_ref(v___y_2647_);
v_aux1_2686_ = l_Lean_Expr_app___override(v_aux1_2685_, v___y_2647_);
v_aux1_2687_ = l_Lean_mkAppN(v_aux1_2686_, v___y_2651_);
v___x_2688_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__3, &l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__3_once, _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__3);
lean_inc_ref_n(v_aux1_2687_, 2);
v___x_2689_ = l_Lean_indentExpr(v_aux1_2687_);
v___x_2690_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2688_);
lean_ctor_set(v___x_2690_, 1, v___x_2689_);
v___x_2691_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__5, &l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__5_once, _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__5);
v___x_2692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2692_, 0, v___x_2690_);
lean_ctor_set(v___x_2692_, 1, v___x_2691_);
v___f_2693_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__0), 2, 1);
lean_closure_set(v___f_2693_, 0, v___x_2692_);
v___x_2694_ = 0;
v___x_2695_ = lean_box(v___x_2694_);
v___x_2696_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_2696_, 0, v_aux1_2687_);
lean_closure_set(v___x_2696_, 1, v___x_2695_);
v___x_2697_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2696_, v___f_2693_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v___x_2698_; lean_object* v___x_2699_; 
lean_dec_ref_known(v___x_2697_, 1);
v___x_2698_ = lean_array_get_size(v_alts_2544_);
v___x_2699_ = l_Lean_Meta_inferArgumentTypesN(v___x_2698_, v_aux1_2687_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2701_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
lean_inc(v_a_2700_);
lean_dec_ref_known(v___x_2699_, 1);
lean_inc(v___y_2657_);
lean_inc_ref(v___y_2656_);
lean_inc(v___y_2655_);
lean_inc_ref(v___y_2654_);
v___x_2701_ = lean_get_match_equations_for(v_matcherName_2539_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v_a_2702_; lean_object* v_splitterName_2703_; lean_object* v_splitterMatchInfo_2704_; lean_object* v___x_2705_; lean_object* v_aux2_2706_; lean_object* v_aux2_2707_; lean_object* v_aux2_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___f_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v_a_2702_ = lean_ctor_get(v___x_2701_, 0);
lean_inc(v_a_2702_);
lean_dec_ref_known(v___x_2701_, 1);
v_splitterName_2703_ = lean_ctor_get(v_a_2702_, 1);
lean_inc_n(v_splitterName_2703_, 2);
v_splitterMatchInfo_2704_ = lean_ctor_get(v_a_2702_, 2);
lean_inc_ref(v_splitterMatchInfo_2704_);
lean_dec(v_a_2702_);
v___x_2705_ = l_Lean_mkConst(v_splitterName_2703_, v___x_2683_);
v_aux2_2706_ = l_Lean_mkAppN(v___x_2705_, v___y_2649_);
lean_inc_ref(v___y_2647_);
v_aux2_2707_ = l_Lean_Expr_app___override(v_aux2_2706_, v___y_2647_);
v_aux2_2708_ = l_Lean_mkAppN(v_aux2_2707_, v___y_2651_);
v___x_2709_ = lean_obj_once(&l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__7, &l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__7_once, _init_l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___closed__7);
lean_inc_ref_n(v_aux2_2708_, 2);
v___x_2710_ = l_Lean_indentExpr(v_aux2_2708_);
v___x_2711_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2709_);
lean_ctor_set(v___x_2711_, 1, v___x_2710_);
v___x_2712_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2711_);
lean_ctor_set(v___x_2712_, 1, v___x_2691_);
v___f_2713_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__0), 2, 1);
lean_closure_set(v___f_2713_, 0, v___x_2712_);
v___x_2714_ = lean_box(v___x_2694_);
v___x_2715_ = lean_alloc_closure((void*)(l_Lean_Meta_check___boxed), 7, 2);
lean_closure_set(v___x_2715_, 0, v_aux2_2708_);
lean_closure_set(v___x_2715_, 1, v___x_2714_);
v___x_2716_ = l_Lean_Meta_mapErrorImp___redArg(v___x_2715_, v___f_2713_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v___x_2717_; 
lean_dec_ref_known(v___x_2716_, 1);
v___x_2717_ = l_Lean_Meta_inferArgumentTypesN(v___x_2698_, v_aux2_2708_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
if (lean_obj_tag(v___x_2717_) == 0)
{
lean_object* v_a_2718_; lean_object* v_numParams_2719_; lean_object* v_numDiscrs_2720_; lean_object* v_altInfos_2721_; lean_object* v_uElimPos_x3f_2722_; lean_object* v_overlaps_2723_; lean_object* v_altInfos_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2781_; 
v_a_2718_ = lean_ctor_get(v___x_2717_, 0);
lean_inc(v_a_2718_);
lean_dec_ref_known(v___x_2717_, 1);
v_numParams_2719_ = lean_ctor_get(v_toMatcherInfo_2538_, 0);
lean_inc(v_numParams_2719_);
v_numDiscrs_2720_ = lean_ctor_get(v_toMatcherInfo_2538_, 1);
lean_inc(v_numDiscrs_2720_);
v_altInfos_2721_ = lean_ctor_get(v_toMatcherInfo_2538_, 2);
lean_inc_ref(v_altInfos_2721_);
v_uElimPos_x3f_2722_ = lean_ctor_get(v_toMatcherInfo_2538_, 3);
lean_inc(v_uElimPos_x3f_2722_);
v_overlaps_2723_ = lean_ctor_get(v_toMatcherInfo_2538_, 5);
lean_inc_ref(v_overlaps_2723_);
lean_dec_ref(v_toMatcherInfo_2538_);
v_altInfos_2724_ = lean_ctor_get(v_splitterMatchInfo_2704_, 2);
v_isSharedCheck_2781_ = !lean_is_exclusive(v_splitterMatchInfo_2704_);
if (v_isSharedCheck_2781_ == 0)
{
lean_object* v_unused_2782_; lean_object* v_unused_2783_; lean_object* v_unused_2784_; lean_object* v_unused_2785_; lean_object* v_unused_2786_; 
v_unused_2782_ = lean_ctor_get(v_splitterMatchInfo_2704_, 5);
lean_dec(v_unused_2782_);
v_unused_2783_ = lean_ctor_get(v_splitterMatchInfo_2704_, 4);
lean_dec(v_unused_2783_);
v_unused_2784_ = lean_ctor_get(v_splitterMatchInfo_2704_, 3);
lean_dec(v_unused_2784_);
v_unused_2785_ = lean_ctor_get(v_splitterMatchInfo_2704_, 1);
lean_dec(v_unused_2785_);
v_unused_2786_ = lean_ctor_get(v_splitterMatchInfo_2704_, 0);
lean_dec(v_unused_2786_);
v___x_2726_ = v_splitterMatchInfo_2704_;
v_isShared_2727_ = v_isSharedCheck_2781_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_altInfos_2724_);
lean_dec(v_splitterMatchInfo_2704_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2781_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2738_; 
v___x_2728_ = lean_array_get_size(v_altInfos_2721_);
v___x_2729_ = lean_array_get_size(v_altInfos_2724_);
v___x_2730_ = lean_array_get_size(v_a_2700_);
v___x_2731_ = lean_array_get_size(v_a_2718_);
v___x_2732_ = l_Array_toSubarray___redArg(v_alts_2544_, v___x_2658_, v___x_2698_);
lean_inc_ref(v_altInfos_2721_);
v___x_2733_ = l_Array_toSubarray___redArg(v_altInfos_2721_, v___x_2658_, v___x_2728_);
v___x_2734_ = l_Array_toSubarray___redArg(v_altInfos_2724_, v___x_2658_, v___x_2729_);
v___x_2735_ = l_Array_toSubarray___redArg(v_a_2700_, v___x_2658_, v___x_2730_);
v___x_2736_ = l_Array_toSubarray___redArg(v_a_2718_, v___x_2658_, v___x_2731_);
if (v_isShared_2682_ == 0)
{
lean_ctor_set(v___x_2681_, 1, v___x_2736_);
lean_ctor_set(v___x_2681_, 0, v___x_2735_);
v___x_2738_ = v___x_2681_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v___x_2735_);
lean_ctor_set(v_reuseFailAlloc_2780_, 1, v___x_2736_);
v___x_2738_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
lean_object* v___x_2740_; 
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 1, v___x_2738_);
lean_ctor_set(v___x_2677_, 0, v___x_2734_);
v___x_2740_ = v___x_2677_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v___x_2734_);
lean_ctor_set(v_reuseFailAlloc_2779_, 1, v___x_2738_);
v___x_2740_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; 
v___x_2741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2741_, 0, v___x_2733_);
lean_ctor_set(v___x_2741_, 1, v___x_2740_);
v___x_2742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2732_);
lean_ctor_set(v___x_2742_, 1, v___x_2741_);
v___x_2743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2743_, 0, v_remaining_x27_2659_);
lean_ctor_set(v___x_2743_, 1, v___x_2742_);
v___x_2744_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg(v___x_2698_, v_onAlt_2529_, v_useSplitter_2525_, v_fst_2679_, v___y_2652_, v___x_2658_, v___x_2743_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
if (lean_obj_tag(v___x_2744_) == 0)
{
lean_object* v_a_2745_; lean_object* v_fst_2746_; lean_object* v___x_2747_; 
v_a_2745_ = lean_ctor_get(v___x_2744_, 0);
lean_inc(v_a_2745_);
lean_dec_ref_known(v___x_2744_, 1);
v_fst_2746_ = lean_ctor_get(v_a_2745_, 0);
lean_inc(v_fst_2746_);
lean_dec(v_a_2745_);
lean_inc(v___y_2657_);
lean_inc_ref(v___y_2656_);
lean_inc(v___y_2655_);
lean_inc_ref(v___y_2654_);
v___x_2747_ = lean_apply_6(v_onRemaining_2530_, v_remaining_2545_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, lean_box(0));
if (lean_obj_tag(v___x_2747_) == 0)
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2762_; 
v_a_2748_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2762_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2762_ == 0)
{
v___x_2750_ = v___x_2747_;
v_isShared_2751_ = v_isSharedCheck_2762_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___x_2747_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2762_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v_remaining_x27_2752_; lean_object* v___x_2754_; 
v_remaining_x27_2752_ = l_Array_append___redArg(v_fst_2675_, v_a_2748_);
lean_dec(v_a_2748_);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 5, v_overlaps_2723_);
lean_ctor_set(v___x_2726_, 4, v___y_2648_);
lean_ctor_set(v___x_2726_, 3, v_uElimPos_x3f_2722_);
lean_ctor_set(v___x_2726_, 2, v_altInfos_2721_);
lean_ctor_set(v___x_2726_, 1, v_numDiscrs_2720_);
lean_ctor_set(v___x_2726_, 0, v_numParams_2719_);
v___x_2754_ = v___x_2726_;
goto v_reusejp_2753_;
}
else
{
lean_object* v_reuseFailAlloc_2761_; 
v_reuseFailAlloc_2761_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2761_, 0, v_numParams_2719_);
lean_ctor_set(v_reuseFailAlloc_2761_, 1, v_numDiscrs_2720_);
lean_ctor_set(v_reuseFailAlloc_2761_, 2, v_altInfos_2721_);
lean_ctor_set(v_reuseFailAlloc_2761_, 3, v_uElimPos_x3f_2722_);
lean_ctor_set(v_reuseFailAlloc_2761_, 4, v___y_2648_);
lean_ctor_set(v_reuseFailAlloc_2761_, 5, v_overlaps_2723_);
v___x_2754_ = v_reuseFailAlloc_2761_;
goto v_reusejp_2753_;
}
v_reusejp_2753_:
{
lean_object* v___x_2756_; 
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 7, v_remaining_x27_2752_);
lean_ctor_set(v___x_2673_, 6, v_fst_2746_);
lean_ctor_set(v___x_2673_, 5, v___y_2651_);
lean_ctor_set(v___x_2673_, 4, v___y_2647_);
lean_ctor_set(v___x_2673_, 3, v___y_2649_);
lean_ctor_set(v___x_2673_, 2, v_matcherLevels_2653_);
lean_ctor_set(v___x_2673_, 1, v_splitterName_2703_);
lean_ctor_set(v___x_2673_, 0, v___x_2754_);
v___x_2756_ = v___x_2673_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v___x_2754_);
lean_ctor_set(v_reuseFailAlloc_2760_, 1, v_splitterName_2703_);
lean_ctor_set(v_reuseFailAlloc_2760_, 2, v_matcherLevels_2653_);
lean_ctor_set(v_reuseFailAlloc_2760_, 3, v___y_2649_);
lean_ctor_set(v_reuseFailAlloc_2760_, 4, v___y_2647_);
lean_ctor_set(v_reuseFailAlloc_2760_, 5, v___y_2651_);
lean_ctor_set(v_reuseFailAlloc_2760_, 6, v_fst_2746_);
lean_ctor_set(v_reuseFailAlloc_2760_, 7, v_remaining_x27_2752_);
v___x_2756_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
lean_object* v___x_2758_; 
if (v_isShared_2751_ == 0)
{
lean_ctor_set(v___x_2750_, 0, v___x_2756_);
v___x_2758_ = v___x_2750_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v___x_2756_);
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
else
{
lean_object* v_a_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
lean_dec(v_fst_2746_);
lean_del_object(v___x_2726_);
lean_dec_ref(v_overlaps_2723_);
lean_dec(v_uElimPos_x3f_2722_);
lean_dec_ref(v_altInfos_2721_);
lean_dec(v_numDiscrs_2720_);
lean_dec(v_numParams_2719_);
lean_dec(v_splitterName_2703_);
lean_dec(v_fst_2675_);
lean_del_object(v___x_2673_);
lean_dec_ref(v_matcherLevels_2653_);
lean_dec_ref(v___y_2651_);
lean_dec_ref(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec_ref(v___y_2647_);
v_a_2763_ = lean_ctor_get(v___x_2747_, 0);
v_isSharedCheck_2770_ = !lean_is_exclusive(v___x_2747_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2765_ = v___x_2747_;
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
else
{
lean_inc(v_a_2763_);
lean_dec(v___x_2747_);
v___x_2765_ = lean_box(0);
v_isShared_2766_ = v_isSharedCheck_2770_;
goto v_resetjp_2764_;
}
v_resetjp_2764_:
{
lean_object* v___x_2768_; 
if (v_isShared_2766_ == 0)
{
v___x_2768_ = v___x_2765_;
goto v_reusejp_2767_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v_a_2763_);
v___x_2768_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2767_;
}
v_reusejp_2767_:
{
return v___x_2768_;
}
}
}
}
else
{
lean_object* v_a_2771_; lean_object* v___x_2773_; uint8_t v_isShared_2774_; uint8_t v_isSharedCheck_2778_; 
lean_del_object(v___x_2726_);
lean_dec_ref(v_overlaps_2723_);
lean_dec(v_uElimPos_x3f_2722_);
lean_dec_ref(v_altInfos_2721_);
lean_dec(v_numDiscrs_2720_);
lean_dec(v_numParams_2719_);
lean_dec(v_splitterName_2703_);
lean_dec(v_fst_2675_);
lean_del_object(v___x_2673_);
lean_dec_ref(v_matcherLevels_2653_);
lean_dec_ref(v___y_2651_);
lean_dec_ref(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_onRemaining_2530_);
v_a_2771_ = lean_ctor_get(v___x_2744_, 0);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2744_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2773_ = v___x_2744_;
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2744_);
v___x_2773_ = lean_box(0);
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
v_resetjp_2772_:
{
lean_object* v___x_2776_; 
if (v_isShared_2774_ == 0)
{
v___x_2776_ = v___x_2773_;
goto v_reusejp_2775_;
}
else
{
lean_object* v_reuseFailAlloc_2777_; 
v_reuseFailAlloc_2777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2777_, 0, v_a_2771_);
v___x_2776_ = v_reuseFailAlloc_2777_;
goto v_reusejp_2775_;
}
v_reusejp_2775_:
{
return v___x_2776_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2794_; 
lean_dec_ref(v_splitterMatchInfo_2704_);
lean_dec(v_splitterName_2703_);
lean_dec(v_a_2700_);
lean_del_object(v___x_2681_);
lean_dec(v_fst_2679_);
lean_del_object(v___x_2677_);
lean_dec(v_fst_2675_);
lean_del_object(v___x_2673_);
lean_dec_ref(v_matcherLevels_2653_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec_ref(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
v_a_2787_ = lean_ctor_get(v___x_2717_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2717_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2789_ = v___x_2717_;
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2717_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2792_; 
if (v_isShared_2790_ == 0)
{
v___x_2792_ = v___x_2789_;
goto v_reusejp_2791_;
}
else
{
lean_object* v_reuseFailAlloc_2793_; 
v_reuseFailAlloc_2793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2793_, 0, v_a_2787_);
v___x_2792_ = v_reuseFailAlloc_2793_;
goto v_reusejp_2791_;
}
v_reusejp_2791_:
{
return v___x_2792_;
}
}
}
}
else
{
lean_object* v_a_2795_; lean_object* v___x_2797_; uint8_t v_isShared_2798_; uint8_t v_isSharedCheck_2802_; 
lean_dec_ref(v_aux2_2708_);
lean_dec_ref(v_splitterMatchInfo_2704_);
lean_dec(v_splitterName_2703_);
lean_dec(v_a_2700_);
lean_del_object(v___x_2681_);
lean_dec(v_fst_2679_);
lean_del_object(v___x_2677_);
lean_dec(v_fst_2675_);
lean_del_object(v___x_2673_);
lean_dec_ref(v_matcherLevels_2653_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec_ref(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
v_a_2795_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2716_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2716_);
v___x_2797_ = lean_box(0);
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
v_resetjp_2796_:
{
lean_object* v___x_2800_; 
if (v_isShared_2798_ == 0)
{
v___x_2800_ = v___x_2797_;
goto v_reusejp_2799_;
}
else
{
lean_object* v_reuseFailAlloc_2801_; 
v_reuseFailAlloc_2801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2801_, 0, v_a_2795_);
v___x_2800_ = v_reuseFailAlloc_2801_;
goto v_reusejp_2799_;
}
v_reusejp_2799_:
{
return v___x_2800_;
}
}
}
}
else
{
lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2810_; 
lean_dec(v_a_2700_);
lean_dec(v___x_2683_);
lean_del_object(v___x_2681_);
lean_dec(v_fst_2679_);
lean_del_object(v___x_2677_);
lean_dec(v_fst_2675_);
lean_del_object(v___x_2673_);
lean_dec_ref(v_matcherLevels_2653_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec_ref(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
v_a_2803_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2805_ = v___x_2701_;
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2701_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2808_; 
if (v_isShared_2806_ == 0)
{
v___x_2808_ = v___x_2805_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_a_2803_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
}
else
{
lean_object* v_a_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2818_; 
lean_dec(v___x_2683_);
lean_del_object(v___x_2681_);
lean_dec(v_fst_2679_);
lean_del_object(v___x_2677_);
lean_dec(v_fst_2675_);
lean_del_object(v___x_2673_);
lean_dec_ref(v_matcherLevels_2653_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec_ref(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec(v_matcherName_2539_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
v_a_2811_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2813_ = v___x_2699_;
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_a_2811_);
lean_dec(v___x_2699_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2816_; 
if (v_isShared_2814_ == 0)
{
v___x_2816_ = v___x_2813_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_a_2811_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2826_; 
lean_dec_ref(v_aux1_2687_);
lean_dec(v___x_2683_);
lean_del_object(v___x_2681_);
lean_dec(v_fst_2679_);
lean_del_object(v___x_2677_);
lean_dec(v_fst_2675_);
lean_del_object(v___x_2673_);
lean_dec_ref(v_matcherLevels_2653_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec_ref(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec(v_matcherName_2539_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
v_a_2819_ = lean_ctor_get(v___x_2697_, 0);
v_isSharedCheck_2826_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2826_ == 0)
{
v___x_2821_ = v___x_2697_;
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
else
{
lean_inc(v_a_2819_);
lean_dec(v___x_2697_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2826_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v___x_2824_; 
if (v_isShared_2822_ == 0)
{
v___x_2824_ = v___x_2821_;
goto v_reusejp_2823_;
}
else
{
lean_object* v_reuseFailAlloc_2825_; 
v_reuseFailAlloc_2825_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2825_, 0, v_a_2819_);
v___x_2824_ = v_reuseFailAlloc_2825_;
goto v_reusejp_2823_;
}
v_reusejp_2823_:
{
return v___x_2824_;
}
}
}
}
}
}
}
else
{
lean_object* v_fst_2840_; lean_object* v_fst_2841_; 
lean_dec(v___y_2652_);
v_fst_2840_ = lean_ctor_get(v_a_2668_, 0);
lean_inc(v_fst_2840_);
lean_dec(v_a_2668_);
v_fst_2841_ = lean_ctor_get(v_snd_2669_, 0);
lean_inc(v_fst_2841_);
lean_dec(v_snd_2669_);
v___y_2547_ = v___y_2647_;
v___y_2548_ = v___x_2658_;
v___y_2549_ = v___y_2657_;
v___y_2550_ = v___y_2649_;
v___y_2551_ = v___y_2651_;
v___y_2552_ = v_remaining_x27_2659_;
v___y_2553_ = v_fst_2840_;
v___y_2554_ = v___y_2648_;
v___y_2555_ = v___y_2655_;
v___y_2556_ = v___y_2654_;
v___y_2557_ = v_matcherLevels_2653_;
v___y_2558_ = v_fst_2841_;
v___y_2559_ = v___y_2656_;
goto v___jp_2546_;
}
}
}
else
{
lean_object* v_a_2842_; lean_object* v___x_2844_; uint8_t v_isShared_2845_; uint8_t v_isSharedCheck_2849_; 
lean_dec_ref(v_matcherLevels_2653_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec_ref(v___y_2649_);
lean_dec_ref(v___y_2648_);
lean_dec_ref(v___y_2647_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec(v_matcherName_2539_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
lean_dec_ref(v_matcherApp_2524_);
v_a_2842_ = lean_ctor_get(v___x_2667_, 0);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2667_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2844_ = v___x_2667_;
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
else
{
lean_inc(v_a_2842_);
lean_dec(v___x_2667_);
v___x_2844_ = lean_box(0);
v_isShared_2845_ = v_isSharedCheck_2849_;
goto v_resetjp_2843_;
}
v_resetjp_2843_:
{
lean_object* v___x_2847_; 
if (v_isShared_2845_ == 0)
{
v___x_2847_ = v___x_2844_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v_a_2842_);
v___x_2847_ = v_reuseFailAlloc_2848_;
goto v_reusejp_2846_;
}
v_reusejp_2846_:
{
return v___x_2847_;
}
}
}
}
v___jp_2850_:
{
size_t v_sz_2856_; size_t v___x_2857_; lean_object* v___x_2858_; 
v_sz_2856_ = lean_array_size(v_params_2541_);
v___x_2857_ = ((size_t)0ULL);
lean_inc_ref(v_params_2541_);
lean_inc_ref(v_onParams_2527_);
v___x_2858_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__13(v_onParams_2527_, v_sz_2856_, v___x_2857_, v_params_2541_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v_a_2859_; size_t v_sz_2860_; lean_object* v___x_2861_; 
v_a_2859_ = lean_ctor_get(v___x_2858_, 0);
lean_inc(v_a_2859_);
lean_dec_ref_known(v___x_2858_, 1);
v_sz_2860_ = lean_array_size(v_discrs_2543_);
lean_inc_ref(v_discrs_2543_);
v___x_2861_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__13(v_onParams_2527_, v_sz_2860_, v___x_2857_, v_discrs_2543_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
if (lean_obj_tag(v___x_2861_) == 0)
{
lean_object* v_a_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___f_2865_; uint8_t v___x_2866_; lean_object* v___x_2867_; 
v_a_2862_ = lean_ctor_get(v___x_2861_, 0);
lean_inc_n(v_a_2862_, 2);
lean_dec_ref_known(v___x_2861_, 1);
v___x_2863_ = lean_box(v_addEqualities_2526_);
v___x_2864_ = ((lean_object*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___boxed__const__1));
lean_inc_ref(v_discrs_2543_);
lean_inc_ref(v_toMatcherInfo_2538_);
v___f_2865_ = lean_alloc_closure((void*)(l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___lam__3___boxed), 13, 6);
lean_closure_set(v___f_2865_, 0, v_onMotive_2528_);
lean_closure_set(v___f_2865_, 1, v_toMatcherInfo_2538_);
lean_closure_set(v___f_2865_, 2, v_a_2862_);
lean_closure_set(v___f_2865_, 3, v___x_2863_);
lean_closure_set(v___f_2865_, 4, v___x_2864_);
lean_closure_set(v___f_2865_, 5, v_discrs_2543_);
v___x_2866_ = 0;
lean_inc_ref(v_motive_2542_);
v___x_2867_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg(v_motive_2542_, v___f_2865_, v___x_2866_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
if (lean_obj_tag(v___x_2867_) == 0)
{
lean_object* v_a_2868_; lean_object* v_snd_2869_; lean_object* v_snd_2870_; lean_object* v_uElimPos_x3f_2871_; 
v_a_2868_ = lean_ctor_get(v___x_2867_, 0);
lean_inc(v_a_2868_);
lean_dec_ref_known(v___x_2867_, 1);
v_snd_2869_ = lean_ctor_get(v_a_2868_, 1);
v_snd_2870_ = lean_ctor_get(v_snd_2869_, 1);
lean_inc(v_snd_2870_);
v_uElimPos_x3f_2871_ = lean_ctor_get(v_toMatcherInfo_2538_, 3);
if (lean_obj_tag(v_uElimPos_x3f_2871_) == 0)
{
lean_object* v_fst_2872_; lean_object* v_fst_2873_; lean_object* v_snd_2874_; 
v_fst_2872_ = lean_ctor_get(v_a_2868_, 0);
lean_inc(v_fst_2872_);
lean_dec(v_a_2868_);
v_fst_2873_ = lean_ctor_get(v_snd_2870_, 0);
lean_inc(v_fst_2873_);
v_snd_2874_ = lean_ctor_get(v_snd_2870_, 1);
lean_inc(v_snd_2874_);
lean_dec(v_snd_2870_);
lean_inc_ref(v_matcherLevels_2540_);
v___y_2646_ = v___x_2857_;
v___y_2647_ = v_fst_2872_;
v___y_2648_ = v_snd_2874_;
v___y_2649_ = v_a_2859_;
v___y_2650_ = v_fst_2873_;
v___y_2651_ = v_a_2862_;
v___y_2652_ = v_numDiscrEqs_2851_;
v_matcherLevels_2653_ = v_matcherLevels_2540_;
v___y_2654_ = v___y_2852_;
v___y_2655_ = v___y_2853_;
v___y_2656_ = v___y_2854_;
v___y_2657_ = v___y_2855_;
goto v___jp_2645_;
}
else
{
lean_object* v_fst_2875_; lean_object* v_fst_2876_; lean_object* v_fst_2877_; lean_object* v_snd_2878_; lean_object* v_val_2879_; lean_object* v___x_2880_; 
lean_inc(v_snd_2869_);
v_fst_2875_ = lean_ctor_get(v_a_2868_, 0);
lean_inc(v_fst_2875_);
lean_dec(v_a_2868_);
v_fst_2876_ = lean_ctor_get(v_snd_2869_, 0);
lean_inc(v_fst_2876_);
lean_dec(v_snd_2869_);
v_fst_2877_ = lean_ctor_get(v_snd_2870_, 0);
lean_inc(v_fst_2877_);
v_snd_2878_ = lean_ctor_get(v_snd_2870_, 1);
lean_inc(v_snd_2878_);
lean_dec(v_snd_2870_);
v_val_2879_ = lean_ctor_get(v_uElimPos_x3f_2871_, 0);
lean_inc_ref(v_matcherLevels_2540_);
v___x_2880_ = lean_array_set(v_matcherLevels_2540_, v_val_2879_, v_fst_2876_);
v___y_2646_ = v___x_2857_;
v___y_2647_ = v_fst_2875_;
v___y_2648_ = v_snd_2878_;
v___y_2649_ = v_a_2859_;
v___y_2650_ = v_fst_2877_;
v___y_2651_ = v_a_2862_;
v___y_2652_ = v_numDiscrEqs_2851_;
v_matcherLevels_2653_ = v___x_2880_;
v___y_2654_ = v___y_2852_;
v___y_2655_ = v___y_2853_;
v___y_2656_ = v___y_2854_;
v___y_2657_ = v___y_2855_;
goto v___jp_2645_;
}
}
else
{
lean_object* v_a_2881_; lean_object* v___x_2883_; uint8_t v_isShared_2884_; uint8_t v_isSharedCheck_2888_; 
lean_dec(v_a_2862_);
lean_dec(v_a_2859_);
lean_dec(v_numDiscrEqs_2851_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec(v_matcherName_2539_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
lean_dec_ref(v_matcherApp_2524_);
v_a_2881_ = lean_ctor_get(v___x_2867_, 0);
v_isSharedCheck_2888_ = !lean_is_exclusive(v___x_2867_);
if (v_isSharedCheck_2888_ == 0)
{
v___x_2883_ = v___x_2867_;
v_isShared_2884_ = v_isSharedCheck_2888_;
goto v_resetjp_2882_;
}
else
{
lean_inc(v_a_2881_);
lean_dec(v___x_2867_);
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
lean_dec(v_a_2859_);
lean_dec(v_numDiscrEqs_2851_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec(v_matcherName_2539_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
lean_dec_ref(v_onMotive_2528_);
lean_dec_ref(v_matcherApp_2524_);
v_a_2889_ = lean_ctor_get(v___x_2861_, 0);
v_isSharedCheck_2896_ = !lean_is_exclusive(v___x_2861_);
if (v_isSharedCheck_2896_ == 0)
{
v___x_2891_ = v___x_2861_;
v_isShared_2892_ = v_isSharedCheck_2896_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_a_2889_);
lean_dec(v___x_2861_);
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
lean_dec(v_numDiscrEqs_2851_);
lean_dec_ref(v_remaining_2545_);
lean_dec_ref(v_alts_2544_);
lean_dec(v_matcherName_2539_);
lean_dec_ref(v_toMatcherInfo_2538_);
lean_dec_ref(v_onRemaining_2530_);
lean_dec_ref(v_onAlt_2529_);
lean_dec_ref(v_onMotive_2528_);
lean_dec_ref(v_onParams_2527_);
lean_dec_ref(v_matcherApp_2524_);
v_a_2897_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2904_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2904_ == 0)
{
v___x_2899_ = v___x_2858_;
v_isShared_2900_ = v_isSharedCheck_2904_;
goto v_resetjp_2898_;
}
else
{
lean_inc(v_a_2897_);
lean_dec(v___x_2858_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8___boxed(lean_object* v_matcherApp_2924_, lean_object* v_useSplitter_2925_, lean_object* v_addEqualities_2926_, lean_object* v_onParams_2927_, lean_object* v_onMotive_2928_, lean_object* v_onAlt_2929_, lean_object* v_onRemaining_2930_, lean_object* v___y_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_){
_start:
{
uint8_t v_useSplitter_boxed_2936_; uint8_t v_addEqualities_boxed_2937_; lean_object* v_res_2938_; 
v_useSplitter_boxed_2936_ = lean_unbox(v_useSplitter_2925_);
v_addEqualities_boxed_2937_ = lean_unbox(v_addEqualities_2926_);
v_res_2938_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8(v_matcherApp_2924_, v_useSplitter_boxed_2936_, v_addEqualities_boxed_2937_, v_onParams_2927_, v_onMotive_2928_, v_onAlt_2929_, v_onRemaining_2930_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
lean_dec(v___y_2932_);
lean_dec_ref(v___y_2931_);
return v_res_2938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6(lean_object* v_onAlt_2942_, lean_object* v_idx_2943_, lean_object* v_expAltType_2944_, lean_object* v_altFVars_2945_, lean_object* v___alt_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_){
_start:
{
lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; 
v___x_2952_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__1));
v___x_2953_ = lean_unsigned_to_nat(1u);
v___x_2954_ = lean_nat_add(v_idx_2943_, v___x_2953_);
v___x_2955_ = lean_name_append_index_after(v___x_2952_, v___x_2954_);
lean_inc(v___y_2950_);
lean_inc_ref(v___y_2949_);
lean_inc(v___y_2948_);
lean_inc_ref(v___y_2947_);
v___x_2956_ = lean_apply_9(v_onAlt_2942_, v___x_2955_, v_expAltType_2944_, v_idx_2943_, v_altFVars_2945_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_, lean_box(0));
return v___x_2956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___boxed(lean_object* v_onAlt_2957_, lean_object* v_idx_2958_, lean_object* v_expAltType_2959_, lean_object* v_altFVars_2960_, lean_object* v___alt_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_){
_start:
{
lean_object* v_res_2967_; 
v_res_2967_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6(v_onAlt_2957_, v_idx_2958_, v_expAltType_2959_, v_altFVars_2960_, v___alt_2961_, v___y_2962_, v___y_2963_, v___y_2964_, v___y_2965_);
lean_dec(v___y_2965_);
lean_dec_ref(v___y_2964_);
lean_dec(v___y_2963_);
lean_dec_ref(v___y_2962_);
lean_dec_ref(v___alt_2961_);
return v_res_2967_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__4(lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_){
_start:
{
lean_object* v___x_2974_; 
v___x_2974_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2974_, 0, v___y_2968_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__4___boxed(lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_){
_start:
{
lean_object* v_res_2981_; 
v_res_2981_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__4(v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_);
lean_dec(v___y_2979_);
lean_dec_ref(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v___y_2976_);
return v_res_2981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2(lean_object* v_onAlt_2985_, lean_object* v_resTy_2986_, lean_object* v_h_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_){
_start:
{
lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; lean_object* v___x_3000_; 
v___x_2993_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___closed__1));
v___x_2994_ = lean_unsigned_to_nat(0u);
v___x_2995_ = lean_unsigned_to_nat(1u);
v___x_2996_ = lean_mk_empty_array_with_capacity(v___x_2995_);
v___x_2997_ = lean_array_push(v___x_2996_, v_h_2987_);
v___x_2998_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2));
lean_inc_ref_n(v___x_2997_, 2);
v___x_2999_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2999_, 0, v___x_2997_);
lean_ctor_set(v___x_2999_, 1, v___x_2997_);
lean_ctor_set(v___x_2999_, 2, v___x_2998_);
lean_ctor_set(v___x_2999_, 3, v___x_2998_);
lean_ctor_set(v___x_2999_, 4, v___x_2998_);
lean_inc(v___y_2991_);
lean_inc_ref(v___y_2990_);
lean_inc(v___y_2989_);
lean_inc_ref(v___y_2988_);
v___x_3000_ = lean_apply_9(v_onAlt_2985_, v___x_2993_, v_resTy_2986_, v___x_2994_, v___x_2999_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, lean_box(0));
if (lean_obj_tag(v___x_3000_) == 0)
{
lean_object* v_a_3001_; uint8_t v___x_3002_; uint8_t v___x_3003_; uint8_t v___x_3004_; lean_object* v___x_3005_; 
v_a_3001_ = lean_ctor_get(v___x_3000_, 0);
lean_inc(v_a_3001_);
lean_dec_ref_known(v___x_3000_, 1);
v___x_3002_ = 0;
v___x_3003_ = 1;
v___x_3004_ = 1;
v___x_3005_ = l_Lean_Meta_mkLambdaFVars(v___x_2997_, v_a_3001_, v___x_3002_, v___x_3003_, v___x_3002_, v___x_3003_, v___x_3004_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_);
lean_dec_ref(v___x_2997_);
return v___x_3005_;
}
else
{
lean_dec_ref(v___x_2997_);
return v___x_3000_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___boxed(lean_object* v_onAlt_3006_, lean_object* v_resTy_3007_, lean_object* v_h_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_, lean_object* v___y_3012_, lean_object* v___y_3013_){
_start:
{
lean_object* v_res_3014_; 
v_res_3014_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2(v_onAlt_3006_, v_resTy_3007_, v_h_3008_, v___y_3009_, v___y_3010_, v___y_3011_, v___y_3012_);
lean_dec(v___y_3012_);
lean_dec_ref(v___y_3011_);
lean_dec(v___y_3010_);
lean_dec_ref(v___y_3009_);
return v_res_3014_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__7(size_t v_sz_3015_, size_t v_i_3016_, lean_object* v_bs_3017_){
_start:
{
uint8_t v___x_3018_; 
v___x_3018_ = lean_usize_dec_lt(v_i_3016_, v_sz_3015_);
if (v___x_3018_ == 0)
{
return v_bs_3017_;
}
else
{
lean_object* v_v_3019_; lean_object* v___x_3020_; lean_object* v_bs_x27_3021_; uint8_t v___x_3022_; size_t v___x_3023_; size_t v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; 
v_v_3019_ = lean_array_uget(v_bs_3017_, v_i_3016_);
v___x_3020_ = lean_unsigned_to_nat(0u);
v_bs_x27_3021_ = lean_array_uset(v_bs_3017_, v_i_3016_, v___x_3020_);
v___x_3022_ = l_Lean_Expr_isFVar(v_v_3019_);
lean_dec(v_v_3019_);
v___x_3023_ = ((size_t)1ULL);
v___x_3024_ = lean_usize_add(v_i_3016_, v___x_3023_);
v___x_3025_ = lean_box(v___x_3022_);
v___x_3026_ = lean_array_uset(v_bs_x27_3021_, v_i_3016_, v___x_3025_);
v_i_3016_ = v___x_3024_;
v_bs_3017_ = v___x_3026_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__7___boxed(lean_object* v_sz_3028_, lean_object* v_i_3029_, lean_object* v_bs_3030_){
_start:
{
size_t v_sz_boxed_3031_; size_t v_i_boxed_3032_; lean_object* v_res_3033_; 
v_sz_boxed_3031_ = lean_unbox_usize(v_sz_3028_);
lean_dec(v_sz_3028_);
v_i_boxed_3032_ = lean_unbox_usize(v_i_3029_);
lean_dec(v_i_3029_);
v_res_3033_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__7(v_sz_boxed_3031_, v_i_boxed_3032_, v_bs_3030_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__0(lean_object* v___x_3034_, lean_object* v_onAlt_3035_, lean_object* v_resTy_3036_, uint8_t v_useSplitter_3037_, lean_object* v_h_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_){
_start:
{
lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v___x_3044_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___closed__1));
v___x_3045_ = lean_unsigned_to_nat(0u);
v___x_3046_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2));
v___x_3047_ = lean_mk_empty_array_with_capacity(v___x_3034_);
v___x_3048_ = lean_array_push(v___x_3047_, v_h_3038_);
lean_inc_ref(v___x_3048_);
v___x_3049_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3049_, 0, v___x_3046_);
lean_ctor_set(v___x_3049_, 1, v___x_3048_);
lean_ctor_set(v___x_3049_, 2, v___x_3046_);
lean_ctor_set(v___x_3049_, 3, v___x_3046_);
lean_ctor_set(v___x_3049_, 4, v___x_3046_);
lean_inc(v___y_3042_);
lean_inc_ref(v___y_3041_);
lean_inc(v___y_3040_);
lean_inc_ref(v___y_3039_);
v___x_3050_ = lean_apply_9(v_onAlt_3035_, v___x_3044_, v_resTy_3036_, v___x_3045_, v___x_3049_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_, lean_box(0));
if (lean_obj_tag(v___x_3050_) == 0)
{
lean_object* v_a_3051_; uint8_t v___x_3052_; uint8_t v___x_3053_; lean_object* v___x_3054_; 
v_a_3051_ = lean_ctor_get(v___x_3050_, 0);
lean_inc(v_a_3051_);
lean_dec_ref_known(v___x_3050_, 1);
v___x_3052_ = 0;
v___x_3053_ = 1;
v___x_3054_ = l_Lean_Meta_mkLambdaFVars(v___x_3048_, v_a_3051_, v___x_3052_, v_useSplitter_3037_, v___x_3052_, v_useSplitter_3037_, v___x_3053_, v___y_3039_, v___y_3040_, v___y_3041_, v___y_3042_);
lean_dec_ref(v___x_3048_);
return v___x_3054_;
}
else
{
lean_dec_ref(v___x_3048_);
return v___x_3050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__0___boxed(lean_object* v___x_3055_, lean_object* v_onAlt_3056_, lean_object* v_resTy_3057_, lean_object* v_useSplitter_3058_, lean_object* v_h_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_, lean_object* v___y_3063_, lean_object* v___y_3064_){
_start:
{
uint8_t v_useSplitter_boxed_3065_; lean_object* v_res_3066_; 
v_useSplitter_boxed_3065_ = lean_unbox(v_useSplitter_3058_);
v_res_3066_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__0(v___x_3055_, v_onAlt_3056_, v_resTy_3057_, v_useSplitter_boxed_3065_, v_h_3059_, v___y_3060_, v___y_3061_, v___y_3062_, v___y_3063_);
lean_dec(v___y_3063_);
lean_dec_ref(v___y_3062_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
lean_dec(v___x_3055_);
return v_res_3066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__5(lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_){
_start:
{
lean_object* v___x_3073_; 
v___x_3073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3073_, 0, v___y_3067_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__5___boxed(lean_object* v___y_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_){
_start:
{
lean_object* v_res_3080_; 
v_res_3080_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__5(v___y_3074_, v___y_3075_, v___y_3076_, v___y_3077_, v___y_3078_);
lean_dec(v___y_3078_);
lean_dec_ref(v___y_3077_);
lean_dec(v___y_3076_);
lean_dec_ref(v___y_3075_);
return v_res_3080_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__3(lean_object* v___x_3081_, lean_object* v_onAlt_3082_, lean_object* v_resTy_3083_, lean_object* v_h_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_){
_start:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; 
v___x_3090_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__1));
v___x_3091_ = lean_mk_empty_array_with_capacity(v___x_3081_);
v___x_3092_ = lean_array_push(v___x_3091_, v_h_3084_);
v___x_3093_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2));
lean_inc_ref_n(v___x_3092_, 2);
v___x_3094_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3094_, 0, v___x_3092_);
lean_ctor_set(v___x_3094_, 1, v___x_3092_);
lean_ctor_set(v___x_3094_, 2, v___x_3093_);
lean_ctor_set(v___x_3094_, 3, v___x_3093_);
lean_ctor_set(v___x_3094_, 4, v___x_3093_);
lean_inc(v___y_3088_);
lean_inc_ref(v___y_3087_);
lean_inc(v___y_3086_);
lean_inc_ref(v___y_3085_);
v___x_3095_ = lean_apply_9(v_onAlt_3082_, v___x_3090_, v_resTy_3083_, v___x_3081_, v___x_3094_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_, lean_box(0));
if (lean_obj_tag(v___x_3095_) == 0)
{
lean_object* v_a_3096_; uint8_t v___x_3097_; uint8_t v___x_3098_; uint8_t v___x_3099_; lean_object* v___x_3100_; 
v_a_3096_ = lean_ctor_get(v___x_3095_, 0);
lean_inc(v_a_3096_);
lean_dec_ref_known(v___x_3095_, 1);
v___x_3097_ = 0;
v___x_3098_ = 1;
v___x_3099_ = 1;
v___x_3100_ = l_Lean_Meta_mkLambdaFVars(v___x_3092_, v_a_3096_, v___x_3097_, v___x_3098_, v___x_3097_, v___x_3098_, v___x_3099_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_);
lean_dec_ref(v___x_3092_);
return v___x_3100_;
}
else
{
lean_dec_ref(v___x_3092_);
return v___x_3095_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__3___boxed(lean_object* v___x_3101_, lean_object* v_onAlt_3102_, lean_object* v_resTy_3103_, lean_object* v_h_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_){
_start:
{
lean_object* v_res_3110_; 
v_res_3110_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__3(v___x_3101_, v_onAlt_3102_, v_resTy_3103_, v_h_3104_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_);
lean_dec(v___y_3108_);
lean_dec_ref(v___y_3107_);
lean_dec(v___y_3106_);
lean_dec_ref(v___y_3105_);
return v_res_3110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5(lean_object* v_info_3121_, lean_object* v_resTy_3122_, lean_object* v_onAlt_3123_, uint8_t v_useSplitter_3124_, lean_object* v___y_3125_, lean_object* v___y_3126_, lean_object* v___y_3127_, lean_object* v___y_3128_){
_start:
{
switch(lean_obj_tag(v_info_3121_))
{
case 0:
{
lean_object* v_e_3130_; lean_object* v___x_3131_; 
v_e_3130_ = lean_ctor_get(v_info_3121_, 0);
lean_inc_ref(v_e_3130_);
lean_dec_ref_known(v_info_3121_, 1);
lean_inc_ref(v_resTy_3122_);
v___x_3131_ = l_Lean_Meta_getLevel(v_resTy_3122_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
if (lean_obj_tag(v___x_3131_) == 0)
{
lean_object* v_a_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v_c_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v_h_3141_; 
v_a_3132_ = lean_ctor_get(v___x_3131_, 0);
lean_inc(v_a_3132_);
lean_dec_ref_known(v___x_3131_, 1);
v___x_3133_ = lean_unsigned_to_nat(1u);
v___x_3134_ = l_Lean_Expr_getAppNumArgs(v_e_3130_);
v___x_3135_ = lean_nat_sub(v___x_3134_, v___x_3133_);
v___x_3136_ = lean_nat_sub(v___x_3135_, v___x_3133_);
lean_dec(v___x_3135_);
v_c_3137_ = l_Lean_Expr_getRevArg_x21(v_e_3130_, v___x_3136_);
v___x_3138_ = lean_unsigned_to_nat(2u);
v___x_3139_ = lean_nat_sub(v___x_3134_, v___x_3138_);
lean_dec(v___x_3134_);
v___x_3140_ = lean_nat_sub(v___x_3139_, v___x_3133_);
lean_dec(v___x_3139_);
v_h_3141_ = l_Lean_Expr_getRevArg_x21(v_e_3130_, v___x_3140_);
lean_dec_ref(v_e_3130_);
if (v_useSplitter_3124_ == 0)
{
lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v___x_3142_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___closed__1));
v___x_3143_ = lean_unsigned_to_nat(0u);
v___x_3144_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__0));
lean_inc_ref(v_onAlt_3123_);
lean_inc(v___y_3128_);
lean_inc_ref(v___y_3127_);
lean_inc(v___y_3126_);
lean_inc_ref(v___y_3125_);
lean_inc_ref(v_resTy_3122_);
v___x_3145_ = lean_apply_9(v_onAlt_3123_, v___x_3142_, v_resTy_3122_, v___x_3143_, v___x_3144_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, lean_box(0));
if (lean_obj_tag(v___x_3145_) == 0)
{
lean_object* v_a_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
v_a_3146_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_a_3146_);
lean_dec_ref_known(v___x_3145_, 1);
v___x_3147_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__1));
lean_inc(v___y_3128_);
lean_inc_ref(v___y_3127_);
lean_inc(v___y_3126_);
lean_inc_ref(v___y_3125_);
lean_inc_ref(v_resTy_3122_);
v___x_3148_ = lean_apply_9(v_onAlt_3123_, v___x_3147_, v_resTy_3122_, v___x_3133_, v___x_3144_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_, lean_box(0));
if (lean_obj_tag(v___x_3148_) == 0)
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3161_; 
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
v_isSharedCheck_3161_ = !lean_is_exclusive(v___x_3148_);
if (v_isSharedCheck_3161_ == 0)
{
v___x_3151_ = v___x_3148_;
v_isShared_3152_ = v_isSharedCheck_3161_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3148_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3161_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3159_; 
v___x_3153_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__2));
v___x_3154_ = lean_box(0);
v___x_3155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3155_, 0, v_a_3132_);
lean_ctor_set(v___x_3155_, 1, v___x_3154_);
v___x_3156_ = l_Lean_mkConst(v___x_3153_, v___x_3155_);
v___x_3157_ = l_Lean_mkApp5(v___x_3156_, v_resTy_3122_, v_c_3137_, v_h_3141_, v_a_3146_, v_a_3149_);
if (v_isShared_3152_ == 0)
{
lean_ctor_set(v___x_3151_, 0, v___x_3157_);
v___x_3159_ = v___x_3151_;
goto v_reusejp_3158_;
}
else
{
lean_object* v_reuseFailAlloc_3160_; 
v_reuseFailAlloc_3160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3160_, 0, v___x_3157_);
v___x_3159_ = v_reuseFailAlloc_3160_;
goto v_reusejp_3158_;
}
v_reusejp_3158_:
{
return v___x_3159_;
}
}
}
else
{
lean_dec(v_a_3146_);
lean_dec_ref(v_h_3141_);
lean_dec_ref(v_c_3137_);
lean_dec(v_a_3132_);
lean_dec_ref(v_resTy_3122_);
return v___x_3148_;
}
}
else
{
lean_dec_ref(v_h_3141_);
lean_dec_ref(v_c_3137_);
lean_dec(v_a_3132_);
lean_dec_ref(v_onAlt_3123_);
lean_dec_ref(v_resTy_3122_);
return v___x_3145_;
}
}
else
{
lean_object* v___x_3162_; lean_object* v___x_3163_; 
v___x_3162_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__1));
v___x_3163_ = l_Lean_Core_mkFreshUserName(v___x_3162_, v___y_3127_, v___y_3128_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; lean_object* v___x_3165_; lean_object* v___f_3166_; uint8_t v___x_3167_; uint8_t v___x_3168_; lean_object* v___x_3169_; 
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc_n(v_a_3164_, 2);
lean_dec_ref_known(v___x_3163_, 1);
v___x_3165_ = lean_box(v_useSplitter_3124_);
lean_inc_ref(v_resTy_3122_);
lean_inc_ref(v_onAlt_3123_);
v___f_3166_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__0___boxed), 10, 4);
lean_closure_set(v___f_3166_, 0, v___x_3133_);
lean_closure_set(v___f_3166_, 1, v_onAlt_3123_);
lean_closure_set(v___f_3166_, 2, v_resTy_3122_);
lean_closure_set(v___f_3166_, 3, v___x_3165_);
v___x_3167_ = 0;
v___x_3168_ = 0;
lean_inc_ref(v_c_3137_);
v___x_3169_ = l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg(v_a_3164_, v___x_3167_, v_c_3137_, v___f_3166_, v___x_3168_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
if (lean_obj_tag(v___x_3169_) == 0)
{
lean_object* v_a_3170_; lean_object* v___x_3171_; lean_object* v___f_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v_a_3170_ = lean_ctor_get(v___x_3169_, 0);
lean_inc(v_a_3170_);
lean_dec_ref_known(v___x_3169_, 1);
v___x_3171_ = lean_box(v_useSplitter_3124_);
lean_inc_ref(v_resTy_3122_);
v___f_3172_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3172_, 0, v___x_3133_);
lean_closure_set(v___f_3172_, 1, v_onAlt_3123_);
lean_closure_set(v___f_3172_, 2, v_resTy_3122_);
lean_closure_set(v___f_3172_, 3, v___x_3171_);
lean_inc_ref(v_c_3137_);
v___x_3173_ = l_Lean_mkNot(v_c_3137_);
v___x_3174_ = l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg(v_a_3164_, v___x_3167_, v___x_3173_, v___f_3172_, v___x_3168_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
if (lean_obj_tag(v___x_3174_) == 0)
{
lean_object* v_a_3175_; lean_object* v___x_3177_; uint8_t v_isShared_3178_; uint8_t v_isSharedCheck_3187_; 
v_a_3175_ = lean_ctor_get(v___x_3174_, 0);
v_isSharedCheck_3187_ = !lean_is_exclusive(v___x_3174_);
if (v_isSharedCheck_3187_ == 0)
{
v___x_3177_ = v___x_3174_;
v_isShared_3178_ = v_isSharedCheck_3187_;
goto v_resetjp_3176_;
}
else
{
lean_inc(v_a_3175_);
lean_dec(v___x_3174_);
v___x_3177_ = lean_box(0);
v_isShared_3178_ = v_isSharedCheck_3187_;
goto v_resetjp_3176_;
}
v_resetjp_3176_:
{
lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3185_; 
v___x_3179_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__4));
v___x_3180_ = lean_box(0);
v___x_3181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3181_, 0, v_a_3132_);
lean_ctor_set(v___x_3181_, 1, v___x_3180_);
v___x_3182_ = l_Lean_mkConst(v___x_3179_, v___x_3181_);
v___x_3183_ = l_Lean_mkApp5(v___x_3182_, v_resTy_3122_, v_c_3137_, v_h_3141_, v_a_3170_, v_a_3175_);
if (v_isShared_3178_ == 0)
{
lean_ctor_set(v___x_3177_, 0, v___x_3183_);
v___x_3185_ = v___x_3177_;
goto v_reusejp_3184_;
}
else
{
lean_object* v_reuseFailAlloc_3186_; 
v_reuseFailAlloc_3186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3186_, 0, v___x_3183_);
v___x_3185_ = v_reuseFailAlloc_3186_;
goto v_reusejp_3184_;
}
v_reusejp_3184_:
{
return v___x_3185_;
}
}
}
else
{
lean_dec(v_a_3170_);
lean_dec_ref(v_h_3141_);
lean_dec_ref(v_c_3137_);
lean_dec(v_a_3132_);
lean_dec_ref(v_resTy_3122_);
return v___x_3174_;
}
}
else
{
lean_dec(v_a_3164_);
lean_dec_ref(v_h_3141_);
lean_dec_ref(v_c_3137_);
lean_dec(v_a_3132_);
lean_dec_ref(v_onAlt_3123_);
lean_dec_ref(v_resTy_3122_);
return v___x_3169_;
}
}
else
{
lean_object* v_a_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3195_; 
lean_dec_ref(v_h_3141_);
lean_dec_ref(v_c_3137_);
lean_dec(v_a_3132_);
lean_dec_ref(v_onAlt_3123_);
lean_dec_ref(v_resTy_3122_);
v_a_3188_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3195_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3195_ == 0)
{
v___x_3190_ = v___x_3163_;
v_isShared_3191_ = v_isSharedCheck_3195_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_a_3188_);
lean_dec(v___x_3163_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3195_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___x_3193_; 
if (v_isShared_3191_ == 0)
{
v___x_3193_ = v___x_3190_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3194_; 
v_reuseFailAlloc_3194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3194_, 0, v_a_3188_);
v___x_3193_ = v_reuseFailAlloc_3194_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
return v___x_3193_;
}
}
}
}
}
else
{
lean_object* v_a_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3203_; 
lean_dec_ref(v_e_3130_);
lean_dec_ref(v_onAlt_3123_);
lean_dec_ref(v_resTy_3122_);
v_a_3196_ = lean_ctor_get(v___x_3131_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3131_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3198_ = v___x_3131_;
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_a_3196_);
lean_dec(v___x_3131_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v___x_3201_; 
if (v_isShared_3199_ == 0)
{
v___x_3201_ = v___x_3198_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v_a_3196_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
}
case 1:
{
lean_object* v_e_3204_; lean_object* v___x_3205_; 
v_e_3204_ = lean_ctor_get(v_info_3121_, 0);
lean_inc_ref(v_e_3204_);
lean_dec_ref_known(v_info_3121_, 1);
lean_inc_ref(v_resTy_3122_);
v___x_3205_ = l_Lean_Meta_getLevel(v_resTy_3122_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
if (lean_obj_tag(v___x_3205_) == 0)
{
lean_object* v_a_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v_a_3206_ = lean_ctor_get(v___x_3205_, 0);
lean_inc(v_a_3206_);
lean_dec_ref_known(v___x_3205_, 1);
v___x_3207_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__1));
v___x_3208_ = l_Lean_Core_mkFreshUserName(v___x_3207_, v___y_3127_, v___y_3128_);
if (lean_obj_tag(v___x_3208_) == 0)
{
lean_object* v_a_3209_; lean_object* v___f_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v_c_3215_; uint8_t v___x_3216_; uint8_t v___x_3217_; lean_object* v___x_3218_; 
v_a_3209_ = lean_ctor_get(v___x_3208_, 0);
lean_inc_n(v_a_3209_, 2);
lean_dec_ref_known(v___x_3208_, 1);
lean_inc_ref(v_resTy_3122_);
lean_inc_ref(v_onAlt_3123_);
v___f_3210_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__2___boxed), 8, 2);
lean_closure_set(v___f_3210_, 0, v_onAlt_3123_);
lean_closure_set(v___f_3210_, 1, v_resTy_3122_);
v___x_3211_ = lean_unsigned_to_nat(1u);
v___x_3212_ = l_Lean_Expr_getAppNumArgs(v_e_3204_);
v___x_3213_ = lean_nat_sub(v___x_3212_, v___x_3211_);
v___x_3214_ = lean_nat_sub(v___x_3213_, v___x_3211_);
lean_dec(v___x_3213_);
v_c_3215_ = l_Lean_Expr_getRevArg_x21(v_e_3204_, v___x_3214_);
v___x_3216_ = 0;
v___x_3217_ = 0;
lean_inc_ref(v_c_3215_);
v___x_3218_ = l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg(v_a_3209_, v___x_3216_, v_c_3215_, v___f_3210_, v___x_3217_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
if (lean_obj_tag(v___x_3218_) == 0)
{
lean_object* v_a_3219_; lean_object* v___f_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v_a_3219_ = lean_ctor_get(v___x_3218_, 0);
lean_inc(v_a_3219_);
lean_dec_ref_known(v___x_3218_, 1);
lean_inc_ref(v_resTy_3122_);
v___f_3220_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__3___boxed), 9, 3);
lean_closure_set(v___f_3220_, 0, v___x_3211_);
lean_closure_set(v___f_3220_, 1, v_onAlt_3123_);
lean_closure_set(v___f_3220_, 2, v_resTy_3122_);
lean_inc_ref(v_c_3215_);
v___x_3221_ = l_Lean_mkNot(v_c_3215_);
v___x_3222_ = l_Lean_Meta_withLocalDecl___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__2___redArg(v_a_3209_, v___x_3216_, v___x_3221_, v___f_3220_, v___x_3217_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_object* v_a_3223_; lean_object* v___x_3225_; uint8_t v_isShared_3226_; uint8_t v_isSharedCheck_3239_; 
v_a_3223_ = lean_ctor_get(v___x_3222_, 0);
v_isSharedCheck_3239_ = !lean_is_exclusive(v___x_3222_);
if (v_isSharedCheck_3239_ == 0)
{
v___x_3225_ = v___x_3222_;
v_isShared_3226_ = v_isSharedCheck_3239_;
goto v_resetjp_3224_;
}
else
{
lean_inc(v_a_3223_);
lean_dec(v___x_3222_);
v___x_3225_ = lean_box(0);
v_isShared_3226_ = v_isSharedCheck_3239_;
goto v_resetjp_3224_;
}
v_resetjp_3224_:
{
lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v_h_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3237_; 
v___x_3227_ = lean_unsigned_to_nat(2u);
v___x_3228_ = lean_nat_sub(v___x_3212_, v___x_3227_);
lean_dec(v___x_3212_);
v___x_3229_ = lean_nat_sub(v___x_3228_, v___x_3211_);
lean_dec(v___x_3228_);
v_h_3230_ = l_Lean_Expr_getRevArg_x21(v_e_3204_, v___x_3229_);
lean_dec_ref(v_e_3204_);
v___x_3231_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__4));
v___x_3232_ = lean_box(0);
v___x_3233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3233_, 0, v_a_3206_);
lean_ctor_set(v___x_3233_, 1, v___x_3232_);
v___x_3234_ = l_Lean_mkConst(v___x_3231_, v___x_3233_);
v___x_3235_ = l_Lean_mkApp5(v___x_3234_, v_resTy_3122_, v_c_3215_, v_h_3230_, v_a_3219_, v_a_3223_);
if (v_isShared_3226_ == 0)
{
lean_ctor_set(v___x_3225_, 0, v___x_3235_);
v___x_3237_ = v___x_3225_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v___x_3235_);
v___x_3237_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
return v___x_3237_;
}
}
}
else
{
lean_dec(v_a_3219_);
lean_dec_ref(v_c_3215_);
lean_dec(v___x_3212_);
lean_dec(v_a_3206_);
lean_dec_ref(v_e_3204_);
lean_dec_ref(v_resTy_3122_);
return v___x_3222_;
}
}
else
{
lean_dec_ref(v_c_3215_);
lean_dec(v___x_3212_);
lean_dec(v_a_3209_);
lean_dec(v_a_3206_);
lean_dec_ref(v_e_3204_);
lean_dec_ref(v_onAlt_3123_);
lean_dec_ref(v_resTy_3122_);
return v___x_3218_;
}
}
else
{
lean_object* v_a_3240_; lean_object* v___x_3242_; uint8_t v_isShared_3243_; uint8_t v_isSharedCheck_3247_; 
lean_dec(v_a_3206_);
lean_dec_ref(v_e_3204_);
lean_dec_ref(v_onAlt_3123_);
lean_dec_ref(v_resTy_3122_);
v_a_3240_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3247_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3247_ == 0)
{
v___x_3242_ = v___x_3208_;
v_isShared_3243_ = v_isSharedCheck_3247_;
goto v_resetjp_3241_;
}
else
{
lean_inc(v_a_3240_);
lean_dec(v___x_3208_);
v___x_3242_ = lean_box(0);
v_isShared_3243_ = v_isSharedCheck_3247_;
goto v_resetjp_3241_;
}
v_resetjp_3241_:
{
lean_object* v___x_3245_; 
if (v_isShared_3243_ == 0)
{
v___x_3245_ = v___x_3242_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3246_; 
v_reuseFailAlloc_3246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3246_, 0, v_a_3240_);
v___x_3245_ = v_reuseFailAlloc_3246_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
return v___x_3245_;
}
}
}
}
else
{
lean_object* v_a_3248_; lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3255_; 
lean_dec_ref(v_e_3204_);
lean_dec_ref(v_onAlt_3123_);
lean_dec_ref(v_resTy_3122_);
v_a_3248_ = lean_ctor_get(v___x_3205_, 0);
v_isSharedCheck_3255_ = !lean_is_exclusive(v___x_3205_);
if (v_isSharedCheck_3255_ == 0)
{
v___x_3250_ = v___x_3205_;
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
else
{
lean_inc(v_a_3248_);
lean_dec(v___x_3205_);
v___x_3250_ = lean_box(0);
v_isShared_3251_ = v_isSharedCheck_3255_;
goto v_resetjp_3249_;
}
v_resetjp_3249_:
{
lean_object* v___x_3253_; 
if (v_isShared_3251_ == 0)
{
v___x_3253_ = v___x_3250_;
goto v_reusejp_3252_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v_a_3248_);
v___x_3253_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3252_;
}
v_reusejp_3252_:
{
return v___x_3253_;
}
}
}
}
default: 
{
lean_object* v_matcherApp_3256_; lean_object* v_discrs_3257_; size_t v_sz_3258_; size_t v___x_3259_; lean_object* v_mask_3260_; lean_object* v_maskedDiscrs_3261_; lean_object* v___x_3262_; 
v_matcherApp_3256_ = lean_ctor_get(v_info_3121_, 0);
lean_inc_ref(v_matcherApp_3256_);
lean_dec_ref_known(v_info_3121_, 1);
v_discrs_3257_ = lean_ctor_get(v_matcherApp_3256_, 5);
v_sz_3258_ = lean_array_size(v_discrs_3257_);
v___x_3259_ = ((size_t)0ULL);
lean_inc_ref_n(v_discrs_3257_, 2);
v_mask_3260_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__7(v_sz_3258_, v___x_3259_, v_discrs_3257_);
v_maskedDiscrs_3261_ = l_Array_mask___redArg(v_mask_3260_, v_discrs_3257_);
v___x_3262_ = l_Lean_Expr_abstractM(v_resTy_3122_, v_maskedDiscrs_3261_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
lean_dec(v_maskedDiscrs_3261_);
if (lean_obj_tag(v___x_3262_) == 0)
{
lean_object* v_a_3263_; lean_object* v___f_3264_; lean_object* v___f_3265_; lean_object* v___f_3266_; lean_object* v___f_3267_; lean_object* v___x_3268_; 
v_a_3263_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_a_3263_);
lean_dec_ref_known(v___x_3262_, 1);
v___f_3264_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__5));
v___f_3265_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__6));
v___f_3266_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___boxed), 10, 1);
lean_closure_set(v___f_3266_, 0, v_onAlt_3123_);
v___f_3267_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__7___boxed), 9, 2);
lean_closure_set(v___f_3267_, 0, v_mask_3260_);
lean_closure_set(v___f_3267_, 1, v_a_3263_);
v___x_3268_ = l_Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8(v_matcherApp_3256_, v_useSplitter_3124_, v_useSplitter_3124_, v___f_3265_, v___f_3267_, v___f_3266_, v___f_3264_, v___y_3125_, v___y_3126_, v___y_3127_, v___y_3128_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3277_; 
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3277_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3277_ == 0)
{
v___x_3271_ = v___x_3268_;
v_isShared_3272_ = v_isSharedCheck_3277_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3268_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3277_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3273_; lean_object* v___x_3275_; 
v___x_3273_ = l_Lean_Meta_MatcherApp_toExpr(v_a_3269_);
if (v_isShared_3272_ == 0)
{
lean_ctor_set(v___x_3271_, 0, v___x_3273_);
v___x_3275_ = v___x_3271_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v___x_3273_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
}
else
{
lean_object* v_a_3278_; lean_object* v___x_3280_; uint8_t v_isShared_3281_; uint8_t v_isSharedCheck_3285_; 
v_a_3278_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3280_ = v___x_3268_;
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
else
{
lean_inc(v_a_3278_);
lean_dec(v___x_3268_);
v___x_3280_ = lean_box(0);
v_isShared_3281_ = v_isSharedCheck_3285_;
goto v_resetjp_3279_;
}
v_resetjp_3279_:
{
lean_object* v___x_3283_; 
if (v_isShared_3281_ == 0)
{
v___x_3283_ = v___x_3280_;
goto v_reusejp_3282_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v_a_3278_);
v___x_3283_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3282_;
}
v_reusejp_3282_:
{
return v___x_3283_;
}
}
}
}
else
{
lean_dec_ref(v_mask_3260_);
lean_dec_ref(v_matcherApp_3256_);
lean_dec_ref(v_onAlt_3123_);
return v___x_3262_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___boxed(lean_object* v_info_3286_, lean_object* v_resTy_3287_, lean_object* v_onAlt_3288_, lean_object* v_useSplitter_3289_, lean_object* v___y_3290_, lean_object* v___y_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_){
_start:
{
uint8_t v_useSplitter_boxed_3295_; lean_object* v_res_3296_; 
v_useSplitter_boxed_3295_ = lean_unbox(v_useSplitter_3289_);
v_res_3296_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5(v_info_3286_, v_resTy_3287_, v_onAlt_3288_, v_useSplitter_boxed_3295_, v___y_3290_, v___y_3291_, v___y_3292_, v___y_3293_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
lean_dec(v___y_3291_);
lean_dec_ref(v___y_3290_);
return v_res_3296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__4(lean_object* v___x_3297_, lean_object* v___x_3298_, lean_object* v___x_3299_, lean_object* v___x_3300_, lean_object* v___f_3301_, uint8_t v___x_3302_, lean_object* v_a_3303_, lean_object* v_a_3304_, lean_object* v___y_3305_, lean_object* v_abstractInfo_3306_, lean_object* v_a_3307_, lean_object* v_splitFVars_3308_, lean_object* v_ss_3309_, lean_object* v_post_3310_, lean_object* v_epost_3311_, lean_object* v_pre_3312_, lean_object* v_subgoalHyps_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_, lean_object* v___y_3318_, lean_object* v___y_3319_){
_start:
{
lean_object* v___x_3321_; lean_object* v___f_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; 
v___x_3321_ = lean_box(v___x_3302_);
lean_inc_ref(v___f_3301_);
lean_inc_ref(v_subgoalHyps_3313_);
lean_inc(v___x_3298_);
lean_inc(v___x_3297_);
v___f_3322_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__3___boxed), 18, 9);
lean_closure_set(v___f_3322_, 0, v___x_3297_);
lean_closure_set(v___f_3322_, 1, v___x_3298_);
lean_closure_set(v___f_3322_, 2, v___x_3299_);
lean_closure_set(v___f_3322_, 3, v___x_3300_);
lean_closure_set(v___f_3322_, 4, v_subgoalHyps_3313_);
lean_closure_set(v___f_3322_, 5, v___f_3301_);
lean_closure_set(v___f_3322_, 6, v___x_3321_);
lean_closure_set(v___f_3322_, 7, v_a_3303_);
lean_closure_set(v___f_3322_, 8, v_a_3304_);
v___x_3323_ = lean_apply_1(v___f_3301_, v___y_3305_);
v___x_3324_ = l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5(v_abstractInfo_3306_, v___x_3323_, v___f_3322_, v___x_3302_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_);
if (lean_obj_tag(v___x_3324_) == 0)
{
lean_object* v_a_3325_; lean_object* v___x_3326_; lean_object* v_a_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; uint8_t v___x_3338_; uint8_t v___x_3339_; lean_object* v___x_3340_; 
v_a_3325_ = lean_ctor_get(v___x_3324_, 0);
lean_inc(v_a_3325_);
lean_dec_ref_known(v___x_3324_, 1);
v___x_3326_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__6___redArg(v_a_3325_, v___y_3317_);
v_a_3327_ = lean_ctor_get(v___x_3326_, 0);
lean_inc(v_a_3327_);
lean_dec_ref(v___x_3326_);
v___x_3328_ = lean_mk_empty_array_with_capacity(v___x_3298_);
lean_dec(v___x_3298_);
v___x_3329_ = lean_array_push(v___x_3328_, v_a_3307_);
v___x_3330_ = l_Array_append___redArg(v___x_3329_, v_splitFVars_3308_);
v___x_3331_ = l_Array_append___redArg(v___x_3330_, v_ss_3309_);
v___x_3332_ = lean_mk_empty_array_with_capacity(v___x_3297_);
lean_dec(v___x_3297_);
v___x_3333_ = lean_array_push(v___x_3332_, v_post_3310_);
v___x_3334_ = lean_array_push(v___x_3333_, v_epost_3311_);
v___x_3335_ = lean_array_push(v___x_3334_, v_pre_3312_);
v___x_3336_ = l_Array_append___redArg(v___x_3331_, v___x_3335_);
lean_dec_ref(v___x_3335_);
v___x_3337_ = l_Array_append___redArg(v___x_3336_, v_subgoalHyps_3313_);
lean_dec_ref(v_subgoalHyps_3313_);
v___x_3338_ = 0;
v___x_3339_ = 1;
v___x_3340_ = l_Lean_Meta_mkLambdaFVars(v___x_3337_, v_a_3327_, v___x_3338_, v___x_3302_, v___x_3338_, v___x_3302_, v___x_3339_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_);
lean_dec_ref(v___x_3337_);
return v___x_3340_;
}
else
{
lean_dec_ref(v_subgoalHyps_3313_);
lean_dec_ref(v_pre_3312_);
lean_dec_ref(v_epost_3311_);
lean_dec_ref(v_post_3310_);
lean_dec_ref(v_a_3307_);
lean_dec(v___x_3298_);
lean_dec(v___x_3297_);
return v___x_3324_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__4___boxed(lean_object** _args){
lean_object* v___x_3341_ = _args[0];
lean_object* v___x_3342_ = _args[1];
lean_object* v___x_3343_ = _args[2];
lean_object* v___x_3344_ = _args[3];
lean_object* v___f_3345_ = _args[4];
lean_object* v___x_3346_ = _args[5];
lean_object* v_a_3347_ = _args[6];
lean_object* v_a_3348_ = _args[7];
lean_object* v___y_3349_ = _args[8];
lean_object* v_abstractInfo_3350_ = _args[9];
lean_object* v_a_3351_ = _args[10];
lean_object* v_splitFVars_3352_ = _args[11];
lean_object* v_ss_3353_ = _args[12];
lean_object* v_post_3354_ = _args[13];
lean_object* v_epost_3355_ = _args[14];
lean_object* v_pre_3356_ = _args[15];
lean_object* v_subgoalHyps_3357_ = _args[16];
lean_object* v___y_3358_ = _args[17];
lean_object* v___y_3359_ = _args[18];
lean_object* v___y_3360_ = _args[19];
lean_object* v___y_3361_ = _args[20];
lean_object* v___y_3362_ = _args[21];
lean_object* v___y_3363_ = _args[22];
lean_object* v___y_3364_ = _args[23];
_start:
{
uint8_t v___x_72598__boxed_3365_; lean_object* v_res_3366_; 
v___x_72598__boxed_3365_ = lean_unbox(v___x_3346_);
v_res_3366_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__4(v___x_3341_, v___x_3342_, v___x_3343_, v___x_3344_, v___f_3345_, v___x_72598__boxed_3365_, v_a_3347_, v_a_3348_, v___y_3349_, v_abstractInfo_3350_, v_a_3351_, v_splitFVars_3352_, v_ss_3353_, v_post_3354_, v_epost_3355_, v_pre_3356_, v_subgoalHyps_3357_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_, v___y_3362_, v___y_3363_);
lean_dec(v___y_3363_);
lean_dec_ref(v___y_3362_);
lean_dec(v___y_3361_);
lean_dec_ref(v___y_3360_);
lean_dec(v___y_3359_);
lean_dec_ref(v___y_3358_);
lean_dec_ref(v_ss_3353_);
lean_dec_ref(v_splitFVars_3352_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39___lam__0(lean_object* v___x_3367_, lean_object* v_a_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_){
_start:
{
lean_object* v___x_3376_; lean_object* v___x_67485__overap_3377_; lean_object* v___x_3378_; 
v___x_3376_ = l_Lean_instInhabitedExpr;
v___x_67485__overap_3377_ = l_instInhabitedOfMonad___redArg(v___x_3367_, v___x_3376_);
lean_inc(v___y_3374_);
lean_inc_ref(v___y_3373_);
lean_inc(v___y_3372_);
lean_inc_ref(v___y_3371_);
lean_inc(v___y_3370_);
lean_inc_ref(v___y_3369_);
v___x_3378_ = lean_apply_7(v___x_67485__overap_3377_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, v___y_3374_, lean_box(0));
return v___x_3378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39___lam__0___boxed(lean_object* v___x_3379_, lean_object* v_a_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_){
_start:
{
lean_object* v_res_3388_; 
v_res_3388_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39___lam__0(v___x_3379_, v_a_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_);
lean_dec(v___y_3386_);
lean_dec_ref(v___y_3385_);
lean_dec(v___y_3384_);
lean_dec_ref(v___y_3383_);
lean_dec(v___y_3382_);
lean_dec_ref(v___y_3381_);
lean_dec_ref(v_a_3380_);
return v_res_3388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45___lam__0___boxed(lean_object* v_acc_3389_, lean_object* v_declInfos_3390_, lean_object* v_k_3391_, lean_object* v_kind_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v_b_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_){
_start:
{
uint8_t v_kind_boxed_3401_; lean_object* v_res_3402_; 
v_kind_boxed_3401_ = lean_unbox(v_kind_3392_);
v_res_3402_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45___lam__0(v_acc_3389_, v_declInfos_3390_, v_k_3391_, v_kind_boxed_3401_, v___y_3393_, v___y_3394_, v_b_3395_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_);
lean_dec(v___y_3399_);
lean_dec_ref(v___y_3398_);
lean_dec(v___y_3397_);
lean_dec_ref(v___y_3396_);
lean_dec(v___y_3394_);
lean_dec_ref(v___y_3393_);
return v_res_3402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45(lean_object* v_acc_3403_, lean_object* v_declInfos_3404_, lean_object* v_k_3405_, uint8_t v_kind_3406_, lean_object* v_name_3407_, uint8_t v_bi_3408_, lean_object* v_type_3409_, uint8_t v_kind_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_){
_start:
{
lean_object* v___x_3418_; lean_object* v___f_3419_; lean_object* v___x_3420_; 
v___x_3418_ = lean_box(v_kind_3406_);
lean_inc(v___y_3412_);
lean_inc_ref(v___y_3411_);
v___f_3419_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45___lam__0___boxed), 12, 6);
lean_closure_set(v___f_3419_, 0, v_acc_3403_);
lean_closure_set(v___f_3419_, 1, v_declInfos_3404_);
lean_closure_set(v___f_3419_, 2, v_k_3405_);
lean_closure_set(v___f_3419_, 3, v___x_3418_);
lean_closure_set(v___f_3419_, 4, v___y_3411_);
lean_closure_set(v___f_3419_, 5, v___y_3412_);
v___x_3420_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3407_, v_bi_3408_, v_type_3409_, v___f_3419_, v_kind_3410_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_);
if (lean_obj_tag(v___x_3420_) == 0)
{
return v___x_3420_;
}
else
{
lean_object* v_a_3421_; lean_object* v___x_3423_; uint8_t v_isShared_3424_; uint8_t v_isSharedCheck_3428_; 
v_a_3421_ = lean_ctor_get(v___x_3420_, 0);
v_isSharedCheck_3428_ = !lean_is_exclusive(v___x_3420_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3423_ = v___x_3420_;
v_isShared_3424_ = v_isSharedCheck_3428_;
goto v_resetjp_3422_;
}
else
{
lean_inc(v_a_3421_);
lean_dec(v___x_3420_);
v___x_3423_ = lean_box(0);
v_isShared_3424_ = v_isSharedCheck_3428_;
goto v_resetjp_3422_;
}
v_resetjp_3422_:
{
lean_object* v___x_3426_; 
if (v_isShared_3424_ == 0)
{
v___x_3426_ = v___x_3423_;
goto v_reusejp_3425_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v_a_3421_);
v___x_3426_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3425_;
}
v_reusejp_3425_:
{
return v___x_3426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39(lean_object* v_declInfos_3429_, lean_object* v_k_3430_, uint8_t v_kind_3431_, lean_object* v_acc_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_){
_start:
{
lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v_toApplicative_3442_; lean_object* v___x_3444_; uint8_t v_isShared_3445_; uint8_t v_isSharedCheck_3521_; 
v___x_3440_ = lean_obj_once(&l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0, &l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0_once, _init_l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__0);
v___x_3441_ = l_StateRefT_x27_instMonad___redArg(v___x_3440_);
v_toApplicative_3442_ = lean_ctor_get(v___x_3441_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3441_);
if (v_isSharedCheck_3521_ == 0)
{
lean_object* v_unused_3522_; 
v_unused_3522_ = lean_ctor_get(v___x_3441_, 1);
lean_dec(v_unused_3522_);
v___x_3444_ = v___x_3441_;
v_isShared_3445_ = v_isSharedCheck_3521_;
goto v_resetjp_3443_;
}
else
{
lean_inc(v_toApplicative_3442_);
lean_dec(v___x_3441_);
v___x_3444_ = lean_box(0);
v_isShared_3445_ = v_isSharedCheck_3521_;
goto v_resetjp_3443_;
}
v_resetjp_3443_:
{
lean_object* v_toFunctor_3446_; lean_object* v_toSeq_3447_; lean_object* v_toSeqLeft_3448_; lean_object* v_toSeqRight_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3519_; 
v_toFunctor_3446_ = lean_ctor_get(v_toApplicative_3442_, 0);
v_toSeq_3447_ = lean_ctor_get(v_toApplicative_3442_, 2);
v_toSeqLeft_3448_ = lean_ctor_get(v_toApplicative_3442_, 3);
v_toSeqRight_3449_ = lean_ctor_get(v_toApplicative_3442_, 4);
v_isSharedCheck_3519_ = !lean_is_exclusive(v_toApplicative_3442_);
if (v_isSharedCheck_3519_ == 0)
{
lean_object* v_unused_3520_; 
v_unused_3520_ = lean_ctor_get(v_toApplicative_3442_, 1);
lean_dec(v_unused_3520_);
v___x_3451_ = v_toApplicative_3442_;
v_isShared_3452_ = v_isSharedCheck_3519_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_toSeqRight_3449_);
lean_inc(v_toSeqLeft_3448_);
lean_inc(v_toSeq_3447_);
lean_inc(v_toFunctor_3446_);
lean_dec(v_toApplicative_3442_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3519_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___f_3453_; lean_object* v___f_3454_; lean_object* v___f_3455_; lean_object* v___f_3456_; lean_object* v___x_3457_; lean_object* v___f_3458_; lean_object* v___f_3459_; lean_object* v___f_3460_; lean_object* v___x_3462_; 
v___f_3453_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__1));
v___f_3454_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__2));
lean_inc_ref(v_toFunctor_3446_);
v___f_3455_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3455_, 0, v_toFunctor_3446_);
v___f_3456_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3456_, 0, v_toFunctor_3446_);
v___x_3457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___f_3455_);
lean_ctor_set(v___x_3457_, 1, v___f_3456_);
v___f_3458_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3458_, 0, v_toSeqRight_3449_);
v___f_3459_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3459_, 0, v_toSeqLeft_3448_);
v___f_3460_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3460_, 0, v_toSeq_3447_);
if (v_isShared_3452_ == 0)
{
lean_ctor_set(v___x_3451_, 4, v___f_3458_);
lean_ctor_set(v___x_3451_, 3, v___f_3459_);
lean_ctor_set(v___x_3451_, 2, v___f_3460_);
lean_ctor_set(v___x_3451_, 1, v___f_3453_);
lean_ctor_set(v___x_3451_, 0, v___x_3457_);
v___x_3462_ = v___x_3451_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3518_; 
v_reuseFailAlloc_3518_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3518_, 0, v___x_3457_);
lean_ctor_set(v_reuseFailAlloc_3518_, 1, v___f_3453_);
lean_ctor_set(v_reuseFailAlloc_3518_, 2, v___f_3460_);
lean_ctor_set(v_reuseFailAlloc_3518_, 3, v___f_3459_);
lean_ctor_set(v_reuseFailAlloc_3518_, 4, v___f_3458_);
v___x_3462_ = v_reuseFailAlloc_3518_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
lean_object* v___x_3464_; 
if (v_isShared_3445_ == 0)
{
lean_ctor_set(v___x_3444_, 1, v___f_3454_);
lean_ctor_set(v___x_3444_, 0, v___x_3462_);
v___x_3464_ = v___x_3444_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3517_; 
v_reuseFailAlloc_3517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3517_, 0, v___x_3462_);
lean_ctor_set(v_reuseFailAlloc_3517_, 1, v___f_3454_);
v___x_3464_ = v_reuseFailAlloc_3517_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
lean_object* v___x_3465_; lean_object* v_toApplicative_3466_; lean_object* v___x_3468_; uint8_t v_isShared_3469_; uint8_t v_isSharedCheck_3515_; 
v___x_3465_ = l_StateRefT_x27_instMonad___redArg(v___x_3464_);
v_toApplicative_3466_ = lean_ctor_get(v___x_3465_, 0);
v_isSharedCheck_3515_ = !lean_is_exclusive(v___x_3465_);
if (v_isSharedCheck_3515_ == 0)
{
lean_object* v_unused_3516_; 
v_unused_3516_ = lean_ctor_get(v___x_3465_, 1);
lean_dec(v_unused_3516_);
v___x_3468_ = v___x_3465_;
v_isShared_3469_ = v_isSharedCheck_3515_;
goto v_resetjp_3467_;
}
else
{
lean_inc(v_toApplicative_3466_);
lean_dec(v___x_3465_);
v___x_3468_ = lean_box(0);
v_isShared_3469_ = v_isSharedCheck_3515_;
goto v_resetjp_3467_;
}
v_resetjp_3467_:
{
lean_object* v_toFunctor_3470_; lean_object* v_toSeq_3471_; lean_object* v_toSeqLeft_3472_; lean_object* v_toSeqRight_3473_; lean_object* v___x_3475_; uint8_t v_isShared_3476_; uint8_t v_isSharedCheck_3513_; 
v_toFunctor_3470_ = lean_ctor_get(v_toApplicative_3466_, 0);
v_toSeq_3471_ = lean_ctor_get(v_toApplicative_3466_, 2);
v_toSeqLeft_3472_ = lean_ctor_get(v_toApplicative_3466_, 3);
v_toSeqRight_3473_ = lean_ctor_get(v_toApplicative_3466_, 4);
v_isSharedCheck_3513_ = !lean_is_exclusive(v_toApplicative_3466_);
if (v_isSharedCheck_3513_ == 0)
{
lean_object* v_unused_3514_; 
v_unused_3514_ = lean_ctor_get(v_toApplicative_3466_, 1);
lean_dec(v_unused_3514_);
v___x_3475_ = v_toApplicative_3466_;
v_isShared_3476_ = v_isSharedCheck_3513_;
goto v_resetjp_3474_;
}
else
{
lean_inc(v_toSeqRight_3473_);
lean_inc(v_toSeqLeft_3472_);
lean_inc(v_toSeq_3471_);
lean_inc(v_toFunctor_3470_);
lean_dec(v_toApplicative_3466_);
v___x_3475_ = lean_box(0);
v_isShared_3476_ = v_isSharedCheck_3513_;
goto v_resetjp_3474_;
}
v_resetjp_3474_:
{
lean_object* v___f_3477_; lean_object* v___f_3478_; lean_object* v___f_3479_; lean_object* v___f_3480_; lean_object* v___x_3481_; lean_object* v___f_3482_; lean_object* v___f_3483_; lean_object* v___f_3484_; lean_object* v___x_3486_; 
v___f_3477_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__3));
v___f_3478_ = ((lean_object*)(l_panic___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__20___closed__4));
lean_inc_ref(v_toFunctor_3470_);
v___f_3479_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3479_, 0, v_toFunctor_3470_);
v___f_3480_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3480_, 0, v_toFunctor_3470_);
v___x_3481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3481_, 0, v___f_3479_);
lean_ctor_set(v___x_3481_, 1, v___f_3480_);
v___f_3482_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3482_, 0, v_toSeqRight_3473_);
v___f_3483_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3483_, 0, v_toSeqLeft_3472_);
v___f_3484_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3484_, 0, v_toSeq_3471_);
if (v_isShared_3476_ == 0)
{
lean_ctor_set(v___x_3475_, 4, v___f_3482_);
lean_ctor_set(v___x_3475_, 3, v___f_3483_);
lean_ctor_set(v___x_3475_, 2, v___f_3484_);
lean_ctor_set(v___x_3475_, 1, v___f_3477_);
lean_ctor_set(v___x_3475_, 0, v___x_3481_);
v___x_3486_ = v___x_3475_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3512_; 
v_reuseFailAlloc_3512_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3512_, 0, v___x_3481_);
lean_ctor_set(v_reuseFailAlloc_3512_, 1, v___f_3477_);
lean_ctor_set(v_reuseFailAlloc_3512_, 2, v___f_3484_);
lean_ctor_set(v_reuseFailAlloc_3512_, 3, v___f_3483_);
lean_ctor_set(v_reuseFailAlloc_3512_, 4, v___f_3482_);
v___x_3486_ = v_reuseFailAlloc_3512_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
lean_object* v___x_3488_; 
if (v_isShared_3469_ == 0)
{
lean_ctor_set(v___x_3468_, 1, v___f_3478_);
lean_ctor_set(v___x_3468_, 0, v___x_3486_);
v___x_3488_ = v___x_3468_;
goto v_reusejp_3487_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v___x_3486_);
lean_ctor_set(v_reuseFailAlloc_3511_, 1, v___f_3478_);
v___x_3488_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3487_;
}
v_reusejp_3487_:
{
lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; uint8_t v___x_3493_; 
v___x_3489_ = l_StateRefT_x27_instMonad___redArg(v___x_3488_);
v___x_3490_ = l_ReaderT_instMonad___redArg(v___x_3489_);
v___x_3491_ = lean_array_get_size(v_acc_3432_);
v___x_3492_ = lean_array_get_size(v_declInfos_3429_);
v___x_3493_ = lean_nat_dec_lt(v___x_3491_, v___x_3492_);
if (v___x_3493_ == 0)
{
lean_object* v___x_3494_; 
lean_dec_ref(v___x_3490_);
lean_dec_ref(v_declInfos_3429_);
lean_inc(v___y_3438_);
lean_inc_ref(v___y_3437_);
lean_inc(v___y_3436_);
lean_inc_ref(v___y_3435_);
lean_inc(v___y_3434_);
lean_inc_ref(v___y_3433_);
v___x_3494_ = lean_apply_8(v_k_3430_, v_acc_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, lean_box(0));
return v___x_3494_;
}
else
{
lean_object* v___f_3495_; lean_object* v___x_3496_; uint8_t v___x_3497_; lean_object* v___f_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v_snd_3503_; lean_object* v_fst_3504_; lean_object* v_fst_3505_; lean_object* v_snd_3506_; lean_object* v___x_3507_; 
v___f_3495_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3495_, 0, v___x_3490_);
v___x_3496_ = lean_box(0);
v___x_3497_ = 0;
v___f_3498_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3498_, 0, v___f_3495_);
v___x_3499_ = lean_box(v___x_3497_);
v___x_3500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3500_, 0, v___x_3499_);
lean_ctor_set(v___x_3500_, 1, v___f_3498_);
v___x_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3496_);
lean_ctor_set(v___x_3501_, 1, v___x_3500_);
v___x_3502_ = lean_array_get(v___x_3501_, v_declInfos_3429_, v___x_3491_);
lean_dec_ref_known(v___x_3501_, 2);
v_snd_3503_ = lean_ctor_get(v___x_3502_, 1);
lean_inc(v_snd_3503_);
v_fst_3504_ = lean_ctor_get(v___x_3502_, 0);
lean_inc(v_fst_3504_);
lean_dec(v___x_3502_);
v_fst_3505_ = lean_ctor_get(v_snd_3503_, 0);
lean_inc(v_fst_3505_);
v_snd_3506_ = lean_ctor_get(v_snd_3503_, 1);
lean_inc(v_snd_3506_);
lean_dec(v_snd_3503_);
lean_inc(v___y_3438_);
lean_inc_ref(v___y_3437_);
lean_inc(v___y_3436_);
lean_inc_ref(v___y_3435_);
lean_inc(v___y_3434_);
lean_inc_ref(v___y_3433_);
lean_inc_ref(v_acc_3432_);
v___x_3507_ = lean_apply_8(v_snd_3506_, v_acc_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_, lean_box(0));
if (lean_obj_tag(v___x_3507_) == 0)
{
lean_object* v_a_3508_; uint8_t v___x_3509_; lean_object* v___x_3510_; 
v_a_3508_ = lean_ctor_get(v___x_3507_, 0);
lean_inc(v_a_3508_);
lean_dec_ref_known(v___x_3507_, 1);
v___x_3509_ = lean_unbox(v_fst_3505_);
lean_dec(v_fst_3505_);
v___x_3510_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45(v_acc_3432_, v_declInfos_3429_, v_k_3430_, v_kind_3431_, v_fst_3504_, v___x_3509_, v_a_3508_, v_kind_3431_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_, v___y_3437_, v___y_3438_);
return v___x_3510_;
}
else
{
lean_dec(v_fst_3505_);
lean_dec(v_fst_3504_);
lean_dec_ref(v_acc_3432_);
lean_dec_ref(v_k_3430_);
lean_dec_ref(v_declInfos_3429_);
return v___x_3507_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45___lam__0(lean_object* v_acc_3523_, lean_object* v_declInfos_3524_, lean_object* v_k_3525_, uint8_t v_kind_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v_b_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_){
_start:
{
lean_object* v___x_3535_; lean_object* v___x_3536_; 
v___x_3535_ = lean_array_push(v_acc_3523_, v_b_3529_);
v___x_3536_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39(v_declInfos_3524_, v_k_3525_, v_kind_3526_, v___x_3535_, v___y_3527_, v___y_3528_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_);
return v___x_3536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45___boxed(lean_object* v_acc_3537_, lean_object* v_declInfos_3538_, lean_object* v_k_3539_, lean_object* v_kind_3540_, lean_object* v_name_3541_, lean_object* v_bi_3542_, lean_object* v_type_3543_, lean_object* v_kind_3544_, lean_object* v___y_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_){
_start:
{
uint8_t v_kind_boxed_3552_; uint8_t v_bi_boxed_3553_; uint8_t v_kind_boxed_3554_; lean_object* v_res_3555_; 
v_kind_boxed_3552_ = lean_unbox(v_kind_3540_);
v_bi_boxed_3553_ = lean_unbox(v_bi_3542_);
v_kind_boxed_3554_ = lean_unbox(v_kind_3544_);
v_res_3555_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39_spec__45(v_acc_3537_, v_declInfos_3538_, v_k_3539_, v_kind_boxed_3552_, v_name_3541_, v_bi_boxed_3553_, v_type_3543_, v_kind_boxed_3554_, v___y_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_);
lean_dec(v___y_3550_);
lean_dec_ref(v___y_3549_);
lean_dec(v___y_3548_);
lean_dec_ref(v___y_3547_);
lean_dec(v___y_3546_);
lean_dec_ref(v___y_3545_);
return v_res_3555_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39___boxed(lean_object* v_declInfos_3556_, lean_object* v_k_3557_, lean_object* v_kind_3558_, lean_object* v_acc_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_){
_start:
{
uint8_t v_kind_boxed_3567_; lean_object* v_res_3568_; 
v_kind_boxed_3567_ = lean_unbox(v_kind_3558_);
v_res_3568_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39(v_declInfos_3556_, v_k_3557_, v_kind_boxed_3567_, v_acc_3559_, v___y_3560_, v___y_3561_, v___y_3562_, v___y_3563_, v___y_3564_, v___y_3565_);
lean_dec(v___y_3565_);
lean_dec_ref(v___y_3564_);
lean_dec(v___y_3563_);
lean_dec_ref(v___y_3562_);
lean_dec(v___y_3561_);
lean_dec_ref(v___y_3560_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29(lean_object* v_declInfos_3569_, lean_object* v_k_3570_, uint8_t v_kind_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_){
_start:
{
lean_object* v___x_3579_; lean_object* v___x_3580_; 
v___x_3579_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2));
v___x_3580_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29_spec__39(v_declInfos_3569_, v_k_3570_, v_kind_3571_, v___x_3579_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_, v___y_3576_, v___y_3577_);
return v___x_3580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29___boxed(lean_object* v_declInfos_3581_, lean_object* v_k_3582_, lean_object* v_kind_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_){
_start:
{
uint8_t v_kind_boxed_3591_; lean_object* v_res_3592_; 
v_kind_boxed_3591_ = lean_unbox(v_kind_3583_);
v_res_3592_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29(v_declInfos_3581_, v_k_3582_, v_kind_boxed_3591_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_, v___y_3589_);
lean_dec(v___y_3589_);
lean_dec_ref(v___y_3588_);
lean_dec(v___y_3587_);
lean_dec_ref(v___y_3586_);
lean_dec(v___y_3585_);
lean_dec_ref(v___y_3584_);
return v_res_3592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__28(size_t v_sz_3593_, size_t v_i_3594_, lean_object* v_bs_3595_){
_start:
{
uint8_t v___x_3596_; 
v___x_3596_ = lean_usize_dec_lt(v_i_3594_, v_sz_3593_);
if (v___x_3596_ == 0)
{
return v_bs_3595_;
}
else
{
lean_object* v_v_3597_; lean_object* v_fst_3598_; lean_object* v_snd_3599_; lean_object* v___x_3601_; uint8_t v_isShared_3602_; uint8_t v_isSharedCheck_3615_; 
v_v_3597_ = lean_array_uget(v_bs_3595_, v_i_3594_);
v_fst_3598_ = lean_ctor_get(v_v_3597_, 0);
v_snd_3599_ = lean_ctor_get(v_v_3597_, 1);
v_isSharedCheck_3615_ = !lean_is_exclusive(v_v_3597_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3601_ = v_v_3597_;
v_isShared_3602_ = v_isSharedCheck_3615_;
goto v_resetjp_3600_;
}
else
{
lean_inc(v_snd_3599_);
lean_inc(v_fst_3598_);
lean_dec(v_v_3597_);
v___x_3601_ = lean_box(0);
v_isShared_3602_ = v_isSharedCheck_3615_;
goto v_resetjp_3600_;
}
v_resetjp_3600_:
{
lean_object* v___x_3603_; lean_object* v_bs_x27_3604_; uint8_t v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3608_; 
v___x_3603_ = lean_unsigned_to_nat(0u);
v_bs_x27_3604_ = lean_array_uset(v_bs_3595_, v_i_3594_, v___x_3603_);
v___x_3605_ = 0;
v___x_3606_ = lean_box(v___x_3605_);
if (v_isShared_3602_ == 0)
{
lean_ctor_set(v___x_3601_, 0, v___x_3606_);
v___x_3608_ = v___x_3601_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v___x_3606_);
lean_ctor_set(v_reuseFailAlloc_3614_, 1, v_snd_3599_);
v___x_3608_ = v_reuseFailAlloc_3614_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
lean_object* v___x_3609_; size_t v___x_3610_; size_t v___x_3611_; lean_object* v___x_3612_; 
v___x_3609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3609_, 0, v_fst_3598_);
lean_ctor_set(v___x_3609_, 1, v___x_3608_);
v___x_3610_ = ((size_t)1ULL);
v___x_3611_ = lean_usize_add(v_i_3594_, v___x_3610_);
v___x_3612_ = lean_array_uset(v_bs_x27_3604_, v_i_3594_, v___x_3609_);
v_i_3594_ = v___x_3611_;
v_bs_3595_ = v___x_3612_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__28___boxed(lean_object* v_sz_3616_, lean_object* v_i_3617_, lean_object* v_bs_3618_){
_start:
{
size_t v_sz_boxed_3619_; size_t v_i_boxed_3620_; lean_object* v_res_3621_; 
v_sz_boxed_3619_ = lean_unbox_usize(v_sz_3616_);
lean_dec(v_sz_3616_);
v_i_boxed_3620_ = lean_unbox_usize(v_i_3617_);
lean_dec(v_i_3617_);
v_res_3621_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__28(v_sz_boxed_3619_, v_i_boxed_3620_, v_bs_3618_);
return v_res_3621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13(lean_object* v_declInfos_3622_, lean_object* v_k_3623_, uint8_t v_kind_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_){
_start:
{
size_t v_sz_3632_; size_t v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; 
v_sz_3632_ = lean_array_size(v_declInfos_3622_);
v___x_3633_ = ((size_t)0ULL);
v___x_3634_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__28(v_sz_3632_, v___x_3633_, v_declInfos_3622_);
v___x_3635_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13_spec__29(v___x_3634_, v_k_3623_, v_kind_3624_, v___y_3625_, v___y_3626_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_);
return v___x_3635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13___boxed(lean_object* v_declInfos_3636_, lean_object* v_k_3637_, lean_object* v_kind_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_){
_start:
{
uint8_t v_kind_boxed_3646_; lean_object* v_res_3647_; 
v_kind_boxed_3646_ = lean_unbox(v_kind_3638_);
v_res_3647_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13(v_declInfos_3636_, v_k_3637_, v_kind_boxed_3646_, v___y_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_);
lean_dec(v___y_3644_);
lean_dec_ref(v___y_3643_);
lean_dec(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec(v___y_3640_);
lean_dec_ref(v___y_3639_);
return v_res_3647_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12___lam__0(lean_object* v_snd_3648_, lean_object* v_x_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_, lean_object* v___y_3652_, lean_object* v___y_3653_, lean_object* v___y_3654_, lean_object* v___y_3655_){
_start:
{
lean_object* v___x_3657_; 
v___x_3657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3657_, 0, v_snd_3648_);
return v___x_3657_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12___lam__0___boxed(lean_object* v_snd_3658_, lean_object* v_x_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_){
_start:
{
lean_object* v_res_3667_; 
v_res_3667_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12___lam__0(v_snd_3658_, v_x_3659_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_);
lean_dec(v___y_3665_);
lean_dec_ref(v___y_3664_);
lean_dec(v___y_3663_);
lean_dec_ref(v___y_3662_);
lean_dec(v___y_3661_);
lean_dec_ref(v___y_3660_);
lean_dec_ref(v_x_3659_);
return v_res_3667_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12(size_t v_sz_3668_, size_t v_i_3669_, lean_object* v_bs_3670_){
_start:
{
uint8_t v___x_3671_; 
v___x_3671_ = lean_usize_dec_lt(v_i_3669_, v_sz_3668_);
if (v___x_3671_ == 0)
{
return v_bs_3670_;
}
else
{
lean_object* v_v_3672_; lean_object* v_fst_3673_; lean_object* v_snd_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3688_; 
v_v_3672_ = lean_array_uget(v_bs_3670_, v_i_3669_);
v_fst_3673_ = lean_ctor_get(v_v_3672_, 0);
v_snd_3674_ = lean_ctor_get(v_v_3672_, 1);
v_isSharedCheck_3688_ = !lean_is_exclusive(v_v_3672_);
if (v_isSharedCheck_3688_ == 0)
{
v___x_3676_ = v_v_3672_;
v_isShared_3677_ = v_isSharedCheck_3688_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_snd_3674_);
lean_inc(v_fst_3673_);
lean_dec(v_v_3672_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3688_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3678_; lean_object* v_bs_x27_3679_; lean_object* v___f_3680_; lean_object* v___x_3682_; 
v___x_3678_ = lean_unsigned_to_nat(0u);
v_bs_x27_3679_ = lean_array_uset(v_bs_3670_, v_i_3669_, v___x_3678_);
v___f_3680_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3680_, 0, v_snd_3674_);
if (v_isShared_3677_ == 0)
{
lean_ctor_set(v___x_3676_, 1, v___f_3680_);
v___x_3682_ = v___x_3676_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v_fst_3673_);
lean_ctor_set(v_reuseFailAlloc_3687_, 1, v___f_3680_);
v___x_3682_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
size_t v___x_3683_; size_t v___x_3684_; lean_object* v___x_3685_; 
v___x_3683_ = ((size_t)1ULL);
v___x_3684_ = lean_usize_add(v_i_3669_, v___x_3683_);
v___x_3685_ = lean_array_uset(v_bs_x27_3679_, v_i_3669_, v___x_3682_);
v_i_3669_ = v___x_3684_;
v_bs_3670_ = v___x_3685_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12___boxed(lean_object* v_sz_3689_, lean_object* v_i_3690_, lean_object* v_bs_3691_){
_start:
{
size_t v_sz_boxed_3692_; size_t v_i_boxed_3693_; lean_object* v_res_3694_; 
v_sz_boxed_3692_ = lean_unbox_usize(v_sz_3689_);
lean_dec(v_sz_3689_);
v_i_boxed_3693_ = lean_unbox_usize(v_i_3690_);
lean_dec(v_i_3690_);
v_res_3694_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12(v_sz_boxed_3692_, v_i_boxed_3693_, v_bs_3691_);
return v_res_3694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8(lean_object* v_declInfos_3695_, lean_object* v_k_3696_, uint8_t v_kind_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_){
_start:
{
size_t v_sz_3705_; size_t v___x_3706_; lean_object* v___x_3707_; lean_object* v___x_3708_; 
v_sz_3705_ = lean_array_size(v_declInfos_3695_);
v___x_3706_ = ((size_t)0ULL);
v___x_3707_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__12(v_sz_3705_, v___x_3706_, v_declInfos_3695_);
v___x_3708_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8_spec__13(v___x_3707_, v_k_3696_, v_kind_3697_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8___boxed(lean_object* v_declInfos_3709_, lean_object* v_k_3710_, lean_object* v_kind_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_){
_start:
{
uint8_t v_kind_boxed_3719_; lean_object* v_res_3720_; 
v_kind_boxed_3719_ = lean_unbox(v_kind_3711_);
v_res_3720_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8(v_declInfos_3709_, v_k_3710_, v_kind_boxed_3719_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_, v___y_3716_, v___y_3717_);
lean_dec(v___y_3717_);
lean_dec_ref(v___y_3716_);
lean_dec(v___y_3715_);
lean_dec_ref(v___y_3714_);
lean_dec(v___y_3713_);
lean_dec_ref(v___y_3712_);
return v_res_3720_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7___redArg(lean_object* v_as_3721_, lean_object* v_i_3722_, lean_object* v_j_3723_, lean_object* v_bs_3724_){
_start:
{
lean_object* v_zero_3725_; uint8_t v_isZero_3726_; 
v_zero_3725_ = lean_unsigned_to_nat(0u);
v_isZero_3726_ = lean_nat_dec_eq(v_i_3722_, v_zero_3725_);
if (v_isZero_3726_ == 1)
{
lean_dec(v_j_3723_);
lean_dec(v_i_3722_);
return v_bs_3724_;
}
else
{
lean_object* v_one_3727_; lean_object* v_n_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
v_one_3727_ = lean_unsigned_to_nat(1u);
v_n_3728_ = lean_nat_sub(v_i_3722_, v_one_3727_);
lean_dec(v_i_3722_);
v___x_3729_ = lean_array_fget_borrowed(v_as_3721_, v_j_3723_);
v___x_3730_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__6___closed__1));
v___x_3731_ = lean_nat_add(v_j_3723_, v_one_3727_);
lean_dec(v_j_3723_);
lean_inc(v___x_3731_);
v___x_3732_ = lean_name_append_index_after(v___x_3730_, v___x_3731_);
lean_inc(v___x_3729_);
v___x_3733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3732_);
lean_ctor_set(v___x_3733_, 1, v___x_3729_);
v___x_3734_ = lean_array_push(v_bs_3724_, v___x_3733_);
v_i_3722_ = v_n_3728_;
v_j_3723_ = v___x_3731_;
v_bs_3724_ = v___x_3734_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7___redArg___boxed(lean_object* v_as_3736_, lean_object* v_i_3737_, lean_object* v_j_3738_, lean_object* v_bs_3739_){
_start:
{
lean_object* v_res_3740_; 
v_res_3740_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7___redArg(v_as_3736_, v_i_3737_, v_j_3738_, v_bs_3739_);
lean_dec_ref(v_as_3736_);
return v_res_3740_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___x_3741_ = lean_unsigned_to_nat(0u);
v___x_3742_ = l_Lean_Level_ofNat(v___x_3741_);
return v___x_3742_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_3743_; lean_object* v___x_3744_; 
v___x_3743_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__0);
v___x_3744_ = l_Lean_mkSort(v___x_3743_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg(size_t v_sz_3745_, size_t v_i_3746_, lean_object* v_bs_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_){
_start:
{
uint8_t v___x_3753_; 
v___x_3753_ = lean_usize_dec_lt(v_i_3746_, v_sz_3745_);
if (v___x_3753_ == 0)
{
lean_object* v___x_3754_; 
v___x_3754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3754_, 0, v_bs_3747_);
return v___x_3754_;
}
else
{
lean_object* v___x_3755_; lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; 
v___x_3755_ = lean_unsigned_to_nat(0u);
v___x_3756_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1);
v___x_3757_ = lean_box(0);
v___x_3758_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_3756_, v___x_3757_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_);
if (lean_obj_tag(v___x_3758_) == 0)
{
lean_object* v_a_3759_; lean_object* v_bs_x27_3760_; size_t v___x_3761_; size_t v___x_3762_; lean_object* v___x_3763_; 
v_a_3759_ = lean_ctor_get(v___x_3758_, 0);
lean_inc(v_a_3759_);
lean_dec_ref_known(v___x_3758_, 1);
v_bs_x27_3760_ = lean_array_uset(v_bs_3747_, v_i_3746_, v___x_3755_);
v___x_3761_ = ((size_t)1ULL);
v___x_3762_ = lean_usize_add(v_i_3746_, v___x_3761_);
v___x_3763_ = lean_array_uset(v_bs_x27_3760_, v_i_3746_, v_a_3759_);
v_i_3746_ = v___x_3762_;
v_bs_3747_ = v___x_3763_;
goto _start;
}
else
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3772_; 
lean_dec_ref(v_bs_3747_);
v_a_3765_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3772_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3772_ == 0)
{
v___x_3767_ = v___x_3758_;
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v___x_3758_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___boxed(lean_object* v_sz_3773_, lean_object* v_i_3774_, lean_object* v_bs_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_){
_start:
{
size_t v_sz_boxed_3781_; size_t v_i_boxed_3782_; lean_object* v_res_3783_; 
v_sz_boxed_3781_ = lean_unbox_usize(v_sz_3773_);
lean_dec(v_sz_3773_);
v_i_boxed_3782_ = lean_unbox_usize(v_i_3774_);
lean_dec(v_i_3774_);
v_res_3783_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg(v_sz_boxed_3781_, v_i_boxed_3782_, v_bs_3775_, v___y_3776_, v___y_3777_, v___y_3778_, v___y_3779_);
lean_dec(v___y_3779_);
lean_dec_ref(v___y_3778_);
lean_dec(v___y_3777_);
lean_dec_ref(v___y_3776_);
return v_res_3783_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__5(void){
_start:
{
lean_object* v___x_3793_; lean_object* v_dummy_3794_; 
v___x_3793_ = lean_box(0);
v_dummy_3794_ = l_Lean_Expr_sort___override(v___x_3793_);
return v_dummy_3794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5(lean_object* v___x_3795_, lean_object* v_splitInfo_3796_, lean_object* v___f_3797_, lean_object* v___x_3798_, uint8_t v___x_3799_, lean_object* v_a_3800_, lean_object* v___y_3801_, lean_object* v_abstractInfo_3802_, lean_object* v_a_3803_, lean_object* v_splitFVars_3804_, lean_object* v_ss_3805_, lean_object* v_post_3806_, lean_object* v_epost_3807_, lean_object* v_pre_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_, lean_object* v___y_3814_){
_start:
{
lean_object* v___x_3816_; lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; 
v___x_3816_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__4));
v___x_3817_ = lean_unsigned_to_nat(2u);
v___x_3818_ = lean_mk_empty_array_with_capacity(v___x_3817_);
lean_inc_ref(v_pre_3808_);
lean_inc_ref(v___x_3818_);
v___x_3819_ = lean_array_push(v___x_3818_, v_pre_3808_);
v___x_3820_ = lean_array_push(v___x_3819_, v___x_3795_);
v___x_3821_ = l_Lean_Meta_mkAppM(v___x_3816_, v___x_3820_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_);
if (lean_obj_tag(v___x_3821_) == 0)
{
lean_object* v_a_3822_; lean_object* v___x_3823_; size_t v_sz_3824_; size_t v___x_3825_; lean_object* v___x_3826_; 
v_a_3822_ = lean_ctor_get(v___x_3821_, 0);
lean_inc(v_a_3822_);
lean_dec_ref_known(v___x_3821_, 1);
v___x_3823_ = l_Lean_Elab_Tactic_Do_SplitInfo_altInfos(v_splitInfo_3796_);
v_sz_3824_ = lean_array_size(v___x_3823_);
v___x_3825_ = ((size_t)0ULL);
v___x_3826_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg(v_sz_3824_, v___x_3825_, v___x_3823_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_);
if (lean_obj_tag(v___x_3826_) == 0)
{
lean_object* v_a_3827_; lean_object* v_nargs_3828_; lean_object* v___x_3829_; lean_object* v_dummy_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; lean_object* v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; lean_object* v___f_3839_; lean_object* v___x_3840_; lean_object* v___f_3841_; lean_object* v___x_3842_; lean_object* v___x_3843_; lean_object* v___x_3844_; uint8_t v___x_3845_; lean_object* v___x_3846_; 
v_a_3827_ = lean_ctor_get(v___x_3826_, 0);
lean_inc_n(v_a_3827_, 2);
lean_dec_ref_known(v___x_3826_, 1);
v_nargs_3828_ = l_Lean_Expr_getAppNumArgs(v_a_3822_);
v___x_3829_ = lean_unsigned_to_nat(0u);
v_dummy_3830_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__5, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__5_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___closed__5);
lean_inc(v_nargs_3828_);
v___x_3831_ = lean_mk_array(v_nargs_3828_, v_dummy_3830_);
v___x_3832_ = lean_unsigned_to_nat(1u);
v___x_3833_ = lean_nat_sub(v_nargs_3828_, v___x_3832_);
lean_dec(v_nargs_3828_);
lean_inc(v_a_3822_);
v___x_3834_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_3822_, v___x_3831_, v___x_3833_);
v___x_3835_ = l_Lean_Expr_getAppFn(v_a_3822_);
lean_dec(v_a_3822_);
v___x_3836_ = lean_unsigned_to_nat(3u);
v___x_3837_ = l_Array_extract___redArg(v___x_3834_, v___x_3829_, v___x_3836_);
lean_dec_ref(v___x_3834_);
v___x_3838_ = l_Lean_mkAppN(v___x_3835_, v___x_3837_);
lean_dec_ref(v___x_3837_);
v___f_3839_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__1), 3, 2);
lean_closure_set(v___f_3839_, 0, v___f_3797_);
lean_closure_set(v___f_3839_, 1, v___x_3838_);
v___x_3840_ = lean_box(v___x_3799_);
v___f_3841_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__4___boxed), 24, 16);
lean_closure_set(v___f_3841_, 0, v___x_3836_);
lean_closure_set(v___f_3841_, 1, v___x_3832_);
lean_closure_set(v___f_3841_, 2, v___x_3818_);
lean_closure_set(v___f_3841_, 3, v___x_3798_);
lean_closure_set(v___f_3841_, 4, v___f_3839_);
lean_closure_set(v___f_3841_, 5, v___x_3840_);
lean_closure_set(v___f_3841_, 6, v_a_3827_);
lean_closure_set(v___f_3841_, 7, v_a_3800_);
lean_closure_set(v___f_3841_, 8, v___y_3801_);
lean_closure_set(v___f_3841_, 9, v_abstractInfo_3802_);
lean_closure_set(v___f_3841_, 10, v_a_3803_);
lean_closure_set(v___f_3841_, 11, v_splitFVars_3804_);
lean_closure_set(v___f_3841_, 12, v_ss_3805_);
lean_closure_set(v___f_3841_, 13, v_post_3806_);
lean_closure_set(v___f_3841_, 14, v_epost_3807_);
lean_closure_set(v___f_3841_, 15, v_pre_3808_);
v___x_3842_ = lean_array_get_size(v_a_3827_);
v___x_3843_ = lean_mk_empty_array_with_capacity(v___x_3842_);
v___x_3844_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7___redArg(v_a_3827_, v___x_3842_, v___x_3829_, v___x_3843_);
lean_dec(v_a_3827_);
v___x_3845_ = 0;
v___x_3846_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8(v___x_3844_, v___f_3841_, v___x_3845_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_);
return v___x_3846_;
}
else
{
lean_object* v_a_3847_; lean_object* v___x_3849_; uint8_t v_isShared_3850_; uint8_t v_isSharedCheck_3854_; 
lean_dec(v_a_3822_);
lean_dec_ref(v___x_3818_);
lean_dec_ref(v_pre_3808_);
lean_dec_ref(v_epost_3807_);
lean_dec_ref(v_post_3806_);
lean_dec_ref(v_ss_3805_);
lean_dec_ref(v_splitFVars_3804_);
lean_dec_ref(v_a_3803_);
lean_dec_ref(v_abstractInfo_3802_);
lean_dec_ref(v___y_3801_);
lean_dec_ref(v_a_3800_);
lean_dec_ref(v___x_3798_);
lean_dec_ref(v___f_3797_);
v_a_3847_ = lean_ctor_get(v___x_3826_, 0);
v_isSharedCheck_3854_ = !lean_is_exclusive(v___x_3826_);
if (v_isSharedCheck_3854_ == 0)
{
v___x_3849_ = v___x_3826_;
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
else
{
lean_inc(v_a_3847_);
lean_dec(v___x_3826_);
v___x_3849_ = lean_box(0);
v_isShared_3850_ = v_isSharedCheck_3854_;
goto v_resetjp_3848_;
}
v_resetjp_3848_:
{
lean_object* v___x_3852_; 
if (v_isShared_3850_ == 0)
{
v___x_3852_ = v___x_3849_;
goto v_reusejp_3851_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v_a_3847_);
v___x_3852_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3851_;
}
v_reusejp_3851_:
{
return v___x_3852_;
}
}
}
}
else
{
lean_dec_ref(v___x_3818_);
lean_dec_ref(v_pre_3808_);
lean_dec_ref(v_epost_3807_);
lean_dec_ref(v_post_3806_);
lean_dec_ref(v_ss_3805_);
lean_dec_ref(v_splitFVars_3804_);
lean_dec_ref(v_a_3803_);
lean_dec_ref(v_abstractInfo_3802_);
lean_dec_ref(v___y_3801_);
lean_dec_ref(v_a_3800_);
lean_dec_ref(v___x_3798_);
lean_dec_ref(v___f_3797_);
lean_dec_ref(v_splitInfo_3796_);
return v___x_3821_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___boxed(lean_object** _args){
lean_object* v___x_3855_ = _args[0];
lean_object* v_splitInfo_3856_ = _args[1];
lean_object* v___f_3857_ = _args[2];
lean_object* v___x_3858_ = _args[3];
lean_object* v___x_3859_ = _args[4];
lean_object* v_a_3860_ = _args[5];
lean_object* v___y_3861_ = _args[6];
lean_object* v_abstractInfo_3862_ = _args[7];
lean_object* v_a_3863_ = _args[8];
lean_object* v_splitFVars_3864_ = _args[9];
lean_object* v_ss_3865_ = _args[10];
lean_object* v_post_3866_ = _args[11];
lean_object* v_epost_3867_ = _args[12];
lean_object* v_pre_3868_ = _args[13];
lean_object* v___y_3869_ = _args[14];
lean_object* v___y_3870_ = _args[15];
lean_object* v___y_3871_ = _args[16];
lean_object* v___y_3872_ = _args[17];
lean_object* v___y_3873_ = _args[18];
lean_object* v___y_3874_ = _args[19];
lean_object* v___y_3875_ = _args[20];
_start:
{
uint8_t v___x_73240__boxed_3876_; lean_object* v_res_3877_; 
v___x_73240__boxed_3876_ = lean_unbox(v___x_3859_);
v_res_3877_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5(v___x_3855_, v_splitInfo_3856_, v___f_3857_, v___x_3858_, v___x_73240__boxed_3876_, v_a_3860_, v___y_3861_, v_abstractInfo_3862_, v_a_3863_, v_splitFVars_3864_, v_ss_3865_, v_post_3866_, v_epost_3867_, v_pre_3868_, v___y_3869_, v___y_3870_, v___y_3871_, v___y_3872_, v___y_3873_, v___y_3874_);
lean_dec(v___y_3874_);
lean_dec_ref(v___y_3873_);
lean_dec(v___y_3872_);
lean_dec_ref(v___y_3871_);
lean_dec(v___y_3870_);
lean_dec_ref(v___y_3869_);
return v_res_3877_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg___lam__0(lean_object* v_k_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v_b_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_){
_start:
{
lean_object* v___x_3887_; 
lean_inc(v___y_3885_);
lean_inc_ref(v___y_3884_);
lean_inc(v___y_3883_);
lean_inc_ref(v___y_3882_);
lean_inc(v___y_3880_);
lean_inc_ref(v___y_3879_);
v___x_3887_ = lean_apply_8(v_k_3878_, v_b_3881_, v___y_3879_, v___y_3880_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_, lean_box(0));
return v___x_3887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg___lam__0___boxed(lean_object* v_k_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v_b_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_){
_start:
{
lean_object* v_res_3897_; 
v_res_3897_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg___lam__0(v_k_3888_, v___y_3889_, v___y_3890_, v_b_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
lean_dec(v___y_3895_);
lean_dec_ref(v___y_3894_);
lean_dec(v___y_3893_);
lean_dec_ref(v___y_3892_);
lean_dec(v___y_3890_);
lean_dec_ref(v___y_3889_);
return v_res_3897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg(lean_object* v_name_3898_, uint8_t v_bi_3899_, lean_object* v_type_3900_, lean_object* v_k_3901_, uint8_t v_kind_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_){
_start:
{
lean_object* v___f_3910_; lean_object* v___x_3911_; 
lean_inc(v___y_3904_);
lean_inc_ref(v___y_3903_);
v___f_3910_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg___lam__0___boxed), 9, 3);
lean_closure_set(v___f_3910_, 0, v_k_3901_);
lean_closure_set(v___f_3910_, 1, v___y_3903_);
lean_closure_set(v___f_3910_, 2, v___y_3904_);
v___x_3911_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3898_, v_bi_3899_, v_type_3900_, v___f_3910_, v_kind_3902_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_);
if (lean_obj_tag(v___x_3911_) == 0)
{
return v___x_3911_;
}
else
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3919_; 
v_a_3912_ = lean_ctor_get(v___x_3911_, 0);
v_isSharedCheck_3919_ = !lean_is_exclusive(v___x_3911_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3914_ = v___x_3911_;
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v___x_3911_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3917_; 
if (v_isShared_3915_ == 0)
{
v___x_3917_ = v___x_3914_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v_a_3912_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
return v___x_3917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg___boxed(lean_object* v_name_3920_, lean_object* v_bi_3921_, lean_object* v_type_3922_, lean_object* v_k_3923_, lean_object* v_kind_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
uint8_t v_bi_boxed_3932_; uint8_t v_kind_boxed_3933_; lean_object* v_res_3934_; 
v_bi_boxed_3932_ = lean_unbox(v_bi_3921_);
v_kind_boxed_3933_ = lean_unbox(v_kind_3924_);
v_res_3934_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg(v_name_3920_, v_bi_boxed_3932_, v_type_3922_, v_k_3923_, v_kind_boxed_3933_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_);
lean_dec(v___y_3930_);
lean_dec_ref(v___y_3929_);
lean_dec(v___y_3928_);
lean_dec_ref(v___y_3927_);
lean_dec(v___y_3926_);
lean_dec_ref(v___y_3925_);
return v_res_3934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(lean_object* v_name_3935_, lean_object* v_type_3936_, lean_object* v_k_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_){
_start:
{
uint8_t v___x_3945_; uint8_t v___x_3946_; lean_object* v___x_3947_; 
v___x_3945_ = 0;
v___x_3946_ = 0;
v___x_3947_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg(v_name_3935_, v___x_3945_, v_type_3936_, v_k_3937_, v___x_3946_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_);
return v___x_3947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg___boxed(lean_object* v_name_3948_, lean_object* v_type_3949_, lean_object* v_k_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_){
_start:
{
lean_object* v_res_3958_; 
v_res_3958_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v_name_3948_, v_type_3949_, v_k_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_, v___y_3955_, v___y_3956_);
lean_dec(v___y_3956_);
lean_dec_ref(v___y_3955_);
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
return v_res_3958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6(lean_object* v_args_3962_, lean_object* v_a_3963_, lean_object* v_post_3964_, lean_object* v_head_3965_, lean_object* v_ss_3966_, lean_object* v___y_3967_, lean_object* v_splitInfo_3968_, lean_object* v___x_3969_, uint8_t v___x_3970_, lean_object* v_a_3971_, lean_object* v_abstractInfo_3972_, lean_object* v_splitFVars_3973_, lean_object* v_epost_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_){
_start:
{
lean_object* v___f_3982_; lean_object* v___x_3983_; lean_object* v___x_3984_; 
lean_inc_ref(v_ss_3966_);
lean_inc_ref(v_head_3965_);
lean_inc_ref_n(v_epost_3974_, 2);
lean_inc_ref_n(v_post_3964_, 2);
lean_inc_ref_n(v_a_3963_, 2);
lean_inc_ref(v_args_3962_);
v___f_3982_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__0___boxed), 7, 6);
lean_closure_set(v___f_3982_, 0, v_args_3962_);
lean_closure_set(v___f_3982_, 1, v_a_3963_);
lean_closure_set(v___f_3982_, 2, v_post_3964_);
lean_closure_set(v___f_3982_, 3, v_epost_3974_);
lean_closure_set(v___f_3982_, 4, v_head_3965_);
lean_closure_set(v___f_3982_, 5, v_ss_3966_);
lean_inc_ref(v___y_3967_);
v___x_3983_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__0(v_args_3962_, v_a_3963_, v_post_3964_, v_epost_3974_, v_head_3965_, v_ss_3966_, v___y_3967_);
lean_dec_ref(v_args_3962_);
lean_inc_ref(v___x_3983_);
v___x_3984_ = l_Lean_Meta_Sym_inferType___redArg(v___x_3983_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_);
if (lean_obj_tag(v___x_3984_) == 0)
{
lean_object* v_a_3985_; lean_object* v___x_3986_; lean_object* v___f_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; 
v_a_3985_ = lean_ctor_get(v___x_3984_, 0);
lean_inc(v_a_3985_);
lean_dec_ref_known(v___x_3984_, 1);
v___x_3986_ = lean_box(v___x_3970_);
v___f_3987_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__5___boxed), 21, 13);
lean_closure_set(v___f_3987_, 0, v___x_3983_);
lean_closure_set(v___f_3987_, 1, v_splitInfo_3968_);
lean_closure_set(v___f_3987_, 2, v___f_3982_);
lean_closure_set(v___f_3987_, 3, v___x_3969_);
lean_closure_set(v___f_3987_, 4, v___x_3986_);
lean_closure_set(v___f_3987_, 5, v_a_3971_);
lean_closure_set(v___f_3987_, 6, v___y_3967_);
lean_closure_set(v___f_3987_, 7, v_abstractInfo_3972_);
lean_closure_set(v___f_3987_, 8, v_a_3963_);
lean_closure_set(v___f_3987_, 9, v_splitFVars_3973_);
lean_closure_set(v___f_3987_, 10, v_ss_3966_);
lean_closure_set(v___f_3987_, 11, v_post_3964_);
lean_closure_set(v___f_3987_, 12, v_epost_3974_);
v___x_3988_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___closed__1));
v___x_3989_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_3988_, v_a_3985_, v___f_3987_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_);
return v___x_3989_;
}
else
{
lean_dec_ref(v___x_3983_);
lean_dec_ref(v___f_3982_);
lean_dec_ref(v_epost_3974_);
lean_dec_ref(v_splitFVars_3973_);
lean_dec_ref(v_abstractInfo_3972_);
lean_dec_ref(v_a_3971_);
lean_dec_ref(v___x_3969_);
lean_dec_ref(v_splitInfo_3968_);
lean_dec_ref(v___y_3967_);
lean_dec_ref(v_ss_3966_);
lean_dec_ref(v_post_3964_);
lean_dec_ref(v_a_3963_);
return v___x_3984_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___boxed(lean_object** _args){
lean_object* v_args_3990_ = _args[0];
lean_object* v_a_3991_ = _args[1];
lean_object* v_post_3992_ = _args[2];
lean_object* v_head_3993_ = _args[3];
lean_object* v_ss_3994_ = _args[4];
lean_object* v___y_3995_ = _args[5];
lean_object* v_splitInfo_3996_ = _args[6];
lean_object* v___x_3997_ = _args[7];
lean_object* v___x_3998_ = _args[8];
lean_object* v_a_3999_ = _args[9];
lean_object* v_abstractInfo_4000_ = _args[10];
lean_object* v_splitFVars_4001_ = _args[11];
lean_object* v_epost_4002_ = _args[12];
lean_object* v___y_4003_ = _args[13];
lean_object* v___y_4004_ = _args[14];
lean_object* v___y_4005_ = _args[15];
lean_object* v___y_4006_ = _args[16];
lean_object* v___y_4007_ = _args[17];
lean_object* v___y_4008_ = _args[18];
lean_object* v___y_4009_ = _args[19];
_start:
{
uint8_t v___x_73459__boxed_4010_; lean_object* v_res_4011_; 
v___x_73459__boxed_4010_ = lean_unbox(v___x_3998_);
v_res_4011_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6(v_args_3990_, v_a_3991_, v_post_3992_, v_head_3993_, v_ss_3994_, v___y_3995_, v_splitInfo_3996_, v___x_3997_, v___x_73459__boxed_4010_, v_a_3999_, v_abstractInfo_4000_, v_splitFVars_4001_, v_epost_4002_, v___y_4003_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_);
lean_dec(v___y_4008_);
lean_dec_ref(v___y_4007_);
lean_dec(v___y_4006_);
lean_dec_ref(v___y_4005_);
lean_dec(v___y_4004_);
lean_dec_ref(v___y_4003_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7(lean_object* v_args_4015_, lean_object* v_a_4016_, lean_object* v_head_4017_, lean_object* v_ss_4018_, lean_object* v___y_4019_, lean_object* v_splitInfo_4020_, lean_object* v___x_4021_, uint8_t v___x_4022_, lean_object* v_a_4023_, lean_object* v_abstractInfo_4024_, lean_object* v_splitFVars_4025_, lean_object* v_info_4026_, lean_object* v_post_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_){
_start:
{
lean_object* v___x_4035_; lean_object* v___f_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; 
v___x_4035_ = lean_box(v___x_4022_);
v___f_4036_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__6___boxed), 20, 12);
lean_closure_set(v___f_4036_, 0, v_args_4015_);
lean_closure_set(v___f_4036_, 1, v_a_4016_);
lean_closure_set(v___f_4036_, 2, v_post_4027_);
lean_closure_set(v___f_4036_, 3, v_head_4017_);
lean_closure_set(v___f_4036_, 4, v_ss_4018_);
lean_closure_set(v___f_4036_, 5, v___y_4019_);
lean_closure_set(v___f_4036_, 6, v_splitInfo_4020_);
lean_closure_set(v___f_4036_, 7, v___x_4021_);
lean_closure_set(v___f_4036_, 8, v___x_4035_);
lean_closure_set(v___f_4036_, 9, v_a_4023_);
lean_closure_set(v___f_4036_, 10, v_abstractInfo_4024_);
lean_closure_set(v___f_4036_, 11, v_splitFVars_4025_);
v___x_4037_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___closed__1));
v___x_4038_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_EPred(v_info_4026_);
v___x_4039_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4037_, v___x_4038_, v___f_4036_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_);
return v___x_4039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___boxed(lean_object** _args){
lean_object* v_args_4040_ = _args[0];
lean_object* v_a_4041_ = _args[1];
lean_object* v_head_4042_ = _args[2];
lean_object* v_ss_4043_ = _args[3];
lean_object* v___y_4044_ = _args[4];
lean_object* v_splitInfo_4045_ = _args[5];
lean_object* v___x_4046_ = _args[6];
lean_object* v___x_4047_ = _args[7];
lean_object* v_a_4048_ = _args[8];
lean_object* v_abstractInfo_4049_ = _args[9];
lean_object* v_splitFVars_4050_ = _args[10];
lean_object* v_info_4051_ = _args[11];
lean_object* v_post_4052_ = _args[12];
lean_object* v___y_4053_ = _args[13];
lean_object* v___y_4054_ = _args[14];
lean_object* v___y_4055_ = _args[15];
lean_object* v___y_4056_ = _args[16];
lean_object* v___y_4057_ = _args[17];
lean_object* v___y_4058_ = _args[18];
lean_object* v___y_4059_ = _args[19];
_start:
{
uint8_t v___x_73518__boxed_4060_; lean_object* v_res_4061_; 
v___x_73518__boxed_4060_ = lean_unbox(v___x_4047_);
v_res_4061_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7(v_args_4040_, v_a_4041_, v_head_4042_, v_ss_4043_, v___y_4044_, v_splitInfo_4045_, v___x_4046_, v___x_73518__boxed_4060_, v_a_4048_, v_abstractInfo_4049_, v_splitFVars_4050_, v_info_4051_, v_post_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
lean_dec(v___y_4058_);
lean_dec_ref(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec_ref(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec_ref(v___y_4053_);
lean_dec_ref(v_info_4051_);
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8(lean_object* v_info_4065_, lean_object* v_a_4066_, lean_object* v_args_4067_, lean_object* v_head_4068_, lean_object* v___y_4069_, lean_object* v_splitInfo_4070_, lean_object* v___x_4071_, uint8_t v___x_4072_, lean_object* v_a_4073_, lean_object* v_abstractInfo_4074_, lean_object* v_splitFVars_4075_, lean_object* v_ss_4076_, lean_object* v___y_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_){
_start:
{
lean_object* v___x_4084_; lean_object* v___x_4085_; 
v___x_4084_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_Pred(v_info_4065_);
lean_inc_ref(v_a_4066_);
v___x_4085_ = l_Lean_mkArrow(v_a_4066_, v___x_4084_, v___y_4081_, v___y_4082_);
if (lean_obj_tag(v___x_4085_) == 0)
{
lean_object* v_a_4086_; lean_object* v___x_4087_; 
v_a_4086_ = lean_ctor_get(v___x_4085_, 0);
lean_inc(v_a_4086_);
lean_dec_ref_known(v___x_4085_, 1);
v___x_4087_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_4086_, v___y_4078_);
if (lean_obj_tag(v___x_4087_) == 0)
{
lean_object* v_a_4088_; lean_object* v___x_4089_; lean_object* v___f_4090_; lean_object* v___x_4091_; lean_object* v___x_4092_; 
v_a_4088_ = lean_ctor_get(v___x_4087_, 0);
lean_inc(v_a_4088_);
lean_dec_ref_known(v___x_4087_, 1);
v___x_4089_ = lean_box(v___x_4072_);
v___f_4090_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__7___boxed), 20, 12);
lean_closure_set(v___f_4090_, 0, v_args_4067_);
lean_closure_set(v___f_4090_, 1, v_a_4066_);
lean_closure_set(v___f_4090_, 2, v_head_4068_);
lean_closure_set(v___f_4090_, 3, v_ss_4076_);
lean_closure_set(v___f_4090_, 4, v___y_4069_);
lean_closure_set(v___f_4090_, 5, v_splitInfo_4070_);
lean_closure_set(v___f_4090_, 6, v___x_4071_);
lean_closure_set(v___f_4090_, 7, v___x_4089_);
lean_closure_set(v___f_4090_, 8, v_a_4073_);
lean_closure_set(v___f_4090_, 9, v_abstractInfo_4074_);
lean_closure_set(v___f_4090_, 10, v_splitFVars_4075_);
lean_closure_set(v___f_4090_, 11, v_info_4065_);
v___x_4091_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___closed__1));
v___x_4092_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4091_, v_a_4088_, v___f_4090_, v___y_4077_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_, v___y_4082_);
return v___x_4092_;
}
else
{
lean_dec_ref(v_ss_4076_);
lean_dec_ref(v_splitFVars_4075_);
lean_dec_ref(v_abstractInfo_4074_);
lean_dec_ref(v_a_4073_);
lean_dec_ref(v___x_4071_);
lean_dec_ref(v_splitInfo_4070_);
lean_dec_ref(v___y_4069_);
lean_dec_ref(v_head_4068_);
lean_dec_ref(v_args_4067_);
lean_dec_ref(v_a_4066_);
lean_dec_ref(v_info_4065_);
return v___x_4087_;
}
}
else
{
lean_dec_ref(v_ss_4076_);
lean_dec_ref(v_splitFVars_4075_);
lean_dec_ref(v_abstractInfo_4074_);
lean_dec_ref(v_a_4073_);
lean_dec_ref(v___x_4071_);
lean_dec_ref(v_splitInfo_4070_);
lean_dec_ref(v___y_4069_);
lean_dec_ref(v_head_4068_);
lean_dec_ref(v_args_4067_);
lean_dec_ref(v_a_4066_);
lean_dec_ref(v_info_4065_);
return v___x_4085_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___boxed(lean_object** _args){
lean_object* v_info_4093_ = _args[0];
lean_object* v_a_4094_ = _args[1];
lean_object* v_args_4095_ = _args[2];
lean_object* v_head_4096_ = _args[3];
lean_object* v___y_4097_ = _args[4];
lean_object* v_splitInfo_4098_ = _args[5];
lean_object* v___x_4099_ = _args[6];
lean_object* v___x_4100_ = _args[7];
lean_object* v_a_4101_ = _args[8];
lean_object* v_abstractInfo_4102_ = _args[9];
lean_object* v_splitFVars_4103_ = _args[10];
lean_object* v_ss_4104_ = _args[11];
lean_object* v___y_4105_ = _args[12];
lean_object* v___y_4106_ = _args[13];
lean_object* v___y_4107_ = _args[14];
lean_object* v___y_4108_ = _args[15];
lean_object* v___y_4109_ = _args[16];
lean_object* v___y_4110_ = _args[17];
lean_object* v___y_4111_ = _args[18];
_start:
{
uint8_t v___x_73570__boxed_4112_; lean_object* v_res_4113_; 
v___x_73570__boxed_4112_ = lean_unbox(v___x_4100_);
v_res_4113_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8(v_info_4093_, v_a_4094_, v_args_4095_, v_head_4096_, v___y_4097_, v_splitInfo_4098_, v___x_4099_, v___x_73570__boxed_4112_, v_a_4101_, v_abstractInfo_4102_, v_splitFVars_4103_, v_ss_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_);
lean_dec(v___y_4110_);
lean_dec_ref(v___y_4109_);
lean_dec(v___y_4108_);
lean_dec_ref(v___y_4107_);
lean_dec(v___y_4106_);
lean_dec_ref(v___y_4105_);
return v_res_4113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__11(size_t v_sz_4114_, size_t v_i_4115_, lean_object* v_bs_4116_){
_start:
{
uint8_t v___x_4117_; 
v___x_4117_ = lean_usize_dec_lt(v_i_4115_, v_sz_4114_);
if (v___x_4117_ == 0)
{
return v_bs_4116_;
}
else
{
lean_object* v_v_4118_; lean_object* v___x_4119_; lean_object* v_bs_x27_4120_; lean_object* v___x_4121_; size_t v___x_4122_; size_t v___x_4123_; lean_object* v___x_4124_; 
v_v_4118_ = lean_array_uget(v_bs_4116_, v_i_4115_);
v___x_4119_ = lean_unsigned_to_nat(0u);
v_bs_x27_4120_ = lean_array_uset(v_bs_4116_, v_i_4115_, v___x_4119_);
v___x_4121_ = l_Lean_Expr_eta(v_v_4118_);
v___x_4122_ = ((size_t)1ULL);
v___x_4123_ = lean_usize_add(v_i_4115_, v___x_4122_);
v___x_4124_ = lean_array_uset(v_bs_x27_4120_, v_i_4115_, v___x_4121_);
v_i_4115_ = v___x_4123_;
v_bs_4116_ = v___x_4124_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__11___boxed(lean_object* v_sz_4126_, lean_object* v_i_4127_, lean_object* v_bs_4128_){
_start:
{
size_t v_sz_boxed_4129_; size_t v_i_boxed_4130_; lean_object* v_res_4131_; 
v_sz_boxed_4129_ = lean_unbox_usize(v_sz_4126_);
lean_dec(v_sz_4126_);
v_i_boxed_4130_ = lean_unbox_usize(v_i_4127_);
lean_dec(v_i_4127_);
v_res_4131_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__11(v_sz_boxed_4129_, v_i_boxed_4130_, v_bs_4128_);
return v_res_4131_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg(size_t v_sz_4135_, size_t v_i_4136_, lean_object* v_bs_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_){
_start:
{
uint8_t v___x_4144_; 
v___x_4144_ = lean_usize_dec_lt(v_i_4136_, v_sz_4135_);
if (v___x_4144_ == 0)
{
lean_object* v___x_4145_; 
v___x_4145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4145_, 0, v_bs_4137_);
return v___x_4145_;
}
else
{
lean_object* v_v_4146_; lean_object* v___x_4147_; 
v_v_4146_ = lean_array_uget_borrowed(v_bs_4137_, v_i_4136_);
lean_inc(v_v_4146_);
v___x_4147_ = l_Lean_Meta_Sym_inferType___redArg(v_v_4146_, v___y_4138_, v___y_4139_, v___y_4140_, v___y_4141_, v___y_4142_);
if (lean_obj_tag(v___x_4147_) == 0)
{
lean_object* v_a_4148_; lean_object* v___x_4149_; lean_object* v_bs_x27_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; size_t v___x_4153_; size_t v___x_4154_; lean_object* v___x_4155_; 
v_a_4148_ = lean_ctor_get(v___x_4147_, 0);
lean_inc(v_a_4148_);
lean_dec_ref_known(v___x_4147_, 1);
v___x_4149_ = lean_unsigned_to_nat(0u);
v_bs_x27_4150_ = lean_array_uset(v_bs_4137_, v_i_4136_, v___x_4149_);
v___x_4151_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg___closed__1));
v___x_4152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4152_, 0, v___x_4151_);
lean_ctor_set(v___x_4152_, 1, v_a_4148_);
v___x_4153_ = ((size_t)1ULL);
v___x_4154_ = lean_usize_add(v_i_4136_, v___x_4153_);
v___x_4155_ = lean_array_uset(v_bs_x27_4150_, v_i_4136_, v___x_4152_);
v_i_4136_ = v___x_4154_;
v_bs_4137_ = v___x_4155_;
goto _start;
}
else
{
lean_object* v_a_4157_; lean_object* v___x_4159_; uint8_t v_isShared_4160_; uint8_t v_isSharedCheck_4164_; 
lean_dec_ref(v_bs_4137_);
v_a_4157_ = lean_ctor_get(v___x_4147_, 0);
v_isSharedCheck_4164_ = !lean_is_exclusive(v___x_4147_);
if (v_isSharedCheck_4164_ == 0)
{
v___x_4159_ = v___x_4147_;
v_isShared_4160_ = v_isSharedCheck_4164_;
goto v_resetjp_4158_;
}
else
{
lean_inc(v_a_4157_);
lean_dec(v___x_4147_);
v___x_4159_ = lean_box(0);
v_isShared_4160_ = v_isSharedCheck_4164_;
goto v_resetjp_4158_;
}
v_resetjp_4158_:
{
lean_object* v___x_4162_; 
if (v_isShared_4160_ == 0)
{
v___x_4162_ = v___x_4159_;
goto v_reusejp_4161_;
}
else
{
lean_object* v_reuseFailAlloc_4163_; 
v_reuseFailAlloc_4163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4163_, 0, v_a_4157_);
v___x_4162_ = v_reuseFailAlloc_4163_;
goto v_reusejp_4161_;
}
v_reusejp_4161_:
{
return v___x_4162_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg___boxed(lean_object* v_sz_4165_, lean_object* v_i_4166_, lean_object* v_bs_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_){
_start:
{
size_t v_sz_boxed_4174_; size_t v_i_boxed_4175_; lean_object* v_res_4176_; 
v_sz_boxed_4174_ = lean_unbox_usize(v_sz_4165_);
lean_dec(v_sz_4165_);
v_i_boxed_4175_ = lean_unbox_usize(v_i_4166_);
lean_dec(v_i_4166_);
v_res_4176_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg(v_sz_boxed_4174_, v_i_boxed_4175_, v_bs_4167_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_);
lean_dec(v___y_4172_);
lean_dec_ref(v___y_4171_);
lean_dec(v___y_4170_);
lean_dec_ref(v___y_4169_);
lean_dec(v___y_4168_);
return v_res_4176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__9(lean_object* v_info_4177_, lean_object* v_a_4178_, lean_object* v_splitInfo_4179_, lean_object* v___x_4180_, uint8_t v___x_4181_, lean_object* v_a_4182_, lean_object* v_abstractInfo_4183_, lean_object* v_splitFVars_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_){
_start:
{
lean_object* v___y_4193_; 
if (lean_obj_tag(v_abstractInfo_4183_) == 2)
{
lean_object* v_matcherApp_4213_; lean_object* v_toMatcherInfo_4214_; lean_object* v_matcherName_4215_; lean_object* v_matcherLevels_4216_; lean_object* v_params_4217_; lean_object* v_motive_4218_; lean_object* v_discrs_4219_; lean_object* v_alts_4220_; lean_object* v_remaining_4221_; lean_object* v___x_4223_; uint8_t v_isShared_4224_; uint8_t v_isSharedCheck_4232_; 
v_matcherApp_4213_ = lean_ctor_get(v_abstractInfo_4183_, 0);
lean_inc_ref(v_matcherApp_4213_);
v_toMatcherInfo_4214_ = lean_ctor_get(v_matcherApp_4213_, 0);
v_matcherName_4215_ = lean_ctor_get(v_matcherApp_4213_, 1);
v_matcherLevels_4216_ = lean_ctor_get(v_matcherApp_4213_, 2);
v_params_4217_ = lean_ctor_get(v_matcherApp_4213_, 3);
v_motive_4218_ = lean_ctor_get(v_matcherApp_4213_, 4);
v_discrs_4219_ = lean_ctor_get(v_matcherApp_4213_, 5);
v_alts_4220_ = lean_ctor_get(v_matcherApp_4213_, 6);
v_remaining_4221_ = lean_ctor_get(v_matcherApp_4213_, 7);
v_isSharedCheck_4232_ = !lean_is_exclusive(v_matcherApp_4213_);
if (v_isSharedCheck_4232_ == 0)
{
v___x_4223_ = v_matcherApp_4213_;
v_isShared_4224_ = v_isSharedCheck_4232_;
goto v_resetjp_4222_;
}
else
{
lean_inc(v_remaining_4221_);
lean_inc(v_alts_4220_);
lean_inc(v_discrs_4219_);
lean_inc(v_motive_4218_);
lean_inc(v_params_4217_);
lean_inc(v_matcherLevels_4216_);
lean_inc(v_matcherName_4215_);
lean_inc(v_toMatcherInfo_4214_);
lean_dec(v_matcherApp_4213_);
v___x_4223_ = lean_box(0);
v_isShared_4224_ = v_isSharedCheck_4232_;
goto v_resetjp_4222_;
}
v_resetjp_4222_:
{
size_t v_sz_4225_; size_t v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4229_; 
v_sz_4225_ = lean_array_size(v_alts_4220_);
v___x_4226_ = ((size_t)0ULL);
v___x_4227_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__11(v_sz_4225_, v___x_4226_, v_alts_4220_);
if (v_isShared_4224_ == 0)
{
lean_ctor_set(v___x_4223_, 6, v___x_4227_);
v___x_4229_ = v___x_4223_;
goto v_reusejp_4228_;
}
else
{
lean_object* v_reuseFailAlloc_4231_; 
v_reuseFailAlloc_4231_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_4231_, 0, v_toMatcherInfo_4214_);
lean_ctor_set(v_reuseFailAlloc_4231_, 1, v_matcherName_4215_);
lean_ctor_set(v_reuseFailAlloc_4231_, 2, v_matcherLevels_4216_);
lean_ctor_set(v_reuseFailAlloc_4231_, 3, v_params_4217_);
lean_ctor_set(v_reuseFailAlloc_4231_, 4, v_motive_4218_);
lean_ctor_set(v_reuseFailAlloc_4231_, 5, v_discrs_4219_);
lean_ctor_set(v_reuseFailAlloc_4231_, 6, v___x_4227_);
lean_ctor_set(v_reuseFailAlloc_4231_, 7, v_remaining_4221_);
v___x_4229_ = v_reuseFailAlloc_4231_;
goto v_reusejp_4228_;
}
v_reusejp_4228_:
{
lean_object* v___x_4230_; 
v___x_4230_ = l_Lean_Meta_MatcherApp_toExpr(v___x_4229_);
v___y_4193_ = v___x_4230_;
goto v___jp_4192_;
}
}
}
else
{
lean_object* v_e_4233_; 
v_e_4233_ = lean_ctor_get(v_abstractInfo_4183_, 0);
lean_inc_ref(v_e_4233_);
v___y_4193_ = v_e_4233_;
goto v___jp_4192_;
}
v___jp_4192_:
{
lean_object* v_head_4194_; lean_object* v_args_4195_; lean_object* v_excessArgs_4196_; size_t v_sz_4197_; size_t v___x_4198_; lean_object* v___x_4199_; 
v_head_4194_ = lean_ctor_get(v_info_4177_, 0);
lean_inc_ref(v_head_4194_);
v_args_4195_ = lean_ctor_get(v_info_4177_, 1);
lean_inc_ref(v_args_4195_);
v_excessArgs_4196_ = lean_ctor_get(v_info_4177_, 2);
v_sz_4197_ = lean_array_size(v_excessArgs_4196_);
v___x_4198_ = ((size_t)0ULL);
lean_inc_ref(v_excessArgs_4196_);
v___x_4199_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg(v_sz_4197_, v___x_4198_, v_excessArgs_4196_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_);
if (lean_obj_tag(v___x_4199_) == 0)
{
lean_object* v_a_4200_; lean_object* v___x_4201_; lean_object* v___f_4202_; uint8_t v___x_4203_; lean_object* v___x_4204_; 
v_a_4200_ = lean_ctor_get(v___x_4199_, 0);
lean_inc(v_a_4200_);
lean_dec_ref_known(v___x_4199_, 1);
v___x_4201_ = lean_box(v___x_4181_);
v___f_4202_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__8___boxed), 19, 11);
lean_closure_set(v___f_4202_, 0, v_info_4177_);
lean_closure_set(v___f_4202_, 1, v_a_4178_);
lean_closure_set(v___f_4202_, 2, v_args_4195_);
lean_closure_set(v___f_4202_, 3, v_head_4194_);
lean_closure_set(v___f_4202_, 4, v___y_4193_);
lean_closure_set(v___f_4202_, 5, v_splitInfo_4179_);
lean_closure_set(v___f_4202_, 6, v___x_4180_);
lean_closure_set(v___f_4202_, 7, v___x_4201_);
lean_closure_set(v___f_4202_, 8, v_a_4182_);
lean_closure_set(v___f_4202_, 9, v_abstractInfo_4183_);
lean_closure_set(v___f_4202_, 10, v_splitFVars_4184_);
v___x_4203_ = 0;
v___x_4204_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8(v_a_4200_, v___f_4202_, v___x_4203_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_);
return v___x_4204_;
}
else
{
lean_object* v_a_4205_; lean_object* v___x_4207_; uint8_t v_isShared_4208_; uint8_t v_isSharedCheck_4212_; 
lean_dec_ref(v_args_4195_);
lean_dec_ref(v_head_4194_);
lean_dec_ref(v___y_4193_);
lean_dec_ref(v_splitFVars_4184_);
lean_dec_ref(v_abstractInfo_4183_);
lean_dec_ref(v_a_4182_);
lean_dec_ref(v___x_4180_);
lean_dec_ref(v_splitInfo_4179_);
lean_dec_ref(v_a_4178_);
lean_dec_ref(v_info_4177_);
v_a_4205_ = lean_ctor_get(v___x_4199_, 0);
v_isSharedCheck_4212_ = !lean_is_exclusive(v___x_4199_);
if (v_isSharedCheck_4212_ == 0)
{
v___x_4207_ = v___x_4199_;
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
else
{
lean_inc(v_a_4205_);
lean_dec(v___x_4199_);
v___x_4207_ = lean_box(0);
v_isShared_4208_ = v_isSharedCheck_4212_;
goto v_resetjp_4206_;
}
v_resetjp_4206_:
{
lean_object* v___x_4210_; 
if (v_isShared_4208_ == 0)
{
v___x_4210_ = v___x_4207_;
goto v_reusejp_4209_;
}
else
{
lean_object* v_reuseFailAlloc_4211_; 
v_reuseFailAlloc_4211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4211_, 0, v_a_4205_);
v___x_4210_ = v_reuseFailAlloc_4211_;
goto v_reusejp_4209_;
}
v_reusejp_4209_:
{
return v___x_4210_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__9___boxed(lean_object* v_info_4234_, lean_object* v_a_4235_, lean_object* v_splitInfo_4236_, lean_object* v___x_4237_, lean_object* v___x_4238_, lean_object* v_a_4239_, lean_object* v_abstractInfo_4240_, lean_object* v_splitFVars_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_, lean_object* v___y_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_, lean_object* v___y_4248_){
_start:
{
uint8_t v___x_73704__boxed_4249_; lean_object* v_res_4250_; 
v___x_73704__boxed_4249_ = lean_unbox(v___x_4238_);
v_res_4250_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__9(v_info_4234_, v_a_4235_, v_splitInfo_4236_, v___x_4237_, v___x_73704__boxed_4249_, v_a_4239_, v_abstractInfo_4240_, v_splitFVars_4241_, v___y_4242_, v___y_4243_, v___y_4244_, v___y_4245_, v___y_4246_, v___y_4247_);
lean_dec(v___y_4247_);
lean_dec_ref(v___y_4246_);
lean_dec(v___y_4245_);
lean_dec_ref(v___y_4244_);
lean_dec(v___y_4243_);
lean_dec_ref(v___y_4242_);
return v_res_4250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__20(size_t v_sz_4251_, size_t v_i_4252_, lean_object* v_bs_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_){
_start:
{
uint8_t v___x_4259_; 
v___x_4259_ = lean_usize_dec_lt(v_i_4252_, v_sz_4251_);
if (v___x_4259_ == 0)
{
lean_object* v___x_4260_; 
v___x_4260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4260_, 0, v_bs_4253_);
return v___x_4260_;
}
else
{
lean_object* v_v_4261_; lean_object* v___x_4262_; 
v_v_4261_ = lean_array_uget_borrowed(v_bs_4253_, v_i_4252_);
lean_inc(v_v_4261_);
v___x_4262_ = l_Lean_Meta_etaExpand(v_v_4261_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_);
if (lean_obj_tag(v___x_4262_) == 0)
{
lean_object* v_a_4263_; lean_object* v___x_4264_; lean_object* v_bs_x27_4265_; size_t v___x_4266_; size_t v___x_4267_; lean_object* v___x_4268_; 
v_a_4263_ = lean_ctor_get(v___x_4262_, 0);
lean_inc(v_a_4263_);
lean_dec_ref_known(v___x_4262_, 1);
v___x_4264_ = lean_unsigned_to_nat(0u);
v_bs_x27_4265_ = lean_array_uset(v_bs_4253_, v_i_4252_, v___x_4264_);
v___x_4266_ = ((size_t)1ULL);
v___x_4267_ = lean_usize_add(v_i_4252_, v___x_4266_);
v___x_4268_ = lean_array_uset(v_bs_x27_4265_, v_i_4252_, v_a_4263_);
v_i_4252_ = v___x_4267_;
v_bs_4253_ = v___x_4268_;
goto _start;
}
else
{
lean_object* v_a_4270_; lean_object* v___x_4272_; uint8_t v_isShared_4273_; uint8_t v_isSharedCheck_4277_; 
lean_dec_ref(v_bs_4253_);
v_a_4270_ = lean_ctor_get(v___x_4262_, 0);
v_isSharedCheck_4277_ = !lean_is_exclusive(v___x_4262_);
if (v_isSharedCheck_4277_ == 0)
{
v___x_4272_ = v___x_4262_;
v_isShared_4273_ = v_isSharedCheck_4277_;
goto v_resetjp_4271_;
}
else
{
lean_inc(v_a_4270_);
lean_dec(v___x_4262_);
v___x_4272_ = lean_box(0);
v_isShared_4273_ = v_isSharedCheck_4277_;
goto v_resetjp_4271_;
}
v_resetjp_4271_:
{
lean_object* v___x_4275_; 
if (v_isShared_4273_ == 0)
{
v___x_4275_ = v___x_4272_;
goto v_reusejp_4274_;
}
else
{
lean_object* v_reuseFailAlloc_4276_; 
v_reuseFailAlloc_4276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4276_, 0, v_a_4270_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__20___boxed(lean_object* v_sz_4278_, lean_object* v_i_4279_, lean_object* v_bs_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_, lean_object* v___y_4285_){
_start:
{
size_t v_sz_boxed_4286_; size_t v_i_boxed_4287_; lean_object* v_res_4288_; 
v_sz_boxed_4286_ = lean_unbox_usize(v_sz_4278_);
lean_dec(v_sz_4278_);
v_i_boxed_4287_ = lean_unbox_usize(v_i_4279_);
lean_dec(v_i_4279_);
v_res_4288_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__20(v_sz_boxed_4286_, v_i_boxed_4287_, v_bs_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_);
lean_dec(v___y_4284_);
lean_dec_ref(v___y_4283_);
lean_dec(v___y_4282_);
lean_dec_ref(v___y_4281_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__9(lean_object* v_toMatcherInfo_4289_, lean_object* v_matcherName_4290_, lean_object* v_matcherLevels_4291_, lean_object* v_params_4292_, lean_object* v_a_4293_, lean_object* v_discrs_4294_, lean_object* v_k_4295_, lean_object* v_alts_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_){
_start:
{
size_t v_sz_4304_; size_t v___x_4305_; lean_object* v___x_4306_; 
v_sz_4304_ = lean_array_size(v_alts_4296_);
v___x_4305_ = ((size_t)0ULL);
lean_inc_ref(v_alts_4296_);
v___x_4306_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__20(v_sz_4304_, v___x_4305_, v_alts_4296_, v___y_4299_, v___y_4300_, v___y_4301_, v___y_4302_);
if (lean_obj_tag(v___x_4306_) == 0)
{
lean_object* v_a_4307_; lean_object* v___x_4308_; lean_object* v_abstractMatcherApp_4309_; lean_object* v___x_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; 
v_a_4307_ = lean_ctor_get(v___x_4306_, 0);
lean_inc(v_a_4307_);
lean_dec_ref_known(v___x_4306_, 1);
v___x_4308_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___lam__1___closed__2));
lean_inc_ref(v_discrs_4294_);
v_abstractMatcherApp_4309_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_abstractMatcherApp_4309_, 0, v_toMatcherInfo_4289_);
lean_ctor_set(v_abstractMatcherApp_4309_, 1, v_matcherName_4290_);
lean_ctor_set(v_abstractMatcherApp_4309_, 2, v_matcherLevels_4291_);
lean_ctor_set(v_abstractMatcherApp_4309_, 3, v_params_4292_);
lean_ctor_set(v_abstractMatcherApp_4309_, 4, v_a_4293_);
lean_ctor_set(v_abstractMatcherApp_4309_, 5, v_discrs_4294_);
lean_ctor_set(v_abstractMatcherApp_4309_, 6, v_a_4307_);
lean_ctor_set(v_abstractMatcherApp_4309_, 7, v___x_4308_);
v___x_4310_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4310_, 0, v_abstractMatcherApp_4309_);
v___x_4311_ = l_Array_append___redArg(v_discrs_4294_, v_alts_4296_);
lean_dec_ref(v_alts_4296_);
lean_inc(v___y_4302_);
lean_inc_ref(v___y_4301_);
lean_inc(v___y_4300_);
lean_inc_ref(v___y_4299_);
lean_inc(v___y_4298_);
lean_inc_ref(v___y_4297_);
v___x_4312_ = lean_apply_9(v_k_4295_, v___x_4310_, v___x_4311_, v___y_4297_, v___y_4298_, v___y_4299_, v___y_4300_, v___y_4301_, v___y_4302_, lean_box(0));
return v___x_4312_;
}
else
{
lean_object* v_a_4313_; lean_object* v___x_4315_; uint8_t v_isShared_4316_; uint8_t v_isSharedCheck_4320_; 
lean_dec_ref(v_alts_4296_);
lean_dec_ref(v_k_4295_);
lean_dec_ref(v_discrs_4294_);
lean_dec_ref(v_a_4293_);
lean_dec_ref(v_params_4292_);
lean_dec_ref(v_matcherLevels_4291_);
lean_dec(v_matcherName_4290_);
lean_dec_ref(v_toMatcherInfo_4289_);
v_a_4313_ = lean_ctor_get(v___x_4306_, 0);
v_isSharedCheck_4320_ = !lean_is_exclusive(v___x_4306_);
if (v_isSharedCheck_4320_ == 0)
{
v___x_4315_ = v___x_4306_;
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
else
{
lean_inc(v_a_4313_);
lean_dec(v___x_4306_);
v___x_4315_ = lean_box(0);
v_isShared_4316_ = v_isSharedCheck_4320_;
goto v_resetjp_4314_;
}
v_resetjp_4314_:
{
lean_object* v___x_4318_; 
if (v_isShared_4316_ == 0)
{
v___x_4318_ = v___x_4315_;
goto v_reusejp_4317_;
}
else
{
lean_object* v_reuseFailAlloc_4319_; 
v_reuseFailAlloc_4319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4319_, 0, v_a_4313_);
v___x_4318_ = v_reuseFailAlloc_4319_;
goto v_reusejp_4317_;
}
v_reusejp_4317_:
{
return v___x_4318_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__9___boxed(lean_object* v_toMatcherInfo_4321_, lean_object* v_matcherName_4322_, lean_object* v_matcherLevels_4323_, lean_object* v_params_4324_, lean_object* v_a_4325_, lean_object* v_discrs_4326_, lean_object* v_k_4327_, lean_object* v_alts_4328_, lean_object* v___y_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_){
_start:
{
lean_object* v_res_4336_; 
v_res_4336_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__9(v_toMatcherInfo_4321_, v_matcherName_4322_, v_matcherLevels_4323_, v_params_4324_, v_a_4325_, v_discrs_4326_, v_k_4327_, v_alts_4328_, v___y_4329_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_, v___y_4334_);
lean_dec(v___y_4334_);
lean_dec_ref(v___y_4333_);
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
lean_dec(v___y_4330_);
lean_dec_ref(v___y_4329_);
return v_res_4336_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg(lean_object* v_as_4340_, lean_object* v_i_4341_, lean_object* v_j_4342_, lean_object* v_bs_4343_){
_start:
{
lean_object* v_zero_4344_; uint8_t v_isZero_4345_; 
v_zero_4344_ = lean_unsigned_to_nat(0u);
v_isZero_4345_ = lean_nat_dec_eq(v_i_4341_, v_zero_4344_);
if (v_isZero_4345_ == 1)
{
lean_dec(v_j_4342_);
lean_dec(v_i_4341_);
return v_bs_4343_;
}
else
{
lean_object* v_one_4346_; lean_object* v_n_4347_; lean_object* v___x_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
v_one_4346_ = lean_unsigned_to_nat(1u);
v_n_4347_ = lean_nat_sub(v_i_4341_, v_one_4346_);
lean_dec(v_i_4341_);
v___x_4348_ = lean_array_fget_borrowed(v_as_4340_, v_j_4342_);
v___x_4349_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg___closed__1));
v___x_4350_ = lean_nat_add(v_j_4342_, v_one_4346_);
lean_dec(v_j_4342_);
lean_inc(v___x_4350_);
v___x_4351_ = lean_name_append_index_after(v___x_4349_, v___x_4350_);
lean_inc(v___x_4348_);
v___x_4352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4352_, 0, v___x_4351_);
lean_ctor_set(v___x_4352_, 1, v___x_4348_);
v___x_4353_ = lean_array_push(v_bs_4343_, v___x_4352_);
v_i_4341_ = v_n_4347_;
v_j_4342_ = v___x_4350_;
v_bs_4343_ = v___x_4353_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg___boxed(lean_object* v_as_4355_, lean_object* v_i_4356_, lean_object* v_j_4357_, lean_object* v_bs_4358_){
_start:
{
lean_object* v_res_4359_; 
v_res_4359_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg(v_as_4355_, v_i_4356_, v_j_4357_, v_bs_4358_);
lean_dec_ref(v_as_4355_);
return v_res_4359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__10(lean_object* v_motive_4360_, lean_object* v___f_4361_, lean_object* v_toMatcherInfo_4362_, lean_object* v_matcherName_4363_, lean_object* v_params_4364_, lean_object* v_alts_4365_, lean_object* v_k_4366_, lean_object* v_matcherLevels_4367_, lean_object* v_resTy_4368_, lean_object* v_discrs_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_){
_start:
{
uint8_t v___x_4377_; lean_object* v___x_4378_; 
v___x_4377_ = 0;
v___x_4378_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg(v_motive_4360_, v___f_4361_, v___x_4377_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_);
if (lean_obj_tag(v___x_4378_) == 0)
{
lean_object* v_a_4379_; lean_object* v_matcherLevels_4381_; lean_object* v___y_4382_; lean_object* v___y_4383_; lean_object* v___y_4384_; lean_object* v___y_4385_; lean_object* v___y_4386_; lean_object* v___y_4387_; lean_object* v_uElimPos_x3f_4411_; 
v_a_4379_ = lean_ctor_get(v___x_4378_, 0);
lean_inc(v_a_4379_);
lean_dec_ref_known(v___x_4378_, 1);
v_uElimPos_x3f_4411_ = lean_ctor_get(v_toMatcherInfo_4362_, 3);
if (lean_obj_tag(v_uElimPos_x3f_4411_) == 0)
{
lean_dec_ref(v_resTy_4368_);
v_matcherLevels_4381_ = v_matcherLevels_4367_;
v___y_4382_ = v___y_4370_;
v___y_4383_ = v___y_4371_;
v___y_4384_ = v___y_4372_;
v___y_4385_ = v___y_4373_;
v___y_4386_ = v___y_4374_;
v___y_4387_ = v___y_4375_;
goto v___jp_4380_;
}
else
{
lean_object* v_val_4412_; lean_object* v___x_4413_; 
v_val_4412_ = lean_ctor_get(v_uElimPos_x3f_4411_, 0);
v___x_4413_ = l_Lean_Meta_getLevel(v_resTy_4368_, v___y_4372_, v___y_4373_, v___y_4374_, v___y_4375_);
if (lean_obj_tag(v___x_4413_) == 0)
{
lean_object* v_a_4414_; lean_object* v___x_4415_; 
v_a_4414_ = lean_ctor_get(v___x_4413_, 0);
lean_inc(v_a_4414_);
lean_dec_ref_known(v___x_4413_, 1);
v___x_4415_ = lean_array_set(v_matcherLevels_4367_, v_val_4412_, v_a_4414_);
v_matcherLevels_4381_ = v___x_4415_;
v___y_4382_ = v___y_4370_;
v___y_4383_ = v___y_4371_;
v___y_4384_ = v___y_4372_;
v___y_4385_ = v___y_4373_;
v___y_4386_ = v___y_4374_;
v___y_4387_ = v___y_4375_;
goto v___jp_4380_;
}
else
{
lean_object* v_a_4416_; lean_object* v___x_4418_; uint8_t v_isShared_4419_; uint8_t v_isSharedCheck_4423_; 
lean_dec(v_a_4379_);
lean_dec_ref(v_discrs_4369_);
lean_dec_ref(v_matcherLevels_4367_);
lean_dec_ref(v_k_4366_);
lean_dec_ref(v_params_4364_);
lean_dec(v_matcherName_4363_);
lean_dec_ref(v_toMatcherInfo_4362_);
v_a_4416_ = lean_ctor_get(v___x_4413_, 0);
v_isSharedCheck_4423_ = !lean_is_exclusive(v___x_4413_);
if (v_isSharedCheck_4423_ == 0)
{
v___x_4418_ = v___x_4413_;
v_isShared_4419_ = v_isSharedCheck_4423_;
goto v_resetjp_4417_;
}
else
{
lean_inc(v_a_4416_);
lean_dec(v___x_4413_);
v___x_4418_ = lean_box(0);
v_isShared_4419_ = v_isSharedCheck_4423_;
goto v_resetjp_4417_;
}
v_resetjp_4417_:
{
lean_object* v___x_4421_; 
if (v_isShared_4419_ == 0)
{
v___x_4421_ = v___x_4418_;
goto v_reusejp_4420_;
}
else
{
lean_object* v_reuseFailAlloc_4422_; 
v_reuseFailAlloc_4422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4422_, 0, v_a_4416_);
v___x_4421_ = v_reuseFailAlloc_4422_;
goto v_reusejp_4420_;
}
v_reusejp_4420_:
{
return v___x_4421_;
}
}
}
}
v___jp_4380_:
{
lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v_matcherPartial_4390_; lean_object* v_matcherPartial_4391_; lean_object* v_matcherPartial_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; 
lean_inc_ref(v_matcherLevels_4381_);
v___x_4388_ = lean_array_to_list(v_matcherLevels_4381_);
lean_inc(v_matcherName_4363_);
v___x_4389_ = l_Lean_mkConst(v_matcherName_4363_, v___x_4388_);
v_matcherPartial_4390_ = l_Lean_mkAppN(v___x_4389_, v_params_4364_);
lean_inc(v_a_4379_);
v_matcherPartial_4391_ = l_Lean_Expr_app___override(v_matcherPartial_4390_, v_a_4379_);
v_matcherPartial_4392_ = l_Lean_mkAppN(v_matcherPartial_4391_, v_discrs_4369_);
v___x_4393_ = lean_array_get_size(v_alts_4365_);
v___x_4394_ = l_Lean_Meta_inferArgumentTypesN(v___x_4393_, v_matcherPartial_4392_, v___y_4384_, v___y_4385_, v___y_4386_, v___y_4387_);
if (lean_obj_tag(v___x_4394_) == 0)
{
lean_object* v_a_4395_; lean_object* v___f_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; lean_object* v___x_4399_; lean_object* v_altNamesTypes_4400_; uint8_t v___x_4401_; lean_object* v___x_4402_; 
v_a_4395_ = lean_ctor_get(v___x_4394_, 0);
lean_inc(v_a_4395_);
lean_dec_ref_known(v___x_4394_, 1);
v___f_4396_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__9___boxed), 15, 7);
lean_closure_set(v___f_4396_, 0, v_toMatcherInfo_4362_);
lean_closure_set(v___f_4396_, 1, v_matcherName_4363_);
lean_closure_set(v___f_4396_, 2, v_matcherLevels_4381_);
lean_closure_set(v___f_4396_, 3, v_params_4364_);
lean_closure_set(v___f_4396_, 4, v_a_4379_);
lean_closure_set(v___f_4396_, 5, v_discrs_4369_);
lean_closure_set(v___f_4396_, 6, v_k_4366_);
v___x_4397_ = lean_array_get_size(v_a_4395_);
v___x_4398_ = lean_unsigned_to_nat(0u);
v___x_4399_ = lean_mk_empty_array_with_capacity(v___x_4397_);
v_altNamesTypes_4400_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg(v_a_4395_, v___x_4397_, v___x_4398_, v___x_4399_);
lean_dec(v_a_4395_);
v___x_4401_ = 0;
v___x_4402_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8(v_altNamesTypes_4400_, v___f_4396_, v___x_4401_, v___y_4382_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_, v___y_4387_);
return v___x_4402_;
}
else
{
lean_object* v_a_4403_; lean_object* v___x_4405_; uint8_t v_isShared_4406_; uint8_t v_isSharedCheck_4410_; 
lean_dec_ref(v_matcherLevels_4381_);
lean_dec(v_a_4379_);
lean_dec_ref(v_discrs_4369_);
lean_dec_ref(v_k_4366_);
lean_dec_ref(v_params_4364_);
lean_dec(v_matcherName_4363_);
lean_dec_ref(v_toMatcherInfo_4362_);
v_a_4403_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4410_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4410_ == 0)
{
v___x_4405_ = v___x_4394_;
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
else
{
lean_inc(v_a_4403_);
lean_dec(v___x_4394_);
v___x_4405_ = lean_box(0);
v_isShared_4406_ = v_isSharedCheck_4410_;
goto v_resetjp_4404_;
}
v_resetjp_4404_:
{
lean_object* v___x_4408_; 
if (v_isShared_4406_ == 0)
{
v___x_4408_ = v___x_4405_;
goto v_reusejp_4407_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v_a_4403_);
v___x_4408_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4407_;
}
v_reusejp_4407_:
{
return v___x_4408_;
}
}
}
}
}
else
{
lean_dec_ref(v_discrs_4369_);
lean_dec_ref(v_resTy_4368_);
lean_dec_ref(v_matcherLevels_4367_);
lean_dec_ref(v_k_4366_);
lean_dec_ref(v_params_4364_);
lean_dec(v_matcherName_4363_);
lean_dec_ref(v_toMatcherInfo_4362_);
return v___x_4378_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__10___boxed(lean_object** _args){
lean_object* v_motive_4424_ = _args[0];
lean_object* v___f_4425_ = _args[1];
lean_object* v_toMatcherInfo_4426_ = _args[2];
lean_object* v_matcherName_4427_ = _args[3];
lean_object* v_params_4428_ = _args[4];
lean_object* v_alts_4429_ = _args[5];
lean_object* v_k_4430_ = _args[6];
lean_object* v_matcherLevels_4431_ = _args[7];
lean_object* v_resTy_4432_ = _args[8];
lean_object* v_discrs_4433_ = _args[9];
lean_object* v___y_4434_ = _args[10];
lean_object* v___y_4435_ = _args[11];
lean_object* v___y_4436_ = _args[12];
lean_object* v___y_4437_ = _args[13];
lean_object* v___y_4438_ = _args[14];
lean_object* v___y_4439_ = _args[15];
lean_object* v___y_4440_ = _args[16];
_start:
{
lean_object* v_res_4441_; 
v_res_4441_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__10(v_motive_4424_, v___f_4425_, v_toMatcherInfo_4426_, v_matcherName_4427_, v_params_4428_, v_alts_4429_, v_k_4430_, v_matcherLevels_4431_, v_resTy_4432_, v_discrs_4433_, v___y_4434_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_, v___y_4439_);
lean_dec(v___y_4439_);
lean_dec_ref(v___y_4438_);
lean_dec(v___y_4437_);
lean_dec_ref(v___y_4436_);
lean_dec(v___y_4435_);
lean_dec_ref(v___y_4434_);
lean_dec_ref(v_alts_4429_);
return v_res_4441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__8(lean_object* v_resTy_4442_, lean_object* v_motiveArgs_4443_, lean_object* v_x_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_){
_start:
{
uint8_t v___x_4450_; uint8_t v___x_4451_; uint8_t v___x_4452_; lean_object* v___x_4453_; 
v___x_4450_ = 0;
v___x_4451_ = 1;
v___x_4452_ = 1;
v___x_4453_ = l_Lean_Meta_mkLambdaFVars(v_motiveArgs_4443_, v_resTy_4442_, v___x_4450_, v___x_4451_, v___x_4450_, v___x_4451_, v___x_4452_, v___y_4445_, v___y_4446_, v___y_4447_, v___y_4448_);
return v___x_4453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__8___boxed(lean_object* v_resTy_4454_, lean_object* v_motiveArgs_4455_, lean_object* v_x_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_){
_start:
{
lean_object* v_res_4462_; 
v_res_4462_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__8(v_resTy_4454_, v_motiveArgs_4455_, v_x_4456_, v___y_4457_, v___y_4458_, v___y_4459_, v___y_4460_);
lean_dec(v___y_4460_);
lean_dec_ref(v___y_4459_);
lean_dec(v___y_4458_);
lean_dec_ref(v___y_4457_);
lean_dec_ref(v_x_4456_);
lean_dec_ref(v_motiveArgs_4455_);
return v_res_4462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__4(lean_object* v_resTy_4463_, lean_object* v___x_4464_, lean_object* v_c_4465_, lean_object* v_dec_4466_, lean_object* v_t_4467_, lean_object* v_k_4468_, lean_object* v_e_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_, lean_object* v___y_4475_){
_start:
{
lean_object* v___x_4477_; 
lean_inc_ref(v_resTy_4463_);
v___x_4477_ = l_Lean_Meta_getLevel(v_resTy_4463_, v___y_4472_, v___y_4473_, v___y_4474_, v___y_4475_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
lean_inc(v_a_4478_);
lean_dec_ref_known(v___x_4477_, 1);
v___x_4479_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__4));
v___x_4480_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4480_, 0, v_a_4478_);
lean_ctor_set(v___x_4480_, 1, v___x_4464_);
v___x_4481_ = l_Lean_mkConst(v___x_4479_, v___x_4480_);
lean_inc_ref(v_e_4469_);
lean_inc_ref(v_t_4467_);
lean_inc_ref(v_dec_4466_);
lean_inc_ref(v_c_4465_);
v___x_4482_ = l_Lean_mkApp5(v___x_4481_, v_resTy_4463_, v_c_4465_, v_dec_4466_, v_t_4467_, v_e_4469_);
v___x_4483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4483_, 0, v___x_4482_);
v___x_4484_ = lean_unsigned_to_nat(4u);
v___x_4485_ = lean_mk_empty_array_with_capacity(v___x_4484_);
v___x_4486_ = lean_array_push(v___x_4485_, v_c_4465_);
v___x_4487_ = lean_array_push(v___x_4486_, v_dec_4466_);
v___x_4488_ = lean_array_push(v___x_4487_, v_t_4467_);
v___x_4489_ = lean_array_push(v___x_4488_, v_e_4469_);
lean_inc(v___y_4475_);
lean_inc_ref(v___y_4474_);
lean_inc(v___y_4473_);
lean_inc_ref(v___y_4472_);
lean_inc(v___y_4471_);
lean_inc_ref(v___y_4470_);
v___x_4490_ = lean_apply_9(v_k_4468_, v___x_4483_, v___x_4489_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_, v___y_4474_, v___y_4475_, lean_box(0));
return v___x_4490_;
}
else
{
lean_object* v_a_4491_; lean_object* v___x_4493_; uint8_t v_isShared_4494_; uint8_t v_isSharedCheck_4498_; 
lean_dec_ref(v_e_4469_);
lean_dec_ref(v_k_4468_);
lean_dec_ref(v_t_4467_);
lean_dec_ref(v_dec_4466_);
lean_dec_ref(v_c_4465_);
lean_dec(v___x_4464_);
lean_dec_ref(v_resTy_4463_);
v_a_4491_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4498_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4498_ == 0)
{
v___x_4493_ = v___x_4477_;
v_isShared_4494_ = v_isSharedCheck_4498_;
goto v_resetjp_4492_;
}
else
{
lean_inc(v_a_4491_);
lean_dec(v___x_4477_);
v___x_4493_ = lean_box(0);
v_isShared_4494_ = v_isSharedCheck_4498_;
goto v_resetjp_4492_;
}
v_resetjp_4492_:
{
lean_object* v___x_4496_; 
if (v_isShared_4494_ == 0)
{
v___x_4496_ = v___x_4493_;
goto v_reusejp_4495_;
}
else
{
lean_object* v_reuseFailAlloc_4497_; 
v_reuseFailAlloc_4497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4497_, 0, v_a_4491_);
v___x_4496_ = v_reuseFailAlloc_4497_;
goto v_reusejp_4495_;
}
v_reusejp_4495_:
{
return v___x_4496_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__4___boxed(lean_object* v_resTy_4499_, lean_object* v___x_4500_, lean_object* v_c_4501_, lean_object* v_dec_4502_, lean_object* v_t_4503_, lean_object* v_k_4504_, lean_object* v_e_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_, lean_object* v___y_4510_, lean_object* v___y_4511_, lean_object* v___y_4512_){
_start:
{
lean_object* v_res_4513_; 
v_res_4513_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__4(v_resTy_4499_, v___x_4500_, v_c_4501_, v_dec_4502_, v_t_4503_, v_k_4504_, v_e_4505_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_, v___y_4510_, v___y_4511_);
lean_dec(v___y_4511_);
lean_dec_ref(v___y_4510_);
lean_dec(v___y_4509_);
lean_dec_ref(v___y_4508_);
lean_dec(v___y_4507_);
lean_dec_ref(v___y_4506_);
return v_res_4513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5(lean_object* v_resTy_4517_, lean_object* v___x_4518_, lean_object* v_c_4519_, lean_object* v_dec_4520_, lean_object* v_k_4521_, lean_object* v_a_4522_, lean_object* v_t_4523_, lean_object* v___y_4524_, lean_object* v___y_4525_, lean_object* v___y_4526_, lean_object* v___y_4527_, lean_object* v___y_4528_, lean_object* v___y_4529_){
_start:
{
lean_object* v___f_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; 
v___f_4531_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__4___boxed), 14, 6);
lean_closure_set(v___f_4531_, 0, v_resTy_4517_);
lean_closure_set(v___f_4531_, 1, v___x_4518_);
lean_closure_set(v___f_4531_, 2, v_c_4519_);
lean_closure_set(v___f_4531_, 3, v_dec_4520_);
lean_closure_set(v___f_4531_, 4, v_t_4523_);
lean_closure_set(v___f_4531_, 5, v_k_4521_);
v___x_4532_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___closed__1));
v___x_4533_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4532_, v_a_4522_, v___f_4531_, v___y_4524_, v___y_4525_, v___y_4526_, v___y_4527_, v___y_4528_, v___y_4529_);
return v___x_4533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___boxed(lean_object* v_resTy_4534_, lean_object* v___x_4535_, lean_object* v_c_4536_, lean_object* v_dec_4537_, lean_object* v_k_4538_, lean_object* v_a_4539_, lean_object* v_t_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_, lean_object* v___y_4547_){
_start:
{
lean_object* v_res_4548_; 
v_res_4548_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5(v_resTy_4534_, v___x_4535_, v_c_4536_, v_dec_4537_, v_k_4538_, v_a_4539_, v_t_4540_, v___y_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
lean_dec(v___y_4546_);
lean_dec_ref(v___y_4545_);
lean_dec(v___y_4544_);
lean_dec_ref(v___y_4543_);
lean_dec(v___y_4542_);
lean_dec_ref(v___y_4541_);
return v_res_4548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6(lean_object* v_c_4552_, lean_object* v_resTy_4553_, lean_object* v___x_4554_, lean_object* v_k_4555_, lean_object* v_dec_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_){
_start:
{
lean_object* v___x_4564_; 
lean_inc_ref(v_resTy_4553_);
lean_inc_ref(v_c_4552_);
v___x_4564_ = l_Lean_mkArrow(v_c_4552_, v_resTy_4553_, v___y_4561_, v___y_4562_);
if (lean_obj_tag(v___x_4564_) == 0)
{
lean_object* v_a_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; 
v_a_4565_ = lean_ctor_get(v___x_4564_, 0);
lean_inc(v_a_4565_);
lean_dec_ref_known(v___x_4564_, 1);
lean_inc_ref(v_c_4552_);
v___x_4566_ = l_Lean_mkNot(v_c_4552_);
lean_inc_ref(v_resTy_4553_);
v___x_4567_ = l_Lean_mkArrow(v___x_4566_, v_resTy_4553_, v___y_4561_, v___y_4562_);
if (lean_obj_tag(v___x_4567_) == 0)
{
lean_object* v_a_4568_; lean_object* v___f_4569_; lean_object* v___x_4570_; lean_object* v___x_4571_; 
v_a_4568_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4568_);
lean_dec_ref_known(v___x_4567_, 1);
v___f_4569_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___boxed), 14, 6);
lean_closure_set(v___f_4569_, 0, v_resTy_4553_);
lean_closure_set(v___f_4569_, 1, v___x_4554_);
lean_closure_set(v___f_4569_, 2, v_c_4552_);
lean_closure_set(v___f_4569_, 3, v_dec_4556_);
lean_closure_set(v___f_4569_, 4, v_k_4555_);
lean_closure_set(v___f_4569_, 5, v_a_4568_);
v___x_4570_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___closed__1));
v___x_4571_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4570_, v_a_4565_, v___f_4569_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_);
return v___x_4571_;
}
else
{
lean_dec(v_a_4565_);
lean_dec_ref(v_dec_4556_);
lean_dec_ref(v_k_4555_);
lean_dec(v___x_4554_);
lean_dec_ref(v_resTy_4553_);
lean_dec_ref(v_c_4552_);
return v___x_4567_;
}
}
else
{
lean_dec_ref(v_dec_4556_);
lean_dec_ref(v_k_4555_);
lean_dec(v___x_4554_);
lean_dec_ref(v_resTy_4553_);
lean_dec_ref(v_c_4552_);
return v___x_4564_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___boxed(lean_object* v_c_4572_, lean_object* v_resTy_4573_, lean_object* v___x_4574_, lean_object* v_k_4575_, lean_object* v_dec_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_, lean_object* v___y_4581_, lean_object* v___y_4582_, lean_object* v___y_4583_){
_start:
{
lean_object* v_res_4584_; 
v_res_4584_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6(v_c_4572_, v_resTy_4573_, v___x_4574_, v_k_4575_, v_dec_4576_, v___y_4577_, v___y_4578_, v___y_4579_, v___y_4580_, v___y_4581_, v___y_4582_);
lean_dec(v___y_4582_);
lean_dec_ref(v___y_4581_);
lean_dec(v___y_4580_);
lean_dec_ref(v___y_4579_);
lean_dec(v___y_4578_);
lean_dec_ref(v___y_4577_);
return v_res_4584_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__4(void){
_start:
{
lean_object* v___x_4591_; lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___x_4591_ = lean_box(0);
v___x_4592_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__3));
v___x_4593_ = l_Lean_mkConst(v___x_4592_, v___x_4591_);
return v___x_4593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7(lean_object* v_resTy_4594_, lean_object* v_k_4595_, lean_object* v_c_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_){
_start:
{
lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___f_4606_; lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; 
v___x_4604_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__1));
v___x_4605_ = lean_box(0);
lean_inc_ref(v_c_4596_);
v___f_4606_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___boxed), 12, 4);
lean_closure_set(v___f_4606_, 0, v_c_4596_);
lean_closure_set(v___f_4606_, 1, v_resTy_4594_);
lean_closure_set(v___f_4606_, 2, v___x_4605_);
lean_closure_set(v___f_4606_, 3, v_k_4595_);
v___x_4607_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__4);
v___x_4608_ = l_Lean_Expr_app___override(v___x_4607_, v_c_4596_);
v___x_4609_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4604_, v___x_4608_, v___f_4606_, v___y_4597_, v___y_4598_, v___y_4599_, v___y_4600_, v___y_4601_, v___y_4602_);
return v___x_4609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___boxed(lean_object* v_resTy_4610_, lean_object* v_k_4611_, lean_object* v_c_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_){
_start:
{
lean_object* v_res_4620_; 
v_res_4620_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7(v_resTy_4610_, v_k_4611_, v_c_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_, v___y_4618_);
lean_dec(v___y_4618_);
lean_dec_ref(v___y_4617_);
lean_dec(v___y_4616_);
lean_dec_ref(v___y_4615_);
lean_dec(v___y_4614_);
lean_dec_ref(v___y_4613_);
return v_res_4620_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg(lean_object* v_as_4624_, lean_object* v_i_4625_, lean_object* v_j_4626_, lean_object* v_bs_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_){
_start:
{
lean_object* v_zero_4633_; uint8_t v_isZero_4634_; 
v_zero_4633_ = lean_unsigned_to_nat(0u);
v_isZero_4634_ = lean_nat_dec_eq(v_i_4625_, v_zero_4633_);
if (v_isZero_4634_ == 1)
{
lean_object* v___x_4635_; 
lean_dec(v_j_4626_);
lean_dec(v_i_4625_);
v___x_4635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4635_, 0, v_bs_4627_);
return v___x_4635_;
}
else
{
lean_object* v___x_4636_; lean_object* v___x_4637_; 
v___x_4636_ = lean_array_fget_borrowed(v_as_4624_, v_j_4626_);
lean_inc(v___y_4631_);
lean_inc_ref(v___y_4630_);
lean_inc(v___y_4629_);
lean_inc_ref(v___y_4628_);
lean_inc(v___x_4636_);
v___x_4637_ = lean_infer_type(v___x_4636_, v___y_4628_, v___y_4629_, v___y_4630_, v___y_4631_);
if (lean_obj_tag(v___x_4637_) == 0)
{
lean_object* v_a_4638_; lean_object* v_one_4639_; lean_object* v_n_4640_; lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; lean_object* v___x_4644_; lean_object* v___x_4645_; 
v_a_4638_ = lean_ctor_get(v___x_4637_, 0);
lean_inc(v_a_4638_);
lean_dec_ref_known(v___x_4637_, 1);
v_one_4639_ = lean_unsigned_to_nat(1u);
v_n_4640_ = lean_nat_sub(v_i_4625_, v_one_4639_);
lean_dec(v_i_4625_);
v___x_4641_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg___closed__1));
v___x_4642_ = lean_nat_add(v_j_4626_, v_one_4639_);
lean_dec(v_j_4626_);
lean_inc(v___x_4642_);
v___x_4643_ = lean_name_append_index_after(v___x_4641_, v___x_4642_);
v___x_4644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4644_, 0, v___x_4643_);
lean_ctor_set(v___x_4644_, 1, v_a_4638_);
v___x_4645_ = lean_array_push(v_bs_4627_, v___x_4644_);
v_i_4625_ = v_n_4640_;
v_j_4626_ = v___x_4642_;
v_bs_4627_ = v___x_4645_;
goto _start;
}
else
{
lean_object* v_a_4647_; lean_object* v___x_4649_; uint8_t v_isShared_4650_; uint8_t v_isSharedCheck_4654_; 
lean_dec_ref(v_bs_4627_);
lean_dec(v_j_4626_);
lean_dec(v_i_4625_);
v_a_4647_ = lean_ctor_get(v___x_4637_, 0);
v_isSharedCheck_4654_ = !lean_is_exclusive(v___x_4637_);
if (v_isSharedCheck_4654_ == 0)
{
v___x_4649_ = v___x_4637_;
v_isShared_4650_ = v_isSharedCheck_4654_;
goto v_resetjp_4648_;
}
else
{
lean_inc(v_a_4647_);
lean_dec(v___x_4637_);
v___x_4649_ = lean_box(0);
v_isShared_4650_ = v_isSharedCheck_4654_;
goto v_resetjp_4648_;
}
v_resetjp_4648_:
{
lean_object* v___x_4652_; 
if (v_isShared_4650_ == 0)
{
v___x_4652_ = v___x_4649_;
goto v_reusejp_4651_;
}
else
{
lean_object* v_reuseFailAlloc_4653_; 
v_reuseFailAlloc_4653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4653_, 0, v_a_4647_);
v___x_4652_ = v_reuseFailAlloc_4653_;
goto v_reusejp_4651_;
}
v_reusejp_4651_:
{
return v___x_4652_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg___boxed(lean_object* v_as_4655_, lean_object* v_i_4656_, lean_object* v_j_4657_, lean_object* v_bs_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_, lean_object* v___y_4662_, lean_object* v___y_4663_){
_start:
{
lean_object* v_res_4664_; 
v_res_4664_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg(v_as_4655_, v_i_4656_, v_j_4657_, v_bs_4658_, v___y_4659_, v___y_4660_, v___y_4661_, v___y_4662_);
lean_dec(v___y_4662_);
lean_dec_ref(v___y_4661_);
lean_dec(v___y_4660_);
lean_dec_ref(v___y_4659_);
lean_dec_ref(v_as_4655_);
return v_res_4664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__0(lean_object* v_resTy_4665_, lean_object* v___x_4666_, lean_object* v_c_4667_, lean_object* v_dec_4668_, lean_object* v_t_4669_, lean_object* v_k_4670_, lean_object* v_e_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_){
_start:
{
lean_object* v___x_4679_; 
lean_inc_ref(v_resTy_4665_);
v___x_4679_ = l_Lean_Meta_getLevel(v_resTy_4665_, v___y_4674_, v___y_4675_, v___y_4676_, v___y_4677_);
if (lean_obj_tag(v___x_4679_) == 0)
{
lean_object* v_a_4680_; lean_object* v___x_4681_; lean_object* v___x_4682_; lean_object* v___x_4683_; lean_object* v___x_4684_; lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; 
v_a_4680_ = lean_ctor_get(v___x_4679_, 0);
lean_inc(v_a_4680_);
lean_dec_ref_known(v___x_4679_, 1);
v___x_4681_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5___closed__2));
v___x_4682_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4682_, 0, v_a_4680_);
lean_ctor_set(v___x_4682_, 1, v___x_4666_);
v___x_4683_ = l_Lean_mkConst(v___x_4681_, v___x_4682_);
lean_inc_ref(v_e_4671_);
lean_inc_ref(v_t_4669_);
lean_inc_ref(v_dec_4668_);
lean_inc_ref(v_c_4667_);
v___x_4684_ = l_Lean_mkApp5(v___x_4683_, v_resTy_4665_, v_c_4667_, v_dec_4668_, v_t_4669_, v_e_4671_);
v___x_4685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4685_, 0, v___x_4684_);
v___x_4686_ = lean_unsigned_to_nat(4u);
v___x_4687_ = lean_mk_empty_array_with_capacity(v___x_4686_);
v___x_4688_ = lean_array_push(v___x_4687_, v_c_4667_);
v___x_4689_ = lean_array_push(v___x_4688_, v_dec_4668_);
v___x_4690_ = lean_array_push(v___x_4689_, v_t_4669_);
v___x_4691_ = lean_array_push(v___x_4690_, v_e_4671_);
lean_inc(v___y_4677_);
lean_inc_ref(v___y_4676_);
lean_inc(v___y_4675_);
lean_inc_ref(v___y_4674_);
lean_inc(v___y_4673_);
lean_inc_ref(v___y_4672_);
v___x_4692_ = lean_apply_9(v_k_4670_, v___x_4685_, v___x_4691_, v___y_4672_, v___y_4673_, v___y_4674_, v___y_4675_, v___y_4676_, v___y_4677_, lean_box(0));
return v___x_4692_;
}
else
{
lean_object* v_a_4693_; lean_object* v___x_4695_; uint8_t v_isShared_4696_; uint8_t v_isSharedCheck_4700_; 
lean_dec_ref(v_e_4671_);
lean_dec_ref(v_k_4670_);
lean_dec_ref(v_t_4669_);
lean_dec_ref(v_dec_4668_);
lean_dec_ref(v_c_4667_);
lean_dec(v___x_4666_);
lean_dec_ref(v_resTy_4665_);
v_a_4693_ = lean_ctor_get(v___x_4679_, 0);
v_isSharedCheck_4700_ = !lean_is_exclusive(v___x_4679_);
if (v_isSharedCheck_4700_ == 0)
{
v___x_4695_ = v___x_4679_;
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
else
{
lean_inc(v_a_4693_);
lean_dec(v___x_4679_);
v___x_4695_ = lean_box(0);
v_isShared_4696_ = v_isSharedCheck_4700_;
goto v_resetjp_4694_;
}
v_resetjp_4694_:
{
lean_object* v___x_4698_; 
if (v_isShared_4696_ == 0)
{
v___x_4698_ = v___x_4695_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4699_; 
v_reuseFailAlloc_4699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4699_, 0, v_a_4693_);
v___x_4698_ = v_reuseFailAlloc_4699_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
return v___x_4698_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__0___boxed(lean_object* v_resTy_4701_, lean_object* v___x_4702_, lean_object* v_c_4703_, lean_object* v_dec_4704_, lean_object* v_t_4705_, lean_object* v_k_4706_, lean_object* v_e_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_){
_start:
{
lean_object* v_res_4715_; 
v_res_4715_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__0(v_resTy_4701_, v___x_4702_, v_c_4703_, v_dec_4704_, v_t_4705_, v_k_4706_, v_e_4707_, v___y_4708_, v___y_4709_, v___y_4710_, v___y_4711_, v___y_4712_, v___y_4713_);
lean_dec(v___y_4713_);
lean_dec_ref(v___y_4712_);
lean_dec(v___y_4711_);
lean_dec_ref(v___y_4710_);
lean_dec(v___y_4709_);
lean_dec_ref(v___y_4708_);
return v_res_4715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__1(lean_object* v_resTy_4716_, lean_object* v___x_4717_, lean_object* v_c_4718_, lean_object* v_dec_4719_, lean_object* v_k_4720_, lean_object* v_t_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_){
_start:
{
lean_object* v___f_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; 
lean_inc_ref(v_resTy_4716_);
v___f_4729_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__0___boxed), 14, 6);
lean_closure_set(v___f_4729_, 0, v_resTy_4716_);
lean_closure_set(v___f_4729_, 1, v___x_4717_);
lean_closure_set(v___f_4729_, 2, v_c_4718_);
lean_closure_set(v___f_4729_, 3, v_dec_4719_);
lean_closure_set(v___f_4729_, 4, v_t_4721_);
lean_closure_set(v___f_4729_, 5, v_k_4720_);
v___x_4730_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__5___closed__1));
v___x_4731_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4730_, v_resTy_4716_, v___f_4729_, v___y_4722_, v___y_4723_, v___y_4724_, v___y_4725_, v___y_4726_, v___y_4727_);
return v___x_4731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__1___boxed(lean_object* v_resTy_4732_, lean_object* v___x_4733_, lean_object* v_c_4734_, lean_object* v_dec_4735_, lean_object* v_k_4736_, lean_object* v_t_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_){
_start:
{
lean_object* v_res_4745_; 
v_res_4745_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__1(v_resTy_4732_, v___x_4733_, v_c_4734_, v_dec_4735_, v_k_4736_, v_t_4737_, v___y_4738_, v___y_4739_, v___y_4740_, v___y_4741_, v___y_4742_, v___y_4743_);
lean_dec(v___y_4743_);
lean_dec_ref(v___y_4742_);
lean_dec(v___y_4741_);
lean_dec_ref(v___y_4740_);
lean_dec(v___y_4739_);
lean_dec_ref(v___y_4738_);
return v_res_4745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__2(lean_object* v_resTy_4746_, lean_object* v___x_4747_, lean_object* v_c_4748_, lean_object* v_k_4749_, lean_object* v_dec_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_){
_start:
{
lean_object* v___f_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; 
lean_inc_ref(v_resTy_4746_);
v___f_4758_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__1___boxed), 13, 5);
lean_closure_set(v___f_4758_, 0, v_resTy_4746_);
lean_closure_set(v___f_4758_, 1, v___x_4747_);
lean_closure_set(v___f_4758_, 2, v_c_4748_);
lean_closure_set(v___f_4758_, 3, v_dec_4750_);
lean_closure_set(v___f_4758_, 4, v_k_4749_);
v___x_4759_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__6___closed__1));
v___x_4760_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4759_, v_resTy_4746_, v___f_4758_, v___y_4751_, v___y_4752_, v___y_4753_, v___y_4754_, v___y_4755_, v___y_4756_);
return v___x_4760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__2___boxed(lean_object* v_resTy_4761_, lean_object* v___x_4762_, lean_object* v_c_4763_, lean_object* v_k_4764_, lean_object* v_dec_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__2(v_resTy_4761_, v___x_4762_, v_c_4763_, v_k_4764_, v_dec_4765_, v___y_4766_, v___y_4767_, v___y_4768_, v___y_4769_, v___y_4770_, v___y_4771_);
lean_dec(v___y_4771_);
lean_dec_ref(v___y_4770_);
lean_dec(v___y_4769_);
lean_dec_ref(v___y_4768_);
lean_dec(v___y_4767_);
lean_dec_ref(v___y_4766_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__3(lean_object* v_resTy_4774_, lean_object* v_k_4775_, lean_object* v_c_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_, lean_object* v___y_4782_){
_start:
{
lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___f_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; 
v___x_4784_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__1));
v___x_4785_ = lean_box(0);
lean_inc_ref(v_c_4776_);
v___f_4786_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__2___boxed), 12, 4);
lean_closure_set(v___f_4786_, 0, v_resTy_4774_);
lean_closure_set(v___f_4786_, 1, v___x_4785_);
lean_closure_set(v___f_4786_, 2, v_c_4776_);
lean_closure_set(v___f_4786_, 3, v_k_4775_);
v___x_4787_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__4, &l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__4_once, _init_l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___closed__4);
v___x_4788_ = l_Lean_Expr_app___override(v___x_4787_, v_c_4776_);
v___x_4789_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4784_, v___x_4788_, v___f_4786_, v___y_4777_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_, v___y_4782_);
return v___x_4789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__3___boxed(lean_object* v_resTy_4790_, lean_object* v_k_4791_, lean_object* v_c_4792_, lean_object* v___y_4793_, lean_object* v___y_4794_, lean_object* v___y_4795_, lean_object* v___y_4796_, lean_object* v___y_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_){
_start:
{
lean_object* v_res_4800_; 
v_res_4800_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__3(v_resTy_4790_, v_k_4791_, v_c_4792_, v___y_4793_, v___y_4794_, v___y_4795_, v___y_4796_, v___y_4797_, v___y_4798_);
lean_dec(v___y_4798_);
lean_dec_ref(v___y_4797_);
lean_dec(v___y_4796_);
lean_dec_ref(v___y_4795_);
lean_dec(v___y_4794_);
lean_dec_ref(v___y_4793_);
return v_res_4800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12(lean_object* v_info_4804_, lean_object* v_resTy_4805_, lean_object* v_k_4806_, lean_object* v___y_4807_, lean_object* v___y_4808_, lean_object* v___y_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_){
_start:
{
switch(lean_obj_tag(v_info_4804_))
{
case 0:
{
lean_object* v___f_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; 
lean_dec_ref_known(v_info_4804_, 1);
v___f_4814_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__3___boxed), 10, 2);
lean_closure_set(v___f_4814_, 0, v_resTy_4805_);
lean_closure_set(v___f_4814_, 1, v_k_4806_);
v___x_4815_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___closed__1));
v___x_4816_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1);
v___x_4817_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4815_, v___x_4816_, v___f_4814_, v___y_4807_, v___y_4808_, v___y_4809_, v___y_4810_, v___y_4811_, v___y_4812_);
return v___x_4817_;
}
case 1:
{
lean_object* v___f_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; 
lean_dec_ref_known(v_info_4804_, 1);
v___f_4818_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__7___boxed), 10, 2);
lean_closure_set(v___f_4818_, 0, v_resTy_4805_);
lean_closure_set(v___f_4818_, 1, v_k_4806_);
v___x_4819_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___closed__1));
v___x_4820_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg___closed__1);
v___x_4821_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4819_, v___x_4820_, v___f_4818_, v___y_4807_, v___y_4808_, v___y_4809_, v___y_4810_, v___y_4811_, v___y_4812_);
return v___x_4821_;
}
default: 
{
lean_object* v_matcherApp_4822_; lean_object* v_toMatcherInfo_4823_; lean_object* v_matcherName_4824_; lean_object* v_matcherLevels_4825_; lean_object* v_params_4826_; lean_object* v_motive_4827_; lean_object* v_discrs_4828_; lean_object* v_alts_4829_; lean_object* v___x_4830_; lean_object* v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; 
v_matcherApp_4822_ = lean_ctor_get(v_info_4804_, 0);
lean_inc_ref(v_matcherApp_4822_);
lean_dec_ref_known(v_info_4804_, 1);
v_toMatcherInfo_4823_ = lean_ctor_get(v_matcherApp_4822_, 0);
lean_inc_ref(v_toMatcherInfo_4823_);
v_matcherName_4824_ = lean_ctor_get(v_matcherApp_4822_, 1);
lean_inc(v_matcherName_4824_);
v_matcherLevels_4825_ = lean_ctor_get(v_matcherApp_4822_, 2);
lean_inc_ref(v_matcherLevels_4825_);
v_params_4826_ = lean_ctor_get(v_matcherApp_4822_, 3);
lean_inc_ref(v_params_4826_);
v_motive_4827_ = lean_ctor_get(v_matcherApp_4822_, 4);
lean_inc_ref(v_motive_4827_);
v_discrs_4828_ = lean_ctor_get(v_matcherApp_4822_, 5);
lean_inc_ref(v_discrs_4828_);
v_alts_4829_ = lean_ctor_get(v_matcherApp_4822_, 6);
lean_inc_ref(v_alts_4829_);
lean_dec_ref(v_matcherApp_4822_);
v___x_4830_ = lean_array_get_size(v_discrs_4828_);
v___x_4831_ = lean_unsigned_to_nat(0u);
v___x_4832_ = lean_mk_empty_array_with_capacity(v___x_4830_);
v___x_4833_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg(v_discrs_4828_, v___x_4830_, v___x_4831_, v___x_4832_, v___y_4809_, v___y_4810_, v___y_4811_, v___y_4812_);
lean_dec_ref(v_discrs_4828_);
if (lean_obj_tag(v___x_4833_) == 0)
{
lean_object* v_a_4834_; lean_object* v___f_4835_; lean_object* v___f_4836_; uint8_t v___x_4837_; lean_object* v___x_4838_; 
v_a_4834_ = lean_ctor_get(v___x_4833_, 0);
lean_inc(v_a_4834_);
lean_dec_ref_known(v___x_4833_, 1);
lean_inc_ref(v_resTy_4805_);
v___f_4835_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__8___boxed), 8, 1);
lean_closure_set(v___f_4835_, 0, v_resTy_4805_);
v___f_4836_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___lam__10___boxed), 17, 9);
lean_closure_set(v___f_4836_, 0, v_motive_4827_);
lean_closure_set(v___f_4836_, 1, v___f_4835_);
lean_closure_set(v___f_4836_, 2, v_toMatcherInfo_4823_);
lean_closure_set(v___f_4836_, 3, v_matcherName_4824_);
lean_closure_set(v___f_4836_, 4, v_params_4826_);
lean_closure_set(v___f_4836_, 5, v_alts_4829_);
lean_closure_set(v___f_4836_, 6, v_k_4806_);
lean_closure_set(v___f_4836_, 7, v_matcherLevels_4825_);
lean_closure_set(v___f_4836_, 8, v_resTy_4805_);
v___x_4837_ = 0;
v___x_4838_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__8(v_a_4834_, v___f_4836_, v___x_4837_, v___y_4807_, v___y_4808_, v___y_4809_, v___y_4810_, v___y_4811_, v___y_4812_);
return v___x_4838_;
}
else
{
lean_object* v_a_4839_; lean_object* v___x_4841_; uint8_t v_isShared_4842_; uint8_t v_isSharedCheck_4846_; 
lean_dec_ref(v_alts_4829_);
lean_dec_ref(v_motive_4827_);
lean_dec_ref(v_params_4826_);
lean_dec_ref(v_matcherLevels_4825_);
lean_dec(v_matcherName_4824_);
lean_dec_ref(v_toMatcherInfo_4823_);
lean_dec_ref(v_k_4806_);
lean_dec_ref(v_resTy_4805_);
v_a_4839_ = lean_ctor_get(v___x_4833_, 0);
v_isSharedCheck_4846_ = !lean_is_exclusive(v___x_4833_);
if (v_isSharedCheck_4846_ == 0)
{
v___x_4841_ = v___x_4833_;
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
else
{
lean_inc(v_a_4839_);
lean_dec(v___x_4833_);
v___x_4841_ = lean_box(0);
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
v_resetjp_4840_:
{
lean_object* v___x_4844_; 
if (v_isShared_4842_ == 0)
{
v___x_4844_ = v___x_4841_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v_a_4839_);
v___x_4844_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
return v___x_4844_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12___boxed(lean_object* v_info_4847_, lean_object* v_resTy_4848_, lean_object* v_k_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_, lean_object* v___y_4855_, lean_object* v___y_4856_){
_start:
{
lean_object* v_res_4857_; 
v_res_4857_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12(v_info_4847_, v_resTy_4848_, v_k_4849_, v___y_4850_, v___y_4851_, v___y_4852_, v___y_4853_, v___y_4854_, v___y_4855_);
lean_dec(v___y_4855_);
lean_dec_ref(v___y_4854_);
lean_dec(v___y_4853_);
lean_dec_ref(v___y_4852_);
lean_dec(v___y_4851_);
lean_dec_ref(v___y_4850_);
return v_res_4857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__10(lean_object* v_m_4858_, lean_object* v_info_4859_, lean_object* v_splitInfo_4860_, lean_object* v___x_4861_, uint8_t v___x_4862_, lean_object* v_a_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_){
_start:
{
lean_object* v___x_4871_; lean_object* v___x_4872_; 
lean_inc_ref(v_a_4863_);
v___x_4871_ = l_Lean_Expr_app___override(v_m_4858_, v_a_4863_);
v___x_4872_ = l_Lean_Meta_Sym_shareCommon___redArg(v___x_4871_, v___y_4865_);
if (lean_obj_tag(v___x_4872_) == 0)
{
lean_object* v_a_4873_; lean_object* v___x_4874_; lean_object* v___f_4875_; lean_object* v___x_4876_; 
v_a_4873_ = lean_ctor_get(v___x_4872_, 0);
lean_inc_n(v_a_4873_, 2);
lean_dec_ref_known(v___x_4872_, 1);
v___x_4874_ = lean_box(v___x_4862_);
lean_inc_ref(v_splitInfo_4860_);
v___f_4875_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__9___boxed), 15, 6);
lean_closure_set(v___f_4875_, 0, v_info_4859_);
lean_closure_set(v___f_4875_, 1, v_a_4863_);
lean_closure_set(v___f_4875_, 2, v_splitInfo_4860_);
lean_closure_set(v___f_4875_, 3, v___x_4861_);
lean_closure_set(v___f_4875_, 4, v___x_4874_);
lean_closure_set(v___f_4875_, 5, v_a_4873_);
v___x_4876_ = l_Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12(v_splitInfo_4860_, v_a_4873_, v___f_4875_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_, v___y_4868_, v___y_4869_);
return v___x_4876_;
}
else
{
lean_dec_ref(v_a_4863_);
lean_dec_ref(v___x_4861_);
lean_dec_ref(v_splitInfo_4860_);
lean_dec_ref(v_info_4859_);
return v___x_4872_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__10___boxed(lean_object* v_m_4877_, lean_object* v_info_4878_, lean_object* v_splitInfo_4879_, lean_object* v___x_4880_, lean_object* v___x_4881_, lean_object* v_a_4882_, lean_object* v___y_4883_, lean_object* v___y_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_){
_start:
{
uint8_t v___x_74624__boxed_4890_; lean_object* v_res_4891_; 
v___x_74624__boxed_4890_ = lean_unbox(v___x_4881_);
v_res_4891_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__10(v_m_4877_, v_info_4878_, v_splitInfo_4879_, v___x_4880_, v___x_74624__boxed_4890_, v_a_4882_, v___y_4883_, v___y_4884_, v___y_4885_, v___y_4886_, v___y_4887_, v___y_4888_);
lean_dec(v___y_4888_);
lean_dec_ref(v___y_4887_);
lean_dec(v___y_4886_);
lean_dec_ref(v___y_4885_);
lean_dec(v___y_4884_);
lean_dec_ref(v___y_4883_);
return v_res_4891_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13___redArg(lean_object* v_msg_4892_, lean_object* v___y_4893_, lean_object* v___y_4894_, lean_object* v___y_4895_, lean_object* v___y_4896_){
_start:
{
lean_object* v_ref_4898_; lean_object* v___x_4899_; lean_object* v_a_4900_; lean_object* v___x_4902_; uint8_t v_isShared_4903_; uint8_t v_isSharedCheck_4908_; 
v_ref_4898_ = lean_ctor_get(v___y_4895_, 5);
v___x_4899_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4_spec__5(v_msg_4892_, v___y_4893_, v___y_4894_, v___y_4895_, v___y_4896_);
v_a_4900_ = lean_ctor_get(v___x_4899_, 0);
v_isSharedCheck_4908_ = !lean_is_exclusive(v___x_4899_);
if (v_isSharedCheck_4908_ == 0)
{
v___x_4902_ = v___x_4899_;
v_isShared_4903_ = v_isSharedCheck_4908_;
goto v_resetjp_4901_;
}
else
{
lean_inc(v_a_4900_);
lean_dec(v___x_4899_);
v___x_4902_ = lean_box(0);
v_isShared_4903_ = v_isSharedCheck_4908_;
goto v_resetjp_4901_;
}
v_resetjp_4901_:
{
lean_object* v___x_4904_; lean_object* v___x_4906_; 
lean_inc(v_ref_4898_);
v___x_4904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4904_, 0, v_ref_4898_);
lean_ctor_set(v___x_4904_, 1, v_a_4900_);
if (v_isShared_4903_ == 0)
{
lean_ctor_set_tag(v___x_4902_, 1);
lean_ctor_set(v___x_4902_, 0, v___x_4904_);
v___x_4906_ = v___x_4902_;
goto v_reusejp_4905_;
}
else
{
lean_object* v_reuseFailAlloc_4907_; 
v_reuseFailAlloc_4907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4907_, 0, v___x_4904_);
v___x_4906_ = v_reuseFailAlloc_4907_;
goto v_reusejp_4905_;
}
v_reusejp_4905_:
{
return v___x_4906_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13___redArg___boxed(lean_object* v_msg_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_){
_start:
{
lean_object* v_res_4915_; 
v_res_4915_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13___redArg(v_msg_4909_, v___y_4910_, v___y_4911_, v___y_4912_, v___y_4913_);
lean_dec(v___y_4913_);
lean_dec_ref(v___y_4912_);
lean_dec(v___y_4911_);
lean_dec_ref(v___y_4910_);
return v_res_4915_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__1(void){
_start:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; 
v___x_4917_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__0));
v___x_4918_ = l_Lean_stringToMessageData(v___x_4917_);
return v___x_4918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit(lean_object* v_splitInfo_4922_, lean_object* v_info_4923_, lean_object* v_a_4924_, lean_object* v_a_4925_, lean_object* v_a_4926_, lean_object* v_a_4927_, lean_object* v_a_4928_, lean_object* v_a_4929_){
_start:
{
lean_object* v_m_4931_; lean_object* v___x_4932_; 
v_m_4931_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_WPInfo_m(v_info_4923_);
lean_inc_ref(v_m_4931_);
v___x_4932_ = l_Lean_Meta_Sym_inferType___redArg(v_m_4931_, v_a_4925_, v_a_4926_, v_a_4927_, v_a_4928_, v_a_4929_);
if (lean_obj_tag(v___x_4932_) == 0)
{
lean_object* v_a_4933_; uint8_t v___x_4934_; 
v_a_4933_ = lean_ctor_get(v___x_4932_, 0);
lean_inc(v_a_4933_);
lean_dec_ref_known(v___x_4932_, 1);
v___x_4934_ = l_Lean_Expr_isForall(v_a_4933_);
if (v___x_4934_ == 0)
{
lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; 
lean_dec(v_a_4933_);
lean_dec_ref(v_info_4923_);
lean_dec_ref(v_splitInfo_4922_);
v___x_4935_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__1);
v___x_4936_ = l_Lean_indentExpr(v_m_4931_);
v___x_4937_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4937_, 0, v___x_4935_);
lean_ctor_set(v___x_4937_, 1, v___x_4936_);
v___x_4938_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13___redArg(v___x_4937_, v_a_4926_, v_a_4927_, v_a_4928_, v_a_4929_);
return v___x_4938_;
}
else
{
lean_object* v___x_4939_; lean_object* v___x_4940_; lean_object* v___f_4941_; lean_object* v___x_4942_; lean_object* v___x_4943_; lean_object* v___x_4944_; 
v___x_4939_ = l_Lean_instInhabitedExpr;
v___x_4940_ = lean_box(v___x_4934_);
v___f_4941_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___lam__10___boxed), 13, 5);
lean_closure_set(v___f_4941_, 0, v_m_4931_);
lean_closure_set(v___f_4941_, 1, v_info_4923_);
lean_closure_set(v___f_4941_, 2, v_splitInfo_4922_);
lean_closure_set(v___f_4941_, 3, v___x_4939_);
lean_closure_set(v___f_4941_, 4, v___x_4940_);
v___x_4942_ = l_Lean_Expr_bindingDomain_x21(v_a_4933_);
lean_dec(v_a_4933_);
v___x_4943_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___closed__3));
v___x_4944_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v___x_4943_, v___x_4942_, v___f_4941_, v_a_4924_, v_a_4925_, v_a_4926_, v_a_4927_, v_a_4928_, v_a_4929_);
if (lean_obj_tag(v___x_4944_) == 0)
{
lean_object* v_a_4945_; lean_object* v___x_4946_; lean_object* v_a_4947_; lean_object* v___x_4948_; 
v_a_4945_ = lean_ctor_get(v___x_4944_, 0);
lean_inc(v_a_4945_);
lean_dec_ref_known(v___x_4944_, 1);
v___x_4946_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__14___redArg(v_a_4945_, v_a_4927_);
v_a_4947_ = lean_ctor_get(v___x_4946_, 0);
lean_inc(v_a_4947_);
lean_dec_ref(v___x_4946_);
v___x_4948_ = l_Lean_Meta_abstractMVars(v_a_4947_, v___x_4934_, v_a_4926_, v_a_4927_, v_a_4928_, v_a_4929_);
if (lean_obj_tag(v___x_4948_) == 0)
{
lean_object* v_a_4949_; lean_object* v_paramNames_4950_; lean_object* v_expr_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; 
v_a_4949_ = lean_ctor_get(v___x_4948_, 0);
lean_inc(v_a_4949_);
lean_dec_ref_known(v___x_4948_, 1);
v_paramNames_4950_ = lean_ctor_get(v_a_4949_, 0);
lean_inc_ref(v_paramNames_4950_);
v_expr_4951_ = lean_ctor_get(v_a_4949_, 2);
lean_inc_ref(v_expr_4951_);
lean_dec(v_a_4949_);
v___x_4952_ = lean_array_to_list(v_paramNames_4950_);
v___x_4953_ = lean_box(0);
v___x_4954_ = l_Lean_Meta_Sym_mkBackwardRuleFromExpr(v_expr_4951_, v___x_4952_, v___x_4953_, v_a_4926_, v_a_4927_, v_a_4928_, v_a_4929_);
return v___x_4954_;
}
else
{
lean_object* v_a_4955_; lean_object* v___x_4957_; uint8_t v_isShared_4958_; uint8_t v_isSharedCheck_4962_; 
v_a_4955_ = lean_ctor_get(v___x_4948_, 0);
v_isSharedCheck_4962_ = !lean_is_exclusive(v___x_4948_);
if (v_isSharedCheck_4962_ == 0)
{
v___x_4957_ = v___x_4948_;
v_isShared_4958_ = v_isSharedCheck_4962_;
goto v_resetjp_4956_;
}
else
{
lean_inc(v_a_4955_);
lean_dec(v___x_4948_);
v___x_4957_ = lean_box(0);
v_isShared_4958_ = v_isSharedCheck_4962_;
goto v_resetjp_4956_;
}
v_resetjp_4956_:
{
lean_object* v___x_4960_; 
if (v_isShared_4958_ == 0)
{
v___x_4960_ = v___x_4957_;
goto v_reusejp_4959_;
}
else
{
lean_object* v_reuseFailAlloc_4961_; 
v_reuseFailAlloc_4961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4961_, 0, v_a_4955_);
v___x_4960_ = v_reuseFailAlloc_4961_;
goto v_reusejp_4959_;
}
v_reusejp_4959_:
{
return v___x_4960_;
}
}
}
}
else
{
lean_object* v_a_4963_; lean_object* v___x_4965_; uint8_t v_isShared_4966_; uint8_t v_isSharedCheck_4970_; 
v_a_4963_ = lean_ctor_get(v___x_4944_, 0);
v_isSharedCheck_4970_ = !lean_is_exclusive(v___x_4944_);
if (v_isSharedCheck_4970_ == 0)
{
v___x_4965_ = v___x_4944_;
v_isShared_4966_ = v_isSharedCheck_4970_;
goto v_resetjp_4964_;
}
else
{
lean_inc(v_a_4963_);
lean_dec(v___x_4944_);
v___x_4965_ = lean_box(0);
v_isShared_4966_ = v_isSharedCheck_4970_;
goto v_resetjp_4964_;
}
v_resetjp_4964_:
{
lean_object* v___x_4968_; 
if (v_isShared_4966_ == 0)
{
v___x_4968_ = v___x_4965_;
goto v_reusejp_4967_;
}
else
{
lean_object* v_reuseFailAlloc_4969_; 
v_reuseFailAlloc_4969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4969_, 0, v_a_4963_);
v___x_4968_ = v_reuseFailAlloc_4969_;
goto v_reusejp_4967_;
}
v_reusejp_4967_:
{
return v___x_4968_;
}
}
}
}
}
else
{
lean_object* v_a_4971_; lean_object* v___x_4973_; uint8_t v_isShared_4974_; uint8_t v_isSharedCheck_4978_; 
lean_dec_ref(v_m_4931_);
lean_dec_ref(v_info_4923_);
lean_dec_ref(v_splitInfo_4922_);
v_a_4971_ = lean_ctor_get(v___x_4932_, 0);
v_isSharedCheck_4978_ = !lean_is_exclusive(v___x_4932_);
if (v_isSharedCheck_4978_ == 0)
{
v___x_4973_ = v___x_4932_;
v_isShared_4974_ = v_isSharedCheck_4978_;
goto v_resetjp_4972_;
}
else
{
lean_inc(v_a_4971_);
lean_dec(v___x_4932_);
v___x_4973_ = lean_box(0);
v_isShared_4974_ = v_isSharedCheck_4978_;
goto v_resetjp_4972_;
}
v_resetjp_4972_:
{
lean_object* v___x_4976_; 
if (v_isShared_4974_ == 0)
{
v___x_4976_ = v___x_4973_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4977_; 
v_reuseFailAlloc_4977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4977_, 0, v_a_4971_);
v___x_4976_ = v_reuseFailAlloc_4977_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
return v___x_4976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit___boxed(lean_object* v_splitInfo_4979_, lean_object* v_info_4980_, lean_object* v_a_4981_, lean_object* v_a_4982_, lean_object* v_a_4983_, lean_object* v_a_4984_, lean_object* v_a_4985_, lean_object* v_a_4986_, lean_object* v_a_4987_){
_start:
{
lean_object* v_res_4988_; 
v_res_4988_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit(v_splitInfo_4979_, v_info_4980_, v_a_4981_, v_a_4982_, v_a_4983_, v_a_4984_, v_a_4985_, v_a_4986_);
lean_dec(v_a_4986_);
lean_dec_ref(v_a_4985_);
lean_dec(v_a_4984_);
lean_dec_ref(v_a_4983_);
lean_dec(v_a_4982_);
lean_dec_ref(v_a_4981_);
return v_res_4988_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0(size_t v_sz_4989_, size_t v_i_4990_, lean_object* v_bs_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_, lean_object* v___y_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_){
_start:
{
lean_object* v___x_4999_; 
v___x_4999_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___redArg(v_sz_4989_, v_i_4990_, v_bs_4991_, v___y_4994_, v___y_4995_, v___y_4996_, v___y_4997_);
return v___x_4999_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0___boxed(lean_object* v_sz_5000_, lean_object* v_i_5001_, lean_object* v_bs_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_){
_start:
{
size_t v_sz_boxed_5010_; size_t v_i_boxed_5011_; lean_object* v_res_5012_; 
v_sz_boxed_5010_ = lean_unbox_usize(v_sz_5000_);
lean_dec(v_sz_5000_);
v_i_boxed_5011_ = lean_unbox_usize(v_i_5001_);
lean_dec(v_i_5001_);
v_res_5012_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__0(v_sz_boxed_5010_, v_i_boxed_5011_, v_bs_5002_, v___y_5003_, v___y_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_);
lean_dec(v___y_5008_);
lean_dec_ref(v___y_5007_);
lean_dec(v___y_5006_);
lean_dec_ref(v___y_5005_);
lean_dec(v___y_5004_);
lean_dec_ref(v___y_5003_);
return v_res_5012_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1(lean_object* v_mvarId_5013_, lean_object* v_val_5014_, lean_object* v___y_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_){
_start:
{
lean_object* v___x_5020_; 
v___x_5020_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1___redArg(v_mvarId_5013_, v_val_5014_, v___y_5016_);
return v___x_5020_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1___boxed(lean_object* v_mvarId_5021_, lean_object* v_val_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_, lean_object* v___y_5026_, lean_object* v___y_5027_){
_start:
{
lean_object* v_res_5028_; 
v_res_5028_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1(v_mvarId_5021_, v_val_5022_, v___y_5023_, v___y_5024_, v___y_5025_, v___y_5026_);
lean_dec(v___y_5026_);
lean_dec_ref(v___y_5025_);
lean_dec(v___y_5024_);
lean_dec_ref(v___y_5023_);
return v_res_5028_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4(lean_object* v_00_u03b1_5029_, lean_object* v_msg_5030_, lean_object* v___y_5031_, lean_object* v___y_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_){
_start:
{
lean_object* v___x_5036_; 
v___x_5036_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___redArg(v_msg_5030_, v___y_5031_, v___y_5032_, v___y_5033_, v___y_5034_);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4___boxed(lean_object* v_00_u03b1_5037_, lean_object* v_msg_5038_, lean_object* v___y_5039_, lean_object* v___y_5040_, lean_object* v___y_5041_, lean_object* v___y_5042_, lean_object* v___y_5043_){
_start:
{
lean_object* v_res_5044_; 
v_res_5044_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__4(v_00_u03b1_5037_, v_msg_5038_, v___y_5039_, v___y_5040_, v___y_5041_, v___y_5042_);
lean_dec(v___y_5042_);
lean_dec_ref(v___y_5041_);
lean_dec(v___y_5040_);
lean_dec_ref(v___y_5039_);
return v_res_5044_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7(lean_object* v_as_5045_, lean_object* v_i_5046_, lean_object* v_j_5047_, lean_object* v_inv_5048_, lean_object* v_bs_5049_){
_start:
{
lean_object* v___x_5050_; 
v___x_5050_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7___redArg(v_as_5045_, v_i_5046_, v_j_5047_, v_bs_5049_);
return v___x_5050_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7___boxed(lean_object* v_as_5051_, lean_object* v_i_5052_, lean_object* v_j_5053_, lean_object* v_inv_5054_, lean_object* v_bs_5055_){
_start:
{
lean_object* v_res_5056_; 
v_res_5056_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__7(v_as_5051_, v_i_5052_, v_j_5053_, v_inv_5054_, v_bs_5055_);
lean_dec_ref(v_as_5051_);
return v_res_5056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15(lean_object* v_00_u03b1_5057_, lean_object* v_name_5058_, uint8_t v_bi_5059_, lean_object* v_type_5060_, lean_object* v_k_5061_, uint8_t v_kind_5062_, lean_object* v___y_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_, lean_object* v___y_5068_){
_start:
{
lean_object* v___x_5070_; 
v___x_5070_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___redArg(v_name_5058_, v_bi_5059_, v_type_5060_, v_k_5061_, v_kind_5062_, v___y_5063_, v___y_5064_, v___y_5065_, v___y_5066_, v___y_5067_, v___y_5068_);
return v___x_5070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15___boxed(lean_object* v_00_u03b1_5071_, lean_object* v_name_5072_, lean_object* v_bi_5073_, lean_object* v_type_5074_, lean_object* v_k_5075_, lean_object* v_kind_5076_, lean_object* v___y_5077_, lean_object* v___y_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_, lean_object* v___y_5083_){
_start:
{
uint8_t v_bi_boxed_5084_; uint8_t v_kind_boxed_5085_; lean_object* v_res_5086_; 
v_bi_boxed_5084_ = lean_unbox(v_bi_5073_);
v_kind_boxed_5085_ = lean_unbox(v_kind_5076_);
v_res_5086_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9_spec__15(v_00_u03b1_5071_, v_name_5072_, v_bi_boxed_5084_, v_type_5074_, v_k_5075_, v_kind_boxed_5085_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
lean_dec(v___y_5082_);
lean_dec_ref(v___y_5081_);
lean_dec(v___y_5080_);
lean_dec_ref(v___y_5079_);
lean_dec(v___y_5078_);
lean_dec_ref(v___y_5077_);
return v_res_5086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9(lean_object* v_00_u03b1_5087_, lean_object* v_name_5088_, lean_object* v_type_5089_, lean_object* v_k_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_, lean_object* v___y_5096_){
_start:
{
lean_object* v___x_5098_; 
v___x_5098_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___redArg(v_name_5088_, v_type_5089_, v_k_5090_, v___y_5091_, v___y_5092_, v___y_5093_, v___y_5094_, v___y_5095_, v___y_5096_);
return v___x_5098_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9___boxed(lean_object* v_00_u03b1_5099_, lean_object* v_name_5100_, lean_object* v_type_5101_, lean_object* v_k_5102_, lean_object* v___y_5103_, lean_object* v___y_5104_, lean_object* v___y_5105_, lean_object* v___y_5106_, lean_object* v___y_5107_, lean_object* v___y_5108_, lean_object* v___y_5109_){
_start:
{
lean_object* v_res_5110_; 
v_res_5110_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__9(v_00_u03b1_5099_, v_name_5100_, v_type_5101_, v_k_5102_, v___y_5103_, v___y_5104_, v___y_5105_, v___y_5106_, v___y_5107_, v___y_5108_);
lean_dec(v___y_5108_);
lean_dec_ref(v___y_5107_);
lean_dec(v___y_5106_);
lean_dec_ref(v___y_5105_);
lean_dec(v___y_5104_);
lean_dec_ref(v___y_5103_);
return v_res_5110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10(size_t v_sz_5111_, size_t v_i_5112_, lean_object* v_bs_5113_, lean_object* v___y_5114_, lean_object* v___y_5115_, lean_object* v___y_5116_, lean_object* v___y_5117_, lean_object* v___y_5118_, lean_object* v___y_5119_){
_start:
{
lean_object* v___x_5121_; 
v___x_5121_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___redArg(v_sz_5111_, v_i_5112_, v_bs_5113_, v___y_5115_, v___y_5116_, v___y_5117_, v___y_5118_, v___y_5119_);
return v___x_5121_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10___boxed(lean_object* v_sz_5122_, lean_object* v_i_5123_, lean_object* v_bs_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_, lean_object* v___y_5130_, lean_object* v___y_5131_){
_start:
{
size_t v_sz_boxed_5132_; size_t v_i_boxed_5133_; lean_object* v_res_5134_; 
v_sz_boxed_5132_ = lean_unbox_usize(v_sz_5122_);
lean_dec(v_sz_5122_);
v_i_boxed_5133_ = lean_unbox_usize(v_i_5123_);
lean_dec(v_i_5123_);
v_res_5134_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__10(v_sz_boxed_5132_, v_i_boxed_5133_, v_bs_5124_, v___y_5125_, v___y_5126_, v___y_5127_, v___y_5128_, v___y_5129_, v___y_5130_);
lean_dec(v___y_5130_);
lean_dec_ref(v___y_5129_);
lean_dec(v___y_5128_);
lean_dec_ref(v___y_5127_);
lean_dec(v___y_5126_);
lean_dec_ref(v___y_5125_);
return v_res_5134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19(lean_object* v_00_u03b1_5135_, lean_object* v_e_5136_, lean_object* v_k_5137_, uint8_t v_cleanupAnnotations_5138_, lean_object* v___y_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_, lean_object* v___y_5142_){
_start:
{
lean_object* v___x_5144_; 
v___x_5144_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___redArg(v_e_5136_, v_k_5137_, v_cleanupAnnotations_5138_, v___y_5139_, v___y_5140_, v___y_5141_, v___y_5142_);
return v___x_5144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19___boxed(lean_object* v_00_u03b1_5145_, lean_object* v_e_5146_, lean_object* v_k_5147_, lean_object* v_cleanupAnnotations_5148_, lean_object* v___y_5149_, lean_object* v___y_5150_, lean_object* v___y_5151_, lean_object* v___y_5152_, lean_object* v___y_5153_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_5154_; lean_object* v_res_5155_; 
v_cleanupAnnotations_boxed_5154_ = lean_unbox(v_cleanupAnnotations_5148_);
v_res_5155_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__19(v_00_u03b1_5145_, v_e_5146_, v_k_5147_, v_cleanupAnnotations_boxed_5154_, v___y_5149_, v___y_5150_, v___y_5151_, v___y_5152_);
lean_dec(v___y_5152_);
lean_dec_ref(v___y_5151_);
lean_dec(v___y_5150_);
lean_dec_ref(v___y_5149_);
return v_res_5155_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13(lean_object* v_00_u03b1_5156_, lean_object* v_msg_5157_, lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_){
_start:
{
lean_object* v___x_5165_; 
v___x_5165_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13___redArg(v_msg_5157_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_);
return v___x_5165_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13___boxed(lean_object* v_00_u03b1_5166_, lean_object* v_msg_5167_, lean_object* v___y_5168_, lean_object* v___y_5169_, lean_object* v___y_5170_, lean_object* v___y_5171_, lean_object* v___y_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_){
_start:
{
lean_object* v_res_5175_; 
v_res_5175_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__13(v_00_u03b1_5166_, v_msg_5167_, v___y_5168_, v___y_5169_, v___y_5170_, v___y_5171_, v___y_5172_, v___y_5173_);
lean_dec(v___y_5173_);
lean_dec_ref(v___y_5172_);
lean_dec(v___y_5171_);
lean_dec_ref(v___y_5170_);
lean_dec(v___y_5169_);
lean_dec_ref(v___y_5168_);
return v_res_5175_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1(lean_object* v_00_u03b2_5176_, lean_object* v_x_5177_, lean_object* v_x_5178_, lean_object* v_x_5179_){
_start:
{
lean_object* v___x_5180_; 
v___x_5180_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1___redArg(v_x_5177_, v_x_5178_, v_x_5179_);
return v___x_5180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16(lean_object* v_00_u03b1_5181_, lean_object* v_fvars_5182_, lean_object* v_names_5183_, lean_object* v_k_5184_, lean_object* v___y_5185_, lean_object* v___y_5186_, lean_object* v___y_5187_, lean_object* v___y_5188_){
_start:
{
lean_object* v___x_5190_; 
v___x_5190_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16___redArg(v_fvars_5182_, v_names_5183_, v_k_5184_, v___y_5185_, v___y_5186_, v___y_5187_, v___y_5188_);
return v___x_5190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16___boxed(lean_object* v_00_u03b1_5191_, lean_object* v_fvars_5192_, lean_object* v_names_5193_, lean_object* v_k_5194_, lean_object* v___y_5195_, lean_object* v___y_5196_, lean_object* v___y_5197_, lean_object* v___y_5198_, lean_object* v___y_5199_){
_start:
{
lean_object* v_res_5200_; 
v_res_5200_ = l_Lean_Meta_MatcherApp_withUserNames___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__16(v_00_u03b1_5191_, v_fvars_5192_, v_names_5193_, v_k_5194_, v___y_5195_, v___y_5196_, v___y_5197_, v___y_5198_);
lean_dec(v___y_5198_);
lean_dec_ref(v___y_5197_);
lean_dec(v___y_5196_);
lean_dec_ref(v___y_5195_);
lean_dec_ref(v_names_5193_);
lean_dec_ref(v_fvars_5192_);
return v_res_5200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17(lean_object* v_00_u03b1_5201_, lean_object* v_type_5202_, lean_object* v_maxFVars_x3f_5203_, lean_object* v_k_5204_, uint8_t v_cleanupAnnotations_5205_, uint8_t v_whnfType_5206_, lean_object* v___y_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_, lean_object* v___y_5210_){
_start:
{
lean_object* v___x_5212_; 
v___x_5212_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___redArg(v_type_5202_, v_maxFVars_x3f_5203_, v_k_5204_, v_cleanupAnnotations_5205_, v_whnfType_5206_, v___y_5207_, v___y_5208_, v___y_5209_, v___y_5210_);
return v___x_5212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17___boxed(lean_object* v_00_u03b1_5213_, lean_object* v_type_5214_, lean_object* v_maxFVars_x3f_5215_, lean_object* v_k_5216_, lean_object* v_cleanupAnnotations_5217_, lean_object* v_whnfType_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_, lean_object* v___y_5223_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_5224_; uint8_t v_whnfType_boxed_5225_; lean_object* v_res_5226_; 
v_cleanupAnnotations_boxed_5224_ = lean_unbox(v_cleanupAnnotations_5217_);
v_whnfType_boxed_5225_ = lean_unbox(v_whnfType_5218_);
v_res_5226_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__17(v_00_u03b1_5213_, v_type_5214_, v_maxFVars_x3f_5215_, v_k_5216_, v_cleanupAnnotations_boxed_5224_, v_whnfType_boxed_5225_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_);
lean_dec(v___y_5222_);
lean_dec_ref(v___y_5221_);
lean_dec(v___y_5220_);
lean_dec_ref(v___y_5219_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21(lean_object* v_00_u03b1_5227_, lean_object* v_origAltType_5228_, lean_object* v_altInfo_5229_, lean_object* v_k_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_){
_start:
{
lean_object* v___x_5236_; 
v___x_5236_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___redArg(v_origAltType_5228_, v_altInfo_5229_, v_k_5230_, v___y_5231_, v___y_5232_, v___y_5233_, v___y_5234_);
return v___x_5236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21___boxed(lean_object* v_00_u03b1_5237_, lean_object* v_origAltType_5238_, lean_object* v_altInfo_5239_, lean_object* v_k_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_){
_start:
{
lean_object* v_res_5246_; 
v_res_5246_ = l___private_Lean_Meta_Match_MatcherApp_Transform_0__Lean_Meta_MatcherApp_forallAltTelescope_x27___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__21(v_00_u03b1_5237_, v_origAltType_5238_, v_altInfo_5239_, v_k_5240_, v___y_5241_, v___y_5242_, v___y_5243_, v___y_5244_);
lean_dec(v___y_5244_);
lean_dec_ref(v___y_5243_);
lean_dec(v___y_5242_);
lean_dec_ref(v___y_5241_);
return v_res_5246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23(lean_object* v_declName_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_){
_start:
{
lean_object* v___x_5253_; 
v___x_5253_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23___redArg(v_declName_5247_, v___y_5251_);
return v___x_5253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23___boxed(lean_object* v_declName_5254_, lean_object* v___y_5255_, lean_object* v___y_5256_, lean_object* v___y_5257_, lean_object* v___y_5258_, lean_object* v___y_5259_){
_start:
{
lean_object* v_res_5260_; 
v_res_5260_ = l_Lean_Meta_getMatcherInfo_x3f___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__23(v_declName_5254_, v___y_5255_, v___y_5256_, v___y_5257_, v___y_5258_);
lean_dec(v___y_5258_);
lean_dec_ref(v___y_5257_);
lean_dec(v___y_5256_);
lean_dec_ref(v___y_5255_);
return v_res_5260_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21(lean_object* v_as_5261_, lean_object* v_i_5262_, lean_object* v_j_5263_, lean_object* v_inv_5264_, lean_object* v_bs_5265_){
_start:
{
lean_object* v___x_5266_; 
v___x_5266_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___redArg(v_as_5261_, v_i_5262_, v_j_5263_, v_bs_5265_);
return v___x_5266_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21___boxed(lean_object* v_as_5267_, lean_object* v_i_5268_, lean_object* v_j_5269_, lean_object* v_inv_5270_, lean_object* v_bs_5271_){
_start:
{
lean_object* v_res_5272_; 
v_res_5272_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__21(v_as_5267_, v_i_5268_, v_j_5269_, v_inv_5270_, v_bs_5271_);
lean_dec_ref(v_as_5267_);
return v_res_5272_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22(lean_object* v_as_5273_, lean_object* v_i_5274_, lean_object* v_j_5275_, lean_object* v_inv_5276_, lean_object* v_bs_5277_, lean_object* v___y_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_){
_start:
{
lean_object* v___x_5285_; 
v___x_5285_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___redArg(v_as_5273_, v_i_5274_, v_j_5275_, v_bs_5277_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_);
return v___x_5285_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22___boxed(lean_object* v_as_5286_, lean_object* v_i_5287_, lean_object* v_j_5288_, lean_object* v_inv_5289_, lean_object* v_bs_5290_, lean_object* v___y_5291_, lean_object* v___y_5292_, lean_object* v___y_5293_, lean_object* v___y_5294_, lean_object* v___y_5295_, lean_object* v___y_5296_, lean_object* v___y_5297_){
_start:
{
lean_object* v_res_5298_; 
v_res_5298_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_SplitInfo_withAbstract___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__12_spec__22(v_as_5286_, v_i_5287_, v_j_5288_, v_inv_5289_, v_bs_5290_, v___y_5291_, v___y_5292_, v___y_5293_, v___y_5294_, v___y_5295_, v___y_5296_);
lean_dec(v___y_5296_);
lean_dec_ref(v___y_5295_);
lean_dec(v___y_5294_);
lean_dec_ref(v___y_5293_);
lean_dec(v___y_5292_);
lean_dec_ref(v___y_5291_);
lean_dec_ref(v_as_5286_);
return v_res_5298_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6(lean_object* v_00_u03b2_5299_, lean_object* v_x_5300_, size_t v_x_5301_, size_t v_x_5302_, lean_object* v_x_5303_, lean_object* v_x_5304_){
_start:
{
lean_object* v___x_5305_; 
v___x_5305_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___redArg(v_x_5300_, v_x_5301_, v_x_5302_, v_x_5303_, v_x_5304_);
return v___x_5305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6___boxed(lean_object* v_00_u03b2_5306_, lean_object* v_x_5307_, lean_object* v_x_5308_, lean_object* v_x_5309_, lean_object* v_x_5310_, lean_object* v_x_5311_){
_start:
{
size_t v_x_75081__boxed_5312_; size_t v_x_75082__boxed_5313_; lean_object* v_res_5314_; 
v_x_75081__boxed_5312_ = lean_unbox_usize(v_x_5308_);
lean_dec(v_x_5308_);
v_x_75082__boxed_5313_ = lean_unbox_usize(v_x_5309_);
lean_dec(v_x_5309_);
v_res_5314_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6(v_00_u03b2_5306_, v_x_5307_, v_x_75081__boxed_5312_, v_x_75082__boxed_5313_, v_x_5310_, v_x_5311_);
return v_res_5314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12(size_t v_sz_5315_, size_t v_i_5316_, lean_object* v_bs_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_){
_start:
{
lean_object* v___x_5323_; 
v___x_5323_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12___redArg(v_sz_5315_, v_i_5316_, v_bs_5317_, v___y_5318_, v___y_5320_, v___y_5321_);
return v___x_5323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12___boxed(lean_object* v_sz_5324_, lean_object* v_i_5325_, lean_object* v_bs_5326_, lean_object* v___y_5327_, lean_object* v___y_5328_, lean_object* v___y_5329_, lean_object* v___y_5330_, lean_object* v___y_5331_){
_start:
{
size_t v_sz_boxed_5332_; size_t v_i_boxed_5333_; lean_object* v_res_5334_; 
v_sz_boxed_5332_ = lean_unbox_usize(v_sz_5324_);
lean_dec(v_sz_5324_);
v_i_boxed_5333_ = lean_unbox_usize(v_i_5325_);
lean_dec(v_i_5325_);
v_res_5334_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__12(v_sz_boxed_5332_, v_i_boxed_5333_, v_bs_5326_, v___y_5327_, v___y_5328_, v___y_5329_, v___y_5330_);
lean_dec(v___y_5330_);
lean_dec_ref(v___y_5329_);
lean_dec(v___y_5328_);
lean_dec_ref(v___y_5327_);
return v_res_5334_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18(lean_object* v_upperBound_5335_, lean_object* v_onAlt_5336_, lean_object* v_extraEqualities_5337_, lean_object* v_inst_5338_, lean_object* v_R_5339_, lean_object* v_a_5340_, lean_object* v_b_5341_, lean_object* v_c_5342_, lean_object* v___y_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_){
_start:
{
lean_object* v___x_5348_; 
v___x_5348_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___redArg(v_upperBound_5335_, v_onAlt_5336_, v_extraEqualities_5337_, v_a_5340_, v_b_5341_, v___y_5343_, v___y_5344_, v___y_5345_, v___y_5346_);
return v___x_5348_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18___boxed(lean_object* v_upperBound_5349_, lean_object* v_onAlt_5350_, lean_object* v_extraEqualities_5351_, lean_object* v_inst_5352_, lean_object* v_R_5353_, lean_object* v_a_5354_, lean_object* v_b_5355_, lean_object* v_c_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_, lean_object* v___y_5359_, lean_object* v___y_5360_, lean_object* v___y_5361_){
_start:
{
lean_object* v_res_5362_; 
v_res_5362_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__18(v_upperBound_5349_, v_onAlt_5350_, v_extraEqualities_5351_, v_inst_5352_, v_R_5353_, v_a_5354_, v_b_5355_, v_c_5356_, v___y_5357_, v___y_5358_, v___y_5359_, v___y_5360_);
lean_dec(v___y_5360_);
lean_dec_ref(v___y_5359_);
lean_dec(v___y_5358_);
lean_dec_ref(v___y_5357_);
lean_dec(v_upperBound_5349_);
return v_res_5362_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22(lean_object* v_upperBound_5363_, lean_object* v_onAlt_5364_, uint8_t v_useSplitter_5365_, lean_object* v_extraEqualities_5366_, lean_object* v_numDiscrEqs_5367_, lean_object* v_inst_5368_, lean_object* v_R_5369_, lean_object* v_a_5370_, lean_object* v_b_5371_, lean_object* v_c_5372_, lean_object* v___y_5373_, lean_object* v___y_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_){
_start:
{
lean_object* v___x_5378_; 
v___x_5378_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___redArg(v_upperBound_5363_, v_onAlt_5364_, v_useSplitter_5365_, v_extraEqualities_5366_, v_numDiscrEqs_5367_, v_a_5370_, v_b_5371_, v___y_5373_, v___y_5374_, v___y_5375_, v___y_5376_);
return v___x_5378_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22___boxed(lean_object* v_upperBound_5379_, lean_object* v_onAlt_5380_, lean_object* v_useSplitter_5381_, lean_object* v_extraEqualities_5382_, lean_object* v_numDiscrEqs_5383_, lean_object* v_inst_5384_, lean_object* v_R_5385_, lean_object* v_a_5386_, lean_object* v_b_5387_, lean_object* v_c_5388_, lean_object* v___y_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_){
_start:
{
uint8_t v_useSplitter_boxed_5394_; lean_object* v_res_5395_; 
v_useSplitter_boxed_5394_ = lean_unbox(v_useSplitter_5381_);
v_res_5395_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_MatcherApp_transform___at___00Lean_Elab_Tactic_Do_SplitInfo_splitWith___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__5_spec__8_spec__22(v_upperBound_5379_, v_onAlt_5380_, v_useSplitter_boxed_5394_, v_extraEqualities_5382_, v_numDiscrEqs_5383_, v_inst_5384_, v_R_5385_, v_a_5386_, v_b_5387_, v_c_5388_, v___y_5389_, v___y_5390_, v___y_5391_, v___y_5392_);
lean_dec(v___y_5392_);
lean_dec_ref(v___y_5391_);
lean_dec(v___y_5390_);
lean_dec_ref(v___y_5389_);
lean_dec(v_upperBound_5379_);
return v_res_5395_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19(lean_object* v_00_u03b2_5396_, lean_object* v_n_5397_, lean_object* v_k_5398_, lean_object* v_v_5399_){
_start:
{
lean_object* v___x_5400_; 
v___x_5400_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19___redArg(v_n_5397_, v_k_5398_, v_v_5399_);
return v___x_5400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20(lean_object* v_00_u03b2_5401_, size_t v_depth_5402_, lean_object* v_keys_5403_, lean_object* v_vals_5404_, lean_object* v_heq_5405_, lean_object* v_i_5406_, lean_object* v_entries_5407_){
_start:
{
lean_object* v___x_5408_; 
v___x_5408_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20___redArg(v_depth_5402_, v_keys_5403_, v_vals_5404_, v_i_5406_, v_entries_5407_);
return v___x_5408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20___boxed(lean_object* v_00_u03b2_5409_, lean_object* v_depth_5410_, lean_object* v_keys_5411_, lean_object* v_vals_5412_, lean_object* v_heq_5413_, lean_object* v_i_5414_, lean_object* v_entries_5415_){
_start:
{
size_t v_depth_boxed_5416_; lean_object* v_res_5417_; 
v_depth_boxed_5416_ = lean_unbox_usize(v_depth_5410_);
lean_dec(v_depth_5410_);
v_res_5417_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__20(v_00_u03b2_5409_, v_depth_boxed_5416_, v_keys_5411_, v_vals_5412_, v_heq_5413_, v_i_5414_, v_entries_5415_);
lean_dec_ref(v_vals_5412_);
lean_dec_ref(v_keys_5411_);
return v_res_5417_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19_spec__33(lean_object* v_00_u03b2_5418_, lean_object* v_x_5419_, lean_object* v_x_5420_, lean_object* v_x_5421_, lean_object* v_x_5422_){
_start:
{
lean_object* v___x_5423_; 
v___x_5423_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleForSplit_spec__1_spec__1_spec__6_spec__19_spec__33___redArg(v_x_5419_, v_x_5420_, v_x_5421_, v_x_5422_);
return v___x_5423_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Match(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Match(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_Split(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Match(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_VCGen_Split(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleConstruct_Match(builtin);
}
#ifdef __cplusplus
}
#endif
