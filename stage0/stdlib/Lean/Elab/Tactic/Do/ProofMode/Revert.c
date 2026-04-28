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
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkApp8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_mkAppRev(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_mkAndIntroN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withLocalDeclsDND___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_mapFinIdxM_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
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
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_consumeMData(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkAndN(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getNat(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__2;
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
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19___boxed(lean_object**);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__21(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__10;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__11;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__12;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__13;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__14;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__15;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__16;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__17;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__18;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__19;
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
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20_spec__22___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__13(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10;
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__1;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___boxed(lean_object*);
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = lean_mk_string_unchecked("Tactic", 6, 6);
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_mk_string_unchecked("Revert", 6, 6);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_mk_string_unchecked("revert", 6, 6);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0(lean_object* v___x_4_, lean_object* v___x_5_, lean_object* v___x_6_, lean_object* v___x_7_, lean_object* v_00_u03c3s_8_, lean_object* v_hyps_9_, lean_object* v_restHyps_10_, lean_object* v_focusHyp_11_, lean_object* v_target_12_, lean_object* v_proof_13_, lean_object* v_toPure_14_, lean_object* v_prf_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v_prf_21_; lean_object* v___x_22_; 
v___x_16_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0);
v___x_17_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1);
v___x_18_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2);
v___x_19_ = l_Lean_Name_mkStr6(v___x_4_, v___x_5_, v___x_6_, v___x_16_, v___x_17_, v___x_18_);
v___x_20_ = l_Lean_mkConst(v___x_19_, v___x_7_);
v_prf_21_ = l_Lean_mkApp7(v___x_20_, v_00_u03c3s_8_, v_hyps_9_, v_restHyps_10_, v_focusHyp_11_, v_target_12_, v_proof_13_, v_prf_15_);
v___x_22_ = lean_apply_2(v_toPure_14_, lean_box(0), v_prf_21_);
return v___x_22_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_23_; 
v___x_23_ = lean_mk_string_unchecked("Std", 3, 3);
return v___x_23_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_mk_string_unchecked("Do", 2, 2);
return v___x_24_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lean_mk_string_unchecked("SPred", 5, 5);
return v___x_25_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = lean_mk_string_unchecked("imp", 3, 3);
return v___x_26_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_27_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__3);
v___x_28_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2);
v___x_29_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1);
v___x_30_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0);
v___x_31_ = l_Lean_Name_mkStr4(v___x_30_, v___x_29_, v___x_28_, v___x_27_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1(lean_object* v_goal_32_, lean_object* v_toPure_33_, lean_object* v_k_34_, lean_object* v_toBind_35_, lean_object* v_res_36_){
_start:
{
lean_object* v_u_37_; lean_object* v_00_u03c3s_38_; lean_object* v_hyps_39_; lean_object* v_target_40_; lean_object* v___x_42_; uint8_t v_isShared_43_; uint8_t v_isSharedCheck_61_; 
v_u_37_ = lean_ctor_get(v_goal_32_, 0);
v_00_u03c3s_38_ = lean_ctor_get(v_goal_32_, 1);
v_hyps_39_ = lean_ctor_get(v_goal_32_, 2);
v_target_40_ = lean_ctor_get(v_goal_32_, 3);
v_isSharedCheck_61_ = !lean_is_exclusive(v_goal_32_);
if (v_isSharedCheck_61_ == 0)
{
v___x_42_ = v_goal_32_;
v_isShared_43_ = v_isSharedCheck_61_;
goto v_resetjp_41_;
}
else
{
lean_inc(v_target_40_);
lean_inc(v_hyps_39_);
lean_inc(v_00_u03c3s_38_);
lean_inc(v_u_37_);
lean_dec(v_goal_32_);
v___x_42_ = lean_box(0);
v_isShared_43_ = v_isSharedCheck_61_;
goto v_resetjp_41_;
}
v_resetjp_41_:
{
lean_object* v_focusHyp_44_; lean_object* v_restHyps_45_; lean_object* v_proof_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___f_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_57_; 
v_focusHyp_44_ = lean_ctor_get(v_res_36_, 0);
lean_inc_ref_n(v_focusHyp_44_, 2);
v_restHyps_45_ = lean_ctor_get(v_res_36_, 1);
lean_inc_ref_n(v_restHyps_45_, 2);
v_proof_46_ = lean_ctor_get(v_res_36_, 2);
lean_inc_ref(v_proof_46_);
lean_dec_ref(v_res_36_);
v___x_47_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0);
v___x_48_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1);
v___x_49_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2);
v___x_50_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4);
v___x_51_ = lean_box(0);
lean_inc(v_u_37_);
v___x_52_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_52_, 0, v_u_37_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
lean_inc_ref(v_target_40_);
lean_inc_ref_n(v_00_u03c3s_38_, 2);
lean_inc_ref(v___x_52_);
v___f_53_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0), 12, 11);
lean_closure_set(v___f_53_, 0, v___x_47_);
lean_closure_set(v___f_53_, 1, v___x_48_);
lean_closure_set(v___f_53_, 2, v___x_49_);
lean_closure_set(v___f_53_, 3, v___x_52_);
lean_closure_set(v___f_53_, 4, v_00_u03c3s_38_);
lean_closure_set(v___f_53_, 5, v_hyps_39_);
lean_closure_set(v___f_53_, 6, v_restHyps_45_);
lean_closure_set(v___f_53_, 7, v_focusHyp_44_);
lean_closure_set(v___f_53_, 8, v_target_40_);
lean_closure_set(v___f_53_, 9, v_proof_46_);
lean_closure_set(v___f_53_, 10, v_toPure_33_);
v___x_54_ = l_Lean_mkConst(v___x_50_, v___x_52_);
v___x_55_ = l_Lean_mkApp3(v___x_54_, v_00_u03c3s_38_, v_focusHyp_44_, v_target_40_);
if (v_isShared_43_ == 0)
{
lean_ctor_set(v___x_42_, 3, v___x_55_);
lean_ctor_set(v___x_42_, 2, v_restHyps_45_);
v___x_57_ = v___x_42_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v_u_37_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v_00_u03c3s_38_);
lean_ctor_set(v_reuseFailAlloc_60_, 2, v_restHyps_45_);
lean_ctor_set(v_reuseFailAlloc_60_, 3, v___x_55_);
v___x_57_ = v_reuseFailAlloc_60_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_apply_1(v_k_34_, v___x_57_);
v___x_59_ = lean_apply_4(v_toBind_35_, lean_box(0), lean_box(0), v___x_58_, v___f_53_);
return v___x_59_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg(lean_object* v_inst_62_, lean_object* v_inst_63_, lean_object* v_goal_64_, lean_object* v_ref_65_, lean_object* v_k_66_){
_start:
{
lean_object* v_toApplicative_67_; lean_object* v_toBind_68_; lean_object* v_toPure_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___f_72_; lean_object* v___x_73_; 
v_toApplicative_67_ = lean_ctor_get(v_inst_62_, 0);
lean_inc_ref(v_toApplicative_67_);
v_toBind_68_ = lean_ctor_get(v_inst_62_, 1);
lean_inc_n(v_toBind_68_, 2);
lean_dec_ref(v_inst_62_);
v_toPure_69_ = lean_ctor_get(v_toApplicative_67_, 1);
lean_inc(v_toPure_69_);
lean_dec_ref(v_toApplicative_67_);
lean_inc_ref(v_goal_64_);
v___x_70_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo___boxed), 7, 2);
lean_closure_set(v___x_70_, 0, v_goal_64_);
lean_closure_set(v___x_70_, 1, v_ref_65_);
v___x_71_ = lean_apply_2(v_inst_63_, lean_box(0), v___x_70_);
v___f_72_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1), 5, 4);
lean_closure_set(v___f_72_, 0, v_goal_64_);
lean_closure_set(v___f_72_, 1, v_toPure_69_);
lean_closure_set(v___f_72_, 2, v_k_66_);
lean_closure_set(v___f_72_, 3, v_toBind_68_);
v___x_73_ = lean_apply_4(v_toBind_68_, lean_box(0), lean_box(0), v___x_71_, v___f_72_);
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert(lean_object* v_m_74_, lean_object* v_inst_75_, lean_object* v_inst_76_, lean_object* v_goal_77_, lean_object* v_ref_78_, lean_object* v_k_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg(v_inst_75_, v_inst_76_, v_goal_77_, v_ref_78_, v_k_79_);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__0(lean_object* v_inst_81_, lean_object* v_x_82_){
_start:
{
lean_object* v_fst_83_; lean_object* v_snd_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_fst_83_ = lean_ctor_get(v_x_82_, 0);
lean_inc(v_fst_83_);
v_snd_84_ = lean_ctor_get(v_x_82_, 1);
lean_inc(v_snd_84_);
lean_dec_ref(v_x_82_);
v___x_85_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEq___boxed), 7, 2);
lean_closure_set(v___x_85_, 0, v_snd_84_);
lean_closure_set(v___x_85_, 1, v_fst_83_);
v___x_86_ = lean_apply_2(v_inst_81_, lean_box(0), v___x_85_);
return v___x_86_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1(lean_object* v_hypName_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Lean_Core_mkFreshUserName(v_hypName_87_, v___y_90_, v___y_91_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1___boxed(lean_object* v_hypName_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_){
_start:
{
lean_object* v_res_100_; 
v_res_100_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1(v_hypName_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec(v___y_96_);
lean_dec_ref(v___y_95_);
return v_res_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2(lean_object* v_it_101_, lean_object* v_acc_102_, lean_object* v_recur_103_){
_start:
{
lean_object* v_array_104_; lean_object* v_start_105_; lean_object* v_stop_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_119_; 
v_array_104_ = lean_ctor_get(v_it_101_, 0);
v_start_105_ = lean_ctor_get(v_it_101_, 1);
v_stop_106_ = lean_ctor_get(v_it_101_, 2);
v_isSharedCheck_119_ = !lean_is_exclusive(v_it_101_);
if (v_isSharedCheck_119_ == 0)
{
v___x_108_ = v_it_101_;
v_isShared_109_ = v_isSharedCheck_119_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_stop_106_);
lean_inc(v_start_105_);
lean_inc(v_array_104_);
lean_dec(v_it_101_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_119_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
uint8_t v___x_110_; 
v___x_110_ = lean_nat_dec_lt(v_start_105_, v_stop_106_);
if (v___x_110_ == 0)
{
lean_del_object(v___x_108_);
lean_dec(v_stop_106_);
lean_dec(v_start_105_);
lean_dec_ref(v_array_104_);
lean_dec_ref(v_recur_103_);
return v_acc_102_;
}
else
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_114_; 
v___x_111_ = lean_unsigned_to_nat(1u);
v___x_112_ = lean_nat_add(v_start_105_, v___x_111_);
lean_inc_ref(v_array_104_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 1, v___x_112_);
v___x_114_ = v___x_108_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_array_104_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___x_112_);
lean_ctor_set(v_reuseFailAlloc_118_, 2, v_stop_106_);
v___x_114_ = v_reuseFailAlloc_118_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_array_fget(v_array_104_, v_start_105_);
lean_dec(v_start_105_);
lean_dec_ref(v_array_104_);
v___x_116_ = lean_array_push(v_acc_102_, v___x_115_);
v___x_117_ = lean_apply_3(v_recur_103_, v___x_114_, v___x_116_, lean_box(0));
return v___x_117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3(lean_object* v_u_120_, lean_object* v_x1_121_, lean_object* v_x2_122_){
_start:
{
lean_object* v___x_123_; 
v___x_123_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(v_u_120_, v_x1_121_, v_x2_122_);
return v___x_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4(lean_object* v_toApplicative_124_, lean_object* v_i_125_, lean_object* v_a_126_, lean_object* v_____do__lift_127_){
_start:
{
lean_object* v_toPure_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; 
v_toPure_128_ = lean_ctor_get(v_toApplicative_124_, 1);
lean_inc(v_toPure_128_);
lean_dec_ref(v_toApplicative_124_);
v___x_129_ = lean_unsigned_to_nat(1u);
v___x_130_ = lean_nat_add(v_i_125_, v___x_129_);
v___x_131_ = lean_name_append_index_after(v_____do__lift_127_, v___x_130_);
v___x_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_132_, 0, v___x_131_);
lean_ctor_set(v___x_132_, 1, v_a_126_);
v___x_133_ = lean_apply_2(v_toPure_128_, lean_box(0), v___x_132_);
return v___x_133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed(lean_object* v_toApplicative_134_, lean_object* v_i_135_, lean_object* v_a_136_, lean_object* v_____do__lift_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4(v_toApplicative_134_, v_i_135_, v_a_136_, v_____do__lift_137_);
lean_dec(v_i_135_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5(lean_object* v___x_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l_Lean_Core_mkFreshUserName(v___x_139_, v___y_142_, v___y_143_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___boxed(lean_object* v___x_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5(v___x_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
return v_res_152_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__0(void){
_start:
{
lean_object* v___x_153_; 
v___x_153_ = lean_mk_string_unchecked("s", 1, 1);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_154_; lean_object* v___x_155_; 
v___x_154_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__0);
v___x_155_ = l_Lean_Name_mkStr1(v___x_154_);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__2(void){
_start:
{
lean_object* v___x_156_; lean_object* v___f_157_; 
v___x_156_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1);
v___f_157_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__5___boxed), 6, 1);
lean_closure_set(v___f_157_, 0, v___x_156_);
return v___f_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6(lean_object* v_toApplicative_158_, lean_object* v_inst_159_, lean_object* v_toBind_160_, lean_object* v_i_161_, lean_object* v_a_162_, lean_object* v_x_163_){
_start:
{
lean_object* v___f_164_; lean_object* v___f_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___f_164_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__4___boxed), 4, 3);
lean_closure_set(v___f_164_, 0, v_toApplicative_158_);
lean_closure_set(v___f_164_, 1, v_i_161_);
lean_closure_set(v___f_164_, 2, v_a_162_);
v___f_165_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__2);
v___x_166_ = lean_apply_2(v_inst_159_, lean_box(0), v___f_165_);
v___x_167_ = lean_apply_4(v_toBind_160_, lean_box(0), lean_box(0), v___x_166_, v___f_164_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__7(lean_object* v_toApplicative_168_, lean_object* v_00_u03c6_169_, lean_object* v_____do__lift_170_){
_start:
{
lean_object* v_toPure_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v_toPure_171_ = lean_ctor_get(v_toApplicative_168_, 1);
lean_inc(v_toPure_171_);
lean_dec_ref(v_toApplicative_168_);
v___x_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_172_, 0, v_____do__lift_170_);
lean_ctor_set(v___x_172_, 1, v_00_u03c6_169_);
v___x_173_ = lean_apply_2(v_toPure_171_, lean_box(0), v___x_172_);
return v___x_173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8(lean_object* v_hypName_174_, lean_object* v_uniq_175_, lean_object* v_toApplicative_176_, lean_object* v_ss_177_, lean_object* v_hyps_178_, uint8_t v___x_179_, uint8_t v___x_180_, uint8_t v___x_181_, lean_object* v_inst_182_, lean_object* v_toBind_183_, lean_object* v_____do__lift_184_){
_start:
{
lean_object* v___x_185_; lean_object* v_00_u03c6_186_; lean_object* v___f_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_185_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_185_, 0, v_hypName_174_);
lean_ctor_set(v___x_185_, 1, v_uniq_175_);
lean_ctor_set(v___x_185_, 2, v_____do__lift_184_);
v_00_u03c6_186_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_185_);
v___f_187_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__7), 3, 2);
lean_closure_set(v___f_187_, 0, v_toApplicative_176_);
lean_closure_set(v___f_187_, 1, v_00_u03c6_186_);
v___x_188_ = lean_box(v___x_179_);
v___x_189_ = lean_box(v___x_180_);
v___x_190_ = lean_box(v___x_179_);
v___x_191_ = lean_box(v___x_180_);
v___x_192_ = lean_box(v___x_181_);
v___x_193_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_193_, 0, v_ss_177_);
lean_closure_set(v___x_193_, 1, v_hyps_178_);
lean_closure_set(v___x_193_, 2, v___x_188_);
lean_closure_set(v___x_193_, 3, v___x_189_);
lean_closure_set(v___x_193_, 4, v___x_190_);
lean_closure_set(v___x_193_, 5, v___x_191_);
lean_closure_set(v___x_193_, 6, v___x_192_);
v___x_194_ = lean_apply_2(v_inst_182_, lean_box(0), v___x_193_);
v___x_195_ = lean_apply_4(v_toBind_183_, lean_box(0), lean_box(0), v___x_194_, v___f_187_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed(lean_object* v_hypName_196_, lean_object* v_uniq_197_, lean_object* v_toApplicative_198_, lean_object* v_ss_199_, lean_object* v_hyps_200_, lean_object* v___x_201_, lean_object* v___x_202_, lean_object* v___x_203_, lean_object* v_inst_204_, lean_object* v_toBind_205_, lean_object* v_____do__lift_206_){
_start:
{
uint8_t v___x_1119__boxed_207_; uint8_t v___x_1120__boxed_208_; uint8_t v___x_1121__boxed_209_; lean_object* v_res_210_; 
v___x_1119__boxed_207_ = lean_unbox(v___x_201_);
v___x_1120__boxed_208_ = lean_unbox(v___x_202_);
v___x_1121__boxed_209_ = lean_unbox(v___x_203_);
v_res_210_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8(v_hypName_196_, v_uniq_197_, v_toApplicative_198_, v_ss_199_, v_hyps_200_, v___x_1119__boxed_207_, v___x_1120__boxed_208_, v___x_1121__boxed_209_, v_inst_204_, v_toBind_205_, v_____do__lift_206_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9(lean_object* v_hypName_211_, lean_object* v_toApplicative_212_, lean_object* v_ss_213_, lean_object* v_hyps_214_, uint8_t v___x_215_, lean_object* v_inst_216_, lean_object* v_toBind_217_, lean_object* v_00_u03c6_218_, lean_object* v_uniq_219_){
_start:
{
uint8_t v___x_220_; uint8_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___f_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v___x_220_ = 1;
v___x_221_ = 1;
v___x_222_ = lean_box(v___x_215_);
v___x_223_ = lean_box(v___x_220_);
v___x_224_ = lean_box(v___x_221_);
lean_inc(v_toBind_217_);
lean_inc(v_inst_216_);
lean_inc_ref(v_ss_213_);
v___f_225_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__8___boxed), 11, 10);
lean_closure_set(v___f_225_, 0, v_hypName_211_);
lean_closure_set(v___f_225_, 1, v_uniq_219_);
lean_closure_set(v___f_225_, 2, v_toApplicative_212_);
lean_closure_set(v___f_225_, 3, v_ss_213_);
lean_closure_set(v___f_225_, 4, v_hyps_214_);
lean_closure_set(v___f_225_, 5, v___x_222_);
lean_closure_set(v___f_225_, 6, v___x_223_);
lean_closure_set(v___f_225_, 7, v___x_224_);
lean_closure_set(v___f_225_, 8, v_inst_216_);
lean_closure_set(v___f_225_, 9, v_toBind_217_);
v___x_226_ = lean_box(v___x_215_);
v___x_227_ = lean_box(v___x_220_);
v___x_228_ = lean_box(v___x_215_);
v___x_229_ = lean_box(v___x_220_);
v___x_230_ = lean_box(v___x_221_);
v___x_231_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_231_, 0, v_ss_213_);
lean_closure_set(v___x_231_, 1, v_00_u03c6_218_);
lean_closure_set(v___x_231_, 2, v___x_226_);
lean_closure_set(v___x_231_, 3, v___x_227_);
lean_closure_set(v___x_231_, 4, v___x_228_);
lean_closure_set(v___x_231_, 5, v___x_229_);
lean_closure_set(v___x_231_, 6, v___x_230_);
v___x_232_ = lean_apply_2(v_inst_216_, lean_box(0), v___x_231_);
v___x_233_ = lean_apply_4(v_toBind_217_, lean_box(0), lean_box(0), v___x_232_, v___f_225_);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed(lean_object* v_hypName_234_, lean_object* v_toApplicative_235_, lean_object* v_ss_236_, lean_object* v_hyps_237_, lean_object* v___x_238_, lean_object* v_inst_239_, lean_object* v_toBind_240_, lean_object* v_00_u03c6_241_, lean_object* v_uniq_242_){
_start:
{
uint8_t v___x_1154__boxed_243_; lean_object* v_res_244_; 
v___x_1154__boxed_243_ = lean_unbox(v___x_238_);
v_res_244_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9(v_hypName_234_, v_toApplicative_235_, v_ss_236_, v_hyps_237_, v___x_1154__boxed_243_, v_inst_239_, v_toBind_240_, v_00_u03c6_241_, v_uniq_242_);
return v_res_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10(lean_object* v_u_245_, lean_object* v_00_u03c3s_246_, lean_object* v_hypName_247_, lean_object* v_toApplicative_248_, lean_object* v_ss_249_, lean_object* v_hyps_250_, uint8_t v___x_251_, lean_object* v_inst_252_, lean_object* v_toBind_253_, lean_object* v___f_254_, lean_object* v_eqs_255_){
_start:
{
lean_object* v_eqs_256_; lean_object* v_00_u03c6_257_; lean_object* v_00_u03c6_258_; lean_object* v___x_259_; lean_object* v___f_260_; lean_object* v___x_261_; lean_object* v___x_262_; 
v_eqs_256_ = lean_array_to_list(v_eqs_255_);
v_00_u03c6_257_ = l_Lean_mkAndN(v_eqs_256_);
v_00_u03c6_258_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_u_245_, v_00_u03c3s_246_, v_00_u03c6_257_);
v___x_259_ = lean_box(v___x_251_);
lean_inc(v_toBind_253_);
lean_inc(v_inst_252_);
v___f_260_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__9___boxed), 9, 8);
lean_closure_set(v___f_260_, 0, v_hypName_247_);
lean_closure_set(v___f_260_, 1, v_toApplicative_248_);
lean_closure_set(v___f_260_, 2, v_ss_249_);
lean_closure_set(v___f_260_, 3, v_hyps_250_);
lean_closure_set(v___f_260_, 4, v___x_259_);
lean_closure_set(v___f_260_, 5, v_inst_252_);
lean_closure_set(v___f_260_, 6, v_toBind_253_);
lean_closure_set(v___f_260_, 7, v_00_u03c6_258_);
v___x_261_ = lean_apply_2(v_inst_252_, lean_box(0), v___f_254_);
v___x_262_ = lean_apply_4(v_toBind_253_, lean_box(0), lean_box(0), v___x_261_, v___f_260_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed(lean_object* v_u_263_, lean_object* v_00_u03c3s_264_, lean_object* v_hypName_265_, lean_object* v_toApplicative_266_, lean_object* v_ss_267_, lean_object* v_hyps_268_, lean_object* v___x_269_, lean_object* v_inst_270_, lean_object* v_toBind_271_, lean_object* v___f_272_, lean_object* v_eqs_273_){
_start:
{
uint8_t v___x_1188__boxed_274_; lean_object* v_res_275_; 
v___x_1188__boxed_274_ = lean_unbox(v___x_269_);
v_res_275_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10(v_u_263_, v_00_u03c3s_264_, v_hypName_265_, v_toApplicative_266_, v_ss_267_, v_hyps_268_, v___x_1188__boxed_274_, v_inst_270_, v_toBind_271_, v___f_272_, v_eqs_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11(lean_object* v_u_276_, lean_object* v_00_u03c3s_277_, lean_object* v_hypName_278_, lean_object* v_toApplicative_279_, lean_object* v_hyps_280_, uint8_t v___x_281_, lean_object* v_inst_282_, lean_object* v_toBind_283_, lean_object* v___f_284_, lean_object* v_revertArgs_285_, lean_object* v_inst_286_, lean_object* v___f_287_, lean_object* v_ss_288_){
_start:
{
lean_object* v___x_289_; lean_object* v___f_290_; lean_object* v___x_291_; size_t v_sz_292_; size_t v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_289_ = lean_box(v___x_281_);
lean_inc(v_toBind_283_);
lean_inc_ref(v_ss_288_);
v___f_290_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__10___boxed), 11, 10);
lean_closure_set(v___f_290_, 0, v_u_276_);
lean_closure_set(v___f_290_, 1, v_00_u03c3s_277_);
lean_closure_set(v___f_290_, 2, v_hypName_278_);
lean_closure_set(v___f_290_, 3, v_toApplicative_279_);
lean_closure_set(v___f_290_, 4, v_ss_288_);
lean_closure_set(v___f_290_, 5, v_hyps_280_);
lean_closure_set(v___f_290_, 6, v___x_289_);
lean_closure_set(v___f_290_, 7, v_inst_282_);
lean_closure_set(v___f_290_, 8, v_toBind_283_);
lean_closure_set(v___f_290_, 9, v___f_284_);
v___x_291_ = l_Array_zip___redArg(v_revertArgs_285_, v_ss_288_);
lean_dec_ref(v_ss_288_);
v_sz_292_ = lean_array_size(v___x_291_);
v___x_293_ = ((size_t)0ULL);
v___x_294_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_286_, v___f_287_, v_sz_292_, v___x_293_, v___x_291_);
v___x_295_ = lean_apply_4(v_toBind_283_, lean_box(0), lean_box(0), v___x_294_, v___f_290_);
return v___x_295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed(lean_object* v_u_296_, lean_object* v_00_u03c3s_297_, lean_object* v_hypName_298_, lean_object* v_toApplicative_299_, lean_object* v_hyps_300_, lean_object* v___x_301_, lean_object* v_inst_302_, lean_object* v_toBind_303_, lean_object* v___f_304_, lean_object* v_revertArgs_305_, lean_object* v_inst_306_, lean_object* v___f_307_, lean_object* v_ss_308_){
_start:
{
uint8_t v___x_1205__boxed_309_; lean_object* v_res_310_; 
v___x_1205__boxed_309_ = lean_unbox(v___x_301_);
v_res_310_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11(v_u_296_, v_00_u03c3s_297_, v_hypName_298_, v_toApplicative_299_, v_hyps_300_, v___x_1205__boxed_309_, v_inst_302_, v_toBind_303_, v___f_304_, v_revertArgs_305_, v_inst_306_, v___f_307_, v_ss_308_);
lean_dec_ref(v_revertArgs_305_);
return v_res_310_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0(void){
_start:
{
lean_object* v___x_311_; 
v___x_311_ = lean_mk_string_unchecked("and_pure_intro_r", 16, 16);
return v___x_311_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1(void){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_312_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__0);
v___x_313_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1);
v___x_314_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0);
v___x_315_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2);
v___x_316_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1);
v___x_317_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0);
v___x_318_ = l_Lean_Name_mkStr6(v___x_317_, v___x_316_, v___x_315_, v___x_314_, v___x_313_, v___x_312_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12(lean_object* v_toApplicative_319_, lean_object* v_u_320_, lean_object* v_fst_321_, lean_object* v_revertArgs_322_, lean_object* v_snd_323_, lean_object* v_prf_324_, lean_object* v_00_u03c3s_325_, lean_object* v_hyps_326_, lean_object* v_target_327_, lean_object* v_h_328_, lean_object* v_____do__lift_329_){
_start:
{
lean_object* v_toPure_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v_prf_338_; lean_object* v___x_339_; 
v_toPure_330_ = lean_ctor_get(v_toApplicative_319_, 1);
lean_inc(v_toPure_330_);
lean_dec_ref(v_toApplicative_319_);
v___x_331_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1);
v___x_332_ = lean_box(0);
v___x_333_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_333_, 0, v_u_320_);
lean_ctor_set(v___x_333_, 1, v___x_332_);
v___x_334_ = l_Lean_mkConst(v___x_331_, v___x_333_);
v___x_335_ = l_Lean_mkAppN(v_fst_321_, v_revertArgs_322_);
v___x_336_ = l_Lean_mkAppN(v_snd_323_, v_revertArgs_322_);
v___x_337_ = l_Lean_mkAppN(v_prf_324_, v_revertArgs_322_);
v_prf_338_ = l_Lean_mkApp8(v___x_334_, v_00_u03c3s_325_, v_____do__lift_329_, v_hyps_326_, v___x_335_, v_target_327_, v_h_328_, v___x_336_, v___x_337_);
v___x_339_ = lean_apply_2(v_toPure_330_, lean_box(0), v_prf_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed(lean_object* v_toApplicative_340_, lean_object* v_u_341_, lean_object* v_fst_342_, lean_object* v_revertArgs_343_, lean_object* v_snd_344_, lean_object* v_prf_345_, lean_object* v_00_u03c3s_346_, lean_object* v_hyps_347_, lean_object* v_target_348_, lean_object* v_h_349_, lean_object* v_____do__lift_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12(v_toApplicative_340_, v_u_341_, v_fst_342_, v_revertArgs_343_, v_snd_344_, v_prf_345_, v_00_u03c3s_346_, v_hyps_347_, v_target_348_, v_h_349_, v_____do__lift_350_);
lean_dec_ref(v_revertArgs_343_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__13(lean_object* v_toApplicative_352_, lean_object* v_u_353_, lean_object* v_fst_354_, lean_object* v_revertArgs_355_, lean_object* v_snd_356_, lean_object* v_00_u03c3s_357_, lean_object* v_hyps_358_, lean_object* v_target_359_, lean_object* v_h_360_, lean_object* v_inst_361_, lean_object* v_toBind_362_, lean_object* v_prf_363_){
_start:
{
lean_object* v___f_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; 
lean_inc_ref(v_h_360_);
v___f_364_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___boxed), 11, 10);
lean_closure_set(v___f_364_, 0, v_toApplicative_352_);
lean_closure_set(v___f_364_, 1, v_u_353_);
lean_closure_set(v___f_364_, 2, v_fst_354_);
lean_closure_set(v___f_364_, 3, v_revertArgs_355_);
lean_closure_set(v___f_364_, 4, v_snd_356_);
lean_closure_set(v___f_364_, 5, v_prf_363_);
lean_closure_set(v___f_364_, 6, v_00_u03c3s_357_);
lean_closure_set(v___f_364_, 7, v_hyps_358_);
lean_closure_set(v___f_364_, 8, v_target_359_);
lean_closure_set(v___f_364_, 9, v_h_360_);
v___x_365_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_365_, 0, v_h_360_);
v___x_366_ = lean_apply_2(v_inst_361_, lean_box(0), v___x_365_);
v___x_367_ = lean_apply_4(v_toBind_362_, lean_box(0), lean_box(0), v___x_366_, v___f_364_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__14(lean_object* v___y_368_, lean_object* v_u_369_, lean_object* v_snd_370_, lean_object* v_toApplicative_371_, lean_object* v_revertArgs_372_, lean_object* v_00_u03c3s_373_, lean_object* v_hyps_374_, lean_object* v_target_375_, lean_object* v_h_376_, lean_object* v_inst_377_, lean_object* v_toBind_378_, lean_object* v_a_379_, lean_object* v_n_380_, lean_object* v_f_381_, lean_object* v_k_382_, lean_object* v_H_383_){
_start:
{
lean_object* v_H_384_; lean_object* v___x_385_; lean_object* v_fst_386_; lean_object* v_snd_387_; lean_object* v___f_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v_goal_x27_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
lean_inc_ref_n(v___y_368_, 2);
v_H_384_ = l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(v___y_368_, v_H_383_);
lean_inc_n(v_u_369_, 2);
v___x_385_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(v_u_369_, v___y_368_, v_H_384_, v_snd_370_);
v_fst_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc_n(v_fst_386_, 2);
v_snd_387_ = lean_ctor_get(v___x_385_, 1);
lean_inc(v_snd_387_);
lean_dec_ref(v___x_385_);
lean_inc(v_toBind_378_);
v___f_388_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__13), 12, 11);
lean_closure_set(v___f_388_, 0, v_toApplicative_371_);
lean_closure_set(v___f_388_, 1, v_u_369_);
lean_closure_set(v___f_388_, 2, v_fst_386_);
lean_closure_set(v___f_388_, 3, v_revertArgs_372_);
lean_closure_set(v___f_388_, 4, v_snd_387_);
lean_closure_set(v___f_388_, 5, v_00_u03c3s_373_);
lean_closure_set(v___f_388_, 6, v_hyps_374_);
lean_closure_set(v___f_388_, 7, v_target_375_);
lean_closure_set(v___f_388_, 8, v_h_376_);
lean_closure_set(v___f_388_, 9, v_inst_377_);
lean_closure_set(v___f_388_, 10, v_toBind_378_);
v___x_389_ = lean_array_get_size(v_a_379_);
v___x_390_ = l_Array_toSubarray___redArg(v_a_379_, v_n_380_, v___x_389_);
v___x_391_ = l_Subarray_copy___redArg(v___x_390_);
v___x_392_ = l_Lean_mkAppRev(v_f_381_, v___x_391_);
lean_dec_ref(v___x_391_);
v_goal_x27_393_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_goal_x27_393_, 0, v_u_369_);
lean_ctor_set(v_goal_x27_393_, 1, v___y_368_);
lean_ctor_set(v_goal_x27_393_, 2, v_fst_386_);
lean_ctor_set(v_goal_x27_393_, 3, v___x_392_);
v___x_394_ = lean_apply_1(v_k_382_, v_goal_x27_393_);
v___x_395_ = lean_apply_4(v_toBind_378_, lean_box(0), lean_box(0), v___x_394_, v___f_388_);
return v___x_395_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0(void){
_start:
{
lean_object* v___f_396_; 
v___f_396_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_396_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1(void){
_start:
{
lean_object* v___f_397_; 
v___f_397_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_397_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2(void){
_start:
{
lean_object* v___f_398_; 
v___f_398_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_398_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3(void){
_start:
{
lean_object* v___f_399_; 
v___f_399_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_399_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4(void){
_start:
{
lean_object* v___f_400_; 
v___f_400_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_400_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5(void){
_start:
{
lean_object* v___f_401_; 
v___f_401_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_401_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6(void){
_start:
{
lean_object* v___f_402_; 
v___f_402_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_402_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7(void){
_start:
{
lean_object* v___f_403_; lean_object* v___f_404_; lean_object* v___x_405_; 
v___f_403_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__1);
v___f_404_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__0);
v___x_405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_405_, 0, v___f_404_);
lean_ctor_set(v___x_405_, 1, v___f_403_);
return v___x_405_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8(void){
_start:
{
lean_object* v___f_406_; lean_object* v___f_407_; lean_object* v___f_408_; lean_object* v___f_409_; lean_object* v___x_410_; lean_object* v___x_411_; 
v___f_406_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__5);
v___f_407_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__4);
v___f_408_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__3);
v___f_409_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__2);
v___x_410_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__7);
v___x_411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
lean_ctor_set(v___x_411_, 1, v___f_409_);
lean_ctor_set(v___x_411_, 2, v___f_408_);
lean_ctor_set(v___x_411_, 3, v___f_407_);
lean_ctor_set(v___x_411_, 4, v___f_406_);
return v___x_411_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9(void){
_start:
{
lean_object* v___f_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___f_412_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__6);
v___x_413_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__8);
v___x_414_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
lean_ctor_set(v___x_414_, 1, v___f_412_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15(lean_object* v_u_415_, lean_object* v_snd_416_, lean_object* v_toApplicative_417_, lean_object* v_revertArgs_418_, lean_object* v_00_u03c3s_419_, lean_object* v_hyps_420_, lean_object* v_target_421_, lean_object* v_inst_422_, lean_object* v_toBind_423_, lean_object* v_a_424_, lean_object* v_n_425_, lean_object* v_f_426_, lean_object* v_k_427_, lean_object* v_fst_428_, lean_object* v_revertArgsTypes_429_, lean_object* v___x_430_, lean_object* v___f_431_, lean_object* v_h_432_){
_start:
{
lean_object* v___y_434_; lean_object* v___x_439_; lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_439_ = lean_array_get_size(v_revertArgsTypes_429_);
v___x_440_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___closed__9);
v___x_441_ = lean_nat_dec_lt(v___x_430_, v___x_439_);
if (v___x_441_ == 0)
{
lean_dec_ref(v___f_431_);
lean_dec_ref(v_revertArgsTypes_429_);
lean_inc_ref(v_00_u03c3s_419_);
v___y_434_ = v_00_u03c3s_419_;
goto v___jp_433_;
}
else
{
size_t v___x_442_; size_t v___x_443_; lean_object* v___x_444_; 
v___x_442_ = lean_usize_of_nat(v___x_439_);
v___x_443_ = ((size_t)0ULL);
lean_inc_ref(v_00_u03c3s_419_);
v___x_444_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_440_, v___f_431_, v_revertArgsTypes_429_, v___x_442_, v___x_443_, v_00_u03c3s_419_);
v___y_434_ = v___x_444_;
goto v___jp_433_;
}
v___jp_433_:
{
lean_object* v___f_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
lean_inc(v_toBind_423_);
lean_inc(v_inst_422_);
v___f_435_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__14), 16, 15);
lean_closure_set(v___f_435_, 0, v___y_434_);
lean_closure_set(v___f_435_, 1, v_u_415_);
lean_closure_set(v___f_435_, 2, v_snd_416_);
lean_closure_set(v___f_435_, 3, v_toApplicative_417_);
lean_closure_set(v___f_435_, 4, v_revertArgs_418_);
lean_closure_set(v___f_435_, 5, v_00_u03c3s_419_);
lean_closure_set(v___f_435_, 6, v_hyps_420_);
lean_closure_set(v___f_435_, 7, v_target_421_);
lean_closure_set(v___f_435_, 8, v_h_432_);
lean_closure_set(v___f_435_, 9, v_inst_422_);
lean_closure_set(v___f_435_, 10, v_toBind_423_);
lean_closure_set(v___f_435_, 11, v_a_424_);
lean_closure_set(v___f_435_, 12, v_n_425_);
lean_closure_set(v___f_435_, 13, v_f_426_);
lean_closure_set(v___f_435_, 14, v_k_427_);
v___x_436_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateMVarsIfMVarApp___boxed), 6, 1);
lean_closure_set(v___x_436_, 0, v_fst_428_);
v___x_437_ = lean_apply_2(v_inst_422_, lean_box(0), v___x_436_);
v___x_438_ = lean_apply_4(v_toBind_423_, lean_box(0), lean_box(0), v___x_437_, v___f_435_);
return v___x_438_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___boxed(lean_object** _args){
lean_object* v_u_445_ = _args[0];
lean_object* v_snd_446_ = _args[1];
lean_object* v_toApplicative_447_ = _args[2];
lean_object* v_revertArgs_448_ = _args[3];
lean_object* v_00_u03c3s_449_ = _args[4];
lean_object* v_hyps_450_ = _args[5];
lean_object* v_target_451_ = _args[6];
lean_object* v_inst_452_ = _args[7];
lean_object* v_toBind_453_ = _args[8];
lean_object* v_a_454_ = _args[9];
lean_object* v_n_455_ = _args[10];
lean_object* v_f_456_ = _args[11];
lean_object* v_k_457_ = _args[12];
lean_object* v_fst_458_ = _args[13];
lean_object* v_revertArgsTypes_459_ = _args[14];
lean_object* v___x_460_ = _args[15];
lean_object* v___f_461_ = _args[16];
lean_object* v_h_462_ = _args[17];
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15(v_u_445_, v_snd_446_, v_toApplicative_447_, v_revertArgs_448_, v_00_u03c3s_449_, v_hyps_450_, v_target_451_, v_inst_452_, v_toBind_453_, v_a_454_, v_n_455_, v_f_456_, v_k_457_, v_fst_458_, v_revertArgsTypes_459_, v___x_460_, v___f_461_, v_h_462_);
lean_dec(v___x_460_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__16(lean_object* v_inst_464_, lean_object* v_toBind_465_, lean_object* v___f_466_, lean_object* v_prfs_467_){
_start:
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_468_ = lean_array_to_list(v_prfs_467_);
v___x_469_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAndIntroN___boxed), 6, 1);
lean_closure_set(v___x_469_, 0, v___x_468_);
v___x_470_ = lean_apply_2(v_inst_464_, lean_box(0), v___x_469_);
v___x_471_ = lean_apply_4(v_toBind_465_, lean_box(0), lean_box(0), v___x_470_, v___f_466_);
return v___x_471_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0(void){
_start:
{
lean_object* v___x_472_; 
v___x_472_ = lean_alloc_closure((void*)(l_Lean_Meta_mkEqRefl___boxed), 6, 0);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17(lean_object* v_u_473_, lean_object* v_toApplicative_474_, lean_object* v_revertArgs_475_, lean_object* v_00_u03c3s_476_, lean_object* v_hyps_477_, lean_object* v_target_478_, lean_object* v_inst_479_, lean_object* v_toBind_480_, lean_object* v_a_481_, lean_object* v_n_482_, lean_object* v_f_483_, lean_object* v_k_484_, lean_object* v_revertArgsTypes_485_, lean_object* v___x_486_, lean_object* v___f_487_, lean_object* v___x_488_, lean_object* v_____x_489_){
_start:
{
lean_object* v_fst_490_; lean_object* v_snd_491_; lean_object* v___f_492_; lean_object* v___f_493_; lean_object* v___x_494_; size_t v_sz_495_; size_t v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; 
v_fst_490_ = lean_ctor_get(v_____x_489_, 0);
lean_inc(v_fst_490_);
v_snd_491_ = lean_ctor_get(v_____x_489_, 1);
lean_inc(v_snd_491_);
lean_dec_ref(v_____x_489_);
lean_inc_n(v_toBind_480_, 2);
lean_inc_n(v_inst_479_, 2);
lean_inc_ref(v_revertArgs_475_);
v___f_492_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__15___boxed), 18, 17);
lean_closure_set(v___f_492_, 0, v_u_473_);
lean_closure_set(v___f_492_, 1, v_snd_491_);
lean_closure_set(v___f_492_, 2, v_toApplicative_474_);
lean_closure_set(v___f_492_, 3, v_revertArgs_475_);
lean_closure_set(v___f_492_, 4, v_00_u03c3s_476_);
lean_closure_set(v___f_492_, 5, v_hyps_477_);
lean_closure_set(v___f_492_, 6, v_target_478_);
lean_closure_set(v___f_492_, 7, v_inst_479_);
lean_closure_set(v___f_492_, 8, v_toBind_480_);
lean_closure_set(v___f_492_, 9, v_a_481_);
lean_closure_set(v___f_492_, 10, v_n_482_);
lean_closure_set(v___f_492_, 11, v_f_483_);
lean_closure_set(v___f_492_, 12, v_k_484_);
lean_closure_set(v___f_492_, 13, v_fst_490_);
lean_closure_set(v___f_492_, 14, v_revertArgsTypes_485_);
lean_closure_set(v___f_492_, 15, v___x_486_);
lean_closure_set(v___f_492_, 16, v___f_487_);
v___f_493_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__16), 4, 3);
lean_closure_set(v___f_493_, 0, v_inst_479_);
lean_closure_set(v___f_493_, 1, v_toBind_480_);
lean_closure_set(v___f_493_, 2, v___f_492_);
v___x_494_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___closed__0);
v_sz_495_ = lean_array_size(v_revertArgs_475_);
v___x_496_ = ((size_t)0ULL);
v___x_497_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_488_, v___x_494_, v_sz_495_, v___x_496_, v_revertArgs_475_);
v___x_498_ = lean_apply_2(v_inst_479_, lean_box(0), v___x_497_);
v___x_499_ = lean_apply_4(v_toBind_480_, lean_box(0), lean_box(0), v___x_498_, v___f_493_);
return v___x_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___boxed(lean_object** _args){
lean_object* v_u_500_ = _args[0];
lean_object* v_toApplicative_501_ = _args[1];
lean_object* v_revertArgs_502_ = _args[2];
lean_object* v_00_u03c3s_503_ = _args[3];
lean_object* v_hyps_504_ = _args[4];
lean_object* v_target_505_ = _args[5];
lean_object* v_inst_506_ = _args[6];
lean_object* v_toBind_507_ = _args[7];
lean_object* v_a_508_ = _args[8];
lean_object* v_n_509_ = _args[9];
lean_object* v_f_510_ = _args[10];
lean_object* v_k_511_ = _args[11];
lean_object* v_revertArgsTypes_512_ = _args[12];
lean_object* v___x_513_ = _args[13];
lean_object* v___f_514_ = _args[14];
lean_object* v___x_515_ = _args[15];
lean_object* v_____x_516_ = _args[16];
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17(v_u_500_, v_toApplicative_501_, v_revertArgs_502_, v_00_u03c3s_503_, v_hyps_504_, v_target_505_, v_inst_506_, v_toBind_507_, v_a_508_, v_n_509_, v_f_510_, v_k_511_, v_revertArgsTypes_512_, v___x_513_, v___f_514_, v___x_515_, v_____x_516_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18(lean_object* v_inst_518_, lean_object* v_inst_519_, lean_object* v___f_520_, lean_object* v_toBind_521_, lean_object* v___f_522_, lean_object* v_declInfos_523_){
_start:
{
uint8_t v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_524_ = 0;
v___x_525_ = l_Lean_Meta_withLocalDeclsDND___redArg(v_inst_518_, v_inst_519_, v_declInfos_523_, v___f_520_, v___x_524_);
v___x_526_ = lean_apply_4(v_toBind_521_, lean_box(0), lean_box(0), v___x_525_, v___f_522_);
return v___x_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19(lean_object* v_u_527_, lean_object* v_toApplicative_528_, lean_object* v_revertArgs_529_, lean_object* v_00_u03c3s_530_, lean_object* v_hyps_531_, lean_object* v_target_532_, lean_object* v_inst_533_, lean_object* v_toBind_534_, lean_object* v_a_535_, lean_object* v_n_536_, lean_object* v_f_537_, lean_object* v_k_538_, lean_object* v___x_539_, lean_object* v___f_540_, lean_object* v___x_541_, lean_object* v_inst_542_, lean_object* v_inst_543_, lean_object* v___f_544_, lean_object* v___f_545_, lean_object* v_revertArgsTypes_546_){
_start:
{
lean_object* v___f_547_; lean_object* v___f_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; 
lean_inc(v___x_539_);
lean_inc_ref(v_revertArgsTypes_546_);
lean_inc_n(v_toBind_534_, 2);
v___f_547_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__17___boxed), 17, 16);
lean_closure_set(v___f_547_, 0, v_u_527_);
lean_closure_set(v___f_547_, 1, v_toApplicative_528_);
lean_closure_set(v___f_547_, 2, v_revertArgs_529_);
lean_closure_set(v___f_547_, 3, v_00_u03c3s_530_);
lean_closure_set(v___f_547_, 4, v_hyps_531_);
lean_closure_set(v___f_547_, 5, v_target_532_);
lean_closure_set(v___f_547_, 6, v_inst_533_);
lean_closure_set(v___f_547_, 7, v_toBind_534_);
lean_closure_set(v___f_547_, 8, v_a_535_);
lean_closure_set(v___f_547_, 9, v_n_536_);
lean_closure_set(v___f_547_, 10, v_f_537_);
lean_closure_set(v___f_547_, 11, v_k_538_);
lean_closure_set(v___f_547_, 12, v_revertArgsTypes_546_);
lean_closure_set(v___f_547_, 13, v___x_539_);
lean_closure_set(v___f_547_, 14, v___f_540_);
lean_closure_set(v___f_547_, 15, v___x_541_);
lean_inc_ref(v_inst_543_);
v___f_548_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__18), 6, 5);
lean_closure_set(v___f_548_, 0, v_inst_542_);
lean_closure_set(v___f_548_, 1, v_inst_543_);
lean_closure_set(v___f_548_, 2, v___f_544_);
lean_closure_set(v___f_548_, 3, v_toBind_534_);
lean_closure_set(v___f_548_, 4, v___f_547_);
v___x_549_ = lean_array_get_size(v_revertArgsTypes_546_);
v___x_550_ = lean_mk_empty_array_with_capacity(v___x_549_);
v___x_551_ = l_Array_mapFinIdxM_map___redArg(v_inst_543_, v_revertArgsTypes_546_, v___f_545_, v___x_549_, v___x_539_, v___x_550_);
v___x_552_ = lean_apply_4(v_toBind_534_, lean_box(0), lean_box(0), v___x_551_, v___f_548_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19___boxed(lean_object** _args){
lean_object* v_u_553_ = _args[0];
lean_object* v_toApplicative_554_ = _args[1];
lean_object* v_revertArgs_555_ = _args[2];
lean_object* v_00_u03c3s_556_ = _args[3];
lean_object* v_hyps_557_ = _args[4];
lean_object* v_target_558_ = _args[5];
lean_object* v_inst_559_ = _args[6];
lean_object* v_toBind_560_ = _args[7];
lean_object* v_a_561_ = _args[8];
lean_object* v_n_562_ = _args[9];
lean_object* v_f_563_ = _args[10];
lean_object* v_k_564_ = _args[11];
lean_object* v___x_565_ = _args[12];
lean_object* v___f_566_ = _args[13];
lean_object* v___x_567_ = _args[14];
lean_object* v_inst_568_ = _args[15];
lean_object* v_inst_569_ = _args[16];
lean_object* v___f_570_ = _args[17];
lean_object* v___f_571_ = _args[18];
lean_object* v_revertArgsTypes_572_ = _args[19];
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19(v_u_553_, v_toApplicative_554_, v_revertArgs_555_, v_00_u03c3s_556_, v_hyps_557_, v_target_558_, v_inst_559_, v_toBind_560_, v_a_561_, v_n_562_, v_f_563_, v_k_564_, v___x_565_, v___f_566_, v___x_567_, v_inst_568_, v_inst_569_, v___f_570_, v___f_571_, v_revertArgsTypes_572_);
return v_res_573_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0(void){
_start:
{
lean_object* v___x_574_; 
v___x_574_ = l_instMonadEIO(lean_box(0));
return v___x_574_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__0);
v___x_576_ = l_StateRefT_x27_instMonad___redArg(v___x_575_);
return v___x_576_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2(void){
_start:
{
lean_object* v___f_577_; 
v___f_577_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_577_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3(void){
_start:
{
lean_object* v___f_578_; 
v___f_578_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_578_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4(void){
_start:
{
lean_object* v___f_579_; 
v___f_579_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_579_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5(void){
_start:
{
lean_object* v___f_580_; 
v___f_580_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_580_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__6(void){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 0);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(lean_object* v_inst_582_, lean_object* v_inst_583_, lean_object* v_u_584_, lean_object* v_00_u03c3s_585_, lean_object* v_hypName_586_, lean_object* v_hyps_587_, uint8_t v___x_588_, lean_object* v___f_589_, lean_object* v_revertArgs_590_, lean_object* v___f_591_, lean_object* v_target_592_, lean_object* v_a_593_, lean_object* v_n_594_, lean_object* v_f_595_, lean_object* v_k_596_, lean_object* v___x_597_, lean_object* v___f_598_, lean_object* v_inst_599_, lean_object* v_____r_600_){
_start:
{
lean_object* v_toApplicative_601_; lean_object* v_toBind_602_; lean_object* v___x_603_; lean_object* v_toApplicative_604_; lean_object* v_toFunctor_605_; lean_object* v_toSeq_606_; lean_object* v_toSeqLeft_607_; lean_object* v_toSeqRight_608_; lean_object* v___f_609_; lean_object* v___f_610_; lean_object* v___f_611_; lean_object* v___f_612_; lean_object* v___x_613_; lean_object* v___f_614_; lean_object* v___f_615_; lean_object* v___f_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v_toApplicative_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_657_; 
v_toApplicative_601_ = lean_ctor_get(v_inst_582_, 0);
lean_inc_ref(v_toApplicative_601_);
v_toBind_602_ = lean_ctor_get(v_inst_582_, 1);
lean_inc(v_toBind_602_);
v___x_603_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1);
v_toApplicative_604_ = lean_ctor_get(v___x_603_, 0);
v_toFunctor_605_ = lean_ctor_get(v_toApplicative_604_, 0);
v_toSeq_606_ = lean_ctor_get(v_toApplicative_604_, 2);
v_toSeqLeft_607_ = lean_ctor_get(v_toApplicative_604_, 3);
v_toSeqRight_608_ = lean_ctor_get(v_toApplicative_604_, 4);
v___f_609_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2);
v___f_610_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3);
lean_inc_ref_n(v_toFunctor_605_, 2);
v___f_611_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_611_, 0, v_toFunctor_605_);
v___f_612_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_612_, 0, v_toFunctor_605_);
v___x_613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_613_, 0, v___f_611_);
lean_ctor_set(v___x_613_, 1, v___f_612_);
lean_inc(v_toSeqRight_608_);
v___f_614_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_614_, 0, v_toSeqRight_608_);
lean_inc(v_toSeqLeft_607_);
v___f_615_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_615_, 0, v_toSeqLeft_607_);
lean_inc(v_toSeq_606_);
v___f_616_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_616_, 0, v_toSeq_606_);
v___x_617_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_617_, 0, v___x_613_);
lean_ctor_set(v___x_617_, 1, v___f_609_);
lean_ctor_set(v___x_617_, 2, v___f_616_);
lean_ctor_set(v___x_617_, 3, v___f_615_);
lean_ctor_set(v___x_617_, 4, v___f_614_);
v___x_618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v___f_610_);
v___x_619_ = l_StateRefT_x27_instMonad___redArg(v___x_618_);
v_toApplicative_620_ = lean_ctor_get(v___x_619_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_619_);
if (v_isSharedCheck_657_ == 0)
{
lean_object* v_unused_658_; 
v_unused_658_ = lean_ctor_get(v___x_619_, 1);
lean_dec(v_unused_658_);
v___x_622_ = v___x_619_;
v_isShared_623_ = v_isSharedCheck_657_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_toApplicative_620_);
lean_dec(v___x_619_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_657_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v_toFunctor_624_; lean_object* v_toSeq_625_; lean_object* v_toSeqLeft_626_; lean_object* v_toSeqRight_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_655_; 
v_toFunctor_624_ = lean_ctor_get(v_toApplicative_620_, 0);
v_toSeq_625_ = lean_ctor_get(v_toApplicative_620_, 2);
v_toSeqLeft_626_ = lean_ctor_get(v_toApplicative_620_, 3);
v_toSeqRight_627_ = lean_ctor_get(v_toApplicative_620_, 4);
v_isSharedCheck_655_ = !lean_is_exclusive(v_toApplicative_620_);
if (v_isSharedCheck_655_ == 0)
{
lean_object* v_unused_656_; 
v_unused_656_ = lean_ctor_get(v_toApplicative_620_, 1);
lean_dec(v_unused_656_);
v___x_629_ = v_toApplicative_620_;
v_isShared_630_ = v_isSharedCheck_655_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_toSeqRight_627_);
lean_inc(v_toSeqLeft_626_);
lean_inc(v_toSeq_625_);
lean_inc(v_toFunctor_624_);
lean_dec(v_toApplicative_620_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_655_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___f_631_; lean_object* v___x_632_; lean_object* v___f_633_; lean_object* v___f_634_; lean_object* v___f_635_; lean_object* v___f_636_; lean_object* v___f_637_; lean_object* v___x_638_; lean_object* v___f_639_; lean_object* v___f_640_; lean_object* v___f_641_; lean_object* v___x_643_; 
lean_inc_n(v_toBind_602_, 2);
lean_inc_n(v_inst_583_, 2);
lean_inc_ref_n(v_toApplicative_601_, 2);
v___f_631_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6), 6, 3);
lean_closure_set(v___f_631_, 0, v_toApplicative_601_);
lean_closure_set(v___f_631_, 1, v_inst_583_);
lean_closure_set(v___f_631_, 2, v_toBind_602_);
v___x_632_ = lean_box(v___x_588_);
lean_inc_ref(v_inst_582_);
lean_inc_ref(v_revertArgs_590_);
lean_inc_ref(v_hyps_587_);
lean_inc_ref(v_00_u03c3s_585_);
lean_inc(v_u_584_);
v___f_633_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__11___boxed), 13, 12);
lean_closure_set(v___f_633_, 0, v_u_584_);
lean_closure_set(v___f_633_, 1, v_00_u03c3s_585_);
lean_closure_set(v___f_633_, 2, v_hypName_586_);
lean_closure_set(v___f_633_, 3, v_toApplicative_601_);
lean_closure_set(v___f_633_, 4, v_hyps_587_);
lean_closure_set(v___f_633_, 5, v___x_632_);
lean_closure_set(v___f_633_, 6, v_inst_583_);
lean_closure_set(v___f_633_, 7, v_toBind_602_);
lean_closure_set(v___f_633_, 8, v___f_589_);
lean_closure_set(v___f_633_, 9, v_revertArgs_590_);
lean_closure_set(v___f_633_, 10, v_inst_582_);
lean_closure_set(v___f_633_, 11, v___f_591_);
v___f_634_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4);
v___f_635_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5);
lean_inc_ref(v_toFunctor_624_);
v___f_636_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_636_, 0, v_toFunctor_624_);
v___f_637_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_637_, 0, v_toFunctor_624_);
v___x_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_638_, 0, v___f_636_);
lean_ctor_set(v___x_638_, 1, v___f_637_);
v___f_639_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_639_, 0, v_toSeqRight_627_);
v___f_640_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_640_, 0, v_toSeqLeft_626_);
v___f_641_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_641_, 0, v_toSeq_625_);
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 4, v___f_639_);
lean_ctor_set(v___x_629_, 3, v___f_640_);
lean_ctor_set(v___x_629_, 2, v___f_641_);
lean_ctor_set(v___x_629_, 1, v___f_634_);
lean_ctor_set(v___x_629_, 0, v___x_638_);
v___x_643_ = v___x_629_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v___f_634_);
lean_ctor_set(v_reuseFailAlloc_654_, 2, v___f_641_);
lean_ctor_set(v_reuseFailAlloc_654_, 3, v___f_640_);
lean_ctor_set(v_reuseFailAlloc_654_, 4, v___f_639_);
v___x_643_ = v_reuseFailAlloc_654_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_645_; 
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 1, v___f_635_);
lean_ctor_set(v___x_622_, 0, v___x_643_);
v___x_645_ = v___x_622_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_643_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v___f_635_);
v___x_645_ = v_reuseFailAlloc_653_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
lean_object* v___f_646_; lean_object* v___x_647_; size_t v_sz_648_; size_t v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
lean_inc_ref(v___x_645_);
lean_inc(v_toBind_602_);
lean_inc(v_inst_583_);
lean_inc_ref(v_revertArgs_590_);
v___f_646_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__19___boxed), 20, 19);
lean_closure_set(v___f_646_, 0, v_u_584_);
lean_closure_set(v___f_646_, 1, v_toApplicative_601_);
lean_closure_set(v___f_646_, 2, v_revertArgs_590_);
lean_closure_set(v___f_646_, 3, v_00_u03c3s_585_);
lean_closure_set(v___f_646_, 4, v_hyps_587_);
lean_closure_set(v___f_646_, 5, v_target_592_);
lean_closure_set(v___f_646_, 6, v_inst_583_);
lean_closure_set(v___f_646_, 7, v_toBind_602_);
lean_closure_set(v___f_646_, 8, v_a_593_);
lean_closure_set(v___f_646_, 9, v_n_594_);
lean_closure_set(v___f_646_, 10, v_f_595_);
lean_closure_set(v___f_646_, 11, v_k_596_);
lean_closure_set(v___f_646_, 12, v___x_597_);
lean_closure_set(v___f_646_, 13, v___f_598_);
lean_closure_set(v___f_646_, 14, v___x_645_);
lean_closure_set(v___f_646_, 15, v_inst_599_);
lean_closure_set(v___f_646_, 16, v_inst_582_);
lean_closure_set(v___f_646_, 17, v___f_633_);
lean_closure_set(v___f_646_, 18, v___f_631_);
v___x_647_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__6);
v_sz_648_ = lean_array_size(v_revertArgs_590_);
v___x_649_ = ((size_t)0ULL);
v___x_650_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_645_, v___x_647_, v_sz_648_, v___x_649_, v_revertArgs_590_);
v___x_651_ = lean_apply_2(v_inst_583_, lean_box(0), v___x_650_);
v___x_652_ = lean_apply_4(v_toBind_602_, lean_box(0), lean_box(0), v___x_651_, v___f_646_);
return v___x_652_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___boxed(lean_object** _args){
lean_object* v_inst_659_ = _args[0];
lean_object* v_inst_660_ = _args[1];
lean_object* v_u_661_ = _args[2];
lean_object* v_00_u03c3s_662_ = _args[3];
lean_object* v_hypName_663_ = _args[4];
lean_object* v_hyps_664_ = _args[5];
lean_object* v___x_665_ = _args[6];
lean_object* v___f_666_ = _args[7];
lean_object* v_revertArgs_667_ = _args[8];
lean_object* v___f_668_ = _args[9];
lean_object* v_target_669_ = _args[10];
lean_object* v_a_670_ = _args[11];
lean_object* v_n_671_ = _args[12];
lean_object* v_f_672_ = _args[13];
lean_object* v_k_673_ = _args[14];
lean_object* v___x_674_ = _args[15];
lean_object* v___f_675_ = _args[16];
lean_object* v_inst_676_ = _args[17];
lean_object* v_____r_677_ = _args[18];
_start:
{
uint8_t v___x_1549__boxed_678_; lean_object* v_res_679_; 
v___x_1549__boxed_678_ = lean_unbox(v___x_665_);
v_res_679_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(v_inst_659_, v_inst_660_, v_u_661_, v_00_u03c3s_662_, v_hypName_663_, v_hyps_664_, v___x_1549__boxed_678_, v___f_666_, v_revertArgs_667_, v___f_668_, v_target_669_, v_a_670_, v_n_671_, v_f_672_, v_k_673_, v___x_674_, v___f_675_, v_inst_676_, v_____r_677_);
return v_res_679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__21(lean_object* v___f_680_, lean_object* v_____r_681_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = lean_apply_1(v___f_680_, v_____r_681_);
return v___x_682_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0(void){
_start:
{
lean_object* v___f_683_; 
v___f_683_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__2), 3, 0);
return v___f_683_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_684_ = lean_unsigned_to_nat(0u);
v___x_685_ = lean_mk_empty_array_with_capacity(v___x_684_);
return v___x_685_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2(void){
_start:
{
lean_object* v___x_686_; lean_object* v___f_687_; 
v___x_686_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_687_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_687_, 0, v___x_686_);
return v___f_687_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3(void){
_start:
{
lean_object* v___x_688_; lean_object* v___f_689_; 
v___x_688_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_689_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_689_, 0, v___x_688_);
return v___f_689_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4(void){
_start:
{
lean_object* v___f_690_; lean_object* v___f_691_; lean_object* v___x_692_; 
v___f_690_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__3);
v___f_691_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__2);
v___x_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_692_, 0, v___f_691_);
lean_ctor_set(v___x_692_, 1, v___f_690_);
return v___x_692_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5(void){
_start:
{
lean_object* v___x_693_; lean_object* v___f_694_; 
v___x_693_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4);
v___f_694_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_694_, 0, v___x_693_);
return v___f_694_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6(void){
_start:
{
lean_object* v___x_695_; lean_object* v___f_696_; 
v___x_695_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__4);
v___f_696_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2), 5, 1);
lean_closure_set(v___f_696_, 0, v___x_695_);
return v___f_696_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7(void){
_start:
{
lean_object* v___f_697_; lean_object* v___f_698_; lean_object* v___x_699_; 
v___f_697_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__6);
v___f_698_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__5);
v___x_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_699_, 0, v___f_698_);
lean_ctor_set(v___x_699_, 1, v___f_697_);
return v___x_699_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__8(void){
_start:
{
lean_object* v___f_700_; 
v___f_700_ = lean_alloc_closure((void*)(l_ReaderT_instMonadFunctor___lam__0), 4, 0);
return v___f_700_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__9(void){
_start:
{
lean_object* v___f_701_; 
v___f_701_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___lam__0___boxed), 3, 0);
return v___f_701_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__10(void){
_start:
{
lean_object* v___x_702_; 
v___x_702_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadFunctor___aux__1___boxed), 7, 3);
lean_closure_set(v___x_702_, 0, lean_box(0));
lean_closure_set(v___x_702_, 1, lean_box(0));
lean_closure_set(v___x_702_, 2, lean_box(0));
return v___x_702_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__11(void){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 3);
lean_closure_set(v___x_703_, 0, lean_box(0));
lean_closure_set(v___x_703_, 1, lean_box(0));
lean_closure_set(v___x_703_, 2, lean_box(0));
return v___x_703_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__12(void){
_start:
{
lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; 
v___x_704_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_705_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__11);
v___x_706_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__10, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__10_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__10);
v___x_707_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_706_, v___x_705_, v___x_704_);
return v___x_707_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__13(void){
_start:
{
lean_object* v___x_708_; lean_object* v___f_709_; lean_object* v___f_710_; lean_object* v___x_711_; 
v___x_708_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__12, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__12_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__12);
v___f_709_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__9);
v___f_710_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__8);
v___x_711_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_710_, v___f_709_, v___x_708_);
return v___x_711_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__14(void){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = lean_mk_string_unchecked("mrevert: expected ", 18, 18);
return v___x_712_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__15(void){
_start:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__14, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__14_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__14);
v___x_714_ = l_Lean_stringToMessageData(v___x_713_);
return v___x_714_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__16(void){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = lean_mk_string_unchecked(" excess arguments in ", 21, 21);
return v___x_715_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__17(void){
_start:
{
lean_object* v___x_716_; lean_object* v___x_717_; 
v___x_716_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__16, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__16_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__16);
v___x_717_ = l_Lean_stringToMessageData(v___x_716_);
return v___x_717_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__18(void){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = lean_mk_string_unchecked(", got ", 6, 6);
return v___x_718_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__19(void){
_start:
{
lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_719_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__18, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__18_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__18);
v___x_720_ = l_Lean_stringToMessageData(v___x_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg(lean_object* v_inst_721_, lean_object* v_inst_722_, lean_object* v_inst_723_, lean_object* v_goal_724_, lean_object* v_n_725_, lean_object* v_hypName_726_, lean_object* v_k_727_){
_start:
{
lean_object* v___x_728_; uint8_t v___x_729_; 
v___x_728_ = lean_unsigned_to_nat(0u);
v___x_729_ = lean_nat_dec_eq(v_n_725_, v___x_728_);
if (v___x_729_ == 0)
{
lean_object* v_u_730_; lean_object* v_00_u03c3s_731_; lean_object* v_hyps_732_; lean_object* v_target_733_; lean_object* v___f_734_; lean_object* v___f_735_; lean_object* v___f_736_; lean_object* v___f_737_; lean_object* v_T_738_; lean_object* v_f_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v_a_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v_revertArgs_746_; lean_object* v___x_747_; lean_object* v___f_748_; lean_object* v___x_749_; uint8_t v___x_750_; 
v_u_730_ = lean_ctor_get(v_goal_724_, 0);
lean_inc_n(v_u_730_, 3);
v_00_u03c3s_731_ = lean_ctor_get(v_goal_724_, 1);
lean_inc_ref_n(v_00_u03c3s_731_, 2);
v_hyps_732_ = lean_ctor_get(v_goal_724_, 2);
lean_inc_ref_n(v_hyps_732_, 2);
v_target_733_ = lean_ctor_get(v_goal_724_, 3);
lean_inc_ref_n(v_target_733_, 2);
lean_dec_ref(v_goal_724_);
lean_inc_n(v_inst_723_, 2);
v___f_734_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__0), 2, 1);
lean_closure_set(v___f_734_, 0, v_inst_723_);
lean_inc_n(v_hypName_726_, 2);
v___f_735_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_735_, 0, v_hypName_726_);
v___f_736_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__0);
v___f_737_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__3), 3, 1);
lean_closure_set(v___f_737_, 0, v_u_730_);
v_T_738_ = l_Lean_Expr_consumeMData(v_target_733_);
v_f_739_ = l_Lean_Expr_getAppFn(v_T_738_);
v___x_740_ = l_Lean_Expr_getAppNumArgs(v_T_738_);
v___x_741_ = lean_mk_empty_array_with_capacity(v___x_740_);
lean_dec(v___x_740_);
lean_inc_ref(v_T_738_);
v_a_742_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_T_738_, v___x_741_);
lean_inc_n(v_n_725_, 2);
lean_inc_ref_n(v_a_742_, 2);
v___x_743_ = l_Array_toSubarray___redArg(v_a_742_, v___x_728_, v_n_725_);
v___x_744_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1);
v___x_745_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(v___f_736_, v___x_743_, v___x_744_);
v_revertArgs_746_ = l_Array_reverse___redArg(v___x_745_);
v___x_747_ = lean_box(v___x_729_);
lean_inc_ref(v_inst_722_);
lean_inc_ref(v___f_737_);
lean_inc(v_k_727_);
lean_inc_ref(v_f_739_);
lean_inc_ref(v___f_734_);
lean_inc_ref(v_revertArgs_746_);
lean_inc_ref(v___f_735_);
lean_inc_ref(v_inst_721_);
v___f_748_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___boxed), 19, 18);
lean_closure_set(v___f_748_, 0, v_inst_721_);
lean_closure_set(v___f_748_, 1, v_inst_723_);
lean_closure_set(v___f_748_, 2, v_u_730_);
lean_closure_set(v___f_748_, 3, v_00_u03c3s_731_);
lean_closure_set(v___f_748_, 4, v_hypName_726_);
lean_closure_set(v___f_748_, 5, v_hyps_732_);
lean_closure_set(v___f_748_, 6, v___x_747_);
lean_closure_set(v___f_748_, 7, v___f_735_);
lean_closure_set(v___f_748_, 8, v_revertArgs_746_);
lean_closure_set(v___f_748_, 9, v___f_734_);
lean_closure_set(v___f_748_, 10, v_target_733_);
lean_closure_set(v___f_748_, 11, v_a_742_);
lean_closure_set(v___f_748_, 12, v_n_725_);
lean_closure_set(v___f_748_, 13, v_f_739_);
lean_closure_set(v___f_748_, 14, v_k_727_);
lean_closure_set(v___f_748_, 15, v___x_728_);
lean_closure_set(v___f_748_, 16, v___f_737_);
lean_closure_set(v___f_748_, 17, v_inst_722_);
v___x_749_ = lean_array_get_size(v_revertArgs_746_);
v___x_750_ = lean_nat_dec_eq(v___x_749_, v_n_725_);
if (v___x_750_ == 0)
{
lean_object* v_toBind_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_828_; 
lean_dec_ref(v_revertArgs_746_);
lean_dec_ref(v_a_742_);
lean_dec_ref(v_f_739_);
lean_dec_ref(v___f_737_);
lean_dec_ref(v___f_735_);
lean_dec_ref(v___f_734_);
lean_dec_ref(v_target_733_);
lean_dec_ref(v_hyps_732_);
lean_dec_ref(v_00_u03c3s_731_);
lean_dec(v_u_730_);
lean_dec(v_k_727_);
lean_dec(v_hypName_726_);
lean_dec_ref(v_inst_722_);
v_toBind_751_ = lean_ctor_get(v_inst_721_, 1);
v_isSharedCheck_828_ = !lean_is_exclusive(v_inst_721_);
if (v_isSharedCheck_828_ == 0)
{
lean_object* v_unused_829_; 
v_unused_829_ = lean_ctor_get(v_inst_721_, 0);
lean_dec(v_unused_829_);
v___x_753_ = v_inst_721_;
v_isShared_754_ = v_isSharedCheck_828_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_toBind_751_);
lean_dec(v_inst_721_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_828_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_755_; lean_object* v_toApplicative_756_; lean_object* v_toFunctor_757_; lean_object* v_toSeq_758_; lean_object* v_toSeqLeft_759_; lean_object* v_toSeqRight_760_; lean_object* v___f_761_; lean_object* v___f_762_; lean_object* v___f_763_; lean_object* v___f_764_; lean_object* v___x_765_; lean_object* v___f_766_; lean_object* v___f_767_; lean_object* v___f_768_; lean_object* v___x_769_; lean_object* v___x_771_; 
v___x_755_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1);
v_toApplicative_756_ = lean_ctor_get(v___x_755_, 0);
v_toFunctor_757_ = lean_ctor_get(v_toApplicative_756_, 0);
v_toSeq_758_ = lean_ctor_get(v_toApplicative_756_, 2);
v_toSeqLeft_759_ = lean_ctor_get(v_toApplicative_756_, 3);
v_toSeqRight_760_ = lean_ctor_get(v_toApplicative_756_, 4);
v___f_761_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2);
v___f_762_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3);
lean_inc_ref_n(v_toFunctor_757_, 2);
v___f_763_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_763_, 0, v_toFunctor_757_);
v___f_764_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_764_, 0, v_toFunctor_757_);
v___x_765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_765_, 0, v___f_763_);
lean_ctor_set(v___x_765_, 1, v___f_764_);
lean_inc(v_toSeqRight_760_);
v___f_766_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_766_, 0, v_toSeqRight_760_);
lean_inc(v_toSeqLeft_759_);
v___f_767_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_767_, 0, v_toSeqLeft_759_);
lean_inc(v_toSeq_758_);
v___f_768_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_768_, 0, v_toSeq_758_);
v___x_769_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_769_, 0, v___x_765_);
lean_ctor_set(v___x_769_, 1, v___f_761_);
lean_ctor_set(v___x_769_, 2, v___f_768_);
lean_ctor_set(v___x_769_, 3, v___f_767_);
lean_ctor_set(v___x_769_, 4, v___f_766_);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 1, v___f_762_);
lean_ctor_set(v___x_753_, 0, v___x_769_);
v___x_771_ = v___x_753_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_827_, 1, v___f_762_);
v___x_771_ = v_reuseFailAlloc_827_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
lean_object* v___x_772_; lean_object* v_toApplicative_773_; lean_object* v___x_775_; uint8_t v_isShared_776_; uint8_t v_isSharedCheck_825_; 
v___x_772_ = l_StateRefT_x27_instMonad___redArg(v___x_771_);
v_toApplicative_773_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_825_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_825_ == 0)
{
lean_object* v_unused_826_; 
v_unused_826_ = lean_ctor_get(v___x_772_, 1);
lean_dec(v_unused_826_);
v___x_775_ = v___x_772_;
v_isShared_776_ = v_isSharedCheck_825_;
goto v_resetjp_774_;
}
else
{
lean_inc(v_toApplicative_773_);
lean_dec(v___x_772_);
v___x_775_ = lean_box(0);
v_isShared_776_ = v_isSharedCheck_825_;
goto v_resetjp_774_;
}
v_resetjp_774_:
{
lean_object* v_toFunctor_777_; lean_object* v_toSeq_778_; lean_object* v_toSeqLeft_779_; lean_object* v_toSeqRight_780_; lean_object* v___x_782_; uint8_t v_isShared_783_; uint8_t v_isSharedCheck_823_; 
v_toFunctor_777_ = lean_ctor_get(v_toApplicative_773_, 0);
v_toSeq_778_ = lean_ctor_get(v_toApplicative_773_, 2);
v_toSeqLeft_779_ = lean_ctor_get(v_toApplicative_773_, 3);
v_toSeqRight_780_ = lean_ctor_get(v_toApplicative_773_, 4);
v_isSharedCheck_823_ = !lean_is_exclusive(v_toApplicative_773_);
if (v_isSharedCheck_823_ == 0)
{
lean_object* v_unused_824_; 
v_unused_824_ = lean_ctor_get(v_toApplicative_773_, 1);
lean_dec(v_unused_824_);
v___x_782_ = v_toApplicative_773_;
v_isShared_783_ = v_isSharedCheck_823_;
goto v_resetjp_781_;
}
else
{
lean_inc(v_toSeqRight_780_);
lean_inc(v_toSeqLeft_779_);
lean_inc(v_toSeq_778_);
lean_inc(v_toFunctor_777_);
lean_dec(v_toApplicative_773_);
v___x_782_ = lean_box(0);
v_isShared_783_ = v_isSharedCheck_823_;
goto v_resetjp_781_;
}
v_resetjp_781_:
{
lean_object* v___f_784_; lean_object* v___f_785_; lean_object* v___f_786_; lean_object* v___f_787_; lean_object* v___x_788_; lean_object* v___f_789_; lean_object* v___f_790_; lean_object* v___f_791_; lean_object* v___x_793_; 
v___f_784_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4);
v___f_785_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5);
lean_inc_ref(v_toFunctor_777_);
v___f_786_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_786_, 0, v_toFunctor_777_);
v___f_787_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_787_, 0, v_toFunctor_777_);
v___x_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_788_, 0, v___f_786_);
lean_ctor_set(v___x_788_, 1, v___f_787_);
v___f_789_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_789_, 0, v_toSeqRight_780_);
v___f_790_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_790_, 0, v_toSeqLeft_779_);
v___f_791_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_791_, 0, v_toSeq_778_);
if (v_isShared_783_ == 0)
{
lean_ctor_set(v___x_782_, 4, v___f_789_);
lean_ctor_set(v___x_782_, 3, v___f_790_);
lean_ctor_set(v___x_782_, 2, v___f_791_);
lean_ctor_set(v___x_782_, 1, v___f_784_);
lean_ctor_set(v___x_782_, 0, v___x_788_);
v___x_793_ = v___x_782_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_822_; 
v_reuseFailAlloc_822_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_822_, 0, v___x_788_);
lean_ctor_set(v_reuseFailAlloc_822_, 1, v___f_784_);
lean_ctor_set(v_reuseFailAlloc_822_, 2, v___f_791_);
lean_ctor_set(v_reuseFailAlloc_822_, 3, v___f_790_);
lean_ctor_set(v_reuseFailAlloc_822_, 4, v___f_789_);
v___x_793_ = v_reuseFailAlloc_822_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
lean_object* v___x_795_; 
if (v_isShared_776_ == 0)
{
lean_ctor_set(v___x_775_, 1, v___f_785_);
lean_ctor_set(v___x_775_, 0, v___x_793_);
v___x_795_ = v___x_775_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v___x_793_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v___f_785_);
v___x_795_ = v_reuseFailAlloc_821_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v_toMonadRef_798_; lean_object* v___f_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_796_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__7);
v___x_797_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__13, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__13_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__13);
v_toMonadRef_798_ = lean_ctor_get(v___x_797_, 0);
v___f_799_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__21), 2, 1);
lean_closure_set(v___f_799_, 0, v___f_748_);
v___x_800_ = l_Lean_Meta_instAddMessageContextMetaM;
lean_inc_ref(v___x_795_);
v___x_801_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_800_, v___x_795_);
lean_inc_ref(v_toMonadRef_798_);
v___x_802_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_802_, 0, v___x_796_);
lean_ctor_set(v___x_802_, 1, v_toMonadRef_798_);
lean_ctor_set(v___x_802_, 2, v___x_801_);
v___x_803_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__15, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__15_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__15);
v___x_804_ = l_Nat_reprFast(v_n_725_);
v___x_805_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_805_, 0, v___x_804_);
v___x_806_ = l_Lean_MessageData_ofFormat(v___x_805_);
v___x_807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_807_, 0, v___x_803_);
lean_ctor_set(v___x_807_, 1, v___x_806_);
v___x_808_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__17, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__17_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__17);
v___x_809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_809_, 0, v___x_807_);
lean_ctor_set(v___x_809_, 1, v___x_808_);
v___x_810_ = l_Lean_MessageData_ofExpr(v_T_738_);
v___x_811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_811_, 0, v___x_809_);
lean_ctor_set(v___x_811_, 1, v___x_810_);
v___x_812_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__19, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__19_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__19);
v___x_813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_813_, 0, v___x_811_);
lean_ctor_set(v___x_813_, 1, v___x_812_);
v___x_814_ = l_Nat_reprFast(v___x_749_);
v___x_815_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_815_, 0, v___x_814_);
v___x_816_ = l_Lean_MessageData_ofFormat(v___x_815_);
v___x_817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_813_);
lean_ctor_set(v___x_817_, 1, v___x_816_);
v___x_818_ = l_Lean_throwError___redArg(v___x_795_, v___x_802_, v___x_817_);
v___x_819_ = lean_apply_2(v_inst_723_, lean_box(0), v___x_818_);
v___x_820_ = lean_apply_4(v_toBind_751_, lean_box(0), lean_box(0), v___x_819_, v___f_799_);
return v___x_820_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; 
lean_dec_ref(v___f_748_);
lean_dec_ref(v_T_738_);
v___x_830_ = lean_box(0);
v___x_831_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20(v_inst_721_, v_inst_723_, v_u_730_, v_00_u03c3s_731_, v_hypName_726_, v_hyps_732_, v___x_729_, v___f_735_, v_revertArgs_746_, v___f_734_, v_target_733_, v_a_742_, v_n_725_, v_f_739_, v_k_727_, v___x_728_, v___f_737_, v_inst_722_, v___x_830_);
return v___x_831_;
}
}
else
{
lean_object* v___x_832_; 
lean_dec(v_hypName_726_);
lean_dec(v_n_725_);
lean_dec(v_inst_723_);
lean_dec_ref(v_inst_722_);
lean_dec_ref(v_inst_721_);
v___x_832_ = lean_apply_1(v_k_727_, v_goal_724_);
return v___x_832_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN(lean_object* v_m_833_, lean_object* v_inst_834_, lean_object* v_inst_835_, lean_object* v_inst_836_, lean_object* v_goal_837_, lean_object* v_n_838_, lean_object* v_hypName_839_, lean_object* v_k_840_){
_start:
{
lean_object* v___x_841_; 
v___x_841_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg(v_inst_834_, v_inst_835_, v_inst_836_, v_goal_837_, v_n_838_, v_hypName_839_, v_k_840_);
return v___x_841_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = lean_box(0);
v___x_843_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_844_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_844_, 0, v___x_843_);
lean_ctor_set(v___x_844_, 1, v___x_842_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg(){
_start:
{
lean_object* v___x_846_; lean_object* v___x_847_; 
v___x_846_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___closed__0);
v___x_847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_847_, 0, v___x_846_);
return v___x_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg___boxed(lean_object* v___y_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0(lean_object* v_00_u03b1_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v___x_860_; 
v___x_860_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___boxed(lean_object* v_00_u03b1_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_){
_start:
{
lean_object* v_res_871_; 
v_res_871_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0(v_00_u03b1_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_, v___y_869_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v___y_867_);
lean_dec_ref(v___y_866_);
lean_dec(v___y_865_);
lean_dec_ref(v___y_864_);
lean_dec(v___y_863_);
lean_dec_ref(v___y_862_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0(lean_object* v_x_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v___x_882_; 
lean_inc(v___y_876_);
lean_inc_ref(v___y_875_);
lean_inc(v___y_874_);
lean_inc_ref(v___y_873_);
v___x_882_ = lean_apply_9(v_x_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, lean_box(0));
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0___boxed(lean_object* v_x_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0(v_x_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_, v___y_891_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(lean_object* v_mvarId_894_, lean_object* v_x_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v___f_905_; lean_object* v___x_906_; 
lean_inc(v___y_899_);
lean_inc_ref(v___y_898_);
lean_inc(v___y_897_);
lean_inc_ref(v___y_896_);
v___f_905_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_905_, 0, v_x_895_);
lean_closure_set(v___f_905_, 1, v___y_896_);
lean_closure_set(v___f_905_, 2, v___y_897_);
lean_closure_set(v___f_905_, 3, v___y_898_);
lean_closure_set(v___f_905_, 4, v___y_899_);
v___x_906_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_894_, v___f_905_, v___y_900_, v___y_901_, v___y_902_, v___y_903_);
if (lean_obj_tag(v___x_906_) == 0)
{
return v___x_906_;
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
v_a_907_ = lean_ctor_get(v___x_906_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_906_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_906_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_906_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg___boxed(lean_object* v_mvarId_915_, lean_object* v_x_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v_mvarId_915_, v_x_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
lean_dec(v___y_924_);
lean_dec_ref(v___y_923_);
lean_dec(v___y_922_);
lean_dec_ref(v___y_921_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3(lean_object* v_00_u03b1_927_, lean_object* v_mvarId_928_, lean_object* v_x_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v_mvarId_928_, v_x_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_, v___y_937_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___boxed(lean_object* v_00_u03b1_940_, lean_object* v_mvarId_941_, lean_object* v_x_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3(v_00_u03b1_940_, v_mvarId_941_, v_x_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
return v_res_952_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0(void){
_start:
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_953_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__2);
v___x_954_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__1);
v___x_955_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0);
v___x_956_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__2);
v___x_957_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1);
v___x_958_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__0);
v___x_959_ = l_Lean_Name_mkStr6(v___x_958_, v___x_957_, v___x_956_, v___x_955_, v___x_954_, v___x_953_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(lean_object* v_goal_960_, lean_object* v_ref_961_, lean_object* v_k_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
lean_object* v___x_972_; 
lean_inc_ref(v_goal_960_);
v___x_972_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_focusHypWithInfo(v_goal_960_, v_ref_961_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v_u_974_; lean_object* v_00_u03c3s_975_; lean_object* v_hyps_976_; lean_object* v_target_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_1004_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref(v___x_972_);
v_u_974_ = lean_ctor_get(v_goal_960_, 0);
v_00_u03c3s_975_ = lean_ctor_get(v_goal_960_, 1);
v_hyps_976_ = lean_ctor_get(v_goal_960_, 2);
v_target_977_ = lean_ctor_get(v_goal_960_, 3);
v_isSharedCheck_1004_ = !lean_is_exclusive(v_goal_960_);
if (v_isSharedCheck_1004_ == 0)
{
v___x_979_ = v_goal_960_;
v_isShared_980_ = v_isSharedCheck_1004_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_target_977_);
lean_inc(v_hyps_976_);
lean_inc(v_00_u03c3s_975_);
lean_inc(v_u_974_);
lean_dec(v_goal_960_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_1004_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v_focusHyp_981_; lean_object* v_restHyps_982_; lean_object* v_proof_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_990_; 
v_focusHyp_981_ = lean_ctor_get(v_a_973_, 0);
lean_inc_ref_n(v_focusHyp_981_, 2);
v_restHyps_982_ = lean_ctor_get(v_a_973_, 1);
lean_inc_ref_n(v_restHyps_982_, 2);
v_proof_983_ = lean_ctor_get(v_a_973_, 2);
lean_inc_ref(v_proof_983_);
lean_dec(v_a_973_);
v___x_984_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__4);
v___x_985_ = lean_box(0);
lean_inc(v_u_974_);
v___x_986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_986_, 0, v_u_974_);
lean_ctor_set(v___x_986_, 1, v___x_985_);
lean_inc_ref(v___x_986_);
v___x_987_ = l_Lean_mkConst(v___x_984_, v___x_986_);
lean_inc_ref(v_target_977_);
lean_inc_ref_n(v_00_u03c3s_975_, 2);
v___x_988_ = l_Lean_mkApp3(v___x_987_, v_00_u03c3s_975_, v_focusHyp_981_, v_target_977_);
if (v_isShared_980_ == 0)
{
lean_ctor_set(v___x_979_, 3, v___x_988_);
lean_ctor_set(v___x_979_, 2, v_restHyps_982_);
v___x_990_ = v___x_979_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v_u_974_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v_00_u03c3s_975_);
lean_ctor_set(v_reuseFailAlloc_1003_, 2, v_restHyps_982_);
lean_ctor_set(v_reuseFailAlloc_1003_, 3, v___x_988_);
v___x_990_ = v_reuseFailAlloc_1003_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_991_; 
lean_inc(v___y_970_);
lean_inc_ref(v___y_969_);
lean_inc(v___y_968_);
lean_inc_ref(v___y_967_);
lean_inc(v___y_966_);
lean_inc_ref(v___y_965_);
lean_inc(v___y_964_);
lean_inc_ref(v___y_963_);
v___x_991_ = lean_apply_10(v_k_962_, v___x_990_, v___y_963_, v___y_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, lean_box(0));
if (lean_obj_tag(v___x_991_) == 0)
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_1002_; 
v_a_992_ = lean_ctor_get(v___x_991_, 0);
v_isSharedCheck_1002_ = !lean_is_exclusive(v___x_991_);
if (v_isSharedCheck_1002_ == 0)
{
v___x_994_ = v___x_991_;
v_isShared_995_ = v_isSharedCheck_1002_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_991_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_1002_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v_prf_998_; lean_object* v___x_1000_; 
v___x_996_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___closed__0);
v___x_997_ = l_Lean_mkConst(v___x_996_, v___x_986_);
v_prf_998_ = l_Lean_mkApp7(v___x_997_, v_00_u03c3s_975_, v_hyps_976_, v_restHyps_982_, v_focusHyp_981_, v_target_977_, v_proof_983_, v_a_992_);
if (v_isShared_995_ == 0)
{
lean_ctor_set(v___x_994_, 0, v_prf_998_);
v___x_1000_ = v___x_994_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_prf_998_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
return v___x_1000_;
}
}
}
else
{
lean_dec_ref(v___x_986_);
lean_dec_ref(v_proof_983_);
lean_dec_ref(v_restHyps_982_);
lean_dec_ref(v_focusHyp_981_);
lean_dec_ref(v_target_977_);
lean_dec_ref(v_hyps_976_);
lean_dec_ref(v_00_u03c3s_975_);
return v___x_991_;
}
}
}
}
else
{
lean_object* v_a_1005_; lean_object* v___x_1007_; uint8_t v_isShared_1008_; uint8_t v_isSharedCheck_1012_; 
lean_dec_ref(v_k_962_);
lean_dec_ref(v_goal_960_);
v_a_1005_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_1012_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1007_ = v___x_972_;
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
else
{
lean_inc(v_a_1005_);
lean_dec(v___x_972_);
v___x_1007_ = lean_box(0);
v_isShared_1008_ = v_isSharedCheck_1012_;
goto v_resetjp_1006_;
}
v_resetjp_1006_:
{
lean_object* v___x_1010_; 
if (v_isShared_1008_ == 0)
{
v___x_1010_ = v___x_1007_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_a_1005_);
v___x_1010_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
return v___x_1010_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4___boxed(lean_object* v_goal_1013_, lean_object* v_ref_1014_, lean_object* v_k_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_){
_start:
{
lean_object* v_res_1025_; 
v_res_1025_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(v_goal_1013_, v_ref_1014_, v_k_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_, v___y_1020_, v___y_1021_, v___y_1022_, v___y_1023_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
lean_dec(v___y_1021_);
lean_dec_ref(v___y_1020_);
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
return v_res_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0(lean_object* v_val_1026_, lean_object* v_newGoal_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v___x_1037_ = l_Lean_Elab_Tactic_Do_ProofMode_MGoal_toExpr(v_newGoal_1027_);
v___x_1038_ = lean_box(0);
v___x_1039_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1037_, v___x_1038_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1052_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1042_ = v___x_1039_;
v_isShared_1043_ = v_isSharedCheck_1052_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1039_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1052_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1044_ = lean_st_ref_get(v___y_1035_);
lean_dec(v___x_1044_);
v___x_1045_ = lean_st_ref_take(v_val_1026_);
v___x_1046_ = l_Lean_Expr_mvarId_x21(v_a_1040_);
v___x_1047_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1046_);
lean_ctor_set(v___x_1047_, 1, v___x_1045_);
v___x_1048_ = lean_st_ref_set(v_val_1026_, v___x_1047_);
if (v_isShared_1043_ == 0)
{
v___x_1050_ = v___x_1042_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1040_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
else
{
return v___x_1039_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed(lean_object* v_val_1053_, lean_object* v_newGoal_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0(v_val_1053_, v_newGoal_1054_, v___y_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v_val_1053_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20_spec__22___redArg(lean_object* v_x_1065_, lean_object* v_x_1066_, lean_object* v_x_1067_, lean_object* v_x_1068_){
_start:
{
lean_object* v_ks_1069_; lean_object* v_vs_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1094_; 
v_ks_1069_ = lean_ctor_get(v_x_1065_, 0);
v_vs_1070_ = lean_ctor_get(v_x_1065_, 1);
v_isSharedCheck_1094_ = !lean_is_exclusive(v_x_1065_);
if (v_isSharedCheck_1094_ == 0)
{
v___x_1072_ = v_x_1065_;
v_isShared_1073_ = v_isSharedCheck_1094_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_vs_1070_);
lean_inc(v_ks_1069_);
lean_dec(v_x_1065_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1094_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1074_; uint8_t v___x_1075_; 
v___x_1074_ = lean_array_get_size(v_ks_1069_);
v___x_1075_ = lean_nat_dec_lt(v_x_1066_, v___x_1074_);
if (v___x_1075_ == 0)
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1079_; 
lean_dec(v_x_1066_);
v___x_1076_ = lean_array_push(v_ks_1069_, v_x_1067_);
v___x_1077_ = lean_array_push(v_vs_1070_, v_x_1068_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 1, v___x_1077_);
lean_ctor_set(v___x_1072_, 0, v___x_1076_);
v___x_1079_ = v___x_1072_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v___x_1076_);
lean_ctor_set(v_reuseFailAlloc_1080_, 1, v___x_1077_);
v___x_1079_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
return v___x_1079_;
}
}
else
{
lean_object* v_k_x27_1081_; uint8_t v___x_1082_; 
v_k_x27_1081_ = lean_array_fget_borrowed(v_ks_1069_, v_x_1066_);
v___x_1082_ = l_Lean_instBEqMVarId_beq(v_x_1067_, v_k_x27_1081_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1084_; 
if (v_isShared_1073_ == 0)
{
v___x_1084_ = v___x_1072_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_ks_1069_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_vs_1070_);
v___x_1084_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
lean_object* v___x_1085_; lean_object* v___x_1086_; 
v___x_1085_ = lean_unsigned_to_nat(1u);
v___x_1086_ = lean_nat_add(v_x_1066_, v___x_1085_);
lean_dec(v_x_1066_);
v_x_1065_ = v___x_1084_;
v_x_1066_ = v___x_1086_;
goto _start;
}
}
else
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1089_ = lean_array_fset(v_ks_1069_, v_x_1066_, v_x_1067_);
v___x_1090_ = lean_array_fset(v_vs_1070_, v_x_1066_, v_x_1068_);
lean_dec(v_x_1066_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 1, v___x_1090_);
lean_ctor_set(v___x_1072_, 0, v___x_1089_);
v___x_1092_ = v___x_1072_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1093_; 
v_reuseFailAlloc_1093_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1093_, 0, v___x_1089_);
lean_ctor_set(v_reuseFailAlloc_1093_, 1, v___x_1090_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20___redArg(lean_object* v_n_1095_, lean_object* v_k_1096_, lean_object* v_v_1097_){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = lean_unsigned_to_nat(0u);
v___x_1099_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20_spec__22___redArg(v_n_1095_, v___x_1098_, v_k_1096_, v_v_1097_);
return v___x_1099_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__0(void){
_start:
{
size_t v___x_1100_; size_t v___x_1101_; size_t v___x_1102_; 
v___x_1100_ = ((size_t)5ULL);
v___x_1101_ = ((size_t)1ULL);
v___x_1102_ = lean_usize_shift_left(v___x_1101_, v___x_1100_);
return v___x_1102_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__1(void){
_start:
{
size_t v___x_1103_; size_t v___x_1104_; size_t v___x_1105_; 
v___x_1103_ = ((size_t)1ULL);
v___x_1104_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__0);
v___x_1105_ = lean_usize_sub(v___x_1104_, v___x_1103_);
return v___x_1105_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__2(void){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg(lean_object* v_x_1107_, size_t v_x_1108_, size_t v_x_1109_, lean_object* v_x_1110_, lean_object* v_x_1111_){
_start:
{
if (lean_obj_tag(v_x_1107_) == 0)
{
lean_object* v_es_1112_; size_t v___x_1113_; size_t v___x_1114_; size_t v___x_1115_; size_t v___x_1116_; lean_object* v_j_1117_; lean_object* v___x_1118_; uint8_t v___x_1119_; 
v_es_1112_ = lean_ctor_get(v_x_1107_, 0);
v___x_1113_ = ((size_t)5ULL);
v___x_1114_ = ((size_t)1ULL);
v___x_1115_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__1);
v___x_1116_ = lean_usize_land(v_x_1108_, v___x_1115_);
v_j_1117_ = lean_usize_to_nat(v___x_1116_);
v___x_1118_ = lean_array_get_size(v_es_1112_);
v___x_1119_ = lean_nat_dec_lt(v_j_1117_, v___x_1118_);
if (v___x_1119_ == 0)
{
lean_dec(v_j_1117_);
lean_dec(v_x_1111_);
lean_dec(v_x_1110_);
return v_x_1107_;
}
else
{
lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1156_; 
lean_inc_ref(v_es_1112_);
v_isSharedCheck_1156_ = !lean_is_exclusive(v_x_1107_);
if (v_isSharedCheck_1156_ == 0)
{
lean_object* v_unused_1157_; 
v_unused_1157_ = lean_ctor_get(v_x_1107_, 0);
lean_dec(v_unused_1157_);
v___x_1121_ = v_x_1107_;
v_isShared_1122_ = v_isSharedCheck_1156_;
goto v_resetjp_1120_;
}
else
{
lean_dec(v_x_1107_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1156_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v_v_1123_; lean_object* v___x_1124_; lean_object* v_xs_x27_1125_; lean_object* v___y_1127_; 
v_v_1123_ = lean_array_fget(v_es_1112_, v_j_1117_);
v___x_1124_ = lean_box(0);
v_xs_x27_1125_ = lean_array_fset(v_es_1112_, v_j_1117_, v___x_1124_);
switch(lean_obj_tag(v_v_1123_))
{
case 0:
{
lean_object* v_key_1132_; lean_object* v_val_1133_; lean_object* v___x_1135_; uint8_t v_isShared_1136_; uint8_t v_isSharedCheck_1143_; 
v_key_1132_ = lean_ctor_get(v_v_1123_, 0);
v_val_1133_ = lean_ctor_get(v_v_1123_, 1);
v_isSharedCheck_1143_ = !lean_is_exclusive(v_v_1123_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1135_ = v_v_1123_;
v_isShared_1136_ = v_isSharedCheck_1143_;
goto v_resetjp_1134_;
}
else
{
lean_inc(v_val_1133_);
lean_inc(v_key_1132_);
lean_dec(v_v_1123_);
v___x_1135_ = lean_box(0);
v_isShared_1136_ = v_isSharedCheck_1143_;
goto v_resetjp_1134_;
}
v_resetjp_1134_:
{
uint8_t v___x_1137_; 
v___x_1137_ = l_Lean_instBEqMVarId_beq(v_x_1110_, v_key_1132_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; lean_object* v___x_1139_; 
lean_del_object(v___x_1135_);
v___x_1138_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1132_, v_val_1133_, v_x_1110_, v_x_1111_);
v___x_1139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1139_, 0, v___x_1138_);
v___y_1127_ = v___x_1139_;
goto v___jp_1126_;
}
else
{
lean_object* v___x_1141_; 
lean_dec(v_val_1133_);
lean_dec(v_key_1132_);
if (v_isShared_1136_ == 0)
{
lean_ctor_set(v___x_1135_, 1, v_x_1111_);
lean_ctor_set(v___x_1135_, 0, v_x_1110_);
v___x_1141_ = v___x_1135_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_x_1110_);
lean_ctor_set(v_reuseFailAlloc_1142_, 1, v_x_1111_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
v___y_1127_ = v___x_1141_;
goto v___jp_1126_;
}
}
}
}
case 1:
{
lean_object* v_node_1144_; lean_object* v___x_1146_; uint8_t v_isShared_1147_; uint8_t v_isSharedCheck_1154_; 
v_node_1144_ = lean_ctor_get(v_v_1123_, 0);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_v_1123_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1146_ = v_v_1123_;
v_isShared_1147_ = v_isSharedCheck_1154_;
goto v_resetjp_1145_;
}
else
{
lean_inc(v_node_1144_);
lean_dec(v_v_1123_);
v___x_1146_ = lean_box(0);
v_isShared_1147_ = v_isSharedCheck_1154_;
goto v_resetjp_1145_;
}
v_resetjp_1145_:
{
size_t v___x_1148_; size_t v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1152_; 
v___x_1148_ = lean_usize_shift_right(v_x_1108_, v___x_1113_);
v___x_1149_ = lean_usize_add(v_x_1109_, v___x_1114_);
v___x_1150_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg(v_node_1144_, v___x_1148_, v___x_1149_, v_x_1110_, v_x_1111_);
if (v_isShared_1147_ == 0)
{
lean_ctor_set(v___x_1146_, 0, v___x_1150_);
v___x_1152_ = v___x_1146_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v___x_1150_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
v___y_1127_ = v___x_1152_;
goto v___jp_1126_;
}
}
}
default: 
{
lean_object* v___x_1155_; 
v___x_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1155_, 0, v_x_1110_);
lean_ctor_set(v___x_1155_, 1, v_x_1111_);
v___y_1127_ = v___x_1155_;
goto v___jp_1126_;
}
}
v___jp_1126_:
{
lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1128_ = lean_array_fset(v_xs_x27_1125_, v_j_1117_, v___y_1127_);
lean_dec(v_j_1117_);
if (v_isShared_1122_ == 0)
{
lean_ctor_set(v___x_1121_, 0, v___x_1128_);
v___x_1130_ = v___x_1121_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1131_; 
v_reuseFailAlloc_1131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1131_, 0, v___x_1128_);
v___x_1130_ = v_reuseFailAlloc_1131_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
return v___x_1130_;
}
}
}
}
}
else
{
lean_object* v_ks_1158_; lean_object* v_vs_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1179_; 
v_ks_1158_ = lean_ctor_get(v_x_1107_, 0);
v_vs_1159_ = lean_ctor_get(v_x_1107_, 1);
v_isSharedCheck_1179_ = !lean_is_exclusive(v_x_1107_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1161_ = v_x_1107_;
v_isShared_1162_ = v_isSharedCheck_1179_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_vs_1159_);
lean_inc(v_ks_1158_);
lean_dec(v_x_1107_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1179_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_ks_1158_);
lean_ctor_set(v_reuseFailAlloc_1178_, 1, v_vs_1159_);
v___x_1164_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
lean_object* v_newNode_1165_; uint8_t v___y_1167_; size_t v___x_1173_; uint8_t v___x_1174_; 
v_newNode_1165_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20___redArg(v___x_1164_, v_x_1110_, v_x_1111_);
v___x_1173_ = ((size_t)7ULL);
v___x_1174_ = lean_usize_dec_le(v___x_1173_, v_x_1109_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; lean_object* v___x_1176_; uint8_t v___x_1177_; 
v___x_1175_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1165_);
v___x_1176_ = lean_unsigned_to_nat(4u);
v___x_1177_ = lean_nat_dec_lt(v___x_1175_, v___x_1176_);
lean_dec(v___x_1175_);
v___y_1167_ = v___x_1177_;
goto v___jp_1166_;
}
else
{
v___y_1167_ = v___x_1174_;
goto v___jp_1166_;
}
v___jp_1166_:
{
if (v___y_1167_ == 0)
{
lean_object* v_ks_1168_; lean_object* v_vs_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
v_ks_1168_ = lean_ctor_get(v_newNode_1165_, 0);
lean_inc_ref(v_ks_1168_);
v_vs_1169_ = lean_ctor_get(v_newNode_1165_, 1);
lean_inc_ref(v_vs_1169_);
lean_dec_ref(v_newNode_1165_);
v___x_1170_ = lean_unsigned_to_nat(0u);
v___x_1171_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___closed__2);
v___x_1172_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21___redArg(v_x_1109_, v_ks_1168_, v_vs_1169_, v___x_1170_, v___x_1171_);
lean_dec_ref(v_vs_1169_);
lean_dec_ref(v_ks_1168_);
return v___x_1172_;
}
else
{
return v_newNode_1165_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21___redArg(size_t v_depth_1180_, lean_object* v_keys_1181_, lean_object* v_vals_1182_, lean_object* v_i_1183_, lean_object* v_entries_1184_){
_start:
{
lean_object* v___x_1185_; uint8_t v___x_1186_; 
v___x_1185_ = lean_array_get_size(v_keys_1181_);
v___x_1186_ = lean_nat_dec_lt(v_i_1183_, v___x_1185_);
if (v___x_1186_ == 0)
{
lean_dec(v_i_1183_);
return v_entries_1184_;
}
else
{
lean_object* v_k_1187_; lean_object* v_v_1188_; uint64_t v___x_1189_; size_t v_h_1190_; size_t v___x_1191_; lean_object* v___x_1192_; size_t v___x_1193_; size_t v___x_1194_; size_t v___x_1195_; size_t v_h_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; 
v_k_1187_ = lean_array_fget_borrowed(v_keys_1181_, v_i_1183_);
v_v_1188_ = lean_array_fget_borrowed(v_vals_1182_, v_i_1183_);
v___x_1189_ = l_Lean_instHashableMVarId_hash(v_k_1187_);
v_h_1190_ = lean_uint64_to_usize(v___x_1189_);
v___x_1191_ = ((size_t)5ULL);
v___x_1192_ = lean_unsigned_to_nat(1u);
v___x_1193_ = ((size_t)1ULL);
v___x_1194_ = lean_usize_sub(v_depth_1180_, v___x_1193_);
v___x_1195_ = lean_usize_mul(v___x_1191_, v___x_1194_);
v_h_1196_ = lean_usize_shift_right(v_h_1190_, v___x_1195_);
v___x_1197_ = lean_nat_add(v_i_1183_, v___x_1192_);
lean_dec(v_i_1183_);
lean_inc(v_v_1188_);
lean_inc(v_k_1187_);
v___x_1198_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg(v_entries_1184_, v_h_1196_, v_depth_1180_, v_k_1187_, v_v_1188_);
v_i_1183_ = v___x_1197_;
v_entries_1184_ = v___x_1198_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21___redArg___boxed(lean_object* v_depth_1200_, lean_object* v_keys_1201_, lean_object* v_vals_1202_, lean_object* v_i_1203_, lean_object* v_entries_1204_){
_start:
{
size_t v_depth_boxed_1205_; lean_object* v_res_1206_; 
v_depth_boxed_1205_ = lean_unbox_usize(v_depth_1200_);
lean_dec(v_depth_1200_);
v_res_1206_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21___redArg(v_depth_boxed_1205_, v_keys_1201_, v_vals_1202_, v_i_1203_, v_entries_1204_);
lean_dec_ref(v_vals_1202_);
lean_dec_ref(v_keys_1201_);
return v_res_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg___boxed(lean_object* v_x_1207_, lean_object* v_x_1208_, lean_object* v_x_1209_, lean_object* v_x_1210_, lean_object* v_x_1211_){
_start:
{
size_t v_x_21427__boxed_1212_; size_t v_x_21428__boxed_1213_; lean_object* v_res_1214_; 
v_x_21427__boxed_1212_ = lean_unbox_usize(v_x_1208_);
lean_dec(v_x_1208_);
v_x_21428__boxed_1213_ = lean_unbox_usize(v_x_1209_);
lean_dec(v_x_1209_);
v_res_1214_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg(v_x_1207_, v_x_21427__boxed_1212_, v_x_21428__boxed_1213_, v_x_1210_, v_x_1211_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(lean_object* v_x_1215_, lean_object* v_x_1216_, lean_object* v_x_1217_){
_start:
{
uint64_t v___x_1218_; size_t v___x_1219_; size_t v___x_1220_; lean_object* v___x_1221_; 
v___x_1218_ = l_Lean_instHashableMVarId_hash(v_x_1216_);
v___x_1219_ = lean_uint64_to_usize(v___x_1218_);
v___x_1220_ = ((size_t)1ULL);
v___x_1221_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg(v_x_1215_, v___x_1219_, v___x_1220_, v_x_1216_, v_x_1217_);
return v___x_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(lean_object* v_mvarId_1222_, lean_object* v_val_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v_mctx_1229_; lean_object* v_cache_1230_; lean_object* v_zetaDeltaFVarIds_1231_; lean_object* v_postponed_1232_; lean_object* v_diag_1233_; lean_object* v___x_1235_; uint8_t v_isShared_1236_; uint8_t v_isSharedCheck_1261_; 
v___x_1227_ = lean_st_ref_get(v___y_1225_);
lean_dec(v___x_1227_);
v___x_1228_ = lean_st_ref_take(v___y_1224_);
v_mctx_1229_ = lean_ctor_get(v___x_1228_, 0);
v_cache_1230_ = lean_ctor_get(v___x_1228_, 1);
v_zetaDeltaFVarIds_1231_ = lean_ctor_get(v___x_1228_, 2);
v_postponed_1232_ = lean_ctor_get(v___x_1228_, 3);
v_diag_1233_ = lean_ctor_get(v___x_1228_, 4);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1228_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1235_ = v___x_1228_;
v_isShared_1236_ = v_isSharedCheck_1261_;
goto v_resetjp_1234_;
}
else
{
lean_inc(v_diag_1233_);
lean_inc(v_postponed_1232_);
lean_inc(v_zetaDeltaFVarIds_1231_);
lean_inc(v_cache_1230_);
lean_inc(v_mctx_1229_);
lean_dec(v___x_1228_);
v___x_1235_ = lean_box(0);
v_isShared_1236_ = v_isSharedCheck_1261_;
goto v_resetjp_1234_;
}
v_resetjp_1234_:
{
lean_object* v_depth_1237_; lean_object* v_levelAssignDepth_1238_; lean_object* v_lmvarCounter_1239_; lean_object* v_mvarCounter_1240_; lean_object* v_lDecls_1241_; lean_object* v_decls_1242_; lean_object* v_userNames_1243_; lean_object* v_lAssignment_1244_; lean_object* v_eAssignment_1245_; lean_object* v_dAssignment_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1260_; 
v_depth_1237_ = lean_ctor_get(v_mctx_1229_, 0);
v_levelAssignDepth_1238_ = lean_ctor_get(v_mctx_1229_, 1);
v_lmvarCounter_1239_ = lean_ctor_get(v_mctx_1229_, 2);
v_mvarCounter_1240_ = lean_ctor_get(v_mctx_1229_, 3);
v_lDecls_1241_ = lean_ctor_get(v_mctx_1229_, 4);
v_decls_1242_ = lean_ctor_get(v_mctx_1229_, 5);
v_userNames_1243_ = lean_ctor_get(v_mctx_1229_, 6);
v_lAssignment_1244_ = lean_ctor_get(v_mctx_1229_, 7);
v_eAssignment_1245_ = lean_ctor_get(v_mctx_1229_, 8);
v_dAssignment_1246_ = lean_ctor_get(v_mctx_1229_, 9);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_mctx_1229_);
if (v_isSharedCheck_1260_ == 0)
{
v___x_1248_ = v_mctx_1229_;
v_isShared_1249_ = v_isSharedCheck_1260_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_dAssignment_1246_);
lean_inc(v_eAssignment_1245_);
lean_inc(v_lAssignment_1244_);
lean_inc(v_userNames_1243_);
lean_inc(v_decls_1242_);
lean_inc(v_lDecls_1241_);
lean_inc(v_mvarCounter_1240_);
lean_inc(v_lmvarCounter_1239_);
lean_inc(v_levelAssignDepth_1238_);
lean_inc(v_depth_1237_);
lean_dec(v_mctx_1229_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1260_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___x_1250_; lean_object* v___x_1252_; 
v___x_1250_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(v_eAssignment_1245_, v_mvarId_1222_, v_val_1223_);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 8, v___x_1250_);
v___x_1252_ = v___x_1248_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v_depth_1237_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v_levelAssignDepth_1238_);
lean_ctor_set(v_reuseFailAlloc_1259_, 2, v_lmvarCounter_1239_);
lean_ctor_set(v_reuseFailAlloc_1259_, 3, v_mvarCounter_1240_);
lean_ctor_set(v_reuseFailAlloc_1259_, 4, v_lDecls_1241_);
lean_ctor_set(v_reuseFailAlloc_1259_, 5, v_decls_1242_);
lean_ctor_set(v_reuseFailAlloc_1259_, 6, v_userNames_1243_);
lean_ctor_set(v_reuseFailAlloc_1259_, 7, v_lAssignment_1244_);
lean_ctor_set(v_reuseFailAlloc_1259_, 8, v___x_1250_);
lean_ctor_set(v_reuseFailAlloc_1259_, 9, v_dAssignment_1246_);
v___x_1252_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
lean_object* v___x_1254_; 
if (v_isShared_1236_ == 0)
{
lean_ctor_set(v___x_1235_, 0, v___x_1252_);
v___x_1254_ = v___x_1235_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1252_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v_cache_1230_);
lean_ctor_set(v_reuseFailAlloc_1258_, 2, v_zetaDeltaFVarIds_1231_);
lean_ctor_set(v_reuseFailAlloc_1258_, 3, v_postponed_1232_);
lean_ctor_set(v_reuseFailAlloc_1258_, 4, v_diag_1233_);
v___x_1254_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1255_ = lean_st_ref_set(v___y_1224_, v___x_1254_);
v___x_1256_ = lean_box(0);
v___x_1257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1257_, 0, v___x_1256_);
return v___x_1257_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg___boxed(lean_object* v_mvarId_1262_, lean_object* v_val_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_mvarId_1262_, v_val_1263_, v___y_1264_, v___y_1265_);
lean_dec(v___y_1265_);
lean_dec(v___y_1264_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(size_t v_sz_1268_, size_t v_i_1269_, lean_object* v_bs_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_){
_start:
{
uint8_t v___x_1276_; 
v___x_1276_ = lean_usize_dec_lt(v_i_1269_, v_sz_1268_);
if (v___x_1276_ == 0)
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1277_, 0, v_bs_1270_);
return v___x_1277_;
}
else
{
lean_object* v_v_1278_; lean_object* v___x_1279_; 
v_v_1278_ = lean_array_uget_borrowed(v_bs_1270_, v_i_1269_);
lean_inc(v_v_1278_);
v___x_1279_ = l_Lean_Meta_mkEqRefl(v_v_1278_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
if (lean_obj_tag(v___x_1279_) == 0)
{
lean_object* v_a_1280_; lean_object* v___x_1281_; lean_object* v_bs_x27_1282_; size_t v___x_1283_; size_t v___x_1284_; lean_object* v___x_1285_; 
v_a_1280_ = lean_ctor_get(v___x_1279_, 0);
lean_inc(v_a_1280_);
lean_dec_ref(v___x_1279_);
v___x_1281_ = lean_unsigned_to_nat(0u);
v_bs_x27_1282_ = lean_array_uset(v_bs_1270_, v_i_1269_, v___x_1281_);
v___x_1283_ = ((size_t)1ULL);
v___x_1284_ = lean_usize_add(v_i_1269_, v___x_1283_);
v___x_1285_ = lean_array_uset(v_bs_x27_1282_, v_i_1269_, v_a_1280_);
v_i_1269_ = v___x_1284_;
v_bs_1270_ = v___x_1285_;
goto _start;
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_dec_ref(v_bs_1270_);
v_a_1287_ = lean_ctor_get(v___x_1279_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1279_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1279_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1279_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6___boxed(lean_object* v_sz_1295_, lean_object* v_i_1296_, lean_object* v_bs_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_){
_start:
{
size_t v_sz_boxed_1303_; size_t v_i_boxed_1304_; lean_object* v_res_1305_; 
v_sz_boxed_1303_ = lean_unbox_usize(v_sz_1295_);
lean_dec(v_sz_1295_);
v_i_boxed_1304_ = lean_unbox_usize(v_i_1296_);
lean_dec(v_i_1296_);
v_res_1305_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(v_sz_boxed_1303_, v_i_boxed_1304_, v_bs_1297_, v___y_1298_, v___y_1299_, v___y_1300_, v___y_1301_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
lean_dec(v___y_1299_);
lean_dec_ref(v___y_1298_);
return v_res_1305_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(size_t v_sz_1306_, size_t v_i_1307_, lean_object* v_bs_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
uint8_t v___x_1314_; 
v___x_1314_ = lean_usize_dec_lt(v_i_1307_, v_sz_1306_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; 
v___x_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1315_, 0, v_bs_1308_);
return v___x_1315_;
}
else
{
lean_object* v_v_1316_; lean_object* v___x_1317_; 
v_v_1316_ = lean_array_uget_borrowed(v_bs_1308_, v_i_1307_);
lean_inc(v___y_1312_);
lean_inc_ref(v___y_1311_);
lean_inc(v___y_1310_);
lean_inc_ref(v___y_1309_);
lean_inc(v_v_1316_);
v___x_1317_ = lean_infer_type(v_v_1316_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
if (lean_obj_tag(v___x_1317_) == 0)
{
lean_object* v_a_1318_; lean_object* v___x_1319_; lean_object* v_bs_x27_1320_; size_t v___x_1321_; size_t v___x_1322_; lean_object* v___x_1323_; 
v_a_1318_ = lean_ctor_get(v___x_1317_, 0);
lean_inc(v_a_1318_);
lean_dec_ref(v___x_1317_);
v___x_1319_ = lean_unsigned_to_nat(0u);
v_bs_x27_1320_ = lean_array_uset(v_bs_1308_, v_i_1307_, v___x_1319_);
v___x_1321_ = ((size_t)1ULL);
v___x_1322_ = lean_usize_add(v_i_1307_, v___x_1321_);
v___x_1323_ = lean_array_uset(v_bs_x27_1320_, v_i_1307_, v_a_1318_);
v_i_1307_ = v___x_1322_;
v_bs_1308_ = v___x_1323_;
goto _start;
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec_ref(v_bs_1308_);
v_a_1325_ = lean_ctor_get(v___x_1317_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1317_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1317_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1317_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3___boxed(lean_object* v_sz_1333_, lean_object* v_i_1334_, lean_object* v_bs_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
size_t v_sz_boxed_1341_; size_t v_i_boxed_1342_; lean_object* v_res_1343_; 
v_sz_boxed_1341_ = lean_unbox_usize(v_sz_1333_);
lean_dec(v_sz_1333_);
v_i_boxed_1342_ = lean_unbox_usize(v_i_1334_);
lean_dec(v_i_1334_);
v_res_1343_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(v_sz_boxed_1341_, v_i_boxed_1342_, v_bs_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(lean_object* v_as_1344_, lean_object* v_i_1345_, lean_object* v_j_1346_, lean_object* v_bs_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_){
_start:
{
lean_object* v_zero_1351_; uint8_t v_isZero_1352_; 
v_zero_1351_ = lean_unsigned_to_nat(0u);
v_isZero_1352_ = lean_nat_dec_eq(v_i_1345_, v_zero_1351_);
if (v_isZero_1352_ == 1)
{
lean_object* v___x_1353_; 
lean_dec(v_j_1346_);
lean_dec(v_i_1345_);
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v_bs_1347_);
return v___x_1353_;
}
else
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__6___closed__1);
v___x_1355_ = l_Lean_Core_mkFreshUserName(v___x_1354_, v___y_1348_, v___y_1349_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v_a_1356_; lean_object* v_one_1357_; lean_object* v_n_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
lean_inc(v_a_1356_);
lean_dec_ref(v___x_1355_);
v_one_1357_ = lean_unsigned_to_nat(1u);
v_n_1358_ = lean_nat_sub(v_i_1345_, v_one_1357_);
lean_dec(v_i_1345_);
v___x_1359_ = lean_array_fget_borrowed(v_as_1344_, v_j_1346_);
v___x_1360_ = lean_nat_add(v_j_1346_, v_one_1357_);
lean_dec(v_j_1346_);
lean_inc(v___x_1360_);
v___x_1361_ = lean_name_append_index_after(v_a_1356_, v___x_1360_);
lean_inc(v___x_1359_);
v___x_1362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1362_, 0, v___x_1361_);
lean_ctor_set(v___x_1362_, 1, v___x_1359_);
v___x_1363_ = lean_array_push(v_bs_1347_, v___x_1362_);
v_i_1345_ = v_n_1358_;
v_j_1346_ = v___x_1360_;
v_bs_1347_ = v___x_1363_;
goto _start;
}
else
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_dec_ref(v_bs_1347_);
lean_dec(v_j_1346_);
lean_dec(v_i_1345_);
v_a_1365_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1355_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1355_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
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
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg___boxed(lean_object* v_as_1373_, lean_object* v_i_1374_, lean_object* v_j_1375_, lean_object* v_bs_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_){
_start:
{
lean_object* v_res_1380_; 
v_res_1380_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(v_as_1373_, v_i_1374_, v_j_1375_, v_bs_1376_, v___y_1377_, v___y_1378_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec_ref(v_as_1373_);
return v_res_1380_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___lam__0(lean_object* v_snd_1381_, lean_object* v_x_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1392_, 0, v_snd_1381_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___lam__0___boxed(lean_object* v_snd_1393_, lean_object* v_x_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___lam__0(v_snd_1393_, v_x_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec_ref(v_x_1394_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(size_t v_sz_1405_, size_t v_i_1406_, lean_object* v_bs_1407_){
_start:
{
uint8_t v___x_1408_; 
v___x_1408_ = lean_usize_dec_lt(v_i_1406_, v_sz_1405_);
if (v___x_1408_ == 0)
{
return v_bs_1407_;
}
else
{
lean_object* v_v_1409_; lean_object* v_fst_1410_; lean_object* v_snd_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1425_; 
v_v_1409_ = lean_array_uget(v_bs_1407_, v_i_1406_);
v_fst_1410_ = lean_ctor_get(v_v_1409_, 0);
v_snd_1411_ = lean_ctor_get(v_v_1409_, 1);
v_isSharedCheck_1425_ = !lean_is_exclusive(v_v_1409_);
if (v_isSharedCheck_1425_ == 0)
{
v___x_1413_ = v_v_1409_;
v_isShared_1414_ = v_isSharedCheck_1425_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_snd_1411_);
lean_inc(v_fst_1410_);
lean_dec(v_v_1409_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1425_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
lean_object* v___x_1415_; lean_object* v_bs_x27_1416_; lean_object* v___f_1417_; lean_object* v___x_1419_; 
v___x_1415_ = lean_unsigned_to_nat(0u);
v_bs_x27_1416_ = lean_array_uset(v_bs_1407_, v_i_1406_, v___x_1415_);
v___f_1417_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1417_, 0, v_snd_1411_);
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 1, v___f_1417_);
v___x_1419_ = v___x_1413_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v_fst_1410_);
lean_ctor_set(v_reuseFailAlloc_1424_, 1, v___f_1417_);
v___x_1419_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
size_t v___x_1420_; size_t v___x_1421_; lean_object* v___x_1422_; 
v___x_1420_ = ((size_t)1ULL);
v___x_1421_ = lean_usize_add(v_i_1406_, v___x_1420_);
v___x_1422_ = lean_array_uset(v_bs_x27_1416_, v_i_1406_, v___x_1419_);
v_i_1406_ = v___x_1421_;
v_bs_1407_ = v___x_1422_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8___boxed(lean_object* v_sz_1426_, lean_object* v_i_1427_, lean_object* v_bs_1428_){
_start:
{
size_t v_sz_boxed_1429_; size_t v_i_boxed_1430_; lean_object* v_res_1431_; 
v_sz_boxed_1429_ = lean_unbox_usize(v_sz_1426_);
lean_dec(v_sz_1426_);
v_i_boxed_1430_ = lean_unbox_usize(v_i_1427_);
lean_dec(v_i_1427_);
v_res_1431_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(v_sz_boxed_1429_, v_i_boxed_1430_, v_bs_1428_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg___lam__0(lean_object* v_k_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v_b_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_){
_start:
{
lean_object* v___x_1443_; 
lean_inc(v___y_1441_);
lean_inc_ref(v___y_1440_);
lean_inc(v___y_1439_);
lean_inc_ref(v___y_1438_);
lean_inc(v___y_1436_);
lean_inc_ref(v___y_1435_);
lean_inc(v___y_1434_);
lean_inc_ref(v___y_1433_);
v___x_1443_ = lean_apply_10(v_k_1432_, v_b_1437_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_, lean_box(0));
return v___x_1443_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg___lam__0___boxed(lean_object* v_k_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v_b_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v_res_1455_; 
v_res_1455_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg___lam__0(v_k_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v_b_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1448_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg(lean_object* v_name_1456_, uint8_t v_bi_1457_, lean_object* v_type_1458_, lean_object* v_k_1459_, uint8_t v_kind_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v___f_1470_; lean_object* v___x_1471_; 
lean_inc(v___y_1464_);
lean_inc_ref(v___y_1463_);
lean_inc(v___y_1462_);
lean_inc_ref(v___y_1461_);
v___f_1470_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg___lam__0___boxed), 11, 5);
lean_closure_set(v___f_1470_, 0, v_k_1459_);
lean_closure_set(v___f_1470_, 1, v___y_1461_);
lean_closure_set(v___f_1470_, 2, v___y_1462_);
lean_closure_set(v___f_1470_, 3, v___y_1463_);
lean_closure_set(v___f_1470_, 4, v___y_1464_);
v___x_1471_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1456_, v_bi_1457_, v_type_1458_, v___f_1470_, v_kind_1460_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_);
if (lean_obj_tag(v___x_1471_) == 0)
{
return v___x_1471_;
}
else
{
lean_object* v_a_1472_; lean_object* v___x_1474_; uint8_t v_isShared_1475_; uint8_t v_isSharedCheck_1479_; 
v_a_1472_ = lean_ctor_get(v___x_1471_, 0);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1471_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1474_ = v___x_1471_;
v_isShared_1475_ = v_isSharedCheck_1479_;
goto v_resetjp_1473_;
}
else
{
lean_inc(v_a_1472_);
lean_dec(v___x_1471_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg___boxed(lean_object* v_name_1480_, lean_object* v_bi_1481_, lean_object* v_type_1482_, lean_object* v_k_1483_, lean_object* v_kind_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_){
_start:
{
uint8_t v_bi_boxed_1494_; uint8_t v_kind_boxed_1495_; lean_object* v_res_1496_; 
v_bi_boxed_1494_ = lean_unbox(v_bi_1481_);
v_kind_boxed_1495_ = lean_unbox(v_kind_1484_);
v_res_1496_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg(v_name_1480_, v_bi_boxed_1494_, v_type_1482_, v_k_1483_, v_kind_boxed_1495_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__0(lean_object* v___x_1497_, lean_object* v_a_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v___x_1508_; lean_object* v___x_20985__overap_1509_; lean_object* v___x_1510_; 
v___x_1508_ = l_Lean_instInhabitedExpr;
v___x_20985__overap_1509_ = l_instInhabitedOfMonad___redArg(v___x_1497_, v___x_1508_);
lean_inc(v___y_1506_);
lean_inc_ref(v___y_1505_);
lean_inc(v___y_1504_);
lean_inc_ref(v___y_1503_);
lean_inc(v___y_1502_);
lean_inc_ref(v___y_1501_);
lean_inc(v___y_1500_);
lean_inc_ref(v___y_1499_);
v___x_1510_ = lean_apply_9(v___x_20985__overap_1509_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, lean_box(0));
return v___x_1510_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__0___boxed(lean_object* v___x_1511_, lean_object* v_a_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__0(v___x_1511_, v_a_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
lean_dec(v___y_1514_);
lean_dec_ref(v___y_1513_);
lean_dec_ref(v_a_1512_);
return v_res_1522_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__0(void){
_start:
{
lean_object* v___f_1523_; 
v___f_1523_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed), 9, 0);
return v___f_1523_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__1(void){
_start:
{
lean_object* v___f_1524_; 
v___f_1524_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed), 11, 0);
return v___f_1524_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__2(void){
_start:
{
lean_object* v___f_1525_; 
v___f_1525_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_instMonadTacticM___lam__0___boxed), 11, 0);
return v___f_1525_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__3(void){
_start:
{
lean_object* v___f_1526_; 
v___f_1526_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_instMonadTacticM___lam__1___boxed), 13, 0);
return v___f_1526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__1___boxed(lean_object* v_acc_1527_, lean_object* v_declInfos_1528_, lean_object* v_k_1529_, lean_object* v_kind_1530_, lean_object* v_x_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
uint8_t v_kind_boxed_1541_; lean_object* v_res_1542_; 
v_kind_boxed_1541_ = lean_unbox(v_kind_1530_);
v_res_1542_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__1(v_acc_1527_, v_declInfos_1528_, v_k_1529_, v_kind_boxed_1541_, v_x_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v___y_1537_);
lean_dec_ref(v___y_1536_);
lean_dec(v___y_1535_);
lean_dec_ref(v___y_1534_);
lean_dec(v___y_1533_);
lean_dec_ref(v___y_1532_);
return v_res_1542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19(lean_object* v_declInfos_1543_, lean_object* v_k_1544_, uint8_t v_kind_1545_, lean_object* v_acc_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v___x_1556_; lean_object* v_toApplicative_1557_; lean_object* v_toFunctor_1558_; lean_object* v_toSeq_1559_; lean_object* v_toSeqLeft_1560_; lean_object* v_toSeqRight_1561_; lean_object* v___f_1562_; lean_object* v___f_1563_; lean_object* v___f_1564_; lean_object* v___f_1565_; lean_object* v___x_1566_; lean_object* v___f_1567_; lean_object* v___f_1568_; lean_object* v___f_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v_toApplicative_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1690_; 
v___x_1556_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__1);
v_toApplicative_1557_ = lean_ctor_get(v___x_1556_, 0);
v_toFunctor_1558_ = lean_ctor_get(v_toApplicative_1557_, 0);
v_toSeq_1559_ = lean_ctor_get(v_toApplicative_1557_, 2);
v_toSeqLeft_1560_ = lean_ctor_get(v_toApplicative_1557_, 3);
v_toSeqRight_1561_ = lean_ctor_get(v_toApplicative_1557_, 4);
v___f_1562_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__2);
v___f_1563_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__3);
lean_inc_ref_n(v_toFunctor_1558_, 2);
v___f_1564_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1564_, 0, v_toFunctor_1558_);
v___f_1565_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1565_, 0, v_toFunctor_1558_);
v___x_1566_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___f_1564_);
lean_ctor_set(v___x_1566_, 1, v___f_1565_);
lean_inc(v_toSeqRight_1561_);
v___f_1567_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1567_, 0, v_toSeqRight_1561_);
lean_inc(v_toSeqLeft_1560_);
v___f_1568_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1568_, 0, v_toSeqLeft_1560_);
lean_inc(v_toSeq_1559_);
v___f_1569_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1569_, 0, v_toSeq_1559_);
v___x_1570_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1570_, 0, v___x_1566_);
lean_ctor_set(v___x_1570_, 1, v___f_1562_);
lean_ctor_set(v___x_1570_, 2, v___f_1569_);
lean_ctor_set(v___x_1570_, 3, v___f_1568_);
lean_ctor_set(v___x_1570_, 4, v___f_1567_);
v___x_1571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1570_);
lean_ctor_set(v___x_1571_, 1, v___f_1563_);
v___x_1572_ = l_StateRefT_x27_instMonad___redArg(v___x_1571_);
v_toApplicative_1573_ = lean_ctor_get(v___x_1572_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1572_);
if (v_isSharedCheck_1690_ == 0)
{
lean_object* v_unused_1691_; 
v_unused_1691_ = lean_ctor_get(v___x_1572_, 1);
lean_dec(v_unused_1691_);
v___x_1575_ = v___x_1572_;
v_isShared_1576_ = v_isSharedCheck_1690_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_toApplicative_1573_);
lean_dec(v___x_1572_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1690_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v_toFunctor_1577_; lean_object* v_toSeq_1578_; lean_object* v_toSeqLeft_1579_; lean_object* v_toSeqRight_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1688_; 
v_toFunctor_1577_ = lean_ctor_get(v_toApplicative_1573_, 0);
v_toSeq_1578_ = lean_ctor_get(v_toApplicative_1573_, 2);
v_toSeqLeft_1579_ = lean_ctor_get(v_toApplicative_1573_, 3);
v_toSeqRight_1580_ = lean_ctor_get(v_toApplicative_1573_, 4);
v_isSharedCheck_1688_ = !lean_is_exclusive(v_toApplicative_1573_);
if (v_isSharedCheck_1688_ == 0)
{
lean_object* v_unused_1689_; 
v_unused_1689_ = lean_ctor_get(v_toApplicative_1573_, 1);
lean_dec(v_unused_1689_);
v___x_1582_ = v_toApplicative_1573_;
v_isShared_1583_ = v_isSharedCheck_1688_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_toSeqRight_1580_);
lean_inc(v_toSeqLeft_1579_);
lean_inc(v_toSeq_1578_);
lean_inc(v_toFunctor_1577_);
lean_dec(v_toApplicative_1573_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1688_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___f_1584_; lean_object* v___f_1585_; lean_object* v___f_1586_; lean_object* v___f_1587_; lean_object* v___x_1588_; lean_object* v___f_1589_; lean_object* v___f_1590_; lean_object* v___f_1591_; lean_object* v___x_1593_; 
v___f_1584_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__4);
v___f_1585_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__20___closed__5);
lean_inc_ref(v_toFunctor_1577_);
v___f_1586_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1586_, 0, v_toFunctor_1577_);
v___f_1587_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1587_, 0, v_toFunctor_1577_);
v___x_1588_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1588_, 0, v___f_1586_);
lean_ctor_set(v___x_1588_, 1, v___f_1587_);
v___f_1589_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1589_, 0, v_toSeqRight_1580_);
v___f_1590_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1590_, 0, v_toSeqLeft_1579_);
v___f_1591_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1591_, 0, v_toSeq_1578_);
if (v_isShared_1583_ == 0)
{
lean_ctor_set(v___x_1582_, 4, v___f_1589_);
lean_ctor_set(v___x_1582_, 3, v___f_1590_);
lean_ctor_set(v___x_1582_, 2, v___f_1591_);
lean_ctor_set(v___x_1582_, 1, v___f_1584_);
lean_ctor_set(v___x_1582_, 0, v___x_1588_);
v___x_1593_ = v___x_1582_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1687_; 
v_reuseFailAlloc_1687_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1687_, 0, v___x_1588_);
lean_ctor_set(v_reuseFailAlloc_1687_, 1, v___f_1584_);
lean_ctor_set(v_reuseFailAlloc_1687_, 2, v___f_1591_);
lean_ctor_set(v_reuseFailAlloc_1687_, 3, v___f_1590_);
lean_ctor_set(v_reuseFailAlloc_1687_, 4, v___f_1589_);
v___x_1593_ = v_reuseFailAlloc_1687_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
lean_object* v___x_1595_; 
if (v_isShared_1576_ == 0)
{
lean_ctor_set(v___x_1575_, 1, v___f_1585_);
lean_ctor_set(v___x_1575_, 0, v___x_1593_);
v___x_1595_ = v___x_1575_;
goto v_reusejp_1594_;
}
else
{
lean_object* v_reuseFailAlloc_1686_; 
v_reuseFailAlloc_1686_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1686_, 0, v___x_1593_);
lean_ctor_set(v_reuseFailAlloc_1686_, 1, v___f_1585_);
v___x_1595_ = v_reuseFailAlloc_1686_;
goto v_reusejp_1594_;
}
v_reusejp_1594_:
{
lean_object* v___x_1596_; lean_object* v_toApplicative_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1684_; 
v___x_1596_ = l_StateRefT_x27_instMonad___redArg(v___x_1595_);
v_toApplicative_1597_ = lean_ctor_get(v___x_1596_, 0);
v_isSharedCheck_1684_ = !lean_is_exclusive(v___x_1596_);
if (v_isSharedCheck_1684_ == 0)
{
lean_object* v_unused_1685_; 
v_unused_1685_ = lean_ctor_get(v___x_1596_, 1);
lean_dec(v_unused_1685_);
v___x_1599_ = v___x_1596_;
v_isShared_1600_ = v_isSharedCheck_1684_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_toApplicative_1597_);
lean_dec(v___x_1596_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1684_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v_toFunctor_1601_; lean_object* v_toSeq_1602_; lean_object* v_toSeqLeft_1603_; lean_object* v_toSeqRight_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1682_; 
v_toFunctor_1601_ = lean_ctor_get(v_toApplicative_1597_, 0);
v_toSeq_1602_ = lean_ctor_get(v_toApplicative_1597_, 2);
v_toSeqLeft_1603_ = lean_ctor_get(v_toApplicative_1597_, 3);
v_toSeqRight_1604_ = lean_ctor_get(v_toApplicative_1597_, 4);
v_isSharedCheck_1682_ = !lean_is_exclusive(v_toApplicative_1597_);
if (v_isSharedCheck_1682_ == 0)
{
lean_object* v_unused_1683_; 
v_unused_1683_ = lean_ctor_get(v_toApplicative_1597_, 1);
lean_dec(v_unused_1683_);
v___x_1606_ = v_toApplicative_1597_;
v_isShared_1607_ = v_isSharedCheck_1682_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_toSeqRight_1604_);
lean_inc(v_toSeqLeft_1603_);
lean_inc(v_toSeq_1602_);
lean_inc(v_toFunctor_1601_);
lean_dec(v_toApplicative_1597_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1682_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___f_1608_; lean_object* v___f_1609_; lean_object* v___f_1610_; lean_object* v___f_1611_; lean_object* v___x_1612_; lean_object* v___f_1613_; lean_object* v___f_1614_; lean_object* v___f_1615_; lean_object* v___x_1617_; 
v___f_1608_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__0);
v___f_1609_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__1);
lean_inc_ref(v_toFunctor_1601_);
v___f_1610_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1610_, 0, v_toFunctor_1601_);
v___f_1611_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1611_, 0, v_toFunctor_1601_);
v___x_1612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___f_1610_);
lean_ctor_set(v___x_1612_, 1, v___f_1611_);
v___f_1613_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1613_, 0, v_toSeqRight_1604_);
v___f_1614_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1614_, 0, v_toSeqLeft_1603_);
v___f_1615_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1615_, 0, v_toSeq_1602_);
if (v_isShared_1607_ == 0)
{
lean_ctor_set(v___x_1606_, 4, v___f_1613_);
lean_ctor_set(v___x_1606_, 3, v___f_1614_);
lean_ctor_set(v___x_1606_, 2, v___f_1615_);
lean_ctor_set(v___x_1606_, 1, v___f_1608_);
lean_ctor_set(v___x_1606_, 0, v___x_1612_);
v___x_1617_ = v___x_1606_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v___x_1612_);
lean_ctor_set(v_reuseFailAlloc_1681_, 1, v___f_1608_);
lean_ctor_set(v_reuseFailAlloc_1681_, 2, v___f_1615_);
lean_ctor_set(v_reuseFailAlloc_1681_, 3, v___f_1614_);
lean_ctor_set(v_reuseFailAlloc_1681_, 4, v___f_1613_);
v___x_1617_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
lean_object* v___x_1619_; 
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 1, v___f_1609_);
lean_ctor_set(v___x_1599_, 0, v___x_1617_);
v___x_1619_ = v___x_1599_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1617_);
lean_ctor_set(v_reuseFailAlloc_1680_, 1, v___f_1609_);
v___x_1619_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
lean_object* v___x_1620_; lean_object* v_toApplicative_1621_; lean_object* v___x_1623_; uint8_t v_isShared_1624_; uint8_t v_isSharedCheck_1678_; 
v___x_1620_ = l_StateRefT_x27_instMonad___redArg(v___x_1619_);
v_toApplicative_1621_ = lean_ctor_get(v___x_1620_, 0);
v_isSharedCheck_1678_ = !lean_is_exclusive(v___x_1620_);
if (v_isSharedCheck_1678_ == 0)
{
lean_object* v_unused_1679_; 
v_unused_1679_ = lean_ctor_get(v___x_1620_, 1);
lean_dec(v_unused_1679_);
v___x_1623_ = v___x_1620_;
v_isShared_1624_ = v_isSharedCheck_1678_;
goto v_resetjp_1622_;
}
else
{
lean_inc(v_toApplicative_1621_);
lean_dec(v___x_1620_);
v___x_1623_ = lean_box(0);
v_isShared_1624_ = v_isSharedCheck_1678_;
goto v_resetjp_1622_;
}
v_resetjp_1622_:
{
lean_object* v_toFunctor_1625_; lean_object* v_toSeq_1626_; lean_object* v_toSeqLeft_1627_; lean_object* v_toSeqRight_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1676_; 
v_toFunctor_1625_ = lean_ctor_get(v_toApplicative_1621_, 0);
v_toSeq_1626_ = lean_ctor_get(v_toApplicative_1621_, 2);
v_toSeqLeft_1627_ = lean_ctor_get(v_toApplicative_1621_, 3);
v_toSeqRight_1628_ = lean_ctor_get(v_toApplicative_1621_, 4);
v_isSharedCheck_1676_ = !lean_is_exclusive(v_toApplicative_1621_);
if (v_isSharedCheck_1676_ == 0)
{
lean_object* v_unused_1677_; 
v_unused_1677_ = lean_ctor_get(v_toApplicative_1621_, 1);
lean_dec(v_unused_1677_);
v___x_1630_ = v_toApplicative_1621_;
v_isShared_1631_ = v_isSharedCheck_1676_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_toSeqRight_1628_);
lean_inc(v_toSeqLeft_1627_);
lean_inc(v_toSeq_1626_);
lean_inc(v_toFunctor_1625_);
lean_dec(v_toApplicative_1621_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1676_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___f_1632_; lean_object* v___f_1633_; lean_object* v___f_1634_; lean_object* v___f_1635_; lean_object* v___x_1636_; lean_object* v___f_1637_; lean_object* v___f_1638_; lean_object* v___f_1639_; lean_object* v___x_1641_; 
v___f_1632_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__2, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__2_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__2);
v___f_1633_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__3, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__3_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___closed__3);
lean_inc_ref(v_toFunctor_1625_);
v___f_1634_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1634_, 0, v_toFunctor_1625_);
v___f_1635_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1635_, 0, v_toFunctor_1625_);
v___x_1636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___f_1634_);
lean_ctor_set(v___x_1636_, 1, v___f_1635_);
v___f_1637_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1637_, 0, v_toSeqRight_1628_);
v___f_1638_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1638_, 0, v_toSeqLeft_1627_);
v___f_1639_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1639_, 0, v_toSeq_1626_);
if (v_isShared_1631_ == 0)
{
lean_ctor_set(v___x_1630_, 4, v___f_1637_);
lean_ctor_set(v___x_1630_, 3, v___f_1638_);
lean_ctor_set(v___x_1630_, 2, v___f_1639_);
lean_ctor_set(v___x_1630_, 1, v___f_1632_);
lean_ctor_set(v___x_1630_, 0, v___x_1636_);
v___x_1641_ = v___x_1630_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v___x_1636_);
lean_ctor_set(v_reuseFailAlloc_1675_, 1, v___f_1632_);
lean_ctor_set(v_reuseFailAlloc_1675_, 2, v___f_1639_);
lean_ctor_set(v_reuseFailAlloc_1675_, 3, v___f_1638_);
lean_ctor_set(v_reuseFailAlloc_1675_, 4, v___f_1637_);
v___x_1641_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
lean_object* v___x_1643_; 
if (v_isShared_1624_ == 0)
{
lean_ctor_set(v___x_1623_, 1, v___f_1633_);
lean_ctor_set(v___x_1623_, 0, v___x_1641_);
v___x_1643_ = v___x_1623_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1641_);
lean_ctor_set(v_reuseFailAlloc_1674_, 1, v___f_1633_);
v___x_1643_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
lean_object* v___x_1644_; lean_object* v___x_1645_; uint8_t v___x_1646_; 
v___x_1644_ = lean_array_get_size(v_acc_1546_);
v___x_1645_ = lean_array_get_size(v_declInfos_1543_);
v___x_1646_ = lean_nat_dec_lt(v___x_1644_, v___x_1645_);
if (v___x_1646_ == 0)
{
lean_object* v___x_1647_; 
lean_dec_ref(v___x_1643_);
lean_dec_ref(v_declInfos_1543_);
lean_inc(v___y_1554_);
lean_inc_ref(v___y_1553_);
lean_inc(v___y_1552_);
lean_inc_ref(v___y_1551_);
lean_inc(v___y_1550_);
lean_inc_ref(v___y_1549_);
lean_inc(v___y_1548_);
lean_inc_ref(v___y_1547_);
v___x_1647_ = lean_apply_10(v_k_1544_, v_acc_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, lean_box(0));
return v___x_1647_;
}
else
{
lean_object* v___f_1648_; lean_object* v___x_1649_; uint8_t v___x_1650_; lean_object* v___f_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v_snd_1656_; lean_object* v_fst_1657_; lean_object* v_fst_1658_; lean_object* v_snd_1659_; lean_object* v___x_1660_; 
v___f_1648_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__0___boxed), 11, 1);
lean_closure_set(v___f_1648_, 0, v___x_1643_);
v___x_1649_ = lean_box(0);
v___x_1650_ = 0;
v___f_1651_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1651_, 0, v___f_1648_);
v___x_1652_ = lean_box(v___x_1650_);
v___x_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1652_);
lean_ctor_set(v___x_1653_, 1, v___f_1651_);
v___x_1654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1649_);
lean_ctor_set(v___x_1654_, 1, v___x_1653_);
v___x_1655_ = lean_array_get(v___x_1654_, v_declInfos_1543_, v___x_1644_);
lean_dec_ref(v___x_1654_);
v_snd_1656_ = lean_ctor_get(v___x_1655_, 1);
lean_inc(v_snd_1656_);
v_fst_1657_ = lean_ctor_get(v___x_1655_, 0);
lean_inc(v_fst_1657_);
lean_dec(v___x_1655_);
v_fst_1658_ = lean_ctor_get(v_snd_1656_, 0);
lean_inc(v_fst_1658_);
v_snd_1659_ = lean_ctor_get(v_snd_1656_, 1);
lean_inc(v_snd_1659_);
lean_dec(v_snd_1656_);
lean_inc(v___y_1554_);
lean_inc_ref(v___y_1553_);
lean_inc(v___y_1552_);
lean_inc_ref(v___y_1551_);
lean_inc(v___y_1550_);
lean_inc_ref(v___y_1549_);
lean_inc(v___y_1548_);
lean_inc_ref(v___y_1547_);
lean_inc_ref(v_acc_1546_);
v___x_1660_ = lean_apply_10(v_snd_1659_, v_acc_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, lean_box(0));
if (lean_obj_tag(v___x_1660_) == 0)
{
lean_object* v_a_1661_; lean_object* v___x_1662_; lean_object* v___f_1663_; uint8_t v___x_1664_; lean_object* v___x_1665_; 
v_a_1661_ = lean_ctor_get(v___x_1660_, 0);
lean_inc(v_a_1661_);
lean_dec_ref(v___x_1660_);
v___x_1662_ = lean_box(v_kind_1545_);
v___f_1663_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__1___boxed), 14, 4);
lean_closure_set(v___f_1663_, 0, v_acc_1546_);
lean_closure_set(v___f_1663_, 1, v_declInfos_1543_);
lean_closure_set(v___f_1663_, 2, v_k_1544_);
lean_closure_set(v___f_1663_, 3, v___x_1662_);
v___x_1664_ = lean_unbox(v_fst_1658_);
lean_dec(v_fst_1658_);
v___x_1665_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg(v_fst_1657_, v___x_1664_, v_a_1661_, v___f_1663_, v_kind_1545_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_);
return v___x_1665_;
}
else
{
lean_object* v_a_1666_; lean_object* v___x_1668_; uint8_t v_isShared_1669_; uint8_t v_isSharedCheck_1673_; 
lean_dec(v_fst_1658_);
lean_dec(v_fst_1657_);
lean_dec_ref(v_acc_1546_);
lean_dec_ref(v_k_1544_);
lean_dec_ref(v_declInfos_1543_);
v_a_1666_ = lean_ctor_get(v___x_1660_, 0);
v_isSharedCheck_1673_ = !lean_is_exclusive(v___x_1660_);
if (v_isSharedCheck_1673_ == 0)
{
v___x_1668_ = v___x_1660_;
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
else
{
lean_inc(v_a_1666_);
lean_dec(v___x_1660_);
v___x_1668_ = lean_box(0);
v_isShared_1669_ = v_isSharedCheck_1673_;
goto v_resetjp_1667_;
}
v_resetjp_1667_:
{
lean_object* v___x_1671_; 
if (v_isShared_1669_ == 0)
{
v___x_1671_ = v___x_1668_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_a_1666_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
return v___x_1671_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___lam__1(lean_object* v_acc_1692_, lean_object* v_declInfos_1693_, lean_object* v_k_1694_, uint8_t v_kind_1695_, lean_object* v_x_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; 
v___x_1706_ = lean_array_push(v_acc_1692_, v_x_1696_);
v___x_1707_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19(v_declInfos_1693_, v_k_1694_, v_kind_1695_, v___x_1706_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_, v___y_1704_);
return v___x_1707_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19___boxed(lean_object* v_declInfos_1708_, lean_object* v_k_1709_, lean_object* v_kind_1710_, lean_object* v_acc_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_){
_start:
{
uint8_t v_kind_boxed_1721_; lean_object* v_res_1722_; 
v_kind_boxed_1721_ = lean_unbox(v_kind_1710_);
v_res_1722_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19(v_declInfos_1708_, v_k_1709_, v_kind_boxed_1721_, v_acc_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v___y_1717_);
lean_dec_ref(v___y_1716_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14(lean_object* v_declInfos_1723_, lean_object* v_k_1724_, uint8_t v_kind_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1735_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1);
v___x_1736_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19(v_declInfos_1723_, v_k_1724_, v_kind_1725_, v___x_1735_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14___boxed(lean_object* v_declInfos_1737_, lean_object* v_k_1738_, lean_object* v_kind_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_){
_start:
{
uint8_t v_kind_boxed_1749_; lean_object* v_res_1750_; 
v_kind_boxed_1749_ = lean_unbox(v_kind_1739_);
v_res_1750_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14(v_declInfos_1737_, v_k_1738_, v_kind_boxed_1749_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_);
lean_dec(v___y_1747_);
lean_dec_ref(v___y_1746_);
lean_dec(v___y_1745_);
lean_dec_ref(v___y_1744_);
lean_dec(v___y_1743_);
lean_dec_ref(v___y_1742_);
lean_dec(v___y_1741_);
lean_dec_ref(v___y_1740_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__13(size_t v_sz_1751_, size_t v_i_1752_, lean_object* v_bs_1753_){
_start:
{
uint8_t v___x_1754_; 
v___x_1754_ = lean_usize_dec_lt(v_i_1752_, v_sz_1751_);
if (v___x_1754_ == 0)
{
return v_bs_1753_;
}
else
{
lean_object* v_v_1755_; lean_object* v_fst_1756_; lean_object* v_snd_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1773_; 
v_v_1755_ = lean_array_uget(v_bs_1753_, v_i_1752_);
v_fst_1756_ = lean_ctor_get(v_v_1755_, 0);
v_snd_1757_ = lean_ctor_get(v_v_1755_, 1);
v_isSharedCheck_1773_ = !lean_is_exclusive(v_v_1755_);
if (v_isSharedCheck_1773_ == 0)
{
v___x_1759_ = v_v_1755_;
v_isShared_1760_ = v_isSharedCheck_1773_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_snd_1757_);
lean_inc(v_fst_1756_);
lean_dec(v_v_1755_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1773_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1761_; lean_object* v_bs_x27_1762_; uint8_t v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1761_ = lean_unsigned_to_nat(0u);
v_bs_x27_1762_ = lean_array_uset(v_bs_1753_, v_i_1752_, v___x_1761_);
v___x_1763_ = 0;
v___x_1764_ = lean_box(v___x_1763_);
if (v_isShared_1760_ == 0)
{
lean_ctor_set(v___x_1759_, 0, v___x_1764_);
v___x_1766_ = v___x_1759_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1772_; 
v_reuseFailAlloc_1772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1772_, 0, v___x_1764_);
lean_ctor_set(v_reuseFailAlloc_1772_, 1, v_snd_1757_);
v___x_1766_ = v_reuseFailAlloc_1772_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; size_t v___x_1768_; size_t v___x_1769_; lean_object* v___x_1770_; 
v___x_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1767_, 0, v_fst_1756_);
lean_ctor_set(v___x_1767_, 1, v___x_1766_);
v___x_1768_ = ((size_t)1ULL);
v___x_1769_ = lean_usize_add(v_i_1752_, v___x_1768_);
v___x_1770_ = lean_array_uset(v_bs_x27_1762_, v_i_1752_, v___x_1767_);
v_i_1752_ = v___x_1769_;
v_bs_1753_ = v___x_1770_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__13___boxed(lean_object* v_sz_1774_, lean_object* v_i_1775_, lean_object* v_bs_1776_){
_start:
{
size_t v_sz_boxed_1777_; size_t v_i_boxed_1778_; lean_object* v_res_1779_; 
v_sz_boxed_1777_ = lean_unbox_usize(v_sz_1774_);
lean_dec(v_sz_1774_);
v_i_boxed_1778_ = lean_unbox_usize(v_i_1775_);
lean_dec(v_i_1775_);
v_res_1779_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__13(v_sz_boxed_1777_, v_i_boxed_1778_, v_bs_1776_);
return v_res_1779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9(lean_object* v_declInfos_1780_, lean_object* v_k_1781_, uint8_t v_kind_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_, lean_object* v___y_1790_){
_start:
{
size_t v_sz_1792_; size_t v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v_sz_1792_ = lean_array_size(v_declInfos_1780_);
v___x_1793_ = ((size_t)0ULL);
v___x_1794_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__13(v_sz_1792_, v___x_1793_, v_declInfos_1780_);
v___x_1795_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14(v___x_1794_, v_k_1781_, v_kind_1782_, v___y_1783_, v___y_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_, v___y_1790_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9___boxed(lean_object* v_declInfos_1796_, lean_object* v_k_1797_, lean_object* v_kind_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
uint8_t v_kind_boxed_1808_; lean_object* v_res_1809_; 
v_kind_boxed_1808_ = lean_unbox(v_kind_1798_);
v_res_1809_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9(v_declInfos_1796_, v_k_1797_, v_kind_boxed_1808_, v___y_1799_, v___y_1800_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_);
lean_dec(v___y_1806_);
lean_dec_ref(v___y_1805_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v___y_1800_);
lean_dec_ref(v___y_1799_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(lean_object* v_declInfos_1810_, lean_object* v_k_1811_, uint8_t v_kind_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_, lean_object* v___y_1816_, lean_object* v___y_1817_, lean_object* v___y_1818_, lean_object* v___y_1819_, lean_object* v___y_1820_){
_start:
{
size_t v_sz_1822_; size_t v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v_sz_1822_ = lean_array_size(v_declInfos_1810_);
v___x_1823_ = ((size_t)0ULL);
v___x_1824_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__8(v_sz_1822_, v___x_1823_, v_declInfos_1810_);
v___x_1825_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9(v___x_1824_, v_k_1811_, v_kind_1812_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_);
return v___x_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5___boxed(lean_object* v_declInfos_1826_, lean_object* v_k_1827_, lean_object* v_kind_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_){
_start:
{
uint8_t v_kind_boxed_1838_; lean_object* v_res_1839_; 
v_kind_boxed_1838_ = lean_unbox(v_kind_1828_);
v_res_1839_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(v_declInfos_1826_, v_k_1827_, v_kind_boxed_1838_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec(v___y_1832_);
lean_dec_ref(v___y_1831_);
lean_dec(v___y_1830_);
lean_dec_ref(v___y_1829_);
return v_res_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(lean_object* v_msgData_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v___x_1846_; lean_object* v_env_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v_mctx_1850_; lean_object* v_lctx_1851_; lean_object* v_options_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v___x_1846_ = lean_st_ref_get(v___y_1844_);
v_env_1847_ = lean_ctor_get(v___x_1846_, 0);
lean_inc_ref(v_env_1847_);
lean_dec(v___x_1846_);
v___x_1848_ = lean_st_ref_get(v___y_1844_);
lean_dec(v___x_1848_);
v___x_1849_ = lean_st_ref_get(v___y_1842_);
v_mctx_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc_ref(v_mctx_1850_);
lean_dec(v___x_1849_);
v_lctx_1851_ = lean_ctor_get(v___y_1841_, 2);
v_options_1852_ = lean_ctor_get(v___y_1843_, 2);
lean_inc_ref(v_options_1852_);
lean_inc_ref(v_lctx_1851_);
v___x_1853_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1853_, 0, v_env_1847_);
lean_ctor_set(v___x_1853_, 1, v_mctx_1850_);
lean_ctor_set(v___x_1853_, 2, v_lctx_1851_);
lean_ctor_set(v___x_1853_, 3, v_options_1852_);
v___x_1854_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1853_);
lean_ctor_set(v___x_1854_, 1, v_msgData_1840_);
v___x_1855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1855_, 0, v___x_1854_);
return v___x_1855_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14___boxed(lean_object* v_msgData_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(v_msgData_1856_, v___y_1857_, v___y_1858_, v___y_1859_, v___y_1860_);
lean_dec(v___y_1860_);
lean_dec_ref(v___y_1859_);
lean_dec(v___y_1858_);
lean_dec_ref(v___y_1857_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(lean_object* v_msg_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_){
_start:
{
lean_object* v_ref_1869_; lean_object* v___x_1870_; lean_object* v_a_1871_; lean_object* v___x_1873_; uint8_t v_isShared_1874_; uint8_t v_isSharedCheck_1879_; 
v_ref_1869_ = lean_ctor_get(v___y_1866_, 5);
v___x_1870_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(v_msg_1863_, v___y_1864_, v___y_1865_, v___y_1866_, v___y_1867_);
v_a_1871_ = lean_ctor_get(v___x_1870_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v___x_1870_);
if (v_isSharedCheck_1879_ == 0)
{
v___x_1873_ = v___x_1870_;
v_isShared_1874_ = v_isSharedCheck_1879_;
goto v_resetjp_1872_;
}
else
{
lean_inc(v_a_1871_);
lean_dec(v___x_1870_);
v___x_1873_ = lean_box(0);
v_isShared_1874_ = v_isSharedCheck_1879_;
goto v_resetjp_1872_;
}
v_resetjp_1872_:
{
lean_object* v___x_1875_; lean_object* v___x_1877_; 
lean_inc(v_ref_1869_);
v___x_1875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1875_, 0, v_ref_1869_);
lean_ctor_set(v___x_1875_, 1, v_a_1871_);
if (v_isShared_1874_ == 0)
{
lean_ctor_set_tag(v___x_1873_, 1);
lean_ctor_set(v___x_1873_, 0, v___x_1875_);
v___x_1877_ = v___x_1873_;
goto v_reusejp_1876_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v___x_1875_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg___boxed(lean_object* v_msg_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_){
_start:
{
lean_object* v_res_1886_; 
v_res_1886_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v_msg_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_);
lean_dec(v___y_1884_);
lean_dec_ref(v___y_1883_);
lean_dec(v___y_1882_);
lean_dec_ref(v___y_1881_);
return v_res_1886_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(size_t v_sz_1887_, size_t v_i_1888_, lean_object* v_bs_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_){
_start:
{
uint8_t v___x_1895_; 
v___x_1895_ = lean_usize_dec_lt(v_i_1888_, v_sz_1887_);
if (v___x_1895_ == 0)
{
lean_object* v___x_1896_; 
v___x_1896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1896_, 0, v_bs_1889_);
return v___x_1896_;
}
else
{
lean_object* v_v_1897_; lean_object* v_fst_1898_; lean_object* v_snd_1899_; lean_object* v___x_1900_; 
v_v_1897_ = lean_array_uget_borrowed(v_bs_1889_, v_i_1888_);
v_fst_1898_ = lean_ctor_get(v_v_1897_, 0);
v_snd_1899_ = lean_ctor_get(v_v_1897_, 1);
lean_inc(v_fst_1898_);
lean_inc(v_snd_1899_);
v___x_1900_ = l_Lean_Meta_mkEq(v_snd_1899_, v_fst_1898_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v_a_1901_; lean_object* v___x_1902_; lean_object* v_bs_x27_1903_; size_t v___x_1904_; size_t v___x_1905_; lean_object* v___x_1906_; 
v_a_1901_ = lean_ctor_get(v___x_1900_, 0);
lean_inc(v_a_1901_);
lean_dec_ref(v___x_1900_);
v___x_1902_ = lean_unsigned_to_nat(0u);
v_bs_x27_1903_ = lean_array_uset(v_bs_1889_, v_i_1888_, v___x_1902_);
v___x_1904_ = ((size_t)1ULL);
v___x_1905_ = lean_usize_add(v_i_1888_, v___x_1904_);
v___x_1906_ = lean_array_uset(v_bs_x27_1903_, v_i_1888_, v_a_1901_);
v_i_1888_ = v___x_1905_;
v_bs_1889_ = v___x_1906_;
goto _start;
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
lean_dec_ref(v_bs_1889_);
v_a_1908_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v___x_1900_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1900_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg___boxed(lean_object* v_sz_1916_, lean_object* v_i_1917_, lean_object* v_bs_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_){
_start:
{
size_t v_sz_boxed_1924_; size_t v_i_boxed_1925_; lean_object* v_res_1926_; 
v_sz_boxed_1924_ = lean_unbox_usize(v_sz_1916_);
lean_dec(v_sz_1916_);
v_i_boxed_1925_ = lean_unbox_usize(v_i_1917_);
lean_dec(v_i_1917_);
v_res_1926_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(v_sz_boxed_1924_, v_i_boxed_1925_, v_bs_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_);
lean_dec(v___y_1922_);
lean_dec_ref(v___y_1921_);
lean_dec(v___y_1920_);
lean_dec_ref(v___y_1919_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0(lean_object* v_revertArgs_1927_, lean_object* v_hypName_1928_, lean_object* v_u_1929_, lean_object* v_00_u03c3s_1930_, uint8_t v___x_1931_, lean_object* v_hyps_1932_, lean_object* v_ss_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v___x_1943_; size_t v_sz_1944_; size_t v___x_1945_; lean_object* v___x_1946_; 
v___x_1943_ = l_Array_zip___redArg(v_revertArgs_1927_, v_ss_1933_);
v_sz_1944_ = lean_array_size(v___x_1943_);
v___x_1945_ = ((size_t)0ULL);
v___x_1946_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(v_sz_1944_, v___x_1945_, v___x_1943_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_);
if (lean_obj_tag(v___x_1946_) == 0)
{
lean_object* v_a_1947_; lean_object* v___x_1948_; 
v_a_1947_ = lean_ctor_get(v___x_1946_, 0);
lean_inc(v_a_1947_);
lean_dec_ref(v___x_1946_);
lean_inc(v_hypName_1928_);
v___x_1948_ = l_Lean_Core_mkFreshUserName(v_hypName_1928_, v___y_1940_, v___y_1941_);
if (lean_obj_tag(v___x_1948_) == 0)
{
lean_object* v_a_1949_; lean_object* v_eqs_1950_; lean_object* v_00_u03c6_1951_; lean_object* v_00_u03c6_1952_; uint8_t v___x_1953_; uint8_t v___x_1954_; lean_object* v___x_1955_; 
v_a_1949_ = lean_ctor_get(v___x_1948_, 0);
lean_inc(v_a_1949_);
lean_dec_ref(v___x_1948_);
v_eqs_1950_ = lean_array_to_list(v_a_1947_);
v_00_u03c6_1951_ = l_Lean_mkAndN(v_eqs_1950_);
v_00_u03c6_1952_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkPure(v_u_1929_, v_00_u03c3s_1930_, v_00_u03c6_1951_);
v___x_1953_ = 1;
v___x_1954_ = 1;
v___x_1955_ = l_Lean_Meta_mkLambdaFVars(v_ss_1933_, v_00_u03c6_1952_, v___x_1931_, v___x_1953_, v___x_1931_, v___x_1953_, v___x_1954_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_);
if (lean_obj_tag(v___x_1955_) == 0)
{
lean_object* v_a_1956_; lean_object* v___x_1957_; 
v_a_1956_ = lean_ctor_get(v___x_1955_, 0);
lean_inc(v_a_1956_);
lean_dec_ref(v___x_1955_);
v___x_1957_ = l_Lean_Meta_mkLambdaFVars(v_ss_1933_, v_hyps_1932_, v___x_1931_, v___x_1953_, v___x_1931_, v___x_1953_, v___x_1954_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_object* v_a_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1968_; 
v_a_1958_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1968_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1968_ == 0)
{
v___x_1960_ = v___x_1957_;
v_isShared_1961_ = v_isSharedCheck_1968_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_a_1958_);
lean_dec(v___x_1957_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1968_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1962_; lean_object* v_00_u03c6_1963_; lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1962_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1962_, 0, v_hypName_1928_);
lean_ctor_set(v___x_1962_, 1, v_a_1949_);
lean_ctor_set(v___x_1962_, 2, v_a_1956_);
v_00_u03c6_1963_ = l_Lean_Elab_Tactic_Do_ProofMode_Hyp_toExpr(v___x_1962_);
v___x_1964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1964_, 0, v_a_1958_);
lean_ctor_set(v___x_1964_, 1, v_00_u03c6_1963_);
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 0, v___x_1964_);
v___x_1966_ = v___x_1960_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1967_; 
v_reuseFailAlloc_1967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1967_, 0, v___x_1964_);
v___x_1966_ = v_reuseFailAlloc_1967_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
return v___x_1966_;
}
}
}
else
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
lean_dec(v_a_1956_);
lean_dec(v_a_1949_);
lean_dec(v_hypName_1928_);
v_a_1969_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___x_1957_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___x_1957_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1974_; 
if (v_isShared_1972_ == 0)
{
v___x_1974_ = v___x_1971_;
goto v_reusejp_1973_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_a_1969_);
v___x_1974_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1973_;
}
v_reusejp_1973_:
{
return v___x_1974_;
}
}
}
}
else
{
lean_object* v_a_1977_; lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1984_; 
lean_dec(v_a_1949_);
lean_dec_ref(v_hyps_1932_);
lean_dec(v_hypName_1928_);
v_a_1977_ = lean_ctor_get(v___x_1955_, 0);
v_isSharedCheck_1984_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1984_ == 0)
{
v___x_1979_ = v___x_1955_;
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
else
{
lean_inc(v_a_1977_);
lean_dec(v___x_1955_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1984_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1982_; 
if (v_isShared_1980_ == 0)
{
v___x_1982_ = v___x_1979_;
goto v_reusejp_1981_;
}
else
{
lean_object* v_reuseFailAlloc_1983_; 
v_reuseFailAlloc_1983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1983_, 0, v_a_1977_);
v___x_1982_ = v_reuseFailAlloc_1983_;
goto v_reusejp_1981_;
}
v_reusejp_1981_:
{
return v___x_1982_;
}
}
}
}
else
{
lean_object* v_a_1985_; lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
lean_dec(v_a_1947_);
lean_dec_ref(v_hyps_1932_);
lean_dec_ref(v_00_u03c3s_1930_);
lean_dec(v_u_1929_);
lean_dec(v_hypName_1928_);
v_a_1985_ = lean_ctor_get(v___x_1948_, 0);
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1948_);
if (v_isSharedCheck_1992_ == 0)
{
v___x_1987_ = v___x_1948_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_inc(v_a_1985_);
lean_dec(v___x_1948_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v_a_1985_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
}
else
{
lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2000_; 
lean_dec_ref(v_hyps_1932_);
lean_dec_ref(v_00_u03c3s_1930_);
lean_dec(v_u_1929_);
lean_dec(v_hypName_1928_);
v_a_1993_ = lean_ctor_get(v___x_1946_, 0);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_2000_ == 0)
{
v___x_1995_ = v___x_1946_;
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1946_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2000_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_1999_; 
v_reuseFailAlloc_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1999_, 0, v_a_1993_);
v___x_1998_ = v_reuseFailAlloc_1999_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
return v___x_1998_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed(lean_object* v_revertArgs_2001_, lean_object* v_hypName_2002_, lean_object* v_u_2003_, lean_object* v_00_u03c3s_2004_, lean_object* v___x_2005_, lean_object* v_hyps_2006_, lean_object* v_ss_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_){
_start:
{
uint8_t v___x_22539__boxed_2017_; lean_object* v_res_2018_; 
v___x_22539__boxed_2017_ = lean_unbox(v___x_2005_);
v_res_2018_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0(v_revertArgs_2001_, v_hypName_2002_, v_u_2003_, v_00_u03c3s_2004_, v___x_22539__boxed_2017_, v_hyps_2006_, v_ss_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_);
lean_dec(v___y_2015_);
lean_dec_ref(v___y_2014_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2011_);
lean_dec_ref(v___y_2010_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec_ref(v_ss_2007_);
lean_dec_ref(v_revertArgs_2001_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(lean_object* v_a_2019_, lean_object* v_b_2020_){
_start:
{
lean_object* v_array_2021_; lean_object* v_start_2022_; lean_object* v_stop_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2036_; 
v_array_2021_ = lean_ctor_get(v_a_2019_, 0);
v_start_2022_ = lean_ctor_get(v_a_2019_, 1);
v_stop_2023_ = lean_ctor_get(v_a_2019_, 2);
v_isSharedCheck_2036_ = !lean_is_exclusive(v_a_2019_);
if (v_isSharedCheck_2036_ == 0)
{
v___x_2025_ = v_a_2019_;
v_isShared_2026_ = v_isSharedCheck_2036_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_stop_2023_);
lean_inc(v_start_2022_);
lean_inc(v_array_2021_);
lean_dec(v_a_2019_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2036_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
uint8_t v___x_2027_; 
v___x_2027_ = lean_nat_dec_lt(v_start_2022_, v_stop_2023_);
if (v___x_2027_ == 0)
{
lean_del_object(v___x_2025_);
lean_dec(v_stop_2023_);
lean_dec(v_start_2022_);
lean_dec_ref(v_array_2021_);
return v_b_2020_;
}
else
{
lean_object* v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2031_; 
v___x_2028_ = lean_unsigned_to_nat(1u);
v___x_2029_ = lean_nat_add(v_start_2022_, v___x_2028_);
lean_inc_ref(v_array_2021_);
if (v_isShared_2026_ == 0)
{
lean_ctor_set(v___x_2025_, 1, v___x_2029_);
v___x_2031_ = v___x_2025_;
goto v_reusejp_2030_;
}
else
{
lean_object* v_reuseFailAlloc_2035_; 
v_reuseFailAlloc_2035_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2035_, 0, v_array_2021_);
lean_ctor_set(v_reuseFailAlloc_2035_, 1, v___x_2029_);
lean_ctor_set(v_reuseFailAlloc_2035_, 2, v_stop_2023_);
v___x_2031_ = v_reuseFailAlloc_2035_;
goto v_reusejp_2030_;
}
v_reusejp_2030_:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = lean_array_fget(v_array_2021_, v_start_2022_);
lean_dec(v_start_2022_);
lean_dec_ref(v_array_2021_);
v___x_2033_ = lean_array_push(v_b_2020_, v___x_2032_);
v_a_2019_ = v___x_2031_;
v_b_2020_ = v___x_2033_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(lean_object* v_u_2037_, lean_object* v_as_2038_, size_t v_i_2039_, size_t v_stop_2040_, lean_object* v_b_2041_){
_start:
{
uint8_t v___x_2042_; 
v___x_2042_ = lean_usize_dec_eq(v_i_2039_, v_stop_2040_);
if (v___x_2042_ == 0)
{
size_t v___x_2043_; size_t v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2043_ = ((size_t)1ULL);
v___x_2044_ = lean_usize_sub(v_i_2039_, v___x_2043_);
v___x_2045_ = lean_array_uget_borrowed(v_as_2038_, v___x_2044_);
lean_inc(v___x_2045_);
lean_inc(v_u_2037_);
v___x_2046_ = l_Lean_Elab_Tactic_Do_ProofMode_TypeList_mkCons(v_u_2037_, v___x_2045_, v_b_2041_);
v_i_2039_ = v___x_2044_;
v_b_2041_ = v___x_2046_;
goto _start;
}
else
{
lean_dec(v_u_2037_);
return v_b_2041_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7___boxed(lean_object* v_u_2048_, lean_object* v_as_2049_, lean_object* v_i_2050_, lean_object* v_stop_2051_, lean_object* v_b_2052_){
_start:
{
size_t v_i_boxed_2053_; size_t v_stop_boxed_2054_; lean_object* v_res_2055_; 
v_i_boxed_2053_ = lean_unbox_usize(v_i_2050_);
lean_dec(v_i_2050_);
v_stop_boxed_2054_ = lean_unbox_usize(v_stop_2051_);
lean_dec(v_stop_2051_);
v_res_2055_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(v_u_2048_, v_as_2049_, v_i_boxed_2053_, v_stop_boxed_2054_, v_b_2052_);
lean_dec_ref(v_as_2049_);
return v_res_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(lean_object* v_goal_2056_, lean_object* v_n_2057_, lean_object* v_hypName_2058_, lean_object* v_k_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v___x_2069_; uint8_t v___x_2070_; 
v___x_2069_ = lean_unsigned_to_nat(0u);
v___x_2070_ = lean_nat_dec_eq(v_n_2057_, v___x_2069_);
if (v___x_2070_ == 0)
{
lean_object* v_u_2071_; lean_object* v_00_u03c3s_2072_; lean_object* v_hyps_2073_; lean_object* v_target_2074_; lean_object* v___x_2076_; uint8_t v_isShared_2077_; uint8_t v_isSharedCheck_2228_; 
v_u_2071_ = lean_ctor_get(v_goal_2056_, 0);
v_00_u03c3s_2072_ = lean_ctor_get(v_goal_2056_, 1);
v_hyps_2073_ = lean_ctor_get(v_goal_2056_, 2);
v_target_2074_ = lean_ctor_get(v_goal_2056_, 3);
v_isSharedCheck_2228_ = !lean_is_exclusive(v_goal_2056_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2076_ = v_goal_2056_;
v_isShared_2077_ = v_isSharedCheck_2228_;
goto v_resetjp_2075_;
}
else
{
lean_inc(v_target_2074_);
lean_inc(v_hyps_2073_);
lean_inc(v_00_u03c3s_2072_);
lean_inc(v_u_2071_);
lean_dec(v_goal_2056_);
v___x_2076_ = lean_box(0);
v_isShared_2077_ = v_isSharedCheck_2228_;
goto v_resetjp_2075_;
}
v_resetjp_2075_:
{
lean_object* v_T_2078_; lean_object* v_f_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v_a_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v_revertArgs_2086_; lean_object* v___y_2088_; lean_object* v___y_2089_; lean_object* v___y_2090_; lean_object* v___y_2091_; lean_object* v___y_2092_; lean_object* v___y_2093_; lean_object* v___y_2094_; lean_object* v___y_2095_; lean_object* v___y_2096_; lean_object* v___y_2097_; lean_object* v___y_2098_; lean_object* v___y_2099_; lean_object* v___x_2138_; lean_object* v___f_2139_; lean_object* v___y_2141_; lean_object* v___y_2142_; lean_object* v___y_2143_; lean_object* v___y_2144_; lean_object* v___y_2145_; lean_object* v___y_2146_; lean_object* v___y_2147_; lean_object* v___y_2148_; lean_object* v___x_2202_; uint8_t v___x_2203_; 
v_T_2078_ = l_Lean_Expr_consumeMData(v_target_2074_);
v_f_2079_ = l_Lean_Expr_getAppFn(v_T_2078_);
v___x_2080_ = l_Lean_Expr_getAppNumArgs(v_T_2078_);
v___x_2081_ = lean_mk_empty_array_with_capacity(v___x_2080_);
lean_dec(v___x_2080_);
lean_inc_ref(v_T_2078_);
v_a_2082_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_T_2078_, v___x_2081_);
lean_inc(v_n_2057_);
lean_inc_ref(v_a_2082_);
v___x_2083_ = l_Array_toSubarray___redArg(v_a_2082_, v___x_2069_, v_n_2057_);
v___x_2084_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__1);
v___x_2085_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(v___x_2083_, v___x_2084_);
v_revertArgs_2086_ = l_Array_reverse___redArg(v___x_2085_);
v___x_2138_ = lean_box(v___x_2070_);
lean_inc_ref(v_hyps_2073_);
lean_inc_ref(v_00_u03c3s_2072_);
lean_inc(v_u_2071_);
lean_inc_ref(v_revertArgs_2086_);
v___f_2139_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___lam__0___boxed), 16, 6);
lean_closure_set(v___f_2139_, 0, v_revertArgs_2086_);
lean_closure_set(v___f_2139_, 1, v_hypName_2058_);
lean_closure_set(v___f_2139_, 2, v_u_2071_);
lean_closure_set(v___f_2139_, 3, v_00_u03c3s_2072_);
lean_closure_set(v___f_2139_, 4, v___x_2138_);
lean_closure_set(v___f_2139_, 5, v_hyps_2073_);
v___x_2202_ = lean_array_get_size(v_revertArgs_2086_);
v___x_2203_ = lean_nat_dec_eq(v___x_2202_, v_n_2057_);
if (v___x_2203_ == 0)
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v_a_2220_; lean_object* v___x_2222_; uint8_t v_isShared_2223_; uint8_t v_isSharedCheck_2227_; 
lean_dec_ref(v___f_2139_);
lean_dec_ref(v_revertArgs_2086_);
lean_dec_ref(v_a_2082_);
lean_dec_ref(v_f_2079_);
lean_del_object(v___x_2076_);
lean_dec_ref(v_target_2074_);
lean_dec_ref(v_hyps_2073_);
lean_dec_ref(v_00_u03c3s_2072_);
lean_dec(v_u_2071_);
lean_dec_ref(v_k_2059_);
v___x_2204_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__15, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__15_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__15);
v___x_2205_ = l_Nat_reprFast(v_n_2057_);
v___x_2206_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2206_, 0, v___x_2205_);
v___x_2207_ = l_Lean_MessageData_ofFormat(v___x_2206_);
v___x_2208_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2204_);
lean_ctor_set(v___x_2208_, 1, v___x_2207_);
v___x_2209_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__17, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__17_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__17);
v___x_2210_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2208_);
lean_ctor_set(v___x_2210_, 1, v___x_2209_);
v___x_2211_ = l_Lean_MessageData_ofExpr(v_T_2078_);
v___x_2212_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2210_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__19, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__19_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___closed__19);
v___x_2214_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2212_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
v___x_2215_ = l_Nat_reprFast(v___x_2202_);
v___x_2216_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2216_, 0, v___x_2215_);
v___x_2217_ = l_Lean_MessageData_ofFormat(v___x_2216_);
v___x_2218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2218_, 0, v___x_2214_);
lean_ctor_set(v___x_2218_, 1, v___x_2217_);
v___x_2219_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v___x_2218_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
v_a_2220_ = lean_ctor_get(v___x_2219_, 0);
v_isSharedCheck_2227_ = !lean_is_exclusive(v___x_2219_);
if (v_isSharedCheck_2227_ == 0)
{
v___x_2222_ = v___x_2219_;
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
else
{
lean_inc(v_a_2220_);
lean_dec(v___x_2219_);
v___x_2222_ = lean_box(0);
v_isShared_2223_ = v_isSharedCheck_2227_;
goto v_resetjp_2221_;
}
v_resetjp_2221_:
{
lean_object* v___x_2225_; 
if (v_isShared_2223_ == 0)
{
v___x_2225_ = v___x_2222_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v_a_2220_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
else
{
lean_dec_ref(v_T_2078_);
v___y_2141_ = v___y_2060_;
v___y_2142_ = v___y_2061_;
v___y_2143_ = v___y_2062_;
v___y_2144_ = v___y_2063_;
v___y_2145_ = v___y_2064_;
v___y_2146_ = v___y_2065_;
v___y_2147_ = v___y_2066_;
v___y_2148_ = v___y_2067_;
goto v___jp_2140_;
}
v___jp_2087_:
{
lean_object* v___x_2100_; 
v___x_2100_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v___y_2097_, v___y_2088_, v___y_2094_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; lean_object* v_H_2102_; lean_object* v___x_2103_; lean_object* v_fst_2104_; lean_object* v_snd_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2137_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
lean_inc(v_a_2101_);
lean_dec_ref(v___x_2100_);
lean_inc_ref_n(v___y_2099_, 2);
v_H_2102_ = l_Lean_Elab_Tactic_Do_ProofMode_pushForallContextIntoHyps(v___y_2099_, v_a_2101_);
lean_inc(v_u_2071_);
v___x_2103_ = l_Lean_Elab_Tactic_Do_ProofMode_SPred_mkAnd(v_u_2071_, v___y_2099_, v_H_2102_, v___y_2093_);
v_fst_2104_ = lean_ctor_get(v___x_2103_, 0);
v_snd_2105_ = lean_ctor_get(v___x_2103_, 1);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2107_ = v___x_2103_;
v_isShared_2108_ = v_isSharedCheck_2137_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_snd_2105_);
lean_inc(v_fst_2104_);
lean_dec(v___x_2103_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2137_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v_goal_x27_2114_; 
v___x_2109_ = lean_array_get_size(v_a_2082_);
v___x_2110_ = l_Array_toSubarray___redArg(v_a_2082_, v_n_2057_, v___x_2109_);
v___x_2111_ = l_Subarray_copy___redArg(v___x_2110_);
v___x_2112_ = l_Lean_mkAppRev(v_f_2079_, v___x_2111_);
lean_dec_ref(v___x_2111_);
lean_inc(v_fst_2104_);
lean_inc(v_u_2071_);
if (v_isShared_2077_ == 0)
{
lean_ctor_set(v___x_2076_, 3, v___x_2112_);
lean_ctor_set(v___x_2076_, 2, v_fst_2104_);
lean_ctor_set(v___x_2076_, 1, v___y_2099_);
v_goal_x27_2114_ = v___x_2076_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_u_2071_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v___y_2099_);
lean_ctor_set(v_reuseFailAlloc_2136_, 2, v_fst_2104_);
lean_ctor_set(v_reuseFailAlloc_2136_, 3, v___x_2112_);
v_goal_x27_2114_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
lean_object* v___x_2115_; 
lean_inc(v___y_2094_);
lean_inc_ref(v___y_2089_);
lean_inc(v___y_2088_);
lean_inc_ref(v___y_2098_);
lean_inc(v___y_2091_);
lean_inc_ref(v___y_2092_);
lean_inc(v___y_2095_);
lean_inc_ref(v___y_2090_);
v___x_2115_ = lean_apply_10(v_k_2059_, v_goal_x27_2114_, v___y_2090_, v___y_2095_, v___y_2092_, v___y_2091_, v___y_2098_, v___y_2088_, v___y_2089_, v___y_2094_, lean_box(0));
if (lean_obj_tag(v___x_2115_) == 0)
{
lean_object* v_a_2116_; lean_object* v___x_2117_; 
v_a_2116_ = lean_ctor_get(v___x_2115_, 0);
lean_inc(v_a_2116_);
lean_dec_ref(v___x_2115_);
lean_inc(v___y_2094_);
lean_inc_ref(v___y_2089_);
lean_inc(v___y_2088_);
lean_inc_ref(v___y_2098_);
lean_inc_ref(v___y_2096_);
v___x_2117_ = lean_infer_type(v___y_2096_, v___y_2098_, v___y_2088_, v___y_2089_, v___y_2094_);
if (lean_obj_tag(v___x_2117_) == 0)
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2135_; 
v_a_2118_ = lean_ctor_get(v___x_2117_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2117_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2120_ = v___x_2117_;
v_isShared_2121_ = v_isSharedCheck_2135_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___x_2117_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2135_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2125_; 
v___x_2122_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___redArg___lam__12___closed__1);
v___x_2123_ = lean_box(0);
if (v_isShared_2108_ == 0)
{
lean_ctor_set_tag(v___x_2107_, 1);
lean_ctor_set(v___x_2107_, 1, v___x_2123_);
lean_ctor_set(v___x_2107_, 0, v_u_2071_);
v___x_2125_ = v___x_2107_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_u_2071_);
lean_ctor_set(v_reuseFailAlloc_2134_, 1, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2134_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v_prf_2130_; lean_object* v___x_2132_; 
v___x_2126_ = l_Lean_mkConst(v___x_2122_, v___x_2125_);
v___x_2127_ = l_Lean_mkAppN(v_fst_2104_, v_revertArgs_2086_);
v___x_2128_ = l_Lean_mkAppN(v_snd_2105_, v_revertArgs_2086_);
v___x_2129_ = l_Lean_mkAppN(v_a_2116_, v_revertArgs_2086_);
lean_dec_ref(v_revertArgs_2086_);
v_prf_2130_ = l_Lean_mkApp8(v___x_2126_, v_00_u03c3s_2072_, v_a_2118_, v_hyps_2073_, v___x_2127_, v_target_2074_, v___y_2096_, v___x_2128_, v___x_2129_);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 0, v_prf_2130_);
v___x_2132_ = v___x_2120_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2133_; 
v_reuseFailAlloc_2133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2133_, 0, v_prf_2130_);
v___x_2132_ = v_reuseFailAlloc_2133_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
return v___x_2132_;
}
}
}
}
else
{
lean_dec(v_a_2116_);
lean_del_object(v___x_2107_);
lean_dec(v_snd_2105_);
lean_dec(v_fst_2104_);
lean_dec_ref(v___y_2096_);
lean_dec_ref(v_revertArgs_2086_);
lean_dec_ref(v_target_2074_);
lean_dec_ref(v_hyps_2073_);
lean_dec_ref(v_00_u03c3s_2072_);
lean_dec(v_u_2071_);
return v___x_2117_;
}
}
else
{
lean_del_object(v___x_2107_);
lean_dec(v_snd_2105_);
lean_dec(v_fst_2104_);
lean_dec_ref(v___y_2096_);
lean_dec_ref(v_revertArgs_2086_);
lean_dec_ref(v_target_2074_);
lean_dec_ref(v_hyps_2073_);
lean_dec_ref(v_00_u03c3s_2072_);
lean_dec(v_u_2071_);
return v___x_2115_;
}
}
}
}
else
{
lean_dec_ref(v___y_2099_);
lean_dec_ref(v___y_2096_);
lean_dec_ref(v___y_2093_);
lean_dec_ref(v_revertArgs_2086_);
lean_dec_ref(v_a_2082_);
lean_dec_ref(v_f_2079_);
lean_del_object(v___x_2076_);
lean_dec_ref(v_target_2074_);
lean_dec_ref(v_hyps_2073_);
lean_dec_ref(v_00_u03c3s_2072_);
lean_dec(v_u_2071_);
lean_dec_ref(v_k_2059_);
lean_dec(v_n_2057_);
return v___x_2100_;
}
}
v___jp_2140_:
{
size_t v_sz_2149_; size_t v___x_2150_; lean_object* v___x_2151_; 
v_sz_2149_ = lean_array_size(v_revertArgs_2086_);
v___x_2150_ = ((size_t)0ULL);
lean_inc_ref(v_revertArgs_2086_);
v___x_2151_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__3(v_sz_2149_, v___x_2150_, v_revertArgs_2086_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
if (lean_obj_tag(v___x_2151_) == 0)
{
lean_object* v_a_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; 
v_a_2152_ = lean_ctor_get(v___x_2151_, 0);
lean_inc(v_a_2152_);
lean_dec_ref(v___x_2151_);
v___x_2153_ = lean_array_get_size(v_a_2152_);
v___x_2154_ = lean_mk_empty_array_with_capacity(v___x_2153_);
v___x_2155_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(v_a_2152_, v___x_2153_, v___x_2069_, v___x_2154_, v___y_2147_, v___y_2148_);
if (lean_obj_tag(v___x_2155_) == 0)
{
lean_object* v_a_2156_; uint8_t v___x_2157_; lean_object* v___x_2158_; 
v_a_2156_ = lean_ctor_get(v___x_2155_, 0);
lean_inc(v_a_2156_);
lean_dec_ref(v___x_2155_);
v___x_2157_ = 0;
v___x_2158_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5(v_a_2156_, v___f_2139_, v___x_2157_, v___y_2141_, v___y_2142_, v___y_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v_fst_2160_; lean_object* v_snd_2161_; lean_object* v___x_2162_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
lean_inc(v_a_2159_);
lean_dec_ref(v___x_2158_);
v_fst_2160_ = lean_ctor_get(v_a_2159_, 0);
lean_inc(v_fst_2160_);
v_snd_2161_ = lean_ctor_get(v_a_2159_, 1);
lean_inc(v_snd_2161_);
lean_dec(v_a_2159_);
lean_inc_ref(v_revertArgs_2086_);
v___x_2162_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__6(v_sz_2149_, v___x_2150_, v_revertArgs_2086_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
lean_inc(v_a_2163_);
lean_dec_ref(v___x_2162_);
v___x_2164_ = lean_array_to_list(v_a_2163_);
v___x_2165_ = l_Lean_Meta_mkAndIntroN(v___x_2164_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_);
if (lean_obj_tag(v___x_2165_) == 0)
{
lean_object* v_a_2166_; uint8_t v___x_2167_; 
v_a_2166_ = lean_ctor_get(v___x_2165_, 0);
lean_inc(v_a_2166_);
lean_dec_ref(v___x_2165_);
v___x_2167_ = lean_nat_dec_lt(v___x_2069_, v___x_2153_);
if (v___x_2167_ == 0)
{
lean_dec(v_a_2152_);
lean_inc_ref(v_00_u03c3s_2072_);
v___y_2088_ = v___y_2146_;
v___y_2089_ = v___y_2147_;
v___y_2090_ = v___y_2141_;
v___y_2091_ = v___y_2144_;
v___y_2092_ = v___y_2143_;
v___y_2093_ = v_snd_2161_;
v___y_2094_ = v___y_2148_;
v___y_2095_ = v___y_2142_;
v___y_2096_ = v_a_2166_;
v___y_2097_ = v_fst_2160_;
v___y_2098_ = v___y_2145_;
v___y_2099_ = v_00_u03c3s_2072_;
goto v___jp_2087_;
}
else
{
size_t v___x_2168_; lean_object* v___x_2169_; 
v___x_2168_ = lean_usize_of_nat(v___x_2153_);
lean_inc_ref(v_00_u03c3s_2072_);
lean_inc(v_u_2071_);
v___x_2169_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__7(v_u_2071_, v_a_2152_, v___x_2168_, v___x_2150_, v_00_u03c3s_2072_);
lean_dec(v_a_2152_);
v___y_2088_ = v___y_2146_;
v___y_2089_ = v___y_2147_;
v___y_2090_ = v___y_2141_;
v___y_2091_ = v___y_2144_;
v___y_2092_ = v___y_2143_;
v___y_2093_ = v_snd_2161_;
v___y_2094_ = v___y_2148_;
v___y_2095_ = v___y_2142_;
v___y_2096_ = v_a_2166_;
v___y_2097_ = v_fst_2160_;
v___y_2098_ = v___y_2145_;
v___y_2099_ = v___x_2169_;
goto v___jp_2087_;
}
}
else
{
lean_dec(v_snd_2161_);
lean_dec(v_fst_2160_);
lean_dec(v_a_2152_);
lean_dec_ref(v_revertArgs_2086_);
lean_dec_ref(v_a_2082_);
lean_dec_ref(v_f_2079_);
lean_del_object(v___x_2076_);
lean_dec_ref(v_target_2074_);
lean_dec_ref(v_hyps_2073_);
lean_dec_ref(v_00_u03c3s_2072_);
lean_dec(v_u_2071_);
lean_dec_ref(v_k_2059_);
lean_dec(v_n_2057_);
return v___x_2165_;
}
}
else
{
lean_object* v_a_2170_; lean_object* v___x_2172_; uint8_t v_isShared_2173_; uint8_t v_isSharedCheck_2177_; 
lean_dec(v_snd_2161_);
lean_dec(v_fst_2160_);
lean_dec(v_a_2152_);
lean_dec_ref(v_revertArgs_2086_);
lean_dec_ref(v_a_2082_);
lean_dec_ref(v_f_2079_);
lean_del_object(v___x_2076_);
lean_dec_ref(v_target_2074_);
lean_dec_ref(v_hyps_2073_);
lean_dec_ref(v_00_u03c3s_2072_);
lean_dec(v_u_2071_);
lean_dec_ref(v_k_2059_);
lean_dec(v_n_2057_);
v_a_2170_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2172_ = v___x_2162_;
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
else
{
lean_inc(v_a_2170_);
lean_dec(v___x_2162_);
v___x_2172_ = lean_box(0);
v_isShared_2173_ = v_isSharedCheck_2177_;
goto v_resetjp_2171_;
}
v_resetjp_2171_:
{
lean_object* v___x_2175_; 
if (v_isShared_2173_ == 0)
{
v___x_2175_ = v___x_2172_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2170_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
}
}
else
{
lean_object* v_a_2178_; lean_object* v___x_2180_; uint8_t v_isShared_2181_; uint8_t v_isSharedCheck_2185_; 
lean_dec(v_a_2152_);
lean_dec_ref(v_revertArgs_2086_);
lean_dec_ref(v_a_2082_);
lean_dec_ref(v_f_2079_);
lean_del_object(v___x_2076_);
lean_dec_ref(v_target_2074_);
lean_dec_ref(v_hyps_2073_);
lean_dec_ref(v_00_u03c3s_2072_);
lean_dec(v_u_2071_);
lean_dec_ref(v_k_2059_);
lean_dec(v_n_2057_);
v_a_2178_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2185_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2180_ = v___x_2158_;
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
else
{
lean_inc(v_a_2178_);
lean_dec(v___x_2158_);
v___x_2180_ = lean_box(0);
v_isShared_2181_ = v_isSharedCheck_2185_;
goto v_resetjp_2179_;
}
v_resetjp_2179_:
{
lean_object* v___x_2183_; 
if (v_isShared_2181_ == 0)
{
v___x_2183_ = v___x_2180_;
goto v_reusejp_2182_;
}
else
{
lean_object* v_reuseFailAlloc_2184_; 
v_reuseFailAlloc_2184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2184_, 0, v_a_2178_);
v___x_2183_ = v_reuseFailAlloc_2184_;
goto v_reusejp_2182_;
}
v_reusejp_2182_:
{
return v___x_2183_;
}
}
}
}
else
{
lean_object* v_a_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2193_; 
lean_dec(v_a_2152_);
lean_dec_ref(v___f_2139_);
lean_dec_ref(v_revertArgs_2086_);
lean_dec_ref(v_a_2082_);
lean_dec_ref(v_f_2079_);
lean_del_object(v___x_2076_);
lean_dec_ref(v_target_2074_);
lean_dec_ref(v_hyps_2073_);
lean_dec_ref(v_00_u03c3s_2072_);
lean_dec(v_u_2071_);
lean_dec_ref(v_k_2059_);
lean_dec(v_n_2057_);
v_a_2186_ = lean_ctor_get(v___x_2155_, 0);
v_isSharedCheck_2193_ = !lean_is_exclusive(v___x_2155_);
if (v_isSharedCheck_2193_ == 0)
{
v___x_2188_ = v___x_2155_;
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_a_2186_);
lean_dec(v___x_2155_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2193_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2191_; 
if (v_isShared_2189_ == 0)
{
v___x_2191_ = v___x_2188_;
goto v_reusejp_2190_;
}
else
{
lean_object* v_reuseFailAlloc_2192_; 
v_reuseFailAlloc_2192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2192_, 0, v_a_2186_);
v___x_2191_ = v_reuseFailAlloc_2192_;
goto v_reusejp_2190_;
}
v_reusejp_2190_:
{
return v___x_2191_;
}
}
}
}
else
{
lean_object* v_a_2194_; lean_object* v___x_2196_; uint8_t v_isShared_2197_; uint8_t v_isSharedCheck_2201_; 
lean_dec_ref(v___f_2139_);
lean_dec_ref(v_revertArgs_2086_);
lean_dec_ref(v_a_2082_);
lean_dec_ref(v_f_2079_);
lean_del_object(v___x_2076_);
lean_dec_ref(v_target_2074_);
lean_dec_ref(v_hyps_2073_);
lean_dec_ref(v_00_u03c3s_2072_);
lean_dec(v_u_2071_);
lean_dec_ref(v_k_2059_);
lean_dec(v_n_2057_);
v_a_2194_ = lean_ctor_get(v___x_2151_, 0);
v_isSharedCheck_2201_ = !lean_is_exclusive(v___x_2151_);
if (v_isSharedCheck_2201_ == 0)
{
v___x_2196_ = v___x_2151_;
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
else
{
lean_inc(v_a_2194_);
lean_dec(v___x_2151_);
v___x_2196_ = lean_box(0);
v_isShared_2197_ = v_isSharedCheck_2201_;
goto v_resetjp_2195_;
}
v_resetjp_2195_:
{
lean_object* v___x_2199_; 
if (v_isShared_2197_ == 0)
{
v___x_2199_ = v___x_2196_;
goto v_reusejp_2198_;
}
else
{
lean_object* v_reuseFailAlloc_2200_; 
v_reuseFailAlloc_2200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2200_, 0, v_a_2194_);
v___x_2199_ = v_reuseFailAlloc_2200_;
goto v_reusejp_2198_;
}
v_reusejp_2198_:
{
return v___x_2199_;
}
}
}
}
}
}
else
{
lean_object* v___x_2229_; 
lean_dec(v_hypName_2058_);
lean_dec(v_n_2057_);
lean_inc(v___y_2067_);
lean_inc_ref(v___y_2066_);
lean_inc(v___y_2065_);
lean_inc_ref(v___y_2064_);
lean_inc(v___y_2063_);
lean_inc_ref(v___y_2062_);
lean_inc(v___y_2061_);
lean_inc_ref(v___y_2060_);
v___x_2229_ = lean_apply_10(v_k_2059_, v_goal_2056_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_, lean_box(0));
return v___x_2229_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1___boxed(lean_object* v_goal_2230_, lean_object* v_n_2231_, lean_object* v_hypName_2232_, lean_object* v_k_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_){
_start:
{
lean_object* v_res_2243_; 
v_res_2243_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(v_goal_2230_, v_n_2231_, v_hypName_2232_, v_k_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
lean_dec(v___y_2241_);
lean_dec_ref(v___y_2240_);
lean_dec(v___y_2239_);
lean_dec_ref(v___y_2238_);
lean_dec(v___y_2237_);
lean_dec_ref(v___y_2236_);
lean_dec(v___y_2235_);
lean_dec_ref(v___y_2234_);
return v_res_2243_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = lean_mk_string_unchecked("h", 1, 1);
return v___x_2244_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2245_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__0);
v___x_2246_ = l_Lean_Name_mkStr1(v___x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1(lean_object* v___x_2247_, lean_object* v_snd_2248_, lean_object* v___y_2249_, lean_object* v_fst_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_){
_start:
{
lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; 
v___x_2260_ = lean_st_ref_get(v___y_2258_);
lean_dec(v___x_2260_);
v___x_2261_ = lean_st_mk_ref(v___x_2247_);
v___x_2262_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___closed__1);
v___x_2263_ = l_Lean_Core_mkFreshUserName(v___x_2262_, v___y_2257_, v___y_2258_);
if (lean_obj_tag(v___x_2263_) == 0)
{
lean_object* v_a_2264_; lean_object* v___f_2265_; lean_object* v___x_2266_; 
v_a_2264_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_a_2264_);
lean_dec_ref(v___x_2263_);
lean_inc(v___x_2261_);
v___f_2265_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2265_, 0, v___x_2261_);
v___x_2266_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1(v_snd_2248_, v___y_2249_, v_a_2264_, v___f_2265_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; 
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_a_2267_);
lean_dec_ref(v___x_2266_);
v___x_2268_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_fst_2250_, v_a_2267_, v___y_2256_, v___y_2258_);
lean_dec_ref(v___x_2268_);
v___x_2269_ = lean_st_ref_get(v___y_2258_);
lean_dec(v___x_2269_);
v___x_2270_ = lean_st_ref_get(v___x_2261_);
lean_dec(v___x_2261_);
v___x_2271_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2270_, v___y_2252_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_);
return v___x_2271_;
}
else
{
lean_object* v_a_2272_; lean_object* v___x_2274_; uint8_t v_isShared_2275_; uint8_t v_isSharedCheck_2279_; 
lean_dec(v___x_2261_);
lean_dec(v_fst_2250_);
v_a_2272_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2274_ = v___x_2266_;
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
else
{
lean_inc(v_a_2272_);
lean_dec(v___x_2266_);
v___x_2274_ = lean_box(0);
v_isShared_2275_ = v_isSharedCheck_2279_;
goto v_resetjp_2273_;
}
v_resetjp_2273_:
{
lean_object* v___x_2277_; 
if (v_isShared_2275_ == 0)
{
v___x_2277_ = v___x_2274_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_a_2272_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
}
}
else
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2287_; 
lean_dec(v___x_2261_);
lean_dec(v_fst_2250_);
lean_dec(v___y_2249_);
lean_dec_ref(v_snd_2248_);
v_a_2280_ = lean_ctor_get(v___x_2263_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2263_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2282_ = v___x_2263_;
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2263_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2283_ == 0)
{
v___x_2285_ = v___x_2282_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2280_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___boxed(lean_object* v___x_2288_, lean_object* v_snd_2289_, lean_object* v___y_2290_, lean_object* v_fst_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1(v___x_2288_, v_snd_2289_, v___y_2290_, v_fst_2291_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v___y_2297_);
lean_dec_ref(v___y_2296_);
lean_dec(v___y_2295_);
lean_dec_ref(v___y_2294_);
lean_dec(v___y_2293_);
lean_dec_ref(v___y_2292_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3(lean_object* v___x_2302_, lean_object* v_val_2303_, lean_object* v_h_2304_, lean_object* v_a_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_){
_start:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___f_2317_; lean_object* v___x_2318_; 
v___x_2315_ = lean_st_ref_get(v___y_2313_);
lean_dec(v___x_2315_);
v___x_2316_ = lean_st_mk_ref(v___x_2302_);
lean_inc(v___x_2316_);
v___f_2317_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__0___boxed), 11, 1);
lean_closure_set(v___f_2317_, 0, v___x_2316_);
v___x_2318_ = l_Lean_Elab_Tactic_Do_ProofMode_mRevert___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__4(v_val_2303_, v_h_2304_, v___f_2317_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc(v_a_2319_);
lean_dec_ref(v___x_2318_);
v___x_2320_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_a_2305_, v_a_2319_, v___y_2311_, v___y_2313_);
lean_dec_ref(v___x_2320_);
v___x_2321_ = lean_st_ref_get(v___y_2313_);
lean_dec(v___x_2321_);
v___x_2322_ = lean_st_ref_get(v___x_2316_);
lean_dec(v___x_2316_);
v___x_2323_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_2322_, v___y_2307_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_);
return v___x_2323_;
}
else
{
lean_object* v_a_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2331_; 
lean_dec(v___x_2316_);
lean_dec(v_a_2305_);
v_a_2324_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2331_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2331_ == 0)
{
v___x_2326_ = v___x_2318_;
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_a_2324_);
lean_dec(v___x_2318_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2331_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2329_; 
if (v_isShared_2327_ == 0)
{
v___x_2329_ = v___x_2326_;
goto v_reusejp_2328_;
}
else
{
lean_object* v_reuseFailAlloc_2330_; 
v_reuseFailAlloc_2330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2330_, 0, v_a_2324_);
v___x_2329_ = v_reuseFailAlloc_2330_;
goto v_reusejp_2328_;
}
v_reusejp_2328_:
{
return v___x_2329_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3___boxed(lean_object* v___x_2332_, lean_object* v_val_2333_, lean_object* v_h_2334_, lean_object* v_a_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3(v___x_2332_, v_val_2333_, v_h_2334_, v_a_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v___y_2337_);
lean_dec_ref(v___y_2336_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(lean_object* v_msg_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
lean_object* v_ref_2352_; lean_object* v___x_2353_; lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2362_; 
v_ref_2352_ = lean_ctor_get(v___y_2349_, 5);
v___x_2353_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5_spec__14(v_msg_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_);
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2356_ = v___x_2353_;
v_isShared_2357_ = v_isSharedCheck_2362_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2353_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2362_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2358_; lean_object* v___x_2360_; 
lean_inc(v_ref_2352_);
v___x_2358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2358_, 0, v_ref_2352_);
lean_ctor_set(v___x_2358_, 1, v_a_2354_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 1);
lean_ctor_set(v___x_2356_, 0, v___x_2358_);
v___x_2360_ = v___x_2356_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v___x_2358_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg___boxed(lean_object* v_msg_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(v_msg_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
return v_res_2369_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0(void){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_2370_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1(void){
_start:
{
lean_object* v___x_2371_; 
v___x_2371_ = lean_mk_string_unchecked("Parser", 6, 6);
return v___x_2371_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2(void){
_start:
{
lean_object* v___x_2372_; 
v___x_2372_ = lean_mk_string_unchecked("mrevert", 7, 7);
return v___x_2372_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3(void){
_start:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2373_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__2);
v___x_2374_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0);
v___x_2375_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1);
v___x_2376_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0);
v___x_2377_ = l_Lean_Name_mkStr4(v___x_2376_, v___x_2375_, v___x_2374_, v___x_2373_);
return v___x_2377_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4(void){
_start:
{
lean_object* v___x_2378_; 
v___x_2378_ = lean_mk_string_unchecked("mrevertPat_", 11, 11);
return v___x_2378_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5(void){
_start:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; 
v___x_2379_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__4);
v___x_2380_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0);
v___x_2381_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1);
v___x_2382_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0);
v___x_2383_ = l_Lean_Name_mkStr4(v___x_2382_, v___x_2381_, v___x_2380_, v___x_2379_);
return v___x_2383_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6(void){
_start:
{
lean_object* v___x_2384_; 
v___x_2384_ = lean_mk_string_unchecked("mrevertPat∀_", 14, 12);
return v___x_2384_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7(void){
_start:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2385_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__6);
v___x_2386_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0);
v___x_2387_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__1);
v___x_2388_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0);
v___x_2389_ = l_Lean_Name_mkStr4(v___x_2388_, v___x_2387_, v___x_2386_, v___x_2385_);
return v___x_2389_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8(void){
_start:
{
lean_object* v___x_2390_; 
v___x_2390_ = lean_mk_string_unchecked("ident", 5, 5);
return v___x_2390_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9(void){
_start:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; 
v___x_2391_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__8);
v___x_2392_ = l_Lean_Name_mkStr1(v___x_2391_);
return v___x_2392_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10(void){
_start:
{
lean_object* v___x_2393_; 
v___x_2393_ = lean_mk_string_unchecked("Not in proof mode", 17, 17);
return v___x_2393_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11(void){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__10);
v___x_2395_ = l_Lean_stringToMessageData(v___x_2394_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert(lean_object* v_x_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_, lean_object* v_a_2403_, lean_object* v_a_2404_){
_start:
{
lean_object* v___y_2407_; lean_object* v___y_2408_; lean_object* v___y_2409_; lean_object* v___y_2410_; lean_object* v___y_2411_; lean_object* v___y_2412_; lean_object* v___y_2413_; lean_object* v___y_2414_; lean_object* v___y_2415_; lean_object* v___y_2416_; lean_object* v___y_2417_; lean_object* v___x_2421_; uint8_t v___x_2422_; 
v___x_2421_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3);
lean_inc(v_x_2396_);
v___x_2422_ = l_Lean_Syntax_isOfKind(v_x_2396_, v___x_2421_);
if (v___x_2422_ == 0)
{
lean_object* v___x_2423_; 
lean_dec(v_x_2396_);
v___x_2423_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2423_;
}
else
{
lean_object* v___x_2424_; lean_object* v_n_2426_; lean_object* v___y_2427_; lean_object* v___y_2428_; lean_object* v___y_2429_; lean_object* v___y_2430_; lean_object* v___y_2431_; lean_object* v___y_2432_; lean_object* v___y_2433_; lean_object* v___y_2434_; lean_object* v___x_2451_; uint8_t v___x_2452_; 
v___x_2424_ = lean_unsigned_to_nat(1u);
v___x_2451_ = l_Lean_Syntax_getArg(v_x_2396_, v___x_2424_);
lean_dec(v_x_2396_);
lean_inc(v___x_2451_);
v___x_2452_ = l_Lean_Syntax_matchesNull(v___x_2451_, v___x_2424_);
if (v___x_2452_ == 0)
{
lean_object* v___x_2453_; 
lean_dec(v___x_2451_);
v___x_2453_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2453_;
}
else
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; uint8_t v___x_2457_; 
v___x_2454_ = lean_unsigned_to_nat(0u);
v___x_2455_ = l_Lean_Syntax_getArg(v___x_2451_, v___x_2454_);
lean_dec(v___x_2451_);
v___x_2456_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__5);
lean_inc(v___x_2455_);
v___x_2457_ = l_Lean_Syntax_isOfKind(v___x_2455_, v___x_2456_);
if (v___x_2457_ == 0)
{
lean_object* v___x_2458_; uint8_t v___x_2459_; 
v___x_2458_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__7);
lean_inc(v___x_2455_);
v___x_2459_ = l_Lean_Syntax_isOfKind(v___x_2455_, v___x_2458_);
if (v___x_2459_ == 0)
{
lean_object* v___x_2460_; 
lean_dec(v___x_2455_);
v___x_2460_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2460_;
}
else
{
lean_object* v___x_2461_; uint8_t v___x_2462_; 
v___x_2461_ = l_Lean_Syntax_getArg(v___x_2455_, v___x_2424_);
lean_dec(v___x_2455_);
v___x_2462_ = l_Lean_Syntax_isNone(v___x_2461_);
if (v___x_2462_ == 0)
{
uint8_t v___x_2463_; 
lean_inc(v___x_2461_);
v___x_2463_ = l_Lean_Syntax_matchesNull(v___x_2461_, v___x_2424_);
if (v___x_2463_ == 0)
{
lean_object* v___x_2464_; 
lean_dec(v___x_2461_);
v___x_2464_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2464_;
}
else
{
lean_object* v_n_2465_; lean_object* v___x_2466_; 
v_n_2465_ = l_Lean_Syntax_getArg(v___x_2461_, v___x_2454_);
lean_dec(v___x_2461_);
v___x_2466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2466_, 0, v_n_2465_);
v_n_2426_ = v___x_2466_;
v___y_2427_ = v_a_2397_;
v___y_2428_ = v_a_2398_;
v___y_2429_ = v_a_2399_;
v___y_2430_ = v_a_2400_;
v___y_2431_ = v_a_2401_;
v___y_2432_ = v_a_2402_;
v___y_2433_ = v_a_2403_;
v___y_2434_ = v_a_2404_;
goto v___jp_2425_;
}
}
else
{
lean_object* v___x_2467_; 
lean_dec(v___x_2461_);
v___x_2467_ = lean_box(0);
v_n_2426_ = v___x_2467_;
v___y_2427_ = v_a_2397_;
v___y_2428_ = v_a_2398_;
v___y_2429_ = v_a_2399_;
v___y_2430_ = v_a_2400_;
v___y_2431_ = v_a_2401_;
v___y_2432_ = v_a_2402_;
v___y_2433_ = v_a_2403_;
v___y_2434_ = v_a_2404_;
goto v___jp_2425_;
}
}
}
else
{
lean_object* v_h_2468_; lean_object* v___x_2469_; uint8_t v___x_2470_; 
v_h_2468_ = l_Lean_Syntax_getArg(v___x_2455_, v___x_2454_);
lean_dec(v___x_2455_);
v___x_2469_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__9);
lean_inc(v_h_2468_);
v___x_2470_ = l_Lean_Syntax_isOfKind(v_h_2468_, v___x_2469_);
if (v___x_2470_ == 0)
{
lean_object* v___x_2471_; 
lean_dec(v_h_2468_);
v___x_2471_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__0___redArg();
return v___x_2471_;
}
else
{
lean_object* v___x_2472_; 
v___x_2472_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v_a_2398_, v_a_2401_, v_a_2402_, v_a_2403_, v_a_2404_);
if (lean_obj_tag(v___x_2472_) == 0)
{
lean_object* v_a_2473_; lean_object* v___x_2474_; 
v_a_2473_ = lean_ctor_get(v___x_2472_, 0);
lean_inc_n(v_a_2473_, 2);
lean_dec_ref(v___x_2472_);
v___x_2474_ = l_Lean_MVarId_getType(v_a_2473_, v_a_2401_, v_a_2402_, v_a_2403_, v_a_2404_);
if (lean_obj_tag(v___x_2474_) == 0)
{
lean_object* v_a_2475_; lean_object* v___x_2476_; 
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
lean_inc(v_a_2475_);
lean_dec_ref(v___x_2474_);
v___x_2476_ = l_Lean_Elab_Tactic_Do_ProofMode_parseMGoal_x3f(v_a_2475_);
lean_dec(v_a_2475_);
if (lean_obj_tag(v___x_2476_) == 1)
{
lean_object* v_val_2477_; lean_object* v___x_2478_; lean_object* v___f_2479_; lean_object* v___x_2480_; 
v_val_2477_ = lean_ctor_get(v___x_2476_, 0);
lean_inc(v_val_2477_);
lean_dec_ref(v___x_2476_);
v___x_2478_ = lean_box(0);
lean_inc(v_a_2473_);
v___f_2479_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__3___boxed), 13, 4);
lean_closure_set(v___f_2479_, 0, v___x_2478_);
lean_closure_set(v___f_2479_, 1, v_val_2477_);
lean_closure_set(v___f_2479_, 2, v_h_2468_);
lean_closure_set(v___f_2479_, 3, v_a_2473_);
v___x_2480_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v_a_2473_, v___f_2479_, v_a_2397_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_, v_a_2403_, v_a_2404_);
return v___x_2480_;
}
else
{
lean_object* v___x_2481_; lean_object* v___x_2482_; 
lean_dec(v___x_2476_);
lean_dec(v_a_2473_);
lean_dec(v_h_2468_);
v___x_2481_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__11);
v___x_2482_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(v___x_2481_, v_a_2401_, v_a_2402_, v_a_2403_, v_a_2404_);
return v___x_2482_;
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec(v_a_2473_);
lean_dec(v_h_2468_);
v_a_2483_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2474_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2474_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
lean_dec(v_h_2468_);
v_a_2491_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2472_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2472_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
}
}
}
v___jp_2425_:
{
lean_object* v___x_2435_; 
v___x_2435_ = l_Lean_Elab_Tactic_Do_ProofMode_mStartMainGoal___redArg(v___y_2428_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_);
if (lean_obj_tag(v___x_2435_) == 0)
{
lean_object* v_a_2436_; 
v_a_2436_ = lean_ctor_get(v___x_2435_, 0);
lean_inc(v_a_2436_);
lean_dec_ref(v___x_2435_);
if (lean_obj_tag(v_n_2426_) == 0)
{
lean_object* v_fst_2437_; lean_object* v_snd_2438_; 
v_fst_2437_ = lean_ctor_get(v_a_2436_, 0);
lean_inc(v_fst_2437_);
v_snd_2438_ = lean_ctor_get(v_a_2436_, 1);
lean_inc(v_snd_2438_);
lean_dec(v_a_2436_);
v___y_2407_ = v_snd_2438_;
v___y_2408_ = v_fst_2437_;
v___y_2409_ = v___y_2428_;
v___y_2410_ = v___y_2432_;
v___y_2411_ = v___y_2434_;
v___y_2412_ = v___y_2429_;
v___y_2413_ = v___y_2431_;
v___y_2414_ = v___y_2430_;
v___y_2415_ = v___y_2433_;
v___y_2416_ = v___y_2427_;
v___y_2417_ = v___x_2424_;
goto v___jp_2406_;
}
else
{
lean_object* v_fst_2439_; lean_object* v_snd_2440_; lean_object* v_val_2441_; lean_object* v___x_2442_; 
v_fst_2439_ = lean_ctor_get(v_a_2436_, 0);
lean_inc(v_fst_2439_);
v_snd_2440_ = lean_ctor_get(v_a_2436_, 1);
lean_inc(v_snd_2440_);
lean_dec(v_a_2436_);
v_val_2441_ = lean_ctor_get(v_n_2426_, 0);
lean_inc(v_val_2441_);
lean_dec_ref(v_n_2426_);
v___x_2442_ = l_Lean_TSyntax_getNat(v_val_2441_);
lean_dec(v_val_2441_);
v___y_2407_ = v_snd_2440_;
v___y_2408_ = v_fst_2439_;
v___y_2409_ = v___y_2428_;
v___y_2410_ = v___y_2432_;
v___y_2411_ = v___y_2434_;
v___y_2412_ = v___y_2429_;
v___y_2413_ = v___y_2431_;
v___y_2414_ = v___y_2430_;
v___y_2415_ = v___y_2433_;
v___y_2416_ = v___y_2427_;
v___y_2417_ = v___x_2442_;
goto v___jp_2406_;
}
}
else
{
lean_object* v_a_2443_; lean_object* v___x_2445_; uint8_t v_isShared_2446_; uint8_t v_isSharedCheck_2450_; 
lean_dec(v_n_2426_);
v_a_2443_ = lean_ctor_get(v___x_2435_, 0);
v_isSharedCheck_2450_ = !lean_is_exclusive(v___x_2435_);
if (v_isSharedCheck_2450_ == 0)
{
v___x_2445_ = v___x_2435_;
v_isShared_2446_ = v_isSharedCheck_2450_;
goto v_resetjp_2444_;
}
else
{
lean_inc(v_a_2443_);
lean_dec(v___x_2435_);
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
}
v___jp_2406_:
{
lean_object* v___x_2418_; lean_object* v___f_2419_; lean_object* v___x_2420_; 
v___x_2418_ = lean_box(0);
lean_inc(v___y_2408_);
v___f_2419_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___lam__1___boxed), 13, 4);
lean_closure_set(v___f_2419_, 0, v___x_2418_);
lean_closure_set(v___f_2419_, 1, v___y_2407_);
lean_closure_set(v___f_2419_, 2, v___y_2417_);
lean_closure_set(v___f_2419_, 3, v___y_2408_);
v___x_2420_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__3___redArg(v___y_2408_, v___f_2419_, v___y_2416_, v___y_2409_, v___y_2412_, v___y_2414_, v___y_2413_, v___y_2410_, v___y_2415_, v___y_2411_);
return v___x_2420_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___boxed(lean_object* v_x_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_, lean_object* v_a_2504_, lean_object* v_a_2505_, lean_object* v_a_2506_, lean_object* v_a_2507_, lean_object* v_a_2508_){
_start:
{
lean_object* v_res_2509_; 
v_res_2509_ = l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert(v_x_2499_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_, v_a_2504_, v_a_2505_, v_a_2506_, v_a_2507_);
lean_dec(v_a_2507_);
lean_dec_ref(v_a_2506_);
lean_dec(v_a_2505_);
lean_dec_ref(v_a_2504_);
lean_dec(v_a_2503_);
lean_dec_ref(v_a_2502_);
lean_dec(v_a_2501_);
lean_dec_ref(v_a_2500_);
return v_res_2509_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2(lean_object* v_mvarId_2510_, lean_object* v_val_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_){
_start:
{
lean_object* v___x_2521_; 
v___x_2521_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___redArg(v_mvarId_2510_, v_val_2511_, v___y_2517_, v___y_2519_);
return v___x_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2___boxed(lean_object* v_mvarId_2522_, lean_object* v_val_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2(v_mvarId_2522_, v_val_2523_, v___y_2524_, v___y_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_, v___y_2530_, v___y_2531_);
lean_dec(v___y_2531_);
lean_dec_ref(v___y_2530_);
lean_dec(v___y_2529_);
lean_dec_ref(v___y_2528_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
lean_dec(v___y_2525_);
lean_dec_ref(v___y_2524_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5(lean_object* v_00_u03b1_2534_, lean_object* v_msg_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_){
_start:
{
lean_object* v___x_2545_; 
v___x_2545_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___redArg(v_msg_2535_, v___y_2540_, v___y_2541_, v___y_2542_, v___y_2543_);
return v___x_2545_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5___boxed(lean_object* v_00_u03b1_2546_, lean_object* v_msg_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__5(v_00_u03b1_2546_, v_msg_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1(lean_object* v_inst_2558_, lean_object* v_R_2559_, lean_object* v_a_2560_, lean_object* v_b_2561_){
_start:
{
lean_object* v___x_2562_; 
v___x_2562_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__1___redArg(v_a_2560_, v_b_2561_);
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2(size_t v_sz_2563_, size_t v_i_2564_, lean_object* v_bs_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_){
_start:
{
lean_object* v___x_2575_; 
v___x_2575_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___redArg(v_sz_2563_, v_i_2564_, v_bs_2565_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2___boxed(lean_object* v_sz_2576_, lean_object* v_i_2577_, lean_object* v_bs_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
size_t v_sz_boxed_2588_; size_t v_i_boxed_2589_; lean_object* v_res_2590_; 
v_sz_boxed_2588_ = lean_unbox_usize(v_sz_2576_);
lean_dec(v_sz_2576_);
v_i_boxed_2589_ = lean_unbox_usize(v_i_2577_);
lean_dec(v_i_2577_);
v_res_2590_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__2(v_sz_boxed_2588_, v_i_boxed_2589_, v_bs_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
lean_dec(v___y_2584_);
lean_dec_ref(v___y_2583_);
lean_dec(v___y_2582_);
lean_dec_ref(v___y_2581_);
lean_dec(v___y_2580_);
lean_dec_ref(v___y_2579_);
return v_res_2590_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4(lean_object* v_as_2591_, lean_object* v_i_2592_, lean_object* v_j_2593_, lean_object* v_inv_2594_, lean_object* v_bs_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_, lean_object* v___y_2603_){
_start:
{
lean_object* v___x_2605_; 
v___x_2605_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___redArg(v_as_2591_, v_i_2592_, v_j_2593_, v_bs_2595_, v___y_2602_, v___y_2603_);
return v___x_2605_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4___boxed(lean_object* v_as_2606_, lean_object* v_i_2607_, lean_object* v_j_2608_, lean_object* v_inv_2609_, lean_object* v_bs_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_){
_start:
{
lean_object* v_res_2620_; 
v_res_2620_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__4(v_as_2606_, v_i_2607_, v_j_2608_, v_inv_2609_, v_bs_2610_, v___y_2611_, v___y_2612_, v___y_2613_, v___y_2614_, v___y_2615_, v___y_2616_, v___y_2617_, v___y_2618_);
lean_dec(v___y_2618_);
lean_dec_ref(v___y_2617_);
lean_dec(v___y_2616_);
lean_dec_ref(v___y_2615_);
lean_dec(v___y_2614_);
lean_dec_ref(v___y_2613_);
lean_dec(v___y_2612_);
lean_dec_ref(v___y_2611_);
lean_dec_ref(v_as_2606_);
return v_res_2620_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8(lean_object* v_00_u03b1_2621_, lean_object* v_msg_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
lean_object* v___x_2628_; 
v___x_2628_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___redArg(v_msg_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8___boxed(lean_object* v_00_u03b1_2629_, lean_object* v_msg_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_){
_start:
{
lean_object* v_res_2636_; 
v_res_2636_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__8(v_00_u03b1_2629_, v_msg_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_);
lean_dec(v___y_2634_);
lean_dec_ref(v___y_2633_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
return v_res_2636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10(lean_object* v_00_u03b2_2637_, lean_object* v_x_2638_, lean_object* v_x_2639_, lean_object* v_x_2640_){
_start:
{
lean_object* v___x_2641_; 
v___x_2641_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10___redArg(v_x_2638_, v_x_2639_, v_x_2640_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15(lean_object* v_00_u03b2_2642_, lean_object* v_x_2643_, size_t v_x_2644_, size_t v_x_2645_, lean_object* v_x_2646_, lean_object* v_x_2647_){
_start:
{
lean_object* v___x_2648_; 
v___x_2648_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___redArg(v_x_2643_, v_x_2644_, v_x_2645_, v_x_2646_, v_x_2647_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15___boxed(lean_object* v_00_u03b2_2649_, lean_object* v_x_2650_, lean_object* v_x_2651_, lean_object* v_x_2652_, lean_object* v_x_2653_, lean_object* v_x_2654_){
_start:
{
size_t v_x_23705__boxed_2655_; size_t v_x_23706__boxed_2656_; lean_object* v_res_2657_; 
v_x_23705__boxed_2655_ = lean_unbox_usize(v_x_2651_);
lean_dec(v_x_2651_);
v_x_23706__boxed_2656_ = lean_unbox_usize(v_x_2652_);
lean_dec(v_x_2652_);
v_res_2657_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15(v_00_u03b2_2649_, v_x_2650_, v_x_23705__boxed_2655_, v_x_23706__boxed_2656_, v_x_2653_, v_x_2654_);
return v_res_2657_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20(lean_object* v_00_u03b2_2658_, lean_object* v_n_2659_, lean_object* v_k_2660_, lean_object* v_v_2661_){
_start:
{
lean_object* v___x_2662_; 
v___x_2662_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20___redArg(v_n_2659_, v_k_2660_, v_v_2661_);
return v___x_2662_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21(lean_object* v_00_u03b2_2663_, size_t v_depth_2664_, lean_object* v_keys_2665_, lean_object* v_vals_2666_, lean_object* v_heq_2667_, lean_object* v_i_2668_, lean_object* v_entries_2669_){
_start:
{
lean_object* v___x_2670_; 
v___x_2670_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21___redArg(v_depth_2664_, v_keys_2665_, v_vals_2666_, v_i_2668_, v_entries_2669_);
return v___x_2670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21___boxed(lean_object* v_00_u03b2_2671_, lean_object* v_depth_2672_, lean_object* v_keys_2673_, lean_object* v_vals_2674_, lean_object* v_heq_2675_, lean_object* v_i_2676_, lean_object* v_entries_2677_){
_start:
{
size_t v_depth_boxed_2678_; lean_object* v_res_2679_; 
v_depth_boxed_2678_ = lean_unbox_usize(v_depth_2672_);
lean_dec(v_depth_2672_);
v_res_2679_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__21(v_00_u03b2_2671_, v_depth_boxed_2678_, v_keys_2673_, v_vals_2674_, v_heq_2675_, v_i_2676_, v_entries_2677_);
lean_dec_ref(v_vals_2674_);
lean_dec_ref(v_keys_2673_);
return v_res_2679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21(lean_object* v_00_u03b1_2680_, lean_object* v_name_2681_, uint8_t v_bi_2682_, lean_object* v_type_2683_, lean_object* v_k_2684_, uint8_t v_kind_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v___x_2695_; 
v___x_2695_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___redArg(v_name_2681_, v_bi_2682_, v_type_2683_, v_k_2684_, v_kind_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21___boxed(lean_object* v_00_u03b1_2696_, lean_object* v_name_2697_, lean_object* v_bi_2698_, lean_object* v_type_2699_, lean_object* v_k_2700_, lean_object* v_kind_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_){
_start:
{
uint8_t v_bi_boxed_2711_; uint8_t v_kind_boxed_2712_; lean_object* v_res_2713_; 
v_bi_boxed_2711_ = lean_unbox(v_bi_2698_);
v_kind_boxed_2712_ = lean_unbox(v_kind_2701_);
v_res_2713_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_Elab_Tactic_Do_ProofMode_mRevertForallN___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__1_spec__5_spec__9_spec__14_spec__19_spec__21(v_00_u03b1_2696_, v_name_2697_, v_bi_boxed_2711_, v_type_2699_, v_k_2700_, v_kind_boxed_2712_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
lean_dec(v___y_2709_);
lean_dec_ref(v___y_2708_);
lean_dec(v___y_2707_);
lean_dec_ref(v___y_2706_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20_spec__22(lean_object* v_00_u03b2_2714_, lean_object* v_x_2715_, lean_object* v_x_2716_, lean_object* v_x_2717_, lean_object* v_x_2718_){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_ProofMode_elabMRevert_spec__2_spec__10_spec__15_spec__20_spec__22___redArg(v_x_2715_, v_x_2716_, v_x_2717_, v_x_2718_);
return v___x_2719_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__0(void){
_start:
{
lean_object* v___x_2720_; 
v___x_2720_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_2720_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__1(void){
_start:
{
lean_object* v___x_2721_; 
v___x_2721_ = lean_mk_string_unchecked("ProofMode", 9, 9);
return v___x_2721_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__2(void){
_start:
{
lean_object* v___x_2722_; 
v___x_2722_ = lean_mk_string_unchecked("elabMRevert", 11, 11);
return v___x_2722_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3(void){
_start:
{
lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; 
v___x_2723_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__2, &l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__2);
v___x_2724_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__1, &l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__1);
v___x_2725_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__1___closed__1);
v___x_2726_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_mRevert___redArg___lam__0___closed__0);
v___x_2727_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__0, &l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__0);
v___x_2728_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__0);
v___x_2729_ = l_Lean_Name_mkStr6(v___x_2728_, v___x_2727_, v___x_2726_, v___x_2725_, v___x_2724_, v___x_2723_);
return v___x_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1(){
_start:
{
lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2733_; lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2731_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_2732_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3, &l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3_once, _init_l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___closed__3);
v___x_2733_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3, &l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___closed__3);
v___x_2734_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_ProofMode_elabMRevert___boxed), 10, 0);
v___x_2735_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2731_, v___x_2732_, v___x_2733_, v___x_2734_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1___boxed(lean_object* v_a_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1();
return v_res_2737_;
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
res = l___private_Lean_Elab_Tactic_Do_ProofMode_Revert_0__Lean_Elab_Tactic_Do_ProofMode_elabMRevert___regBuiltin_Lean_Elab_Tactic_Do_ProofMode_elabMRevert__1();
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
