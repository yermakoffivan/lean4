// Lean compiler output
// Module: Lean.Elab.Tactic.Do.ProofMode.Revert
// Imports: public import Lean.Elab.Tactic.Do.ProofMode.Focus public import Lean.Elab.Tactic.Do.ProofMode.Basic
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
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_mkAndN(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_mkAndIntroN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclsDND___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mapFinIdxM_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_pushForallContextIntoHyps(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
extern lean_object* l_new__wp__monad;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_instMonadTacticM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAndIntroN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_dec(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkPure(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHypWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHypWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Revert"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "revert"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "imp"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(254, 180, 127, 119, 35, 232, 80, 131)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "impossible; res.focusHyp not a hypothesis"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__12_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__13_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__14_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "s"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__0_value),LEAN_SCALAR_PTR_LITERAL(203, 235, 49, 11, 232, 138, 137, 74)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "and_pure_intro_r"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(71, 102, 82, 181, 251, 135, 109, 75)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 18, 141, 40, 4, 84, 240, 126)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8_value),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6_value)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_mkEqRefl___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_inferType___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__21(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "mrevert: expected "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " excess arguments in "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", got "};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__0 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__1 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__2 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_instMonadTacticM___lam__1___boxed, .m_arity = 13, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__3 = (const lean_object*)&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(167, 48, 44, 122, 88, 53, 63, 251)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(71, 102, 82, 181, 251, 135, 109, 75)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(184, 151, 230, 187, 161, 145, 194, 84)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mrevert"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2_value),LEAN_SCALAR_PTR_LITERAL(82, 105, 168, 208, 87, 76, 255, 172)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "mrevertPat_"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4_value),LEAN_SCALAR_PTR_LITERAL(237, 56, 253, 143, 81, 27, 28, 109)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 12, .m_data = "mrevertPat∀_"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6_value),LEAN_SCALAR_PTR_LITERAL(191, 101, 4, 189, 225, 175, 44, 14)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Not in proof mode"};
static const lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CompleteLattice"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 148, 172, 135, 227, 248, 47, 24)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(165, 204, 33, 109, 120, 201, 43, 17)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 11, 99, 181, 146, 193, 255, 229)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 59, 209, 245, 191, 85, 47, 162)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_5 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_4),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(120, 178, 13, 187, 249, 77, 1, 170)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value_aux_5),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(115, 139, 63, 103, 235, 117, 105, 125)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Frame"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "himp"};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__2_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__2_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(173, 29, 48, 122, 5, 158, 45, 140)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed(lean_object**);
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(239, 140, 127, 117, 148, 144, 166, 107)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__3, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1___closed__0_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 250, 129, 138, 140, 209, 203, 188)}};
static const lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ProofMode"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "elabMRevertOpt"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 74, 68, 148, 0, 14, 81, 75)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(108, 31, 139, 145, 219, 45, 28, 60)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0(lean_object* v___x_4_, lean_object* v___x_5_, lean_object* v___x_6_, lean_object* v___x_7_, lean_object* v_00_u03c3s_8_, lean_object* v_hyps_9_, lean_object* v_restHyps_10_, lean_object* v_focusHyp_11_, lean_object* v_target_12_, lean_object* v_proof_13_, lean_object* v_toPure_14_, lean_object* v_prf_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v_prf_21_; lean_object* v___x_22_; 
v___x_16_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0));
v___x_17_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1));
v___x_18_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2));
v___x_19_ = l_Lean_Name_mkStr6(v___x_4_, v___x_5_, v___x_6_, v___x_16_, v___x_17_, v___x_18_);
v___x_20_ = l_Lean_mkConst(v___x_19_, v___x_7_);
v_prf_21_ = l_Lean_mkApp7(v___x_20_, v_00_u03c3s_8_, v_hyps_9_, v_restHyps_10_, v_focusHyp_11_, v_target_12_, v_proof_13_, v_prf_15_);
v___x_22_ = lean_apply_2(v_toPure_14_, lean_box(0), v_prf_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_33_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__5));
v___x_34_ = l_Lean_stringToMessageData(v___x_33_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1(lean_object* v_goal_35_, lean_object* v_toPure_36_, lean_object* v_k_37_, lean_object* v_toBind_38_, lean_object* v___x_39_, lean_object* v___x_40_, lean_object* v_inst_41_, lean_object* v_res_42_){
_start:
{
lean_object* v_focusHyp_43_; lean_object* v_restHyps_44_; lean_object* v_proof_45_; lean_object* v___x_46_; 
v_focusHyp_43_ = lean_ctor_get(v_res_42_, 0);
lean_inc_ref_n(v_focusHyp_43_, 2);
v_restHyps_44_ = lean_ctor_get(v_res_42_, 1);
lean_inc_ref(v_restHyps_44_);
v_proof_45_ = lean_ctor_get(v_res_42_, 2);
lean_inc_ref(v_proof_45_);
lean_dec_ref(v_res_42_);
v___x_46_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_focusHyp_43_);
if (lean_obj_tag(v___x_46_) == 1)
{
lean_object* v_val_47_; lean_object* v_u_48_; lean_object* v_00_u03c3s_49_; lean_object* v_hyps_50_; lean_object* v_target_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_70_; 
lean_dec(v_inst_41_);
lean_dec_ref(v___x_40_);
lean_dec_ref(v___x_39_);
v_val_47_ = lean_ctor_get(v___x_46_, 0);
lean_inc(v_val_47_);
lean_dec_ref_known(v___x_46_, 1);
v_u_48_ = lean_ctor_get(v_goal_35_, 0);
v_00_u03c3s_49_ = lean_ctor_get(v_goal_35_, 1);
v_hyps_50_ = lean_ctor_get(v_goal_35_, 2);
v_target_51_ = lean_ctor_get(v_goal_35_, 3);
v_isSharedCheck_70_ = !lean_is_exclusive(v_goal_35_);
if (v_isSharedCheck_70_ == 0)
{
v___x_53_ = v_goal_35_;
v_isShared_54_ = v_isSharedCheck_70_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_target_51_);
lean_inc(v_hyps_50_);
lean_inc(v_00_u03c3s_49_);
lean_inc(v_u_48_);
lean_dec(v_goal_35_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_70_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v_p_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___f_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
v_p_55_ = lean_ctor_get(v_val_47_, 2);
lean_inc_ref(v_p_55_);
lean_dec(v_val_47_);
v___x_56_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0));
v___x_57_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1));
v___x_58_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2));
v___x_59_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4));
v___x_60_ = lean_box(0);
lean_inc(v_u_48_);
v___x_61_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_61_, 0, v_u_48_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
lean_inc_ref(v_target_51_);
lean_inc_ref(v_restHyps_44_);
lean_inc_ref_n(v_00_u03c3s_49_, 2);
lean_inc_ref(v___x_61_);
v___f_62_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0), 12, 11);
lean_closure_set(v___f_62_, 0, v___x_56_);
lean_closure_set(v___f_62_, 1, v___x_57_);
lean_closure_set(v___f_62_, 2, v___x_58_);
lean_closure_set(v___f_62_, 3, v___x_61_);
lean_closure_set(v___f_62_, 4, v_00_u03c3s_49_);
lean_closure_set(v___f_62_, 5, v_hyps_50_);
lean_closure_set(v___f_62_, 6, v_restHyps_44_);
lean_closure_set(v___f_62_, 7, v_focusHyp_43_);
lean_closure_set(v___f_62_, 8, v_target_51_);
lean_closure_set(v___f_62_, 9, v_proof_45_);
lean_closure_set(v___f_62_, 10, v_toPure_36_);
v___x_63_ = l_Lean_mkConst(v___x_59_, v___x_61_);
v___x_64_ = l_Lean_mkApp3(v___x_63_, v_00_u03c3s_49_, v_p_55_, v_target_51_);
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 3, v___x_64_);
lean_ctor_set(v___x_53_, 2, v_restHyps_44_);
v___x_66_ = v___x_53_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_69_; 
v_reuseFailAlloc_69_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_69_, 0, v_u_48_);
lean_ctor_set(v_reuseFailAlloc_69_, 1, v_00_u03c3s_49_);
lean_ctor_set(v_reuseFailAlloc_69_, 2, v_restHyps_44_);
lean_ctor_set(v_reuseFailAlloc_69_, 3, v___x_64_);
v___x_66_ = v_reuseFailAlloc_69_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_67_ = lean_apply_1(v_k_37_, v___x_66_);
v___x_68_ = lean_apply_4(v_toBind_38_, lean_box(0), lean_box(0), v___x_67_, v___f_62_);
return v___x_68_;
}
}
}
else
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
lean_dec(v___x_46_);
lean_dec_ref(v_proof_45_);
lean_dec_ref(v_restHyps_44_);
lean_dec_ref(v_focusHyp_43_);
lean_dec(v_toBind_38_);
lean_dec(v_k_37_);
lean_dec(v_toPure_36_);
lean_dec_ref(v_goal_35_);
v___x_71_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6);
v___x_72_ = l_Lean_throwError___redArg(v___x_39_, v___x_40_, v___x_71_);
v___x_73_ = lean_apply_2(v_inst_41_, lean_box(0), v___x_72_);
return v___x_73_;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0(void){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = l_instMonadEIO(lean_box(0));
return v___x_74_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1(void){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__0);
v___x_76_ = l_StateRefT_x27_instMonad___redArg(v___x_75_);
return v___x_76_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6(void){
_start:
{
lean_object* v___x_81_; lean_object* v___f_82_; 
v___x_81_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_82_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_82_, 0, v___x_81_);
return v___f_82_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7(void){
_start:
{
lean_object* v___x_83_; lean_object* v___f_84_; 
v___x_83_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_84_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_84_, 0, v___x_83_);
return v___f_84_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8(void){
_start:
{
lean_object* v___f_85_; lean_object* v___f_86_; lean_object* v___x_87_; 
v___f_85_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__7);
v___f_86_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__6);
v___x_87_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_87_, 0, v___f_86_);
lean_ctor_set(v___x_87_, 1, v___f_85_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9(void){
_start:
{
lean_object* v___x_88_; lean_object* v___f_89_; 
v___x_88_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8);
v___f_89_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_89_, 0, v___x_88_);
return v___f_89_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10(void){
_start:
{
lean_object* v___x_90_; lean_object* v___f_91_; 
v___x_90_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__8);
v___f_91_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_91_, 0, v___x_90_);
return v___f_91_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11(void){
_start:
{
lean_object* v___f_92_; lean_object* v___f_93_; lean_object* v___x_94_; 
v___f_92_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__10);
v___f_93_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__9);
v___x_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_94_, 0, v___f_93_);
lean_ctor_set(v___x_94_, 1, v___f_92_);
return v___x_94_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_99_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_100_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__15));
v___x_101_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__14));
v___x_102_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_101_, v___x_100_, v___x_99_);
return v___x_102_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17(void){
_start:
{
lean_object* v___x_103_; lean_object* v___f_104_; lean_object* v___f_105_; lean_object* v___x_106_; 
v___x_103_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__16);
v___f_104_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__13));
v___f_105_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__12));
v___x_106_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_105_, v___f_104_, v___x_103_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg(lean_object* v_inst_107_, lean_object* v_inst_108_, lean_object* v_goal_109_, lean_object* v_ref_110_, lean_object* v_k_111_){
_start:
{
lean_object* v___x_112_; lean_object* v_toApplicative_113_; lean_object* v_toFunctor_114_; lean_object* v_toSeq_115_; lean_object* v_toSeqLeft_116_; lean_object* v_toSeqRight_117_; lean_object* v___f_118_; lean_object* v___f_119_; lean_object* v___f_120_; lean_object* v___f_121_; lean_object* v___x_122_; lean_object* v___f_123_; lean_object* v___f_124_; lean_object* v___f_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v_toApplicative_129_; lean_object* v___x_131_; uint8_t v_isShared_132_; uint8_t v_isSharedCheck_169_; 
v___x_112_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1);
v_toApplicative_113_ = lean_ctor_get(v___x_112_, 0);
v_toFunctor_114_ = lean_ctor_get(v_toApplicative_113_, 0);
v_toSeq_115_ = lean_ctor_get(v_toApplicative_113_, 2);
v_toSeqLeft_116_ = lean_ctor_get(v_toApplicative_113_, 3);
v_toSeqRight_117_ = lean_ctor_get(v_toApplicative_113_, 4);
v___f_118_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2));
v___f_119_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_114_, 2);
v___f_120_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_120_, 0, v_toFunctor_114_);
v___f_121_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_121_, 0, v_toFunctor_114_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___f_120_);
lean_ctor_set(v___x_122_, 1, v___f_121_);
lean_inc(v_toSeqRight_117_);
v___f_123_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_123_, 0, v_toSeqRight_117_);
lean_inc(v_toSeqLeft_116_);
v___f_124_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_124_, 0, v_toSeqLeft_116_);
lean_inc(v_toSeq_115_);
v___f_125_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_125_, 0, v_toSeq_115_);
v___x_126_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_126_, 0, v___x_122_);
lean_ctor_set(v___x_126_, 1, v___f_118_);
lean_ctor_set(v___x_126_, 2, v___f_125_);
lean_ctor_set(v___x_126_, 3, v___f_124_);
lean_ctor_set(v___x_126_, 4, v___f_123_);
v___x_127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v___f_119_);
v___x_128_ = l_StateRefT_x27_instMonad___redArg(v___x_127_);
v_toApplicative_129_ = lean_ctor_get(v___x_128_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_128_);
if (v_isSharedCheck_169_ == 0)
{
lean_object* v_unused_170_; 
v_unused_170_ = lean_ctor_get(v___x_128_, 1);
lean_dec(v_unused_170_);
v___x_131_ = v___x_128_;
v_isShared_132_ = v_isSharedCheck_169_;
goto v_resetjp_130_;
}
else
{
lean_inc(v_toApplicative_129_);
lean_dec(v___x_128_);
v___x_131_ = lean_box(0);
v_isShared_132_ = v_isSharedCheck_169_;
goto v_resetjp_130_;
}
v_resetjp_130_:
{
lean_object* v_toFunctor_133_; lean_object* v_toSeq_134_; lean_object* v_toSeqLeft_135_; lean_object* v_toSeqRight_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_167_; 
v_toFunctor_133_ = lean_ctor_get(v_toApplicative_129_, 0);
v_toSeq_134_ = lean_ctor_get(v_toApplicative_129_, 2);
v_toSeqLeft_135_ = lean_ctor_get(v_toApplicative_129_, 3);
v_toSeqRight_136_ = lean_ctor_get(v_toApplicative_129_, 4);
v_isSharedCheck_167_ = !lean_is_exclusive(v_toApplicative_129_);
if (v_isSharedCheck_167_ == 0)
{
lean_object* v_unused_168_; 
v_unused_168_ = lean_ctor_get(v_toApplicative_129_, 1);
lean_dec(v_unused_168_);
v___x_138_ = v_toApplicative_129_;
v_isShared_139_ = v_isSharedCheck_167_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_toSeqRight_136_);
lean_inc(v_toSeqLeft_135_);
lean_inc(v_toSeq_134_);
lean_inc(v_toFunctor_133_);
lean_dec(v_toApplicative_129_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_167_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
lean_object* v___f_140_; lean_object* v___f_141_; lean_object* v___f_142_; lean_object* v___f_143_; lean_object* v___x_144_; lean_object* v___f_145_; lean_object* v___f_146_; lean_object* v___f_147_; lean_object* v___x_149_; 
v___f_140_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4));
v___f_141_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5));
lean_inc_ref(v_toFunctor_133_);
v___f_142_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_142_, 0, v_toFunctor_133_);
v___f_143_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_143_, 0, v_toFunctor_133_);
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v___f_142_);
lean_ctor_set(v___x_144_, 1, v___f_143_);
v___f_145_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_145_, 0, v_toSeqRight_136_);
v___f_146_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_146_, 0, v_toSeqLeft_135_);
v___f_147_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_147_, 0, v_toSeq_134_);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 4, v___f_145_);
lean_ctor_set(v___x_138_, 3, v___f_146_);
lean_ctor_set(v___x_138_, 2, v___f_147_);
lean_ctor_set(v___x_138_, 1, v___f_140_);
lean_ctor_set(v___x_138_, 0, v___x_144_);
v___x_149_ = v___x_138_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v___x_144_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v___f_140_);
lean_ctor_set(v_reuseFailAlloc_166_, 2, v___f_147_);
lean_ctor_set(v_reuseFailAlloc_166_, 3, v___f_146_);
lean_ctor_set(v_reuseFailAlloc_166_, 4, v___f_145_);
v___x_149_ = v_reuseFailAlloc_166_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
lean_object* v___x_151_; 
if (v_isShared_132_ == 0)
{
lean_ctor_set(v___x_131_, 1, v___f_141_);
lean_ctor_set(v___x_131_, 0, v___x_149_);
v___x_151_ = v___x_131_;
goto v_reusejp_150_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_149_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v___f_141_);
v___x_151_ = v_reuseFailAlloc_165_;
goto v_reusejp_150_;
}
v_reusejp_150_:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v_toMonadRef_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_toApplicative_158_; lean_object* v_toBind_159_; lean_object* v_toPure_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___f_163_; lean_object* v___x_164_; 
v___x_152_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11);
v___x_153_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17);
v_toMonadRef_154_ = lean_ctor_get(v___x_153_, 0);
v___x_155_ = l_Lean_Meta_instAddMessageContextMetaM;
lean_inc_ref(v___x_151_);
v___x_156_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_155_, v___x_151_);
lean_inc_ref(v_toMonadRef_154_);
v___x_157_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_157_, 0, v___x_152_);
lean_ctor_set(v___x_157_, 1, v_toMonadRef_154_);
lean_ctor_set(v___x_157_, 2, v___x_156_);
v_toApplicative_158_ = lean_ctor_get(v_inst_107_, 0);
lean_inc_ref(v_toApplicative_158_);
v_toBind_159_ = lean_ctor_get(v_inst_107_, 1);
lean_inc_n(v_toBind_159_, 2);
lean_dec_ref(v_inst_107_);
v_toPure_160_ = lean_ctor_get(v_toApplicative_158_, 1);
lean_inc(v_toPure_160_);
lean_dec_ref(v_toApplicative_158_);
lean_inc_ref(v_goal_109_);
v___x_161_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo___boxed), 7, 2);
lean_closure_set(v___x_161_, 0, v_goal_109_);
lean_closure_set(v___x_161_, 1, v_ref_110_);
lean_inc(v_inst_108_);
v___x_162_ = lean_apply_2(v_inst_108_, lean_box(0), v___x_161_);
v___f_163_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1), 8, 7);
lean_closure_set(v___f_163_, 0, v_goal_109_);
lean_closure_set(v___f_163_, 1, v_toPure_160_);
lean_closure_set(v___f_163_, 2, v_k_111_);
lean_closure_set(v___f_163_, 3, v_toBind_159_);
lean_closure_set(v___f_163_, 4, v___x_151_);
lean_closure_set(v___f_163_, 5, v___x_157_);
lean_closure_set(v___f_163_, 6, v_inst_108_);
v___x_164_ = lean_apply_4(v_toBind_159_, lean_box(0), lean_box(0), v___x_162_, v___f_163_);
return v___x_164_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert(lean_object* v_m_171_, lean_object* v_inst_172_, lean_object* v_inst_173_, lean_object* v_goal_174_, lean_object* v_ref_175_, lean_object* v_k_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg(v_inst_172_, v_inst_173_, v_goal_174_, v_ref_175_, v_k_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__0(lean_object* v_inst_178_, lean_object* v_x_179_){
_start:
{
lean_object* v_fst_180_; lean_object* v_snd_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v_fst_180_ = lean_ctor_get(v_x_179_, 0);
lean_inc(v_fst_180_);
v_snd_181_ = lean_ctor_get(v_x_179_, 1);
lean_inc(v_snd_181_);
lean_dec_ref(v_x_179_);
v___x_182_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_182_, 0, v_snd_181_);
lean_closure_set(v___x_182_, 1, v_fst_180_);
v___x_183_ = lean_apply_2(v_inst_178_, lean_box(0), v___x_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1(lean_object* v_hypName_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_Lean_Core_mkFreshUserName(v_hypName_184_, v___y_187_, v___y_188_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1___boxed(lean_object* v_hypName_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1(v_hypName_191_, v___y_192_, v___y_193_, v___y_194_, v___y_195_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
lean_dec(v___y_193_);
lean_dec_ref(v___y_192_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2(lean_object* v_it_198_, lean_object* v_acc_199_, lean_object* v_recur_200_){
_start:
{
lean_object* v_array_201_; lean_object* v_start_202_; lean_object* v_stop_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_216_; 
v_array_201_ = lean_ctor_get(v_it_198_, 0);
v_start_202_ = lean_ctor_get(v_it_198_, 1);
v_stop_203_ = lean_ctor_get(v_it_198_, 2);
v_isSharedCheck_216_ = !lean_is_exclusive(v_it_198_);
if (v_isSharedCheck_216_ == 0)
{
v___x_205_ = v_it_198_;
v_isShared_206_ = v_isSharedCheck_216_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_stop_203_);
lean_inc(v_start_202_);
lean_inc(v_array_201_);
lean_dec(v_it_198_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_216_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
uint8_t v___x_207_; 
v___x_207_ = lean_nat_dec_lt(v_start_202_, v_stop_203_);
if (v___x_207_ == 0)
{
lean_del_object(v___x_205_);
lean_dec(v_stop_203_);
lean_dec(v_start_202_);
lean_dec_ref(v_array_201_);
lean_dec_ref(v_recur_200_);
return v_acc_199_;
}
else
{
lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_211_; 
v___x_208_ = lean_unsigned_to_nat(1u);
v___x_209_ = lean_nat_add(v_start_202_, v___x_208_);
lean_inc_ref(v_array_201_);
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 1, v___x_209_);
v___x_211_ = v___x_205_;
goto v_reusejp_210_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_array_201_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_209_);
lean_ctor_set(v_reuseFailAlloc_215_, 2, v_stop_203_);
v___x_211_ = v_reuseFailAlloc_215_;
goto v_reusejp_210_;
}
v_reusejp_210_:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = lean_array_fget(v_array_201_, v_start_202_);
lean_dec(v_start_202_);
lean_dec_ref(v_array_201_);
v___x_213_ = lean_array_push(v_acc_199_, v___x_212_);
v___x_214_ = lean_apply_3(v_recur_200_, v___x_211_, v___x_213_, lean_box(0));
return v___x_214_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3(lean_object* v_u_217_, lean_object* v_x1_218_, lean_object* v_x2_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(v_u_217_, v_x1_218_, v_x2_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4(lean_object* v_toApplicative_221_, lean_object* v_i_222_, lean_object* v_a_223_, lean_object* v_____do__lift_224_){
_start:
{
lean_object* v_toPure_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_toPure_225_ = lean_ctor_get(v_toApplicative_221_, 1);
lean_inc(v_toPure_225_);
lean_dec_ref(v_toApplicative_221_);
v___x_226_ = lean_unsigned_to_nat(1u);
v___x_227_ = lean_nat_add(v_i_222_, v___x_226_);
v___x_228_ = lean_name_append_index_after(v_____do__lift_224_, v___x_227_);
v___x_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_229_, 0, v___x_228_);
lean_ctor_set(v___x_229_, 1, v_a_223_);
v___x_230_ = lean_apply_2(v_toPure_225_, lean_box(0), v___x_229_);
return v___x_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed(lean_object* v_toApplicative_231_, lean_object* v_i_232_, lean_object* v_a_233_, lean_object* v_____do__lift_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4(v_toApplicative_231_, v_i_232_, v_a_233_, v_____do__lift_234_);
lean_dec(v_i_232_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5(lean_object* v___x_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = l_Lean_Core_mkFreshUserName(v___x_236_, v___y_239_, v___y_240_);
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___boxed(lean_object* v___x_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5(v___x_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6(lean_object* v_toApplicative_255_, lean_object* v_inst_256_, lean_object* v_toBind_257_, lean_object* v_i_258_, lean_object* v_a_259_, lean_object* v_x_260_){
_start:
{
lean_object* v___f_261_; lean_object* v___f_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v___f_261_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_261_, 0, v_toApplicative_255_);
lean_closure_set(v___f_261_, 1, v_i_258_);
lean_closure_set(v___f_261_, 2, v_a_259_);
v___f_262_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__2));
v___x_263_ = lean_apply_2(v_inst_256_, lean_box(0), v___f_262_);
v___x_264_ = lean_apply_4(v_toBind_257_, lean_box(0), lean_box(0), v___x_263_, v___f_261_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__7(lean_object* v_toApplicative_265_, lean_object* v_00_u03c6_266_, lean_object* v_____do__lift_267_){
_start:
{
lean_object* v_toPure_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v_toPure_268_ = lean_ctor_get(v_toApplicative_265_, 1);
lean_inc(v_toPure_268_);
lean_dec_ref(v_toApplicative_265_);
v___x_269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_269_, 0, v_____do__lift_267_);
lean_ctor_set(v___x_269_, 1, v_00_u03c6_266_);
v___x_270_ = lean_apply_2(v_toPure_268_, lean_box(0), v___x_269_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8(lean_object* v_hypName_271_, lean_object* v_uniq_272_, lean_object* v_toApplicative_273_, lean_object* v_ss_274_, lean_object* v_hyps_275_, uint8_t v___x_276_, uint8_t v___x_277_, uint8_t v___x_278_, lean_object* v_inst_279_, lean_object* v_toBind_280_, lean_object* v_____do__lift_281_){
_start:
{
lean_object* v___x_282_; lean_object* v_00_u03c6_283_; lean_object* v___f_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_282_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_282_, 0, v_hypName_271_);
lean_ctor_set(v___x_282_, 1, v_uniq_272_);
lean_ctor_set(v___x_282_, 2, v_____do__lift_281_);
v_00_u03c6_283_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_282_);
v___f_284_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__7), 3, 2);
lean_closure_set(v___f_284_, 0, v_toApplicative_273_);
lean_closure_set(v___f_284_, 1, v_00_u03c6_283_);
v___x_285_ = lean_box(v___x_276_);
v___x_286_ = lean_box(v___x_277_);
v___x_287_ = lean_box(v___x_276_);
v___x_288_ = lean_box(v___x_277_);
v___x_289_ = lean_box(v___x_278_);
v___x_290_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_290_, 0, v_ss_274_);
lean_closure_set(v___x_290_, 1, v_hyps_275_);
lean_closure_set(v___x_290_, 2, v___x_285_);
lean_closure_set(v___x_290_, 3, v___x_286_);
lean_closure_set(v___x_290_, 4, v___x_287_);
lean_closure_set(v___x_290_, 5, v___x_288_);
lean_closure_set(v___x_290_, 6, v___x_289_);
v___x_291_ = lean_apply_2(v_inst_279_, lean_box(0), v___x_290_);
v___x_292_ = lean_apply_4(v_toBind_280_, lean_box(0), lean_box(0), v___x_291_, v___f_284_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed(lean_object* v_hypName_293_, lean_object* v_uniq_294_, lean_object* v_toApplicative_295_, lean_object* v_ss_296_, lean_object* v_hyps_297_, lean_object* v___x_298_, lean_object* v___x_299_, lean_object* v___x_300_, lean_object* v_inst_301_, lean_object* v_toBind_302_, lean_object* v_____do__lift_303_){
_start:
{
uint8_t v___x_1119__boxed_304_; uint8_t v___x_1120__boxed_305_; uint8_t v___x_1121__boxed_306_; lean_object* v_res_307_; 
v___x_1119__boxed_304_ = lean_unbox(v___x_298_);
v___x_1120__boxed_305_ = lean_unbox(v___x_299_);
v___x_1121__boxed_306_ = lean_unbox(v___x_300_);
v_res_307_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8(v_hypName_293_, v_uniq_294_, v_toApplicative_295_, v_ss_296_, v_hyps_297_, v___x_1119__boxed_304_, v___x_1120__boxed_305_, v___x_1121__boxed_306_, v_inst_301_, v_toBind_302_, v_____do__lift_303_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9(lean_object* v_hypName_308_, lean_object* v_toApplicative_309_, lean_object* v_ss_310_, lean_object* v_hyps_311_, uint8_t v___x_312_, lean_object* v_inst_313_, lean_object* v_toBind_314_, lean_object* v_00_u03c6_315_, lean_object* v_uniq_316_){
_start:
{
uint8_t v___x_317_; uint8_t v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___f_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_317_ = 1;
v___x_318_ = 1;
v___x_319_ = lean_box(v___x_312_);
v___x_320_ = lean_box(v___x_317_);
v___x_321_ = lean_box(v___x_318_);
lean_inc(v_toBind_314_);
lean_inc(v_inst_313_);
lean_inc_ref(v_ss_310_);
v___f_322_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed), 11, 10);
lean_closure_set(v___f_322_, 0, v_hypName_308_);
lean_closure_set(v___f_322_, 1, v_uniq_316_);
lean_closure_set(v___f_322_, 2, v_toApplicative_309_);
lean_closure_set(v___f_322_, 3, v_ss_310_);
lean_closure_set(v___f_322_, 4, v_hyps_311_);
lean_closure_set(v___f_322_, 5, v___x_319_);
lean_closure_set(v___f_322_, 6, v___x_320_);
lean_closure_set(v___f_322_, 7, v___x_321_);
lean_closure_set(v___f_322_, 8, v_inst_313_);
lean_closure_set(v___f_322_, 9, v_toBind_314_);
v___x_323_ = lean_box(v___x_312_);
v___x_324_ = lean_box(v___x_317_);
v___x_325_ = lean_box(v___x_312_);
v___x_326_ = lean_box(v___x_317_);
v___x_327_ = lean_box(v___x_318_);
v___x_328_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_328_, 0, v_ss_310_);
lean_closure_set(v___x_328_, 1, v_00_u03c6_315_);
lean_closure_set(v___x_328_, 2, v___x_323_);
lean_closure_set(v___x_328_, 3, v___x_324_);
lean_closure_set(v___x_328_, 4, v___x_325_);
lean_closure_set(v___x_328_, 5, v___x_326_);
lean_closure_set(v___x_328_, 6, v___x_327_);
v___x_329_ = lean_apply_2(v_inst_313_, lean_box(0), v___x_328_);
v___x_330_ = lean_apply_4(v_toBind_314_, lean_box(0), lean_box(0), v___x_329_, v___f_322_);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed(lean_object* v_hypName_331_, lean_object* v_toApplicative_332_, lean_object* v_ss_333_, lean_object* v_hyps_334_, lean_object* v___x_335_, lean_object* v_inst_336_, lean_object* v_toBind_337_, lean_object* v_00_u03c6_338_, lean_object* v_uniq_339_){
_start:
{
uint8_t v___x_1154__boxed_340_; lean_object* v_res_341_; 
v___x_1154__boxed_340_ = lean_unbox(v___x_335_);
v_res_341_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9(v_hypName_331_, v_toApplicative_332_, v_ss_333_, v_hyps_334_, v___x_1154__boxed_340_, v_inst_336_, v_toBind_337_, v_00_u03c6_338_, v_uniq_339_);
return v_res_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10(lean_object* v_u_342_, lean_object* v_00_u03c3s_343_, lean_object* v_hypName_344_, lean_object* v_toApplicative_345_, lean_object* v_ss_346_, lean_object* v_hyps_347_, uint8_t v___x_348_, lean_object* v_inst_349_, lean_object* v_toBind_350_, lean_object* v___f_351_, lean_object* v_eqs_352_){
_start:
{
lean_object* v_eqs_353_; lean_object* v_00_u03c6_354_; lean_object* v_00_u03c6_355_; lean_object* v___x_356_; lean_object* v___f_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
v_eqs_353_ = lean_array_to_list(v_eqs_352_);
v_00_u03c6_354_ = l_Lean_mkAndN(v_eqs_353_);
v_00_u03c6_355_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_u_342_, v_00_u03c3s_343_, v_00_u03c6_354_);
v___x_356_ = lean_box(v___x_348_);
lean_inc(v_toBind_350_);
lean_inc(v_inst_349_);
v___f_357_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed), 9, 8);
lean_closure_set(v___f_357_, 0, v_hypName_344_);
lean_closure_set(v___f_357_, 1, v_toApplicative_345_);
lean_closure_set(v___f_357_, 2, v_ss_346_);
lean_closure_set(v___f_357_, 3, v_hyps_347_);
lean_closure_set(v___f_357_, 4, v___x_356_);
lean_closure_set(v___f_357_, 5, v_inst_349_);
lean_closure_set(v___f_357_, 6, v_toBind_350_);
lean_closure_set(v___f_357_, 7, v_00_u03c6_355_);
v___x_358_ = lean_apply_2(v_inst_349_, lean_box(0), v___f_351_);
v___x_359_ = lean_apply_4(v_toBind_350_, lean_box(0), lean_box(0), v___x_358_, v___f_357_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed(lean_object* v_u_360_, lean_object* v_00_u03c3s_361_, lean_object* v_hypName_362_, lean_object* v_toApplicative_363_, lean_object* v_ss_364_, lean_object* v_hyps_365_, lean_object* v___x_366_, lean_object* v_inst_367_, lean_object* v_toBind_368_, lean_object* v___f_369_, lean_object* v_eqs_370_){
_start:
{
uint8_t v___x_1188__boxed_371_; lean_object* v_res_372_; 
v___x_1188__boxed_371_ = lean_unbox(v___x_366_);
v_res_372_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10(v_u_360_, v_00_u03c3s_361_, v_hypName_362_, v_toApplicative_363_, v_ss_364_, v_hyps_365_, v___x_1188__boxed_371_, v_inst_367_, v_toBind_368_, v___f_369_, v_eqs_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11(lean_object* v_u_373_, lean_object* v_00_u03c3s_374_, lean_object* v_hypName_375_, lean_object* v_toApplicative_376_, lean_object* v_hyps_377_, uint8_t v___x_378_, lean_object* v_inst_379_, lean_object* v_toBind_380_, lean_object* v___f_381_, lean_object* v_revertArgs_382_, lean_object* v_inst_383_, lean_object* v___f_384_, lean_object* v_ss_385_){
_start:
{
lean_object* v___x_386_; lean_object* v___f_387_; lean_object* v___x_388_; size_t v_sz_389_; size_t v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_386_ = lean_box(v___x_378_);
lean_inc(v_toBind_380_);
lean_inc_ref(v_ss_385_);
v___f_387_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed), 11, 10);
lean_closure_set(v___f_387_, 0, v_u_373_);
lean_closure_set(v___f_387_, 1, v_00_u03c3s_374_);
lean_closure_set(v___f_387_, 2, v_hypName_375_);
lean_closure_set(v___f_387_, 3, v_toApplicative_376_);
lean_closure_set(v___f_387_, 4, v_ss_385_);
lean_closure_set(v___f_387_, 5, v_hyps_377_);
lean_closure_set(v___f_387_, 6, v___x_386_);
lean_closure_set(v___f_387_, 7, v_inst_379_);
lean_closure_set(v___f_387_, 8, v_toBind_380_);
lean_closure_set(v___f_387_, 9, v___f_381_);
v___x_388_ = l_Array_zip___redArg(v_revertArgs_382_, v_ss_385_);
lean_dec_ref(v_ss_385_);
v_sz_389_ = lean_array_size(v___x_388_);
v___x_390_ = ((size_t)0ULL);
v___x_391_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_383_, v___f_384_, v_sz_389_, v___x_390_, v___x_388_);
v___x_392_ = lean_apply_4(v_toBind_380_, lean_box(0), lean_box(0), v___x_391_, v___f_387_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed(lean_object* v_u_393_, lean_object* v_00_u03c3s_394_, lean_object* v_hypName_395_, lean_object* v_toApplicative_396_, lean_object* v_hyps_397_, lean_object* v___x_398_, lean_object* v_inst_399_, lean_object* v_toBind_400_, lean_object* v___f_401_, lean_object* v_revertArgs_402_, lean_object* v_inst_403_, lean_object* v___f_404_, lean_object* v_ss_405_){
_start:
{
uint8_t v___x_1205__boxed_406_; lean_object* v_res_407_; 
v___x_1205__boxed_406_ = lean_unbox(v___x_398_);
v_res_407_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11(v_u_393_, v_00_u03c3s_394_, v_hypName_395_, v_toApplicative_396_, v_hyps_397_, v___x_1205__boxed_406_, v_inst_399_, v_toBind_400_, v___f_401_, v_revertArgs_402_, v_inst_403_, v___f_404_, v_ss_405_);
lean_dec_ref(v_revertArgs_402_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12(lean_object* v_toApplicative_416_, lean_object* v_u_417_, lean_object* v_fst_418_, lean_object* v_revertArgs_419_, lean_object* v_snd_420_, lean_object* v_prf_421_, lean_object* v_00_u03c3s_422_, lean_object* v_hyps_423_, lean_object* v_target_424_, lean_object* v_h_425_, lean_object* v_____do__lift_426_){
_start:
{
lean_object* v_toPure_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v_prf_435_; lean_object* v___x_436_; 
v_toPure_427_ = lean_ctor_get(v_toApplicative_416_, 1);
lean_inc(v_toPure_427_);
lean_dec_ref(v_toApplicative_416_);
v___x_428_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1));
v___x_429_ = lean_box(0);
v___x_430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_430_, 0, v_u_417_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = l_Lean_mkConst(v___x_428_, v___x_430_);
v___x_432_ = l_Lean_mkAppN(v_fst_418_, v_revertArgs_419_);
v___x_433_ = l_Lean_mkAppN(v_snd_420_, v_revertArgs_419_);
v___x_434_ = l_Lean_mkAppN(v_prf_421_, v_revertArgs_419_);
v_prf_435_ = l_Lean_mkApp8(v___x_431_, v_00_u03c3s_422_, v_____do__lift_426_, v_hyps_423_, v___x_432_, v_target_424_, v_h_425_, v___x_433_, v___x_434_);
v___x_436_ = lean_apply_2(v_toPure_427_, lean_box(0), v_prf_435_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed(lean_object* v_toApplicative_437_, lean_object* v_u_438_, lean_object* v_fst_439_, lean_object* v_revertArgs_440_, lean_object* v_snd_441_, lean_object* v_prf_442_, lean_object* v_00_u03c3s_443_, lean_object* v_hyps_444_, lean_object* v_target_445_, lean_object* v_h_446_, lean_object* v_____do__lift_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12(v_toApplicative_437_, v_u_438_, v_fst_439_, v_revertArgs_440_, v_snd_441_, v_prf_442_, v_00_u03c3s_443_, v_hyps_444_, v_target_445_, v_h_446_, v_____do__lift_447_);
lean_dec_ref(v_revertArgs_440_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__13(lean_object* v_toApplicative_449_, lean_object* v_u_450_, lean_object* v_fst_451_, lean_object* v_revertArgs_452_, lean_object* v_snd_453_, lean_object* v_00_u03c3s_454_, lean_object* v_hyps_455_, lean_object* v_target_456_, lean_object* v_h_457_, lean_object* v_inst_458_, lean_object* v_toBind_459_, lean_object* v_prf_460_){
_start:
{
lean_object* v___f_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
lean_inc_ref(v_h_457_);
v___f_461_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed), 11, 10);
lean_closure_set(v___f_461_, 0, v_toApplicative_449_);
lean_closure_set(v___f_461_, 1, v_u_450_);
lean_closure_set(v___f_461_, 2, v_fst_451_);
lean_closure_set(v___f_461_, 3, v_revertArgs_452_);
lean_closure_set(v___f_461_, 4, v_snd_453_);
lean_closure_set(v___f_461_, 5, v_prf_460_);
lean_closure_set(v___f_461_, 6, v_00_u03c3s_454_);
lean_closure_set(v___f_461_, 7, v_hyps_455_);
lean_closure_set(v___f_461_, 8, v_target_456_);
lean_closure_set(v___f_461_, 9, v_h_457_);
v___x_462_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_462_, 0, v_h_457_);
v___x_463_ = lean_apply_2(v_inst_458_, lean_box(0), v___x_462_);
v___x_464_ = lean_apply_4(v_toBind_459_, lean_box(0), lean_box(0), v___x_463_, v___f_461_);
return v___x_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__14(lean_object* v___y_465_, lean_object* v_u_466_, lean_object* v_snd_467_, lean_object* v_toApplicative_468_, lean_object* v_revertArgs_469_, lean_object* v_00_u03c3s_470_, lean_object* v_hyps_471_, lean_object* v_target_472_, lean_object* v_h_473_, lean_object* v_inst_474_, lean_object* v_toBind_475_, lean_object* v_a_476_, lean_object* v_n_477_, lean_object* v_f_478_, lean_object* v_k_479_, lean_object* v_H_480_){
_start:
{
lean_object* v_H_481_; lean_object* v___x_482_; lean_object* v_fst_483_; lean_object* v_snd_484_; lean_object* v___f_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v_goal_x27_490_; lean_object* v___x_491_; lean_object* v___x_492_; 
lean_inc_ref_n(v___y_465_, 2);
v_H_481_ = l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(v___y_465_, v_H_480_);
lean_inc_n(v_u_466_, 2);
v___x_482_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(v_u_466_, v___y_465_, v_H_481_, v_snd_467_);
v_fst_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc_n(v_fst_483_, 2);
v_snd_484_ = lean_ctor_get(v___x_482_, 1);
lean_inc(v_snd_484_);
lean_dec_ref(v___x_482_);
lean_inc(v_toBind_475_);
v___f_485_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__13), 12, 11);
lean_closure_set(v___f_485_, 0, v_toApplicative_468_);
lean_closure_set(v___f_485_, 1, v_u_466_);
lean_closure_set(v___f_485_, 2, v_fst_483_);
lean_closure_set(v___f_485_, 3, v_revertArgs_469_);
lean_closure_set(v___f_485_, 4, v_snd_484_);
lean_closure_set(v___f_485_, 5, v_00_u03c3s_470_);
lean_closure_set(v___f_485_, 6, v_hyps_471_);
lean_closure_set(v___f_485_, 7, v_target_472_);
lean_closure_set(v___f_485_, 8, v_h_473_);
lean_closure_set(v___f_485_, 9, v_inst_474_);
lean_closure_set(v___f_485_, 10, v_toBind_475_);
v___x_486_ = lean_array_get_size(v_a_476_);
v___x_487_ = l_Array_toSubarray___redArg(v_a_476_, v_n_477_, v___x_486_);
v___x_488_ = l_Subarray_copy___redArg(v___x_487_);
v___x_489_ = l_Lean_mkAppRev(v_f_478_, v___x_488_);
lean_dec_ref(v___x_488_);
v_goal_x27_490_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_goal_x27_490_, 0, v_u_466_);
lean_ctor_set(v_goal_x27_490_, 1, v___y_465_);
lean_ctor_set(v_goal_x27_490_, 2, v_fst_483_);
lean_ctor_set(v_goal_x27_490_, 3, v___x_489_);
v___x_491_ = lean_apply_1(v_k_479_, v_goal_x27_490_);
v___x_492_ = lean_apply_4(v_toBind_475_, lean_box(0), lean_box(0), v___x_491_, v___f_485_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15(lean_object* v_u_512_, lean_object* v_snd_513_, lean_object* v_toApplicative_514_, lean_object* v_revertArgs_515_, lean_object* v_00_u03c3s_516_, lean_object* v_hyps_517_, lean_object* v_target_518_, lean_object* v_inst_519_, lean_object* v_toBind_520_, lean_object* v_a_521_, lean_object* v_n_522_, lean_object* v_f_523_, lean_object* v_k_524_, lean_object* v_fst_525_, lean_object* v_revertArgsTypes_526_, lean_object* v___x_527_, lean_object* v___f_528_, lean_object* v_h_529_){
_start:
{
lean_object* v___y_531_; lean_object* v___x_536_; lean_object* v___x_537_; uint8_t v___x_538_; 
v___x_536_ = lean_array_get_size(v_revertArgsTypes_526_);
v___x_537_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9));
v___x_538_ = lean_nat_dec_lt(v___x_527_, v___x_536_);
if (v___x_538_ == 0)
{
lean_dec_ref(v___f_528_);
lean_dec_ref(v_revertArgsTypes_526_);
lean_inc_ref(v_00_u03c3s_516_);
v___y_531_ = v_00_u03c3s_516_;
goto v___jp_530_;
}
else
{
size_t v___x_539_; size_t v___x_540_; lean_object* v___x_541_; 
v___x_539_ = lean_usize_of_nat(v___x_536_);
v___x_540_ = ((size_t)0ULL);
lean_inc_ref(v_00_u03c3s_516_);
v___x_541_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_537_, v___f_528_, v_revertArgsTypes_526_, v___x_539_, v___x_540_, v_00_u03c3s_516_);
v___y_531_ = v___x_541_;
goto v___jp_530_;
}
v___jp_530_:
{
lean_object* v___f_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
lean_inc(v_toBind_520_);
lean_inc(v_inst_519_);
v___f_532_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__14), 16, 15);
lean_closure_set(v___f_532_, 0, v___y_531_);
lean_closure_set(v___f_532_, 1, v_u_512_);
lean_closure_set(v___f_532_, 2, v_snd_513_);
lean_closure_set(v___f_532_, 3, v_toApplicative_514_);
lean_closure_set(v___f_532_, 4, v_revertArgs_515_);
lean_closure_set(v___f_532_, 5, v_00_u03c3s_516_);
lean_closure_set(v___f_532_, 6, v_hyps_517_);
lean_closure_set(v___f_532_, 7, v_target_518_);
lean_closure_set(v___f_532_, 8, v_h_529_);
lean_closure_set(v___f_532_, 9, v_inst_519_);
lean_closure_set(v___f_532_, 10, v_toBind_520_);
lean_closure_set(v___f_532_, 11, v_a_521_);
lean_closure_set(v___f_532_, 12, v_n_522_);
lean_closure_set(v___f_532_, 13, v_f_523_);
lean_closure_set(v___f_532_, 14, v_k_524_);
v___x_533_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateMVarsIfMVarApp___boxed), 6, 1);
lean_closure_set(v___x_533_, 0, v_fst_525_);
v___x_534_ = lean_apply_2(v_inst_519_, lean_box(0), v___x_533_);
v___x_535_ = lean_apply_4(v_toBind_520_, lean_box(0), lean_box(0), v___x_534_, v___f_532_);
return v___x_535_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___boxed(lean_object** _args){
lean_object* v_u_542_ = _args[0];
lean_object* v_snd_543_ = _args[1];
lean_object* v_toApplicative_544_ = _args[2];
lean_object* v_revertArgs_545_ = _args[3];
lean_object* v_00_u03c3s_546_ = _args[4];
lean_object* v_hyps_547_ = _args[5];
lean_object* v_target_548_ = _args[6];
lean_object* v_inst_549_ = _args[7];
lean_object* v_toBind_550_ = _args[8];
lean_object* v_a_551_ = _args[9];
lean_object* v_n_552_ = _args[10];
lean_object* v_f_553_ = _args[11];
lean_object* v_k_554_ = _args[12];
lean_object* v_fst_555_ = _args[13];
lean_object* v_revertArgsTypes_556_ = _args[14];
lean_object* v___x_557_ = _args[15];
lean_object* v___f_558_ = _args[16];
lean_object* v_h_559_ = _args[17];
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15(v_u_542_, v_snd_543_, v_toApplicative_544_, v_revertArgs_545_, v_00_u03c3s_546_, v_hyps_547_, v_target_548_, v_inst_549_, v_toBind_550_, v_a_551_, v_n_552_, v_f_553_, v_k_554_, v_fst_555_, v_revertArgsTypes_556_, v___x_557_, v___f_558_, v_h_559_);
lean_dec(v___x_557_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__16(lean_object* v_inst_561_, lean_object* v_toBind_562_, lean_object* v___f_563_, lean_object* v_prfs_564_){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_565_ = lean_array_to_list(v_prfs_564_);
v___x_566_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAndIntroN___boxed), 6, 1);
lean_closure_set(v___x_566_, 0, v___x_565_);
v___x_567_ = lean_apply_2(v_inst_561_, lean_box(0), v___x_566_);
v___x_568_ = lean_apply_4(v_toBind_562_, lean_box(0), lean_box(0), v___x_567_, v___f_563_);
return v___x_568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17(lean_object* v_u_570_, lean_object* v_toApplicative_571_, lean_object* v_revertArgs_572_, lean_object* v_00_u03c3s_573_, lean_object* v_hyps_574_, lean_object* v_target_575_, lean_object* v_inst_576_, lean_object* v_toBind_577_, lean_object* v_a_578_, lean_object* v_n_579_, lean_object* v_f_580_, lean_object* v_k_581_, lean_object* v_revertArgsTypes_582_, lean_object* v___x_583_, lean_object* v___f_584_, lean_object* v___x_585_, lean_object* v_____x_586_){
_start:
{
lean_object* v_fst_587_; lean_object* v_snd_588_; lean_object* v___f_589_; lean_object* v___f_590_; lean_object* v___x_591_; size_t v_sz_592_; size_t v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; 
v_fst_587_ = lean_ctor_get(v_____x_586_, 0);
lean_inc(v_fst_587_);
v_snd_588_ = lean_ctor_get(v_____x_586_, 1);
lean_inc(v_snd_588_);
lean_dec_ref(v_____x_586_);
lean_inc_n(v_toBind_577_, 2);
lean_inc_n(v_inst_576_, 2);
lean_inc_ref(v_revertArgs_572_);
v___f_589_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___boxed), 18, 17);
lean_closure_set(v___f_589_, 0, v_u_570_);
lean_closure_set(v___f_589_, 1, v_snd_588_);
lean_closure_set(v___f_589_, 2, v_toApplicative_571_);
lean_closure_set(v___f_589_, 3, v_revertArgs_572_);
lean_closure_set(v___f_589_, 4, v_00_u03c3s_573_);
lean_closure_set(v___f_589_, 5, v_hyps_574_);
lean_closure_set(v___f_589_, 6, v_target_575_);
lean_closure_set(v___f_589_, 7, v_inst_576_);
lean_closure_set(v___f_589_, 8, v_toBind_577_);
lean_closure_set(v___f_589_, 9, v_a_578_);
lean_closure_set(v___f_589_, 10, v_n_579_);
lean_closure_set(v___f_589_, 11, v_f_580_);
lean_closure_set(v___f_589_, 12, v_k_581_);
lean_closure_set(v___f_589_, 13, v_fst_587_);
lean_closure_set(v___f_589_, 14, v_revertArgsTypes_582_);
lean_closure_set(v___f_589_, 15, v___x_583_);
lean_closure_set(v___f_589_, 16, v___f_584_);
v___f_590_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__16), 4, 3);
lean_closure_set(v___f_590_, 0, v_inst_576_);
lean_closure_set(v___f_590_, 1, v_toBind_577_);
lean_closure_set(v___f_590_, 2, v___f_589_);
v___x_591_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0));
v_sz_592_ = lean_array_size(v_revertArgs_572_);
v___x_593_ = ((size_t)0ULL);
v___x_594_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_585_, v___x_591_, v_sz_592_, v___x_593_, v_revertArgs_572_);
v___x_595_ = lean_apply_2(v_inst_576_, lean_box(0), v___x_594_);
v___x_596_ = lean_apply_4(v_toBind_577_, lean_box(0), lean_box(0), v___x_595_, v___f_590_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___boxed(lean_object** _args){
lean_object* v_u_597_ = _args[0];
lean_object* v_toApplicative_598_ = _args[1];
lean_object* v_revertArgs_599_ = _args[2];
lean_object* v_00_u03c3s_600_ = _args[3];
lean_object* v_hyps_601_ = _args[4];
lean_object* v_target_602_ = _args[5];
lean_object* v_inst_603_ = _args[6];
lean_object* v_toBind_604_ = _args[7];
lean_object* v_a_605_ = _args[8];
lean_object* v_n_606_ = _args[9];
lean_object* v_f_607_ = _args[10];
lean_object* v_k_608_ = _args[11];
lean_object* v_revertArgsTypes_609_ = _args[12];
lean_object* v___x_610_ = _args[13];
lean_object* v___f_611_ = _args[14];
lean_object* v___x_612_ = _args[15];
lean_object* v_____x_613_ = _args[16];
_start:
{
lean_object* v_res_614_; 
v_res_614_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17(v_u_597_, v_toApplicative_598_, v_revertArgs_599_, v_00_u03c3s_600_, v_hyps_601_, v_target_602_, v_inst_603_, v_toBind_604_, v_a_605_, v_n_606_, v_f_607_, v_k_608_, v_revertArgsTypes_609_, v___x_610_, v___f_611_, v___x_612_, v_____x_613_);
return v_res_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18(lean_object* v_inst_615_, lean_object* v_inst_616_, lean_object* v___f_617_, lean_object* v_toBind_618_, lean_object* v___f_619_, lean_object* v_declInfos_620_){
_start:
{
uint8_t v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_621_ = 0;
v___x_622_ = l_Lean_Meta_withLocalDeclsDND___redArg(v_inst_615_, v_inst_616_, v_declInfos_620_, v___f_617_, v___x_621_);
v___x_623_ = lean_apply_4(v_toBind_618_, lean_box(0), lean_box(0), v___x_622_, v___f_619_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19(lean_object* v_u_624_, lean_object* v_toApplicative_625_, lean_object* v_revertArgs_626_, lean_object* v_00_u03c3s_627_, lean_object* v_hyps_628_, lean_object* v_target_629_, lean_object* v_inst_630_, lean_object* v_toBind_631_, lean_object* v_a_632_, lean_object* v_n_633_, lean_object* v_f_634_, lean_object* v_k_635_, lean_object* v___x_636_, lean_object* v___f_637_, lean_object* v___x_638_, lean_object* v_inst_639_, lean_object* v_inst_640_, lean_object* v___f_641_, lean_object* v___f_642_, lean_object* v_revertArgsTypes_643_){
_start:
{
lean_object* v___f_644_; lean_object* v___f_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; 
lean_inc(v___x_636_);
lean_inc_ref(v_revertArgsTypes_643_);
lean_inc_n(v_toBind_631_, 2);
v___f_644_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___boxed), 17, 16);
lean_closure_set(v___f_644_, 0, v_u_624_);
lean_closure_set(v___f_644_, 1, v_toApplicative_625_);
lean_closure_set(v___f_644_, 2, v_revertArgs_626_);
lean_closure_set(v___f_644_, 3, v_00_u03c3s_627_);
lean_closure_set(v___f_644_, 4, v_hyps_628_);
lean_closure_set(v___f_644_, 5, v_target_629_);
lean_closure_set(v___f_644_, 6, v_inst_630_);
lean_closure_set(v___f_644_, 7, v_toBind_631_);
lean_closure_set(v___f_644_, 8, v_a_632_);
lean_closure_set(v___f_644_, 9, v_n_633_);
lean_closure_set(v___f_644_, 10, v_f_634_);
lean_closure_set(v___f_644_, 11, v_k_635_);
lean_closure_set(v___f_644_, 12, v_revertArgsTypes_643_);
lean_closure_set(v___f_644_, 13, v___x_636_);
lean_closure_set(v___f_644_, 14, v___f_637_);
lean_closure_set(v___f_644_, 15, v___x_638_);
lean_inc_ref(v_inst_640_);
v___f_645_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18), 6, 5);
lean_closure_set(v___f_645_, 0, v_inst_639_);
lean_closure_set(v___f_645_, 1, v_inst_640_);
lean_closure_set(v___f_645_, 2, v___f_641_);
lean_closure_set(v___f_645_, 3, v_toBind_631_);
lean_closure_set(v___f_645_, 4, v___f_644_);
v___x_646_ = lean_array_get_size(v_revertArgsTypes_643_);
v___x_647_ = lean_mk_empty_array_with_capacity(v___x_646_);
v___x_648_ = l_Array_mapFinIdxM_map___redArg(v_inst_640_, v_revertArgsTypes_643_, v___f_642_, v___x_646_, v___x_636_, v___x_647_);
v___x_649_ = lean_apply_4(v_toBind_631_, lean_box(0), lean_box(0), v___x_648_, v___f_645_);
return v___x_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19___boxed(lean_object** _args){
lean_object* v_u_650_ = _args[0];
lean_object* v_toApplicative_651_ = _args[1];
lean_object* v_revertArgs_652_ = _args[2];
lean_object* v_00_u03c3s_653_ = _args[3];
lean_object* v_hyps_654_ = _args[4];
lean_object* v_target_655_ = _args[5];
lean_object* v_inst_656_ = _args[6];
lean_object* v_toBind_657_ = _args[7];
lean_object* v_a_658_ = _args[8];
lean_object* v_n_659_ = _args[9];
lean_object* v_f_660_ = _args[10];
lean_object* v_k_661_ = _args[11];
lean_object* v___x_662_ = _args[12];
lean_object* v___f_663_ = _args[13];
lean_object* v___x_664_ = _args[14];
lean_object* v_inst_665_ = _args[15];
lean_object* v_inst_666_ = _args[16];
lean_object* v___f_667_ = _args[17];
lean_object* v___f_668_ = _args[18];
lean_object* v_revertArgsTypes_669_ = _args[19];
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19(v_u_650_, v_toApplicative_651_, v_revertArgs_652_, v_00_u03c3s_653_, v_hyps_654_, v_target_655_, v_inst_656_, v_toBind_657_, v_a_658_, v_n_659_, v_f_660_, v_k_661_, v___x_662_, v___f_663_, v___x_664_, v_inst_665_, v_inst_666_, v___f_667_, v___f_668_, v_revertArgsTypes_669_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(lean_object* v_inst_672_, lean_object* v_inst_673_, lean_object* v_u_674_, lean_object* v_00_u03c3s_675_, lean_object* v_hypName_676_, lean_object* v_hyps_677_, uint8_t v___x_678_, lean_object* v___f_679_, lean_object* v_revertArgs_680_, lean_object* v___f_681_, lean_object* v_target_682_, lean_object* v_a_683_, lean_object* v_n_684_, lean_object* v_f_685_, lean_object* v_k_686_, lean_object* v___x_687_, lean_object* v___f_688_, lean_object* v_inst_689_, lean_object* v_____r_690_){
_start:
{
lean_object* v_toApplicative_691_; lean_object* v_toBind_692_; lean_object* v___x_693_; lean_object* v_toApplicative_694_; lean_object* v_toFunctor_695_; lean_object* v_toSeq_696_; lean_object* v_toSeqLeft_697_; lean_object* v_toSeqRight_698_; lean_object* v___f_699_; lean_object* v___f_700_; lean_object* v___f_701_; lean_object* v___f_702_; lean_object* v___x_703_; lean_object* v___f_704_; lean_object* v___f_705_; lean_object* v___f_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v_toApplicative_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_747_; 
v_toApplicative_691_ = lean_ctor_get(v_inst_672_, 0);
lean_inc_ref(v_toApplicative_691_);
v_toBind_692_ = lean_ctor_get(v_inst_672_, 1);
lean_inc(v_toBind_692_);
v___x_693_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1);
v_toApplicative_694_ = lean_ctor_get(v___x_693_, 0);
v_toFunctor_695_ = lean_ctor_get(v_toApplicative_694_, 0);
v_toSeq_696_ = lean_ctor_get(v_toApplicative_694_, 2);
v_toSeqLeft_697_ = lean_ctor_get(v_toApplicative_694_, 3);
v_toSeqRight_698_ = lean_ctor_get(v_toApplicative_694_, 4);
v___f_699_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2));
v___f_700_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_695_, 2);
v___f_701_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_701_, 0, v_toFunctor_695_);
v___f_702_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_702_, 0, v_toFunctor_695_);
v___x_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_703_, 0, v___f_701_);
lean_ctor_set(v___x_703_, 1, v___f_702_);
lean_inc(v_toSeqRight_698_);
v___f_704_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_704_, 0, v_toSeqRight_698_);
lean_inc(v_toSeqLeft_697_);
v___f_705_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_705_, 0, v_toSeqLeft_697_);
lean_inc(v_toSeq_696_);
v___f_706_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_706_, 0, v_toSeq_696_);
v___x_707_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_707_, 0, v___x_703_);
lean_ctor_set(v___x_707_, 1, v___f_699_);
lean_ctor_set(v___x_707_, 2, v___f_706_);
lean_ctor_set(v___x_707_, 3, v___f_705_);
lean_ctor_set(v___x_707_, 4, v___f_704_);
v___x_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
lean_ctor_set(v___x_708_, 1, v___f_700_);
v___x_709_ = l_StateRefT_x27_instMonad___redArg(v___x_708_);
v_toApplicative_710_ = lean_ctor_get(v___x_709_, 0);
v_isSharedCheck_747_ = !lean_is_exclusive(v___x_709_);
if (v_isSharedCheck_747_ == 0)
{
lean_object* v_unused_748_; 
v_unused_748_ = lean_ctor_get(v___x_709_, 1);
lean_dec(v_unused_748_);
v___x_712_ = v___x_709_;
v_isShared_713_ = v_isSharedCheck_747_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_toApplicative_710_);
lean_dec(v___x_709_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_747_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v_toFunctor_714_; lean_object* v_toSeq_715_; lean_object* v_toSeqLeft_716_; lean_object* v_toSeqRight_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_745_; 
v_toFunctor_714_ = lean_ctor_get(v_toApplicative_710_, 0);
v_toSeq_715_ = lean_ctor_get(v_toApplicative_710_, 2);
v_toSeqLeft_716_ = lean_ctor_get(v_toApplicative_710_, 3);
v_toSeqRight_717_ = lean_ctor_get(v_toApplicative_710_, 4);
v_isSharedCheck_745_ = !lean_is_exclusive(v_toApplicative_710_);
if (v_isSharedCheck_745_ == 0)
{
lean_object* v_unused_746_; 
v_unused_746_ = lean_ctor_get(v_toApplicative_710_, 1);
lean_dec(v_unused_746_);
v___x_719_ = v_toApplicative_710_;
v_isShared_720_ = v_isSharedCheck_745_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_toSeqRight_717_);
lean_inc(v_toSeqLeft_716_);
lean_inc(v_toSeq_715_);
lean_inc(v_toFunctor_714_);
lean_dec(v_toApplicative_710_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_745_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___f_721_; lean_object* v___x_722_; lean_object* v___f_723_; lean_object* v___f_724_; lean_object* v___f_725_; lean_object* v___f_726_; lean_object* v___f_727_; lean_object* v___x_728_; lean_object* v___f_729_; lean_object* v___f_730_; lean_object* v___f_731_; lean_object* v___x_733_; 
lean_inc_n(v_toBind_692_, 2);
lean_inc_n(v_inst_673_, 2);
lean_inc_ref_n(v_toApplicative_691_, 2);
v___f_721_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6), 6, 3);
lean_closure_set(v___f_721_, 0, v_toApplicative_691_);
lean_closure_set(v___f_721_, 1, v_inst_673_);
lean_closure_set(v___f_721_, 2, v_toBind_692_);
v___x_722_ = lean_box(v___x_678_);
lean_inc_ref(v_inst_672_);
lean_inc_ref(v_revertArgs_680_);
lean_inc_ref(v_hyps_677_);
lean_inc_ref(v_00_u03c3s_675_);
lean_inc(v_u_674_);
v___f_723_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed), 13, 12);
lean_closure_set(v___f_723_, 0, v_u_674_);
lean_closure_set(v___f_723_, 1, v_00_u03c3s_675_);
lean_closure_set(v___f_723_, 2, v_hypName_676_);
lean_closure_set(v___f_723_, 3, v_toApplicative_691_);
lean_closure_set(v___f_723_, 4, v_hyps_677_);
lean_closure_set(v___f_723_, 5, v___x_722_);
lean_closure_set(v___f_723_, 6, v_inst_673_);
lean_closure_set(v___f_723_, 7, v_toBind_692_);
lean_closure_set(v___f_723_, 8, v___f_679_);
lean_closure_set(v___f_723_, 9, v_revertArgs_680_);
lean_closure_set(v___f_723_, 10, v_inst_672_);
lean_closure_set(v___f_723_, 11, v___f_681_);
v___f_724_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4));
v___f_725_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5));
lean_inc_ref(v_toFunctor_714_);
v___f_726_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_726_, 0, v_toFunctor_714_);
v___f_727_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_727_, 0, v_toFunctor_714_);
v___x_728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_728_, 0, v___f_726_);
lean_ctor_set(v___x_728_, 1, v___f_727_);
v___f_729_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_729_, 0, v_toSeqRight_717_);
v___f_730_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_730_, 0, v_toSeqLeft_716_);
v___f_731_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_731_, 0, v_toSeq_715_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 4, v___f_729_);
lean_ctor_set(v___x_719_, 3, v___f_730_);
lean_ctor_set(v___x_719_, 2, v___f_731_);
lean_ctor_set(v___x_719_, 1, v___f_724_);
lean_ctor_set(v___x_719_, 0, v___x_728_);
v___x_733_ = v___x_719_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_728_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v___f_724_);
lean_ctor_set(v_reuseFailAlloc_744_, 2, v___f_731_);
lean_ctor_set(v_reuseFailAlloc_744_, 3, v___f_730_);
lean_ctor_set(v_reuseFailAlloc_744_, 4, v___f_729_);
v___x_733_ = v_reuseFailAlloc_744_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
lean_object* v___x_735_; 
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 1, v___f_725_);
lean_ctor_set(v___x_712_, 0, v___x_733_);
v___x_735_ = v___x_712_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_743_; 
v_reuseFailAlloc_743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_743_, 0, v___x_733_);
lean_ctor_set(v_reuseFailAlloc_743_, 1, v___f_725_);
v___x_735_ = v_reuseFailAlloc_743_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
lean_object* v___f_736_; lean_object* v___x_737_; size_t v_sz_738_; size_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
lean_inc_ref(v___x_735_);
lean_inc(v_toBind_692_);
lean_inc(v_inst_673_);
lean_inc_ref(v_revertArgs_680_);
v___f_736_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19___boxed), 20, 19);
lean_closure_set(v___f_736_, 0, v_u_674_);
lean_closure_set(v___f_736_, 1, v_toApplicative_691_);
lean_closure_set(v___f_736_, 2, v_revertArgs_680_);
lean_closure_set(v___f_736_, 3, v_00_u03c3s_675_);
lean_closure_set(v___f_736_, 4, v_hyps_677_);
lean_closure_set(v___f_736_, 5, v_target_682_);
lean_closure_set(v___f_736_, 6, v_inst_673_);
lean_closure_set(v___f_736_, 7, v_toBind_692_);
lean_closure_set(v___f_736_, 8, v_a_683_);
lean_closure_set(v___f_736_, 9, v_n_684_);
lean_closure_set(v___f_736_, 10, v_f_685_);
lean_closure_set(v___f_736_, 11, v_k_686_);
lean_closure_set(v___f_736_, 12, v___x_687_);
lean_closure_set(v___f_736_, 13, v___f_688_);
lean_closure_set(v___f_736_, 14, v___x_735_);
lean_closure_set(v___f_736_, 15, v_inst_689_);
lean_closure_set(v___f_736_, 16, v_inst_672_);
lean_closure_set(v___f_736_, 17, v___f_723_);
lean_closure_set(v___f_736_, 18, v___f_721_);
v___x_737_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0));
v_sz_738_ = lean_array_size(v_revertArgs_680_);
v___x_739_ = ((size_t)0ULL);
v___x_740_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_735_, v___x_737_, v_sz_738_, v___x_739_, v_revertArgs_680_);
v___x_741_ = lean_apply_2(v_inst_673_, lean_box(0), v___x_740_);
v___x_742_ = lean_apply_4(v_toBind_692_, lean_box(0), lean_box(0), v___x_741_, v___f_736_);
return v___x_742_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___boxed(lean_object** _args){
lean_object* v_inst_749_ = _args[0];
lean_object* v_inst_750_ = _args[1];
lean_object* v_u_751_ = _args[2];
lean_object* v_00_u03c3s_752_ = _args[3];
lean_object* v_hypName_753_ = _args[4];
lean_object* v_hyps_754_ = _args[5];
lean_object* v___x_755_ = _args[6];
lean_object* v___f_756_ = _args[7];
lean_object* v_revertArgs_757_ = _args[8];
lean_object* v___f_758_ = _args[9];
lean_object* v_target_759_ = _args[10];
lean_object* v_a_760_ = _args[11];
lean_object* v_n_761_ = _args[12];
lean_object* v_f_762_ = _args[13];
lean_object* v_k_763_ = _args[14];
lean_object* v___x_764_ = _args[15];
lean_object* v___f_765_ = _args[16];
lean_object* v_inst_766_ = _args[17];
lean_object* v_____r_767_ = _args[18];
_start:
{
uint8_t v___x_1542__boxed_768_; lean_object* v_res_769_; 
v___x_1542__boxed_768_ = lean_unbox(v___x_755_);
v_res_769_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(v_inst_749_, v_inst_750_, v_u_751_, v_00_u03c3s_752_, v_hypName_753_, v_hyps_754_, v___x_1542__boxed_768_, v___f_756_, v_revertArgs_757_, v___f_758_, v_target_759_, v_a_760_, v_n_761_, v_f_762_, v_k_763_, v___x_764_, v___f_765_, v_inst_766_, v_____r_767_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__21(lean_object* v___f_770_, lean_object* v_____r_771_){
_start:
{
lean_object* v___x_772_; 
v___x_772_ = lean_apply_1(v___f_770_, v_____r_771_);
return v___x_772_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3(void){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; 
v___x_777_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2));
v___x_778_ = l_Lean_stringToMessageData(v___x_777_);
return v___x_778_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5(void){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4));
v___x_781_ = l_Lean_stringToMessageData(v___x_780_);
return v___x_781_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7(void){
_start:
{
lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_783_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6));
v___x_784_ = l_Lean_stringToMessageData(v___x_783_);
return v___x_784_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg(lean_object* v_inst_785_, lean_object* v_inst_786_, lean_object* v_inst_787_, lean_object* v_goal_788_, lean_object* v_n_789_, lean_object* v_hypName_790_, lean_object* v_k_791_){
_start:
{
lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_792_ = lean_unsigned_to_nat(0u);
v___x_793_ = lean_nat_dec_eq(v_n_789_, v___x_792_);
if (v___x_793_ == 0)
{
lean_object* v_u_794_; lean_object* v_00_u03c3s_795_; lean_object* v_hyps_796_; lean_object* v_target_797_; lean_object* v___f_798_; lean_object* v___f_799_; lean_object* v___f_800_; lean_object* v___f_801_; lean_object* v_T_802_; lean_object* v_f_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v_a_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v_revertArgs_810_; lean_object* v___x_811_; lean_object* v___f_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v_u_794_ = lean_ctor_get(v_goal_788_, 0);
lean_inc_n(v_u_794_, 3);
v_00_u03c3s_795_ = lean_ctor_get(v_goal_788_, 1);
lean_inc_ref_n(v_00_u03c3s_795_, 2);
v_hyps_796_ = lean_ctor_get(v_goal_788_, 2);
lean_inc_ref_n(v_hyps_796_, 2);
v_target_797_ = lean_ctor_get(v_goal_788_, 3);
lean_inc_ref_n(v_target_797_, 2);
lean_dec_ref(v_goal_788_);
lean_inc_n(v_inst_787_, 2);
v___f_798_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__0), 2, 1);
lean_closure_set(v___f_798_, 0, v_inst_787_);
lean_inc_n(v_hypName_790_, 2);
v___f_799_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_799_, 0, v_hypName_790_);
v___f_800_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0));
v___f_801_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3), 3, 1);
lean_closure_set(v___f_801_, 0, v_u_794_);
v_T_802_ = l_Lean_Expr_consumeMData(v_target_797_);
v_f_803_ = l_Lean_Expr_getAppFn(v_T_802_);
v___x_804_ = l_Lean_Expr_getAppNumArgs(v_T_802_);
v___x_805_ = lean_mk_empty_array_with_capacity(v___x_804_);
lean_dec(v___x_804_);
lean_inc_ref(v_T_802_);
v_a_806_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_T_802_, v___x_805_);
lean_inc_n(v_n_789_, 2);
lean_inc_ref_n(v_a_806_, 2);
v___x_807_ = l_Array_toSubarray___redArg(v_a_806_, v___x_792_, v_n_789_);
v___x_808_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1));
v___x_809_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(v___f_800_, v___x_807_, v___x_808_);
v_revertArgs_810_ = l_Array_reverse___redArg(v___x_809_);
v___x_811_ = lean_box(v___x_793_);
lean_inc_ref(v_inst_786_);
lean_inc_ref(v___f_801_);
lean_inc(v_k_791_);
lean_inc_ref(v_f_803_);
lean_inc_ref(v___f_798_);
lean_inc_ref(v_revertArgs_810_);
lean_inc_ref(v___f_799_);
lean_inc_ref(v_inst_785_);
v___f_812_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___boxed), 19, 18);
lean_closure_set(v___f_812_, 0, v_inst_785_);
lean_closure_set(v___f_812_, 1, v_inst_787_);
lean_closure_set(v___f_812_, 2, v_u_794_);
lean_closure_set(v___f_812_, 3, v_00_u03c3s_795_);
lean_closure_set(v___f_812_, 4, v_hypName_790_);
lean_closure_set(v___f_812_, 5, v_hyps_796_);
lean_closure_set(v___f_812_, 6, v___x_811_);
lean_closure_set(v___f_812_, 7, v___f_799_);
lean_closure_set(v___f_812_, 8, v_revertArgs_810_);
lean_closure_set(v___f_812_, 9, v___f_798_);
lean_closure_set(v___f_812_, 10, v_target_797_);
lean_closure_set(v___f_812_, 11, v_a_806_);
lean_closure_set(v___f_812_, 12, v_n_789_);
lean_closure_set(v___f_812_, 13, v_f_803_);
lean_closure_set(v___f_812_, 14, v_k_791_);
lean_closure_set(v___f_812_, 15, v___x_792_);
lean_closure_set(v___f_812_, 16, v___f_801_);
lean_closure_set(v___f_812_, 17, v_inst_786_);
v___x_813_ = lean_array_get_size(v_revertArgs_810_);
v___x_814_ = lean_nat_dec_eq(v___x_813_, v_n_789_);
if (v___x_814_ == 0)
{
lean_object* v_toBind_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_892_; 
lean_dec_ref(v_revertArgs_810_);
lean_dec_ref(v_a_806_);
lean_dec_ref(v_f_803_);
lean_dec_ref(v___f_801_);
lean_dec_ref(v___f_799_);
lean_dec_ref(v___f_798_);
lean_dec_ref(v_target_797_);
lean_dec_ref(v_hyps_796_);
lean_dec_ref(v_00_u03c3s_795_);
lean_dec(v_u_794_);
lean_dec(v_k_791_);
lean_dec(v_hypName_790_);
lean_dec_ref(v_inst_786_);
v_toBind_815_ = lean_ctor_get(v_inst_785_, 1);
v_isSharedCheck_892_ = !lean_is_exclusive(v_inst_785_);
if (v_isSharedCheck_892_ == 0)
{
lean_object* v_unused_893_; 
v_unused_893_ = lean_ctor_get(v_inst_785_, 0);
lean_dec(v_unused_893_);
v___x_817_ = v_inst_785_;
v_isShared_818_ = v_isSharedCheck_892_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_toBind_815_);
lean_dec(v_inst_785_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_892_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___x_819_; lean_object* v_toApplicative_820_; lean_object* v_toFunctor_821_; lean_object* v_toSeq_822_; lean_object* v_toSeqLeft_823_; lean_object* v_toSeqRight_824_; lean_object* v___f_825_; lean_object* v___f_826_; lean_object* v___f_827_; lean_object* v___f_828_; lean_object* v___x_829_; lean_object* v___f_830_; lean_object* v___f_831_; lean_object* v___f_832_; lean_object* v___x_833_; lean_object* v___x_835_; 
v___x_819_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1);
v_toApplicative_820_ = lean_ctor_get(v___x_819_, 0);
v_toFunctor_821_ = lean_ctor_get(v_toApplicative_820_, 0);
v_toSeq_822_ = lean_ctor_get(v_toApplicative_820_, 2);
v_toSeqLeft_823_ = lean_ctor_get(v_toApplicative_820_, 3);
v_toSeqRight_824_ = lean_ctor_get(v_toApplicative_820_, 4);
v___f_825_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2));
v___f_826_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_821_, 2);
v___f_827_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_827_, 0, v_toFunctor_821_);
v___f_828_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_828_, 0, v_toFunctor_821_);
v___x_829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_829_, 0, v___f_827_);
lean_ctor_set(v___x_829_, 1, v___f_828_);
lean_inc(v_toSeqRight_824_);
v___f_830_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_830_, 0, v_toSeqRight_824_);
lean_inc(v_toSeqLeft_823_);
v___f_831_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_831_, 0, v_toSeqLeft_823_);
lean_inc(v_toSeq_822_);
v___f_832_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_832_, 0, v_toSeq_822_);
v___x_833_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_833_, 0, v___x_829_);
lean_ctor_set(v___x_833_, 1, v___f_825_);
lean_ctor_set(v___x_833_, 2, v___f_832_);
lean_ctor_set(v___x_833_, 3, v___f_831_);
lean_ctor_set(v___x_833_, 4, v___f_830_);
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 1, v___f_826_);
lean_ctor_set(v___x_817_, 0, v___x_833_);
v___x_835_ = v___x_817_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_891_, 1, v___f_826_);
v___x_835_ = v_reuseFailAlloc_891_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_object* v___x_836_; lean_object* v_toApplicative_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_889_; 
v___x_836_ = l_StateRefT_x27_instMonad___redArg(v___x_835_);
v_toApplicative_837_ = lean_ctor_get(v___x_836_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_836_);
if (v_isSharedCheck_889_ == 0)
{
lean_object* v_unused_890_; 
v_unused_890_ = lean_ctor_get(v___x_836_, 1);
lean_dec(v_unused_890_);
v___x_839_ = v___x_836_;
v_isShared_840_ = v_isSharedCheck_889_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_toApplicative_837_);
lean_dec(v___x_836_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_889_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v_toFunctor_841_; lean_object* v_toSeq_842_; lean_object* v_toSeqLeft_843_; lean_object* v_toSeqRight_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_887_; 
v_toFunctor_841_ = lean_ctor_get(v_toApplicative_837_, 0);
v_toSeq_842_ = lean_ctor_get(v_toApplicative_837_, 2);
v_toSeqLeft_843_ = lean_ctor_get(v_toApplicative_837_, 3);
v_toSeqRight_844_ = lean_ctor_get(v_toApplicative_837_, 4);
v_isSharedCheck_887_ = !lean_is_exclusive(v_toApplicative_837_);
if (v_isSharedCheck_887_ == 0)
{
lean_object* v_unused_888_; 
v_unused_888_ = lean_ctor_get(v_toApplicative_837_, 1);
lean_dec(v_unused_888_);
v___x_846_ = v_toApplicative_837_;
v_isShared_847_ = v_isSharedCheck_887_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_toSeqRight_844_);
lean_inc(v_toSeqLeft_843_);
lean_inc(v_toSeq_842_);
lean_inc(v_toFunctor_841_);
lean_dec(v_toApplicative_837_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_887_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___f_848_; lean_object* v___f_849_; lean_object* v___f_850_; lean_object* v___f_851_; lean_object* v___x_852_; lean_object* v___f_853_; lean_object* v___f_854_; lean_object* v___f_855_; lean_object* v___x_857_; 
v___f_848_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4));
v___f_849_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5));
lean_inc_ref(v_toFunctor_841_);
v___f_850_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_850_, 0, v_toFunctor_841_);
v___f_851_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_851_, 0, v_toFunctor_841_);
v___x_852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_852_, 0, v___f_850_);
lean_ctor_set(v___x_852_, 1, v___f_851_);
v___f_853_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_853_, 0, v_toSeqRight_844_);
v___f_854_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_854_, 0, v_toSeqLeft_843_);
v___f_855_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_855_, 0, v_toSeq_842_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 4, v___f_853_);
lean_ctor_set(v___x_846_, 3, v___f_854_);
lean_ctor_set(v___x_846_, 2, v___f_855_);
lean_ctor_set(v___x_846_, 1, v___f_848_);
lean_ctor_set(v___x_846_, 0, v___x_852_);
v___x_857_ = v___x_846_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_852_);
lean_ctor_set(v_reuseFailAlloc_886_, 1, v___f_848_);
lean_ctor_set(v_reuseFailAlloc_886_, 2, v___f_855_);
lean_ctor_set(v_reuseFailAlloc_886_, 3, v___f_854_);
lean_ctor_set(v_reuseFailAlloc_886_, 4, v___f_853_);
v___x_857_ = v_reuseFailAlloc_886_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
lean_object* v___x_859_; 
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v___f_849_);
lean_ctor_set(v___x_839_, 0, v___x_857_);
v___x_859_ = v___x_839_;
goto v_reusejp_858_;
}
else
{
lean_object* v_reuseFailAlloc_885_; 
v_reuseFailAlloc_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_885_, 0, v___x_857_);
lean_ctor_set(v_reuseFailAlloc_885_, 1, v___f_849_);
v___x_859_ = v_reuseFailAlloc_885_;
goto v_reusejp_858_;
}
v_reusejp_858_:
{
lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v_toMonadRef_862_; lean_object* v___f_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_860_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11);
v___x_861_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17);
v_toMonadRef_862_ = lean_ctor_get(v___x_861_, 0);
v___f_863_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__21), 2, 1);
lean_closure_set(v___f_863_, 0, v___f_812_);
v___x_864_ = l_Lean_Meta_instAddMessageContextMetaM;
lean_inc_ref(v___x_859_);
v___x_865_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_864_, v___x_859_);
lean_inc_ref(v_toMonadRef_862_);
v___x_866_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_866_, 0, v___x_860_);
lean_ctor_set(v___x_866_, 1, v_toMonadRef_862_);
lean_ctor_set(v___x_866_, 2, v___x_865_);
v___x_867_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3);
v___x_868_ = l_Nat_reprFast(v_n_789_);
v___x_869_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_869_, 0, v___x_868_);
v___x_870_ = l_Lean_MessageData_ofFormat(v___x_869_);
v___x_871_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_871_, 0, v___x_867_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v___x_872_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5);
v___x_873_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_871_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = l_Lean_MessageData_ofExpr(v_T_802_);
v___x_875_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_873_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7);
v___x_877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_875_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v___x_878_ = l_Nat_reprFast(v___x_813_);
v___x_879_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_879_, 0, v___x_878_);
v___x_880_ = l_Lean_MessageData_ofFormat(v___x_879_);
v___x_881_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_881_, 0, v___x_877_);
lean_ctor_set(v___x_881_, 1, v___x_880_);
v___x_882_ = l_Lean_throwError___redArg(v___x_859_, v___x_866_, v___x_881_);
v___x_883_ = lean_apply_2(v_inst_787_, lean_box(0), v___x_882_);
v___x_884_ = lean_apply_4(v_toBind_815_, lean_box(0), lean_box(0), v___x_883_, v___f_863_);
return v___x_884_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_894_; lean_object* v___x_895_; 
lean_dec_ref(v___f_812_);
lean_dec_ref(v_T_802_);
v___x_894_ = lean_box(0);
v___x_895_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(v_inst_785_, v_inst_787_, v_u_794_, v_00_u03c3s_795_, v_hypName_790_, v_hyps_796_, v___x_793_, v___f_799_, v_revertArgs_810_, v___f_798_, v_target_797_, v_a_806_, v_n_789_, v_f_803_, v_k_791_, v___x_792_, v___f_801_, v_inst_786_, v___x_894_);
return v___x_895_;
}
}
else
{
lean_object* v___x_896_; 
lean_dec(v_hypName_790_);
lean_dec(v_n_789_);
lean_dec(v_inst_787_);
lean_dec_ref(v_inst_786_);
lean_dec_ref(v_inst_785_);
v___x_896_ = lean_apply_1(v_k_791_, v_goal_788_);
return v___x_896_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN(lean_object* v_m_897_, lean_object* v_inst_898_, lean_object* v_inst_899_, lean_object* v_inst_900_, lean_object* v_goal_901_, lean_object* v_n_902_, lean_object* v_hypName_903_, lean_object* v_k_904_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg(v_inst_898_, v_inst_899_, v_inst_900_, v_goal_901_, v_n_902_, v_hypName_903_, v_k_904_);
return v___x_905_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_906_ = lean_box(0);
v___x_907_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_908_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_908_, 0, v___x_907_);
lean_ctor_set(v___x_908_, 1, v___x_906_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg(){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; 
v___x_910_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0);
v___x_911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_911_, 0, v___x_910_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___boxed(lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0(lean_object* v_00_u03b1_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___boxed(lean_object* v_00_u03b1_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0(v_00_u03b1_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0(lean_object* v_x_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_){
_start:
{
lean_object* v___x_946_; 
lean_inc(v___y_940_);
lean_inc_ref(v___y_939_);
lean_inc(v___y_938_);
lean_inc_ref(v___y_937_);
v___x_946_ = lean_apply_9(v_x_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, lean_box(0));
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0___boxed(lean_object* v_x_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0(v_x_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(lean_object* v_mvarId_958_, lean_object* v_x_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v___f_969_; lean_object* v___x_970_; 
lean_inc(v___y_963_);
lean_inc_ref(v___y_962_);
lean_inc(v___y_961_);
lean_inc_ref(v___y_960_);
v___f_969_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_969_, 0, v_x_959_);
lean_closure_set(v___f_969_, 1, v___y_960_);
lean_closure_set(v___f_969_, 2, v___y_961_);
lean_closure_set(v___f_969_, 3, v___y_962_);
lean_closure_set(v___f_969_, 4, v___y_963_);
v___x_970_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_958_, v___f_969_, v___y_964_, v___y_965_, v___y_966_, v___y_967_);
if (lean_obj_tag(v___x_970_) == 0)
{
return v___x_970_;
}
else
{
lean_object* v_a_971_; lean_object* v___x_973_; uint8_t v_isShared_974_; uint8_t v_isSharedCheck_978_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_978_ == 0)
{
v___x_973_ = v___x_970_;
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
else
{
lean_inc(v_a_971_);
lean_dec(v___x_970_);
v___x_973_ = lean_box(0);
v_isShared_974_ = v_isSharedCheck_978_;
goto v_resetjp_972_;
}
v_resetjp_972_:
{
lean_object* v___x_976_; 
if (v_isShared_974_ == 0)
{
v___x_976_ = v___x_973_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_a_971_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___boxed(lean_object* v_mvarId_979_, lean_object* v_x_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_){
_start:
{
lean_object* v_res_990_; 
v_res_990_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v_mvarId_979_, v_x_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
return v_res_990_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3(lean_object* v_00_u03b1_991_, lean_object* v_mvarId_992_, lean_object* v_x_993_, lean_object* v___y_994_, lean_object* v___y_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v_mvarId_992_, v_x_993_, v___y_994_, v___y_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___boxed(lean_object* v_00_u03b1_1004_, lean_object* v_mvarId_1005_, lean_object* v_x_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v_res_1016_; 
v_res_1016_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3(v_00_u03b1_1004_, v_mvarId_1005_, v_x_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_);
lean_dec(v___y_1014_);
lean_dec_ref(v___y_1013_);
lean_dec(v___y_1012_);
lean_dec_ref(v___y_1011_);
lean_dec(v___y_1010_);
lean_dec_ref(v___y_1009_);
lean_dec(v___y_1008_);
lean_dec_ref(v___y_1007_);
return v_res_1016_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0(lean_object* v_val_1017_, lean_object* v_newGoal_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1028_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_newGoal_1018_);
v___x_1029_ = lean_box(0);
v___x_1030_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1028_, v___x_1029_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1042_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1033_ = v___x_1030_;
v_isShared_1034_ = v_isSharedCheck_1042_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1030_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1042_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1040_; 
v___x_1035_ = lean_st_ref_take(v_val_1017_);
v___x_1036_ = l_Lean_Expr_mvarId_x21(v_a_1031_);
v___x_1037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1036_);
lean_ctor_set(v___x_1037_, 1, v___x_1035_);
v___x_1038_ = lean_st_ref_set(v_val_1017_, v___x_1037_);
if (v_isShared_1034_ == 0)
{
v___x_1040_ = v___x_1033_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1031_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
else
{
return v___x_1030_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed(lean_object* v_val_1043_, lean_object* v_newGoal_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_){
_start:
{
lean_object* v_res_1054_; 
v_res_1054_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0(v_val_1043_, v_newGoal_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_, v___y_1051_, v___y_1052_);
lean_dec(v___y_1052_);
lean_dec_ref(v___y_1051_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v_val_1043_);
return v_res_1054_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22___redArg(lean_object* v_x_1055_, lean_object* v_x_1056_, lean_object* v_x_1057_, lean_object* v_x_1058_){
_start:
{
lean_object* v_ks_1059_; lean_object* v_vs_1060_; lean_object* v___x_1062_; uint8_t v_isShared_1063_; uint8_t v_isSharedCheck_1084_; 
v_ks_1059_ = lean_ctor_get(v_x_1055_, 0);
v_vs_1060_ = lean_ctor_get(v_x_1055_, 1);
v_isSharedCheck_1084_ = !lean_is_exclusive(v_x_1055_);
if (v_isSharedCheck_1084_ == 0)
{
v___x_1062_ = v_x_1055_;
v_isShared_1063_ = v_isSharedCheck_1084_;
goto v_resetjp_1061_;
}
else
{
lean_inc(v_vs_1060_);
lean_inc(v_ks_1059_);
lean_dec(v_x_1055_);
v___x_1062_ = lean_box(0);
v_isShared_1063_ = v_isSharedCheck_1084_;
goto v_resetjp_1061_;
}
v_resetjp_1061_:
{
lean_object* v___x_1064_; uint8_t v___x_1065_; 
v___x_1064_ = lean_array_get_size(v_ks_1059_);
v___x_1065_ = lean_nat_dec_lt(v_x_1056_, v___x_1064_);
if (v___x_1065_ == 0)
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1069_; 
lean_dec(v_x_1056_);
v___x_1066_ = lean_array_push(v_ks_1059_, v_x_1057_);
v___x_1067_ = lean_array_push(v_vs_1060_, v_x_1058_);
if (v_isShared_1063_ == 0)
{
lean_ctor_set(v___x_1062_, 1, v___x_1067_);
lean_ctor_set(v___x_1062_, 0, v___x_1066_);
v___x_1069_ = v___x_1062_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1066_);
lean_ctor_set(v_reuseFailAlloc_1070_, 1, v___x_1067_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
else
{
lean_object* v_k_x27_1071_; uint8_t v___x_1072_; 
v_k_x27_1071_ = lean_array_fget_borrowed(v_ks_1059_, v_x_1056_);
v___x_1072_ = l_Lean_instBEqMVarId_beq(v_x_1057_, v_k_x27_1071_);
if (v___x_1072_ == 0)
{
lean_object* v___x_1074_; 
if (v_isShared_1063_ == 0)
{
v___x_1074_ = v___x_1062_;
goto v_reusejp_1073_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_ks_1059_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v_vs_1060_);
v___x_1074_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1073_;
}
v_reusejp_1073_:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1075_ = lean_unsigned_to_nat(1u);
v___x_1076_ = lean_nat_add(v_x_1056_, v___x_1075_);
lean_dec(v_x_1056_);
v_x_1055_ = v___x_1074_;
v_x_1056_ = v___x_1076_;
goto _start;
}
}
else
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1082_; 
v___x_1079_ = lean_array_fset(v_ks_1059_, v_x_1056_, v_x_1057_);
v___x_1080_ = lean_array_fset(v_vs_1060_, v_x_1056_, v_x_1058_);
lean_dec(v_x_1056_);
if (v_isShared_1063_ == 0)
{
lean_ctor_set(v___x_1062_, 1, v___x_1080_);
lean_ctor_set(v___x_1062_, 0, v___x_1079_);
v___x_1082_ = v___x_1062_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1083_; 
v_reuseFailAlloc_1083_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1083_, 0, v___x_1079_);
lean_ctor_set(v_reuseFailAlloc_1083_, 1, v___x_1080_);
v___x_1082_ = v_reuseFailAlloc_1083_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
return v___x_1082_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20___redArg(lean_object* v_n_1085_, lean_object* v_k_1086_, lean_object* v_v_1087_){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1088_ = lean_unsigned_to_nat(0u);
v___x_1089_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22___redArg(v_n_1085_, v___x_1088_, v_k_1086_, v_v_1087_);
return v___x_1089_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0(void){
_start:
{
size_t v___x_1090_; size_t v___x_1091_; size_t v___x_1092_; 
v___x_1090_ = ((size_t)5ULL);
v___x_1091_ = ((size_t)1ULL);
v___x_1092_ = lean_usize_shift_left(v___x_1091_, v___x_1090_);
return v___x_1092_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1(void){
_start:
{
size_t v___x_1093_; size_t v___x_1094_; size_t v___x_1095_; 
v___x_1093_ = ((size_t)1ULL);
v___x_1094_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__0);
v___x_1095_ = lean_usize_sub(v___x_1094_, v___x_1093_);
return v___x_1095_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__2(void){
_start:
{
lean_object* v___x_1096_; 
v___x_1096_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(lean_object* v_x_1097_, size_t v_x_1098_, size_t v_x_1099_, lean_object* v_x_1100_, lean_object* v_x_1101_){
_start:
{
if (lean_obj_tag(v_x_1097_) == 0)
{
lean_object* v_es_1102_; size_t v___x_1103_; size_t v___x_1104_; size_t v___x_1105_; size_t v___x_1106_; lean_object* v_j_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; 
v_es_1102_ = lean_ctor_get(v_x_1097_, 0);
v___x_1103_ = ((size_t)5ULL);
v___x_1104_ = ((size_t)1ULL);
v___x_1105_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__1);
v___x_1106_ = lean_usize_land(v_x_1098_, v___x_1105_);
v_j_1107_ = lean_usize_to_nat(v___x_1106_);
v___x_1108_ = lean_array_get_size(v_es_1102_);
v___x_1109_ = lean_nat_dec_lt(v_j_1107_, v___x_1108_);
if (v___x_1109_ == 0)
{
lean_dec(v_j_1107_);
lean_dec(v_x_1101_);
lean_dec(v_x_1100_);
return v_x_1097_;
}
else
{
lean_object* v___x_1111_; uint8_t v_isShared_1112_; uint8_t v_isSharedCheck_1146_; 
lean_inc_ref(v_es_1102_);
v_isSharedCheck_1146_ = !lean_is_exclusive(v_x_1097_);
if (v_isSharedCheck_1146_ == 0)
{
lean_object* v_unused_1147_; 
v_unused_1147_ = lean_ctor_get(v_x_1097_, 0);
lean_dec(v_unused_1147_);
v___x_1111_ = v_x_1097_;
v_isShared_1112_ = v_isSharedCheck_1146_;
goto v_resetjp_1110_;
}
else
{
lean_dec(v_x_1097_);
v___x_1111_ = lean_box(0);
v_isShared_1112_ = v_isSharedCheck_1146_;
goto v_resetjp_1110_;
}
v_resetjp_1110_:
{
lean_object* v_v_1113_; lean_object* v___x_1114_; lean_object* v_xs_x27_1115_; lean_object* v___y_1117_; 
v_v_1113_ = lean_array_fget(v_es_1102_, v_j_1107_);
v___x_1114_ = lean_box(0);
v_xs_x27_1115_ = lean_array_fset(v_es_1102_, v_j_1107_, v___x_1114_);
switch(lean_obj_tag(v_v_1113_))
{
case 0:
{
lean_object* v_key_1122_; lean_object* v_val_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1133_; 
v_key_1122_ = lean_ctor_get(v_v_1113_, 0);
v_val_1123_ = lean_ctor_get(v_v_1113_, 1);
v_isSharedCheck_1133_ = !lean_is_exclusive(v_v_1113_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1125_ = v_v_1113_;
v_isShared_1126_ = v_isSharedCheck_1133_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_val_1123_);
lean_inc(v_key_1122_);
lean_dec(v_v_1113_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1133_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
uint8_t v___x_1127_; 
v___x_1127_ = l_Lean_instBEqMVarId_beq(v_x_1100_, v_key_1122_);
if (v___x_1127_ == 0)
{
lean_object* v___x_1128_; lean_object* v___x_1129_; 
lean_del_object(v___x_1125_);
v___x_1128_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1122_, v_val_1123_, v_x_1100_, v_x_1101_);
v___x_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
v___y_1117_ = v___x_1129_;
goto v___jp_1116_;
}
else
{
lean_object* v___x_1131_; 
lean_dec(v_val_1123_);
lean_dec(v_key_1122_);
if (v_isShared_1126_ == 0)
{
lean_ctor_set(v___x_1125_, 1, v_x_1101_);
lean_ctor_set(v___x_1125_, 0, v_x_1100_);
v___x_1131_ = v___x_1125_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_x_1100_);
lean_ctor_set(v_reuseFailAlloc_1132_, 1, v_x_1101_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
v___y_1117_ = v___x_1131_;
goto v___jp_1116_;
}
}
}
}
case 1:
{
lean_object* v_node_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1144_; 
v_node_1134_ = lean_ctor_get(v_v_1113_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_v_1113_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1136_ = v_v_1113_;
v_isShared_1137_ = v_isSharedCheck_1144_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_node_1134_);
lean_dec(v_v_1113_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1144_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
size_t v___x_1138_; size_t v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1142_; 
v___x_1138_ = lean_usize_shift_right(v_x_1098_, v___x_1103_);
v___x_1139_ = lean_usize_add(v_x_1099_, v___x_1104_);
v___x_1140_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(v_node_1134_, v___x_1138_, v___x_1139_, v_x_1100_, v_x_1101_);
if (v_isShared_1137_ == 0)
{
lean_ctor_set(v___x_1136_, 0, v___x_1140_);
v___x_1142_ = v___x_1136_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1140_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
v___y_1117_ = v___x_1142_;
goto v___jp_1116_;
}
}
}
default: 
{
lean_object* v___x_1145_; 
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v_x_1100_);
lean_ctor_set(v___x_1145_, 1, v_x_1101_);
v___y_1117_ = v___x_1145_;
goto v___jp_1116_;
}
}
v___jp_1116_:
{
lean_object* v___x_1118_; lean_object* v___x_1120_; 
v___x_1118_ = lean_array_fset(v_xs_x27_1115_, v_j_1107_, v___y_1117_);
lean_dec(v_j_1107_);
if (v_isShared_1112_ == 0)
{
lean_ctor_set(v___x_1111_, 0, v___x_1118_);
v___x_1120_ = v___x_1111_;
goto v_reusejp_1119_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v___x_1118_);
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
else
{
lean_object* v_ks_1148_; lean_object* v_vs_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1169_; 
v_ks_1148_ = lean_ctor_get(v_x_1097_, 0);
v_vs_1149_ = lean_ctor_get(v_x_1097_, 1);
v_isSharedCheck_1169_ = !lean_is_exclusive(v_x_1097_);
if (v_isSharedCheck_1169_ == 0)
{
v___x_1151_ = v_x_1097_;
v_isShared_1152_ = v_isSharedCheck_1169_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_vs_1149_);
lean_inc(v_ks_1148_);
lean_dec(v_x_1097_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1169_;
goto v_resetjp_1150_;
}
v_resetjp_1150_:
{
lean_object* v___x_1154_; 
if (v_isShared_1152_ == 0)
{
v___x_1154_ = v___x_1151_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1168_; 
v_reuseFailAlloc_1168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1168_, 0, v_ks_1148_);
lean_ctor_set(v_reuseFailAlloc_1168_, 1, v_vs_1149_);
v___x_1154_ = v_reuseFailAlloc_1168_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
lean_object* v_newNode_1155_; uint8_t v___y_1157_; size_t v___x_1163_; uint8_t v___x_1164_; 
v_newNode_1155_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20___redArg(v___x_1154_, v_x_1100_, v_x_1101_);
v___x_1163_ = ((size_t)7ULL);
v___x_1164_ = lean_usize_dec_le(v___x_1163_, v_x_1099_);
if (v___x_1164_ == 0)
{
lean_object* v___x_1165_; lean_object* v___x_1166_; uint8_t v___x_1167_; 
v___x_1165_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1155_);
v___x_1166_ = lean_unsigned_to_nat(4u);
v___x_1167_ = lean_nat_dec_lt(v___x_1165_, v___x_1166_);
lean_dec(v___x_1165_);
v___y_1157_ = v___x_1167_;
goto v___jp_1156_;
}
else
{
v___y_1157_ = v___x_1164_;
goto v___jp_1156_;
}
v___jp_1156_:
{
if (v___y_1157_ == 0)
{
lean_object* v_ks_1158_; lean_object* v_vs_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; 
v_ks_1158_ = lean_ctor_get(v_newNode_1155_, 0);
lean_inc_ref(v_ks_1158_);
v_vs_1159_ = lean_ctor_get(v_newNode_1155_, 1);
lean_inc_ref(v_vs_1159_);
lean_dec_ref(v_newNode_1155_);
v___x_1160_ = lean_unsigned_to_nat(0u);
v___x_1161_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___closed__2);
v___x_1162_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg(v_x_1099_, v_ks_1158_, v_vs_1159_, v___x_1160_, v___x_1161_);
lean_dec_ref(v_vs_1159_);
lean_dec_ref(v_ks_1158_);
return v___x_1162_;
}
else
{
return v_newNode_1155_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg(size_t v_depth_1170_, lean_object* v_keys_1171_, lean_object* v_vals_1172_, lean_object* v_i_1173_, lean_object* v_entries_1174_){
_start:
{
lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1175_ = lean_array_get_size(v_keys_1171_);
v___x_1176_ = lean_nat_dec_lt(v_i_1173_, v___x_1175_);
if (v___x_1176_ == 0)
{
lean_dec(v_i_1173_);
return v_entries_1174_;
}
else
{
lean_object* v_k_1177_; lean_object* v_v_1178_; uint64_t v___x_1179_; size_t v_h_1180_; size_t v___x_1181_; lean_object* v___x_1182_; size_t v___x_1183_; size_t v___x_1184_; size_t v___x_1185_; size_t v_h_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v_k_1177_ = lean_array_fget_borrowed(v_keys_1171_, v_i_1173_);
v_v_1178_ = lean_array_fget_borrowed(v_vals_1172_, v_i_1173_);
v___x_1179_ = l_Lean_instHashableMVarId_hash(v_k_1177_);
v_h_1180_ = lean_uint64_to_usize(v___x_1179_);
v___x_1181_ = ((size_t)5ULL);
v___x_1182_ = lean_unsigned_to_nat(1u);
v___x_1183_ = ((size_t)1ULL);
v___x_1184_ = lean_usize_sub(v_depth_1170_, v___x_1183_);
v___x_1185_ = lean_usize_mul(v___x_1181_, v___x_1184_);
v_h_1186_ = lean_usize_shift_right(v_h_1180_, v___x_1185_);
v___x_1187_ = lean_nat_add(v_i_1173_, v___x_1182_);
lean_dec(v_i_1173_);
lean_inc(v_v_1178_);
lean_inc(v_k_1177_);
v___x_1188_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(v_entries_1174_, v_h_1186_, v_depth_1170_, v_k_1177_, v_v_1178_);
v_i_1173_ = v___x_1187_;
v_entries_1174_ = v___x_1188_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg___boxed(lean_object* v_depth_1190_, lean_object* v_keys_1191_, lean_object* v_vals_1192_, lean_object* v_i_1193_, lean_object* v_entries_1194_){
_start:
{
size_t v_depth_boxed_1195_; lean_object* v_res_1196_; 
v_depth_boxed_1195_ = lean_unbox_usize(v_depth_1190_);
lean_dec(v_depth_1190_);
v_res_1196_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg(v_depth_boxed_1195_, v_keys_1191_, v_vals_1192_, v_i_1193_, v_entries_1194_);
lean_dec_ref(v_vals_1192_);
lean_dec_ref(v_keys_1191_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg___boxed(lean_object* v_x_1197_, lean_object* v_x_1198_, lean_object* v_x_1199_, lean_object* v_x_1200_, lean_object* v_x_1201_){
_start:
{
size_t v_x_20356__boxed_1202_; size_t v_x_20357__boxed_1203_; lean_object* v_res_1204_; 
v_x_20356__boxed_1202_ = lean_unbox_usize(v_x_1198_);
lean_dec(v_x_1198_);
v_x_20357__boxed_1203_ = lean_unbox_usize(v_x_1199_);
lean_dec(v_x_1199_);
v_res_1204_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(v_x_1197_, v_x_20356__boxed_1202_, v_x_20357__boxed_1203_, v_x_1200_, v_x_1201_);
return v_res_1204_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(lean_object* v_x_1205_, lean_object* v_x_1206_, lean_object* v_x_1207_){
_start:
{
uint64_t v___x_1208_; size_t v___x_1209_; size_t v___x_1210_; lean_object* v___x_1211_; 
v___x_1208_ = l_Lean_instHashableMVarId_hash(v_x_1206_);
v___x_1209_ = lean_uint64_to_usize(v___x_1208_);
v___x_1210_ = ((size_t)1ULL);
v___x_1211_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(v_x_1205_, v___x_1209_, v___x_1210_, v_x_1206_, v_x_1207_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(lean_object* v_mvarId_1212_, lean_object* v_val_1213_, lean_object* v___y_1214_){
_start:
{
lean_object* v___x_1216_; lean_object* v_mctx_1217_; lean_object* v_cache_1218_; lean_object* v_zetaDeltaFVarIds_1219_; lean_object* v_postponed_1220_; lean_object* v_diag_1221_; lean_object* v___x_1223_; uint8_t v_isShared_1224_; uint8_t v_isSharedCheck_1249_; 
v___x_1216_ = lean_st_ref_take(v___y_1214_);
v_mctx_1217_ = lean_ctor_get(v___x_1216_, 0);
v_cache_1218_ = lean_ctor_get(v___x_1216_, 1);
v_zetaDeltaFVarIds_1219_ = lean_ctor_get(v___x_1216_, 2);
v_postponed_1220_ = lean_ctor_get(v___x_1216_, 3);
v_diag_1221_ = lean_ctor_get(v___x_1216_, 4);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1216_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1223_ = v___x_1216_;
v_isShared_1224_ = v_isSharedCheck_1249_;
goto v_resetjp_1222_;
}
else
{
lean_inc(v_diag_1221_);
lean_inc(v_postponed_1220_);
lean_inc(v_zetaDeltaFVarIds_1219_);
lean_inc(v_cache_1218_);
lean_inc(v_mctx_1217_);
lean_dec(v___x_1216_);
v___x_1223_ = lean_box(0);
v_isShared_1224_ = v_isSharedCheck_1249_;
goto v_resetjp_1222_;
}
v_resetjp_1222_:
{
lean_object* v_depth_1225_; lean_object* v_levelAssignDepth_1226_; lean_object* v_lmvarCounter_1227_; lean_object* v_mvarCounter_1228_; lean_object* v_lDecls_1229_; lean_object* v_decls_1230_; lean_object* v_userNames_1231_; lean_object* v_lAssignment_1232_; lean_object* v_eAssignment_1233_; lean_object* v_dAssignment_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1248_; 
v_depth_1225_ = lean_ctor_get(v_mctx_1217_, 0);
v_levelAssignDepth_1226_ = lean_ctor_get(v_mctx_1217_, 1);
v_lmvarCounter_1227_ = lean_ctor_get(v_mctx_1217_, 2);
v_mvarCounter_1228_ = lean_ctor_get(v_mctx_1217_, 3);
v_lDecls_1229_ = lean_ctor_get(v_mctx_1217_, 4);
v_decls_1230_ = lean_ctor_get(v_mctx_1217_, 5);
v_userNames_1231_ = lean_ctor_get(v_mctx_1217_, 6);
v_lAssignment_1232_ = lean_ctor_get(v_mctx_1217_, 7);
v_eAssignment_1233_ = lean_ctor_get(v_mctx_1217_, 8);
v_dAssignment_1234_ = lean_ctor_get(v_mctx_1217_, 9);
v_isSharedCheck_1248_ = !lean_is_exclusive(v_mctx_1217_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1236_ = v_mctx_1217_;
v_isShared_1237_ = v_isSharedCheck_1248_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_dAssignment_1234_);
lean_inc(v_eAssignment_1233_);
lean_inc(v_lAssignment_1232_);
lean_inc(v_userNames_1231_);
lean_inc(v_decls_1230_);
lean_inc(v_lDecls_1229_);
lean_inc(v_mvarCounter_1228_);
lean_inc(v_lmvarCounter_1227_);
lean_inc(v_levelAssignDepth_1226_);
lean_inc(v_depth_1225_);
lean_dec(v_mctx_1217_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1248_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v___x_1240_; 
v___x_1238_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(v_eAssignment_1233_, v_mvarId_1212_, v_val_1213_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 8, v___x_1238_);
v___x_1240_ = v___x_1236_;
goto v_reusejp_1239_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v_depth_1225_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v_levelAssignDepth_1226_);
lean_ctor_set(v_reuseFailAlloc_1247_, 2, v_lmvarCounter_1227_);
lean_ctor_set(v_reuseFailAlloc_1247_, 3, v_mvarCounter_1228_);
lean_ctor_set(v_reuseFailAlloc_1247_, 4, v_lDecls_1229_);
lean_ctor_set(v_reuseFailAlloc_1247_, 5, v_decls_1230_);
lean_ctor_set(v_reuseFailAlloc_1247_, 6, v_userNames_1231_);
lean_ctor_set(v_reuseFailAlloc_1247_, 7, v_lAssignment_1232_);
lean_ctor_set(v_reuseFailAlloc_1247_, 8, v___x_1238_);
lean_ctor_set(v_reuseFailAlloc_1247_, 9, v_dAssignment_1234_);
v___x_1240_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1239_;
}
v_reusejp_1239_:
{
lean_object* v___x_1242_; 
if (v_isShared_1224_ == 0)
{
lean_ctor_set(v___x_1223_, 0, v___x_1240_);
v___x_1242_ = v___x_1223_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v_cache_1218_);
lean_ctor_set(v_reuseFailAlloc_1246_, 2, v_zetaDeltaFVarIds_1219_);
lean_ctor_set(v_reuseFailAlloc_1246_, 3, v_postponed_1220_);
lean_ctor_set(v_reuseFailAlloc_1246_, 4, v_diag_1221_);
v___x_1242_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1243_ = lean_st_ref_set(v___y_1214_, v___x_1242_);
v___x_1244_ = lean_box(0);
v___x_1245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
return v___x_1245_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg___boxed(lean_object* v_mvarId_1250_, lean_object* v_val_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_mvarId_1250_, v_val_1251_, v___y_1252_);
lean_dec(v___y_1252_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(lean_object* v_as_1255_, lean_object* v_i_1256_, lean_object* v_j_1257_, lean_object* v_bs_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_){
_start:
{
lean_object* v_zero_1262_; uint8_t v_isZero_1263_; 
v_zero_1262_ = lean_unsigned_to_nat(0u);
v_isZero_1263_ = lean_nat_dec_eq(v_i_1256_, v_zero_1262_);
if (v_isZero_1263_ == 1)
{
lean_object* v___x_1264_; 
lean_dec(v_j_1257_);
lean_dec(v_i_1256_);
v___x_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1264_, 0, v_bs_1258_);
return v___x_1264_;
}
else
{
lean_object* v___x_1265_; lean_object* v___x_1266_; 
v___x_1265_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1));
v___x_1266_ = l_Lean_Core_mkFreshUserName(v___x_1265_, v___y_1259_, v___y_1260_);
if (lean_obj_tag(v___x_1266_) == 0)
{
lean_object* v_a_1267_; lean_object* v_one_1268_; lean_object* v_n_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v_a_1267_ = lean_ctor_get(v___x_1266_, 0);
lean_inc(v_a_1267_);
lean_dec_ref_known(v___x_1266_, 1);
v_one_1268_ = lean_unsigned_to_nat(1u);
v_n_1269_ = lean_nat_sub(v_i_1256_, v_one_1268_);
lean_dec(v_i_1256_);
v___x_1270_ = lean_array_fget_borrowed(v_as_1255_, v_j_1257_);
v___x_1271_ = lean_nat_add(v_j_1257_, v_one_1268_);
lean_dec(v_j_1257_);
lean_inc(v___x_1271_);
v___x_1272_ = lean_name_append_index_after(v_a_1267_, v___x_1271_);
lean_inc(v___x_1270_);
v___x_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v___x_1270_);
v___x_1274_ = lean_array_push(v_bs_1258_, v___x_1273_);
v_i_1256_ = v_n_1269_;
v_j_1257_ = v___x_1271_;
v_bs_1258_ = v___x_1274_;
goto _start;
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v_bs_1258_);
lean_dec(v_j_1257_);
lean_dec(v_i_1256_);
v_a_1276_ = lean_ctor_get(v___x_1266_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1266_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1266_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1266_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg___boxed(lean_object* v_as_1284_, lean_object* v_i_1285_, lean_object* v_j_1286_, lean_object* v_bs_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v_res_1291_; 
v_res_1291_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(v_as_1284_, v_i_1285_, v_j_1286_, v_bs_1287_, v___y_1288_, v___y_1289_);
lean_dec(v___y_1289_);
lean_dec_ref(v___y_1288_);
lean_dec_ref(v_as_1284_);
return v_res_1291_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(lean_object* v_msgData_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_){
_start:
{
lean_object* v___x_1298_; lean_object* v_env_1299_; lean_object* v___x_1300_; lean_object* v_mctx_1301_; lean_object* v_lctx_1302_; lean_object* v_options_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; 
v___x_1298_ = lean_st_ref_get(v___y_1296_);
v_env_1299_ = lean_ctor_get(v___x_1298_, 0);
lean_inc_ref(v_env_1299_);
lean_dec(v___x_1298_);
v___x_1300_ = lean_st_ref_get(v___y_1294_);
v_mctx_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc_ref(v_mctx_1301_);
lean_dec(v___x_1300_);
v_lctx_1302_ = lean_ctor_get(v___y_1293_, 2);
v_options_1303_ = lean_ctor_get(v___y_1295_, 2);
lean_inc_ref(v_options_1303_);
lean_inc_ref(v_lctx_1302_);
v___x_1304_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1304_, 0, v_env_1299_);
lean_ctor_set(v___x_1304_, 1, v_mctx_1301_);
lean_ctor_set(v___x_1304_, 2, v_lctx_1302_);
lean_ctor_set(v___x_1304_, 3, v_options_1303_);
v___x_1305_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1304_);
lean_ctor_set(v___x_1305_, 1, v_msgData_1292_);
v___x_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1305_);
return v___x_1306_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14___boxed(lean_object* v_msgData_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v_res_1313_; 
v_res_1313_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(v_msgData_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
lean_dec(v___y_1311_);
lean_dec_ref(v___y_1310_);
lean_dec(v___y_1309_);
lean_dec_ref(v___y_1308_);
return v_res_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(lean_object* v_msg_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_){
_start:
{
lean_object* v_ref_1320_; lean_object* v___x_1321_; lean_object* v_a_1322_; lean_object* v___x_1324_; uint8_t v_isShared_1325_; uint8_t v_isSharedCheck_1330_; 
v_ref_1320_ = lean_ctor_get(v___y_1317_, 5);
v___x_1321_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(v_msg_1314_, v___y_1315_, v___y_1316_, v___y_1317_, v___y_1318_);
v_a_1322_ = lean_ctor_get(v___x_1321_, 0);
v_isSharedCheck_1330_ = !lean_is_exclusive(v___x_1321_);
if (v_isSharedCheck_1330_ == 0)
{
v___x_1324_ = v___x_1321_;
v_isShared_1325_ = v_isSharedCheck_1330_;
goto v_resetjp_1323_;
}
else
{
lean_inc(v_a_1322_);
lean_dec(v___x_1321_);
v___x_1324_ = lean_box(0);
v_isShared_1325_ = v_isSharedCheck_1330_;
goto v_resetjp_1323_;
}
v_resetjp_1323_:
{
lean_object* v___x_1326_; lean_object* v___x_1328_; 
lean_inc(v_ref_1320_);
v___x_1326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1326_, 0, v_ref_1320_);
lean_ctor_set(v___x_1326_, 1, v_a_1322_);
if (v_isShared_1325_ == 0)
{
lean_ctor_set_tag(v___x_1324_, 1);
lean_ctor_set(v___x_1324_, 0, v___x_1326_);
v___x_1328_ = v___x_1324_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v___x_1326_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg___boxed(lean_object* v_msg_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v_msg_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
return v_res_1337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(lean_object* v_u_1338_, lean_object* v_as_1339_, size_t v_i_1340_, size_t v_stop_1341_, lean_object* v_b_1342_){
_start:
{
uint8_t v___x_1343_; 
v___x_1343_ = lean_usize_dec_eq(v_i_1340_, v_stop_1341_);
if (v___x_1343_ == 0)
{
size_t v___x_1344_; size_t v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1344_ = ((size_t)1ULL);
v___x_1345_ = lean_usize_sub(v_i_1340_, v___x_1344_);
v___x_1346_ = lean_array_uget_borrowed(v_as_1339_, v___x_1345_);
lean_inc(v___x_1346_);
lean_inc(v_u_1338_);
v___x_1347_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(v_u_1338_, v___x_1346_, v_b_1342_);
v_i_1340_ = v___x_1345_;
v_b_1342_ = v___x_1347_;
goto _start;
}
else
{
lean_dec(v_u_1338_);
return v_b_1342_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7___boxed(lean_object* v_u_1349_, lean_object* v_as_1350_, lean_object* v_i_1351_, lean_object* v_stop_1352_, lean_object* v_b_1353_){
_start:
{
size_t v_i_boxed_1354_; size_t v_stop_boxed_1355_; lean_object* v_res_1356_; 
v_i_boxed_1354_ = lean_unbox_usize(v_i_1351_);
lean_dec(v_i_1351_);
v_stop_boxed_1355_ = lean_unbox_usize(v_stop_1352_);
lean_dec(v_stop_1352_);
v_res_1356_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(v_u_1349_, v_as_1350_, v_i_boxed_1354_, v_stop_boxed_1355_, v_b_1353_);
lean_dec_ref(v_as_1350_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(size_t v_sz_1357_, size_t v_i_1358_, lean_object* v_bs_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
uint8_t v___x_1365_; 
v___x_1365_ = lean_usize_dec_lt(v_i_1358_, v_sz_1357_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1366_; 
v___x_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1366_, 0, v_bs_1359_);
return v___x_1366_;
}
else
{
lean_object* v_v_1367_; lean_object* v___x_1368_; 
v_v_1367_ = lean_array_uget_borrowed(v_bs_1359_, v_i_1358_);
lean_inc(v_v_1367_);
v___x_1368_ = l_Lean_Meta_mkEqRefl(v_v_1367_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_);
if (lean_obj_tag(v___x_1368_) == 0)
{
lean_object* v_a_1369_; lean_object* v___x_1370_; lean_object* v_bs_x27_1371_; size_t v___x_1372_; size_t v___x_1373_; lean_object* v___x_1374_; 
v_a_1369_ = lean_ctor_get(v___x_1368_, 0);
lean_inc(v_a_1369_);
lean_dec_ref_known(v___x_1368_, 1);
v___x_1370_ = lean_unsigned_to_nat(0u);
v_bs_x27_1371_ = lean_array_uset(v_bs_1359_, v_i_1358_, v___x_1370_);
v___x_1372_ = ((size_t)1ULL);
v___x_1373_ = lean_usize_add(v_i_1358_, v___x_1372_);
v___x_1374_ = lean_array_uset(v_bs_x27_1371_, v_i_1358_, v_a_1369_);
v_i_1358_ = v___x_1373_;
v_bs_1359_ = v___x_1374_;
goto _start;
}
else
{
lean_object* v_a_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1383_; 
lean_dec_ref(v_bs_1359_);
v_a_1376_ = lean_ctor_get(v___x_1368_, 0);
v_isSharedCheck_1383_ = !lean_is_exclusive(v___x_1368_);
if (v_isSharedCheck_1383_ == 0)
{
v___x_1378_ = v___x_1368_;
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_a_1376_);
lean_dec(v___x_1368_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1383_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1381_; 
if (v_isShared_1379_ == 0)
{
v___x_1381_ = v___x_1378_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1382_; 
v_reuseFailAlloc_1382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1382_, 0, v_a_1376_);
v___x_1381_ = v_reuseFailAlloc_1382_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
return v___x_1381_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6___boxed(lean_object* v_sz_1384_, lean_object* v_i_1385_, lean_object* v_bs_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_){
_start:
{
size_t v_sz_boxed_1392_; size_t v_i_boxed_1393_; lean_object* v_res_1394_; 
v_sz_boxed_1392_ = lean_unbox_usize(v_sz_1384_);
lean_dec(v_sz_1384_);
v_i_boxed_1393_ = lean_unbox_usize(v_i_1385_);
lean_dec(v_i_1385_);
v_res_1394_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(v_sz_boxed_1392_, v_i_boxed_1393_, v_bs_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(lean_object* v_a_1395_, lean_object* v_b_1396_){
_start:
{
lean_object* v_array_1397_; lean_object* v_start_1398_; lean_object* v_stop_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1412_; 
v_array_1397_ = lean_ctor_get(v_a_1395_, 0);
v_start_1398_ = lean_ctor_get(v_a_1395_, 1);
v_stop_1399_ = lean_ctor_get(v_a_1395_, 2);
v_isSharedCheck_1412_ = !lean_is_exclusive(v_a_1395_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1401_ = v_a_1395_;
v_isShared_1402_ = v_isSharedCheck_1412_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_stop_1399_);
lean_inc(v_start_1398_);
lean_inc(v_array_1397_);
lean_dec(v_a_1395_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1412_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
uint8_t v___x_1403_; 
v___x_1403_ = lean_nat_dec_lt(v_start_1398_, v_stop_1399_);
if (v___x_1403_ == 0)
{
lean_del_object(v___x_1401_);
lean_dec(v_stop_1399_);
lean_dec(v_start_1398_);
lean_dec_ref(v_array_1397_);
return v_b_1396_;
}
else
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1407_; 
v___x_1404_ = lean_unsigned_to_nat(1u);
v___x_1405_ = lean_nat_add(v_start_1398_, v___x_1404_);
lean_inc_ref(v_array_1397_);
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 1, v___x_1405_);
v___x_1407_ = v___x_1401_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v_array_1397_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v___x_1405_);
lean_ctor_set(v_reuseFailAlloc_1411_, 2, v_stop_1399_);
v___x_1407_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1408_ = lean_array_fget(v_array_1397_, v_start_1398_);
lean_dec(v_start_1398_);
lean_dec_ref(v_array_1397_);
v___x_1409_ = lean_array_push(v_b_1396_, v___x_1408_);
v_a_1395_ = v___x_1407_;
v_b_1396_ = v___x_1409_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0(lean_object* v___x_1413_, lean_object* v_a_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v___x_1424_; lean_object* v___x_20043__overap_1425_; lean_object* v___x_1426_; 
v___x_1424_ = l_Lean_instInhabitedExpr;
v___x_20043__overap_1425_ = l_instInhabitedOfMonad___redArg(v___x_1413_, v___x_1424_);
lean_inc(v___y_1422_);
lean_inc_ref(v___y_1421_);
lean_inc(v___y_1420_);
lean_inc_ref(v___y_1419_);
lean_inc(v___y_1418_);
lean_inc_ref(v___y_1417_);
lean_inc(v___y_1416_);
lean_inc_ref(v___y_1415_);
v___x_1426_ = lean_apply_9(v___x_20043__overap_1425_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_, lean_box(0));
return v___x_1426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0___boxed(lean_object* v___x_1427_, lean_object* v_a_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0(v___x_1427_, v_a_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec_ref(v_a_1428_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0(lean_object* v_k_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v_b_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_){
_start:
{
lean_object* v___x_1450_; 
lean_inc(v___y_1448_);
lean_inc_ref(v___y_1447_);
lean_inc(v___y_1446_);
lean_inc_ref(v___y_1445_);
lean_inc(v___y_1443_);
lean_inc_ref(v___y_1442_);
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
v___x_1450_ = lean_apply_10(v_k_1439_, v_b_1444_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, lean_box(0));
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0___boxed(lean_object* v_k_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v_b_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
lean_object* v_res_1462_; 
v_res_1462_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0(v_k_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v_b_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
return v_res_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg(lean_object* v_name_1463_, uint8_t v_bi_1464_, lean_object* v_type_1465_, lean_object* v_k_1466_, uint8_t v_kind_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_){
_start:
{
lean_object* v___f_1477_; lean_object* v___x_1478_; 
lean_inc(v___y_1471_);
lean_inc_ref(v___y_1470_);
lean_inc(v___y_1469_);
lean_inc_ref(v___y_1468_);
v___f_1477_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1477_, 0, v_k_1466_);
lean_closure_set(v___f_1477_, 1, v___y_1468_);
lean_closure_set(v___f_1477_, 2, v___y_1469_);
lean_closure_set(v___f_1477_, 3, v___y_1470_);
lean_closure_set(v___f_1477_, 4, v___y_1471_);
v___x_1478_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1463_, v_bi_1464_, v_type_1465_, v___f_1477_, v_kind_1467_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_);
if (lean_obj_tag(v___x_1478_) == 0)
{
return v___x_1478_;
}
else
{
lean_object* v_a_1479_; lean_object* v___x_1481_; uint8_t v_isShared_1482_; uint8_t v_isSharedCheck_1486_; 
v_a_1479_ = lean_ctor_get(v___x_1478_, 0);
v_isSharedCheck_1486_ = !lean_is_exclusive(v___x_1478_);
if (v_isSharedCheck_1486_ == 0)
{
v___x_1481_ = v___x_1478_;
v_isShared_1482_ = v_isSharedCheck_1486_;
goto v_resetjp_1480_;
}
else
{
lean_inc(v_a_1479_);
lean_dec(v___x_1478_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg___boxed(lean_object* v_name_1487_, lean_object* v_bi_1488_, lean_object* v_type_1489_, lean_object* v_k_1490_, lean_object* v_kind_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_){
_start:
{
uint8_t v_bi_boxed_1501_; uint8_t v_kind_boxed_1502_; lean_object* v_res_1503_; 
v_bi_boxed_1501_ = lean_unbox(v_bi_1488_);
v_kind_boxed_1502_ = lean_unbox(v_kind_1491_);
v_res_1503_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg(v_name_1487_, v_bi_boxed_1501_, v_type_1489_, v_k_1490_, v_kind_boxed_1502_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
lean_dec(v___y_1499_);
lean_dec_ref(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec(v___y_1493_);
lean_dec_ref(v___y_1492_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1___boxed(lean_object* v_acc_1508_, lean_object* v_declInfos_1509_, lean_object* v_k_1510_, lean_object* v_kind_1511_, lean_object* v_x_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
uint8_t v_kind_boxed_1522_; lean_object* v_res_1523_; 
v_kind_boxed_1522_ = lean_unbox(v_kind_1511_);
v_res_1523_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1(v_acc_1508_, v_declInfos_1509_, v_k_1510_, v_kind_boxed_1522_, v_x_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19(lean_object* v_declInfos_1524_, lean_object* v_k_1525_, uint8_t v_kind_1526_, lean_object* v_acc_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_){
_start:
{
lean_object* v___x_1537_; lean_object* v_toApplicative_1538_; lean_object* v_toFunctor_1539_; lean_object* v_toSeq_1540_; lean_object* v_toSeqLeft_1541_; lean_object* v_toSeqRight_1542_; lean_object* v___f_1543_; lean_object* v___f_1544_; lean_object* v___f_1545_; lean_object* v___f_1546_; lean_object* v___x_1547_; lean_object* v___f_1548_; lean_object* v___f_1549_; lean_object* v___f_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v_toApplicative_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1671_; 
v___x_1537_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1);
v_toApplicative_1538_ = lean_ctor_get(v___x_1537_, 0);
v_toFunctor_1539_ = lean_ctor_get(v_toApplicative_1538_, 0);
v_toSeq_1540_ = lean_ctor_get(v_toApplicative_1538_, 2);
v_toSeqLeft_1541_ = lean_ctor_get(v_toApplicative_1538_, 3);
v_toSeqRight_1542_ = lean_ctor_get(v_toApplicative_1538_, 4);
v___f_1543_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2));
v___f_1544_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_1539_, 2);
v___f_1545_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1545_, 0, v_toFunctor_1539_);
v___f_1546_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1546_, 0, v_toFunctor_1539_);
v___x_1547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___f_1545_);
lean_ctor_set(v___x_1547_, 1, v___f_1546_);
lean_inc(v_toSeqRight_1542_);
v___f_1548_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1548_, 0, v_toSeqRight_1542_);
lean_inc(v_toSeqLeft_1541_);
v___f_1549_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1549_, 0, v_toSeqLeft_1541_);
lean_inc(v_toSeq_1540_);
v___f_1550_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1550_, 0, v_toSeq_1540_);
v___x_1551_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1547_);
lean_ctor_set(v___x_1551_, 1, v___f_1543_);
lean_ctor_set(v___x_1551_, 2, v___f_1550_);
lean_ctor_set(v___x_1551_, 3, v___f_1549_);
lean_ctor_set(v___x_1551_, 4, v___f_1548_);
v___x_1552_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1552_, 0, v___x_1551_);
lean_ctor_set(v___x_1552_, 1, v___f_1544_);
v___x_1553_ = l_StateRefT_x27_instMonad___redArg(v___x_1552_);
v_toApplicative_1554_ = lean_ctor_get(v___x_1553_, 0);
v_isSharedCheck_1671_ = !lean_is_exclusive(v___x_1553_);
if (v_isSharedCheck_1671_ == 0)
{
lean_object* v_unused_1672_; 
v_unused_1672_ = lean_ctor_get(v___x_1553_, 1);
lean_dec(v_unused_1672_);
v___x_1556_ = v___x_1553_;
v_isShared_1557_ = v_isSharedCheck_1671_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_toApplicative_1554_);
lean_dec(v___x_1553_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1671_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v_toFunctor_1558_; lean_object* v_toSeq_1559_; lean_object* v_toSeqLeft_1560_; lean_object* v_toSeqRight_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1669_; 
v_toFunctor_1558_ = lean_ctor_get(v_toApplicative_1554_, 0);
v_toSeq_1559_ = lean_ctor_get(v_toApplicative_1554_, 2);
v_toSeqLeft_1560_ = lean_ctor_get(v_toApplicative_1554_, 3);
v_toSeqRight_1561_ = lean_ctor_get(v_toApplicative_1554_, 4);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_toApplicative_1554_);
if (v_isSharedCheck_1669_ == 0)
{
lean_object* v_unused_1670_; 
v_unused_1670_ = lean_ctor_get(v_toApplicative_1554_, 1);
lean_dec(v_unused_1670_);
v___x_1563_ = v_toApplicative_1554_;
v_isShared_1564_ = v_isSharedCheck_1669_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_toSeqRight_1561_);
lean_inc(v_toSeqLeft_1560_);
lean_inc(v_toSeq_1559_);
lean_inc(v_toFunctor_1558_);
lean_dec(v_toApplicative_1554_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1669_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___f_1565_; lean_object* v___f_1566_; lean_object* v___f_1567_; lean_object* v___f_1568_; lean_object* v___x_1569_; lean_object* v___f_1570_; lean_object* v___f_1571_; lean_object* v___f_1572_; lean_object* v___x_1574_; 
v___f_1565_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4));
v___f_1566_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5));
lean_inc_ref(v_toFunctor_1558_);
v___f_1567_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1567_, 0, v_toFunctor_1558_);
v___f_1568_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1568_, 0, v_toFunctor_1558_);
v___x_1569_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___f_1567_);
lean_ctor_set(v___x_1569_, 1, v___f_1568_);
v___f_1570_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1570_, 0, v_toSeqRight_1561_);
v___f_1571_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1571_, 0, v_toSeqLeft_1560_);
v___f_1572_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1572_, 0, v_toSeq_1559_);
if (v_isShared_1564_ == 0)
{
lean_ctor_set(v___x_1563_, 4, v___f_1570_);
lean_ctor_set(v___x_1563_, 3, v___f_1571_);
lean_ctor_set(v___x_1563_, 2, v___f_1572_);
lean_ctor_set(v___x_1563_, 1, v___f_1565_);
lean_ctor_set(v___x_1563_, 0, v___x_1569_);
v___x_1574_ = v___x_1563_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v___x_1569_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v___f_1565_);
lean_ctor_set(v_reuseFailAlloc_1668_, 2, v___f_1572_);
lean_ctor_set(v_reuseFailAlloc_1668_, 3, v___f_1571_);
lean_ctor_set(v_reuseFailAlloc_1668_, 4, v___f_1570_);
v___x_1574_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
lean_object* v___x_1576_; 
if (v_isShared_1557_ == 0)
{
lean_ctor_set(v___x_1556_, 1, v___f_1566_);
lean_ctor_set(v___x_1556_, 0, v___x_1574_);
v___x_1576_ = v___x_1556_;
goto v_reusejp_1575_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1574_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v___f_1566_);
v___x_1576_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1575_;
}
v_reusejp_1575_:
{
lean_object* v___x_1577_; lean_object* v_toApplicative_1578_; lean_object* v___x_1580_; uint8_t v_isShared_1581_; uint8_t v_isSharedCheck_1665_; 
v___x_1577_ = l_StateRefT_x27_instMonad___redArg(v___x_1576_);
v_toApplicative_1578_ = lean_ctor_get(v___x_1577_, 0);
v_isSharedCheck_1665_ = !lean_is_exclusive(v___x_1577_);
if (v_isSharedCheck_1665_ == 0)
{
lean_object* v_unused_1666_; 
v_unused_1666_ = lean_ctor_get(v___x_1577_, 1);
lean_dec(v_unused_1666_);
v___x_1580_ = v___x_1577_;
v_isShared_1581_ = v_isSharedCheck_1665_;
goto v_resetjp_1579_;
}
else
{
lean_inc(v_toApplicative_1578_);
lean_dec(v___x_1577_);
v___x_1580_ = lean_box(0);
v_isShared_1581_ = v_isSharedCheck_1665_;
goto v_resetjp_1579_;
}
v_resetjp_1579_:
{
lean_object* v_toFunctor_1582_; lean_object* v_toSeq_1583_; lean_object* v_toSeqLeft_1584_; lean_object* v_toSeqRight_1585_; lean_object* v___x_1587_; uint8_t v_isShared_1588_; uint8_t v_isSharedCheck_1663_; 
v_toFunctor_1582_ = lean_ctor_get(v_toApplicative_1578_, 0);
v_toSeq_1583_ = lean_ctor_get(v_toApplicative_1578_, 2);
v_toSeqLeft_1584_ = lean_ctor_get(v_toApplicative_1578_, 3);
v_toSeqRight_1585_ = lean_ctor_get(v_toApplicative_1578_, 4);
v_isSharedCheck_1663_ = !lean_is_exclusive(v_toApplicative_1578_);
if (v_isSharedCheck_1663_ == 0)
{
lean_object* v_unused_1664_; 
v_unused_1664_ = lean_ctor_get(v_toApplicative_1578_, 1);
lean_dec(v_unused_1664_);
v___x_1587_ = v_toApplicative_1578_;
v_isShared_1588_ = v_isSharedCheck_1663_;
goto v_resetjp_1586_;
}
else
{
lean_inc(v_toSeqRight_1585_);
lean_inc(v_toSeqLeft_1584_);
lean_inc(v_toSeq_1583_);
lean_inc(v_toFunctor_1582_);
lean_dec(v_toApplicative_1578_);
v___x_1587_ = lean_box(0);
v_isShared_1588_ = v_isSharedCheck_1663_;
goto v_resetjp_1586_;
}
v_resetjp_1586_:
{
lean_object* v___f_1589_; lean_object* v___f_1590_; lean_object* v___f_1591_; lean_object* v___f_1592_; lean_object* v___x_1593_; lean_object* v___f_1594_; lean_object* v___f_1595_; lean_object* v___f_1596_; lean_object* v___x_1598_; 
v___f_1589_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__0));
v___f_1590_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__1));
lean_inc_ref(v_toFunctor_1582_);
v___f_1591_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1591_, 0, v_toFunctor_1582_);
v___f_1592_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1592_, 0, v_toFunctor_1582_);
v___x_1593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1593_, 0, v___f_1591_);
lean_ctor_set(v___x_1593_, 1, v___f_1592_);
v___f_1594_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1594_, 0, v_toSeqRight_1585_);
v___f_1595_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1595_, 0, v_toSeqLeft_1584_);
v___f_1596_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1596_, 0, v_toSeq_1583_);
if (v_isShared_1588_ == 0)
{
lean_ctor_set(v___x_1587_, 4, v___f_1594_);
lean_ctor_set(v___x_1587_, 3, v___f_1595_);
lean_ctor_set(v___x_1587_, 2, v___f_1596_);
lean_ctor_set(v___x_1587_, 1, v___f_1589_);
lean_ctor_set(v___x_1587_, 0, v___x_1593_);
v___x_1598_ = v___x_1587_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v___x_1593_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v___f_1589_);
lean_ctor_set(v_reuseFailAlloc_1662_, 2, v___f_1596_);
lean_ctor_set(v_reuseFailAlloc_1662_, 3, v___f_1595_);
lean_ctor_set(v_reuseFailAlloc_1662_, 4, v___f_1594_);
v___x_1598_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
lean_object* v___x_1600_; 
if (v_isShared_1581_ == 0)
{
lean_ctor_set(v___x_1580_, 1, v___f_1590_);
lean_ctor_set(v___x_1580_, 0, v___x_1598_);
v___x_1600_ = v___x_1580_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v___x_1598_);
lean_ctor_set(v_reuseFailAlloc_1661_, 1, v___f_1590_);
v___x_1600_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
lean_object* v___x_1601_; lean_object* v_toApplicative_1602_; lean_object* v___x_1604_; uint8_t v_isShared_1605_; uint8_t v_isSharedCheck_1659_; 
v___x_1601_ = l_StateRefT_x27_instMonad___redArg(v___x_1600_);
v_toApplicative_1602_ = lean_ctor_get(v___x_1601_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_1601_);
if (v_isSharedCheck_1659_ == 0)
{
lean_object* v_unused_1660_; 
v_unused_1660_ = lean_ctor_get(v___x_1601_, 1);
lean_dec(v_unused_1660_);
v___x_1604_ = v___x_1601_;
v_isShared_1605_ = v_isSharedCheck_1659_;
goto v_resetjp_1603_;
}
else
{
lean_inc(v_toApplicative_1602_);
lean_dec(v___x_1601_);
v___x_1604_ = lean_box(0);
v_isShared_1605_ = v_isSharedCheck_1659_;
goto v_resetjp_1603_;
}
v_resetjp_1603_:
{
lean_object* v_toFunctor_1606_; lean_object* v_toSeq_1607_; lean_object* v_toSeqLeft_1608_; lean_object* v_toSeqRight_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1657_; 
v_toFunctor_1606_ = lean_ctor_get(v_toApplicative_1602_, 0);
v_toSeq_1607_ = lean_ctor_get(v_toApplicative_1602_, 2);
v_toSeqLeft_1608_ = lean_ctor_get(v_toApplicative_1602_, 3);
v_toSeqRight_1609_ = lean_ctor_get(v_toApplicative_1602_, 4);
v_isSharedCheck_1657_ = !lean_is_exclusive(v_toApplicative_1602_);
if (v_isSharedCheck_1657_ == 0)
{
lean_object* v_unused_1658_; 
v_unused_1658_ = lean_ctor_get(v_toApplicative_1602_, 1);
lean_dec(v_unused_1658_);
v___x_1611_ = v_toApplicative_1602_;
v_isShared_1612_ = v_isSharedCheck_1657_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_toSeqRight_1609_);
lean_inc(v_toSeqLeft_1608_);
lean_inc(v_toSeq_1607_);
lean_inc(v_toFunctor_1606_);
lean_dec(v_toApplicative_1602_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1657_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v___f_1613_; lean_object* v___f_1614_; lean_object* v___f_1615_; lean_object* v___f_1616_; lean_object* v___x_1617_; lean_object* v___f_1618_; lean_object* v___f_1619_; lean_object* v___f_1620_; lean_object* v___x_1622_; 
v___f_1613_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__2));
v___f_1614_ = ((lean_object*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___closed__3));
lean_inc_ref(v_toFunctor_1606_);
v___f_1615_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1615_, 0, v_toFunctor_1606_);
v___f_1616_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1616_, 0, v_toFunctor_1606_);
v___x_1617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1617_, 0, v___f_1615_);
lean_ctor_set(v___x_1617_, 1, v___f_1616_);
v___f_1618_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1618_, 0, v_toSeqRight_1609_);
v___f_1619_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1619_, 0, v_toSeqLeft_1608_);
v___f_1620_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1620_, 0, v_toSeq_1607_);
if (v_isShared_1612_ == 0)
{
lean_ctor_set(v___x_1611_, 4, v___f_1618_);
lean_ctor_set(v___x_1611_, 3, v___f_1619_);
lean_ctor_set(v___x_1611_, 2, v___f_1620_);
lean_ctor_set(v___x_1611_, 1, v___f_1613_);
lean_ctor_set(v___x_1611_, 0, v___x_1617_);
v___x_1622_ = v___x_1611_;
goto v_reusejp_1621_;
}
else
{
lean_object* v_reuseFailAlloc_1656_; 
v_reuseFailAlloc_1656_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1656_, 0, v___x_1617_);
lean_ctor_set(v_reuseFailAlloc_1656_, 1, v___f_1613_);
lean_ctor_set(v_reuseFailAlloc_1656_, 2, v___f_1620_);
lean_ctor_set(v_reuseFailAlloc_1656_, 3, v___f_1619_);
lean_ctor_set(v_reuseFailAlloc_1656_, 4, v___f_1618_);
v___x_1622_ = v_reuseFailAlloc_1656_;
goto v_reusejp_1621_;
}
v_reusejp_1621_:
{
lean_object* v___x_1624_; 
if (v_isShared_1605_ == 0)
{
lean_ctor_set(v___x_1604_, 1, v___f_1614_);
lean_ctor_set(v___x_1604_, 0, v___x_1622_);
v___x_1624_ = v___x_1604_;
goto v_reusejp_1623_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v___x_1622_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v___f_1614_);
v___x_1624_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1623_;
}
v_reusejp_1623_:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; uint8_t v___x_1627_; 
v___x_1625_ = lean_array_get_size(v_acc_1527_);
v___x_1626_ = lean_array_get_size(v_declInfos_1524_);
v___x_1627_ = lean_nat_dec_lt(v___x_1625_, v___x_1626_);
if (v___x_1627_ == 0)
{
lean_object* v___x_1628_; 
lean_dec_ref(v___x_1624_);
lean_dec_ref(v_declInfos_1524_);
lean_inc(v___y_1535_);
lean_inc_ref(v___y_1534_);
lean_inc(v___y_1533_);
lean_inc_ref(v___y_1532_);
lean_inc(v___y_1531_);
lean_inc_ref(v___y_1530_);
lean_inc(v___y_1529_);
lean_inc_ref(v___y_1528_);
v___x_1628_ = lean_apply_10(v_k_1525_, v_acc_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, lean_box(0));
return v___x_1628_;
}
else
{
lean_object* v___f_1629_; lean_object* v___x_1630_; uint8_t v___x_1631_; lean_object* v___f_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v_snd_1637_; lean_object* v_fst_1638_; lean_object* v_fst_1639_; lean_object* v_snd_1640_; lean_object* v___x_1641_; 
v___f_1629_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1629_, 0, v___x_1624_);
v___x_1630_ = lean_box(0);
v___x_1631_ = 0;
v___f_1632_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1632_, 0, v___f_1629_);
v___x_1633_ = lean_box(v___x_1631_);
v___x_1634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1633_);
lean_ctor_set(v___x_1634_, 1, v___f_1632_);
v___x_1635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1630_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = lean_array_get(v___x_1635_, v_declInfos_1524_, v___x_1625_);
lean_dec_ref_known(v___x_1635_, 2);
v_snd_1637_ = lean_ctor_get(v___x_1636_, 1);
lean_inc(v_snd_1637_);
v_fst_1638_ = lean_ctor_get(v___x_1636_, 0);
lean_inc(v_fst_1638_);
lean_dec(v___x_1636_);
v_fst_1639_ = lean_ctor_get(v_snd_1637_, 0);
lean_inc(v_fst_1639_);
v_snd_1640_ = lean_ctor_get(v_snd_1637_, 1);
lean_inc(v_snd_1640_);
lean_dec(v_snd_1637_);
lean_inc(v___y_1535_);
lean_inc_ref(v___y_1534_);
lean_inc(v___y_1533_);
lean_inc_ref(v___y_1532_);
lean_inc(v___y_1531_);
lean_inc_ref(v___y_1530_);
lean_inc(v___y_1529_);
lean_inc_ref(v___y_1528_);
lean_inc_ref(v_acc_1527_);
v___x_1641_ = lean_apply_10(v_snd_1640_, v_acc_1527_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, lean_box(0));
if (lean_obj_tag(v___x_1641_) == 0)
{
lean_object* v_a_1642_; lean_object* v___x_1643_; lean_object* v___f_1644_; uint8_t v___x_1645_; lean_object* v___x_1646_; 
v_a_1642_ = lean_ctor_get(v___x_1641_, 0);
lean_inc(v_a_1642_);
lean_dec_ref_known(v___x_1641_, 1);
v___x_1643_ = lean_box(v_kind_1526_);
v___f_1644_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1___boxed), 14, 4);
lean_closure_set(v___f_1644_, 0, v_acc_1527_);
lean_closure_set(v___f_1644_, 1, v_declInfos_1524_);
lean_closure_set(v___f_1644_, 2, v_k_1525_);
lean_closure_set(v___f_1644_, 3, v___x_1643_);
v___x_1645_ = lean_unbox(v_fst_1639_);
lean_dec(v_fst_1639_);
v___x_1646_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg(v_fst_1638_, v___x_1645_, v_a_1642_, v___f_1644_, v_kind_1526_, v___y_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_);
return v___x_1646_;
}
else
{
lean_object* v_a_1647_; lean_object* v___x_1649_; uint8_t v_isShared_1650_; uint8_t v_isSharedCheck_1654_; 
lean_dec(v_fst_1639_);
lean_dec(v_fst_1638_);
lean_dec_ref(v_acc_1527_);
lean_dec_ref(v_k_1525_);
lean_dec_ref(v_declInfos_1524_);
v_a_1647_ = lean_ctor_get(v___x_1641_, 0);
v_isSharedCheck_1654_ = !lean_is_exclusive(v___x_1641_);
if (v_isSharedCheck_1654_ == 0)
{
v___x_1649_ = v___x_1641_;
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
else
{
lean_inc(v_a_1647_);
lean_dec(v___x_1641_);
v___x_1649_ = lean_box(0);
v_isShared_1650_ = v_isSharedCheck_1654_;
goto v_resetjp_1648_;
}
v_resetjp_1648_:
{
lean_object* v___x_1652_; 
if (v_isShared_1650_ == 0)
{
v___x_1652_ = v___x_1649_;
goto v_reusejp_1651_;
}
else
{
lean_object* v_reuseFailAlloc_1653_; 
v_reuseFailAlloc_1653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1653_, 0, v_a_1647_);
v___x_1652_ = v_reuseFailAlloc_1653_;
goto v_reusejp_1651_;
}
v_reusejp_1651_:
{
return v___x_1652_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___lam__1(lean_object* v_acc_1673_, lean_object* v_declInfos_1674_, lean_object* v_k_1675_, uint8_t v_kind_1676_, lean_object* v_x_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_){
_start:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; 
v___x_1687_ = lean_array_push(v_acc_1673_, v_x_1677_);
v___x_1688_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19(v_declInfos_1674_, v_k_1675_, v_kind_1676_, v___x_1687_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_, v___y_1685_);
return v___x_1688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19___boxed(lean_object* v_declInfos_1689_, lean_object* v_k_1690_, lean_object* v_kind_1691_, lean_object* v_acc_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
uint8_t v_kind_boxed_1702_; lean_object* v_res_1703_; 
v_kind_boxed_1702_ = lean_unbox(v_kind_1691_);
v_res_1703_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19(v_declInfos_1689_, v_k_1690_, v_kind_boxed_1702_, v_acc_1692_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14(lean_object* v_declInfos_1704_, lean_object* v_k_1705_, uint8_t v_kind_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_){
_start:
{
lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1716_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1));
v___x_1717_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19(v_declInfos_1704_, v_k_1705_, v_kind_1706_, v___x_1716_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14___boxed(lean_object* v_declInfos_1718_, lean_object* v_k_1719_, lean_object* v_kind_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_){
_start:
{
uint8_t v_kind_boxed_1730_; lean_object* v_res_1731_; 
v_kind_boxed_1730_ = lean_unbox(v_kind_1720_);
v_res_1731_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14(v_declInfos_1718_, v_k_1719_, v_kind_boxed_1730_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
lean_dec(v___y_1728_);
lean_dec_ref(v___y_1727_);
lean_dec(v___y_1726_);
lean_dec_ref(v___y_1725_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
return v_res_1731_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13(size_t v_sz_1732_, size_t v_i_1733_, lean_object* v_bs_1734_){
_start:
{
uint8_t v___x_1735_; 
v___x_1735_ = lean_usize_dec_lt(v_i_1733_, v_sz_1732_);
if (v___x_1735_ == 0)
{
return v_bs_1734_;
}
else
{
lean_object* v_v_1736_; lean_object* v_fst_1737_; lean_object* v_snd_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1754_; 
v_v_1736_ = lean_array_uget(v_bs_1734_, v_i_1733_);
v_fst_1737_ = lean_ctor_get(v_v_1736_, 0);
v_snd_1738_ = lean_ctor_get(v_v_1736_, 1);
v_isSharedCheck_1754_ = !lean_is_exclusive(v_v_1736_);
if (v_isSharedCheck_1754_ == 0)
{
v___x_1740_ = v_v_1736_;
v_isShared_1741_ = v_isSharedCheck_1754_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_snd_1738_);
lean_inc(v_fst_1737_);
lean_dec(v_v_1736_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1754_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v___x_1742_; lean_object* v_bs_x27_1743_; uint8_t v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1747_; 
v___x_1742_ = lean_unsigned_to_nat(0u);
v_bs_x27_1743_ = lean_array_uset(v_bs_1734_, v_i_1733_, v___x_1742_);
v___x_1744_ = 0;
v___x_1745_ = lean_box(v___x_1744_);
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 0, v___x_1745_);
v___x_1747_ = v___x_1740_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1745_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v_snd_1738_);
v___x_1747_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
lean_object* v___x_1748_; size_t v___x_1749_; size_t v___x_1750_; lean_object* v___x_1751_; 
v___x_1748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1748_, 0, v_fst_1737_);
lean_ctor_set(v___x_1748_, 1, v___x_1747_);
v___x_1749_ = ((size_t)1ULL);
v___x_1750_ = lean_usize_add(v_i_1733_, v___x_1749_);
v___x_1751_ = lean_array_uset(v_bs_x27_1743_, v_i_1733_, v___x_1748_);
v_i_1733_ = v___x_1750_;
v_bs_1734_ = v___x_1751_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13___boxed(lean_object* v_sz_1755_, lean_object* v_i_1756_, lean_object* v_bs_1757_){
_start:
{
size_t v_sz_boxed_1758_; size_t v_i_boxed_1759_; lean_object* v_res_1760_; 
v_sz_boxed_1758_ = lean_unbox_usize(v_sz_1755_);
lean_dec(v_sz_1755_);
v_i_boxed_1759_ = lean_unbox_usize(v_i_1756_);
lean_dec(v_i_1756_);
v_res_1760_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13(v_sz_boxed_1758_, v_i_boxed_1759_, v_bs_1757_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(lean_object* v_declInfos_1761_, lean_object* v_k_1762_, uint8_t v_kind_1763_, lean_object* v___y_1764_, lean_object* v___y_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_){
_start:
{
size_t v_sz_1773_; size_t v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v_sz_1773_ = lean_array_size(v_declInfos_1761_);
v___x_1774_ = ((size_t)0ULL);
v___x_1775_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__13(v_sz_1773_, v___x_1774_, v_declInfos_1761_);
v___x_1776_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14(v___x_1775_, v_k_1762_, v_kind_1763_, v___y_1764_, v___y_1765_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___boxed(lean_object* v_declInfos_1777_, lean_object* v_k_1778_, lean_object* v_kind_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_){
_start:
{
uint8_t v_kind_boxed_1789_; lean_object* v_res_1790_; 
v_kind_boxed_1789_ = lean_unbox(v_kind_1779_);
v_res_1790_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(v_declInfos_1777_, v_k_1778_, v_kind_boxed_1789_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_);
lean_dec(v___y_1787_);
lean_dec_ref(v___y_1786_);
lean_dec(v___y_1785_);
lean_dec_ref(v___y_1784_);
lean_dec(v___y_1783_);
lean_dec_ref(v___y_1782_);
lean_dec(v___y_1781_);
lean_dec_ref(v___y_1780_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0(lean_object* v_snd_1791_, lean_object* v_x_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_){
_start:
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1802_, 0, v_snd_1791_);
return v___x_1802_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0___boxed(lean_object* v_snd_1803_, lean_object* v_x_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
lean_object* v_res_1814_; 
v_res_1814_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0(v_snd_1803_, v_x_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec_ref(v___y_1807_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec_ref(v_x_1804_);
return v_res_1814_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7(size_t v_sz_1815_, size_t v_i_1816_, lean_object* v_bs_1817_){
_start:
{
uint8_t v___x_1818_; 
v___x_1818_ = lean_usize_dec_lt(v_i_1816_, v_sz_1815_);
if (v___x_1818_ == 0)
{
return v_bs_1817_;
}
else
{
lean_object* v_v_1819_; lean_object* v_fst_1820_; lean_object* v_snd_1821_; lean_object* v___x_1823_; uint8_t v_isShared_1824_; uint8_t v_isSharedCheck_1835_; 
v_v_1819_ = lean_array_uget(v_bs_1817_, v_i_1816_);
v_fst_1820_ = lean_ctor_get(v_v_1819_, 0);
v_snd_1821_ = lean_ctor_get(v_v_1819_, 1);
v_isSharedCheck_1835_ = !lean_is_exclusive(v_v_1819_);
if (v_isSharedCheck_1835_ == 0)
{
v___x_1823_ = v_v_1819_;
v_isShared_1824_ = v_isSharedCheck_1835_;
goto v_resetjp_1822_;
}
else
{
lean_inc(v_snd_1821_);
lean_inc(v_fst_1820_);
lean_dec(v_v_1819_);
v___x_1823_ = lean_box(0);
v_isShared_1824_ = v_isSharedCheck_1835_;
goto v_resetjp_1822_;
}
v_resetjp_1822_:
{
lean_object* v___x_1825_; lean_object* v_bs_x27_1826_; lean_object* v___f_1827_; lean_object* v___x_1829_; 
v___x_1825_ = lean_unsigned_to_nat(0u);
v_bs_x27_1826_ = lean_array_uset(v_bs_1817_, v_i_1816_, v___x_1825_);
v___f_1827_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1827_, 0, v_snd_1821_);
if (v_isShared_1824_ == 0)
{
lean_ctor_set(v___x_1823_, 1, v___f_1827_);
v___x_1829_ = v___x_1823_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1834_; 
v_reuseFailAlloc_1834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1834_, 0, v_fst_1820_);
lean_ctor_set(v_reuseFailAlloc_1834_, 1, v___f_1827_);
v___x_1829_ = v_reuseFailAlloc_1834_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
size_t v___x_1830_; size_t v___x_1831_; lean_object* v___x_1832_; 
v___x_1830_ = ((size_t)1ULL);
v___x_1831_ = lean_usize_add(v_i_1816_, v___x_1830_);
v___x_1832_ = lean_array_uset(v_bs_x27_1826_, v_i_1816_, v___x_1829_);
v_i_1816_ = v___x_1831_;
v_bs_1817_ = v___x_1832_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7___boxed(lean_object* v_sz_1836_, lean_object* v_i_1837_, lean_object* v_bs_1838_){
_start:
{
size_t v_sz_boxed_1839_; size_t v_i_boxed_1840_; lean_object* v_res_1841_; 
v_sz_boxed_1839_ = lean_unbox_usize(v_sz_1836_);
lean_dec(v_sz_1836_);
v_i_boxed_1840_ = lean_unbox_usize(v_i_1837_);
lean_dec(v_i_1837_);
v_res_1841_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7(v_sz_boxed_1839_, v_i_boxed_1840_, v_bs_1838_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(lean_object* v_declInfos_1842_, lean_object* v_k_1843_, uint8_t v_kind_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
size_t v_sz_1854_; size_t v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v_sz_1854_ = lean_array_size(v_declInfos_1842_);
v___x_1855_ = ((size_t)0ULL);
v___x_1856_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__7(v_sz_1854_, v___x_1855_, v_declInfos_1842_);
v___x_1857_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(v___x_1856_, v_k_1843_, v_kind_1844_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_, v___y_1851_, v___y_1852_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5___boxed(lean_object* v_declInfos_1858_, lean_object* v_k_1859_, lean_object* v_kind_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_){
_start:
{
uint8_t v_kind_boxed_1870_; lean_object* v_res_1871_; 
v_kind_boxed_1870_ = lean_unbox(v_kind_1860_);
v_res_1871_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(v_declInfos_1858_, v_k_1859_, v_kind_boxed_1870_, v___y_1861_, v___y_1862_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_);
lean_dec(v___y_1868_);
lean_dec_ref(v___y_1867_);
lean_dec(v___y_1866_);
lean_dec_ref(v___y_1865_);
lean_dec(v___y_1864_);
lean_dec_ref(v___y_1863_);
lean_dec(v___y_1862_);
lean_dec_ref(v___y_1861_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(size_t v_sz_1872_, size_t v_i_1873_, lean_object* v_bs_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_){
_start:
{
uint8_t v___x_1880_; 
v___x_1880_ = lean_usize_dec_lt(v_i_1873_, v_sz_1872_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1881_; 
v___x_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1881_, 0, v_bs_1874_);
return v___x_1881_;
}
else
{
lean_object* v_v_1882_; lean_object* v___x_1883_; 
v_v_1882_ = lean_array_uget_borrowed(v_bs_1874_, v_i_1873_);
lean_inc(v___y_1878_);
lean_inc_ref(v___y_1877_);
lean_inc(v___y_1876_);
lean_inc_ref(v___y_1875_);
lean_inc(v_v_1882_);
v___x_1883_ = lean_infer_type(v_v_1882_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
if (lean_obj_tag(v___x_1883_) == 0)
{
lean_object* v_a_1884_; lean_object* v___x_1885_; lean_object* v_bs_x27_1886_; size_t v___x_1887_; size_t v___x_1888_; lean_object* v___x_1889_; 
v_a_1884_ = lean_ctor_get(v___x_1883_, 0);
lean_inc(v_a_1884_);
lean_dec_ref_known(v___x_1883_, 1);
v___x_1885_ = lean_unsigned_to_nat(0u);
v_bs_x27_1886_ = lean_array_uset(v_bs_1874_, v_i_1873_, v___x_1885_);
v___x_1887_ = ((size_t)1ULL);
v___x_1888_ = lean_usize_add(v_i_1873_, v___x_1887_);
v___x_1889_ = lean_array_uset(v_bs_x27_1886_, v_i_1873_, v_a_1884_);
v_i_1873_ = v___x_1888_;
v_bs_1874_ = v___x_1889_;
goto _start;
}
else
{
lean_object* v_a_1891_; lean_object* v___x_1893_; uint8_t v_isShared_1894_; uint8_t v_isSharedCheck_1898_; 
lean_dec_ref(v_bs_1874_);
v_a_1891_ = lean_ctor_get(v___x_1883_, 0);
v_isSharedCheck_1898_ = !lean_is_exclusive(v___x_1883_);
if (v_isSharedCheck_1898_ == 0)
{
v___x_1893_ = v___x_1883_;
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
else
{
lean_inc(v_a_1891_);
lean_dec(v___x_1883_);
v___x_1893_ = lean_box(0);
v_isShared_1894_ = v_isSharedCheck_1898_;
goto v_resetjp_1892_;
}
v_resetjp_1892_:
{
lean_object* v___x_1896_; 
if (v_isShared_1894_ == 0)
{
v___x_1896_ = v___x_1893_;
goto v_reusejp_1895_;
}
else
{
lean_object* v_reuseFailAlloc_1897_; 
v_reuseFailAlloc_1897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1897_, 0, v_a_1891_);
v___x_1896_ = v_reuseFailAlloc_1897_;
goto v_reusejp_1895_;
}
v_reusejp_1895_:
{
return v___x_1896_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3___boxed(lean_object* v_sz_1899_, lean_object* v_i_1900_, lean_object* v_bs_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_){
_start:
{
size_t v_sz_boxed_1907_; size_t v_i_boxed_1908_; lean_object* v_res_1909_; 
v_sz_boxed_1907_ = lean_unbox_usize(v_sz_1899_);
lean_dec(v_sz_1899_);
v_i_boxed_1908_ = lean_unbox_usize(v_i_1900_);
lean_dec(v_i_1900_);
v_res_1909_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(v_sz_boxed_1907_, v_i_boxed_1908_, v_bs_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_);
lean_dec(v___y_1905_);
lean_dec_ref(v___y_1904_);
lean_dec(v___y_1903_);
lean_dec_ref(v___y_1902_);
return v_res_1909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(size_t v_sz_1910_, size_t v_i_1911_, lean_object* v_bs_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_, lean_object* v___y_1915_, lean_object* v___y_1916_){
_start:
{
uint8_t v___x_1918_; 
v___x_1918_ = lean_usize_dec_lt(v_i_1911_, v_sz_1910_);
if (v___x_1918_ == 0)
{
lean_object* v___x_1919_; 
v___x_1919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1919_, 0, v_bs_1912_);
return v___x_1919_;
}
else
{
lean_object* v_v_1920_; lean_object* v_fst_1921_; lean_object* v_snd_1922_; lean_object* v___x_1923_; 
v_v_1920_ = lean_array_uget_borrowed(v_bs_1912_, v_i_1911_);
v_fst_1921_ = lean_ctor_get(v_v_1920_, 0);
v_snd_1922_ = lean_ctor_get(v_v_1920_, 1);
lean_inc(v_fst_1921_);
lean_inc(v_snd_1922_);
v___x_1923_ = l_Lean_Meta_mkEq(v_snd_1922_, v_fst_1921_, v___y_1913_, v___y_1914_, v___y_1915_, v___y_1916_);
if (lean_obj_tag(v___x_1923_) == 0)
{
lean_object* v_a_1924_; lean_object* v___x_1925_; lean_object* v_bs_x27_1926_; size_t v___x_1927_; size_t v___x_1928_; lean_object* v___x_1929_; 
v_a_1924_ = lean_ctor_get(v___x_1923_, 0);
lean_inc(v_a_1924_);
lean_dec_ref_known(v___x_1923_, 1);
v___x_1925_ = lean_unsigned_to_nat(0u);
v_bs_x27_1926_ = lean_array_uset(v_bs_1912_, v_i_1911_, v___x_1925_);
v___x_1927_ = ((size_t)1ULL);
v___x_1928_ = lean_usize_add(v_i_1911_, v___x_1927_);
v___x_1929_ = lean_array_uset(v_bs_x27_1926_, v_i_1911_, v_a_1924_);
v_i_1911_ = v___x_1928_;
v_bs_1912_ = v___x_1929_;
goto _start;
}
else
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
lean_dec_ref(v_bs_1912_);
v_a_1931_ = lean_ctor_get(v___x_1923_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1923_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1923_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1923_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg___boxed(lean_object* v_sz_1939_, lean_object* v_i_1940_, lean_object* v_bs_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
size_t v_sz_boxed_1947_; size_t v_i_boxed_1948_; lean_object* v_res_1949_; 
v_sz_boxed_1947_ = lean_unbox_usize(v_sz_1939_);
lean_dec(v_sz_1939_);
v_i_boxed_1948_ = lean_unbox_usize(v_i_1940_);
lean_dec(v_i_1940_);
v_res_1949_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(v_sz_boxed_1947_, v_i_boxed_1948_, v_bs_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0(lean_object* v_revertArgs_1950_, lean_object* v_hypName_1951_, lean_object* v_u_1952_, lean_object* v_00_u03c3s_1953_, uint8_t v___x_1954_, lean_object* v_hyps_1955_, lean_object* v_ss_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v___x_1966_; size_t v_sz_1967_; size_t v___x_1968_; lean_object* v___x_1969_; 
v___x_1966_ = l_Array_zip___redArg(v_revertArgs_1950_, v_ss_1956_);
v_sz_1967_ = lean_array_size(v___x_1966_);
v___x_1968_ = ((size_t)0ULL);
v___x_1969_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(v_sz_1967_, v___x_1968_, v___x_1966_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
if (lean_obj_tag(v___x_1969_) == 0)
{
lean_object* v_a_1970_; lean_object* v___x_1971_; 
v_a_1970_ = lean_ctor_get(v___x_1969_, 0);
lean_inc(v_a_1970_);
lean_dec_ref_known(v___x_1969_, 1);
lean_inc(v_hypName_1951_);
v___x_1971_ = l_Lean_Core_mkFreshUserName(v_hypName_1951_, v___y_1963_, v___y_1964_);
if (lean_obj_tag(v___x_1971_) == 0)
{
lean_object* v_a_1972_; lean_object* v_eqs_1973_; lean_object* v_00_u03c6_1974_; lean_object* v_00_u03c6_1975_; uint8_t v___x_1976_; uint8_t v___x_1977_; lean_object* v___x_1978_; 
v_a_1972_ = lean_ctor_get(v___x_1971_, 0);
lean_inc(v_a_1972_);
lean_dec_ref_known(v___x_1971_, 1);
v_eqs_1973_ = lean_array_to_list(v_a_1970_);
v_00_u03c6_1974_ = l_Lean_mkAndN(v_eqs_1973_);
v_00_u03c6_1975_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_u_1952_, v_00_u03c3s_1953_, v_00_u03c6_1974_);
v___x_1976_ = 1;
v___x_1977_ = 1;
v___x_1978_ = l_Lean_Meta_mkLambdaFVars(v_ss_1956_, v_00_u03c6_1975_, v___x_1954_, v___x_1976_, v___x_1954_, v___x_1976_, v___x_1977_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1980_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_a_1979_);
lean_dec_ref_known(v___x_1978_, 1);
v___x_1980_ = l_Lean_Meta_mkLambdaFVars(v_ss_1956_, v_hyps_1955_, v___x_1954_, v___x_1976_, v___x_1954_, v___x_1976_, v___x_1977_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v___x_1983_; uint8_t v_isShared_1984_; uint8_t v_isSharedCheck_1991_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1983_ = v___x_1980_;
v_isShared_1984_ = v_isSharedCheck_1991_;
goto v_resetjp_1982_;
}
else
{
lean_inc(v_a_1981_);
lean_dec(v___x_1980_);
v___x_1983_ = lean_box(0);
v_isShared_1984_ = v_isSharedCheck_1991_;
goto v_resetjp_1982_;
}
v_resetjp_1982_:
{
lean_object* v___x_1985_; lean_object* v_00_u03c6_1986_; lean_object* v___x_1987_; lean_object* v___x_1989_; 
v___x_1985_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1985_, 0, v_hypName_1951_);
lean_ctor_set(v___x_1985_, 1, v_a_1972_);
lean_ctor_set(v___x_1985_, 2, v_a_1979_);
v_00_u03c6_1986_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_1985_);
v___x_1987_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1987_, 0, v_a_1981_);
lean_ctor_set(v___x_1987_, 1, v_00_u03c6_1986_);
if (v_isShared_1984_ == 0)
{
lean_ctor_set(v___x_1983_, 0, v___x_1987_);
v___x_1989_ = v___x_1983_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v___x_1987_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
else
{
lean_object* v_a_1992_; lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_1999_; 
lean_dec(v_a_1979_);
lean_dec(v_a_1972_);
lean_dec(v_hypName_1951_);
v_a_1992_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_1999_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_1999_ == 0)
{
v___x_1994_ = v___x_1980_;
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
else
{
lean_inc(v_a_1992_);
lean_dec(v___x_1980_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_1999_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v___x_1997_; 
if (v_isShared_1995_ == 0)
{
v___x_1997_ = v___x_1994_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_1998_; 
v_reuseFailAlloc_1998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1998_, 0, v_a_1992_);
v___x_1997_ = v_reuseFailAlloc_1998_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
return v___x_1997_;
}
}
}
}
else
{
lean_object* v_a_2000_; lean_object* v___x_2002_; uint8_t v_isShared_2003_; uint8_t v_isSharedCheck_2007_; 
lean_dec(v_a_1972_);
lean_dec_ref(v_hyps_1955_);
lean_dec(v_hypName_1951_);
v_a_2000_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_2007_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_2002_ = v___x_1978_;
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
else
{
lean_inc(v_a_2000_);
lean_dec(v___x_1978_);
v___x_2002_ = lean_box(0);
v_isShared_2003_ = v_isSharedCheck_2007_;
goto v_resetjp_2001_;
}
v_resetjp_2001_:
{
lean_object* v___x_2005_; 
if (v_isShared_2003_ == 0)
{
v___x_2005_ = v___x_2002_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v_a_2000_);
v___x_2005_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
return v___x_2005_;
}
}
}
}
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
lean_dec(v_a_1970_);
lean_dec_ref(v_hyps_1955_);
lean_dec_ref(v_00_u03c3s_1953_);
lean_dec(v_u_1952_);
lean_dec(v_hypName_1951_);
v_a_2008_ = lean_ctor_get(v___x_1971_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_1971_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_1971_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_1971_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
else
{
lean_object* v_a_2016_; lean_object* v___x_2018_; uint8_t v_isShared_2019_; uint8_t v_isSharedCheck_2023_; 
lean_dec_ref(v_hyps_1955_);
lean_dec_ref(v_00_u03c3s_1953_);
lean_dec(v_u_1952_);
lean_dec(v_hypName_1951_);
v_a_2016_ = lean_ctor_get(v___x_1969_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_1969_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2018_ = v___x_1969_;
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
else
{
lean_inc(v_a_2016_);
lean_dec(v___x_1969_);
v___x_2018_ = lean_box(0);
v_isShared_2019_ = v_isSharedCheck_2023_;
goto v_resetjp_2017_;
}
v_resetjp_2017_:
{
lean_object* v___x_2021_; 
if (v_isShared_2019_ == 0)
{
v___x_2021_ = v___x_2018_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_a_2016_);
v___x_2021_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
return v___x_2021_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed(lean_object* v_revertArgs_2024_, lean_object* v_hypName_2025_, lean_object* v_u_2026_, lean_object* v_00_u03c3s_2027_, lean_object* v___x_2028_, lean_object* v_hyps_2029_, lean_object* v_ss_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_){
_start:
{
uint8_t v___x_21499__boxed_2040_; lean_object* v_res_2041_; 
v___x_21499__boxed_2040_ = lean_unbox(v___x_2028_);
v_res_2041_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0(v_revertArgs_2024_, v_hypName_2025_, v_u_2026_, v_00_u03c3s_2027_, v___x_21499__boxed_2040_, v_hyps_2029_, v_ss_2030_, v___y_2031_, v___y_2032_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_);
lean_dec(v___y_2038_);
lean_dec_ref(v___y_2037_);
lean_dec(v___y_2036_);
lean_dec_ref(v___y_2035_);
lean_dec(v___y_2034_);
lean_dec_ref(v___y_2033_);
lean_dec(v___y_2032_);
lean_dec_ref(v___y_2031_);
lean_dec_ref(v_ss_2030_);
lean_dec_ref(v_revertArgs_2024_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(lean_object* v_goal_2042_, lean_object* v_n_2043_, lean_object* v_hypName_2044_, lean_object* v_k_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v___x_2055_; uint8_t v___x_2056_; 
v___x_2055_ = lean_unsigned_to_nat(0u);
v___x_2056_ = lean_nat_dec_eq(v_n_2043_, v___x_2055_);
if (v___x_2056_ == 0)
{
lean_object* v_u_2057_; lean_object* v_00_u03c3s_2058_; lean_object* v_hyps_2059_; lean_object* v_target_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2214_; 
v_u_2057_ = lean_ctor_get(v_goal_2042_, 0);
v_00_u03c3s_2058_ = lean_ctor_get(v_goal_2042_, 1);
v_hyps_2059_ = lean_ctor_get(v_goal_2042_, 2);
v_target_2060_ = lean_ctor_get(v_goal_2042_, 3);
v_isSharedCheck_2214_ = !lean_is_exclusive(v_goal_2042_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2062_ = v_goal_2042_;
v_isShared_2063_ = v_isSharedCheck_2214_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_target_2060_);
lean_inc(v_hyps_2059_);
lean_inc(v_00_u03c3s_2058_);
lean_inc(v_u_2057_);
lean_dec(v_goal_2042_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2214_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v_T_2064_; lean_object* v_f_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v_a_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v_revertArgs_2072_; lean_object* v___y_2074_; lean_object* v___y_2075_; lean_object* v___y_2076_; lean_object* v___y_2077_; lean_object* v___y_2078_; lean_object* v___y_2079_; lean_object* v___y_2080_; lean_object* v___y_2081_; lean_object* v___y_2082_; lean_object* v___y_2083_; lean_object* v___y_2084_; lean_object* v___y_2085_; lean_object* v___x_2124_; lean_object* v___f_2125_; lean_object* v___y_2127_; lean_object* v___y_2128_; lean_object* v___y_2129_; lean_object* v___y_2130_; lean_object* v___y_2131_; lean_object* v___y_2132_; lean_object* v___y_2133_; lean_object* v___y_2134_; lean_object* v___x_2188_; uint8_t v___x_2189_; 
v_T_2064_ = l_Lean_Expr_consumeMData(v_target_2060_);
v_f_2065_ = l_Lean_Expr_getAppFn(v_T_2064_);
v___x_2066_ = l_Lean_Expr_getAppNumArgs(v_T_2064_);
v___x_2067_ = lean_mk_empty_array_with_capacity(v___x_2066_);
lean_dec(v___x_2066_);
lean_inc_ref(v_T_2064_);
v_a_2068_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_T_2064_, v___x_2067_);
lean_inc(v_n_2043_);
lean_inc_ref(v_a_2068_);
v___x_2069_ = l_Array_toSubarray___redArg(v_a_2068_, v___x_2055_, v_n_2043_);
v___x_2070_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1));
v___x_2071_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(v___x_2069_, v___x_2070_);
v_revertArgs_2072_ = l_Array_reverse___redArg(v___x_2071_);
v___x_2124_ = lean_box(v___x_2056_);
lean_inc_ref(v_hyps_2059_);
lean_inc_ref(v_00_u03c3s_2058_);
lean_inc(v_u_2057_);
lean_inc_ref(v_revertArgs_2072_);
v___f_2125_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed), 16, 6);
lean_closure_set(v___f_2125_, 0, v_revertArgs_2072_);
lean_closure_set(v___f_2125_, 1, v_hypName_2044_);
lean_closure_set(v___f_2125_, 2, v_u_2057_);
lean_closure_set(v___f_2125_, 3, v_00_u03c3s_2058_);
lean_closure_set(v___f_2125_, 4, v___x_2124_);
lean_closure_set(v___f_2125_, 5, v_hyps_2059_);
v___x_2188_ = lean_array_get_size(v_revertArgs_2072_);
v___x_2189_ = lean_nat_dec_eq(v___x_2188_, v_n_2043_);
if (v___x_2189_ == 0)
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v_a_2206_; lean_object* v___x_2208_; uint8_t v_isShared_2209_; uint8_t v_isSharedCheck_2213_; 
lean_dec_ref(v___f_2125_);
lean_dec_ref(v_revertArgs_2072_);
lean_dec_ref(v_a_2068_);
lean_dec_ref(v_f_2065_);
lean_del_object(v___x_2062_);
lean_dec_ref(v_target_2060_);
lean_dec_ref(v_hyps_2059_);
lean_dec_ref(v_00_u03c3s_2058_);
lean_dec(v_u_2057_);
lean_dec_ref(v_k_2045_);
v___x_2190_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3);
v___x_2191_ = l_Nat_reprFast(v_n_2043_);
v___x_2192_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2192_, 0, v___x_2191_);
v___x_2193_ = l_Lean_MessageData_ofFormat(v___x_2192_);
v___x_2194_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2194_, 0, v___x_2190_);
lean_ctor_set(v___x_2194_, 1, v___x_2193_);
v___x_2195_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5);
v___x_2196_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2194_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
v___x_2197_ = l_Lean_MessageData_ofExpr(v_T_2064_);
v___x_2198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2196_);
lean_ctor_set(v___x_2198_, 1, v___x_2197_);
v___x_2199_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7);
v___x_2200_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2198_);
lean_ctor_set(v___x_2200_, 1, v___x_2199_);
v___x_2201_ = l_Nat_reprFast(v___x_2188_);
v___x_2202_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2202_, 0, v___x_2201_);
v___x_2203_ = l_Lean_MessageData_ofFormat(v___x_2202_);
v___x_2204_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2200_);
lean_ctor_set(v___x_2204_, 1, v___x_2203_);
v___x_2205_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v___x_2204_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_);
v_a_2206_ = lean_ctor_get(v___x_2205_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2205_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2208_ = v___x_2205_;
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
else
{
lean_inc(v_a_2206_);
lean_dec(v___x_2205_);
v___x_2208_ = lean_box(0);
v_isShared_2209_ = v_isSharedCheck_2213_;
goto v_resetjp_2207_;
}
v_resetjp_2207_:
{
lean_object* v___x_2211_; 
if (v_isShared_2209_ == 0)
{
v___x_2211_ = v___x_2208_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2212_; 
v_reuseFailAlloc_2212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2212_, 0, v_a_2206_);
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
lean_dec_ref(v_T_2064_);
v___y_2127_ = v___y_2046_;
v___y_2128_ = v___y_2047_;
v___y_2129_ = v___y_2048_;
v___y_2130_ = v___y_2049_;
v___y_2131_ = v___y_2050_;
v___y_2132_ = v___y_2051_;
v___y_2133_ = v___y_2052_;
v___y_2134_ = v___y_2053_;
goto v___jp_2126_;
}
v___jp_2073_:
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v___y_2081_, v___y_2078_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; lean_object* v_H_2088_; lean_object* v___x_2089_; lean_object* v_fst_2090_; lean_object* v_snd_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2123_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2087_);
lean_dec_ref_known(v___x_2086_, 1);
lean_inc_ref_n(v___y_2085_, 2);
v_H_2088_ = l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(v___y_2085_, v_a_2087_);
lean_inc(v_u_2057_);
v___x_2089_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(v_u_2057_, v___y_2085_, v_H_2088_, v___y_2084_);
v_fst_2090_ = lean_ctor_get(v___x_2089_, 0);
v_snd_2091_ = lean_ctor_get(v___x_2089_, 1);
v_isSharedCheck_2123_ = !lean_is_exclusive(v___x_2089_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2093_ = v___x_2089_;
v_isShared_2094_ = v_isSharedCheck_2123_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_snd_2091_);
lean_inc(v_fst_2090_);
lean_dec(v___x_2089_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2123_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v_goal_x27_2100_; 
v___x_2095_ = lean_array_get_size(v_a_2068_);
v___x_2096_ = l_Array_toSubarray___redArg(v_a_2068_, v_n_2043_, v___x_2095_);
v___x_2097_ = l_Subarray_copy___redArg(v___x_2096_);
v___x_2098_ = l_Lean_mkAppRev(v_f_2065_, v___x_2097_);
lean_dec_ref(v___x_2097_);
lean_inc(v_fst_2090_);
lean_inc(v_u_2057_);
if (v_isShared_2063_ == 0)
{
lean_ctor_set(v___x_2062_, 3, v___x_2098_);
lean_ctor_set(v___x_2062_, 2, v_fst_2090_);
lean_ctor_set(v___x_2062_, 1, v___y_2085_);
v_goal_x27_2100_ = v___x_2062_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v_u_2057_);
lean_ctor_set(v_reuseFailAlloc_2122_, 1, v___y_2085_);
lean_ctor_set(v_reuseFailAlloc_2122_, 2, v_fst_2090_);
lean_ctor_set(v_reuseFailAlloc_2122_, 3, v___x_2098_);
v_goal_x27_2100_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
lean_object* v___x_2101_; 
lean_inc(v___y_2079_);
lean_inc_ref(v___y_2080_);
lean_inc(v___y_2078_);
lean_inc_ref(v___y_2082_);
lean_inc(v___y_2074_);
lean_inc_ref(v___y_2077_);
lean_inc(v___y_2075_);
lean_inc_ref(v___y_2083_);
v___x_2101_ = lean_apply_10(v_k_2045_, v_goal_x27_2100_, v___y_2083_, v___y_2075_, v___y_2077_, v___y_2074_, v___y_2082_, v___y_2078_, v___y_2080_, v___y_2079_, lean_box(0));
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2103_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_a_2102_);
lean_dec_ref_known(v___x_2101_, 1);
lean_inc(v___y_2079_);
lean_inc_ref(v___y_2080_);
lean_inc(v___y_2078_);
lean_inc_ref(v___y_2082_);
lean_inc_ref(v___y_2076_);
v___x_2103_ = lean_infer_type(v___y_2076_, v___y_2082_, v___y_2078_, v___y_2080_, v___y_2079_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2121_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2106_ = v___x_2103_;
v_isShared_2107_ = v_isSharedCheck_2121_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_a_2104_);
lean_dec(v___x_2103_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2121_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2111_; 
v___x_2108_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1));
v___x_2109_ = lean_box(0);
if (v_isShared_2094_ == 0)
{
lean_ctor_set_tag(v___x_2093_, 1);
lean_ctor_set(v___x_2093_, 1, v___x_2109_);
lean_ctor_set(v___x_2093_, 0, v_u_2057_);
v___x_2111_ = v___x_2093_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v_u_2057_);
lean_ctor_set(v_reuseFailAlloc_2120_, 1, v___x_2109_);
v___x_2111_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v_prf_2116_; lean_object* v___x_2118_; 
v___x_2112_ = l_Lean_mkConst(v___x_2108_, v___x_2111_);
v___x_2113_ = l_Lean_mkAppN(v_fst_2090_, v_revertArgs_2072_);
v___x_2114_ = l_Lean_mkAppN(v_snd_2091_, v_revertArgs_2072_);
v___x_2115_ = l_Lean_mkAppN(v_a_2102_, v_revertArgs_2072_);
lean_dec_ref(v_revertArgs_2072_);
v_prf_2116_ = l_Lean_mkApp8(v___x_2112_, v_00_u03c3s_2058_, v_a_2104_, v_hyps_2059_, v___x_2113_, v_target_2060_, v___y_2076_, v___x_2114_, v___x_2115_);
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 0, v_prf_2116_);
v___x_2118_ = v___x_2106_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v_prf_2116_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
}
}
else
{
lean_dec(v_a_2102_);
lean_del_object(v___x_2093_);
lean_dec(v_snd_2091_);
lean_dec(v_fst_2090_);
lean_dec_ref(v___y_2076_);
lean_dec_ref(v_revertArgs_2072_);
lean_dec_ref(v_target_2060_);
lean_dec_ref(v_hyps_2059_);
lean_dec_ref(v_00_u03c3s_2058_);
lean_dec(v_u_2057_);
return v___x_2103_;
}
}
else
{
lean_del_object(v___x_2093_);
lean_dec(v_snd_2091_);
lean_dec(v_fst_2090_);
lean_dec_ref(v___y_2076_);
lean_dec_ref(v_revertArgs_2072_);
lean_dec_ref(v_target_2060_);
lean_dec_ref(v_hyps_2059_);
lean_dec_ref(v_00_u03c3s_2058_);
lean_dec(v_u_2057_);
return v___x_2101_;
}
}
}
}
else
{
lean_dec_ref(v___y_2085_);
lean_dec_ref(v___y_2084_);
lean_dec_ref(v___y_2076_);
lean_dec_ref(v_revertArgs_2072_);
lean_dec_ref(v_a_2068_);
lean_dec_ref(v_f_2065_);
lean_del_object(v___x_2062_);
lean_dec_ref(v_target_2060_);
lean_dec_ref(v_hyps_2059_);
lean_dec_ref(v_00_u03c3s_2058_);
lean_dec(v_u_2057_);
lean_dec_ref(v_k_2045_);
lean_dec(v_n_2043_);
return v___x_2086_;
}
}
v___jp_2126_:
{
size_t v_sz_2135_; size_t v___x_2136_; lean_object* v___x_2137_; 
v_sz_2135_ = lean_array_size(v_revertArgs_2072_);
v___x_2136_ = ((size_t)0ULL);
lean_inc_ref(v_revertArgs_2072_);
v___x_2137_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(v_sz_2135_, v___x_2136_, v_revertArgs_2072_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
if (lean_obj_tag(v___x_2137_) == 0)
{
lean_object* v_a_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v_a_2138_ = lean_ctor_get(v___x_2137_, 0);
lean_inc(v_a_2138_);
lean_dec_ref_known(v___x_2137_, 1);
v___x_2139_ = lean_array_get_size(v_a_2138_);
v___x_2140_ = lean_mk_empty_array_with_capacity(v___x_2139_);
v___x_2141_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(v_a_2138_, v___x_2139_, v___x_2055_, v___x_2140_, v___y_2133_, v___y_2134_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; uint8_t v___x_2143_; lean_object* v___x_2144_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2142_);
lean_dec_ref_known(v___x_2141_, 1);
v___x_2143_ = 0;
v___x_2144_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(v_a_2142_, v___f_2125_, v___x_2143_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; lean_object* v_fst_2146_; lean_object* v_snd_2147_; lean_object* v___x_2148_; 
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
lean_inc(v_a_2145_);
lean_dec_ref_known(v___x_2144_, 1);
v_fst_2146_ = lean_ctor_get(v_a_2145_, 0);
lean_inc(v_fst_2146_);
v_snd_2147_ = lean_ctor_get(v_a_2145_, 1);
lean_inc(v_snd_2147_);
lean_dec(v_a_2145_);
lean_inc_ref(v_revertArgs_2072_);
v___x_2148_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(v_sz_2135_, v___x_2136_, v_revertArgs_2072_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
if (lean_obj_tag(v___x_2148_) == 0)
{
lean_object* v_a_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v_a_2149_ = lean_ctor_get(v___x_2148_, 0);
lean_inc(v_a_2149_);
lean_dec_ref_known(v___x_2148_, 1);
v___x_2150_ = lean_array_to_list(v_a_2149_);
v___x_2151_ = l_Lean_Meta_mkAndIntroN(v___x_2150_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; uint8_t v___x_2153_; 
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_a_2152_);
lean_dec_ref_known(v___x_2151_, 1);
v___x_2153_ = lean_nat_dec_lt(v___x_2055_, v___x_2139_);
if (v___x_2153_ == 0)
{
lean_dec(v_a_2138_);
lean_inc_ref(v_00_u03c3s_2058_);
v___y_2074_ = v___y_2130_;
v___y_2075_ = v___y_2128_;
v___y_2076_ = v_a_2152_;
v___y_2077_ = v___y_2129_;
v___y_2078_ = v___y_2132_;
v___y_2079_ = v___y_2134_;
v___y_2080_ = v___y_2133_;
v___y_2081_ = v_fst_2146_;
v___y_2082_ = v___y_2131_;
v___y_2083_ = v___y_2127_;
v___y_2084_ = v_snd_2147_;
v___y_2085_ = v_00_u03c3s_2058_;
goto v___jp_2073_;
}
else
{
size_t v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = lean_usize_of_nat(v___x_2139_);
lean_inc_ref(v_00_u03c3s_2058_);
lean_inc(v_u_2057_);
v___x_2155_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(v_u_2057_, v_a_2138_, v___x_2154_, v___x_2136_, v_00_u03c3s_2058_);
lean_dec(v_a_2138_);
v___y_2074_ = v___y_2130_;
v___y_2075_ = v___y_2128_;
v___y_2076_ = v_a_2152_;
v___y_2077_ = v___y_2129_;
v___y_2078_ = v___y_2132_;
v___y_2079_ = v___y_2134_;
v___y_2080_ = v___y_2133_;
v___y_2081_ = v_fst_2146_;
v___y_2082_ = v___y_2131_;
v___y_2083_ = v___y_2127_;
v___y_2084_ = v_snd_2147_;
v___y_2085_ = v___x_2155_;
goto v___jp_2073_;
}
}
else
{
lean_dec(v_snd_2147_);
lean_dec(v_fst_2146_);
lean_dec(v_a_2138_);
lean_dec_ref(v_revertArgs_2072_);
lean_dec_ref(v_a_2068_);
lean_dec_ref(v_f_2065_);
lean_del_object(v___x_2062_);
lean_dec_ref(v_target_2060_);
lean_dec_ref(v_hyps_2059_);
lean_dec_ref(v_00_u03c3s_2058_);
lean_dec(v_u_2057_);
lean_dec_ref(v_k_2045_);
lean_dec(v_n_2043_);
return v___x_2151_;
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec(v_snd_2147_);
lean_dec(v_fst_2146_);
lean_dec(v_a_2138_);
lean_dec_ref(v_revertArgs_2072_);
lean_dec_ref(v_a_2068_);
lean_dec_ref(v_f_2065_);
lean_del_object(v___x_2062_);
lean_dec_ref(v_target_2060_);
lean_dec_ref(v_hyps_2059_);
lean_dec_ref(v_00_u03c3s_2058_);
lean_dec(v_u_2057_);
lean_dec_ref(v_k_2045_);
lean_dec(v_n_2043_);
v_a_2156_ = lean_ctor_get(v___x_2148_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2148_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2148_);
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
else
{
lean_object* v_a_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
lean_dec(v_a_2138_);
lean_dec_ref(v_revertArgs_2072_);
lean_dec_ref(v_a_2068_);
lean_dec_ref(v_f_2065_);
lean_del_object(v___x_2062_);
lean_dec_ref(v_target_2060_);
lean_dec_ref(v_hyps_2059_);
lean_dec_ref(v_00_u03c3s_2058_);
lean_dec(v_u_2057_);
lean_dec_ref(v_k_2045_);
lean_dec(v_n_2043_);
v_a_2164_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v___x_2144_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_a_2164_);
lean_dec(v___x_2144_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_a_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
return v___x_2169_;
}
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_dec(v_a_2138_);
lean_dec_ref(v___f_2125_);
lean_dec_ref(v_revertArgs_2072_);
lean_dec_ref(v_a_2068_);
lean_dec_ref(v_f_2065_);
lean_del_object(v___x_2062_);
lean_dec_ref(v_target_2060_);
lean_dec_ref(v_hyps_2059_);
lean_dec_ref(v_00_u03c3s_2058_);
lean_dec(v_u_2057_);
lean_dec_ref(v_k_2045_);
lean_dec(v_n_2043_);
v_a_2172_ = lean_ctor_get(v___x_2141_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2141_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2141_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2141_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
else
{
lean_object* v_a_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2187_; 
lean_dec_ref(v___f_2125_);
lean_dec_ref(v_revertArgs_2072_);
lean_dec_ref(v_a_2068_);
lean_dec_ref(v_f_2065_);
lean_del_object(v___x_2062_);
lean_dec_ref(v_target_2060_);
lean_dec_ref(v_hyps_2059_);
lean_dec_ref(v_00_u03c3s_2058_);
lean_dec(v_u_2057_);
lean_dec_ref(v_k_2045_);
lean_dec(v_n_2043_);
v_a_2180_ = lean_ctor_get(v___x_2137_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2137_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2182_ = v___x_2137_;
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_a_2180_);
lean_dec(v___x_2137_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2187_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
lean_object* v___x_2185_; 
if (v_isShared_2183_ == 0)
{
v___x_2185_ = v___x_2182_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v_a_2180_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
}
}
else
{
lean_object* v___x_2215_; 
lean_dec(v_hypName_2044_);
lean_dec(v_n_2043_);
lean_inc(v___y_2053_);
lean_inc_ref(v___y_2052_);
lean_inc(v___y_2051_);
lean_inc_ref(v___y_2050_);
lean_inc(v___y_2049_);
lean_inc_ref(v___y_2048_);
lean_inc(v___y_2047_);
lean_inc_ref(v___y_2046_);
v___x_2215_ = lean_apply_10(v_k_2045_, v_goal_2042_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_, v___y_2053_, lean_box(0));
return v___x_2215_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___boxed(lean_object* v_goal_2216_, lean_object* v_n_2217_, lean_object* v_hypName_2218_, lean_object* v_k_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_){
_start:
{
lean_object* v_res_2229_; 
v_res_2229_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(v_goal_2216_, v_n_2217_, v_hypName_2218_, v_k_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_, v___y_2227_);
lean_dec(v___y_2227_);
lean_dec_ref(v___y_2226_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
return v_res_2229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1(lean_object* v___x_2233_, lean_object* v_snd_2234_, lean_object* v___y_2235_, lean_object* v_fst_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2246_ = lean_st_mk_ref(v___x_2233_);
v___x_2247_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1));
v___x_2248_ = l_Lean_Core_mkFreshUserName(v___x_2247_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; lean_object* v___f_2250_; lean_object* v___x_2251_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
lean_inc(v_a_2249_);
lean_dec_ref_known(v___x_2248_, 1);
lean_inc(v___x_2246_);
v___f_2250_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2250_, 0, v___x_2246_);
v___x_2251_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(v_snd_2234_, v___y_2235_, v_a_2249_, v___f_2250_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
if (lean_obj_tag(v___x_2251_) == 0)
{
lean_object* v_a_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v_a_2252_ = lean_ctor_get(v___x_2251_, 0);
lean_inc(v_a_2252_);
lean_dec_ref_known(v___x_2251_, 1);
v___x_2253_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_fst_2236_, v_a_2252_, v___y_2242_);
lean_dec_ref(v___x_2253_);
v___x_2254_ = lean_st_ref_get(v___x_2246_);
lean_dec(v___x_2246_);
v___x_2255_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2254_, v___y_2238_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_);
return v___x_2255_;
}
else
{
lean_object* v_a_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2263_; 
lean_dec(v___x_2246_);
lean_dec(v_fst_2236_);
v_a_2256_ = lean_ctor_get(v___x_2251_, 0);
v_isSharedCheck_2263_ = !lean_is_exclusive(v___x_2251_);
if (v_isSharedCheck_2263_ == 0)
{
v___x_2258_ = v___x_2251_;
v_isShared_2259_ = v_isSharedCheck_2263_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_a_2256_);
lean_dec(v___x_2251_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2263_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2261_; 
if (v_isShared_2259_ == 0)
{
v___x_2261_ = v___x_2258_;
goto v_reusejp_2260_;
}
else
{
lean_object* v_reuseFailAlloc_2262_; 
v_reuseFailAlloc_2262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2262_, 0, v_a_2256_);
v___x_2261_ = v_reuseFailAlloc_2262_;
goto v_reusejp_2260_;
}
v_reusejp_2260_:
{
return v___x_2261_;
}
}
}
}
else
{
lean_object* v_a_2264_; lean_object* v___x_2266_; uint8_t v_isShared_2267_; uint8_t v_isSharedCheck_2271_; 
lean_dec(v___x_2246_);
lean_dec(v_fst_2236_);
lean_dec(v___y_2235_);
lean_dec_ref(v_snd_2234_);
v_a_2264_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2271_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2271_ == 0)
{
v___x_2266_ = v___x_2248_;
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
else
{
lean_inc(v_a_2264_);
lean_dec(v___x_2248_);
v___x_2266_ = lean_box(0);
v_isShared_2267_ = v_isSharedCheck_2271_;
goto v_resetjp_2265_;
}
v_resetjp_2265_:
{
lean_object* v___x_2269_; 
if (v_isShared_2267_ == 0)
{
v___x_2269_ = v___x_2266_;
goto v_reusejp_2268_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_a_2264_);
v___x_2269_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2268_;
}
v_reusejp_2268_:
{
return v___x_2269_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___boxed(lean_object* v___x_2272_, lean_object* v_snd_2273_, lean_object* v___y_2274_, lean_object* v_fst_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_){
_start:
{
lean_object* v_res_2285_; 
v_res_2285_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1(v___x_2272_, v_snd_2273_, v___y_2274_, v_fst_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_, v___y_2282_, v___y_2283_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
return v_res_2285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(lean_object* v_goal_2293_, lean_object* v_ref_2294_, lean_object* v_k_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_){
_start:
{
lean_object* v___x_2305_; 
lean_inc_ref(v_goal_2293_);
v___x_2305_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(v_goal_2293_, v_ref_2294_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
if (lean_obj_tag(v___x_2305_) == 0)
{
lean_object* v_a_2306_; lean_object* v_focusHyp_2307_; lean_object* v_restHyps_2308_; lean_object* v_proof_2309_; lean_object* v___x_2310_; 
v_a_2306_ = lean_ctor_get(v___x_2305_, 0);
lean_inc(v_a_2306_);
lean_dec_ref_known(v___x_2305_, 1);
v_focusHyp_2307_ = lean_ctor_get(v_a_2306_, 0);
lean_inc_ref_n(v_focusHyp_2307_, 2);
v_restHyps_2308_ = lean_ctor_get(v_a_2306_, 1);
lean_inc_ref(v_restHyps_2308_);
v_proof_2309_ = lean_ctor_get(v_a_2306_, 2);
lean_inc_ref(v_proof_2309_);
lean_dec(v_a_2306_);
v___x_2310_ = l_Lean_Elab_Tactic_Do_ProofMode_parseHyp_x3f(v_focusHyp_2307_);
if (lean_obj_tag(v___x_2310_) == 1)
{
lean_object* v_val_2311_; lean_object* v_u_2312_; lean_object* v_00_u03c3s_2313_; lean_object* v_hyps_2314_; lean_object* v_target_2315_; lean_object* v___x_2317_; uint8_t v_isShared_2318_; uint8_t v_isSharedCheck_2340_; 
v_val_2311_ = lean_ctor_get(v___x_2310_, 0);
lean_inc(v_val_2311_);
lean_dec_ref_known(v___x_2310_, 1);
v_u_2312_ = lean_ctor_get(v_goal_2293_, 0);
v_00_u03c3s_2313_ = lean_ctor_get(v_goal_2293_, 1);
v_hyps_2314_ = lean_ctor_get(v_goal_2293_, 2);
v_target_2315_ = lean_ctor_get(v_goal_2293_, 3);
v_isSharedCheck_2340_ = !lean_is_exclusive(v_goal_2293_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2317_ = v_goal_2293_;
v_isShared_2318_ = v_isSharedCheck_2340_;
goto v_resetjp_2316_;
}
else
{
lean_inc(v_target_2315_);
lean_inc(v_hyps_2314_);
lean_inc(v_00_u03c3s_2313_);
lean_inc(v_u_2312_);
lean_dec(v_goal_2293_);
v___x_2317_ = lean_box(0);
v_isShared_2318_ = v_isSharedCheck_2340_;
goto v_resetjp_2316_;
}
v_resetjp_2316_:
{
lean_object* v_p_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; lean_object* v___x_2326_; 
v_p_2319_ = lean_ctor_get(v_val_2311_, 2);
lean_inc_ref(v_p_2319_);
lean_dec(v_val_2311_);
v___x_2320_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4));
v___x_2321_ = lean_box(0);
lean_inc(v_u_2312_);
v___x_2322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2322_, 0, v_u_2312_);
lean_ctor_set(v___x_2322_, 1, v___x_2321_);
lean_inc_ref(v___x_2322_);
v___x_2323_ = l_Lean_mkConst(v___x_2320_, v___x_2322_);
lean_inc_ref(v_target_2315_);
lean_inc_ref_n(v_00_u03c3s_2313_, 2);
v___x_2324_ = l_Lean_mkApp3(v___x_2323_, v_00_u03c3s_2313_, v_p_2319_, v_target_2315_);
lean_inc_ref(v_restHyps_2308_);
if (v_isShared_2318_ == 0)
{
lean_ctor_set(v___x_2317_, 3, v___x_2324_);
lean_ctor_set(v___x_2317_, 2, v_restHyps_2308_);
v___x_2326_ = v___x_2317_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_u_2312_);
lean_ctor_set(v_reuseFailAlloc_2339_, 1, v_00_u03c3s_2313_);
lean_ctor_set(v_reuseFailAlloc_2339_, 2, v_restHyps_2308_);
lean_ctor_set(v_reuseFailAlloc_2339_, 3, v___x_2324_);
v___x_2326_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
lean_object* v___x_2327_; 
lean_inc(v___y_2303_);
lean_inc_ref(v___y_2302_);
lean_inc(v___y_2301_);
lean_inc_ref(v___y_2300_);
lean_inc(v___y_2299_);
lean_inc_ref(v___y_2298_);
lean_inc(v___y_2297_);
lean_inc_ref(v___y_2296_);
v___x_2327_ = lean_apply_10(v_k_2295_, v___x_2326_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, lean_box(0));
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v_a_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2338_; 
v_a_2328_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2338_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2338_ == 0)
{
v___x_2330_ = v___x_2327_;
v_isShared_2331_ = v_isSharedCheck_2338_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_a_2328_);
lean_dec(v___x_2327_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2338_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v_prf_2334_; lean_object* v___x_2336_; 
v___x_2332_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0));
v___x_2333_ = l_Lean_mkConst(v___x_2332_, v___x_2322_);
v_prf_2334_ = l_Lean_mkApp7(v___x_2333_, v_00_u03c3s_2313_, v_hyps_2314_, v_restHyps_2308_, v_focusHyp_2307_, v_target_2315_, v_proof_2309_, v_a_2328_);
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v_prf_2334_);
v___x_2336_ = v___x_2330_;
goto v_reusejp_2335_;
}
else
{
lean_object* v_reuseFailAlloc_2337_; 
v_reuseFailAlloc_2337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2337_, 0, v_prf_2334_);
v___x_2336_ = v_reuseFailAlloc_2337_;
goto v_reusejp_2335_;
}
v_reusejp_2335_:
{
return v___x_2336_;
}
}
}
else
{
lean_dec_ref_known(v___x_2322_, 2);
lean_dec_ref(v_target_2315_);
lean_dec_ref(v_hyps_2314_);
lean_dec_ref(v_00_u03c3s_2313_);
lean_dec_ref(v_proof_2309_);
lean_dec_ref(v_restHyps_2308_);
lean_dec_ref(v_focusHyp_2307_);
return v___x_2327_;
}
}
}
}
else
{
lean_object* v___x_2341_; lean_object* v___x_2342_; 
lean_dec(v___x_2310_);
lean_dec_ref(v_proof_2309_);
lean_dec_ref(v_restHyps_2308_);
lean_dec_ref(v_focusHyp_2307_);
lean_dec_ref(v_k_2295_);
lean_dec_ref(v_goal_2293_);
v___x_2341_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__6);
v___x_2342_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v___x_2341_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_);
return v___x_2342_;
}
}
else
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2350_; 
lean_dec_ref(v_k_2295_);
lean_dec_ref(v_goal_2293_);
v_a_2343_ = lean_ctor_get(v___x_2305_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2345_ = v___x_2305_;
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2305_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2343_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___boxed(lean_object* v_goal_2351_, lean_object* v_ref_2352_, lean_object* v_k_2353_, lean_object* v___y_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(v_goal_2351_, v_ref_2352_, v_k_2353_, v___y_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
lean_dec(v___y_2361_);
lean_dec_ref(v___y_2360_);
lean_dec(v___y_2359_);
lean_dec_ref(v___y_2358_);
lean_dec(v___y_2357_);
lean_dec_ref(v___y_2356_);
lean_dec(v___y_2355_);
lean_dec_ref(v___y_2354_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3(lean_object* v___x_2364_, lean_object* v_val_2365_, lean_object* v_h_2366_, lean_object* v_a_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v___x_2377_; lean_object* v___f_2378_; lean_object* v___x_2379_; 
v___x_2377_ = lean_st_mk_ref(v___x_2364_);
lean_inc(v___x_2377_);
v___f_2378_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2378_, 0, v___x_2377_);
v___x_2379_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(v_val_2365_, v_h_2366_, v___f_2378_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v___x_2379_, 1);
v___x_2381_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_a_2367_, v_a_2380_, v___y_2373_);
lean_dec_ref(v___x_2381_);
v___x_2382_ = lean_st_ref_get(v___x_2377_);
lean_dec(v___x_2377_);
v___x_2383_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2382_, v___y_2369_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_);
return v___x_2383_;
}
else
{
lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
lean_dec(v___x_2377_);
lean_dec(v_a_2367_);
v_a_2384_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2379_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_dec(v___x_2379_);
v___x_2386_ = lean_box(0);
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
v_resetjp_2385_:
{
lean_object* v___x_2389_; 
if (v_isShared_2387_ == 0)
{
v___x_2389_ = v___x_2386_;
goto v_reusejp_2388_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2384_);
v___x_2389_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2388_;
}
v_reusejp_2388_:
{
return v___x_2389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3___boxed(lean_object* v___x_2392_, lean_object* v_val_2393_, lean_object* v_h_2394_, lean_object* v_a_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3(v___x_2392_, v_val_2393_, v_h_2394_, v_a_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v___y_2399_);
lean_dec_ref(v___y_2398_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(lean_object* v_msg_2406_, lean_object* v___y_2407_, lean_object* v___y_2408_, lean_object* v___y_2409_, lean_object* v___y_2410_){
_start:
{
lean_object* v_ref_2412_; lean_object* v___x_2413_; lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2422_; 
v_ref_2412_ = lean_ctor_get(v___y_2409_, 5);
v___x_2413_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(v_msg_2406_, v___y_2407_, v___y_2408_, v___y_2409_, v___y_2410_);
v_a_2414_ = lean_ctor_get(v___x_2413_, 0);
v_isSharedCheck_2422_ = !lean_is_exclusive(v___x_2413_);
if (v_isSharedCheck_2422_ == 0)
{
v___x_2416_ = v___x_2413_;
v_isShared_2417_ = v_isSharedCheck_2422_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2413_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2422_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2418_; lean_object* v___x_2420_; 
lean_inc(v_ref_2412_);
v___x_2418_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2418_, 0, v_ref_2412_);
lean_ctor_set(v___x_2418_, 1, v_a_2414_);
if (v_isShared_2417_ == 0)
{
lean_ctor_set_tag(v___x_2416_, 1);
lean_ctor_set(v___x_2416_, 0, v___x_2418_);
v___x_2420_ = v___x_2416_;
goto v_reusejp_2419_;
}
else
{
lean_object* v_reuseFailAlloc_2421_; 
v_reuseFailAlloc_2421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2421_, 0, v___x_2418_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg___boxed(lean_object* v_msg_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_){
_start:
{
lean_object* v_res_2429_; 
v_res_2429_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(v_msg_2423_, v___y_2424_, v___y_2425_, v___y_2426_, v___y_2427_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
lean_dec(v___y_2425_);
lean_dec_ref(v___y_2424_);
return v_res_2429_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11(void){
_start:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10));
v___x_2455_ = l_Lean_stringToMessageData(v___x_2454_);
return v___x_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert(lean_object* v_x_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_){
_start:
{
lean_object* v___y_2467_; lean_object* v___y_2468_; lean_object* v___y_2469_; lean_object* v___y_2470_; lean_object* v___y_2471_; lean_object* v___y_2472_; lean_object* v___y_2473_; lean_object* v___y_2474_; lean_object* v___y_2475_; lean_object* v___y_2476_; lean_object* v___y_2477_; lean_object* v___x_2481_; uint8_t v___x_2482_; 
v___x_2481_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3));
lean_inc(v_x_2456_);
v___x_2482_ = l_Lean_Syntax_isOfKind(v_x_2456_, v___x_2481_);
if (v___x_2482_ == 0)
{
lean_object* v___x_2483_; 
lean_dec(v_x_2456_);
v___x_2483_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2483_;
}
else
{
lean_object* v___x_2484_; lean_object* v_n_2486_; lean_object* v___y_2487_; lean_object* v___y_2488_; lean_object* v___y_2489_; lean_object* v___y_2490_; lean_object* v___y_2491_; lean_object* v___y_2492_; lean_object* v___y_2493_; lean_object* v___y_2494_; lean_object* v___x_2511_; uint8_t v___x_2512_; 
v___x_2484_ = lean_unsigned_to_nat(1u);
v___x_2511_ = l_Lean_Syntax_getArg(v_x_2456_, v___x_2484_);
lean_dec(v_x_2456_);
lean_inc(v___x_2511_);
v___x_2512_ = l_Lean_Syntax_matchesNull(v___x_2511_, v___x_2484_);
if (v___x_2512_ == 0)
{
lean_object* v___x_2513_; 
lean_dec(v___x_2511_);
v___x_2513_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2513_;
}
else
{
lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; uint8_t v___x_2517_; 
v___x_2514_ = lean_unsigned_to_nat(0u);
v___x_2515_ = l_Lean_Syntax_getArg(v___x_2511_, v___x_2514_);
lean_dec(v___x_2511_);
v___x_2516_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5));
lean_inc(v___x_2515_);
v___x_2517_ = l_Lean_Syntax_isOfKind(v___x_2515_, v___x_2516_);
if (v___x_2517_ == 0)
{
lean_object* v___x_2518_; uint8_t v___x_2519_; 
v___x_2518_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7));
lean_inc(v___x_2515_);
v___x_2519_ = l_Lean_Syntax_isOfKind(v___x_2515_, v___x_2518_);
if (v___x_2519_ == 0)
{
lean_object* v___x_2520_; 
lean_dec(v___x_2515_);
v___x_2520_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2520_;
}
else
{
lean_object* v___x_2521_; uint8_t v___x_2522_; 
v___x_2521_ = l_Lean_Syntax_getArg(v___x_2515_, v___x_2484_);
lean_dec(v___x_2515_);
v___x_2522_ = l_Lean_Syntax_isNone(v___x_2521_);
if (v___x_2522_ == 0)
{
uint8_t v___x_2523_; 
lean_inc(v___x_2521_);
v___x_2523_ = l_Lean_Syntax_matchesNull(v___x_2521_, v___x_2484_);
if (v___x_2523_ == 0)
{
lean_object* v___x_2524_; 
lean_dec(v___x_2521_);
v___x_2524_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2524_;
}
else
{
lean_object* v_n_2525_; lean_object* v___x_2526_; 
v_n_2525_ = l_Lean_Syntax_getArg(v___x_2521_, v___x_2514_);
lean_dec(v___x_2521_);
v___x_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2526_, 0, v_n_2525_);
v_n_2486_ = v___x_2526_;
v___y_2487_ = v_a_2457_;
v___y_2488_ = v_a_2458_;
v___y_2489_ = v_a_2459_;
v___y_2490_ = v_a_2460_;
v___y_2491_ = v_a_2461_;
v___y_2492_ = v_a_2462_;
v___y_2493_ = v_a_2463_;
v___y_2494_ = v_a_2464_;
goto v___jp_2485_;
}
}
else
{
lean_object* v___x_2527_; 
lean_dec(v___x_2521_);
v___x_2527_ = lean_box(0);
v_n_2486_ = v___x_2527_;
v___y_2487_ = v_a_2457_;
v___y_2488_ = v_a_2458_;
v___y_2489_ = v_a_2459_;
v___y_2490_ = v_a_2460_;
v___y_2491_ = v_a_2461_;
v___y_2492_ = v_a_2462_;
v___y_2493_ = v_a_2463_;
v___y_2494_ = v_a_2464_;
goto v___jp_2485_;
}
}
}
else
{
lean_object* v_h_2528_; lean_object* v___x_2529_; uint8_t v___x_2530_; 
v_h_2528_ = l_Lean_Syntax_getArg(v___x_2515_, v___x_2514_);
lean_dec(v___x_2515_);
v___x_2529_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9));
lean_inc(v_h_2528_);
v___x_2530_ = l_Lean_Syntax_isOfKind(v_h_2528_, v___x_2529_);
if (v___x_2530_ == 0)
{
lean_object* v___x_2531_; 
lean_dec(v_h_2528_);
v___x_2531_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2531_;
}
else
{
lean_object* v___x_2532_; 
v___x_2532_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_2458_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_);
if (lean_obj_tag(v___x_2532_) == 0)
{
lean_object* v_a_2533_; lean_object* v___x_2534_; 
v_a_2533_ = lean_ctor_get(v___x_2532_, 0);
lean_inc_n(v_a_2533_, 2);
lean_dec_ref_known(v___x_2532_, 1);
v___x_2534_ = l_Lean_MVarId_getType(v_a_2533_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_object* v_a_2535_; lean_object* v___x_2536_; 
v_a_2535_ = lean_ctor_get(v___x_2534_, 0);
lean_inc(v_a_2535_);
lean_dec_ref_known(v___x_2534_, 1);
v___x_2536_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_2535_);
lean_dec(v_a_2535_);
if (lean_obj_tag(v___x_2536_) == 1)
{
lean_object* v_val_2537_; lean_object* v___x_2538_; lean_object* v___f_2539_; lean_object* v___x_2540_; 
v_val_2537_ = lean_ctor_get(v___x_2536_, 0);
lean_inc(v_val_2537_);
lean_dec_ref_known(v___x_2536_, 1);
v___x_2538_ = lean_box(0);
lean_inc(v_a_2533_);
v___f_2539_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3___boxed), 13, 4);
lean_closure_set(v___f_2539_, 0, v___x_2538_);
lean_closure_set(v___f_2539_, 1, v_val_2537_);
lean_closure_set(v___f_2539_, 2, v_h_2528_);
lean_closure_set(v___f_2539_, 3, v_a_2533_);
v___x_2540_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v_a_2533_, v___f_2539_, v_a_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_);
return v___x_2540_;
}
else
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
lean_dec(v___x_2536_);
lean_dec(v_a_2533_);
lean_dec(v_h_2528_);
v___x_2541_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11);
v___x_2542_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(v___x_2541_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_);
return v___x_2542_;
}
}
else
{
lean_object* v_a_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2550_; 
lean_dec(v_a_2533_);
lean_dec(v_h_2528_);
v_a_2543_ = lean_ctor_get(v___x_2534_, 0);
v_isSharedCheck_2550_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2550_ == 0)
{
v___x_2545_ = v___x_2534_;
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_a_2543_);
lean_dec(v___x_2534_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2550_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2548_; 
if (v_isShared_2546_ == 0)
{
v___x_2548_ = v___x_2545_;
goto v_reusejp_2547_;
}
else
{
lean_object* v_reuseFailAlloc_2549_; 
v_reuseFailAlloc_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2549_, 0, v_a_2543_);
v___x_2548_ = v_reuseFailAlloc_2549_;
goto v_reusejp_2547_;
}
v_reusejp_2547_:
{
return v___x_2548_;
}
}
}
}
else
{
lean_object* v_a_2551_; lean_object* v___x_2553_; uint8_t v_isShared_2554_; uint8_t v_isSharedCheck_2558_; 
lean_dec(v_h_2528_);
v_a_2551_ = lean_ctor_get(v___x_2532_, 0);
v_isSharedCheck_2558_ = !lean_is_exclusive(v___x_2532_);
if (v_isSharedCheck_2558_ == 0)
{
v___x_2553_ = v___x_2532_;
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
else
{
lean_inc(v_a_2551_);
lean_dec(v___x_2532_);
v___x_2553_ = lean_box(0);
v_isShared_2554_ = v_isSharedCheck_2558_;
goto v_resetjp_2552_;
}
v_resetjp_2552_:
{
lean_object* v___x_2556_; 
if (v_isShared_2554_ == 0)
{
v___x_2556_ = v___x_2553_;
goto v_reusejp_2555_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v_a_2551_);
v___x_2556_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2555_;
}
v_reusejp_2555_:
{
return v___x_2556_;
}
}
}
}
}
}
v___jp_2485_:
{
lean_object* v___x_2495_; 
v___x_2495_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v___y_2488_, v___y_2491_, v___y_2492_, v___y_2493_, v___y_2494_);
if (lean_obj_tag(v___x_2495_) == 0)
{
lean_object* v_a_2496_; 
v_a_2496_ = lean_ctor_get(v___x_2495_, 0);
lean_inc(v_a_2496_);
lean_dec_ref_known(v___x_2495_, 1);
if (lean_obj_tag(v_n_2486_) == 0)
{
lean_object* v_fst_2497_; lean_object* v_snd_2498_; 
v_fst_2497_ = lean_ctor_get(v_a_2496_, 0);
lean_inc(v_fst_2497_);
v_snd_2498_ = lean_ctor_get(v_a_2496_, 1);
lean_inc(v_snd_2498_);
lean_dec(v_a_2496_);
v___y_2467_ = v_snd_2498_;
v___y_2468_ = v_fst_2497_;
v___y_2469_ = v___y_2493_;
v___y_2470_ = v___y_2490_;
v___y_2471_ = v___y_2488_;
v___y_2472_ = v___y_2487_;
v___y_2473_ = v___y_2492_;
v___y_2474_ = v___y_2489_;
v___y_2475_ = v___y_2494_;
v___y_2476_ = v___y_2491_;
v___y_2477_ = v___x_2484_;
goto v___jp_2466_;
}
else
{
lean_object* v_fst_2499_; lean_object* v_snd_2500_; lean_object* v_val_2501_; lean_object* v___x_2502_; 
v_fst_2499_ = lean_ctor_get(v_a_2496_, 0);
lean_inc(v_fst_2499_);
v_snd_2500_ = lean_ctor_get(v_a_2496_, 1);
lean_inc(v_snd_2500_);
lean_dec(v_a_2496_);
v_val_2501_ = lean_ctor_get(v_n_2486_, 0);
lean_inc(v_val_2501_);
lean_dec_ref_known(v_n_2486_, 1);
v___x_2502_ = l_Lean_TSyntax_getNat(v_val_2501_);
lean_dec(v_val_2501_);
v___y_2467_ = v_snd_2500_;
v___y_2468_ = v_fst_2499_;
v___y_2469_ = v___y_2493_;
v___y_2470_ = v___y_2490_;
v___y_2471_ = v___y_2488_;
v___y_2472_ = v___y_2487_;
v___y_2473_ = v___y_2492_;
v___y_2474_ = v___y_2489_;
v___y_2475_ = v___y_2494_;
v___y_2476_ = v___y_2491_;
v___y_2477_ = v___x_2502_;
goto v___jp_2466_;
}
}
else
{
lean_object* v_a_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2510_; 
lean_dec(v_n_2486_);
v_a_2503_ = lean_ctor_get(v___x_2495_, 0);
v_isSharedCheck_2510_ = !lean_is_exclusive(v___x_2495_);
if (v_isSharedCheck_2510_ == 0)
{
v___x_2505_ = v___x_2495_;
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_a_2503_);
lean_dec(v___x_2495_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2510_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2508_; 
if (v_isShared_2506_ == 0)
{
v___x_2508_ = v___x_2505_;
goto v_reusejp_2507_;
}
else
{
lean_object* v_reuseFailAlloc_2509_; 
v_reuseFailAlloc_2509_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2509_, 0, v_a_2503_);
v___x_2508_ = v_reuseFailAlloc_2509_;
goto v_reusejp_2507_;
}
v_reusejp_2507_:
{
return v___x_2508_;
}
}
}
}
}
v___jp_2466_:
{
lean_object* v___x_2478_; lean_object* v___f_2479_; lean_object* v___x_2480_; 
v___x_2478_ = lean_box(0);
lean_inc(v___y_2468_);
v___f_2479_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___boxed), 13, 4);
lean_closure_set(v___f_2479_, 0, v___x_2478_);
lean_closure_set(v___f_2479_, 1, v___y_2467_);
lean_closure_set(v___f_2479_, 2, v___y_2477_);
lean_closure_set(v___f_2479_, 3, v___y_2468_);
v___x_2480_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v___y_2468_, v___f_2479_, v___y_2472_, v___y_2471_, v___y_2474_, v___y_2470_, v___y_2476_, v___y_2473_, v___y_2469_, v___y_2475_);
return v___x_2480_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___boxed(lean_object* v_x_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert(v_x_2559_, v_a_2560_, v_a_2561_, v_a_2562_, v_a_2563_, v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_);
lean_dec(v_a_2567_);
lean_dec_ref(v_a_2566_);
lean_dec(v_a_2565_);
lean_dec_ref(v_a_2564_);
lean_dec(v_a_2563_);
lean_dec_ref(v_a_2562_);
lean_dec(v_a_2561_);
lean_dec_ref(v_a_2560_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2(lean_object* v_mvarId_2570_, lean_object* v_val_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_){
_start:
{
lean_object* v___x_2581_; 
v___x_2581_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_mvarId_2570_, v_val_2571_, v___y_2577_);
return v___x_2581_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___boxed(lean_object* v_mvarId_2582_, lean_object* v_val_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2(v_mvarId_2582_, v_val_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
lean_dec(v___y_2585_);
lean_dec_ref(v___y_2584_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5(lean_object* v_00_u03b1_2594_, lean_object* v_msg_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; 
v___x_2605_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(v_msg_2595_, v___y_2600_, v___y_2601_, v___y_2602_, v___y_2603_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___boxed(lean_object* v_00_u03b1_2606_, lean_object* v_msg_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_){
_start:
{
lean_object* v_res_2617_; 
v_res_2617_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5(v_00_u03b1_2606_, v_msg_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_);
lean_dec(v___y_2615_);
lean_dec_ref(v___y_2614_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec(v___y_2611_);
lean_dec_ref(v___y_2610_);
lean_dec(v___y_2609_);
lean_dec_ref(v___y_2608_);
return v_res_2617_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1(lean_object* v_inst_2618_, lean_object* v_R_2619_, lean_object* v_a_2620_, lean_object* v_b_2621_){
_start:
{
lean_object* v___x_2622_; 
v___x_2622_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(v_a_2620_, v_b_2621_);
return v___x_2622_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2(size_t v_sz_2623_, size_t v_i_2624_, lean_object* v_bs_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v___x_2635_; 
v___x_2635_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(v_sz_2623_, v_i_2624_, v_bs_2625_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_);
return v___x_2635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___boxed(lean_object* v_sz_2636_, lean_object* v_i_2637_, lean_object* v_bs_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
size_t v_sz_boxed_2648_; size_t v_i_boxed_2649_; lean_object* v_res_2650_; 
v_sz_boxed_2648_ = lean_unbox_usize(v_sz_2636_);
lean_dec(v_sz_2636_);
v_i_boxed_2649_ = lean_unbox_usize(v_i_2637_);
lean_dec(v_i_2637_);
v_res_2650_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2(v_sz_boxed_2648_, v_i_boxed_2649_, v_bs_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
lean_dec(v___y_2642_);
lean_dec_ref(v___y_2641_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
return v_res_2650_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4(lean_object* v_as_2651_, lean_object* v_i_2652_, lean_object* v_j_2653_, lean_object* v_inv_2654_, lean_object* v_bs_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_){
_start:
{
lean_object* v___x_2665_; 
v___x_2665_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(v_as_2651_, v_i_2652_, v_j_2653_, v_bs_2655_, v___y_2662_, v___y_2663_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___boxed(lean_object* v_as_2666_, lean_object* v_i_2667_, lean_object* v_j_2668_, lean_object* v_inv_2669_, lean_object* v_bs_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_, lean_object* v___y_2677_, lean_object* v___y_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v_res_2680_; 
v_res_2680_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4(v_as_2666_, v_i_2667_, v_j_2668_, v_inv_2669_, v_bs_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_, v___y_2677_, v___y_2678_);
lean_dec(v___y_2678_);
lean_dec_ref(v___y_2677_);
lean_dec(v___y_2676_);
lean_dec_ref(v___y_2675_);
lean_dec(v___y_2674_);
lean_dec_ref(v___y_2673_);
lean_dec(v___y_2672_);
lean_dec_ref(v___y_2671_);
lean_dec_ref(v_as_2666_);
return v_res_2680_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8(lean_object* v_00_u03b1_2681_, lean_object* v_msg_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_){
_start:
{
lean_object* v___x_2688_; 
v___x_2688_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v_msg_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___boxed(lean_object* v_00_u03b1_2689_, lean_object* v_msg_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_){
_start:
{
lean_object* v_res_2696_; 
v_res_2696_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8(v_00_u03b1_2689_, v_msg_2690_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
return v_res_2696_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10(lean_object* v_00_u03b2_2697_, lean_object* v_x_2698_, lean_object* v_x_2699_, lean_object* v_x_2700_){
_start:
{
lean_object* v___x_2701_; 
v___x_2701_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(v_x_2698_, v_x_2699_, v_x_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14(lean_object* v_00_u03b2_2702_, lean_object* v_x_2703_, size_t v_x_2704_, size_t v_x_2705_, lean_object* v_x_2706_, lean_object* v_x_2707_){
_start:
{
lean_object* v___x_2708_; 
v___x_2708_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___redArg(v_x_2703_, v_x_2704_, v_x_2705_, v_x_2706_, v_x_2707_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14___boxed(lean_object* v_00_u03b2_2709_, lean_object* v_x_2710_, lean_object* v_x_2711_, lean_object* v_x_2712_, lean_object* v_x_2713_, lean_object* v_x_2714_){
_start:
{
size_t v_x_22757__boxed_2715_; size_t v_x_22758__boxed_2716_; lean_object* v_res_2717_; 
v_x_22757__boxed_2715_ = lean_unbox_usize(v_x_2711_);
lean_dec(v_x_2711_);
v_x_22758__boxed_2716_ = lean_unbox_usize(v_x_2712_);
lean_dec(v_x_2712_);
v_res_2717_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14(v_00_u03b2_2709_, v_x_2710_, v_x_22757__boxed_2715_, v_x_22758__boxed_2716_, v_x_2713_, v_x_2714_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20(lean_object* v_00_u03b2_2718_, lean_object* v_n_2719_, lean_object* v_k_2720_, lean_object* v_v_2721_){
_start:
{
lean_object* v___x_2722_; 
v___x_2722_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20___redArg(v_n_2719_, v_k_2720_, v_v_2721_);
return v___x_2722_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21(lean_object* v_00_u03b2_2723_, size_t v_depth_2724_, lean_object* v_keys_2725_, lean_object* v_vals_2726_, lean_object* v_heq_2727_, lean_object* v_i_2728_, lean_object* v_entries_2729_){
_start:
{
lean_object* v___x_2730_; 
v___x_2730_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___redArg(v_depth_2724_, v_keys_2725_, v_vals_2726_, v_i_2728_, v_entries_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21___boxed(lean_object* v_00_u03b2_2731_, lean_object* v_depth_2732_, lean_object* v_keys_2733_, lean_object* v_vals_2734_, lean_object* v_heq_2735_, lean_object* v_i_2736_, lean_object* v_entries_2737_){
_start:
{
size_t v_depth_boxed_2738_; lean_object* v_res_2739_; 
v_depth_boxed_2738_ = lean_unbox_usize(v_depth_2732_);
lean_dec(v_depth_2732_);
v_res_2739_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__21(v_00_u03b2_2731_, v_depth_boxed_2738_, v_keys_2733_, v_vals_2734_, v_heq_2735_, v_i_2736_, v_entries_2737_);
lean_dec_ref(v_vals_2734_);
lean_dec_ref(v_keys_2733_);
return v_res_2739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21(lean_object* v_00_u03b1_2740_, lean_object* v_name_2741_, uint8_t v_bi_2742_, lean_object* v_type_2743_, lean_object* v_k_2744_, uint8_t v_kind_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_){
_start:
{
lean_object* v___x_2755_; 
v___x_2755_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___redArg(v_name_2741_, v_bi_2742_, v_type_2743_, v_k_2744_, v_kind_2745_, v___y_2746_, v___y_2747_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21___boxed(lean_object* v_00_u03b1_2756_, lean_object* v_name_2757_, lean_object* v_bi_2758_, lean_object* v_type_2759_, lean_object* v_k_2760_, lean_object* v_kind_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_){
_start:
{
uint8_t v_bi_boxed_2771_; uint8_t v_kind_boxed_2772_; lean_object* v_res_2773_; 
v_bi_boxed_2771_ = lean_unbox(v_bi_2758_);
v_kind_boxed_2772_ = lean_unbox(v_kind_2761_);
v_res_2773_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8_spec__14_spec__19_spec__21(v_00_u03b1_2756_, v_name_2757_, v_bi_boxed_2771_, v_type_2759_, v_k_2760_, v_kind_boxed_2772_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_);
lean_dec(v___y_2769_);
lean_dec_ref(v___y_2768_);
lean_dec(v___y_2767_);
lean_dec_ref(v___y_2766_);
lean_dec(v___y_2765_);
lean_dec_ref(v___y_2764_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
return v_res_2773_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22(lean_object* v_00_u03b2_2774_, lean_object* v_x_2775_, lean_object* v_x_2776_, lean_object* v_x_2777_, lean_object* v_x_2778_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__14_spec__20_spec__22___redArg(v_x_2775_, v_x_2776_, v_x_2777_, v_x_2778_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0(lean_object* v___x_2790_, lean_object* v_l_2791_, lean_object* v_cl_2792_, lean_object* v_hyps_2793_, lean_object* v_restHyps_2794_, lean_object* v_focusHyp_2795_, lean_object* v_target_2796_, lean_object* v_proof_2797_, lean_object* v_prf_2798_, lean_object* v_toPure_2799_, lean_object* v_frameInst_2800_){
_start:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v_prf_2803_; lean_object* v___x_2804_; 
v___x_2801_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2));
v___x_2802_ = l_Lean_mkConst(v___x_2801_, v___x_2790_);
v_prf_2803_ = l_Lean_mkApp9(v___x_2802_, v_l_2791_, v_cl_2792_, v_frameInst_2800_, v_hyps_2793_, v_restHyps_2794_, v_focusHyp_2795_, v_target_2796_, v_proof_2797_, v_prf_2798_);
v___x_2804_ = lean_apply_2(v_toPure_2799_, lean_box(0), v_prf_2803_);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__1(lean_object* v___x_2806_, lean_object* v_l_2807_, lean_object* v_cl_2808_, lean_object* v_hyps_2809_, lean_object* v_restHyps_2810_, lean_object* v_focusHyp_2811_, lean_object* v_target_2812_, lean_object* v_proof_2813_, lean_object* v_toPure_2814_, lean_object* v___x_2815_, lean_object* v___x_2816_, lean_object* v_inst_2817_, lean_object* v_toBind_2818_, lean_object* v_prf_2819_){
_start:
{
lean_object* v___f_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; 
lean_inc_ref(v_cl_2808_);
lean_inc_ref(v_l_2807_);
lean_inc(v___x_2806_);
v___f_2820_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0), 11, 10);
lean_closure_set(v___f_2820_, 0, v___x_2806_);
lean_closure_set(v___f_2820_, 1, v_l_2807_);
lean_closure_set(v___f_2820_, 2, v_cl_2808_);
lean_closure_set(v___f_2820_, 3, v_hyps_2809_);
lean_closure_set(v___f_2820_, 4, v_restHyps_2810_);
lean_closure_set(v___f_2820_, 5, v_focusHyp_2811_);
lean_closure_set(v___f_2820_, 6, v_target_2812_);
lean_closure_set(v___f_2820_, 7, v_proof_2813_);
lean_closure_set(v___f_2820_, 8, v_prf_2819_);
lean_closure_set(v___f_2820_, 9, v_toPure_2814_);
v___x_2821_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__1___closed__0));
v___x_2822_ = l_Lean_Name_mkStr3(v___x_2815_, v___x_2816_, v___x_2821_);
v___x_2823_ = l_Lean_mkConst(v___x_2822_, v___x_2806_);
v___x_2824_ = l_Lean_mkAppB(v___x_2823_, v_l_2807_, v_cl_2808_);
v___x_2825_ = lean_box(0);
v___x_2826_ = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance___boxed), 7, 2);
lean_closure_set(v___x_2826_, 0, v___x_2824_);
lean_closure_set(v___x_2826_, 1, v___x_2825_);
v___x_2827_ = lean_apply_2(v_inst_2817_, lean_box(0), v___x_2826_);
v___x_2828_ = lean_apply_4(v_toBind_2818_, lean_box(0), lean_box(0), v___x_2827_, v___f_2820_);
return v___x_2828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2(lean_object* v_goal_2835_, lean_object* v_toPure_2836_, lean_object* v_inst_2837_, lean_object* v_toBind_2838_, lean_object* v_k_2839_, lean_object* v_res_2840_){
_start:
{
lean_object* v_u_2841_; lean_object* v_l_2842_; lean_object* v_cl_2843_; lean_object* v_hyps_2844_; lean_object* v_target_2845_; lean_object* v___x_2847_; uint8_t v_isShared_2848_; uint8_t v_isSharedCheck_2869_; 
v_u_2841_ = lean_ctor_get(v_goal_2835_, 0);
v_l_2842_ = lean_ctor_get(v_goal_2835_, 1);
v_cl_2843_ = lean_ctor_get(v_goal_2835_, 2);
v_hyps_2844_ = lean_ctor_get(v_goal_2835_, 3);
v_target_2845_ = lean_ctor_get(v_goal_2835_, 4);
v_isSharedCheck_2869_ = !lean_is_exclusive(v_goal_2835_);
if (v_isSharedCheck_2869_ == 0)
{
v___x_2847_ = v_goal_2835_;
v_isShared_2848_ = v_isSharedCheck_2869_;
goto v_resetjp_2846_;
}
else
{
lean_inc(v_target_2845_);
lean_inc(v_hyps_2844_);
lean_inc(v_cl_2843_);
lean_inc(v_l_2842_);
lean_inc(v_u_2841_);
lean_dec(v_goal_2835_);
v___x_2847_ = lean_box(0);
v_isShared_2848_ = v_isSharedCheck_2869_;
goto v_resetjp_2846_;
}
v_resetjp_2846_:
{
lean_object* v_focusHyp_2849_; lean_object* v_restHyps_2850_; lean_object* v_proof_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___y_2856_; lean_object* v___x_2867_; 
v_focusHyp_2849_ = lean_ctor_get(v_res_2840_, 0);
lean_inc_ref(v_focusHyp_2849_);
v_restHyps_2850_ = lean_ctor_get(v_res_2840_, 1);
lean_inc_ref(v_restHyps_2850_);
v_proof_2851_ = lean_ctor_get(v_res_2840_, 2);
lean_inc_ref(v_proof_2851_);
lean_dec_ref(v_res_2840_);
v___x_2852_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0));
v___x_2853_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__0));
v___x_2854_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__2));
v___x_2867_ = l_Lean_Level_dec(v_u_2841_);
if (lean_obj_tag(v___x_2867_) == 0)
{
lean_inc(v_u_2841_);
v___y_2856_ = v_u_2841_;
goto v___jp_2855_;
}
else
{
lean_object* v_val_2868_; 
v_val_2868_ = lean_ctor_get(v___x_2867_, 0);
lean_inc(v_val_2868_);
lean_dec_ref_known(v___x_2867_, 1);
v___y_2856_ = v_val_2868_;
goto v___jp_2855_;
}
v___jp_2855_:
{
lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___f_2859_; lean_object* v___x_2860_; lean_object* v_himpTarget_2861_; lean_object* v___x_2863_; 
v___x_2857_ = lean_box(0);
v___x_2858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2858_, 0, v___y_2856_);
lean_ctor_set(v___x_2858_, 1, v___x_2857_);
lean_inc(v_toBind_2838_);
lean_inc_ref(v_target_2845_);
lean_inc_ref(v_focusHyp_2849_);
lean_inc_ref(v_restHyps_2850_);
lean_inc_ref_n(v_cl_2843_, 2);
lean_inc_ref_n(v_l_2842_, 2);
lean_inc_ref(v___x_2858_);
v___f_2859_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__1), 14, 13);
lean_closure_set(v___f_2859_, 0, v___x_2858_);
lean_closure_set(v___f_2859_, 1, v_l_2842_);
lean_closure_set(v___f_2859_, 2, v_cl_2843_);
lean_closure_set(v___f_2859_, 3, v_hyps_2844_);
lean_closure_set(v___f_2859_, 4, v_restHyps_2850_);
lean_closure_set(v___f_2859_, 5, v_focusHyp_2849_);
lean_closure_set(v___f_2859_, 6, v_target_2845_);
lean_closure_set(v___f_2859_, 7, v_proof_2851_);
lean_closure_set(v___f_2859_, 8, v_toPure_2836_);
lean_closure_set(v___f_2859_, 9, v___x_2852_);
lean_closure_set(v___f_2859_, 10, v___x_2853_);
lean_closure_set(v___f_2859_, 11, v_inst_2837_);
lean_closure_set(v___f_2859_, 12, v_toBind_2838_);
v___x_2860_ = l_Lean_mkConst(v___x_2854_, v___x_2858_);
v_himpTarget_2861_ = l_Lean_mkApp4(v___x_2860_, v_l_2842_, v_cl_2843_, v_focusHyp_2849_, v_target_2845_);
if (v_isShared_2848_ == 0)
{
lean_ctor_set(v___x_2847_, 4, v_himpTarget_2861_);
lean_ctor_set(v___x_2847_, 3, v_restHyps_2850_);
v___x_2863_ = v___x_2847_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_u_2841_);
lean_ctor_set(v_reuseFailAlloc_2866_, 1, v_l_2842_);
lean_ctor_set(v_reuseFailAlloc_2866_, 2, v_cl_2843_);
lean_ctor_set(v_reuseFailAlloc_2866_, 3, v_restHyps_2850_);
lean_ctor_set(v_reuseFailAlloc_2866_, 4, v_himpTarget_2861_);
v___x_2863_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
lean_object* v___x_2864_; lean_object* v___x_2865_; 
v___x_2864_ = lean_apply_1(v_k_2839_, v___x_2863_);
v___x_2865_ = lean_apply_4(v_toBind_2838_, lean_box(0), lean_box(0), v___x_2864_, v___f_2859_);
return v___x_2865_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg(lean_object* v_inst_2870_, lean_object* v_inst_2871_, lean_object* v_goal_2872_, lean_object* v_ref_2873_, lean_object* v_k_2874_){
_start:
{
lean_object* v_toApplicative_2875_; lean_object* v_toBind_2876_; lean_object* v_toPure_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___f_2880_; lean_object* v___x_2881_; 
v_toApplicative_2875_ = lean_ctor_get(v_inst_2870_, 0);
lean_inc_ref(v_toApplicative_2875_);
v_toBind_2876_ = lean_ctor_get(v_inst_2870_, 1);
lean_inc_n(v_toBind_2876_, 2);
lean_dec_ref(v_inst_2870_);
v_toPure_2877_ = lean_ctor_get(v_toApplicative_2875_, 1);
lean_inc(v_toPure_2877_);
lean_dec_ref(v_toApplicative_2875_);
lean_inc_ref(v_goal_2872_);
v___x_2878_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHypWithInfo___boxed), 7, 2);
lean_closure_set(v___x_2878_, 0, v_goal_2872_);
lean_closure_set(v___x_2878_, 1, v_ref_2873_);
lean_inc(v_inst_2871_);
v___x_2879_ = lean_apply_2(v_inst_2871_, lean_box(0), v___x_2878_);
v___f_2880_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2), 6, 5);
lean_closure_set(v___f_2880_, 0, v_goal_2872_);
lean_closure_set(v___f_2880_, 1, v_toPure_2877_);
lean_closure_set(v___f_2880_, 2, v_inst_2871_);
lean_closure_set(v___f_2880_, 3, v_toBind_2876_);
lean_closure_set(v___f_2880_, 4, v_k_2874_);
v___x_2881_ = lean_apply_4(v_toBind_2876_, lean_box(0), lean_box(0), v___x_2879_, v___f_2880_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert(lean_object* v_m_2882_, lean_object* v_inst_2883_, lean_object* v_inst_2884_, lean_object* v_goal_2885_, lean_object* v_ref_2886_, lean_object* v_k_2887_){
_start:
{
lean_object* v___x_2888_; 
v___x_2888_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg(v_inst_2883_, v_inst_2884_, v_goal_2885_, v_ref_2886_, v_k_2887_);
return v___x_2888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__3(lean_object* v_x1_2889_, lean_object* v_x2_2890_){
_start:
{
lean_object* v___x_2891_; uint8_t v___x_2892_; lean_object* v___x_2893_; 
v___x_2891_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1));
v___x_2892_ = 0;
v___x_2893_ = l_Lean_Expr_forallE___override(v___x_2891_, v_x1_2889_, v_x2_2890_, v___x_2892_);
return v___x_2893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__5(lean_object* v_hypName_2894_, lean_object* v_uniq_2895_, lean_object* v_toApplicative_2896_, lean_object* v_ss_2897_, lean_object* v_hyps_2898_, uint8_t v___x_2899_, uint8_t v___x_2900_, uint8_t v___x_2901_, lean_object* v_inst_2902_, lean_object* v_toBind_2903_, lean_object* v_____do__lift_2904_){
_start:
{
lean_object* v___x_2905_; lean_object* v_00_u03c6_2906_; lean_object* v___f_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; 
v___x_2905_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2905_, 0, v_hypName_2894_);
lean_ctor_set(v___x_2905_, 1, v_uniq_2895_);
lean_ctor_set(v___x_2905_, 2, v_____do__lift_2904_);
v_00_u03c6_2906_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_2905_);
v___f_2907_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__7), 3, 2);
lean_closure_set(v___f_2907_, 0, v_toApplicative_2896_);
lean_closure_set(v___f_2907_, 1, v_00_u03c6_2906_);
v___x_2908_ = lean_box(v___x_2899_);
v___x_2909_ = lean_box(v___x_2900_);
v___x_2910_ = lean_box(v___x_2899_);
v___x_2911_ = lean_box(v___x_2900_);
v___x_2912_ = lean_box(v___x_2901_);
v___x_2913_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2913_, 0, v_ss_2897_);
lean_closure_set(v___x_2913_, 1, v_hyps_2898_);
lean_closure_set(v___x_2913_, 2, v___x_2908_);
lean_closure_set(v___x_2913_, 3, v___x_2909_);
lean_closure_set(v___x_2913_, 4, v___x_2910_);
lean_closure_set(v___x_2913_, 5, v___x_2911_);
lean_closure_set(v___x_2913_, 6, v___x_2912_);
v___x_2914_ = lean_apply_2(v_inst_2902_, lean_box(0), v___x_2913_);
v___x_2915_ = lean_apply_4(v_toBind_2903_, lean_box(0), lean_box(0), v___x_2914_, v___f_2907_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__5___boxed(lean_object* v_hypName_2916_, lean_object* v_uniq_2917_, lean_object* v_toApplicative_2918_, lean_object* v_ss_2919_, lean_object* v_hyps_2920_, lean_object* v___x_2921_, lean_object* v___x_2922_, lean_object* v___x_2923_, lean_object* v_inst_2924_, lean_object* v_toBind_2925_, lean_object* v_____do__lift_2926_){
_start:
{
uint8_t v___x_1104__boxed_2927_; uint8_t v___x_1105__boxed_2928_; uint8_t v___x_1106__boxed_2929_; lean_object* v_res_2930_; 
v___x_1104__boxed_2927_ = lean_unbox(v___x_2921_);
v___x_1105__boxed_2928_ = lean_unbox(v___x_2922_);
v___x_1106__boxed_2929_ = lean_unbox(v___x_2923_);
v_res_2930_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__5(v_hypName_2916_, v_uniq_2917_, v_toApplicative_2918_, v_ss_2919_, v_hyps_2920_, v___x_1104__boxed_2927_, v___x_1105__boxed_2928_, v___x_1106__boxed_2929_, v_inst_2924_, v_toBind_2925_, v_____do__lift_2926_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__0(lean_object* v_hypName_2931_, lean_object* v_toApplicative_2932_, lean_object* v_ss_2933_, lean_object* v_hyps_2934_, uint8_t v___x_2935_, lean_object* v_inst_2936_, lean_object* v_toBind_2937_, lean_object* v_00_u03c6_2938_, lean_object* v_uniq_2939_){
_start:
{
uint8_t v___x_2940_; uint8_t v___x_2941_; lean_object* v___x_2942_; lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___f_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; 
v___x_2940_ = 1;
v___x_2941_ = 1;
v___x_2942_ = lean_box(v___x_2935_);
v___x_2943_ = lean_box(v___x_2940_);
v___x_2944_ = lean_box(v___x_2941_);
lean_inc(v_toBind_2937_);
lean_inc(v_inst_2936_);
lean_inc_ref(v_ss_2933_);
v___f_2945_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__5___boxed), 11, 10);
lean_closure_set(v___f_2945_, 0, v_hypName_2931_);
lean_closure_set(v___f_2945_, 1, v_uniq_2939_);
lean_closure_set(v___f_2945_, 2, v_toApplicative_2932_);
lean_closure_set(v___f_2945_, 3, v_ss_2933_);
lean_closure_set(v___f_2945_, 4, v_hyps_2934_);
lean_closure_set(v___f_2945_, 5, v___x_2942_);
lean_closure_set(v___f_2945_, 6, v___x_2943_);
lean_closure_set(v___f_2945_, 7, v___x_2944_);
lean_closure_set(v___f_2945_, 8, v_inst_2936_);
lean_closure_set(v___f_2945_, 9, v_toBind_2937_);
v___x_2946_ = lean_box(v___x_2935_);
v___x_2947_ = lean_box(v___x_2940_);
v___x_2948_ = lean_box(v___x_2935_);
v___x_2949_ = lean_box(v___x_2940_);
v___x_2950_ = lean_box(v___x_2941_);
v___x_2951_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_2951_, 0, v_ss_2933_);
lean_closure_set(v___x_2951_, 1, v_00_u03c6_2938_);
lean_closure_set(v___x_2951_, 2, v___x_2946_);
lean_closure_set(v___x_2951_, 3, v___x_2947_);
lean_closure_set(v___x_2951_, 4, v___x_2948_);
lean_closure_set(v___x_2951_, 5, v___x_2949_);
lean_closure_set(v___x_2951_, 6, v___x_2950_);
v___x_2952_ = lean_apply_2(v_inst_2936_, lean_box(0), v___x_2951_);
v___x_2953_ = lean_apply_4(v_toBind_2937_, lean_box(0), lean_box(0), v___x_2952_, v___f_2945_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__0___boxed(lean_object* v_hypName_2954_, lean_object* v_toApplicative_2955_, lean_object* v_ss_2956_, lean_object* v_hyps_2957_, lean_object* v___x_2958_, lean_object* v_inst_2959_, lean_object* v_toBind_2960_, lean_object* v_00_u03c6_2961_, lean_object* v_uniq_2962_){
_start:
{
uint8_t v___x_1139__boxed_2963_; lean_object* v_res_2964_; 
v___x_1139__boxed_2963_ = lean_unbox(v___x_2958_);
v_res_2964_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__0(v_hypName_2954_, v_toApplicative_2955_, v_ss_2956_, v_hyps_2957_, v___x_1139__boxed_2963_, v_inst_2959_, v_toBind_2960_, v_00_u03c6_2961_, v_uniq_2962_);
return v_res_2964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__1(lean_object* v_l_2965_, lean_object* v_cl_2966_, lean_object* v_hypName_2967_, lean_object* v_toApplicative_2968_, lean_object* v_ss_2969_, lean_object* v_hyps_2970_, uint8_t v___x_2971_, lean_object* v_inst_2972_, lean_object* v_toBind_2973_, lean_object* v___f_2974_, lean_object* v_u_2975_, lean_object* v_eqs_2976_){
_start:
{
lean_object* v_eqs_2977_; lean_object* v_00_u03c6_2978_; lean_object* v___y_2980_; lean_object* v___x_2986_; 
v_eqs_2977_ = lean_array_to_list(v_eqs_2976_);
v_00_u03c6_2978_ = l_Lean_mkAndN(v_eqs_2977_);
v___x_2986_ = l_Lean_Level_dec(v_u_2975_);
if (lean_obj_tag(v___x_2986_) == 0)
{
v___y_2980_ = v_u_2975_;
goto v___jp_2979_;
}
else
{
lean_object* v_val_2987_; 
lean_dec(v_u_2975_);
v_val_2987_ = lean_ctor_get(v___x_2986_, 0);
lean_inc(v_val_2987_);
lean_dec_ref_known(v___x_2986_, 1);
v___y_2980_ = v_val_2987_;
goto v___jp_2979_;
}
v___jp_2979_:
{
lean_object* v_00_u03c6_2981_; lean_object* v___x_2982_; lean_object* v___f_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; 
v_00_u03c6_2981_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkPure(v___y_2980_, v_l_2965_, v_cl_2966_, v_00_u03c6_2978_);
v___x_2982_ = lean_box(v___x_2971_);
lean_inc(v_toBind_2973_);
lean_inc(v_inst_2972_);
v___f_2983_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_2983_, 0, v_hypName_2967_);
lean_closure_set(v___f_2983_, 1, v_toApplicative_2968_);
lean_closure_set(v___f_2983_, 2, v_ss_2969_);
lean_closure_set(v___f_2983_, 3, v_hyps_2970_);
lean_closure_set(v___f_2983_, 4, v___x_2982_);
lean_closure_set(v___f_2983_, 5, v_inst_2972_);
lean_closure_set(v___f_2983_, 6, v_toBind_2973_);
lean_closure_set(v___f_2983_, 7, v_00_u03c6_2981_);
v___x_2984_ = lean_apply_2(v_inst_2972_, lean_box(0), v___f_2974_);
v___x_2985_ = lean_apply_4(v_toBind_2973_, lean_box(0), lean_box(0), v___x_2984_, v___f_2983_);
return v___x_2985_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__1___boxed(lean_object* v_l_2988_, lean_object* v_cl_2989_, lean_object* v_hypName_2990_, lean_object* v_toApplicative_2991_, lean_object* v_ss_2992_, lean_object* v_hyps_2993_, lean_object* v___x_2994_, lean_object* v_inst_2995_, lean_object* v_toBind_2996_, lean_object* v___f_2997_, lean_object* v_u_2998_, lean_object* v_eqs_2999_){
_start:
{
uint8_t v___x_1173__boxed_3000_; lean_object* v_res_3001_; 
v___x_1173__boxed_3000_ = lean_unbox(v___x_2994_);
v_res_3001_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__1(v_l_2988_, v_cl_2989_, v_hypName_2990_, v_toApplicative_2991_, v_ss_2992_, v_hyps_2993_, v___x_1173__boxed_3000_, v_inst_2995_, v_toBind_2996_, v___f_2997_, v_u_2998_, v_eqs_2999_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__2(lean_object* v_l_3002_, lean_object* v_cl_3003_, lean_object* v_hypName_3004_, lean_object* v_toApplicative_3005_, lean_object* v_hyps_3006_, uint8_t v___x_3007_, lean_object* v_inst_3008_, lean_object* v_toBind_3009_, lean_object* v___f_3010_, lean_object* v_u_3011_, lean_object* v_revertArgs_3012_, lean_object* v_inst_3013_, lean_object* v___f_3014_, lean_object* v_ss_3015_){
_start:
{
lean_object* v___x_3016_; lean_object* v___f_3017_; lean_object* v___x_3018_; size_t v_sz_3019_; size_t v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v___x_3016_ = lean_box(v___x_3007_);
lean_inc(v_toBind_3009_);
lean_inc_ref(v_ss_3015_);
v___f_3017_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__1___boxed), 12, 11);
lean_closure_set(v___f_3017_, 0, v_l_3002_);
lean_closure_set(v___f_3017_, 1, v_cl_3003_);
lean_closure_set(v___f_3017_, 2, v_hypName_3004_);
lean_closure_set(v___f_3017_, 3, v_toApplicative_3005_);
lean_closure_set(v___f_3017_, 4, v_ss_3015_);
lean_closure_set(v___f_3017_, 5, v_hyps_3006_);
lean_closure_set(v___f_3017_, 6, v___x_3016_);
lean_closure_set(v___f_3017_, 7, v_inst_3008_);
lean_closure_set(v___f_3017_, 8, v_toBind_3009_);
lean_closure_set(v___f_3017_, 9, v___f_3010_);
lean_closure_set(v___f_3017_, 10, v_u_3011_);
v___x_3018_ = l_Array_zip___redArg(v_revertArgs_3012_, v_ss_3015_);
lean_dec_ref(v_ss_3015_);
v_sz_3019_ = lean_array_size(v___x_3018_);
v___x_3020_ = ((size_t)0ULL);
v___x_3021_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_3013_, v___f_3014_, v_sz_3019_, v___x_3020_, v___x_3018_);
v___x_3022_ = lean_apply_4(v_toBind_3009_, lean_box(0), lean_box(0), v___x_3021_, v___f_3017_);
return v___x_3022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__2___boxed(lean_object* v_l_3023_, lean_object* v_cl_3024_, lean_object* v_hypName_3025_, lean_object* v_toApplicative_3026_, lean_object* v_hyps_3027_, lean_object* v___x_3028_, lean_object* v_inst_3029_, lean_object* v_toBind_3030_, lean_object* v___f_3031_, lean_object* v_u_3032_, lean_object* v_revertArgs_3033_, lean_object* v_inst_3034_, lean_object* v___f_3035_, lean_object* v_ss_3036_){
_start:
{
uint8_t v___x_1198__boxed_3037_; lean_object* v_res_3038_; 
v___x_1198__boxed_3037_ = lean_unbox(v___x_3028_);
v_res_3038_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__2(v_l_3023_, v_cl_3024_, v_hypName_3025_, v_toApplicative_3026_, v_hyps_3027_, v___x_1198__boxed_3037_, v_inst_3029_, v_toBind_3030_, v___f_3031_, v_u_3032_, v_revertArgs_3033_, v_inst_3034_, v___f_3035_, v_ss_3036_);
lean_dec_ref(v_revertArgs_3033_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__4(lean_object* v_toApplicative_3039_, lean_object* v___x_3040_, lean_object* v___x_3041_, lean_object* v_fst_3042_, lean_object* v_revertArgs_3043_, lean_object* v_snd_3044_, lean_object* v_prf_3045_, lean_object* v_l_3046_, lean_object* v_cl_3047_, lean_object* v_hyps_3048_, lean_object* v_target_3049_, lean_object* v_h_3050_, lean_object* v_____do__lift_3051_){
_start:
{
lean_object* v_toPure_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v_prf_3064_; lean_object* v___x_3065_; 
v_toPure_3052_ = lean_ctor_get(v_toApplicative_3039_, 1);
lean_inc(v_toPure_3052_);
lean_dec_ref(v_toApplicative_3039_);
v___x_3053_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0));
v___x_3054_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__0));
v___x_3055_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1));
v___x_3056_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0));
v___x_3057_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1));
v___x_3058_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0));
v___x_3059_ = l_Lean_Name_mkStr7(v___x_3053_, v___x_3054_, v___x_3055_, v___x_3040_, v___x_3056_, v___x_3057_, v___x_3058_);
v___x_3060_ = l_Lean_mkConst(v___x_3059_, v___x_3041_);
v___x_3061_ = l_Lean_mkAppN(v_fst_3042_, v_revertArgs_3043_);
v___x_3062_ = l_Lean_mkAppN(v_snd_3044_, v_revertArgs_3043_);
v___x_3063_ = l_Lean_mkAppN(v_prf_3045_, v_revertArgs_3043_);
v_prf_3064_ = l_Lean_mkApp9(v___x_3060_, v_l_3046_, v_cl_3047_, v_____do__lift_3051_, v_hyps_3048_, v___x_3061_, v_target_3049_, v_h_3050_, v___x_3062_, v___x_3063_);
v___x_3065_ = lean_apply_2(v_toPure_3052_, lean_box(0), v_prf_3064_);
return v___x_3065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed(lean_object* v_toApplicative_3066_, lean_object* v___x_3067_, lean_object* v___x_3068_, lean_object* v_fst_3069_, lean_object* v_revertArgs_3070_, lean_object* v_snd_3071_, lean_object* v_prf_3072_, lean_object* v_l_3073_, lean_object* v_cl_3074_, lean_object* v_hyps_3075_, lean_object* v_target_3076_, lean_object* v_h_3077_, lean_object* v_____do__lift_3078_){
_start:
{
lean_object* v_res_3079_; 
v_res_3079_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__4(v_toApplicative_3066_, v___x_3067_, v___x_3068_, v_fst_3069_, v_revertArgs_3070_, v_snd_3071_, v_prf_3072_, v_l_3073_, v_cl_3074_, v_hyps_3075_, v_target_3076_, v_h_3077_, v_____do__lift_3078_);
lean_dec_ref(v_revertArgs_3070_);
return v_res_3079_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__6(lean_object* v_toApplicative_3080_, lean_object* v___x_3081_, lean_object* v___x_3082_, lean_object* v_fst_3083_, lean_object* v_revertArgs_3084_, lean_object* v_snd_3085_, lean_object* v_l_3086_, lean_object* v_cl_3087_, lean_object* v_hyps_3088_, lean_object* v_target_3089_, lean_object* v_h_3090_, lean_object* v_inst_3091_, lean_object* v_toBind_3092_, lean_object* v_prf_3093_){
_start:
{
lean_object* v___f_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
lean_inc_ref(v_h_3090_);
v___f_3094_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed), 13, 12);
lean_closure_set(v___f_3094_, 0, v_toApplicative_3080_);
lean_closure_set(v___f_3094_, 1, v___x_3081_);
lean_closure_set(v___f_3094_, 2, v___x_3082_);
lean_closure_set(v___f_3094_, 3, v_fst_3083_);
lean_closure_set(v___f_3094_, 4, v_revertArgs_3084_);
lean_closure_set(v___f_3094_, 5, v_snd_3085_);
lean_closure_set(v___f_3094_, 6, v_prf_3093_);
lean_closure_set(v___f_3094_, 7, v_l_3086_);
lean_closure_set(v___f_3094_, 8, v_cl_3087_);
lean_closure_set(v___f_3094_, 9, v_hyps_3088_);
lean_closure_set(v___f_3094_, 10, v_target_3089_);
lean_closure_set(v___f_3094_, 11, v_h_3090_);
v___x_3095_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3095_, 0, v_h_3090_);
v___x_3096_ = lean_apply_2(v_inst_3091_, lean_box(0), v___x_3095_);
v___x_3097_ = lean_apply_4(v_toBind_3092_, lean_box(0), lean_box(0), v___x_3096_, v___f_3094_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__7(lean_object* v___y_3098_, lean_object* v_cl_x27_3099_, lean_object* v___y_3100_, lean_object* v_snd_3101_, lean_object* v_toApplicative_3102_, lean_object* v___x_3103_, lean_object* v___x_3104_, lean_object* v_revertArgs_3105_, lean_object* v_l_3106_, lean_object* v_cl_3107_, lean_object* v_hyps_3108_, lean_object* v_target_3109_, lean_object* v_h_3110_, lean_object* v_inst_3111_, lean_object* v_toBind_3112_, lean_object* v_a_3113_, lean_object* v_n_3114_, lean_object* v_f_3115_, lean_object* v_u_3116_, lean_object* v_k_3117_, lean_object* v_H_3118_){
_start:
{
lean_object* v_H_3119_; lean_object* v___x_3120_; lean_object* v_fst_3121_; lean_object* v_snd_3122_; lean_object* v___f_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v_goal_x27_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
lean_inc_ref_n(v_cl_x27_3099_, 2);
lean_inc_ref_n(v___y_3098_, 2);
v_H_3119_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_pushForallContextIntoHyps(v___y_3098_, v_cl_x27_3099_, v_H_3118_);
v___x_3120_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd(v___y_3100_, v___y_3098_, v_cl_x27_3099_, v_H_3119_, v_snd_3101_);
v_fst_3121_ = lean_ctor_get(v___x_3120_, 0);
lean_inc_n(v_fst_3121_, 2);
v_snd_3122_ = lean_ctor_get(v___x_3120_, 1);
lean_inc(v_snd_3122_);
lean_dec_ref(v___x_3120_);
lean_inc(v_toBind_3112_);
v___f_3123_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__6), 14, 13);
lean_closure_set(v___f_3123_, 0, v_toApplicative_3102_);
lean_closure_set(v___f_3123_, 1, v___x_3103_);
lean_closure_set(v___f_3123_, 2, v___x_3104_);
lean_closure_set(v___f_3123_, 3, v_fst_3121_);
lean_closure_set(v___f_3123_, 4, v_revertArgs_3105_);
lean_closure_set(v___f_3123_, 5, v_snd_3122_);
lean_closure_set(v___f_3123_, 6, v_l_3106_);
lean_closure_set(v___f_3123_, 7, v_cl_3107_);
lean_closure_set(v___f_3123_, 8, v_hyps_3108_);
lean_closure_set(v___f_3123_, 9, v_target_3109_);
lean_closure_set(v___f_3123_, 10, v_h_3110_);
lean_closure_set(v___f_3123_, 11, v_inst_3111_);
lean_closure_set(v___f_3123_, 12, v_toBind_3112_);
v___x_3124_ = lean_array_get_size(v_a_3113_);
v___x_3125_ = l_Array_toSubarray___redArg(v_a_3113_, v_n_3114_, v___x_3124_);
v___x_3126_ = l_Subarray_copy___redArg(v___x_3125_);
v___x_3127_ = l_Lean_mkAppRev(v_f_3115_, v___x_3126_);
lean_dec_ref(v___x_3126_);
v_goal_x27_3128_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_goal_x27_3128_, 0, v_u_3116_);
lean_ctor_set(v_goal_x27_3128_, 1, v___y_3098_);
lean_ctor_set(v_goal_x27_3128_, 2, v_cl_x27_3099_);
lean_ctor_set(v_goal_x27_3128_, 3, v_fst_3121_);
lean_ctor_set(v_goal_x27_3128_, 4, v___x_3127_);
v___x_3129_ = lean_apply_1(v_k_3117_, v_goal_x27_3128_);
v___x_3130_ = lean_apply_4(v_toBind_3112_, lean_box(0), lean_box(0), v___x_3129_, v___f_3123_);
return v___x_3130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__7___boxed(lean_object** _args){
lean_object* v___y_3131_ = _args[0];
lean_object* v_cl_x27_3132_ = _args[1];
lean_object* v___y_3133_ = _args[2];
lean_object* v_snd_3134_ = _args[3];
lean_object* v_toApplicative_3135_ = _args[4];
lean_object* v___x_3136_ = _args[5];
lean_object* v___x_3137_ = _args[6];
lean_object* v_revertArgs_3138_ = _args[7];
lean_object* v_l_3139_ = _args[8];
lean_object* v_cl_3140_ = _args[9];
lean_object* v_hyps_3141_ = _args[10];
lean_object* v_target_3142_ = _args[11];
lean_object* v_h_3143_ = _args[12];
lean_object* v_inst_3144_ = _args[13];
lean_object* v_toBind_3145_ = _args[14];
lean_object* v_a_3146_ = _args[15];
lean_object* v_n_3147_ = _args[16];
lean_object* v_f_3148_ = _args[17];
lean_object* v_u_3149_ = _args[18];
lean_object* v_k_3150_ = _args[19];
lean_object* v_H_3151_ = _args[20];
_start:
{
lean_object* v_res_3152_; 
v_res_3152_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__7(v___y_3131_, v_cl_x27_3132_, v___y_3133_, v_snd_3134_, v_toApplicative_3135_, v___x_3136_, v___x_3137_, v_revertArgs_3138_, v_l_3139_, v_cl_3140_, v_hyps_3141_, v_target_3142_, v_h_3143_, v_inst_3144_, v_toBind_3145_, v_a_3146_, v_n_3147_, v_f_3148_, v_u_3149_, v_k_3150_, v_H_3151_);
return v_res_3152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__8(lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v_snd_3155_, lean_object* v_toApplicative_3156_, lean_object* v___x_3157_, lean_object* v___x_3158_, lean_object* v_revertArgs_3159_, lean_object* v_l_3160_, lean_object* v_cl_3161_, lean_object* v_hyps_3162_, lean_object* v_target_3163_, lean_object* v_h_3164_, lean_object* v_inst_3165_, lean_object* v_toBind_3166_, lean_object* v_a_3167_, lean_object* v_n_3168_, lean_object* v_f_3169_, lean_object* v_u_3170_, lean_object* v_k_3171_, lean_object* v_fst_3172_, lean_object* v_cl_x27_3173_){
_start:
{
lean_object* v___f_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; 
lean_inc(v_toBind_3166_);
lean_inc(v_inst_3165_);
v___f_3174_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__7___boxed), 21, 20);
lean_closure_set(v___f_3174_, 0, v___y_3153_);
lean_closure_set(v___f_3174_, 1, v_cl_x27_3173_);
lean_closure_set(v___f_3174_, 2, v___y_3154_);
lean_closure_set(v___f_3174_, 3, v_snd_3155_);
lean_closure_set(v___f_3174_, 4, v_toApplicative_3156_);
lean_closure_set(v___f_3174_, 5, v___x_3157_);
lean_closure_set(v___f_3174_, 6, v___x_3158_);
lean_closure_set(v___f_3174_, 7, v_revertArgs_3159_);
lean_closure_set(v___f_3174_, 8, v_l_3160_);
lean_closure_set(v___f_3174_, 9, v_cl_3161_);
lean_closure_set(v___f_3174_, 10, v_hyps_3162_);
lean_closure_set(v___f_3174_, 11, v_target_3163_);
lean_closure_set(v___f_3174_, 12, v_h_3164_);
lean_closure_set(v___f_3174_, 13, v_inst_3165_);
lean_closure_set(v___f_3174_, 14, v_toBind_3166_);
lean_closure_set(v___f_3174_, 15, v_a_3167_);
lean_closure_set(v___f_3174_, 16, v_n_3168_);
lean_closure_set(v___f_3174_, 17, v_f_3169_);
lean_closure_set(v___f_3174_, 18, v_u_3170_);
lean_closure_set(v___f_3174_, 19, v_k_3171_);
v___x_3175_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateMVarsIfMVarApp___boxed), 6, 1);
lean_closure_set(v___x_3175_, 0, v_fst_3172_);
v___x_3176_ = lean_apply_2(v_inst_3165_, lean_box(0), v___x_3175_);
v___x_3177_ = lean_apply_4(v_toBind_3166_, lean_box(0), lean_box(0), v___x_3176_, v___f_3174_);
return v___x_3177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed(lean_object** _args){
lean_object* v___y_3178_ = _args[0];
lean_object* v___y_3179_ = _args[1];
lean_object* v_snd_3180_ = _args[2];
lean_object* v_toApplicative_3181_ = _args[3];
lean_object* v___x_3182_ = _args[4];
lean_object* v___x_3183_ = _args[5];
lean_object* v_revertArgs_3184_ = _args[6];
lean_object* v_l_3185_ = _args[7];
lean_object* v_cl_3186_ = _args[8];
lean_object* v_hyps_3187_ = _args[9];
lean_object* v_target_3188_ = _args[10];
lean_object* v_h_3189_ = _args[11];
lean_object* v_inst_3190_ = _args[12];
lean_object* v_toBind_3191_ = _args[13];
lean_object* v_a_3192_ = _args[14];
lean_object* v_n_3193_ = _args[15];
lean_object* v_f_3194_ = _args[16];
lean_object* v_u_3195_ = _args[17];
lean_object* v_k_3196_ = _args[18];
lean_object* v_fst_3197_ = _args[19];
lean_object* v_cl_x27_3198_ = _args[20];
_start:
{
lean_object* v_res_3199_; 
v_res_3199_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__8(v___y_3178_, v___y_3179_, v_snd_3180_, v_toApplicative_3181_, v___x_3182_, v___x_3183_, v_revertArgs_3184_, v_l_3185_, v_cl_3186_, v_hyps_3187_, v_target_3188_, v_h_3189_, v_inst_3190_, v_toBind_3191_, v_a_3192_, v_n_3193_, v_f_3194_, v_u_3195_, v_k_3196_, v_fst_3197_, v_cl_x27_3198_);
return v_res_3199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9(lean_object* v_snd_3204_, lean_object* v_toApplicative_3205_, lean_object* v_revertArgs_3206_, lean_object* v_l_3207_, lean_object* v_cl_3208_, lean_object* v_hyps_3209_, lean_object* v_target_3210_, lean_object* v_inst_3211_, lean_object* v_toBind_3212_, lean_object* v_a_3213_, lean_object* v_n_3214_, lean_object* v_f_3215_, lean_object* v_u_3216_, lean_object* v_k_3217_, lean_object* v_fst_3218_, lean_object* v_revertArgsTypes_3219_, lean_object* v___x_3220_, lean_object* v___f_3221_, lean_object* v_h_3222_){
_start:
{
lean_object* v___y_3224_; lean_object* v___y_3225_; lean_object* v___y_3226_; lean_object* v___y_3227_; lean_object* v___y_3238_; lean_object* v___x_3243_; lean_object* v___x_3244_; uint8_t v___x_3245_; 
v___x_3243_ = lean_array_get_size(v_revertArgsTypes_3219_);
v___x_3244_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9));
v___x_3245_ = lean_nat_dec_lt(v___x_3220_, v___x_3243_);
if (v___x_3245_ == 0)
{
lean_dec_ref(v___f_3221_);
lean_dec_ref(v_revertArgsTypes_3219_);
lean_inc_ref(v_l_3207_);
v___y_3238_ = v_l_3207_;
goto v___jp_3237_;
}
else
{
size_t v___x_3246_; size_t v___x_3247_; lean_object* v___x_3248_; 
v___x_3246_ = lean_usize_of_nat(v___x_3243_);
v___x_3247_ = ((size_t)0ULL);
lean_inc_ref(v_l_3207_);
v___x_3248_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3244_, v___f_3221_, v_revertArgsTypes_3219_, v___x_3246_, v___x_3247_, v_l_3207_);
v___y_3238_ = v___x_3248_;
goto v___jp_3237_;
}
v___jp_3223_:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___f_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3228_ = lean_box(0);
lean_inc(v___y_3227_);
v___x_3229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3229_, 0, v___y_3227_);
lean_ctor_set(v___x_3229_, 1, v___x_3228_);
lean_inc(v_toBind_3212_);
lean_inc(v_inst_3211_);
lean_inc_ref(v___x_3229_);
lean_inc_ref(v___y_3225_);
lean_inc_ref(v___y_3224_);
v___f_3230_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed), 21, 20);
lean_closure_set(v___f_3230_, 0, v___y_3224_);
lean_closure_set(v___f_3230_, 1, v___y_3227_);
lean_closure_set(v___f_3230_, 2, v_snd_3204_);
lean_closure_set(v___f_3230_, 3, v_toApplicative_3205_);
lean_closure_set(v___f_3230_, 4, v___y_3225_);
lean_closure_set(v___f_3230_, 5, v___x_3229_);
lean_closure_set(v___f_3230_, 6, v_revertArgs_3206_);
lean_closure_set(v___f_3230_, 7, v_l_3207_);
lean_closure_set(v___f_3230_, 8, v_cl_3208_);
lean_closure_set(v___f_3230_, 9, v_hyps_3209_);
lean_closure_set(v___f_3230_, 10, v_target_3210_);
lean_closure_set(v___f_3230_, 11, v_h_3222_);
lean_closure_set(v___f_3230_, 12, v_inst_3211_);
lean_closure_set(v___f_3230_, 13, v_toBind_3212_);
lean_closure_set(v___f_3230_, 14, v_a_3213_);
lean_closure_set(v___f_3230_, 15, v_n_3214_);
lean_closure_set(v___f_3230_, 16, v_f_3215_);
lean_closure_set(v___f_3230_, 17, v_u_3216_);
lean_closure_set(v___f_3230_, 18, v_k_3217_);
lean_closure_set(v___f_3230_, 19, v_fst_3218_);
lean_inc(v___y_3226_);
v___x_3231_ = l_Lean_mkConst(v___y_3226_, v___x_3229_);
v___x_3232_ = l_Lean_Expr_app___override(v___x_3231_, v___y_3224_);
v___x_3233_ = lean_box(0);
v___x_3234_ = lean_alloc_closure((void*)(l_Lean_Meta_synthInstance___boxed), 7, 2);
lean_closure_set(v___x_3234_, 0, v___x_3232_);
lean_closure_set(v___x_3234_, 1, v___x_3233_);
v___x_3235_ = lean_apply_2(v_inst_3211_, lean_box(0), v___x_3234_);
v___x_3236_ = lean_apply_4(v_toBind_3212_, lean_box(0), lean_box(0), v___x_3235_, v___f_3230_);
return v___x_3236_;
}
v___jp_3237_:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3239_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__1));
v___x_3240_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___closed__0));
v___x_3241_ = l_Lean_Level_dec(v_u_3216_);
if (lean_obj_tag(v___x_3241_) == 0)
{
lean_inc(v_u_3216_);
v___y_3224_ = v___y_3238_;
v___y_3225_ = v___x_3239_;
v___y_3226_ = v___x_3240_;
v___y_3227_ = v_u_3216_;
goto v___jp_3223_;
}
else
{
lean_object* v_val_3242_; 
v_val_3242_ = lean_ctor_get(v___x_3241_, 0);
lean_inc(v_val_3242_);
lean_dec_ref_known(v___x_3241_, 1);
v___y_3224_ = v___y_3238_;
v___y_3225_ = v___x_3239_;
v___y_3226_ = v___x_3240_;
v___y_3227_ = v_val_3242_;
goto v___jp_3223_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_snd_3249_ = _args[0];
lean_object* v_toApplicative_3250_ = _args[1];
lean_object* v_revertArgs_3251_ = _args[2];
lean_object* v_l_3252_ = _args[3];
lean_object* v_cl_3253_ = _args[4];
lean_object* v_hyps_3254_ = _args[5];
lean_object* v_target_3255_ = _args[6];
lean_object* v_inst_3256_ = _args[7];
lean_object* v_toBind_3257_ = _args[8];
lean_object* v_a_3258_ = _args[9];
lean_object* v_n_3259_ = _args[10];
lean_object* v_f_3260_ = _args[11];
lean_object* v_u_3261_ = _args[12];
lean_object* v_k_3262_ = _args[13];
lean_object* v_fst_3263_ = _args[14];
lean_object* v_revertArgsTypes_3264_ = _args[15];
lean_object* v___x_3265_ = _args[16];
lean_object* v___f_3266_ = _args[17];
lean_object* v_h_3267_ = _args[18];
_start:
{
lean_object* v_res_3268_; 
v_res_3268_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9(v_snd_3249_, v_toApplicative_3250_, v_revertArgs_3251_, v_l_3252_, v_cl_3253_, v_hyps_3254_, v_target_3255_, v_inst_3256_, v_toBind_3257_, v_a_3258_, v_n_3259_, v_f_3260_, v_u_3261_, v_k_3262_, v_fst_3263_, v_revertArgsTypes_3264_, v___x_3265_, v___f_3266_, v_h_3267_);
lean_dec(v___x_3265_);
return v_res_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__11(lean_object* v_toApplicative_3269_, lean_object* v_revertArgs_3270_, lean_object* v_l_3271_, lean_object* v_cl_3272_, lean_object* v_hyps_3273_, lean_object* v_target_3274_, lean_object* v_inst_3275_, lean_object* v_toBind_3276_, lean_object* v_a_3277_, lean_object* v_n_3278_, lean_object* v_f_3279_, lean_object* v_u_3280_, lean_object* v_k_3281_, lean_object* v_revertArgsTypes_3282_, lean_object* v___x_3283_, lean_object* v___f_3284_, lean_object* v___x_3285_, lean_object* v_____x_3286_){
_start:
{
lean_object* v_fst_3287_; lean_object* v_snd_3288_; lean_object* v___f_3289_; lean_object* v___f_3290_; lean_object* v___x_3291_; size_t v_sz_3292_; size_t v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; 
v_fst_3287_ = lean_ctor_get(v_____x_3286_, 0);
lean_inc(v_fst_3287_);
v_snd_3288_ = lean_ctor_get(v_____x_3286_, 1);
lean_inc(v_snd_3288_);
lean_dec_ref(v_____x_3286_);
lean_inc_n(v_toBind_3276_, 2);
lean_inc_n(v_inst_3275_, 2);
lean_inc_ref(v_revertArgs_3270_);
v___f_3289_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed), 19, 18);
lean_closure_set(v___f_3289_, 0, v_snd_3288_);
lean_closure_set(v___f_3289_, 1, v_toApplicative_3269_);
lean_closure_set(v___f_3289_, 2, v_revertArgs_3270_);
lean_closure_set(v___f_3289_, 3, v_l_3271_);
lean_closure_set(v___f_3289_, 4, v_cl_3272_);
lean_closure_set(v___f_3289_, 5, v_hyps_3273_);
lean_closure_set(v___f_3289_, 6, v_target_3274_);
lean_closure_set(v___f_3289_, 7, v_inst_3275_);
lean_closure_set(v___f_3289_, 8, v_toBind_3276_);
lean_closure_set(v___f_3289_, 9, v_a_3277_);
lean_closure_set(v___f_3289_, 10, v_n_3278_);
lean_closure_set(v___f_3289_, 11, v_f_3279_);
lean_closure_set(v___f_3289_, 12, v_u_3280_);
lean_closure_set(v___f_3289_, 13, v_k_3281_);
lean_closure_set(v___f_3289_, 14, v_fst_3287_);
lean_closure_set(v___f_3289_, 15, v_revertArgsTypes_3282_);
lean_closure_set(v___f_3289_, 16, v___x_3283_);
lean_closure_set(v___f_3289_, 17, v___f_3284_);
v___f_3290_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__16), 4, 3);
lean_closure_set(v___f_3290_, 0, v_inst_3275_);
lean_closure_set(v___f_3290_, 1, v_toBind_3276_);
lean_closure_set(v___f_3290_, 2, v___f_3289_);
v___x_3291_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0));
v_sz_3292_ = lean_array_size(v_revertArgs_3270_);
v___x_3293_ = ((size_t)0ULL);
v___x_3294_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3285_, v___x_3291_, v_sz_3292_, v___x_3293_, v_revertArgs_3270_);
v___x_3295_ = lean_apply_2(v_inst_3275_, lean_box(0), v___x_3294_);
v___x_3296_ = lean_apply_4(v_toBind_3276_, lean_box(0), lean_box(0), v___x_3295_, v___f_3290_);
return v___x_3296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed(lean_object** _args){
lean_object* v_toApplicative_3297_ = _args[0];
lean_object* v_revertArgs_3298_ = _args[1];
lean_object* v_l_3299_ = _args[2];
lean_object* v_cl_3300_ = _args[3];
lean_object* v_hyps_3301_ = _args[4];
lean_object* v_target_3302_ = _args[5];
lean_object* v_inst_3303_ = _args[6];
lean_object* v_toBind_3304_ = _args[7];
lean_object* v_a_3305_ = _args[8];
lean_object* v_n_3306_ = _args[9];
lean_object* v_f_3307_ = _args[10];
lean_object* v_u_3308_ = _args[11];
lean_object* v_k_3309_ = _args[12];
lean_object* v_revertArgsTypes_3310_ = _args[13];
lean_object* v___x_3311_ = _args[14];
lean_object* v___f_3312_ = _args[15];
lean_object* v___x_3313_ = _args[16];
lean_object* v_____x_3314_ = _args[17];
_start:
{
lean_object* v_res_3315_; 
v_res_3315_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__11(v_toApplicative_3297_, v_revertArgs_3298_, v_l_3299_, v_cl_3300_, v_hyps_3301_, v_target_3302_, v_inst_3303_, v_toBind_3304_, v_a_3305_, v_n_3306_, v_f_3307_, v_u_3308_, v_k_3309_, v_revertArgsTypes_3310_, v___x_3311_, v___f_3312_, v___x_3313_, v_____x_3314_);
return v_res_3315_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__12(lean_object* v_toApplicative_3316_, lean_object* v_revertArgs_3317_, lean_object* v_l_3318_, lean_object* v_cl_3319_, lean_object* v_hyps_3320_, lean_object* v_target_3321_, lean_object* v_inst_3322_, lean_object* v_toBind_3323_, lean_object* v_a_3324_, lean_object* v_n_3325_, lean_object* v_f_3326_, lean_object* v_u_3327_, lean_object* v_k_3328_, lean_object* v___x_3329_, lean_object* v___f_3330_, lean_object* v___x_3331_, lean_object* v_inst_3332_, lean_object* v_inst_3333_, lean_object* v___f_3334_, lean_object* v___f_3335_, lean_object* v_revertArgsTypes_3336_){
_start:
{
lean_object* v___f_3337_; lean_object* v___f_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; 
lean_inc(v___x_3329_);
lean_inc_ref(v_revertArgsTypes_3336_);
lean_inc_n(v_toBind_3323_, 2);
v___f_3337_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed), 18, 17);
lean_closure_set(v___f_3337_, 0, v_toApplicative_3316_);
lean_closure_set(v___f_3337_, 1, v_revertArgs_3317_);
lean_closure_set(v___f_3337_, 2, v_l_3318_);
lean_closure_set(v___f_3337_, 3, v_cl_3319_);
lean_closure_set(v___f_3337_, 4, v_hyps_3320_);
lean_closure_set(v___f_3337_, 5, v_target_3321_);
lean_closure_set(v___f_3337_, 6, v_inst_3322_);
lean_closure_set(v___f_3337_, 7, v_toBind_3323_);
lean_closure_set(v___f_3337_, 8, v_a_3324_);
lean_closure_set(v___f_3337_, 9, v_n_3325_);
lean_closure_set(v___f_3337_, 10, v_f_3326_);
lean_closure_set(v___f_3337_, 11, v_u_3327_);
lean_closure_set(v___f_3337_, 12, v_k_3328_);
lean_closure_set(v___f_3337_, 13, v_revertArgsTypes_3336_);
lean_closure_set(v___f_3337_, 14, v___x_3329_);
lean_closure_set(v___f_3337_, 15, v___f_3330_);
lean_closure_set(v___f_3337_, 16, v___x_3331_);
lean_inc_ref(v_inst_3333_);
v___f_3338_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18), 6, 5);
lean_closure_set(v___f_3338_, 0, v_inst_3332_);
lean_closure_set(v___f_3338_, 1, v_inst_3333_);
lean_closure_set(v___f_3338_, 2, v___f_3334_);
lean_closure_set(v___f_3338_, 3, v_toBind_3323_);
lean_closure_set(v___f_3338_, 4, v___f_3337_);
v___x_3339_ = lean_array_get_size(v_revertArgsTypes_3336_);
v___x_3340_ = lean_mk_empty_array_with_capacity(v___x_3339_);
v___x_3341_ = l_Array_mapFinIdxM_map___redArg(v_inst_3333_, v_revertArgsTypes_3336_, v___f_3335_, v___x_3339_, v___x_3329_, v___x_3340_);
v___x_3342_ = lean_apply_4(v_toBind_3323_, lean_box(0), lean_box(0), v___x_3341_, v___f_3338_);
return v___x_3342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_toApplicative_3343_ = _args[0];
lean_object* v_revertArgs_3344_ = _args[1];
lean_object* v_l_3345_ = _args[2];
lean_object* v_cl_3346_ = _args[3];
lean_object* v_hyps_3347_ = _args[4];
lean_object* v_target_3348_ = _args[5];
lean_object* v_inst_3349_ = _args[6];
lean_object* v_toBind_3350_ = _args[7];
lean_object* v_a_3351_ = _args[8];
lean_object* v_n_3352_ = _args[9];
lean_object* v_f_3353_ = _args[10];
lean_object* v_u_3354_ = _args[11];
lean_object* v_k_3355_ = _args[12];
lean_object* v___x_3356_ = _args[13];
lean_object* v___f_3357_ = _args[14];
lean_object* v___x_3358_ = _args[15];
lean_object* v_inst_3359_ = _args[16];
lean_object* v_inst_3360_ = _args[17];
lean_object* v___f_3361_ = _args[18];
lean_object* v___f_3362_ = _args[19];
lean_object* v_revertArgsTypes_3363_ = _args[20];
_start:
{
lean_object* v_res_3364_; 
v_res_3364_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__12(v_toApplicative_3343_, v_revertArgs_3344_, v_l_3345_, v_cl_3346_, v_hyps_3347_, v_target_3348_, v_inst_3349_, v_toBind_3350_, v_a_3351_, v_n_3352_, v_f_3353_, v_u_3354_, v_k_3355_, v___x_3356_, v___f_3357_, v___x_3358_, v_inst_3359_, v_inst_3360_, v___f_3361_, v___f_3362_, v_revertArgsTypes_3363_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__10(lean_object* v_inst_3365_, lean_object* v_inst_3366_, lean_object* v_l_3367_, lean_object* v_cl_3368_, lean_object* v_hypName_3369_, lean_object* v_hyps_3370_, uint8_t v___x_3371_, lean_object* v___f_3372_, lean_object* v_u_3373_, lean_object* v_revertArgs_3374_, lean_object* v___f_3375_, lean_object* v_target_3376_, lean_object* v_a_3377_, lean_object* v_n_3378_, lean_object* v_f_3379_, lean_object* v_k_3380_, lean_object* v___x_3381_, lean_object* v___f_3382_, lean_object* v_inst_3383_, lean_object* v_____r_3384_){
_start:
{
lean_object* v_toApplicative_3385_; lean_object* v_toBind_3386_; lean_object* v___x_3387_; lean_object* v_toApplicative_3388_; lean_object* v_toFunctor_3389_; lean_object* v_toSeq_3390_; lean_object* v_toSeqLeft_3391_; lean_object* v_toSeqRight_3392_; lean_object* v___f_3393_; lean_object* v___f_3394_; lean_object* v___f_3395_; lean_object* v___f_3396_; lean_object* v___x_3397_; lean_object* v___f_3398_; lean_object* v___f_3399_; lean_object* v___f_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v_toApplicative_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3441_; 
v_toApplicative_3385_ = lean_ctor_get(v_inst_3365_, 0);
lean_inc_ref(v_toApplicative_3385_);
v_toBind_3386_ = lean_ctor_get(v_inst_3365_, 1);
lean_inc(v_toBind_3386_);
v___x_3387_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1);
v_toApplicative_3388_ = lean_ctor_get(v___x_3387_, 0);
v_toFunctor_3389_ = lean_ctor_get(v_toApplicative_3388_, 0);
v_toSeq_3390_ = lean_ctor_get(v_toApplicative_3388_, 2);
v_toSeqLeft_3391_ = lean_ctor_get(v_toApplicative_3388_, 3);
v_toSeqRight_3392_ = lean_ctor_get(v_toApplicative_3388_, 4);
v___f_3393_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2));
v___f_3394_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3389_, 2);
v___f_3395_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3395_, 0, v_toFunctor_3389_);
v___f_3396_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3396_, 0, v_toFunctor_3389_);
v___x_3397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3397_, 0, v___f_3395_);
lean_ctor_set(v___x_3397_, 1, v___f_3396_);
lean_inc(v_toSeqRight_3392_);
v___f_3398_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3398_, 0, v_toSeqRight_3392_);
lean_inc(v_toSeqLeft_3391_);
v___f_3399_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3399_, 0, v_toSeqLeft_3391_);
lean_inc(v_toSeq_3390_);
v___f_3400_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3400_, 0, v_toSeq_3390_);
v___x_3401_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3401_, 0, v___x_3397_);
lean_ctor_set(v___x_3401_, 1, v___f_3393_);
lean_ctor_set(v___x_3401_, 2, v___f_3400_);
lean_ctor_set(v___x_3401_, 3, v___f_3399_);
lean_ctor_set(v___x_3401_, 4, v___f_3398_);
v___x_3402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3402_, 0, v___x_3401_);
lean_ctor_set(v___x_3402_, 1, v___f_3394_);
v___x_3403_ = l_StateRefT_x27_instMonad___redArg(v___x_3402_);
v_toApplicative_3404_ = lean_ctor_get(v___x_3403_, 0);
v_isSharedCheck_3441_ = !lean_is_exclusive(v___x_3403_);
if (v_isSharedCheck_3441_ == 0)
{
lean_object* v_unused_3442_; 
v_unused_3442_ = lean_ctor_get(v___x_3403_, 1);
lean_dec(v_unused_3442_);
v___x_3406_ = v___x_3403_;
v_isShared_3407_ = v_isSharedCheck_3441_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_toApplicative_3404_);
lean_dec(v___x_3403_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3441_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v_toFunctor_3408_; lean_object* v_toSeq_3409_; lean_object* v_toSeqLeft_3410_; lean_object* v_toSeqRight_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3439_; 
v_toFunctor_3408_ = lean_ctor_get(v_toApplicative_3404_, 0);
v_toSeq_3409_ = lean_ctor_get(v_toApplicative_3404_, 2);
v_toSeqLeft_3410_ = lean_ctor_get(v_toApplicative_3404_, 3);
v_toSeqRight_3411_ = lean_ctor_get(v_toApplicative_3404_, 4);
v_isSharedCheck_3439_ = !lean_is_exclusive(v_toApplicative_3404_);
if (v_isSharedCheck_3439_ == 0)
{
lean_object* v_unused_3440_; 
v_unused_3440_ = lean_ctor_get(v_toApplicative_3404_, 1);
lean_dec(v_unused_3440_);
v___x_3413_ = v_toApplicative_3404_;
v_isShared_3414_ = v_isSharedCheck_3439_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_toSeqRight_3411_);
lean_inc(v_toSeqLeft_3410_);
lean_inc(v_toSeq_3409_);
lean_inc(v_toFunctor_3408_);
lean_dec(v_toApplicative_3404_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3439_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___f_3415_; lean_object* v___x_3416_; lean_object* v___f_3417_; lean_object* v___f_3418_; lean_object* v___f_3419_; lean_object* v___f_3420_; lean_object* v___f_3421_; lean_object* v___x_3422_; lean_object* v___f_3423_; lean_object* v___f_3424_; lean_object* v___f_3425_; lean_object* v___x_3427_; 
lean_inc_n(v_toBind_3386_, 2);
lean_inc_n(v_inst_3366_, 2);
lean_inc_ref_n(v_toApplicative_3385_, 2);
v___f_3415_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6), 6, 3);
lean_closure_set(v___f_3415_, 0, v_toApplicative_3385_);
lean_closure_set(v___f_3415_, 1, v_inst_3366_);
lean_closure_set(v___f_3415_, 2, v_toBind_3386_);
v___x_3416_ = lean_box(v___x_3371_);
lean_inc_ref(v_inst_3365_);
lean_inc_ref(v_revertArgs_3374_);
lean_inc(v_u_3373_);
lean_inc_ref(v_hyps_3370_);
lean_inc_ref(v_cl_3368_);
lean_inc_ref(v_l_3367_);
v___f_3417_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__2___boxed), 14, 13);
lean_closure_set(v___f_3417_, 0, v_l_3367_);
lean_closure_set(v___f_3417_, 1, v_cl_3368_);
lean_closure_set(v___f_3417_, 2, v_hypName_3369_);
lean_closure_set(v___f_3417_, 3, v_toApplicative_3385_);
lean_closure_set(v___f_3417_, 4, v_hyps_3370_);
lean_closure_set(v___f_3417_, 5, v___x_3416_);
lean_closure_set(v___f_3417_, 6, v_inst_3366_);
lean_closure_set(v___f_3417_, 7, v_toBind_3386_);
lean_closure_set(v___f_3417_, 8, v___f_3372_);
lean_closure_set(v___f_3417_, 9, v_u_3373_);
lean_closure_set(v___f_3417_, 10, v_revertArgs_3374_);
lean_closure_set(v___f_3417_, 11, v_inst_3365_);
lean_closure_set(v___f_3417_, 12, v___f_3375_);
v___f_3418_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4));
v___f_3419_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5));
lean_inc_ref(v_toFunctor_3408_);
v___f_3420_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3420_, 0, v_toFunctor_3408_);
v___f_3421_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3421_, 0, v_toFunctor_3408_);
v___x_3422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3422_, 0, v___f_3420_);
lean_ctor_set(v___x_3422_, 1, v___f_3421_);
v___f_3423_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3423_, 0, v_toSeqRight_3411_);
v___f_3424_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3424_, 0, v_toSeqLeft_3410_);
v___f_3425_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3425_, 0, v_toSeq_3409_);
if (v_isShared_3414_ == 0)
{
lean_ctor_set(v___x_3413_, 4, v___f_3423_);
lean_ctor_set(v___x_3413_, 3, v___f_3424_);
lean_ctor_set(v___x_3413_, 2, v___f_3425_);
lean_ctor_set(v___x_3413_, 1, v___f_3418_);
lean_ctor_set(v___x_3413_, 0, v___x_3422_);
v___x_3427_ = v___x_3413_;
goto v_reusejp_3426_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v___x_3422_);
lean_ctor_set(v_reuseFailAlloc_3438_, 1, v___f_3418_);
lean_ctor_set(v_reuseFailAlloc_3438_, 2, v___f_3425_);
lean_ctor_set(v_reuseFailAlloc_3438_, 3, v___f_3424_);
lean_ctor_set(v_reuseFailAlloc_3438_, 4, v___f_3423_);
v___x_3427_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3426_;
}
v_reusejp_3426_:
{
lean_object* v___x_3429_; 
if (v_isShared_3407_ == 0)
{
lean_ctor_set(v___x_3406_, 1, v___f_3419_);
lean_ctor_set(v___x_3406_, 0, v___x_3427_);
v___x_3429_ = v___x_3406_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v___x_3427_);
lean_ctor_set(v_reuseFailAlloc_3437_, 1, v___f_3419_);
v___x_3429_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
lean_object* v___f_3430_; lean_object* v___x_3431_; size_t v_sz_3432_; size_t v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; 
lean_inc_ref(v___x_3429_);
lean_inc(v_toBind_3386_);
lean_inc(v_inst_3366_);
lean_inc_ref(v_revertArgs_3374_);
v___f_3430_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed), 21, 20);
lean_closure_set(v___f_3430_, 0, v_toApplicative_3385_);
lean_closure_set(v___f_3430_, 1, v_revertArgs_3374_);
lean_closure_set(v___f_3430_, 2, v_l_3367_);
lean_closure_set(v___f_3430_, 3, v_cl_3368_);
lean_closure_set(v___f_3430_, 4, v_hyps_3370_);
lean_closure_set(v___f_3430_, 5, v_target_3376_);
lean_closure_set(v___f_3430_, 6, v_inst_3366_);
lean_closure_set(v___f_3430_, 7, v_toBind_3386_);
lean_closure_set(v___f_3430_, 8, v_a_3377_);
lean_closure_set(v___f_3430_, 9, v_n_3378_);
lean_closure_set(v___f_3430_, 10, v_f_3379_);
lean_closure_set(v___f_3430_, 11, v_u_3373_);
lean_closure_set(v___f_3430_, 12, v_k_3380_);
lean_closure_set(v___f_3430_, 13, v___x_3381_);
lean_closure_set(v___f_3430_, 14, v___f_3382_);
lean_closure_set(v___f_3430_, 15, v___x_3429_);
lean_closure_set(v___f_3430_, 16, v_inst_3383_);
lean_closure_set(v___f_3430_, 17, v_inst_3365_);
lean_closure_set(v___f_3430_, 18, v___f_3417_);
lean_closure_set(v___f_3430_, 19, v___f_3415_);
v___x_3431_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0));
v_sz_3432_ = lean_array_size(v_revertArgs_3374_);
v___x_3433_ = ((size_t)0ULL);
v___x_3434_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3429_, v___x_3431_, v_sz_3432_, v___x_3433_, v_revertArgs_3374_);
v___x_3435_ = lean_apply_2(v_inst_3366_, lean_box(0), v___x_3434_);
v___x_3436_ = lean_apply_4(v_toBind_3386_, lean_box(0), lean_box(0), v___x_3435_, v___f_3430_);
return v___x_3436_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed(lean_object** _args){
lean_object* v_inst_3443_ = _args[0];
lean_object* v_inst_3444_ = _args[1];
lean_object* v_l_3445_ = _args[2];
lean_object* v_cl_3446_ = _args[3];
lean_object* v_hypName_3447_ = _args[4];
lean_object* v_hyps_3448_ = _args[5];
lean_object* v___x_3449_ = _args[6];
lean_object* v___f_3450_ = _args[7];
lean_object* v_u_3451_ = _args[8];
lean_object* v_revertArgs_3452_ = _args[9];
lean_object* v___f_3453_ = _args[10];
lean_object* v_target_3454_ = _args[11];
lean_object* v_a_3455_ = _args[12];
lean_object* v_n_3456_ = _args[13];
lean_object* v_f_3457_ = _args[14];
lean_object* v_k_3458_ = _args[15];
lean_object* v___x_3459_ = _args[16];
lean_object* v___f_3460_ = _args[17];
lean_object* v_inst_3461_ = _args[18];
lean_object* v_____r_3462_ = _args[19];
_start:
{
uint8_t v___x_1553__boxed_3463_; lean_object* v_res_3464_; 
v___x_1553__boxed_3463_ = lean_unbox(v___x_3449_);
v_res_3464_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__10(v_inst_3443_, v_inst_3444_, v_l_3445_, v_cl_3446_, v_hypName_3447_, v_hyps_3448_, v___x_1553__boxed_3463_, v___f_3450_, v_u_3451_, v_revertArgs_3452_, v___f_3453_, v_target_3454_, v_a_3455_, v_n_3456_, v_f_3457_, v_k_3458_, v___x_3459_, v___f_3460_, v_inst_3461_, v_____r_3462_);
return v_res_3464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg(lean_object* v_inst_3466_, lean_object* v_inst_3467_, lean_object* v_inst_3468_, lean_object* v_goal_3469_, lean_object* v_n_3470_, lean_object* v_hypName_3471_, lean_object* v_k_3472_){
_start:
{
lean_object* v___x_3473_; uint8_t v___x_3474_; 
v___x_3473_ = lean_unsigned_to_nat(0u);
v___x_3474_ = lean_nat_dec_eq(v_n_3470_, v___x_3473_);
if (v___x_3474_ == 0)
{
lean_object* v_u_3475_; lean_object* v_l_3476_; lean_object* v_cl_3477_; lean_object* v_hyps_3478_; lean_object* v_target_3479_; lean_object* v___x_3481_; uint8_t v_isShared_3482_; uint8_t v_isSharedCheck_3583_; 
v_u_3475_ = lean_ctor_get(v_goal_3469_, 0);
v_l_3476_ = lean_ctor_get(v_goal_3469_, 1);
v_cl_3477_ = lean_ctor_get(v_goal_3469_, 2);
v_hyps_3478_ = lean_ctor_get(v_goal_3469_, 3);
v_target_3479_ = lean_ctor_get(v_goal_3469_, 4);
v_isSharedCheck_3583_ = !lean_is_exclusive(v_goal_3469_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3481_ = v_goal_3469_;
v_isShared_3482_ = v_isSharedCheck_3583_;
goto v_resetjp_3480_;
}
else
{
lean_inc(v_target_3479_);
lean_inc(v_hyps_3478_);
lean_inc(v_cl_3477_);
lean_inc(v_l_3476_);
lean_inc(v_u_3475_);
lean_dec(v_goal_3469_);
v___x_3481_ = lean_box(0);
v_isShared_3482_ = v_isSharedCheck_3583_;
goto v_resetjp_3480_;
}
v_resetjp_3480_:
{
lean_object* v___f_3483_; lean_object* v___f_3484_; lean_object* v___f_3485_; lean_object* v___f_3486_; lean_object* v_T_3487_; lean_object* v_f_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v_a_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v_revertArgs_3495_; lean_object* v___x_3496_; lean_object* v___f_3497_; lean_object* v___x_3498_; uint8_t v___x_3499_; 
v___f_3483_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0));
lean_inc_n(v_hypName_3471_, 2);
v___f_3484_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3484_, 0, v_hypName_3471_);
lean_inc_n(v_inst_3468_, 2);
v___f_3485_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3485_, 0, v_inst_3468_);
v___f_3486_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___closed__0));
v_T_3487_ = l_Lean_Expr_consumeMData(v_target_3479_);
v_f_3488_ = l_Lean_Expr_getAppFn(v_T_3487_);
v___x_3489_ = l_Lean_Expr_getAppNumArgs(v_T_3487_);
v___x_3490_ = lean_mk_empty_array_with_capacity(v___x_3489_);
lean_dec(v___x_3489_);
lean_inc_ref(v_T_3487_);
v_a_3491_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_T_3487_, v___x_3490_);
lean_inc_n(v_n_3470_, 2);
lean_inc_ref_n(v_a_3491_, 2);
v___x_3492_ = l_Array_toSubarray___redArg(v_a_3491_, v___x_3473_, v_n_3470_);
v___x_3493_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1));
v___x_3494_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(v___f_3483_, v___x_3492_, v___x_3493_);
v_revertArgs_3495_ = l_Array_reverse___redArg(v___x_3494_);
v___x_3496_ = lean_box(v___x_3474_);
lean_inc_ref(v_inst_3467_);
lean_inc(v_k_3472_);
lean_inc_ref(v_f_3488_);
lean_inc_ref(v_target_3479_);
lean_inc_ref(v___f_3485_);
lean_inc_ref(v_revertArgs_3495_);
lean_inc(v_u_3475_);
lean_inc_ref(v___f_3484_);
lean_inc_ref(v_hyps_3478_);
lean_inc_ref(v_cl_3477_);
lean_inc_ref(v_l_3476_);
lean_inc_ref(v_inst_3466_);
v___f_3497_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed), 20, 19);
lean_closure_set(v___f_3497_, 0, v_inst_3466_);
lean_closure_set(v___f_3497_, 1, v_inst_3468_);
lean_closure_set(v___f_3497_, 2, v_l_3476_);
lean_closure_set(v___f_3497_, 3, v_cl_3477_);
lean_closure_set(v___f_3497_, 4, v_hypName_3471_);
lean_closure_set(v___f_3497_, 5, v_hyps_3478_);
lean_closure_set(v___f_3497_, 6, v___x_3496_);
lean_closure_set(v___f_3497_, 7, v___f_3484_);
lean_closure_set(v___f_3497_, 8, v_u_3475_);
lean_closure_set(v___f_3497_, 9, v_revertArgs_3495_);
lean_closure_set(v___f_3497_, 10, v___f_3485_);
lean_closure_set(v___f_3497_, 11, v_target_3479_);
lean_closure_set(v___f_3497_, 12, v_a_3491_);
lean_closure_set(v___f_3497_, 13, v_n_3470_);
lean_closure_set(v___f_3497_, 14, v_f_3488_);
lean_closure_set(v___f_3497_, 15, v_k_3472_);
lean_closure_set(v___f_3497_, 16, v___x_3473_);
lean_closure_set(v___f_3497_, 17, v___f_3486_);
lean_closure_set(v___f_3497_, 18, v_inst_3467_);
v___x_3498_ = lean_array_get_size(v_revertArgs_3495_);
v___x_3499_ = lean_nat_dec_eq(v___x_3498_, v_n_3470_);
if (v___x_3499_ == 0)
{
lean_object* v_toBind_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3579_; 
lean_dec_ref(v_revertArgs_3495_);
lean_dec_ref(v_a_3491_);
lean_dec_ref(v_f_3488_);
lean_dec_ref(v___f_3485_);
lean_dec_ref(v___f_3484_);
lean_dec_ref(v_target_3479_);
lean_dec_ref(v_hyps_3478_);
lean_dec_ref(v_cl_3477_);
lean_dec_ref(v_l_3476_);
lean_dec(v_u_3475_);
lean_dec(v_k_3472_);
lean_dec(v_hypName_3471_);
lean_dec_ref(v_inst_3467_);
v_toBind_3500_ = lean_ctor_get(v_inst_3466_, 1);
v_isSharedCheck_3579_ = !lean_is_exclusive(v_inst_3466_);
if (v_isSharedCheck_3579_ == 0)
{
lean_object* v_unused_3580_; 
v_unused_3580_ = lean_ctor_get(v_inst_3466_, 0);
lean_dec(v_unused_3580_);
v___x_3502_ = v_inst_3466_;
v_isShared_3503_ = v_isSharedCheck_3579_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_toBind_3500_);
lean_dec(v_inst_3466_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3579_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3504_; lean_object* v_toApplicative_3505_; lean_object* v_toFunctor_3506_; lean_object* v_toSeq_3507_; lean_object* v_toSeqLeft_3508_; lean_object* v_toSeqRight_3509_; lean_object* v___f_3510_; lean_object* v___f_3511_; lean_object* v___f_3512_; lean_object* v___f_3513_; lean_object* v___x_3514_; lean_object* v___f_3515_; lean_object* v___f_3516_; lean_object* v___f_3517_; lean_object* v___x_3519_; 
v___x_3504_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__1);
v_toApplicative_3505_ = lean_ctor_get(v___x_3504_, 0);
v_toFunctor_3506_ = lean_ctor_get(v_toApplicative_3505_, 0);
v_toSeq_3507_ = lean_ctor_get(v_toApplicative_3505_, 2);
v_toSeqLeft_3508_ = lean_ctor_get(v_toApplicative_3505_, 3);
v_toSeqRight_3509_ = lean_ctor_get(v_toApplicative_3505_, 4);
v___f_3510_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__2));
v___f_3511_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3506_, 2);
v___f_3512_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3512_, 0, v_toFunctor_3506_);
v___f_3513_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3513_, 0, v_toFunctor_3506_);
v___x_3514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3514_, 0, v___f_3512_);
lean_ctor_set(v___x_3514_, 1, v___f_3513_);
lean_inc(v_toSeqRight_3509_);
v___f_3515_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3515_, 0, v_toSeqRight_3509_);
lean_inc(v_toSeqLeft_3508_);
v___f_3516_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3516_, 0, v_toSeqLeft_3508_);
lean_inc(v_toSeq_3507_);
v___f_3517_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3517_, 0, v_toSeq_3507_);
if (v_isShared_3482_ == 0)
{
lean_ctor_set(v___x_3481_, 4, v___f_3515_);
lean_ctor_set(v___x_3481_, 3, v___f_3516_);
lean_ctor_set(v___x_3481_, 2, v___f_3517_);
lean_ctor_set(v___x_3481_, 1, v___f_3510_);
lean_ctor_set(v___x_3481_, 0, v___x_3514_);
v___x_3519_ = v___x_3481_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3578_; 
v_reuseFailAlloc_3578_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3578_, 0, v___x_3514_);
lean_ctor_set(v_reuseFailAlloc_3578_, 1, v___f_3510_);
lean_ctor_set(v_reuseFailAlloc_3578_, 2, v___f_3517_);
lean_ctor_set(v_reuseFailAlloc_3578_, 3, v___f_3516_);
lean_ctor_set(v_reuseFailAlloc_3578_, 4, v___f_3515_);
v___x_3519_ = v_reuseFailAlloc_3578_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
lean_object* v___x_3521_; 
if (v_isShared_3503_ == 0)
{
lean_ctor_set(v___x_3502_, 1, v___f_3511_);
lean_ctor_set(v___x_3502_, 0, v___x_3519_);
v___x_3521_ = v___x_3502_;
goto v_reusejp_3520_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v___x_3519_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v___f_3511_);
v___x_3521_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3520_;
}
v_reusejp_3520_:
{
lean_object* v___x_3522_; lean_object* v_toApplicative_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3575_; 
v___x_3522_ = l_StateRefT_x27_instMonad___redArg(v___x_3521_);
v_toApplicative_3523_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3575_ == 0)
{
lean_object* v_unused_3576_; 
v_unused_3576_ = lean_ctor_get(v___x_3522_, 1);
lean_dec(v_unused_3576_);
v___x_3525_ = v___x_3522_;
v_isShared_3526_ = v_isSharedCheck_3575_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_toApplicative_3523_);
lean_dec(v___x_3522_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3575_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
lean_object* v_toFunctor_3527_; lean_object* v_toSeq_3528_; lean_object* v_toSeqLeft_3529_; lean_object* v_toSeqRight_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3573_; 
v_toFunctor_3527_ = lean_ctor_get(v_toApplicative_3523_, 0);
v_toSeq_3528_ = lean_ctor_get(v_toApplicative_3523_, 2);
v_toSeqLeft_3529_ = lean_ctor_get(v_toApplicative_3523_, 3);
v_toSeqRight_3530_ = lean_ctor_get(v_toApplicative_3523_, 4);
v_isSharedCheck_3573_ = !lean_is_exclusive(v_toApplicative_3523_);
if (v_isSharedCheck_3573_ == 0)
{
lean_object* v_unused_3574_; 
v_unused_3574_ = lean_ctor_get(v_toApplicative_3523_, 1);
lean_dec(v_unused_3574_);
v___x_3532_ = v_toApplicative_3523_;
v_isShared_3533_ = v_isSharedCheck_3573_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_toSeqRight_3530_);
lean_inc(v_toSeqLeft_3529_);
lean_inc(v_toSeq_3528_);
lean_inc(v_toFunctor_3527_);
lean_dec(v_toApplicative_3523_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3573_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
lean_object* v___f_3534_; lean_object* v___f_3535_; lean_object* v___f_3536_; lean_object* v___f_3537_; lean_object* v___x_3538_; lean_object* v___f_3539_; lean_object* v___f_3540_; lean_object* v___f_3541_; lean_object* v___x_3543_; 
v___f_3534_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__4));
v___f_3535_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__5));
lean_inc_ref(v_toFunctor_3527_);
v___f_3536_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3536_, 0, v_toFunctor_3527_);
v___f_3537_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3537_, 0, v_toFunctor_3527_);
v___x_3538_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3538_, 0, v___f_3536_);
lean_ctor_set(v___x_3538_, 1, v___f_3537_);
v___f_3539_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3539_, 0, v_toSeqRight_3530_);
v___f_3540_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3540_, 0, v_toSeqLeft_3529_);
v___f_3541_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3541_, 0, v_toSeq_3528_);
if (v_isShared_3533_ == 0)
{
lean_ctor_set(v___x_3532_, 4, v___f_3539_);
lean_ctor_set(v___x_3532_, 3, v___f_3540_);
lean_ctor_set(v___x_3532_, 2, v___f_3541_);
lean_ctor_set(v___x_3532_, 1, v___f_3534_);
lean_ctor_set(v___x_3532_, 0, v___x_3538_);
v___x_3543_ = v___x_3532_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v___x_3538_);
lean_ctor_set(v_reuseFailAlloc_3572_, 1, v___f_3534_);
lean_ctor_set(v_reuseFailAlloc_3572_, 2, v___f_3541_);
lean_ctor_set(v_reuseFailAlloc_3572_, 3, v___f_3540_);
lean_ctor_set(v_reuseFailAlloc_3572_, 4, v___f_3539_);
v___x_3543_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
lean_object* v___x_3545_; 
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 1, v___f_3535_);
lean_ctor_set(v___x_3525_, 0, v___x_3543_);
v___x_3545_ = v___x_3525_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v___x_3543_);
lean_ctor_set(v_reuseFailAlloc_3571_, 1, v___f_3535_);
v___x_3545_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; lean_object* v_toMonadRef_3548_; lean_object* v___f_3549_; lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; lean_object* v___x_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; 
v___x_3546_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__11);
v___x_3547_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___closed__17);
v_toMonadRef_3548_ = lean_ctor_get(v___x_3547_, 0);
v___f_3549_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__21), 2, 1);
lean_closure_set(v___f_3549_, 0, v___f_3497_);
v___x_3550_ = l_Lean_Meta_instAddMessageContextMetaM;
lean_inc_ref(v___x_3545_);
v___x_3551_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_3550_, v___x_3545_);
lean_inc_ref(v_toMonadRef_3548_);
v___x_3552_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3546_);
lean_ctor_set(v___x_3552_, 1, v_toMonadRef_3548_);
lean_ctor_set(v___x_3552_, 2, v___x_3551_);
v___x_3553_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3);
v___x_3554_ = l_Nat_reprFast(v_n_3470_);
v___x_3555_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3555_, 0, v___x_3554_);
v___x_3556_ = l_Lean_MessageData_ofFormat(v___x_3555_);
v___x_3557_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3557_, 0, v___x_3553_);
lean_ctor_set(v___x_3557_, 1, v___x_3556_);
v___x_3558_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5);
v___x_3559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3559_, 0, v___x_3557_);
lean_ctor_set(v___x_3559_, 1, v___x_3558_);
v___x_3560_ = l_Lean_MessageData_ofExpr(v_T_3487_);
v___x_3561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3561_, 0, v___x_3559_);
lean_ctor_set(v___x_3561_, 1, v___x_3560_);
v___x_3562_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7);
v___x_3563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3563_, 0, v___x_3561_);
lean_ctor_set(v___x_3563_, 1, v___x_3562_);
v___x_3564_ = l_Nat_reprFast(v___x_3498_);
v___x_3565_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3564_);
v___x_3566_ = l_Lean_MessageData_ofFormat(v___x_3565_);
v___x_3567_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3567_, 0, v___x_3563_);
lean_ctor_set(v___x_3567_, 1, v___x_3566_);
v___x_3568_ = l_Lean_throwError___redArg(v___x_3545_, v___x_3552_, v___x_3567_);
v___x_3569_ = lean_apply_2(v_inst_3468_, lean_box(0), v___x_3568_);
v___x_3570_ = lean_apply_4(v_toBind_3500_, lean_box(0), lean_box(0), v___x_3569_, v___f_3549_);
return v___x_3570_;
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
lean_object* v___x_3581_; lean_object* v___x_3582_; 
lean_dec_ref(v___f_3497_);
lean_dec_ref(v_T_3487_);
lean_del_object(v___x_3481_);
v___x_3581_ = lean_box(0);
v___x_3582_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__10(v_inst_3466_, v_inst_3468_, v_l_3476_, v_cl_3477_, v_hypName_3471_, v_hyps_3478_, v___x_3474_, v___f_3484_, v_u_3475_, v_revertArgs_3495_, v___f_3485_, v_target_3479_, v_a_3491_, v_n_3470_, v_f_3488_, v_k_3472_, v___x_3473_, v___f_3486_, v_inst_3467_, v___x_3581_);
return v___x_3582_;
}
}
}
else
{
lean_object* v___x_3584_; 
lean_dec(v_hypName_3471_);
lean_dec(v_n_3470_);
lean_dec(v_inst_3468_);
lean_dec_ref(v_inst_3467_);
lean_dec_ref(v_inst_3466_);
v___x_3584_ = lean_apply_1(v_k_3472_, v_goal_3469_);
return v___x_3584_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN(lean_object* v_m_3585_, lean_object* v_inst_3586_, lean_object* v_inst_3587_, lean_object* v_inst_3588_, lean_object* v_goal_3589_, lean_object* v_n_3590_, lean_object* v_hypName_3591_, lean_object* v_k_3592_){
_start:
{
lean_object* v___x_3593_; 
v___x_3593_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg(v_inst_3586_, v_inst_3587_, v_inst_3588_, v_goal_3589_, v_n_3590_, v_hypName_3591_, v_k_3592_);
return v___x_3593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1(lean_object* v_goal_3598_, lean_object* v_ref_3599_, lean_object* v_k_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_){
_start:
{
lean_object* v___x_3610_; 
lean_inc_ref(v_goal_3598_);
v___x_3610_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_focusHypWithInfo(v_goal_3598_, v_ref_3599_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_);
if (lean_obj_tag(v___x_3610_) == 0)
{
lean_object* v_a_3611_; lean_object* v_u_3612_; lean_object* v_l_3613_; lean_object* v_cl_3614_; lean_object* v_hyps_3615_; lean_object* v_target_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3653_; 
v_a_3611_ = lean_ctor_get(v___x_3610_, 0);
lean_inc(v_a_3611_);
lean_dec_ref_known(v___x_3610_, 1);
v_u_3612_ = lean_ctor_get(v_goal_3598_, 0);
v_l_3613_ = lean_ctor_get(v_goal_3598_, 1);
v_cl_3614_ = lean_ctor_get(v_goal_3598_, 2);
v_hyps_3615_ = lean_ctor_get(v_goal_3598_, 3);
v_target_3616_ = lean_ctor_get(v_goal_3598_, 4);
v_isSharedCheck_3653_ = !lean_is_exclusive(v_goal_3598_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3618_ = v_goal_3598_;
v_isShared_3619_ = v_isSharedCheck_3653_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_target_3616_);
lean_inc(v_hyps_3615_);
lean_inc(v_cl_3614_);
lean_inc(v_l_3613_);
lean_inc(v_u_3612_);
lean_dec(v_goal_3598_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3653_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v_focusHyp_3620_; lean_object* v_restHyps_3621_; lean_object* v_proof_3622_; lean_object* v___x_3623_; lean_object* v___y_3625_; lean_object* v___x_3651_; 
v_focusHyp_3620_ = lean_ctor_get(v_a_3611_, 0);
lean_inc_ref(v_focusHyp_3620_);
v_restHyps_3621_ = lean_ctor_get(v_a_3611_, 1);
lean_inc_ref(v_restHyps_3621_);
v_proof_3622_ = lean_ctor_get(v_a_3611_, 2);
lean_inc_ref(v_proof_3622_);
lean_dec(v_a_3611_);
v___x_3623_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__2___closed__2));
v___x_3651_ = l_Lean_Level_dec(v_u_3612_);
if (lean_obj_tag(v___x_3651_) == 0)
{
lean_inc(v_u_3612_);
v___y_3625_ = v_u_3612_;
goto v___jp_3624_;
}
else
{
lean_object* v_val_3652_; 
v_val_3652_ = lean_ctor_get(v___x_3651_, 0);
lean_inc(v_val_3652_);
lean_dec_ref_known(v___x_3651_, 1);
v___y_3625_ = v_val_3652_;
goto v___jp_3624_;
}
v___jp_3624_:
{
lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v_himpTarget_3629_; lean_object* v___x_3631_; 
v___x_3626_ = lean_box(0);
v___x_3627_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3627_, 0, v___y_3625_);
lean_ctor_set(v___x_3627_, 1, v___x_3626_);
lean_inc_ref(v___x_3627_);
v___x_3628_ = l_Lean_mkConst(v___x_3623_, v___x_3627_);
lean_inc_ref(v_target_3616_);
lean_inc_ref(v_focusHyp_3620_);
lean_inc_ref_n(v_cl_3614_, 2);
lean_inc_ref_n(v_l_3613_, 2);
v_himpTarget_3629_ = l_Lean_mkApp4(v___x_3628_, v_l_3613_, v_cl_3614_, v_focusHyp_3620_, v_target_3616_);
lean_inc_ref(v_restHyps_3621_);
if (v_isShared_3619_ == 0)
{
lean_ctor_set(v___x_3618_, 4, v_himpTarget_3629_);
lean_ctor_set(v___x_3618_, 3, v_restHyps_3621_);
v___x_3631_ = v___x_3618_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3650_; 
v_reuseFailAlloc_3650_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3650_, 0, v_u_3612_);
lean_ctor_set(v_reuseFailAlloc_3650_, 1, v_l_3613_);
lean_ctor_set(v_reuseFailAlloc_3650_, 2, v_cl_3614_);
lean_ctor_set(v_reuseFailAlloc_3650_, 3, v_restHyps_3621_);
lean_ctor_set(v_reuseFailAlloc_3650_, 4, v_himpTarget_3629_);
v___x_3631_ = v_reuseFailAlloc_3650_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
lean_object* v___x_3632_; 
lean_inc(v___y_3608_);
lean_inc_ref(v___y_3607_);
lean_inc(v___y_3606_);
lean_inc_ref(v___y_3605_);
lean_inc(v___y_3604_);
lean_inc_ref(v___y_3603_);
lean_inc(v___y_3602_);
lean_inc_ref(v___y_3601_);
v___x_3632_ = lean_apply_10(v_k_3600_, v___x_3631_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_, lean_box(0));
if (lean_obj_tag(v___x_3632_) == 0)
{
lean_object* v_a_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; 
v_a_3633_ = lean_ctor_get(v___x_3632_, 0);
lean_inc(v_a_3633_);
lean_dec_ref_known(v___x_3632_, 1);
v___x_3634_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1___closed__0));
lean_inc_ref(v___x_3627_);
v___x_3635_ = l_Lean_mkConst(v___x_3634_, v___x_3627_);
lean_inc_ref(v_cl_3614_);
lean_inc_ref(v_l_3613_);
v___x_3636_ = l_Lean_mkAppB(v___x_3635_, v_l_3613_, v_cl_3614_);
v___x_3637_ = lean_box(0);
v___x_3638_ = l_Lean_Meta_synthInstance(v___x_3636_, v___x_3637_, v___y_3605_, v___y_3606_, v___y_3607_, v___y_3608_);
if (lean_obj_tag(v___x_3638_) == 0)
{
lean_object* v_a_3639_; lean_object* v___x_3641_; uint8_t v_isShared_3642_; uint8_t v_isSharedCheck_3649_; 
v_a_3639_ = lean_ctor_get(v___x_3638_, 0);
v_isSharedCheck_3649_ = !lean_is_exclusive(v___x_3638_);
if (v_isSharedCheck_3649_ == 0)
{
v___x_3641_ = v___x_3638_;
v_isShared_3642_ = v_isSharedCheck_3649_;
goto v_resetjp_3640_;
}
else
{
lean_inc(v_a_3639_);
lean_dec(v___x_3638_);
v___x_3641_ = lean_box(0);
v_isShared_3642_ = v_isSharedCheck_3649_;
goto v_resetjp_3640_;
}
v_resetjp_3640_:
{
lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v_prf_3645_; lean_object* v___x_3647_; 
v___x_3643_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__2));
v___x_3644_ = l_Lean_mkConst(v___x_3643_, v___x_3627_);
v_prf_3645_ = l_Lean_mkApp9(v___x_3644_, v_l_3613_, v_cl_3614_, v_a_3639_, v_hyps_3615_, v_restHyps_3621_, v_focusHyp_3620_, v_target_3616_, v_proof_3622_, v_a_3633_);
if (v_isShared_3642_ == 0)
{
lean_ctor_set(v___x_3641_, 0, v_prf_3645_);
v___x_3647_ = v___x_3641_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3648_; 
v_reuseFailAlloc_3648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3648_, 0, v_prf_3645_);
v___x_3647_ = v_reuseFailAlloc_3648_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
return v___x_3647_;
}
}
}
else
{
lean_dec(v_a_3633_);
lean_dec_ref_known(v___x_3627_, 2);
lean_dec_ref(v_proof_3622_);
lean_dec_ref(v_restHyps_3621_);
lean_dec_ref(v_focusHyp_3620_);
lean_dec_ref(v_target_3616_);
lean_dec_ref(v_hyps_3615_);
lean_dec_ref(v_cl_3614_);
lean_dec_ref(v_l_3613_);
return v___x_3638_;
}
}
else
{
lean_dec_ref_known(v___x_3627_, 2);
lean_dec_ref(v_proof_3622_);
lean_dec_ref(v_restHyps_3621_);
lean_dec_ref(v_focusHyp_3620_);
lean_dec_ref(v_target_3616_);
lean_dec_ref(v_hyps_3615_);
lean_dec_ref(v_cl_3614_);
lean_dec_ref(v_l_3613_);
return v___x_3632_;
}
}
}
}
}
else
{
lean_object* v_a_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3661_; 
lean_dec_ref(v_k_3600_);
lean_dec_ref(v_goal_3598_);
v_a_3654_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3661_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3661_ == 0)
{
v___x_3656_ = v___x_3610_;
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_a_3654_);
lean_dec(v___x_3610_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3661_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3659_; 
if (v_isShared_3657_ == 0)
{
v___x_3659_ = v___x_3656_;
goto v_reusejp_3658_;
}
else
{
lean_object* v_reuseFailAlloc_3660_; 
v_reuseFailAlloc_3660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3660_, 0, v_a_3654_);
v___x_3659_ = v_reuseFailAlloc_3660_;
goto v_reusejp_3658_;
}
v_reusejp_3658_:
{
return v___x_3659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1___boxed(lean_object* v_goal_3662_, lean_object* v_ref_3663_, lean_object* v_k_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_, lean_object* v___y_3673_){
_start:
{
lean_object* v_res_3674_; 
v_res_3674_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1(v_goal_3662_, v_ref_3663_, v_k_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_, v___y_3672_);
lean_dec(v___y_3672_);
lean_dec_ref(v___y_3671_);
lean_dec(v___y_3670_);
lean_dec_ref(v___y_3669_);
lean_dec(v___y_3668_);
lean_dec_ref(v___y_3667_);
lean_dec(v___y_3666_);
lean_dec_ref(v___y_3665_);
return v_res_3674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__0(lean_object* v_val_3675_, lean_object* v_newGoal_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_){
_start:
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3686_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_MGoal_toExpr(v_newGoal_3676_);
v___x_3687_ = lean_box(0);
v___x_3688_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_3686_, v___x_3687_, v___y_3681_, v___y_3682_, v___y_3683_, v___y_3684_);
if (lean_obj_tag(v___x_3688_) == 0)
{
lean_object* v_a_3689_; lean_object* v___x_3691_; uint8_t v_isShared_3692_; uint8_t v_isSharedCheck_3700_; 
v_a_3689_ = lean_ctor_get(v___x_3688_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3688_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3691_ = v___x_3688_;
v_isShared_3692_ = v_isSharedCheck_3700_;
goto v_resetjp_3690_;
}
else
{
lean_inc(v_a_3689_);
lean_dec(v___x_3688_);
v___x_3691_ = lean_box(0);
v_isShared_3692_ = v_isSharedCheck_3700_;
goto v_resetjp_3690_;
}
v_resetjp_3690_:
{
lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3696_; lean_object* v___x_3698_; 
v___x_3693_ = lean_st_ref_take(v_val_3675_);
v___x_3694_ = l_Lean_Expr_mvarId_x21(v_a_3689_);
v___x_3695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3695_, 0, v___x_3694_);
lean_ctor_set(v___x_3695_, 1, v___x_3693_);
v___x_3696_ = lean_st_ref_set(v_val_3675_, v___x_3695_);
if (v_isShared_3692_ == 0)
{
v___x_3698_ = v___x_3691_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3689_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
else
{
return v___x_3688_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__0___boxed(lean_object* v_val_3701_, lean_object* v_newGoal_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_){
_start:
{
lean_object* v_res_3712_; 
v_res_3712_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__0(v_val_3701_, v_newGoal_3702_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_);
lean_dec(v___y_3710_);
lean_dec_ref(v___y_3709_);
lean_dec(v___y_3708_);
lean_dec_ref(v___y_3707_);
lean_dec(v___y_3706_);
lean_dec_ref(v___y_3705_);
lean_dec(v___y_3704_);
lean_dec_ref(v___y_3703_);
lean_dec(v_val_3701_);
return v_res_3712_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0_spec__0(lean_object* v_as_3713_, size_t v_i_3714_, size_t v_stop_3715_, lean_object* v_b_3716_){
_start:
{
uint8_t v___x_3717_; 
v___x_3717_ = lean_usize_dec_eq(v_i_3714_, v_stop_3715_);
if (v___x_3717_ == 0)
{
size_t v___x_3718_; size_t v___x_3719_; lean_object* v___x_3720_; lean_object* v___x_3721_; uint8_t v___x_3722_; lean_object* v___x_3723_; 
v___x_3718_ = ((size_t)1ULL);
v___x_3719_ = lean_usize_sub(v_i_3714_, v___x_3718_);
v___x_3720_ = lean_array_uget_borrowed(v_as_3713_, v___x_3719_);
v___x_3721_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1));
v___x_3722_ = 0;
lean_inc(v___x_3720_);
v___x_3723_ = l_Lean_Expr_forallE___override(v___x_3721_, v___x_3720_, v_b_3716_, v___x_3722_);
v_i_3714_ = v___x_3719_;
v_b_3716_ = v___x_3723_;
goto _start;
}
else
{
return v_b_3716_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0_spec__0___boxed(lean_object* v_as_3725_, lean_object* v_i_3726_, lean_object* v_stop_3727_, lean_object* v_b_3728_){
_start:
{
size_t v_i_boxed_3729_; size_t v_stop_boxed_3730_; lean_object* v_res_3731_; 
v_i_boxed_3729_ = lean_unbox_usize(v_i_3726_);
lean_dec(v_i_3726_);
v_stop_boxed_3730_ = lean_unbox_usize(v_stop_3727_);
lean_dec(v_stop_3727_);
v_res_3731_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0_spec__0(v_as_3725_, v_i_boxed_3729_, v_stop_boxed_3730_, v_b_3728_);
lean_dec_ref(v_as_3725_);
return v_res_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0___lam__0(lean_object* v_revertArgs_3732_, lean_object* v_hypName_3733_, lean_object* v_l_3734_, lean_object* v_cl_3735_, uint8_t v___x_3736_, lean_object* v_hyps_3737_, lean_object* v_u_3738_, lean_object* v_ss_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_){
_start:
{
lean_object* v___x_3749_; size_t v_sz_3750_; size_t v___x_3751_; lean_object* v___x_3752_; 
v___x_3749_ = l_Array_zip___redArg(v_revertArgs_3732_, v_ss_3739_);
v_sz_3750_ = lean_array_size(v___x_3749_);
v___x_3751_ = ((size_t)0ULL);
v___x_3752_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(v_sz_3750_, v___x_3751_, v___x_3749_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_);
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_a_3753_; lean_object* v_eqs_3754_; lean_object* v_00_u03c6_3755_; lean_object* v___y_3757_; lean_object* v___x_3801_; 
v_a_3753_ = lean_ctor_get(v___x_3752_, 0);
lean_inc(v_a_3753_);
lean_dec_ref_known(v___x_3752_, 1);
v_eqs_3754_ = lean_array_to_list(v_a_3753_);
v_00_u03c6_3755_ = l_Lean_mkAndN(v_eqs_3754_);
v___x_3801_ = l_Lean_Level_dec(v_u_3738_);
if (lean_obj_tag(v___x_3801_) == 0)
{
v___y_3757_ = v_u_3738_;
goto v___jp_3756_;
}
else
{
lean_object* v_val_3802_; 
lean_dec(v_u_3738_);
v_val_3802_ = lean_ctor_get(v___x_3801_, 0);
lean_inc(v_val_3802_);
lean_dec_ref_known(v___x_3801_, 1);
v___y_3757_ = v_val_3802_;
goto v___jp_3756_;
}
v___jp_3756_:
{
lean_object* v___x_3758_; 
lean_inc(v_hypName_3733_);
v___x_3758_ = l_Lean_Core_mkFreshUserName(v_hypName_3733_, v___y_3746_, v___y_3747_);
if (lean_obj_tag(v___x_3758_) == 0)
{
lean_object* v_a_3759_; lean_object* v_00_u03c6_3760_; uint8_t v___x_3761_; uint8_t v___x_3762_; lean_object* v___x_3763_; 
v_a_3759_ = lean_ctor_get(v___x_3758_, 0);
lean_inc(v_a_3759_);
lean_dec_ref_known(v___x_3758_, 1);
v_00_u03c6_3760_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkPure(v___y_3757_, v_l_3734_, v_cl_3735_, v_00_u03c6_3755_);
v___x_3761_ = 1;
v___x_3762_ = 1;
v___x_3763_ = l_Lean_Meta_mkLambdaFVars(v_ss_3739_, v_00_u03c6_3760_, v___x_3736_, v___x_3761_, v___x_3736_, v___x_3761_, v___x_3762_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_);
if (lean_obj_tag(v___x_3763_) == 0)
{
lean_object* v_a_3764_; lean_object* v___x_3765_; 
v_a_3764_ = lean_ctor_get(v___x_3763_, 0);
lean_inc(v_a_3764_);
lean_dec_ref_known(v___x_3763_, 1);
v___x_3765_ = l_Lean_Meta_mkLambdaFVars(v_ss_3739_, v_hyps_3737_, v___x_3736_, v___x_3761_, v___x_3736_, v___x_3761_, v___x_3762_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_);
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v_a_3766_; lean_object* v___x_3768_; uint8_t v_isShared_3769_; uint8_t v_isSharedCheck_3776_; 
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3776_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3776_ == 0)
{
v___x_3768_ = v___x_3765_;
v_isShared_3769_ = v_isSharedCheck_3776_;
goto v_resetjp_3767_;
}
else
{
lean_inc(v_a_3766_);
lean_dec(v___x_3765_);
v___x_3768_ = lean_box(0);
v_isShared_3769_ = v_isSharedCheck_3776_;
goto v_resetjp_3767_;
}
v_resetjp_3767_:
{
lean_object* v___x_3770_; lean_object* v_00_u03c6_3771_; lean_object* v___x_3772_; lean_object* v___x_3774_; 
v___x_3770_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3770_, 0, v_hypName_3733_);
lean_ctor_set(v___x_3770_, 1, v_a_3759_);
lean_ctor_set(v___x_3770_, 2, v_a_3764_);
v_00_u03c6_3771_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_Hyp_toExpr(v___x_3770_);
v___x_3772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3772_, 0, v_a_3766_);
lean_ctor_set(v___x_3772_, 1, v_00_u03c6_3771_);
if (v_isShared_3769_ == 0)
{
lean_ctor_set(v___x_3768_, 0, v___x_3772_);
v___x_3774_ = v___x_3768_;
goto v_reusejp_3773_;
}
else
{
lean_object* v_reuseFailAlloc_3775_; 
v_reuseFailAlloc_3775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3775_, 0, v___x_3772_);
v___x_3774_ = v_reuseFailAlloc_3775_;
goto v_reusejp_3773_;
}
v_reusejp_3773_:
{
return v___x_3774_;
}
}
}
else
{
lean_object* v_a_3777_; lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3784_; 
lean_dec(v_a_3764_);
lean_dec(v_a_3759_);
lean_dec(v_hypName_3733_);
v_a_3777_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3779_ = v___x_3765_;
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
else
{
lean_inc(v_a_3777_);
lean_dec(v___x_3765_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3784_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3782_; 
if (v_isShared_3780_ == 0)
{
v___x_3782_ = v___x_3779_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v_a_3777_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
}
else
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3792_; 
lean_dec(v_a_3759_);
lean_dec_ref(v_hyps_3737_);
lean_dec(v_hypName_3733_);
v_a_3785_ = lean_ctor_get(v___x_3763_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v___x_3763_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3787_ = v___x_3763_;
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v___x_3763_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
lean_object* v___x_3790_; 
if (v_isShared_3788_ == 0)
{
v___x_3790_ = v___x_3787_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_a_3785_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
return v___x_3790_;
}
}
}
}
else
{
lean_object* v_a_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3800_; 
lean_dec(v___y_3757_);
lean_dec_ref(v_00_u03c6_3755_);
lean_dec_ref(v_hyps_3737_);
lean_dec_ref(v_cl_3735_);
lean_dec_ref(v_l_3734_);
lean_dec(v_hypName_3733_);
v_a_3793_ = lean_ctor_get(v___x_3758_, 0);
v_isSharedCheck_3800_ = !lean_is_exclusive(v___x_3758_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3795_ = v___x_3758_;
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_a_3793_);
lean_dec(v___x_3758_);
v___x_3795_ = lean_box(0);
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
v_resetjp_3794_:
{
lean_object* v___x_3798_; 
if (v_isShared_3796_ == 0)
{
v___x_3798_ = v___x_3795_;
goto v_reusejp_3797_;
}
else
{
lean_object* v_reuseFailAlloc_3799_; 
v_reuseFailAlloc_3799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3799_, 0, v_a_3793_);
v___x_3798_ = v_reuseFailAlloc_3799_;
goto v_reusejp_3797_;
}
v_reusejp_3797_:
{
return v___x_3798_;
}
}
}
}
}
else
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3810_; 
lean_dec(v_u_3738_);
lean_dec_ref(v_hyps_3737_);
lean_dec_ref(v_cl_3735_);
lean_dec_ref(v_l_3734_);
lean_dec(v_hypName_3733_);
v_a_3803_ = lean_ctor_get(v___x_3752_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v___x_3752_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3805_ = v___x_3752_;
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v___x_3752_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3808_; 
if (v_isShared_3806_ == 0)
{
v___x_3808_ = v___x_3805_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3803_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
return v___x_3808_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0___lam__0___boxed(lean_object** _args){
lean_object* v_revertArgs_3811_ = _args[0];
lean_object* v_hypName_3812_ = _args[1];
lean_object* v_l_3813_ = _args[2];
lean_object* v_cl_3814_ = _args[3];
lean_object* v___x_3815_ = _args[4];
lean_object* v_hyps_3816_ = _args[5];
lean_object* v_u_3817_ = _args[6];
lean_object* v_ss_3818_ = _args[7];
lean_object* v___y_3819_ = _args[8];
lean_object* v___y_3820_ = _args[9];
lean_object* v___y_3821_ = _args[10];
lean_object* v___y_3822_ = _args[11];
lean_object* v___y_3823_ = _args[12];
lean_object* v___y_3824_ = _args[13];
lean_object* v___y_3825_ = _args[14];
lean_object* v___y_3826_ = _args[15];
lean_object* v___y_3827_ = _args[16];
_start:
{
uint8_t v___x_13492__boxed_3828_; lean_object* v_res_3829_; 
v___x_13492__boxed_3828_ = lean_unbox(v___x_3815_);
v_res_3829_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0___lam__0(v_revertArgs_3811_, v_hypName_3812_, v_l_3813_, v_cl_3814_, v___x_13492__boxed_3828_, v_hyps_3816_, v_u_3817_, v_ss_3818_, v___y_3819_, v___y_3820_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_, v___y_3825_, v___y_3826_);
lean_dec(v___y_3826_);
lean_dec_ref(v___y_3825_);
lean_dec(v___y_3824_);
lean_dec_ref(v___y_3823_);
lean_dec(v___y_3822_);
lean_dec_ref(v___y_3821_);
lean_dec(v___y_3820_);
lean_dec_ref(v___y_3819_);
lean_dec_ref(v_ss_3818_);
lean_dec_ref(v_revertArgs_3811_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0(lean_object* v_goal_3830_, lean_object* v_n_3831_, lean_object* v_hypName_3832_, lean_object* v_k_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_){
_start:
{
lean_object* v___x_3843_; uint8_t v___x_3844_; 
v___x_3843_ = lean_unsigned_to_nat(0u);
v___x_3844_ = lean_nat_dec_eq(v_n_3831_, v___x_3843_);
if (v___x_3844_ == 0)
{
lean_object* v_u_3845_; lean_object* v_l_3846_; lean_object* v_cl_3847_; lean_object* v_hyps_3848_; lean_object* v_target_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_4028_; 
v_u_3845_ = lean_ctor_get(v_goal_3830_, 0);
v_l_3846_ = lean_ctor_get(v_goal_3830_, 1);
v_cl_3847_ = lean_ctor_get(v_goal_3830_, 2);
v_hyps_3848_ = lean_ctor_get(v_goal_3830_, 3);
v_target_3849_ = lean_ctor_get(v_goal_3830_, 4);
v_isSharedCheck_4028_ = !lean_is_exclusive(v_goal_3830_);
if (v_isSharedCheck_4028_ == 0)
{
v___x_3851_ = v_goal_3830_;
v_isShared_3852_ = v_isSharedCheck_4028_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_target_3849_);
lean_inc(v_hyps_3848_);
lean_inc(v_cl_3847_);
lean_inc(v_l_3846_);
lean_inc(v_u_3845_);
lean_dec(v_goal_3830_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_4028_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v_T_3853_; lean_object* v_f_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v_a_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v_revertArgs_3861_; lean_object* v___y_3863_; lean_object* v___y_3864_; lean_object* v___y_3865_; lean_object* v___y_3866_; lean_object* v___y_3867_; lean_object* v___y_3868_; lean_object* v___y_3869_; lean_object* v___y_3870_; lean_object* v___y_3871_; lean_object* v___y_3872_; lean_object* v___y_3873_; lean_object* v___y_3874_; lean_object* v___y_3875_; lean_object* v___y_3876_; lean_object* v___y_3877_; lean_object* v___y_3922_; lean_object* v___y_3923_; lean_object* v___y_3924_; lean_object* v___y_3925_; lean_object* v___y_3926_; lean_object* v___y_3927_; lean_object* v___y_3928_; lean_object* v___y_3929_; lean_object* v___y_3930_; lean_object* v___y_3931_; lean_object* v___y_3932_; lean_object* v___y_3933_; lean_object* v___x_3938_; lean_object* v___f_3939_; lean_object* v___y_3941_; lean_object* v___y_3942_; lean_object* v___y_3943_; lean_object* v___y_3944_; lean_object* v___y_3945_; lean_object* v___y_3946_; lean_object* v___y_3947_; lean_object* v___y_3948_; lean_object* v___x_4002_; uint8_t v___x_4003_; 
v_T_3853_ = l_Lean_Expr_consumeMData(v_target_3849_);
v_f_3854_ = l_Lean_Expr_getAppFn(v_T_3853_);
v___x_3855_ = l_Lean_Expr_getAppNumArgs(v_T_3853_);
v___x_3856_ = lean_mk_empty_array_with_capacity(v___x_3855_);
lean_dec(v___x_3855_);
lean_inc_ref(v_T_3853_);
v_a_3857_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_T_3853_, v___x_3856_);
lean_inc(v_n_3831_);
lean_inc_ref(v_a_3857_);
v___x_3858_ = l_Array_toSubarray___redArg(v_a_3857_, v___x_3843_, v_n_3831_);
v___x_3859_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1));
v___x_3860_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(v___x_3858_, v___x_3859_);
v_revertArgs_3861_ = l_Array_reverse___redArg(v___x_3860_);
v___x_3938_ = lean_box(v___x_3844_);
lean_inc(v_u_3845_);
lean_inc_ref(v_hyps_3848_);
lean_inc_ref(v_cl_3847_);
lean_inc_ref(v_l_3846_);
lean_inc_ref(v_revertArgs_3861_);
v___f_3939_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0___lam__0___boxed), 17, 7);
lean_closure_set(v___f_3939_, 0, v_revertArgs_3861_);
lean_closure_set(v___f_3939_, 1, v_hypName_3832_);
lean_closure_set(v___f_3939_, 2, v_l_3846_);
lean_closure_set(v___f_3939_, 3, v_cl_3847_);
lean_closure_set(v___f_3939_, 4, v___x_3938_);
lean_closure_set(v___f_3939_, 5, v_hyps_3848_);
lean_closure_set(v___f_3939_, 6, v_u_3845_);
v___x_4002_ = lean_array_get_size(v_revertArgs_3861_);
v___x_4003_ = lean_nat_dec_eq(v___x_4002_, v_n_3831_);
if (v___x_4003_ == 0)
{
lean_object* v___x_4004_; lean_object* v___x_4005_; lean_object* v___x_4006_; lean_object* v___x_4007_; lean_object* v___x_4008_; lean_object* v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; lean_object* v___x_4019_; lean_object* v_a_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4027_; 
lean_dec_ref(v___f_3939_);
lean_dec_ref(v_revertArgs_3861_);
lean_dec_ref(v_a_3857_);
lean_dec_ref(v_f_3854_);
lean_del_object(v___x_3851_);
lean_dec_ref(v_target_3849_);
lean_dec_ref(v_hyps_3848_);
lean_dec_ref(v_cl_3847_);
lean_dec_ref(v_l_3846_);
lean_dec(v_u_3845_);
lean_dec_ref(v_k_3833_);
v___x_4004_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3);
v___x_4005_ = l_Nat_reprFast(v_n_3831_);
v___x_4006_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4006_, 0, v___x_4005_);
v___x_4007_ = l_Lean_MessageData_ofFormat(v___x_4006_);
v___x_4008_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4008_, 0, v___x_4004_);
lean_ctor_set(v___x_4008_, 1, v___x_4007_);
v___x_4009_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5);
v___x_4010_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4010_, 0, v___x_4008_);
lean_ctor_set(v___x_4010_, 1, v___x_4009_);
v___x_4011_ = l_Lean_MessageData_ofExpr(v_T_3853_);
v___x_4012_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4012_, 0, v___x_4010_);
lean_ctor_set(v___x_4012_, 1, v___x_4011_);
v___x_4013_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7);
v___x_4014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4014_, 0, v___x_4012_);
lean_ctor_set(v___x_4014_, 1, v___x_4013_);
v___x_4015_ = l_Nat_reprFast(v___x_4002_);
v___x_4016_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4016_, 0, v___x_4015_);
v___x_4017_ = l_Lean_MessageData_ofFormat(v___x_4016_);
v___x_4018_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4014_);
lean_ctor_set(v___x_4018_, 1, v___x_4017_);
v___x_4019_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v___x_4018_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_);
v_a_4020_ = lean_ctor_get(v___x_4019_, 0);
v_isSharedCheck_4027_ = !lean_is_exclusive(v___x_4019_);
if (v_isSharedCheck_4027_ == 0)
{
v___x_4022_ = v___x_4019_;
v_isShared_4023_ = v_isSharedCheck_4027_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_a_4020_);
lean_dec(v___x_4019_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4027_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
lean_object* v___x_4025_; 
if (v_isShared_4023_ == 0)
{
v___x_4025_ = v___x_4022_;
goto v_reusejp_4024_;
}
else
{
lean_object* v_reuseFailAlloc_4026_; 
v_reuseFailAlloc_4026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4026_, 0, v_a_4020_);
v___x_4025_ = v_reuseFailAlloc_4026_;
goto v_reusejp_4024_;
}
v_reusejp_4024_:
{
return v___x_4025_;
}
}
}
else
{
lean_dec_ref(v_T_3853_);
v___y_3941_ = v___y_3834_;
v___y_3942_ = v___y_3835_;
v___y_3943_ = v___y_3836_;
v___y_3944_ = v___y_3837_;
v___y_3945_ = v___y_3838_;
v___y_3946_ = v___y_3839_;
v___y_3947_ = v___y_3840_;
v___y_3948_ = v___y_3841_;
goto v___jp_3940_;
}
v___jp_3862_:
{
lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; 
v___x_3878_ = lean_box(0);
lean_inc(v___y_3877_);
v___x_3879_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3879_, 0, v___y_3877_);
lean_ctor_set(v___x_3879_, 1, v___x_3878_);
lean_inc_ref(v___x_3879_);
lean_inc(v___y_3868_);
v___x_3880_ = l_Lean_mkConst(v___y_3868_, v___x_3879_);
lean_inc_ref(v___y_3869_);
v___x_3881_ = l_Lean_Expr_app___override(v___x_3880_, v___y_3869_);
v___x_3882_ = lean_box(0);
v___x_3883_ = l_Lean_Meta_synthInstance(v___x_3881_, v___x_3882_, v___y_3864_, v___y_3875_, v___y_3876_, v___y_3865_);
if (lean_obj_tag(v___x_3883_) == 0)
{
lean_object* v_a_3884_; lean_object* v___x_3885_; 
v_a_3884_ = lean_ctor_get(v___x_3883_, 0);
lean_inc(v_a_3884_);
lean_dec_ref_known(v___x_3883_, 1);
v___x_3885_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v___y_3866_, v___y_3875_);
if (lean_obj_tag(v___x_3885_) == 0)
{
lean_object* v_a_3886_; lean_object* v_H_3887_; lean_object* v___x_3888_; lean_object* v_fst_3889_; lean_object* v_snd_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v_goal_x27_3896_; 
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
lean_inc(v_a_3886_);
lean_dec_ref_known(v___x_3885_, 1);
lean_inc_n(v_a_3884_, 2);
lean_inc_ref_n(v___y_3869_, 2);
v_H_3887_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_pushForallContextIntoHyps(v___y_3869_, v_a_3884_, v_a_3886_);
v___x_3888_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mkAnd(v___y_3877_, v___y_3869_, v_a_3884_, v_H_3887_, v___y_3873_);
v_fst_3889_ = lean_ctor_get(v___x_3888_, 0);
lean_inc_n(v_fst_3889_, 2);
v_snd_3890_ = lean_ctor_get(v___x_3888_, 1);
lean_inc(v_snd_3890_);
lean_dec_ref(v___x_3888_);
v___x_3891_ = lean_array_get_size(v_a_3857_);
v___x_3892_ = l_Array_toSubarray___redArg(v_a_3857_, v_n_3831_, v___x_3891_);
v___x_3893_ = l_Subarray_copy___redArg(v___x_3892_);
v___x_3894_ = l_Lean_mkAppRev(v_f_3854_, v___x_3893_);
lean_dec_ref(v___x_3893_);
if (v_isShared_3852_ == 0)
{
lean_ctor_set(v___x_3851_, 4, v___x_3894_);
lean_ctor_set(v___x_3851_, 3, v_fst_3889_);
lean_ctor_set(v___x_3851_, 2, v_a_3884_);
lean_ctor_set(v___x_3851_, 1, v___y_3869_);
v_goal_x27_3896_ = v___x_3851_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_u_3845_);
lean_ctor_set(v_reuseFailAlloc_3920_, 1, v___y_3869_);
lean_ctor_set(v_reuseFailAlloc_3920_, 2, v_a_3884_);
lean_ctor_set(v_reuseFailAlloc_3920_, 3, v_fst_3889_);
lean_ctor_set(v_reuseFailAlloc_3920_, 4, v___x_3894_);
v_goal_x27_3896_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
lean_object* v___x_3897_; 
lean_inc(v___y_3865_);
lean_inc_ref(v___y_3876_);
lean_inc(v___y_3875_);
lean_inc_ref(v___y_3864_);
lean_inc(v___y_3871_);
lean_inc_ref(v___y_3874_);
lean_inc(v___y_3872_);
lean_inc_ref(v___y_3863_);
v___x_3897_ = lean_apply_10(v_k_3833_, v_goal_x27_3896_, v___y_3863_, v___y_3872_, v___y_3874_, v___y_3871_, v___y_3864_, v___y_3875_, v___y_3876_, v___y_3865_, lean_box(0));
if (lean_obj_tag(v___x_3897_) == 0)
{
lean_object* v_a_3898_; lean_object* v___x_3899_; 
v_a_3898_ = lean_ctor_get(v___x_3897_, 0);
lean_inc(v_a_3898_);
lean_dec_ref_known(v___x_3897_, 1);
lean_inc(v___y_3865_);
lean_inc_ref(v___y_3876_);
lean_inc(v___y_3875_);
lean_inc_ref(v___y_3864_);
lean_inc_ref(v___y_3867_);
v___x_3899_ = lean_infer_type(v___y_3867_, v___y_3864_, v___y_3875_, v___y_3876_, v___y_3865_);
if (lean_obj_tag(v___x_3899_) == 0)
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3919_; 
v_a_3900_ = lean_ctor_get(v___x_3899_, 0);
v_isSharedCheck_3919_ = !lean_is_exclusive(v___x_3899_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3902_ = v___x_3899_;
v_isShared_3903_ = v_isSharedCheck_3919_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v___x_3899_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3919_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v_prf_3915_; lean_object* v___x_3917_; 
v___x_3904_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0));
v___x_3905_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__0));
v___x_3906_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1));
v___x_3907_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0));
v___x_3908_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1));
v___x_3909_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0));
lean_inc_ref(v___y_3870_);
v___x_3910_ = l_Lean_Name_mkStr7(v___x_3904_, v___x_3905_, v___x_3906_, v___y_3870_, v___x_3907_, v___x_3908_, v___x_3909_);
v___x_3911_ = l_Lean_mkConst(v___x_3910_, v___x_3879_);
v___x_3912_ = l_Lean_mkAppN(v_fst_3889_, v_revertArgs_3861_);
v___x_3913_ = l_Lean_mkAppN(v_snd_3890_, v_revertArgs_3861_);
v___x_3914_ = l_Lean_mkAppN(v_a_3898_, v_revertArgs_3861_);
lean_dec_ref(v_revertArgs_3861_);
v_prf_3915_ = l_Lean_mkApp9(v___x_3911_, v_l_3846_, v_cl_3847_, v_a_3900_, v_hyps_3848_, v___x_3912_, v_target_3849_, v___y_3867_, v___x_3913_, v___x_3914_);
if (v_isShared_3903_ == 0)
{
lean_ctor_set(v___x_3902_, 0, v_prf_3915_);
v___x_3917_ = v___x_3902_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v_prf_3915_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
return v___x_3917_;
}
}
}
else
{
lean_dec(v_a_3898_);
lean_dec(v_snd_3890_);
lean_dec(v_fst_3889_);
lean_dec_ref_known(v___x_3879_, 2);
lean_dec_ref(v___y_3867_);
lean_dec_ref(v_revertArgs_3861_);
lean_dec_ref(v_target_3849_);
lean_dec_ref(v_hyps_3848_);
lean_dec_ref(v_cl_3847_);
lean_dec_ref(v_l_3846_);
return v___x_3899_;
}
}
else
{
lean_dec(v_snd_3890_);
lean_dec(v_fst_3889_);
lean_dec_ref_known(v___x_3879_, 2);
lean_dec_ref(v___y_3867_);
lean_dec_ref(v_revertArgs_3861_);
lean_dec_ref(v_target_3849_);
lean_dec_ref(v_hyps_3848_);
lean_dec_ref(v_cl_3847_);
lean_dec_ref(v_l_3846_);
return v___x_3897_;
}
}
}
else
{
lean_dec(v_a_3884_);
lean_dec_ref_known(v___x_3879_, 2);
lean_dec(v___y_3877_);
lean_dec_ref(v___y_3873_);
lean_dec_ref(v___y_3869_);
lean_dec_ref(v___y_3867_);
lean_dec_ref(v_revertArgs_3861_);
lean_dec_ref(v_a_3857_);
lean_dec_ref(v_f_3854_);
lean_del_object(v___x_3851_);
lean_dec_ref(v_target_3849_);
lean_dec_ref(v_hyps_3848_);
lean_dec_ref(v_cl_3847_);
lean_dec_ref(v_l_3846_);
lean_dec(v_u_3845_);
lean_dec_ref(v_k_3833_);
lean_dec(v_n_3831_);
return v___x_3885_;
}
}
else
{
lean_dec_ref_known(v___x_3879_, 2);
lean_dec(v___y_3877_);
lean_dec_ref(v___y_3873_);
lean_dec_ref(v___y_3869_);
lean_dec_ref(v___y_3867_);
lean_dec_ref(v___y_3866_);
lean_dec_ref(v_revertArgs_3861_);
lean_dec_ref(v_a_3857_);
lean_dec_ref(v_f_3854_);
lean_del_object(v___x_3851_);
lean_dec_ref(v_target_3849_);
lean_dec_ref(v_hyps_3848_);
lean_dec_ref(v_cl_3847_);
lean_dec_ref(v_l_3846_);
lean_dec(v_u_3845_);
lean_dec_ref(v_k_3833_);
lean_dec(v_n_3831_);
return v___x_3883_;
}
}
v___jp_3921_:
{
lean_object* v___x_3934_; lean_object* v___x_3935_; lean_object* v___x_3936_; 
v___x_3934_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___redArg___lam__0___closed__1));
v___x_3935_ = ((lean_object*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___redArg___lam__9___closed__0));
v___x_3936_ = l_Lean_Level_dec(v_u_3845_);
if (lean_obj_tag(v___x_3936_) == 0)
{
lean_inc(v_u_3845_);
v___y_3863_ = v___y_3922_;
v___y_3864_ = v___y_3925_;
v___y_3865_ = v___y_3924_;
v___y_3866_ = v___y_3930_;
v___y_3867_ = v___y_3932_;
v___y_3868_ = v___x_3935_;
v___y_3869_ = v___y_3933_;
v___y_3870_ = v___x_3934_;
v___y_3871_ = v___y_3923_;
v___y_3872_ = v___y_3926_;
v___y_3873_ = v___y_3927_;
v___y_3874_ = v___y_3928_;
v___y_3875_ = v___y_3929_;
v___y_3876_ = v___y_3931_;
v___y_3877_ = v_u_3845_;
goto v___jp_3862_;
}
else
{
lean_object* v_val_3937_; 
v_val_3937_ = lean_ctor_get(v___x_3936_, 0);
lean_inc(v_val_3937_);
lean_dec_ref_known(v___x_3936_, 1);
v___y_3863_ = v___y_3922_;
v___y_3864_ = v___y_3925_;
v___y_3865_ = v___y_3924_;
v___y_3866_ = v___y_3930_;
v___y_3867_ = v___y_3932_;
v___y_3868_ = v___x_3935_;
v___y_3869_ = v___y_3933_;
v___y_3870_ = v___x_3934_;
v___y_3871_ = v___y_3923_;
v___y_3872_ = v___y_3926_;
v___y_3873_ = v___y_3927_;
v___y_3874_ = v___y_3928_;
v___y_3875_ = v___y_3929_;
v___y_3876_ = v___y_3931_;
v___y_3877_ = v_val_3937_;
goto v___jp_3862_;
}
}
v___jp_3940_:
{
size_t v_sz_3949_; size_t v___x_3950_; lean_object* v___x_3951_; 
v_sz_3949_ = lean_array_size(v_revertArgs_3861_);
v___x_3950_ = ((size_t)0ULL);
lean_inc_ref(v_revertArgs_3861_);
v___x_3951_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(v_sz_3949_, v___x_3950_, v_revertArgs_3861_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
if (lean_obj_tag(v___x_3951_) == 0)
{
lean_object* v_a_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; 
v_a_3952_ = lean_ctor_get(v___x_3951_, 0);
lean_inc(v_a_3952_);
lean_dec_ref_known(v___x_3951_, 1);
v___x_3953_ = lean_array_get_size(v_a_3952_);
v___x_3954_ = lean_mk_empty_array_with_capacity(v___x_3953_);
v___x_3955_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(v_a_3952_, v___x_3953_, v___x_3843_, v___x_3954_, v___y_3947_, v___y_3948_);
if (lean_obj_tag(v___x_3955_) == 0)
{
lean_object* v_a_3956_; uint8_t v___x_3957_; lean_object* v___x_3958_; 
v_a_3956_ = lean_ctor_get(v___x_3955_, 0);
lean_inc(v_a_3956_);
lean_dec_ref_known(v___x_3955_, 1);
v___x_3957_ = 0;
v___x_3958_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(v_a_3956_, v___f_3939_, v___x_3957_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
if (lean_obj_tag(v___x_3958_) == 0)
{
lean_object* v_a_3959_; lean_object* v_fst_3960_; lean_object* v_snd_3961_; lean_object* v___x_3962_; 
v_a_3959_ = lean_ctor_get(v___x_3958_, 0);
lean_inc(v_a_3959_);
lean_dec_ref_known(v___x_3958_, 1);
v_fst_3960_ = lean_ctor_get(v_a_3959_, 0);
lean_inc(v_fst_3960_);
v_snd_3961_ = lean_ctor_get(v_a_3959_, 1);
lean_inc(v_snd_3961_);
lean_dec(v_a_3959_);
lean_inc_ref(v_revertArgs_3861_);
v___x_3962_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(v_sz_3949_, v___x_3950_, v_revertArgs_3861_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
if (lean_obj_tag(v___x_3962_) == 0)
{
lean_object* v_a_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; 
v_a_3963_ = lean_ctor_get(v___x_3962_, 0);
lean_inc(v_a_3963_);
lean_dec_ref_known(v___x_3962_, 1);
v___x_3964_ = lean_array_to_list(v_a_3963_);
v___x_3965_ = l_Lean_Meta_mkAndIntroN(v___x_3964_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
if (lean_obj_tag(v___x_3965_) == 0)
{
lean_object* v_a_3966_; uint8_t v___x_3967_; 
v_a_3966_ = lean_ctor_get(v___x_3965_, 0);
lean_inc(v_a_3966_);
lean_dec_ref_known(v___x_3965_, 1);
v___x_3967_ = lean_nat_dec_lt(v___x_3843_, v___x_3953_);
if (v___x_3967_ == 0)
{
lean_dec(v_a_3952_);
lean_inc_ref(v_l_3846_);
v___y_3922_ = v___y_3941_;
v___y_3923_ = v___y_3944_;
v___y_3924_ = v___y_3948_;
v___y_3925_ = v___y_3945_;
v___y_3926_ = v___y_3942_;
v___y_3927_ = v_snd_3961_;
v___y_3928_ = v___y_3943_;
v___y_3929_ = v___y_3946_;
v___y_3930_ = v_fst_3960_;
v___y_3931_ = v___y_3947_;
v___y_3932_ = v_a_3966_;
v___y_3933_ = v_l_3846_;
goto v___jp_3921_;
}
else
{
size_t v___x_3968_; lean_object* v___x_3969_; 
v___x_3968_ = lean_usize_of_nat(v___x_3953_);
lean_inc_ref(v_l_3846_);
v___x_3969_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0_spec__0(v_a_3952_, v___x_3968_, v___x_3950_, v_l_3846_);
lean_dec(v_a_3952_);
v___y_3922_ = v___y_3941_;
v___y_3923_ = v___y_3944_;
v___y_3924_ = v___y_3948_;
v___y_3925_ = v___y_3945_;
v___y_3926_ = v___y_3942_;
v___y_3927_ = v_snd_3961_;
v___y_3928_ = v___y_3943_;
v___y_3929_ = v___y_3946_;
v___y_3930_ = v_fst_3960_;
v___y_3931_ = v___y_3947_;
v___y_3932_ = v_a_3966_;
v___y_3933_ = v___x_3969_;
goto v___jp_3921_;
}
}
else
{
lean_dec(v_snd_3961_);
lean_dec(v_fst_3960_);
lean_dec(v_a_3952_);
lean_dec_ref(v_revertArgs_3861_);
lean_dec_ref(v_a_3857_);
lean_dec_ref(v_f_3854_);
lean_del_object(v___x_3851_);
lean_dec_ref(v_target_3849_);
lean_dec_ref(v_hyps_3848_);
lean_dec_ref(v_cl_3847_);
lean_dec_ref(v_l_3846_);
lean_dec(v_u_3845_);
lean_dec_ref(v_k_3833_);
lean_dec(v_n_3831_);
return v___x_3965_;
}
}
else
{
lean_object* v_a_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
lean_dec(v_snd_3961_);
lean_dec(v_fst_3960_);
lean_dec(v_a_3952_);
lean_dec_ref(v_revertArgs_3861_);
lean_dec_ref(v_a_3857_);
lean_dec_ref(v_f_3854_);
lean_del_object(v___x_3851_);
lean_dec_ref(v_target_3849_);
lean_dec_ref(v_hyps_3848_);
lean_dec_ref(v_cl_3847_);
lean_dec_ref(v_l_3846_);
lean_dec(v_u_3845_);
lean_dec_ref(v_k_3833_);
lean_dec(v_n_3831_);
v_a_3970_ = lean_ctor_get(v___x_3962_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v___x_3962_);
if (v_isSharedCheck_3977_ == 0)
{
v___x_3972_ = v___x_3962_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_a_3970_);
lean_dec(v___x_3962_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_a_3970_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
else
{
lean_object* v_a_3978_; lean_object* v___x_3980_; uint8_t v_isShared_3981_; uint8_t v_isSharedCheck_3985_; 
lean_dec(v_a_3952_);
lean_dec_ref(v_revertArgs_3861_);
lean_dec_ref(v_a_3857_);
lean_dec_ref(v_f_3854_);
lean_del_object(v___x_3851_);
lean_dec_ref(v_target_3849_);
lean_dec_ref(v_hyps_3848_);
lean_dec_ref(v_cl_3847_);
lean_dec_ref(v_l_3846_);
lean_dec(v_u_3845_);
lean_dec_ref(v_k_3833_);
lean_dec(v_n_3831_);
v_a_3978_ = lean_ctor_get(v___x_3958_, 0);
v_isSharedCheck_3985_ = !lean_is_exclusive(v___x_3958_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3980_ = v___x_3958_;
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
else
{
lean_inc(v_a_3978_);
lean_dec(v___x_3958_);
v___x_3980_ = lean_box(0);
v_isShared_3981_ = v_isSharedCheck_3985_;
goto v_resetjp_3979_;
}
v_resetjp_3979_:
{
lean_object* v___x_3983_; 
if (v_isShared_3981_ == 0)
{
v___x_3983_ = v___x_3980_;
goto v_reusejp_3982_;
}
else
{
lean_object* v_reuseFailAlloc_3984_; 
v_reuseFailAlloc_3984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3984_, 0, v_a_3978_);
v___x_3983_ = v_reuseFailAlloc_3984_;
goto v_reusejp_3982_;
}
v_reusejp_3982_:
{
return v___x_3983_;
}
}
}
}
else
{
lean_object* v_a_3986_; lean_object* v___x_3988_; uint8_t v_isShared_3989_; uint8_t v_isSharedCheck_3993_; 
lean_dec(v_a_3952_);
lean_dec_ref(v___f_3939_);
lean_dec_ref(v_revertArgs_3861_);
lean_dec_ref(v_a_3857_);
lean_dec_ref(v_f_3854_);
lean_del_object(v___x_3851_);
lean_dec_ref(v_target_3849_);
lean_dec_ref(v_hyps_3848_);
lean_dec_ref(v_cl_3847_);
lean_dec_ref(v_l_3846_);
lean_dec(v_u_3845_);
lean_dec_ref(v_k_3833_);
lean_dec(v_n_3831_);
v_a_3986_ = lean_ctor_get(v___x_3955_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v___x_3955_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3988_ = v___x_3955_;
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
else
{
lean_inc(v_a_3986_);
lean_dec(v___x_3955_);
v___x_3988_ = lean_box(0);
v_isShared_3989_ = v_isSharedCheck_3993_;
goto v_resetjp_3987_;
}
v_resetjp_3987_:
{
lean_object* v___x_3991_; 
if (v_isShared_3989_ == 0)
{
v___x_3991_ = v___x_3988_;
goto v_reusejp_3990_;
}
else
{
lean_object* v_reuseFailAlloc_3992_; 
v_reuseFailAlloc_3992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3992_, 0, v_a_3986_);
v___x_3991_ = v_reuseFailAlloc_3992_;
goto v_reusejp_3990_;
}
v_reusejp_3990_:
{
return v___x_3991_;
}
}
}
}
else
{
lean_object* v_a_3994_; lean_object* v___x_3996_; uint8_t v_isShared_3997_; uint8_t v_isSharedCheck_4001_; 
lean_dec_ref(v___f_3939_);
lean_dec_ref(v_revertArgs_3861_);
lean_dec_ref(v_a_3857_);
lean_dec_ref(v_f_3854_);
lean_del_object(v___x_3851_);
lean_dec_ref(v_target_3849_);
lean_dec_ref(v_hyps_3848_);
lean_dec_ref(v_cl_3847_);
lean_dec_ref(v_l_3846_);
lean_dec(v_u_3845_);
lean_dec_ref(v_k_3833_);
lean_dec(v_n_3831_);
v_a_3994_ = lean_ctor_get(v___x_3951_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3951_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3996_ = v___x_3951_;
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
else
{
lean_inc(v_a_3994_);
lean_dec(v___x_3951_);
v___x_3996_ = lean_box(0);
v_isShared_3997_ = v_isSharedCheck_4001_;
goto v_resetjp_3995_;
}
v_resetjp_3995_:
{
lean_object* v___x_3999_; 
if (v_isShared_3997_ == 0)
{
v___x_3999_ = v___x_3996_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v_a_3994_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
return v___x_3999_;
}
}
}
}
}
}
else
{
lean_object* v___x_4029_; 
lean_dec(v_hypName_3832_);
lean_dec(v_n_3831_);
lean_inc(v___y_3841_);
lean_inc_ref(v___y_3840_);
lean_inc(v___y_3839_);
lean_inc_ref(v___y_3838_);
lean_inc(v___y_3837_);
lean_inc_ref(v___y_3836_);
lean_inc(v___y_3835_);
lean_inc_ref(v___y_3834_);
v___x_4029_ = lean_apply_10(v_k_3833_, v_goal_3830_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, lean_box(0));
return v___x_4029_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0___boxed(lean_object* v_goal_4030_, lean_object* v_n_4031_, lean_object* v_hypName_4032_, lean_object* v_k_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_){
_start:
{
lean_object* v_res_4043_; 
v_res_4043_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0(v_goal_4030_, v_n_4031_, v_hypName_4032_, v_k_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_);
lean_dec(v___y_4041_);
lean_dec_ref(v___y_4040_);
lean_dec(v___y_4039_);
lean_dec_ref(v___y_4038_);
lean_dec(v___y_4037_);
lean_dec_ref(v___y_4036_);
lean_dec(v___y_4035_);
lean_dec_ref(v___y_4034_);
return v_res_4043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__1(lean_object* v___x_4044_, lean_object* v_snd_4045_, lean_object* v___y_4046_, lean_object* v_fst_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_){
_start:
{
lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; 
v___x_4057_ = lean_st_mk_ref(v___x_4044_);
v___x_4058_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1));
v___x_4059_ = l_Lean_Core_mkFreshUserName(v___x_4058_, v___y_4054_, v___y_4055_);
if (lean_obj_tag(v___x_4059_) == 0)
{
lean_object* v_a_4060_; lean_object* v___f_4061_; lean_object* v___x_4062_; 
v_a_4060_ = lean_ctor_get(v___x_4059_, 0);
lean_inc(v_a_4060_);
lean_dec_ref_known(v___x_4059_, 1);
lean_inc(v___x_4057_);
v___f_4061_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__0___boxed), 11, 1);
lean_closure_set(v___f_4061_, 0, v___x_4057_);
v___x_4062_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__0(v_snd_4045_, v___y_4046_, v_a_4060_, v___f_4061_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_);
if (lean_obj_tag(v___x_4062_) == 0)
{
lean_object* v_a_4063_; lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; 
v_a_4063_ = lean_ctor_get(v___x_4062_, 0);
lean_inc(v_a_4063_);
lean_dec_ref_known(v___x_4062_, 1);
v___x_4064_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_fst_4047_, v_a_4063_, v___y_4053_);
lean_dec_ref(v___x_4064_);
v___x_4065_ = lean_st_ref_get(v___x_4057_);
lean_dec(v___x_4057_);
v___x_4066_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_4065_, v___y_4049_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_);
return v___x_4066_;
}
else
{
lean_object* v_a_4067_; lean_object* v___x_4069_; uint8_t v_isShared_4070_; uint8_t v_isSharedCheck_4074_; 
lean_dec(v___x_4057_);
lean_dec(v_fst_4047_);
v_a_4067_ = lean_ctor_get(v___x_4062_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v___x_4062_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4069_ = v___x_4062_;
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
else
{
lean_inc(v_a_4067_);
lean_dec(v___x_4062_);
v___x_4069_ = lean_box(0);
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
v_resetjp_4068_:
{
lean_object* v___x_4072_; 
if (v_isShared_4070_ == 0)
{
v___x_4072_ = v___x_4069_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v_a_4067_);
v___x_4072_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
return v___x_4072_;
}
}
}
}
else
{
lean_object* v_a_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4082_; 
lean_dec(v___x_4057_);
lean_dec(v_fst_4047_);
lean_dec(v___y_4046_);
lean_dec_ref(v_snd_4045_);
v_a_4075_ = lean_ctor_get(v___x_4059_, 0);
v_isSharedCheck_4082_ = !lean_is_exclusive(v___x_4059_);
if (v_isSharedCheck_4082_ == 0)
{
v___x_4077_ = v___x_4059_;
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_a_4075_);
lean_dec(v___x_4059_);
v___x_4077_ = lean_box(0);
v_isShared_4078_ = v_isSharedCheck_4082_;
goto v_resetjp_4076_;
}
v_resetjp_4076_:
{
lean_object* v___x_4080_; 
if (v_isShared_4078_ == 0)
{
v___x_4080_ = v___x_4077_;
goto v_reusejp_4079_;
}
else
{
lean_object* v_reuseFailAlloc_4081_; 
v_reuseFailAlloc_4081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4081_, 0, v_a_4075_);
v___x_4080_ = v_reuseFailAlloc_4081_;
goto v_reusejp_4079_;
}
v_reusejp_4079_:
{
return v___x_4080_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__1___boxed(lean_object* v___x_4083_, lean_object* v_snd_4084_, lean_object* v___y_4085_, lean_object* v_fst_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_){
_start:
{
lean_object* v_res_4096_; 
v_res_4096_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__1(v___x_4083_, v_snd_4084_, v___y_4085_, v_fst_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_, v___y_4094_);
lean_dec(v___y_4094_);
lean_dec_ref(v___y_4093_);
lean_dec(v___y_4092_);
lean_dec_ref(v___y_4091_);
lean_dec(v___y_4090_);
lean_dec_ref(v___y_4089_);
lean_dec(v___y_4088_);
lean_dec_ref(v___y_4087_);
return v_res_4096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__3(lean_object* v___x_4097_, lean_object* v_val_4098_, lean_object* v_h_4099_, lean_object* v_a_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v___x_4110_; lean_object* v___f_4111_; lean_object* v___x_4112_; 
v___x_4110_ = lean_st_mk_ref(v___x_4097_);
lean_inc(v___x_4110_);
v___f_4111_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__0___boxed), 11, 1);
lean_closure_set(v___f_4111_, 0, v___x_4110_);
v___x_4112_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert_spec__1(v_val_4098_, v_h_4099_, v___f_4111_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
if (lean_obj_tag(v___x_4112_) == 0)
{
lean_object* v_a_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; 
v_a_4113_ = lean_ctor_get(v___x_4112_, 0);
lean_inc(v_a_4113_);
lean_dec_ref_known(v___x_4112_, 1);
v___x_4114_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_a_4100_, v_a_4113_, v___y_4106_);
lean_dec_ref(v___x_4114_);
v___x_4115_ = lean_st_ref_get(v___x_4110_);
lean_dec(v___x_4110_);
v___x_4116_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_4115_, v___y_4102_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_);
return v___x_4116_;
}
else
{
lean_object* v_a_4117_; lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4124_; 
lean_dec(v___x_4110_);
lean_dec(v_a_4100_);
v_a_4117_ = lean_ctor_get(v___x_4112_, 0);
v_isSharedCheck_4124_ = !lean_is_exclusive(v___x_4112_);
if (v_isSharedCheck_4124_ == 0)
{
v___x_4119_ = v___x_4112_;
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
else
{
lean_inc(v_a_4117_);
lean_dec(v___x_4112_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4124_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
lean_object* v___x_4122_; 
if (v_isShared_4120_ == 0)
{
v___x_4122_ = v___x_4119_;
goto v_reusejp_4121_;
}
else
{
lean_object* v_reuseFailAlloc_4123_; 
v_reuseFailAlloc_4123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4123_, 0, v_a_4117_);
v___x_4122_ = v_reuseFailAlloc_4123_;
goto v_reusejp_4121_;
}
v_reusejp_4121_:
{
return v___x_4122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__3___boxed(lean_object* v___x_4125_, lean_object* v_val_4126_, lean_object* v_h_4127_, lean_object* v_a_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_, lean_object* v___y_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_){
_start:
{
lean_object* v_res_4138_; 
v_res_4138_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__3(v___x_4125_, v_val_4126_, v_h_4127_, v_a_4128_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_, v___y_4133_, v___y_4134_, v___y_4135_, v___y_4136_);
lean_dec(v___y_4136_);
lean_dec_ref(v___y_4135_);
lean_dec(v___y_4134_);
lean_dec_ref(v___y_4133_);
lean_dec(v___y_4132_);
lean_dec_ref(v___y_4131_);
lean_dec(v___y_4130_);
lean_dec_ref(v___y_4129_);
return v_res_4138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert(lean_object* v_x_4139_, lean_object* v_a_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_, lean_object* v_a_4145_, lean_object* v_a_4146_, lean_object* v_a_4147_){
_start:
{
lean_object* v___y_4150_; lean_object* v___y_4151_; lean_object* v___y_4152_; lean_object* v___y_4153_; lean_object* v___y_4154_; lean_object* v___y_4155_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; lean_object* v___y_4159_; lean_object* v___y_4160_; lean_object* v___x_4164_; uint8_t v___x_4165_; 
v___x_4164_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3));
lean_inc(v_x_4139_);
v___x_4165_ = l_Lean_Syntax_isOfKind(v_x_4139_, v___x_4164_);
if (v___x_4165_ == 0)
{
lean_object* v___x_4166_; 
lean_dec(v_x_4139_);
v___x_4166_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_4166_;
}
else
{
lean_object* v___x_4167_; lean_object* v_n_4169_; lean_object* v___y_4170_; lean_object* v___y_4171_; lean_object* v___y_4172_; lean_object* v___y_4173_; lean_object* v___y_4174_; lean_object* v___y_4175_; lean_object* v___y_4176_; lean_object* v___y_4177_; lean_object* v___x_4194_; uint8_t v___x_4195_; 
v___x_4167_ = lean_unsigned_to_nat(1u);
v___x_4194_ = l_Lean_Syntax_getArg(v_x_4139_, v___x_4167_);
lean_dec(v_x_4139_);
lean_inc(v___x_4194_);
v___x_4195_ = l_Lean_Syntax_matchesNull(v___x_4194_, v___x_4167_);
if (v___x_4195_ == 0)
{
lean_object* v___x_4196_; 
lean_dec(v___x_4194_);
v___x_4196_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_4196_;
}
else
{
lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; uint8_t v___x_4200_; 
v___x_4197_ = lean_unsigned_to_nat(0u);
v___x_4198_ = l_Lean_Syntax_getArg(v___x_4194_, v___x_4197_);
lean_dec(v___x_4194_);
v___x_4199_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5));
lean_inc(v___x_4198_);
v___x_4200_ = l_Lean_Syntax_isOfKind(v___x_4198_, v___x_4199_);
if (v___x_4200_ == 0)
{
lean_object* v___x_4201_; uint8_t v___x_4202_; 
v___x_4201_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7));
lean_inc(v___x_4198_);
v___x_4202_ = l_Lean_Syntax_isOfKind(v___x_4198_, v___x_4201_);
if (v___x_4202_ == 0)
{
lean_object* v___x_4203_; 
lean_dec(v___x_4198_);
v___x_4203_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_4203_;
}
else
{
lean_object* v___x_4204_; uint8_t v___x_4205_; 
v___x_4204_ = l_Lean_Syntax_getArg(v___x_4198_, v___x_4167_);
lean_dec(v___x_4198_);
v___x_4205_ = l_Lean_Syntax_isNone(v___x_4204_);
if (v___x_4205_ == 0)
{
uint8_t v___x_4206_; 
lean_inc(v___x_4204_);
v___x_4206_ = l_Lean_Syntax_matchesNull(v___x_4204_, v___x_4167_);
if (v___x_4206_ == 0)
{
lean_object* v___x_4207_; 
lean_dec(v___x_4204_);
v___x_4207_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_4207_;
}
else
{
lean_object* v_n_4208_; lean_object* v___x_4209_; 
v_n_4208_ = l_Lean_Syntax_getArg(v___x_4204_, v___x_4197_);
lean_dec(v___x_4204_);
v___x_4209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4209_, 0, v_n_4208_);
v_n_4169_ = v___x_4209_;
v___y_4170_ = v_a_4140_;
v___y_4171_ = v_a_4141_;
v___y_4172_ = v_a_4142_;
v___y_4173_ = v_a_4143_;
v___y_4174_ = v_a_4144_;
v___y_4175_ = v_a_4145_;
v___y_4176_ = v_a_4146_;
v___y_4177_ = v_a_4147_;
goto v___jp_4168_;
}
}
else
{
lean_object* v___x_4210_; 
lean_dec(v___x_4204_);
v___x_4210_ = lean_box(0);
v_n_4169_ = v___x_4210_;
v___y_4170_ = v_a_4140_;
v___y_4171_ = v_a_4141_;
v___y_4172_ = v_a_4142_;
v___y_4173_ = v_a_4143_;
v___y_4174_ = v_a_4144_;
v___y_4175_ = v_a_4145_;
v___y_4176_ = v_a_4146_;
v___y_4177_ = v_a_4147_;
goto v___jp_4168_;
}
}
}
else
{
lean_object* v_h_4211_; lean_object* v___x_4212_; uint8_t v___x_4213_; 
v_h_4211_ = l_Lean_Syntax_getArg(v___x_4198_, v___x_4197_);
lean_dec(v___x_4198_);
v___x_4212_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9));
lean_inc(v_h_4211_);
v___x_4213_ = l_Lean_Syntax_isOfKind(v_h_4211_, v___x_4212_);
if (v___x_4213_ == 0)
{
lean_object* v___x_4214_; 
lean_dec(v_h_4211_);
v___x_4214_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_4214_;
}
else
{
lean_object* v___x_4215_; 
v___x_4215_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_4141_, v_a_4144_, v_a_4145_, v_a_4146_, v_a_4147_);
if (lean_obj_tag(v___x_4215_) == 0)
{
lean_object* v_a_4216_; lean_object* v___x_4217_; 
v_a_4216_ = lean_ctor_get(v___x_4215_, 0);
lean_inc_n(v_a_4216_, 2);
lean_dec_ref_known(v___x_4215_, 1);
v___x_4217_ = l_Lean_MVarId_getType(v_a_4216_, v_a_4144_, v_a_4145_, v_a_4146_, v_a_4147_);
if (lean_obj_tag(v___x_4217_) == 0)
{
lean_object* v_a_4218_; lean_object* v___x_4219_; 
v_a_4218_ = lean_ctor_get(v___x_4217_, 0);
lean_inc(v_a_4218_);
lean_dec_ref_known(v___x_4217_, 1);
v___x_4219_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_parseMGoal_x3f(v_a_4218_);
lean_dec(v_a_4218_);
if (lean_obj_tag(v___x_4219_) == 1)
{
lean_object* v_val_4220_; lean_object* v___x_4221_; lean_object* v___f_4222_; lean_object* v___x_4223_; 
v_val_4220_ = lean_ctor_get(v___x_4219_, 0);
lean_inc(v_val_4220_);
lean_dec_ref_known(v___x_4219_, 1);
v___x_4221_ = lean_box(0);
lean_inc(v_a_4216_);
v___f_4222_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__3___boxed), 13, 4);
lean_closure_set(v___f_4222_, 0, v___x_4221_);
lean_closure_set(v___f_4222_, 1, v_val_4220_);
lean_closure_set(v___f_4222_, 2, v_h_4211_);
lean_closure_set(v___f_4222_, 3, v_a_4216_);
v___x_4223_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v_a_4216_, v___f_4222_, v_a_4140_, v_a_4141_, v_a_4142_, v_a_4143_, v_a_4144_, v_a_4145_, v_a_4146_, v_a_4147_);
return v___x_4223_;
}
else
{
lean_object* v___x_4224_; lean_object* v___x_4225_; 
lean_dec(v___x_4219_);
lean_dec(v_a_4216_);
lean_dec(v_h_4211_);
v___x_4224_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11);
v___x_4225_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(v___x_4224_, v_a_4144_, v_a_4145_, v_a_4146_, v_a_4147_);
return v___x_4225_;
}
}
else
{
lean_object* v_a_4226_; lean_object* v___x_4228_; uint8_t v_isShared_4229_; uint8_t v_isSharedCheck_4233_; 
lean_dec(v_a_4216_);
lean_dec(v_h_4211_);
v_a_4226_ = lean_ctor_get(v___x_4217_, 0);
v_isSharedCheck_4233_ = !lean_is_exclusive(v___x_4217_);
if (v_isSharedCheck_4233_ == 0)
{
v___x_4228_ = v___x_4217_;
v_isShared_4229_ = v_isSharedCheck_4233_;
goto v_resetjp_4227_;
}
else
{
lean_inc(v_a_4226_);
lean_dec(v___x_4217_);
v___x_4228_ = lean_box(0);
v_isShared_4229_ = v_isSharedCheck_4233_;
goto v_resetjp_4227_;
}
v_resetjp_4227_:
{
lean_object* v___x_4231_; 
if (v_isShared_4229_ == 0)
{
v___x_4231_ = v___x_4228_;
goto v_reusejp_4230_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v_a_4226_);
v___x_4231_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4230_;
}
v_reusejp_4230_:
{
return v___x_4231_;
}
}
}
}
else
{
lean_object* v_a_4234_; lean_object* v___x_4236_; uint8_t v_isShared_4237_; uint8_t v_isSharedCheck_4241_; 
lean_dec(v_h_4211_);
v_a_4234_ = lean_ctor_get(v___x_4215_, 0);
v_isSharedCheck_4241_ = !lean_is_exclusive(v___x_4215_);
if (v_isSharedCheck_4241_ == 0)
{
v___x_4236_ = v___x_4215_;
v_isShared_4237_ = v_isSharedCheck_4241_;
goto v_resetjp_4235_;
}
else
{
lean_inc(v_a_4234_);
lean_dec(v___x_4215_);
v___x_4236_ = lean_box(0);
v_isShared_4237_ = v_isSharedCheck_4241_;
goto v_resetjp_4235_;
}
v_resetjp_4235_:
{
lean_object* v___x_4239_; 
if (v_isShared_4237_ == 0)
{
v___x_4239_ = v___x_4236_;
goto v_reusejp_4238_;
}
else
{
lean_object* v_reuseFailAlloc_4240_; 
v_reuseFailAlloc_4240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4240_, 0, v_a_4234_);
v___x_4239_ = v_reuseFailAlloc_4240_;
goto v_reusejp_4238_;
}
v_reusejp_4238_:
{
return v___x_4239_;
}
}
}
}
}
}
v___jp_4168_:
{
lean_object* v___x_4178_; 
v___x_4178_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_mStartMainGoal___redArg(v___y_4171_, v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_);
if (lean_obj_tag(v___x_4178_) == 0)
{
lean_object* v_a_4179_; 
v_a_4179_ = lean_ctor_get(v___x_4178_, 0);
lean_inc(v_a_4179_);
lean_dec_ref_known(v___x_4178_, 1);
if (lean_obj_tag(v_n_4169_) == 0)
{
lean_object* v_fst_4180_; lean_object* v_snd_4181_; 
v_fst_4180_ = lean_ctor_get(v_a_4179_, 0);
lean_inc(v_fst_4180_);
v_snd_4181_ = lean_ctor_get(v_a_4179_, 1);
lean_inc(v_snd_4181_);
lean_dec(v_a_4179_);
v___y_4150_ = v_snd_4181_;
v___y_4151_ = v_fst_4180_;
v___y_4152_ = v___y_4173_;
v___y_4153_ = v___y_4177_;
v___y_4154_ = v___y_4176_;
v___y_4155_ = v___y_4175_;
v___y_4156_ = v___y_4170_;
v___y_4157_ = v___y_4171_;
v___y_4158_ = v___y_4174_;
v___y_4159_ = v___y_4172_;
v___y_4160_ = v___x_4167_;
goto v___jp_4149_;
}
else
{
lean_object* v_fst_4182_; lean_object* v_snd_4183_; lean_object* v_val_4184_; lean_object* v___x_4185_; 
v_fst_4182_ = lean_ctor_get(v_a_4179_, 0);
lean_inc(v_fst_4182_);
v_snd_4183_ = lean_ctor_get(v_a_4179_, 1);
lean_inc(v_snd_4183_);
lean_dec(v_a_4179_);
v_val_4184_ = lean_ctor_get(v_n_4169_, 0);
lean_inc(v_val_4184_);
lean_dec_ref_known(v_n_4169_, 1);
v___x_4185_ = l_Lean_TSyntax_getNat(v_val_4184_);
lean_dec(v_val_4184_);
v___y_4150_ = v_snd_4183_;
v___y_4151_ = v_fst_4182_;
v___y_4152_ = v___y_4173_;
v___y_4153_ = v___y_4177_;
v___y_4154_ = v___y_4176_;
v___y_4155_ = v___y_4175_;
v___y_4156_ = v___y_4170_;
v___y_4157_ = v___y_4171_;
v___y_4158_ = v___y_4174_;
v___y_4159_ = v___y_4172_;
v___y_4160_ = v___x_4185_;
goto v___jp_4149_;
}
}
else
{
lean_object* v_a_4186_; lean_object* v___x_4188_; uint8_t v_isShared_4189_; uint8_t v_isSharedCheck_4193_; 
lean_dec(v_n_4169_);
v_a_4186_ = lean_ctor_get(v___x_4178_, 0);
v_isSharedCheck_4193_ = !lean_is_exclusive(v___x_4178_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4188_ = v___x_4178_;
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
else
{
lean_inc(v_a_4186_);
lean_dec(v___x_4178_);
v___x_4188_ = lean_box(0);
v_isShared_4189_ = v_isSharedCheck_4193_;
goto v_resetjp_4187_;
}
v_resetjp_4187_:
{
lean_object* v___x_4191_; 
if (v_isShared_4189_ == 0)
{
v___x_4191_ = v___x_4188_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v_a_4186_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
return v___x_4191_;
}
}
}
}
}
v___jp_4149_:
{
lean_object* v___x_4161_; lean_object* v___f_4162_; lean_object* v___x_4163_; 
v___x_4161_ = lean_box(0);
lean_inc(v___y_4151_);
v___f_4162_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___lam__1___boxed), 13, 4);
lean_closure_set(v___f_4162_, 0, v___x_4161_);
lean_closure_set(v___f_4162_, 1, v___y_4150_);
lean_closure_set(v___f_4162_, 2, v___y_4160_);
lean_closure_set(v___f_4162_, 3, v___y_4151_);
v___x_4163_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v___y_4151_, v___f_4162_, v___y_4156_, v___y_4157_, v___y_4159_, v___y_4152_, v___y_4158_, v___y_4155_, v___y_4154_, v___y_4153_);
return v___x_4163_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert___boxed(lean_object* v_x_4242_, lean_object* v_a_4243_, lean_object* v_a_4244_, lean_object* v_a_4245_, lean_object* v_a_4246_, lean_object* v_a_4247_, lean_object* v_a_4248_, lean_object* v_a_4249_, lean_object* v_a_4250_, lean_object* v_a_4251_){
_start:
{
lean_object* v_res_4252_; 
v_res_4252_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert(v_x_4242_, v_a_4243_, v_a_4244_, v_a_4245_, v_a_4246_, v_a_4247_, v_a_4248_, v_a_4249_, v_a_4250_);
lean_dec(v_a_4250_);
lean_dec_ref(v_a_4249_);
lean_dec(v_a_4248_);
lean_dec_ref(v_a_4247_);
lean_dec(v_a_4246_);
lean_dec_ref(v_a_4245_);
lean_dec(v_a_4244_);
lean_dec_ref(v_a_4243_);
return v_res_4252_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt_spec__0(lean_object* v_opts_4253_, lean_object* v_opt_4254_){
_start:
{
lean_object* v_name_4255_; lean_object* v_defValue_4256_; lean_object* v_map_4257_; lean_object* v___x_4258_; 
v_name_4255_ = lean_ctor_get(v_opt_4254_, 0);
v_defValue_4256_ = lean_ctor_get(v_opt_4254_, 1);
v_map_4257_ = lean_ctor_get(v_opts_4253_, 0);
v___x_4258_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_4257_, v_name_4255_);
if (lean_obj_tag(v___x_4258_) == 0)
{
uint8_t v___x_4259_; 
v___x_4259_ = lean_unbox(v_defValue_4256_);
return v___x_4259_;
}
else
{
lean_object* v_val_4260_; 
v_val_4260_ = lean_ctor_get(v___x_4258_, 0);
lean_inc(v_val_4260_);
lean_dec_ref_known(v___x_4258_, 1);
if (lean_obj_tag(v_val_4260_) == 1)
{
uint8_t v_v_4261_; 
v_v_4261_ = lean_ctor_get_uint8(v_val_4260_, 0);
lean_dec_ref_known(v_val_4260_, 0);
return v_v_4261_;
}
else
{
uint8_t v___x_4262_; 
lean_dec(v_val_4260_);
v___x_4262_ = lean_unbox(v_defValue_4256_);
return v___x_4262_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt_spec__0___boxed(lean_object* v_opts_4263_, lean_object* v_opt_4264_){
_start:
{
uint8_t v_res_4265_; lean_object* v_r_4266_; 
v_res_4265_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt_spec__0(v_opts_4263_, v_opt_4264_);
lean_dec_ref(v_opt_4264_);
lean_dec_ref(v_opts_4263_);
v_r_4266_ = lean_box(v_res_4265_);
return v_r_4266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt(lean_object* v_stx_4267_, lean_object* v_a_4268_, lean_object* v_a_4269_, lean_object* v_a_4270_, lean_object* v_a_4271_, lean_object* v_a_4272_, lean_object* v_a_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_){
_start:
{
lean_object* v_options_4277_; lean_object* v___x_4278_; uint8_t v___x_4279_; 
v_options_4277_ = lean_ctor_get(v_a_4274_, 2);
v___x_4278_ = l_new__wp__monad;
v___x_4279_ = l_Lean_Option_get___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt_spec__0(v_options_4277_, v___x_4278_);
if (v___x_4279_ == 0)
{
lean_object* v___x_4280_; 
v___x_4280_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert(v_stx_4267_, v_a_4268_, v_a_4269_, v_a_4270_, v_a_4271_, v_a_4272_, v_a_4273_, v_a_4274_, v_a_4275_);
return v___x_4280_;
}
else
{
lean_object* v___x_4281_; 
v___x_4281_ = l_Lean_Elab_Tactic_Internal_Do_ProofMode_elabMRevert(v_stx_4267_, v_a_4268_, v_a_4269_, v_a_4270_, v_a_4271_, v_a_4272_, v_a_4273_, v_a_4274_, v_a_4275_);
return v___x_4281_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___boxed(lean_object* v_stx_4282_, lean_object* v_a_4283_, lean_object* v_a_4284_, lean_object* v_a_4285_, lean_object* v_a_4286_, lean_object* v_a_4287_, lean_object* v_a_4288_, lean_object* v_a_4289_, lean_object* v_a_4290_, lean_object* v_a_4291_){
_start:
{
lean_object* v_res_4292_; 
v_res_4292_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt(v_stx_4282_, v_a_4283_, v_a_4284_, v_a_4285_, v_a_4286_, v_a_4287_, v_a_4288_, v_a_4289_, v_a_4290_);
lean_dec(v_a_4290_);
lean_dec_ref(v_a_4289_);
lean_dec(v_a_4288_);
lean_dec_ref(v_a_4287_);
lean_dec(v_a_4286_);
lean_dec_ref(v_a_4285_);
lean_dec(v_a_4284_);
lean_dec_ref(v_a_4283_);
return v_res_4292_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1(){
_start:
{
lean_object* v___x_4304_; lean_object* v___x_4305_; lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; 
v___x_4304_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_4305_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3));
v___x_4306_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___closed__3));
v___x_4307_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___boxed), 10, 0);
v___x_4308_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_4304_, v___x_4305_, v___x_4306_, v___x_4307_);
return v___x_4308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1___boxed(lean_object* v_a_4309_){
_start:
{
lean_object* v_res_4310_; 
v_res_4310_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1();
return v_res_4310_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevertOpt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Focus(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_ProofMode_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_ProofMode_Revert(builtin);
}
#ifdef __cplusplus
}
#endif
