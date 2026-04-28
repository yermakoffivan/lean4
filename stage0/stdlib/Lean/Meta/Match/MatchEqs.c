// Lean compiler output
// Module: Lean.Meta.Match.MatchEqs
// Imports: public import Lean.Meta.Match.Match public import Lean.Meta.Match.MatchEqsExt import Lean.Meta.Tactic.Refl import Lean.Meta.Tactic.Delta import Lean.Meta.Tactic.SplitIf import Lean.Meta.Tactic.CasesOnStuckLHS import Lean.Meta.Match.SimpH import Lean.Meta.Match.AltTelescopes import Lean.Meta.Match.NamedPatterns import Lean.Meta.SplitSparseCasesOn
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
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_Meta_matchEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_subst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFVarLocalDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t l_Lean_Meta_Match_isCongrEqnReservedNameSuffix(lean_object*);
uint8_t lean_is_matcher(lean_object*, lean_object*);
lean_object* l_Lean_registerReservedNamePredicate(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
extern lean_object* l_Lean_Meta_Match_congrEqnThmSuffixBase;
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Overlaps_overlapping(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_simpH_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrowN(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_unfoldNamedPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_deltaTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_heqOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_splitIfTarget_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_trySubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_simpIfTarget(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_splitSparseCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_reduceSparseCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_casesOnStuckLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_contradiction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_modifyTargetEqLHS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MVarId_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_introSubstEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_forallAltVarsTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_registerMatchEqns___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_withMkMatcherInput___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_getMotivePos(lean_object*);
extern lean_object* l_Lean_Meta_eqnThmSuffixBase;
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_forallAltTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Match_Overlaps_isEmpty(lean_object*);
lean_object* l_Lean_Meta_Match_isNamedPattern___boxed(lean_object*);
uint8_t l_Lean_Meta_Match_instBEqAltParamInfo_beq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_MatcherInfo_numAlts(lean_object*);
lean_object* lean_private_to_user_name(lean_object*);
uint8_t l_Lean_Meta_isEqnReservedNameSuffix(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_mkPrivateName(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_Meta_Match_mkMatcher(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_getNumEqsFromDiscrInfos(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_realizeConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default;
extern lean_object* l_Lean_Meta_Match_matchEqnsExt;
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Match_congrEqn1ThmSuffix;
lean_object* l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_registerReservedNameAction(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_mkAppDiscrEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_mkAppDiscrEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__15;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__18;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Match_proveCondEqThm___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__2;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__2;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__3;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__4;
static lean_once_cell_t l_Lean_Meta_Match_proveCondEqThm___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_proveCondEqThm___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__2;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__4;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___boxed(lean_object**);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__7;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__9;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__11;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__13;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__15;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__17;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__2;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Match_getEquationsForImpl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__0;
static lean_once_cell_t l_Lean_Meta_Match_getEquationsForImpl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__1;
static lean_once_cell_t l_Lean_Meta_Match_getEquationsForImpl___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__2;
static lean_once_cell_t l_Lean_Meta_Match_getEquationsForImpl___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__3;
static lean_once_cell_t l_Lean_Meta_Match_getEquationsForImpl___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__4;
static lean_once_cell_t l_Lean_Meta_Match_getEquationsForImpl___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__5;
static lean_once_cell_t l_Lean_Meta_Match_getEquationsForImpl___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Match_getEquationsForImpl___closed__6;
LEAN_EXPORT lean_object* lean_get_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_getEquationsForImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1___boxed(lean_object**);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___boxed(lean_object**);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_get_congr_match_equations_for(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_genMatchCongrEqnsImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__1_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__1_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__3_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__3_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__4_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__4_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__5_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__5_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__7_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__7_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__8_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__8_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__9_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__9_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__10_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__10_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__11_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__11_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__12_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__12_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__13_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__13_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__14_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__14_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__15_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__15_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__16_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__16_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__17_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__17_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__18_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__18_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__19_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__19_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__21_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__21_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__23_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__23_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchEqName_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2____boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchCongrEqName_x3f(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 5);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__1(lean_object* v_a_48_, lean_object* v_a_49_){
_start:
{
if (lean_obj_tag(v_a_48_) == 0)
{
lean_object* v___x_50_; 
v___x_50_ = l_List_reverse___redArg(v_a_49_);
return v___x_50_;
}
else
{
lean_object* v_head_51_; lean_object* v_tail_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_61_; 
v_head_51_ = lean_ctor_get(v_a_48_, 0);
v_tail_52_ = lean_ctor_get(v_a_48_, 1);
v_isSharedCheck_61_ = !lean_is_exclusive(v_a_48_);
if (v_isSharedCheck_61_ == 0)
{
v___x_54_ = v_a_48_;
v_isShared_55_ = v_isSharedCheck_61_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_tail_52_);
lean_inc(v_head_51_);
lean_dec(v_a_48_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_61_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_56_; lean_object* v___x_58_; 
v___x_56_ = l_Lean_MessageData_ofExpr(v_head_51_);
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 1, v_a_49_);
lean_ctor_set(v___x_54_, 0, v___x_56_);
v___x_58_ = v___x_54_;
goto v_reusejp_57_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v___x_56_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v_a_49_);
v___x_58_ = v_reuseFailAlloc_60_;
goto v_reusejp_57_;
}
v_reusejp_57_:
{
v_a_48_ = v_tail_52_;
v_a_49_ = v___x_58_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_62_ = lean_box(0);
v___x_63_ = lean_box(0);
v___x_64_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
lean_ctor_set(v___x_64_, 1, v___x_62_);
return v___x_64_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__0(void){
_start:
{
lean_object* v___x_65_; 
v___x_65_ = lean_mk_string_unchecked("Could not find equation ", 24, 24);
return v___x_65_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1(void){
_start:
{
lean_object* v___x_66_; lean_object* v___x_67_; 
v___x_66_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__0);
v___x_67_ = l_Lean_stringToMessageData(v___x_66_);
return v___x_67_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__2(void){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = lean_mk_string_unchecked(" : ", 3, 3);
return v___x_68_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3(void){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__2, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__2_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__2);
v___x_70_ = l_Lean_stringToMessageData(v___x_69_);
return v___x_70_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__4(void){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = lean_mk_string_unchecked(" among ", 7, 7);
return v___x_71_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5(void){
_start:
{
lean_object* v___x_72_; lean_object* v___x_73_; 
v___x_72_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__4, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__4_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__4);
v___x_73_ = l_Lean_stringToMessageData(v___x_72_);
return v___x_73_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__6(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_mk_string_unchecked("expecting ", 10, 10);
return v___x_74_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__6, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__6_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__6);
v___x_76_ = l_Lean_stringToMessageData(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__8(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_mk_string_unchecked(" equalities, but found type", 27, 27);
return v___x_77_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__8, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__8_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__8);
v___x_79_ = l_Lean_stringToMessageData(v___x_78_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go(lean_object* v_alt_80_, lean_object* v_heqs_81_, lean_object* v_numDiscrEqs_82_, lean_object* v_e_83_, lean_object* v_ty_84_, lean_object* v_i_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
uint8_t v___x_91_; 
v___x_91_ = lean_nat_dec_lt(v_i_85_, v_numDiscrEqs_82_);
if (v___x_91_ == 0)
{
lean_object* v___x_92_; 
lean_dec_ref(v_ty_84_);
lean_dec(v_numDiscrEqs_82_);
lean_dec_ref(v_heqs_81_);
lean_dec_ref(v_alt_80_);
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v_e_83_);
return v___x_92_;
}
else
{
if (lean_obj_tag(v_ty_84_) == 7)
{
lean_object* v_binderName_93_; lean_object* v_binderType_94_; lean_object* v_body_95_; lean_object* v___x_96_; size_t v_sz_97_; size_t v___x_98_; lean_object* v___x_99_; 
v_binderName_93_ = lean_ctor_get(v_ty_84_, 0);
lean_inc(v_binderName_93_);
v_binderType_94_ = lean_ctor_get(v_ty_84_, 1);
lean_inc_ref_n(v_binderType_94_, 2);
v_body_95_ = lean_ctor_get(v_ty_84_, 2);
lean_inc_ref(v_body_95_);
lean_dec_ref(v_ty_84_);
v___x_96_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0);
v_sz_97_ = lean_array_size(v_heqs_81_);
v___x_98_ = ((size_t)0ULL);
lean_inc_ref(v_heqs_81_);
v___x_99_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0(v_binderType_94_, v_e_83_, v_body_95_, v_i_85_, v_alt_80_, v_heqs_81_, v_numDiscrEqs_82_, v_heqs_81_, v_sz_97_, v___x_98_, v___x_96_, v_a_86_, v_a_87_, v_a_88_, v_a_89_);
lean_dec_ref(v_body_95_);
if (lean_obj_tag(v___x_99_) == 0)
{
lean_object* v_a_100_; lean_object* v___x_102_; uint8_t v_isShared_103_; uint8_t v_isSharedCheck_131_; 
v_a_100_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_131_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_131_ == 0)
{
v___x_102_ = v___x_99_;
v_isShared_103_ = v_isSharedCheck_131_;
goto v_resetjp_101_;
}
else
{
lean_inc(v_a_100_);
lean_dec(v___x_99_);
v___x_102_ = lean_box(0);
v_isShared_103_ = v_isSharedCheck_131_;
goto v_resetjp_101_;
}
v_resetjp_101_:
{
lean_object* v_fst_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_129_; 
v_fst_104_ = lean_ctor_get(v_a_100_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v_a_100_);
if (v_isSharedCheck_129_ == 0)
{
lean_object* v_unused_130_; 
v_unused_130_ = lean_ctor_get(v_a_100_, 1);
lean_dec(v_unused_130_);
v___x_106_ = v_a_100_;
v_isShared_107_ = v_isSharedCheck_129_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_fst_104_);
lean_dec(v_a_100_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_129_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
if (lean_obj_tag(v_fst_104_) == 0)
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_111_; 
lean_del_object(v___x_102_);
v___x_108_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__1);
v___x_109_ = l_Lean_MessageData_ofName(v_binderName_93_);
if (v_isShared_107_ == 0)
{
lean_ctor_set_tag(v___x_106_, 7);
lean_ctor_set(v___x_106_, 1, v___x_109_);
lean_ctor_set(v___x_106_, 0, v___x_108_);
v___x_111_ = v___x_106_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v___x_109_);
v___x_111_ = v_reuseFailAlloc_124_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; 
v___x_112_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__3);
v___x_113_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_113_, 0, v___x_111_);
lean_ctor_set(v___x_113_, 1, v___x_112_);
v___x_114_ = l_Lean_MessageData_ofExpr(v_binderType_94_);
v___x_115_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_115_, 0, v___x_113_);
lean_ctor_set(v___x_115_, 1, v___x_114_);
v___x_116_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__5);
v___x_117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_115_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = lean_array_to_list(v_heqs_81_);
v___x_119_ = lean_box(0);
v___x_120_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__1(v___x_118_, v___x_119_);
v___x_121_ = l_Lean_MessageData_ofList(v___x_120_);
v___x_122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_117_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v___x_123_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_122_, v_a_86_, v_a_87_, v_a_88_, v_a_89_);
return v___x_123_;
}
}
else
{
lean_object* v_val_125_; lean_object* v___x_127_; 
lean_del_object(v___x_106_);
lean_dec_ref(v_binderType_94_);
lean_dec(v_binderName_93_);
lean_dec_ref(v_heqs_81_);
v_val_125_ = lean_ctor_get(v_fst_104_, 0);
lean_inc(v_val_125_);
lean_dec_ref(v_fst_104_);
if (v_isShared_103_ == 0)
{
lean_ctor_set(v___x_102_, 0, v_val_125_);
v___x_127_ = v___x_102_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_val_125_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
}
else
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_139_; 
lean_dec_ref(v_binderType_94_);
lean_dec(v_binderName_93_);
lean_dec_ref(v_heqs_81_);
v_a_132_ = lean_ctor_get(v___x_99_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_99_);
if (v_isSharedCheck_139_ == 0)
{
v___x_134_ = v___x_99_;
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_99_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_139_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
if (v_isShared_135_ == 0)
{
v___x_137_ = v___x_134_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v_a_132_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
else
{
lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
lean_dec_ref(v_ty_84_);
lean_dec_ref(v_e_83_);
lean_dec_ref(v_heqs_81_);
v___x_140_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__7);
v___x_141_ = l_Nat_reprFast(v_numDiscrEqs_82_);
v___x_142_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_142_, 0, v___x_141_);
v___x_143_ = l_Lean_MessageData_ofFormat(v___x_142_);
v___x_144_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_140_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
v___x_145_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___closed__9);
v___x_146_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_144_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
v___x_147_ = l_Lean_indentExpr(v_alt_80_);
v___x_148_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_148_, 0, v___x_146_);
lean_ctor_set(v___x_148_, 1, v___x_147_);
v___x_149_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_148_, v_a_86_, v_a_87_, v_a_88_, v_a_89_);
return v___x_149_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0(lean_object* v_binderType_150_, lean_object* v_e_151_, lean_object* v_body_152_, lean_object* v_i_153_, lean_object* v_alt_154_, lean_object* v_heqs_155_, lean_object* v_numDiscrEqs_156_, lean_object* v_as_157_, size_t v_sz_158_, size_t v_i_159_, lean_object* v_b_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
uint8_t v___x_166_; 
v___x_166_ = lean_usize_dec_lt(v_i_159_, v_sz_158_);
if (v___x_166_ == 0)
{
lean_object* v___x_167_; 
lean_dec(v_numDiscrEqs_156_);
lean_dec_ref(v_heqs_155_);
lean_dec_ref(v_alt_154_);
lean_dec_ref(v_e_151_);
lean_dec_ref(v_binderType_150_);
v___x_167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_167_, 0, v_b_160_);
return v___x_167_;
}
else
{
lean_object* v_a_168_; lean_object* v___x_169_; 
lean_dec_ref(v_b_160_);
v_a_168_ = lean_array_uget_borrowed(v_as_157_, v_i_159_);
lean_inc(v___y_164_);
lean_inc_ref(v___y_163_);
lean_inc(v___y_162_);
lean_inc_ref(v___y_161_);
lean_inc(v_a_168_);
v___x_169_ = lean_infer_type(v_a_168_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
if (lean_obj_tag(v___x_169_) == 0)
{
lean_object* v_a_170_; lean_object* v___x_171_; 
v_a_170_ = lean_ctor_get(v___x_169_, 0);
lean_inc(v_a_170_);
lean_dec_ref(v___x_169_);
lean_inc_ref(v_binderType_150_);
v___x_171_ = l_Lean_Meta_isExprDefEq(v_a_170_, v_binderType_150_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v_a_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v_a_172_ = lean_ctor_get(v___x_171_, 0);
lean_inc(v_a_172_);
lean_dec_ref(v___x_171_);
v___x_173_ = lean_box(0);
v___x_174_ = lean_unbox(v_a_172_);
lean_dec(v_a_172_);
if (v___x_174_ == 0)
{
lean_object* v___x_175_; size_t v___x_176_; size_t v___x_177_; 
v___x_175_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___closed__0);
v___x_176_ = ((size_t)1ULL);
v___x_177_ = lean_usize_add(v_i_159_, v___x_176_);
v_i_159_ = v___x_177_;
v_b_160_ = v___x_175_;
goto _start;
}
else
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
lean_dec_ref(v_binderType_150_);
lean_inc(v_a_168_);
v___x_179_ = l_Lean_Expr_app___override(v_e_151_, v_a_168_);
v___x_180_ = lean_expr_instantiate1(v_body_152_, v_a_168_);
v___x_181_ = lean_unsigned_to_nat(1u);
v___x_182_ = lean_nat_add(v_i_153_, v___x_181_);
v___x_183_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go(v_alt_154_, v_heqs_155_, v_numDiscrEqs_156_, v___x_179_, v___x_180_, v___x_182_, v___y_161_, v___y_162_, v___y_163_, v___y_164_);
lean_dec(v___x_182_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_193_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_193_ == 0)
{
v___x_186_ = v___x_183_;
v_isShared_187_ = v_isSharedCheck_193_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_183_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_193_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_191_; 
v___x_188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_188_, 0, v_a_184_);
v___x_189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_189_, 0, v___x_188_);
lean_ctor_set(v___x_189_, 1, v___x_173_);
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 0, v___x_189_);
v___x_191_ = v___x_186_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___x_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
else
{
lean_object* v_a_194_; lean_object* v___x_196_; uint8_t v_isShared_197_; uint8_t v_isSharedCheck_201_; 
v_a_194_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_201_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_201_ == 0)
{
v___x_196_ = v___x_183_;
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
else
{
lean_inc(v_a_194_);
lean_dec(v___x_183_);
v___x_196_ = lean_box(0);
v_isShared_197_ = v_isSharedCheck_201_;
goto v_resetjp_195_;
}
v_resetjp_195_:
{
lean_object* v___x_199_; 
if (v_isShared_197_ == 0)
{
v___x_199_ = v___x_196_;
goto v_reusejp_198_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v_a_194_);
v___x_199_ = v_reuseFailAlloc_200_;
goto v_reusejp_198_;
}
v_reusejp_198_:
{
return v___x_199_;
}
}
}
}
}
else
{
lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
lean_dec(v_numDiscrEqs_156_);
lean_dec_ref(v_heqs_155_);
lean_dec_ref(v_alt_154_);
lean_dec_ref(v_e_151_);
lean_dec_ref(v_binderType_150_);
v_a_202_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_209_ == 0)
{
v___x_204_ = v___x_171_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_dec(v___x_171_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
else
{
lean_object* v_a_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_217_; 
lean_dec(v_numDiscrEqs_156_);
lean_dec_ref(v_heqs_155_);
lean_dec_ref(v_alt_154_);
lean_dec_ref(v_e_151_);
lean_dec_ref(v_binderType_150_);
v_a_210_ = lean_ctor_get(v___x_169_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_169_);
if (v_isSharedCheck_217_ == 0)
{
v___x_212_ = v___x_169_;
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_a_210_);
lean_dec(v___x_169_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_217_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_215_; 
if (v_isShared_213_ == 0)
{
v___x_215_ = v___x_212_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v_a_210_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0___boxed(lean_object* v_binderType_218_, lean_object* v_e_219_, lean_object* v_body_220_, lean_object* v_i_221_, lean_object* v_alt_222_, lean_object* v_heqs_223_, lean_object* v_numDiscrEqs_224_, lean_object* v_as_225_, lean_object* v_sz_226_, lean_object* v_i_227_, lean_object* v_b_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
size_t v_sz_boxed_234_; size_t v_i_boxed_235_; lean_object* v_res_236_; 
v_sz_boxed_234_ = lean_unbox_usize(v_sz_226_);
lean_dec(v_sz_226_);
v_i_boxed_235_ = lean_unbox_usize(v_i_227_);
lean_dec(v_i_227_);
v_res_236_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__0(v_binderType_218_, v_e_219_, v_body_220_, v_i_221_, v_alt_222_, v_heqs_223_, v_numDiscrEqs_224_, v_as_225_, v_sz_boxed_234_, v_i_boxed_235_, v_b_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
lean_dec_ref(v_as_225_);
lean_dec(v_i_221_);
lean_dec_ref(v_body_220_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go___boxed(lean_object* v_alt_237_, lean_object* v_heqs_238_, lean_object* v_numDiscrEqs_239_, lean_object* v_e_240_, lean_object* v_ty_241_, lean_object* v_i_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_){
_start:
{
lean_object* v_res_248_; 
v_res_248_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go(v_alt_237_, v_heqs_238_, v_numDiscrEqs_239_, v_e_240_, v_ty_241_, v_i_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_);
lean_dec(v_a_246_);
lean_dec_ref(v_a_245_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_i_242_);
return v_res_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2(lean_object* v_00_u03b1_249_, lean_object* v_msg_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v_msg_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_);
return v___x_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___boxed(lean_object* v_00_u03b1_257_, lean_object* v_msg_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2(v_00_u03b1_257_, v_msg_258_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_mkAppDiscrEqs(lean_object* v_alt_265_, lean_object* v_heqs_266_, lean_object* v_numDiscrEqs_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_, lean_object* v_a_271_){
_start:
{
lean_object* v___x_273_; 
lean_inc(v_a_271_);
lean_inc_ref(v_a_270_);
lean_inc(v_a_269_);
lean_inc_ref(v_a_268_);
lean_inc_ref(v_alt_265_);
v___x_273_ = lean_infer_type(v_alt_265_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
if (lean_obj_tag(v___x_273_) == 0)
{
lean_object* v_a_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_a_274_ = lean_ctor_get(v___x_273_, 0);
lean_inc(v_a_274_);
lean_dec_ref(v___x_273_);
v___x_275_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alt_265_);
v___x_276_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go(v_alt_265_, v_heqs_266_, v_numDiscrEqs_267_, v_alt_265_, v_a_274_, v___x_275_, v_a_268_, v_a_269_, v_a_270_, v_a_271_);
return v___x_276_;
}
else
{
lean_dec(v_numDiscrEqs_267_);
lean_dec_ref(v_heqs_266_);
lean_dec_ref(v_alt_265_);
return v___x_273_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_mkAppDiscrEqs___boxed(lean_object* v_alt_277_, lean_object* v_heqs_278_, lean_object* v_numDiscrEqs_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Lean_Meta_Match_mkAppDiscrEqs(v_alt_277_, v_heqs_278_, v_numDiscrEqs_279_, v_a_280_, v_a_281_, v_a_282_, v_a_283_);
lean_dec(v_a_283_);
lean_dec_ref(v_a_282_);
lean_dec(v_a_281_);
lean_dec_ref(v_a_280_);
return v_res_285_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0(lean_object* v_x_286_){
_start:
{
uint8_t v___x_287_; 
v___x_287_ = 0;
return v___x_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0___boxed(lean_object* v_x_288_){
_start:
{
uint8_t v_res_289_; lean_object* v_r_290_; 
v_res_289_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0(v_x_288_);
lean_dec(v_x_288_);
v_r_290_ = lean_box(v_res_289_);
return v_r_290_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1(lean_object* v_fvarId_291_, lean_object* v_x_292_){
_start:
{
uint8_t v___x_293_; 
v___x_293_ = l_Lean_instBEqFVarId_beq(v_fvarId_291_, v_x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1___boxed(lean_object* v_fvarId_294_, lean_object* v_x_295_){
_start:
{
uint8_t v_res_296_; lean_object* v_r_297_; 
v_res_296_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1(v_fvarId_294_, v_x_295_);
lean_dec(v_x_295_);
lean_dec(v_fvarId_294_);
v_r_297_ = lean_box(v_res_296_);
return v_r_297_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___f_298_; 
v___f_298_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__0___boxed), 1, 0);
return v___f_298_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_299_ = lean_box(0);
v___x_300_ = lean_unsigned_to_nat(16u);
v___x_301_ = lean_mk_array(v___x_300_, v___x_299_);
return v___x_301_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; 
v___x_302_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1, &l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__1);
v___x_303_ = lean_unsigned_to_nat(0u);
v___x_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_304_, 0, v___x_303_);
lean_ctor_set(v___x_304_, 1, v___x_302_);
return v___x_304_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(lean_object* v_e_305_, lean_object* v_fvarId_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; uint8_t v_fst_313_; lean_object* v_mctx_314_; lean_object* v___y_333_; lean_object* v_mctx_338_; lean_object* v___f_339_; lean_object* v___f_340_; lean_object* v___x_341_; lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_310_ = lean_st_ref_get(v___y_308_);
lean_dec(v___x_310_);
v___x_311_ = lean_st_ref_get(v___y_307_);
v_mctx_338_ = lean_ctor_get(v___x_311_, 0);
lean_inc_ref_n(v_mctx_338_, 2);
lean_dec(v___x_311_);
v___f_339_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__0, &l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__0_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__0);
v___f_340_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_340_, 0, v_fvarId_306_);
v___x_341_ = lean_obj_once(&l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___closed__2);
v___x_342_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_341_);
lean_ctor_set(v___x_342_, 1, v_mctx_338_);
v___x_343_ = l_Lean_Expr_hasFVar(v_e_305_);
if (v___x_343_ == 0)
{
uint8_t v___x_344_; 
v___x_344_ = l_Lean_Expr_hasMVar(v_e_305_);
if (v___x_344_ == 0)
{
lean_dec_ref(v___x_342_);
lean_dec_ref(v___f_340_);
lean_dec_ref(v_e_305_);
v_fst_313_ = v___x_344_;
v_mctx_314_ = v_mctx_338_;
goto v___jp_312_;
}
else
{
lean_object* v___x_345_; 
lean_dec_ref(v_mctx_338_);
v___x_345_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_340_, v___f_339_, v_e_305_, v___x_342_);
v___y_333_ = v___x_345_;
goto v___jp_332_;
}
}
else
{
lean_object* v___x_346_; 
lean_dec_ref(v_mctx_338_);
v___x_346_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_340_, v___f_339_, v_e_305_, v___x_342_);
v___y_333_ = v___x_346_;
goto v___jp_332_;
}
v___jp_312_:
{
lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v_cache_317_; lean_object* v_zetaDeltaFVarIds_318_; lean_object* v_postponed_319_; lean_object* v_diag_320_; lean_object* v___x_322_; uint8_t v_isShared_323_; uint8_t v_isSharedCheck_330_; 
v___x_315_ = lean_st_ref_get(v___y_308_);
lean_dec(v___x_315_);
v___x_316_ = lean_st_ref_take(v___y_307_);
v_cache_317_ = lean_ctor_get(v___x_316_, 1);
v_zetaDeltaFVarIds_318_ = lean_ctor_get(v___x_316_, 2);
v_postponed_319_ = lean_ctor_get(v___x_316_, 3);
v_diag_320_ = lean_ctor_get(v___x_316_, 4);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_316_);
if (v_isSharedCheck_330_ == 0)
{
lean_object* v_unused_331_; 
v_unused_331_ = lean_ctor_get(v___x_316_, 0);
lean_dec(v_unused_331_);
v___x_322_ = v___x_316_;
v_isShared_323_ = v_isSharedCheck_330_;
goto v_resetjp_321_;
}
else
{
lean_inc(v_diag_320_);
lean_inc(v_postponed_319_);
lean_inc(v_zetaDeltaFVarIds_318_);
lean_inc(v_cache_317_);
lean_dec(v___x_316_);
v___x_322_ = lean_box(0);
v_isShared_323_ = v_isSharedCheck_330_;
goto v_resetjp_321_;
}
v_resetjp_321_:
{
lean_object* v___x_325_; 
if (v_isShared_323_ == 0)
{
lean_ctor_set(v___x_322_, 0, v_mctx_314_);
v___x_325_ = v___x_322_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_mctx_314_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_cache_317_);
lean_ctor_set(v_reuseFailAlloc_329_, 2, v_zetaDeltaFVarIds_318_);
lean_ctor_set(v_reuseFailAlloc_329_, 3, v_postponed_319_);
lean_ctor_set(v_reuseFailAlloc_329_, 4, v_diag_320_);
v___x_325_ = v_reuseFailAlloc_329_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_326_ = lean_st_ref_set(v___y_307_, v___x_325_);
v___x_327_ = lean_box(v_fst_313_);
v___x_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
return v___x_328_;
}
}
}
v___jp_332_:
{
lean_object* v_snd_334_; lean_object* v_fst_335_; lean_object* v_mctx_336_; uint8_t v___x_337_; 
v_snd_334_ = lean_ctor_get(v___y_333_, 1);
lean_inc(v_snd_334_);
v_fst_335_ = lean_ctor_get(v___y_333_, 0);
lean_inc(v_fst_335_);
lean_dec_ref(v___y_333_);
v_mctx_336_ = lean_ctor_get(v_snd_334_, 1);
lean_inc_ref(v_mctx_336_);
lean_dec(v_snd_334_);
v___x_337_ = lean_unbox(v_fst_335_);
lean_dec(v_fst_335_);
v_fst_313_ = v___x_337_;
v_mctx_314_ = v_mctx_336_;
goto v___jp_312_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg___boxed(lean_object* v_e_347_, lean_object* v_fvarId_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_e_347_, v_fvarId_348_, v___y_349_, v___y_350_);
lean_dec(v___y_350_);
lean_dec(v___y_349_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0(lean_object* v_e_353_, lean_object* v_fvarId_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_e_353_, v_fvarId_354_, v___y_356_, v___y_358_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___boxed(lean_object* v_e_361_, lean_object* v_fvarId_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_, lean_object* v___y_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0(v_e_361_, v_fvarId_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_);
lean_dec(v___y_366_);
lean_dec_ref(v___y_365_);
lean_dec(v___y_364_);
lean_dec_ref(v___y_363_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg(lean_object* v_mvarId_369_, lean_object* v_x_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_369_, v_x_370_, v___y_371_, v___y_372_, v___y_373_, v___y_374_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_384_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_384_ == 0)
{
v___x_379_ = v___x_376_;
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_376_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_384_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_382_; 
if (v_isShared_380_ == 0)
{
v___x_382_ = v___x_379_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_a_377_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
v_a_385_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_376_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_376_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg___boxed(lean_object* v_mvarId_393_, lean_object* v_x_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg(v_mvarId_393_, v_x_394_, v___y_395_, v___y_396_, v___y_397_, v___y_398_);
lean_dec(v___y_398_);
lean_dec_ref(v___y_397_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2(lean_object* v_00_u03b1_401_, lean_object* v_mvarId_402_, lean_object* v_x_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg(v_mvarId_402_, v_x_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___boxed(lean_object* v_00_u03b1_410_, lean_object* v_mvarId_411_, lean_object* v_x_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2(v_00_u03b1_410_, v_mvarId_411_, v_x_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
return v_res_418_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
v___x_419_ = lean_box(0);
v___x_420_ = lean_box(0);
v___x_421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_421_, 0, v___x_420_);
lean_ctor_set(v___x_421_, 1, v___x_419_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6(lean_object* v_mvarId_422_, lean_object* v_as_423_, size_t v_sz_424_, size_t v_i_425_, lean_object* v_b_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
uint8_t v___x_432_; 
v___x_432_ = lean_usize_dec_lt(v_i_425_, v_sz_424_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; 
lean_dec(v_mvarId_422_);
v___x_433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_433_, 0, v_b_426_);
return v___x_433_;
}
else
{
lean_object* v_snd_434_; lean_object* v___x_436_; uint8_t v_isShared_437_; uint8_t v_isSharedCheck_529_; 
v_snd_434_ = lean_ctor_get(v_b_426_, 1);
v_isSharedCheck_529_ = !lean_is_exclusive(v_b_426_);
if (v_isSharedCheck_529_ == 0)
{
lean_object* v_unused_530_; 
v_unused_530_ = lean_ctor_get(v_b_426_, 0);
lean_dec(v_unused_530_);
v___x_436_ = v_b_426_;
v_isShared_437_ = v_isSharedCheck_529_;
goto v_resetjp_435_;
}
else
{
lean_inc(v_snd_434_);
lean_dec(v_b_426_);
v___x_436_ = lean_box(0);
v_isShared_437_ = v_isSharedCheck_529_;
goto v_resetjp_435_;
}
v_resetjp_435_:
{
lean_object* v___x_438_; lean_object* v_a_440_; lean_object* v_a_447_; 
v___x_438_ = lean_box(0);
v_a_447_ = lean_array_uget_borrowed(v_as_423_, v_i_425_);
if (lean_obj_tag(v_a_447_) == 0)
{
v_a_440_ = v_snd_434_;
goto v___jp_439_;
}
else
{
lean_object* v_val_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_val_448_ = lean_ctor_get(v_a_447_, 0);
v___x_449_ = l_Lean_LocalDecl_type(v_val_448_);
v___x_450_ = l_Lean_Meta_matchEq_x3f(v___x_449_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
if (lean_obj_tag(v___x_450_) == 0)
{
lean_object* v_a_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v_a_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc(v_a_451_);
lean_dec_ref(v___x_450_);
v___x_452_ = lean_box(0);
v___x_453_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0);
if (lean_obj_tag(v_a_451_) == 1)
{
lean_object* v_val_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_520_; 
v_val_454_ = lean_ctor_get(v_a_451_, 0);
v_isSharedCheck_520_ = !lean_is_exclusive(v_a_451_);
if (v_isSharedCheck_520_ == 0)
{
v___x_456_ = v_a_451_;
v_isShared_457_ = v_isSharedCheck_520_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_val_454_);
lean_dec(v_a_451_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_520_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
lean_object* v_snd_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_518_; 
v_snd_458_ = lean_ctor_get(v_val_454_, 1);
v_isSharedCheck_518_ = !lean_is_exclusive(v_val_454_);
if (v_isSharedCheck_518_ == 0)
{
lean_object* v_unused_519_; 
v_unused_519_ = lean_ctor_get(v_val_454_, 0);
lean_dec(v_unused_519_);
v___x_460_ = v_val_454_;
v_isShared_461_ = v_isSharedCheck_518_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_snd_458_);
lean_dec(v_val_454_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_518_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v_fst_462_; lean_object* v_snd_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_517_; 
v_fst_462_ = lean_ctor_get(v_snd_458_, 0);
v_snd_463_ = lean_ctor_get(v_snd_458_, 1);
v_isSharedCheck_517_ = !lean_is_exclusive(v_snd_458_);
if (v_isSharedCheck_517_ == 0)
{
v___x_465_ = v_snd_458_;
v_isShared_466_ = v_isSharedCheck_517_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_snd_463_);
lean_inc(v_fst_462_);
lean_dec(v_snd_458_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_517_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
uint8_t v___x_467_; 
v___x_467_ = l_Lean_Expr_isFVar(v_fst_462_);
if (v___x_467_ == 0)
{
lean_del_object(v___x_465_);
lean_dec(v_snd_463_);
lean_dec(v_fst_462_);
lean_del_object(v___x_460_);
lean_del_object(v___x_456_);
lean_dec(v_snd_434_);
v_a_440_ = v___x_453_;
goto v___jp_439_;
}
else
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = l_Lean_Expr_fvarId_x21(v_fst_462_);
lean_dec(v_fst_462_);
lean_inc(v___x_468_);
v___x_469_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_snd_463_, v___x_468_, v___y_428_, v___y_430_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; uint8_t v___x_471_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_a_470_);
lean_dec_ref(v___x_469_);
v___x_471_ = lean_unbox(v_a_470_);
lean_dec(v_a_470_);
if (v___x_471_ == 0)
{
if (v___x_467_ == 0)
{
lean_dec(v___x_468_);
lean_del_object(v___x_465_);
lean_del_object(v___x_460_);
lean_del_object(v___x_456_);
lean_dec(v_snd_434_);
v_a_440_ = v___x_453_;
goto v___jp_439_;
}
else
{
lean_object* v___x_472_; 
lean_inc(v_mvarId_422_);
v___x_472_ = l_Lean_Meta_subst_x3f(v_mvarId_422_, v___x_468_, v___y_427_, v___y_428_, v___y_429_, v___y_430_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_500_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_500_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_500_ == 0)
{
v___x_475_ = v___x_472_;
v_isShared_476_ = v_isSharedCheck_500_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_a_473_);
lean_dec(v___x_472_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_500_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
if (lean_obj_tag(v_a_473_) == 0)
{
lean_del_object(v___x_475_);
lean_del_object(v___x_465_);
lean_del_object(v___x_460_);
lean_del_object(v___x_456_);
lean_dec(v_snd_434_);
v_a_440_ = v___x_453_;
goto v___jp_439_;
}
else
{
lean_object* v_val_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_499_; 
lean_del_object(v___x_436_);
lean_dec(v_mvarId_422_);
v_val_477_ = lean_ctor_get(v_a_473_, 0);
v_isSharedCheck_499_ = !lean_is_exclusive(v_a_473_);
if (v_isSharedCheck_499_ == 0)
{
v___x_479_ = v_a_473_;
v_isShared_480_ = v_isSharedCheck_499_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_val_477_);
lean_dec(v_a_473_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_499_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_485_; 
v___x_481_ = lean_unsigned_to_nat(1u);
v___x_482_ = lean_mk_empty_array_with_capacity(v___x_481_);
v___x_483_ = lean_array_push(v___x_482_, v_val_477_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 0, v___x_483_);
v___x_485_ = v___x_479_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_498_; 
v_reuseFailAlloc_498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_498_, 0, v___x_483_);
v___x_485_ = v_reuseFailAlloc_498_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
lean_object* v___x_487_; 
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v___x_452_);
lean_ctor_set(v___x_465_, 0, v___x_485_);
v___x_487_ = v___x_465_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v___x_485_);
lean_ctor_set(v_reuseFailAlloc_497_, 1, v___x_452_);
v___x_487_ = v_reuseFailAlloc_497_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_489_; 
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_487_);
v___x_489_ = v___x_456_;
goto v_reusejp_488_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v___x_487_);
v___x_489_ = v_reuseFailAlloc_496_;
goto v_reusejp_488_;
}
v_reusejp_488_:
{
lean_object* v___x_491_; 
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 1, v_snd_434_);
lean_ctor_set(v___x_460_, 0, v___x_489_);
v___x_491_ = v___x_460_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_snd_434_);
v___x_491_ = v_reuseFailAlloc_495_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_493_; 
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_491_);
v___x_493_ = v___x_475_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v___x_491_);
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
}
}
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
lean_del_object(v___x_465_);
lean_del_object(v___x_460_);
lean_del_object(v___x_456_);
lean_del_object(v___x_436_);
lean_dec(v_snd_434_);
lean_dec(v_mvarId_422_);
v_a_501_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_472_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_472_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_501_);
v___x_506_ = v_reuseFailAlloc_507_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
return v___x_506_;
}
}
}
}
}
else
{
lean_dec(v___x_468_);
lean_del_object(v___x_465_);
lean_del_object(v___x_460_);
lean_del_object(v___x_456_);
lean_dec(v_snd_434_);
v_a_440_ = v___x_453_;
goto v___jp_439_;
}
}
else
{
lean_object* v_a_509_; lean_object* v___x_511_; uint8_t v_isShared_512_; uint8_t v_isSharedCheck_516_; 
lean_dec(v___x_468_);
lean_del_object(v___x_465_);
lean_del_object(v___x_460_);
lean_del_object(v___x_456_);
lean_del_object(v___x_436_);
lean_dec(v_snd_434_);
lean_dec(v_mvarId_422_);
v_a_509_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_516_ == 0)
{
v___x_511_ = v___x_469_;
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
else
{
lean_inc(v_a_509_);
lean_dec(v___x_469_);
v___x_511_ = lean_box(0);
v_isShared_512_ = v_isSharedCheck_516_;
goto v_resetjp_510_;
}
v_resetjp_510_:
{
lean_object* v___x_514_; 
if (v_isShared_512_ == 0)
{
v___x_514_ = v___x_511_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_509_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
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
lean_dec(v_a_451_);
lean_dec(v_snd_434_);
v_a_440_ = v___x_453_;
goto v___jp_439_;
}
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
lean_del_object(v___x_436_);
lean_dec(v_snd_434_);
lean_dec(v_mvarId_422_);
v_a_521_ = lean_ctor_get(v___x_450_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_450_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_450_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_450_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
v___jp_439_:
{
lean_object* v___x_442_; 
if (v_isShared_437_ == 0)
{
lean_ctor_set(v___x_436_, 1, v_a_440_);
lean_ctor_set(v___x_436_, 0, v___x_438_);
v___x_442_ = v___x_436_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_446_; 
v_reuseFailAlloc_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_446_, 0, v___x_438_);
lean_ctor_set(v_reuseFailAlloc_446_, 1, v_a_440_);
v___x_442_ = v_reuseFailAlloc_446_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
size_t v___x_443_; size_t v___x_444_; 
v___x_443_ = ((size_t)1ULL);
v___x_444_ = lean_usize_add(v_i_425_, v___x_443_);
v_i_425_ = v___x_444_;
v_b_426_ = v___x_442_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___boxed(lean_object* v_mvarId_531_, lean_object* v_as_532_, lean_object* v_sz_533_, lean_object* v_i_534_, lean_object* v_b_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
size_t v_sz_boxed_541_; size_t v_i_boxed_542_; lean_object* v_res_543_; 
v_sz_boxed_541_ = lean_unbox_usize(v_sz_533_);
lean_dec(v_sz_533_);
v_i_boxed_542_ = lean_unbox_usize(v_i_534_);
lean_dec(v_i_534_);
v_res_543_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6(v_mvarId_531_, v_as_532_, v_sz_boxed_541_, v_i_boxed_542_, v_b_535_, v___y_536_, v___y_537_, v___y_538_, v___y_539_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
lean_dec(v___y_537_);
lean_dec_ref(v___y_536_);
lean_dec_ref(v_as_532_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2(lean_object* v_mvarId_544_, lean_object* v_as_545_, size_t v_sz_546_, size_t v_i_547_, lean_object* v_b_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
uint8_t v___x_554_; 
v___x_554_ = lean_usize_dec_lt(v_i_547_, v_sz_546_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; 
lean_dec(v_mvarId_544_);
v___x_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_555_, 0, v_b_548_);
return v___x_555_;
}
else
{
lean_object* v_snd_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_651_; 
v_snd_556_ = lean_ctor_get(v_b_548_, 1);
v_isSharedCheck_651_ = !lean_is_exclusive(v_b_548_);
if (v_isSharedCheck_651_ == 0)
{
lean_object* v_unused_652_; 
v_unused_652_ = lean_ctor_get(v_b_548_, 0);
lean_dec(v_unused_652_);
v___x_558_ = v_b_548_;
v_isShared_559_ = v_isSharedCheck_651_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_snd_556_);
lean_dec(v_b_548_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_651_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v___x_560_; lean_object* v_a_562_; lean_object* v_a_569_; 
v___x_560_ = lean_box(0);
v_a_569_ = lean_array_uget_borrowed(v_as_545_, v_i_547_);
if (lean_obj_tag(v_a_569_) == 0)
{
v_a_562_ = v_snd_556_;
goto v___jp_561_;
}
else
{
lean_object* v_val_570_; lean_object* v___x_571_; lean_object* v___x_572_; 
v_val_570_ = lean_ctor_get(v_a_569_, 0);
v___x_571_ = l_Lean_LocalDecl_type(v_val_570_);
v___x_572_ = l_Lean_Meta_matchEq_x3f(v___x_571_, v___y_549_, v___y_550_, v___y_551_, v___y_552_);
if (lean_obj_tag(v___x_572_) == 0)
{
lean_object* v_a_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_a_573_ = lean_ctor_get(v___x_572_, 0);
lean_inc(v_a_573_);
lean_dec_ref(v___x_572_);
v___x_574_ = lean_box(0);
v___x_575_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6___closed__0);
if (lean_obj_tag(v_a_573_) == 1)
{
lean_object* v_val_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_642_; 
v_val_576_ = lean_ctor_get(v_a_573_, 0);
v_isSharedCheck_642_ = !lean_is_exclusive(v_a_573_);
if (v_isSharedCheck_642_ == 0)
{
v___x_578_ = v_a_573_;
v_isShared_579_ = v_isSharedCheck_642_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_val_576_);
lean_dec(v_a_573_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_642_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v_snd_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_640_; 
v_snd_580_ = lean_ctor_get(v_val_576_, 1);
v_isSharedCheck_640_ = !lean_is_exclusive(v_val_576_);
if (v_isSharedCheck_640_ == 0)
{
lean_object* v_unused_641_; 
v_unused_641_ = lean_ctor_get(v_val_576_, 0);
lean_dec(v_unused_641_);
v___x_582_ = v_val_576_;
v_isShared_583_ = v_isSharedCheck_640_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_snd_580_);
lean_dec(v_val_576_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_640_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v_fst_584_; lean_object* v_snd_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_639_; 
v_fst_584_ = lean_ctor_get(v_snd_580_, 0);
v_snd_585_ = lean_ctor_get(v_snd_580_, 1);
v_isSharedCheck_639_ = !lean_is_exclusive(v_snd_580_);
if (v_isSharedCheck_639_ == 0)
{
v___x_587_ = v_snd_580_;
v_isShared_588_ = v_isSharedCheck_639_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_snd_585_);
lean_inc(v_fst_584_);
lean_dec(v_snd_580_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_639_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
uint8_t v___x_589_; 
v___x_589_ = l_Lean_Expr_isFVar(v_fst_584_);
if (v___x_589_ == 0)
{
lean_del_object(v___x_587_);
lean_dec(v_snd_585_);
lean_dec(v_fst_584_);
lean_del_object(v___x_582_);
lean_del_object(v___x_578_);
lean_dec(v_snd_556_);
v_a_562_ = v___x_575_;
goto v___jp_561_;
}
else
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = l_Lean_Expr_fvarId_x21(v_fst_584_);
lean_dec(v_fst_584_);
lean_inc(v___x_590_);
v___x_591_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_snd_585_, v___x_590_, v___y_550_, v___y_552_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; uint8_t v___x_593_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
lean_dec_ref(v___x_591_);
v___x_593_ = lean_unbox(v_a_592_);
lean_dec(v_a_592_);
if (v___x_593_ == 0)
{
if (v___x_589_ == 0)
{
lean_dec(v___x_590_);
lean_del_object(v___x_587_);
lean_del_object(v___x_582_);
lean_del_object(v___x_578_);
lean_dec(v_snd_556_);
v_a_562_ = v___x_575_;
goto v___jp_561_;
}
else
{
lean_object* v___x_594_; 
lean_inc(v_mvarId_544_);
v___x_594_ = l_Lean_Meta_subst_x3f(v_mvarId_544_, v___x_590_, v___y_549_, v___y_550_, v___y_551_, v___y_552_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_622_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_622_ == 0)
{
v___x_597_ = v___x_594_;
v_isShared_598_ = v_isSharedCheck_622_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v___x_594_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_622_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
if (lean_obj_tag(v_a_595_) == 0)
{
lean_del_object(v___x_597_);
lean_del_object(v___x_587_);
lean_del_object(v___x_582_);
lean_del_object(v___x_578_);
lean_dec(v_snd_556_);
v_a_562_ = v___x_575_;
goto v___jp_561_;
}
else
{
lean_object* v_val_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_621_; 
lean_del_object(v___x_558_);
lean_dec(v_mvarId_544_);
v_val_599_ = lean_ctor_get(v_a_595_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v_a_595_);
if (v_isSharedCheck_621_ == 0)
{
v___x_601_ = v_a_595_;
v_isShared_602_ = v_isSharedCheck_621_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_val_599_);
lean_dec(v_a_595_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_621_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_603_ = lean_unsigned_to_nat(1u);
v___x_604_ = lean_mk_empty_array_with_capacity(v___x_603_);
v___x_605_ = lean_array_push(v___x_604_, v_val_599_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 0, v___x_605_);
v___x_607_ = v___x_601_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v___x_605_);
v___x_607_ = v_reuseFailAlloc_620_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
lean_object* v___x_609_; 
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 1, v___x_574_);
lean_ctor_set(v___x_587_, 0, v___x_607_);
v___x_609_ = v___x_587_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v___x_607_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v___x_574_);
v___x_609_ = v_reuseFailAlloc_619_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
lean_object* v___x_611_; 
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v___x_609_);
v___x_611_ = v___x_578_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v___x_609_);
v___x_611_ = v_reuseFailAlloc_618_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
lean_object* v___x_613_; 
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 1, v_snd_556_);
lean_ctor_set(v___x_582_, 0, v___x_611_);
v___x_613_ = v___x_582_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v___x_611_);
lean_ctor_set(v_reuseFailAlloc_617_, 1, v_snd_556_);
v___x_613_ = v_reuseFailAlloc_617_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
lean_object* v___x_615_; 
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 0, v___x_613_);
v___x_615_ = v___x_597_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v___x_613_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
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
lean_object* v_a_623_; lean_object* v___x_625_; uint8_t v_isShared_626_; uint8_t v_isSharedCheck_630_; 
lean_del_object(v___x_587_);
lean_del_object(v___x_582_);
lean_del_object(v___x_578_);
lean_del_object(v___x_558_);
lean_dec(v_snd_556_);
lean_dec(v_mvarId_544_);
v_a_623_ = lean_ctor_get(v___x_594_, 0);
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_630_ == 0)
{
v___x_625_ = v___x_594_;
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
else
{
lean_inc(v_a_623_);
lean_dec(v___x_594_);
v___x_625_ = lean_box(0);
v_isShared_626_ = v_isSharedCheck_630_;
goto v_resetjp_624_;
}
v_resetjp_624_:
{
lean_object* v___x_628_; 
if (v_isShared_626_ == 0)
{
v___x_628_ = v___x_625_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v_a_623_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
}
else
{
lean_dec(v___x_590_);
lean_del_object(v___x_587_);
lean_del_object(v___x_582_);
lean_del_object(v___x_578_);
lean_dec(v_snd_556_);
v_a_562_ = v___x_575_;
goto v___jp_561_;
}
}
else
{
lean_object* v_a_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_638_; 
lean_dec(v___x_590_);
lean_del_object(v___x_587_);
lean_del_object(v___x_582_);
lean_del_object(v___x_578_);
lean_del_object(v___x_558_);
lean_dec(v_snd_556_);
lean_dec(v_mvarId_544_);
v_a_631_ = lean_ctor_get(v___x_591_, 0);
v_isSharedCheck_638_ = !lean_is_exclusive(v___x_591_);
if (v_isSharedCheck_638_ == 0)
{
v___x_633_ = v___x_591_;
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_a_631_);
lean_dec(v___x_591_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_638_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v___x_636_; 
if (v_isShared_634_ == 0)
{
v___x_636_ = v___x_633_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_a_631_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
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
lean_dec(v_a_573_);
lean_dec(v_snd_556_);
v_a_562_ = v___x_575_;
goto v___jp_561_;
}
}
else
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_650_; 
lean_del_object(v___x_558_);
lean_dec(v_snd_556_);
lean_dec(v_mvarId_544_);
v_a_643_ = lean_ctor_get(v___x_572_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_572_);
if (v_isSharedCheck_650_ == 0)
{
v___x_645_ = v___x_572_;
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_572_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_650_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v___x_648_; 
if (v_isShared_646_ == 0)
{
v___x_648_ = v___x_645_;
goto v_reusejp_647_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_643_);
v___x_648_ = v_reuseFailAlloc_649_;
goto v_reusejp_647_;
}
v_reusejp_647_:
{
return v___x_648_;
}
}
}
}
v___jp_561_:
{
lean_object* v___x_564_; 
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 1, v_a_562_);
lean_ctor_set(v___x_558_, 0, v___x_560_);
v___x_564_ = v___x_558_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v___x_560_);
lean_ctor_set(v_reuseFailAlloc_568_, 1, v_a_562_);
v___x_564_ = v_reuseFailAlloc_568_;
goto v_reusejp_563_;
}
v_reusejp_563_:
{
size_t v___x_565_; size_t v___x_566_; lean_object* v___x_567_; 
v___x_565_ = ((size_t)1ULL);
v___x_566_ = lean_usize_add(v_i_547_, v___x_565_);
v___x_567_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2_spec__6(v_mvarId_544_, v_as_545_, v_sz_546_, v___x_566_, v___x_564_, v___y_549_, v___y_550_, v___y_551_, v___y_552_);
return v___x_567_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2___boxed(lean_object* v_mvarId_653_, lean_object* v_as_654_, lean_object* v_sz_655_, lean_object* v_i_656_, lean_object* v_b_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
size_t v_sz_boxed_663_; size_t v_i_boxed_664_; lean_object* v_res_665_; 
v_sz_boxed_663_ = lean_unbox_usize(v_sz_655_);
lean_dec(v_sz_655_);
v_i_boxed_664_ = lean_unbox_usize(v_i_656_);
lean_dec(v_i_656_);
v_res_665_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2(v_mvarId_653_, v_as_654_, v_sz_boxed_663_, v_i_boxed_664_, v_b_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec_ref(v_as_654_);
return v_res_665_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0(void){
_start:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; 
v___x_666_ = lean_box(0);
v___x_667_ = lean_box(0);
v___x_668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set(v___x_668_, 1, v___x_666_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5(lean_object* v_mvarId_669_, lean_object* v_as_670_, size_t v_sz_671_, size_t v_i_672_, lean_object* v_b_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_){
_start:
{
uint8_t v___x_679_; 
v___x_679_ = lean_usize_dec_lt(v_i_672_, v_sz_671_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; 
lean_dec(v_mvarId_669_);
v___x_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_680_, 0, v_b_673_);
return v___x_680_;
}
else
{
lean_object* v_snd_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_783_; 
v_snd_681_ = lean_ctor_get(v_b_673_, 1);
v_isSharedCheck_783_ = !lean_is_exclusive(v_b_673_);
if (v_isSharedCheck_783_ == 0)
{
lean_object* v_unused_784_; 
v_unused_784_ = lean_ctor_get(v_b_673_, 0);
lean_dec(v_unused_784_);
v___x_683_ = v_b_673_;
v_isShared_684_ = v_isSharedCheck_783_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_snd_681_);
lean_dec(v_b_673_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_783_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_685_; lean_object* v_a_687_; lean_object* v_a_694_; 
v___x_685_ = lean_box(0);
v_a_694_ = lean_array_uget(v_as_670_, v_i_672_);
if (lean_obj_tag(v_a_694_) == 0)
{
v_a_687_ = v_snd_681_;
goto v___jp_686_;
}
else
{
lean_object* v_val_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_782_; 
v_val_695_ = lean_ctor_get(v_a_694_, 0);
v_isSharedCheck_782_ = !lean_is_exclusive(v_a_694_);
if (v_isSharedCheck_782_ == 0)
{
v___x_697_ = v_a_694_;
v_isShared_698_ = v_isSharedCheck_782_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_val_695_);
lean_dec(v_a_694_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_782_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_699_ = l_Lean_LocalDecl_type(v_val_695_);
lean_dec(v_val_695_);
v___x_700_ = l_Lean_Meta_matchEq_x3f(v___x_699_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
if (lean_obj_tag(v___x_700_) == 0)
{
lean_object* v_a_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v_a_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_a_701_);
lean_dec_ref(v___x_700_);
v___x_702_ = lean_box(0);
v___x_703_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0);
if (lean_obj_tag(v_a_701_) == 1)
{
lean_object* v_val_704_; lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_773_; 
v_val_704_ = lean_ctor_get(v_a_701_, 0);
v_isSharedCheck_773_ = !lean_is_exclusive(v_a_701_);
if (v_isSharedCheck_773_ == 0)
{
v___x_706_ = v_a_701_;
v_isShared_707_ = v_isSharedCheck_773_;
goto v_resetjp_705_;
}
else
{
lean_inc(v_val_704_);
lean_dec(v_a_701_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_773_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v_snd_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_771_; 
v_snd_708_ = lean_ctor_get(v_val_704_, 1);
v_isSharedCheck_771_ = !lean_is_exclusive(v_val_704_);
if (v_isSharedCheck_771_ == 0)
{
lean_object* v_unused_772_; 
v_unused_772_ = lean_ctor_get(v_val_704_, 0);
lean_dec(v_unused_772_);
v___x_710_ = v_val_704_;
v_isShared_711_ = v_isSharedCheck_771_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_snd_708_);
lean_dec(v_val_704_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_771_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v_fst_712_; lean_object* v_snd_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_770_; 
v_fst_712_ = lean_ctor_get(v_snd_708_, 0);
v_snd_713_ = lean_ctor_get(v_snd_708_, 1);
v_isSharedCheck_770_ = !lean_is_exclusive(v_snd_708_);
if (v_isSharedCheck_770_ == 0)
{
v___x_715_ = v_snd_708_;
v_isShared_716_ = v_isSharedCheck_770_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_snd_713_);
lean_inc(v_fst_712_);
lean_dec(v_snd_708_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_770_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
uint8_t v___x_717_; 
v___x_717_ = l_Lean_Expr_isFVar(v_fst_712_);
if (v___x_717_ == 0)
{
lean_del_object(v___x_715_);
lean_dec(v_snd_713_);
lean_dec(v_fst_712_);
lean_del_object(v___x_710_);
lean_del_object(v___x_706_);
lean_del_object(v___x_697_);
lean_dec(v_snd_681_);
v_a_687_ = v___x_703_;
goto v___jp_686_;
}
else
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = l_Lean_Expr_fvarId_x21(v_fst_712_);
lean_dec(v_fst_712_);
lean_inc(v___x_718_);
v___x_719_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_snd_713_, v___x_718_, v___y_675_, v___y_677_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; uint8_t v___x_721_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
lean_inc(v_a_720_);
lean_dec_ref(v___x_719_);
v___x_721_ = lean_unbox(v_a_720_);
lean_dec(v_a_720_);
if (v___x_721_ == 0)
{
if (v___x_717_ == 0)
{
lean_dec(v___x_718_);
lean_del_object(v___x_715_);
lean_del_object(v___x_710_);
lean_del_object(v___x_706_);
lean_del_object(v___x_697_);
lean_dec(v_snd_681_);
v_a_687_ = v___x_703_;
goto v___jp_686_;
}
else
{
lean_object* v___x_722_; 
lean_inc(v_mvarId_669_);
v___x_722_ = l_Lean_Meta_subst_x3f(v_mvarId_669_, v___x_718_, v___y_674_, v___y_675_, v___y_676_, v___y_677_);
if (lean_obj_tag(v___x_722_) == 0)
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_753_; 
v_a_723_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_753_ == 0)
{
v___x_725_ = v___x_722_;
v_isShared_726_ = v_isSharedCheck_753_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_722_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_753_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
if (lean_obj_tag(v_a_723_) == 0)
{
lean_del_object(v___x_725_);
lean_del_object(v___x_715_);
lean_del_object(v___x_710_);
lean_del_object(v___x_706_);
lean_del_object(v___x_697_);
lean_dec(v_snd_681_);
v_a_687_ = v___x_703_;
goto v___jp_686_;
}
else
{
lean_object* v_val_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_752_; 
lean_del_object(v___x_683_);
lean_dec(v_mvarId_669_);
v_val_727_ = lean_ctor_get(v_a_723_, 0);
v_isSharedCheck_752_ = !lean_is_exclusive(v_a_723_);
if (v_isSharedCheck_752_ == 0)
{
v___x_729_ = v_a_723_;
v_isShared_730_ = v_isSharedCheck_752_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_val_727_);
lean_dec(v_a_723_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_752_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_735_; 
v___x_731_ = lean_unsigned_to_nat(1u);
v___x_732_ = lean_mk_empty_array_with_capacity(v___x_731_);
v___x_733_ = lean_array_push(v___x_732_, v_val_727_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v___x_733_);
v___x_735_ = v___x_729_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_751_; 
v_reuseFailAlloc_751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_751_, 0, v___x_733_);
v___x_735_ = v_reuseFailAlloc_751_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
lean_object* v___x_737_; 
if (v_isShared_716_ == 0)
{
lean_ctor_set(v___x_715_, 1, v___x_702_);
lean_ctor_set(v___x_715_, 0, v___x_735_);
v___x_737_ = v___x_715_;
goto v_reusejp_736_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v___x_735_);
lean_ctor_set(v_reuseFailAlloc_750_, 1, v___x_702_);
v___x_737_ = v_reuseFailAlloc_750_;
goto v_reusejp_736_;
}
v_reusejp_736_:
{
lean_object* v___x_739_; 
if (v_isShared_698_ == 0)
{
lean_ctor_set_tag(v___x_697_, 0);
lean_ctor_set(v___x_697_, 0, v___x_737_);
v___x_739_ = v___x_697_;
goto v_reusejp_738_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v___x_737_);
v___x_739_ = v_reuseFailAlloc_749_;
goto v_reusejp_738_;
}
v_reusejp_738_:
{
lean_object* v___x_741_; 
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 0, v___x_739_);
v___x_741_ = v___x_706_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_748_; 
v_reuseFailAlloc_748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_748_, 0, v___x_739_);
v___x_741_ = v_reuseFailAlloc_748_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_743_; 
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 1, v_snd_681_);
lean_ctor_set(v___x_710_, 0, v___x_741_);
v___x_743_ = v___x_710_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_741_);
lean_ctor_set(v_reuseFailAlloc_747_, 1, v_snd_681_);
v___x_743_ = v_reuseFailAlloc_747_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_745_; 
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 0, v___x_743_);
v___x_745_ = v___x_725_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_743_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
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
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_del_object(v___x_715_);
lean_del_object(v___x_710_);
lean_del_object(v___x_706_);
lean_del_object(v___x_697_);
lean_del_object(v___x_683_);
lean_dec(v_snd_681_);
lean_dec(v_mvarId_669_);
v_a_754_ = lean_ctor_get(v___x_722_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_722_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_722_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_722_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
}
else
{
lean_dec(v___x_718_);
lean_del_object(v___x_715_);
lean_del_object(v___x_710_);
lean_del_object(v___x_706_);
lean_del_object(v___x_697_);
lean_dec(v_snd_681_);
v_a_687_ = v___x_703_;
goto v___jp_686_;
}
}
else
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
lean_dec(v___x_718_);
lean_del_object(v___x_715_);
lean_del_object(v___x_710_);
lean_del_object(v___x_706_);
lean_del_object(v___x_697_);
lean_del_object(v___x_683_);
lean_dec(v_snd_681_);
lean_dec(v_mvarId_669_);
v_a_762_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_719_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_719_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
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
lean_dec(v_a_701_);
lean_del_object(v___x_697_);
lean_dec(v_snd_681_);
v_a_687_ = v___x_703_;
goto v___jp_686_;
}
}
else
{
lean_object* v_a_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_781_; 
lean_del_object(v___x_697_);
lean_del_object(v___x_683_);
lean_dec(v_snd_681_);
lean_dec(v_mvarId_669_);
v_a_774_ = lean_ctor_get(v___x_700_, 0);
v_isSharedCheck_781_ = !lean_is_exclusive(v___x_700_);
if (v_isSharedCheck_781_ == 0)
{
v___x_776_ = v___x_700_;
v_isShared_777_ = v_isSharedCheck_781_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_a_774_);
lean_dec(v___x_700_);
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
v___jp_686_:
{
lean_object* v___x_689_; 
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 1, v_a_687_);
lean_ctor_set(v___x_683_, 0, v___x_685_);
v___x_689_ = v___x_683_;
goto v_reusejp_688_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_685_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_a_687_);
v___x_689_ = v_reuseFailAlloc_693_;
goto v_reusejp_688_;
}
v_reusejp_688_:
{
size_t v___x_690_; size_t v___x_691_; 
v___x_690_ = ((size_t)1ULL);
v___x_691_ = lean_usize_add(v_i_672_, v___x_690_);
v_i_672_ = v___x_691_;
v_b_673_ = v___x_689_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___boxed(lean_object* v_mvarId_785_, lean_object* v_as_786_, lean_object* v_sz_787_, lean_object* v_i_788_, lean_object* v_b_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
size_t v_sz_boxed_795_; size_t v_i_boxed_796_; lean_object* v_res_797_; 
v_sz_boxed_795_ = lean_unbox_usize(v_sz_787_);
lean_dec(v_sz_787_);
v_i_boxed_796_ = lean_unbox_usize(v_i_788_);
lean_dec(v_i_788_);
v_res_797_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5(v_mvarId_785_, v_as_786_, v_sz_boxed_795_, v_i_boxed_796_, v_b_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec_ref(v_as_786_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4(lean_object* v_mvarId_798_, lean_object* v_as_799_, size_t v_sz_800_, size_t v_i_801_, lean_object* v_b_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
uint8_t v___x_808_; 
v___x_808_ = lean_usize_dec_lt(v_i_801_, v_sz_800_);
if (v___x_808_ == 0)
{
lean_object* v___x_809_; 
lean_dec(v_mvarId_798_);
v___x_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_809_, 0, v_b_802_);
return v___x_809_;
}
else
{
lean_object* v_snd_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_912_; 
v_snd_810_ = lean_ctor_get(v_b_802_, 1);
v_isSharedCheck_912_ = !lean_is_exclusive(v_b_802_);
if (v_isSharedCheck_912_ == 0)
{
lean_object* v_unused_913_; 
v_unused_913_ = lean_ctor_get(v_b_802_, 0);
lean_dec(v_unused_913_);
v___x_812_ = v_b_802_;
v_isShared_813_ = v_isSharedCheck_912_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_snd_810_);
lean_dec(v_b_802_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_912_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_814_; lean_object* v_a_816_; lean_object* v_a_823_; 
v___x_814_ = lean_box(0);
v_a_823_ = lean_array_uget(v_as_799_, v_i_801_);
if (lean_obj_tag(v_a_823_) == 0)
{
v_a_816_ = v_snd_810_;
goto v___jp_815_;
}
else
{
lean_object* v_val_824_; lean_object* v___x_826_; uint8_t v_isShared_827_; uint8_t v_isSharedCheck_911_; 
v_val_824_ = lean_ctor_get(v_a_823_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v_a_823_);
if (v_isSharedCheck_911_ == 0)
{
v___x_826_ = v_a_823_;
v_isShared_827_ = v_isSharedCheck_911_;
goto v_resetjp_825_;
}
else
{
lean_inc(v_val_824_);
lean_dec(v_a_823_);
v___x_826_ = lean_box(0);
v_isShared_827_ = v_isSharedCheck_911_;
goto v_resetjp_825_;
}
v_resetjp_825_:
{
lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_828_ = l_Lean_LocalDecl_type(v_val_824_);
lean_dec(v_val_824_);
v___x_829_ = l_Lean_Meta_matchEq_x3f(v___x_828_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
if (lean_obj_tag(v___x_829_) == 0)
{
lean_object* v_a_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v_a_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_a_830_);
lean_dec_ref(v___x_829_);
v___x_831_ = lean_box(0);
v___x_832_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5___closed__0);
if (lean_obj_tag(v_a_830_) == 1)
{
lean_object* v_val_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_902_; 
v_val_833_ = lean_ctor_get(v_a_830_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v_a_830_);
if (v_isSharedCheck_902_ == 0)
{
v___x_835_ = v_a_830_;
v_isShared_836_ = v_isSharedCheck_902_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_val_833_);
lean_dec(v_a_830_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_902_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v_snd_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_900_; 
v_snd_837_ = lean_ctor_get(v_val_833_, 1);
v_isSharedCheck_900_ = !lean_is_exclusive(v_val_833_);
if (v_isSharedCheck_900_ == 0)
{
lean_object* v_unused_901_; 
v_unused_901_ = lean_ctor_get(v_val_833_, 0);
lean_dec(v_unused_901_);
v___x_839_ = v_val_833_;
v_isShared_840_ = v_isSharedCheck_900_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_snd_837_);
lean_dec(v_val_833_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_900_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v_fst_841_; lean_object* v_snd_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_899_; 
v_fst_841_ = lean_ctor_get(v_snd_837_, 0);
v_snd_842_ = lean_ctor_get(v_snd_837_, 1);
v_isSharedCheck_899_ = !lean_is_exclusive(v_snd_837_);
if (v_isSharedCheck_899_ == 0)
{
v___x_844_ = v_snd_837_;
v_isShared_845_ = v_isSharedCheck_899_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_snd_842_);
lean_inc(v_fst_841_);
lean_dec(v_snd_837_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_899_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
uint8_t v___x_846_; 
v___x_846_ = l_Lean_Expr_isFVar(v_fst_841_);
if (v___x_846_ == 0)
{
lean_del_object(v___x_844_);
lean_dec(v_snd_842_);
lean_dec(v_fst_841_);
lean_del_object(v___x_839_);
lean_del_object(v___x_835_);
lean_del_object(v___x_826_);
lean_dec(v_snd_810_);
v_a_816_ = v___x_832_;
goto v___jp_815_;
}
else
{
lean_object* v___x_847_; lean_object* v___x_848_; 
v___x_847_ = l_Lean_Expr_fvarId_x21(v_fst_841_);
lean_dec(v_fst_841_);
lean_inc(v___x_847_);
v___x_848_ = l_Lean_exprDependsOn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__0___redArg(v_snd_842_, v___x_847_, v___y_804_, v___y_806_);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; uint8_t v___x_850_; 
v_a_849_ = lean_ctor_get(v___x_848_, 0);
lean_inc(v_a_849_);
lean_dec_ref(v___x_848_);
v___x_850_ = lean_unbox(v_a_849_);
lean_dec(v_a_849_);
if (v___x_850_ == 0)
{
if (v___x_846_ == 0)
{
lean_dec(v___x_847_);
lean_del_object(v___x_844_);
lean_del_object(v___x_839_);
lean_del_object(v___x_835_);
lean_del_object(v___x_826_);
lean_dec(v_snd_810_);
v_a_816_ = v___x_832_;
goto v___jp_815_;
}
else
{
lean_object* v___x_851_; 
lean_inc(v_mvarId_798_);
v___x_851_ = l_Lean_Meta_subst_x3f(v_mvarId_798_, v___x_847_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_882_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_882_ == 0)
{
v___x_854_ = v___x_851_;
v_isShared_855_ = v_isSharedCheck_882_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_a_852_);
lean_dec(v___x_851_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_882_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
if (lean_obj_tag(v_a_852_) == 0)
{
lean_del_object(v___x_854_);
lean_del_object(v___x_844_);
lean_del_object(v___x_839_);
lean_del_object(v___x_835_);
lean_del_object(v___x_826_);
lean_dec(v_snd_810_);
v_a_816_ = v___x_832_;
goto v___jp_815_;
}
else
{
lean_object* v_val_856_; lean_object* v___x_858_; uint8_t v_isShared_859_; uint8_t v_isSharedCheck_881_; 
lean_del_object(v___x_812_);
lean_dec(v_mvarId_798_);
v_val_856_ = lean_ctor_get(v_a_852_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v_a_852_);
if (v_isSharedCheck_881_ == 0)
{
v___x_858_ = v_a_852_;
v_isShared_859_ = v_isSharedCheck_881_;
goto v_resetjp_857_;
}
else
{
lean_inc(v_val_856_);
lean_dec(v_a_852_);
v___x_858_ = lean_box(0);
v_isShared_859_ = v_isSharedCheck_881_;
goto v_resetjp_857_;
}
v_resetjp_857_:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_864_; 
v___x_860_ = lean_unsigned_to_nat(1u);
v___x_861_ = lean_mk_empty_array_with_capacity(v___x_860_);
v___x_862_ = lean_array_push(v___x_861_, v_val_856_);
if (v_isShared_859_ == 0)
{
lean_ctor_set(v___x_858_, 0, v___x_862_);
v___x_864_ = v___x_858_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_880_; 
v_reuseFailAlloc_880_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_880_, 0, v___x_862_);
v___x_864_ = v_reuseFailAlloc_880_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
lean_object* v___x_866_; 
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 1, v___x_831_);
lean_ctor_set(v___x_844_, 0, v___x_864_);
v___x_866_ = v___x_844_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_879_; 
v_reuseFailAlloc_879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_879_, 0, v___x_864_);
lean_ctor_set(v_reuseFailAlloc_879_, 1, v___x_831_);
v___x_866_ = v_reuseFailAlloc_879_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
lean_object* v___x_868_; 
if (v_isShared_827_ == 0)
{
lean_ctor_set_tag(v___x_826_, 0);
lean_ctor_set(v___x_826_, 0, v___x_866_);
v___x_868_ = v___x_826_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_866_);
v___x_868_ = v_reuseFailAlloc_878_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
lean_object* v___x_870_; 
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_868_);
v___x_870_ = v___x_835_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_868_);
v___x_870_ = v_reuseFailAlloc_877_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
lean_object* v___x_872_; 
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v_snd_810_);
lean_ctor_set(v___x_839_, 0, v___x_870_);
v___x_872_ = v___x_839_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_876_; 
v_reuseFailAlloc_876_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_876_, 0, v___x_870_);
lean_ctor_set(v_reuseFailAlloc_876_, 1, v_snd_810_);
v___x_872_ = v_reuseFailAlloc_876_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
lean_object* v___x_874_; 
if (v_isShared_855_ == 0)
{
lean_ctor_set(v___x_854_, 0, v___x_872_);
v___x_874_ = v___x_854_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
v___x_874_ = v_reuseFailAlloc_875_;
goto v_reusejp_873_;
}
v_reusejp_873_:
{
return v___x_874_;
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
else
{
lean_object* v_a_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_890_; 
lean_del_object(v___x_844_);
lean_del_object(v___x_839_);
lean_del_object(v___x_835_);
lean_del_object(v___x_826_);
lean_del_object(v___x_812_);
lean_dec(v_snd_810_);
lean_dec(v_mvarId_798_);
v_a_883_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_890_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_890_ == 0)
{
v___x_885_ = v___x_851_;
v_isShared_886_ = v_isSharedCheck_890_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_a_883_);
lean_dec(v___x_851_);
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
else
{
lean_dec(v___x_847_);
lean_del_object(v___x_844_);
lean_del_object(v___x_839_);
lean_del_object(v___x_835_);
lean_del_object(v___x_826_);
lean_dec(v_snd_810_);
v_a_816_ = v___x_832_;
goto v___jp_815_;
}
}
else
{
lean_object* v_a_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_898_; 
lean_dec(v___x_847_);
lean_del_object(v___x_844_);
lean_del_object(v___x_839_);
lean_del_object(v___x_835_);
lean_del_object(v___x_826_);
lean_del_object(v___x_812_);
lean_dec(v_snd_810_);
lean_dec(v_mvarId_798_);
v_a_891_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_898_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_898_ == 0)
{
v___x_893_ = v___x_848_;
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_a_891_);
lean_dec(v___x_848_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_898_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_896_; 
if (v_isShared_894_ == 0)
{
v___x_896_ = v___x_893_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v_a_891_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
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
lean_dec(v_a_830_);
lean_del_object(v___x_826_);
lean_dec(v_snd_810_);
v_a_816_ = v___x_832_;
goto v___jp_815_;
}
}
else
{
lean_object* v_a_903_; lean_object* v___x_905_; uint8_t v_isShared_906_; uint8_t v_isSharedCheck_910_; 
lean_del_object(v___x_826_);
lean_del_object(v___x_812_);
lean_dec(v_snd_810_);
lean_dec(v_mvarId_798_);
v_a_903_ = lean_ctor_get(v___x_829_, 0);
v_isSharedCheck_910_ = !lean_is_exclusive(v___x_829_);
if (v_isSharedCheck_910_ == 0)
{
v___x_905_ = v___x_829_;
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
else
{
lean_inc(v_a_903_);
lean_dec(v___x_829_);
v___x_905_ = lean_box(0);
v_isShared_906_ = v_isSharedCheck_910_;
goto v_resetjp_904_;
}
v_resetjp_904_:
{
lean_object* v___x_908_; 
if (v_isShared_906_ == 0)
{
v___x_908_ = v___x_905_;
goto v_reusejp_907_;
}
else
{
lean_object* v_reuseFailAlloc_909_; 
v_reuseFailAlloc_909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_909_, 0, v_a_903_);
v___x_908_ = v_reuseFailAlloc_909_;
goto v_reusejp_907_;
}
v_reusejp_907_:
{
return v___x_908_;
}
}
}
}
}
v___jp_815_:
{
lean_object* v___x_818_; 
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 1, v_a_816_);
lean_ctor_set(v___x_812_, 0, v___x_814_);
v___x_818_ = v___x_812_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_822_, 1, v_a_816_);
v___x_818_ = v_reuseFailAlloc_822_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
size_t v___x_819_; size_t v___x_820_; lean_object* v___x_821_; 
v___x_819_ = ((size_t)1ULL);
v___x_820_ = lean_usize_add(v_i_801_, v___x_819_);
v___x_821_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4_spec__5(v_mvarId_798_, v_as_799_, v_sz_800_, v___x_820_, v___x_818_, v___y_803_, v___y_804_, v___y_805_, v___y_806_);
return v___x_821_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4___boxed(lean_object* v_mvarId_914_, lean_object* v_as_915_, lean_object* v_sz_916_, lean_object* v_i_917_, lean_object* v_b_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
size_t v_sz_boxed_924_; size_t v_i_boxed_925_; lean_object* v_res_926_; 
v_sz_boxed_924_ = lean_unbox_usize(v_sz_916_);
lean_dec(v_sz_916_);
v_i_boxed_925_ = lean_unbox_usize(v_i_917_);
lean_dec(v_i_917_);
v_res_926_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4(v_mvarId_914_, v_as_915_, v_sz_boxed_924_, v_i_boxed_925_, v_b_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec_ref(v_as_915_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1(lean_object* v_init_927_, lean_object* v_mvarId_928_, lean_object* v_n_929_, lean_object* v_b_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
if (lean_obj_tag(v_n_929_) == 0)
{
lean_object* v_cs_936_; lean_object* v___x_937_; lean_object* v___x_938_; size_t v_sz_939_; size_t v___x_940_; lean_object* v___x_941_; 
v_cs_936_ = lean_ctor_get(v_n_929_, 0);
v___x_937_ = lean_box(0);
v___x_938_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_938_, 0, v___x_937_);
lean_ctor_set(v___x_938_, 1, v_b_930_);
v_sz_939_ = lean_array_size(v_cs_936_);
v___x_940_ = ((size_t)0ULL);
v___x_941_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3(v_init_927_, v_mvarId_928_, v_cs_936_, v_sz_939_, v___x_940_, v___x_938_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_object* v_a_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_956_; 
v_a_942_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_956_ == 0)
{
v___x_944_ = v___x_941_;
v_isShared_945_ = v_isSharedCheck_956_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_a_942_);
lean_dec(v___x_941_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_956_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v_fst_946_; 
v_fst_946_ = lean_ctor_get(v_a_942_, 0);
if (lean_obj_tag(v_fst_946_) == 0)
{
lean_object* v_snd_947_; lean_object* v___x_948_; lean_object* v___x_950_; 
v_snd_947_ = lean_ctor_get(v_a_942_, 1);
lean_inc(v_snd_947_);
lean_dec(v_a_942_);
v___x_948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_948_, 0, v_snd_947_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 0, v___x_948_);
v___x_950_ = v___x_944_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v___x_948_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
else
{
lean_object* v_val_952_; lean_object* v___x_954_; 
lean_inc_ref(v_fst_946_);
lean_dec(v_a_942_);
v_val_952_ = lean_ctor_get(v_fst_946_, 0);
lean_inc(v_val_952_);
lean_dec_ref(v_fst_946_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 0, v_val_952_);
v___x_954_ = v___x_944_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_val_952_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
else
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_964_; 
v_a_957_ = lean_ctor_get(v___x_941_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_941_);
if (v_isSharedCheck_964_ == 0)
{
v___x_959_ = v___x_941_;
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_941_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_957_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
}
else
{
lean_object* v_vs_965_; lean_object* v___x_966_; lean_object* v___x_967_; size_t v_sz_968_; size_t v___x_969_; lean_object* v___x_970_; 
v_vs_965_ = lean_ctor_get(v_n_929_, 0);
v___x_966_ = lean_box(0);
v___x_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_967_, 0, v___x_966_);
lean_ctor_set(v___x_967_, 1, v_b_930_);
v_sz_968_ = lean_array_size(v_vs_965_);
v___x_969_ = ((size_t)0ULL);
v___x_970_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__4(v_mvarId_928_, v_vs_965_, v_sz_968_, v___x_969_, v___x_967_, v___y_931_, v___y_932_, v___y_933_, v___y_934_);
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_985_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_985_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_985_ == 0)
{
v___x_973_ = v___x_970_;
v_isShared_974_ = v_isSharedCheck_985_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_970_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_985_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v_fst_975_; 
v_fst_975_ = lean_ctor_get(v_a_971_, 0);
if (lean_obj_tag(v_fst_975_) == 0)
{
lean_object* v_snd_976_; lean_object* v___x_977_; lean_object* v___x_979_; 
v_snd_976_ = lean_ctor_get(v_a_971_, 1);
lean_inc(v_snd_976_);
lean_dec(v_a_971_);
v___x_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_977_, 0, v_snd_976_);
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 0, v___x_977_);
v___x_979_ = v___x_973_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v___x_977_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
else
{
lean_object* v_val_981_; lean_object* v___x_983_; 
lean_inc_ref(v_fst_975_);
lean_dec(v_a_971_);
v_val_981_ = lean_ctor_get(v_fst_975_, 0);
lean_inc(v_val_981_);
lean_dec_ref(v_fst_975_);
if (v_isShared_974_ == 0)
{
lean_ctor_set(v___x_973_, 0, v_val_981_);
v___x_983_ = v___x_973_;
goto v_reusejp_982_;
}
else
{
lean_object* v_reuseFailAlloc_984_; 
v_reuseFailAlloc_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_984_, 0, v_val_981_);
v___x_983_ = v_reuseFailAlloc_984_;
goto v_reusejp_982_;
}
v_reusejp_982_:
{
return v___x_983_;
}
}
}
}
else
{
lean_object* v_a_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
v_a_986_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_993_ == 0)
{
v___x_988_ = v___x_970_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_inc(v_a_986_);
lean_dec(v___x_970_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_a_986_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3(lean_object* v_init_994_, lean_object* v_mvarId_995_, lean_object* v_as_996_, size_t v_sz_997_, size_t v_i_998_, lean_object* v_b_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
uint8_t v___x_1005_; 
v___x_1005_ = lean_usize_dec_lt(v_i_998_, v_sz_997_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; 
lean_dec(v_mvarId_995_);
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v_b_999_);
return v___x_1006_;
}
else
{
lean_object* v_snd_1007_; lean_object* v___x_1009_; uint8_t v_isShared_1010_; uint8_t v_isSharedCheck_1041_; 
v_snd_1007_ = lean_ctor_get(v_b_999_, 1);
v_isSharedCheck_1041_ = !lean_is_exclusive(v_b_999_);
if (v_isSharedCheck_1041_ == 0)
{
lean_object* v_unused_1042_; 
v_unused_1042_ = lean_ctor_get(v_b_999_, 0);
lean_dec(v_unused_1042_);
v___x_1009_ = v_b_999_;
v_isShared_1010_ = v_isSharedCheck_1041_;
goto v_resetjp_1008_;
}
else
{
lean_inc(v_snd_1007_);
lean_dec(v_b_999_);
v___x_1009_ = lean_box(0);
v_isShared_1010_ = v_isSharedCheck_1041_;
goto v_resetjp_1008_;
}
v_resetjp_1008_:
{
lean_object* v_a_1011_; lean_object* v___x_1012_; 
v_a_1011_ = lean_array_uget_borrowed(v_as_996_, v_i_998_);
lean_inc(v_snd_1007_);
lean_inc(v_mvarId_995_);
v___x_1012_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1(v_init_994_, v_mvarId_995_, v_a_1011_, v_snd_1007_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1032_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1015_ = v___x_1012_;
v_isShared_1016_ = v_isSharedCheck_1032_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1012_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1032_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
if (lean_obj_tag(v_a_1013_) == 0)
{
lean_object* v___x_1017_; lean_object* v___x_1019_; 
lean_dec(v_mvarId_995_);
v___x_1017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1017_, 0, v_a_1013_);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 0, v___x_1017_);
v___x_1019_ = v___x_1009_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1017_);
lean_ctor_set(v_reuseFailAlloc_1023_, 1, v_snd_1007_);
v___x_1019_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
lean_object* v___x_1021_; 
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 0, v___x_1019_);
v___x_1021_ = v___x_1015_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1022_; 
v_reuseFailAlloc_1022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1022_, 0, v___x_1019_);
v___x_1021_ = v_reuseFailAlloc_1022_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
return v___x_1021_;
}
}
}
else
{
lean_object* v_a_1024_; lean_object* v___x_1025_; lean_object* v___x_1027_; 
lean_del_object(v___x_1015_);
lean_dec(v_snd_1007_);
v_a_1024_ = lean_ctor_get(v_a_1013_, 0);
lean_inc(v_a_1024_);
lean_dec_ref(v_a_1013_);
v___x_1025_ = lean_box(0);
if (v_isShared_1010_ == 0)
{
lean_ctor_set(v___x_1009_, 1, v_a_1024_);
lean_ctor_set(v___x_1009_, 0, v___x_1025_);
v___x_1027_ = v___x_1009_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_1025_);
lean_ctor_set(v_reuseFailAlloc_1031_, 1, v_a_1024_);
v___x_1027_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
size_t v___x_1028_; size_t v___x_1029_; 
v___x_1028_ = ((size_t)1ULL);
v___x_1029_ = lean_usize_add(v_i_998_, v___x_1028_);
v_i_998_ = v___x_1029_;
v_b_999_ = v___x_1027_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
lean_del_object(v___x_1009_);
lean_dec(v_snd_1007_);
lean_dec(v_mvarId_995_);
v_a_1033_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_1012_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1012_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3___boxed(lean_object* v_init_1043_, lean_object* v_mvarId_1044_, lean_object* v_as_1045_, lean_object* v_sz_1046_, lean_object* v_i_1047_, lean_object* v_b_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
size_t v_sz_boxed_1054_; size_t v_i_boxed_1055_; lean_object* v_res_1056_; 
v_sz_boxed_1054_ = lean_unbox_usize(v_sz_1046_);
lean_dec(v_sz_1046_);
v_i_boxed_1055_ = lean_unbox_usize(v_i_1047_);
lean_dec(v_i_1047_);
v_res_1056_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1_spec__3(v_init_1043_, v_mvarId_1044_, v_as_1045_, v_sz_boxed_1054_, v_i_boxed_1055_, v_b_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec_ref(v_as_1045_);
lean_dec_ref(v_init_1043_);
return v_res_1056_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1___boxed(lean_object* v_init_1057_, lean_object* v_mvarId_1058_, lean_object* v_n_1059_, lean_object* v_b_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1(v_init_1057_, v_mvarId_1058_, v_n_1059_, v_b_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec_ref(v_n_1059_);
lean_dec_ref(v_init_1057_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1(lean_object* v_mvarId_1067_, lean_object* v_t_1068_, lean_object* v_init_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v_root_1075_; lean_object* v_tail_1076_; lean_object* v___x_1077_; 
v_root_1075_ = lean_ctor_get(v_t_1068_, 0);
v_tail_1076_ = lean_ctor_get(v_t_1068_, 1);
lean_inc(v_mvarId_1067_);
lean_inc_ref(v_init_1069_);
v___x_1077_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__1(v_init_1069_, v_mvarId_1067_, v_root_1075_, v_init_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
lean_dec_ref(v_init_1069_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1114_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1080_ = v___x_1077_;
v_isShared_1081_ = v_isSharedCheck_1114_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1077_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1114_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
if (lean_obj_tag(v_a_1078_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1084_; 
lean_dec(v_mvarId_1067_);
v_a_1082_ = lean_ctor_get(v_a_1078_, 0);
lean_inc(v_a_1082_);
lean_dec_ref(v_a_1078_);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 0, v_a_1082_);
v___x_1084_ = v___x_1080_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1082_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
else
{
lean_object* v_a_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; size_t v_sz_1089_; size_t v___x_1090_; lean_object* v___x_1091_; 
lean_del_object(v___x_1080_);
v_a_1086_ = lean_ctor_get(v_a_1078_, 0);
lean_inc(v_a_1086_);
lean_dec_ref(v_a_1078_);
v___x_1087_ = lean_box(0);
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
lean_ctor_set(v___x_1088_, 1, v_a_1086_);
v_sz_1089_ = lean_array_size(v_tail_1076_);
v___x_1090_ = ((size_t)0ULL);
v___x_1091_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1_spec__2(v_mvarId_1067_, v_tail_1076_, v_sz_1089_, v___x_1090_, v___x_1088_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1091_) == 0)
{
lean_object* v_a_1092_; lean_object* v___x_1094_; uint8_t v_isShared_1095_; uint8_t v_isSharedCheck_1105_; 
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1094_ = v___x_1091_;
v_isShared_1095_ = v_isSharedCheck_1105_;
goto v_resetjp_1093_;
}
else
{
lean_inc(v_a_1092_);
lean_dec(v___x_1091_);
v___x_1094_ = lean_box(0);
v_isShared_1095_ = v_isSharedCheck_1105_;
goto v_resetjp_1093_;
}
v_resetjp_1093_:
{
lean_object* v_fst_1096_; 
v_fst_1096_ = lean_ctor_get(v_a_1092_, 0);
if (lean_obj_tag(v_fst_1096_) == 0)
{
lean_object* v_snd_1097_; lean_object* v___x_1099_; 
v_snd_1097_ = lean_ctor_get(v_a_1092_, 1);
lean_inc(v_snd_1097_);
lean_dec(v_a_1092_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v_snd_1097_);
v___x_1099_ = v___x_1094_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_snd_1097_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
else
{
lean_object* v_val_1101_; lean_object* v___x_1103_; 
lean_inc_ref(v_fst_1096_);
lean_dec(v_a_1092_);
v_val_1101_ = lean_ctor_get(v_fst_1096_, 0);
lean_inc(v_val_1101_);
lean_dec_ref(v_fst_1096_);
if (v_isShared_1095_ == 0)
{
lean_ctor_set(v___x_1094_, 0, v_val_1101_);
v___x_1103_ = v___x_1094_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_val_1101_);
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
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
v_a_1106_ = lean_ctor_get(v___x_1091_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1091_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1108_ = v___x_1091_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1091_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1106_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1122_; 
lean_dec(v_mvarId_1067_);
v_a_1115_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1122_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1122_ == 0)
{
v___x_1117_ = v___x_1077_;
v_isShared_1118_ = v_isSharedCheck_1122_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_a_1115_);
lean_dec(v___x_1077_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1___boxed(lean_object* v_mvarId_1123_, lean_object* v_t_1124_, lean_object* v_init_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1(v_mvarId_1123_, v_t_1124_, v_init_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
lean_dec_ref(v_t_1124_);
return v_res_1131_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1132_ = lean_box(0);
v___x_1133_ = lean_box(0);
v___x_1134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
lean_ctor_set(v___x_1134_, 1, v___x_1132_);
return v___x_1134_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1135_; 
v___x_1135_ = lean_mk_string_unchecked("substSomeVar failed", 19, 19);
return v___x_1135_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__1);
v___x_1137_ = l_Lean_stringToMessageData(v___x_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0(lean_object* v_mvarId_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v_lctx_1144_; lean_object* v_decls_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v_lctx_1144_ = lean_ctor_get(v___y_1139_, 2);
v_decls_1145_ = lean_ctor_get(v_lctx_1144_, 1);
v___x_1146_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__0);
v___x_1147_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__1(v_mvarId_1138_, v_decls_1145_, v___x_1146_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
if (lean_obj_tag(v___x_1147_) == 0)
{
lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1159_; 
v_a_1148_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1159_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1159_ == 0)
{
v___x_1150_ = v___x_1147_;
v_isShared_1151_ = v_isSharedCheck_1159_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_dec(v___x_1147_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1159_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v_fst_1152_; 
v_fst_1152_ = lean_ctor_get(v_a_1148_, 0);
lean_inc(v_fst_1152_);
lean_dec(v_a_1148_);
if (lean_obj_tag(v_fst_1152_) == 0)
{
lean_object* v___x_1153_; lean_object* v___x_1154_; 
lean_del_object(v___x_1150_);
v___x_1153_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___closed__2);
v___x_1154_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_1153_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
return v___x_1154_;
}
else
{
lean_object* v_val_1155_; lean_object* v___x_1157_; 
v_val_1155_ = lean_ctor_get(v_fst_1152_, 0);
lean_inc(v_val_1155_);
lean_dec_ref(v_fst_1152_);
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v_val_1155_);
v___x_1157_ = v___x_1150_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_val_1155_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
}
else
{
lean_object* v_a_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1167_; 
v_a_1160_ = lean_ctor_get(v___x_1147_, 0);
v_isSharedCheck_1167_ = !lean_is_exclusive(v___x_1147_);
if (v_isSharedCheck_1167_ == 0)
{
v___x_1162_ = v___x_1147_;
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_a_1160_);
lean_dec(v___x_1147_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1167_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1165_; 
if (v_isShared_1163_ == 0)
{
v___x_1165_ = v___x_1162_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1166_; 
v_reuseFailAlloc_1166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1166_, 0, v_a_1160_);
v___x_1165_ = v_reuseFailAlloc_1166_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
return v___x_1165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___boxed(lean_object* v_mvarId_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v_res_1174_; 
v_res_1174_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0(v_mvarId_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec(v___y_1170_);
lean_dec_ref(v___y_1169_);
return v_res_1174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar(lean_object* v_mvarId_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_, lean_object* v_a_1179_){
_start:
{
lean_object* v___f_1181_; lean_object* v___x_1182_; 
lean_inc(v_mvarId_1175_);
v___f_1181_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1181_, 0, v_mvarId_1175_);
v___x_1182_ = l_Lean_MVarId_withContext___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar_spec__2___redArg(v_mvarId_1175_, v___f_1181_, v_a_1176_, v_a_1177_, v_a_1178_, v_a_1179_);
return v___x_1182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar___boxed(lean_object* v_mvarId_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar(v_mvarId_1183_, v_a_1184_, v_a_1185_, v_a_1186_, v_a_1187_);
lean_dec(v_a_1187_);
lean_dec_ref(v_a_1186_);
lean_dec(v_a_1185_);
lean_dec_ref(v_a_1184_);
return v_res_1189_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1190_; 
v___x_1190_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_1190_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_mk_string_unchecked("elimOffset", 10, 10);
return v___x_1191_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1192_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__1);
v___x_1193_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__0);
v___x_1194_ = l_Lean_Name_mkStr2(v___x_1193_, v___x_1192_);
return v___x_1194_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0(lean_object* v_x_1195_){
_start:
{
lean_object* v___x_1196_; uint8_t v___x_1197_; 
v___x_1196_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2);
v___x_1197_ = lean_name_eq(v_x_1195_, v___x_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___boxed(lean_object* v_x_1198_){
_start:
{
uint8_t v_res_1199_; lean_object* v_r_1200_; 
v_res_1199_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0(v_x_1198_);
lean_dec(v_x_1198_);
v_r_1200_ = lean_box(v_res_1199_);
return v_r_1200_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1(lean_object* v_e_1201_){
_start:
{
lean_object* v___x_1202_; uint8_t v___x_1203_; 
v___x_1202_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___closed__2);
v___x_1203_ = l_Lean_Expr_isConstOf(v_e_1201_, v___x_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1___boxed(lean_object* v_e_1204_){
_start:
{
uint8_t v_res_1205_; lean_object* v_r_1206_; 
v_res_1205_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1(v_e_1204_);
lean_dec_ref(v_e_1204_);
v_r_1206_ = lean_box(v_res_1205_);
return v_r_1206_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__0(void){
_start:
{
lean_object* v___f_1207_; 
v___f_1207_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__0___boxed), 1, 0);
return v___f_1207_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__1(void){
_start:
{
lean_object* v___f_1208_; 
v___f_1208_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___lam__1___boxed), 1, 0);
return v___f_1208_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__2(void){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = lean_mk_string_unchecked("goal's target does not contain `Nat.elimOffset`", 47, 47);
return v___x_1209_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3(void){
_start:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__2, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__2_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__2);
v___x_1211_ = l_Lean_stringToMessageData(v___x_1210_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset(lean_object* v_mvarId_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_, lean_object* v_a_1216_){
_start:
{
lean_object* v___x_1218_; 
lean_inc(v_mvarId_1212_);
v___x_1218_ = l_Lean_MVarId_getType(v_mvarId_1212_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_);
if (lean_obj_tag(v___x_1218_) == 0)
{
lean_object* v_a_1219_; lean_object* v___f_1220_; lean_object* v___f_1221_; lean_object* v___x_1222_; 
v_a_1219_ = lean_ctor_get(v___x_1218_, 0);
lean_inc(v_a_1219_);
lean_dec_ref(v___x_1218_);
v___f_1220_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__0);
v___f_1221_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__1);
v___x_1222_ = lean_find_expr(v___f_1221_, v_a_1219_);
lean_dec(v_a_1219_);
if (lean_obj_tag(v___x_1222_) == 0)
{
lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v_a_1225_; lean_object* v___x_1227_; uint8_t v_isShared_1228_; uint8_t v_isSharedCheck_1232_; 
lean_dec(v_mvarId_1212_);
v___x_1223_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___closed__3);
v___x_1224_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_1223_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_);
v_a_1225_ = lean_ctor_get(v___x_1224_, 0);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1227_ = v___x_1224_;
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
else
{
lean_inc(v_a_1225_);
lean_dec(v___x_1224_);
v___x_1227_ = lean_box(0);
v_isShared_1228_ = v_isSharedCheck_1232_;
goto v_resetjp_1226_;
}
v_resetjp_1226_:
{
lean_object* v___x_1230_; 
if (v_isShared_1228_ == 0)
{
v___x_1230_ = v___x_1227_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_a_1225_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
return v___x_1230_;
}
}
}
else
{
lean_object* v___x_1233_; 
lean_dec_ref(v___x_1222_);
v___x_1233_ = l_Lean_MVarId_deltaTarget(v_mvarId_1212_, v___f_1220_, v_a_1213_, v_a_1214_, v_a_1215_, v_a_1216_);
return v___x_1233_;
}
}
else
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
lean_dec(v_mvarId_1212_);
v_a_1234_ = lean_ctor_get(v___x_1218_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1218_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1218_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1218_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1234_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset___boxed(lean_object* v_mvarId_1242_, lean_object* v_a_1243_, lean_object* v_a_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset(v_mvarId_1242_, v_a_1243_, v_a_1244_, v_a_1245_, v_a_1246_);
lean_dec(v_a_1246_);
lean_dec_ref(v_a_1245_);
lean_dec(v_a_1244_);
lean_dec_ref(v_a_1243_);
return v_res_1248_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_mk_string_unchecked("runtime", 7, 7);
return v___x_1249_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1250_; 
v___x_1250_ = lean_mk_string_unchecked("maxRecDepth", 11, 11);
return v___x_1250_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1251_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__1, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__1_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__1);
v___x_1252_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__0, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__0_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__0);
v___x_1253_ = l_Lean_Name_mkStr2(v___x_1252_, v___x_1251_);
return v___x_1253_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1254_ = l_Lean_maxRecDepthErrorMessage;
v___x_1255_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
return v___x_1255_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1256_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__3);
v___x_1257_ = l_Lean_MessageData_ofFormat(v___x_1256_);
return v___x_1257_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1258_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__4);
v___x_1259_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__2);
v___x_1260_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
lean_ctor_set(v___x_1260_, 1, v___x_1258_);
return v___x_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(lean_object* v_ref_1261_){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1263_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___closed__5);
v___x_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1264_, 0, v_ref_1261_);
lean_ctor_set(v___x_1264_, 1, v___x_1263_);
v___x_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg___boxed(lean_object* v_ref_1266_, lean_object* v___y_1267_){
_start:
{
lean_object* v_res_1268_; 
v_res_1268_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(v_ref_1266_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2(lean_object* v_00_u03b1_1269_, lean_object* v_ref_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
lean_object* v___x_1276_; 
v___x_1276_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(v_ref_1270_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___boxed(lean_object* v_00_u03b1_1277_, lean_object* v_ref_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2(v_00_u03b1_1277_, v_ref_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0(lean_object* v_a_1285_, lean_object* v_____r_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1292_ = lean_unsigned_to_nat(1u);
v___x_1293_ = lean_mk_empty_array_with_capacity(v___x_1292_);
v___x_1294_ = lean_array_push(v___x_1293_, v_a_1285_);
v___x_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0___boxed(lean_object* v_a_1296_, lean_object* v_____r_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
lean_object* v_res_1303_; 
v_res_1303_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0(v_a_1296_, v_____r_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
return v_res_1303_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1304_; double v___x_1305_; 
v___x_1304_ = lean_unsigned_to_nat(0u);
v___x_1305_ = lean_float_of_nat(v___x_1304_);
return v___x_1305_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1306_; 
v___x_1306_ = lean_mk_string_unchecked("", 0, 0);
return v___x_1306_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1307_ = lean_unsigned_to_nat(0u);
v___x_1308_ = lean_mk_empty_array_with_capacity(v___x_1307_);
return v___x_1308_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(lean_object* v_cls_1309_, lean_object* v_msg_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_){
_start:
{
lean_object* v_ref_1316_; lean_object* v___x_1317_; lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1362_; 
v_ref_1316_ = lean_ctor_get(v___y_1313_, 5);
v___x_1317_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2_spec__2(v_msg_1310_, v___y_1311_, v___y_1312_, v___y_1313_, v___y_1314_);
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1320_ = v___x_1317_;
v_isShared_1321_ = v_isSharedCheck_1362_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1317_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1362_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1322_; lean_object* v_traceState_1323_; lean_object* v_env_1324_; lean_object* v_nextMacroScope_1325_; lean_object* v_ngen_1326_; lean_object* v_auxDeclNGen_1327_; lean_object* v_cache_1328_; lean_object* v_messages_1329_; lean_object* v_infoState_1330_; lean_object* v_snapshotTasks_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1361_; 
v___x_1322_ = lean_st_ref_take(v___y_1314_);
v_traceState_1323_ = lean_ctor_get(v___x_1322_, 4);
v_env_1324_ = lean_ctor_get(v___x_1322_, 0);
v_nextMacroScope_1325_ = lean_ctor_get(v___x_1322_, 1);
v_ngen_1326_ = lean_ctor_get(v___x_1322_, 2);
v_auxDeclNGen_1327_ = lean_ctor_get(v___x_1322_, 3);
v_cache_1328_ = lean_ctor_get(v___x_1322_, 5);
v_messages_1329_ = lean_ctor_get(v___x_1322_, 6);
v_infoState_1330_ = lean_ctor_get(v___x_1322_, 7);
v_snapshotTasks_1331_ = lean_ctor_get(v___x_1322_, 8);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1322_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1333_ = v___x_1322_;
v_isShared_1334_ = v_isSharedCheck_1361_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_snapshotTasks_1331_);
lean_inc(v_infoState_1330_);
lean_inc(v_messages_1329_);
lean_inc(v_cache_1328_);
lean_inc(v_traceState_1323_);
lean_inc(v_auxDeclNGen_1327_);
lean_inc(v_ngen_1326_);
lean_inc(v_nextMacroScope_1325_);
lean_inc(v_env_1324_);
lean_dec(v___x_1322_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1361_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
uint64_t v_tid_1335_; lean_object* v_traces_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1360_; 
v_tid_1335_ = lean_ctor_get_uint64(v_traceState_1323_, sizeof(void*)*1);
v_traces_1336_ = lean_ctor_get(v_traceState_1323_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_traceState_1323_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1338_ = v_traceState_1323_;
v_isShared_1339_ = v_isSharedCheck_1360_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_traces_1336_);
lean_dec(v_traceState_1323_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1360_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1340_; double v___x_1341_; uint8_t v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1350_; 
v___x_1340_ = lean_box(0);
v___x_1341_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__0);
v___x_1342_ = 0;
v___x_1343_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__1, &l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__1_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__1);
v___x_1344_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1344_, 0, v_cls_1309_);
lean_ctor_set(v___x_1344_, 1, v___x_1340_);
lean_ctor_set(v___x_1344_, 2, v___x_1343_);
lean_ctor_set_float(v___x_1344_, sizeof(void*)*3, v___x_1341_);
lean_ctor_set_float(v___x_1344_, sizeof(void*)*3 + 8, v___x_1341_);
lean_ctor_set_uint8(v___x_1344_, sizeof(void*)*3 + 16, v___x_1342_);
v___x_1345_ = lean_obj_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__2, &l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__2_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___closed__2);
v___x_1346_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
lean_ctor_set(v___x_1346_, 1, v_a_1318_);
lean_ctor_set(v___x_1346_, 2, v___x_1345_);
lean_inc(v_ref_1316_);
v___x_1347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1347_, 0, v_ref_1316_);
lean_ctor_set(v___x_1347_, 1, v___x_1346_);
v___x_1348_ = l_Lean_PersistentArray_push___redArg(v_traces_1336_, v___x_1347_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 0, v___x_1348_);
v___x_1350_ = v___x_1338_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1348_);
lean_ctor_set_uint64(v_reuseFailAlloc_1359_, sizeof(void*)*1, v_tid_1335_);
v___x_1350_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
lean_object* v___x_1352_; 
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 4, v___x_1350_);
v___x_1352_ = v___x_1333_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_env_1324_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_nextMacroScope_1325_);
lean_ctor_set(v_reuseFailAlloc_1358_, 2, v_ngen_1326_);
lean_ctor_set(v_reuseFailAlloc_1358_, 3, v_auxDeclNGen_1327_);
lean_ctor_set(v_reuseFailAlloc_1358_, 4, v___x_1350_);
lean_ctor_set(v_reuseFailAlloc_1358_, 5, v_cache_1328_);
lean_ctor_set(v_reuseFailAlloc_1358_, 6, v_messages_1329_);
lean_ctor_set(v_reuseFailAlloc_1358_, 7, v_infoState_1330_);
lean_ctor_set(v_reuseFailAlloc_1358_, 8, v_snapshotTasks_1331_);
v___x_1352_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1356_; 
v___x_1353_ = lean_st_ref_set(v___y_1314_, v___x_1352_);
v___x_1354_ = lean_box(0);
if (v_isShared_1321_ == 0)
{
lean_ctor_set(v___x_1320_, 0, v___x_1354_);
v___x_1356_ = v___x_1320_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1354_);
v___x_1356_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
return v___x_1356_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1___boxed(lean_object* v_cls_1363_, lean_object* v_msg_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_){
_start:
{
lean_object* v_res_1370_; 
v_res_1370_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v_cls_1363_, v_msg_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_);
lean_dec(v___y_1368_);
lean_dec_ref(v___y_1367_);
lean_dec(v___y_1366_);
lean_dec_ref(v___y_1365_);
return v_res_1370_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__0(void){
_start:
{
lean_object* v___x_1371_; 
v___x_1371_ = lean_mk_string_unchecked("failed to generate equality theorems for `match` expression `", 61, 61);
return v___x_1371_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1(void){
_start:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; 
v___x_1372_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__0);
v___x_1373_ = l_Lean_stringToMessageData(v___x_1372_);
return v___x_1373_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__2(void){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = lean_mk_string_unchecked("`\n", 2, 2);
return v___x_1374_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__2, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__2_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__2);
v___x_1376_ = l_Lean_stringToMessageData(v___x_1375_);
return v___x_1376_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__4(void){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = lean_mk_string_unchecked("spliIf failed", 13, 13);
return v___x_1377_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5(void){
_start:
{
lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1378_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__4, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__4_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__4);
v___x_1379_ = l_Lean_stringToMessageData(v___x_1378_);
return v___x_1379_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__6(void){
_start:
{
lean_object* v___x_1380_; 
v___x_1380_ = lean_mk_string_unchecked("simpIf failed", 13, 13);
return v___x_1380_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7(void){
_start:
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1381_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__6, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__6_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__6);
v___x_1382_ = l_Lean_stringToMessageData(v___x_1381_);
return v___x_1382_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8(void){
_start:
{
lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1383_ = lean_unsigned_to_nat(0u);
v___x_1384_ = lean_mk_empty_array_with_capacity(v___x_1383_);
return v___x_1384_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__9(void){
_start:
{
lean_object* v___x_1385_; 
v___x_1385_ = lean_alloc_closure((void*)(l_Lean_Meta_whnfCore___boxed), 6, 0);
return v___x_1385_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12(void){
_start:
{
lean_object* v___x_1386_; 
v___x_1386_ = lean_mk_string_unchecked("matchEqs", 8, 8);
return v___x_1386_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11(void){
_start:
{
lean_object* v___x_1387_; 
v___x_1387_ = lean_mk_string_unchecked("Match", 5, 5);
return v___x_1387_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10(void){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = lean_mk_string_unchecked("Meta", 4, 4);
return v___x_1388_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13(void){
_start:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v_cls_1392_; 
v___x_1389_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__12);
v___x_1390_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11);
v___x_1391_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10);
v_cls_1392_ = l_Lean_Name_mkStr3(v___x_1391_, v___x_1390_, v___x_1389_);
return v_cls_1392_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14(void){
_start:
{
lean_object* v___x_1393_; 
v___x_1393_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_1393_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__15(void){
_start:
{
lean_object* v___x_1394_; lean_object* v___x_1395_; 
v___x_1394_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__14);
v___x_1395_ = l_Lean_Name_mkStr1(v___x_1394_);
return v___x_1395_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16(void){
_start:
{
lean_object* v_cls_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; 
v_cls_1396_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13);
v___x_1397_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__15, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__15_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__15);
v___x_1398_ = l_Lean_Name_append(v___x_1397_, v_cls_1396_);
return v___x_1398_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17(void){
_start:
{
lean_object* v___x_1399_; 
v___x_1399_ = lean_mk_string_unchecked("proveCondEqThm.go ", 18, 18);
return v___x_1399_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__18(void){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1400_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__17);
v___x_1401_ = l_Lean_stringToMessageData(v___x_1400_);
return v___x_1401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go(lean_object* v_matchDeclName_1402_, lean_object* v_mvarId_1403_, lean_object* v_depth_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_){
_start:
{
lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___y_1414_; lean_object* v_a_1415_; lean_object* v___y_1430_; lean_object* v___y_1431_; lean_object* v___y_1432_; lean_object* v___y_1433_; lean_object* v___y_1434_; lean_object* v___y_1445_; lean_object* v___y_1446_; lean_object* v___y_1447_; lean_object* v___y_1448_; lean_object* v___y_1449_; lean_object* v___y_1450_; lean_object* v___y_1451_; uint8_t v___y_1452_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; uint8_t v___y_1477_; lean_object* v___y_1495_; lean_object* v___y_1496_; lean_object* v___y_1497_; lean_object* v___y_1498_; lean_object* v___y_1499_; lean_object* v___y_1500_; lean_object* v_a_1501_; lean_object* v___y_1505_; lean_object* v___y_1506_; lean_object* v___y_1507_; uint8_t v___y_1508_; lean_object* v___y_1509_; lean_object* v___y_1510_; lean_object* v___y_1511_; lean_object* v___y_1512_; uint8_t v___y_1513_; lean_object* v___y_1548_; lean_object* v___y_1549_; lean_object* v___y_1550_; uint8_t v___y_1551_; lean_object* v___y_1552_; lean_object* v___y_1553_; lean_object* v___y_1554_; lean_object* v_a_1555_; lean_object* v___y_1559_; lean_object* v___y_1560_; lean_object* v___y_1561_; uint8_t v___y_1562_; lean_object* v___y_1563_; lean_object* v___y_1564_; lean_object* v___y_1565_; lean_object* v___y_1566_; lean_object* v___y_1570_; lean_object* v___y_1571_; lean_object* v___y_1572_; uint8_t v___y_1573_; lean_object* v___y_1574_; lean_object* v___y_1575_; lean_object* v___y_1576_; lean_object* v___y_1577_; uint8_t v___y_1578_; lean_object* v___y_1602_; lean_object* v___y_1603_; uint8_t v___y_1604_; lean_object* v___y_1605_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___y_1608_; lean_object* v___y_1609_; uint8_t v___y_1610_; lean_object* v___y_1627_; lean_object* v___y_1628_; lean_object* v___y_1629_; uint8_t v___y_1630_; lean_object* v___y_1631_; lean_object* v___y_1632_; lean_object* v___y_1633_; lean_object* v___y_1634_; uint8_t v___y_1635_; lean_object* v___y_1652_; lean_object* v___y_1653_; uint8_t v___y_1654_; lean_object* v___y_1655_; lean_object* v___y_1656_; lean_object* v___y_1657_; lean_object* v___y_1658_; lean_object* v___y_1659_; uint8_t v___y_1660_; lean_object* v___y_1678_; lean_object* v___y_1679_; uint8_t v___y_1680_; lean_object* v___y_1681_; lean_object* v___y_1682_; lean_object* v___y_1683_; lean_object* v___y_1684_; lean_object* v___y_1685_; uint8_t v___y_1686_; lean_object* v___y_1707_; lean_object* v___y_1708_; lean_object* v___y_1709_; uint8_t v___y_1710_; lean_object* v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; uint8_t v___y_1715_; lean_object* v___y_1735_; lean_object* v___y_1736_; lean_object* v___y_1737_; lean_object* v___y_1738_; lean_object* v_fileName_1766_; lean_object* v_fileMap_1767_; lean_object* v_options_1768_; lean_object* v_currRecDepth_1769_; lean_object* v_maxRecDepth_1770_; lean_object* v_ref_1771_; lean_object* v_currNamespace_1772_; lean_object* v_openDecls_1773_; lean_object* v_initHeartbeats_1774_; lean_object* v_maxHeartbeats_1775_; lean_object* v_quotContext_1776_; lean_object* v_currMacroScope_1777_; uint8_t v_diag_1778_; lean_object* v_cancelTk_x3f_1779_; uint8_t v_suppressElabErrors_1780_; lean_object* v_inheritedTraceOptions_1781_; lean_object* v_cls_1782_; lean_object* v___x_1794_; uint8_t v___x_1795_; 
v_fileName_1766_ = lean_ctor_get(v_a_1407_, 0);
v_fileMap_1767_ = lean_ctor_get(v_a_1407_, 1);
v_options_1768_ = lean_ctor_get(v_a_1407_, 2);
v_currRecDepth_1769_ = lean_ctor_get(v_a_1407_, 3);
v_maxRecDepth_1770_ = lean_ctor_get(v_a_1407_, 4);
v_ref_1771_ = lean_ctor_get(v_a_1407_, 5);
v_currNamespace_1772_ = lean_ctor_get(v_a_1407_, 6);
v_openDecls_1773_ = lean_ctor_get(v_a_1407_, 7);
v_initHeartbeats_1774_ = lean_ctor_get(v_a_1407_, 8);
v_maxHeartbeats_1775_ = lean_ctor_get(v_a_1407_, 9);
v_quotContext_1776_ = lean_ctor_get(v_a_1407_, 10);
v_currMacroScope_1777_ = lean_ctor_get(v_a_1407_, 11);
v_diag_1778_ = lean_ctor_get_uint8(v_a_1407_, sizeof(void*)*14);
v_cancelTk_x3f_1779_ = lean_ctor_get(v_a_1407_, 12);
v_suppressElabErrors_1780_ = lean_ctor_get_uint8(v_a_1407_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1781_ = lean_ctor_get(v_a_1407_, 13);
v_cls_1782_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13);
v___x_1794_ = lean_unsigned_to_nat(0u);
v___x_1795_ = lean_nat_dec_eq(v_maxRecDepth_1770_, v___x_1794_);
if (v___x_1795_ == 0)
{
uint8_t v___x_1796_; 
v___x_1796_ = lean_nat_dec_eq(v_currRecDepth_1769_, v_maxRecDepth_1770_);
if (v___x_1796_ == 0)
{
goto v___jp_1783_;
}
else
{
lean_object* v___x_1797_; 
lean_dec(v_mvarId_1403_);
lean_dec(v_matchDeclName_1402_);
lean_inc(v_ref_1771_);
v___x_1797_ = l_Lean_throwMaxRecDepthAt___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__2___redArg(v_ref_1771_);
return v___x_1797_;
}
}
else
{
goto v___jp_1783_;
}
v___jp_1410_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; uint8_t v___x_1419_; 
v___x_1416_ = lean_unsigned_to_nat(0u);
v___x_1417_ = lean_array_get_size(v_a_1415_);
v___x_1418_ = lean_box(0);
v___x_1419_ = lean_nat_dec_lt(v___x_1416_, v___x_1417_);
if (v___x_1419_ == 0)
{
lean_object* v___x_1420_; 
lean_dec_ref(v_a_1415_);
lean_dec_ref(v___y_1414_);
lean_dec(v_matchDeclName_1402_);
v___x_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1418_);
return v___x_1420_;
}
else
{
uint8_t v___x_1421_; 
v___x_1421_ = lean_nat_dec_le(v___x_1417_, v___x_1417_);
if (v___x_1421_ == 0)
{
if (v___x_1419_ == 0)
{
lean_object* v___x_1422_; 
lean_dec_ref(v_a_1415_);
lean_dec_ref(v___y_1414_);
lean_dec(v_matchDeclName_1402_);
v___x_1422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1418_);
return v___x_1422_;
}
else
{
size_t v___x_1423_; size_t v___x_1424_; lean_object* v___x_1425_; 
v___x_1423_ = ((size_t)0ULL);
v___x_1424_ = lean_usize_of_nat(v___x_1417_);
v___x_1425_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0(v_depth_1404_, v_matchDeclName_1402_, v_a_1415_, v___x_1423_, v___x_1424_, v___x_1418_, v___y_1413_, v___y_1412_, v___y_1414_, v___y_1411_);
lean_dec_ref(v___y_1414_);
lean_dec_ref(v_a_1415_);
return v___x_1425_;
}
}
else
{
size_t v___x_1426_; size_t v___x_1427_; lean_object* v___x_1428_; 
v___x_1426_ = ((size_t)0ULL);
v___x_1427_ = lean_usize_of_nat(v___x_1417_);
v___x_1428_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0(v_depth_1404_, v_matchDeclName_1402_, v_a_1415_, v___x_1426_, v___x_1427_, v___x_1418_, v___y_1413_, v___y_1412_, v___y_1414_, v___y_1411_);
lean_dec_ref(v___y_1414_);
lean_dec_ref(v_a_1415_);
return v___x_1428_;
}
}
}
v___jp_1429_:
{
if (lean_obj_tag(v___y_1434_) == 0)
{
lean_object* v_a_1435_; 
v_a_1435_ = lean_ctor_get(v___y_1434_, 0);
lean_inc(v_a_1435_);
lean_dec_ref(v___y_1434_);
v___y_1411_ = v___y_1430_;
v___y_1412_ = v___y_1431_;
v___y_1413_ = v___y_1432_;
v___y_1414_ = v___y_1433_;
v_a_1415_ = v_a_1435_;
goto v___jp_1410_;
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
lean_dec_ref(v___y_1433_);
lean_dec(v_matchDeclName_1402_);
v_a_1436_ = lean_ctor_get(v___y_1434_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___y_1434_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v___y_1434_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___y_1434_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
v___jp_1444_:
{
if (v___y_1452_ == 0)
{
lean_object* v___x_1453_; 
lean_dec_ref(v___y_1448_);
v___x_1453_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1445_, v___y_1449_, v___y_1446_);
lean_dec_ref(v___y_1445_);
if (lean_obj_tag(v___x_1453_) == 0)
{
lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1467_; 
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1453_);
if (v_isSharedCheck_1467_ == 0)
{
lean_object* v_unused_1468_; 
v_unused_1468_ = lean_ctor_get(v___x_1453_, 0);
lean_dec(v_unused_1468_);
v___x_1455_ = v___x_1453_;
v_isShared_1456_ = v_isSharedCheck_1467_;
goto v_resetjp_1454_;
}
else
{
lean_dec(v___x_1453_);
v___x_1455_ = lean_box(0);
v_isShared_1456_ = v_isSharedCheck_1467_;
goto v_resetjp_1454_;
}
v_resetjp_1454_:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1463_; 
v___x_1457_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__1);
lean_inc(v_matchDeclName_1402_);
v___x_1458_ = l_Lean_MessageData_ofName(v_matchDeclName_1402_);
v___x_1459_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1459_, 0, v___x_1457_);
lean_ctor_set(v___x_1459_, 1, v___x_1458_);
v___x_1460_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__3);
v___x_1461_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1459_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
if (v_isShared_1456_ == 0)
{
lean_ctor_set_tag(v___x_1455_, 1);
lean_ctor_set(v___x_1455_, 0, v___y_1447_);
v___x_1463_ = v___x_1455_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___y_1447_);
v___x_1463_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
lean_object* v___x_1464_; lean_object* v___x_1465_; 
v___x_1464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1464_, 0, v___x_1461_);
lean_ctor_set(v___x_1464_, 1, v___x_1463_);
v___x_1465_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_1464_, v___y_1450_, v___y_1449_, v___y_1451_, v___y_1446_);
v___y_1430_ = v___y_1446_;
v___y_1431_ = v___y_1449_;
v___y_1432_ = v___y_1450_;
v___y_1433_ = v___y_1451_;
v___y_1434_ = v___x_1465_;
goto v___jp_1429_;
}
}
}
else
{
lean_dec_ref(v___y_1451_);
lean_dec(v___y_1447_);
lean_dec(v_matchDeclName_1402_);
return v___x_1453_;
}
}
else
{
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1445_);
v___y_1430_ = v___y_1446_;
v___y_1431_ = v___y_1449_;
v___y_1432_ = v___y_1450_;
v___y_1433_ = v___y_1451_;
v___y_1434_ = v___y_1448_;
goto v___jp_1429_;
}
}
v___jp_1469_:
{
if (v___y_1477_ == 0)
{
lean_object* v___x_1478_; 
lean_dec_ref(v___y_1471_);
v___x_1478_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1470_, v___y_1474_, v___y_1472_);
lean_dec_ref(v___y_1470_);
if (lean_obj_tag(v___x_1478_) == 0)
{
lean_object* v___x_1479_; 
lean_dec_ref(v___x_1478_);
v___x_1479_ = l_Lean_Meta_saveState___redArg(v___y_1474_, v___y_1472_);
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_object* v_a_1480_; lean_object* v___x_1481_; 
v_a_1480_ = lean_ctor_get(v___x_1479_, 0);
lean_inc(v_a_1480_);
lean_dec_ref(v___x_1479_);
lean_inc(v___y_1473_);
v___x_1481_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_substSomeVar(v___y_1473_, v___y_1475_, v___y_1474_, v___y_1476_, v___y_1472_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_dec(v_a_1480_);
lean_dec(v___y_1473_);
v___y_1430_ = v___y_1472_;
v___y_1431_ = v___y_1474_;
v___y_1432_ = v___y_1475_;
v___y_1433_ = v___y_1476_;
v___y_1434_ = v___x_1481_;
goto v___jp_1429_;
}
else
{
lean_object* v_a_1482_; uint8_t v___x_1483_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
v___x_1483_ = l_Lean_Exception_isInterrupt(v_a_1482_);
if (v___x_1483_ == 0)
{
uint8_t v___x_1484_; 
v___x_1484_ = l_Lean_Exception_isRuntime(v_a_1482_);
v___y_1445_ = v_a_1480_;
v___y_1446_ = v___y_1472_;
v___y_1447_ = v___y_1473_;
v___y_1448_ = v___x_1481_;
v___y_1449_ = v___y_1474_;
v___y_1450_ = v___y_1475_;
v___y_1451_ = v___y_1476_;
v___y_1452_ = v___x_1484_;
goto v___jp_1444_;
}
else
{
lean_dec(v_a_1482_);
v___y_1445_ = v_a_1480_;
v___y_1446_ = v___y_1472_;
v___y_1447_ = v___y_1473_;
v___y_1448_ = v___x_1481_;
v___y_1449_ = v___y_1474_;
v___y_1450_ = v___y_1475_;
v___y_1451_ = v___y_1476_;
v___y_1452_ = v___x_1483_;
goto v___jp_1444_;
}
}
}
else
{
lean_object* v_a_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1492_; 
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1473_);
lean_dec(v_matchDeclName_1402_);
v_a_1485_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1492_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1492_ == 0)
{
v___x_1487_ = v___x_1479_;
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_a_1485_);
lean_dec(v___x_1479_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1492_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v___x_1490_; 
if (v_isShared_1488_ == 0)
{
v___x_1490_ = v___x_1487_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1491_; 
v_reuseFailAlloc_1491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1491_, 0, v_a_1485_);
v___x_1490_ = v_reuseFailAlloc_1491_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
return v___x_1490_;
}
}
}
}
else
{
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1473_);
lean_dec(v_matchDeclName_1402_);
return v___x_1478_;
}
}
else
{
lean_object* v___x_1493_; 
lean_dec_ref(v___y_1476_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1470_);
lean_dec(v_matchDeclName_1402_);
v___x_1493_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1493_, 0, v___y_1471_);
return v___x_1493_;
}
}
v___jp_1494_:
{
uint8_t v___x_1502_; 
v___x_1502_ = l_Lean_Exception_isInterrupt(v_a_1501_);
if (v___x_1502_ == 0)
{
uint8_t v___x_1503_; 
lean_inc_ref(v_a_1501_);
v___x_1503_ = l_Lean_Exception_isRuntime(v_a_1501_);
v___y_1470_ = v___y_1495_;
v___y_1471_ = v_a_1501_;
v___y_1472_ = v___y_1496_;
v___y_1473_ = v___y_1497_;
v___y_1474_ = v___y_1498_;
v___y_1475_ = v___y_1499_;
v___y_1476_ = v___y_1500_;
v___y_1477_ = v___x_1503_;
goto v___jp_1469_;
}
else
{
v___y_1470_ = v___y_1495_;
v___y_1471_ = v_a_1501_;
v___y_1472_ = v___y_1496_;
v___y_1473_ = v___y_1497_;
v___y_1474_ = v___y_1498_;
v___y_1475_ = v___y_1499_;
v___y_1476_ = v___y_1500_;
v___y_1477_ = v___x_1502_;
goto v___jp_1469_;
}
}
v___jp_1504_:
{
if (v___y_1513_ == 0)
{
lean_object* v___x_1514_; 
lean_dec_ref(v___y_1512_);
v___x_1514_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1507_, v___y_1509_, v___y_1505_);
lean_dec_ref(v___y_1507_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_object* v___x_1515_; 
lean_dec_ref(v___x_1514_);
v___x_1515_ = l_Lean_Meta_saveState___redArg(v___y_1509_, v___y_1505_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
lean_inc(v_a_1516_);
lean_dec_ref(v___x_1515_);
v___x_1517_ = lean_box(0);
lean_inc(v___y_1506_);
v___x_1518_ = l_Lean_Meta_splitIfTarget_x3f(v___y_1506_, v___x_1517_, v___y_1508_, v___y_1510_, v___y_1509_, v___y_1511_, v___y_1505_);
if (lean_obj_tag(v___x_1518_) == 0)
{
lean_object* v_a_1519_; 
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_a_1519_);
lean_dec_ref(v___x_1518_);
if (lean_obj_tag(v_a_1519_) == 1)
{
lean_object* v_val_1520_; lean_object* v_fst_1521_; lean_object* v_snd_1522_; lean_object* v_mvarId_1523_; lean_object* v_fvarId_1524_; lean_object* v___x_1525_; 
v_val_1520_ = lean_ctor_get(v_a_1519_, 0);
lean_inc(v_val_1520_);
lean_dec_ref(v_a_1519_);
v_fst_1521_ = lean_ctor_get(v_val_1520_, 0);
lean_inc(v_fst_1521_);
v_snd_1522_ = lean_ctor_get(v_val_1520_, 1);
lean_inc(v_snd_1522_);
lean_dec(v_val_1520_);
v_mvarId_1523_ = lean_ctor_get(v_fst_1521_, 0);
lean_inc(v_mvarId_1523_);
v_fvarId_1524_ = lean_ctor_get(v_fst_1521_, 1);
lean_inc(v_fvarId_1524_);
lean_dec(v_fst_1521_);
v___x_1525_ = l_Lean_Meta_trySubst(v_mvarId_1523_, v_fvarId_1524_, v___y_1510_, v___y_1509_, v___y_1511_, v___y_1505_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v_mvarId_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; 
lean_dec(v_a_1516_);
lean_dec(v___y_1506_);
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
lean_dec_ref(v___x_1525_);
v_mvarId_1527_ = lean_ctor_get(v_snd_1522_, 0);
lean_inc(v_mvarId_1527_);
lean_dec(v_snd_1522_);
v___x_1528_ = lean_unsigned_to_nat(2u);
v___x_1529_ = lean_mk_empty_array_with_capacity(v___x_1528_);
v___x_1530_ = lean_array_push(v___x_1529_, v_a_1526_);
v___x_1531_ = lean_array_push(v___x_1530_, v_mvarId_1527_);
v___y_1411_ = v___y_1505_;
v___y_1412_ = v___y_1509_;
v___y_1413_ = v___y_1510_;
v___y_1414_ = v___y_1511_;
v_a_1415_ = v___x_1531_;
goto v___jp_1410_;
}
else
{
lean_object* v_a_1532_; 
lean_dec(v_snd_1522_);
v_a_1532_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1532_);
lean_dec_ref(v___x_1525_);
v___y_1495_ = v_a_1516_;
v___y_1496_ = v___y_1505_;
v___y_1497_ = v___y_1506_;
v___y_1498_ = v___y_1509_;
v___y_1499_ = v___y_1510_;
v___y_1500_ = v___y_1511_;
v_a_1501_ = v_a_1532_;
goto v___jp_1494_;
}
}
else
{
lean_object* v___x_1533_; lean_object* v___x_1534_; 
lean_dec(v_a_1519_);
v___x_1533_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__5);
v___x_1534_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_1533_, v___y_1510_, v___y_1509_, v___y_1511_, v___y_1505_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; 
lean_dec(v_a_1516_);
lean_dec(v___y_1506_);
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
lean_dec_ref(v___x_1534_);
v___y_1411_ = v___y_1505_;
v___y_1412_ = v___y_1509_;
v___y_1413_ = v___y_1510_;
v___y_1414_ = v___y_1511_;
v_a_1415_ = v_a_1535_;
goto v___jp_1410_;
}
else
{
lean_object* v_a_1536_; 
v_a_1536_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1536_);
lean_dec_ref(v___x_1534_);
v___y_1495_ = v_a_1516_;
v___y_1496_ = v___y_1505_;
v___y_1497_ = v___y_1506_;
v___y_1498_ = v___y_1509_;
v___y_1499_ = v___y_1510_;
v___y_1500_ = v___y_1511_;
v_a_1501_ = v_a_1536_;
goto v___jp_1494_;
}
}
}
else
{
lean_object* v_a_1537_; 
v_a_1537_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_a_1537_);
lean_dec_ref(v___x_1518_);
v___y_1495_ = v_a_1516_;
v___y_1496_ = v___y_1505_;
v___y_1497_ = v___y_1506_;
v___y_1498_ = v___y_1509_;
v___y_1499_ = v___y_1510_;
v___y_1500_ = v___y_1511_;
v_a_1501_ = v_a_1537_;
goto v___jp_1494_;
}
}
else
{
lean_object* v_a_1538_; lean_object* v___x_1540_; uint8_t v_isShared_1541_; uint8_t v_isSharedCheck_1545_; 
lean_dec_ref(v___y_1511_);
lean_dec(v___y_1506_);
lean_dec(v_matchDeclName_1402_);
v_a_1538_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1545_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1545_ == 0)
{
v___x_1540_ = v___x_1515_;
v_isShared_1541_ = v_isSharedCheck_1545_;
goto v_resetjp_1539_;
}
else
{
lean_inc(v_a_1538_);
lean_dec(v___x_1515_);
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
lean_dec_ref(v___y_1511_);
lean_dec(v___y_1506_);
lean_dec(v_matchDeclName_1402_);
return v___x_1514_;
}
}
else
{
lean_object* v___x_1546_; 
lean_dec_ref(v___y_1511_);
lean_dec_ref(v___y_1507_);
lean_dec(v___y_1506_);
lean_dec(v_matchDeclName_1402_);
v___x_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1546_, 0, v___y_1512_);
return v___x_1546_;
}
}
v___jp_1547_:
{
uint8_t v___x_1556_; 
v___x_1556_ = l_Lean_Exception_isInterrupt(v_a_1555_);
if (v___x_1556_ == 0)
{
uint8_t v___x_1557_; 
lean_inc_ref(v_a_1555_);
v___x_1557_ = l_Lean_Exception_isRuntime(v_a_1555_);
v___y_1505_ = v___y_1548_;
v___y_1506_ = v___y_1550_;
v___y_1507_ = v___y_1549_;
v___y_1508_ = v___y_1551_;
v___y_1509_ = v___y_1552_;
v___y_1510_ = v___y_1553_;
v___y_1511_ = v___y_1554_;
v___y_1512_ = v_a_1555_;
v___y_1513_ = v___x_1557_;
goto v___jp_1504_;
}
else
{
v___y_1505_ = v___y_1548_;
v___y_1506_ = v___y_1550_;
v___y_1507_ = v___y_1549_;
v___y_1508_ = v___y_1551_;
v___y_1509_ = v___y_1552_;
v___y_1510_ = v___y_1553_;
v___y_1511_ = v___y_1554_;
v___y_1512_ = v_a_1555_;
v___y_1513_ = v___x_1556_;
goto v___jp_1504_;
}
}
v___jp_1558_:
{
if (lean_obj_tag(v___y_1566_) == 0)
{
lean_object* v_a_1567_; 
lean_dec_ref(v___y_1561_);
lean_dec(v___y_1560_);
v_a_1567_ = lean_ctor_get(v___y_1566_, 0);
lean_inc(v_a_1567_);
lean_dec_ref(v___y_1566_);
v___y_1411_ = v___y_1559_;
v___y_1412_ = v___y_1563_;
v___y_1413_ = v___y_1564_;
v___y_1414_ = v___y_1565_;
v_a_1415_ = v_a_1567_;
goto v___jp_1410_;
}
else
{
lean_object* v_a_1568_; 
v_a_1568_ = lean_ctor_get(v___y_1566_, 0);
lean_inc(v_a_1568_);
lean_dec_ref(v___y_1566_);
v___y_1548_ = v___y_1559_;
v___y_1549_ = v___y_1561_;
v___y_1550_ = v___y_1560_;
v___y_1551_ = v___y_1562_;
v___y_1552_ = v___y_1563_;
v___y_1553_ = v___y_1564_;
v___y_1554_ = v___y_1565_;
v_a_1555_ = v_a_1568_;
goto v___jp_1547_;
}
}
v___jp_1569_:
{
if (v___y_1578_ == 0)
{
lean_object* v___x_1579_; 
lean_dec_ref(v___y_1574_);
v___x_1579_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1572_, v___y_1575_, v___y_1570_);
lean_dec_ref(v___y_1572_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v___x_1580_; 
lean_dec_ref(v___x_1579_);
v___x_1580_ = l_Lean_Meta_saveState___redArg(v___y_1575_, v___y_1570_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1582_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
lean_inc(v_a_1581_);
lean_dec_ref(v___x_1580_);
lean_inc(v___y_1571_);
v___x_1582_ = l_Lean_Meta_simpIfTarget(v___y_1571_, v___y_1573_, v___y_1573_, v___y_1576_, v___y_1575_, v___y_1577_, v___y_1570_);
if (lean_obj_tag(v___x_1582_) == 0)
{
lean_object* v_a_1583_; uint8_t v___x_1584_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_a_1583_);
lean_dec_ref(v___x_1582_);
v___x_1584_ = l_Lean_instBEqMVarId_beq(v_a_1583_, v___y_1571_);
if (v___x_1584_ == 0)
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = lean_box(0);
v___x_1586_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0(v_a_1583_, v___x_1585_, v___y_1576_, v___y_1575_, v___y_1577_, v___y_1570_);
v___y_1559_ = v___y_1570_;
v___y_1560_ = v___y_1571_;
v___y_1561_ = v_a_1581_;
v___y_1562_ = v___y_1573_;
v___y_1563_ = v___y_1575_;
v___y_1564_ = v___y_1576_;
v___y_1565_ = v___y_1577_;
v___y_1566_ = v___x_1586_;
goto v___jp_1558_;
}
else
{
lean_object* v___x_1587_; lean_object* v___x_1588_; 
v___x_1587_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__7);
v___x_1588_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_1587_, v___y_1576_, v___y_1575_, v___y_1577_, v___y_1570_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v_a_1589_; lean_object* v___x_1590_; 
v_a_1589_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_a_1589_);
lean_dec_ref(v___x_1588_);
v___x_1590_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___lam__0(v_a_1583_, v_a_1589_, v___y_1576_, v___y_1575_, v___y_1577_, v___y_1570_);
v___y_1559_ = v___y_1570_;
v___y_1560_ = v___y_1571_;
v___y_1561_ = v_a_1581_;
v___y_1562_ = v___y_1573_;
v___y_1563_ = v___y_1575_;
v___y_1564_ = v___y_1576_;
v___y_1565_ = v___y_1577_;
v___y_1566_ = v___x_1590_;
goto v___jp_1558_;
}
else
{
lean_object* v_a_1591_; 
lean_dec(v_a_1583_);
v_a_1591_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_a_1591_);
lean_dec_ref(v___x_1588_);
v___y_1548_ = v___y_1570_;
v___y_1549_ = v_a_1581_;
v___y_1550_ = v___y_1571_;
v___y_1551_ = v___y_1573_;
v___y_1552_ = v___y_1575_;
v___y_1553_ = v___y_1576_;
v___y_1554_ = v___y_1577_;
v_a_1555_ = v_a_1591_;
goto v___jp_1547_;
}
}
}
else
{
lean_object* v_a_1592_; 
v_a_1592_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_a_1592_);
lean_dec_ref(v___x_1582_);
v___y_1548_ = v___y_1570_;
v___y_1549_ = v_a_1581_;
v___y_1550_ = v___y_1571_;
v___y_1551_ = v___y_1573_;
v___y_1552_ = v___y_1575_;
v___y_1553_ = v___y_1576_;
v___y_1554_ = v___y_1577_;
v_a_1555_ = v_a_1592_;
goto v___jp_1547_;
}
}
else
{
lean_object* v_a_1593_; lean_object* v___x_1595_; uint8_t v_isShared_1596_; uint8_t v_isSharedCheck_1600_; 
lean_dec_ref(v___y_1577_);
lean_dec(v___y_1571_);
lean_dec(v_matchDeclName_1402_);
v_a_1593_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1600_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1600_ == 0)
{
v___x_1595_ = v___x_1580_;
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
else
{
lean_inc(v_a_1593_);
lean_dec(v___x_1580_);
v___x_1595_ = lean_box(0);
v_isShared_1596_ = v_isSharedCheck_1600_;
goto v_resetjp_1594_;
}
v_resetjp_1594_:
{
lean_object* v___x_1598_; 
if (v_isShared_1596_ == 0)
{
v___x_1598_ = v___x_1595_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1599_; 
v_reuseFailAlloc_1599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1599_, 0, v_a_1593_);
v___x_1598_ = v_reuseFailAlloc_1599_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
return v___x_1598_;
}
}
}
}
else
{
lean_dec_ref(v___y_1577_);
lean_dec(v___y_1571_);
lean_dec(v_matchDeclName_1402_);
return v___x_1579_;
}
}
else
{
lean_dec_ref(v___y_1572_);
lean_dec(v___y_1571_);
v___y_1430_ = v___y_1570_;
v___y_1431_ = v___y_1575_;
v___y_1432_ = v___y_1576_;
v___y_1433_ = v___y_1577_;
v___y_1434_ = v___y_1574_;
goto v___jp_1429_;
}
}
v___jp_1601_:
{
if (v___y_1610_ == 0)
{
lean_object* v___x_1611_; 
lean_dec_ref(v___y_1606_);
v___x_1611_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1605_, v___y_1607_, v___y_1602_);
lean_dec_ref(v___y_1605_);
if (lean_obj_tag(v___x_1611_) == 0)
{
lean_object* v___x_1612_; 
lean_dec_ref(v___x_1611_);
v___x_1612_ = l_Lean_Meta_saveState___redArg(v___y_1607_, v___y_1602_);
if (lean_obj_tag(v___x_1612_) == 0)
{
lean_object* v_a_1613_; lean_object* v___x_1614_; 
v_a_1613_ = lean_ctor_get(v___x_1612_, 0);
lean_inc(v_a_1613_);
lean_dec_ref(v___x_1612_);
lean_inc(v___y_1603_);
v___x_1614_ = l_Lean_Meta_splitSparseCasesOn(v___y_1603_, v___y_1608_, v___y_1607_, v___y_1609_, v___y_1602_);
if (lean_obj_tag(v___x_1614_) == 0)
{
lean_dec(v_a_1613_);
lean_dec(v___y_1603_);
v___y_1430_ = v___y_1602_;
v___y_1431_ = v___y_1607_;
v___y_1432_ = v___y_1608_;
v___y_1433_ = v___y_1609_;
v___y_1434_ = v___x_1614_;
goto v___jp_1429_;
}
else
{
lean_object* v_a_1615_; uint8_t v___x_1616_; 
v_a_1615_ = lean_ctor_get(v___x_1614_, 0);
lean_inc(v_a_1615_);
v___x_1616_ = l_Lean_Exception_isInterrupt(v_a_1615_);
if (v___x_1616_ == 0)
{
uint8_t v___x_1617_; 
v___x_1617_ = l_Lean_Exception_isRuntime(v_a_1615_);
v___y_1570_ = v___y_1602_;
v___y_1571_ = v___y_1603_;
v___y_1572_ = v_a_1613_;
v___y_1573_ = v___y_1604_;
v___y_1574_ = v___x_1614_;
v___y_1575_ = v___y_1607_;
v___y_1576_ = v___y_1608_;
v___y_1577_ = v___y_1609_;
v___y_1578_ = v___x_1617_;
goto v___jp_1569_;
}
else
{
lean_dec(v_a_1615_);
v___y_1570_ = v___y_1602_;
v___y_1571_ = v___y_1603_;
v___y_1572_ = v_a_1613_;
v___y_1573_ = v___y_1604_;
v___y_1574_ = v___x_1614_;
v___y_1575_ = v___y_1607_;
v___y_1576_ = v___y_1608_;
v___y_1577_ = v___y_1609_;
v___y_1578_ = v___x_1616_;
goto v___jp_1569_;
}
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
lean_dec_ref(v___y_1609_);
lean_dec(v___y_1603_);
lean_dec(v_matchDeclName_1402_);
v_a_1618_ = lean_ctor_get(v___x_1612_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1612_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1612_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1612_);
v___x_1620_ = lean_box(0);
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
v_resetjp_1619_:
{
lean_object* v___x_1623_; 
if (v_isShared_1621_ == 0)
{
v___x_1623_ = v___x_1620_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v_a_1618_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
}
else
{
lean_dec_ref(v___y_1609_);
lean_dec(v___y_1603_);
lean_dec(v_matchDeclName_1402_);
return v___x_1611_;
}
}
else
{
lean_dec_ref(v___y_1605_);
lean_dec(v___y_1603_);
v___y_1430_ = v___y_1602_;
v___y_1431_ = v___y_1607_;
v___y_1432_ = v___y_1608_;
v___y_1433_ = v___y_1609_;
v___y_1434_ = v___y_1606_;
goto v___jp_1429_;
}
}
v___jp_1626_:
{
if (v___y_1635_ == 0)
{
lean_object* v___x_1636_; 
lean_dec_ref(v___y_1629_);
v___x_1636_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1631_, v___y_1632_, v___y_1627_);
lean_dec_ref(v___y_1631_);
if (lean_obj_tag(v___x_1636_) == 0)
{
lean_object* v___x_1637_; 
lean_dec_ref(v___x_1636_);
v___x_1637_ = l_Lean_Meta_saveState___redArg(v___y_1632_, v___y_1627_);
if (lean_obj_tag(v___x_1637_) == 0)
{
lean_object* v_a_1638_; lean_object* v___x_1639_; 
v_a_1638_ = lean_ctor_get(v___x_1637_, 0);
lean_inc(v_a_1638_);
lean_dec_ref(v___x_1637_);
lean_inc(v___y_1628_);
v___x_1639_ = l_Lean_Meta_reduceSparseCasesOn(v___y_1628_, v___y_1633_, v___y_1632_, v___y_1634_, v___y_1627_);
if (lean_obj_tag(v___x_1639_) == 0)
{
lean_dec(v_a_1638_);
lean_dec(v___y_1628_);
v___y_1430_ = v___y_1627_;
v___y_1431_ = v___y_1632_;
v___y_1432_ = v___y_1633_;
v___y_1433_ = v___y_1634_;
v___y_1434_ = v___x_1639_;
goto v___jp_1429_;
}
else
{
lean_object* v_a_1640_; uint8_t v___x_1641_; 
v_a_1640_ = lean_ctor_get(v___x_1639_, 0);
lean_inc(v_a_1640_);
v___x_1641_ = l_Lean_Exception_isInterrupt(v_a_1640_);
if (v___x_1641_ == 0)
{
uint8_t v___x_1642_; 
v___x_1642_ = l_Lean_Exception_isRuntime(v_a_1640_);
v___y_1602_ = v___y_1627_;
v___y_1603_ = v___y_1628_;
v___y_1604_ = v___y_1630_;
v___y_1605_ = v_a_1638_;
v___y_1606_ = v___x_1639_;
v___y_1607_ = v___y_1632_;
v___y_1608_ = v___y_1633_;
v___y_1609_ = v___y_1634_;
v___y_1610_ = v___x_1642_;
goto v___jp_1601_;
}
else
{
lean_dec(v_a_1640_);
v___y_1602_ = v___y_1627_;
v___y_1603_ = v___y_1628_;
v___y_1604_ = v___y_1630_;
v___y_1605_ = v_a_1638_;
v___y_1606_ = v___x_1639_;
v___y_1607_ = v___y_1632_;
v___y_1608_ = v___y_1633_;
v___y_1609_ = v___y_1634_;
v___y_1610_ = v___x_1641_;
goto v___jp_1601_;
}
}
}
else
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1628_);
lean_dec(v_matchDeclName_1402_);
v_a_1643_ = lean_ctor_get(v___x_1637_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1637_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v___x_1637_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1637_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1648_; 
if (v_isShared_1646_ == 0)
{
v___x_1648_ = v___x_1645_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1643_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
}
else
{
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1628_);
lean_dec(v_matchDeclName_1402_);
return v___x_1636_;
}
}
else
{
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1628_);
v___y_1430_ = v___y_1627_;
v___y_1431_ = v___y_1632_;
v___y_1432_ = v___y_1633_;
v___y_1433_ = v___y_1634_;
v___y_1434_ = v___y_1629_;
goto v___jp_1429_;
}
}
v___jp_1651_:
{
if (v___y_1660_ == 0)
{
lean_object* v___x_1661_; 
lean_dec_ref(v___y_1659_);
v___x_1661_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1655_, v___y_1656_, v___y_1652_);
lean_dec_ref(v___y_1655_);
if (lean_obj_tag(v___x_1661_) == 0)
{
lean_object* v___x_1662_; 
lean_dec_ref(v___x_1661_);
v___x_1662_ = l_Lean_Meta_saveState___redArg(v___y_1656_, v___y_1652_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; lean_object* v___x_1664_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
lean_inc(v_a_1663_);
lean_dec_ref(v___x_1662_);
lean_inc(v___y_1653_);
v___x_1664_ = l_Lean_Meta_casesOnStuckLHS(v___y_1653_, v___y_1657_, v___y_1656_, v___y_1658_, v___y_1652_);
if (lean_obj_tag(v___x_1664_) == 0)
{
lean_dec(v_a_1663_);
lean_dec(v___y_1653_);
v___y_1430_ = v___y_1652_;
v___y_1431_ = v___y_1656_;
v___y_1432_ = v___y_1657_;
v___y_1433_ = v___y_1658_;
v___y_1434_ = v___x_1664_;
goto v___jp_1429_;
}
else
{
lean_object* v_a_1665_; uint8_t v___x_1666_; 
v_a_1665_ = lean_ctor_get(v___x_1664_, 0);
lean_inc(v_a_1665_);
v___x_1666_ = l_Lean_Exception_isInterrupt(v_a_1665_);
if (v___x_1666_ == 0)
{
uint8_t v___x_1667_; 
v___x_1667_ = l_Lean_Exception_isRuntime(v_a_1665_);
v___y_1627_ = v___y_1652_;
v___y_1628_ = v___y_1653_;
v___y_1629_ = v___x_1664_;
v___y_1630_ = v___y_1654_;
v___y_1631_ = v_a_1663_;
v___y_1632_ = v___y_1656_;
v___y_1633_ = v___y_1657_;
v___y_1634_ = v___y_1658_;
v___y_1635_ = v___x_1667_;
goto v___jp_1626_;
}
else
{
lean_dec(v_a_1665_);
v___y_1627_ = v___y_1652_;
v___y_1628_ = v___y_1653_;
v___y_1629_ = v___x_1664_;
v___y_1630_ = v___y_1654_;
v___y_1631_ = v_a_1663_;
v___y_1632_ = v___y_1656_;
v___y_1633_ = v___y_1657_;
v___y_1634_ = v___y_1658_;
v___y_1635_ = v___x_1666_;
goto v___jp_1626_;
}
}
}
else
{
lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1675_; 
lean_dec_ref(v___y_1658_);
lean_dec(v___y_1653_);
lean_dec(v_matchDeclName_1402_);
v_a_1668_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1670_ = v___x_1662_;
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1662_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1675_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1673_; 
if (v_isShared_1671_ == 0)
{
v___x_1673_ = v___x_1670_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v_a_1668_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
else
{
lean_dec_ref(v___y_1658_);
lean_dec(v___y_1653_);
lean_dec(v_matchDeclName_1402_);
return v___x_1661_;
}
}
else
{
lean_object* v___x_1676_; 
lean_dec_ref(v___y_1658_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1653_);
lean_dec(v_matchDeclName_1402_);
v___x_1676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1676_, 0, v___y_1659_);
return v___x_1676_;
}
}
v___jp_1677_:
{
if (v___y_1686_ == 0)
{
lean_object* v___x_1687_; 
lean_dec_ref(v___y_1681_);
v___x_1687_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1682_, v___y_1683_, v___y_1678_);
lean_dec_ref(v___y_1682_);
if (lean_obj_tag(v___x_1687_) == 0)
{
lean_object* v___x_1688_; 
lean_dec_ref(v___x_1687_);
v___x_1688_ = l_Lean_Meta_saveState___redArg(v___y_1683_, v___y_1678_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1690_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
lean_inc(v_a_1689_);
lean_dec_ref(v___x_1688_);
lean_inc(v___y_1679_);
v___x_1690_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_unfoldElimOffset(v___y_1679_, v___y_1684_, v___y_1683_, v___y_1685_, v___y_1678_);
if (lean_obj_tag(v___x_1690_) == 0)
{
lean_object* v_a_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
lean_dec(v_a_1689_);
lean_dec(v___y_1679_);
v_a_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1691_);
lean_dec_ref(v___x_1690_);
v___x_1692_ = lean_unsigned_to_nat(1u);
v___x_1693_ = lean_mk_empty_array_with_capacity(v___x_1692_);
v___x_1694_ = lean_array_push(v___x_1693_, v_a_1691_);
v___y_1411_ = v___y_1678_;
v___y_1412_ = v___y_1683_;
v___y_1413_ = v___y_1684_;
v___y_1414_ = v___y_1685_;
v_a_1415_ = v___x_1694_;
goto v___jp_1410_;
}
else
{
lean_object* v_a_1695_; uint8_t v___x_1696_; 
v_a_1695_ = lean_ctor_get(v___x_1690_, 0);
lean_inc(v_a_1695_);
lean_dec_ref(v___x_1690_);
v___x_1696_ = l_Lean_Exception_isInterrupt(v_a_1695_);
if (v___x_1696_ == 0)
{
uint8_t v___x_1697_; 
lean_inc(v_a_1695_);
v___x_1697_ = l_Lean_Exception_isRuntime(v_a_1695_);
v___y_1652_ = v___y_1678_;
v___y_1653_ = v___y_1679_;
v___y_1654_ = v___y_1680_;
v___y_1655_ = v_a_1689_;
v___y_1656_ = v___y_1683_;
v___y_1657_ = v___y_1684_;
v___y_1658_ = v___y_1685_;
v___y_1659_ = v_a_1695_;
v___y_1660_ = v___x_1697_;
goto v___jp_1651_;
}
else
{
v___y_1652_ = v___y_1678_;
v___y_1653_ = v___y_1679_;
v___y_1654_ = v___y_1680_;
v___y_1655_ = v_a_1689_;
v___y_1656_ = v___y_1683_;
v___y_1657_ = v___y_1684_;
v___y_1658_ = v___y_1685_;
v___y_1659_ = v_a_1695_;
v___y_1660_ = v___x_1696_;
goto v___jp_1651_;
}
}
}
else
{
lean_object* v_a_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1705_; 
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1679_);
lean_dec(v_matchDeclName_1402_);
v_a_1698_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1705_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1705_ == 0)
{
v___x_1700_ = v___x_1688_;
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_a_1698_);
lean_dec(v___x_1688_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1705_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1703_; 
if (v_isShared_1701_ == 0)
{
v___x_1703_ = v___x_1700_;
goto v_reusejp_1702_;
}
else
{
lean_object* v_reuseFailAlloc_1704_; 
v_reuseFailAlloc_1704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1704_, 0, v_a_1698_);
v___x_1703_ = v_reuseFailAlloc_1704_;
goto v_reusejp_1702_;
}
v_reusejp_1702_:
{
return v___x_1703_;
}
}
}
}
else
{
lean_dec_ref(v___y_1685_);
lean_dec(v___y_1679_);
lean_dec(v_matchDeclName_1402_);
return v___x_1687_;
}
}
else
{
lean_dec_ref(v___y_1685_);
lean_dec_ref(v___y_1682_);
lean_dec(v___y_1679_);
lean_dec(v_matchDeclName_1402_);
return v___y_1681_;
}
}
v___jp_1706_:
{
if (v___y_1715_ == 0)
{
lean_object* v___x_1716_; 
lean_dec_ref(v___y_1708_);
v___x_1716_ = l_Lean_Meta_SavedState_restore___redArg(v___y_1714_, v___y_1711_, v___y_1707_);
lean_dec_ref(v___y_1714_);
if (lean_obj_tag(v___x_1716_) == 0)
{
lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
lean_dec_ref(v___x_1716_);
v___x_1717_ = lean_unsigned_to_nat(16u);
v___x_1718_ = lean_alloc_ctor(0, 1, 3);
lean_ctor_set(v___x_1718_, 0, v___x_1717_);
lean_ctor_set_uint8(v___x_1718_, sizeof(void*)*1, v___y_1710_);
lean_ctor_set_uint8(v___x_1718_, sizeof(void*)*1 + 1, v___y_1710_);
lean_ctor_set_uint8(v___x_1718_, sizeof(void*)*1 + 2, v___y_1710_);
v___x_1719_ = l_Lean_Meta_saveState___redArg(v___y_1711_, v___y_1707_);
if (lean_obj_tag(v___x_1719_) == 0)
{
lean_object* v_a_1720_; lean_object* v___x_1721_; 
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
lean_inc(v_a_1720_);
lean_dec_ref(v___x_1719_);
lean_inc(v___y_1709_);
v___x_1721_ = l_Lean_MVarId_contradiction(v___y_1709_, v___x_1718_, v___y_1712_, v___y_1711_, v___y_1713_, v___y_1707_);
if (lean_obj_tag(v___x_1721_) == 0)
{
lean_object* v___x_1722_; 
lean_dec_ref(v___x_1721_);
lean_dec(v_a_1720_);
lean_dec(v___y_1709_);
v___x_1722_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8);
v___y_1411_ = v___y_1707_;
v___y_1412_ = v___y_1711_;
v___y_1413_ = v___y_1712_;
v___y_1414_ = v___y_1713_;
v_a_1415_ = v___x_1722_;
goto v___jp_1410_;
}
else
{
lean_object* v_a_1723_; uint8_t v___x_1724_; 
v_a_1723_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_a_1723_);
v___x_1724_ = l_Lean_Exception_isInterrupt(v_a_1723_);
if (v___x_1724_ == 0)
{
uint8_t v___x_1725_; 
v___x_1725_ = l_Lean_Exception_isRuntime(v_a_1723_);
v___y_1678_ = v___y_1707_;
v___y_1679_ = v___y_1709_;
v___y_1680_ = v___y_1710_;
v___y_1681_ = v___x_1721_;
v___y_1682_ = v_a_1720_;
v___y_1683_ = v___y_1711_;
v___y_1684_ = v___y_1712_;
v___y_1685_ = v___y_1713_;
v___y_1686_ = v___x_1725_;
goto v___jp_1677_;
}
else
{
lean_dec(v_a_1723_);
v___y_1678_ = v___y_1707_;
v___y_1679_ = v___y_1709_;
v___y_1680_ = v___y_1710_;
v___y_1681_ = v___x_1721_;
v___y_1682_ = v_a_1720_;
v___y_1683_ = v___y_1711_;
v___y_1684_ = v___y_1712_;
v___y_1685_ = v___y_1713_;
v___y_1686_ = v___x_1724_;
goto v___jp_1677_;
}
}
}
else
{
lean_object* v_a_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1733_; 
lean_dec_ref(v___x_1718_);
lean_dec_ref(v___y_1713_);
lean_dec(v___y_1709_);
lean_dec(v_matchDeclName_1402_);
v_a_1726_ = lean_ctor_get(v___x_1719_, 0);
v_isSharedCheck_1733_ = !lean_is_exclusive(v___x_1719_);
if (v_isSharedCheck_1733_ == 0)
{
v___x_1728_ = v___x_1719_;
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_a_1726_);
lean_dec(v___x_1719_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1733_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1731_; 
if (v_isShared_1729_ == 0)
{
v___x_1731_ = v___x_1728_;
goto v_reusejp_1730_;
}
else
{
lean_object* v_reuseFailAlloc_1732_; 
v_reuseFailAlloc_1732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1732_, 0, v_a_1726_);
v___x_1731_ = v_reuseFailAlloc_1732_;
goto v_reusejp_1730_;
}
v_reusejp_1730_:
{
return v___x_1731_;
}
}
}
}
else
{
lean_dec_ref(v___y_1713_);
lean_dec(v___y_1709_);
lean_dec(v_matchDeclName_1402_);
return v___x_1716_;
}
}
else
{
lean_dec_ref(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec(v___y_1709_);
lean_dec(v_matchDeclName_1402_);
return v___y_1708_;
}
}
v___jp_1734_:
{
lean_object* v___x_1739_; lean_object* v___x_1740_; 
v___x_1739_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__9, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__9_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__9);
v___x_1740_ = l_Lean_MVarId_modifyTargetEqLHS(v_mvarId_1403_, v___x_1739_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1740_) == 0)
{
lean_object* v_a_1741_; lean_object* v___x_1742_; 
v_a_1741_ = lean_ctor_get(v___x_1740_, 0);
lean_inc(v_a_1741_);
lean_dec_ref(v___x_1740_);
v___x_1742_ = l_Lean_Meta_saveState___redArg(v___y_1736_, v___y_1738_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; uint8_t v___x_1744_; lean_object* v___x_1745_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref(v___x_1742_);
v___x_1744_ = 1;
lean_inc(v_a_1741_);
v___x_1745_ = l_Lean_MVarId_refl(v_a_1741_, v___x_1744_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v___x_1746_; 
lean_dec_ref(v___x_1745_);
lean_dec(v_a_1743_);
lean_dec(v_a_1741_);
v___x_1746_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8);
v___y_1411_ = v___y_1738_;
v___y_1412_ = v___y_1736_;
v___y_1413_ = v___y_1735_;
v___y_1414_ = v___y_1737_;
v_a_1415_ = v___x_1746_;
goto v___jp_1410_;
}
else
{
lean_object* v_a_1747_; uint8_t v___x_1748_; 
v_a_1747_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1747_);
v___x_1748_ = l_Lean_Exception_isInterrupt(v_a_1747_);
if (v___x_1748_ == 0)
{
uint8_t v___x_1749_; 
v___x_1749_ = l_Lean_Exception_isRuntime(v_a_1747_);
v___y_1707_ = v___y_1738_;
v___y_1708_ = v___x_1745_;
v___y_1709_ = v_a_1741_;
v___y_1710_ = v___x_1744_;
v___y_1711_ = v___y_1736_;
v___y_1712_ = v___y_1735_;
v___y_1713_ = v___y_1737_;
v___y_1714_ = v_a_1743_;
v___y_1715_ = v___x_1749_;
goto v___jp_1706_;
}
else
{
lean_dec(v_a_1747_);
v___y_1707_ = v___y_1738_;
v___y_1708_ = v___x_1745_;
v___y_1709_ = v_a_1741_;
v___y_1710_ = v___x_1744_;
v___y_1711_ = v___y_1736_;
v___y_1712_ = v___y_1735_;
v___y_1713_ = v___y_1737_;
v___y_1714_ = v_a_1743_;
v___y_1715_ = v___x_1748_;
goto v___jp_1706_;
}
}
}
else
{
lean_object* v_a_1750_; lean_object* v___x_1752_; uint8_t v_isShared_1753_; uint8_t v_isSharedCheck_1757_; 
lean_dec(v_a_1741_);
lean_dec_ref(v___y_1737_);
lean_dec(v_matchDeclName_1402_);
v_a_1750_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1757_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1757_ == 0)
{
v___x_1752_ = v___x_1742_;
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
else
{
lean_inc(v_a_1750_);
lean_dec(v___x_1742_);
v___x_1752_ = lean_box(0);
v_isShared_1753_ = v_isSharedCheck_1757_;
goto v_resetjp_1751_;
}
v_resetjp_1751_:
{
lean_object* v___x_1755_; 
if (v_isShared_1753_ == 0)
{
v___x_1755_ = v___x_1752_;
goto v_reusejp_1754_;
}
else
{
lean_object* v_reuseFailAlloc_1756_; 
v_reuseFailAlloc_1756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1756_, 0, v_a_1750_);
v___x_1755_ = v_reuseFailAlloc_1756_;
goto v_reusejp_1754_;
}
v_reusejp_1754_:
{
return v___x_1755_;
}
}
}
}
else
{
lean_object* v_a_1758_; lean_object* v___x_1760_; uint8_t v_isShared_1761_; uint8_t v_isSharedCheck_1765_; 
lean_dec_ref(v___y_1737_);
lean_dec(v_matchDeclName_1402_);
v_a_1758_ = lean_ctor_get(v___x_1740_, 0);
v_isSharedCheck_1765_ = !lean_is_exclusive(v___x_1740_);
if (v_isSharedCheck_1765_ == 0)
{
v___x_1760_ = v___x_1740_;
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
else
{
lean_inc(v_a_1758_);
lean_dec(v___x_1740_);
v___x_1760_ = lean_box(0);
v_isShared_1761_ = v_isSharedCheck_1765_;
goto v_resetjp_1759_;
}
v_resetjp_1759_:
{
lean_object* v___x_1763_; 
if (v_isShared_1761_ == 0)
{
v___x_1763_ = v___x_1760_;
goto v_reusejp_1762_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v_a_1758_);
v___x_1763_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1762_;
}
v_reusejp_1762_:
{
return v___x_1763_;
}
}
}
}
v___jp_1783_:
{
uint8_t v_hasTrace_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; 
v_hasTrace_1784_ = lean_ctor_get_uint8(v_options_1768_, sizeof(void*)*1);
v___x_1785_ = lean_unsigned_to_nat(1u);
v___x_1786_ = lean_nat_add(v_currRecDepth_1769_, v___x_1785_);
lean_inc_ref(v_inheritedTraceOptions_1781_);
lean_inc(v_cancelTk_x3f_1779_);
lean_inc(v_currMacroScope_1777_);
lean_inc(v_quotContext_1776_);
lean_inc(v_maxHeartbeats_1775_);
lean_inc(v_initHeartbeats_1774_);
lean_inc(v_openDecls_1773_);
lean_inc(v_currNamespace_1772_);
lean_inc(v_ref_1771_);
lean_inc(v_maxRecDepth_1770_);
lean_inc_ref(v_options_1768_);
lean_inc_ref(v_fileMap_1767_);
lean_inc_ref(v_fileName_1766_);
v___x_1787_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1787_, 0, v_fileName_1766_);
lean_ctor_set(v___x_1787_, 1, v_fileMap_1767_);
lean_ctor_set(v___x_1787_, 2, v_options_1768_);
lean_ctor_set(v___x_1787_, 3, v___x_1786_);
lean_ctor_set(v___x_1787_, 4, v_maxRecDepth_1770_);
lean_ctor_set(v___x_1787_, 5, v_ref_1771_);
lean_ctor_set(v___x_1787_, 6, v_currNamespace_1772_);
lean_ctor_set(v___x_1787_, 7, v_openDecls_1773_);
lean_ctor_set(v___x_1787_, 8, v_initHeartbeats_1774_);
lean_ctor_set(v___x_1787_, 9, v_maxHeartbeats_1775_);
lean_ctor_set(v___x_1787_, 10, v_quotContext_1776_);
lean_ctor_set(v___x_1787_, 11, v_currMacroScope_1777_);
lean_ctor_set(v___x_1787_, 12, v_cancelTk_x3f_1779_);
lean_ctor_set(v___x_1787_, 13, v_inheritedTraceOptions_1781_);
lean_ctor_set_uint8(v___x_1787_, sizeof(void*)*14, v_diag_1778_);
lean_ctor_set_uint8(v___x_1787_, sizeof(void*)*14 + 1, v_suppressElabErrors_1780_);
if (v_hasTrace_1784_ == 0)
{
v___y_1735_ = v_a_1405_;
v___y_1736_ = v_a_1406_;
v___y_1737_ = v___x_1787_;
v___y_1738_ = v_a_1408_;
goto v___jp_1734_;
}
else
{
lean_object* v___x_1788_; uint8_t v___x_1789_; 
v___x_1788_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16);
v___x_1789_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1781_, v_options_1768_, v___x_1788_);
if (v___x_1789_ == 0)
{
v___y_1735_ = v_a_1405_;
v___y_1736_ = v_a_1406_;
v___y_1737_ = v___x_1787_;
v___y_1738_ = v_a_1408_;
goto v___jp_1734_;
}
else
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1790_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__18, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__18_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__18);
lean_inc(v_mvarId_1403_);
v___x_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1791_, 0, v_mvarId_1403_);
v___x_1792_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1792_, 0, v___x_1790_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
v___x_1793_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v_cls_1782_, v___x_1792_, v_a_1405_, v_a_1406_, v___x_1787_, v_a_1408_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_dec_ref(v___x_1793_);
v___y_1735_ = v_a_1405_;
v___y_1736_ = v_a_1406_;
v___y_1737_ = v___x_1787_;
v___y_1738_ = v_a_1408_;
goto v___jp_1734_;
}
else
{
lean_dec_ref(v___x_1787_);
lean_dec(v_mvarId_1403_);
lean_dec(v_matchDeclName_1402_);
return v___x_1793_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0(lean_object* v_depth_1798_, lean_object* v_matchDeclName_1799_, lean_object* v_as_1800_, size_t v_i_1801_, size_t v_stop_1802_, lean_object* v_b_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
uint8_t v___x_1809_; 
v___x_1809_ = lean_usize_dec_eq(v_i_1801_, v_stop_1802_);
if (v___x_1809_ == 0)
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
v___x_1810_ = lean_array_uget_borrowed(v_as_1800_, v_i_1801_);
v___x_1811_ = lean_unsigned_to_nat(1u);
v___x_1812_ = lean_nat_add(v_depth_1798_, v___x_1811_);
lean_inc(v___x_1810_);
lean_inc(v_matchDeclName_1799_);
v___x_1813_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go(v_matchDeclName_1799_, v___x_1810_, v___x_1812_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
lean_dec(v___x_1812_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; size_t v___x_1815_; size_t v___x_1816_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
lean_inc(v_a_1814_);
lean_dec_ref(v___x_1813_);
v___x_1815_ = ((size_t)1ULL);
v___x_1816_ = lean_usize_add(v_i_1801_, v___x_1815_);
v_i_1801_ = v___x_1816_;
v_b_1803_ = v_a_1814_;
goto _start;
}
else
{
lean_dec(v_matchDeclName_1799_);
return v___x_1813_;
}
}
else
{
lean_object* v___x_1818_; 
lean_dec(v_matchDeclName_1799_);
v___x_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1818_, 0, v_b_1803_);
return v___x_1818_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0___boxed(lean_object* v_depth_1819_, lean_object* v_matchDeclName_1820_, lean_object* v_as_1821_, lean_object* v_i_1822_, lean_object* v_stop_1823_, lean_object* v_b_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
size_t v_i_boxed_1830_; size_t v_stop_boxed_1831_; lean_object* v_res_1832_; 
v_i_boxed_1830_ = lean_unbox_usize(v_i_1822_);
lean_dec(v_i_1822_);
v_stop_boxed_1831_ = lean_unbox_usize(v_stop_1823_);
lean_dec(v_stop_1823_);
v_res_1832_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__0(v_depth_1819_, v_matchDeclName_1820_, v_as_1821_, v_i_boxed_1830_, v_stop_boxed_1831_, v_b_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_);
lean_dec(v___y_1828_);
lean_dec_ref(v___y_1827_);
lean_dec(v___y_1826_);
lean_dec_ref(v___y_1825_);
lean_dec_ref(v_as_1821_);
lean_dec(v_depth_1819_);
return v_res_1832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___boxed(lean_object* v_matchDeclName_1833_, lean_object* v_mvarId_1834_, lean_object* v_depth_1835_, lean_object* v_a_1836_, lean_object* v_a_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go(v_matchDeclName_1833_, v_mvarId_1834_, v_depth_1835_, v_a_1836_, v_a_1837_, v_a_1838_, v_a_1839_);
lean_dec(v_a_1839_);
lean_dec_ref(v_a_1838_);
lean_dec(v_a_1837_);
lean_dec_ref(v_a_1836_);
lean_dec(v_depth_1835_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(lean_object* v_e_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
uint8_t v___x_1846_; 
v___x_1846_ = l_Lean_Expr_hasMVar(v_e_1842_);
if (v___x_1846_ == 0)
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v_e_1842_);
return v___x_1847_;
}
else
{
lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v_mctx_1850_; lean_object* v___x_1851_; lean_object* v_fst_1852_; lean_object* v_snd_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v_cache_1856_; lean_object* v_zetaDeltaFVarIds_1857_; lean_object* v_postponed_1858_; lean_object* v_diag_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1868_; 
v___x_1848_ = lean_st_ref_get(v___y_1844_);
lean_dec(v___x_1848_);
v___x_1849_ = lean_st_ref_get(v___y_1843_);
v_mctx_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc_ref(v_mctx_1850_);
lean_dec(v___x_1849_);
v___x_1851_ = l_Lean_instantiateMVarsCore(v_mctx_1850_, v_e_1842_);
v_fst_1852_ = lean_ctor_get(v___x_1851_, 0);
lean_inc(v_fst_1852_);
v_snd_1853_ = lean_ctor_get(v___x_1851_, 1);
lean_inc(v_snd_1853_);
lean_dec_ref(v___x_1851_);
v___x_1854_ = lean_st_ref_get(v___y_1844_);
lean_dec(v___x_1854_);
v___x_1855_ = lean_st_ref_take(v___y_1843_);
v_cache_1856_ = lean_ctor_get(v___x_1855_, 1);
v_zetaDeltaFVarIds_1857_ = lean_ctor_get(v___x_1855_, 2);
v_postponed_1858_ = lean_ctor_get(v___x_1855_, 3);
v_diag_1859_ = lean_ctor_get(v___x_1855_, 4);
v_isSharedCheck_1868_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1868_ == 0)
{
lean_object* v_unused_1869_; 
v_unused_1869_ = lean_ctor_get(v___x_1855_, 0);
lean_dec(v_unused_1869_);
v___x_1861_ = v___x_1855_;
v_isShared_1862_ = v_isSharedCheck_1868_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_diag_1859_);
lean_inc(v_postponed_1858_);
lean_inc(v_zetaDeltaFVarIds_1857_);
lean_inc(v_cache_1856_);
lean_dec(v___x_1855_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1868_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 0, v_snd_1853_);
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1867_; 
v_reuseFailAlloc_1867_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1867_, 0, v_snd_1853_);
lean_ctor_set(v_reuseFailAlloc_1867_, 1, v_cache_1856_);
lean_ctor_set(v_reuseFailAlloc_1867_, 2, v_zetaDeltaFVarIds_1857_);
lean_ctor_set(v_reuseFailAlloc_1867_, 3, v_postponed_1858_);
lean_ctor_set(v_reuseFailAlloc_1867_, 4, v_diag_1859_);
v___x_1864_ = v_reuseFailAlloc_1867_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1865_ = lean_st_ref_set(v___y_1843_, v___x_1864_);
v___x_1866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1866_, 0, v_fst_1852_);
return v___x_1866_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg___boxed(lean_object* v_e_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(v_e_1870_, v___y_1871_, v___y_1872_);
lean_dec(v___y_1872_);
lean_dec(v___y_1871_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0(lean_object* v_e_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(v_e_1875_, v___y_1877_, v___y_1879_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___boxed(lean_object* v_e_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_){
_start:
{
lean_object* v_res_1888_; 
v_res_1888_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0(v_e_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
lean_dec(v___y_1886_);
lean_dec_ref(v___y_1885_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
return v_res_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg(lean_object* v_lctx_1889_, lean_object* v_localInsts_1890_, lean_object* v_x_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_){
_start:
{
lean_object* v___x_1897_; 
v___x_1897_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_1889_, v_localInsts_1890_, v_x_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v_a_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1905_; 
v_a_1898_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1905_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1905_ == 0)
{
v___x_1900_ = v___x_1897_;
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_a_1898_);
lean_dec(v___x_1897_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1905_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v___x_1903_; 
if (v_isShared_1901_ == 0)
{
v___x_1903_ = v___x_1900_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v_a_1898_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
else
{
lean_object* v_a_1906_; lean_object* v___x_1908_; uint8_t v_isShared_1909_; uint8_t v_isSharedCheck_1913_; 
v_a_1906_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1913_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1913_ == 0)
{
v___x_1908_ = v___x_1897_;
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
else
{
lean_inc(v_a_1906_);
lean_dec(v___x_1897_);
v___x_1908_ = lean_box(0);
v_isShared_1909_ = v_isSharedCheck_1913_;
goto v_resetjp_1907_;
}
v_resetjp_1907_:
{
lean_object* v___x_1911_; 
if (v_isShared_1909_ == 0)
{
v___x_1911_ = v___x_1908_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v_a_1906_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg___boxed(lean_object* v_lctx_1914_, lean_object* v_localInsts_1915_, lean_object* v_x_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_){
_start:
{
lean_object* v_res_1922_; 
v_res_1922_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg(v_lctx_1914_, v_localInsts_1915_, v_x_1916_, v___y_1917_, v___y_1918_, v___y_1919_, v___y_1920_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
lean_dec(v___y_1918_);
lean_dec_ref(v___y_1917_);
return v_res_1922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2(lean_object* v_00_u03b1_1923_, lean_object* v_lctx_1924_, lean_object* v_localInsts_1925_, lean_object* v_x_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_){
_start:
{
lean_object* v___x_1932_; 
v___x_1932_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg(v_lctx_1924_, v_localInsts_1925_, v_x_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___boxed(lean_object* v_00_u03b1_1933_, lean_object* v_lctx_1934_, lean_object* v_localInsts_1935_, lean_object* v_x_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2(v_00_u03b1_1933_, v_lctx_1934_, v_localInsts_1935_, v_x_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec(v___y_1938_);
lean_dec_ref(v___y_1937_);
return v_res_1942_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Match_proveCondEqThm___lam__0(lean_object* v_matchDeclName_1943_, lean_object* v_x_1944_){
_start:
{
uint8_t v___x_1945_; 
v___x_1945_ = lean_name_eq(v_x_1944_, v_matchDeclName_1943_);
return v___x_1945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__0___boxed(lean_object* v_matchDeclName_1946_, lean_object* v_x_1947_){
_start:
{
uint8_t v_res_1948_; lean_object* v_r_1949_; 
v_res_1948_ = l_Lean_Meta_Match_proveCondEqThm___lam__0(v_matchDeclName_1946_, v_x_1947_);
lean_dec(v_x_1947_);
lean_dec(v_matchDeclName_1946_);
v_r_1949_ = lean_box(v_res_1948_);
return v_r_1949_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg(lean_object* v_upperBound_1950_, lean_object* v_a_1951_, lean_object* v_b_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_){
_start:
{
uint8_t v___x_1958_; 
v___x_1958_ = lean_nat_dec_lt(v_a_1951_, v_upperBound_1950_);
if (v___x_1958_ == 0)
{
lean_object* v___x_1959_; 
lean_dec(v_a_1951_);
v___x_1959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1959_, 0, v_b_1952_);
return v___x_1959_;
}
else
{
uint8_t v___x_1960_; lean_object* v___x_1961_; 
v___x_1960_ = 0;
v___x_1961_ = l_Lean_Meta_introSubstEq(v_b_1952_, v___x_1960_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; lean_object* v_snd_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_a_1962_);
lean_dec_ref(v___x_1961_);
v_snd_1963_ = lean_ctor_get(v_a_1962_, 1);
lean_inc(v_snd_1963_);
lean_dec(v_a_1962_);
v___x_1964_ = lean_unsigned_to_nat(1u);
v___x_1965_ = lean_nat_add(v_a_1951_, v___x_1964_);
lean_dec(v_a_1951_);
v_a_1951_ = v___x_1965_;
v_b_1952_ = v_snd_1963_;
goto _start;
}
else
{
lean_object* v_a_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_1974_; 
lean_dec(v_a_1951_);
v_a_1967_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1969_ = v___x_1961_;
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_a_1967_);
lean_dec(v___x_1961_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_1974_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1972_; 
if (v_isShared_1970_ == 0)
{
v___x_1972_ = v___x_1969_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v_a_1967_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg___boxed(lean_object* v_upperBound_1975_, lean_object* v_a_1976_, lean_object* v_b_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v_res_1983_; 
v_res_1983_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg(v_upperBound_1975_, v_a_1976_, v_b_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
lean_dec(v_upperBound_1975_);
return v_res_1983_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1984_; 
v___x_1984_ = lean_mk_string_unchecked("proveCondEqThm after subst", 26, 26);
return v___x_1984_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1985_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__0, &l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__0_once, _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__0);
v___x_1986_ = l_Lean_stringToMessageData(v___x_1985_);
return v___x_1986_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1987_; 
v___x_1987_ = lean_mk_string_unchecked("proveCondEqThm ", 15, 15);
return v___x_1987_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1988_; lean_object* v___x_1989_; 
v___x_1988_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__2, &l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__2_once, _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__2);
v___x_1989_ = l_Lean_stringToMessageData(v___x_1988_);
return v___x_1989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1(lean_object* v_type_1990_, lean_object* v___f_1991_, lean_object* v_matchDeclName_1992_, lean_object* v___x_1993_, uint8_t v___x_1994_, lean_object* v_heqPos_1995_, lean_object* v_heqNum_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_){
_start:
{
lean_object* v___x_2002_; lean_object* v_a_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2153_; 
v___x_2002_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(v_type_1990_, v___y_1998_, v___y_2000_);
v_a_2003_ = lean_ctor_get(v___x_2002_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2002_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2005_ = v___x_2002_;
v_isShared_2006_ = v_isSharedCheck_2153_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_a_2003_);
lean_dec(v___x_2002_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2153_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2007_ = lean_box(0);
v___x_2008_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_2003_, v___x_2007_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
if (lean_obj_tag(v___x_2008_) == 0)
{
lean_object* v_a_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2152_; 
v_a_2009_ = lean_ctor_get(v___x_2008_, 0);
v_isSharedCheck_2152_ = !lean_is_exclusive(v___x_2008_);
if (v_isSharedCheck_2152_ == 0)
{
v___x_2011_ = v___x_2008_;
v_isShared_2012_ = v_isSharedCheck_2152_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_a_2009_);
lean_dec(v___x_2008_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2152_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v___y_2014_; lean_object* v___y_2015_; lean_object* v___y_2016_; lean_object* v___y_2017_; lean_object* v___y_2018_; lean_object* v___y_2019_; uint8_t v___y_2020_; lean_object* v_mvarId_2055_; lean_object* v___y_2056_; lean_object* v___y_2057_; lean_object* v___y_2058_; lean_object* v___y_2059_; lean_object* v_options_2077_; lean_object* v_inheritedTraceOptions_2078_; uint8_t v_hasTrace_2079_; lean_object* v___x_2080_; lean_object* v___y_2082_; lean_object* v___y_2083_; lean_object* v___y_2084_; lean_object* v___y_2085_; 
v_options_2077_ = lean_ctor_get(v___y_1999_, 2);
v_inheritedTraceOptions_2078_ = lean_ctor_get(v___y_1999_, 13);
v_hasTrace_2079_ = lean_ctor_get_uint8(v_options_2077_, sizeof(void*)*1);
v___x_2080_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13);
if (v_hasTrace_2079_ == 0)
{
v___y_2082_ = v___y_1997_;
v___y_2083_ = v___y_1998_;
v___y_2084_ = v___y_1999_;
v___y_2085_ = v___y_2000_;
goto v___jp_2081_;
}
else
{
lean_object* v___x_2137_; uint8_t v___x_2138_; 
v___x_2137_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16);
v___x_2138_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2078_, v_options_2077_, v___x_2137_);
if (v___x_2138_ == 0)
{
v___y_2082_ = v___y_1997_;
v___y_2083_ = v___y_1998_;
v___y_2084_ = v___y_1999_;
v___y_2085_ = v___y_2000_;
goto v___jp_2081_;
}
else
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2139_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3, &l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3_once, _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__3);
v___x_2140_ = l_Lean_Expr_mvarId_x21(v_a_2009_);
v___x_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2140_);
v___x_2142_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2139_);
lean_ctor_set(v___x_2142_, 1, v___x_2141_);
v___x_2143_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v___x_2080_, v___x_2142_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
if (lean_obj_tag(v___x_2143_) == 0)
{
lean_dec_ref(v___x_2143_);
v___y_2082_ = v___y_1997_;
v___y_2083_ = v___y_1998_;
v___y_2084_ = v___y_1999_;
v___y_2085_ = v___y_2000_;
goto v___jp_2081_;
}
else
{
lean_object* v_a_2144_; lean_object* v___x_2146_; uint8_t v_isShared_2147_; uint8_t v_isSharedCheck_2151_; 
lean_del_object(v___x_2011_);
lean_dec(v_a_2009_);
lean_del_object(v___x_2005_);
lean_dec(v_heqPos_1995_);
lean_dec(v___x_1993_);
lean_dec(v_matchDeclName_1992_);
lean_dec_ref(v___f_1991_);
v_a_2144_ = lean_ctor_get(v___x_2143_, 0);
v_isSharedCheck_2151_ = !lean_is_exclusive(v___x_2143_);
if (v_isSharedCheck_2151_ == 0)
{
v___x_2146_ = v___x_2143_;
v_isShared_2147_ = v_isSharedCheck_2151_;
goto v_resetjp_2145_;
}
else
{
lean_inc(v_a_2144_);
lean_dec(v___x_2143_);
v___x_2146_ = lean_box(0);
v_isShared_2147_ = v_isSharedCheck_2151_;
goto v_resetjp_2145_;
}
v_resetjp_2145_:
{
lean_object* v___x_2149_; 
if (v_isShared_2147_ == 0)
{
v___x_2149_ = v___x_2146_;
goto v_reusejp_2148_;
}
else
{
lean_object* v_reuseFailAlloc_2150_; 
v_reuseFailAlloc_2150_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2150_, 0, v_a_2144_);
v___x_2149_ = v_reuseFailAlloc_2150_;
goto v_reusejp_2148_;
}
v_reusejp_2148_:
{
return v___x_2149_;
}
}
}
}
}
v___jp_2013_:
{
if (v___y_2020_ == 0)
{
lean_object* v___x_2021_; 
lean_dec_ref(v___y_2017_);
lean_del_object(v___x_2011_);
v___x_2021_ = l_Lean_MVarId_deltaTarget(v___y_2018_, v___f_1991_, v___y_2014_, v___y_2016_, v___y_2019_, v___y_2015_);
if (lean_obj_tag(v___x_2021_) == 0)
{
lean_object* v_a_2022_; lean_object* v___x_2023_; 
v_a_2022_ = lean_ctor_get(v___x_2021_, 0);
lean_inc(v_a_2022_);
lean_dec_ref(v___x_2021_);
v___x_2023_ = l_Lean_MVarId_heqOfEq(v_a_2022_, v___y_2014_, v___y_2016_, v___y_2019_, v___y_2015_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v_a_2024_; lean_object* v___x_2025_; 
v_a_2024_ = lean_ctor_get(v___x_2023_, 0);
lean_inc(v_a_2024_);
lean_dec_ref(v___x_2023_);
v___x_2025_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go(v_matchDeclName_1992_, v_a_2024_, v___x_1993_, v___y_2014_, v___y_2016_, v___y_2019_, v___y_2015_);
lean_dec(v___x_1993_);
if (lean_obj_tag(v___x_2025_) == 0)
{
lean_object* v___x_2026_; 
lean_dec_ref(v___x_2025_);
v___x_2026_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(v_a_2009_, v___y_2016_, v___y_2015_);
return v___x_2026_;
}
else
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2034_; 
lean_dec(v_a_2009_);
v_a_2027_ = lean_ctor_get(v___x_2025_, 0);
v_isSharedCheck_2034_ = !lean_is_exclusive(v___x_2025_);
if (v_isSharedCheck_2034_ == 0)
{
v___x_2029_ = v___x_2025_;
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v___x_2025_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2034_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
lean_object* v___x_2032_; 
if (v_isShared_2030_ == 0)
{
v___x_2032_ = v___x_2029_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2033_; 
v_reuseFailAlloc_2033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2033_, 0, v_a_2027_);
v___x_2032_ = v_reuseFailAlloc_2033_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
return v___x_2032_;
}
}
}
}
else
{
lean_object* v_a_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2042_; 
lean_dec(v_a_2009_);
lean_dec(v___x_1993_);
lean_dec(v_matchDeclName_1992_);
v_a_2035_ = lean_ctor_get(v___x_2023_, 0);
v_isSharedCheck_2042_ = !lean_is_exclusive(v___x_2023_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2037_ = v___x_2023_;
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_a_2035_);
lean_dec(v___x_2023_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2042_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v___x_2040_; 
if (v_isShared_2038_ == 0)
{
v___x_2040_ = v___x_2037_;
goto v_reusejp_2039_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v_a_2035_);
v___x_2040_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2039_;
}
v_reusejp_2039_:
{
return v___x_2040_;
}
}
}
}
else
{
lean_object* v_a_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2050_; 
lean_dec(v_a_2009_);
lean_dec(v___x_1993_);
lean_dec(v_matchDeclName_1992_);
v_a_2043_ = lean_ctor_get(v___x_2021_, 0);
v_isSharedCheck_2050_ = !lean_is_exclusive(v___x_2021_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2045_ = v___x_2021_;
v_isShared_2046_ = v_isSharedCheck_2050_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_a_2043_);
lean_dec(v___x_2021_);
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
v_reuseFailAlloc_2049_ = lean_alloc_ctor(1, 1, 0);
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
}
else
{
lean_object* v___x_2052_; 
lean_dec(v___y_2018_);
lean_dec(v_a_2009_);
lean_dec(v___x_1993_);
lean_dec(v_matchDeclName_1992_);
lean_dec_ref(v___f_1991_);
if (v_isShared_2012_ == 0)
{
lean_ctor_set_tag(v___x_2011_, 1);
lean_ctor_set(v___x_2011_, 0, v___y_2017_);
v___x_2052_ = v___x_2011_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___y_2017_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
return v___x_2052_;
}
}
}
v___jp_2054_:
{
lean_object* v___x_2060_; 
v___x_2060_ = l_Lean_MVarId_intros(v_mvarId_2055_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
if (lean_obj_tag(v___x_2060_) == 0)
{
lean_object* v_a_2061_; lean_object* v_snd_2062_; uint8_t v___x_2063_; lean_object* v___x_2064_; 
v_a_2061_ = lean_ctor_get(v___x_2060_, 0);
lean_inc(v_a_2061_);
lean_dec_ref(v___x_2060_);
v_snd_2062_ = lean_ctor_get(v_a_2061_, 1);
lean_inc_n(v_snd_2062_, 2);
lean_dec(v_a_2061_);
v___x_2063_ = 1;
v___x_2064_ = l_Lean_MVarId_refl(v_snd_2062_, v___x_2063_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_);
if (lean_obj_tag(v___x_2064_) == 0)
{
lean_object* v___x_2065_; 
lean_dec_ref(v___x_2064_);
lean_dec(v_snd_2062_);
lean_del_object(v___x_2011_);
lean_dec(v___x_1993_);
lean_dec(v_matchDeclName_1992_);
lean_dec_ref(v___f_1991_);
v___x_2065_ = l_Lean_instantiateMVars___at___00Lean_Meta_Match_proveCondEqThm_spec__0___redArg(v_a_2009_, v___y_2057_, v___y_2059_);
return v___x_2065_;
}
else
{
lean_object* v_a_2066_; uint8_t v___x_2067_; 
v_a_2066_ = lean_ctor_get(v___x_2064_, 0);
lean_inc(v_a_2066_);
lean_dec_ref(v___x_2064_);
v___x_2067_ = l_Lean_Exception_isInterrupt(v_a_2066_);
if (v___x_2067_ == 0)
{
uint8_t v___x_2068_; 
lean_inc(v_a_2066_);
v___x_2068_ = l_Lean_Exception_isRuntime(v_a_2066_);
v___y_2014_ = v___y_2056_;
v___y_2015_ = v___y_2059_;
v___y_2016_ = v___y_2057_;
v___y_2017_ = v_a_2066_;
v___y_2018_ = v_snd_2062_;
v___y_2019_ = v___y_2058_;
v___y_2020_ = v___x_2068_;
goto v___jp_2013_;
}
else
{
v___y_2014_ = v___y_2056_;
v___y_2015_ = v___y_2059_;
v___y_2016_ = v___y_2057_;
v___y_2017_ = v_a_2066_;
v___y_2018_ = v_snd_2062_;
v___y_2019_ = v___y_2058_;
v___y_2020_ = v___x_2067_;
goto v___jp_2013_;
}
}
}
else
{
lean_object* v_a_2069_; lean_object* v___x_2071_; uint8_t v_isShared_2072_; uint8_t v_isSharedCheck_2076_; 
lean_del_object(v___x_2011_);
lean_dec(v_a_2009_);
lean_dec(v___x_1993_);
lean_dec(v_matchDeclName_1992_);
lean_dec_ref(v___f_1991_);
v_a_2069_ = lean_ctor_get(v___x_2060_, 0);
v_isSharedCheck_2076_ = !lean_is_exclusive(v___x_2060_);
if (v_isSharedCheck_2076_ == 0)
{
v___x_2071_ = v___x_2060_;
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
else
{
lean_inc(v_a_2069_);
lean_dec(v___x_2060_);
v___x_2071_ = lean_box(0);
v_isShared_2072_ = v_isSharedCheck_2076_;
goto v_resetjp_2070_;
}
v_resetjp_2070_:
{
lean_object* v___x_2074_; 
if (v_isShared_2072_ == 0)
{
v___x_2074_ = v___x_2071_;
goto v_reusejp_2073_;
}
else
{
lean_object* v_reuseFailAlloc_2075_; 
v_reuseFailAlloc_2075_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2075_, 0, v_a_2069_);
v___x_2074_ = v_reuseFailAlloc_2075_;
goto v_reusejp_2073_;
}
v_reusejp_2073_:
{
return v___x_2074_;
}
}
}
}
v___jp_2081_:
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lean_Expr_mvarId_x21(v_a_2009_);
if (v___x_1994_ == 0)
{
lean_del_object(v___x_2005_);
lean_dec(v_heqPos_1995_);
v_mvarId_2055_ = v___x_2086_;
v___y_2056_ = v___y_2082_;
v___y_2057_ = v___y_2083_;
v___y_2058_ = v___y_2084_;
v___y_2059_ = v___y_2085_;
goto v___jp_2054_;
}
else
{
lean_object* v___x_2087_; uint8_t v___x_2088_; lean_object* v___x_2089_; 
v___x_2087_ = lean_box(0);
v___x_2088_ = 0;
v___x_2089_ = l_Lean_Meta_introNCore(v___x_2086_, v_heqPos_1995_, v___x_2087_, v___x_2088_, v___x_2088_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
if (lean_obj_tag(v___x_2089_) == 0)
{
lean_object* v_a_2090_; lean_object* v_snd_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2127_; 
v_a_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_a_2090_);
lean_dec_ref(v___x_2089_);
v_snd_2091_ = lean_ctor_get(v_a_2090_, 1);
v_isSharedCheck_2127_ = !lean_is_exclusive(v_a_2090_);
if (v_isSharedCheck_2127_ == 0)
{
lean_object* v_unused_2128_; 
v_unused_2128_ = lean_ctor_get(v_a_2090_, 0);
lean_dec(v_unused_2128_);
v___x_2093_ = v_a_2090_;
v_isShared_2094_ = v_isSharedCheck_2127_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_snd_2091_);
lean_dec(v_a_2090_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2127_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2095_; 
lean_inc(v___x_1993_);
v___x_2095_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg(v_heqNum_1996_, v___x_1993_, v_snd_2091_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_options_2096_; uint8_t v_hasTrace_2097_; 
v_options_2096_ = lean_ctor_get(v___y_2084_, 2);
v_hasTrace_2097_ = lean_ctor_get_uint8(v_options_2096_, sizeof(void*)*1);
if (v_hasTrace_2097_ == 0)
{
lean_object* v_a_2098_; 
lean_del_object(v___x_2093_);
lean_del_object(v___x_2005_);
v_a_2098_ = lean_ctor_get(v___x_2095_, 0);
lean_inc(v_a_2098_);
lean_dec_ref(v___x_2095_);
v_mvarId_2055_ = v_a_2098_;
v___y_2056_ = v___y_2082_;
v___y_2057_ = v___y_2083_;
v___y_2058_ = v___y_2084_;
v___y_2059_ = v___y_2085_;
goto v___jp_2054_;
}
else
{
lean_object* v_a_2099_; lean_object* v_inheritedTraceOptions_2100_; lean_object* v___x_2101_; uint8_t v___x_2102_; 
v_a_2099_ = lean_ctor_get(v___x_2095_, 0);
lean_inc(v_a_2099_);
lean_dec_ref(v___x_2095_);
v_inheritedTraceOptions_2100_ = lean_ctor_get(v___y_2084_, 13);
v___x_2101_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16);
v___x_2102_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2100_, v_options_2096_, v___x_2101_);
if (v___x_2102_ == 0)
{
lean_del_object(v___x_2093_);
lean_del_object(v___x_2005_);
v_mvarId_2055_ = v_a_2099_;
v___y_2056_ = v___y_2082_;
v___y_2057_ = v___y_2083_;
v___y_2058_ = v___y_2084_;
v___y_2059_ = v___y_2085_;
goto v___jp_2054_;
}
else
{
lean_object* v___x_2103_; lean_object* v___x_2105_; 
v___x_2103_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1, &l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1_once, _init_l_Lean_Meta_Match_proveCondEqThm___lam__1___closed__1);
lean_inc(v_a_2099_);
if (v_isShared_2006_ == 0)
{
lean_ctor_set_tag(v___x_2005_, 1);
lean_ctor_set(v___x_2005_, 0, v_a_2099_);
v___x_2105_ = v___x_2005_;
goto v_reusejp_2104_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_a_2099_);
v___x_2105_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2104_;
}
v_reusejp_2104_:
{
lean_object* v___x_2107_; 
if (v_isShared_2094_ == 0)
{
lean_ctor_set_tag(v___x_2093_, 7);
lean_ctor_set(v___x_2093_, 1, v___x_2105_);
lean_ctor_set(v___x_2093_, 0, v___x_2103_);
v___x_2107_ = v___x_2093_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v___x_2103_);
lean_ctor_set(v_reuseFailAlloc_2117_, 1, v___x_2105_);
v___x_2107_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
lean_object* v___x_2108_; 
v___x_2108_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v___x_2080_, v___x_2107_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_dec_ref(v___x_2108_);
v_mvarId_2055_ = v_a_2099_;
v___y_2056_ = v___y_2082_;
v___y_2057_ = v___y_2083_;
v___y_2058_ = v___y_2084_;
v___y_2059_ = v___y_2085_;
goto v___jp_2054_;
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
lean_dec(v_a_2099_);
lean_del_object(v___x_2011_);
lean_dec(v_a_2009_);
lean_dec(v___x_1993_);
lean_dec(v_matchDeclName_1992_);
lean_dec_ref(v___f_1991_);
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2108_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2108_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
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
lean_object* v_a_2119_; lean_object* v___x_2121_; uint8_t v_isShared_2122_; uint8_t v_isSharedCheck_2126_; 
lean_del_object(v___x_2093_);
lean_del_object(v___x_2011_);
lean_dec(v_a_2009_);
lean_del_object(v___x_2005_);
lean_dec(v___x_1993_);
lean_dec(v_matchDeclName_1992_);
lean_dec_ref(v___f_1991_);
v_a_2119_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2126_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2126_ == 0)
{
v___x_2121_ = v___x_2095_;
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
else
{
lean_inc(v_a_2119_);
lean_dec(v___x_2095_);
v___x_2121_ = lean_box(0);
v_isShared_2122_ = v_isSharedCheck_2126_;
goto v_resetjp_2120_;
}
v_resetjp_2120_:
{
lean_object* v___x_2124_; 
if (v_isShared_2122_ == 0)
{
v___x_2124_ = v___x_2121_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v_a_2119_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
}
}
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
lean_del_object(v___x_2011_);
lean_dec(v_a_2009_);
lean_del_object(v___x_2005_);
lean_dec(v___x_1993_);
lean_dec(v_matchDeclName_1992_);
lean_dec_ref(v___f_1991_);
v_a_2129_ = lean_ctor_get(v___x_2089_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2131_ = v___x_2089_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2089_);
v___x_2131_ = lean_box(0);
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
v_resetjp_2130_:
{
lean_object* v___x_2134_; 
if (v_isShared_2132_ == 0)
{
v___x_2134_ = v___x_2131_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v_a_2129_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2005_);
lean_dec(v_heqPos_1995_);
lean_dec(v___x_1993_);
lean_dec(v_matchDeclName_1992_);
lean_dec_ref(v___f_1991_);
return v___x_2008_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___lam__1___boxed(lean_object* v_type_2154_, lean_object* v___f_2155_, lean_object* v_matchDeclName_2156_, lean_object* v___x_2157_, lean_object* v___x_2158_, lean_object* v_heqPos_2159_, lean_object* v_heqNum_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_){
_start:
{
uint8_t v___x_6089__boxed_2166_; lean_object* v_res_2167_; 
v___x_6089__boxed_2166_ = lean_unbox(v___x_2158_);
v_res_2167_ = l_Lean_Meta_Match_proveCondEqThm___lam__1(v_type_2154_, v___f_2155_, v_matchDeclName_2156_, v___x_2157_, v___x_6089__boxed_2166_, v_heqPos_2159_, v_heqNum_2160_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_);
lean_dec(v___y_2164_);
lean_dec_ref(v___y_2163_);
lean_dec(v___y_2162_);
lean_dec_ref(v___y_2161_);
lean_dec(v_heqNum_2160_);
return v_res_2167_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__0(void){
_start:
{
lean_object* v___x_2168_; 
v___x_2168_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2168_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__1(void){
_start:
{
lean_object* v___x_2169_; lean_object* v___x_2170_; 
v___x_2169_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__0, &l_Lean_Meta_Match_proveCondEqThm___closed__0_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__0);
v___x_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2169_);
return v___x_2170_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__2(void){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2171_ = lean_unsigned_to_nat(32u);
v___x_2172_ = lean_mk_empty_array_with_capacity(v___x_2171_);
v___x_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
return v___x_2173_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__3(void){
_start:
{
size_t v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2174_ = ((size_t)5ULL);
v___x_2175_ = lean_unsigned_to_nat(0u);
v___x_2176_ = lean_unsigned_to_nat(32u);
v___x_2177_ = lean_mk_empty_array_with_capacity(v___x_2176_);
v___x_2178_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__2, &l_Lean_Meta_Match_proveCondEqThm___closed__2_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__2);
v___x_2179_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2179_, 0, v___x_2178_);
lean_ctor_set(v___x_2179_, 1, v___x_2177_);
lean_ctor_set(v___x_2179_, 2, v___x_2175_);
lean_ctor_set(v___x_2179_, 3, v___x_2175_);
lean_ctor_set_usize(v___x_2179_, 4, v___x_2174_);
return v___x_2179_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__4(void){
_start:
{
lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; 
v___x_2180_ = lean_box(1);
v___x_2181_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__3, &l_Lean_Meta_Match_proveCondEqThm___closed__3_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__3);
v___x_2182_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__1, &l_Lean_Meta_Match_proveCondEqThm___closed__1_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__1);
v___x_2183_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2183_, 0, v___x_2182_);
lean_ctor_set(v___x_2183_, 1, v___x_2181_);
lean_ctor_set(v___x_2183_, 2, v___x_2180_);
return v___x_2183_;
}
}
static lean_object* _init_l_Lean_Meta_Match_proveCondEqThm___closed__5(void){
_start:
{
lean_object* v___x_2184_; lean_object* v___x_2185_; 
v___x_2184_ = lean_unsigned_to_nat(0u);
v___x_2185_ = lean_mk_empty_array_with_capacity(v___x_2184_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm(lean_object* v_matchDeclName_2186_, lean_object* v_type_2187_, lean_object* v_heqPos_2188_, lean_object* v_heqNum_2189_, lean_object* v_a_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_){
_start:
{
lean_object* v___f_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; uint8_t v___x_2199_; lean_object* v___x_2200_; lean_object* v___f_2201_; lean_object* v___x_2202_; 
lean_inc(v_matchDeclName_2186_);
v___f_2195_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_proveCondEqThm___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2195_, 0, v_matchDeclName_2186_);
v___x_2196_ = lean_unsigned_to_nat(0u);
v___x_2197_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__4, &l_Lean_Meta_Match_proveCondEqThm___closed__4_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__4);
v___x_2198_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__5, &l_Lean_Meta_Match_proveCondEqThm___closed__5_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__5);
v___x_2199_ = lean_nat_dec_lt(v___x_2196_, v_heqNum_2189_);
v___x_2200_ = lean_box(v___x_2199_);
v___f_2201_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_proveCondEqThm___lam__1___boxed), 12, 7);
lean_closure_set(v___f_2201_, 0, v_type_2187_);
lean_closure_set(v___f_2201_, 1, v___f_2195_);
lean_closure_set(v___f_2201_, 2, v_matchDeclName_2186_);
lean_closure_set(v___f_2201_, 3, v___x_2196_);
lean_closure_set(v___f_2201_, 4, v___x_2200_);
lean_closure_set(v___f_2201_, 5, v_heqPos_2188_);
lean_closure_set(v___f_2201_, 6, v_heqNum_2189_);
v___x_2202_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_Match_proveCondEqThm_spec__2___redArg(v___x_2197_, v___x_2198_, v___f_2201_, v_a_2190_, v_a_2191_, v_a_2192_, v_a_2193_);
return v___x_2202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_proveCondEqThm___boxed(lean_object* v_matchDeclName_2203_, lean_object* v_type_2204_, lean_object* v_heqPos_2205_, lean_object* v_heqNum_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_Lean_Meta_Match_proveCondEqThm(v_matchDeclName_2203_, v_type_2204_, v_heqPos_2205_, v_heqNum_2206_, v_a_2207_, v_a_2208_, v_a_2209_, v_a_2210_);
lean_dec(v_a_2210_);
lean_dec_ref(v_a_2209_);
lean_dec(v_a_2208_);
lean_dec_ref(v_a_2207_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1(lean_object* v_upperBound_2213_, lean_object* v_inst_2214_, lean_object* v_R_2215_, lean_object* v_a_2216_, lean_object* v_b_2217_, lean_object* v_c_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v___x_2224_; 
v___x_2224_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___redArg(v_upperBound_2213_, v_a_2216_, v_b_2217_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_);
return v___x_2224_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1___boxed(lean_object* v_upperBound_2225_, lean_object* v_inst_2226_, lean_object* v_R_2227_, lean_object* v_a_2228_, lean_object* v_b_2229_, lean_object* v_c_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_){
_start:
{
lean_object* v_res_2236_; 
v_res_2236_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_proveCondEqThm_spec__1(v_upperBound_2225_, v_inst_2226_, v_R_2227_, v_a_2228_, v_b_2229_, v_c_2230_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v___y_2231_);
lean_dec(v_upperBound_2225_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0(lean_object* v_k_2237_, lean_object* v_b_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_){
_start:
{
lean_object* v___x_2244_; 
lean_inc(v___y_2242_);
lean_inc_ref(v___y_2241_);
lean_inc(v___y_2240_);
lean_inc_ref(v___y_2239_);
v___x_2244_ = lean_apply_6(v_k_2237_, v_b_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, lean_box(0));
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0___boxed(lean_object* v_k_2245_, lean_object* v_b_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0(v_k_2245_, v_b_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(lean_object* v_name_2253_, uint8_t v_bi_2254_, lean_object* v_type_2255_, lean_object* v_k_2256_, uint8_t v_kind_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v___f_2263_; lean_object* v___x_2264_; 
v___f_2263_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2263_, 0, v_k_2256_);
v___x_2264_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2253_, v_bi_2254_, v_type_2255_, v___f_2263_, v_kind_2257_, v___y_2258_, v___y_2259_, v___y_2260_, v___y_2261_);
if (lean_obj_tag(v___x_2264_) == 0)
{
lean_object* v_a_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2272_; 
v_a_2265_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2267_ = v___x_2264_;
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_a_2265_);
lean_dec(v___x_2264_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2270_; 
if (v_isShared_2268_ == 0)
{
v___x_2270_ = v___x_2267_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2265_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
}
else
{
lean_object* v_a_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2280_; 
v_a_2273_ = lean_ctor_get(v___x_2264_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2264_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2275_ = v___x_2264_;
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_a_2273_);
lean_dec(v___x_2264_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2278_; 
if (v_isShared_2276_ == 0)
{
v___x_2278_ = v___x_2275_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_a_2273_);
v___x_2278_ = v_reuseFailAlloc_2279_;
goto v_reusejp_2277_;
}
v_reusejp_2277_:
{
return v___x_2278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg___boxed(lean_object* v_name_2281_, lean_object* v_bi_2282_, lean_object* v_type_2283_, lean_object* v_k_2284_, lean_object* v_kind_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
uint8_t v_bi_boxed_2291_; uint8_t v_kind_boxed_2292_; lean_object* v_res_2293_; 
v_bi_boxed_2291_ = lean_unbox(v_bi_2282_);
v_kind_boxed_2292_ = lean_unbox(v_kind_2285_);
v_res_2293_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(v_name_2281_, v_bi_boxed_2291_, v_type_2283_, v_k_2284_, v_kind_boxed_2292_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
return v_res_2293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0(lean_object* v_00_u03b1_2294_, lean_object* v_name_2295_, uint8_t v_bi_2296_, lean_object* v_type_2297_, lean_object* v_k_2298_, uint8_t v_kind_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v___x_2305_; 
v___x_2305_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(v_name_2295_, v_bi_2296_, v_type_2297_, v_k_2298_, v_kind_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___boxed(lean_object* v_00_u03b1_2306_, lean_object* v_name_2307_, lean_object* v_bi_2308_, lean_object* v_type_2309_, lean_object* v_k_2310_, lean_object* v_kind_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_){
_start:
{
uint8_t v_bi_boxed_2317_; uint8_t v_kind_boxed_2318_; lean_object* v_res_2319_; 
v_bi_boxed_2317_ = lean_unbox(v_bi_2308_);
v_kind_boxed_2318_ = lean_unbox(v_kind_2311_);
v_res_2319_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0(v_00_u03b1_2306_, v_name_2307_, v_bi_boxed_2317_, v_type_2309_, v_k_2310_, v_kind_boxed_2318_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0___boxed(lean_object* v_i_2320_, lean_object* v_altsNew_2321_, lean_object* v_discrs_2322_, lean_object* v_patterns_2323_, lean_object* v_alts_2324_, lean_object* v_k_2325_, lean_object* v_altNew_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_){
_start:
{
lean_object* v_res_2332_; 
v_res_2332_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0(v_i_2320_, v_altsNew_2321_, v_discrs_2322_, v_patterns_2323_, v_alts_2324_, v_k_2325_, v_altNew_2326_, v___y_2327_, v___y_2328_, v___y_2329_, v___y_2330_);
lean_dec(v___y_2330_);
lean_dec_ref(v___y_2329_);
lean_dec(v___y_2328_);
lean_dec_ref(v___y_2327_);
lean_dec(v_i_2320_);
return v_res_2332_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(lean_object* v_discrs_2333_, lean_object* v_patterns_2334_, lean_object* v_alts_2335_, lean_object* v_k_2336_, lean_object* v_i_2337_, lean_object* v_altsNew_2338_, lean_object* v_a_2339_, lean_object* v_a_2340_, lean_object* v_a_2341_, lean_object* v_a_2342_){
_start:
{
lean_object* v___x_2344_; uint8_t v___x_2345_; 
v___x_2344_ = lean_array_get_size(v_alts_2335_);
v___x_2345_ = lean_nat_dec_lt(v_i_2337_, v___x_2344_);
if (v___x_2345_ == 0)
{
lean_object* v___x_2346_; 
lean_dec(v_i_2337_);
lean_dec_ref(v_alts_2335_);
lean_dec_ref(v_patterns_2334_);
lean_dec_ref(v_discrs_2333_);
lean_inc(v_a_2342_);
lean_inc_ref(v_a_2341_);
lean_inc(v_a_2340_);
lean_inc_ref(v_a_2339_);
v___x_2346_ = lean_apply_6(v_k_2336_, v_altsNew_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, lean_box(0));
return v___x_2346_;
}
else
{
lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = lean_array_fget_borrowed(v_alts_2335_, v_i_2337_);
v___x_2348_ = l_Lean_Meta_getFVarLocalDecl___redArg(v___x_2347_, v_a_2339_, v_a_2341_, v_a_2342_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; lean_object* v___f_2350_; lean_object* v___x_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; uint8_t v___x_2354_; uint8_t v___x_2355_; lean_object* v___x_2356_; 
v_a_2349_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2349_);
lean_dec_ref(v___x_2348_);
lean_inc_ref(v_patterns_2334_);
lean_inc_ref(v_discrs_2333_);
v___f_2350_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0___boxed), 12, 6);
lean_closure_set(v___f_2350_, 0, v_i_2337_);
lean_closure_set(v___f_2350_, 1, v_altsNew_2338_);
lean_closure_set(v___f_2350_, 2, v_discrs_2333_);
lean_closure_set(v___f_2350_, 3, v_patterns_2334_);
lean_closure_set(v___f_2350_, 4, v_alts_2335_);
lean_closure_set(v___f_2350_, 5, v_k_2336_);
v___x_2351_ = l_Lean_LocalDecl_type(v_a_2349_);
v___x_2352_ = l_Lean_Expr_replaceFVars(v___x_2351_, v_discrs_2333_, v_patterns_2334_);
lean_dec_ref(v_patterns_2334_);
lean_dec_ref(v_discrs_2333_);
lean_dec_ref(v___x_2351_);
v___x_2353_ = l_Lean_LocalDecl_userName(v_a_2349_);
v___x_2354_ = l_Lean_LocalDecl_binderInfo(v_a_2349_);
lean_dec(v_a_2349_);
v___x_2355_ = 0;
v___x_2356_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(v___x_2353_, v___x_2354_, v___x_2352_, v___f_2350_, v___x_2355_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_);
return v___x_2356_;
}
else
{
lean_object* v_a_2357_; lean_object* v___x_2359_; uint8_t v_isShared_2360_; uint8_t v_isSharedCheck_2364_; 
lean_dec_ref(v_altsNew_2338_);
lean_dec(v_i_2337_);
lean_dec_ref(v_k_2336_);
lean_dec_ref(v_alts_2335_);
lean_dec_ref(v_patterns_2334_);
lean_dec_ref(v_discrs_2333_);
v_a_2357_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2359_ = v___x_2348_;
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
else
{
lean_inc(v_a_2357_);
lean_dec(v___x_2348_);
v___x_2359_ = lean_box(0);
v_isShared_2360_ = v_isSharedCheck_2364_;
goto v_resetjp_2358_;
}
v_resetjp_2358_:
{
lean_object* v___x_2362_; 
if (v_isShared_2360_ == 0)
{
v___x_2362_ = v___x_2359_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_a_2357_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___lam__0(lean_object* v_i_2365_, lean_object* v_altsNew_2366_, lean_object* v_discrs_2367_, lean_object* v_patterns_2368_, lean_object* v_alts_2369_, lean_object* v_k_2370_, lean_object* v_altNew_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; 
v___x_2377_ = lean_unsigned_to_nat(1u);
v___x_2378_ = lean_nat_add(v_i_2365_, v___x_2377_);
v___x_2379_ = lean_array_push(v_altsNew_2366_, v_altNew_2371_);
v___x_2380_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(v_discrs_2367_, v_patterns_2368_, v_alts_2369_, v_k_2370_, v___x_2378_, v___x_2379_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg___boxed(lean_object* v_discrs_2381_, lean_object* v_patterns_2382_, lean_object* v_alts_2383_, lean_object* v_k_2384_, lean_object* v_i_2385_, lean_object* v_altsNew_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_, lean_object* v_a_2389_, lean_object* v_a_2390_, lean_object* v_a_2391_){
_start:
{
lean_object* v_res_2392_; 
v_res_2392_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(v_discrs_2381_, v_patterns_2382_, v_alts_2383_, v_k_2384_, v_i_2385_, v_altsNew_2386_, v_a_2387_, v_a_2388_, v_a_2389_, v_a_2390_);
lean_dec(v_a_2390_);
lean_dec_ref(v_a_2389_);
lean_dec(v_a_2388_);
lean_dec_ref(v_a_2387_);
return v_res_2392_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go(lean_object* v_00_u03b1_2393_, lean_object* v_discrs_2394_, lean_object* v_patterns_2395_, lean_object* v_alts_2396_, lean_object* v_k_2397_, lean_object* v_i_2398_, lean_object* v_altsNew_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_){
_start:
{
lean_object* v___x_2405_; 
v___x_2405_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(v_discrs_2394_, v_patterns_2395_, v_alts_2396_, v_k_2397_, v_i_2398_, v_altsNew_2399_, v_a_2400_, v_a_2401_, v_a_2402_, v_a_2403_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___boxed(lean_object* v_00_u03b1_2406_, lean_object* v_discrs_2407_, lean_object* v_patterns_2408_, lean_object* v_alts_2409_, lean_object* v_k_2410_, lean_object* v_i_2411_, lean_object* v_altsNew_2412_, lean_object* v_a_2413_, lean_object* v_a_2414_, lean_object* v_a_2415_, lean_object* v_a_2416_, lean_object* v_a_2417_){
_start:
{
lean_object* v_res_2418_; 
v_res_2418_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go(v_00_u03b1_2406_, v_discrs_2407_, v_patterns_2408_, v_alts_2409_, v_k_2410_, v_i_2411_, v_altsNew_2412_, v_a_2413_, v_a_2414_, v_a_2415_, v_a_2416_);
lean_dec(v_a_2416_);
lean_dec_ref(v_a_2415_);
lean_dec(v_a_2414_);
lean_dec_ref(v_a_2413_);
return v_res_2418_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0(void){
_start:
{
lean_object* v___x_2419_; lean_object* v___x_2420_; 
v___x_2419_ = lean_unsigned_to_nat(0u);
v___x_2420_ = lean_mk_empty_array_with_capacity(v___x_2419_);
return v___x_2420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg(lean_object* v_numDiscrEqs_2421_, lean_object* v_discrs_2422_, lean_object* v_patterns_2423_, lean_object* v_alts_2424_, lean_object* v_k_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_){
_start:
{
lean_object* v___x_2431_; uint8_t v___x_2432_; 
v___x_2431_ = lean_unsigned_to_nat(0u);
v___x_2432_ = lean_nat_dec_eq(v_numDiscrEqs_2421_, v___x_2431_);
if (v___x_2432_ == 0)
{
lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2433_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0);
v___x_2434_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go___redArg(v_discrs_2422_, v_patterns_2423_, v_alts_2424_, v_k_2425_, v___x_2431_, v___x_2433_, v_a_2426_, v_a_2427_, v_a_2428_, v_a_2429_);
return v___x_2434_;
}
else
{
lean_object* v___x_2435_; 
lean_dec_ref(v_patterns_2423_);
lean_dec_ref(v_discrs_2422_);
lean_inc(v_a_2429_);
lean_inc_ref(v_a_2428_);
lean_inc(v_a_2427_);
lean_inc_ref(v_a_2426_);
v___x_2435_ = lean_apply_6(v_k_2425_, v_alts_2424_, v_a_2426_, v_a_2427_, v_a_2428_, v_a_2429_, lean_box(0));
return v___x_2435_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___boxed(lean_object* v_numDiscrEqs_2436_, lean_object* v_discrs_2437_, lean_object* v_patterns_2438_, lean_object* v_alts_2439_, lean_object* v_k_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_){
_start:
{
lean_object* v_res_2446_; 
v_res_2446_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg(v_numDiscrEqs_2436_, v_discrs_2437_, v_patterns_2438_, v_alts_2439_, v_k_2440_, v_a_2441_, v_a_2442_, v_a_2443_, v_a_2444_);
lean_dec(v_a_2444_);
lean_dec_ref(v_a_2443_);
lean_dec(v_a_2442_);
lean_dec_ref(v_a_2441_);
lean_dec(v_numDiscrEqs_2436_);
return v_res_2446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts(lean_object* v_00_u03b1_2447_, lean_object* v_numDiscrEqs_2448_, lean_object* v_discrs_2449_, lean_object* v_patterns_2450_, lean_object* v_alts_2451_, lean_object* v_k_2452_, lean_object* v_a_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_){
_start:
{
lean_object* v___x_2458_; 
v___x_2458_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg(v_numDiscrEqs_2448_, v_discrs_2449_, v_patterns_2450_, v_alts_2451_, v_k_2452_, v_a_2453_, v_a_2454_, v_a_2455_, v_a_2456_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___boxed(lean_object* v_00_u03b1_2459_, lean_object* v_numDiscrEqs_2460_, lean_object* v_discrs_2461_, lean_object* v_patterns_2462_, lean_object* v_alts_2463_, lean_object* v_k_2464_, lean_object* v_a_2465_, lean_object* v_a_2466_, lean_object* v_a_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts(v_00_u03b1_2459_, v_numDiscrEqs_2460_, v_discrs_2461_, v_patterns_2462_, v_alts_2463_, v_k_2464_, v_a_2465_, v_a_2466_, v_a_2467_, v_a_2468_);
lean_dec(v_a_2468_);
lean_dec_ref(v_a_2467_);
lean_dec(v_a_2466_);
lean_dec_ref(v_a_2465_);
lean_dec(v_numDiscrEqs_2460_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___redArg(lean_object* v_declName_2471_, lean_object* v___y_2472_){
_start:
{
lean_object* v___x_2474_; lean_object* v_env_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; 
v___x_2474_ = lean_st_ref_get(v___y_2472_);
v_env_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc_ref(v_env_2475_);
lean_dec(v___x_2474_);
v___x_2476_ = l_Lean_Meta_Match_Extension_getMatcherInfo_x3f(v_env_2475_, v_declName_2471_);
v___x_2477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2477_, 0, v___x_2476_);
return v___x_2477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___redArg___boxed(lean_object* v_declName_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
lean_object* v_res_2481_; 
v_res_2481_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___redArg(v_declName_2478_, v___y_2479_);
lean_dec(v___y_2479_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1(lean_object* v_declName_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
lean_object* v___x_2488_; 
v___x_2488_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___redArg(v_declName_2482_, v___y_2486_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___boxed(lean_object* v_declName_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1(v_declName_2489_, v___y_2490_, v___y_2491_, v___y_2492_, v___y_2493_);
lean_dec(v___y_2493_);
lean_dec_ref(v___y_2492_);
lean_dec(v___y_2491_);
lean_dec_ref(v___y_2490_);
return v_res_2495_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0(void){
_start:
{
lean_object* v___f_2496_; 
v___f_2496_ = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___lam__0___boxed), 5, 0);
return v___f_2496_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3(lean_object* v_msg_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_){
_start:
{
lean_object* v___f_2503_; lean_object* v___x_14714__overap_2504_; lean_object* v___x_2505_; 
v___f_2503_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0);
v___x_14714__overap_2504_ = lean_panic_fn_borrowed(v___f_2503_, v_msg_2497_);
lean_inc(v___y_2501_);
lean_inc_ref(v___y_2500_);
lean_inc(v___y_2499_);
lean_inc_ref(v___y_2498_);
v___x_2505_ = lean_apply_5(v___x_14714__overap_2504_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, lean_box(0));
return v___x_2505_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___boxed(lean_object* v_msg_2506_, lean_object* v___y_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_){
_start:
{
lean_object* v_res_2512_; 
v_res_2512_ = l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3(v_msg_2506_, v___y_2507_, v___y_2508_, v___y_2509_, v___y_2510_);
lean_dec(v___y_2510_);
lean_dec_ref(v___y_2509_);
lean_dec(v___y_2508_);
lean_dec_ref(v___y_2507_);
return v_res_2512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0(lean_object* v_k_2513_, lean_object* v_b_2514_, lean_object* v_c_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_){
_start:
{
lean_object* v___x_2521_; 
lean_inc(v___y_2519_);
lean_inc_ref(v___y_2518_);
lean_inc(v___y_2517_);
lean_inc_ref(v___y_2516_);
v___x_2521_ = lean_apply_7(v_k_2513_, v_b_2514_, v_c_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, lean_box(0));
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0___boxed(lean_object* v_k_2522_, lean_object* v_b_2523_, lean_object* v_c_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_){
_start:
{
lean_object* v_res_2530_; 
v_res_2530_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0(v_k_2522_, v_b_2523_, v_c_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_);
lean_dec(v___y_2528_);
lean_dec_ref(v___y_2527_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
return v_res_2530_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(lean_object* v_type_2531_, lean_object* v_k_2532_, uint8_t v_cleanupAnnotations_2533_, uint8_t v_whnfType_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_){
_start:
{
lean_object* v___f_2540_; lean_object* v___x_2541_; 
v___f_2540_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_2540_, 0, v_k_2532_);
v___x_2541_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_2531_, v___f_2540_, v_cleanupAnnotations_2533_, v_whnfType_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
v_a_2542_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2544_ = v___x_2541_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2541_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
else
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2557_; 
v_a_2550_ = lean_ctor_get(v___x_2541_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2552_ = v___x_2541_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2541_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___x_2555_; 
if (v_isShared_2553_ == 0)
{
v___x_2555_ = v___x_2552_;
goto v_reusejp_2554_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_a_2550_);
v___x_2555_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2554_;
}
v_reusejp_2554_:
{
return v___x_2555_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___boxed(lean_object* v_type_2558_, lean_object* v_k_2559_, lean_object* v_cleanupAnnotations_2560_, lean_object* v_whnfType_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2567_; uint8_t v_whnfType_boxed_2568_; lean_object* v_res_2569_; 
v_cleanupAnnotations_boxed_2567_ = lean_unbox(v_cleanupAnnotations_2560_);
v_whnfType_boxed_2568_ = lean_unbox(v_whnfType_2561_);
v_res_2569_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(v_type_2558_, v_k_2559_, v_cleanupAnnotations_boxed_2567_, v_whnfType_boxed_2568_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9(lean_object* v_00_u03b1_2570_, lean_object* v_type_2571_, lean_object* v_k_2572_, uint8_t v_cleanupAnnotations_2573_, uint8_t v_whnfType_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_){
_start:
{
lean_object* v___x_2580_; 
v___x_2580_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(v_type_2571_, v_k_2572_, v_cleanupAnnotations_2573_, v_whnfType_2574_, v___y_2575_, v___y_2576_, v___y_2577_, v___y_2578_);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___boxed(lean_object* v_00_u03b1_2581_, lean_object* v_type_2582_, lean_object* v_k_2583_, lean_object* v_cleanupAnnotations_2584_, lean_object* v_whnfType_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_2591_; uint8_t v_whnfType_boxed_2592_; lean_object* v_res_2593_; 
v_cleanupAnnotations_boxed_2591_ = lean_unbox(v_cleanupAnnotations_2584_);
v_whnfType_boxed_2592_ = lean_unbox(v_whnfType_2585_);
v_res_2593_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9(v_00_u03b1_2581_, v_type_2582_, v_k_2583_, v_cleanupAnnotations_boxed_2591_, v_whnfType_boxed_2592_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0(lean_object* v_overlaps_2594_, lean_object* v_splitterName_2595_, lean_object* v_matcherInput_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_){
_start:
{
lean_object* v_matchType_2602_; lean_object* v_discrInfos_2603_; lean_object* v_lhss_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2624_; 
v_matchType_2602_ = lean_ctor_get(v_matcherInput_2596_, 1);
v_discrInfos_2603_ = lean_ctor_get(v_matcherInput_2596_, 2);
v_lhss_2604_ = lean_ctor_get(v_matcherInput_2596_, 3);
v_isSharedCheck_2624_ = !lean_is_exclusive(v_matcherInput_2596_);
if (v_isSharedCheck_2624_ == 0)
{
lean_object* v_unused_2625_; lean_object* v_unused_2626_; 
v_unused_2625_ = lean_ctor_get(v_matcherInput_2596_, 4);
lean_dec(v_unused_2625_);
v_unused_2626_ = lean_ctor_get(v_matcherInput_2596_, 0);
lean_dec(v_unused_2626_);
v___x_2606_ = v_matcherInput_2596_;
v_isShared_2607_ = v_isSharedCheck_2624_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_lhss_2604_);
lean_inc(v_discrInfos_2603_);
lean_inc(v_matchType_2602_);
lean_dec(v_matcherInput_2596_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2624_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2608_; lean_object* v___x_2610_; 
v___x_2608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2608_, 0, v_overlaps_2594_);
if (v_isShared_2607_ == 0)
{
lean_ctor_set(v___x_2606_, 4, v___x_2608_);
lean_ctor_set(v___x_2606_, 0, v_splitterName_2595_);
v___x_2610_ = v___x_2606_;
goto v_reusejp_2609_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v_splitterName_2595_);
lean_ctor_set(v_reuseFailAlloc_2623_, 1, v_matchType_2602_);
lean_ctor_set(v_reuseFailAlloc_2623_, 2, v_discrInfos_2603_);
lean_ctor_set(v_reuseFailAlloc_2623_, 3, v_lhss_2604_);
lean_ctor_set(v_reuseFailAlloc_2623_, 4, v___x_2608_);
v___x_2610_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2609_;
}
v_reusejp_2609_:
{
lean_object* v___x_2611_; 
v___x_2611_ = l_Lean_Meta_Match_mkMatcher(v___x_2610_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_);
if (lean_obj_tag(v___x_2611_) == 0)
{
lean_object* v_a_2612_; lean_object* v_addMatcher_2613_; lean_object* v___x_2614_; 
v_a_2612_ = lean_ctor_get(v___x_2611_, 0);
lean_inc(v_a_2612_);
lean_dec_ref(v___x_2611_);
v_addMatcher_2613_ = lean_ctor_get(v_a_2612_, 3);
lean_inc_ref(v_addMatcher_2613_);
lean_dec(v_a_2612_);
lean_inc(v___y_2600_);
lean_inc_ref(v___y_2599_);
lean_inc(v___y_2598_);
lean_inc_ref(v___y_2597_);
v___x_2614_ = lean_apply_5(v_addMatcher_2613_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_, lean_box(0));
return v___x_2614_;
}
else
{
lean_object* v_a_2615_; lean_object* v___x_2617_; uint8_t v_isShared_2618_; uint8_t v_isSharedCheck_2622_; 
v_a_2615_ = lean_ctor_get(v___x_2611_, 0);
v_isSharedCheck_2622_ = !lean_is_exclusive(v___x_2611_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2617_ = v___x_2611_;
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
else
{
lean_inc(v_a_2615_);
lean_dec(v___x_2611_);
v___x_2617_ = lean_box(0);
v_isShared_2618_ = v_isSharedCheck_2622_;
goto v_resetjp_2616_;
}
v_resetjp_2616_:
{
lean_object* v___x_2620_; 
if (v_isShared_2618_ == 0)
{
v___x_2620_ = v___x_2617_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2621_; 
v_reuseFailAlloc_2621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2621_, 0, v_a_2615_);
v___x_2620_ = v_reuseFailAlloc_2621_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
return v___x_2620_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0___boxed(lean_object* v_overlaps_2627_, lean_object* v_splitterName_2628_, lean_object* v_matcherInput_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_){
_start:
{
lean_object* v_res_2635_; 
v_res_2635_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0(v_overlaps_2627_, v_splitterName_2628_, v_matcherInput_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
return v_res_2635_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg(lean_object* v_xs_2636_, lean_object* v_ys_2637_, lean_object* v_x_2638_){
_start:
{
lean_object* v_zero_2639_; uint8_t v_isZero_2640_; 
v_zero_2639_ = lean_unsigned_to_nat(0u);
v_isZero_2640_ = lean_nat_dec_eq(v_x_2638_, v_zero_2639_);
if (v_isZero_2640_ == 1)
{
lean_dec(v_x_2638_);
return v_isZero_2640_;
}
else
{
lean_object* v_one_2641_; lean_object* v_n_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; uint8_t v___x_2645_; 
v_one_2641_ = lean_unsigned_to_nat(1u);
v_n_2642_ = lean_nat_sub(v_x_2638_, v_one_2641_);
lean_dec(v_x_2638_);
v___x_2643_ = lean_array_fget_borrowed(v_xs_2636_, v_n_2642_);
v___x_2644_ = lean_array_fget_borrowed(v_ys_2637_, v_n_2642_);
v___x_2645_ = l_Lean_Meta_Match_instBEqAltParamInfo_beq(v___x_2643_, v___x_2644_);
if (v___x_2645_ == 0)
{
lean_dec(v_n_2642_);
return v___x_2645_;
}
else
{
v_x_2638_ = v_n_2642_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg___boxed(lean_object* v_xs_2647_, lean_object* v_ys_2648_, lean_object* v_x_2649_){
_start:
{
uint8_t v_res_2650_; lean_object* v_r_2651_; 
v_res_2650_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg(v_xs_2647_, v_ys_2648_, v_x_2649_);
lean_dec_ref(v_ys_2648_);
lean_dec_ref(v_xs_2647_);
v_r_2651_ = lean_box(v_res_2650_);
return v_r_2651_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0(lean_object* v___x_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v___x_2655_, lean_object* v___x_2656_, lean_object* v___x_2657_, lean_object* v___x_2658_, lean_object* v___x_2659_, lean_object* v_rhsArgs_2660_, lean_object* v_a_2661_, lean_object* v_ys_2662_, uint8_t v___x_2663_, uint8_t v___x_2664_, uint8_t v___x_2665_, lean_object* v_matchDeclName_2666_, lean_object* v___x_2667_, lean_object* v___x_2668_, lean_object* v___x_2669_, lean_object* v___x_2670_, lean_object* v___x_2671_, lean_object* v_argMask_2672_, lean_object* v_a_2673_, lean_object* v_alts_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_){
_start:
{
lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; 
v___x_2680_ = lean_array_get_borrowed(v___x_2652_, v_alts_2674_, v_a_2653_);
v___x_2681_ = l_Lean_ConstantInfo_name(v_a_2654_);
v___x_2682_ = l_Lean_mkConst(v___x_2681_, v___x_2655_);
v___x_2683_ = l_Subarray_copy___redArg(v___x_2656_);
v___x_2684_ = lean_mk_empty_array_with_capacity(v___x_2657_);
v___x_2685_ = lean_array_push(v___x_2684_, v___x_2658_);
v___x_2686_ = l_Array_append___redArg(v___x_2683_, v___x_2685_);
lean_dec_ref(v___x_2685_);
lean_inc_ref(v___x_2686_);
v___x_2687_ = l_Array_append___redArg(v___x_2686_, v___x_2659_);
v___x_2688_ = l_Array_append___redArg(v___x_2687_, v_alts_2674_);
v___x_2689_ = l_Lean_mkAppN(v___x_2682_, v___x_2688_);
lean_dec_ref(v___x_2688_);
lean_inc(v___x_2680_);
v___x_2690_ = l_Lean_mkAppN(v___x_2680_, v_rhsArgs_2660_);
v___x_2691_ = l_Lean_Meta_mkEq(v___x_2689_, v___x_2690_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2691_) == 0)
{
lean_object* v_a_2692_; lean_object* v___x_2693_; 
v_a_2692_ = lean_ctor_get(v___x_2691_, 0);
lean_inc(v_a_2692_);
lean_dec_ref(v___x_2691_);
v___x_2693_ = l_Lean_mkArrowN(v_a_2661_, v_a_2692_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2693_) == 0)
{
lean_object* v_a_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; 
v_a_2694_ = lean_ctor_get(v___x_2693_, 0);
lean_inc(v_a_2694_);
lean_dec_ref(v___x_2693_);
v___x_2695_ = l_Array_append___redArg(v___x_2686_, v_ys_2662_);
v___x_2696_ = l_Array_append___redArg(v___x_2695_, v_alts_2674_);
v___x_2697_ = l_Lean_Meta_mkForallFVars(v___x_2696_, v_a_2694_, v___x_2663_, v___x_2664_, v___x_2664_, v___x_2665_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
lean_dec_ref(v___x_2696_);
if (lean_obj_tag(v___x_2697_) == 0)
{
lean_object* v_a_2698_; lean_object* v___x_2699_; 
v_a_2698_ = lean_ctor_get(v___x_2697_, 0);
lean_inc(v_a_2698_);
lean_dec_ref(v___x_2697_);
v___x_2699_ = l_Lean_Meta_Match_unfoldNamedPattern(v_a_2698_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2699_) == 0)
{
lean_object* v_a_2700_; lean_object* v___x_2701_; 
v_a_2700_ = lean_ctor_get(v___x_2699_, 0);
lean_inc_n(v_a_2700_, 2);
lean_dec_ref(v___x_2699_);
lean_inc(v___x_2667_);
v___x_2701_ = l_Lean_Meta_Match_proveCondEqThm(v_matchDeclName_2666_, v_a_2700_, v___x_2667_, v___x_2667_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2701_) == 0)
{
lean_object* v_a_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v_a_2702_ = lean_ctor_get(v___x_2701_, 0);
lean_inc(v_a_2702_);
lean_dec_ref(v___x_2701_);
lean_inc(v___x_2668_);
v___x_2703_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2703_, 0, v___x_2668_);
lean_ctor_set(v___x_2703_, 1, v___x_2669_);
lean_ctor_set(v___x_2703_, 2, v_a_2700_);
v___x_2704_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2704_, 0, v___x_2668_);
lean_ctor_set(v___x_2704_, 1, v___x_2670_);
v___x_2705_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2705_, 0, v___x_2703_);
lean_ctor_set(v___x_2705_, 1, v_a_2702_);
lean_ctor_set(v___x_2705_, 2, v___x_2704_);
v___x_2706_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2705_);
v___x_2707_ = l_Lean_addDecl(v___x_2706_, v___x_2663_, v___y_2677_, v___y_2678_);
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2716_; 
v_isSharedCheck_2716_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2716_ == 0)
{
lean_object* v_unused_2717_; 
v_unused_2717_ = lean_ctor_get(v___x_2707_, 0);
lean_dec(v_unused_2717_);
v___x_2709_ = v___x_2707_;
v_isShared_2710_ = v_isSharedCheck_2716_;
goto v_resetjp_2708_;
}
else
{
lean_dec(v___x_2707_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2716_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2714_; 
v___x_2711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2671_);
lean_ctor_set(v___x_2711_, 1, v_argMask_2672_);
v___x_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2712_, 0, v_a_2673_);
lean_ctor_set(v___x_2712_, 1, v___x_2711_);
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 0, v___x_2712_);
v___x_2714_ = v___x_2709_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v___x_2712_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
return v___x_2714_;
}
}
}
else
{
lean_object* v_a_2718_; lean_object* v___x_2720_; uint8_t v_isShared_2721_; uint8_t v_isSharedCheck_2725_; 
lean_dec_ref(v_a_2673_);
lean_dec_ref(v_argMask_2672_);
lean_dec_ref(v___x_2671_);
v_a_2718_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2720_ = v___x_2707_;
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
else
{
lean_inc(v_a_2718_);
lean_dec(v___x_2707_);
v___x_2720_ = lean_box(0);
v_isShared_2721_ = v_isSharedCheck_2725_;
goto v_resetjp_2719_;
}
v_resetjp_2719_:
{
lean_object* v___x_2723_; 
if (v_isShared_2721_ == 0)
{
v___x_2723_ = v___x_2720_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v_a_2718_);
v___x_2723_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
return v___x_2723_;
}
}
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec(v_a_2700_);
lean_dec_ref(v_a_2673_);
lean_dec_ref(v_argMask_2672_);
lean_dec_ref(v___x_2671_);
lean_dec(v___x_2670_);
lean_dec(v___x_2669_);
lean_dec(v___x_2668_);
v_a_2726_ = lean_ctor_get(v___x_2701_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2701_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2701_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2701_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec_ref(v_a_2673_);
lean_dec_ref(v_argMask_2672_);
lean_dec_ref(v___x_2671_);
lean_dec(v___x_2670_);
lean_dec(v___x_2669_);
lean_dec(v___x_2668_);
lean_dec(v___x_2667_);
lean_dec(v_matchDeclName_2666_);
v_a_2734_ = lean_ctor_get(v___x_2699_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2699_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2699_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
else
{
lean_object* v_a_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2749_; 
lean_dec_ref(v_a_2673_);
lean_dec_ref(v_argMask_2672_);
lean_dec_ref(v___x_2671_);
lean_dec(v___x_2670_);
lean_dec(v___x_2669_);
lean_dec(v___x_2668_);
lean_dec(v___x_2667_);
lean_dec(v_matchDeclName_2666_);
v_a_2742_ = lean_ctor_get(v___x_2697_, 0);
v_isSharedCheck_2749_ = !lean_is_exclusive(v___x_2697_);
if (v_isSharedCheck_2749_ == 0)
{
v___x_2744_ = v___x_2697_;
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_a_2742_);
lean_dec(v___x_2697_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2749_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v___x_2747_; 
if (v_isShared_2745_ == 0)
{
v___x_2747_ = v___x_2744_;
goto v_reusejp_2746_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v_a_2742_);
v___x_2747_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2746_;
}
v_reusejp_2746_:
{
return v___x_2747_;
}
}
}
}
else
{
lean_object* v_a_2750_; lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2757_; 
lean_dec_ref(v___x_2686_);
lean_dec_ref(v_a_2673_);
lean_dec_ref(v_argMask_2672_);
lean_dec_ref(v___x_2671_);
lean_dec(v___x_2670_);
lean_dec(v___x_2669_);
lean_dec(v___x_2668_);
lean_dec(v___x_2667_);
lean_dec(v_matchDeclName_2666_);
v_a_2750_ = lean_ctor_get(v___x_2693_, 0);
v_isSharedCheck_2757_ = !lean_is_exclusive(v___x_2693_);
if (v_isSharedCheck_2757_ == 0)
{
v___x_2752_ = v___x_2693_;
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
else
{
lean_inc(v_a_2750_);
lean_dec(v___x_2693_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2757_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v___x_2755_; 
if (v_isShared_2753_ == 0)
{
v___x_2755_ = v___x_2752_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_a_2750_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
}
}
else
{
lean_object* v_a_2758_; lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2765_; 
lean_dec_ref(v___x_2686_);
lean_dec_ref(v_a_2673_);
lean_dec_ref(v_argMask_2672_);
lean_dec_ref(v___x_2671_);
lean_dec(v___x_2670_);
lean_dec(v___x_2669_);
lean_dec(v___x_2668_);
lean_dec(v___x_2667_);
lean_dec(v_matchDeclName_2666_);
v_a_2758_ = lean_ctor_get(v___x_2691_, 0);
v_isSharedCheck_2765_ = !lean_is_exclusive(v___x_2691_);
if (v_isSharedCheck_2765_ == 0)
{
v___x_2760_ = v___x_2691_;
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
else
{
lean_inc(v_a_2758_);
lean_dec(v___x_2691_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2765_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2763_; 
if (v_isShared_2761_ == 0)
{
v___x_2763_ = v___x_2760_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2764_; 
v_reuseFailAlloc_2764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2764_, 0, v_a_2758_);
v___x_2763_ = v_reuseFailAlloc_2764_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
return v___x_2763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_2766_ = _args[0];
lean_object* v_a_2767_ = _args[1];
lean_object* v_a_2768_ = _args[2];
lean_object* v___x_2769_ = _args[3];
lean_object* v___x_2770_ = _args[4];
lean_object* v___x_2771_ = _args[5];
lean_object* v___x_2772_ = _args[6];
lean_object* v___x_2773_ = _args[7];
lean_object* v_rhsArgs_2774_ = _args[8];
lean_object* v_a_2775_ = _args[9];
lean_object* v_ys_2776_ = _args[10];
lean_object* v___x_2777_ = _args[11];
lean_object* v___x_2778_ = _args[12];
lean_object* v___x_2779_ = _args[13];
lean_object* v_matchDeclName_2780_ = _args[14];
lean_object* v___x_2781_ = _args[15];
lean_object* v___x_2782_ = _args[16];
lean_object* v___x_2783_ = _args[17];
lean_object* v___x_2784_ = _args[18];
lean_object* v___x_2785_ = _args[19];
lean_object* v_argMask_2786_ = _args[20];
lean_object* v_a_2787_ = _args[21];
lean_object* v_alts_2788_ = _args[22];
lean_object* v___y_2789_ = _args[23];
lean_object* v___y_2790_ = _args[24];
lean_object* v___y_2791_ = _args[25];
lean_object* v___y_2792_ = _args[26];
lean_object* v___y_2793_ = _args[27];
_start:
{
uint8_t v___x_18725__boxed_2794_; uint8_t v___x_18726__boxed_2795_; uint8_t v___x_18727__boxed_2796_; lean_object* v_res_2797_; 
v___x_18725__boxed_2794_ = lean_unbox(v___x_2777_);
v___x_18726__boxed_2795_ = lean_unbox(v___x_2778_);
v___x_18727__boxed_2796_ = lean_unbox(v___x_2779_);
v_res_2797_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0(v___x_2766_, v_a_2767_, v_a_2768_, v___x_2769_, v___x_2770_, v___x_2771_, v___x_2772_, v___x_2773_, v_rhsArgs_2774_, v_a_2775_, v_ys_2776_, v___x_18725__boxed_2794_, v___x_18726__boxed_2795_, v___x_18727__boxed_2796_, v_matchDeclName_2780_, v___x_2781_, v___x_2782_, v___x_2783_, v___x_2784_, v___x_2785_, v_argMask_2786_, v_a_2787_, v_alts_2788_, v___y_2789_, v___y_2790_, v___y_2791_, v___y_2792_);
lean_dec(v___y_2792_);
lean_dec_ref(v___y_2791_);
lean_dec(v___y_2790_);
lean_dec_ref(v___y_2789_);
lean_dec_ref(v_alts_2788_);
lean_dec_ref(v_ys_2776_);
lean_dec_ref(v_a_2775_);
lean_dec_ref(v_rhsArgs_2774_);
lean_dec_ref(v___x_2773_);
lean_dec(v___x_2771_);
lean_dec_ref(v_a_2768_);
lean_dec(v_a_2767_);
lean_dec_ref(v___x_2766_);
return v_res_2797_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5(lean_object* v___x_2798_, lean_object* v___x_2799_, lean_object* v_as_2800_, size_t v_sz_2801_, size_t v_i_2802_, lean_object* v_b_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_){
_start:
{
uint8_t v___x_2809_; 
v___x_2809_ = lean_usize_dec_lt(v_i_2802_, v_sz_2801_);
if (v___x_2809_ == 0)
{
lean_object* v___x_2810_; 
v___x_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2810_, 0, v_b_2803_);
return v___x_2810_;
}
else
{
lean_object* v___x_2811_; lean_object* v_a_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2811_ = l_Lean_instInhabitedExpr;
v_a_2812_ = lean_array_uget_borrowed(v_as_2800_, v_i_2802_);
v___x_2813_ = lean_array_get_borrowed(v___x_2811_, v___x_2798_, v_a_2812_);
lean_inc(v___x_2813_);
v___x_2814_ = l_Lean_Meta_instantiateForall(v___x_2813_, v___x_2799_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
if (lean_obj_tag(v___x_2814_) == 0)
{
lean_object* v_a_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v_a_2815_ = lean_ctor_get(v___x_2814_, 0);
lean_inc(v_a_2815_);
lean_dec_ref(v___x_2814_);
v___x_2816_ = lean_array_get_size(v___x_2799_);
v___x_2817_ = l_Lean_Meta_Match_simpH_x3f(v_a_2815_, v___x_2816_, v___y_2804_, v___y_2805_, v___y_2806_, v___y_2807_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; lean_object* v_a_2820_; 
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc(v_a_2818_);
lean_dec_ref(v___x_2817_);
if (lean_obj_tag(v_a_2818_) == 1)
{
lean_object* v_val_2824_; lean_object* v___x_2825_; 
v_val_2824_ = lean_ctor_get(v_a_2818_, 0);
lean_inc(v_val_2824_);
lean_dec_ref(v_a_2818_);
v___x_2825_ = lean_array_push(v_b_2803_, v_val_2824_);
v_a_2820_ = v___x_2825_;
goto v___jp_2819_;
}
else
{
lean_dec(v_a_2818_);
v_a_2820_ = v_b_2803_;
goto v___jp_2819_;
}
v___jp_2819_:
{
size_t v___x_2821_; size_t v___x_2822_; 
v___x_2821_ = ((size_t)1ULL);
v___x_2822_ = lean_usize_add(v_i_2802_, v___x_2821_);
v_i_2802_ = v___x_2822_;
v_b_2803_ = v_a_2820_;
goto _start;
}
}
else
{
lean_object* v_a_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2833_; 
lean_dec_ref(v_b_2803_);
v_a_2826_ = lean_ctor_get(v___x_2817_, 0);
v_isSharedCheck_2833_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2833_ == 0)
{
v___x_2828_ = v___x_2817_;
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
else
{
lean_inc(v_a_2826_);
lean_dec(v___x_2817_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2833_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2831_; 
if (v_isShared_2829_ == 0)
{
v___x_2831_ = v___x_2828_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_a_2826_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
}
}
else
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2841_; 
lean_dec_ref(v_b_2803_);
v_a_2834_ = lean_ctor_get(v___x_2814_, 0);
v_isSharedCheck_2841_ = !lean_is_exclusive(v___x_2814_);
if (v_isSharedCheck_2841_ == 0)
{
v___x_2836_ = v___x_2814_;
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2814_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2841_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2839_; 
if (v_isShared_2837_ == 0)
{
v___x_2839_ = v___x_2836_;
goto v_reusejp_2838_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_a_2834_);
v___x_2839_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2838_;
}
v_reusejp_2838_:
{
return v___x_2839_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5___boxed(lean_object* v___x_2842_, lean_object* v___x_2843_, lean_object* v_as_2844_, lean_object* v_sz_2845_, lean_object* v_i_2846_, lean_object* v_b_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_){
_start:
{
size_t v_sz_boxed_2853_; size_t v_i_boxed_2854_; lean_object* v_res_2855_; 
v_sz_boxed_2853_ = lean_unbox_usize(v_sz_2845_);
lean_dec(v_sz_2845_);
v_i_boxed_2854_ = lean_unbox_usize(v_i_2846_);
lean_dec(v_i_2846_);
v_res_2855_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5(v___x_2842_, v___x_2843_, v_as_2844_, v_sz_boxed_2853_, v_i_boxed_2854_, v_b_2847_, v___y_2848_, v___y_2849_, v___y_2850_, v___y_2851_);
lean_dec(v___y_2851_);
lean_dec_ref(v___y_2850_);
lean_dec(v___y_2849_);
lean_dec_ref(v___y_2848_);
lean_dec_ref(v_as_2844_);
lean_dec_ref(v___x_2843_);
lean_dec_ref(v___x_2842_);
return v_res_2855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6___redArg(lean_object* v_a_2856_, lean_object* v_b_2857_){
_start:
{
lean_object* v_array_2858_; lean_object* v_start_2859_; lean_object* v_stop_2860_; lean_object* v___x_2862_; uint8_t v_isShared_2863_; uint8_t v_isSharedCheck_2873_; 
v_array_2858_ = lean_ctor_get(v_a_2856_, 0);
v_start_2859_ = lean_ctor_get(v_a_2856_, 1);
v_stop_2860_ = lean_ctor_get(v_a_2856_, 2);
v_isSharedCheck_2873_ = !lean_is_exclusive(v_a_2856_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2862_ = v_a_2856_;
v_isShared_2863_ = v_isSharedCheck_2873_;
goto v_resetjp_2861_;
}
else
{
lean_inc(v_stop_2860_);
lean_inc(v_start_2859_);
lean_inc(v_array_2858_);
lean_dec(v_a_2856_);
v___x_2862_ = lean_box(0);
v_isShared_2863_ = v_isSharedCheck_2873_;
goto v_resetjp_2861_;
}
v_resetjp_2861_:
{
uint8_t v___x_2864_; 
v___x_2864_ = lean_nat_dec_lt(v_start_2859_, v_stop_2860_);
if (v___x_2864_ == 0)
{
lean_del_object(v___x_2862_);
lean_dec(v_stop_2860_);
lean_dec(v_start_2859_);
lean_dec_ref(v_array_2858_);
return v_b_2857_;
}
else
{
lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2868_; 
v___x_2865_ = lean_unsigned_to_nat(1u);
v___x_2866_ = lean_nat_add(v_start_2859_, v___x_2865_);
lean_inc_ref(v_array_2858_);
if (v_isShared_2863_ == 0)
{
lean_ctor_set(v___x_2862_, 1, v___x_2866_);
v___x_2868_ = v___x_2862_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v_array_2858_);
lean_ctor_set(v_reuseFailAlloc_2872_, 1, v___x_2866_);
lean_ctor_set(v_reuseFailAlloc_2872_, 2, v_stop_2860_);
v___x_2868_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; 
v___x_2869_ = lean_array_fget(v_array_2858_, v_start_2859_);
lean_dec(v_start_2859_);
lean_dec_ref(v_array_2858_);
v___x_2870_ = lean_array_push(v_b_2857_, v___x_2869_);
v_a_2856_ = v___x_2868_;
v_b_2857_ = v___x_2870_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7(lean_object* v_as_2874_, size_t v_sz_2875_, size_t v_i_2876_, lean_object* v_b_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_){
_start:
{
uint8_t v___x_2883_; 
v___x_2883_ = lean_usize_dec_lt(v_i_2876_, v_sz_2875_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; 
v___x_2884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2884_, 0, v_b_2877_);
return v___x_2884_;
}
else
{
lean_object* v_snd_2885_; lean_object* v_fst_2886_; lean_object* v___x_2888_; uint8_t v_isShared_2889_; uint8_t v_isSharedCheck_2938_; 
v_snd_2885_ = lean_ctor_get(v_b_2877_, 1);
v_fst_2886_ = lean_ctor_get(v_b_2877_, 0);
v_isSharedCheck_2938_ = !lean_is_exclusive(v_b_2877_);
if (v_isSharedCheck_2938_ == 0)
{
v___x_2888_ = v_b_2877_;
v_isShared_2889_ = v_isSharedCheck_2938_;
goto v_resetjp_2887_;
}
else
{
lean_inc(v_snd_2885_);
lean_inc(v_fst_2886_);
lean_dec(v_b_2877_);
v___x_2888_ = lean_box(0);
v_isShared_2889_ = v_isSharedCheck_2938_;
goto v_resetjp_2887_;
}
v_resetjp_2887_:
{
lean_object* v_array_2890_; lean_object* v_start_2891_; lean_object* v_stop_2892_; uint8_t v___x_2893_; 
v_array_2890_ = lean_ctor_get(v_snd_2885_, 0);
v_start_2891_ = lean_ctor_get(v_snd_2885_, 1);
v_stop_2892_ = lean_ctor_get(v_snd_2885_, 2);
v___x_2893_ = lean_nat_dec_lt(v_start_2891_, v_stop_2892_);
if (v___x_2893_ == 0)
{
lean_object* v___x_2895_; 
if (v_isShared_2889_ == 0)
{
v___x_2895_ = v___x_2888_;
goto v_reusejp_2894_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_fst_2886_);
lean_ctor_set(v_reuseFailAlloc_2897_, 1, v_snd_2885_);
v___x_2895_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2894_;
}
v_reusejp_2894_:
{
lean_object* v___x_2896_; 
v___x_2896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2896_, 0, v___x_2895_);
return v___x_2896_;
}
}
else
{
lean_object* v___x_2899_; uint8_t v_isShared_2900_; uint8_t v_isSharedCheck_2934_; 
lean_inc(v_stop_2892_);
lean_inc(v_start_2891_);
lean_inc_ref(v_array_2890_);
v_isSharedCheck_2934_ = !lean_is_exclusive(v_snd_2885_);
if (v_isSharedCheck_2934_ == 0)
{
lean_object* v_unused_2935_; lean_object* v_unused_2936_; lean_object* v_unused_2937_; 
v_unused_2935_ = lean_ctor_get(v_snd_2885_, 2);
lean_dec(v_unused_2935_);
v_unused_2936_ = lean_ctor_get(v_snd_2885_, 1);
lean_dec(v_unused_2936_);
v_unused_2937_ = lean_ctor_get(v_snd_2885_, 0);
lean_dec(v_unused_2937_);
v___x_2899_ = v_snd_2885_;
v_isShared_2900_ = v_isSharedCheck_2934_;
goto v_resetjp_2898_;
}
else
{
lean_dec(v_snd_2885_);
v___x_2899_ = lean_box(0);
v_isShared_2900_ = v_isSharedCheck_2934_;
goto v_resetjp_2898_;
}
v_resetjp_2898_:
{
lean_object* v_a_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v_a_2901_ = lean_array_uget_borrowed(v_as_2874_, v_i_2876_);
v___x_2902_ = lean_array_fget_borrowed(v_array_2890_, v_start_2891_);
lean_inc(v___x_2902_);
lean_inc(v_a_2901_);
v___x_2903_ = l_Lean_Meta_mkEqHEq(v_a_2901_, v___x_2902_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
if (lean_obj_tag(v___x_2903_) == 0)
{
lean_object* v_a_2904_; lean_object* v___x_2905_; 
v_a_2904_ = lean_ctor_get(v___x_2903_, 0);
lean_inc(v_a_2904_);
lean_dec_ref(v___x_2903_);
v___x_2905_ = l_Lean_mkArrow(v_a_2904_, v_fst_2886_, v___y_2880_, v___y_2881_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2910_; 
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref(v___x_2905_);
v___x_2907_ = lean_unsigned_to_nat(1u);
v___x_2908_ = lean_nat_add(v_start_2891_, v___x_2907_);
lean_dec(v_start_2891_);
if (v_isShared_2900_ == 0)
{
lean_ctor_set(v___x_2899_, 1, v___x_2908_);
v___x_2910_ = v___x_2899_;
goto v_reusejp_2909_;
}
else
{
lean_object* v_reuseFailAlloc_2917_; 
v_reuseFailAlloc_2917_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2917_, 0, v_array_2890_);
lean_ctor_set(v_reuseFailAlloc_2917_, 1, v___x_2908_);
lean_ctor_set(v_reuseFailAlloc_2917_, 2, v_stop_2892_);
v___x_2910_ = v_reuseFailAlloc_2917_;
goto v_reusejp_2909_;
}
v_reusejp_2909_:
{
lean_object* v___x_2912_; 
if (v_isShared_2889_ == 0)
{
lean_ctor_set(v___x_2888_, 1, v___x_2910_);
lean_ctor_set(v___x_2888_, 0, v_a_2906_);
v___x_2912_ = v___x_2888_;
goto v_reusejp_2911_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v_a_2906_);
lean_ctor_set(v_reuseFailAlloc_2916_, 1, v___x_2910_);
v___x_2912_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2911_;
}
v_reusejp_2911_:
{
size_t v___x_2913_; size_t v___x_2914_; 
v___x_2913_ = ((size_t)1ULL);
v___x_2914_ = lean_usize_add(v_i_2876_, v___x_2913_);
v_i_2876_ = v___x_2914_;
v_b_2877_ = v___x_2912_;
goto _start;
}
}
}
else
{
lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2925_; 
lean_del_object(v___x_2899_);
lean_dec(v_stop_2892_);
lean_dec(v_start_2891_);
lean_dec_ref(v_array_2890_);
lean_del_object(v___x_2888_);
v_a_2918_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2920_ = v___x_2905_;
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_dec(v___x_2905_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2923_; 
if (v_isShared_2921_ == 0)
{
v___x_2923_ = v___x_2920_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_a_2918_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2933_; 
lean_del_object(v___x_2899_);
lean_dec(v_stop_2892_);
lean_dec(v_start_2891_);
lean_dec_ref(v_array_2890_);
lean_del_object(v___x_2888_);
lean_dec(v_fst_2886_);
v_a_2926_ = lean_ctor_get(v___x_2903_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2903_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2928_ = v___x_2903_;
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_dec(v___x_2903_);
v___x_2928_ = lean_box(0);
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
v_resetjp_2927_:
{
lean_object* v___x_2931_; 
if (v_isShared_2929_ == 0)
{
v___x_2931_ = v___x_2928_;
goto v_reusejp_2930_;
}
else
{
lean_object* v_reuseFailAlloc_2932_; 
v_reuseFailAlloc_2932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2932_, 0, v_a_2926_);
v___x_2931_ = v_reuseFailAlloc_2932_;
goto v_reusejp_2930_;
}
v_reusejp_2930_:
{
return v___x_2931_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7___boxed(lean_object* v_as_2939_, lean_object* v_sz_2940_, lean_object* v_i_2941_, lean_object* v_b_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_){
_start:
{
size_t v_sz_boxed_2948_; size_t v_i_boxed_2949_; lean_object* v_res_2950_; 
v_sz_boxed_2948_ = lean_unbox_usize(v_sz_2940_);
lean_dec(v_sz_2940_);
v_i_boxed_2949_ = lean_unbox_usize(v_i_2941_);
lean_dec(v_i_2941_);
v_res_2950_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7(v_as_2939_, v_sz_boxed_2948_, v_i_boxed_2949_, v_b_2942_, v___y_2943_, v___y_2944_, v___y_2945_, v___y_2946_);
lean_dec(v___y_2946_);
lean_dec_ref(v___y_2945_);
lean_dec(v___y_2944_);
lean_dec_ref(v___y_2943_);
lean_dec_ref(v_as_2939_);
return v_res_2950_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2951_; lean_object* v_dummy_2952_; 
v___x_2951_ = lean_box(0);
v_dummy_2952_ = l_Lean_Expr_sort___override(v___x_2951_);
return v_dummy_2952_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2953_; 
v___x_2953_ = lean_mk_string_unchecked("False", 5, 5);
return v___x_2953_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__2(void){
_start:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; 
v___x_2954_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__1);
v___x_2955_ = l_Lean_Name_mkStr1(v___x_2954_);
return v___x_2955_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2956_ = lean_box(0);
v___x_2957_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__2);
v___x_2958_ = l_Lean_mkConst(v___x_2957_, v___x_2956_);
return v___x_2958_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = lean_mk_string_unchecked("hs: ", 4, 4);
return v___x_2959_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; 
v___x_2960_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__4);
v___x_2961_ = l_Lean_stringToMessageData(v___x_2960_);
return v___x_2961_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1(lean_object* v___x_2962_, lean_object* v_overlaps_2963_, lean_object* v_a_2964_, lean_object* v_fst_2965_, lean_object* v___x_2966_, lean_object* v___x_2967_, lean_object* v___x_2968_, uint8_t v___x_2969_, lean_object* v___x_2970_, lean_object* v_a_2971_, lean_object* v___x_2972_, lean_object* v___x_2973_, lean_object* v___x_2974_, lean_object* v_matchDeclName_2975_, lean_object* v___x_2976_, lean_object* v___x_2977_, lean_object* v___x_2978_, lean_object* v___x_2979_, lean_object* v___x_2980_, lean_object* v_ys_2981_, lean_object* v___eqs_2982_, lean_object* v_rhsArgs_2983_, lean_object* v_argMask_2984_, lean_object* v_altResultType_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_){
_start:
{
lean_object* v_dummy_2991_; lean_object* v_nargs_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; size_t v_sz_2997_; size_t v___x_2998_; lean_object* v___x_2999_; 
v_dummy_2991_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0);
v_nargs_2992_ = l_Lean_Expr_getAppNumArgs(v_altResultType_2985_);
lean_inc(v_nargs_2992_);
v___x_2993_ = lean_mk_array(v_nargs_2992_, v_dummy_2991_);
v___x_2994_ = lean_nat_sub(v_nargs_2992_, v___x_2962_);
lean_dec(v_nargs_2992_);
v___x_2995_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_altResultType_2985_, v___x_2993_, v___x_2994_);
v___x_2996_ = l_Lean_Meta_Match_Overlaps_overlapping(v_overlaps_2963_, v_a_2964_);
v_sz_2997_ = lean_array_size(v___x_2996_);
v___x_2998_ = ((size_t)0ULL);
lean_inc_ref(v___x_2966_);
v___x_2999_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__5(v_fst_2965_, v___x_2995_, v___x_2996_, v_sz_2997_, v___x_2998_, v___x_2966_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
lean_dec_ref(v___x_2996_);
if (lean_obj_tag(v___x_2999_) == 0)
{
lean_object* v_a_3000_; lean_object* v___y_3002_; lean_object* v___y_3003_; lean_object* v___y_3004_; lean_object* v___y_3005_; uint8_t v___y_3006_; lean_object* v___y_3050_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3053_; uint8_t v___y_3054_; lean_object* v___y_3057_; lean_object* v___y_3058_; lean_object* v___y_3059_; lean_object* v___y_3060_; lean_object* v_options_3065_; uint8_t v_hasTrace_3066_; 
v_a_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc(v_a_3000_);
lean_dec_ref(v___x_2999_);
v_options_3065_ = lean_ctor_get(v___y_2988_, 2);
v_hasTrace_3066_ = lean_ctor_get_uint8(v_options_3065_, sizeof(void*)*1);
if (v_hasTrace_3066_ == 0)
{
v___y_3057_ = v___y_2986_;
v___y_3058_ = v___y_2987_;
v___y_3059_ = v___y_2988_;
v___y_3060_ = v___y_2989_;
goto v___jp_3056_;
}
else
{
lean_object* v_inheritedTraceOptions_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; uint8_t v___x_3070_; 
v_inheritedTraceOptions_3067_ = lean_ctor_get(v___y_2988_, 13);
v___x_3068_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13);
v___x_3069_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16);
v___x_3070_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3067_, v_options_3065_, v___x_3069_);
if (v___x_3070_ == 0)
{
v___y_3057_ = v___y_2986_;
v___y_3058_ = v___y_2987_;
v___y_3059_ = v___y_2988_;
v___y_3060_ = v___y_2989_;
goto v___jp_3056_;
}
else
{
lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3071_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5);
lean_inc(v_a_3000_);
v___x_3072_ = lean_array_to_list(v_a_3000_);
v___x_3073_ = lean_box(0);
v___x_3074_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__1(v___x_3072_, v___x_3073_);
v___x_3075_ = l_Lean_MessageData_ofList(v___x_3074_);
v___x_3076_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3071_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
v___x_3077_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v___x_3068_, v___x_3076_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_);
if (lean_obj_tag(v___x_3077_) == 0)
{
lean_dec_ref(v___x_3077_);
v___y_3057_ = v___y_2986_;
v___y_3058_ = v___y_2987_;
v___y_3059_ = v___y_2988_;
v___y_3060_ = v___y_2989_;
goto v___jp_3056_;
}
else
{
lean_object* v_a_3078_; lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3085_; 
lean_dec(v_a_3000_);
lean_dec_ref(v___x_2995_);
lean_dec_ref(v_argMask_2984_);
lean_dec_ref(v_rhsArgs_2983_);
lean_dec_ref(v_ys_2981_);
lean_dec_ref(v___x_2979_);
lean_dec(v___x_2978_);
lean_dec(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec(v_matchDeclName_2975_);
lean_dec_ref(v___x_2974_);
lean_dec_ref(v___x_2973_);
lean_dec(v___x_2972_);
lean_dec_ref(v_a_2971_);
lean_dec_ref(v___x_2970_);
lean_dec_ref(v___x_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v___x_2966_);
lean_dec(v_a_2964_);
lean_dec(v___x_2962_);
v_a_3078_ = lean_ctor_get(v___x_3077_, 0);
v_isSharedCheck_3085_ = !lean_is_exclusive(v___x_3077_);
if (v_isSharedCheck_3085_ == 0)
{
v___x_3080_ = v___x_3077_;
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
else
{
lean_inc(v_a_3078_);
lean_dec(v___x_3077_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3085_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3083_; 
if (v_isShared_3081_ == 0)
{
v___x_3083_ = v___x_3080_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v_a_3078_);
v___x_3083_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
return v___x_3083_;
}
}
}
}
}
v___jp_3001_:
{
lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; size_t v_sz_3014_; lean_object* v___x_3015_; 
v___x_3007_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3);
lean_inc_ref(v___x_2995_);
v___x_3008_ = l_Array_reverse___redArg(v___x_2995_);
v___x_3009_ = lean_array_get_size(v___x_3008_);
lean_inc(v___x_2967_);
v___x_3010_ = l_Array_toSubarray___redArg(v___x_3008_, v___x_2967_, v___x_3009_);
lean_inc_ref(v___x_2968_);
v___x_3011_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6___redArg(v___x_2968_, v___x_2966_);
v___x_3012_ = l_Array_reverse___redArg(v___x_3011_);
v___x_3013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3013_, 0, v___x_3007_);
lean_ctor_set(v___x_3013_, 1, v___x_3010_);
v_sz_3014_ = lean_array_size(v___x_3012_);
v___x_3015_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7(v___x_3012_, v_sz_3014_, v___x_2998_, v___x_3013_, v___y_3002_, v___y_3005_, v___y_3003_, v___y_3004_);
lean_dec_ref(v___x_3012_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_object* v_a_3016_; lean_object* v_fst_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; uint8_t v___x_3020_; uint8_t v___x_3021_; lean_object* v___x_3022_; 
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
lean_inc(v_a_3016_);
lean_dec_ref(v___x_3015_);
v_fst_3017_ = lean_ctor_get(v_a_3016_, 0);
lean_inc(v_fst_3017_);
lean_dec(v_a_3016_);
v___x_3018_ = l_Subarray_copy___redArg(v___x_2968_);
lean_inc_ref(v___x_3018_);
v___x_3019_ = l_Array_append___redArg(v___x_3018_, v_ys_2981_);
v___x_3020_ = 0;
v___x_3021_ = 1;
v___x_3022_ = l_Lean_Meta_mkForallFVars(v___x_3019_, v_fst_3017_, v___x_3020_, v___x_2969_, v___x_2969_, v___x_3021_, v___y_3002_, v___y_3005_, v___y_3003_, v___y_3004_);
lean_dec_ref(v___x_3019_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___f_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref(v___x_3022_);
v___x_3024_ = lean_array_get_size(v_ys_2981_);
v___x_3025_ = lean_array_get_size(v_a_3000_);
v___x_3026_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3026_, 0, v___x_3024_);
lean_ctor_set(v___x_3026_, 1, v___x_3025_);
lean_ctor_set_uint8(v___x_3026_, sizeof(void*)*2, v___y_3006_);
v___x_3027_ = lean_box(v___x_3020_);
v___x_3028_ = lean_box(v___x_2969_);
v___x_3029_ = lean_box(v___x_3021_);
lean_inc_ref(v___x_2995_);
v___f_3030_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__0___boxed), 28, 22);
lean_closure_set(v___f_3030_, 0, v___x_2970_);
lean_closure_set(v___f_3030_, 1, v_a_2964_);
lean_closure_set(v___f_3030_, 2, v_a_2971_);
lean_closure_set(v___f_3030_, 3, v___x_2972_);
lean_closure_set(v___f_3030_, 4, v___x_2973_);
lean_closure_set(v___f_3030_, 5, v___x_2962_);
lean_closure_set(v___f_3030_, 6, v___x_2974_);
lean_closure_set(v___f_3030_, 7, v___x_2995_);
lean_closure_set(v___f_3030_, 8, v_rhsArgs_2983_);
lean_closure_set(v___f_3030_, 9, v_a_3000_);
lean_closure_set(v___f_3030_, 10, v_ys_2981_);
lean_closure_set(v___f_3030_, 11, v___x_3027_);
lean_closure_set(v___f_3030_, 12, v___x_3028_);
lean_closure_set(v___f_3030_, 13, v___x_3029_);
lean_closure_set(v___f_3030_, 14, v_matchDeclName_2975_);
lean_closure_set(v___f_3030_, 15, v___x_2967_);
lean_closure_set(v___f_3030_, 16, v___x_2976_);
lean_closure_set(v___f_3030_, 17, v___x_2977_);
lean_closure_set(v___f_3030_, 18, v___x_2978_);
lean_closure_set(v___f_3030_, 19, v___x_3026_);
lean_closure_set(v___f_3030_, 20, v_argMask_2984_);
lean_closure_set(v___f_3030_, 21, v_a_3023_);
v___x_3031_ = l_Subarray_copy___redArg(v___x_2979_);
v___x_3032_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg(v___x_2980_, v___x_3018_, v___x_2995_, v___x_3031_, v___f_3030_, v___y_3002_, v___y_3005_, v___y_3003_, v___y_3004_);
return v___x_3032_;
}
else
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
lean_dec_ref(v___x_3018_);
lean_dec(v_a_3000_);
lean_dec_ref(v___x_2995_);
lean_dec_ref(v_argMask_2984_);
lean_dec_ref(v_rhsArgs_2983_);
lean_dec_ref(v_ys_2981_);
lean_dec_ref(v___x_2979_);
lean_dec(v___x_2978_);
lean_dec(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec(v_matchDeclName_2975_);
lean_dec_ref(v___x_2974_);
lean_dec_ref(v___x_2973_);
lean_dec(v___x_2972_);
lean_dec_ref(v_a_2971_);
lean_dec_ref(v___x_2970_);
lean_dec(v___x_2967_);
lean_dec(v_a_2964_);
lean_dec(v___x_2962_);
v_a_3033_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v___x_3022_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_3022_);
v___x_3035_ = lean_box(0);
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
v_resetjp_3034_:
{
lean_object* v___x_3038_; 
if (v_isShared_3036_ == 0)
{
v___x_3038_ = v___x_3035_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v_a_3033_);
v___x_3038_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
return v___x_3038_;
}
}
}
}
else
{
lean_object* v_a_3041_; lean_object* v___x_3043_; uint8_t v_isShared_3044_; uint8_t v_isSharedCheck_3048_; 
lean_dec(v_a_3000_);
lean_dec_ref(v___x_2995_);
lean_dec_ref(v_argMask_2984_);
lean_dec_ref(v_rhsArgs_2983_);
lean_dec_ref(v_ys_2981_);
lean_dec_ref(v___x_2979_);
lean_dec(v___x_2978_);
lean_dec(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec(v_matchDeclName_2975_);
lean_dec_ref(v___x_2974_);
lean_dec_ref(v___x_2973_);
lean_dec(v___x_2972_);
lean_dec_ref(v_a_2971_);
lean_dec_ref(v___x_2970_);
lean_dec_ref(v___x_2968_);
lean_dec(v___x_2967_);
lean_dec(v_a_2964_);
lean_dec(v___x_2962_);
v_a_3041_ = lean_ctor_get(v___x_3015_, 0);
v_isSharedCheck_3048_ = !lean_is_exclusive(v___x_3015_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_3043_ = v___x_3015_;
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
else
{
lean_inc(v_a_3041_);
lean_dec(v___x_3015_);
v___x_3043_ = lean_box(0);
v_isShared_3044_ = v_isSharedCheck_3048_;
goto v_resetjp_3042_;
}
v_resetjp_3042_:
{
lean_object* v___x_3046_; 
if (v_isShared_3044_ == 0)
{
v___x_3046_ = v___x_3043_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v_a_3041_);
v___x_3046_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
return v___x_3046_;
}
}
}
}
v___jp_3049_:
{
if (v___y_3054_ == 0)
{
v___y_3002_ = v___y_3050_;
v___y_3003_ = v___y_3051_;
v___y_3004_ = v___y_3052_;
v___y_3005_ = v___y_3053_;
v___y_3006_ = v___y_3054_;
goto v___jp_3001_;
}
else
{
uint8_t v___x_3055_; 
v___x_3055_ = lean_nat_dec_eq(v___x_2980_, v___x_2967_);
v___y_3002_ = v___y_3050_;
v___y_3003_ = v___y_3051_;
v___y_3004_ = v___y_3052_;
v___y_3005_ = v___y_3053_;
v___y_3006_ = v___x_3055_;
goto v___jp_3001_;
}
}
v___jp_3056_:
{
lean_object* v___x_3061_; uint8_t v___x_3062_; 
v___x_3061_ = lean_array_get_size(v_ys_2981_);
v___x_3062_ = lean_nat_dec_eq(v___x_3061_, v___x_2967_);
if (v___x_3062_ == 0)
{
v___y_3050_ = v___y_3057_;
v___y_3051_ = v___y_3059_;
v___y_3052_ = v___y_3060_;
v___y_3053_ = v___y_3058_;
v___y_3054_ = v___x_3062_;
goto v___jp_3049_;
}
else
{
lean_object* v___x_3063_; uint8_t v___x_3064_; 
v___x_3063_ = lean_array_get_size(v_a_3000_);
v___x_3064_ = lean_nat_dec_eq(v___x_3063_, v___x_2967_);
v___y_3050_ = v___y_3057_;
v___y_3051_ = v___y_3059_;
v___y_3052_ = v___y_3060_;
v___y_3053_ = v___y_3058_;
v___y_3054_ = v___x_3064_;
goto v___jp_3049_;
}
}
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
lean_dec_ref(v___x_2995_);
lean_dec_ref(v_argMask_2984_);
lean_dec_ref(v_rhsArgs_2983_);
lean_dec_ref(v_ys_2981_);
lean_dec_ref(v___x_2979_);
lean_dec(v___x_2978_);
lean_dec(v___x_2977_);
lean_dec(v___x_2976_);
lean_dec(v_matchDeclName_2975_);
lean_dec_ref(v___x_2974_);
lean_dec_ref(v___x_2973_);
lean_dec(v___x_2972_);
lean_dec_ref(v_a_2971_);
lean_dec_ref(v___x_2970_);
lean_dec_ref(v___x_2968_);
lean_dec(v___x_2967_);
lean_dec_ref(v___x_2966_);
lean_dec(v_a_2964_);
lean_dec(v___x_2962_);
v_a_3086_ = lean_ctor_get(v___x_2999_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_2999_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_2999_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_2999_);
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_3094_ = _args[0];
lean_object* v_overlaps_3095_ = _args[1];
lean_object* v_a_3096_ = _args[2];
lean_object* v_fst_3097_ = _args[3];
lean_object* v___x_3098_ = _args[4];
lean_object* v___x_3099_ = _args[5];
lean_object* v___x_3100_ = _args[6];
lean_object* v___x_3101_ = _args[7];
lean_object* v___x_3102_ = _args[8];
lean_object* v_a_3103_ = _args[9];
lean_object* v___x_3104_ = _args[10];
lean_object* v___x_3105_ = _args[11];
lean_object* v___x_3106_ = _args[12];
lean_object* v_matchDeclName_3107_ = _args[13];
lean_object* v___x_3108_ = _args[14];
lean_object* v___x_3109_ = _args[15];
lean_object* v___x_3110_ = _args[16];
lean_object* v___x_3111_ = _args[17];
lean_object* v___x_3112_ = _args[18];
lean_object* v_ys_3113_ = _args[19];
lean_object* v___eqs_3114_ = _args[20];
lean_object* v_rhsArgs_3115_ = _args[21];
lean_object* v_argMask_3116_ = _args[22];
lean_object* v_altResultType_3117_ = _args[23];
lean_object* v___y_3118_ = _args[24];
lean_object* v___y_3119_ = _args[25];
lean_object* v___y_3120_ = _args[26];
lean_object* v___y_3121_ = _args[27];
lean_object* v___y_3122_ = _args[28];
_start:
{
uint8_t v___x_19219__boxed_3123_; lean_object* v_res_3124_; 
v___x_19219__boxed_3123_ = lean_unbox(v___x_3101_);
v_res_3124_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1(v___x_3094_, v_overlaps_3095_, v_a_3096_, v_fst_3097_, v___x_3098_, v___x_3099_, v___x_3100_, v___x_19219__boxed_3123_, v___x_3102_, v_a_3103_, v___x_3104_, v___x_3105_, v___x_3106_, v_matchDeclName_3107_, v___x_3108_, v___x_3109_, v___x_3110_, v___x_3111_, v___x_3112_, v_ys_3113_, v___eqs_3114_, v_rhsArgs_3115_, v_argMask_3116_, v_altResultType_3117_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_);
lean_dec(v___y_3121_);
lean_dec_ref(v___y_3120_);
lean_dec(v___y_3119_);
lean_dec_ref(v___y_3118_);
lean_dec_ref(v___eqs_3114_);
lean_dec(v___x_3112_);
lean_dec(v_fst_3097_);
lean_dec_ref(v_overlaps_3095_);
return v_res_3124_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg(lean_object* v_upperBound_3125_, lean_object* v_val_3126_, lean_object* v_baseName_3127_, lean_object* v___x_3128_, lean_object* v_a_3129_, lean_object* v___x_3130_, lean_object* v___x_3131_, lean_object* v___x_3132_, lean_object* v_matchDeclName_3133_, lean_object* v___x_3134_, lean_object* v___x_3135_, lean_object* v___x_3136_, lean_object* v_a_3137_, lean_object* v_b_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_){
_start:
{
uint8_t v___x_3144_; 
v___x_3144_ = lean_nat_dec_lt(v_a_3137_, v_upperBound_3125_);
if (v___x_3144_ == 0)
{
lean_object* v___x_3145_; 
lean_dec(v_a_3137_);
lean_dec(v___x_3136_);
lean_dec_ref(v___x_3135_);
lean_dec(v___x_3134_);
lean_dec(v_matchDeclName_3133_);
lean_dec_ref(v___x_3132_);
lean_dec_ref(v___x_3131_);
lean_dec(v___x_3130_);
lean_dec_ref(v_a_3129_);
lean_dec_ref(v___x_3128_);
lean_dec(v_baseName_3127_);
lean_dec_ref(v_val_3126_);
v___x_3145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3145_, 0, v_b_3138_);
return v___x_3145_;
}
else
{
lean_object* v_snd_3146_; lean_object* v_snd_3147_; lean_object* v_snd_3148_; lean_object* v_fst_3149_; lean_object* v_fst_3150_; lean_object* v_fst_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3234_; 
v_snd_3146_ = lean_ctor_get(v_b_3138_, 1);
lean_inc(v_snd_3146_);
v_snd_3147_ = lean_ctor_get(v_snd_3146_, 1);
lean_inc(v_snd_3147_);
v_snd_3148_ = lean_ctor_get(v_snd_3147_, 1);
lean_inc(v_snd_3148_);
v_fst_3149_ = lean_ctor_get(v_b_3138_, 0);
lean_inc(v_fst_3149_);
lean_dec_ref(v_b_3138_);
v_fst_3150_ = lean_ctor_get(v_snd_3146_, 0);
lean_inc(v_fst_3150_);
lean_dec(v_snd_3146_);
v_fst_3151_ = lean_ctor_get(v_snd_3147_, 0);
v_isSharedCheck_3234_ = !lean_is_exclusive(v_snd_3147_);
if (v_isSharedCheck_3234_ == 0)
{
lean_object* v_unused_3235_; 
v_unused_3235_ = lean_ctor_get(v_snd_3147_, 1);
lean_dec(v_unused_3235_);
v___x_3153_ = v_snd_3147_;
v_isShared_3154_ = v_isSharedCheck_3234_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_fst_3151_);
lean_dec(v_snd_3147_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3234_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v_fst_3155_; lean_object* v_snd_3156_; lean_object* v___x_3158_; uint8_t v_isShared_3159_; uint8_t v_isSharedCheck_3233_; 
v_fst_3155_ = lean_ctor_get(v_snd_3148_, 0);
v_snd_3156_ = lean_ctor_get(v_snd_3148_, 1);
v_isSharedCheck_3233_ = !lean_is_exclusive(v_snd_3148_);
if (v_isSharedCheck_3233_ == 0)
{
v___x_3158_ = v_snd_3148_;
v_isShared_3159_ = v_isSharedCheck_3233_;
goto v_resetjp_3157_;
}
else
{
lean_inc(v_snd_3156_);
lean_inc(v_fst_3155_);
lean_dec(v_snd_3148_);
v___x_3158_ = lean_box(0);
v_isShared_3159_ = v_isSharedCheck_3233_;
goto v_resetjp_3157_;
}
v_resetjp_3157_:
{
lean_object* v_altInfos_3160_; lean_object* v_overlaps_3161_; lean_object* v_start_3162_; lean_object* v_stop_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___f_3175_; lean_object* v___x_3176_; lean_object* v___y_3178_; lean_object* v___x_3229_; uint8_t v___x_3230_; 
v_altInfos_3160_ = lean_ctor_get(v_val_3126_, 2);
v_overlaps_3161_ = lean_ctor_get(v_val_3126_, 5);
v_start_3162_ = lean_ctor_get(v___x_3135_, 1);
v_stop_3163_ = lean_ctor_get(v___x_3135_, 2);
v___x_3164_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_3165_ = l_Lean_instInhabitedExpr;
v___x_3166_ = lean_unsigned_to_nat(0u);
v___x_3167_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0);
v___x_3168_ = lean_box(0);
v___x_3169_ = lean_unsigned_to_nat(1u);
v___x_3170_ = lean_array_get_borrowed(v___x_3164_, v_altInfos_3160_, v_a_3137_);
v___x_3171_ = l_Lean_Meta_eqnThmSuffixBase;
lean_inc(v_baseName_3127_);
v___x_3172_ = l_Lean_Name_str___override(v_baseName_3127_, v___x_3171_);
lean_inc(v_fst_3151_);
v___x_3173_ = lean_name_append_index_after(v___x_3172_, v_fst_3151_);
v___x_3174_ = lean_box(v___x_3144_);
lean_inc(v___x_3136_);
lean_inc_ref(v___x_3135_);
lean_inc(v___x_3134_);
lean_inc(v___x_3173_);
lean_inc(v_matchDeclName_3133_);
lean_inc_ref(v___x_3132_);
lean_inc_ref(v___x_3131_);
lean_inc(v___x_3130_);
lean_inc_ref(v_a_3129_);
lean_inc_ref(v___x_3128_);
lean_inc(v_fst_3150_);
lean_inc(v_a_3137_);
lean_inc_ref(v_overlaps_3161_);
v___f_3175_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___boxed), 29, 19);
lean_closure_set(v___f_3175_, 0, v___x_3169_);
lean_closure_set(v___f_3175_, 1, v_overlaps_3161_);
lean_closure_set(v___f_3175_, 2, v_a_3137_);
lean_closure_set(v___f_3175_, 3, v_fst_3150_);
lean_closure_set(v___f_3175_, 4, v___x_3167_);
lean_closure_set(v___f_3175_, 5, v___x_3166_);
lean_closure_set(v___f_3175_, 6, v___x_3128_);
lean_closure_set(v___f_3175_, 7, v___x_3174_);
lean_closure_set(v___f_3175_, 8, v___x_3165_);
lean_closure_set(v___f_3175_, 9, v_a_3129_);
lean_closure_set(v___f_3175_, 10, v___x_3130_);
lean_closure_set(v___f_3175_, 11, v___x_3131_);
lean_closure_set(v___f_3175_, 12, v___x_3132_);
lean_closure_set(v___f_3175_, 13, v_matchDeclName_3133_);
lean_closure_set(v___f_3175_, 14, v___x_3173_);
lean_closure_set(v___f_3175_, 15, v___x_3134_);
lean_closure_set(v___f_3175_, 16, v___x_3168_);
lean_closure_set(v___f_3175_, 17, v___x_3135_);
lean_closure_set(v___f_3175_, 18, v___x_3136_);
v___x_3176_ = lean_array_push(v_fst_3149_, v___x_3173_);
v___x_3229_ = lean_nat_sub(v_stop_3163_, v_start_3162_);
v___x_3230_ = lean_nat_dec_lt(v_a_3137_, v___x_3229_);
lean_dec(v___x_3229_);
if (v___x_3230_ == 0)
{
lean_object* v___x_3231_; 
v___x_3231_ = l_outOfBounds___redArg(v___x_3165_);
v___y_3178_ = v___x_3231_;
goto v___jp_3177_;
}
else
{
lean_object* v___x_3232_; 
v___x_3232_ = l_Subarray_get___redArg(v___x_3135_, v_a_3137_);
v___y_3178_ = v___x_3232_;
goto v___jp_3177_;
}
v___jp_3177_:
{
lean_object* v___x_3179_; 
lean_inc(v___y_3142_);
lean_inc_ref(v___y_3141_);
lean_inc(v___y_3140_);
lean_inc_ref(v___y_3139_);
v___x_3179_ = lean_infer_type(v___y_3178_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_);
if (lean_obj_tag(v___x_3179_) == 0)
{
lean_object* v_a_3180_; lean_object* v___x_3181_; 
v_a_3180_ = lean_ctor_get(v___x_3179_, 0);
lean_inc(v_a_3180_);
lean_dec_ref(v___x_3179_);
lean_inc(v___x_3136_);
lean_inc(v___x_3170_);
v___x_3181_ = l_Lean_Meta_Match_forallAltTelescope___redArg(v_a_3180_, v___x_3170_, v___x_3136_, v___f_3175_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_);
if (lean_obj_tag(v___x_3181_) == 0)
{
lean_object* v_a_3182_; lean_object* v_snd_3183_; lean_object* v_fst_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3212_; 
v_a_3182_ = lean_ctor_get(v___x_3181_, 0);
lean_inc(v_a_3182_);
lean_dec_ref(v___x_3181_);
v_snd_3183_ = lean_ctor_get(v_a_3182_, 1);
v_fst_3184_ = lean_ctor_get(v_a_3182_, 0);
v_isSharedCheck_3212_ = !lean_is_exclusive(v_a_3182_);
if (v_isSharedCheck_3212_ == 0)
{
v___x_3186_ = v_a_3182_;
v_isShared_3187_ = v_isSharedCheck_3212_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_snd_3183_);
lean_inc(v_fst_3184_);
lean_dec(v_a_3182_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3212_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v_fst_3188_; lean_object* v_snd_3189_; lean_object* v___x_3191_; uint8_t v_isShared_3192_; uint8_t v_isSharedCheck_3211_; 
v_fst_3188_ = lean_ctor_get(v_snd_3183_, 0);
v_snd_3189_ = lean_ctor_get(v_snd_3183_, 1);
v_isSharedCheck_3211_ = !lean_is_exclusive(v_snd_3183_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3191_ = v_snd_3183_;
v_isShared_3192_ = v_isSharedCheck_3211_;
goto v_resetjp_3190_;
}
else
{
lean_inc(v_snd_3189_);
lean_inc(v_fst_3188_);
lean_dec(v_snd_3183_);
v___x_3191_ = lean_box(0);
v_isShared_3192_ = v_isSharedCheck_3211_;
goto v_resetjp_3190_;
}
v_resetjp_3190_:
{
lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3198_; 
v___x_3193_ = lean_array_push(v_fst_3150_, v_fst_3184_);
v___x_3194_ = lean_array_push(v_fst_3155_, v_fst_3188_);
v___x_3195_ = lean_array_push(v_snd_3156_, v_snd_3189_);
v___x_3196_ = lean_nat_add(v_fst_3151_, v___x_3169_);
lean_dec(v_fst_3151_);
if (v_isShared_3192_ == 0)
{
lean_ctor_set(v___x_3191_, 1, v___x_3195_);
lean_ctor_set(v___x_3191_, 0, v___x_3194_);
v___x_3198_ = v___x_3191_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v___x_3194_);
lean_ctor_set(v_reuseFailAlloc_3210_, 1, v___x_3195_);
v___x_3198_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
lean_object* v___x_3200_; 
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 1, v___x_3198_);
lean_ctor_set(v___x_3186_, 0, v___x_3196_);
v___x_3200_ = v___x_3186_;
goto v_reusejp_3199_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v___x_3196_);
lean_ctor_set(v_reuseFailAlloc_3209_, 1, v___x_3198_);
v___x_3200_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3199_;
}
v_reusejp_3199_:
{
lean_object* v___x_3202_; 
if (v_isShared_3159_ == 0)
{
lean_ctor_set(v___x_3158_, 1, v___x_3200_);
lean_ctor_set(v___x_3158_, 0, v___x_3193_);
v___x_3202_ = v___x_3158_;
goto v_reusejp_3201_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v___x_3193_);
lean_ctor_set(v_reuseFailAlloc_3208_, 1, v___x_3200_);
v___x_3202_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3201_;
}
v_reusejp_3201_:
{
lean_object* v___x_3204_; 
if (v_isShared_3154_ == 0)
{
lean_ctor_set(v___x_3153_, 1, v___x_3202_);
lean_ctor_set(v___x_3153_, 0, v___x_3176_);
v___x_3204_ = v___x_3153_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3207_; 
v_reuseFailAlloc_3207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3207_, 0, v___x_3176_);
lean_ctor_set(v_reuseFailAlloc_3207_, 1, v___x_3202_);
v___x_3204_ = v_reuseFailAlloc_3207_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
lean_object* v___x_3205_; 
v___x_3205_ = lean_nat_add(v_a_3137_, v___x_3169_);
lean_dec(v_a_3137_);
v_a_3137_ = v___x_3205_;
v_b_3138_ = v___x_3204_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3213_; lean_object* v___x_3215_; uint8_t v_isShared_3216_; uint8_t v_isSharedCheck_3220_; 
lean_dec_ref(v___x_3176_);
lean_del_object(v___x_3158_);
lean_dec(v_snd_3156_);
lean_dec(v_fst_3155_);
lean_del_object(v___x_3153_);
lean_dec(v_fst_3151_);
lean_dec(v_fst_3150_);
lean_dec(v_a_3137_);
lean_dec(v___x_3136_);
lean_dec_ref(v___x_3135_);
lean_dec(v___x_3134_);
lean_dec(v_matchDeclName_3133_);
lean_dec_ref(v___x_3132_);
lean_dec_ref(v___x_3131_);
lean_dec(v___x_3130_);
lean_dec_ref(v_a_3129_);
lean_dec_ref(v___x_3128_);
lean_dec(v_baseName_3127_);
lean_dec_ref(v_val_3126_);
v_a_3213_ = lean_ctor_get(v___x_3181_, 0);
v_isSharedCheck_3220_ = !lean_is_exclusive(v___x_3181_);
if (v_isSharedCheck_3220_ == 0)
{
v___x_3215_ = v___x_3181_;
v_isShared_3216_ = v_isSharedCheck_3220_;
goto v_resetjp_3214_;
}
else
{
lean_inc(v_a_3213_);
lean_dec(v___x_3181_);
v___x_3215_ = lean_box(0);
v_isShared_3216_ = v_isSharedCheck_3220_;
goto v_resetjp_3214_;
}
v_resetjp_3214_:
{
lean_object* v___x_3218_; 
if (v_isShared_3216_ == 0)
{
v___x_3218_ = v___x_3215_;
goto v_reusejp_3217_;
}
else
{
lean_object* v_reuseFailAlloc_3219_; 
v_reuseFailAlloc_3219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3219_, 0, v_a_3213_);
v___x_3218_ = v_reuseFailAlloc_3219_;
goto v_reusejp_3217_;
}
v_reusejp_3217_:
{
return v___x_3218_;
}
}
}
}
else
{
lean_object* v_a_3221_; lean_object* v___x_3223_; uint8_t v_isShared_3224_; uint8_t v_isSharedCheck_3228_; 
lean_dec_ref(v___x_3176_);
lean_dec_ref(v___f_3175_);
lean_del_object(v___x_3158_);
lean_dec(v_snd_3156_);
lean_dec(v_fst_3155_);
lean_del_object(v___x_3153_);
lean_dec(v_fst_3151_);
lean_dec(v_fst_3150_);
lean_dec(v_a_3137_);
lean_dec(v___x_3136_);
lean_dec_ref(v___x_3135_);
lean_dec(v___x_3134_);
lean_dec(v_matchDeclName_3133_);
lean_dec_ref(v___x_3132_);
lean_dec_ref(v___x_3131_);
lean_dec(v___x_3130_);
lean_dec_ref(v_a_3129_);
lean_dec_ref(v___x_3128_);
lean_dec(v_baseName_3127_);
lean_dec_ref(v_val_3126_);
v_a_3221_ = lean_ctor_get(v___x_3179_, 0);
v_isSharedCheck_3228_ = !lean_is_exclusive(v___x_3179_);
if (v_isSharedCheck_3228_ == 0)
{
v___x_3223_ = v___x_3179_;
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
else
{
lean_inc(v_a_3221_);
lean_dec(v___x_3179_);
v___x_3223_ = lean_box(0);
v_isShared_3224_ = v_isSharedCheck_3228_;
goto v_resetjp_3222_;
}
v_resetjp_3222_:
{
lean_object* v___x_3226_; 
if (v_isShared_3224_ == 0)
{
v___x_3226_ = v___x_3223_;
goto v_reusejp_3225_;
}
else
{
lean_object* v_reuseFailAlloc_3227_; 
v_reuseFailAlloc_3227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3227_, 0, v_a_3221_);
v___x_3226_ = v_reuseFailAlloc_3227_;
goto v_reusejp_3225_;
}
v_reusejp_3225_:
{
return v___x_3226_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_3236_ = _args[0];
lean_object* v_val_3237_ = _args[1];
lean_object* v_baseName_3238_ = _args[2];
lean_object* v___x_3239_ = _args[3];
lean_object* v_a_3240_ = _args[4];
lean_object* v___x_3241_ = _args[5];
lean_object* v___x_3242_ = _args[6];
lean_object* v___x_3243_ = _args[7];
lean_object* v_matchDeclName_3244_ = _args[8];
lean_object* v___x_3245_ = _args[9];
lean_object* v___x_3246_ = _args[10];
lean_object* v___x_3247_ = _args[11];
lean_object* v_a_3248_ = _args[12];
lean_object* v_b_3249_ = _args[13];
lean_object* v___y_3250_ = _args[14];
lean_object* v___y_3251_ = _args[15];
lean_object* v___y_3252_ = _args[16];
lean_object* v___y_3253_ = _args[17];
lean_object* v___y_3254_ = _args[18];
_start:
{
lean_object* v_res_3255_; 
v_res_3255_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg(v_upperBound_3236_, v_val_3237_, v_baseName_3238_, v___x_3239_, v_a_3240_, v___x_3241_, v___x_3242_, v___x_3243_, v_matchDeclName_3244_, v___x_3245_, v___x_3246_, v___x_3247_, v_a_3248_, v_b_3249_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_);
lean_dec(v___y_3253_);
lean_dec_ref(v___y_3252_);
lean_dec(v___y_3251_);
lean_dec_ref(v___y_3250_);
lean_dec(v_upperBound_3236_);
return v_res_3255_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0(void){
_start:
{
lean_object* v___x_3256_; 
v___x_3256_ = lean_mk_string_unchecked("Lean.Meta.Match.MatchEqs", 24, 24);
return v___x_3256_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3257_; 
v___x_3257_ = lean_mk_string_unchecked("_private.Lean.Meta.Match.MatchEqs.0.Lean.Meta.Match.getEquationsForImpl.go", 74, 74);
return v___x_3257_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__2(void){
_start:
{
lean_object* v___x_3258_; 
v___x_3258_ = lean_mk_string_unchecked("assertion violation: matchInfo.altInfos == splitterAltInfos\n      -- This match statement does not need a splitter, we can use itself for that.\n      -- (We still have to generate a declaration to satisfy the realizable constant)\n      ", 236, 236);
return v___x_3258_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; 
v___x_3259_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__2, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__2_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__2);
v___x_3260_ = lean_unsigned_to_nat(6u);
v___x_3261_ = lean_unsigned_to_nat(233u);
v___x_3262_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__1);
v___x_3263_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0);
v___x_3264_ = l_mkPanicMessageWithDecl(v___x_3263_, v___x_3262_, v___x_3261_, v___x_3260_, v___x_3259_);
return v___x_3264_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__4(void){
_start:
{
lean_object* v___x_3265_; lean_object* v___x_3266_; 
v___x_3265_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8);
v___x_3266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3266_, 0, v___x_3265_);
lean_ctor_set(v___x_3266_, 1, v___x_3265_);
return v___x_3266_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__5(void){
_start:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3269_; 
v___x_3267_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__4, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__4_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__4);
v___x_3268_ = lean_unsigned_to_nat(1u);
v___x_3269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3269_, 0, v___x_3268_);
lean_ctor_set(v___x_3269_, 1, v___x_3267_);
return v___x_3269_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__6(void){
_start:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; 
v___x_3270_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__5, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__5_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__5);
v___x_3271_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8);
v___x_3272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3272_, 0, v___x_3271_);
lean_ctor_set(v___x_3272_, 1, v___x_3270_);
return v___x_3272_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__7(void){
_start:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
v___x_3273_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__6, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__6_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__6);
v___x_3274_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8);
v___x_3275_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3275_, 0, v___x_3274_);
lean_ctor_set(v___x_3275_, 1, v___x_3273_);
return v___x_3275_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__8(void){
_start:
{
lean_object* v___x_3276_; 
v___x_3276_ = lean_alloc_closure((void*)(l_Lean_Meta_Match_isNamedPattern___boxed), 1, 0);
return v___x_3276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1(lean_object* v_splitterName_3277_, lean_object* v_matchDeclName_3278_, lean_object* v_numParams_3279_, lean_object* v_val_3280_, lean_object* v___x_3281_, lean_object* v_numDiscrs_3282_, lean_object* v_baseName_3283_, lean_object* v_a_3284_, lean_object* v___x_3285_, lean_object* v___x_3286_, lean_object* v___x_3287_, lean_object* v_uElimPos_x3f_3288_, lean_object* v_discrInfos_3289_, lean_object* v_overlaps_3290_, lean_object* v___f_3291_, lean_object* v___x_3292_, lean_object* v_altInfos_3293_, lean_object* v_xs_3294_, lean_object* v___matchResultType_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_){
_start:
{
lean_object* v___y_3305_; lean_object* v___y_3306_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; uint8_t v___y_3313_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v_lower_3321_; lean_object* v_upper_3322_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; uint8_t v___x_3378_; 
v___x_3315_ = lean_box(0);
v___x_3316_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_3279_);
lean_inc_ref(v_xs_3294_);
v___x_3317_ = l_Array_toSubarray___redArg(v_xs_3294_, v___x_3316_, v_numParams_3279_);
v___x_3318_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_3280_);
v___x_3319_ = lean_array_get(v___x_3281_, v_xs_3294_, v___x_3318_);
lean_dec(v___x_3318_);
v___x_3375_ = lean_array_get_size(v_xs_3294_);
v___x_3376_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_3280_);
v___x_3377_ = lean_nat_sub(v___x_3375_, v___x_3376_);
lean_dec(v___x_3376_);
v___x_3378_ = lean_nat_dec_le(v___x_3377_, v___x_3316_);
if (v___x_3378_ == 0)
{
v_lower_3321_ = v___x_3377_;
v_upper_3322_ = v___x_3375_;
goto v___jp_3320_;
}
else
{
lean_dec(v___x_3377_);
v_lower_3321_ = v___x_3316_;
v_upper_3322_ = v___x_3375_;
goto v___jp_3320_;
}
v___jp_3301_:
{
lean_object* v___x_3302_; lean_object* v___x_3303_; 
v___x_3302_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__3);
v___x_3303_ = l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3(v___x_3302_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
return v___x_3303_;
}
v___jp_3304_:
{
lean_object* v___x_3307_; lean_object* v___x_3308_; 
v___x_3307_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3307_, 0, v___y_3305_);
lean_ctor_set(v___x_3307_, 1, v_splitterName_3277_);
lean_ctor_set(v___x_3307_, 2, v___y_3306_);
v___x_3308_ = l_Lean_Meta_Match_registerMatchEqns___redArg(v_matchDeclName_3278_, v___x_3307_, v___y_3299_);
return v___x_3308_;
}
v___jp_3309_:
{
lean_object* v___x_3314_; 
lean_inc(v_matchDeclName_3278_);
v___x_3314_ = l_Lean_Meta_Match_withMkMatcherInput___redArg(v_matchDeclName_3278_, v___y_3313_, v___y_3311_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
if (lean_obj_tag(v___x_3314_) == 0)
{
lean_dec_ref(v___x_3314_);
v___y_3305_ = v___y_3310_;
v___y_3306_ = v___y_3312_;
goto v___jp_3304_;
}
else
{
lean_dec_ref(v___y_3312_);
lean_dec(v___y_3310_);
lean_dec(v_matchDeclName_3278_);
lean_dec(v_splitterName_3277_);
return v___x_3314_;
}
}
v___jp_3320_:
{
lean_object* v___x_3323_; lean_object* v_start_3324_; lean_object* v_stop_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; 
lean_inc_ref(v_xs_3294_);
v___x_3323_ = l_Array_toSubarray___redArg(v_xs_3294_, v_lower_3321_, v_upper_3322_);
v_start_3324_ = lean_ctor_get(v___x_3323_, 1);
lean_inc(v_start_3324_);
v_stop_3325_ = lean_ctor_get(v___x_3323_, 2);
lean_inc(v_stop_3325_);
v___x_3326_ = lean_unsigned_to_nat(1u);
v___x_3327_ = lean_nat_add(v_numParams_3279_, v___x_3326_);
v___x_3328_ = lean_nat_add(v___x_3327_, v_numDiscrs_3282_);
v___x_3329_ = lean_nat_sub(v_stop_3325_, v_start_3324_);
lean_dec(v_start_3324_);
lean_dec(v_stop_3325_);
v___x_3330_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__7, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__7_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__7);
v___x_3331_ = l_Array_toSubarray___redArg(v_xs_3294_, v___x_3327_, v___x_3328_);
lean_inc(v___x_3286_);
lean_inc(v_matchDeclName_3278_);
lean_inc(v___x_3285_);
v___x_3332_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg(v___x_3329_, v_val_3280_, v_baseName_3283_, v___x_3331_, v_a_3284_, v___x_3285_, v___x_3317_, v___x_3319_, v_matchDeclName_3278_, v___x_3286_, v___x_3323_, v___x_3287_, v___x_3316_, v___x_3330_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
lean_dec(v___x_3329_);
if (lean_obj_tag(v___x_3332_) == 0)
{
lean_object* v_a_3333_; lean_object* v_snd_3334_; lean_object* v_snd_3335_; lean_object* v_snd_3336_; lean_object* v_fst_3337_; lean_object* v_fst_3338_; lean_object* v___x_3340_; uint8_t v_isShared_3341_; uint8_t v_isSharedCheck_3365_; 
v_a_3333_ = lean_ctor_get(v___x_3332_, 0);
lean_inc(v_a_3333_);
lean_dec_ref(v___x_3332_);
v_snd_3334_ = lean_ctor_get(v_a_3333_, 1);
v_snd_3335_ = lean_ctor_get(v_snd_3334_, 1);
v_snd_3336_ = lean_ctor_get(v_snd_3335_, 1);
lean_inc(v_snd_3336_);
v_fst_3337_ = lean_ctor_get(v_a_3333_, 0);
lean_inc(v_fst_3337_);
lean_dec(v_a_3333_);
v_fst_3338_ = lean_ctor_get(v_snd_3336_, 0);
v_isSharedCheck_3365_ = !lean_is_exclusive(v_snd_3336_);
if (v_isSharedCheck_3365_ == 0)
{
lean_object* v_unused_3366_; 
v_unused_3366_ = lean_ctor_get(v_snd_3336_, 1);
lean_dec(v_unused_3366_);
v___x_3340_ = v_snd_3336_;
v_isShared_3341_ = v_isSharedCheck_3365_;
goto v_resetjp_3339_;
}
else
{
lean_inc(v_fst_3338_);
lean_dec(v_snd_3336_);
v___x_3340_ = lean_box(0);
v_isShared_3341_ = v_isSharedCheck_3365_;
goto v_resetjp_3339_;
}
v_resetjp_3339_:
{
lean_object* v___x_3342_; uint8_t v___x_3343_; 
lean_inc_ref(v_overlaps_3290_);
lean_inc(v_fst_3338_);
v___x_3342_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3342_, 0, v_numParams_3279_);
lean_ctor_set(v___x_3342_, 1, v_numDiscrs_3282_);
lean_ctor_set(v___x_3342_, 2, v_fst_3338_);
lean_ctor_set(v___x_3342_, 3, v_uElimPos_x3f_3288_);
lean_ctor_set(v___x_3342_, 4, v_discrInfos_3289_);
lean_ctor_set(v___x_3342_, 5, v_overlaps_3290_);
v___x_3343_ = l_Lean_Meta_Match_Overlaps_isEmpty(v_overlaps_3290_);
lean_dec_ref(v_overlaps_3290_);
if (v___x_3343_ == 0)
{
uint8_t v___x_3344_; 
lean_del_object(v___x_3340_);
lean_dec(v_fst_3338_);
lean_dec_ref(v___x_3292_);
lean_dec(v___x_3286_);
lean_dec(v___x_3285_);
v___x_3344_ = 1;
v___y_3310_ = v_fst_3337_;
v___y_3311_ = v___f_3291_;
v___y_3312_ = v___x_3342_;
v___y_3313_ = v___x_3344_;
goto v___jp_3309_;
}
else
{
lean_object* v___x_3345_; lean_object* v___x_3346_; 
v___x_3345_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__8, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__8_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__8);
v___x_3346_ = lean_find_expr(v___x_3345_, v___x_3292_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v___x_3347_; lean_object* v___x_3348_; uint8_t v___x_3349_; 
lean_dec_ref(v___f_3291_);
v___x_3347_ = lean_array_get_size(v_altInfos_3293_);
v___x_3348_ = lean_array_get_size(v_fst_3338_);
v___x_3349_ = lean_nat_dec_eq(v___x_3347_, v___x_3348_);
if (v___x_3349_ == 0)
{
lean_dec_ref(v___x_3342_);
lean_del_object(v___x_3340_);
lean_dec(v_fst_3338_);
lean_dec(v_fst_3337_);
lean_dec_ref(v___x_3292_);
lean_dec(v___x_3286_);
lean_dec(v___x_3285_);
lean_dec(v_matchDeclName_3278_);
lean_dec(v_splitterName_3277_);
goto v___jp_3301_;
}
else
{
uint8_t v___x_3350_; 
v___x_3350_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg(v_altInfos_3293_, v_fst_3338_, v___x_3347_);
lean_dec(v_fst_3338_);
if (v___x_3350_ == 0)
{
lean_dec_ref(v___x_3342_);
lean_del_object(v___x_3340_);
lean_dec(v_fst_3337_);
lean_dec_ref(v___x_3292_);
lean_dec(v___x_3286_);
lean_dec(v___x_3285_);
lean_dec(v_matchDeclName_3278_);
lean_dec(v_splitterName_3277_);
goto v___jp_3301_;
}
else
{
uint8_t v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; uint8_t v___x_3355_; lean_object* v___x_3357_; 
v___x_3351_ = 0;
lean_inc_n(v_splitterName_3277_, 2);
v___x_3352_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3352_, 0, v_splitterName_3277_);
lean_ctor_set(v___x_3352_, 1, v___x_3286_);
lean_ctor_set(v___x_3352_, 2, v___x_3292_);
lean_inc(v_matchDeclName_3278_);
v___x_3353_ = l_Lean_mkConst(v_matchDeclName_3278_, v___x_3285_);
v___x_3354_ = lean_box(1);
v___x_3355_ = 1;
if (v_isShared_3341_ == 0)
{
lean_ctor_set_tag(v___x_3340_, 1);
lean_ctor_set(v___x_3340_, 1, v___x_3315_);
lean_ctor_set(v___x_3340_, 0, v_splitterName_3277_);
v___x_3357_ = v___x_3340_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v_splitterName_3277_);
lean_ctor_set(v_reuseFailAlloc_3364_, 1, v___x_3315_);
v___x_3357_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; 
v___x_3358_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_3358_, 0, v___x_3352_);
lean_ctor_set(v___x_3358_, 1, v___x_3353_);
lean_ctor_set(v___x_3358_, 2, v___x_3354_);
lean_ctor_set(v___x_3358_, 3, v___x_3357_);
lean_ctor_set_uint8(v___x_3358_, sizeof(void*)*4, v___x_3355_);
v___x_3359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3359_, 0, v___x_3358_);
lean_inc_ref(v___x_3359_);
v___x_3360_ = l_Lean_addDecl(v___x_3359_, v___x_3351_, v___y_3298_, v___y_3299_);
if (lean_obj_tag(v___x_3360_) == 0)
{
uint8_t v___x_3361_; lean_object* v___x_3362_; 
lean_dec_ref(v___x_3360_);
v___x_3361_ = 0;
lean_inc(v_splitterName_3277_);
v___x_3362_ = l_Lean_Meta_setInlineAttribute(v_splitterName_3277_, v___x_3361_, v___y_3296_, v___y_3297_, v___y_3298_, v___y_3299_);
if (lean_obj_tag(v___x_3362_) == 0)
{
lean_object* v___x_3363_; 
lean_dec_ref(v___x_3362_);
v___x_3363_ = l_Lean_compileDecl(v___x_3359_, v___x_3351_, v___y_3298_, v___y_3299_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_dec_ref(v___x_3363_);
v___y_3305_ = v_fst_3337_;
v___y_3306_ = v___x_3342_;
goto v___jp_3304_;
}
else
{
lean_dec_ref(v___x_3342_);
lean_dec(v_fst_3337_);
lean_dec(v_matchDeclName_3278_);
lean_dec(v_splitterName_3277_);
return v___x_3363_;
}
}
else
{
lean_dec_ref(v___x_3359_);
lean_dec_ref(v___x_3342_);
lean_dec(v_fst_3337_);
lean_dec(v_matchDeclName_3278_);
lean_dec(v_splitterName_3277_);
return v___x_3362_;
}
}
else
{
lean_dec_ref(v___x_3359_);
lean_dec_ref(v___x_3342_);
lean_dec(v_fst_3337_);
lean_dec(v_matchDeclName_3278_);
lean_dec(v_splitterName_3277_);
return v___x_3360_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_3346_);
lean_del_object(v___x_3340_);
lean_dec(v_fst_3338_);
lean_dec_ref(v___x_3292_);
lean_dec(v___x_3286_);
lean_dec(v___x_3285_);
v___y_3310_ = v_fst_3337_;
v___y_3311_ = v___f_3291_;
v___y_3312_ = v___x_3342_;
v___y_3313_ = v___x_3343_;
goto v___jp_3309_;
}
}
}
}
else
{
lean_object* v_a_3367_; lean_object* v___x_3369_; uint8_t v_isShared_3370_; uint8_t v_isSharedCheck_3374_; 
lean_dec_ref(v___x_3292_);
lean_dec_ref(v___f_3291_);
lean_dec_ref(v_overlaps_3290_);
lean_dec_ref(v_discrInfos_3289_);
lean_dec(v_uElimPos_x3f_3288_);
lean_dec(v___x_3286_);
lean_dec(v___x_3285_);
lean_dec(v_numDiscrs_3282_);
lean_dec(v_numParams_3279_);
lean_dec(v_matchDeclName_3278_);
lean_dec(v_splitterName_3277_);
v_a_3367_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3374_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3374_ == 0)
{
v___x_3369_ = v___x_3332_;
v_isShared_3370_ = v_isSharedCheck_3374_;
goto v_resetjp_3368_;
}
else
{
lean_inc(v_a_3367_);
lean_dec(v___x_3332_);
v___x_3369_ = lean_box(0);
v_isShared_3370_ = v_isSharedCheck_3374_;
goto v_resetjp_3368_;
}
v_resetjp_3368_:
{
lean_object* v___x_3372_; 
if (v_isShared_3370_ == 0)
{
v___x_3372_ = v___x_3369_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v_a_3367_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
return v___x_3372_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___boxed(lean_object** _args){
lean_object* v_splitterName_3379_ = _args[0];
lean_object* v_matchDeclName_3380_ = _args[1];
lean_object* v_numParams_3381_ = _args[2];
lean_object* v_val_3382_ = _args[3];
lean_object* v___x_3383_ = _args[4];
lean_object* v_numDiscrs_3384_ = _args[5];
lean_object* v_baseName_3385_ = _args[6];
lean_object* v_a_3386_ = _args[7];
lean_object* v___x_3387_ = _args[8];
lean_object* v___x_3388_ = _args[9];
lean_object* v___x_3389_ = _args[10];
lean_object* v_uElimPos_x3f_3390_ = _args[11];
lean_object* v_discrInfos_3391_ = _args[12];
lean_object* v_overlaps_3392_ = _args[13];
lean_object* v___f_3393_ = _args[14];
lean_object* v___x_3394_ = _args[15];
lean_object* v_altInfos_3395_ = _args[16];
lean_object* v_xs_3396_ = _args[17];
lean_object* v___matchResultType_3397_ = _args[18];
lean_object* v___y_3398_ = _args[19];
lean_object* v___y_3399_ = _args[20];
lean_object* v___y_3400_ = _args[21];
lean_object* v___y_3401_ = _args[22];
lean_object* v___y_3402_ = _args[23];
_start:
{
lean_object* v_res_3403_; 
v_res_3403_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1(v_splitterName_3379_, v_matchDeclName_3380_, v_numParams_3381_, v_val_3382_, v___x_3383_, v_numDiscrs_3384_, v_baseName_3385_, v_a_3386_, v___x_3387_, v___x_3388_, v___x_3389_, v_uElimPos_x3f_3390_, v_discrInfos_3391_, v_overlaps_3392_, v___f_3393_, v___x_3394_, v_altInfos_3395_, v_xs_3396_, v___matchResultType_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_);
lean_dec(v___y_3401_);
lean_dec_ref(v___y_3400_);
lean_dec(v___y_3399_);
lean_dec_ref(v___y_3398_);
lean_dec_ref(v___matchResultType_3397_);
lean_dec_ref(v_altInfos_3395_);
lean_dec_ref(v___x_3383_);
return v_res_3403_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_3404_; 
v___x_3404_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_3404_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1(void){
_start:
{
lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3405_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__0);
v___x_3406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3405_);
return v___x_3406_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2(void){
_start:
{
lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3407_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1);
v___x_3408_ = lean_unsigned_to_nat(0u);
v___x_3409_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_3409_, 0, v___x_3408_);
lean_ctor_set(v___x_3409_, 1, v___x_3408_);
lean_ctor_set(v___x_3409_, 2, v___x_3408_);
lean_ctor_set(v___x_3409_, 3, v___x_3408_);
lean_ctor_set(v___x_3409_, 4, v___x_3407_);
lean_ctor_set(v___x_3409_, 5, v___x_3407_);
lean_ctor_set(v___x_3409_, 6, v___x_3407_);
lean_ctor_set(v___x_3409_, 7, v___x_3407_);
lean_ctor_set(v___x_3409_, 8, v___x_3407_);
lean_ctor_set(v___x_3409_, 9, v___x_3407_);
return v___x_3409_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__3(void){
_start:
{
lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; 
v___x_3410_ = lean_box(1);
v___x_3411_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__3, &l_Lean_Meta_Match_proveCondEqThm___closed__3_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__3);
v___x_3412_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__1);
v___x_3413_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3413_, 0, v___x_3412_);
lean_ctor_set(v___x_3413_, 1, v___x_3411_);
lean_ctor_set(v___x_3413_, 2, v___x_3410_);
return v___x_3413_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4(void){
_start:
{
lean_object* v___x_3414_; 
v___x_3414_ = lean_mk_string_unchecked("A private declaration `", 23, 23);
return v___x_3414_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5(void){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3415_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__4);
v___x_3416_ = l_Lean_stringToMessageData(v___x_3415_);
return v___x_3416_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6(void){
_start:
{
lean_object* v___x_3417_; 
v___x_3417_ = lean_mk_string_unchecked("` (from the current module) exists but would need to be public to access here.", 78, 78);
return v___x_3417_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__7(void){
_start:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3418_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__6);
v___x_3419_ = l_Lean_stringToMessageData(v___x_3418_);
return v___x_3419_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8(void){
_start:
{
lean_object* v___x_3420_; 
v___x_3420_ = lean_mk_string_unchecked("A public declaration `", 22, 22);
return v___x_3420_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__9(void){
_start:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; 
v___x_3421_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__8);
v___x_3422_ = l_Lean_stringToMessageData(v___x_3421_);
return v___x_3422_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10(void){
_start:
{
lean_object* v___x_3423_; 
v___x_3423_ = lean_mk_string_unchecked("` exists but is imported privately; consider adding `public import ", 67, 67);
return v___x_3423_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__11(void){
_start:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3424_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__10);
v___x_3425_ = l_Lean_stringToMessageData(v___x_3424_);
return v___x_3425_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12(void){
_start:
{
lean_object* v___x_3426_; 
v___x_3426_ = lean_mk_string_unchecked("`.", 2, 2);
return v___x_3426_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__13(void){
_start:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; 
v___x_3427_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__12);
v___x_3428_ = l_Lean_stringToMessageData(v___x_3427_);
return v___x_3428_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14(void){
_start:
{
lean_object* v___x_3429_; 
v___x_3429_ = lean_mk_string_unchecked("` (from `", 9, 9);
return v___x_3429_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__15(void){
_start:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; 
v___x_3430_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__14);
v___x_3431_ = l_Lean_stringToMessageData(v___x_3430_);
return v___x_3431_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16(void){
_start:
{
lean_object* v___x_3432_; 
v___x_3432_ = lean_mk_string_unchecked("`) exists but would need to be public to access here.", 53, 53);
return v___x_3432_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__17(void){
_start:
{
lean_object* v___x_3433_; lean_object* v___x_3434_; 
v___x_3433_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__16);
v___x_3434_ = l_Lean_stringToMessageData(v___x_3433_);
return v___x_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg(lean_object* v_msg_3435_, lean_object* v_declHint_3436_, lean_object* v___y_3437_){
_start:
{
lean_object* v___x_3439_; lean_object* v_env_3440_; uint8_t v___x_3441_; 
v___x_3439_ = lean_st_ref_get(v___y_3437_);
v_env_3440_ = lean_ctor_get(v___x_3439_, 0);
lean_inc_ref(v_env_3440_);
lean_dec(v___x_3439_);
v___x_3441_ = l_Lean_Name_isAnonymous(v_declHint_3436_);
if (v___x_3441_ == 0)
{
uint8_t v_isExporting_3442_; 
v_isExporting_3442_ = lean_ctor_get_uint8(v_env_3440_, sizeof(void*)*8);
if (v_isExporting_3442_ == 0)
{
lean_object* v___x_3443_; 
lean_dec_ref(v_env_3440_);
lean_dec(v_declHint_3436_);
v___x_3443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3443_, 0, v_msg_3435_);
return v___x_3443_;
}
else
{
lean_object* v___x_3444_; uint8_t v___x_3445_; 
lean_inc_ref(v_env_3440_);
v___x_3444_ = l_Lean_Environment_setExporting(v_env_3440_, v___x_3441_);
lean_inc(v_declHint_3436_);
lean_inc_ref(v___x_3444_);
v___x_3445_ = l_Lean_Environment_contains(v___x_3444_, v_declHint_3436_, v_isExporting_3442_);
if (v___x_3445_ == 0)
{
lean_object* v___x_3446_; 
lean_dec_ref(v___x_3444_);
lean_dec_ref(v_env_3440_);
lean_dec(v_declHint_3436_);
v___x_3446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3446_, 0, v_msg_3435_);
return v___x_3446_;
}
else
{
lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v_c_3452_; lean_object* v___x_3453_; 
v___x_3447_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__2);
v___x_3448_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__3);
v___x_3449_ = l_Lean_Options_empty;
v___x_3450_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3450_, 0, v___x_3444_);
lean_ctor_set(v___x_3450_, 1, v___x_3447_);
lean_ctor_set(v___x_3450_, 2, v___x_3448_);
lean_ctor_set(v___x_3450_, 3, v___x_3449_);
lean_inc(v_declHint_3436_);
v___x_3451_ = l_Lean_MessageData_ofConstName(v_declHint_3436_, v___x_3441_);
v_c_3452_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_3452_, 0, v___x_3450_);
lean_ctor_set(v_c_3452_, 1, v___x_3451_);
v___x_3453_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_3440_, v_declHint_3436_);
if (lean_obj_tag(v___x_3453_) == 0)
{
lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; lean_object* v___x_3459_; lean_object* v___x_3460_; 
lean_dec_ref(v_env_3440_);
lean_dec(v_declHint_3436_);
v___x_3454_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5);
v___x_3455_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3455_, 0, v___x_3454_);
lean_ctor_set(v___x_3455_, 1, v_c_3452_);
v___x_3456_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__7);
v___x_3457_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3457_, 0, v___x_3455_);
lean_ctor_set(v___x_3457_, 1, v___x_3456_);
v___x_3458_ = l_Lean_MessageData_note(v___x_3457_);
v___x_3459_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3459_, 0, v_msg_3435_);
lean_ctor_set(v___x_3459_, 1, v___x_3458_);
v___x_3460_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
return v___x_3460_;
}
else
{
lean_object* v_val_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3496_; 
v_val_3461_ = lean_ctor_get(v___x_3453_, 0);
v_isSharedCheck_3496_ = !lean_is_exclusive(v___x_3453_);
if (v_isSharedCheck_3496_ == 0)
{
v___x_3463_ = v___x_3453_;
v_isShared_3464_ = v_isSharedCheck_3496_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_val_3461_);
lean_dec(v___x_3453_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3496_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3465_; lean_object* v___x_3466_; lean_object* v___x_3467_; lean_object* v_mod_3468_; uint8_t v___x_3469_; 
v___x_3465_ = lean_box(0);
v___x_3466_ = l_Lean_Environment_header(v_env_3440_);
lean_dec_ref(v_env_3440_);
v___x_3467_ = l_Lean_EnvironmentHeader_moduleNames(v___x_3466_);
v_mod_3468_ = lean_array_get(v___x_3465_, v___x_3467_, v_val_3461_);
lean_dec(v_val_3461_);
lean_dec_ref(v___x_3467_);
v___x_3469_ = l_Lean_isPrivateName(v_declHint_3436_);
lean_dec(v_declHint_3436_);
if (v___x_3469_ == 0)
{
lean_object* v___x_3470_; lean_object* v___x_3471_; lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3481_; 
v___x_3470_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__9);
v___x_3471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3471_, 0, v___x_3470_);
lean_ctor_set(v___x_3471_, 1, v_c_3452_);
v___x_3472_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__11);
v___x_3473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3473_, 0, v___x_3471_);
lean_ctor_set(v___x_3473_, 1, v___x_3472_);
v___x_3474_ = l_Lean_MessageData_ofName(v_mod_3468_);
v___x_3475_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3473_);
lean_ctor_set(v___x_3475_, 1, v___x_3474_);
v___x_3476_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__13);
v___x_3477_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3477_, 0, v___x_3475_);
lean_ctor_set(v___x_3477_, 1, v___x_3476_);
v___x_3478_ = l_Lean_MessageData_note(v___x_3477_);
v___x_3479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3479_, 0, v_msg_3435_);
lean_ctor_set(v___x_3479_, 1, v___x_3478_);
if (v_isShared_3464_ == 0)
{
lean_ctor_set_tag(v___x_3463_, 0);
lean_ctor_set(v___x_3463_, 0, v___x_3479_);
v___x_3481_ = v___x_3463_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v___x_3479_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
else
{
lean_object* v___x_3483_; lean_object* v___x_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3494_; 
v___x_3483_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__5);
v___x_3484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3484_, 0, v___x_3483_);
lean_ctor_set(v___x_3484_, 1, v_c_3452_);
v___x_3485_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__15);
v___x_3486_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3486_, 0, v___x_3484_);
lean_ctor_set(v___x_3486_, 1, v___x_3485_);
v___x_3487_ = l_Lean_MessageData_ofName(v_mod_3468_);
v___x_3488_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3488_, 0, v___x_3486_);
lean_ctor_set(v___x_3488_, 1, v___x_3487_);
v___x_3489_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___closed__17);
v___x_3490_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3490_, 0, v___x_3488_);
lean_ctor_set(v___x_3490_, 1, v___x_3489_);
v___x_3491_ = l_Lean_MessageData_note(v___x_3490_);
v___x_3492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3492_, 0, v_msg_3435_);
lean_ctor_set(v___x_3492_, 1, v___x_3491_);
if (v_isShared_3464_ == 0)
{
lean_ctor_set_tag(v___x_3463_, 0);
lean_ctor_set(v___x_3463_, 0, v___x_3492_);
v___x_3494_ = v___x_3463_;
goto v_reusejp_3493_;
}
else
{
lean_object* v_reuseFailAlloc_3495_; 
v_reuseFailAlloc_3495_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3495_, 0, v___x_3492_);
v___x_3494_ = v_reuseFailAlloc_3495_;
goto v_reusejp_3493_;
}
v_reusejp_3493_:
{
return v___x_3494_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3497_; 
lean_dec_ref(v_env_3440_);
lean_dec(v_declHint_3436_);
v___x_3497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3497_, 0, v_msg_3435_);
return v___x_3497_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg___boxed(lean_object* v_msg_3498_, lean_object* v_declHint_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_){
_start:
{
lean_object* v_res_3502_; 
v_res_3502_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg(v_msg_3498_, v_declHint_3499_, v___y_3500_);
lean_dec(v___y_3500_);
return v_res_3502_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12(lean_object* v_msg_3503_, lean_object* v_declHint_3504_, lean_object* v___y_3505_, lean_object* v___y_3506_, lean_object* v___y_3507_, lean_object* v___y_3508_){
_start:
{
lean_object* v___x_3510_; lean_object* v_a_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3520_; 
v___x_3510_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg(v_msg_3503_, v_declHint_3504_, v___y_3508_);
v_a_3511_ = lean_ctor_get(v___x_3510_, 0);
v_isSharedCheck_3520_ = !lean_is_exclusive(v___x_3510_);
if (v_isSharedCheck_3520_ == 0)
{
v___x_3513_ = v___x_3510_;
v_isShared_3514_ = v_isSharedCheck_3520_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_a_3511_);
lean_dec(v___x_3510_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3520_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3518_; 
v___x_3515_ = l_Lean_unknownIdentifierMessageTag;
v___x_3516_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_3516_, 0, v___x_3515_);
lean_ctor_set(v___x_3516_, 1, v_a_3511_);
if (v_isShared_3514_ == 0)
{
lean_ctor_set(v___x_3513_, 0, v___x_3516_);
v___x_3518_ = v___x_3513_;
goto v_reusejp_3517_;
}
else
{
lean_object* v_reuseFailAlloc_3519_; 
v_reuseFailAlloc_3519_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3519_, 0, v___x_3516_);
v___x_3518_ = v_reuseFailAlloc_3519_;
goto v_reusejp_3517_;
}
v_reusejp_3517_:
{
return v___x_3518_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12___boxed(lean_object* v_msg_3521_, lean_object* v_declHint_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_){
_start:
{
lean_object* v_res_3528_; 
v_res_3528_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12(v_msg_3521_, v_declHint_3522_, v___y_3523_, v___y_3524_, v___y_3525_, v___y_3526_);
lean_dec(v___y_3526_);
lean_dec_ref(v___y_3525_);
lean_dec(v___y_3524_);
lean_dec_ref(v___y_3523_);
return v_res_3528_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg(lean_object* v_ref_3529_, lean_object* v_msg_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_, lean_object* v___y_3534_){
_start:
{
lean_object* v_fileName_3536_; lean_object* v_fileMap_3537_; lean_object* v_options_3538_; lean_object* v_currRecDepth_3539_; lean_object* v_maxRecDepth_3540_; lean_object* v_ref_3541_; lean_object* v_currNamespace_3542_; lean_object* v_openDecls_3543_; lean_object* v_initHeartbeats_3544_; lean_object* v_maxHeartbeats_3545_; lean_object* v_quotContext_3546_; lean_object* v_currMacroScope_3547_; uint8_t v_diag_3548_; lean_object* v_cancelTk_x3f_3549_; uint8_t v_suppressElabErrors_3550_; lean_object* v_inheritedTraceOptions_3551_; lean_object* v_ref_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; 
v_fileName_3536_ = lean_ctor_get(v___y_3533_, 0);
v_fileMap_3537_ = lean_ctor_get(v___y_3533_, 1);
v_options_3538_ = lean_ctor_get(v___y_3533_, 2);
v_currRecDepth_3539_ = lean_ctor_get(v___y_3533_, 3);
v_maxRecDepth_3540_ = lean_ctor_get(v___y_3533_, 4);
v_ref_3541_ = lean_ctor_get(v___y_3533_, 5);
v_currNamespace_3542_ = lean_ctor_get(v___y_3533_, 6);
v_openDecls_3543_ = lean_ctor_get(v___y_3533_, 7);
v_initHeartbeats_3544_ = lean_ctor_get(v___y_3533_, 8);
v_maxHeartbeats_3545_ = lean_ctor_get(v___y_3533_, 9);
v_quotContext_3546_ = lean_ctor_get(v___y_3533_, 10);
v_currMacroScope_3547_ = lean_ctor_get(v___y_3533_, 11);
v_diag_3548_ = lean_ctor_get_uint8(v___y_3533_, sizeof(void*)*14);
v_cancelTk_x3f_3549_ = lean_ctor_get(v___y_3533_, 12);
v_suppressElabErrors_3550_ = lean_ctor_get_uint8(v___y_3533_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3551_ = lean_ctor_get(v___y_3533_, 13);
v_ref_3552_ = l_Lean_replaceRef(v_ref_3529_, v_ref_3541_);
lean_inc_ref(v_inheritedTraceOptions_3551_);
lean_inc(v_cancelTk_x3f_3549_);
lean_inc(v_currMacroScope_3547_);
lean_inc(v_quotContext_3546_);
lean_inc(v_maxHeartbeats_3545_);
lean_inc(v_initHeartbeats_3544_);
lean_inc(v_openDecls_3543_);
lean_inc(v_currNamespace_3542_);
lean_inc(v_maxRecDepth_3540_);
lean_inc(v_currRecDepth_3539_);
lean_inc_ref(v_options_3538_);
lean_inc_ref(v_fileMap_3537_);
lean_inc_ref(v_fileName_3536_);
v___x_3553_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3553_, 0, v_fileName_3536_);
lean_ctor_set(v___x_3553_, 1, v_fileMap_3537_);
lean_ctor_set(v___x_3553_, 2, v_options_3538_);
lean_ctor_set(v___x_3553_, 3, v_currRecDepth_3539_);
lean_ctor_set(v___x_3553_, 4, v_maxRecDepth_3540_);
lean_ctor_set(v___x_3553_, 5, v_ref_3552_);
lean_ctor_set(v___x_3553_, 6, v_currNamespace_3542_);
lean_ctor_set(v___x_3553_, 7, v_openDecls_3543_);
lean_ctor_set(v___x_3553_, 8, v_initHeartbeats_3544_);
lean_ctor_set(v___x_3553_, 9, v_maxHeartbeats_3545_);
lean_ctor_set(v___x_3553_, 10, v_quotContext_3546_);
lean_ctor_set(v___x_3553_, 11, v_currMacroScope_3547_);
lean_ctor_set(v___x_3553_, 12, v_cancelTk_x3f_3549_);
lean_ctor_set(v___x_3553_, 13, v_inheritedTraceOptions_3551_);
lean_ctor_set_uint8(v___x_3553_, sizeof(void*)*14, v_diag_3548_);
lean_ctor_set_uint8(v___x_3553_, sizeof(void*)*14 + 1, v_suppressElabErrors_3550_);
v___x_3554_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v_msg_3530_, v___y_3531_, v___y_3532_, v___x_3553_, v___y_3534_);
lean_dec_ref(v___x_3553_);
return v___x_3554_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg___boxed(lean_object* v_ref_3555_, lean_object* v_msg_3556_, lean_object* v___y_3557_, lean_object* v___y_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_){
_start:
{
lean_object* v_res_3562_; 
v_res_3562_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg(v_ref_3555_, v_msg_3556_, v___y_3557_, v___y_3558_, v___y_3559_, v___y_3560_);
lean_dec(v___y_3560_);
lean_dec_ref(v___y_3559_);
lean_dec(v___y_3558_);
lean_dec_ref(v___y_3557_);
lean_dec(v_ref_3555_);
return v_res_3562_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg(lean_object* v_ref_3563_, lean_object* v_msg_3564_, lean_object* v_declHint_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_){
_start:
{
lean_object* v___x_3571_; lean_object* v_a_3572_; lean_object* v___x_3573_; 
v___x_3571_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12(v_msg_3564_, v_declHint_3565_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_);
v_a_3572_ = lean_ctor_get(v___x_3571_, 0);
lean_inc(v_a_3572_);
lean_dec_ref(v___x_3571_);
v___x_3573_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg(v_ref_3563_, v_a_3572_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_);
return v___x_3573_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg___boxed(lean_object* v_ref_3574_, lean_object* v_msg_3575_, lean_object* v_declHint_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
lean_object* v_res_3582_; 
v_res_3582_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg(v_ref_3574_, v_msg_3575_, v_declHint_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec(v_ref_3574_);
return v_res_3582_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3583_; 
v___x_3583_ = lean_mk_string_unchecked("Unknown constant `", 18, 18);
return v___x_3583_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__0, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__0_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__0);
v___x_3585_ = l_Lean_stringToMessageData(v___x_3584_);
return v___x_3585_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_3586_; 
v___x_3586_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_3586_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3587_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__2, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__2_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__2);
v___x_3588_ = l_Lean_stringToMessageData(v___x_3587_);
return v___x_3588_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg(lean_object* v_ref_3589_, lean_object* v_constName_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
lean_object* v___x_3596_; uint8_t v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; 
v___x_3596_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__1);
v___x_3597_ = 0;
lean_inc(v_constName_3590_);
v___x_3598_ = l_Lean_MessageData_ofConstName(v_constName_3590_, v___x_3597_);
v___x_3599_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3599_, 0, v___x_3596_);
lean_ctor_set(v___x_3599_, 1, v___x_3598_);
v___x_3600_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_3601_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3599_);
lean_ctor_set(v___x_3601_, 1, v___x_3600_);
v___x_3602_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg(v_ref_3589_, v___x_3601_, v_constName_3590_, v___y_3591_, v___y_3592_, v___y_3593_, v___y_3594_);
return v___x_3602_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___boxed(lean_object* v_ref_3603_, lean_object* v_constName_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_, lean_object* v___y_3609_){
_start:
{
lean_object* v_res_3610_; 
v_res_3610_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg(v_ref_3603_, v_constName_3604_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_);
lean_dec(v___y_3608_);
lean_dec_ref(v___y_3607_);
lean_dec(v___y_3606_);
lean_dec_ref(v___y_3605_);
lean_dec(v_ref_3603_);
return v_res_3610_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg(lean_object* v_constName_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_){
_start:
{
lean_object* v_ref_3617_; lean_object* v___x_3618_; 
v_ref_3617_ = lean_ctor_get(v___y_3614_, 5);
v___x_3618_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg(v_ref_3617_, v_constName_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_);
return v___x_3618_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg___boxed(lean_object* v_constName_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
lean_object* v_res_3625_; 
v_res_3625_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg(v_constName_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
lean_dec(v___y_3623_);
lean_dec_ref(v___y_3622_);
lean_dec(v___y_3621_);
lean_dec_ref(v___y_3620_);
return v_res_3625_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0(lean_object* v_constName_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_){
_start:
{
lean_object* v___x_3632_; lean_object* v_env_3633_; uint8_t v___x_3634_; lean_object* v___x_3635_; 
v___x_3632_ = lean_st_ref_get(v___y_3630_);
v_env_3633_ = lean_ctor_get(v___x_3632_, 0);
lean_inc_ref(v_env_3633_);
lean_dec(v___x_3632_);
v___x_3634_ = 0;
lean_inc(v_constName_3626_);
v___x_3635_ = l_Lean_Environment_find_x3f(v_env_3633_, v_constName_3626_, v___x_3634_);
if (lean_obj_tag(v___x_3635_) == 0)
{
lean_object* v___x_3636_; 
v___x_3636_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg(v_constName_3626_, v___y_3627_, v___y_3628_, v___y_3629_, v___y_3630_);
return v___x_3636_;
}
else
{
lean_object* v_val_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3644_; 
lean_dec(v_constName_3626_);
v_val_3637_ = lean_ctor_get(v___x_3635_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3635_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3639_ = v___x_3635_;
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_val_3637_);
lean_dec(v___x_3635_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3642_; 
if (v_isShared_3640_ == 0)
{
lean_ctor_set_tag(v___x_3639_, 0);
v___x_3642_ = v___x_3639_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_val_3637_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0___boxed(lean_object* v_constName_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_){
_start:
{
lean_object* v_res_3651_; 
v_res_3651_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0(v_constName_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_);
lean_dec(v___y_3649_);
lean_dec_ref(v___y_3648_);
lean_dec(v___y_3647_);
lean_dec_ref(v___y_3646_);
return v_res_3651_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2(lean_object* v_a_3652_, lean_object* v_a_3653_){
_start:
{
if (lean_obj_tag(v_a_3652_) == 0)
{
lean_object* v___x_3654_; 
v___x_3654_ = l_List_reverse___redArg(v_a_3653_);
return v___x_3654_;
}
else
{
lean_object* v_head_3655_; lean_object* v_tail_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3665_; 
v_head_3655_ = lean_ctor_get(v_a_3652_, 0);
v_tail_3656_ = lean_ctor_get(v_a_3652_, 1);
v_isSharedCheck_3665_ = !lean_is_exclusive(v_a_3652_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3658_ = v_a_3652_;
v_isShared_3659_ = v_isSharedCheck_3665_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_tail_3656_);
lean_inc(v_head_3655_);
lean_dec(v_a_3652_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3665_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3660_; lean_object* v___x_3662_; 
v___x_3660_ = l_Lean_mkLevelParam(v_head_3655_);
if (v_isShared_3659_ == 0)
{
lean_ctor_set(v___x_3658_, 1, v_a_3653_);
lean_ctor_set(v___x_3658_, 0, v___x_3660_);
v___x_3662_ = v___x_3658_;
goto v_reusejp_3661_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v___x_3660_);
lean_ctor_set(v_reuseFailAlloc_3664_, 1, v_a_3653_);
v___x_3662_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3661_;
}
v_reusejp_3661_:
{
v_a_3652_ = v_tail_3656_;
v_a_3653_ = v___x_3662_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__0(void){
_start:
{
lean_object* v___x_3666_; 
v___x_3666_ = lean_mk_string_unchecked("` is not a matcher function", 27, 27);
return v___x_3666_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1(void){
_start:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; 
v___x_3667_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__0);
v___x_3668_ = l_Lean_stringToMessageData(v___x_3667_);
return v___x_3668_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go(lean_object* v_matchDeclName_3669_, lean_object* v_baseName_3670_, lean_object* v_splitterName_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_){
_start:
{
lean_object* v___x_3677_; uint8_t v_foApprox_3678_; uint8_t v_ctxApprox_3679_; uint8_t v_quasiPatternApprox_3680_; uint8_t v_constApprox_3681_; uint8_t v_isDefEqStuckEx_3682_; uint8_t v_unificationHints_3683_; uint8_t v_proofIrrelevance_3684_; uint8_t v_assignSyntheticOpaque_3685_; uint8_t v_offsetCnstrs_3686_; uint8_t v_transparency_3687_; uint8_t v_univApprox_3688_; uint8_t v_iota_3689_; uint8_t v_beta_3690_; uint8_t v_proj_3691_; uint8_t v_zeta_3692_; uint8_t v_zetaDelta_3693_; uint8_t v_zetaUnused_3694_; uint8_t v_zetaHave_3695_; lean_object* v___x_3697_; uint8_t v_isShared_3698_; uint8_t v_isSharedCheck_3758_; 
v___x_3677_ = l_Lean_Meta_Context_config(v_a_3672_);
v_foApprox_3678_ = lean_ctor_get_uint8(v___x_3677_, 0);
v_ctxApprox_3679_ = lean_ctor_get_uint8(v___x_3677_, 1);
v_quasiPatternApprox_3680_ = lean_ctor_get_uint8(v___x_3677_, 2);
v_constApprox_3681_ = lean_ctor_get_uint8(v___x_3677_, 3);
v_isDefEqStuckEx_3682_ = lean_ctor_get_uint8(v___x_3677_, 4);
v_unificationHints_3683_ = lean_ctor_get_uint8(v___x_3677_, 5);
v_proofIrrelevance_3684_ = lean_ctor_get_uint8(v___x_3677_, 6);
v_assignSyntheticOpaque_3685_ = lean_ctor_get_uint8(v___x_3677_, 7);
v_offsetCnstrs_3686_ = lean_ctor_get_uint8(v___x_3677_, 8);
v_transparency_3687_ = lean_ctor_get_uint8(v___x_3677_, 9);
v_univApprox_3688_ = lean_ctor_get_uint8(v___x_3677_, 11);
v_iota_3689_ = lean_ctor_get_uint8(v___x_3677_, 12);
v_beta_3690_ = lean_ctor_get_uint8(v___x_3677_, 13);
v_proj_3691_ = lean_ctor_get_uint8(v___x_3677_, 14);
v_zeta_3692_ = lean_ctor_get_uint8(v___x_3677_, 15);
v_zetaDelta_3693_ = lean_ctor_get_uint8(v___x_3677_, 16);
v_zetaUnused_3694_ = lean_ctor_get_uint8(v___x_3677_, 17);
v_zetaHave_3695_ = lean_ctor_get_uint8(v___x_3677_, 18);
v_isSharedCheck_3758_ = !lean_is_exclusive(v___x_3677_);
if (v_isSharedCheck_3758_ == 0)
{
v___x_3697_ = v___x_3677_;
v_isShared_3698_ = v_isSharedCheck_3758_;
goto v_resetjp_3696_;
}
else
{
lean_dec(v___x_3677_);
v___x_3697_ = lean_box(0);
v_isShared_3698_ = v_isSharedCheck_3758_;
goto v_resetjp_3696_;
}
v_resetjp_3696_:
{
uint8_t v_trackZetaDelta_3699_; lean_object* v_zetaDeltaSet_3700_; lean_object* v_lctx_3701_; lean_object* v_localInstances_3702_; lean_object* v_defEqCtx_x3f_3703_; lean_object* v_synthPendingDepth_3704_; lean_object* v_canUnfold_x3f_3705_; uint8_t v_univApprox_3706_; uint8_t v_inTypeClassResolution_3707_; uint8_t v_cacheInferType_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3756_; 
v_trackZetaDelta_3699_ = lean_ctor_get_uint8(v_a_3672_, sizeof(void*)*7);
v_zetaDeltaSet_3700_ = lean_ctor_get(v_a_3672_, 1);
v_lctx_3701_ = lean_ctor_get(v_a_3672_, 2);
v_localInstances_3702_ = lean_ctor_get(v_a_3672_, 3);
v_defEqCtx_x3f_3703_ = lean_ctor_get(v_a_3672_, 4);
v_synthPendingDepth_3704_ = lean_ctor_get(v_a_3672_, 5);
v_canUnfold_x3f_3705_ = lean_ctor_get(v_a_3672_, 6);
v_univApprox_3706_ = lean_ctor_get_uint8(v_a_3672_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3707_ = lean_ctor_get_uint8(v_a_3672_, sizeof(void*)*7 + 2);
v_cacheInferType_3708_ = lean_ctor_get_uint8(v_a_3672_, sizeof(void*)*7 + 3);
v_isSharedCheck_3756_ = !lean_is_exclusive(v_a_3672_);
if (v_isSharedCheck_3756_ == 0)
{
lean_object* v_unused_3757_; 
v_unused_3757_ = lean_ctor_get(v_a_3672_, 0);
lean_dec(v_unused_3757_);
v___x_3710_ = v_a_3672_;
v_isShared_3711_ = v_isSharedCheck_3756_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_canUnfold_x3f_3705_);
lean_inc(v_synthPendingDepth_3704_);
lean_inc(v_defEqCtx_x3f_3703_);
lean_inc(v_localInstances_3702_);
lean_inc(v_lctx_3701_);
lean_inc(v_zetaDeltaSet_3700_);
lean_dec(v_a_3672_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3756_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
uint8_t v___x_3712_; lean_object* v___x_3714_; 
v___x_3712_ = 2;
if (v_isShared_3698_ == 0)
{
v___x_3714_ = v___x_3697_;
goto v_reusejp_3713_;
}
else
{
lean_object* v_reuseFailAlloc_3755_; 
v_reuseFailAlloc_3755_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 0, v_foApprox_3678_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 1, v_ctxApprox_3679_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 2, v_quasiPatternApprox_3680_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 3, v_constApprox_3681_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 4, v_isDefEqStuckEx_3682_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 5, v_unificationHints_3683_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 6, v_proofIrrelevance_3684_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 7, v_assignSyntheticOpaque_3685_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 8, v_offsetCnstrs_3686_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 9, v_transparency_3687_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 11, v_univApprox_3688_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 12, v_iota_3689_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 13, v_beta_3690_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 14, v_proj_3691_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 15, v_zeta_3692_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 16, v_zetaDelta_3693_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 17, v_zetaUnused_3694_);
lean_ctor_set_uint8(v_reuseFailAlloc_3755_, 18, v_zetaHave_3695_);
v___x_3714_ = v_reuseFailAlloc_3755_;
goto v_reusejp_3713_;
}
v_reusejp_3713_:
{
uint64_t v___x_3715_; lean_object* v___x_3716_; lean_object* v___x_3718_; 
lean_ctor_set_uint8(v___x_3714_, 10, v___x_3712_);
v___x_3715_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_3714_);
v___x_3716_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3716_, 0, v___x_3714_);
lean_ctor_set_uint64(v___x_3716_, sizeof(void*)*1, v___x_3715_);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 0, v___x_3716_);
v___x_3718_ = v___x_3710_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3754_; 
v_reuseFailAlloc_3754_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_3754_, 0, v___x_3716_);
lean_ctor_set(v_reuseFailAlloc_3754_, 1, v_zetaDeltaSet_3700_);
lean_ctor_set(v_reuseFailAlloc_3754_, 2, v_lctx_3701_);
lean_ctor_set(v_reuseFailAlloc_3754_, 3, v_localInstances_3702_);
lean_ctor_set(v_reuseFailAlloc_3754_, 4, v_defEqCtx_x3f_3703_);
lean_ctor_set(v_reuseFailAlloc_3754_, 5, v_synthPendingDepth_3704_);
lean_ctor_set(v_reuseFailAlloc_3754_, 6, v_canUnfold_x3f_3705_);
lean_ctor_set_uint8(v_reuseFailAlloc_3754_, sizeof(void*)*7, v_trackZetaDelta_3699_);
lean_ctor_set_uint8(v_reuseFailAlloc_3754_, sizeof(void*)*7 + 1, v_univApprox_3706_);
lean_ctor_set_uint8(v_reuseFailAlloc_3754_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3707_);
lean_ctor_set_uint8(v_reuseFailAlloc_3754_, sizeof(void*)*7 + 3, v_cacheInferType_3708_);
v___x_3718_ = v_reuseFailAlloc_3754_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
lean_object* v___x_3719_; 
lean_inc(v_matchDeclName_3669_);
v___x_3719_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0(v_matchDeclName_3669_, v___x_3718_, v_a_3673_, v_a_3674_, v_a_3675_);
if (lean_obj_tag(v___x_3719_) == 0)
{
lean_object* v_a_3720_; lean_object* v___x_3721_; lean_object* v_a_3722_; 
v_a_3720_ = lean_ctor_get(v___x_3719_, 0);
lean_inc(v_a_3720_);
lean_dec_ref(v___x_3719_);
lean_inc(v_matchDeclName_3669_);
v___x_3721_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___redArg(v_matchDeclName_3669_, v_a_3675_);
v_a_3722_ = lean_ctor_get(v___x_3721_, 0);
lean_inc(v_a_3722_);
lean_dec_ref(v___x_3721_);
if (lean_obj_tag(v_a_3722_) == 1)
{
lean_object* v_val_3723_; lean_object* v_numParams_3724_; lean_object* v_numDiscrs_3725_; lean_object* v_altInfos_3726_; lean_object* v_uElimPos_x3f_3727_; lean_object* v_discrInfos_3728_; lean_object* v_overlaps_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___f_3734_; lean_object* v___x_3735_; lean_object* v___x_3736_; lean_object* v___f_3737_; uint8_t v___x_3738_; lean_object* v___x_3739_; 
v_val_3723_ = lean_ctor_get(v_a_3722_, 0);
lean_inc(v_val_3723_);
lean_dec_ref(v_a_3722_);
v_numParams_3724_ = lean_ctor_get(v_val_3723_, 0);
lean_inc(v_numParams_3724_);
v_numDiscrs_3725_ = lean_ctor_get(v_val_3723_, 1);
lean_inc(v_numDiscrs_3725_);
v_altInfos_3726_ = lean_ctor_get(v_val_3723_, 2);
lean_inc_ref(v_altInfos_3726_);
v_uElimPos_x3f_3727_ = lean_ctor_get(v_val_3723_, 3);
lean_inc(v_uElimPos_x3f_3727_);
v_discrInfos_3728_ = lean_ctor_get(v_val_3723_, 4);
lean_inc_ref(v_discrInfos_3728_);
v_overlaps_3729_ = lean_ctor_get(v_val_3723_, 5);
lean_inc_ref_n(v_overlaps_3729_, 2);
v___x_3730_ = l_Lean_instInhabitedExpr;
v___x_3731_ = l_Lean_ConstantInfo_levelParams(v_a_3720_);
v___x_3732_ = lean_box(0);
lean_inc(v___x_3731_);
v___x_3733_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2(v___x_3731_, v___x_3732_);
lean_inc(v_splitterName_3671_);
v___f_3734_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3734_, 0, v_overlaps_3729_);
lean_closure_set(v___f_3734_, 1, v_splitterName_3671_);
v___x_3735_ = l_Lean_Meta_Match_getNumEqsFromDiscrInfos(v_discrInfos_3728_);
v___x_3736_ = l_Lean_ConstantInfo_type(v_a_3720_);
lean_inc_ref(v___x_3736_);
v___f_3737_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___boxed), 24, 17);
lean_closure_set(v___f_3737_, 0, v_splitterName_3671_);
lean_closure_set(v___f_3737_, 1, v_matchDeclName_3669_);
lean_closure_set(v___f_3737_, 2, v_numParams_3724_);
lean_closure_set(v___f_3737_, 3, v_val_3723_);
lean_closure_set(v___f_3737_, 4, v___x_3730_);
lean_closure_set(v___f_3737_, 5, v_numDiscrs_3725_);
lean_closure_set(v___f_3737_, 6, v_baseName_3670_);
lean_closure_set(v___f_3737_, 7, v_a_3720_);
lean_closure_set(v___f_3737_, 8, v___x_3733_);
lean_closure_set(v___f_3737_, 9, v___x_3731_);
lean_closure_set(v___f_3737_, 10, v___x_3735_);
lean_closure_set(v___f_3737_, 11, v_uElimPos_x3f_3727_);
lean_closure_set(v___f_3737_, 12, v_discrInfos_3728_);
lean_closure_set(v___f_3737_, 13, v_overlaps_3729_);
lean_closure_set(v___f_3737_, 14, v___f_3734_);
lean_closure_set(v___f_3737_, 15, v___x_3736_);
lean_closure_set(v___f_3737_, 16, v_altInfos_3726_);
v___x_3738_ = 0;
v___x_3739_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(v___x_3736_, v___f_3737_, v___x_3738_, v___x_3738_, v___x_3718_, v_a_3673_, v_a_3674_, v_a_3675_);
lean_dec_ref(v___x_3718_);
return v___x_3739_;
}
else
{
lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___x_3745_; 
lean_dec(v_a_3722_);
lean_dec(v_a_3720_);
lean_dec(v_splitterName_3671_);
lean_dec(v_baseName_3670_);
v___x_3740_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_3741_ = l_Lean_MessageData_ofName(v_matchDeclName_3669_);
v___x_3742_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3740_);
lean_ctor_set(v___x_3742_, 1, v___x_3741_);
v___x_3743_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1);
v___x_3744_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3744_, 0, v___x_3742_);
lean_ctor_set(v___x_3744_, 1, v___x_3743_);
v___x_3745_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_3744_, v___x_3718_, v_a_3673_, v_a_3674_, v_a_3675_);
lean_dec_ref(v___x_3718_);
return v___x_3745_;
}
}
else
{
lean_object* v_a_3746_; lean_object* v___x_3748_; uint8_t v_isShared_3749_; uint8_t v_isSharedCheck_3753_; 
lean_dec_ref(v___x_3718_);
lean_dec(v_splitterName_3671_);
lean_dec(v_baseName_3670_);
lean_dec(v_matchDeclName_3669_);
v_a_3746_ = lean_ctor_get(v___x_3719_, 0);
v_isSharedCheck_3753_ = !lean_is_exclusive(v___x_3719_);
if (v_isSharedCheck_3753_ == 0)
{
v___x_3748_ = v___x_3719_;
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
else
{
lean_inc(v_a_3746_);
lean_dec(v___x_3719_);
v___x_3748_ = lean_box(0);
v_isShared_3749_ = v_isSharedCheck_3753_;
goto v_resetjp_3747_;
}
v_resetjp_3747_:
{
lean_object* v___x_3751_; 
if (v_isShared_3749_ == 0)
{
v___x_3751_ = v___x_3748_;
goto v_reusejp_3750_;
}
else
{
lean_object* v_reuseFailAlloc_3752_; 
v_reuseFailAlloc_3752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3752_, 0, v_a_3746_);
v___x_3751_ = v_reuseFailAlloc_3752_;
goto v_reusejp_3750_;
}
v_reusejp_3750_:
{
return v___x_3751_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___boxed(lean_object* v_matchDeclName_3759_, lean_object* v_baseName_3760_, lean_object* v_splitterName_3761_, lean_object* v_a_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_){
_start:
{
lean_object* v_res_3767_; 
v_res_3767_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go(v_matchDeclName_3759_, v_baseName_3760_, v_splitterName_3761_, v_a_3762_, v_a_3763_, v_a_3764_, v_a_3765_);
lean_dec(v_a_3765_);
lean_dec_ref(v_a_3764_);
lean_dec(v_a_3763_);
return v_res_3767_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4(lean_object* v_xs_3768_, lean_object* v_ys_3769_, lean_object* v_hsz_3770_, lean_object* v_x_3771_, lean_object* v_x_3772_){
_start:
{
uint8_t v___x_3773_; 
v___x_3773_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___redArg(v_xs_3768_, v_ys_3769_, v_x_3771_);
return v___x_3773_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4___boxed(lean_object* v_xs_3774_, lean_object* v_ys_3775_, lean_object* v_hsz_3776_, lean_object* v_x_3777_, lean_object* v_x_3778_){
_start:
{
uint8_t v_res_3779_; lean_object* v_r_3780_; 
v_res_3779_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__4(v_xs_3774_, v_ys_3775_, v_hsz_3776_, v_x_3777_, v_x_3778_);
lean_dec_ref(v_ys_3775_);
lean_dec_ref(v_xs_3774_);
v_r_3780_ = lean_box(v_res_3779_);
return v_r_3780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6(lean_object* v_inst_3781_, lean_object* v_R_3782_, lean_object* v_a_3783_, lean_object* v_b_3784_){
_start:
{
lean_object* v___x_3785_; 
v___x_3785_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6___redArg(v_a_3783_, v_b_3784_);
return v___x_3785_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8(lean_object* v_upperBound_3786_, lean_object* v_val_3787_, lean_object* v_baseName_3788_, lean_object* v___x_3789_, lean_object* v_a_3790_, lean_object* v___x_3791_, lean_object* v___x_3792_, lean_object* v___x_3793_, lean_object* v_matchDeclName_3794_, lean_object* v___x_3795_, lean_object* v___x_3796_, lean_object* v___x_3797_, lean_object* v_inst_3798_, lean_object* v_R_3799_, lean_object* v_a_3800_, lean_object* v_b_3801_, lean_object* v_c_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_){
_start:
{
lean_object* v___x_3808_; 
v___x_3808_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg(v_upperBound_3786_, v_val_3787_, v_baseName_3788_, v___x_3789_, v_a_3790_, v___x_3791_, v___x_3792_, v___x_3793_, v_matchDeclName_3794_, v___x_3795_, v___x_3796_, v___x_3797_, v_a_3800_, v_b_3801_, v___y_3803_, v___y_3804_, v___y_3805_, v___y_3806_);
return v___x_3808_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___boxed(lean_object** _args){
lean_object* v_upperBound_3809_ = _args[0];
lean_object* v_val_3810_ = _args[1];
lean_object* v_baseName_3811_ = _args[2];
lean_object* v___x_3812_ = _args[3];
lean_object* v_a_3813_ = _args[4];
lean_object* v___x_3814_ = _args[5];
lean_object* v___x_3815_ = _args[6];
lean_object* v___x_3816_ = _args[7];
lean_object* v_matchDeclName_3817_ = _args[8];
lean_object* v___x_3818_ = _args[9];
lean_object* v___x_3819_ = _args[10];
lean_object* v___x_3820_ = _args[11];
lean_object* v_inst_3821_ = _args[12];
lean_object* v_R_3822_ = _args[13];
lean_object* v_a_3823_ = _args[14];
lean_object* v_b_3824_ = _args[15];
lean_object* v_c_3825_ = _args[16];
lean_object* v___y_3826_ = _args[17];
lean_object* v___y_3827_ = _args[18];
lean_object* v___y_3828_ = _args[19];
lean_object* v___y_3829_ = _args[20];
lean_object* v___y_3830_ = _args[21];
_start:
{
lean_object* v_res_3831_; 
v_res_3831_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8(v_upperBound_3809_, v_val_3810_, v_baseName_3811_, v___x_3812_, v_a_3813_, v___x_3814_, v___x_3815_, v___x_3816_, v_matchDeclName_3817_, v___x_3818_, v___x_3819_, v___x_3820_, v_inst_3821_, v_R_3822_, v_a_3823_, v_b_3824_, v_c_3825_, v___y_3826_, v___y_3827_, v___y_3828_, v___y_3829_);
lean_dec(v___y_3829_);
lean_dec_ref(v___y_3828_);
lean_dec(v___y_3827_);
lean_dec_ref(v___y_3826_);
lean_dec(v_upperBound_3809_);
return v_res_3831_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0(lean_object* v_00_u03b1_3832_, lean_object* v_constName_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_){
_start:
{
lean_object* v___x_3839_; 
v___x_3839_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___redArg(v_constName_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_);
return v___x_3839_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3840_, lean_object* v_constName_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_){
_start:
{
lean_object* v_res_3847_; 
v_res_3847_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0(v_00_u03b1_3840_, v_constName_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
lean_dec(v___y_3845_);
lean_dec_ref(v___y_3844_);
lean_dec(v___y_3843_);
lean_dec_ref(v___y_3842_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4(lean_object* v_00_u03b1_3848_, lean_object* v_ref_3849_, lean_object* v_constName_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_){
_start:
{
lean_object* v___x_3856_; 
v___x_3856_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg(v_ref_3849_, v_constName_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_);
return v___x_3856_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___boxed(lean_object* v_00_u03b1_3857_, lean_object* v_ref_3858_, lean_object* v_constName_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4(v_00_u03b1_3857_, v_ref_3858_, v_constName_3859_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
lean_dec(v___y_3861_);
lean_dec_ref(v___y_3860_);
lean_dec(v_ref_3858_);
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11(lean_object* v_00_u03b1_3866_, lean_object* v_ref_3867_, lean_object* v_msg_3868_, lean_object* v_declHint_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_){
_start:
{
lean_object* v___x_3875_; 
v___x_3875_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___redArg(v_ref_3867_, v_msg_3868_, v_declHint_3869_, v___y_3870_, v___y_3871_, v___y_3872_, v___y_3873_);
return v___x_3875_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11___boxed(lean_object* v_00_u03b1_3876_, lean_object* v_ref_3877_, lean_object* v_msg_3878_, lean_object* v_declHint_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_){
_start:
{
lean_object* v_res_3885_; 
v_res_3885_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11(v_00_u03b1_3876_, v_ref_3877_, v_msg_3878_, v_declHint_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_);
lean_dec(v___y_3883_);
lean_dec_ref(v___y_3882_);
lean_dec(v___y_3881_);
lean_dec_ref(v___y_3880_);
lean_dec(v_ref_3877_);
return v_res_3885_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13(lean_object* v_msg_3886_, lean_object* v_declHint_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_){
_start:
{
lean_object* v___x_3893_; 
v___x_3893_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___redArg(v_msg_3886_, v_declHint_3887_, v___y_3891_);
return v___x_3893_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13___boxed(lean_object* v_msg_3894_, lean_object* v_declHint_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__12_spec__13(v_msg_3894_, v_declHint_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_);
lean_dec(v___y_3899_);
lean_dec_ref(v___y_3898_);
lean_dec(v___y_3897_);
lean_dec_ref(v___y_3896_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13(lean_object* v_00_u03b1_3902_, lean_object* v_ref_3903_, lean_object* v_msg_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_){
_start:
{
lean_object* v___x_3910_; 
v___x_3910_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___redArg(v_ref_3903_, v_msg_3904_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_);
return v___x_3910_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13___boxed(lean_object* v_00_u03b1_3911_, lean_object* v_ref_3912_, lean_object* v_msg_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_){
_start:
{
lean_object* v_res_3919_; 
v_res_3919_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4_spec__11_spec__13(v_00_u03b1_3911_, v_ref_3912_, v_msg_3913_, v___y_3914_, v___y_3915_, v___y_3916_, v___y_3917_);
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
lean_dec(v___y_3915_);
lean_dec_ref(v___y_3914_);
lean_dec(v_ref_3912_);
return v_res_3919_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_3920_, lean_object* v_vals_3921_, lean_object* v_i_3922_, lean_object* v_k_3923_){
_start:
{
lean_object* v___x_3924_; uint8_t v___x_3925_; 
v___x_3924_ = lean_array_get_size(v_keys_3920_);
v___x_3925_ = lean_nat_dec_lt(v_i_3922_, v___x_3924_);
if (v___x_3925_ == 0)
{
lean_object* v___x_3926_; 
lean_dec(v_i_3922_);
v___x_3926_ = lean_box(0);
return v___x_3926_;
}
else
{
lean_object* v_k_x27_3927_; uint8_t v___x_3928_; 
v_k_x27_3927_ = lean_array_fget_borrowed(v_keys_3920_, v_i_3922_);
v___x_3928_ = lean_name_eq(v_k_3923_, v_k_x27_3927_);
if (v___x_3928_ == 0)
{
lean_object* v___x_3929_; lean_object* v___x_3930_; 
v___x_3929_ = lean_unsigned_to_nat(1u);
v___x_3930_ = lean_nat_add(v_i_3922_, v___x_3929_);
lean_dec(v_i_3922_);
v_i_3922_ = v___x_3930_;
goto _start;
}
else
{
lean_object* v___x_3932_; lean_object* v___x_3933_; 
v___x_3932_ = lean_array_fget_borrowed(v_vals_3921_, v_i_3922_);
lean_dec(v_i_3922_);
lean_inc(v___x_3932_);
v___x_3933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3933_, 0, v___x_3932_);
return v___x_3933_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_3934_, lean_object* v_vals_3935_, lean_object* v_i_3936_, lean_object* v_k_3937_){
_start:
{
lean_object* v_res_3938_; 
v_res_3938_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg(v_keys_3934_, v_vals_3935_, v_i_3936_, v_k_3937_);
lean_dec(v_k_3937_);
lean_dec_ref(v_vals_3935_);
lean_dec_ref(v_keys_3934_);
return v_res_3938_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_3939_; size_t v___x_3940_; size_t v___x_3941_; 
v___x_3939_ = ((size_t)5ULL);
v___x_3940_ = ((size_t)1ULL);
v___x_3941_ = lean_usize_shift_left(v___x_3940_, v___x_3939_);
return v___x_3941_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_3942_; size_t v___x_3943_; size_t v___x_3944_; 
v___x_3942_ = ((size_t)1ULL);
v___x_3943_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__0);
v___x_3944_ = lean_usize_sub(v___x_3943_, v___x_3942_);
return v___x_3944_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg(lean_object* v_x_3945_, size_t v_x_3946_, lean_object* v_x_3947_){
_start:
{
if (lean_obj_tag(v_x_3945_) == 0)
{
lean_object* v_es_3948_; lean_object* v___x_3949_; size_t v___x_3950_; size_t v___x_3951_; size_t v___x_3952_; lean_object* v_j_3953_; lean_object* v___x_3954_; 
v_es_3948_ = lean_ctor_get(v_x_3945_, 0);
v___x_3949_ = lean_box(2);
v___x_3950_ = ((size_t)5ULL);
v___x_3951_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___closed__1);
v___x_3952_ = lean_usize_land(v_x_3946_, v___x_3951_);
v_j_3953_ = lean_usize_to_nat(v___x_3952_);
v___x_3954_ = lean_array_get_borrowed(v___x_3949_, v_es_3948_, v_j_3953_);
lean_dec(v_j_3953_);
switch(lean_obj_tag(v___x_3954_))
{
case 0:
{
lean_object* v_key_3955_; lean_object* v_val_3956_; uint8_t v___x_3957_; 
v_key_3955_ = lean_ctor_get(v___x_3954_, 0);
v_val_3956_ = lean_ctor_get(v___x_3954_, 1);
v___x_3957_ = lean_name_eq(v_x_3947_, v_key_3955_);
if (v___x_3957_ == 0)
{
lean_object* v___x_3958_; 
v___x_3958_ = lean_box(0);
return v___x_3958_;
}
else
{
lean_object* v___x_3959_; 
lean_inc(v_val_3956_);
v___x_3959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3959_, 0, v_val_3956_);
return v___x_3959_;
}
}
case 1:
{
lean_object* v_node_3960_; size_t v___x_3961_; 
v_node_3960_ = lean_ctor_get(v___x_3954_, 0);
v___x_3961_ = lean_usize_shift_right(v_x_3946_, v___x_3950_);
v_x_3945_ = v_node_3960_;
v_x_3946_ = v___x_3961_;
goto _start;
}
default: 
{
lean_object* v___x_3963_; 
v___x_3963_ = lean_box(0);
return v___x_3963_;
}
}
}
else
{
lean_object* v_ks_3964_; lean_object* v_vs_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; 
v_ks_3964_ = lean_ctor_get(v_x_3945_, 0);
v_vs_3965_ = lean_ctor_get(v_x_3945_, 1);
v___x_3966_ = lean_unsigned_to_nat(0u);
v___x_3967_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg(v_ks_3964_, v_vs_3965_, v___x_3966_, v_x_3947_);
return v___x_3967_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg___boxed(lean_object* v_x_3968_, lean_object* v_x_3969_, lean_object* v_x_3970_){
_start:
{
size_t v_x_718__boxed_3971_; lean_object* v_res_3972_; 
v_x_718__boxed_3971_ = lean_unbox_usize(v_x_3969_);
lean_dec(v_x_3969_);
v_res_3972_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg(v_x_3968_, v_x_718__boxed_3971_, v_x_3970_);
lean_dec(v_x_3970_);
lean_dec_ref(v_x_3968_);
return v_res_3972_;
}
}
static uint64_t _init_l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_3973_; uint64_t v___x_3974_; 
v___x_3973_ = lean_unsigned_to_nat(1723u);
v___x_3974_ = lean_uint64_of_nat(v___x_3973_);
return v___x_3974_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg(lean_object* v_x_3975_, lean_object* v_x_3976_){
_start:
{
uint64_t v___y_3978_; 
if (lean_obj_tag(v_x_3976_) == 0)
{
uint64_t v___x_3981_; 
v___x_3981_ = lean_uint64_once(&l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg___closed__0);
v___y_3978_ = v___x_3981_;
goto v___jp_3977_;
}
else
{
uint64_t v_hash_3982_; 
v_hash_3982_ = lean_ctor_get_uint64(v_x_3976_, sizeof(void*)*2);
v___y_3978_ = v_hash_3982_;
goto v___jp_3977_;
}
v___jp_3977_:
{
size_t v___x_3979_; lean_object* v___x_3980_; 
v___x_3979_ = lean_uint64_to_usize(v___y_3978_);
v___x_3980_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg(v_x_3975_, v___x_3979_, v_x_3976_);
return v___x_3980_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg___boxed(lean_object* v_x_3983_, lean_object* v_x_3984_){
_start:
{
lean_object* v_res_3985_; 
v_res_3985_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg(v_x_3983_, v_x_3984_);
lean_dec(v_x_3984_);
lean_dec_ref(v_x_3983_);
return v_res_3985_;
}
}
static lean_object* _init_l_Lean_Meta_Match_getEquationsForImpl___closed__0(void){
_start:
{
lean_object* v___x_3986_; 
v___x_3986_ = lean_mk_string_unchecked("splitter", 8, 8);
return v___x_3986_;
}
}
static lean_object* _init_l_Lean_Meta_Match_getEquationsForImpl___closed__1(void){
_start:
{
lean_object* v___x_3987_; lean_object* v___x_3988_; 
v___x_3987_ = lean_obj_once(&l_Lean_Meta_Match_getEquationsForImpl___closed__0, &l_Lean_Meta_Match_getEquationsForImpl___closed__0_once, _init_l_Lean_Meta_Match_getEquationsForImpl___closed__0);
v___x_3988_ = l_Lean_Name_mkStr1(v___x_3987_);
return v___x_3988_;
}
}
static lean_object* _init_l_Lean_Meta_Match_getEquationsForImpl___closed__2(void){
_start:
{
uint8_t v___x_3989_; lean_object* v___x_3990_; 
v___x_3989_ = 1;
v___x_3990_ = lean_alloc_ctor(3, 0, 1);
lean_ctor_set_uint8(v___x_3990_, 0, v___x_3989_);
return v___x_3990_;
}
}
static lean_object* _init_l_Lean_Meta_Match_getEquationsForImpl___closed__3(void){
_start:
{
lean_object* v___x_3991_; 
v___x_3991_ = lean_mk_string_unchecked("failed to retrieve match equations for `", 40, 40);
return v___x_3991_;
}
}
static lean_object* _init_l_Lean_Meta_Match_getEquationsForImpl___closed__4(void){
_start:
{
lean_object* v___x_3992_; lean_object* v___x_3993_; 
v___x_3992_ = lean_obj_once(&l_Lean_Meta_Match_getEquationsForImpl___closed__3, &l_Lean_Meta_Match_getEquationsForImpl___closed__3_once, _init_l_Lean_Meta_Match_getEquationsForImpl___closed__3);
v___x_3993_ = l_Lean_stringToMessageData(v___x_3992_);
return v___x_3993_;
}
}
static lean_object* _init_l_Lean_Meta_Match_getEquationsForImpl___closed__5(void){
_start:
{
lean_object* v___x_3994_; 
v___x_3994_ = lean_mk_string_unchecked("` after realization", 19, 19);
return v___x_3994_;
}
}
static lean_object* _init_l_Lean_Meta_Match_getEquationsForImpl___closed__6(void){
_start:
{
lean_object* v___x_3995_; lean_object* v___x_3996_; 
v___x_3995_ = lean_obj_once(&l_Lean_Meta_Match_getEquationsForImpl___closed__5, &l_Lean_Meta_Match_getEquationsForImpl___closed__5_once, _init_l_Lean_Meta_Match_getEquationsForImpl___closed__5);
v___x_3996_ = l_Lean_stringToMessageData(v___x_3995_);
return v___x_3996_;
}
}
LEAN_EXPORT lean_object* lean_get_match_equations_for(lean_object* v_matchDeclName_3997_, lean_object* v_a_3998_, lean_object* v_a_3999_, lean_object* v_a_4000_, lean_object* v_a_4001_){
_start:
{
lean_object* v___x_4003_; lean_object* v_env_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; 
v___x_4003_ = lean_st_ref_get(v_a_4001_);
v_env_4004_ = lean_ctor_get(v___x_4003_, 0);
lean_inc_ref(v_env_4004_);
lean_dec(v___x_4003_);
lean_inc_n(v_matchDeclName_3997_, 3);
v___x_4005_ = l_Lean_mkPrivateName(v_env_4004_, v_matchDeclName_3997_);
lean_dec_ref(v_env_4004_);
v___x_4006_ = lean_obj_once(&l_Lean_Meta_Match_getEquationsForImpl___closed__1, &l_Lean_Meta_Match_getEquationsForImpl___closed__1_once, _init_l_Lean_Meta_Match_getEquationsForImpl___closed__1);
lean_inc(v___x_4005_);
v___x_4007_ = l_Lean_Name_append(v___x_4005_, v___x_4006_);
lean_inc_n(v___x_4007_, 2);
v___x_4008_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___boxed), 8, 3);
lean_closure_set(v___x_4008_, 0, v_matchDeclName_3997_);
lean_closure_set(v___x_4008_, 1, v___x_4005_);
lean_closure_set(v___x_4008_, 2, v___x_4007_);
v___x_4009_ = l_Lean_Meta_realizeConst(v_matchDeclName_3997_, v___x_4007_, v___x_4008_, v_a_3998_, v_a_3999_, v_a_4000_, v_a_4001_);
if (lean_obj_tag(v___x_4009_) == 0)
{
lean_object* v___x_4011_; uint8_t v_isShared_4012_; uint8_t v_isSharedCheck_4038_; 
v_isSharedCheck_4038_ = !lean_is_exclusive(v___x_4009_);
if (v_isSharedCheck_4038_ == 0)
{
lean_object* v_unused_4039_; 
v_unused_4039_ = lean_ctor_get(v___x_4009_, 0);
lean_dec(v_unused_4039_);
v___x_4011_ = v___x_4009_;
v_isShared_4012_ = v_isSharedCheck_4038_;
goto v_resetjp_4010_;
}
else
{
lean_dec(v___x_4009_);
v___x_4011_ = lean_box(0);
v_isShared_4012_ = v_isSharedCheck_4038_;
goto v_resetjp_4010_;
}
v_resetjp_4010_:
{
lean_object* v___x_4013_; lean_object* v_env_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v_map_4019_; lean_object* v___x_4021_; uint8_t v_isShared_4022_; uint8_t v_isSharedCheck_4036_; 
v___x_4013_ = lean_st_ref_get(v_a_4001_);
v_env_4014_ = lean_ctor_get(v___x_4013_, 0);
lean_inc_ref(v_env_4014_);
lean_dec(v___x_4013_);
v___x_4015_ = l_Lean_Meta_Match_instInhabitedMatchEqnsExtState_default;
v___x_4016_ = l_Lean_Meta_Match_matchEqnsExt;
v___x_4017_ = lean_obj_once(&l_Lean_Meta_Match_getEquationsForImpl___closed__2, &l_Lean_Meta_Match_getEquationsForImpl___closed__2_once, _init_l_Lean_Meta_Match_getEquationsForImpl___closed__2);
v___x_4018_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_4015_, v___x_4016_, v_env_4014_, v___x_4017_, v___x_4007_);
v_map_4019_ = lean_ctor_get(v___x_4018_, 0);
v_isSharedCheck_4036_ = !lean_is_exclusive(v___x_4018_);
if (v_isSharedCheck_4036_ == 0)
{
lean_object* v_unused_4037_; 
v_unused_4037_ = lean_ctor_get(v___x_4018_, 1);
lean_dec(v_unused_4037_);
v___x_4021_ = v___x_4018_;
v_isShared_4022_ = v_isSharedCheck_4036_;
goto v_resetjp_4020_;
}
else
{
lean_inc(v_map_4019_);
lean_dec(v___x_4018_);
v___x_4021_ = lean_box(0);
v_isShared_4022_ = v_isSharedCheck_4036_;
goto v_resetjp_4020_;
}
v_resetjp_4020_:
{
lean_object* v___x_4023_; 
v___x_4023_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg(v_map_4019_, v_matchDeclName_3997_);
lean_dec_ref(v_map_4019_);
if (lean_obj_tag(v___x_4023_) == 0)
{
lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4027_; 
lean_del_object(v___x_4011_);
v___x_4024_ = lean_obj_once(&l_Lean_Meta_Match_getEquationsForImpl___closed__4, &l_Lean_Meta_Match_getEquationsForImpl___closed__4_once, _init_l_Lean_Meta_Match_getEquationsForImpl___closed__4);
v___x_4025_ = l_Lean_MessageData_ofName(v_matchDeclName_3997_);
if (v_isShared_4022_ == 0)
{
lean_ctor_set_tag(v___x_4021_, 7);
lean_ctor_set(v___x_4021_, 1, v___x_4025_);
lean_ctor_set(v___x_4021_, 0, v___x_4024_);
v___x_4027_ = v___x_4021_;
goto v_reusejp_4026_;
}
else
{
lean_object* v_reuseFailAlloc_4031_; 
v_reuseFailAlloc_4031_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4031_, 0, v___x_4024_);
lean_ctor_set(v_reuseFailAlloc_4031_, 1, v___x_4025_);
v___x_4027_ = v_reuseFailAlloc_4031_;
goto v_reusejp_4026_;
}
v_reusejp_4026_:
{
lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; 
v___x_4028_ = lean_obj_once(&l_Lean_Meta_Match_getEquationsForImpl___closed__6, &l_Lean_Meta_Match_getEquationsForImpl___closed__6_once, _init_l_Lean_Meta_Match_getEquationsForImpl___closed__6);
v___x_4029_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4029_, 0, v___x_4027_);
lean_ctor_set(v___x_4029_, 1, v___x_4028_);
v___x_4030_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_4029_, v_a_3998_, v_a_3999_, v_a_4000_, v_a_4001_);
lean_dec(v_a_4001_);
lean_dec_ref(v_a_4000_);
lean_dec(v_a_3999_);
lean_dec_ref(v_a_3998_);
return v___x_4030_;
}
}
else
{
lean_object* v_val_4032_; lean_object* v___x_4034_; 
lean_del_object(v___x_4021_);
lean_dec(v_a_4001_);
lean_dec_ref(v_a_4000_);
lean_dec(v_a_3999_);
lean_dec_ref(v_a_3998_);
lean_dec(v_matchDeclName_3997_);
v_val_4032_ = lean_ctor_get(v___x_4023_, 0);
lean_inc(v_val_4032_);
lean_dec_ref(v___x_4023_);
if (v_isShared_4012_ == 0)
{
lean_ctor_set(v___x_4011_, 0, v_val_4032_);
v___x_4034_ = v___x_4011_;
goto v_reusejp_4033_;
}
else
{
lean_object* v_reuseFailAlloc_4035_; 
v_reuseFailAlloc_4035_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4035_, 0, v_val_4032_);
v___x_4034_ = v_reuseFailAlloc_4035_;
goto v_reusejp_4033_;
}
v_reusejp_4033_:
{
return v___x_4034_;
}
}
}
}
}
else
{
lean_object* v_a_4040_; lean_object* v___x_4042_; uint8_t v_isShared_4043_; uint8_t v_isSharedCheck_4047_; 
lean_dec(v___x_4007_);
lean_dec(v_a_4001_);
lean_dec_ref(v_a_4000_);
lean_dec(v_a_3999_);
lean_dec_ref(v_a_3998_);
lean_dec(v_matchDeclName_3997_);
v_a_4040_ = lean_ctor_get(v___x_4009_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v___x_4009_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4042_ = v___x_4009_;
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
else
{
lean_inc(v_a_4040_);
lean_dec(v___x_4009_);
v___x_4042_ = lean_box(0);
v_isShared_4043_ = v_isSharedCheck_4047_;
goto v_resetjp_4041_;
}
v_resetjp_4041_:
{
lean_object* v___x_4045_; 
if (v_isShared_4043_ == 0)
{
v___x_4045_ = v___x_4042_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_a_4040_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_getEquationsForImpl___boxed(lean_object* v_matchDeclName_4048_, lean_object* v_a_4049_, lean_object* v_a_4050_, lean_object* v_a_4051_, lean_object* v_a_4052_, lean_object* v_a_4053_){
_start:
{
lean_object* v_res_4054_; 
v_res_4054_ = lean_get_match_equations_for(v_matchDeclName_4048_, v_a_4049_, v_a_4050_, v_a_4051_, v_a_4052_);
return v_res_4054_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0(lean_object* v_00_u03b2_4055_, lean_object* v_x_4056_, lean_object* v_x_4057_){
_start:
{
lean_object* v___x_4058_; 
v___x_4058_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___redArg(v_x_4056_, v_x_4057_);
return v___x_4058_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0___boxed(lean_object* v_00_u03b2_4059_, lean_object* v_x_4060_, lean_object* v_x_4061_){
_start:
{
lean_object* v_res_4062_; 
v_res_4062_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0(v_00_u03b2_4059_, v_x_4060_, v_x_4061_);
lean_dec(v_x_4061_);
lean_dec_ref(v_x_4060_);
return v_res_4062_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0(lean_object* v_00_u03b2_4063_, lean_object* v_x_4064_, size_t v_x_4065_, lean_object* v_x_4066_){
_start:
{
lean_object* v___x_4067_; 
v___x_4067_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___redArg(v_x_4064_, v_x_4065_, v_x_4066_);
return v___x_4067_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4068_, lean_object* v_x_4069_, lean_object* v_x_4070_, lean_object* v_x_4071_){
_start:
{
size_t v_x_922__boxed_4072_; lean_object* v_res_4073_; 
v_x_922__boxed_4072_ = lean_unbox_usize(v_x_4070_);
lean_dec(v_x_4070_);
v_res_4073_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0(v_00_u03b2_4068_, v_x_4069_, v_x_922__boxed_4072_, v_x_4071_);
lean_dec(v_x_4071_);
lean_dec_ref(v_x_4069_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_4074_, lean_object* v_keys_4075_, lean_object* v_vals_4076_, lean_object* v_heq_4077_, lean_object* v_i_4078_, lean_object* v_k_4079_){
_start:
{
lean_object* v___x_4080_; 
v___x_4080_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___redArg(v_keys_4075_, v_vals_4076_, v_i_4078_, v_k_4079_);
return v___x_4080_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_4081_, lean_object* v_keys_4082_, lean_object* v_vals_4083_, lean_object* v_heq_4084_, lean_object* v_i_4085_, lean_object* v_k_4086_){
_start:
{
lean_object* v_res_4087_; 
v_res_4087_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Match_getEquationsForImpl_spec__0_spec__0_spec__1(v_00_u03b2_4081_, v_keys_4082_, v_vals_4083_, v_heq_4084_, v_i_4085_, v_k_4086_);
lean_dec(v_k_4086_);
lean_dec_ref(v_vals_4083_);
lean_dec_ref(v_keys_4082_);
return v_res_4087_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg(lean_object* v_type_4088_, lean_object* v_k_4089_, uint8_t v_cleanupAnnotations_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_){
_start:
{
lean_object* v___f_4096_; uint8_t v___x_4097_; lean_object* v___x_4098_; lean_object* v___x_4099_; 
v___f_4096_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4096_, 0, v_k_4089_);
v___x_4097_ = 0;
v___x_4098_ = lean_box(0);
v___x_4099_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_4097_, v___x_4098_, v_type_4088_, v___f_4096_, v_cleanupAnnotations_4090_, v___x_4097_, v___y_4091_, v___y_4092_, v___y_4093_, v___y_4094_);
if (lean_obj_tag(v___x_4099_) == 0)
{
lean_object* v_a_4100_; lean_object* v___x_4102_; uint8_t v_isShared_4103_; uint8_t v_isSharedCheck_4107_; 
v_a_4100_ = lean_ctor_get(v___x_4099_, 0);
v_isSharedCheck_4107_ = !lean_is_exclusive(v___x_4099_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4102_ = v___x_4099_;
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
else
{
lean_inc(v_a_4100_);
lean_dec(v___x_4099_);
v___x_4102_ = lean_box(0);
v_isShared_4103_ = v_isSharedCheck_4107_;
goto v_resetjp_4101_;
}
v_resetjp_4101_:
{
lean_object* v___x_4105_; 
if (v_isShared_4103_ == 0)
{
v___x_4105_ = v___x_4102_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_a_4100_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
return v___x_4105_;
}
}
}
else
{
lean_object* v_a_4108_; lean_object* v___x_4110_; uint8_t v_isShared_4111_; uint8_t v_isSharedCheck_4115_; 
v_a_4108_ = lean_ctor_get(v___x_4099_, 0);
v_isSharedCheck_4115_ = !lean_is_exclusive(v___x_4099_);
if (v_isSharedCheck_4115_ == 0)
{
v___x_4110_ = v___x_4099_;
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
else
{
lean_inc(v_a_4108_);
lean_dec(v___x_4099_);
v___x_4110_ = lean_box(0);
v_isShared_4111_ = v_isSharedCheck_4115_;
goto v_resetjp_4109_;
}
v_resetjp_4109_:
{
lean_object* v___x_4113_; 
if (v_isShared_4111_ == 0)
{
v___x_4113_ = v___x_4110_;
goto v_reusejp_4112_;
}
else
{
lean_object* v_reuseFailAlloc_4114_; 
v_reuseFailAlloc_4114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4114_, 0, v_a_4108_);
v___x_4113_ = v_reuseFailAlloc_4114_;
goto v_reusejp_4112_;
}
v_reusejp_4112_:
{
return v___x_4113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg___boxed(lean_object* v_type_4116_, lean_object* v_k_4117_, lean_object* v_cleanupAnnotations_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_, lean_object* v___y_4123_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4124_; lean_object* v_res_4125_; 
v_cleanupAnnotations_boxed_4124_ = lean_unbox(v_cleanupAnnotations_4118_);
v_res_4125_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg(v_type_4116_, v_k_4117_, v_cleanupAnnotations_boxed_4124_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_);
lean_dec(v___y_4122_);
lean_dec_ref(v___y_4121_);
lean_dec(v___y_4120_);
lean_dec_ref(v___y_4119_);
return v_res_4125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0(lean_object* v_00_u03b1_4126_, lean_object* v_type_4127_, lean_object* v_k_4128_, uint8_t v_cleanupAnnotations_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_){
_start:
{
lean_object* v___x_4135_; 
v___x_4135_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg(v_type_4127_, v_k_4128_, v_cleanupAnnotations_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_);
return v___x_4135_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___boxed(lean_object* v_00_u03b1_4136_, lean_object* v_type_4137_, lean_object* v_k_4138_, lean_object* v_cleanupAnnotations_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_, lean_object* v___y_4144_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4145_; lean_object* v_res_4146_; 
v_cleanupAnnotations_boxed_4145_ = lean_unbox(v_cleanupAnnotations_4139_);
v_res_4146_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0(v_00_u03b1_4136_, v_type_4137_, v_k_4138_, v_cleanupAnnotations_boxed_4145_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_);
lean_dec(v___y_4143_);
lean_dec_ref(v___y_4142_);
lean_dec(v___y_4141_);
lean_dec_ref(v___y_4140_);
return v_res_4146_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1(lean_object* v_msg_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_){
_start:
{
lean_object* v___f_4153_; lean_object* v___x_19936__overap_4154_; lean_object* v___x_4155_; 
v___f_4153_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0, &l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__3___closed__0);
v___x_19936__overap_4154_ = lean_panic_fn_borrowed(v___f_4153_, v_msg_4147_);
lean_inc(v___y_4151_);
lean_inc_ref(v___y_4150_);
lean_inc(v___y_4149_);
lean_inc_ref(v___y_4148_);
v___x_4155_ = lean_apply_5(v___x_19936__overap_4154_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_, lean_box(0));
return v___x_4155_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1___boxed(lean_object* v_msg_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_){
_start:
{
lean_object* v_res_4162_; 
v_res_4162_ = l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1(v_msg_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_);
lean_dec(v___y_4160_);
lean_dec_ref(v___y_4159_);
lean_dec(v___y_4158_);
lean_dec_ref(v___y_4157_);
return v_res_4162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__0(lean_object* v_c_4163_){
_start:
{
uint8_t v_foApprox_4164_; uint8_t v_ctxApprox_4165_; uint8_t v_quasiPatternApprox_4166_; uint8_t v_constApprox_4167_; uint8_t v_isDefEqStuckEx_4168_; uint8_t v_unificationHints_4169_; uint8_t v_proofIrrelevance_4170_; uint8_t v_assignSyntheticOpaque_4171_; uint8_t v_offsetCnstrs_4172_; uint8_t v_transparency_4173_; uint8_t v_univApprox_4174_; uint8_t v_iota_4175_; uint8_t v_beta_4176_; uint8_t v_proj_4177_; uint8_t v_zeta_4178_; uint8_t v_zetaDelta_4179_; uint8_t v_zetaUnused_4180_; uint8_t v_zetaHave_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4189_; 
v_foApprox_4164_ = lean_ctor_get_uint8(v_c_4163_, 0);
v_ctxApprox_4165_ = lean_ctor_get_uint8(v_c_4163_, 1);
v_quasiPatternApprox_4166_ = lean_ctor_get_uint8(v_c_4163_, 2);
v_constApprox_4167_ = lean_ctor_get_uint8(v_c_4163_, 3);
v_isDefEqStuckEx_4168_ = lean_ctor_get_uint8(v_c_4163_, 4);
v_unificationHints_4169_ = lean_ctor_get_uint8(v_c_4163_, 5);
v_proofIrrelevance_4170_ = lean_ctor_get_uint8(v_c_4163_, 6);
v_assignSyntheticOpaque_4171_ = lean_ctor_get_uint8(v_c_4163_, 7);
v_offsetCnstrs_4172_ = lean_ctor_get_uint8(v_c_4163_, 8);
v_transparency_4173_ = lean_ctor_get_uint8(v_c_4163_, 9);
v_univApprox_4174_ = lean_ctor_get_uint8(v_c_4163_, 11);
v_iota_4175_ = lean_ctor_get_uint8(v_c_4163_, 12);
v_beta_4176_ = lean_ctor_get_uint8(v_c_4163_, 13);
v_proj_4177_ = lean_ctor_get_uint8(v_c_4163_, 14);
v_zeta_4178_ = lean_ctor_get_uint8(v_c_4163_, 15);
v_zetaDelta_4179_ = lean_ctor_get_uint8(v_c_4163_, 16);
v_zetaUnused_4180_ = lean_ctor_get_uint8(v_c_4163_, 17);
v_zetaHave_4181_ = lean_ctor_get_uint8(v_c_4163_, 18);
v_isSharedCheck_4189_ = !lean_is_exclusive(v_c_4163_);
if (v_isSharedCheck_4189_ == 0)
{
v___x_4183_ = v_c_4163_;
v_isShared_4184_ = v_isSharedCheck_4189_;
goto v_resetjp_4182_;
}
else
{
lean_dec(v_c_4163_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4189_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
uint8_t v___x_4185_; lean_object* v___x_4187_; 
v___x_4185_ = 2;
if (v_isShared_4184_ == 0)
{
v___x_4187_ = v___x_4183_;
goto v_reusejp_4186_;
}
else
{
lean_object* v_reuseFailAlloc_4188_; 
v_reuseFailAlloc_4188_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 0, v_foApprox_4164_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 1, v_ctxApprox_4165_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 2, v_quasiPatternApprox_4166_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 3, v_constApprox_4167_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 4, v_isDefEqStuckEx_4168_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 5, v_unificationHints_4169_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 6, v_proofIrrelevance_4170_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 7, v_assignSyntheticOpaque_4171_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 8, v_offsetCnstrs_4172_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 9, v_transparency_4173_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 11, v_univApprox_4174_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 12, v_iota_4175_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 13, v_beta_4176_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 14, v_proj_4177_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 15, v_zeta_4178_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 16, v_zetaDelta_4179_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 17, v_zetaUnused_4180_);
lean_ctor_set_uint8(v_reuseFailAlloc_4188_, 18, v_zetaHave_4181_);
v___x_4187_ = v_reuseFailAlloc_4188_;
goto v_reusejp_4186_;
}
v_reusejp_4186_:
{
lean_ctor_set_uint8(v___x_4187_, 10, v___x_4185_);
return v___x_4187_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0(lean_object* v_x_4190_, lean_object* v_t_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_){
_start:
{
lean_object* v_dummy_4197_; lean_object* v_nargs_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; 
v_dummy_4197_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__0);
v_nargs_4198_ = l_Lean_Expr_getAppNumArgs(v_t_4191_);
lean_inc(v_nargs_4198_);
v___x_4199_ = lean_mk_array(v_nargs_4198_, v_dummy_4197_);
v___x_4200_ = lean_unsigned_to_nat(1u);
v___x_4201_ = lean_nat_sub(v_nargs_4198_, v___x_4200_);
lean_dec(v_nargs_4198_);
v___x_4202_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_t_4191_, v___x_4199_, v___x_4201_);
v___x_4203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4203_, 0, v___x_4202_);
return v___x_4203_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0___boxed(lean_object* v_x_4204_, lean_object* v_t_4205_, lean_object* v___y_4206_, lean_object* v___y_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_){
_start:
{
lean_object* v_res_4211_; 
v_res_4211_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0(v_x_4204_, v_t_4205_, v___y_4206_, v___y_4207_, v___y_4208_, v___y_4209_);
lean_dec(v___y_4209_);
lean_dec_ref(v___y_4208_);
lean_dec(v___y_4207_);
lean_dec_ref(v___y_4206_);
lean_dec_ref(v_x_4204_);
return v_res_4211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3(lean_object* v___x_4212_, lean_object* v_a_4213_, lean_object* v___x_4214_, lean_object* v_as_4215_, size_t v_sz_4216_, size_t v_i_4217_, lean_object* v_b_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_){
_start:
{
uint8_t v___x_4224_; 
v___x_4224_ = lean_usize_dec_lt(v_i_4217_, v_sz_4216_);
if (v___x_4224_ == 0)
{
lean_object* v___x_4225_; 
lean_dec(v___x_4214_);
v___x_4225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4225_, 0, v_b_4218_);
return v___x_4225_;
}
else
{
lean_object* v___x_4226_; lean_object* v_a_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; 
v___x_4226_ = l_Lean_instInhabitedExpr;
v_a_4227_ = lean_array_uget_borrowed(v_as_4215_, v_i_4217_);
v___x_4228_ = lean_array_get_borrowed(v___x_4226_, v___x_4212_, v_a_4227_);
lean_inc(v___x_4228_);
v___x_4229_ = l_Lean_Meta_instantiateForall(v___x_4228_, v_a_4213_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_);
if (lean_obj_tag(v___x_4229_) == 0)
{
lean_object* v_a_4230_; lean_object* v___x_4231_; 
v_a_4230_ = lean_ctor_get(v___x_4229_, 0);
lean_inc(v_a_4230_);
lean_dec_ref(v___x_4229_);
lean_inc(v___x_4214_);
v___x_4231_ = l_Lean_Meta_Match_simpH_x3f(v_a_4230_, v___x_4214_, v___y_4219_, v___y_4220_, v___y_4221_, v___y_4222_);
if (lean_obj_tag(v___x_4231_) == 0)
{
lean_object* v_a_4232_; lean_object* v_a_4234_; 
v_a_4232_ = lean_ctor_get(v___x_4231_, 0);
lean_inc(v_a_4232_);
lean_dec_ref(v___x_4231_);
if (lean_obj_tag(v_a_4232_) == 1)
{
lean_object* v_val_4238_; lean_object* v___x_4239_; 
v_val_4238_ = lean_ctor_get(v_a_4232_, 0);
lean_inc(v_val_4238_);
lean_dec_ref(v_a_4232_);
v___x_4239_ = lean_array_push(v_b_4218_, v_val_4238_);
v_a_4234_ = v___x_4239_;
goto v___jp_4233_;
}
else
{
lean_dec(v_a_4232_);
v_a_4234_ = v_b_4218_;
goto v___jp_4233_;
}
v___jp_4233_:
{
size_t v___x_4235_; size_t v___x_4236_; 
v___x_4235_ = ((size_t)1ULL);
v___x_4236_ = lean_usize_add(v_i_4217_, v___x_4235_);
v_i_4217_ = v___x_4236_;
v_b_4218_ = v_a_4234_;
goto _start;
}
}
else
{
lean_object* v_a_4240_; lean_object* v___x_4242_; uint8_t v_isShared_4243_; uint8_t v_isSharedCheck_4247_; 
lean_dec_ref(v_b_4218_);
lean_dec(v___x_4214_);
v_a_4240_ = lean_ctor_get(v___x_4231_, 0);
v_isSharedCheck_4247_ = !lean_is_exclusive(v___x_4231_);
if (v_isSharedCheck_4247_ == 0)
{
v___x_4242_ = v___x_4231_;
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
else
{
lean_inc(v_a_4240_);
lean_dec(v___x_4231_);
v___x_4242_ = lean_box(0);
v_isShared_4243_ = v_isSharedCheck_4247_;
goto v_resetjp_4241_;
}
v_resetjp_4241_:
{
lean_object* v___x_4245_; 
if (v_isShared_4243_ == 0)
{
v___x_4245_ = v___x_4242_;
goto v_reusejp_4244_;
}
else
{
lean_object* v_reuseFailAlloc_4246_; 
v_reuseFailAlloc_4246_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4246_, 0, v_a_4240_);
v___x_4245_ = v_reuseFailAlloc_4246_;
goto v_reusejp_4244_;
}
v_reusejp_4244_:
{
return v___x_4245_;
}
}
}
}
else
{
lean_object* v_a_4248_; lean_object* v___x_4250_; uint8_t v_isShared_4251_; uint8_t v_isSharedCheck_4255_; 
lean_dec_ref(v_b_4218_);
lean_dec(v___x_4214_);
v_a_4248_ = lean_ctor_get(v___x_4229_, 0);
v_isSharedCheck_4255_ = !lean_is_exclusive(v___x_4229_);
if (v_isSharedCheck_4255_ == 0)
{
v___x_4250_ = v___x_4229_;
v_isShared_4251_ = v_isSharedCheck_4255_;
goto v_resetjp_4249_;
}
else
{
lean_inc(v_a_4248_);
lean_dec(v___x_4229_);
v___x_4250_ = lean_box(0);
v_isShared_4251_ = v_isSharedCheck_4255_;
goto v_resetjp_4249_;
}
v_resetjp_4249_:
{
lean_object* v___x_4253_; 
if (v_isShared_4251_ == 0)
{
v___x_4253_ = v___x_4250_;
goto v_reusejp_4252_;
}
else
{
lean_object* v_reuseFailAlloc_4254_; 
v_reuseFailAlloc_4254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4254_, 0, v_a_4248_);
v___x_4253_ = v_reuseFailAlloc_4254_;
goto v_reusejp_4252_;
}
v_reusejp_4252_:
{
return v___x_4253_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3___boxed(lean_object* v___x_4256_, lean_object* v_a_4257_, lean_object* v___x_4258_, lean_object* v_as_4259_, lean_object* v_sz_4260_, lean_object* v_i_4261_, lean_object* v_b_4262_, lean_object* v___y_4263_, lean_object* v___y_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_){
_start:
{
size_t v_sz_boxed_4268_; size_t v_i_boxed_4269_; lean_object* v_res_4270_; 
v_sz_boxed_4268_ = lean_unbox_usize(v_sz_4260_);
lean_dec(v_sz_4260_);
v_i_boxed_4269_ = lean_unbox_usize(v_i_4261_);
lean_dec(v_i_4261_);
v_res_4270_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3(v___x_4256_, v_a_4257_, v___x_4258_, v_as_4259_, v_sz_boxed_4268_, v_i_boxed_4269_, v_b_4262_, v___y_4263_, v___y_4264_, v___y_4265_, v___y_4266_);
lean_dec(v___y_4266_);
lean_dec_ref(v___y_4265_);
lean_dec(v___y_4264_);
lean_dec_ref(v___y_4263_);
lean_dec_ref(v_as_4259_);
lean_dec_ref(v_a_4257_);
lean_dec_ref(v___x_4256_);
return v_res_4270_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1(lean_object* v___y_4271_, lean_object* v_args_4272_, lean_object* v___x_4273_, lean_object* v_overlaps_4274_, lean_object* v_a_4275_, lean_object* v_fst_4276_, lean_object* v_a_4277_, lean_object* v___x_4278_, lean_object* v___x_4279_, lean_object* v___x_4280_, lean_object* v___x_4281_, lean_object* v_altVars_4282_, uint8_t v___x_4283_, uint8_t v___x_4284_, lean_object* v_a_4285_, lean_object* v___x_4286_, lean_object* v___x_4287_, lean_object* v___x_4288_, lean_object* v___x_4289_, lean_object* v___x_4290_, lean_object* v___x_4291_, lean_object* v___x_4292_, lean_object* v_matchDeclName_4293_, lean_object* v___x_4294_, lean_object* v___x_4295_, lean_object* v___x_4296_, lean_object* v_heqs_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_){
_start:
{
lean_object* v___x_4303_; lean_object* v___x_4304_; 
v___x_4303_ = l_Lean_mkAppN(v___y_4271_, v_args_4272_);
lean_inc_ref(v_heqs_4297_);
v___x_4304_ = l_Lean_Meta_Match_mkAppDiscrEqs(v___x_4303_, v_heqs_4297_, v___x_4273_, v___y_4298_, v___y_4299_, v___y_4300_, v___y_4301_);
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v_a_4305_; lean_object* v___x_4306_; size_t v_sz_4307_; size_t v___x_4308_; lean_object* v___x_4309_; 
v_a_4305_ = lean_ctor_get(v___x_4304_, 0);
lean_inc(v_a_4305_);
lean_dec_ref(v___x_4304_);
v___x_4306_ = l_Lean_Meta_Match_Overlaps_overlapping(v_overlaps_4274_, v_a_4275_);
v_sz_4307_ = lean_array_size(v___x_4306_);
v___x_4308_ = ((size_t)0ULL);
lean_inc_ref(v___x_4279_);
v___x_4309_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__3(v_fst_4276_, v_a_4277_, v___x_4278_, v___x_4306_, v_sz_4307_, v___x_4308_, v___x_4279_, v___y_4298_, v___y_4299_, v___y_4300_, v___y_4301_);
lean_dec_ref(v___x_4306_);
if (lean_obj_tag(v___x_4309_) == 0)
{
lean_object* v_a_4310_; lean_object* v___y_4312_; lean_object* v___y_4313_; lean_object* v___y_4314_; lean_object* v___y_4315_; lean_object* v_options_4422_; uint8_t v_hasTrace_4423_; 
v_a_4310_ = lean_ctor_get(v___x_4309_, 0);
lean_inc(v_a_4310_);
lean_dec_ref(v___x_4309_);
v_options_4422_ = lean_ctor_get(v___y_4300_, 2);
v_hasTrace_4423_ = lean_ctor_get_uint8(v_options_4422_, sizeof(void*)*1);
if (v_hasTrace_4423_ == 0)
{
v___y_4312_ = v___y_4298_;
v___y_4313_ = v___y_4299_;
v___y_4314_ = v___y_4300_;
v___y_4315_ = v___y_4301_;
goto v___jp_4311_;
}
else
{
lean_object* v_inheritedTraceOptions_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; uint8_t v___x_4427_; 
v_inheritedTraceOptions_4424_ = lean_ctor_get(v___y_4300_, 13);
v___x_4425_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13);
v___x_4426_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__16);
v___x_4427_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4424_, v_options_4422_, v___x_4426_);
if (v___x_4427_ == 0)
{
v___y_4312_ = v___y_4298_;
v___y_4313_ = v___y_4299_;
v___y_4314_ = v___y_4300_;
v___y_4315_ = v___y_4301_;
goto v___jp_4311_;
}
else
{
lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; 
v___x_4428_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__5);
lean_inc(v_a_4310_);
v___x_4429_ = lean_array_to_list(v_a_4310_);
v___x_4430_ = lean_box(0);
v___x_4431_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__1(v___x_4429_, v___x_4430_);
v___x_4432_ = l_Lean_MessageData_ofList(v___x_4431_);
v___x_4433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4433_, 0, v___x_4428_);
lean_ctor_set(v___x_4433_, 1, v___x_4432_);
v___x_4434_ = l_Lean_addTrace___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go_spec__1(v___x_4425_, v___x_4433_, v___y_4298_, v___y_4299_, v___y_4300_, v___y_4301_);
if (lean_obj_tag(v___x_4434_) == 0)
{
lean_dec_ref(v___x_4434_);
v___y_4312_ = v___y_4298_;
v___y_4313_ = v___y_4299_;
v___y_4314_ = v___y_4300_;
v___y_4315_ = v___y_4301_;
goto v___jp_4311_;
}
else
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4442_; 
lean_dec(v_a_4310_);
lean_dec(v_a_4305_);
lean_dec_ref(v_heqs_4297_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
lean_dec(v_matchDeclName_4293_);
lean_dec_ref(v___x_4290_);
lean_dec_ref(v___x_4289_);
lean_dec_ref(v___x_4287_);
lean_dec(v___x_4286_);
lean_dec_ref(v___x_4281_);
lean_dec(v___x_4280_);
lean_dec_ref(v___x_4279_);
lean_dec_ref(v_a_4277_);
v_a_4435_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4442_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4442_ == 0)
{
v___x_4437_ = v___x_4434_;
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v___x_4434_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4440_; 
if (v_isShared_4438_ == 0)
{
v___x_4440_ = v___x_4437_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v_a_4435_);
v___x_4440_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
return v___x_4440_;
}
}
}
}
}
v___jp_4311_:
{
lean_object* v___x_4316_; lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___x_4321_; lean_object* v___x_4322_; size_t v_sz_4323_; lean_object* v___x_4324_; 
v___x_4316_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__8___redArg___lam__1___closed__3);
v___x_4317_ = l_Array_reverse___redArg(v_a_4277_);
v___x_4318_ = lean_array_get_size(v___x_4317_);
v___x_4319_ = l_Array_toSubarray___redArg(v___x_4317_, v___x_4280_, v___x_4318_);
lean_inc_ref(v___x_4281_);
v___x_4320_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__6___redArg(v___x_4281_, v___x_4279_);
v___x_4321_ = l_Array_reverse___redArg(v___x_4320_);
v___x_4322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4322_, 0, v___x_4316_);
lean_ctor_set(v___x_4322_, 1, v___x_4319_);
v_sz_4323_ = lean_array_size(v___x_4321_);
v___x_4324_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__7(v___x_4321_, v_sz_4323_, v___x_4308_, v___x_4322_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
lean_dec_ref(v___x_4321_);
if (lean_obj_tag(v___x_4324_) == 0)
{
lean_object* v_a_4325_; lean_object* v_fst_4326_; lean_object* v___x_4328_; uint8_t v_isShared_4329_; uint8_t v_isSharedCheck_4412_; 
v_a_4325_ = lean_ctor_get(v___x_4324_, 0);
lean_inc(v_a_4325_);
lean_dec_ref(v___x_4324_);
v_fst_4326_ = lean_ctor_get(v_a_4325_, 0);
v_isSharedCheck_4412_ = !lean_is_exclusive(v_a_4325_);
if (v_isSharedCheck_4412_ == 0)
{
lean_object* v_unused_4413_; 
v_unused_4413_ = lean_ctor_get(v_a_4325_, 1);
lean_dec(v_unused_4413_);
v___x_4328_ = v_a_4325_;
v_isShared_4329_ = v_isSharedCheck_4412_;
goto v_resetjp_4327_;
}
else
{
lean_inc(v_fst_4326_);
lean_dec(v_a_4325_);
v___x_4328_ = lean_box(0);
v_isShared_4329_ = v_isSharedCheck_4412_;
goto v_resetjp_4327_;
}
v_resetjp_4327_:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; uint8_t v___x_4332_; lean_object* v___x_4333_; 
v___x_4330_ = l_Subarray_copy___redArg(v___x_4281_);
lean_inc_ref(v___x_4330_);
v___x_4331_ = l_Array_append___redArg(v___x_4330_, v_altVars_4282_);
v___x_4332_ = 1;
v___x_4333_ = l_Lean_Meta_mkForallFVars(v___x_4331_, v_fst_4326_, v___x_4283_, v___x_4284_, v___x_4284_, v___x_4332_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
lean_dec_ref(v___x_4331_);
if (lean_obj_tag(v___x_4333_) == 0)
{
lean_object* v_a_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; 
v_a_4334_ = lean_ctor_get(v___x_4333_, 0);
lean_inc(v_a_4334_);
lean_dec_ref(v___x_4333_);
v___x_4335_ = l_Lean_ConstantInfo_name(v_a_4285_);
v___x_4336_ = l_Lean_mkConst(v___x_4335_, v___x_4286_);
lean_inc_ref(v___x_4287_);
v___x_4337_ = l_Subarray_copy___redArg(v___x_4287_);
v___x_4338_ = lean_mk_empty_array_with_capacity(v___x_4288_);
v___x_4339_ = lean_array_push(v___x_4338_, v___x_4289_);
v___x_4340_ = l_Array_append___redArg(v___x_4337_, v___x_4339_);
lean_dec_ref(v___x_4339_);
v___x_4341_ = l_Array_append___redArg(v___x_4340_, v___x_4330_);
lean_dec_ref(v___x_4330_);
v___x_4342_ = l_Subarray_copy___redArg(v___x_4290_);
v___x_4343_ = l_Array_append___redArg(v___x_4341_, v___x_4342_);
lean_dec_ref(v___x_4342_);
v___x_4344_ = l_Lean_mkAppN(v___x_4336_, v___x_4343_);
v___x_4345_ = l_Lean_Meta_mkHEq(v___x_4344_, v_a_4305_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
if (lean_obj_tag(v___x_4345_) == 0)
{
lean_object* v_a_4346_; lean_object* v___x_4347_; 
v_a_4346_ = lean_ctor_get(v___x_4345_, 0);
lean_inc(v_a_4346_);
lean_dec_ref(v___x_4345_);
v___x_4347_ = l_Lean_mkArrowN(v_a_4310_, v_a_4346_, v___y_4314_, v___y_4315_);
lean_dec(v_a_4310_);
if (lean_obj_tag(v___x_4347_) == 0)
{
lean_object* v_a_4348_; lean_object* v___x_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; 
v_a_4348_ = lean_ctor_get(v___x_4347_, 0);
lean_inc(v_a_4348_);
lean_dec_ref(v___x_4347_);
v___x_4349_ = l_Array_append___redArg(v___x_4343_, v_altVars_4282_);
v___x_4350_ = l_Array_append___redArg(v___x_4349_, v_heqs_4297_);
v___x_4351_ = l_Lean_Meta_mkForallFVars(v___x_4350_, v_a_4348_, v___x_4283_, v___x_4284_, v___x_4284_, v___x_4332_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
lean_dec_ref(v___x_4350_);
if (lean_obj_tag(v___x_4351_) == 0)
{
lean_object* v_a_4352_; lean_object* v___x_4353_; 
v_a_4352_ = lean_ctor_get(v___x_4351_, 0);
lean_inc(v_a_4352_);
lean_dec_ref(v___x_4351_);
v___x_4353_ = l_Lean_Meta_Match_unfoldNamedPattern(v_a_4352_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
if (lean_obj_tag(v___x_4353_) == 0)
{
lean_object* v_a_4354_; lean_object* v___x_4356_; uint8_t v_isShared_4357_; uint8_t v_isSharedCheck_4411_; 
v_a_4354_ = lean_ctor_get(v___x_4353_, 0);
v_isSharedCheck_4411_ = !lean_is_exclusive(v___x_4353_);
if (v_isSharedCheck_4411_ == 0)
{
v___x_4356_ = v___x_4353_;
v_isShared_4357_ = v_isSharedCheck_4411_;
goto v_resetjp_4355_;
}
else
{
lean_inc(v_a_4354_);
lean_dec(v___x_4353_);
v___x_4356_ = lean_box(0);
v_isShared_4357_ = v_isSharedCheck_4411_;
goto v_resetjp_4355_;
}
v_resetjp_4355_:
{
lean_object* v_start_4358_; lean_object* v_stop_4359_; lean_object* v___x_4361_; uint8_t v_isShared_4362_; uint8_t v_isSharedCheck_4409_; 
v_start_4358_ = lean_ctor_get(v___x_4287_, 1);
v_stop_4359_ = lean_ctor_get(v___x_4287_, 2);
v_isSharedCheck_4409_ = !lean_is_exclusive(v___x_4287_);
if (v_isSharedCheck_4409_ == 0)
{
lean_object* v_unused_4410_; 
v_unused_4410_ = lean_ctor_get(v___x_4287_, 0);
lean_dec(v_unused_4410_);
v___x_4361_ = v___x_4287_;
v_isShared_4362_ = v_isSharedCheck_4409_;
goto v_resetjp_4360_;
}
else
{
lean_inc(v_stop_4359_);
lean_inc(v_start_4358_);
lean_dec(v___x_4287_);
v___x_4361_ = lean_box(0);
v_isShared_4362_ = v_isSharedCheck_4409_;
goto v_resetjp_4360_;
}
v_resetjp_4360_:
{
lean_object* v___x_4363_; lean_object* v___x_4364_; lean_object* v___x_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; lean_object* v___x_4368_; lean_object* v___x_4369_; lean_object* v___x_4370_; 
v___x_4363_ = lean_nat_sub(v_stop_4359_, v_start_4358_);
lean_dec(v_start_4358_);
lean_dec(v_stop_4359_);
v___x_4364_ = lean_nat_add(v___x_4363_, v___x_4288_);
lean_dec(v___x_4363_);
v___x_4365_ = lean_nat_add(v___x_4364_, v___x_4291_);
lean_dec(v___x_4364_);
v___x_4366_ = lean_nat_add(v___x_4365_, v___x_4292_);
lean_dec(v___x_4365_);
v___x_4367_ = lean_array_get_size(v_altVars_4282_);
v___x_4368_ = lean_nat_add(v___x_4366_, v___x_4367_);
lean_dec(v___x_4366_);
v___x_4369_ = lean_array_get_size(v_heqs_4297_);
lean_dec_ref(v_heqs_4297_);
lean_inc(v_a_4354_);
v___x_4370_ = l_Lean_Meta_Match_proveCondEqThm(v_matchDeclName_4293_, v_a_4354_, v___x_4368_, v___x_4369_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
if (lean_obj_tag(v___x_4370_) == 0)
{
lean_object* v_a_4371_; lean_object* v___x_4373_; uint8_t v_isShared_4374_; uint8_t v_isSharedCheck_4408_; 
v_a_4371_ = lean_ctor_get(v___x_4370_, 0);
v_isSharedCheck_4408_ = !lean_is_exclusive(v___x_4370_);
if (v_isSharedCheck_4408_ == 0)
{
v___x_4373_ = v___x_4370_;
v_isShared_4374_ = v_isSharedCheck_4408_;
goto v_resetjp_4372_;
}
else
{
lean_inc(v_a_4371_);
lean_dec(v___x_4370_);
v___x_4373_ = lean_box(0);
v_isShared_4374_ = v_isSharedCheck_4408_;
goto v_resetjp_4372_;
}
v_resetjp_4372_:
{
lean_object* v___x_4375_; lean_object* v_env_4376_; uint8_t v___x_4377_; 
v___x_4375_ = lean_st_ref_get(v___y_4315_);
v_env_4376_ = lean_ctor_get(v___x_4375_, 0);
lean_inc_ref(v_env_4376_);
lean_dec(v___x_4375_);
lean_inc(v___x_4294_);
v___x_4377_ = l_Lean_Environment_contains(v_env_4376_, v___x_4294_, v___x_4284_);
if (v___x_4377_ == 0)
{
lean_object* v___x_4379_; 
lean_del_object(v___x_4373_);
lean_inc(v___x_4294_);
if (v_isShared_4362_ == 0)
{
lean_ctor_set(v___x_4361_, 2, v_a_4354_);
lean_ctor_set(v___x_4361_, 1, v___x_4295_);
lean_ctor_set(v___x_4361_, 0, v___x_4294_);
v___x_4379_ = v___x_4361_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4404_; 
v_reuseFailAlloc_4404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4404_, 0, v___x_4294_);
lean_ctor_set(v_reuseFailAlloc_4404_, 1, v___x_4295_);
lean_ctor_set(v_reuseFailAlloc_4404_, 2, v_a_4354_);
v___x_4379_ = v_reuseFailAlloc_4404_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
lean_object* v___x_4381_; 
if (v_isShared_4329_ == 0)
{
lean_ctor_set_tag(v___x_4328_, 1);
lean_ctor_set(v___x_4328_, 1, v___x_4296_);
lean_ctor_set(v___x_4328_, 0, v___x_4294_);
v___x_4381_ = v___x_4328_;
goto v_reusejp_4380_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v___x_4294_);
lean_ctor_set(v_reuseFailAlloc_4403_, 1, v___x_4296_);
v___x_4381_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4380_;
}
v_reusejp_4380_:
{
lean_object* v___x_4382_; lean_object* v___x_4384_; 
v___x_4382_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4382_, 0, v___x_4379_);
lean_ctor_set(v___x_4382_, 1, v_a_4371_);
lean_ctor_set(v___x_4382_, 2, v___x_4381_);
if (v_isShared_4357_ == 0)
{
lean_ctor_set_tag(v___x_4356_, 2);
lean_ctor_set(v___x_4356_, 0, v___x_4382_);
v___x_4384_ = v___x_4356_;
goto v_reusejp_4383_;
}
else
{
lean_object* v_reuseFailAlloc_4402_; 
v_reuseFailAlloc_4402_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4402_, 0, v___x_4382_);
v___x_4384_ = v_reuseFailAlloc_4402_;
goto v_reusejp_4383_;
}
v_reusejp_4383_:
{
lean_object* v___x_4385_; 
v___x_4385_ = l_Lean_addDecl(v___x_4384_, v___x_4283_, v___y_4314_, v___y_4315_);
if (lean_obj_tag(v___x_4385_) == 0)
{
lean_object* v___x_4387_; uint8_t v_isShared_4388_; uint8_t v_isSharedCheck_4392_; 
v_isSharedCheck_4392_ = !lean_is_exclusive(v___x_4385_);
if (v_isSharedCheck_4392_ == 0)
{
lean_object* v_unused_4393_; 
v_unused_4393_ = lean_ctor_get(v___x_4385_, 0);
lean_dec(v_unused_4393_);
v___x_4387_ = v___x_4385_;
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
else
{
lean_dec(v___x_4385_);
v___x_4387_ = lean_box(0);
v_isShared_4388_ = v_isSharedCheck_4392_;
goto v_resetjp_4386_;
}
v_resetjp_4386_:
{
lean_object* v___x_4390_; 
if (v_isShared_4388_ == 0)
{
lean_ctor_set(v___x_4387_, 0, v_a_4334_);
v___x_4390_ = v___x_4387_;
goto v_reusejp_4389_;
}
else
{
lean_object* v_reuseFailAlloc_4391_; 
v_reuseFailAlloc_4391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4391_, 0, v_a_4334_);
v___x_4390_ = v_reuseFailAlloc_4391_;
goto v_reusejp_4389_;
}
v_reusejp_4389_:
{
return v___x_4390_;
}
}
}
else
{
lean_object* v_a_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4401_; 
lean_dec(v_a_4334_);
v_a_4394_ = lean_ctor_get(v___x_4385_, 0);
v_isSharedCheck_4401_ = !lean_is_exclusive(v___x_4385_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4396_ = v___x_4385_;
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_a_4394_);
lean_dec(v___x_4385_);
v___x_4396_ = lean_box(0);
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
v_resetjp_4395_:
{
lean_object* v___x_4399_; 
if (v_isShared_4397_ == 0)
{
v___x_4399_ = v___x_4396_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4400_; 
v_reuseFailAlloc_4400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4400_, 0, v_a_4394_);
v___x_4399_ = v_reuseFailAlloc_4400_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
return v___x_4399_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4406_; 
lean_dec(v_a_4371_);
lean_del_object(v___x_4361_);
lean_del_object(v___x_4356_);
lean_dec(v_a_4354_);
lean_del_object(v___x_4328_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
if (v_isShared_4374_ == 0)
{
lean_ctor_set(v___x_4373_, 0, v_a_4334_);
v___x_4406_ = v___x_4373_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4407_; 
v_reuseFailAlloc_4407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4407_, 0, v_a_4334_);
v___x_4406_ = v_reuseFailAlloc_4407_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
return v___x_4406_;
}
}
}
}
else
{
lean_del_object(v___x_4361_);
lean_del_object(v___x_4356_);
lean_dec(v_a_4354_);
lean_dec(v_a_4334_);
lean_del_object(v___x_4328_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
return v___x_4370_;
}
}
}
}
else
{
lean_dec(v_a_4334_);
lean_del_object(v___x_4328_);
lean_dec_ref(v_heqs_4297_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
lean_dec(v_matchDeclName_4293_);
lean_dec_ref(v___x_4287_);
return v___x_4353_;
}
}
else
{
lean_dec(v_a_4334_);
lean_del_object(v___x_4328_);
lean_dec_ref(v_heqs_4297_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
lean_dec(v_matchDeclName_4293_);
lean_dec_ref(v___x_4287_);
return v___x_4351_;
}
}
else
{
lean_dec_ref(v___x_4343_);
lean_dec(v_a_4334_);
lean_del_object(v___x_4328_);
lean_dec_ref(v_heqs_4297_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
lean_dec(v_matchDeclName_4293_);
lean_dec_ref(v___x_4287_);
return v___x_4347_;
}
}
else
{
lean_dec_ref(v___x_4343_);
lean_dec(v_a_4334_);
lean_del_object(v___x_4328_);
lean_dec(v_a_4310_);
lean_dec_ref(v_heqs_4297_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
lean_dec(v_matchDeclName_4293_);
lean_dec_ref(v___x_4287_);
return v___x_4345_;
}
}
else
{
lean_dec_ref(v___x_4330_);
lean_del_object(v___x_4328_);
lean_dec(v_a_4310_);
lean_dec(v_a_4305_);
lean_dec_ref(v_heqs_4297_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
lean_dec(v_matchDeclName_4293_);
lean_dec_ref(v___x_4290_);
lean_dec_ref(v___x_4289_);
lean_dec_ref(v___x_4287_);
lean_dec(v___x_4286_);
return v___x_4333_;
}
}
}
else
{
lean_object* v_a_4414_; lean_object* v___x_4416_; uint8_t v_isShared_4417_; uint8_t v_isSharedCheck_4421_; 
lean_dec(v_a_4310_);
lean_dec(v_a_4305_);
lean_dec_ref(v_heqs_4297_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
lean_dec(v_matchDeclName_4293_);
lean_dec_ref(v___x_4290_);
lean_dec_ref(v___x_4289_);
lean_dec_ref(v___x_4287_);
lean_dec(v___x_4286_);
lean_dec_ref(v___x_4281_);
v_a_4414_ = lean_ctor_get(v___x_4324_, 0);
v_isSharedCheck_4421_ = !lean_is_exclusive(v___x_4324_);
if (v_isSharedCheck_4421_ == 0)
{
v___x_4416_ = v___x_4324_;
v_isShared_4417_ = v_isSharedCheck_4421_;
goto v_resetjp_4415_;
}
else
{
lean_inc(v_a_4414_);
lean_dec(v___x_4324_);
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
else
{
lean_object* v_a_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4450_; 
lean_dec(v_a_4305_);
lean_dec_ref(v_heqs_4297_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
lean_dec(v_matchDeclName_4293_);
lean_dec_ref(v___x_4290_);
lean_dec_ref(v___x_4289_);
lean_dec_ref(v___x_4287_);
lean_dec(v___x_4286_);
lean_dec_ref(v___x_4281_);
lean_dec(v___x_4280_);
lean_dec_ref(v___x_4279_);
lean_dec_ref(v_a_4277_);
v_a_4443_ = lean_ctor_get(v___x_4309_, 0);
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4309_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4445_ = v___x_4309_;
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v___x_4309_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4448_; 
if (v_isShared_4446_ == 0)
{
v___x_4448_ = v___x_4445_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v_a_4443_);
v___x_4448_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
return v___x_4448_;
}
}
}
}
else
{
lean_dec_ref(v_heqs_4297_);
lean_dec(v___x_4296_);
lean_dec(v___x_4295_);
lean_dec(v___x_4294_);
lean_dec(v_matchDeclName_4293_);
lean_dec_ref(v___x_4290_);
lean_dec_ref(v___x_4289_);
lean_dec_ref(v___x_4287_);
lean_dec(v___x_4286_);
lean_dec_ref(v___x_4281_);
lean_dec(v___x_4280_);
lean_dec_ref(v___x_4279_);
lean_dec(v___x_4278_);
lean_dec_ref(v_a_4277_);
return v___x_4304_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___y_4451_ = _args[0];
lean_object* v_args_4452_ = _args[1];
lean_object* v___x_4453_ = _args[2];
lean_object* v_overlaps_4454_ = _args[3];
lean_object* v_a_4455_ = _args[4];
lean_object* v_fst_4456_ = _args[5];
lean_object* v_a_4457_ = _args[6];
lean_object* v___x_4458_ = _args[7];
lean_object* v___x_4459_ = _args[8];
lean_object* v___x_4460_ = _args[9];
lean_object* v___x_4461_ = _args[10];
lean_object* v_altVars_4462_ = _args[11];
lean_object* v___x_4463_ = _args[12];
lean_object* v___x_4464_ = _args[13];
lean_object* v_a_4465_ = _args[14];
lean_object* v___x_4466_ = _args[15];
lean_object* v___x_4467_ = _args[16];
lean_object* v___x_4468_ = _args[17];
lean_object* v___x_4469_ = _args[18];
lean_object* v___x_4470_ = _args[19];
lean_object* v___x_4471_ = _args[20];
lean_object* v___x_4472_ = _args[21];
lean_object* v_matchDeclName_4473_ = _args[22];
lean_object* v___x_4474_ = _args[23];
lean_object* v___x_4475_ = _args[24];
lean_object* v___x_4476_ = _args[25];
lean_object* v_heqs_4477_ = _args[26];
lean_object* v___y_4478_ = _args[27];
lean_object* v___y_4479_ = _args[28];
lean_object* v___y_4480_ = _args[29];
lean_object* v___y_4481_ = _args[30];
lean_object* v___y_4482_ = _args[31];
_start:
{
uint8_t v___x_22119__boxed_4483_; uint8_t v___x_22120__boxed_4484_; lean_object* v_res_4485_; 
v___x_22119__boxed_4483_ = lean_unbox(v___x_4463_);
v___x_22120__boxed_4484_ = lean_unbox(v___x_4464_);
v_res_4485_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1(v___y_4451_, v_args_4452_, v___x_4453_, v_overlaps_4454_, v_a_4455_, v_fst_4456_, v_a_4457_, v___x_4458_, v___x_4459_, v___x_4460_, v___x_4461_, v_altVars_4462_, v___x_22119__boxed_4483_, v___x_22120__boxed_4484_, v_a_4465_, v___x_4466_, v___x_4467_, v___x_4468_, v___x_4469_, v___x_4470_, v___x_4471_, v___x_4472_, v_matchDeclName_4473_, v___x_4474_, v___x_4475_, v___x_4476_, v_heqs_4477_, v___y_4478_, v___y_4479_, v___y_4480_, v___y_4481_);
lean_dec(v___y_4481_);
lean_dec_ref(v___y_4480_);
lean_dec(v___y_4479_);
lean_dec_ref(v___y_4478_);
lean_dec(v___x_4472_);
lean_dec(v___x_4471_);
lean_dec(v___x_4468_);
lean_dec_ref(v_a_4465_);
lean_dec_ref(v_altVars_4462_);
lean_dec(v_fst_4456_);
lean_dec(v_a_4455_);
lean_dec_ref(v_overlaps_4454_);
lean_dec_ref(v_args_4452_);
return v_res_4485_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_4486_; 
v___x_4486_ = lean_mk_string_unchecked("heq", 3, 3);
return v___x_4486_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_4487_; lean_object* v___x_4488_; 
v___x_4487_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__0);
v___x_4488_ = l_Lean_Name_mkStr1(v___x_4487_);
return v___x_4488_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg(lean_object* v_a_4489_, lean_object* v_b_4490_, lean_object* v___y_4491_, lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_){
_start:
{
lean_object* v_array_4496_; lean_object* v_start_4497_; lean_object* v_stop_4498_; lean_object* v___x_4500_; uint8_t v_isShared_4501_; uint8_t v_isSharedCheck_4556_; 
v_array_4496_ = lean_ctor_get(v_a_4489_, 0);
v_start_4497_ = lean_ctor_get(v_a_4489_, 1);
v_stop_4498_ = lean_ctor_get(v_a_4489_, 2);
v_isSharedCheck_4556_ = !lean_is_exclusive(v_a_4489_);
if (v_isSharedCheck_4556_ == 0)
{
v___x_4500_ = v_a_4489_;
v_isShared_4501_ = v_isSharedCheck_4556_;
goto v_resetjp_4499_;
}
else
{
lean_inc(v_stop_4498_);
lean_inc(v_start_4497_);
lean_inc(v_array_4496_);
lean_dec(v_a_4489_);
v___x_4500_ = lean_box(0);
v_isShared_4501_ = v_isSharedCheck_4556_;
goto v_resetjp_4499_;
}
v_resetjp_4499_:
{
uint8_t v___x_4502_; 
v___x_4502_ = lean_nat_dec_lt(v_start_4497_, v_stop_4498_);
if (v___x_4502_ == 0)
{
lean_object* v___x_4503_; 
lean_del_object(v___x_4500_);
lean_dec(v_stop_4498_);
lean_dec(v_start_4497_);
lean_dec_ref(v_array_4496_);
v___x_4503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4503_, 0, v_b_4490_);
return v___x_4503_;
}
else
{
lean_object* v_snd_4504_; lean_object* v_fst_4505_; lean_object* v___x_4507_; uint8_t v_isShared_4508_; uint8_t v_isSharedCheck_4555_; 
v_snd_4504_ = lean_ctor_get(v_b_4490_, 1);
v_fst_4505_ = lean_ctor_get(v_b_4490_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v_b_4490_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4507_ = v_b_4490_;
v_isShared_4508_ = v_isSharedCheck_4555_;
goto v_resetjp_4506_;
}
else
{
lean_inc(v_snd_4504_);
lean_inc(v_fst_4505_);
lean_dec(v_b_4490_);
v___x_4507_ = lean_box(0);
v_isShared_4508_ = v_isSharedCheck_4555_;
goto v_resetjp_4506_;
}
v_resetjp_4506_:
{
lean_object* v_array_4509_; lean_object* v_start_4510_; lean_object* v_stop_4511_; uint8_t v___x_4512_; 
v_array_4509_ = lean_ctor_get(v_snd_4504_, 0);
v_start_4510_ = lean_ctor_get(v_snd_4504_, 1);
v_stop_4511_ = lean_ctor_get(v_snd_4504_, 2);
v___x_4512_ = lean_nat_dec_lt(v_start_4510_, v_stop_4511_);
if (v___x_4512_ == 0)
{
lean_object* v___x_4514_; 
lean_del_object(v___x_4500_);
lean_dec(v_stop_4498_);
lean_dec(v_start_4497_);
lean_dec_ref(v_array_4496_);
if (v_isShared_4508_ == 0)
{
v___x_4514_ = v___x_4507_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4516_; 
v_reuseFailAlloc_4516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4516_, 0, v_fst_4505_);
lean_ctor_set(v_reuseFailAlloc_4516_, 1, v_snd_4504_);
v___x_4514_ = v_reuseFailAlloc_4516_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
lean_object* v___x_4515_; 
v___x_4515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4514_);
return v___x_4515_;
}
}
else
{
lean_object* v___x_4518_; uint8_t v_isShared_4519_; uint8_t v_isSharedCheck_4551_; 
lean_inc(v_stop_4511_);
lean_inc(v_start_4510_);
lean_inc_ref(v_array_4509_);
v_isSharedCheck_4551_ = !lean_is_exclusive(v_snd_4504_);
if (v_isSharedCheck_4551_ == 0)
{
lean_object* v_unused_4552_; lean_object* v_unused_4553_; lean_object* v_unused_4554_; 
v_unused_4552_ = lean_ctor_get(v_snd_4504_, 2);
lean_dec(v_unused_4552_);
v_unused_4553_ = lean_ctor_get(v_snd_4504_, 1);
lean_dec(v_unused_4553_);
v_unused_4554_ = lean_ctor_get(v_snd_4504_, 0);
lean_dec(v_unused_4554_);
v___x_4518_ = v_snd_4504_;
v_isShared_4519_ = v_isSharedCheck_4551_;
goto v_resetjp_4517_;
}
else
{
lean_dec(v_snd_4504_);
v___x_4518_ = lean_box(0);
v_isShared_4519_ = v_isSharedCheck_4551_;
goto v_resetjp_4517_;
}
v_resetjp_4517_:
{
lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; 
v___x_4520_ = lean_array_fget_borrowed(v_array_4496_, v_start_4497_);
v___x_4521_ = lean_array_fget_borrowed(v_array_4509_, v_start_4510_);
lean_inc(v___x_4521_);
lean_inc(v___x_4520_);
v___x_4522_ = l_Lean_Meta_mkEqHEq(v___x_4520_, v___x_4521_, v___y_4491_, v___y_4492_, v___y_4493_, v___y_4494_);
if (lean_obj_tag(v___x_4522_) == 0)
{
lean_object* v_a_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4527_; 
v_a_4523_ = lean_ctor_get(v___x_4522_, 0);
lean_inc(v_a_4523_);
lean_dec_ref(v___x_4522_);
v___x_4524_ = lean_unsigned_to_nat(1u);
v___x_4525_ = lean_nat_add(v_start_4497_, v___x_4524_);
lean_dec(v_start_4497_);
if (v_isShared_4519_ == 0)
{
lean_ctor_set(v___x_4518_, 2, v_stop_4498_);
lean_ctor_set(v___x_4518_, 1, v___x_4525_);
lean_ctor_set(v___x_4518_, 0, v_array_4496_);
v___x_4527_ = v___x_4518_;
goto v_reusejp_4526_;
}
else
{
lean_object* v_reuseFailAlloc_4542_; 
v_reuseFailAlloc_4542_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4542_, 0, v_array_4496_);
lean_ctor_set(v_reuseFailAlloc_4542_, 1, v___x_4525_);
lean_ctor_set(v_reuseFailAlloc_4542_, 2, v_stop_4498_);
v___x_4527_ = v_reuseFailAlloc_4542_;
goto v_reusejp_4526_;
}
v_reusejp_4526_:
{
lean_object* v___x_4528_; lean_object* v___x_4530_; 
v___x_4528_ = lean_nat_add(v_start_4510_, v___x_4524_);
lean_dec(v_start_4510_);
if (v_isShared_4501_ == 0)
{
lean_ctor_set(v___x_4500_, 2, v_stop_4511_);
lean_ctor_set(v___x_4500_, 1, v___x_4528_);
lean_ctor_set(v___x_4500_, 0, v_array_4509_);
v___x_4530_ = v___x_4500_;
goto v_reusejp_4529_;
}
else
{
lean_object* v_reuseFailAlloc_4541_; 
v_reuseFailAlloc_4541_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4541_, 0, v_array_4509_);
lean_ctor_set(v_reuseFailAlloc_4541_, 1, v___x_4528_);
lean_ctor_set(v_reuseFailAlloc_4541_, 2, v_stop_4511_);
v___x_4530_ = v_reuseFailAlloc_4541_;
goto v_reusejp_4529_;
}
v_reusejp_4529_:
{
lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4536_; 
v___x_4531_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___closed__1);
v___x_4532_ = lean_array_get_size(v_fst_4505_);
v___x_4533_ = lean_nat_add(v___x_4532_, v___x_4524_);
v___x_4534_ = lean_name_append_index_after(v___x_4531_, v___x_4533_);
if (v_isShared_4508_ == 0)
{
lean_ctor_set(v___x_4507_, 1, v_a_4523_);
lean_ctor_set(v___x_4507_, 0, v___x_4534_);
v___x_4536_ = v___x_4507_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4540_; 
v_reuseFailAlloc_4540_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4540_, 0, v___x_4534_);
lean_ctor_set(v_reuseFailAlloc_4540_, 1, v_a_4523_);
v___x_4536_ = v_reuseFailAlloc_4540_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
lean_object* v___x_4537_; lean_object* v___x_4538_; 
v___x_4537_ = lean_array_push(v_fst_4505_, v___x_4536_);
v___x_4538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4538_, 0, v___x_4537_);
lean_ctor_set(v___x_4538_, 1, v___x_4530_);
v_a_4489_ = v___x_4527_;
v_b_4490_ = v___x_4538_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4543_; lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4550_; 
lean_del_object(v___x_4518_);
lean_dec(v_stop_4511_);
lean_dec(v_start_4510_);
lean_dec_ref(v_array_4509_);
lean_del_object(v___x_4507_);
lean_dec(v_fst_4505_);
lean_del_object(v___x_4500_);
lean_dec(v_stop_4498_);
lean_dec(v_start_4497_);
lean_dec_ref(v_array_4496_);
v_a_4543_ = lean_ctor_get(v___x_4522_, 0);
v_isSharedCheck_4550_ = !lean_is_exclusive(v___x_4522_);
if (v_isSharedCheck_4550_ == 0)
{
v___x_4545_ = v___x_4522_;
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
else
{
lean_inc(v_a_4543_);
lean_dec(v___x_4522_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
lean_object* v___x_4548_; 
if (v_isShared_4546_ == 0)
{
v___x_4548_ = v___x_4545_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4549_; 
v_reuseFailAlloc_4549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4549_, 0, v_a_4543_);
v___x_4548_ = v_reuseFailAlloc_4549_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
return v___x_4548_;
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg___boxed(lean_object* v_a_4557_, lean_object* v_b_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_){
_start:
{
lean_object* v_res_4564_; 
v_res_4564_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg(v_a_4557_, v_b_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_);
lean_dec(v___y_4562_);
lean_dec_ref(v___y_4561_);
lean_dec(v___y_4560_);
lean_dec_ref(v___y_4559_);
return v_res_4564_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6(size_t v_sz_4565_, size_t v_i_4566_, lean_object* v_bs_4567_){
_start:
{
uint8_t v___x_4568_; 
v___x_4568_ = lean_usize_dec_lt(v_i_4566_, v_sz_4565_);
if (v___x_4568_ == 0)
{
return v_bs_4567_;
}
else
{
lean_object* v_v_4569_; lean_object* v_fst_4570_; lean_object* v_snd_4571_; lean_object* v___x_4573_; uint8_t v_isShared_4574_; uint8_t v_isSharedCheck_4587_; 
v_v_4569_ = lean_array_uget(v_bs_4567_, v_i_4566_);
v_fst_4570_ = lean_ctor_get(v_v_4569_, 0);
v_snd_4571_ = lean_ctor_get(v_v_4569_, 1);
v_isSharedCheck_4587_ = !lean_is_exclusive(v_v_4569_);
if (v_isSharedCheck_4587_ == 0)
{
v___x_4573_ = v_v_4569_;
v_isShared_4574_ = v_isSharedCheck_4587_;
goto v_resetjp_4572_;
}
else
{
lean_inc(v_snd_4571_);
lean_inc(v_fst_4570_);
lean_dec(v_v_4569_);
v___x_4573_ = lean_box(0);
v_isShared_4574_ = v_isSharedCheck_4587_;
goto v_resetjp_4572_;
}
v_resetjp_4572_:
{
lean_object* v___x_4575_; lean_object* v_bs_x27_4576_; uint8_t v___x_4577_; lean_object* v___x_4578_; lean_object* v___x_4580_; 
v___x_4575_ = lean_unsigned_to_nat(0u);
v_bs_x27_4576_ = lean_array_uset(v_bs_4567_, v_i_4566_, v___x_4575_);
v___x_4577_ = 0;
v___x_4578_ = lean_box(v___x_4577_);
if (v_isShared_4574_ == 0)
{
lean_ctor_set(v___x_4573_, 0, v___x_4578_);
v___x_4580_ = v___x_4573_;
goto v_reusejp_4579_;
}
else
{
lean_object* v_reuseFailAlloc_4586_; 
v_reuseFailAlloc_4586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4586_, 0, v___x_4578_);
lean_ctor_set(v_reuseFailAlloc_4586_, 1, v_snd_4571_);
v___x_4580_ = v_reuseFailAlloc_4586_;
goto v_reusejp_4579_;
}
v_reusejp_4579_:
{
lean_object* v___x_4581_; size_t v___x_4582_; size_t v___x_4583_; lean_object* v___x_4584_; 
v___x_4581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4581_, 0, v_fst_4570_);
lean_ctor_set(v___x_4581_, 1, v___x_4580_);
v___x_4582_ = ((size_t)1ULL);
v___x_4583_ = lean_usize_add(v_i_4566_, v___x_4582_);
v___x_4584_ = lean_array_uset(v_bs_x27_4576_, v_i_4566_, v___x_4581_);
v_i_4566_ = v___x_4583_;
v_bs_4567_ = v___x_4584_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6___boxed(lean_object* v_sz_4588_, lean_object* v_i_4589_, lean_object* v_bs_4590_){
_start:
{
size_t v_sz_boxed_4591_; size_t v_i_boxed_4592_; lean_object* v_res_4593_; 
v_sz_boxed_4591_ = lean_unbox_usize(v_sz_4588_);
lean_dec(v_sz_4588_);
v_i_boxed_4592_ = lean_unbox_usize(v_i_4589_);
lean_dec(v_i_4589_);
v_res_4593_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6(v_sz_boxed_4591_, v_i_boxed_4592_, v_bs_4590_);
return v_res_4593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0(lean_object* v___x_4594_, lean_object* v_a_4595_, lean_object* v___y_4596_, lean_object* v___y_4597_, lean_object* v___y_4598_, lean_object* v___y_4599_){
_start:
{
lean_object* v___x_4601_; lean_object* v___x_21858__overap_4602_; lean_object* v___x_4603_; 
v___x_4601_ = l_Lean_instInhabitedExpr;
v___x_21858__overap_4602_ = l_instInhabitedOfMonad___redArg(v___x_4594_, v___x_4601_);
lean_inc(v___y_4599_);
lean_inc_ref(v___y_4598_);
lean_inc(v___y_4597_);
lean_inc_ref(v___y_4596_);
v___x_4603_ = lean_apply_5(v___x_21858__overap_4602_, v___y_4596_, v___y_4597_, v___y_4598_, v___y_4599_, lean_box(0));
return v___x_4603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0___boxed(lean_object* v___x_4604_, lean_object* v_a_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_, lean_object* v___y_4610_){
_start:
{
lean_object* v_res_4611_; 
v_res_4611_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0(v___x_4604_, v_a_4605_, v___y_4606_, v___y_4607_, v___y_4608_, v___y_4609_);
lean_dec(v___y_4609_);
lean_dec_ref(v___y_4608_);
lean_dec(v___y_4607_);
lean_dec_ref(v___y_4606_);
lean_dec_ref(v_a_4605_);
return v_res_4611_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0(void){
_start:
{
lean_object* v___x_4612_; 
v___x_4612_ = l_instMonadEIO(lean_box(0));
return v___x_4612_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1(void){
_start:
{
lean_object* v___x_4613_; lean_object* v___x_4614_; 
v___x_4613_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__0);
v___x_4614_ = l_StateRefT_x27_instMonad___redArg(v___x_4613_);
return v___x_4614_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__2(void){
_start:
{
lean_object* v___f_4615_; 
v___f_4615_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_4615_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__3(void){
_start:
{
lean_object* v___f_4616_; 
v___f_4616_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_4616_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__4(void){
_start:
{
lean_object* v___f_4617_; 
v___f_4617_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_4617_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__5(void){
_start:
{
lean_object* v___f_4618_; 
v___f_4618_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_4618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1___boxed(lean_object* v_acc_4619_, lean_object* v_declInfos_4620_, lean_object* v_k_4621_, lean_object* v_kind_4622_, lean_object* v_x_4623_, lean_object* v___y_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_){
_start:
{
uint8_t v_kind_boxed_4629_; lean_object* v_res_4630_; 
v_kind_boxed_4629_ = lean_unbox(v_kind_4622_);
v_res_4630_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1(v_acc_4619_, v_declInfos_4620_, v_k_4621_, v_kind_boxed_4629_, v_x_4623_, v___y_4624_, v___y_4625_, v___y_4626_, v___y_4627_);
lean_dec(v___y_4627_);
lean_dec_ref(v___y_4626_);
lean_dec(v___y_4625_);
lean_dec_ref(v___y_4624_);
return v_res_4630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9(lean_object* v_declInfos_4631_, lean_object* v_k_4632_, uint8_t v_kind_4633_, lean_object* v_acc_4634_, lean_object* v___y_4635_, lean_object* v___y_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_){
_start:
{
lean_object* v___x_4640_; lean_object* v_toApplicative_4641_; lean_object* v_toFunctor_4642_; lean_object* v_toSeq_4643_; lean_object* v_toSeqLeft_4644_; lean_object* v_toSeqRight_4645_; lean_object* v___f_4646_; lean_object* v___f_4647_; lean_object* v___f_4648_; lean_object* v___f_4649_; lean_object* v___x_4650_; lean_object* v___f_4651_; lean_object* v___f_4652_; lean_object* v___f_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; lean_object* v_toApplicative_4657_; lean_object* v___x_4659_; uint8_t v_isShared_4660_; uint8_t v_isSharedCheck_4706_; 
v___x_4640_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__1);
v_toApplicative_4641_ = lean_ctor_get(v___x_4640_, 0);
v_toFunctor_4642_ = lean_ctor_get(v_toApplicative_4641_, 0);
v_toSeq_4643_ = lean_ctor_get(v_toApplicative_4641_, 2);
v_toSeqLeft_4644_ = lean_ctor_get(v_toApplicative_4641_, 3);
v_toSeqRight_4645_ = lean_ctor_get(v_toApplicative_4641_, 4);
v___f_4646_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__2, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__2_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__2);
v___f_4647_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__3, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__3_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__3);
lean_inc_ref_n(v_toFunctor_4642_, 2);
v___f_4648_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4648_, 0, v_toFunctor_4642_);
v___f_4649_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4649_, 0, v_toFunctor_4642_);
v___x_4650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4650_, 0, v___f_4648_);
lean_ctor_set(v___x_4650_, 1, v___f_4649_);
lean_inc(v_toSeqRight_4645_);
v___f_4651_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4651_, 0, v_toSeqRight_4645_);
lean_inc(v_toSeqLeft_4644_);
v___f_4652_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4652_, 0, v_toSeqLeft_4644_);
lean_inc(v_toSeq_4643_);
v___f_4653_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4653_, 0, v_toSeq_4643_);
v___x_4654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4654_, 0, v___x_4650_);
lean_ctor_set(v___x_4654_, 1, v___f_4646_);
lean_ctor_set(v___x_4654_, 2, v___f_4653_);
lean_ctor_set(v___x_4654_, 3, v___f_4652_);
lean_ctor_set(v___x_4654_, 4, v___f_4651_);
v___x_4655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4655_, 0, v___x_4654_);
lean_ctor_set(v___x_4655_, 1, v___f_4647_);
v___x_4656_ = l_StateRefT_x27_instMonad___redArg(v___x_4655_);
v_toApplicative_4657_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4706_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4706_ == 0)
{
lean_object* v_unused_4707_; 
v_unused_4707_ = lean_ctor_get(v___x_4656_, 1);
lean_dec(v_unused_4707_);
v___x_4659_ = v___x_4656_;
v_isShared_4660_ = v_isSharedCheck_4706_;
goto v_resetjp_4658_;
}
else
{
lean_inc(v_toApplicative_4657_);
lean_dec(v___x_4656_);
v___x_4659_ = lean_box(0);
v_isShared_4660_ = v_isSharedCheck_4706_;
goto v_resetjp_4658_;
}
v_resetjp_4658_:
{
lean_object* v_toFunctor_4661_; lean_object* v_toSeq_4662_; lean_object* v_toSeqLeft_4663_; lean_object* v_toSeqRight_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4704_; 
v_toFunctor_4661_ = lean_ctor_get(v_toApplicative_4657_, 0);
v_toSeq_4662_ = lean_ctor_get(v_toApplicative_4657_, 2);
v_toSeqLeft_4663_ = lean_ctor_get(v_toApplicative_4657_, 3);
v_toSeqRight_4664_ = lean_ctor_get(v_toApplicative_4657_, 4);
v_isSharedCheck_4704_ = !lean_is_exclusive(v_toApplicative_4657_);
if (v_isSharedCheck_4704_ == 0)
{
lean_object* v_unused_4705_; 
v_unused_4705_ = lean_ctor_get(v_toApplicative_4657_, 1);
lean_dec(v_unused_4705_);
v___x_4666_ = v_toApplicative_4657_;
v_isShared_4667_ = v_isSharedCheck_4704_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_toSeqRight_4664_);
lean_inc(v_toSeqLeft_4663_);
lean_inc(v_toSeq_4662_);
lean_inc(v_toFunctor_4661_);
lean_dec(v_toApplicative_4657_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4704_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___f_4668_; lean_object* v___f_4669_; lean_object* v___f_4670_; lean_object* v___f_4671_; lean_object* v___x_4672_; lean_object* v___f_4673_; lean_object* v___f_4674_; lean_object* v___f_4675_; lean_object* v___x_4677_; 
v___f_4668_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__4, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__4_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__4);
v___f_4669_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__5, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__5_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___closed__5);
lean_inc_ref(v_toFunctor_4661_);
v___f_4670_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4670_, 0, v_toFunctor_4661_);
v___f_4671_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4671_, 0, v_toFunctor_4661_);
v___x_4672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4672_, 0, v___f_4670_);
lean_ctor_set(v___x_4672_, 1, v___f_4671_);
v___f_4673_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4673_, 0, v_toSeqRight_4664_);
v___f_4674_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4674_, 0, v_toSeqLeft_4663_);
v___f_4675_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4675_, 0, v_toSeq_4662_);
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 4, v___f_4673_);
lean_ctor_set(v___x_4666_, 3, v___f_4674_);
lean_ctor_set(v___x_4666_, 2, v___f_4675_);
lean_ctor_set(v___x_4666_, 1, v___f_4668_);
lean_ctor_set(v___x_4666_, 0, v___x_4672_);
v___x_4677_ = v___x_4666_;
goto v_reusejp_4676_;
}
else
{
lean_object* v_reuseFailAlloc_4703_; 
v_reuseFailAlloc_4703_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4703_, 0, v___x_4672_);
lean_ctor_set(v_reuseFailAlloc_4703_, 1, v___f_4668_);
lean_ctor_set(v_reuseFailAlloc_4703_, 2, v___f_4675_);
lean_ctor_set(v_reuseFailAlloc_4703_, 3, v___f_4674_);
lean_ctor_set(v_reuseFailAlloc_4703_, 4, v___f_4673_);
v___x_4677_ = v_reuseFailAlloc_4703_;
goto v_reusejp_4676_;
}
v_reusejp_4676_:
{
lean_object* v___x_4679_; 
if (v_isShared_4660_ == 0)
{
lean_ctor_set(v___x_4659_, 1, v___f_4669_);
lean_ctor_set(v___x_4659_, 0, v___x_4677_);
v___x_4679_ = v___x_4659_;
goto v_reusejp_4678_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v___x_4677_);
lean_ctor_set(v_reuseFailAlloc_4702_, 1, v___f_4669_);
v___x_4679_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4678_;
}
v_reusejp_4678_:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; uint8_t v___x_4682_; 
v___x_4680_ = lean_array_get_size(v_acc_4634_);
v___x_4681_ = lean_array_get_size(v_declInfos_4631_);
v___x_4682_ = lean_nat_dec_lt(v___x_4680_, v___x_4681_);
if (v___x_4682_ == 0)
{
lean_object* v___x_4683_; 
lean_dec_ref(v___x_4679_);
lean_dec_ref(v_declInfos_4631_);
lean_inc(v___y_4638_);
lean_inc_ref(v___y_4637_);
lean_inc(v___y_4636_);
lean_inc_ref(v___y_4635_);
v___x_4683_ = lean_apply_6(v_k_4632_, v_acc_4634_, v___y_4635_, v___y_4636_, v___y_4637_, v___y_4638_, lean_box(0));
return v___x_4683_;
}
else
{
lean_object* v___f_4684_; lean_object* v___x_4685_; uint8_t v___x_4686_; lean_object* v___f_4687_; lean_object* v___x_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v_snd_4692_; lean_object* v_fst_4693_; lean_object* v_fst_4694_; lean_object* v_snd_4695_; lean_object* v___x_4696_; 
v___f_4684_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4684_, 0, v___x_4679_);
v___x_4685_ = lean_box(0);
v___x_4686_ = 0;
v___f_4687_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4687_, 0, v___f_4684_);
v___x_4688_ = lean_box(v___x_4686_);
v___x_4689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4689_, 0, v___x_4688_);
lean_ctor_set(v___x_4689_, 1, v___f_4687_);
v___x_4690_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4690_, 0, v___x_4685_);
lean_ctor_set(v___x_4690_, 1, v___x_4689_);
v___x_4691_ = lean_array_get(v___x_4690_, v_declInfos_4631_, v___x_4680_);
lean_dec_ref(v___x_4690_);
v_snd_4692_ = lean_ctor_get(v___x_4691_, 1);
lean_inc(v_snd_4692_);
v_fst_4693_ = lean_ctor_get(v___x_4691_, 0);
lean_inc(v_fst_4693_);
lean_dec(v___x_4691_);
v_fst_4694_ = lean_ctor_get(v_snd_4692_, 0);
lean_inc(v_fst_4694_);
v_snd_4695_ = lean_ctor_get(v_snd_4692_, 1);
lean_inc(v_snd_4695_);
lean_dec(v_snd_4692_);
lean_inc(v___y_4638_);
lean_inc_ref(v___y_4637_);
lean_inc(v___y_4636_);
lean_inc_ref(v___y_4635_);
lean_inc_ref(v_acc_4634_);
v___x_4696_ = lean_apply_6(v_snd_4695_, v_acc_4634_, v___y_4635_, v___y_4636_, v___y_4637_, v___y_4638_, lean_box(0));
if (lean_obj_tag(v___x_4696_) == 0)
{
lean_object* v_a_4697_; lean_object* v___x_4698_; lean_object* v___f_4699_; uint8_t v___x_4700_; lean_object* v___x_4701_; 
v_a_4697_ = lean_ctor_get(v___x_4696_, 0);
lean_inc(v_a_4697_);
lean_dec_ref(v___x_4696_);
v___x_4698_ = lean_box(v_kind_4633_);
v___f_4699_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1___boxed), 10, 4);
lean_closure_set(v___f_4699_, 0, v_acc_4634_);
lean_closure_set(v___f_4699_, 1, v_declInfos_4631_);
lean_closure_set(v___f_4699_, 2, v_k_4632_);
lean_closure_set(v___f_4699_, 3, v___x_4698_);
v___x_4700_ = lean_unbox(v_fst_4694_);
lean_dec(v_fst_4694_);
v___x_4701_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts_go_spec__0___redArg(v_fst_4693_, v___x_4700_, v_a_4697_, v___f_4699_, v_kind_4633_, v___y_4635_, v___y_4636_, v___y_4637_, v___y_4638_);
return v___x_4701_;
}
else
{
lean_dec(v_fst_4694_);
lean_dec(v_fst_4693_);
lean_dec_ref(v_acc_4634_);
lean_dec_ref(v_k_4632_);
lean_dec_ref(v_declInfos_4631_);
return v___x_4696_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___lam__1(lean_object* v_acc_4708_, lean_object* v_declInfos_4709_, lean_object* v_k_4710_, uint8_t v_kind_4711_, lean_object* v_x_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_){
_start:
{
lean_object* v___x_4718_; lean_object* v___x_4719_; 
v___x_4718_ = lean_array_push(v_acc_4708_, v_x_4712_);
v___x_4719_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9(v_declInfos_4709_, v_k_4710_, v_kind_4711_, v___x_4718_, v___y_4713_, v___y_4714_, v___y_4715_, v___y_4716_);
return v___x_4719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9___boxed(lean_object* v_declInfos_4720_, lean_object* v_k_4721_, lean_object* v_kind_4722_, lean_object* v_acc_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_, lean_object* v___y_4727_, lean_object* v___y_4728_){
_start:
{
uint8_t v_kind_boxed_4729_; lean_object* v_res_4730_; 
v_kind_boxed_4729_ = lean_unbox(v_kind_4722_);
v_res_4730_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9(v_declInfos_4720_, v_k_4721_, v_kind_boxed_4729_, v_acc_4723_, v___y_4724_, v___y_4725_, v___y_4726_, v___y_4727_);
lean_dec(v___y_4727_);
lean_dec_ref(v___y_4726_);
lean_dec(v___y_4725_);
lean_dec_ref(v___y_4724_);
return v_res_4730_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7(lean_object* v_declInfos_4731_, lean_object* v_k_4732_, uint8_t v_kind_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_){
_start:
{
lean_object* v___x_4739_; lean_object* v___x_4740_; 
v___x_4739_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0);
v___x_4740_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7_spec__9(v_declInfos_4731_, v_k_4732_, v_kind_4733_, v___x_4739_, v___y_4734_, v___y_4735_, v___y_4736_, v___y_4737_);
return v___x_4740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7___boxed(lean_object* v_declInfos_4741_, lean_object* v_k_4742_, lean_object* v_kind_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_, lean_object* v___y_4748_){
_start:
{
uint8_t v_kind_boxed_4749_; lean_object* v_res_4750_; 
v_kind_boxed_4749_ = lean_unbox(v_kind_4743_);
v_res_4750_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7(v_declInfos_4741_, v_k_4742_, v_kind_boxed_4749_, v___y_4744_, v___y_4745_, v___y_4746_, v___y_4747_);
lean_dec(v___y_4747_);
lean_dec_ref(v___y_4746_);
lean_dec(v___y_4745_);
lean_dec_ref(v___y_4744_);
return v_res_4750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5(lean_object* v_declInfos_4751_, lean_object* v_k_4752_, uint8_t v_kind_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_, lean_object* v___y_4756_, lean_object* v___y_4757_){
_start:
{
size_t v_sz_4759_; size_t v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; 
v_sz_4759_ = lean_array_size(v_declInfos_4751_);
v___x_4760_ = ((size_t)0ULL);
v___x_4761_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__6(v_sz_4759_, v___x_4760_, v_declInfos_4751_);
v___x_4762_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5_spec__7(v___x_4761_, v_k_4752_, v_kind_4753_, v___y_4754_, v___y_4755_, v___y_4756_, v___y_4757_);
return v___x_4762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5___boxed(lean_object* v_declInfos_4763_, lean_object* v_k_4764_, lean_object* v_kind_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_){
_start:
{
uint8_t v_kind_boxed_4771_; lean_object* v_res_4772_; 
v_kind_boxed_4771_ = lean_unbox(v_kind_4765_);
v_res_4772_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5(v_declInfos_4763_, v_k_4764_, v_kind_boxed_4771_, v___y_4766_, v___y_4767_, v___y_4768_, v___y_4769_);
lean_dec(v___y_4769_);
lean_dec_ref(v___y_4768_);
lean_dec(v___y_4767_);
lean_dec_ref(v___y_4766_);
return v_res_4772_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0(lean_object* v_snd_4773_, lean_object* v_x_4774_, lean_object* v___y_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_){
_start:
{
lean_object* v___x_4780_; 
v___x_4780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4780_, 0, v_snd_4773_);
return v___x_4780_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0___boxed(lean_object* v_snd_4781_, lean_object* v_x_4782_, lean_object* v___y_4783_, lean_object* v___y_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_, lean_object* v___y_4787_){
_start:
{
lean_object* v_res_4788_; 
v_res_4788_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0(v_snd_4781_, v_x_4782_, v___y_4783_, v___y_4784_, v___y_4785_, v___y_4786_);
lean_dec(v___y_4786_);
lean_dec_ref(v___y_4785_);
lean_dec(v___y_4784_);
lean_dec_ref(v___y_4783_);
lean_dec_ref(v_x_4782_);
return v_res_4788_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4(size_t v_sz_4789_, size_t v_i_4790_, lean_object* v_bs_4791_){
_start:
{
uint8_t v___x_4792_; 
v___x_4792_ = lean_usize_dec_lt(v_i_4790_, v_sz_4789_);
if (v___x_4792_ == 0)
{
return v_bs_4791_;
}
else
{
lean_object* v_v_4793_; lean_object* v_fst_4794_; lean_object* v_snd_4795_; lean_object* v___x_4797_; uint8_t v_isShared_4798_; uint8_t v_isSharedCheck_4809_; 
v_v_4793_ = lean_array_uget(v_bs_4791_, v_i_4790_);
v_fst_4794_ = lean_ctor_get(v_v_4793_, 0);
v_snd_4795_ = lean_ctor_get(v_v_4793_, 1);
v_isSharedCheck_4809_ = !lean_is_exclusive(v_v_4793_);
if (v_isSharedCheck_4809_ == 0)
{
v___x_4797_ = v_v_4793_;
v_isShared_4798_ = v_isSharedCheck_4809_;
goto v_resetjp_4796_;
}
else
{
lean_inc(v_snd_4795_);
lean_inc(v_fst_4794_);
lean_dec(v_v_4793_);
v___x_4797_ = lean_box(0);
v_isShared_4798_ = v_isSharedCheck_4809_;
goto v_resetjp_4796_;
}
v_resetjp_4796_:
{
lean_object* v___x_4799_; lean_object* v_bs_x27_4800_; lean_object* v___f_4801_; lean_object* v___x_4803_; 
v___x_4799_ = lean_unsigned_to_nat(0u);
v_bs_x27_4800_ = lean_array_uset(v_bs_4791_, v_i_4790_, v___x_4799_);
v___f_4801_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___lam__0___boxed), 7, 1);
lean_closure_set(v___f_4801_, 0, v_snd_4795_);
if (v_isShared_4798_ == 0)
{
lean_ctor_set(v___x_4797_, 1, v___f_4801_);
v___x_4803_ = v___x_4797_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4808_; 
v_reuseFailAlloc_4808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4808_, 0, v_fst_4794_);
lean_ctor_set(v_reuseFailAlloc_4808_, 1, v___f_4801_);
v___x_4803_ = v_reuseFailAlloc_4808_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
size_t v___x_4804_; size_t v___x_4805_; lean_object* v___x_4806_; 
v___x_4804_ = ((size_t)1ULL);
v___x_4805_ = lean_usize_add(v_i_4790_, v___x_4804_);
v___x_4806_ = lean_array_uset(v_bs_x27_4800_, v_i_4790_, v___x_4803_);
v_i_4790_ = v___x_4805_;
v_bs_4791_ = v___x_4806_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4___boxed(lean_object* v_sz_4810_, lean_object* v_i_4811_, lean_object* v_bs_4812_){
_start:
{
size_t v_sz_boxed_4813_; size_t v_i_boxed_4814_; lean_object* v_res_4815_; 
v_sz_boxed_4813_ = lean_unbox_usize(v_sz_4810_);
lean_dec(v_sz_4810_);
v_i_boxed_4814_ = lean_unbox_usize(v_i_4811_);
lean_dec(v_i_4811_);
v_res_4815_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4(v_sz_boxed_4813_, v_i_boxed_4814_, v_bs_4812_);
return v_res_4815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4(lean_object* v_declInfos_4816_, lean_object* v_k_4817_, uint8_t v_kind_4818_, lean_object* v___y_4819_, lean_object* v___y_4820_, lean_object* v___y_4821_, lean_object* v___y_4822_){
_start:
{
size_t v_sz_4824_; size_t v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; 
v_sz_4824_ = lean_array_size(v_declInfos_4816_);
v___x_4825_ = ((size_t)0ULL);
v___x_4826_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__4(v_sz_4824_, v___x_4825_, v_declInfos_4816_);
v___x_4827_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4_spec__5(v___x_4826_, v_k_4817_, v_kind_4818_, v___y_4819_, v___y_4820_, v___y_4821_, v___y_4822_);
return v___x_4827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4___boxed(lean_object* v_declInfos_4828_, lean_object* v_k_4829_, lean_object* v_kind_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_, lean_object* v___y_4834_, lean_object* v___y_4835_){
_start:
{
uint8_t v_kind_boxed_4836_; lean_object* v_res_4837_; 
v_kind_boxed_4836_ = lean_unbox(v_kind_4830_);
v_res_4837_ = l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4(v_declInfos_4828_, v_k_4829_, v_kind_boxed_4836_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_);
lean_dec(v___y_4834_);
lean_dec_ref(v___y_4833_);
lean_dec(v___y_4832_);
lean_dec_ref(v___y_4831_);
return v_res_4837_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_4838_; 
v___x_4838_ = lean_mk_string_unchecked("_private.Lean.Meta.Match.MatchEqs.0.Lean.Meta.Match.genMatchCongrEqnsImpl.go", 76, 76);
return v___x_4838_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_4839_; 
v___x_4839_ = lean_mk_string_unchecked("assertion violation: patterns.size == discrs.size\n        ", 58, 58);
return v___x_4839_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4842_; lean_object* v___x_4843_; lean_object* v___x_4844_; lean_object* v___x_4845_; 
v___x_4840_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__1, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__1);
v___x_4841_ = lean_unsigned_to_nat(8u);
v___x_4842_ = lean_unsigned_to_nat(295u);
v___x_4843_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__0);
v___x_4844_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___lam__1___closed__0);
v___x_4845_ = l_mkPanicMessageWithDecl(v___x_4844_, v___x_4843_, v___x_4842_, v___x_4841_, v___x_4840_);
return v___x_4845_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2(lean_object* v___f_4846_, lean_object* v___x_4847_, lean_object* v___x_4848_, lean_object* v___y_4849_, lean_object* v___x_4850_, lean_object* v_overlaps_4851_, lean_object* v_a_4852_, lean_object* v_fst_4853_, lean_object* v___x_4854_, lean_object* v_a_4855_, lean_object* v___x_4856_, lean_object* v___x_4857_, lean_object* v___x_4858_, lean_object* v___x_4859_, lean_object* v___x_4860_, lean_object* v___x_4861_, lean_object* v_matchDeclName_4862_, lean_object* v___x_4863_, lean_object* v___x_4864_, lean_object* v___x_4865_, lean_object* v_altVars_4866_, lean_object* v_args_4867_, lean_object* v___mask_4868_, lean_object* v_altResultType_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_, lean_object* v___y_4872_, lean_object* v___y_4873_){
_start:
{
uint8_t v___x_4875_; lean_object* v___x_4876_; 
v___x_4875_ = 0;
v___x_4876_ = l_Lean_Meta_forallTelescope___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__0___redArg(v_altResultType_4869_, v___f_4846_, v___x_4875_, v___y_4870_, v___y_4871_, v___y_4872_, v___y_4873_);
if (lean_obj_tag(v___x_4876_) == 0)
{
lean_object* v_a_4877_; lean_object* v_start_4878_; lean_object* v_stop_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; uint8_t v___x_4882_; 
v_a_4877_ = lean_ctor_get(v___x_4876_, 0);
lean_inc(v_a_4877_);
lean_dec_ref(v___x_4876_);
v_start_4878_ = lean_ctor_get(v___x_4847_, 1);
v_stop_4879_ = lean_ctor_get(v___x_4847_, 2);
v___x_4880_ = lean_array_get_size(v_a_4877_);
v___x_4881_ = lean_nat_sub(v_stop_4879_, v_start_4878_);
v___x_4882_ = lean_nat_dec_eq(v___x_4880_, v___x_4881_);
if (v___x_4882_ == 0)
{
lean_object* v___x_4883_; lean_object* v___x_4884_; 
lean_dec(v___x_4881_);
lean_dec(v_a_4877_);
lean_dec_ref(v_args_4867_);
lean_dec_ref(v_altVars_4866_);
lean_dec(v___x_4865_);
lean_dec(v___x_4864_);
lean_dec(v___x_4863_);
lean_dec(v_matchDeclName_4862_);
lean_dec(v___x_4861_);
lean_dec_ref(v___x_4860_);
lean_dec_ref(v___x_4859_);
lean_dec(v___x_4858_);
lean_dec_ref(v___x_4857_);
lean_dec(v___x_4856_);
lean_dec_ref(v_a_4855_);
lean_dec_ref(v___x_4854_);
lean_dec(v_fst_4853_);
lean_dec(v_a_4852_);
lean_dec_ref(v_overlaps_4851_);
lean_dec(v___x_4850_);
lean_dec_ref(v___y_4849_);
lean_dec(v___x_4848_);
lean_dec_ref(v___x_4847_);
v___x_4883_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___closed__2);
v___x_4884_ = l_panic___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__1(v___x_4883_, v___y_4870_, v___y_4871_, v___y_4872_, v___y_4873_);
return v___x_4884_;
}
else
{
lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; 
v___x_4885_ = lean_mk_empty_array_with_capacity(v___x_4848_);
lean_inc(v___x_4848_);
lean_inc(v_a_4877_);
v___x_4886_ = l_Array_toSubarray___redArg(v_a_4877_, v___x_4848_, v___x_4880_);
v___x_4887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4887_, 0, v___x_4885_);
lean_ctor_set(v___x_4887_, 1, v___x_4886_);
lean_inc_ref(v___x_4847_);
v___x_4888_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg(v___x_4847_, v___x_4887_, v___y_4870_, v___y_4871_, v___y_4872_, v___y_4873_);
if (lean_obj_tag(v___x_4888_) == 0)
{
lean_object* v_a_4889_; lean_object* v_fst_4890_; lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___f_4893_; uint8_t v___x_4894_; lean_object* v___x_4895_; 
v_a_4889_ = lean_ctor_get(v___x_4888_, 0);
lean_inc(v_a_4889_);
lean_dec_ref(v___x_4888_);
v_fst_4890_ = lean_ctor_get(v_a_4889_, 0);
lean_inc(v_fst_4890_);
lean_dec(v_a_4889_);
v___x_4891_ = lean_box(v___x_4875_);
v___x_4892_ = lean_box(v___x_4882_);
v___f_4893_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__1___boxed), 32, 26);
lean_closure_set(v___f_4893_, 0, v___y_4849_);
lean_closure_set(v___f_4893_, 1, v_args_4867_);
lean_closure_set(v___f_4893_, 2, v___x_4850_);
lean_closure_set(v___f_4893_, 3, v_overlaps_4851_);
lean_closure_set(v___f_4893_, 4, v_a_4852_);
lean_closure_set(v___f_4893_, 5, v_fst_4853_);
lean_closure_set(v___f_4893_, 6, v_a_4877_);
lean_closure_set(v___f_4893_, 7, v___x_4880_);
lean_closure_set(v___f_4893_, 8, v___x_4854_);
lean_closure_set(v___f_4893_, 9, v___x_4848_);
lean_closure_set(v___f_4893_, 10, v___x_4847_);
lean_closure_set(v___f_4893_, 11, v_altVars_4866_);
lean_closure_set(v___f_4893_, 12, v___x_4891_);
lean_closure_set(v___f_4893_, 13, v___x_4892_);
lean_closure_set(v___f_4893_, 14, v_a_4855_);
lean_closure_set(v___f_4893_, 15, v___x_4856_);
lean_closure_set(v___f_4893_, 16, v___x_4857_);
lean_closure_set(v___f_4893_, 17, v___x_4858_);
lean_closure_set(v___f_4893_, 18, v___x_4859_);
lean_closure_set(v___f_4893_, 19, v___x_4860_);
lean_closure_set(v___f_4893_, 20, v___x_4881_);
lean_closure_set(v___f_4893_, 21, v___x_4861_);
lean_closure_set(v___f_4893_, 22, v_matchDeclName_4862_);
lean_closure_set(v___f_4893_, 23, v___x_4863_);
lean_closure_set(v___f_4893_, 24, v___x_4864_);
lean_closure_set(v___f_4893_, 25, v___x_4865_);
v___x_4894_ = 0;
v___x_4895_ = l_Lean_Meta_withLocalDeclsDND___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__4(v_fst_4890_, v___f_4893_, v___x_4894_, v___y_4870_, v___y_4871_, v___y_4872_, v___y_4873_);
return v___x_4895_;
}
else
{
lean_object* v_a_4896_; lean_object* v___x_4898_; uint8_t v_isShared_4899_; uint8_t v_isSharedCheck_4903_; 
lean_dec(v___x_4881_);
lean_dec(v_a_4877_);
lean_dec_ref(v_args_4867_);
lean_dec_ref(v_altVars_4866_);
lean_dec(v___x_4865_);
lean_dec(v___x_4864_);
lean_dec(v___x_4863_);
lean_dec(v_matchDeclName_4862_);
lean_dec(v___x_4861_);
lean_dec_ref(v___x_4860_);
lean_dec_ref(v___x_4859_);
lean_dec(v___x_4858_);
lean_dec_ref(v___x_4857_);
lean_dec(v___x_4856_);
lean_dec_ref(v_a_4855_);
lean_dec_ref(v___x_4854_);
lean_dec(v_fst_4853_);
lean_dec(v_a_4852_);
lean_dec_ref(v_overlaps_4851_);
lean_dec(v___x_4850_);
lean_dec_ref(v___y_4849_);
lean_dec(v___x_4848_);
lean_dec_ref(v___x_4847_);
v_a_4896_ = lean_ctor_get(v___x_4888_, 0);
v_isSharedCheck_4903_ = !lean_is_exclusive(v___x_4888_);
if (v_isSharedCheck_4903_ == 0)
{
v___x_4898_ = v___x_4888_;
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
else
{
lean_inc(v_a_4896_);
lean_dec(v___x_4888_);
v___x_4898_ = lean_box(0);
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
v_resetjp_4897_:
{
lean_object* v___x_4901_; 
if (v_isShared_4899_ == 0)
{
v___x_4901_ = v___x_4898_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4902_; 
v_reuseFailAlloc_4902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4902_, 0, v_a_4896_);
v___x_4901_ = v_reuseFailAlloc_4902_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
return v___x_4901_;
}
}
}
}
}
else
{
lean_object* v_a_4904_; lean_object* v___x_4906_; uint8_t v_isShared_4907_; uint8_t v_isSharedCheck_4911_; 
lean_dec_ref(v_args_4867_);
lean_dec_ref(v_altVars_4866_);
lean_dec(v___x_4865_);
lean_dec(v___x_4864_);
lean_dec(v___x_4863_);
lean_dec(v_matchDeclName_4862_);
lean_dec(v___x_4861_);
lean_dec_ref(v___x_4860_);
lean_dec_ref(v___x_4859_);
lean_dec(v___x_4858_);
lean_dec_ref(v___x_4857_);
lean_dec(v___x_4856_);
lean_dec_ref(v_a_4855_);
lean_dec_ref(v___x_4854_);
lean_dec(v_fst_4853_);
lean_dec(v_a_4852_);
lean_dec_ref(v_overlaps_4851_);
lean_dec(v___x_4850_);
lean_dec_ref(v___y_4849_);
lean_dec(v___x_4848_);
lean_dec_ref(v___x_4847_);
v_a_4904_ = lean_ctor_get(v___x_4876_, 0);
v_isSharedCheck_4911_ = !lean_is_exclusive(v___x_4876_);
if (v_isSharedCheck_4911_ == 0)
{
v___x_4906_ = v___x_4876_;
v_isShared_4907_ = v_isSharedCheck_4911_;
goto v_resetjp_4905_;
}
else
{
lean_inc(v_a_4904_);
lean_dec(v___x_4876_);
v___x_4906_ = lean_box(0);
v_isShared_4907_ = v_isSharedCheck_4911_;
goto v_resetjp_4905_;
}
v_resetjp_4905_:
{
lean_object* v___x_4909_; 
if (v_isShared_4907_ == 0)
{
v___x_4909_ = v___x_4906_;
goto v_reusejp_4908_;
}
else
{
lean_object* v_reuseFailAlloc_4910_; 
v_reuseFailAlloc_4910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4910_, 0, v_a_4904_);
v___x_4909_ = v_reuseFailAlloc_4910_;
goto v_reusejp_4908_;
}
v_reusejp_4908_:
{
return v___x_4909_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___f_4912_ = _args[0];
lean_object* v___x_4913_ = _args[1];
lean_object* v___x_4914_ = _args[2];
lean_object* v___y_4915_ = _args[3];
lean_object* v___x_4916_ = _args[4];
lean_object* v_overlaps_4917_ = _args[5];
lean_object* v_a_4918_ = _args[6];
lean_object* v_fst_4919_ = _args[7];
lean_object* v___x_4920_ = _args[8];
lean_object* v_a_4921_ = _args[9];
lean_object* v___x_4922_ = _args[10];
lean_object* v___x_4923_ = _args[11];
lean_object* v___x_4924_ = _args[12];
lean_object* v___x_4925_ = _args[13];
lean_object* v___x_4926_ = _args[14];
lean_object* v___x_4927_ = _args[15];
lean_object* v_matchDeclName_4928_ = _args[16];
lean_object* v___x_4929_ = _args[17];
lean_object* v___x_4930_ = _args[18];
lean_object* v___x_4931_ = _args[19];
lean_object* v_altVars_4932_ = _args[20];
lean_object* v_args_4933_ = _args[21];
lean_object* v___mask_4934_ = _args[22];
lean_object* v_altResultType_4935_ = _args[23];
lean_object* v___y_4936_ = _args[24];
lean_object* v___y_4937_ = _args[25];
lean_object* v___y_4938_ = _args[26];
lean_object* v___y_4939_ = _args[27];
lean_object* v___y_4940_ = _args[28];
_start:
{
lean_object* v_res_4941_; 
v_res_4941_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2(v___f_4912_, v___x_4913_, v___x_4914_, v___y_4915_, v___x_4916_, v_overlaps_4917_, v_a_4918_, v_fst_4919_, v___x_4920_, v_a_4921_, v___x_4922_, v___x_4923_, v___x_4924_, v___x_4925_, v___x_4926_, v___x_4927_, v_matchDeclName_4928_, v___x_4929_, v___x_4930_, v___x_4931_, v_altVars_4932_, v_args_4933_, v___mask_4934_, v_altResultType_4935_, v___y_4936_, v___y_4937_, v___y_4938_, v___y_4939_);
lean_dec(v___y_4939_);
lean_dec_ref(v___y_4938_);
lean_dec(v___y_4937_);
lean_dec_ref(v___y_4936_);
lean_dec_ref(v___mask_4934_);
return v_res_4941_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___f_4942_; 
v___f_4942_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__0___boxed), 7, 0);
return v___f_4942_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg(lean_object* v_upperBound_4943_, lean_object* v_val_4944_, lean_object* v_matchDeclName_4945_, lean_object* v___x_4946_, lean_object* v___x_4947_, lean_object* v_a_4948_, lean_object* v___x_4949_, lean_object* v___x_4950_, lean_object* v___x_4951_, lean_object* v___x_4952_, lean_object* v___x_4953_, lean_object* v___x_4954_, lean_object* v_a_4955_, lean_object* v_b_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_){
_start:
{
uint8_t v___x_4962_; 
v___x_4962_ = lean_nat_dec_lt(v_a_4955_, v_upperBound_4943_);
if (v___x_4962_ == 0)
{
lean_object* v___x_4963_; 
lean_dec(v_a_4955_);
lean_dec(v___x_4954_);
lean_dec(v___x_4953_);
lean_dec_ref(v___x_4952_);
lean_dec_ref(v___x_4951_);
lean_dec_ref(v___x_4950_);
lean_dec(v___x_4949_);
lean_dec_ref(v_a_4948_);
lean_dec(v___x_4947_);
lean_dec_ref(v___x_4946_);
lean_dec(v_matchDeclName_4945_);
lean_dec_ref(v_val_4944_);
v___x_4963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4963_, 0, v_b_4956_);
return v___x_4963_;
}
else
{
lean_object* v_snd_4964_; lean_object* v_fst_4965_; lean_object* v___x_4967_; uint8_t v_isShared_4968_; uint8_t v_isSharedCheck_5028_; 
v_snd_4964_ = lean_ctor_get(v_b_4956_, 1);
v_fst_4965_ = lean_ctor_get(v_b_4956_, 0);
v_isSharedCheck_5028_ = !lean_is_exclusive(v_b_4956_);
if (v_isSharedCheck_5028_ == 0)
{
v___x_4967_ = v_b_4956_;
v_isShared_4968_ = v_isSharedCheck_5028_;
goto v_resetjp_4966_;
}
else
{
lean_inc(v_snd_4964_);
lean_inc(v_fst_4965_);
lean_dec(v_b_4956_);
v___x_4967_ = lean_box(0);
v_isShared_4968_ = v_isSharedCheck_5028_;
goto v_resetjp_4966_;
}
v_resetjp_4966_:
{
lean_object* v_fst_4969_; lean_object* v_snd_4970_; lean_object* v___x_4972_; uint8_t v_isShared_4973_; uint8_t v_isSharedCheck_5027_; 
v_fst_4969_ = lean_ctor_get(v_snd_4964_, 0);
v_snd_4970_ = lean_ctor_get(v_snd_4964_, 1);
v_isSharedCheck_5027_ = !lean_is_exclusive(v_snd_4964_);
if (v_isSharedCheck_5027_ == 0)
{
v___x_4972_ = v_snd_4964_;
v_isShared_4973_ = v_isSharedCheck_5027_;
goto v_resetjp_4971_;
}
else
{
lean_inc(v_snd_4970_);
lean_inc(v_fst_4969_);
lean_dec(v_snd_4964_);
v___x_4972_ = lean_box(0);
v_isShared_4973_ = v_isSharedCheck_5027_;
goto v_resetjp_4971_;
}
v_resetjp_4971_:
{
lean_object* v_altInfos_4974_; lean_object* v_overlaps_4975_; lean_object* v_start_4976_; lean_object* v_stop_4977_; lean_object* v___f_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___y_4990_; lean_object* v___x_5022_; uint8_t v___x_5023_; 
v_altInfos_4974_ = lean_ctor_get(v_val_4944_, 2);
v_overlaps_4975_ = lean_ctor_get(v_val_4944_, 5);
v_start_4976_ = lean_ctor_get(v___x_4952_, 1);
v_stop_4977_ = lean_ctor_get(v___x_4952_, 2);
v___f_4978_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___closed__0);
v___x_4979_ = l_Lean_Meta_Match_instInhabitedAltParamInfo_default;
v___x_4980_ = lean_unsigned_to_nat(0u);
v___x_4981_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_withNewAlts___redArg___closed__0);
v___x_4982_ = lean_unsigned_to_nat(1u);
v___x_4983_ = lean_box(0);
v___x_4984_ = lean_array_get_borrowed(v___x_4979_, v_altInfos_4974_, v_a_4955_);
v___x_4985_ = l_Lean_Meta_Match_congrEqnThmSuffixBase;
lean_inc(v_matchDeclName_4945_);
v___x_4986_ = l_Lean_Name_str___override(v_matchDeclName_4945_, v___x_4985_);
lean_inc(v_snd_4970_);
v___x_4987_ = lean_name_append_index_after(v___x_4986_, v_snd_4970_);
lean_inc(v___x_4987_);
v___x_4988_ = lean_array_push(v_fst_4965_, v___x_4987_);
v___x_5022_ = lean_nat_sub(v_stop_4977_, v_start_4976_);
v___x_5023_ = lean_nat_dec_lt(v_a_4955_, v___x_5022_);
lean_dec(v___x_5022_);
if (v___x_5023_ == 0)
{
lean_object* v___x_5024_; lean_object* v___x_5025_; 
v___x_5024_ = l_Lean_instInhabitedExpr;
v___x_5025_ = l_outOfBounds___redArg(v___x_5024_);
v___y_4990_ = v___x_5025_;
goto v___jp_4989_;
}
else
{
lean_object* v___x_5026_; 
v___x_5026_ = l_Subarray_get___redArg(v___x_4952_, v_a_4955_);
v___y_4990_ = v___x_5026_;
goto v___jp_4989_;
}
v___jp_4989_:
{
lean_object* v___x_4991_; 
lean_inc(v___y_4960_);
lean_inc_ref(v___y_4959_);
lean_inc(v___y_4958_);
lean_inc_ref(v___y_4957_);
lean_inc_ref(v___y_4990_);
v___x_4991_ = lean_infer_type(v___y_4990_, v___y_4957_, v___y_4958_, v___y_4959_, v___y_4960_);
if (lean_obj_tag(v___x_4991_) == 0)
{
lean_object* v_a_4992_; lean_object* v___f_4993_; lean_object* v___x_4994_; 
v_a_4992_ = lean_ctor_get(v___x_4991_, 0);
lean_inc(v_a_4992_);
lean_dec_ref(v___x_4991_);
lean_inc(v___x_4954_);
lean_inc(v_matchDeclName_4945_);
lean_inc(v___x_4953_);
lean_inc_ref(v___x_4952_);
lean_inc_ref(v___x_4951_);
lean_inc_ref(v___x_4950_);
lean_inc(v___x_4949_);
lean_inc_ref(v_a_4948_);
lean_inc(v_fst_4969_);
lean_inc(v_a_4955_);
lean_inc_ref(v_overlaps_4975_);
lean_inc(v___x_4947_);
lean_inc_ref(v___x_4946_);
v___f_4993_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___lam__2___boxed), 29, 20);
lean_closure_set(v___f_4993_, 0, v___f_4978_);
lean_closure_set(v___f_4993_, 1, v___x_4946_);
lean_closure_set(v___f_4993_, 2, v___x_4980_);
lean_closure_set(v___f_4993_, 3, v___y_4990_);
lean_closure_set(v___f_4993_, 4, v___x_4947_);
lean_closure_set(v___f_4993_, 5, v_overlaps_4975_);
lean_closure_set(v___f_4993_, 6, v_a_4955_);
lean_closure_set(v___f_4993_, 7, v_fst_4969_);
lean_closure_set(v___f_4993_, 8, v___x_4981_);
lean_closure_set(v___f_4993_, 9, v_a_4948_);
lean_closure_set(v___f_4993_, 10, v___x_4949_);
lean_closure_set(v___f_4993_, 11, v___x_4950_);
lean_closure_set(v___f_4993_, 12, v___x_4982_);
lean_closure_set(v___f_4993_, 13, v___x_4951_);
lean_closure_set(v___f_4993_, 14, v___x_4952_);
lean_closure_set(v___f_4993_, 15, v___x_4953_);
lean_closure_set(v___f_4993_, 16, v_matchDeclName_4945_);
lean_closure_set(v___f_4993_, 17, v___x_4987_);
lean_closure_set(v___f_4993_, 18, v___x_4954_);
lean_closure_set(v___f_4993_, 19, v___x_4983_);
lean_inc(v___x_4984_);
v___x_4994_ = l_Lean_Meta_Match_forallAltVarsTelescope___redArg(v_a_4992_, v___x_4984_, v___f_4993_, v___y_4957_, v___y_4958_, v___y_4959_, v___y_4960_);
if (lean_obj_tag(v___x_4994_) == 0)
{
lean_object* v_a_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; lean_object* v___x_4999_; 
v_a_4995_ = lean_ctor_get(v___x_4994_, 0);
lean_inc(v_a_4995_);
lean_dec_ref(v___x_4994_);
v___x_4996_ = lean_array_push(v_fst_4969_, v_a_4995_);
v___x_4997_ = lean_nat_add(v_snd_4970_, v___x_4982_);
lean_dec(v_snd_4970_);
if (v_isShared_4973_ == 0)
{
lean_ctor_set(v___x_4972_, 1, v___x_4997_);
lean_ctor_set(v___x_4972_, 0, v___x_4996_);
v___x_4999_ = v___x_4972_;
goto v_reusejp_4998_;
}
else
{
lean_object* v_reuseFailAlloc_5005_; 
v_reuseFailAlloc_5005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5005_, 0, v___x_4996_);
lean_ctor_set(v_reuseFailAlloc_5005_, 1, v___x_4997_);
v___x_4999_ = v_reuseFailAlloc_5005_;
goto v_reusejp_4998_;
}
v_reusejp_4998_:
{
lean_object* v___x_5001_; 
if (v_isShared_4968_ == 0)
{
lean_ctor_set(v___x_4967_, 1, v___x_4999_);
lean_ctor_set(v___x_4967_, 0, v___x_4988_);
v___x_5001_ = v___x_4967_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5004_; 
v_reuseFailAlloc_5004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5004_, 0, v___x_4988_);
lean_ctor_set(v_reuseFailAlloc_5004_, 1, v___x_4999_);
v___x_5001_ = v_reuseFailAlloc_5004_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
lean_object* v___x_5002_; 
v___x_5002_ = lean_nat_add(v_a_4955_, v___x_4982_);
lean_dec(v_a_4955_);
v_a_4955_ = v___x_5002_;
v_b_4956_ = v___x_5001_;
goto _start;
}
}
}
else
{
lean_object* v_a_5006_; lean_object* v___x_5008_; uint8_t v_isShared_5009_; uint8_t v_isSharedCheck_5013_; 
lean_dec_ref(v___x_4988_);
lean_del_object(v___x_4972_);
lean_dec(v_snd_4970_);
lean_dec(v_fst_4969_);
lean_del_object(v___x_4967_);
lean_dec(v_a_4955_);
lean_dec(v___x_4954_);
lean_dec(v___x_4953_);
lean_dec_ref(v___x_4952_);
lean_dec_ref(v___x_4951_);
lean_dec_ref(v___x_4950_);
lean_dec(v___x_4949_);
lean_dec_ref(v_a_4948_);
lean_dec(v___x_4947_);
lean_dec_ref(v___x_4946_);
lean_dec(v_matchDeclName_4945_);
lean_dec_ref(v_val_4944_);
v_a_5006_ = lean_ctor_get(v___x_4994_, 0);
v_isSharedCheck_5013_ = !lean_is_exclusive(v___x_4994_);
if (v_isSharedCheck_5013_ == 0)
{
v___x_5008_ = v___x_4994_;
v_isShared_5009_ = v_isSharedCheck_5013_;
goto v_resetjp_5007_;
}
else
{
lean_inc(v_a_5006_);
lean_dec(v___x_4994_);
v___x_5008_ = lean_box(0);
v_isShared_5009_ = v_isSharedCheck_5013_;
goto v_resetjp_5007_;
}
v_resetjp_5007_:
{
lean_object* v___x_5011_; 
if (v_isShared_5009_ == 0)
{
v___x_5011_ = v___x_5008_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5012_; 
v_reuseFailAlloc_5012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5012_, 0, v_a_5006_);
v___x_5011_ = v_reuseFailAlloc_5012_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
return v___x_5011_;
}
}
}
}
else
{
lean_object* v_a_5014_; lean_object* v___x_5016_; uint8_t v_isShared_5017_; uint8_t v_isSharedCheck_5021_; 
lean_dec_ref(v___y_4990_);
lean_dec_ref(v___x_4988_);
lean_dec(v___x_4987_);
lean_del_object(v___x_4972_);
lean_dec(v_snd_4970_);
lean_dec(v_fst_4969_);
lean_del_object(v___x_4967_);
lean_dec(v_a_4955_);
lean_dec(v___x_4954_);
lean_dec(v___x_4953_);
lean_dec_ref(v___x_4952_);
lean_dec_ref(v___x_4951_);
lean_dec_ref(v___x_4950_);
lean_dec(v___x_4949_);
lean_dec_ref(v_a_4948_);
lean_dec(v___x_4947_);
lean_dec_ref(v___x_4946_);
lean_dec(v_matchDeclName_4945_);
lean_dec_ref(v_val_4944_);
v_a_5014_ = lean_ctor_get(v___x_4991_, 0);
v_isSharedCheck_5021_ = !lean_is_exclusive(v___x_4991_);
if (v_isSharedCheck_5021_ == 0)
{
v___x_5016_ = v___x_4991_;
v_isShared_5017_ = v_isSharedCheck_5021_;
goto v_resetjp_5015_;
}
else
{
lean_inc(v_a_5014_);
lean_dec(v___x_4991_);
v___x_5016_ = lean_box(0);
v_isShared_5017_ = v_isSharedCheck_5021_;
goto v_resetjp_5015_;
}
v_resetjp_5015_:
{
lean_object* v___x_5019_; 
if (v_isShared_5017_ == 0)
{
v___x_5019_ = v___x_5016_;
goto v_reusejp_5018_;
}
else
{
lean_object* v_reuseFailAlloc_5020_; 
v_reuseFailAlloc_5020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5020_, 0, v_a_5014_);
v___x_5019_ = v_reuseFailAlloc_5020_;
goto v_reusejp_5018_;
}
v_reusejp_5018_:
{
return v___x_5019_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_5029_ = _args[0];
lean_object* v_val_5030_ = _args[1];
lean_object* v_matchDeclName_5031_ = _args[2];
lean_object* v___x_5032_ = _args[3];
lean_object* v___x_5033_ = _args[4];
lean_object* v_a_5034_ = _args[5];
lean_object* v___x_5035_ = _args[6];
lean_object* v___x_5036_ = _args[7];
lean_object* v___x_5037_ = _args[8];
lean_object* v___x_5038_ = _args[9];
lean_object* v___x_5039_ = _args[10];
lean_object* v___x_5040_ = _args[11];
lean_object* v_a_5041_ = _args[12];
lean_object* v_b_5042_ = _args[13];
lean_object* v___y_5043_ = _args[14];
lean_object* v___y_5044_ = _args[15];
lean_object* v___y_5045_ = _args[16];
lean_object* v___y_5046_ = _args[17];
lean_object* v___y_5047_ = _args[18];
_start:
{
lean_object* v_res_5048_; 
v_res_5048_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg(v_upperBound_5029_, v_val_5030_, v_matchDeclName_5031_, v___x_5032_, v___x_5033_, v_a_5034_, v___x_5035_, v___x_5036_, v___x_5037_, v___x_5038_, v___x_5039_, v___x_5040_, v_a_5041_, v_b_5042_, v___y_5043_, v___y_5044_, v___y_5045_, v___y_5046_);
lean_dec(v___y_5046_);
lean_dec_ref(v___y_5045_);
lean_dec(v___y_5044_);
lean_dec_ref(v___y_5043_);
lean_dec(v_upperBound_5029_);
return v_res_5048_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__0(void){
_start:
{
lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; 
v___x_5049_ = lean_unsigned_to_nat(1u);
v___x_5050_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8);
v___x_5051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5051_, 0, v___x_5050_);
lean_ctor_set(v___x_5051_, 1, v___x_5049_);
return v___x_5051_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__1(void){
_start:
{
lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; 
v___x_5052_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__0, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__0_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__0);
v___x_5053_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8);
v___x_5054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5054_, 0, v___x_5053_);
lean_ctor_set(v___x_5054_, 1, v___x_5052_);
return v___x_5054_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1(lean_object* v_val_5055_, lean_object* v___x_5056_, lean_object* v_matchDeclName_5057_, lean_object* v___x_5058_, lean_object* v_a_5059_, lean_object* v___x_5060_, lean_object* v___x_5061_, lean_object* v_xs_5062_, lean_object* v___matchResultType_5063_, lean_object* v___y_5064_, lean_object* v___y_5065_, lean_object* v___y_5066_, lean_object* v___y_5067_){
_start:
{
lean_object* v_numParams_5069_; lean_object* v_numDiscrs_5070_; lean_object* v___x_5071_; lean_object* v___x_5072_; lean_object* v___x_5073_; lean_object* v___x_5074_; lean_object* v_lower_5076_; lean_object* v_upper_5077_; lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; uint8_t v___x_5108_; 
v_numParams_5069_ = lean_ctor_get(v_val_5055_, 0);
v_numDiscrs_5070_ = lean_ctor_get(v_val_5055_, 1);
v___x_5071_ = lean_unsigned_to_nat(0u);
lean_inc(v_numParams_5069_);
lean_inc_ref(v_xs_5062_);
v___x_5072_ = l_Array_toSubarray___redArg(v_xs_5062_, v___x_5071_, v_numParams_5069_);
v___x_5073_ = l_Lean_Meta_Match_MatcherInfo_getMotivePos(v_val_5055_);
v___x_5074_ = lean_array_get(v___x_5056_, v_xs_5062_, v___x_5073_);
lean_dec(v___x_5073_);
v___x_5105_ = lean_array_get_size(v_xs_5062_);
v___x_5106_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_5055_);
v___x_5107_ = lean_nat_sub(v___x_5105_, v___x_5106_);
lean_dec(v___x_5106_);
v___x_5108_ = lean_nat_dec_le(v___x_5107_, v___x_5071_);
if (v___x_5108_ == 0)
{
v_lower_5076_ = v___x_5107_;
v_upper_5077_ = v___x_5105_;
goto v___jp_5075_;
}
else
{
lean_dec(v___x_5107_);
v_lower_5076_ = v___x_5071_;
v_upper_5077_ = v___x_5105_;
goto v___jp_5075_;
}
v___jp_5075_:
{
lean_object* v___x_5078_; lean_object* v_start_5079_; lean_object* v_stop_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; 
lean_inc_ref(v_xs_5062_);
v___x_5078_ = l_Array_toSubarray___redArg(v_xs_5062_, v_lower_5076_, v_upper_5077_);
v_start_5079_ = lean_ctor_get(v___x_5078_, 1);
lean_inc(v_start_5079_);
v_stop_5080_ = lean_ctor_get(v___x_5078_, 2);
lean_inc(v_stop_5080_);
v___x_5081_ = lean_unsigned_to_nat(1u);
v___x_5082_ = lean_nat_add(v_numParams_5069_, v___x_5081_);
v___x_5083_ = lean_nat_add(v___x_5082_, v_numDiscrs_5070_);
v___x_5084_ = lean_nat_sub(v_stop_5080_, v_start_5079_);
lean_dec(v_start_5079_);
lean_dec(v_stop_5080_);
v___x_5085_ = l_Array_toSubarray___redArg(v_xs_5062_, v___x_5082_, v___x_5083_);
v___x_5086_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___closed__1);
lean_inc(v___x_5084_);
v___x_5087_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg(v___x_5084_, v_val_5055_, v_matchDeclName_5057_, v___x_5085_, v___x_5058_, v_a_5059_, v___x_5060_, v___x_5072_, v___x_5074_, v___x_5078_, v___x_5084_, v___x_5061_, v___x_5071_, v___x_5086_, v___y_5064_, v___y_5065_, v___y_5066_, v___y_5067_);
lean_dec(v___x_5084_);
if (lean_obj_tag(v___x_5087_) == 0)
{
lean_object* v___x_5089_; uint8_t v_isShared_5090_; uint8_t v_isSharedCheck_5095_; 
v_isSharedCheck_5095_ = !lean_is_exclusive(v___x_5087_);
if (v_isSharedCheck_5095_ == 0)
{
lean_object* v_unused_5096_; 
v_unused_5096_ = lean_ctor_get(v___x_5087_, 0);
lean_dec(v_unused_5096_);
v___x_5089_ = v___x_5087_;
v_isShared_5090_ = v_isSharedCheck_5095_;
goto v_resetjp_5088_;
}
else
{
lean_dec(v___x_5087_);
v___x_5089_ = lean_box(0);
v_isShared_5090_ = v_isSharedCheck_5095_;
goto v_resetjp_5088_;
}
v_resetjp_5088_:
{
lean_object* v___x_5091_; lean_object* v___x_5093_; 
v___x_5091_ = lean_box(0);
if (v_isShared_5090_ == 0)
{
lean_ctor_set(v___x_5089_, 0, v___x_5091_);
v___x_5093_ = v___x_5089_;
goto v_reusejp_5092_;
}
else
{
lean_object* v_reuseFailAlloc_5094_; 
v_reuseFailAlloc_5094_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5094_, 0, v___x_5091_);
v___x_5093_ = v_reuseFailAlloc_5094_;
goto v_reusejp_5092_;
}
v_reusejp_5092_:
{
return v___x_5093_;
}
}
}
else
{
lean_object* v_a_5097_; lean_object* v___x_5099_; uint8_t v_isShared_5100_; uint8_t v_isSharedCheck_5104_; 
v_a_5097_ = lean_ctor_get(v___x_5087_, 0);
v_isSharedCheck_5104_ = !lean_is_exclusive(v___x_5087_);
if (v_isSharedCheck_5104_ == 0)
{
v___x_5099_ = v___x_5087_;
v_isShared_5100_ = v_isSharedCheck_5104_;
goto v_resetjp_5098_;
}
else
{
lean_inc(v_a_5097_);
lean_dec(v___x_5087_);
v___x_5099_ = lean_box(0);
v_isShared_5100_ = v_isSharedCheck_5104_;
goto v_resetjp_5098_;
}
v_resetjp_5098_:
{
lean_object* v___x_5102_; 
if (v_isShared_5100_ == 0)
{
v___x_5102_ = v___x_5099_;
goto v_reusejp_5101_;
}
else
{
lean_object* v_reuseFailAlloc_5103_; 
v_reuseFailAlloc_5103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5103_, 0, v_a_5097_);
v___x_5102_ = v_reuseFailAlloc_5103_;
goto v_reusejp_5101_;
}
v_reusejp_5101_:
{
return v___x_5102_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___boxed(lean_object* v_val_5109_, lean_object* v___x_5110_, lean_object* v_matchDeclName_5111_, lean_object* v___x_5112_, lean_object* v_a_5113_, lean_object* v___x_5114_, lean_object* v___x_5115_, lean_object* v_xs_5116_, lean_object* v___matchResultType_5117_, lean_object* v___y_5118_, lean_object* v___y_5119_, lean_object* v___y_5120_, lean_object* v___y_5121_, lean_object* v___y_5122_){
_start:
{
lean_object* v_res_5123_; 
v_res_5123_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1(v_val_5109_, v___x_5110_, v_matchDeclName_5111_, v___x_5112_, v_a_5113_, v___x_5114_, v___x_5115_, v_xs_5116_, v___matchResultType_5117_, v___y_5118_, v___y_5119_, v___y_5120_, v___y_5121_);
lean_dec(v___y_5121_);
lean_dec_ref(v___y_5120_);
lean_dec(v___y_5119_);
lean_dec_ref(v___y_5118_);
lean_dec_ref(v___matchResultType_5117_);
lean_dec_ref(v___x_5110_);
return v_res_5123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go(lean_object* v_matchDeclName_5124_, lean_object* v_a_5125_, lean_object* v_a_5126_, lean_object* v_a_5127_, lean_object* v_a_5128_){
_start:
{
uint8_t v_trackZetaDelta_5130_; lean_object* v_zetaDeltaSet_5131_; lean_object* v_lctx_5132_; lean_object* v_localInstances_5133_; lean_object* v_defEqCtx_x3f_5134_; lean_object* v_synthPendingDepth_5135_; lean_object* v_canUnfold_x3f_5136_; uint8_t v_univApprox_5137_; uint8_t v_inTypeClassResolution_5138_; uint8_t v_cacheInferType_5139_; lean_object* v___x_5140_; lean_object* v___x_5142_; uint8_t v_isShared_5143_; uint8_t v_isSharedCheck_5183_; 
v_trackZetaDelta_5130_ = lean_ctor_get_uint8(v_a_5125_, sizeof(void*)*7);
v_zetaDeltaSet_5131_ = lean_ctor_get(v_a_5125_, 1);
lean_inc(v_zetaDeltaSet_5131_);
v_lctx_5132_ = lean_ctor_get(v_a_5125_, 2);
lean_inc_ref(v_lctx_5132_);
v_localInstances_5133_ = lean_ctor_get(v_a_5125_, 3);
lean_inc_ref(v_localInstances_5133_);
v_defEqCtx_x3f_5134_ = lean_ctor_get(v_a_5125_, 4);
lean_inc(v_defEqCtx_x3f_5134_);
v_synthPendingDepth_5135_ = lean_ctor_get(v_a_5125_, 5);
lean_inc(v_synthPendingDepth_5135_);
v_canUnfold_x3f_5136_ = lean_ctor_get(v_a_5125_, 6);
lean_inc(v_canUnfold_x3f_5136_);
v_univApprox_5137_ = lean_ctor_get_uint8(v_a_5125_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_5138_ = lean_ctor_get_uint8(v_a_5125_, sizeof(void*)*7 + 2);
v_cacheInferType_5139_ = lean_ctor_get_uint8(v_a_5125_, sizeof(void*)*7 + 3);
v___x_5140_ = l_Lean_Meta_Context_config(v_a_5125_);
v_isSharedCheck_5183_ = !lean_is_exclusive(v_a_5125_);
if (v_isSharedCheck_5183_ == 0)
{
lean_object* v_unused_5184_; lean_object* v_unused_5185_; lean_object* v_unused_5186_; lean_object* v_unused_5187_; lean_object* v_unused_5188_; lean_object* v_unused_5189_; lean_object* v_unused_5190_; 
v_unused_5184_ = lean_ctor_get(v_a_5125_, 6);
lean_dec(v_unused_5184_);
v_unused_5185_ = lean_ctor_get(v_a_5125_, 5);
lean_dec(v_unused_5185_);
v_unused_5186_ = lean_ctor_get(v_a_5125_, 4);
lean_dec(v_unused_5186_);
v_unused_5187_ = lean_ctor_get(v_a_5125_, 3);
lean_dec(v_unused_5187_);
v_unused_5188_ = lean_ctor_get(v_a_5125_, 2);
lean_dec(v_unused_5188_);
v_unused_5189_ = lean_ctor_get(v_a_5125_, 1);
lean_dec(v_unused_5189_);
v_unused_5190_ = lean_ctor_get(v_a_5125_, 0);
lean_dec(v_unused_5190_);
v___x_5142_ = v_a_5125_;
v_isShared_5143_ = v_isSharedCheck_5183_;
goto v_resetjp_5141_;
}
else
{
lean_dec(v_a_5125_);
v___x_5142_ = lean_box(0);
v_isShared_5143_ = v_isSharedCheck_5183_;
goto v_resetjp_5141_;
}
v_resetjp_5141_:
{
lean_object* v___x_5144_; uint64_t v___x_5145_; lean_object* v___x_5146_; lean_object* v___x_5148_; 
v___x_5144_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__0(v___x_5140_);
v___x_5145_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_5144_);
v___x_5146_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_5146_, 0, v___x_5144_);
lean_ctor_set_uint64(v___x_5146_, sizeof(void*)*1, v___x_5145_);
lean_inc(v_canUnfold_x3f_5136_);
lean_inc(v_synthPendingDepth_5135_);
lean_inc(v_defEqCtx_x3f_5134_);
lean_inc_ref(v_localInstances_5133_);
lean_inc_ref(v_lctx_5132_);
lean_inc(v_zetaDeltaSet_5131_);
if (v_isShared_5143_ == 0)
{
lean_ctor_set(v___x_5142_, 0, v___x_5146_);
v___x_5148_ = v___x_5142_;
goto v_reusejp_5147_;
}
else
{
lean_object* v_reuseFailAlloc_5182_; 
v_reuseFailAlloc_5182_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_5182_, 0, v___x_5146_);
lean_ctor_set(v_reuseFailAlloc_5182_, 1, v_zetaDeltaSet_5131_);
lean_ctor_set(v_reuseFailAlloc_5182_, 2, v_lctx_5132_);
lean_ctor_set(v_reuseFailAlloc_5182_, 3, v_localInstances_5133_);
lean_ctor_set(v_reuseFailAlloc_5182_, 4, v_defEqCtx_x3f_5134_);
lean_ctor_set(v_reuseFailAlloc_5182_, 5, v_synthPendingDepth_5135_);
lean_ctor_set(v_reuseFailAlloc_5182_, 6, v_canUnfold_x3f_5136_);
lean_ctor_set_uint8(v_reuseFailAlloc_5182_, sizeof(void*)*7, v_trackZetaDelta_5130_);
lean_ctor_set_uint8(v_reuseFailAlloc_5182_, sizeof(void*)*7 + 1, v_univApprox_5137_);
lean_ctor_set_uint8(v_reuseFailAlloc_5182_, sizeof(void*)*7 + 2, v_inTypeClassResolution_5138_);
lean_ctor_set_uint8(v_reuseFailAlloc_5182_, sizeof(void*)*7 + 3, v_cacheInferType_5139_);
v___x_5148_ = v_reuseFailAlloc_5182_;
goto v_reusejp_5147_;
}
v_reusejp_5147_:
{
lean_object* v___x_5149_; lean_object* v___x_5150_; uint64_t v___x_5151_; lean_object* v___x_5152_; lean_object* v___x_5153_; lean_object* v___x_5154_; 
v___x_5149_ = l_Lean_Meta_Context_config(v___x_5148_);
lean_dec_ref(v___x_5148_);
v___x_5150_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__0(v___x_5149_);
v___x_5151_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_5150_);
v___x_5152_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_5152_, 0, v___x_5150_);
lean_ctor_set_uint64(v___x_5152_, sizeof(void*)*1, v___x_5151_);
v___x_5153_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_5153_, 0, v___x_5152_);
lean_ctor_set(v___x_5153_, 1, v_zetaDeltaSet_5131_);
lean_ctor_set(v___x_5153_, 2, v_lctx_5132_);
lean_ctor_set(v___x_5153_, 3, v_localInstances_5133_);
lean_ctor_set(v___x_5153_, 4, v_defEqCtx_x3f_5134_);
lean_ctor_set(v___x_5153_, 5, v_synthPendingDepth_5135_);
lean_ctor_set(v___x_5153_, 6, v_canUnfold_x3f_5136_);
lean_ctor_set_uint8(v___x_5153_, sizeof(void*)*7, v_trackZetaDelta_5130_);
lean_ctor_set_uint8(v___x_5153_, sizeof(void*)*7 + 1, v_univApprox_5137_);
lean_ctor_set_uint8(v___x_5153_, sizeof(void*)*7 + 2, v_inTypeClassResolution_5138_);
lean_ctor_set_uint8(v___x_5153_, sizeof(void*)*7 + 3, v_cacheInferType_5139_);
lean_inc(v_matchDeclName_5124_);
v___x_5154_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0(v_matchDeclName_5124_, v___x_5153_, v_a_5126_, v_a_5127_, v_a_5128_);
if (lean_obj_tag(v___x_5154_) == 0)
{
lean_object* v_a_5155_; lean_object* v___x_5156_; lean_object* v_a_5157_; 
v_a_5155_ = lean_ctor_get(v___x_5154_, 0);
lean_inc(v_a_5155_);
lean_dec_ref(v___x_5154_);
lean_inc(v_matchDeclName_5124_);
v___x_5156_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___redArg(v_matchDeclName_5124_, v_a_5128_);
v_a_5157_ = lean_ctor_get(v___x_5156_, 0);
lean_inc(v_a_5157_);
lean_dec_ref(v___x_5156_);
if (lean_obj_tag(v_a_5157_) == 1)
{
lean_object* v_val_5158_; lean_object* v___x_5159_; lean_object* v___x_5160_; lean_object* v___x_5161_; lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v___f_5164_; lean_object* v___x_5165_; uint8_t v___x_5166_; lean_object* v___x_5167_; 
v_val_5158_ = lean_ctor_get(v_a_5157_, 0);
lean_inc(v_val_5158_);
lean_dec_ref(v_a_5157_);
v___x_5159_ = l_Lean_instInhabitedExpr;
v___x_5160_ = l_Lean_ConstantInfo_levelParams(v_a_5155_);
v___x_5161_ = lean_box(0);
lean_inc(v___x_5160_);
v___x_5162_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__2(v___x_5160_, v___x_5161_);
v___x_5163_ = l_Lean_Meta_Match_MatcherInfo_getNumDiscrEqs(v_val_5158_);
lean_inc(v_a_5155_);
v___f_5164_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___lam__1___boxed), 14, 7);
lean_closure_set(v___f_5164_, 0, v_val_5158_);
lean_closure_set(v___f_5164_, 1, v___x_5159_);
lean_closure_set(v___f_5164_, 2, v_matchDeclName_5124_);
lean_closure_set(v___f_5164_, 3, v___x_5163_);
lean_closure_set(v___f_5164_, 4, v_a_5155_);
lean_closure_set(v___f_5164_, 5, v___x_5162_);
lean_closure_set(v___f_5164_, 6, v___x_5160_);
v___x_5165_ = l_Lean_ConstantInfo_type(v_a_5155_);
lean_dec(v_a_5155_);
v___x_5166_ = 0;
v___x_5167_ = l_Lean_Meta_forallTelescopeReducing___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__9___redArg(v___x_5165_, v___f_5164_, v___x_5166_, v___x_5166_, v___x_5153_, v_a_5126_, v_a_5127_, v_a_5128_);
lean_dec_ref(v___x_5153_);
return v___x_5167_;
}
else
{
lean_object* v___x_5168_; lean_object* v___x_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; lean_object* v___x_5173_; 
lean_dec(v_a_5157_);
lean_dec(v_a_5155_);
v___x_5168_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_5169_ = l_Lean_MessageData_ofName(v_matchDeclName_5124_);
v___x_5170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5170_, 0, v___x_5168_);
lean_ctor_set(v___x_5170_, 1, v___x_5169_);
v___x_5171_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1);
v___x_5172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5172_, 0, v___x_5170_);
lean_ctor_set(v___x_5172_, 1, v___x_5171_);
v___x_5173_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_5172_, v___x_5153_, v_a_5126_, v_a_5127_, v_a_5128_);
lean_dec_ref(v___x_5153_);
return v___x_5173_;
}
}
else
{
lean_object* v_a_5174_; lean_object* v___x_5176_; uint8_t v_isShared_5177_; uint8_t v_isSharedCheck_5181_; 
lean_dec_ref(v___x_5153_);
lean_dec(v_matchDeclName_5124_);
v_a_5174_ = lean_ctor_get(v___x_5154_, 0);
v_isSharedCheck_5181_ = !lean_is_exclusive(v___x_5154_);
if (v_isSharedCheck_5181_ == 0)
{
v___x_5176_ = v___x_5154_;
v_isShared_5177_ = v_isSharedCheck_5181_;
goto v_resetjp_5175_;
}
else
{
lean_inc(v_a_5174_);
lean_dec(v___x_5154_);
v___x_5176_ = lean_box(0);
v_isShared_5177_ = v_isSharedCheck_5181_;
goto v_resetjp_5175_;
}
v_resetjp_5175_:
{
lean_object* v___x_5179_; 
if (v_isShared_5177_ == 0)
{
v___x_5179_ = v___x_5176_;
goto v_reusejp_5178_;
}
else
{
lean_object* v_reuseFailAlloc_5180_; 
v_reuseFailAlloc_5180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5180_, 0, v_a_5174_);
v___x_5179_ = v_reuseFailAlloc_5180_;
goto v_reusejp_5178_;
}
v_reusejp_5178_:
{
return v___x_5179_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___boxed(lean_object* v_matchDeclName_5191_, lean_object* v_a_5192_, lean_object* v_a_5193_, lean_object* v_a_5194_, lean_object* v_a_5195_, lean_object* v_a_5196_){
_start:
{
lean_object* v_res_5197_; 
v_res_5197_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go(v_matchDeclName_5191_, v_a_5192_, v_a_5193_, v_a_5194_, v_a_5195_);
lean_dec(v_a_5195_);
lean_dec_ref(v_a_5194_);
lean_dec(v_a_5193_);
return v_res_5197_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2(lean_object* v_inst_5198_, lean_object* v_R_5199_, lean_object* v_a_5200_, lean_object* v_b_5201_, lean_object* v_c_5202_, lean_object* v___y_5203_, lean_object* v___y_5204_, lean_object* v___y_5205_, lean_object* v___y_5206_){
_start:
{
lean_object* v___x_5208_; 
v___x_5208_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___redArg(v_a_5200_, v_b_5201_, v___y_5203_, v___y_5204_, v___y_5205_, v___y_5206_);
return v___x_5208_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2___boxed(lean_object* v_inst_5209_, lean_object* v_R_5210_, lean_object* v_a_5211_, lean_object* v_b_5212_, lean_object* v_c_5213_, lean_object* v___y_5214_, lean_object* v___y_5215_, lean_object* v___y_5216_, lean_object* v___y_5217_, lean_object* v___y_5218_){
_start:
{
lean_object* v_res_5219_; 
v_res_5219_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__2(v_inst_5209_, v_R_5210_, v_a_5211_, v_b_5212_, v_c_5213_, v___y_5214_, v___y_5215_, v___y_5216_, v___y_5217_);
lean_dec(v___y_5217_);
lean_dec_ref(v___y_5216_);
lean_dec(v___y_5215_);
lean_dec_ref(v___y_5214_);
return v_res_5219_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5(lean_object* v_upperBound_5220_, lean_object* v_val_5221_, lean_object* v_matchDeclName_5222_, lean_object* v___x_5223_, lean_object* v___x_5224_, lean_object* v_a_5225_, lean_object* v___x_5226_, lean_object* v___x_5227_, lean_object* v___x_5228_, lean_object* v___x_5229_, lean_object* v___x_5230_, lean_object* v___x_5231_, lean_object* v_inst_5232_, lean_object* v_R_5233_, lean_object* v_a_5234_, lean_object* v_b_5235_, lean_object* v_c_5236_, lean_object* v___y_5237_, lean_object* v___y_5238_, lean_object* v___y_5239_, lean_object* v___y_5240_){
_start:
{
lean_object* v___x_5242_; 
v___x_5242_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___redArg(v_upperBound_5220_, v_val_5221_, v_matchDeclName_5222_, v___x_5223_, v___x_5224_, v_a_5225_, v___x_5226_, v___x_5227_, v___x_5228_, v___x_5229_, v___x_5230_, v___x_5231_, v_a_5234_, v_b_5235_, v___y_5237_, v___y_5238_, v___y_5239_, v___y_5240_);
return v___x_5242_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5___boxed(lean_object** _args){
lean_object* v_upperBound_5243_ = _args[0];
lean_object* v_val_5244_ = _args[1];
lean_object* v_matchDeclName_5245_ = _args[2];
lean_object* v___x_5246_ = _args[3];
lean_object* v___x_5247_ = _args[4];
lean_object* v_a_5248_ = _args[5];
lean_object* v___x_5249_ = _args[6];
lean_object* v___x_5250_ = _args[7];
lean_object* v___x_5251_ = _args[8];
lean_object* v___x_5252_ = _args[9];
lean_object* v___x_5253_ = _args[10];
lean_object* v___x_5254_ = _args[11];
lean_object* v_inst_5255_ = _args[12];
lean_object* v_R_5256_ = _args[13];
lean_object* v_a_5257_ = _args[14];
lean_object* v_b_5258_ = _args[15];
lean_object* v_c_5259_ = _args[16];
lean_object* v___y_5260_ = _args[17];
lean_object* v___y_5261_ = _args[18];
lean_object* v___y_5262_ = _args[19];
lean_object* v___y_5263_ = _args[20];
lean_object* v___y_5264_ = _args[21];
_start:
{
lean_object* v_res_5265_; 
v_res_5265_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go_spec__5(v_upperBound_5243_, v_val_5244_, v_matchDeclName_5245_, v___x_5246_, v___x_5247_, v_a_5248_, v___x_5249_, v___x_5250_, v___x_5251_, v___x_5252_, v___x_5253_, v___x_5254_, v_inst_5255_, v_R_5256_, v_a_5257_, v_b_5258_, v_c_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_);
lean_dec(v___y_5263_);
lean_dec_ref(v___y_5262_);
lean_dec(v___y_5261_);
lean_dec_ref(v___y_5260_);
lean_dec(v_upperBound_5243_);
return v_res_5265_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg(lean_object* v_upperBound_5266_, lean_object* v_matchDeclName_5267_, lean_object* v_a_5268_, lean_object* v_b_5269_){
_start:
{
uint8_t v___x_5271_; 
v___x_5271_ = lean_nat_dec_lt(v_a_5268_, v_upperBound_5266_);
if (v___x_5271_ == 0)
{
lean_object* v___x_5272_; 
lean_dec(v_a_5268_);
lean_dec(v_matchDeclName_5267_);
v___x_5272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5272_, 0, v_b_5269_);
return v___x_5272_;
}
else
{
lean_object* v___x_5273_; lean_object* v___x_5274_; lean_object* v___x_5275_; lean_object* v___x_5276_; lean_object* v___x_5277_; lean_object* v___x_5278_; 
v___x_5273_ = l_Lean_Meta_Match_congrEqnThmSuffixBase;
lean_inc(v_matchDeclName_5267_);
v___x_5274_ = l_Lean_Name_str___override(v_matchDeclName_5267_, v___x_5273_);
v___x_5275_ = lean_unsigned_to_nat(1u);
v___x_5276_ = lean_nat_add(v_a_5268_, v___x_5275_);
lean_dec(v_a_5268_);
lean_inc(v___x_5276_);
v___x_5277_ = lean_name_append_index_after(v___x_5274_, v___x_5276_);
v___x_5278_ = lean_array_push(v_b_5269_, v___x_5277_);
v_a_5268_ = v___x_5276_;
v_b_5269_ = v___x_5278_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg___boxed(lean_object* v_upperBound_5280_, lean_object* v_matchDeclName_5281_, lean_object* v_a_5282_, lean_object* v_b_5283_, lean_object* v___y_5284_){
_start:
{
lean_object* v_res_5285_; 
v_res_5285_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg(v_upperBound_5280_, v_matchDeclName_5281_, v_a_5282_, v_b_5283_);
lean_dec(v_upperBound_5280_);
return v_res_5285_;
}
}
LEAN_EXPORT lean_object* lean_get_congr_match_equations_for(lean_object* v_matchDeclName_5286_, lean_object* v_a_5287_, lean_object* v_a_5288_, lean_object* v_a_5289_, lean_object* v_a_5290_){
_start:
{
lean_object* v___x_5292_; lean_object* v_firstEqnName_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; 
v___x_5292_ = l_Lean_Meta_Match_congrEqn1ThmSuffix;
lean_inc_n(v_matchDeclName_5286_, 3);
v_firstEqnName_5293_ = l_Lean_Name_str___override(v_matchDeclName_5286_, v___x_5292_);
v___x_5294_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_genMatchCongrEqnsImpl_go___boxed), 6, 1);
lean_closure_set(v___x_5294_, 0, v_matchDeclName_5286_);
v___x_5295_ = l_Lean_Meta_realizeConst(v_matchDeclName_5286_, v_firstEqnName_5293_, v___x_5294_, v_a_5287_, v_a_5288_, v_a_5289_, v_a_5290_);
if (lean_obj_tag(v___x_5295_) == 0)
{
lean_object* v___x_5296_; lean_object* v_a_5297_; 
lean_dec_ref(v___x_5295_);
lean_inc(v_matchDeclName_5286_);
v___x_5296_ = l_Lean_Meta_getMatcherInfo_x3f___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__1___redArg(v_matchDeclName_5286_, v_a_5290_);
v_a_5297_ = lean_ctor_get(v___x_5296_, 0);
lean_inc(v_a_5297_);
lean_dec_ref(v___x_5296_);
if (lean_obj_tag(v_a_5297_) == 1)
{
lean_object* v_val_5298_; lean_object* v___x_5299_; lean_object* v___x_5300_; lean_object* v___x_5301_; lean_object* v___x_5302_; 
lean_dec(v_a_5290_);
lean_dec_ref(v_a_5289_);
lean_dec(v_a_5288_);
lean_dec_ref(v_a_5287_);
v_val_5298_ = lean_ctor_get(v_a_5297_, 0);
lean_inc(v_val_5298_);
lean_dec_ref(v_a_5297_);
v___x_5299_ = l_Lean_Meta_Match_MatcherInfo_numAlts(v_val_5298_);
lean_dec(v_val_5298_);
v___x_5300_ = lean_unsigned_to_nat(0u);
v___x_5301_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__8);
v___x_5302_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg(v___x_5299_, v_matchDeclName_5286_, v___x_5300_, v___x_5301_);
lean_dec(v___x_5299_);
return v___x_5302_;
}
else
{
lean_object* v___x_5303_; lean_object* v___x_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; 
lean_dec(v_a_5297_);
v___x_5303_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go_spec__0_spec__0_spec__4___redArg___closed__3);
v___x_5304_ = l_Lean_MessageData_ofName(v_matchDeclName_5286_);
v___x_5305_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5305_, 0, v___x_5303_);
lean_ctor_set(v___x_5305_, 1, v___x_5304_);
v___x_5306_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_getEquationsForImpl_go___closed__1);
v___x_5307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5307_, 0, v___x_5305_);
lean_ctor_set(v___x_5307_, 1, v___x_5306_);
v___x_5308_ = l_Lean_throwError___at___00__private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_mkAppDiscrEqs_go_spec__2___redArg(v___x_5307_, v_a_5287_, v_a_5288_, v_a_5289_, v_a_5290_);
lean_dec(v_a_5290_);
lean_dec_ref(v_a_5289_);
lean_dec(v_a_5288_);
lean_dec_ref(v_a_5287_);
return v___x_5308_;
}
}
else
{
lean_object* v_a_5309_; lean_object* v___x_5311_; uint8_t v_isShared_5312_; uint8_t v_isSharedCheck_5316_; 
lean_dec(v_a_5290_);
lean_dec_ref(v_a_5289_);
lean_dec(v_a_5288_);
lean_dec_ref(v_a_5287_);
lean_dec(v_matchDeclName_5286_);
v_a_5309_ = lean_ctor_get(v___x_5295_, 0);
v_isSharedCheck_5316_ = !lean_is_exclusive(v___x_5295_);
if (v_isSharedCheck_5316_ == 0)
{
v___x_5311_ = v___x_5295_;
v_isShared_5312_ = v_isSharedCheck_5316_;
goto v_resetjp_5310_;
}
else
{
lean_inc(v_a_5309_);
lean_dec(v___x_5295_);
v___x_5311_ = lean_box(0);
v_isShared_5312_ = v_isSharedCheck_5316_;
goto v_resetjp_5310_;
}
v_resetjp_5310_:
{
lean_object* v___x_5314_; 
if (v_isShared_5312_ == 0)
{
v___x_5314_ = v___x_5311_;
goto v_reusejp_5313_;
}
else
{
lean_object* v_reuseFailAlloc_5315_; 
v_reuseFailAlloc_5315_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5315_, 0, v_a_5309_);
v___x_5314_ = v_reuseFailAlloc_5315_;
goto v_reusejp_5313_;
}
v_reusejp_5313_:
{
return v___x_5314_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_genMatchCongrEqnsImpl___boxed(lean_object* v_matchDeclName_5317_, lean_object* v_a_5318_, lean_object* v_a_5319_, lean_object* v_a_5320_, lean_object* v_a_5321_, lean_object* v_a_5322_){
_start:
{
lean_object* v_res_5323_; 
v_res_5323_ = lean_get_congr_match_equations_for(v_matchDeclName_5317_, v_a_5318_, v_a_5319_, v_a_5320_, v_a_5321_);
return v_res_5323_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0(lean_object* v_upperBound_5324_, lean_object* v_matchDeclName_5325_, lean_object* v_inst_5326_, lean_object* v_R_5327_, lean_object* v_a_5328_, lean_object* v_b_5329_, lean_object* v_c_5330_, lean_object* v___y_5331_, lean_object* v___y_5332_, lean_object* v___y_5333_, lean_object* v___y_5334_){
_start:
{
lean_object* v___x_5336_; 
v___x_5336_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___redArg(v_upperBound_5324_, v_matchDeclName_5325_, v_a_5328_, v_b_5329_);
return v___x_5336_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0___boxed(lean_object* v_upperBound_5337_, lean_object* v_matchDeclName_5338_, lean_object* v_inst_5339_, lean_object* v_R_5340_, lean_object* v_a_5341_, lean_object* v_b_5342_, lean_object* v_c_5343_, lean_object* v___y_5344_, lean_object* v___y_5345_, lean_object* v___y_5346_, lean_object* v___y_5347_, lean_object* v___y_5348_){
_start:
{
lean_object* v_res_5349_; 
v_res_5349_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Match_genMatchCongrEqnsImpl_spec__0(v_upperBound_5337_, v_matchDeclName_5338_, v_inst_5339_, v_R_5340_, v_a_5341_, v_b_5342_, v_c_5343_, v___y_5344_, v___y_5345_, v___y_5346_, v___y_5347_);
lean_dec(v___y_5347_);
lean_dec_ref(v___y_5346_);
lean_dec(v___y_5345_);
lean_dec_ref(v___y_5344_);
lean_dec(v_upperBound_5337_);
return v_res_5349_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5350_; 
v___x_5350_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_5350_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__1_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; 
v___x_5351_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5352_ = lean_box(0);
v___x_5353_ = l_Lean_Name_str___override(v___x_5352_, v___x_5351_);
return v___x_5353_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5354_; 
v___x_5354_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_5354_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__3_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; 
v___x_5355_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5356_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__1_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__1_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__1_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5357_ = l_Lean_Name_str___override(v___x_5356_, v___x_5355_);
return v___x_5357_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__4_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5358_; lean_object* v___x_5359_; lean_object* v___x_5360_; 
v___x_5358_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10);
v___x_5359_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__3_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__3_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__3_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5360_ = l_Lean_Name_str___override(v___x_5359_, v___x_5358_);
return v___x_5360_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__5_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5361_; lean_object* v___x_5362_; lean_object* v___x_5363_; 
v___x_5361_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11);
v___x_5362_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__4_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__4_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__4_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5363_ = l_Lean_Name_str___override(v___x_5362_, v___x_5361_);
return v___x_5363_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5364_; 
v___x_5364_ = lean_mk_string_unchecked("MatchEqs", 8, 8);
return v___x_5364_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__7_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; 
v___x_5365_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5366_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__5_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__5_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__5_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5367_ = l_Lean_Name_str___override(v___x_5366_, v___x_5365_);
return v___x_5367_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__8_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; 
v___x_5368_ = lean_unsigned_to_nat(0u);
v___x_5369_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__7_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__7_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__7_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5370_ = l_Lean_Name_num___override(v___x_5369_, v___x_5368_);
return v___x_5370_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__9_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5371_; lean_object* v___x_5372_; lean_object* v___x_5373_; 
v___x_5371_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5372_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__8_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__8_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__8_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5373_ = l_Lean_Name_str___override(v___x_5372_, v___x_5371_);
return v___x_5373_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__10_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5374_; lean_object* v___x_5375_; lean_object* v___x_5376_; 
v___x_5374_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10);
v___x_5375_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__9_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__9_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__9_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5376_ = l_Lean_Name_str___override(v___x_5375_, v___x_5374_);
return v___x_5376_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__11_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; 
v___x_5377_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11);
v___x_5378_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__10_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__10_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__10_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5379_ = l_Lean_Name_str___override(v___x_5378_, v___x_5377_);
return v___x_5379_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__12_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5380_; 
v___x_5380_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_5380_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__13_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; 
v___x_5381_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__12_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__12_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__12_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5382_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__11_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__11_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__11_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5383_ = l_Lean_Name_str___override(v___x_5382_, v___x_5381_);
return v___x_5383_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__14_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5384_; 
v___x_5384_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_5384_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__15_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5385_; lean_object* v___x_5386_; lean_object* v___x_5387_; 
v___x_5385_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__14_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__14_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__14_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5386_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__13_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__13_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__13_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5387_ = l_Lean_Name_str___override(v___x_5386_, v___x_5385_);
return v___x_5387_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__16_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; 
v___x_5388_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__2_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5389_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__15_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__15_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__15_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5390_ = l_Lean_Name_str___override(v___x_5389_, v___x_5388_);
return v___x_5390_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__17_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; 
v___x_5391_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__10);
v___x_5392_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__16_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__16_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__16_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5393_ = l_Lean_Name_str___override(v___x_5392_, v___x_5391_);
return v___x_5393_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__18_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5394_; lean_object* v___x_5395_; lean_object* v___x_5396_; 
v___x_5394_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__11);
v___x_5395_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__17_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__17_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__17_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5396_ = l_Lean_Name_str___override(v___x_5395_, v___x_5394_);
return v___x_5396_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__19_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5397_; lean_object* v___x_5398_; lean_object* v___x_5399_; 
v___x_5397_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__6_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5398_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__18_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__18_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__18_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5399_ = l_Lean_Name_str___override(v___x_5398_, v___x_5397_);
return v___x_5399_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5400_; lean_object* v___x_5401_; lean_object* v___x_5402_; 
v___x_5400_ = lean_unsigned_to_nat(2380159875u);
v___x_5401_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__19_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__19_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__19_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5402_ = l_Lean_Name_num___override(v___x_5401_, v___x_5400_);
return v___x_5402_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__21_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5403_; 
v___x_5403_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_5403_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; 
v___x_5404_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__21_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__21_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__21_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5405_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__20_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5406_ = l_Lean_Name_str___override(v___x_5405_, v___x_5404_);
return v___x_5406_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__23_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5407_; 
v___x_5407_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_5407_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; 
v___x_5408_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__23_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__23_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__23_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5409_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__22_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5410_ = l_Lean_Name_str___override(v___x_5409_, v___x_5408_);
return v___x_5410_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5411_; lean_object* v___x_5412_; lean_object* v___x_5413_; 
v___x_5411_ = lean_unsigned_to_nat(2u);
v___x_5412_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__24_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5413_ = l_Lean_Name_num___override(v___x_5412_, v___x_5411_);
return v___x_5413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5415_; uint8_t v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; 
v___x_5415_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13_once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_proveCondEqThm_go___closed__13);
v___x_5416_ = 0;
v___x_5417_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__25_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_);
v___x_5418_ = l_Lean_registerTraceClass(v___x_5415_, v___x_5416_, v___x_5417_);
return v___x_5418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2____boxed(lean_object* v_a_5419_){
_start:
{
lean_object* v_res_5420_; 
v_res_5420_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_();
return v_res_5420_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchEqName_x3f(lean_object* v_env_5421_, lean_object* v_n_5422_){
_start:
{
if (lean_obj_tag(v_n_5422_) == 1)
{
lean_object* v_pre_5423_; lean_object* v_str_5424_; uint8_t v___y_5426_; uint8_t v___x_5432_; 
v_pre_5423_ = lean_ctor_get(v_n_5422_, 0);
lean_inc(v_pre_5423_);
v_str_5424_ = lean_ctor_get(v_n_5422_, 1);
lean_inc_ref_n(v_str_5424_, 2);
lean_dec_ref(v_n_5422_);
v___x_5432_ = l_Lean_Meta_isEqnReservedNameSuffix(v_str_5424_);
if (v___x_5432_ == 0)
{
lean_object* v___x_5433_; uint8_t v___x_5434_; 
v___x_5433_ = lean_obj_once(&l_Lean_Meta_Match_getEquationsForImpl___closed__0, &l_Lean_Meta_Match_getEquationsForImpl___closed__0_once, _init_l_Lean_Meta_Match_getEquationsForImpl___closed__0);
v___x_5434_ = lean_string_dec_eq(v_str_5424_, v___x_5433_);
lean_dec_ref(v_str_5424_);
v___y_5426_ = v___x_5434_;
goto v___jp_5425_;
}
else
{
lean_dec_ref(v_str_5424_);
v___y_5426_ = v___x_5432_;
goto v___jp_5425_;
}
v___jp_5425_:
{
if (v___y_5426_ == 0)
{
lean_object* v___x_5427_; 
lean_dec(v_pre_5423_);
lean_dec_ref(v_env_5421_);
v___x_5427_ = lean_box(0);
return v___x_5427_;
}
else
{
lean_object* v___x_5428_; 
v___x_5428_ = lean_private_to_user_name(v_pre_5423_);
if (lean_obj_tag(v___x_5428_) == 0)
{
lean_dec_ref(v_env_5421_);
return v___x_5428_;
}
else
{
lean_object* v_val_5429_; uint8_t v___x_5430_; 
v_val_5429_ = lean_ctor_get(v___x_5428_, 0);
lean_inc(v_val_5429_);
v___x_5430_ = lean_is_matcher(v_env_5421_, v_val_5429_);
if (v___x_5430_ == 0)
{
lean_object* v___x_5431_; 
lean_dec_ref(v___x_5428_);
v___x_5431_ = lean_box(0);
return v___x_5431_;
}
else
{
return v___x_5428_;
}
}
}
}
}
else
{
lean_object* v___x_5435_; 
lean_dec(v_n_5422_);
lean_dec_ref(v_env_5421_);
v___x_5435_ = lean_box(0);
return v___x_5435_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_(lean_object* v_x1_5436_, lean_object* v_x2_5437_){
_start:
{
lean_object* v___x_5438_; 
v___x_5438_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchEqName_x3f(v_x1_5436_, v_x2_5437_);
if (lean_obj_tag(v___x_5438_) == 0)
{
uint8_t v___x_5439_; 
v___x_5439_ = 0;
return v___x_5439_;
}
else
{
uint8_t v___x_5440_; 
lean_dec_ref(v___x_5438_);
v___x_5440_ = 1;
return v___x_5440_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2____boxed(lean_object* v_x1_5441_, lean_object* v_x2_5442_){
_start:
{
uint8_t v_res_5443_; lean_object* v_r_5444_; 
v_res_5443_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_(v_x1_5441_, v_x2_5442_);
v_r_5444_ = lean_box(v_res_5443_);
return v_r_5444_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_5445_; 
v___f_5445_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2____boxed), 2, 0);
return v___f_5445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5447_; lean_object* v___x_5448_; 
v___f_5447_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_);
v___x_5448_ = l_Lean_registerReservedNamePredicate(v___f_5447_);
return v___x_5448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2____boxed(lean_object* v_a_5449_){
_start:
{
lean_object* v_res_5450_; 
v_res_5450_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_();
return v_res_5450_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_5451_; uint8_t v___x_5452_; uint8_t v___x_5453_; uint8_t v___x_5454_; uint8_t v___x_5455_; lean_object* v___x_5456_; 
v___x_5451_ = 2;
v___x_5452_ = 0;
v___x_5453_ = 1;
v___x_5454_ = 1;
v___x_5455_ = 0;
v___x_5456_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v___x_5456_, 0, v___x_5455_);
lean_ctor_set_uint8(v___x_5456_, 1, v___x_5455_);
lean_ctor_set_uint8(v___x_5456_, 2, v___x_5455_);
lean_ctor_set_uint8(v___x_5456_, 3, v___x_5455_);
lean_ctor_set_uint8(v___x_5456_, 4, v___x_5455_);
lean_ctor_set_uint8(v___x_5456_, 5, v___x_5454_);
lean_ctor_set_uint8(v___x_5456_, 6, v___x_5454_);
lean_ctor_set_uint8(v___x_5456_, 7, v___x_5455_);
lean_ctor_set_uint8(v___x_5456_, 8, v___x_5454_);
lean_ctor_set_uint8(v___x_5456_, 9, v___x_5453_);
lean_ctor_set_uint8(v___x_5456_, 10, v___x_5452_);
lean_ctor_set_uint8(v___x_5456_, 11, v___x_5454_);
lean_ctor_set_uint8(v___x_5456_, 12, v___x_5454_);
lean_ctor_set_uint8(v___x_5456_, 13, v___x_5454_);
lean_ctor_set_uint8(v___x_5456_, 14, v___x_5451_);
lean_ctor_set_uint8(v___x_5456_, 15, v___x_5454_);
lean_ctor_set_uint8(v___x_5456_, 16, v___x_5454_);
lean_ctor_set_uint8(v___x_5456_, 17, v___x_5454_);
lean_ctor_set_uint8(v___x_5456_, 18, v___x_5454_);
return v___x_5456_;
}
}
static uint64_t _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5457_; uint64_t v___x_5458_; 
v___x_5457_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5458_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_5457_);
return v___x_5458_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; 
v___x_5459_ = lean_uint64_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__1_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5460_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5461_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_5461_, 0, v___x_5460_);
lean_ctor_set_uint64(v___x_5461_, sizeof(void*)*1, v___x_5459_);
return v___x_5461_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5462_; lean_object* v___x_5463_; 
v___x_5462_ = lean_unsigned_to_nat(0u);
v___x_5463_ = lean_mk_empty_array_with_capacity(v___x_5462_);
return v___x_5463_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; 
v___x_5464_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__1, &l_Lean_Meta_Match_proveCondEqThm___closed__1_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__1);
v___x_5465_ = lean_unsigned_to_nat(0u);
v___x_5466_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_5466_, 0, v___x_5465_);
lean_ctor_set(v___x_5466_, 1, v___x_5465_);
lean_ctor_set(v___x_5466_, 2, v___x_5465_);
lean_ctor_set(v___x_5466_, 3, v___x_5465_);
lean_ctor_set(v___x_5466_, 4, v___x_5464_);
lean_ctor_set(v___x_5466_, 5, v___x_5464_);
lean_ctor_set(v___x_5466_, 6, v___x_5464_);
lean_ctor_set(v___x_5466_, 7, v___x_5464_);
lean_ctor_set(v___x_5466_, 8, v___x_5464_);
lean_ctor_set(v___x_5466_, 9, v___x_5464_);
return v___x_5466_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5467_; lean_object* v___x_5468_; 
v___x_5467_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__1, &l_Lean_Meta_Match_proveCondEqThm___closed__1_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__1);
v___x_5468_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5468_, 0, v___x_5467_);
lean_ctor_set(v___x_5468_, 1, v___x_5467_);
lean_ctor_set(v___x_5468_, 2, v___x_5467_);
lean_ctor_set(v___x_5468_, 3, v___x_5467_);
lean_ctor_set(v___x_5468_, 4, v___x_5467_);
lean_ctor_set(v___x_5468_, 5, v___x_5467_);
return v___x_5468_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5469_; lean_object* v___x_5470_; 
v___x_5469_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__1, &l_Lean_Meta_Match_proveCondEqThm___closed__1_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__1);
v___x_5470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5470_, 0, v___x_5469_);
lean_ctor_set(v___x_5470_, 1, v___x_5469_);
lean_ctor_set(v___x_5470_, 2, v___x_5469_);
lean_ctor_set(v___x_5470_, 3, v___x_5469_);
lean_ctor_set(v___x_5470_, 4, v___x_5469_);
return v___x_5470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(lean_object* v___x_5471_, lean_object* v_name_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_){
_start:
{
lean_object* v___x_5476_; lean_object* v_env_5477_; lean_object* v___x_5478_; 
v___x_5476_ = lean_st_ref_get(v___y_5474_);
v_env_5477_ = lean_ctor_get(v___x_5476_, 0);
lean_inc_ref(v_env_5477_);
lean_dec(v___x_5476_);
v___x_5478_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchEqName_x3f(v_env_5477_, v_name_5472_);
if (lean_obj_tag(v___x_5478_) == 1)
{
lean_object* v_val_5479_; uint8_t v___x_5480_; uint8_t v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; lean_object* v___x_5492_; lean_object* v___x_5493_; lean_object* v___x_5494_; lean_object* v___x_5495_; 
v_val_5479_ = lean_ctor_get(v___x_5478_, 0);
lean_inc(v_val_5479_);
lean_dec_ref(v___x_5478_);
v___x_5480_ = 0;
v___x_5481_ = 1;
v___x_5482_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5483_ = lean_unsigned_to_nat(0u);
v___x_5484_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__3, &l_Lean_Meta_Match_proveCondEqThm___closed__3_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__3);
v___x_5485_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__4, &l_Lean_Meta_Match_proveCondEqThm___closed__4_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__4);
v___x_5486_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5487_ = lean_box(0);
lean_inc(v___x_5471_);
v___x_5488_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_5488_, 0, v___x_5482_);
lean_ctor_set(v___x_5488_, 1, v___x_5471_);
lean_ctor_set(v___x_5488_, 2, v___x_5485_);
lean_ctor_set(v___x_5488_, 3, v___x_5486_);
lean_ctor_set(v___x_5488_, 4, v___x_5487_);
lean_ctor_set(v___x_5488_, 5, v___x_5483_);
lean_ctor_set(v___x_5488_, 6, v___x_5487_);
lean_ctor_set_uint8(v___x_5488_, sizeof(void*)*7, v___x_5480_);
lean_ctor_set_uint8(v___x_5488_, sizeof(void*)*7 + 1, v___x_5480_);
lean_ctor_set_uint8(v___x_5488_, sizeof(void*)*7 + 2, v___x_5480_);
lean_ctor_set_uint8(v___x_5488_, sizeof(void*)*7 + 3, v___x_5481_);
v___x_5489_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5490_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5491_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5492_ = lean_st_ref_get(v___y_5474_);
lean_dec(v___x_5492_);
v___x_5493_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5493_, 0, v___x_5489_);
lean_ctor_set(v___x_5493_, 1, v___x_5490_);
lean_ctor_set(v___x_5493_, 2, v___x_5471_);
lean_ctor_set(v___x_5493_, 3, v___x_5484_);
lean_ctor_set(v___x_5493_, 4, v___x_5491_);
v___x_5494_ = lean_st_mk_ref(v___x_5493_);
lean_inc(v___y_5474_);
lean_inc_ref(v___y_5473_);
lean_inc(v___x_5494_);
v___x_5495_ = lean_get_match_equations_for(v_val_5479_, v___x_5488_, v___x_5494_, v___y_5473_, v___y_5474_);
if (lean_obj_tag(v___x_5495_) == 0)
{
lean_object* v___x_5497_; uint8_t v_isShared_5498_; uint8_t v_isSharedCheck_5505_; 
v_isSharedCheck_5505_ = !lean_is_exclusive(v___x_5495_);
if (v_isSharedCheck_5505_ == 0)
{
lean_object* v_unused_5506_; 
v_unused_5506_ = lean_ctor_get(v___x_5495_, 0);
lean_dec(v_unused_5506_);
v___x_5497_ = v___x_5495_;
v_isShared_5498_ = v_isSharedCheck_5505_;
goto v_resetjp_5496_;
}
else
{
lean_dec(v___x_5495_);
v___x_5497_ = lean_box(0);
v_isShared_5498_ = v_isSharedCheck_5505_;
goto v_resetjp_5496_;
}
v_resetjp_5496_:
{
lean_object* v___x_5499_; lean_object* v___x_5500_; lean_object* v___x_5501_; lean_object* v___x_5503_; 
v___x_5499_ = lean_st_ref_get(v___y_5474_);
lean_dec(v___x_5499_);
v___x_5500_ = lean_st_ref_get(v___x_5494_);
lean_dec(v___x_5494_);
lean_dec(v___x_5500_);
v___x_5501_ = lean_box(v___x_5481_);
if (v_isShared_5498_ == 0)
{
lean_ctor_set(v___x_5497_, 0, v___x_5501_);
v___x_5503_ = v___x_5497_;
goto v_reusejp_5502_;
}
else
{
lean_object* v_reuseFailAlloc_5504_; 
v_reuseFailAlloc_5504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5504_, 0, v___x_5501_);
v___x_5503_ = v_reuseFailAlloc_5504_;
goto v_reusejp_5502_;
}
v_reusejp_5502_:
{
return v___x_5503_;
}
}
}
else
{
lean_dec(v___x_5494_);
if (lean_obj_tag(v___x_5495_) == 0)
{
lean_object* v___x_5508_; uint8_t v_isShared_5509_; uint8_t v_isSharedCheck_5514_; 
v_isSharedCheck_5514_ = !lean_is_exclusive(v___x_5495_);
if (v_isSharedCheck_5514_ == 0)
{
lean_object* v_unused_5515_; 
v_unused_5515_ = lean_ctor_get(v___x_5495_, 0);
lean_dec(v_unused_5515_);
v___x_5508_ = v___x_5495_;
v_isShared_5509_ = v_isSharedCheck_5514_;
goto v_resetjp_5507_;
}
else
{
lean_dec(v___x_5495_);
v___x_5508_ = lean_box(0);
v_isShared_5509_ = v_isSharedCheck_5514_;
goto v_resetjp_5507_;
}
v_resetjp_5507_:
{
lean_object* v___x_5510_; lean_object* v___x_5512_; 
v___x_5510_ = lean_box(v___x_5481_);
if (v_isShared_5509_ == 0)
{
lean_ctor_set_tag(v___x_5508_, 0);
lean_ctor_set(v___x_5508_, 0, v___x_5510_);
v___x_5512_ = v___x_5508_;
goto v_reusejp_5511_;
}
else
{
lean_object* v_reuseFailAlloc_5513_; 
v_reuseFailAlloc_5513_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5513_, 0, v___x_5510_);
v___x_5512_ = v_reuseFailAlloc_5513_;
goto v_reusejp_5511_;
}
v_reusejp_5511_:
{
return v___x_5512_;
}
}
}
else
{
lean_object* v_a_5516_; lean_object* v___x_5518_; uint8_t v_isShared_5519_; uint8_t v_isSharedCheck_5523_; 
v_a_5516_ = lean_ctor_get(v___x_5495_, 0);
v_isSharedCheck_5523_ = !lean_is_exclusive(v___x_5495_);
if (v_isSharedCheck_5523_ == 0)
{
v___x_5518_ = v___x_5495_;
v_isShared_5519_ = v_isSharedCheck_5523_;
goto v_resetjp_5517_;
}
else
{
lean_inc(v_a_5516_);
lean_dec(v___x_5495_);
v___x_5518_ = lean_box(0);
v_isShared_5519_ = v_isSharedCheck_5523_;
goto v_resetjp_5517_;
}
v_resetjp_5517_:
{
lean_object* v___x_5521_; 
if (v_isShared_5519_ == 0)
{
v___x_5521_ = v___x_5518_;
goto v_reusejp_5520_;
}
else
{
lean_object* v_reuseFailAlloc_5522_; 
v_reuseFailAlloc_5522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5522_, 0, v_a_5516_);
v___x_5521_ = v_reuseFailAlloc_5522_;
goto v_reusejp_5520_;
}
v_reusejp_5520_:
{
return v___x_5521_;
}
}
}
}
}
else
{
uint8_t v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; 
lean_dec(v___x_5478_);
lean_dec(v___x_5471_);
v___x_5524_ = 0;
v___x_5525_ = lean_box(v___x_5524_);
v___x_5526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5526_, 0, v___x_5525_);
return v___x_5526_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2____boxed(lean_object* v___x_5527_, lean_object* v_name_5528_, lean_object* v___y_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_){
_start:
{
lean_object* v_res_5532_; 
v_res_5532_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(v___x_5527_, v_name_5528_, v___y_5529_, v___y_5530_);
lean_dec(v___y_5530_);
lean_dec_ref(v___y_5529_);
return v_res_5532_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5533_; lean_object* v___f_5534_; 
v___x_5533_ = lean_box(1);
v___f_5534_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_5534_, 0, v___x_5533_);
return v___f_5534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5536_; lean_object* v___x_5537_; 
v___f_5536_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5537_ = l_Lean_registerReservedNameAction(v___f_5536_);
return v___x_5537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2____boxed(lean_object* v_a_5538_){
_start:
{
lean_object* v_res_5539_; 
v_res_5539_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_();
return v_res_5539_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchCongrEqName_x3f(lean_object* v_env_5540_, lean_object* v_n_5541_){
_start:
{
if (lean_obj_tag(v_n_5541_) == 1)
{
lean_object* v_pre_5542_; lean_object* v_str_5543_; uint8_t v___x_5544_; 
v_pre_5542_ = lean_ctor_get(v_n_5541_, 0);
lean_inc(v_pre_5542_);
v_str_5543_ = lean_ctor_get(v_n_5541_, 1);
lean_inc_ref(v_str_5543_);
lean_dec_ref(v_n_5541_);
v___x_5544_ = l_Lean_Meta_Match_isCongrEqnReservedNameSuffix(v_str_5543_);
if (v___x_5544_ == 0)
{
lean_object* v___x_5545_; 
lean_dec(v_pre_5542_);
lean_dec_ref(v_env_5540_);
v___x_5545_ = lean_box(0);
return v___x_5545_;
}
else
{
uint8_t v___x_5546_; 
lean_inc(v_pre_5542_);
v___x_5546_ = lean_is_matcher(v_env_5540_, v_pre_5542_);
if (v___x_5546_ == 0)
{
lean_object* v___x_5547_; 
lean_dec(v_pre_5542_);
v___x_5547_ = lean_box(0);
return v___x_5547_;
}
else
{
lean_object* v___x_5548_; 
v___x_5548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5548_, 0, v_pre_5542_);
return v___x_5548_;
}
}
}
else
{
lean_object* v___x_5549_; 
lean_dec(v_n_5541_);
lean_dec_ref(v_env_5540_);
v___x_5549_ = lean_box(0);
return v___x_5549_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_(lean_object* v_x1_5550_, lean_object* v_x2_5551_){
_start:
{
lean_object* v___x_5552_; 
v___x_5552_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchCongrEqName_x3f(v_x1_5550_, v_x2_5551_);
if (lean_obj_tag(v___x_5552_) == 0)
{
uint8_t v___x_5553_; 
v___x_5553_ = 0;
return v___x_5553_;
}
else
{
uint8_t v___x_5554_; 
lean_dec_ref(v___x_5552_);
v___x_5554_ = 1;
return v___x_5554_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2____boxed(lean_object* v_x1_5555_, lean_object* v_x2_5556_){
_start:
{
uint8_t v_res_5557_; lean_object* v_r_5558_; 
v_res_5557_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_(v_x1_5555_, v_x2_5556_);
v_r_5558_ = lean_box(v_res_5557_);
return v_r_5558_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_5559_; 
v___f_5559_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2____boxed), 2, 0);
return v___f_5559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5561_; lean_object* v___x_5562_; 
v___f_5561_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_);
v___x_5562_ = l_Lean_registerReservedNamePredicate(v___f_5561_);
return v___x_5562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2____boxed(lean_object* v_a_5563_){
_start:
{
lean_object* v_res_5564_; 
v_res_5564_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_();
return v_res_5564_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_(lean_object* v___x_5565_, lean_object* v_name_5566_, lean_object* v___y_5567_, lean_object* v___y_5568_){
_start:
{
lean_object* v___x_5570_; lean_object* v_env_5571_; lean_object* v___x_5572_; 
v___x_5570_ = lean_st_ref_get(v___y_5568_);
v_env_5571_ = lean_ctor_get(v___x_5570_, 0);
lean_inc_ref(v_env_5571_);
lean_dec(v___x_5570_);
v___x_5572_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_isMatchCongrEqName_x3f(v_env_5571_, v_name_5566_);
if (lean_obj_tag(v___x_5572_) == 1)
{
lean_object* v_val_5573_; uint8_t v___x_5574_; uint8_t v___x_5575_; lean_object* v___x_5576_; lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5579_; lean_object* v___x_5580_; lean_object* v___x_5581_; lean_object* v___x_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; lean_object* v___x_5586_; lean_object* v___x_5587_; lean_object* v___x_5588_; lean_object* v___x_5589_; lean_object* v___x_5590_; lean_object* v___x_5591_; 
v_val_5573_ = lean_ctor_get(v___x_5572_, 0);
lean_inc(v_val_5573_);
lean_dec_ref(v___x_5572_);
v___x_5574_ = 0;
v___x_5575_ = 1;
v___x_5576_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__2_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5577_ = lean_unsigned_to_nat(32u);
v___x_5578_ = lean_mk_empty_array_with_capacity(v___x_5577_);
lean_dec_ref(v___x_5578_);
v___x_5579_ = lean_unsigned_to_nat(0u);
v___x_5580_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__3, &l_Lean_Meta_Match_proveCondEqThm___closed__3_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__3);
v___x_5581_ = lean_obj_once(&l_Lean_Meta_Match_proveCondEqThm___closed__4, &l_Lean_Meta_Match_proveCondEqThm___closed__4_once, _init_l_Lean_Meta_Match_proveCondEqThm___closed__4);
v___x_5582_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__3_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5583_ = lean_box(0);
lean_inc(v___x_5565_);
v___x_5584_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_5584_, 0, v___x_5576_);
lean_ctor_set(v___x_5584_, 1, v___x_5565_);
lean_ctor_set(v___x_5584_, 2, v___x_5581_);
lean_ctor_set(v___x_5584_, 3, v___x_5582_);
lean_ctor_set(v___x_5584_, 4, v___x_5583_);
lean_ctor_set(v___x_5584_, 5, v___x_5579_);
lean_ctor_set(v___x_5584_, 6, v___x_5583_);
lean_ctor_set_uint8(v___x_5584_, sizeof(void*)*7, v___x_5574_);
lean_ctor_set_uint8(v___x_5584_, sizeof(void*)*7 + 1, v___x_5574_);
lean_ctor_set_uint8(v___x_5584_, sizeof(void*)*7 + 2, v___x_5574_);
lean_ctor_set_uint8(v___x_5584_, sizeof(void*)*7 + 3, v___x_5575_);
v___x_5585_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__4_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5586_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__5_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5587_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0___closed__6_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_);
v___x_5588_ = lean_st_ref_get(v___y_5568_);
lean_dec(v___x_5588_);
v___x_5589_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5589_, 0, v___x_5585_);
lean_ctor_set(v___x_5589_, 1, v___x_5586_);
lean_ctor_set(v___x_5589_, 2, v___x_5565_);
lean_ctor_set(v___x_5589_, 3, v___x_5580_);
lean_ctor_set(v___x_5589_, 4, v___x_5587_);
v___x_5590_ = lean_st_mk_ref(v___x_5589_);
lean_inc(v___y_5568_);
lean_inc_ref(v___y_5567_);
lean_inc(v___x_5590_);
v___x_5591_ = lean_get_congr_match_equations_for(v_val_5573_, v___x_5584_, v___x_5590_, v___y_5567_, v___y_5568_);
if (lean_obj_tag(v___x_5591_) == 0)
{
lean_object* v___x_5593_; uint8_t v_isShared_5594_; uint8_t v_isSharedCheck_5601_; 
v_isSharedCheck_5601_ = !lean_is_exclusive(v___x_5591_);
if (v_isSharedCheck_5601_ == 0)
{
lean_object* v_unused_5602_; 
v_unused_5602_ = lean_ctor_get(v___x_5591_, 0);
lean_dec(v_unused_5602_);
v___x_5593_ = v___x_5591_;
v_isShared_5594_ = v_isSharedCheck_5601_;
goto v_resetjp_5592_;
}
else
{
lean_dec(v___x_5591_);
v___x_5593_ = lean_box(0);
v_isShared_5594_ = v_isSharedCheck_5601_;
goto v_resetjp_5592_;
}
v_resetjp_5592_:
{
lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5599_; 
v___x_5595_ = lean_st_ref_get(v___y_5568_);
lean_dec(v___x_5595_);
v___x_5596_ = lean_st_ref_get(v___x_5590_);
lean_dec(v___x_5590_);
lean_dec(v___x_5596_);
v___x_5597_ = lean_box(v___x_5575_);
if (v_isShared_5594_ == 0)
{
lean_ctor_set(v___x_5593_, 0, v___x_5597_);
v___x_5599_ = v___x_5593_;
goto v_reusejp_5598_;
}
else
{
lean_object* v_reuseFailAlloc_5600_; 
v_reuseFailAlloc_5600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5600_, 0, v___x_5597_);
v___x_5599_ = v_reuseFailAlloc_5600_;
goto v_reusejp_5598_;
}
v_reusejp_5598_:
{
return v___x_5599_;
}
}
}
else
{
lean_dec(v___x_5590_);
if (lean_obj_tag(v___x_5591_) == 0)
{
lean_object* v___x_5604_; uint8_t v_isShared_5605_; uint8_t v_isSharedCheck_5610_; 
v_isSharedCheck_5610_ = !lean_is_exclusive(v___x_5591_);
if (v_isSharedCheck_5610_ == 0)
{
lean_object* v_unused_5611_; 
v_unused_5611_ = lean_ctor_get(v___x_5591_, 0);
lean_dec(v_unused_5611_);
v___x_5604_ = v___x_5591_;
v_isShared_5605_ = v_isSharedCheck_5610_;
goto v_resetjp_5603_;
}
else
{
lean_dec(v___x_5591_);
v___x_5604_ = lean_box(0);
v_isShared_5605_ = v_isSharedCheck_5610_;
goto v_resetjp_5603_;
}
v_resetjp_5603_:
{
lean_object* v___x_5606_; lean_object* v___x_5608_; 
v___x_5606_ = lean_box(v___x_5575_);
if (v_isShared_5605_ == 0)
{
lean_ctor_set_tag(v___x_5604_, 0);
lean_ctor_set(v___x_5604_, 0, v___x_5606_);
v___x_5608_ = v___x_5604_;
goto v_reusejp_5607_;
}
else
{
lean_object* v_reuseFailAlloc_5609_; 
v_reuseFailAlloc_5609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5609_, 0, v___x_5606_);
v___x_5608_ = v_reuseFailAlloc_5609_;
goto v_reusejp_5607_;
}
v_reusejp_5607_:
{
return v___x_5608_;
}
}
}
else
{
lean_object* v_a_5612_; lean_object* v___x_5614_; uint8_t v_isShared_5615_; uint8_t v_isSharedCheck_5619_; 
v_a_5612_ = lean_ctor_get(v___x_5591_, 0);
v_isSharedCheck_5619_ = !lean_is_exclusive(v___x_5591_);
if (v_isSharedCheck_5619_ == 0)
{
v___x_5614_ = v___x_5591_;
v_isShared_5615_ = v_isSharedCheck_5619_;
goto v_resetjp_5613_;
}
else
{
lean_inc(v_a_5612_);
lean_dec(v___x_5591_);
v___x_5614_ = lean_box(0);
v_isShared_5615_ = v_isSharedCheck_5619_;
goto v_resetjp_5613_;
}
v_resetjp_5613_:
{
lean_object* v___x_5617_; 
if (v_isShared_5615_ == 0)
{
v___x_5617_ = v___x_5614_;
goto v_reusejp_5616_;
}
else
{
lean_object* v_reuseFailAlloc_5618_; 
v_reuseFailAlloc_5618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5618_, 0, v_a_5612_);
v___x_5617_ = v_reuseFailAlloc_5618_;
goto v_reusejp_5616_;
}
v_reusejp_5616_:
{
return v___x_5617_;
}
}
}
}
}
else
{
uint8_t v___x_5620_; lean_object* v___x_5621_; lean_object* v___x_5622_; 
lean_dec(v___x_5572_);
lean_dec(v___x_5565_);
v___x_5620_ = 0;
v___x_5621_ = lean_box(v___x_5620_);
v___x_5622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5622_, 0, v___x_5621_);
return v___x_5622_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2____boxed(lean_object* v___x_5623_, lean_object* v_name_5624_, lean_object* v___y_5625_, lean_object* v___y_5626_, lean_object* v___y_5627_){
_start:
{
lean_object* v_res_5628_; 
v_res_5628_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_(v___x_5623_, v_name_5624_, v___y_5625_, v___y_5626_);
lean_dec(v___y_5626_);
lean_dec_ref(v___y_5625_);
return v_res_5628_;
}
}
static lean_object* _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5629_; lean_object* v___f_5630_; 
v___x_5629_ = lean_box(1);
v___f_5630_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___lam__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2____boxed), 5, 1);
lean_closure_set(v___f_5630_, 0, v___x_5629_);
return v___f_5630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5632_; lean_object* v___x_5633_; 
v___f_5632_ = lean_obj_once(&l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_, &l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn___closed__0_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_);
v___x_5633_ = l_Lean_registerReservedNameAction(v___f_5632_);
return v___x_5633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2____boxed(lean_object* v_a_5634_){
_start:
{
lean_object* v_res_5635_; 
v_res_5635_ = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_();
return v_res_5635_;
}
}
lean_object* runtime_initialize_Lean_Meta_Match_Match(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_SimpH(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Match_NamedPatterns(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SplitSparseCasesOn(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Match_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_SplitIf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_SimpH(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_NamedPatterns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SplitSparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_2380159875____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_738296169____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_825947570____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_1995145736____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Match_MatchEqs_0__Lean_Meta_Match_initFn_00___x40_Lean_Meta_Match_MatchEqs_3437146280____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Match_Match(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_MatchEqsExt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_SplitIf(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_CasesOnStuckLHS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_SimpH(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_AltTelescopes(uint8_t builtin);
lean_object* initialize_Lean_Meta_Match_NamedPatterns(uint8_t builtin);
lean_object* initialize_Lean_Meta_SplitSparseCasesOn(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Match_MatchEqs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Match_Match(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_MatchEqsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_SplitIf(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_CasesOnStuckLHS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_SimpH(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_AltTelescopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Match_NamedPatterns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SplitSparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Match_MatchEqs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Match_MatchEqs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Match_MatchEqs(builtin);
}
#ifdef __cplusplus
}
#endif
