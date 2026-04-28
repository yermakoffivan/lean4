// Lean compiler output
// Module: Lean.Meta.Tactic.Lets
// Imports: public import Lean.Meta.Tactic.Replace public import Lean.Meta.LetToHave
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
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAtomic(lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_isLet___boxed(lean_object*);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForallWithParamInfos(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instInhabitedExprParamInfo_default;
uint8_t l_Lean_BinderInfo_isExplicit(uint8_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LocalContext_contains(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_instBEqProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instHashableBool___lam__0___boxed(lean_object*);
lean_object* l_instHashableProd___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLet(lean_object*);
uint8_t l_Lean_Expr_isMData(lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_isImplementationDetail(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceLocalDeclDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Meta_withExistingLocalDecls___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_MVarId_withReverted___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2;
static lean_once_cell_t l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_instInhabitedState_default;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_instInhabitedState;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1;
static lean_once_cell_t l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_extractable(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractable___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_flushDecls___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_flushDecls___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0;
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1;
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2;
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3;
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4;
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5;
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6;
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7;
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8;
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_containsLet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_containsLet___closed__0;
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_containsLet(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_containsLet___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0;
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1;
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2;
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3;
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4;
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5;
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6;
static lean_once_cell_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3;
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2;
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1;
static lean_once_cell_t l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_liftLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_liftLets___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_extractLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLets___closed__0;
static lean_once_cell_t l_Lean_MVarId_extractLets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLets___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed(lean_object**);
static lean_once_cell_t l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0;
static lean_once_cell_t l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1;
static lean_once_cell_t l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2;
static lean_once_cell_t l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_liftLets___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_liftLets___closed__0;
static lean_once_cell_t l_Lean_MVarId_liftLets___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_liftLets___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_letToHave___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_letToHave___closed__0;
static lean_once_cell_t l_Lean_MVarId_letToHave___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_letToHave___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(0u);
v___x_2_ = lean_mk_empty_array_with_capacity(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = lean_box(0);
v___x_4_ = lean_unsigned_to_nat(16u);
v___x_5_ = lean_mk_array(v___x_4_, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2(void){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_6_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__1);
v___x_7_ = lean_unsigned_to_nat(0u);
v___x_8_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
lean_ctor_set(v___x_8_, 1, v___x_6_);
return v___x_8_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_9_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__2);
v___x_10_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0);
v___x_11_ = lean_box(0);
v___x_12_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_10_);
lean_ctor_set(v___x_12_, 2, v___x_9_);
return v___x_12_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState_default(void){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__3);
return v___x_13_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_instInhabitedState(void){
_start:
{
lean_object* v___x_14_; 
v___x_14_ = l_Lean_Meta_ExtractLets_instInhabitedState_default;
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg(lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; uint8_t v_onlyGivenNames_21_; 
v___x_19_ = lean_st_ref_get(v_a_17_);
lean_dec(v___x_19_);
v___x_20_ = lean_st_ref_get(v_a_16_);
v_onlyGivenNames_21_ = lean_ctor_get_uint8(v_a_15_, 8);
if (v_onlyGivenNames_21_ == 0)
{
uint8_t v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
lean_dec(v___x_20_);
v___x_22_ = 1;
v___x_23_ = lean_box(v___x_22_);
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
else
{
lean_object* v_givenNames_25_; uint8_t v___x_26_; 
v_givenNames_25_ = lean_ctor_get(v___x_20_, 0);
lean_inc(v_givenNames_25_);
lean_dec(v___x_20_);
v___x_26_ = l_List_isEmpty___redArg(v_givenNames_25_);
lean_dec(v_givenNames_25_);
if (v___x_26_ == 0)
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_box(v_onlyGivenNames_21_);
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
return v___x_28_;
}
else
{
uint8_t v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_29_ = 0;
v___x_30_ = lean_box(v___x_29_);
v___x_31_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_31_, 0, v___x_30_);
return v___x_31_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___redArg___boxed(lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_32_, v_a_33_, v_a_34_);
lean_dec(v_a_34_);
lean_dec(v_a_33_);
lean_dec_ref(v_a_32_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName(lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_37_, v_a_39_, v_a_43_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_hasNextName___boxed(lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_Meta_ExtractLets_hasNextName(v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec(v_a_47_);
lean_dec_ref(v_a_46_);
return v_res_54_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = lean_mk_string_unchecked("_", 1, 1);
return v___x_55_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; 
v___x_56_ = lean_obj_once(&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0, &l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0_once, _init_l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__0);
v___x_57_ = l_Lean_Name_mkStr1(v___x_56_);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2(void){
_start:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_obj_once(&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1, &l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_once, _init_l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1);
v___x_59_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_59_, 0, v___x_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg(lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v_givenNames_66_; 
v___x_64_ = lean_st_ref_get(v_a_62_);
lean_dec(v___x_64_);
v___x_65_ = lean_st_ref_get(v_a_61_);
v_givenNames_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc(v_givenNames_66_);
if (lean_obj_tag(v_givenNames_66_) == 0)
{
uint8_t v_onlyGivenNames_67_; 
lean_dec(v___x_65_);
v_onlyGivenNames_67_ = lean_ctor_get_uint8(v_a_60_, 8);
if (v_onlyGivenNames_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_68_ = lean_obj_once(&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2, &l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2_once, _init_l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__2);
v___x_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
else
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_box(0);
v___x_71_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
return v___x_71_;
}
}
else
{
lean_object* v_decls_72_; lean_object* v_valueMap_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_86_; 
v_decls_72_ = lean_ctor_get(v___x_65_, 1);
v_valueMap_73_ = lean_ctor_get(v___x_65_, 2);
v_isSharedCheck_86_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_86_ == 0)
{
lean_object* v_unused_87_; 
v_unused_87_ = lean_ctor_get(v___x_65_, 0);
lean_dec(v_unused_87_);
v___x_75_ = v___x_65_;
v_isShared_76_ = v_isSharedCheck_86_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_valueMap_73_);
lean_inc(v_decls_72_);
lean_dec(v___x_65_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_86_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v_head_77_; lean_object* v_tail_78_; lean_object* v___x_79_; lean_object* v___x_81_; 
v_head_77_ = lean_ctor_get(v_givenNames_66_, 0);
lean_inc(v_head_77_);
v_tail_78_ = lean_ctor_get(v_givenNames_66_, 1);
lean_inc(v_tail_78_);
lean_dec_ref(v_givenNames_66_);
v___x_79_ = lean_st_ref_get(v_a_62_);
lean_dec(v___x_79_);
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 0, v_tail_78_);
v___x_81_ = v___x_75_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_tail_78_);
lean_ctor_set(v_reuseFailAlloc_85_, 1, v_decls_72_);
lean_ctor_set(v_reuseFailAlloc_85_, 2, v_valueMap_73_);
v___x_81_ = v_reuseFailAlloc_85_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_82_ = lean_st_ref_set(v_a_61_, v___x_81_);
v___x_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_83_, 0, v_head_77_);
v___x_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_84_, 0, v___x_83_);
return v___x_84_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___redArg___boxed(lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_88_, v_a_89_, v_a_90_);
lean_dec(v_a_90_);
lean_dec(v_a_89_);
lean_dec_ref(v_a_88_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f(lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_93_, v_a_95_, v_a_99_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextName_x3f___boxed(lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_){
_start:
{
lean_object* v_res_110_; 
v_res_110_ = l_Lean_Meta_ExtractLets_nextName_x3f(v_a_102_, v_a_103_, v_a_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_a_106_);
lean_dec_ref(v_a_105_);
lean_dec(v_a_104_);
lean_dec(v_a_103_);
lean_dec_ref(v_a_102_);
return v_res_110_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_111_; 
v___x_111_ = lean_mk_string_unchecked("a", 1, 1);
return v___x_111_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_obj_once(&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0, &l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0_once, _init_l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__0);
v___x_113_ = l_Lean_Name_mkStr1(v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(lean_object* v_binderName_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_, lean_object* v_a_118_){
_start:
{
lean_object* v___x_120_; lean_object* v_a_121_; 
v___x_120_ = l_Lean_Meta_ExtractLets_nextName_x3f___redArg(v_a_115_, v_a_116_, v_a_118_);
v_a_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_a_121_);
if (lean_obj_tag(v_a_121_) == 1)
{
lean_object* v_val_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_172_; 
v_val_122_ = lean_ctor_get(v_a_121_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v_a_121_);
if (v_isSharedCheck_172_ == 0)
{
v___x_124_ = v_a_121_;
v_isShared_125_ = v_isSharedCheck_172_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_val_122_);
lean_dec(v_a_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_172_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_126_ = lean_obj_once(&l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1, &l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1_once, _init_l_Lean_Meta_ExtractLets_nextName_x3f___redArg___closed__1);
v___x_127_ = lean_name_eq(v_val_122_, v___x_126_);
if (v___x_127_ == 0)
{
lean_del_object(v___x_124_);
lean_dec(v_val_122_);
lean_dec(v_binderName_114_);
return v___x_120_;
}
else
{
uint8_t v___x_128_; 
v___x_128_ = l_Lean_Name_isAnonymous(v_binderName_114_);
if (v___x_128_ == 0)
{
uint8_t v_preserveBinderNames_129_; 
v_preserveBinderNames_129_ = lean_ctor_get_uint8(v_a_115_, 9);
if (v_preserveBinderNames_129_ == 0)
{
uint8_t v___x_130_; 
v___x_130_ = l_Lean_Name_hasMacroScopes(v_val_122_);
lean_dec(v_val_122_);
if (v___x_130_ == 0)
{
lean_object* v___x_131_; 
lean_dec_ref(v___x_120_);
v___x_131_ = l_Lean_Core_mkFreshUserName(v_binderName_114_, v_a_117_, v_a_118_);
if (lean_obj_tag(v___x_131_) == 0)
{
lean_object* v_a_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_142_; 
v_a_132_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_142_ == 0)
{
v___x_134_ = v___x_131_;
v_isShared_135_ = v_isSharedCheck_142_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_a_132_);
lean_dec(v___x_131_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_142_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v___x_137_; 
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v_a_132_);
v___x_137_ = v___x_124_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_a_132_);
v___x_137_ = v_reuseFailAlloc_141_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
lean_object* v___x_139_; 
if (v_isShared_135_ == 0)
{
lean_ctor_set(v___x_134_, 0, v___x_137_);
v___x_139_ = v___x_134_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
}
else
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
lean_del_object(v___x_124_);
v_a_143_ = lean_ctor_get(v___x_131_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_131_);
if (v_isSharedCheck_150_ == 0)
{
v___x_145_ = v___x_131_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_131_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
else
{
lean_del_object(v___x_124_);
lean_dec(v_binderName_114_);
return v___x_120_;
}
}
else
{
lean_del_object(v___x_124_);
lean_dec(v_val_122_);
lean_dec(v_binderName_114_);
return v___x_120_;
}
}
else
{
lean_object* v___x_151_; lean_object* v___x_152_; 
lean_dec(v_val_122_);
lean_dec_ref(v___x_120_);
lean_dec(v_binderName_114_);
v___x_151_ = lean_obj_once(&l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1, &l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1_once, _init_l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___closed__1);
v___x_152_ = l_Lean_Core_mkFreshUserName(v___x_151_, v_a_117_, v_a_118_);
if (lean_obj_tag(v___x_152_) == 0)
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_163_; 
v_a_153_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_163_ == 0)
{
v___x_155_ = v___x_152_;
v_isShared_156_ = v_isSharedCheck_163_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_152_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_163_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v_a_153_);
v___x_158_ = v___x_124_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_162_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_160_; 
if (v_isShared_156_ == 0)
{
lean_ctor_set(v___x_155_, 0, v___x_158_);
v___x_160_ = v___x_155_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v___x_158_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_del_object(v___x_124_);
v_a_164_ = lean_ctor_get(v___x_152_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_152_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_152_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_152_);
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
}
}
else
{
lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_180_; 
lean_dec(v_a_121_);
lean_dec(v_binderName_114_);
v_isSharedCheck_180_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_180_ == 0)
{
lean_object* v_unused_181_; 
v_unused_181_ = lean_ctor_get(v___x_120_, 0);
lean_dec(v_unused_181_);
v___x_174_ = v___x_120_;
v_isShared_175_ = v_isSharedCheck_180_;
goto v_resetjp_173_;
}
else
{
lean_dec(v___x_120_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_180_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_176_; lean_object* v___x_178_; 
v___x_176_ = lean_box(0);
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 0, v___x_176_);
v___x_178_ = v___x_174_;
goto v_reusejp_177_;
}
else
{
lean_object* v_reuseFailAlloc_179_; 
v_reuseFailAlloc_179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_179_, 0, v___x_176_);
v___x_178_ = v_reuseFailAlloc_179_;
goto v_reusejp_177_;
}
v_reusejp_177_:
{
return v___x_178_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg___boxed(lean_object* v_binderName_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_binderName_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(lean_object* v_binderName_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_binderName_189_, v_a_190_, v_a_192_, v_a_195_, v_a_196_);
return v___x_198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___boxed(lean_object* v_binderName_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f(v_binderName_199_, v_a_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_, v_a_205_, v_a_206_);
lean_dec(v_a_206_);
lean_dec_ref(v_a_205_);
lean_dec(v_a_204_);
lean_dec_ref(v_a_203_);
lean_dec(v_a_202_);
lean_dec(v_a_201_);
lean_dec_ref(v_a_200_);
return v_res_208_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(lean_object* v_a_209_, lean_object* v_x_210_){
_start:
{
if (lean_obj_tag(v_x_210_) == 0)
{
uint8_t v___x_211_; 
v___x_211_ = 0;
return v___x_211_;
}
else
{
lean_object* v_head_212_; lean_object* v_tail_213_; uint8_t v___x_214_; 
v_head_212_ = lean_ctor_get(v_x_210_, 0);
v_tail_213_ = lean_ctor_get(v_x_210_, 1);
v___x_214_ = lean_expr_eqv(v_a_209_, v_head_212_);
if (v___x_214_ == 0)
{
v_x_210_ = v_tail_213_;
goto _start;
}
else
{
return v___x_214_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0___boxed(lean_object* v_a_216_, lean_object* v_x_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(v_a_216_, v_x_217_);
lean_dec(v_x_217_);
lean_dec_ref(v_a_216_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(lean_object* v_fvars_220_, lean_object* v_e_221_){
_start:
{
uint8_t v___x_222_; lean_object* v_d_224_; lean_object* v_b_225_; 
v___x_222_ = l_Lean_Expr_hasFVar(v_e_221_);
if (v___x_222_ == 0)
{
lean_dec_ref(v_e_221_);
return v___x_222_;
}
else
{
switch(lean_obj_tag(v_e_221_))
{
case 7:
{
lean_object* v_binderType_228_; lean_object* v_body_229_; 
v_binderType_228_ = lean_ctor_get(v_e_221_, 1);
lean_inc_ref(v_binderType_228_);
v_body_229_ = lean_ctor_get(v_e_221_, 2);
lean_inc_ref(v_body_229_);
lean_dec_ref(v_e_221_);
v_d_224_ = v_binderType_228_;
v_b_225_ = v_body_229_;
goto v___jp_223_;
}
case 6:
{
lean_object* v_binderType_230_; lean_object* v_body_231_; 
v_binderType_230_ = lean_ctor_get(v_e_221_, 1);
lean_inc_ref(v_binderType_230_);
v_body_231_ = lean_ctor_get(v_e_221_, 2);
lean_inc_ref(v_body_231_);
lean_dec_ref(v_e_221_);
v_d_224_ = v_binderType_230_;
v_b_225_ = v_body_231_;
goto v___jp_223_;
}
case 10:
{
lean_object* v_expr_232_; 
v_expr_232_ = lean_ctor_get(v_e_221_, 1);
lean_inc_ref(v_expr_232_);
lean_dec_ref(v_e_221_);
v_e_221_ = v_expr_232_;
goto _start;
}
case 8:
{
lean_object* v_type_234_; lean_object* v_value_235_; lean_object* v_body_236_; uint8_t v___x_237_; 
v_type_234_ = lean_ctor_get(v_e_221_, 1);
lean_inc_ref(v_type_234_);
v_value_235_ = lean_ctor_get(v_e_221_, 2);
lean_inc_ref(v_value_235_);
v_body_236_ = lean_ctor_get(v_e_221_, 3);
lean_inc_ref(v_body_236_);
lean_dec_ref(v_e_221_);
v___x_237_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_220_, v_type_234_);
if (v___x_237_ == 0)
{
uint8_t v___x_238_; 
v___x_238_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_220_, v_value_235_);
if (v___x_238_ == 0)
{
v_e_221_ = v_body_236_;
goto _start;
}
else
{
lean_dec_ref(v_body_236_);
return v___x_222_;
}
}
else
{
lean_dec_ref(v_body_236_);
lean_dec_ref(v_value_235_);
return v___x_222_;
}
}
case 5:
{
lean_object* v_fn_240_; lean_object* v_arg_241_; uint8_t v___x_242_; 
v_fn_240_ = lean_ctor_get(v_e_221_, 0);
lean_inc_ref(v_fn_240_);
v_arg_241_ = lean_ctor_get(v_e_221_, 1);
lean_inc_ref(v_arg_241_);
lean_dec_ref(v_e_221_);
v___x_242_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_220_, v_fn_240_);
if (v___x_242_ == 0)
{
v_e_221_ = v_arg_241_;
goto _start;
}
else
{
lean_dec_ref(v_arg_241_);
return v___x_222_;
}
}
case 11:
{
lean_object* v_struct_244_; 
v_struct_244_ = lean_ctor_get(v_e_221_, 2);
lean_inc_ref(v_struct_244_);
lean_dec_ref(v_e_221_);
v_e_221_ = v_struct_244_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_246_; lean_object* v___x_247_; uint8_t v___x_248_; 
v_fvarId_246_ = lean_ctor_get(v_e_221_, 0);
lean_inc(v_fvarId_246_);
lean_dec_ref(v_e_221_);
v___x_247_ = l_Lean_Expr_fvar___override(v_fvarId_246_);
v___x_248_ = l_List_elem___at___00Lean_Meta_ExtractLets_extractable_spec__0(v___x_247_, v_fvars_220_);
lean_dec_ref(v___x_247_);
return v___x_248_;
}
default: 
{
uint8_t v___x_249_; 
lean_dec_ref(v_e_221_);
v___x_249_ = 0;
return v___x_249_;
}
}
}
v___jp_223_:
{
uint8_t v___x_226_; 
v___x_226_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_220_, v_d_224_);
if (v___x_226_ == 0)
{
v_e_221_ = v_b_225_;
goto _start;
}
else
{
lean_dec_ref(v_b_225_);
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1___boxed(lean_object* v_fvars_250_, lean_object* v_e_251_){
_start:
{
uint8_t v_res_252_; lean_object* v_r_253_; 
v_res_252_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_250_, v_e_251_);
lean_dec(v_fvars_250_);
v_r_253_ = lean_box(v_res_252_);
return v_r_253_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_extractable(lean_object* v_fvars_254_, lean_object* v_e_255_){
_start:
{
uint8_t v___x_256_; 
v___x_256_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_extractable_spec__1(v_fvars_254_, v_e_255_);
if (v___x_256_ == 0)
{
uint8_t v___x_257_; 
v___x_257_ = 1;
return v___x_257_;
}
else
{
uint8_t v___x_258_; 
v___x_258_ = 0;
return v___x_258_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractable___boxed(lean_object* v_fvars_259_, lean_object* v_e_260_){
_start:
{
uint8_t v_res_261_; lean_object* v_r_262_; 
v_res_261_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_259_, v_e_260_);
lean_dec(v_fvars_259_);
v_r_262_ = lean_box(v_res_261_);
return v_r_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg(lean_object* v_fvars_263_, lean_object* v_n_264_, lean_object* v_t_265_, lean_object* v_v_266_, lean_object* v_a_267_, lean_object* v_a_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
lean_object* v___y_273_; lean_object* v___x_278_; lean_object* v_a_279_; uint8_t v___x_280_; 
v___x_278_ = l_Lean_Meta_ExtractLets_hasNextName___redArg(v_a_267_, v_a_268_, v_a_270_);
v_a_279_ = lean_ctor_get(v___x_278_, 0);
lean_inc(v_a_279_);
lean_dec_ref(v___x_278_);
v___x_280_ = lean_unbox(v_a_279_);
lean_dec(v_a_279_);
if (v___x_280_ == 0)
{
lean_dec_ref(v_v_266_);
lean_dec_ref(v_t_265_);
v___y_273_ = v_a_267_;
goto v___jp_272_;
}
else
{
uint8_t v___x_281_; 
v___x_281_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_263_, v_t_265_);
if (v___x_281_ == 0)
{
lean_dec_ref(v_v_266_);
v___y_273_ = v_a_267_;
goto v___jp_272_;
}
else
{
uint8_t v___x_282_; 
v___x_282_ = l_Lean_Meta_ExtractLets_extractable(v_fvars_263_, v_v_266_);
if (v___x_282_ == 0)
{
v___y_273_ = v_a_267_;
goto v___jp_272_;
}
else
{
lean_object* v___x_283_; 
lean_inc(v_n_264_);
v___x_283_ = l_Lean_Meta_ExtractLets_nextNameForBinderName_x3f___redArg(v_n_264_, v_a_267_, v_a_268_, v_a_269_, v_a_270_);
if (lean_obj_tag(v___x_283_) == 0)
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_294_; 
v_a_284_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_294_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_294_ == 0)
{
v___x_286_ = v___x_283_;
v_isShared_287_ = v_isSharedCheck_294_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___x_283_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_294_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
if (lean_obj_tag(v_a_284_) == 1)
{
lean_object* v_val_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_292_; 
lean_dec(v_n_264_);
v_val_288_ = lean_ctor_get(v_a_284_, 0);
lean_inc(v_val_288_);
lean_dec_ref(v_a_284_);
v___x_289_ = lean_box(v___x_281_);
v___x_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v_val_288_);
if (v_isShared_287_ == 0)
{
lean_ctor_set(v___x_286_, 0, v___x_290_);
v___x_292_ = v___x_286_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v___x_290_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
return v___x_292_;
}
}
else
{
lean_del_object(v___x_286_);
lean_dec(v_a_284_);
v___y_273_ = v_a_267_;
goto v___jp_272_;
}
}
}
else
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_302_; 
lean_dec(v_n_264_);
v_a_295_ = lean_ctor_get(v___x_283_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_283_);
if (v_isSharedCheck_302_ == 0)
{
v___x_297_ = v___x_283_;
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_283_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_302_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_300_; 
if (v_isShared_298_ == 0)
{
v___x_300_ = v___x_297_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_a_295_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
}
}
v___jp_272_:
{
uint8_t v_lift_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v_lift_274_ = lean_ctor_get_uint8(v___y_273_, 10);
v___x_275_ = lean_box(v_lift_274_);
v___x_276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v_n_264_);
v___x_277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
return v___x_277_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___redArg___boxed(lean_object* v_fvars_303_, lean_object* v_n_304_, lean_object* v_t_305_, lean_object* v_v_306_, lean_object* v_a_307_, lean_object* v_a_308_, lean_object* v_a_309_, lean_object* v_a_310_, lean_object* v_a_311_){
_start:
{
lean_object* v_res_312_; 
v_res_312_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_303_, v_n_304_, v_t_305_, v_v_306_, v_a_307_, v_a_308_, v_a_309_, v_a_310_);
lean_dec(v_a_310_);
lean_dec_ref(v_a_309_);
lean_dec(v_a_308_);
lean_dec_ref(v_a_307_);
lean_dec(v_fvars_303_);
return v_res_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet(lean_object* v_fvars_313_, lean_object* v_n_314_, lean_object* v_t_315_, lean_object* v_v_316_, lean_object* v_a_317_, lean_object* v_a_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_313_, v_n_314_, v_t_315_, v_v_316_, v_a_317_, v_a_319_, v_a_322_, v_a_323_);
return v___x_325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_isExtractableLet___boxed(lean_object* v_fvars_326_, lean_object* v_n_327_, lean_object* v_t_328_, lean_object* v_v_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_Meta_ExtractLets_isExtractableLet(v_fvars_326_, v_n_327_, v_t_328_, v_v_329_, v_a_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, v_a_336_);
lean_dec(v_a_336_);
lean_dec_ref(v_a_335_);
lean_dec(v_a_334_);
lean_dec_ref(v_a_333_);
lean_dec(v_a_332_);
lean_dec(v_a_331_);
lean_dec_ref(v_a_330_);
lean_dec(v_fvars_326_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(lean_object* v_a_339_, lean_object* v_b_340_, lean_object* v_x_341_){
_start:
{
if (lean_obj_tag(v_x_341_) == 0)
{
lean_dec(v_b_340_);
lean_dec_ref(v_a_339_);
return v_x_341_;
}
else
{
lean_object* v_key_342_; lean_object* v_value_343_; lean_object* v_tail_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_356_; 
v_key_342_ = lean_ctor_get(v_x_341_, 0);
v_value_343_ = lean_ctor_get(v_x_341_, 1);
v_tail_344_ = lean_ctor_get(v_x_341_, 2);
v_isSharedCheck_356_ = !lean_is_exclusive(v_x_341_);
if (v_isSharedCheck_356_ == 0)
{
v___x_346_ = v_x_341_;
v_isShared_347_ = v_isSharedCheck_356_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_tail_344_);
lean_inc(v_value_343_);
lean_inc(v_key_342_);
lean_dec(v_x_341_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_356_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
uint8_t v___x_348_; 
v___x_348_ = l_Lean_ExprStructEq_beq(v_key_342_, v_a_339_);
if (v___x_348_ == 0)
{
lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_349_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_339_, v_b_340_, v_tail_344_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 2, v___x_349_);
v___x_351_ = v___x_346_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_key_342_);
lean_ctor_set(v_reuseFailAlloc_352_, 1, v_value_343_);
lean_ctor_set(v_reuseFailAlloc_352_, 2, v___x_349_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
else
{
lean_object* v___x_354_; 
lean_dec(v_value_343_);
lean_dec(v_key_342_);
if (v_isShared_347_ == 0)
{
lean_ctor_set(v___x_346_, 1, v_b_340_);
lean_ctor_set(v___x_346_, 0, v_a_339_);
v___x_354_ = v___x_346_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v_a_339_);
lean_ctor_set(v_reuseFailAlloc_355_, 1, v_b_340_);
lean_ctor_set(v_reuseFailAlloc_355_, 2, v_tail_344_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_357_, lean_object* v_x_358_){
_start:
{
if (lean_obj_tag(v_x_358_) == 0)
{
return v_x_357_;
}
else
{
lean_object* v_key_359_; lean_object* v_value_360_; lean_object* v_tail_361_; lean_object* v___x_363_; uint8_t v_isShared_364_; uint8_t v_isSharedCheck_384_; 
v_key_359_ = lean_ctor_get(v_x_358_, 0);
v_value_360_ = lean_ctor_get(v_x_358_, 1);
v_tail_361_ = lean_ctor_get(v_x_358_, 2);
v_isSharedCheck_384_ = !lean_is_exclusive(v_x_358_);
if (v_isSharedCheck_384_ == 0)
{
v___x_363_ = v_x_358_;
v_isShared_364_ = v_isSharedCheck_384_;
goto v_resetjp_362_;
}
else
{
lean_inc(v_tail_361_);
lean_inc(v_value_360_);
lean_inc(v_key_359_);
lean_dec(v_x_358_);
v___x_363_ = lean_box(0);
v_isShared_364_ = v_isSharedCheck_384_;
goto v_resetjp_362_;
}
v_resetjp_362_:
{
lean_object* v___x_365_; uint64_t v___x_366_; uint64_t v___x_367_; uint64_t v___x_368_; uint64_t v_fold_369_; uint64_t v___x_370_; uint64_t v___x_371_; uint64_t v___x_372_; size_t v___x_373_; size_t v___x_374_; size_t v___x_375_; size_t v___x_376_; size_t v___x_377_; lean_object* v___x_378_; lean_object* v___x_380_; 
v___x_365_ = lean_array_get_size(v_x_357_);
v___x_366_ = l_Lean_ExprStructEq_hash(v_key_359_);
v___x_367_ = 32ULL;
v___x_368_ = lean_uint64_shift_right(v___x_366_, v___x_367_);
v_fold_369_ = lean_uint64_xor(v___x_366_, v___x_368_);
v___x_370_ = 16ULL;
v___x_371_ = lean_uint64_shift_right(v_fold_369_, v___x_370_);
v___x_372_ = lean_uint64_xor(v_fold_369_, v___x_371_);
v___x_373_ = lean_uint64_to_usize(v___x_372_);
v___x_374_ = lean_usize_of_nat(v___x_365_);
v___x_375_ = ((size_t)1ULL);
v___x_376_ = lean_usize_sub(v___x_374_, v___x_375_);
v___x_377_ = lean_usize_land(v___x_373_, v___x_376_);
v___x_378_ = lean_array_uget_borrowed(v_x_357_, v___x_377_);
lean_inc(v___x_378_);
if (v_isShared_364_ == 0)
{
lean_ctor_set(v___x_363_, 2, v___x_378_);
v___x_380_ = v___x_363_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_key_359_);
lean_ctor_set(v_reuseFailAlloc_383_, 1, v_value_360_);
lean_ctor_set(v_reuseFailAlloc_383_, 2, v___x_378_);
v___x_380_ = v_reuseFailAlloc_383_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
lean_object* v___x_381_; 
v___x_381_ = lean_array_uset(v_x_357_, v___x_377_, v___x_380_);
v_x_357_ = v___x_381_;
v_x_358_ = v_tail_361_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(lean_object* v_i_385_, lean_object* v_source_386_, lean_object* v_target_387_){
_start:
{
lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_388_ = lean_array_get_size(v_source_386_);
v___x_389_ = lean_nat_dec_lt(v_i_385_, v___x_388_);
if (v___x_389_ == 0)
{
lean_dec_ref(v_source_386_);
lean_dec(v_i_385_);
return v_target_387_;
}
else
{
lean_object* v_es_390_; lean_object* v___x_391_; lean_object* v_source_392_; lean_object* v_target_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v_es_390_ = lean_array_fget(v_source_386_, v_i_385_);
v___x_391_ = lean_box(0);
v_source_392_ = lean_array_fset(v_source_386_, v_i_385_, v___x_391_);
v_target_393_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(v_target_387_, v_es_390_);
v___x_394_ = lean_unsigned_to_nat(1u);
v___x_395_ = lean_nat_add(v_i_385_, v___x_394_);
lean_dec(v_i_385_);
v_i_385_ = v___x_395_;
v_source_386_ = v_source_392_;
v_target_387_ = v_target_393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(lean_object* v_data_397_){
_start:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v_nbuckets_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_398_ = lean_array_get_size(v_data_397_);
v___x_399_ = lean_unsigned_to_nat(2u);
v_nbuckets_400_ = lean_nat_mul(v___x_398_, v___x_399_);
v___x_401_ = lean_unsigned_to_nat(0u);
v___x_402_ = lean_box(0);
v___x_403_ = lean_mk_array(v_nbuckets_400_, v___x_402_);
v___x_404_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(v___x_401_, v_data_397_, v___x_403_);
return v___x_404_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(lean_object* v_a_405_, lean_object* v_x_406_){
_start:
{
if (lean_obj_tag(v_x_406_) == 0)
{
uint8_t v___x_407_; 
v___x_407_ = 0;
return v___x_407_;
}
else
{
lean_object* v_key_408_; lean_object* v_tail_409_; uint8_t v___x_410_; 
v_key_408_ = lean_ctor_get(v_x_406_, 0);
v_tail_409_ = lean_ctor_get(v_x_406_, 2);
v___x_410_ = l_Lean_ExprStructEq_beq(v_key_408_, v_a_405_);
if (v___x_410_ == 0)
{
v_x_406_ = v_tail_409_;
goto _start;
}
else
{
return v___x_410_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg___boxed(lean_object* v_a_412_, lean_object* v_x_413_){
_start:
{
uint8_t v_res_414_; lean_object* v_r_415_; 
v_res_414_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_412_, v_x_413_);
lean_dec(v_x_413_);
lean_dec_ref(v_a_412_);
v_r_415_ = lean_box(v_res_414_);
return v_r_415_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(lean_object* v_m_416_, lean_object* v_a_417_, lean_object* v_b_418_){
_start:
{
lean_object* v_size_419_; lean_object* v_buckets_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_463_; 
v_size_419_ = lean_ctor_get(v_m_416_, 0);
v_buckets_420_ = lean_ctor_get(v_m_416_, 1);
v_isSharedCheck_463_ = !lean_is_exclusive(v_m_416_);
if (v_isSharedCheck_463_ == 0)
{
v___x_422_ = v_m_416_;
v_isShared_423_ = v_isSharedCheck_463_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_buckets_420_);
lean_inc(v_size_419_);
lean_dec(v_m_416_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_463_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; uint64_t v___x_425_; uint64_t v___x_426_; uint64_t v___x_427_; uint64_t v_fold_428_; uint64_t v___x_429_; uint64_t v___x_430_; uint64_t v___x_431_; size_t v___x_432_; size_t v___x_433_; size_t v___x_434_; size_t v___x_435_; size_t v___x_436_; lean_object* v_bkt_437_; uint8_t v___x_438_; 
v___x_424_ = lean_array_get_size(v_buckets_420_);
v___x_425_ = l_Lean_ExprStructEq_hash(v_a_417_);
v___x_426_ = 32ULL;
v___x_427_ = lean_uint64_shift_right(v___x_425_, v___x_426_);
v_fold_428_ = lean_uint64_xor(v___x_425_, v___x_427_);
v___x_429_ = 16ULL;
v___x_430_ = lean_uint64_shift_right(v_fold_428_, v___x_429_);
v___x_431_ = lean_uint64_xor(v_fold_428_, v___x_430_);
v___x_432_ = lean_uint64_to_usize(v___x_431_);
v___x_433_ = lean_usize_of_nat(v___x_424_);
v___x_434_ = ((size_t)1ULL);
v___x_435_ = lean_usize_sub(v___x_433_, v___x_434_);
v___x_436_ = lean_usize_land(v___x_432_, v___x_435_);
v_bkt_437_ = lean_array_uget_borrowed(v_buckets_420_, v___x_436_);
v___x_438_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_417_, v_bkt_437_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; lean_object* v_size_x27_440_; lean_object* v___x_441_; lean_object* v_buckets_x27_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_439_ = lean_unsigned_to_nat(1u);
v_size_x27_440_ = lean_nat_add(v_size_419_, v___x_439_);
lean_dec(v_size_419_);
lean_inc(v_bkt_437_);
v___x_441_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_441_, 0, v_a_417_);
lean_ctor_set(v___x_441_, 1, v_b_418_);
lean_ctor_set(v___x_441_, 2, v_bkt_437_);
v_buckets_x27_442_ = lean_array_uset(v_buckets_420_, v___x_436_, v___x_441_);
v___x_443_ = lean_unsigned_to_nat(4u);
v___x_444_ = lean_nat_mul(v_size_x27_440_, v___x_443_);
v___x_445_ = lean_unsigned_to_nat(3u);
v___x_446_ = lean_nat_div(v___x_444_, v___x_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_array_get_size(v_buckets_x27_442_);
v___x_448_ = lean_nat_dec_le(v___x_446_, v___x_447_);
lean_dec(v___x_446_);
if (v___x_448_ == 0)
{
lean_object* v_val_449_; lean_object* v___x_451_; 
v_val_449_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(v_buckets_x27_442_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 1, v_val_449_);
lean_ctor_set(v___x_422_, 0, v_size_x27_440_);
v___x_451_ = v___x_422_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_size_x27_440_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_val_449_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
else
{
lean_object* v___x_454_; 
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 1, v_buckets_x27_442_);
lean_ctor_set(v___x_422_, 0, v_size_x27_440_);
v___x_454_ = v___x_422_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_size_x27_440_);
lean_ctor_set(v_reuseFailAlloc_455_, 1, v_buckets_x27_442_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
}
else
{
lean_object* v___x_456_; lean_object* v_buckets_x27_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_461_; 
lean_inc(v_bkt_437_);
v___x_456_ = lean_box(0);
v_buckets_x27_457_ = lean_array_uset(v_buckets_420_, v___x_436_, v___x_456_);
v___x_458_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_417_, v_b_418_, v_bkt_437_);
v___x_459_ = lean_array_uset(v_buckets_x27_457_, v___x_436_, v___x_458_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 1, v___x_459_);
v___x_461_ = v___x_422_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v_size_419_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v___x_459_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg(lean_object* v_decl_464_, uint8_t v_isLet_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v_fst_473_; lean_object* v_snd_474_; lean_object* v_givenNames_477_; lean_object* v_decls_478_; lean_object* v_valueMap_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_497_; 
v___x_470_ = lean_st_ref_get(v_a_468_);
lean_dec(v___x_470_);
v___x_471_ = lean_st_ref_take(v_a_467_);
v_givenNames_477_ = lean_ctor_get(v___x_471_, 0);
v_decls_478_ = lean_ctor_get(v___x_471_, 1);
v_valueMap_479_ = lean_ctor_get(v___x_471_, 2);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_497_ == 0)
{
v___x_481_ = v___x_471_;
v_isShared_482_ = v_isSharedCheck_497_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_valueMap_479_);
lean_inc(v_decls_478_);
lean_inc(v_givenNames_477_);
lean_dec(v___x_471_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_497_;
goto v_resetjp_480_;
}
v___jp_472_:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_st_ref_set(v_a_467_, v_snd_474_);
v___x_476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_476_, 0, v_fst_473_);
return v___x_476_;
}
v_resetjp_480_:
{
uint8_t v_merge_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v_merge_483_ = lean_ctor_get_uint8(v_a_466_, 6);
v___x_484_ = lean_box(0);
lean_inc_ref(v_decl_464_);
v___x_485_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_485_, 0, v_decl_464_);
lean_ctor_set_uint8(v___x_485_, sizeof(void*)*1, v_isLet_465_);
v___x_486_ = lean_array_push(v_decls_478_, v___x_485_);
if (v_merge_483_ == 0)
{
lean_object* v___x_488_; 
lean_dec_ref(v_decl_464_);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 1, v___x_486_);
v___x_488_ = v___x_481_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v_givenNames_477_);
lean_ctor_set(v_reuseFailAlloc_489_, 1, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_489_, 2, v_valueMap_479_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
v_fst_473_ = v___x_484_;
v_snd_474_ = v___x_488_;
goto v___jp_472_;
}
}
else
{
uint8_t v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_495_; 
v___x_490_ = 0;
v___x_491_ = l_Lean_LocalDecl_value(v_decl_464_, v___x_490_);
v___x_492_ = l_Lean_LocalDecl_fvarId(v_decl_464_);
lean_dec_ref(v_decl_464_);
v___x_493_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_479_, v___x_491_, v___x_492_);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 2, v___x_493_);
lean_ctor_set(v___x_481_, 1, v___x_486_);
v___x_495_ = v___x_481_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_givenNames_477_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v___x_486_);
lean_ctor_set(v_reuseFailAlloc_496_, 2, v___x_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
v_fst_473_ = v___x_484_;
v_snd_474_ = v___x_495_;
goto v___jp_472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___redArg___boxed(lean_object* v_decl_498_, lean_object* v_isLet_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_){
_start:
{
uint8_t v_isLet_boxed_504_; lean_object* v_res_505_; 
v_isLet_boxed_504_ = lean_unbox(v_isLet_499_);
v_res_505_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_decl_498_, v_isLet_boxed_504_, v_a_500_, v_a_501_, v_a_502_);
lean_dec(v_a_502_);
lean_dec(v_a_501_);
lean_dec_ref(v_a_500_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl(lean_object* v_decl_506_, uint8_t v_isLet_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_decl_506_, v_isLet_507_, v_a_508_, v_a_510_, v_a_514_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_addDecl___boxed(lean_object* v_decl_517_, lean_object* v_isLet_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_){
_start:
{
uint8_t v_isLet_boxed_527_; lean_object* v_res_528_; 
v_isLet_boxed_527_ = lean_unbox(v_isLet_518_);
v_res_528_ = l_Lean_Meta_ExtractLets_addDecl(v_decl_517_, v_isLet_boxed_527_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_);
lean_dec(v_a_525_);
lean_dec_ref(v_a_524_);
lean_dec(v_a_523_);
lean_dec_ref(v_a_522_);
lean_dec(v_a_521_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
return v_res_528_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0(lean_object* v_00_u03b2_529_, lean_object* v_m_530_, lean_object* v_a_531_, lean_object* v_b_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_m_530_, v_a_531_, v_b_532_);
return v___x_533_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(lean_object* v_00_u03b2_534_, lean_object* v_a_535_, lean_object* v_x_536_){
_start:
{
uint8_t v___x_537_; 
v___x_537_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___redArg(v_a_535_, v_x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0___boxed(lean_object* v_00_u03b2_538_, lean_object* v_a_539_, lean_object* v_x_540_){
_start:
{
uint8_t v_res_541_; lean_object* v_r_542_; 
v_res_541_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__0(v_00_u03b2_538_, v_a_539_, v_x_540_);
lean_dec(v_x_540_);
lean_dec_ref(v_a_539_);
v_r_542_ = lean_box(v_res_541_);
return v_r_542_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1(lean_object* v_00_u03b2_543_, lean_object* v_data_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1___redArg(v_data_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2(lean_object* v_00_u03b2_546_, lean_object* v_a_547_, lean_object* v_b_548_, lean_object* v_x_549_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__2___redArg(v_a_547_, v_b_548_, v_x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_551_, lean_object* v_i_552_, lean_object* v_source_553_, lean_object* v_target_554_){
_start:
{
lean_object* v___x_555_; 
v___x_555_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2___redArg(v_i_552_, v_source_553_, v_target_554_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_556_, lean_object* v_x_557_, lean_object* v_x_558_){
_start:
{
lean_object* v___x_559_; 
v___x_559_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0_spec__1_spec__2_spec__3___redArg(v_x_557_, v_x_558_);
return v___x_559_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(lean_object* v_k_560_, lean_object* v_t_561_){
_start:
{
if (lean_obj_tag(v_t_561_) == 0)
{
lean_object* v_k_562_; lean_object* v_l_563_; lean_object* v_r_564_; uint8_t v___x_565_; 
v_k_562_ = lean_ctor_get(v_t_561_, 1);
v_l_563_ = lean_ctor_get(v_t_561_, 3);
v_r_564_ = lean_ctor_get(v_t_561_, 4);
v___x_565_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_560_, v_k_562_);
switch(v___x_565_)
{
case 0:
{
v_t_561_ = v_l_563_;
goto _start;
}
case 1:
{
uint8_t v___x_567_; 
v___x_567_ = 1;
return v___x_567_;
}
default: 
{
v_t_561_ = v_r_564_;
goto _start;
}
}
}
else
{
uint8_t v___x_569_; 
v___x_569_ = 0;
return v___x_569_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg___boxed(lean_object* v_k_570_, lean_object* v_t_571_){
_start:
{
uint8_t v_res_572_; lean_object* v_r_573_; 
v_res_572_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(v_k_570_, v_t_571_);
lean_dec(v_t_571_);
lean_dec(v_k_570_);
v_r_573_ = lean_box(v_res_572_);
return v_r_573_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(lean_object* v___x_574_, lean_object* v_e_575_){
_start:
{
uint8_t v___x_576_; lean_object* v_d_578_; lean_object* v_b_579_; 
v___x_576_ = l_Lean_Expr_hasFVar(v_e_575_);
if (v___x_576_ == 0)
{
return v___x_576_;
}
else
{
switch(lean_obj_tag(v_e_575_))
{
case 7:
{
lean_object* v_binderType_582_; lean_object* v_body_583_; 
v_binderType_582_ = lean_ctor_get(v_e_575_, 1);
v_body_583_ = lean_ctor_get(v_e_575_, 2);
v_d_578_ = v_binderType_582_;
v_b_579_ = v_body_583_;
goto v___jp_577_;
}
case 6:
{
lean_object* v_binderType_584_; lean_object* v_body_585_; 
v_binderType_584_ = lean_ctor_get(v_e_575_, 1);
v_body_585_ = lean_ctor_get(v_e_575_, 2);
v_d_578_ = v_binderType_584_;
v_b_579_ = v_body_585_;
goto v___jp_577_;
}
case 10:
{
lean_object* v_expr_586_; 
v_expr_586_ = lean_ctor_get(v_e_575_, 1);
v_e_575_ = v_expr_586_;
goto _start;
}
case 8:
{
lean_object* v_type_588_; lean_object* v_value_589_; lean_object* v_body_590_; uint8_t v___x_591_; 
v_type_588_ = lean_ctor_get(v_e_575_, 1);
v_value_589_ = lean_ctor_get(v_e_575_, 2);
v_body_590_ = lean_ctor_get(v_e_575_, 3);
v___x_591_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_574_, v_type_588_);
if (v___x_591_ == 0)
{
uint8_t v___x_592_; 
v___x_592_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_574_, v_value_589_);
if (v___x_592_ == 0)
{
v_e_575_ = v_body_590_;
goto _start;
}
else
{
return v___x_576_;
}
}
else
{
return v___x_576_;
}
}
case 5:
{
lean_object* v_fn_594_; lean_object* v_arg_595_; uint8_t v___x_596_; 
v_fn_594_ = lean_ctor_get(v_e_575_, 0);
v_arg_595_ = lean_ctor_get(v_e_575_, 1);
v___x_596_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_574_, v_fn_594_);
if (v___x_596_ == 0)
{
v_e_575_ = v_arg_595_;
goto _start;
}
else
{
return v___x_576_;
}
}
case 11:
{
lean_object* v_struct_598_; 
v_struct_598_ = lean_ctor_get(v_e_575_, 2);
v_e_575_ = v_struct_598_;
goto _start;
}
case 1:
{
lean_object* v_fvarId_600_; uint8_t v___x_601_; 
v_fvarId_600_ = lean_ctor_get(v_e_575_, 0);
v___x_601_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(v_fvarId_600_, v___x_574_);
return v___x_601_;
}
default: 
{
uint8_t v___x_602_; 
v___x_602_ = 0;
return v___x_602_;
}
}
}
v___jp_577_:
{
uint8_t v___x_580_; 
v___x_580_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_574_, v_d_578_);
if (v___x_580_ == 0)
{
v_e_575_ = v_b_579_;
goto _start;
}
else
{
return v___x_576_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1___boxed(lean_object* v___x_603_, lean_object* v_e_604_){
_start:
{
uint8_t v_res_605_; lean_object* v_r_606_; 
v_res_605_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v___x_603_, v_e_604_);
lean_dec_ref(v_e_604_);
lean_dec(v___x_603_);
v_r_606_ = lean_box(v_res_605_);
return v_r_606_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(lean_object* v_as_607_, size_t v_sz_608_, size_t v_i_609_, lean_object* v_b_610_){
_start:
{
lean_object* v_a_613_; uint8_t v___x_617_; 
v___x_617_ = lean_usize_dec_lt(v_i_609_, v_sz_608_);
if (v___x_617_ == 0)
{
lean_object* v___x_618_; 
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v_b_610_);
return v___x_618_;
}
else
{
lean_object* v_snd_619_; lean_object* v_fst_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_654_; 
v_snd_619_ = lean_ctor_get(v_b_610_, 1);
v_fst_620_ = lean_ctor_get(v_b_610_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v_b_610_);
if (v_isSharedCheck_654_ == 0)
{
v___x_622_ = v_b_610_;
v_isShared_623_ = v_isSharedCheck_654_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_snd_619_);
lean_inc(v_fst_620_);
lean_dec(v_b_610_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_654_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v_fst_624_; lean_object* v_snd_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_653_; 
v_fst_624_ = lean_ctor_get(v_snd_619_, 0);
v_snd_625_ = lean_ctor_get(v_snd_619_, 1);
v_isSharedCheck_653_ = !lean_is_exclusive(v_snd_619_);
if (v_isSharedCheck_653_ == 0)
{
v___x_627_ = v_snd_619_;
v_isShared_628_ = v_isSharedCheck_653_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_snd_625_);
lean_inc(v_fst_624_);
lean_dec(v_snd_619_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_653_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v_a_629_; lean_object* v_decl_630_; uint8_t v___y_632_; lean_object* v___x_649_; uint8_t v___x_650_; 
v_a_629_ = lean_array_uget_borrowed(v_as_607_, v_i_609_);
v_decl_630_ = lean_ctor_get(v_a_629_, 0);
v___x_649_ = l_Lean_LocalDecl_type(v_decl_630_);
v___x_650_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v_fst_620_, v___x_649_);
lean_dec_ref(v___x_649_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; uint8_t v___x_652_; 
v___x_651_ = l_Lean_LocalDecl_value(v_decl_630_, v___x_650_);
v___x_652_ = l___private_Lean_Expr_0__Lean_Expr_hasAnyFVar_visit___at___00Lean_Meta_ExtractLets_flushDecls_spec__1(v_fst_620_, v___x_651_);
lean_dec_ref(v___x_651_);
v___y_632_ = v___x_652_;
goto v___jp_631_;
}
else
{
v___y_632_ = v___x_650_;
goto v___jp_631_;
}
v___jp_631_:
{
if (v___y_632_ == 0)
{
lean_object* v___x_633_; lean_object* v___x_635_; 
lean_inc(v_a_629_);
v___x_633_ = lean_array_push(v_fst_624_, v_a_629_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 0, v___x_633_);
v___x_635_ = v___x_627_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_633_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v_snd_625_);
v___x_635_ = v_reuseFailAlloc_639_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
lean_object* v___x_637_; 
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 1, v___x_635_);
v___x_637_ = v___x_622_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_638_; 
v_reuseFailAlloc_638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_638_, 0, v_fst_620_);
lean_ctor_set(v_reuseFailAlloc_638_, 1, v___x_635_);
v___x_637_ = v_reuseFailAlloc_638_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
v_a_613_ = v___x_637_;
goto v___jp_612_;
}
}
}
else
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
lean_inc(v_a_629_);
v___x_640_ = lean_array_push(v_snd_625_, v_a_629_);
v___x_641_ = l_Lean_LocalDecl_fvarId(v_decl_630_);
v___x_642_ = l_Lean_FVarIdSet_insert(v_fst_620_, v___x_641_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 1, v___x_640_);
v___x_644_ = v___x_627_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_fst_624_);
lean_ctor_set(v_reuseFailAlloc_648_, 1, v___x_640_);
v___x_644_ = v_reuseFailAlloc_648_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_646_; 
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 1, v___x_644_);
lean_ctor_set(v___x_622_, 0, v___x_642_);
v___x_646_ = v___x_622_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_647_, 1, v___x_644_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
v_a_613_ = v___x_646_;
goto v___jp_612_;
}
}
}
}
}
}
}
v___jp_612_:
{
size_t v___x_614_; size_t v___x_615_; 
v___x_614_ = ((size_t)1ULL);
v___x_615_ = lean_usize_add(v_i_609_, v___x_614_);
v_i_609_ = v___x_615_;
v_b_610_ = v_a_613_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg___boxed(lean_object* v_as_655_, lean_object* v_sz_656_, lean_object* v_i_657_, lean_object* v_b_658_, lean_object* v___y_659_){
_start:
{
size_t v_sz_boxed_660_; size_t v_i_boxed_661_; lean_object* v_res_662_; 
v_sz_boxed_660_ = lean_unbox_usize(v_sz_656_);
lean_dec(v_sz_656_);
v_i_boxed_661_ = lean_unbox_usize(v_i_657_);
lean_dec(v_i_657_);
v_res_662_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(v_as_655_, v_sz_boxed_660_, v_i_boxed_661_, v_b_658_);
lean_dec_ref(v_as_655_);
return v_res_662_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_flushDecls___closed__0(void){
_start:
{
lean_object* v_toSave_663_; lean_object* v___x_664_; 
v_toSave_663_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0);
v___x_664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_664_, 0, v_toSave_663_);
lean_ctor_set(v___x_664_, 1, v_toSave_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls(lean_object* v_fvar_665_, lean_object* v_a_666_, lean_object* v_a_667_, lean_object* v_a_668_, lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v_decls_676_; lean_object* v_fvarSet_677_; lean_object* v_fvarSet_678_; lean_object* v___x_679_; lean_object* v___x_680_; size_t v_sz_681_; size_t v___x_682_; lean_object* v___x_683_; 
v___x_674_ = lean_st_ref_get(v_a_672_);
lean_dec(v___x_674_);
v___x_675_ = lean_st_ref_get(v_a_668_);
v_decls_676_ = lean_ctor_get(v___x_675_, 1);
lean_inc_ref(v_decls_676_);
lean_dec(v___x_675_);
v_fvarSet_677_ = lean_box(1);
v_fvarSet_678_ = l_Lean_FVarIdSet_insert(v_fvarSet_677_, v_fvar_665_);
v___x_679_ = lean_obj_once(&l_Lean_Meta_ExtractLets_flushDecls___closed__0, &l_Lean_Meta_ExtractLets_flushDecls___closed__0_once, _init_l_Lean_Meta_ExtractLets_flushDecls___closed__0);
v___x_680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_680_, 0, v_fvarSet_678_);
lean_ctor_set(v___x_680_, 1, v___x_679_);
v_sz_681_ = lean_array_size(v_decls_676_);
v___x_682_ = ((size_t)0ULL);
v___x_683_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(v_decls_676_, v_sz_681_, v___x_682_, v___x_680_);
lean_dec_ref(v_decls_676_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_707_; 
v_a_684_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_707_ == 0)
{
v___x_686_ = v___x_683_;
v_isShared_687_ = v_isSharedCheck_707_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_683_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_707_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v_snd_690_; lean_object* v_fst_691_; lean_object* v_snd_692_; lean_object* v_givenNames_693_; lean_object* v_valueMap_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_705_; 
v___x_688_ = lean_st_ref_get(v_a_672_);
lean_dec(v___x_688_);
v___x_689_ = lean_st_ref_take(v_a_668_);
v_snd_690_ = lean_ctor_get(v_a_684_, 1);
lean_inc(v_snd_690_);
lean_dec(v_a_684_);
v_fst_691_ = lean_ctor_get(v_snd_690_, 0);
lean_inc(v_fst_691_);
v_snd_692_ = lean_ctor_get(v_snd_690_, 1);
lean_inc(v_snd_692_);
lean_dec(v_snd_690_);
v_givenNames_693_ = lean_ctor_get(v___x_689_, 0);
v_valueMap_694_ = lean_ctor_get(v___x_689_, 2);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_705_ == 0)
{
lean_object* v_unused_706_; 
v_unused_706_ = lean_ctor_get(v___x_689_, 1);
lean_dec(v_unused_706_);
v___x_696_ = v___x_689_;
v_isShared_697_ = v_isSharedCheck_705_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_valueMap_694_);
lean_inc(v_givenNames_693_);
lean_dec(v___x_689_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_705_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_699_; 
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 1, v_fst_691_);
v___x_699_ = v___x_696_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_givenNames_693_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_fst_691_);
lean_ctor_set(v_reuseFailAlloc_704_, 2, v_valueMap_694_);
v___x_699_ = v_reuseFailAlloc_704_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
lean_object* v___x_700_; lean_object* v___x_702_; 
v___x_700_ = lean_st_ref_set(v_a_668_, v___x_699_);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v_snd_692_);
v___x_702_ = v___x_686_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_snd_692_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
}
else
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
v_a_708_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___x_683_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___x_683_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_flushDecls___boxed(lean_object* v_fvar_716_, lean_object* v_a_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l_Lean_Meta_ExtractLets_flushDecls(v_fvar_716_, v_a_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_);
lean_dec(v_a_723_);
lean_dec_ref(v_a_722_);
lean_dec(v_a_721_);
lean_dec_ref(v_a_720_);
lean_dec(v_a_719_);
lean_dec(v_a_718_);
lean_dec_ref(v_a_717_);
return v_res_725_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(lean_object* v_00_u03b2_726_, lean_object* v_k_727_, lean_object* v_t_728_){
_start:
{
uint8_t v___x_729_; 
v___x_729_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___redArg(v_k_727_, v_t_728_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0___boxed(lean_object* v_00_u03b2_730_, lean_object* v_k_731_, lean_object* v_t_732_){
_start:
{
uint8_t v_res_733_; lean_object* v_r_734_; 
v_res_733_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_ExtractLets_flushDecls_spec__0(v_00_u03b2_730_, v_k_731_, v_t_732_);
lean_dec(v_t_732_);
lean_dec(v_k_731_);
v_r_734_ = lean_box(v_res_733_);
return v_r_734_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2(lean_object* v_as_735_, size_t v_sz_736_, size_t v_i_737_, lean_object* v_b_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v___x_747_; 
v___x_747_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___redArg(v_as_735_, v_sz_736_, v_i_737_, v_b_738_);
return v___x_747_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2___boxed(lean_object* v_as_748_, lean_object* v_sz_749_, lean_object* v_i_750_, lean_object* v_b_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
size_t v_sz_boxed_760_; size_t v_i_boxed_761_; lean_object* v_res_762_; 
v_sz_boxed_760_ = lean_unbox_usize(v_sz_749_);
lean_dec(v_sz_749_);
v_i_boxed_761_ = lean_unbox_usize(v_i_750_);
lean_dec(v_i_750_);
v_res_762_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_ExtractLets_flushDecls_spec__2(v_as_748_, v_sz_boxed_760_, v_i_boxed_761_, v_b_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
lean_dec(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
lean_dec_ref(v_as_748_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(lean_object* v_x_763_){
_start:
{
lean_object* v_decl_764_; 
v_decl_764_ = lean_ctor_get(v_x_763_, 0);
lean_inc_ref(v_decl_764_);
return v_decl_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed(lean_object* v_x_765_){
_start:
{
lean_object* v_res_766_; 
v_res_766_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0(v_x_765_);
lean_dec_ref(v_x_765_);
return v_res_766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(lean_object* v_lctx_767_, lean_object* v_x1_768_, lean_object* v_x2_769_){
_start:
{
lean_object* v_decl_770_; lean_object* v___x_771_; uint8_t v___x_772_; 
v_decl_770_ = lean_ctor_get(v_x2_769_, 0);
v___x_771_ = l_Lean_LocalDecl_fvarId(v_decl_770_);
v___x_772_ = l_Lean_LocalContext_contains(v_lctx_767_, v___x_771_);
lean_dec(v___x_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; 
v___x_773_ = lean_array_push(v_x1_768_, v_x2_769_);
return v___x_773_;
}
else
{
lean_dec_ref(v_x2_769_);
return v_x1_768_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed(lean_object* v_lctx_774_, lean_object* v_x1_775_, lean_object* v_x2_776_){
_start:
{
lean_object* v_res_777_; 
v_res_777_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1(v_lctx_774_, v_x1_775_, v_x2_776_);
lean_dec_ref(v_lctx_774_);
return v_res_777_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___f_778_; 
v___f_778_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_778_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___f_779_; 
v___f_779_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_779_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___f_780_; 
v___f_780_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_780_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___f_781_; 
v___f_781_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_781_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4(void){
_start:
{
lean_object* v___f_782_; 
v___f_782_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_782_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5(void){
_start:
{
lean_object* v___f_783_; 
v___f_783_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_783_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6(void){
_start:
{
lean_object* v___f_784_; 
v___f_784_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_784_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7(void){
_start:
{
lean_object* v___f_785_; lean_object* v___f_786_; lean_object* v___x_787_; 
v___f_785_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__1);
v___f_786_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__0);
v___x_787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_787_, 0, v___f_786_);
lean_ctor_set(v___x_787_, 1, v___f_785_);
return v___x_787_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8(void){
_start:
{
lean_object* v___f_788_; lean_object* v___f_789_; lean_object* v___f_790_; lean_object* v___f_791_; lean_object* v___x_792_; lean_object* v___x_793_; 
v___f_788_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__5);
v___f_789_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__4);
v___f_790_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__3);
v___f_791_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__2);
v___x_792_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__7);
v___x_793_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_793_, 0, v___x_792_);
lean_ctor_set(v___x_793_, 1, v___f_791_);
lean_ctor_set(v___x_793_, 2, v___f_790_);
lean_ctor_set(v___x_793_, 3, v___f_789_);
lean_ctor_set(v___x_793_, 4, v___f_788_);
return v___x_793_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9(void){
_start:
{
lean_object* v___f_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v___f_794_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__6);
v___x_795_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__8);
v___x_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_795_);
lean_ctor_set(v___x_796_, 1, v___f_794_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2(lean_object* v___f_797_, lean_object* v_inst_798_, lean_object* v_inst_799_, lean_object* v_k_800_, lean_object* v_decls_801_, lean_object* v_lctx_802_){
_start:
{
lean_object* v___y_804_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; uint8_t v___x_815_; 
v___x_811_ = lean_unsigned_to_nat(0u);
v___x_812_ = lean_array_get_size(v_decls_801_);
v___x_813_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0);
v___x_814_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9);
v___x_815_ = lean_nat_dec_lt(v___x_811_, v___x_812_);
if (v___x_815_ == 0)
{
lean_dec_ref(v_lctx_802_);
lean_dec_ref(v_decls_801_);
v___y_804_ = v___x_813_;
goto v___jp_803_;
}
else
{
lean_object* v___f_816_; uint8_t v___x_817_; 
v___f_816_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__1___boxed), 3, 1);
lean_closure_set(v___f_816_, 0, v_lctx_802_);
v___x_817_ = lean_nat_dec_le(v___x_812_, v___x_812_);
if (v___x_817_ == 0)
{
if (v___x_815_ == 0)
{
lean_dec_ref(v___f_816_);
lean_dec_ref(v_decls_801_);
v___y_804_ = v___x_813_;
goto v___jp_803_;
}
else
{
size_t v___x_818_; size_t v___x_819_; lean_object* v___x_820_; 
v___x_818_ = ((size_t)0ULL);
v___x_819_ = lean_usize_of_nat(v___x_812_);
v___x_820_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_814_, v___f_816_, v_decls_801_, v___x_818_, v___x_819_, v___x_813_);
v___y_804_ = v___x_820_;
goto v___jp_803_;
}
}
else
{
size_t v___x_821_; size_t v___x_822_; lean_object* v___x_823_; 
v___x_821_ = ((size_t)0ULL);
v___x_822_ = lean_usize_of_nat(v___x_812_);
v___x_823_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_814_, v___f_816_, v_decls_801_, v___x_821_, v___x_822_, v___x_813_);
v___y_804_ = v___x_823_;
goto v___jp_803_;
}
}
v___jp_803_:
{
lean_object* v___x_805_; size_t v_sz_806_; size_t v___x_807_; lean_object* v_decls_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_805_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2___closed__9);
v_sz_806_ = lean_array_size(v___y_804_);
v___x_807_ = ((size_t)0ULL);
v_decls_808_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_805_, v___f_797_, v_sz_806_, v___x_807_, v___y_804_);
v___x_809_ = lean_array_to_list(v_decls_808_);
v___x_810_ = l_Lean_Meta_withExistingLocalDecls___redArg(v_inst_798_, v_inst_799_, v___x_809_, v_k_800_);
return v___x_810_;
}
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0(void){
_start:
{
lean_object* v___f_824_; 
v___f_824_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__0___boxed), 1, 0);
return v___f_824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(lean_object* v_inst_825_, lean_object* v_inst_826_, lean_object* v_inst_827_, lean_object* v_decls_828_, lean_object* v_k_829_){
_start:
{
lean_object* v_toBind_830_; lean_object* v___f_831_; lean_object* v___f_832_; lean_object* v___x_833_; 
v_toBind_830_ = lean_ctor_get(v_inst_825_, 1);
lean_inc(v_toBind_830_);
v___f_831_ = lean_obj_once(&l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0, &l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0_once, _init_l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___closed__0);
v___f_832_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg___lam__2), 6, 5);
lean_closure_set(v___f_832_, 0, v___f_831_);
lean_closure_set(v___f_832_, 1, v_inst_826_);
lean_closure_set(v___f_832_, 2, v_inst_825_);
lean_closure_set(v___f_832_, 3, v_k_829_);
lean_closure_set(v___f_832_, 4, v_decls_828_);
v___x_833_ = lean_apply_4(v_toBind_830_, lean_box(0), lean_box(0), v_inst_827_, v___f_832_);
return v___x_833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext(lean_object* v_m_834_, lean_object* v_00_u03b1_835_, lean_object* v_inst_836_, lean_object* v_inst_837_, lean_object* v_inst_838_, lean_object* v_decls_839_, lean_object* v_k_840_){
_start:
{
lean_object* v___x_841_; 
v___x_841_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___redArg(v_inst_836_, v_inst_837_, v_inst_838_, v_decls_839_, v_k_840_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(lean_object* v_as_842_, size_t v_i_843_, size_t v_stop_844_, lean_object* v_b_845_){
_start:
{
uint8_t v___x_846_; 
v___x_846_ = lean_usize_dec_eq(v_i_843_, v_stop_844_);
if (v___x_846_ == 0)
{
size_t v___x_847_; size_t v___x_848_; lean_object* v___x_849_; lean_object* v_decl_850_; uint8_t v_isLet_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_847_ = ((size_t)1ULL);
v___x_848_ = lean_usize_sub(v_i_843_, v___x_847_);
v___x_849_ = lean_array_uget_borrowed(v_as_842_, v___x_848_);
v_decl_850_ = lean_ctor_get(v___x_849_, 0);
v_isLet_851_ = lean_ctor_get_uint8(v___x_849_, sizeof(void*)*1);
v___x_852_ = l_Lean_LocalDecl_userName(v_decl_850_);
v___x_853_ = l_Lean_LocalDecl_type(v_decl_850_);
v___x_854_ = l_Lean_LocalDecl_value(v_decl_850_, v___x_846_);
lean_inc_ref(v_decl_850_);
v___x_855_ = l_Lean_LocalDecl_toExpr(v_decl_850_);
v___x_856_ = lean_unsigned_to_nat(1u);
v___x_857_ = lean_mk_empty_array_with_capacity(v___x_856_);
v___x_858_ = lean_array_push(v___x_857_, v___x_855_);
v___x_859_ = lean_expr_abstract(v_b_845_, v___x_858_);
lean_dec_ref(v___x_858_);
lean_dec_ref(v_b_845_);
if (v_isLet_851_ == 0)
{
uint8_t v___x_860_; lean_object* v___x_861_; 
v___x_860_ = 1;
v___x_861_ = l_Lean_Expr_letE___override(v___x_852_, v___x_853_, v___x_854_, v___x_859_, v___x_860_);
v_i_843_ = v___x_848_;
v_b_845_ = v___x_861_;
goto _start;
}
else
{
lean_object* v___x_863_; 
v___x_863_ = l_Lean_Expr_letE___override(v___x_852_, v___x_853_, v___x_854_, v___x_859_, v___x_846_);
v_i_843_ = v___x_848_;
v_b_845_ = v___x_863_;
goto _start;
}
}
else
{
return v_b_845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0___boxed(lean_object* v_as_865_, lean_object* v_i_866_, lean_object* v_stop_867_, lean_object* v_b_868_){
_start:
{
size_t v_i_boxed_869_; size_t v_stop_boxed_870_; lean_object* v_res_871_; 
v_i_boxed_869_ = lean_unbox_usize(v_i_866_);
lean_dec(v_i_866_);
v_stop_boxed_870_ = lean_unbox_usize(v_stop_867_);
lean_dec(v_stop_867_);
v_res_871_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(v_as_865_, v_i_boxed_869_, v_stop_boxed_870_, v_b_868_);
lean_dec_ref(v_as_865_);
return v_res_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls(lean_object* v_decls_872_, lean_object* v_e_873_){
_start:
{
lean_object* v___x_874_; lean_object* v___x_875_; uint8_t v___x_876_; 
v___x_874_ = lean_array_get_size(v_decls_872_);
v___x_875_ = lean_unsigned_to_nat(0u);
v___x_876_ = lean_nat_dec_lt(v___x_875_, v___x_874_);
if (v___x_876_ == 0)
{
return v_e_873_;
}
else
{
size_t v___x_877_; size_t v___x_878_; lean_object* v___x_879_; 
v___x_877_ = lean_usize_of_nat(v___x_874_);
v___x_878_ = ((size_t)0ULL);
v___x_879_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Meta_ExtractLets_mkLetDecls_spec__0(v_decls_872_, v___x_877_, v___x_878_, v_e_873_);
return v___x_879_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_mkLetDecls___boxed(lean_object* v_decls_880_, lean_object* v_e_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_decls_880_, v_e_881_);
lean_dec_ref(v_decls_880_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(lean_object* v_fvarId_883_, size_t v_sz_884_, size_t v_i_885_, lean_object* v_bs_886_){
_start:
{
uint8_t v___x_887_; 
v___x_887_ = lean_usize_dec_lt(v_i_885_, v_sz_884_);
if (v___x_887_ == 0)
{
return v_bs_886_;
}
else
{
lean_object* v_v_888_; lean_object* v_decl_889_; lean_object* v___x_890_; lean_object* v_bs_x27_891_; lean_object* v___y_893_; lean_object* v___x_898_; uint8_t v___x_899_; 
v_v_888_ = lean_array_uget(v_bs_886_, v_i_885_);
v_decl_889_ = lean_ctor_get(v_v_888_, 0);
v___x_890_ = lean_unsigned_to_nat(0u);
v_bs_x27_891_ = lean_array_uset(v_bs_886_, v_i_885_, v___x_890_);
v___x_898_ = l_Lean_LocalDecl_fvarId(v_decl_889_);
v___x_899_ = l_Lean_instBEqFVarId_beq(v___x_898_, v_fvarId_883_);
lean_dec(v___x_898_);
if (v___x_899_ == 0)
{
v___y_893_ = v_v_888_;
goto v___jp_892_;
}
else
{
lean_object* v___x_901_; uint8_t v_isShared_902_; uint8_t v_isSharedCheck_906_; 
lean_inc_ref(v_decl_889_);
v_isSharedCheck_906_ = !lean_is_exclusive(v_v_888_);
if (v_isSharedCheck_906_ == 0)
{
lean_object* v_unused_907_; 
v_unused_907_ = lean_ctor_get(v_v_888_, 0);
lean_dec(v_unused_907_);
v___x_901_ = v_v_888_;
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
else
{
lean_dec(v_v_888_);
v___x_901_ = lean_box(0);
v_isShared_902_ = v_isSharedCheck_906_;
goto v_resetjp_900_;
}
v_resetjp_900_:
{
lean_object* v___x_904_; 
if (v_isShared_902_ == 0)
{
v___x_904_ = v___x_901_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_decl_889_);
v___x_904_ = v_reuseFailAlloc_905_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
lean_ctor_set_uint8(v___x_904_, sizeof(void*)*1, v___x_899_);
v___y_893_ = v___x_904_;
goto v___jp_892_;
}
}
}
v___jp_892_:
{
size_t v___x_894_; size_t v___x_895_; lean_object* v___x_896_; 
v___x_894_ = ((size_t)1ULL);
v___x_895_ = lean_usize_add(v_i_885_, v___x_894_);
v___x_896_ = lean_array_uset(v_bs_x27_891_, v_i_885_, v___y_893_);
v_i_885_ = v___x_895_;
v_bs_886_ = v___x_896_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0___boxed(lean_object* v_fvarId_908_, lean_object* v_sz_909_, lean_object* v_i_910_, lean_object* v_bs_911_){
_start:
{
size_t v_sz_boxed_912_; size_t v_i_boxed_913_; lean_object* v_res_914_; 
v_sz_boxed_912_ = lean_unbox_usize(v_sz_909_);
lean_dec(v_sz_909_);
v_i_boxed_913_ = lean_unbox_usize(v_i_910_);
lean_dec(v_i_910_);
v_res_914_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(v_fvarId_908_, v_sz_boxed_912_, v_i_boxed_913_, v_bs_911_);
lean_dec(v_fvarId_908_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg(lean_object* v_fvarId_915_, lean_object* v_a_916_, lean_object* v_a_917_){
_start:
{
lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v_givenNames_921_; lean_object* v_decls_922_; lean_object* v_valueMap_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_936_; 
v___x_919_ = lean_st_ref_get(v_a_917_);
lean_dec(v___x_919_);
v___x_920_ = lean_st_ref_take(v_a_916_);
v_givenNames_921_ = lean_ctor_get(v___x_920_, 0);
v_decls_922_ = lean_ctor_get(v___x_920_, 1);
v_valueMap_923_ = lean_ctor_get(v___x_920_, 2);
v_isSharedCheck_936_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_936_ == 0)
{
v___x_925_ = v___x_920_;
v_isShared_926_ = v_isSharedCheck_936_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_valueMap_923_);
lean_inc(v_decls_922_);
lean_inc(v_givenNames_921_);
lean_dec(v___x_920_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_936_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
size_t v_sz_927_; size_t v___x_928_; lean_object* v___x_929_; lean_object* v___x_931_; 
v_sz_927_ = lean_array_size(v_decls_922_);
v___x_928_ = ((size_t)0ULL);
v___x_929_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_ensureIsLet_spec__0(v_fvarId_915_, v_sz_927_, v___x_928_, v_decls_922_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 1, v___x_929_);
v___x_931_ = v___x_925_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v_givenNames_921_);
lean_ctor_set(v_reuseFailAlloc_935_, 1, v___x_929_);
lean_ctor_set(v_reuseFailAlloc_935_, 2, v_valueMap_923_);
v___x_931_ = v_reuseFailAlloc_935_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_932_ = lean_st_ref_set(v_a_916_, v___x_931_);
v___x_933_ = lean_box(0);
v___x_934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_934_, 0, v___x_933_);
return v___x_934_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___redArg___boxed(lean_object* v_fvarId_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_fvarId_937_, v_a_938_, v_a_939_);
lean_dec(v_a_939_);
lean_dec(v_a_938_);
lean_dec(v_fvarId_937_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet(lean_object* v_fvarId_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_){
_start:
{
lean_object* v___x_951_; 
v___x_951_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_fvarId_942_, v_a_945_, v_a_949_);
return v___x_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_ensureIsLet___boxed(lean_object* v_fvarId_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_, lean_object* v_a_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lean_Meta_ExtractLets_ensureIsLet(v_fvarId_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_, v_a_958_, v_a_959_);
lean_dec(v_a_959_);
lean_dec_ref(v_a_958_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
lean_dec(v_a_955_);
lean_dec(v_a_954_);
lean_dec_ref(v_a_953_);
lean_dec(v_fvarId_952_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(lean_object* v_fvarId_962_, lean_object* v_as_963_, lean_object* v_j_964_){
_start:
{
lean_object* v___x_965_; uint8_t v___x_966_; 
v___x_965_ = lean_array_get_size(v_as_963_);
v___x_966_ = lean_nat_dec_lt(v_j_964_, v___x_965_);
if (v___x_966_ == 0)
{
lean_object* v___x_967_; 
lean_dec(v_j_964_);
v___x_967_ = lean_box(0);
return v___x_967_;
}
else
{
lean_object* v___x_968_; lean_object* v_decl_969_; lean_object* v___x_970_; uint8_t v___x_971_; 
v___x_968_ = lean_array_fget_borrowed(v_as_963_, v_j_964_);
v_decl_969_ = lean_ctor_get(v___x_968_, 0);
v___x_970_ = l_Lean_LocalDecl_fvarId(v_decl_969_);
v___x_971_ = l_Lean_instBEqFVarId_beq(v___x_970_, v_fvarId_962_);
lean_dec(v___x_970_);
if (v___x_971_ == 0)
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = lean_unsigned_to_nat(1u);
v___x_973_ = lean_nat_add(v_j_964_, v___x_972_);
lean_dec(v_j_964_);
v_j_964_ = v___x_973_;
goto _start;
}
else
{
lean_object* v___x_975_; 
v___x_975_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_975_, 0, v_j_964_);
return v___x_975_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0___boxed(lean_object* v_fvarId_976_, lean_object* v_as_977_, lean_object* v_j_978_){
_start:
{
lean_object* v_res_979_; 
v_res_979_ = l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(v_fvarId_976_, v_as_977_, v_j_978_);
lean_dec_ref(v_as_977_);
lean_dec(v_fvarId_976_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(lean_object* v___x_980_, lean_object* v_as_981_, size_t v_i_982_, size_t v_stop_983_, lean_object* v_b_984_){
_start:
{
lean_object* v___y_986_; uint8_t v___x_990_; 
v___x_990_ = lean_usize_dec_eq(v_i_982_, v_stop_983_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; lean_object* v_decl_992_; lean_object* v___x_993_; uint8_t v___x_994_; 
v___x_991_ = lean_array_uget_borrowed(v_as_981_, v_i_982_);
v_decl_992_ = lean_ctor_get(v___x_991_, 0);
v___x_993_ = l_Lean_LocalDecl_fvarId(v_decl_992_);
v___x_994_ = l_Lean_LocalContext_contains(v___x_980_, v___x_993_);
lean_dec(v___x_993_);
if (v___x_994_ == 0)
{
lean_object* v___x_995_; 
lean_inc(v___x_991_);
v___x_995_ = lean_array_push(v_b_984_, v___x_991_);
v___y_986_ = v___x_995_;
goto v___jp_985_;
}
else
{
v___y_986_ = v_b_984_;
goto v___jp_985_;
}
}
else
{
return v_b_984_;
}
v___jp_985_:
{
size_t v___x_987_; size_t v___x_988_; 
v___x_987_ = ((size_t)1ULL);
v___x_988_ = lean_usize_add(v_i_982_, v___x_987_);
v_i_982_ = v___x_988_;
v_b_984_ = v___y_986_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3___boxed(lean_object* v___x_996_, lean_object* v_as_997_, lean_object* v_i_998_, lean_object* v_stop_999_, lean_object* v_b_1000_){
_start:
{
size_t v_i_boxed_1001_; size_t v_stop_boxed_1002_; lean_object* v_res_1003_; 
v_i_boxed_1001_ = lean_unbox_usize(v_i_998_);
lean_dec(v_i_998_);
v_stop_boxed_1002_ = lean_unbox_usize(v_stop_999_);
lean_dec(v_stop_999_);
v_res_1003_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(v___x_996_, v_as_997_, v_i_boxed_1001_, v_stop_boxed_1002_, v_b_1000_);
lean_dec_ref(v_as_997_);
lean_dec_ref(v___x_996_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(size_t v_sz_1004_, size_t v_i_1005_, lean_object* v_bs_1006_){
_start:
{
uint8_t v___x_1007_; 
v___x_1007_ = lean_usize_dec_lt(v_i_1005_, v_sz_1004_);
if (v___x_1007_ == 0)
{
return v_bs_1006_;
}
else
{
lean_object* v_v_1008_; lean_object* v_decl_1009_; lean_object* v___x_1010_; lean_object* v_bs_x27_1011_; size_t v___x_1012_; size_t v___x_1013_; lean_object* v___x_1014_; 
v_v_1008_ = lean_array_uget_borrowed(v_bs_1006_, v_i_1005_);
v_decl_1009_ = lean_ctor_get(v_v_1008_, 0);
lean_inc_ref(v_decl_1009_);
v___x_1010_ = lean_unsigned_to_nat(0u);
v_bs_x27_1011_ = lean_array_uset(v_bs_1006_, v_i_1005_, v___x_1010_);
v___x_1012_ = ((size_t)1ULL);
v___x_1013_ = lean_usize_add(v_i_1005_, v___x_1012_);
v___x_1014_ = lean_array_uset(v_bs_x27_1011_, v_i_1005_, v_decl_1009_);
v_i_1005_ = v___x_1013_;
v_bs_1006_ = v___x_1014_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1___boxed(lean_object* v_sz_1016_, lean_object* v_i_1017_, lean_object* v_bs_1018_){
_start:
{
size_t v_sz_boxed_1019_; size_t v_i_boxed_1020_; lean_object* v_res_1021_; 
v_sz_boxed_1019_ = lean_unbox_usize(v_sz_1016_);
lean_dec(v_sz_1016_);
v_i_boxed_1020_ = lean_unbox_usize(v_i_1017_);
lean_dec(v_i_1017_);
v_res_1021_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_boxed_1019_, v_i_boxed_1020_, v_bs_1018_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(lean_object* v_x_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v___x_1031_; 
lean_inc(v___y_1025_);
lean_inc(v___y_1024_);
lean_inc_ref(v___y_1023_);
v___x_1031_ = lean_apply_8(v_x_1022_, v___y_1023_, v___y_1024_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, lean_box(0));
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed(lean_object* v_x_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
lean_object* v_res_1041_; 
v_res_1041_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0(v_x_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1035_);
lean_dec(v___y_1034_);
lean_dec_ref(v___y_1033_);
return v_res_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(lean_object* v_decls_1042_, lean_object* v_x_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v___f_1052_; lean_object* v___x_1053_; 
lean_inc(v___y_1046_);
lean_inc(v___y_1045_);
lean_inc_ref(v___y_1044_);
v___f_1052_ = lean_alloc_closure((void*)(l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1052_, 0, v_x_1043_);
lean_closure_set(v___f_1052_, 1, v___y_1044_);
lean_closure_set(v___f_1052_, 2, v___y_1045_);
lean_closure_set(v___f_1052_, 3, v___y_1046_);
v___x_1053_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_1042_, v___f_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1053_) == 0)
{
return v___x_1053_;
}
else
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
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg___boxed(lean_object* v_decls_1062_, lean_object* v_x_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_){
_start:
{
lean_object* v_res_1072_; 
v_res_1072_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v_decls_1062_, v_x_1063_, v___y_1064_, v___y_1065_, v___y_1066_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec(v___y_1068_);
lean_dec_ref(v___y_1067_);
lean_dec(v___y_1066_);
lean_dec(v___y_1065_);
lean_dec_ref(v___y_1064_);
return v_res_1072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(lean_object* v_decls_1073_, lean_object* v_k_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v___y_1084_; lean_object* v_lctx_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; uint8_t v___x_1094_; 
v_lctx_1090_ = lean_ctor_get(v___y_1078_, 2);
v___x_1091_ = lean_unsigned_to_nat(0u);
v___x_1092_ = lean_array_get_size(v_decls_1073_);
v___x_1093_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0);
v___x_1094_ = lean_nat_dec_lt(v___x_1091_, v___x_1092_);
if (v___x_1094_ == 0)
{
v___y_1084_ = v___x_1093_;
goto v___jp_1083_;
}
else
{
uint8_t v___x_1095_; 
v___x_1095_ = lean_nat_dec_le(v___x_1092_, v___x_1092_);
if (v___x_1095_ == 0)
{
if (v___x_1094_ == 0)
{
v___y_1084_ = v___x_1093_;
goto v___jp_1083_;
}
else
{
size_t v___x_1096_; size_t v___x_1097_; lean_object* v___x_1098_; 
v___x_1096_ = ((size_t)0ULL);
v___x_1097_ = lean_usize_of_nat(v___x_1092_);
v___x_1098_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(v_lctx_1090_, v_decls_1073_, v___x_1096_, v___x_1097_, v___x_1093_);
v___y_1084_ = v___x_1098_;
goto v___jp_1083_;
}
}
else
{
size_t v___x_1099_; size_t v___x_1100_; lean_object* v___x_1101_; 
v___x_1099_ = ((size_t)0ULL);
v___x_1100_ = lean_usize_of_nat(v___x_1092_);
v___x_1101_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__3(v_lctx_1090_, v_decls_1073_, v___x_1099_, v___x_1100_, v___x_1093_);
v___y_1084_ = v___x_1101_;
goto v___jp_1083_;
}
}
v___jp_1083_:
{
size_t v_sz_1085_; size_t v___x_1086_; lean_object* v_decls_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v_sz_1085_ = lean_array_size(v___y_1084_);
v___x_1086_ = ((size_t)0ULL);
v_decls_1087_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_1085_, v___x_1086_, v___y_1084_);
v___x_1088_ = lean_array_to_list(v_decls_1087_);
v___x_1089_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v___x_1088_, v_k_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
return v___x_1089_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg___boxed(lean_object* v_decls_1102_, lean_object* v_k_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_){
_start:
{
lean_object* v_res_1112_; 
v_res_1112_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v_decls_1102_, v_k_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
lean_dec(v___y_1110_);
lean_dec_ref(v___y_1109_);
lean_dec(v___y_1108_);
lean_dec_ref(v___y_1107_);
lean_dec(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec_ref(v_decls_1102_);
return v_res_1112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg(lean_object* v_fvarId_1113_, lean_object* v_k_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_){
_start:
{
lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v_lctx_1125_; uint8_t v___x_1126_; 
v___x_1123_ = lean_st_ref_get(v_a_1121_);
lean_dec(v___x_1123_);
v___x_1124_ = lean_st_ref_get(v_a_1117_);
v_lctx_1125_ = lean_ctor_get(v_a_1118_, 2);
v___x_1126_ = l_Lean_LocalContext_contains(v_lctx_1125_, v_fvarId_1113_);
if (v___x_1126_ == 0)
{
lean_object* v_decls_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v_decls_1127_ = lean_ctor_get(v___x_1124_, 1);
lean_inc_ref(v_decls_1127_);
lean_dec(v___x_1124_);
v___x_1128_ = lean_unsigned_to_nat(0u);
v___x_1129_ = l_Array_findIdx_x3f_loop___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__0(v_fvarId_1113_, v_decls_1127_, v___x_1128_);
if (lean_obj_tag(v___x_1129_) == 1)
{
lean_object* v_val_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v_val_1130_ = lean_ctor_get(v___x_1129_, 0);
lean_inc(v_val_1130_);
lean_dec_ref(v___x_1129_);
v___x_1131_ = lean_unsigned_to_nat(1u);
v___x_1132_ = lean_nat_add(v_val_1130_, v___x_1131_);
lean_dec(v_val_1130_);
v___x_1133_ = l_Array_toSubarray___redArg(v_decls_1127_, v___x_1128_, v___x_1132_);
v___x_1134_ = l_Subarray_copy___redArg(v___x_1133_);
v___x_1135_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v___x_1134_, v_k_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_);
lean_dec_ref(v___x_1134_);
return v___x_1135_;
}
else
{
lean_object* v___x_1136_; 
lean_dec(v___x_1129_);
lean_dec_ref(v_decls_1127_);
lean_inc(v_a_1121_);
lean_inc_ref(v_a_1120_);
lean_inc(v_a_1119_);
lean_inc_ref(v_a_1118_);
lean_inc(v_a_1117_);
lean_inc(v_a_1116_);
lean_inc_ref(v_a_1115_);
v___x_1136_ = lean_apply_8(v_k_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, lean_box(0));
return v___x_1136_;
}
}
else
{
lean_object* v___x_1137_; 
lean_dec(v___x_1124_);
lean_inc(v_a_1121_);
lean_inc_ref(v_a_1120_);
lean_inc(v_a_1119_);
lean_inc_ref(v_a_1118_);
lean_inc(v_a_1117_);
lean_inc(v_a_1116_);
lean_inc_ref(v_a_1115_);
v___x_1137_ = lean_apply_8(v_k_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, lean_box(0));
return v___x_1137_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___redArg___boxed(lean_object* v_fvarId_1138_, lean_object* v_k_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_, lean_object* v_a_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v_fvarId_1138_, v_k_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_, v_a_1146_);
lean_dec(v_a_1146_);
lean_dec_ref(v_a_1145_);
lean_dec(v_a_1144_);
lean_dec_ref(v_a_1143_);
lean_dec(v_a_1142_);
lean_dec(v_a_1141_);
lean_dec_ref(v_a_1140_);
lean_dec(v_fvarId_1138_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext(lean_object* v_00_u03b1_1149_, lean_object* v_fvarId_1150_, lean_object* v_k_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_, lean_object* v_a_1157_, lean_object* v_a_1158_){
_start:
{
lean_object* v___x_1160_; 
v___x_1160_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v_fvarId_1150_, v_k_1151_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_, v_a_1157_, v_a_1158_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withDeclInContext___boxed(lean_object* v_00_u03b1_1161_, lean_object* v_fvarId_1162_, lean_object* v_k_1163_, lean_object* v_a_1164_, lean_object* v_a_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lean_Meta_ExtractLets_withDeclInContext(v_00_u03b1_1161_, v_fvarId_1162_, v_k_1163_, v_a_1164_, v_a_1165_, v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_);
lean_dec(v_a_1170_);
lean_dec_ref(v_a_1169_);
lean_dec(v_a_1168_);
lean_dec_ref(v_a_1167_);
lean_dec(v_a_1166_);
lean_dec(v_a_1165_);
lean_dec_ref(v_a_1164_);
lean_dec(v_fvarId_1162_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(lean_object* v_00_u03b1_1173_, lean_object* v_decls_1174_, lean_object* v_x_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
lean_object* v___x_1184_; 
v___x_1184_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___redArg(v_decls_1174_, v_x_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2___boxed(lean_object* v_00_u03b1_1185_, lean_object* v_decls_1186_, lean_object* v_x_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_Meta_withExistingLocalDecls___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__2(v_00_u03b1_1185_, v_decls_1186_, v_x_1187_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(lean_object* v_00_u03b1_1197_, lean_object* v_decls_1198_, lean_object* v_k_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v___x_1208_; 
v___x_1208_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___redArg(v_decls_1198_, v_k_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1___boxed(lean_object* v_00_u03b1_1209_, lean_object* v_decls_1210_, lean_object* v_k_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v_res_1220_; 
v_res_1220_ = l_Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1(v_00_u03b1_1209_, v_decls_1210_, v_k_1211_, v___y_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v___y_1214_);
lean_dec(v___y_1213_);
lean_dec_ref(v___y_1212_);
lean_dec_ref(v_decls_1210_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(lean_object* v_e_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
uint8_t v___x_1225_; 
v___x_1225_ = l_Lean_Expr_hasMVar(v_e_1221_);
if (v___x_1225_ == 0)
{
lean_object* v___x_1226_; 
v___x_1226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1226_, 0, v_e_1221_);
return v___x_1226_;
}
else
{
lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v_mctx_1229_; lean_object* v___x_1230_; lean_object* v_fst_1231_; lean_object* v_snd_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v_cache_1235_; lean_object* v_zetaDeltaFVarIds_1236_; lean_object* v_postponed_1237_; lean_object* v_diag_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1247_; 
v___x_1227_ = lean_st_ref_get(v___y_1223_);
lean_dec(v___x_1227_);
v___x_1228_ = lean_st_ref_get(v___y_1222_);
v_mctx_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc_ref(v_mctx_1229_);
lean_dec(v___x_1228_);
v___x_1230_ = l_Lean_instantiateMVarsCore(v_mctx_1229_, v_e_1221_);
v_fst_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_fst_1231_);
v_snd_1232_ = lean_ctor_get(v___x_1230_, 1);
lean_inc(v_snd_1232_);
lean_dec_ref(v___x_1230_);
v___x_1233_ = lean_st_ref_get(v___y_1223_);
lean_dec(v___x_1233_);
v___x_1234_ = lean_st_ref_take(v___y_1222_);
v_cache_1235_ = lean_ctor_get(v___x_1234_, 1);
v_zetaDeltaFVarIds_1236_ = lean_ctor_get(v___x_1234_, 2);
v_postponed_1237_ = lean_ctor_get(v___x_1234_, 3);
v_diag_1238_ = lean_ctor_get(v___x_1234_, 4);
v_isSharedCheck_1247_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1247_ == 0)
{
lean_object* v_unused_1248_; 
v_unused_1248_ = lean_ctor_get(v___x_1234_, 0);
lean_dec(v_unused_1248_);
v___x_1240_ = v___x_1234_;
v_isShared_1241_ = v_isSharedCheck_1247_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_diag_1238_);
lean_inc(v_postponed_1237_);
lean_inc(v_zetaDeltaFVarIds_1236_);
lean_inc(v_cache_1235_);
lean_dec(v___x_1234_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1247_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___x_1243_; 
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 0, v_snd_1232_);
v___x_1243_ = v___x_1240_;
goto v_reusejp_1242_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v_snd_1232_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v_cache_1235_);
lean_ctor_set(v_reuseFailAlloc_1246_, 2, v_zetaDeltaFVarIds_1236_);
lean_ctor_set(v_reuseFailAlloc_1246_, 3, v_postponed_1237_);
lean_ctor_set(v_reuseFailAlloc_1246_, 4, v_diag_1238_);
v___x_1243_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1242_;
}
v_reusejp_1242_:
{
lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1244_ = lean_st_ref_set(v___y_1222_, v___x_1243_);
v___x_1245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1245_, 0, v_fst_1231_);
return v___x_1245_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg___boxed(lean_object* v_e_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v_res_1253_; 
v_res_1253_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_1249_, v___y_1250_, v___y_1251_);
lean_dec(v___y_1251_);
lean_dec(v___y_1250_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(lean_object* v_e_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v___x_1263_; 
v___x_1263_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_1254_, v___y_1259_, v___y_1261_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___boxed(lean_object* v_e_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_){
_start:
{
lean_object* v_res_1273_; 
v_res_1273_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0(v_e_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_);
lean_dec(v___y_1271_);
lean_dec_ref(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
lean_dec(v___y_1267_);
lean_dec(v___y_1266_);
lean_dec_ref(v___y_1265_);
return v_res_1273_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(lean_object* v_as_1274_, size_t v_i_1275_, size_t v_stop_1276_, lean_object* v_b_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_){
_start:
{
lean_object* v_a_1287_; uint8_t v___x_1293_; 
v___x_1293_ = lean_usize_dec_eq(v_i_1275_, v_stop_1276_);
if (v___x_1293_ == 0)
{
lean_object* v___x_1294_; 
v___x_1294_ = lean_array_uget_borrowed(v_as_1274_, v_i_1275_);
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v___x_1295_; 
v___x_1295_ = lean_box(0);
v_a_1287_ = v___x_1295_;
goto v___jp_1286_;
}
else
{
lean_object* v_val_1296_; uint8_t v___y_1298_; uint8_t v___x_1326_; 
v_val_1296_ = lean_ctor_get(v___x_1294_, 0);
v___x_1326_ = l_Lean_LocalDecl_isLet(v_val_1296_, v___x_1293_);
if (v___x_1326_ == 0)
{
v___y_1298_ = v___x_1326_;
goto v___jp_1297_;
}
else
{
uint8_t v___x_1327_; 
v___x_1327_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1296_);
if (v___x_1327_ == 0)
{
v___y_1298_ = v___x_1326_;
goto v___jp_1297_;
}
else
{
goto v___jp_1291_;
}
}
v___jp_1297_:
{
if (v___y_1298_ == 0)
{
goto v___jp_1291_;
}
else
{
lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1299_ = l_Lean_LocalDecl_value(v_val_1296_, v___x_1293_);
v___x_1300_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v___x_1299_, v___y_1282_, v___y_1284_);
if (lean_obj_tag(v___x_1300_) == 0)
{
lean_object* v_a_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v_givenNames_1304_; lean_object* v_decls_1305_; lean_object* v_valueMap_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1317_; 
v_a_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc(v_a_1301_);
lean_dec_ref(v___x_1300_);
v___x_1302_ = lean_st_ref_get(v___y_1284_);
lean_dec(v___x_1302_);
v___x_1303_ = lean_st_ref_take(v___y_1280_);
v_givenNames_1304_ = lean_ctor_get(v___x_1303_, 0);
v_decls_1305_ = lean_ctor_get(v___x_1303_, 1);
v_valueMap_1306_ = lean_ctor_get(v___x_1303_, 2);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1303_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1308_ = v___x_1303_;
v_isShared_1309_ = v_isSharedCheck_1317_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_valueMap_1306_);
lean_inc(v_decls_1305_);
lean_inc(v_givenNames_1304_);
lean_dec(v___x_1303_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1317_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1313_; 
v___x_1310_ = l_Lean_LocalDecl_fvarId(v_val_1296_);
v___x_1311_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_1306_, v_a_1301_, v___x_1310_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 2, v___x_1311_);
v___x_1313_ = v___x_1308_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_givenNames_1304_);
lean_ctor_set(v_reuseFailAlloc_1316_, 1, v_decls_1305_);
lean_ctor_set(v_reuseFailAlloc_1316_, 2, v___x_1311_);
v___x_1313_ = v_reuseFailAlloc_1316_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = lean_st_ref_set(v___y_1280_, v___x_1313_);
v___x_1315_ = lean_box(0);
v_a_1287_ = v___x_1315_;
goto v___jp_1286_;
}
}
}
else
{
lean_object* v_a_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
v_a_1318_ = lean_ctor_get(v___x_1300_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1300_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1300_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_a_1318_);
lean_dec(v___x_1300_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_a_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1328_; 
v___x_1328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1328_, 0, v_b_1277_);
return v___x_1328_;
}
v___jp_1286_:
{
size_t v___x_1288_; size_t v___x_1289_; 
v___x_1288_ = ((size_t)1ULL);
v___x_1289_ = lean_usize_add(v_i_1275_, v___x_1288_);
v_i_1275_ = v___x_1289_;
v_b_1277_ = v_a_1287_;
goto _start;
}
v___jp_1291_:
{
lean_object* v___x_1292_; 
v___x_1292_ = lean_box(0);
v_a_1287_ = v___x_1292_;
goto v___jp_1286_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6___boxed(lean_object* v_as_1329_, lean_object* v_i_1330_, lean_object* v_stop_1331_, lean_object* v_b_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_){
_start:
{
size_t v_i_boxed_1341_; size_t v_stop_boxed_1342_; lean_object* v_res_1343_; 
v_i_boxed_1341_ = lean_unbox_usize(v_i_1330_);
lean_dec(v_i_1330_);
v_stop_boxed_1342_ = lean_unbox_usize(v_stop_1331_);
lean_dec(v_stop_1331_);
v_res_1343_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(v_as_1329_, v_i_boxed_1341_, v_stop_boxed_1342_, v_b_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_, v___y_1339_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
lean_dec(v___y_1337_);
lean_dec_ref(v___y_1336_);
lean_dec(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec_ref(v_as_1329_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(lean_object* v_as_1344_, size_t v_i_1345_, size_t v_stop_1346_, lean_object* v_b_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_){
_start:
{
lean_object* v_a_1357_; uint8_t v___x_1363_; 
v___x_1363_ = lean_usize_dec_eq(v_i_1345_, v_stop_1346_);
if (v___x_1363_ == 0)
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_array_uget_borrowed(v_as_1344_, v_i_1345_);
if (lean_obj_tag(v___x_1364_) == 0)
{
lean_object* v___x_1365_; 
v___x_1365_ = lean_box(0);
v_a_1357_ = v___x_1365_;
goto v___jp_1356_;
}
else
{
lean_object* v_val_1366_; uint8_t v___y_1368_; uint8_t v___x_1396_; 
v_val_1366_ = lean_ctor_get(v___x_1364_, 0);
v___x_1396_ = l_Lean_LocalDecl_isLet(v_val_1366_, v___x_1363_);
if (v___x_1396_ == 0)
{
v___y_1368_ = v___x_1396_;
goto v___jp_1367_;
}
else
{
uint8_t v___x_1397_; 
v___x_1397_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1366_);
if (v___x_1397_ == 0)
{
v___y_1368_ = v___x_1396_;
goto v___jp_1367_;
}
else
{
goto v___jp_1361_;
}
}
v___jp_1367_:
{
if (v___y_1368_ == 0)
{
goto v___jp_1361_;
}
else
{
lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1369_ = l_Lean_LocalDecl_value(v_val_1366_, v___x_1363_);
v___x_1370_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v___x_1369_, v___y_1352_, v___y_1354_);
if (lean_obj_tag(v___x_1370_) == 0)
{
lean_object* v_a_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v_givenNames_1374_; lean_object* v_decls_1375_; lean_object* v_valueMap_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1387_; 
v_a_1371_ = lean_ctor_get(v___x_1370_, 0);
lean_inc(v_a_1371_);
lean_dec_ref(v___x_1370_);
v___x_1372_ = lean_st_ref_get(v___y_1354_);
lean_dec(v___x_1372_);
v___x_1373_ = lean_st_ref_take(v___y_1350_);
v_givenNames_1374_ = lean_ctor_get(v___x_1373_, 0);
v_decls_1375_ = lean_ctor_get(v___x_1373_, 1);
v_valueMap_1376_ = lean_ctor_get(v___x_1373_, 2);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1373_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1378_ = v___x_1373_;
v_isShared_1379_ = v_isSharedCheck_1387_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_valueMap_1376_);
lean_inc(v_decls_1375_);
lean_inc(v_givenNames_1374_);
lean_dec(v___x_1373_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1387_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1380_ = l_Lean_LocalDecl_fvarId(v_val_1366_);
v___x_1381_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_addDecl_spec__0___redArg(v_valueMap_1376_, v_a_1371_, v___x_1380_);
if (v_isShared_1379_ == 0)
{
lean_ctor_set(v___x_1378_, 2, v___x_1381_);
v___x_1383_ = v___x_1378_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_givenNames_1374_);
lean_ctor_set(v_reuseFailAlloc_1386_, 1, v_decls_1375_);
lean_ctor_set(v_reuseFailAlloc_1386_, 2, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
lean_object* v___x_1384_; lean_object* v___x_1385_; 
v___x_1384_ = lean_st_ref_set(v___y_1350_, v___x_1383_);
v___x_1385_ = lean_box(0);
v_a_1357_ = v___x_1385_;
goto v___jp_1356_;
}
}
}
else
{
lean_object* v_a_1388_; lean_object* v___x_1390_; uint8_t v_isShared_1391_; uint8_t v_isSharedCheck_1395_; 
v_a_1388_ = lean_ctor_get(v___x_1370_, 0);
v_isSharedCheck_1395_ = !lean_is_exclusive(v___x_1370_);
if (v_isSharedCheck_1395_ == 0)
{
v___x_1390_ = v___x_1370_;
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
else
{
lean_inc(v_a_1388_);
lean_dec(v___x_1370_);
v___x_1390_ = lean_box(0);
v_isShared_1391_ = v_isSharedCheck_1395_;
goto v_resetjp_1389_;
}
v_resetjp_1389_:
{
lean_object* v___x_1393_; 
if (v_isShared_1391_ == 0)
{
v___x_1393_ = v___x_1390_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v_a_1388_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1398_; 
v___x_1398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1398_, 0, v_b_1347_);
return v___x_1398_;
}
v___jp_1356_:
{
size_t v___x_1358_; size_t v___x_1359_; lean_object* v___x_1360_; 
v___x_1358_ = ((size_t)1ULL);
v___x_1359_ = lean_usize_add(v_i_1345_, v___x_1358_);
v___x_1360_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3_spec__6(v_as_1344_, v___x_1359_, v_stop_1346_, v_a_1357_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
return v___x_1360_;
}
v___jp_1361_:
{
lean_object* v___x_1362_; 
v___x_1362_ = lean_box(0);
v_a_1357_ = v___x_1362_;
goto v___jp_1356_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3___boxed(lean_object* v_as_1399_, lean_object* v_i_1400_, lean_object* v_stop_1401_, lean_object* v_b_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
size_t v_i_boxed_1411_; size_t v_stop_boxed_1412_; lean_object* v_res_1413_; 
v_i_boxed_1411_ = lean_unbox_usize(v_i_1400_);
lean_dec(v_i_1400_);
v_stop_boxed_1412_ = lean_unbox_usize(v_stop_1401_);
lean_dec(v_stop_1401_);
v_res_1413_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_as_1399_, v_i_boxed_1411_, v_stop_boxed_1412_, v_b_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec(v___y_1404_);
lean_dec_ref(v___y_1403_);
lean_dec_ref(v_as_1399_);
return v_res_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(lean_object* v_x_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
if (lean_obj_tag(v_x_1414_) == 0)
{
lean_object* v_cs_1423_; lean_object* v___x_1425_; uint8_t v_isShared_1426_; uint8_t v_isSharedCheck_1444_; 
v_cs_1423_ = lean_ctor_get(v_x_1414_, 0);
v_isSharedCheck_1444_ = !lean_is_exclusive(v_x_1414_);
if (v_isSharedCheck_1444_ == 0)
{
v___x_1425_ = v_x_1414_;
v_isShared_1426_ = v_isSharedCheck_1444_;
goto v_resetjp_1424_;
}
else
{
lean_inc(v_cs_1423_);
lean_dec(v_x_1414_);
v___x_1425_ = lean_box(0);
v_isShared_1426_ = v_isSharedCheck_1444_;
goto v_resetjp_1424_;
}
v_resetjp_1424_:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; uint8_t v___x_1430_; 
v___x_1427_ = lean_unsigned_to_nat(0u);
v___x_1428_ = lean_array_get_size(v_cs_1423_);
v___x_1429_ = lean_box(0);
v___x_1430_ = lean_nat_dec_lt(v___x_1427_, v___x_1428_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1432_; 
lean_dec_ref(v_cs_1423_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v___x_1429_);
v___x_1432_ = v___x_1425_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1429_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
else
{
uint8_t v___x_1434_; 
v___x_1434_ = lean_nat_dec_le(v___x_1428_, v___x_1428_);
if (v___x_1434_ == 0)
{
if (v___x_1430_ == 0)
{
lean_object* v___x_1436_; 
lean_dec_ref(v_cs_1423_);
if (v_isShared_1426_ == 0)
{
lean_ctor_set(v___x_1425_, 0, v___x_1429_);
v___x_1436_ = v___x_1425_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v___x_1429_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
else
{
size_t v___x_1438_; size_t v___x_1439_; lean_object* v___x_1440_; 
lean_del_object(v___x_1425_);
v___x_1438_ = ((size_t)0ULL);
v___x_1439_ = lean_usize_of_nat(v___x_1428_);
v___x_1440_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_cs_1423_, v___x_1438_, v___x_1439_, v___x_1429_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
lean_dec_ref(v_cs_1423_);
return v___x_1440_;
}
}
else
{
size_t v___x_1441_; size_t v___x_1442_; lean_object* v___x_1443_; 
lean_del_object(v___x_1425_);
v___x_1441_ = ((size_t)0ULL);
v___x_1442_ = lean_usize_of_nat(v___x_1428_);
v___x_1443_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_cs_1423_, v___x_1441_, v___x_1442_, v___x_1429_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
lean_dec_ref(v_cs_1423_);
return v___x_1443_;
}
}
}
}
else
{
lean_object* v_vs_1445_; lean_object* v___x_1447_; uint8_t v_isShared_1448_; uint8_t v_isSharedCheck_1466_; 
v_vs_1445_ = lean_ctor_get(v_x_1414_, 0);
v_isSharedCheck_1466_ = !lean_is_exclusive(v_x_1414_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1447_ = v_x_1414_;
v_isShared_1448_ = v_isSharedCheck_1466_;
goto v_resetjp_1446_;
}
else
{
lean_inc(v_vs_1445_);
lean_dec(v_x_1414_);
v___x_1447_ = lean_box(0);
v_isShared_1448_ = v_isSharedCheck_1466_;
goto v_resetjp_1446_;
}
v_resetjp_1446_:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; uint8_t v___x_1452_; 
v___x_1449_ = lean_unsigned_to_nat(0u);
v___x_1450_ = lean_array_get_size(v_vs_1445_);
v___x_1451_ = lean_box(0);
v___x_1452_ = lean_nat_dec_lt(v___x_1449_, v___x_1450_);
if (v___x_1452_ == 0)
{
lean_object* v___x_1454_; 
lean_dec_ref(v_vs_1445_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1451_);
v___x_1454_ = v___x_1447_;
goto v_reusejp_1453_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1451_);
v___x_1454_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1453_;
}
v_reusejp_1453_:
{
return v___x_1454_;
}
}
else
{
uint8_t v___x_1456_; 
v___x_1456_ = lean_nat_dec_le(v___x_1450_, v___x_1450_);
if (v___x_1456_ == 0)
{
if (v___x_1452_ == 0)
{
lean_object* v___x_1458_; 
lean_dec_ref(v_vs_1445_);
if (v_isShared_1448_ == 0)
{
lean_ctor_set_tag(v___x_1447_, 0);
lean_ctor_set(v___x_1447_, 0, v___x_1451_);
v___x_1458_ = v___x_1447_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v___x_1451_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
else
{
size_t v___x_1460_; size_t v___x_1461_; lean_object* v___x_1462_; 
lean_del_object(v___x_1447_);
v___x_1460_ = ((size_t)0ULL);
v___x_1461_ = lean_usize_of_nat(v___x_1450_);
v___x_1462_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_vs_1445_, v___x_1460_, v___x_1461_, v___x_1451_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
lean_dec_ref(v_vs_1445_);
return v___x_1462_;
}
}
else
{
size_t v___x_1463_; size_t v___x_1464_; lean_object* v___x_1465_; 
lean_del_object(v___x_1447_);
v___x_1463_ = ((size_t)0ULL);
v___x_1464_ = lean_usize_of_nat(v___x_1450_);
v___x_1465_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_vs_1445_, v___x_1463_, v___x_1464_, v___x_1451_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_);
lean_dec_ref(v_vs_1445_);
return v___x_1465_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(lean_object* v_as_1467_, size_t v_i_1468_, size_t v_stop_1469_, lean_object* v_b_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_){
_start:
{
uint8_t v___x_1479_; 
v___x_1479_ = lean_usize_dec_eq(v_i_1468_, v_stop_1469_);
if (v___x_1479_ == 0)
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1480_ = lean_array_uget_borrowed(v_as_1467_, v_i_1468_);
lean_inc(v___x_1480_);
v___x_1481_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v___x_1480_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; size_t v___x_1483_; size_t v___x_1484_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
lean_inc(v_a_1482_);
lean_dec_ref(v___x_1481_);
v___x_1483_ = ((size_t)1ULL);
v___x_1484_ = lean_usize_add(v_i_1468_, v___x_1483_);
v_i_1468_ = v___x_1484_;
v_b_1470_ = v_a_1482_;
goto _start;
}
else
{
return v___x_1481_;
}
}
else
{
lean_object* v___x_1486_; 
v___x_1486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1486_, 0, v_b_1470_);
return v___x_1486_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4___boxed(lean_object* v_as_1487_, lean_object* v_i_1488_, lean_object* v_stop_1489_, lean_object* v_b_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_){
_start:
{
size_t v_i_boxed_1499_; size_t v_stop_boxed_1500_; lean_object* v_res_1501_; 
v_i_boxed_1499_ = lean_unbox_usize(v_i_1488_);
lean_dec(v_i_1488_);
v_stop_boxed_1500_ = lean_unbox_usize(v_stop_1489_);
lean_dec(v_stop_1489_);
v_res_1501_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_as_1487_, v_i_boxed_1499_, v_stop_boxed_1500_, v_b_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_, v___y_1497_);
lean_dec(v___y_1497_);
lean_dec_ref(v___y_1496_);
lean_dec(v___y_1495_);
lean_dec_ref(v___y_1494_);
lean_dec(v___y_1493_);
lean_dec(v___y_1492_);
lean_dec_ref(v___y_1491_);
lean_dec_ref(v_as_1487_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3___boxed(lean_object* v_x_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_){
_start:
{
lean_object* v_res_1511_; 
v_res_1511_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v_x_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_);
lean_dec(v___y_1509_);
lean_dec_ref(v___y_1508_);
lean_dec(v___y_1507_);
lean_dec_ref(v___y_1506_);
lean_dec(v___y_1505_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(lean_object* v_t_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_){
_start:
{
lean_object* v_root_1521_; lean_object* v_tail_1522_; lean_object* v___x_1523_; 
v_root_1521_ = lean_ctor_get(v_t_1512_, 0);
lean_inc_ref(v_root_1521_);
v_tail_1522_ = lean_ctor_get(v_t_1512_, 1);
lean_inc_ref(v_tail_1522_);
lean_dec_ref(v_t_1512_);
v___x_1523_ = l_Lean_PersistentArray_forMAux___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__3(v_root_1521_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v___x_1525_; uint8_t v_isShared_1526_; uint8_t v_isSharedCheck_1544_; 
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1523_);
if (v_isSharedCheck_1544_ == 0)
{
lean_object* v_unused_1545_; 
v_unused_1545_ = lean_ctor_get(v___x_1523_, 0);
lean_dec(v_unused_1545_);
v___x_1525_ = v___x_1523_;
v_isShared_1526_ = v_isSharedCheck_1544_;
goto v_resetjp_1524_;
}
else
{
lean_dec(v___x_1523_);
v___x_1525_ = lean_box(0);
v_isShared_1526_ = v_isSharedCheck_1544_;
goto v_resetjp_1524_;
}
v_resetjp_1524_:
{
lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; 
v___x_1527_ = lean_unsigned_to_nat(0u);
v___x_1528_ = lean_array_get_size(v_tail_1522_);
v___x_1529_ = lean_box(0);
v___x_1530_ = lean_nat_dec_lt(v___x_1527_, v___x_1528_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1532_; 
lean_dec_ref(v_tail_1522_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___x_1529_);
v___x_1532_ = v___x_1525_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1529_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
else
{
uint8_t v___x_1534_; 
v___x_1534_ = lean_nat_dec_le(v___x_1528_, v___x_1528_);
if (v___x_1534_ == 0)
{
if (v___x_1530_ == 0)
{
lean_object* v___x_1536_; 
lean_dec_ref(v_tail_1522_);
if (v_isShared_1526_ == 0)
{
lean_ctor_set(v___x_1525_, 0, v___x_1529_);
v___x_1536_ = v___x_1525_;
goto v_reusejp_1535_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v___x_1529_);
v___x_1536_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1535_;
}
v_reusejp_1535_:
{
return v___x_1536_;
}
}
else
{
size_t v___x_1538_; size_t v___x_1539_; lean_object* v___x_1540_; 
lean_del_object(v___x_1525_);
v___x_1538_ = ((size_t)0ULL);
v___x_1539_ = lean_usize_of_nat(v___x_1528_);
v___x_1540_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1522_, v___x_1538_, v___x_1539_, v___x_1529_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
lean_dec_ref(v_tail_1522_);
return v___x_1540_;
}
}
else
{
size_t v___x_1541_; size_t v___x_1542_; lean_object* v___x_1543_; 
lean_del_object(v___x_1525_);
v___x_1541_ = ((size_t)0ULL);
v___x_1542_ = lean_usize_of_nat(v___x_1528_);
v___x_1543_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1522_, v___x_1541_, v___x_1542_, v___x_1529_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_);
lean_dec_ref(v_tail_1522_);
return v___x_1543_;
}
}
}
}
else
{
lean_dec_ref(v_tail_1522_);
return v___x_1523_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4___boxed(lean_object* v_t_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_){
_start:
{
lean_object* v_res_1555_; 
v_res_1555_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(v_t_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_);
lean_dec(v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec(v___y_1548_);
lean_dec_ref(v___y_1547_);
return v_res_1555_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1556_; 
v___x_1556_ = l_Lean_instInhabitedPersistentArrayNode_default(lean_box(0));
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(lean_object* v_x_1557_, size_t v_x_1558_, size_t v_x_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
if (lean_obj_tag(v_x_1557_) == 0)
{
lean_object* v_cs_1568_; lean_object* v___x_1569_; size_t v___x_1570_; lean_object* v_j_1571_; lean_object* v___x_1572_; size_t v___x_1573_; size_t v___x_1574_; size_t v___x_1575_; size_t v___x_1576_; size_t v___x_1577_; size_t v___x_1578_; lean_object* v___x_1579_; 
v_cs_1568_ = lean_ctor_get(v_x_1557_, 0);
lean_inc_ref(v_cs_1568_);
lean_dec_ref(v_x_1557_);
v___x_1569_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___closed__0);
v___x_1570_ = lean_usize_shift_right(v_x_1558_, v_x_1559_);
v_j_1571_ = lean_usize_to_nat(v___x_1570_);
v___x_1572_ = lean_array_get_borrowed(v___x_1569_, v_cs_1568_, v_j_1571_);
v___x_1573_ = ((size_t)1ULL);
v___x_1574_ = lean_usize_shift_left(v___x_1573_, v_x_1559_);
v___x_1575_ = lean_usize_sub(v___x_1574_, v___x_1573_);
v___x_1576_ = lean_usize_land(v_x_1558_, v___x_1575_);
v___x_1577_ = ((size_t)5ULL);
v___x_1578_ = lean_usize_sub(v_x_1559_, v___x_1577_);
lean_inc(v___x_1572_);
v___x_1579_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v___x_1572_, v___x_1576_, v___x_1578_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
if (lean_obj_tag(v___x_1579_) == 0)
{
lean_object* v___x_1581_; uint8_t v_isShared_1582_; uint8_t v_isSharedCheck_1601_; 
v_isSharedCheck_1601_ = !lean_is_exclusive(v___x_1579_);
if (v_isSharedCheck_1601_ == 0)
{
lean_object* v_unused_1602_; 
v_unused_1602_ = lean_ctor_get(v___x_1579_, 0);
lean_dec(v_unused_1602_);
v___x_1581_ = v___x_1579_;
v_isShared_1582_ = v_isSharedCheck_1601_;
goto v_resetjp_1580_;
}
else
{
lean_dec(v___x_1579_);
v___x_1581_ = lean_box(0);
v_isShared_1582_ = v_isSharedCheck_1601_;
goto v_resetjp_1580_;
}
v_resetjp_1580_:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; uint8_t v___x_1587_; 
v___x_1583_ = lean_unsigned_to_nat(1u);
v___x_1584_ = lean_nat_add(v_j_1571_, v___x_1583_);
lean_dec(v_j_1571_);
v___x_1585_ = lean_array_get_size(v_cs_1568_);
v___x_1586_ = lean_box(0);
v___x_1587_ = lean_nat_dec_lt(v___x_1584_, v___x_1585_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1589_; 
lean_dec(v___x_1584_);
lean_dec_ref(v_cs_1568_);
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 0, v___x_1586_);
v___x_1589_ = v___x_1581_;
goto v_reusejp_1588_;
}
else
{
lean_object* v_reuseFailAlloc_1590_; 
v_reuseFailAlloc_1590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1590_, 0, v___x_1586_);
v___x_1589_ = v_reuseFailAlloc_1590_;
goto v_reusejp_1588_;
}
v_reusejp_1588_:
{
return v___x_1589_;
}
}
else
{
uint8_t v___x_1591_; 
v___x_1591_ = lean_nat_dec_le(v___x_1585_, v___x_1585_);
if (v___x_1591_ == 0)
{
if (v___x_1587_ == 0)
{
lean_object* v___x_1593_; 
lean_dec(v___x_1584_);
lean_dec_ref(v_cs_1568_);
if (v_isShared_1582_ == 0)
{
lean_ctor_set(v___x_1581_, 0, v___x_1586_);
v___x_1593_ = v___x_1581_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v___x_1586_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
else
{
size_t v___x_1595_; size_t v___x_1596_; lean_object* v___x_1597_; 
lean_del_object(v___x_1581_);
v___x_1595_ = lean_usize_of_nat(v___x_1584_);
lean_dec(v___x_1584_);
v___x_1596_ = lean_usize_of_nat(v___x_1585_);
v___x_1597_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_cs_1568_, v___x_1595_, v___x_1596_, v___x_1586_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
lean_dec_ref(v_cs_1568_);
return v___x_1597_;
}
}
else
{
size_t v___x_1598_; size_t v___x_1599_; lean_object* v___x_1600_; 
lean_del_object(v___x_1581_);
v___x_1598_ = lean_usize_of_nat(v___x_1584_);
lean_dec(v___x_1584_);
v___x_1599_ = lean_usize_of_nat(v___x_1585_);
v___x_1600_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2_spec__4(v_cs_1568_, v___x_1598_, v___x_1599_, v___x_1586_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
lean_dec_ref(v_cs_1568_);
return v___x_1600_;
}
}
}
}
else
{
lean_dec(v_j_1571_);
lean_dec_ref(v_cs_1568_);
return v___x_1579_;
}
}
else
{
lean_object* v_vs_1603_; lean_object* v___x_1605_; uint8_t v_isShared_1606_; uint8_t v_isSharedCheck_1624_; 
v_vs_1603_ = lean_ctor_get(v_x_1557_, 0);
v_isSharedCheck_1624_ = !lean_is_exclusive(v_x_1557_);
if (v_isSharedCheck_1624_ == 0)
{
v___x_1605_ = v_x_1557_;
v_isShared_1606_ = v_isSharedCheck_1624_;
goto v_resetjp_1604_;
}
else
{
lean_inc(v_vs_1603_);
lean_dec(v_x_1557_);
v___x_1605_ = lean_box(0);
v_isShared_1606_ = v_isSharedCheck_1624_;
goto v_resetjp_1604_;
}
v_resetjp_1604_:
{
lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; uint8_t v___x_1610_; 
v___x_1607_ = lean_usize_to_nat(v_x_1558_);
v___x_1608_ = lean_array_get_size(v_vs_1603_);
v___x_1609_ = lean_box(0);
v___x_1610_ = lean_nat_dec_lt(v___x_1607_, v___x_1608_);
if (v___x_1610_ == 0)
{
lean_object* v___x_1612_; 
lean_dec(v___x_1607_);
lean_dec_ref(v_vs_1603_);
if (v_isShared_1606_ == 0)
{
lean_ctor_set_tag(v___x_1605_, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1609_);
v___x_1612_ = v___x_1605_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1609_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
else
{
uint8_t v___x_1614_; 
v___x_1614_ = lean_nat_dec_le(v___x_1608_, v___x_1608_);
if (v___x_1614_ == 0)
{
if (v___x_1610_ == 0)
{
lean_object* v___x_1616_; 
lean_dec(v___x_1607_);
lean_dec_ref(v_vs_1603_);
if (v_isShared_1606_ == 0)
{
lean_ctor_set_tag(v___x_1605_, 0);
lean_ctor_set(v___x_1605_, 0, v___x_1609_);
v___x_1616_ = v___x_1605_;
goto v_reusejp_1615_;
}
else
{
lean_object* v_reuseFailAlloc_1617_; 
v_reuseFailAlloc_1617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1617_, 0, v___x_1609_);
v___x_1616_ = v_reuseFailAlloc_1617_;
goto v_reusejp_1615_;
}
v_reusejp_1615_:
{
return v___x_1616_;
}
}
else
{
size_t v___x_1618_; size_t v___x_1619_; lean_object* v___x_1620_; 
lean_del_object(v___x_1605_);
v___x_1618_ = lean_usize_of_nat(v___x_1607_);
lean_dec(v___x_1607_);
v___x_1619_ = lean_usize_of_nat(v___x_1608_);
v___x_1620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_vs_1603_, v___x_1618_, v___x_1619_, v___x_1609_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
lean_dec_ref(v_vs_1603_);
return v___x_1620_;
}
}
else
{
size_t v___x_1621_; size_t v___x_1622_; lean_object* v___x_1623_; 
lean_del_object(v___x_1605_);
v___x_1621_ = lean_usize_of_nat(v___x_1607_);
lean_dec(v___x_1607_);
v___x_1622_ = lean_usize_of_nat(v___x_1608_);
v___x_1623_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_vs_1603_, v___x_1621_, v___x_1622_, v___x_1609_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
lean_dec_ref(v_vs_1603_);
return v___x_1623_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2___boxed(lean_object* v_x_1625_, lean_object* v_x_1626_, lean_object* v_x_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_){
_start:
{
size_t v_x_11241__boxed_1636_; size_t v_x_11242__boxed_1637_; lean_object* v_res_1638_; 
v_x_11241__boxed_1636_ = lean_unbox_usize(v_x_1626_);
lean_dec(v_x_1626_);
v_x_11242__boxed_1637_ = lean_unbox_usize(v_x_1627_);
lean_dec(v_x_1627_);
v_res_1638_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v_x_1625_, v_x_11241__boxed_1636_, v_x_11242__boxed_1637_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
return v_res_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(lean_object* v_t_1639_, lean_object* v_start_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_){
_start:
{
lean_object* v___x_1649_; uint8_t v___x_1650_; 
v___x_1649_ = lean_unsigned_to_nat(0u);
v___x_1650_ = lean_nat_dec_eq(v_start_1640_, v___x_1649_);
if (v___x_1650_ == 0)
{
lean_object* v_root_1651_; lean_object* v_tail_1652_; size_t v_shift_1653_; lean_object* v_tailOff_1654_; uint8_t v___x_1655_; 
v_root_1651_ = lean_ctor_get(v_t_1639_, 0);
lean_inc_ref(v_root_1651_);
v_tail_1652_ = lean_ctor_get(v_t_1639_, 1);
lean_inc_ref(v_tail_1652_);
v_shift_1653_ = lean_ctor_get_usize(v_t_1639_, 4);
v_tailOff_1654_ = lean_ctor_get(v_t_1639_, 3);
lean_inc(v_tailOff_1654_);
lean_dec_ref(v_t_1639_);
v___x_1655_ = lean_nat_dec_le(v_tailOff_1654_, v_start_1640_);
if (v___x_1655_ == 0)
{
size_t v___x_1656_; lean_object* v___x_1657_; 
lean_dec(v_tailOff_1654_);
v___x_1656_ = lean_usize_of_nat(v_start_1640_);
v___x_1657_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__2(v_root_1651_, v___x_1656_, v_shift_1653_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
if (lean_obj_tag(v___x_1657_) == 0)
{
lean_object* v___x_1659_; uint8_t v_isShared_1660_; uint8_t v_isSharedCheck_1677_; 
v_isSharedCheck_1677_ = !lean_is_exclusive(v___x_1657_);
if (v_isSharedCheck_1677_ == 0)
{
lean_object* v_unused_1678_; 
v_unused_1678_ = lean_ctor_get(v___x_1657_, 0);
lean_dec(v_unused_1678_);
v___x_1659_ = v___x_1657_;
v_isShared_1660_ = v_isSharedCheck_1677_;
goto v_resetjp_1658_;
}
else
{
lean_dec(v___x_1657_);
v___x_1659_ = lean_box(0);
v_isShared_1660_ = v_isSharedCheck_1677_;
goto v_resetjp_1658_;
}
v_resetjp_1658_:
{
lean_object* v___x_1661_; lean_object* v___x_1662_; uint8_t v___x_1663_; 
v___x_1661_ = lean_array_get_size(v_tail_1652_);
v___x_1662_ = lean_box(0);
v___x_1663_ = lean_nat_dec_lt(v___x_1649_, v___x_1661_);
if (v___x_1663_ == 0)
{
lean_object* v___x_1665_; 
lean_dec_ref(v_tail_1652_);
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 0, v___x_1662_);
v___x_1665_ = v___x_1659_;
goto v_reusejp_1664_;
}
else
{
lean_object* v_reuseFailAlloc_1666_; 
v_reuseFailAlloc_1666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1666_, 0, v___x_1662_);
v___x_1665_ = v_reuseFailAlloc_1666_;
goto v_reusejp_1664_;
}
v_reusejp_1664_:
{
return v___x_1665_;
}
}
else
{
uint8_t v___x_1667_; 
v___x_1667_ = lean_nat_dec_le(v___x_1661_, v___x_1661_);
if (v___x_1667_ == 0)
{
if (v___x_1663_ == 0)
{
lean_object* v___x_1669_; 
lean_dec_ref(v_tail_1652_);
if (v_isShared_1660_ == 0)
{
lean_ctor_set(v___x_1659_, 0, v___x_1662_);
v___x_1669_ = v___x_1659_;
goto v_reusejp_1668_;
}
else
{
lean_object* v_reuseFailAlloc_1670_; 
v_reuseFailAlloc_1670_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1670_, 0, v___x_1662_);
v___x_1669_ = v_reuseFailAlloc_1670_;
goto v_reusejp_1668_;
}
v_reusejp_1668_:
{
return v___x_1669_;
}
}
else
{
size_t v___x_1671_; size_t v___x_1672_; lean_object* v___x_1673_; 
lean_del_object(v___x_1659_);
v___x_1671_ = ((size_t)0ULL);
v___x_1672_ = lean_usize_of_nat(v___x_1661_);
v___x_1673_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1652_, v___x_1671_, v___x_1672_, v___x_1662_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec_ref(v_tail_1652_);
return v___x_1673_;
}
}
else
{
size_t v___x_1674_; size_t v___x_1675_; lean_object* v___x_1676_; 
lean_del_object(v___x_1659_);
v___x_1674_ = ((size_t)0ULL);
v___x_1675_ = lean_usize_of_nat(v___x_1661_);
v___x_1676_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1652_, v___x_1674_, v___x_1675_, v___x_1662_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec_ref(v_tail_1652_);
return v___x_1676_;
}
}
}
}
else
{
lean_dec_ref(v_tail_1652_);
return v___x_1657_;
}
}
else
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; uint8_t v___x_1682_; 
lean_dec_ref(v_root_1651_);
v___x_1679_ = lean_nat_sub(v_start_1640_, v_tailOff_1654_);
lean_dec(v_tailOff_1654_);
v___x_1680_ = lean_array_get_size(v_tail_1652_);
v___x_1681_ = lean_box(0);
v___x_1682_ = lean_nat_dec_lt(v___x_1679_, v___x_1680_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; 
lean_dec(v___x_1679_);
lean_dec_ref(v_tail_1652_);
v___x_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1683_, 0, v___x_1681_);
return v___x_1683_;
}
else
{
uint8_t v___x_1684_; 
v___x_1684_ = lean_nat_dec_le(v___x_1680_, v___x_1680_);
if (v___x_1684_ == 0)
{
if (v___x_1682_ == 0)
{
lean_object* v___x_1685_; 
lean_dec(v___x_1679_);
lean_dec_ref(v_tail_1652_);
v___x_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1685_, 0, v___x_1681_);
return v___x_1685_;
}
else
{
size_t v___x_1686_; size_t v___x_1687_; lean_object* v___x_1688_; 
v___x_1686_ = lean_usize_of_nat(v___x_1679_);
lean_dec(v___x_1679_);
v___x_1687_ = lean_usize_of_nat(v___x_1680_);
v___x_1688_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1652_, v___x_1686_, v___x_1687_, v___x_1681_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec_ref(v_tail_1652_);
return v___x_1688_;
}
}
else
{
size_t v___x_1689_; size_t v___x_1690_; lean_object* v___x_1691_; 
v___x_1689_ = lean_usize_of_nat(v___x_1679_);
lean_dec(v___x_1679_);
v___x_1690_ = lean_usize_of_nat(v___x_1680_);
v___x_1691_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__3(v_tail_1652_, v___x_1689_, v___x_1690_, v___x_1681_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec_ref(v_tail_1652_);
return v___x_1691_;
}
}
}
}
else
{
lean_object* v___x_1692_; 
v___x_1692_ = l_Lean_PersistentArray_forMFrom0___at___00Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1_spec__4(v_t_1639_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
return v___x_1692_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1___boxed(lean_object* v_t_1693_, lean_object* v_start_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(v_t_1693_, v_start_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
lean_dec(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v_start_1694_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(lean_object* v_lctx_1704_, lean_object* v_start_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_){
_start:
{
lean_object* v_decls_1714_; lean_object* v___x_1715_; 
v_decls_1714_ = lean_ctor_get(v_lctx_1704_, 1);
lean_inc_ref(v_decls_1714_);
lean_dec_ref(v_lctx_1704_);
v___x_1715_ = l_Lean_PersistentArray_forM___at___00Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1_spec__1(v_decls_1714_, v_start_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1___boxed(lean_object* v_lctx_1716_, lean_object* v_start_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(v_lctx_1716_, v_start_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_);
lean_dec(v___y_1724_);
lean_dec_ref(v___y_1723_);
lean_dec(v___y_1722_);
lean_dec_ref(v___y_1721_);
lean_dec(v___y_1720_);
lean_dec(v___y_1719_);
lean_dec_ref(v___y_1718_);
lean_dec(v_start_1717_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap(lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_, lean_object* v_a_1732_, lean_object* v_a_1733_){
_start:
{
lean_object* v_lctx_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; 
v_lctx_1735_ = lean_ctor_get(v_a_1730_, 2);
v___x_1736_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_lctx_1735_);
v___x_1737_ = l_Lean_LocalContext_forM___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__1(v_lctx_1735_, v___x_1736_, v_a_1727_, v_a_1728_, v_a_1729_, v_a_1730_, v_a_1731_, v_a_1732_, v_a_1733_);
return v___x_1737_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_initializeValueMap___boxed(lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lean_Meta_ExtractLets_initializeValueMap(v_a_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_);
lean_dec(v_a_1744_);
lean_dec_ref(v_a_1743_);
lean_dec(v_a_1742_);
lean_dec_ref(v_a_1741_);
lean_dec(v_a_1740_);
lean_dec(v_a_1739_);
lean_dec_ref(v_a_1738_);
return v_res_1746_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_containsLet___closed__0(void){
_start:
{
lean_object* v___f_1747_; 
v___f_1747_ = lean_alloc_closure((void*)(l_Lean_Expr_isLet___boxed), 1, 0);
return v___f_1747_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_ExtractLets_containsLet(lean_object* v_e_1748_){
_start:
{
lean_object* v___f_1749_; lean_object* v___x_1750_; 
v___f_1749_ = lean_obj_once(&l_Lean_Meta_ExtractLets_containsLet___closed__0, &l_Lean_Meta_ExtractLets_containsLet___closed__0_once, _init_l_Lean_Meta_ExtractLets_containsLet___closed__0);
v___x_1750_ = lean_find_expr(v___f_1749_, v_e_1748_);
if (lean_obj_tag(v___x_1750_) == 0)
{
uint8_t v___x_1751_; 
v___x_1751_ = 0;
return v___x_1751_;
}
else
{
uint8_t v___x_1752_; 
lean_dec_ref(v___x_1750_);
v___x_1752_ = 1;
return v___x_1752_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_containsLet___boxed(lean_object* v_e_1753_){
_start:
{
uint8_t v_res_1754_; lean_object* v_r_1755_; 
v_res_1754_ = l_Lean_Meta_ExtractLets_containsLet(v_e_1753_);
lean_dec_ref(v_e_1753_);
v_r_1755_ = lean_box(v_res_1754_);
return v_r_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(lean_object* v_k_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v_b_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_, lean_object* v___y_1764_){
_start:
{
lean_object* v___x_1766_; 
lean_inc(v___y_1764_);
lean_inc_ref(v___y_1763_);
lean_inc(v___y_1762_);
lean_inc_ref(v___y_1761_);
lean_inc(v___y_1759_);
lean_inc(v___y_1758_);
lean_inc_ref(v___y_1757_);
v___x_1766_ = lean_apply_9(v_k_1756_, v_b_1760_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1761_, v___y_1762_, v___y_1763_, v___y_1764_, lean_box(0));
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed(lean_object* v_k_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v_b_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0(v_k_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v_b_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1770_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(lean_object* v_name_1778_, uint8_t v_bi_1779_, lean_object* v_type_1780_, lean_object* v_k_1781_, uint8_t v_kind_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v___f_1791_; lean_object* v___x_1792_; 
lean_inc(v___y_1785_);
lean_inc(v___y_1784_);
lean_inc_ref(v___y_1783_);
v___f_1791_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_1791_, 0, v_k_1781_);
lean_closure_set(v___f_1791_, 1, v___y_1783_);
lean_closure_set(v___f_1791_, 2, v___y_1784_);
lean_closure_set(v___f_1791_, 3, v___y_1785_);
v___x_1792_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_1778_, v_bi_1779_, v_type_1780_, v___f_1791_, v_kind_1782_, v___y_1786_, v___y_1787_, v___y_1788_, v___y_1789_);
if (lean_obj_tag(v___x_1792_) == 0)
{
return v___x_1792_;
}
else
{
lean_object* v_a_1793_; lean_object* v___x_1795_; uint8_t v_isShared_1796_; uint8_t v_isSharedCheck_1800_; 
v_a_1793_ = lean_ctor_get(v___x_1792_, 0);
v_isSharedCheck_1800_ = !lean_is_exclusive(v___x_1792_);
if (v_isSharedCheck_1800_ == 0)
{
v___x_1795_ = v___x_1792_;
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
else
{
lean_inc(v_a_1793_);
lean_dec(v___x_1792_);
v___x_1795_ = lean_box(0);
v_isShared_1796_ = v_isSharedCheck_1800_;
goto v_resetjp_1794_;
}
v_resetjp_1794_:
{
lean_object* v___x_1798_; 
if (v_isShared_1796_ == 0)
{
v___x_1798_ = v___x_1795_;
goto v_reusejp_1797_;
}
else
{
lean_object* v_reuseFailAlloc_1799_; 
v_reuseFailAlloc_1799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1799_, 0, v_a_1793_);
v___x_1798_ = v_reuseFailAlloc_1799_;
goto v_reusejp_1797_;
}
v_reusejp_1797_:
{
return v___x_1798_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___boxed(lean_object* v_name_1801_, lean_object* v_bi_1802_, lean_object* v_type_1803_, lean_object* v_k_1804_, lean_object* v_kind_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_){
_start:
{
uint8_t v_bi_boxed_1814_; uint8_t v_kind_boxed_1815_; lean_object* v_res_1816_; 
v_bi_boxed_1814_ = lean_unbox(v_bi_1802_);
v_kind_boxed_1815_ = lean_unbox(v_kind_1805_);
v_res_1816_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_name_1801_, v_bi_boxed_1814_, v_type_1803_, v_k_1804_, v_kind_boxed_1815_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_);
lean_dec(v___y_1812_);
lean_dec_ref(v___y_1811_);
lean_dec(v___y_1810_);
lean_dec_ref(v___y_1809_);
lean_dec(v___y_1808_);
lean_dec(v___y_1807_);
lean_dec_ref(v___y_1806_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(lean_object* v_00_u03b1_1817_, lean_object* v_name_1818_, uint8_t v_bi_1819_, lean_object* v_type_1820_, lean_object* v_k_1821_, uint8_t v_kind_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v___x_1831_; 
v___x_1831_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_name_1818_, v_bi_1819_, v_type_1820_, v_k_1821_, v_kind_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
return v___x_1831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___boxed(lean_object* v_00_u03b1_1832_, lean_object* v_name_1833_, lean_object* v_bi_1834_, lean_object* v_type_1835_, lean_object* v_k_1836_, lean_object* v_kind_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_, lean_object* v___y_1845_){
_start:
{
uint8_t v_bi_boxed_1846_; uint8_t v_kind_boxed_1847_; lean_object* v_res_1848_; 
v_bi_boxed_1846_ = lean_unbox(v_bi_1834_);
v_kind_boxed_1847_ = lean_unbox(v_kind_1837_);
v_res_1848_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0(v_00_u03b1_1832_, v_name_1833_, v_bi_boxed_1846_, v_type_1835_, v_k_1836_, v_kind_boxed_1847_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_);
lean_dec(v___y_1844_);
lean_dec_ref(v___y_1843_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec(v___y_1839_);
lean_dec_ref(v___y_1838_);
return v_res_1848_;
}
}
LEAN_EXPORT uint8_t l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(uint8_t v___y_1849_, uint8_t v___y_1850_){
_start:
{
if (v___y_1849_ == 0)
{
if (v___y_1850_ == 0)
{
uint8_t v___x_1851_; 
v___x_1851_ = 1;
return v___x_1851_;
}
else
{
return v___y_1849_;
}
}
else
{
return v___y_1850_;
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed(lean_object* v___y_1852_, lean_object* v___y_1853_){
_start:
{
uint8_t v___y_51408__boxed_1854_; uint8_t v___y_51409__boxed_1855_; uint8_t v_res_1856_; lean_object* v_r_1857_; 
v___y_51408__boxed_1854_ = lean_unbox(v___y_1852_);
v___y_51409__boxed_1855_ = lean_unbox(v___y_1853_);
v_res_1856_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0(v___y_51408__boxed_1854_, v___y_51409__boxed_1855_);
v_r_1857_ = lean_box(v_res_1856_);
return v_r_1857_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1858_; 
v___x_1858_ = l_instMonadEIO(lean_box(0));
return v___x_1858_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1(void){
_start:
{
lean_object* v___f_1859_; 
v___f_1859_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_1859_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2(void){
_start:
{
lean_object* v___f_1860_; 
v___f_1860_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_1860_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1861_; 
v___x_1861_ = lean_alloc_closure((void*)(l_Lean_ExprStructEq_beq___boxed), 2, 0);
return v___x_1861_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4(void){
_start:
{
lean_object* v___f_1862_; 
v___f_1862_ = lean_alloc_closure((void*)(l_instHashableBool___lam__0___boxed), 1, 0);
return v___f_1862_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5(void){
_start:
{
lean_object* v___x_1863_; 
v___x_1863_ = lean_alloc_closure((void*)(l_Lean_ExprStructEq_hash___boxed), 1, 0);
return v___x_1863_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6(void){
_start:
{
lean_object* v___f_1864_; 
v___f_1864_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_1864_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7(void){
_start:
{
lean_object* v___f_1865_; 
v___f_1865_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_1865_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(lean_object* v_msg_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v_toApplicative_1878_; lean_object* v___x_1880_; uint8_t v_isShared_1881_; uint8_t v_isSharedCheck_1949_; 
v___x_1875_ = lean_box(0);
v___x_1876_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__0);
v___x_1877_ = l_StateRefT_x27_instMonad___redArg(v___x_1876_);
v_toApplicative_1878_ = lean_ctor_get(v___x_1877_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1877_);
if (v_isSharedCheck_1949_ == 0)
{
lean_object* v_unused_1950_; 
v_unused_1950_ = lean_ctor_get(v___x_1877_, 1);
lean_dec(v_unused_1950_);
v___x_1880_ = v___x_1877_;
v_isShared_1881_ = v_isSharedCheck_1949_;
goto v_resetjp_1879_;
}
else
{
lean_inc(v_toApplicative_1878_);
lean_dec(v___x_1877_);
v___x_1880_ = lean_box(0);
v_isShared_1881_ = v_isSharedCheck_1949_;
goto v_resetjp_1879_;
}
v_resetjp_1879_:
{
lean_object* v_toFunctor_1882_; lean_object* v_toSeq_1883_; lean_object* v_toSeqLeft_1884_; lean_object* v_toSeqRight_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1947_; 
v_toFunctor_1882_ = lean_ctor_get(v_toApplicative_1878_, 0);
v_toSeq_1883_ = lean_ctor_get(v_toApplicative_1878_, 2);
v_toSeqLeft_1884_ = lean_ctor_get(v_toApplicative_1878_, 3);
v_toSeqRight_1885_ = lean_ctor_get(v_toApplicative_1878_, 4);
v_isSharedCheck_1947_ = !lean_is_exclusive(v_toApplicative_1878_);
if (v_isSharedCheck_1947_ == 0)
{
lean_object* v_unused_1948_; 
v_unused_1948_ = lean_ctor_get(v_toApplicative_1878_, 1);
lean_dec(v_unused_1948_);
v___x_1887_ = v_toApplicative_1878_;
v_isShared_1888_ = v_isSharedCheck_1947_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_toSeqRight_1885_);
lean_inc(v_toSeqLeft_1884_);
lean_inc(v_toSeq_1883_);
lean_inc(v_toFunctor_1882_);
lean_dec(v_toApplicative_1878_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1947_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___f_1889_; lean_object* v___f_1890_; lean_object* v___f_1891_; lean_object* v___f_1892_; lean_object* v___x_1893_; lean_object* v___f_1894_; lean_object* v___f_1895_; lean_object* v___f_1896_; lean_object* v___x_1898_; 
v___f_1889_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__1);
v___f_1890_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__2);
lean_inc_ref(v_toFunctor_1882_);
v___f_1891_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1891_, 0, v_toFunctor_1882_);
v___f_1892_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1892_, 0, v_toFunctor_1882_);
v___x_1893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1893_, 0, v___f_1891_);
lean_ctor_set(v___x_1893_, 1, v___f_1892_);
v___f_1894_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1894_, 0, v_toSeqRight_1885_);
v___f_1895_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1895_, 0, v_toSeqLeft_1884_);
v___f_1896_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1896_, 0, v_toSeq_1883_);
if (v_isShared_1888_ == 0)
{
lean_ctor_set(v___x_1887_, 4, v___f_1894_);
lean_ctor_set(v___x_1887_, 3, v___f_1895_);
lean_ctor_set(v___x_1887_, 2, v___f_1896_);
lean_ctor_set(v___x_1887_, 1, v___f_1889_);
lean_ctor_set(v___x_1887_, 0, v___x_1893_);
v___x_1898_ = v___x_1887_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1946_; 
v_reuseFailAlloc_1946_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1946_, 0, v___x_1893_);
lean_ctor_set(v_reuseFailAlloc_1946_, 1, v___f_1889_);
lean_ctor_set(v_reuseFailAlloc_1946_, 2, v___f_1896_);
lean_ctor_set(v_reuseFailAlloc_1946_, 3, v___f_1895_);
lean_ctor_set(v_reuseFailAlloc_1946_, 4, v___f_1894_);
v___x_1898_ = v_reuseFailAlloc_1946_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
lean_object* v___x_1900_; 
if (v_isShared_1881_ == 0)
{
lean_ctor_set(v___x_1880_, 1, v___f_1890_);
lean_ctor_set(v___x_1880_, 0, v___x_1898_);
v___x_1900_ = v___x_1880_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1945_; 
v_reuseFailAlloc_1945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1945_, 0, v___x_1898_);
lean_ctor_set(v_reuseFailAlloc_1945_, 1, v___f_1890_);
v___x_1900_ = v_reuseFailAlloc_1945_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
lean_object* v___x_1901_; lean_object* v_toApplicative_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1943_; 
v___x_1901_ = l_StateRefT_x27_instMonad___redArg(v___x_1900_);
v_toApplicative_1902_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1943_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1943_ == 0)
{
lean_object* v_unused_1944_; 
v_unused_1944_ = lean_ctor_get(v___x_1901_, 1);
lean_dec(v_unused_1944_);
v___x_1904_ = v___x_1901_;
v_isShared_1905_ = v_isSharedCheck_1943_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_toApplicative_1902_);
lean_dec(v___x_1901_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1943_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v_toFunctor_1906_; lean_object* v_toSeq_1907_; lean_object* v_toSeqLeft_1908_; lean_object* v_toSeqRight_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1941_; 
v_toFunctor_1906_ = lean_ctor_get(v_toApplicative_1902_, 0);
v_toSeq_1907_ = lean_ctor_get(v_toApplicative_1902_, 2);
v_toSeqLeft_1908_ = lean_ctor_get(v_toApplicative_1902_, 3);
v_toSeqRight_1909_ = lean_ctor_get(v_toApplicative_1902_, 4);
v_isSharedCheck_1941_ = !lean_is_exclusive(v_toApplicative_1902_);
if (v_isSharedCheck_1941_ == 0)
{
lean_object* v_unused_1942_; 
v_unused_1942_ = lean_ctor_get(v_toApplicative_1902_, 1);
lean_dec(v_unused_1942_);
v___x_1911_ = v_toApplicative_1902_;
v_isShared_1912_ = v_isSharedCheck_1941_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_toSeqRight_1909_);
lean_inc(v_toSeqLeft_1908_);
lean_inc(v_toSeq_1907_);
lean_inc(v_toFunctor_1906_);
lean_dec(v_toApplicative_1902_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1941_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___f_1913_; lean_object* v___f_1914_; lean_object* v___x_1915_; lean_object* v___f_1916_; lean_object* v___f_1917_; lean_object* v___x_1918_; lean_object* v___f_1919_; lean_object* v___f_1920_; lean_object* v___f_1921_; lean_object* v___f_1922_; lean_object* v___f_1923_; lean_object* v___x_1924_; lean_object* v___f_1925_; lean_object* v___f_1926_; lean_object* v___f_1927_; lean_object* v___x_1929_; 
v___f_1913_ = lean_alloc_closure((void*)(l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___lam__0___boxed), 2, 0);
v___f_1914_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1914_, 0, v___f_1913_);
v___x_1915_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__3);
v___f_1916_ = lean_alloc_closure((void*)(l_instBEqProd___redArg___lam__0___boxed), 4, 2);
lean_closure_set(v___f_1916_, 0, v___f_1914_);
lean_closure_set(v___f_1916_, 1, v___x_1915_);
v___f_1917_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__4);
v___x_1918_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__5);
v___f_1919_ = lean_alloc_closure((void*)(l_instHashableProd___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1919_, 0, v___f_1917_);
lean_closure_set(v___f_1919_, 1, v___x_1918_);
v___f_1920_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__6);
v___f_1921_ = lean_obj_once(&l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7, &l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7_once, _init_l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___closed__7);
lean_inc_ref(v_toFunctor_1906_);
v___f_1922_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1922_, 0, v_toFunctor_1906_);
v___f_1923_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1923_, 0, v_toFunctor_1906_);
v___x_1924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1924_, 0, v___f_1922_);
lean_ctor_set(v___x_1924_, 1, v___f_1923_);
v___f_1925_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1925_, 0, v_toSeqRight_1909_);
v___f_1926_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1926_, 0, v_toSeqLeft_1908_);
v___f_1927_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1927_, 0, v_toSeq_1907_);
if (v_isShared_1912_ == 0)
{
lean_ctor_set(v___x_1911_, 4, v___f_1925_);
lean_ctor_set(v___x_1911_, 3, v___f_1926_);
lean_ctor_set(v___x_1911_, 2, v___f_1927_);
lean_ctor_set(v___x_1911_, 1, v___f_1920_);
lean_ctor_set(v___x_1911_, 0, v___x_1924_);
v___x_1929_ = v___x_1911_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1924_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v___f_1920_);
lean_ctor_set(v_reuseFailAlloc_1940_, 2, v___f_1927_);
lean_ctor_set(v_reuseFailAlloc_1940_, 3, v___f_1926_);
lean_ctor_set(v_reuseFailAlloc_1940_, 4, v___f_1925_);
v___x_1929_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
lean_object* v___x_1931_; 
if (v_isShared_1905_ == 0)
{
lean_ctor_set(v___x_1904_, 1, v___f_1921_);
lean_ctor_set(v___x_1904_, 0, v___x_1929_);
v___x_1931_ = v___x_1904_;
goto v_reusejp_1930_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v___x_1929_);
lean_ctor_set(v_reuseFailAlloc_1939_, 1, v___f_1921_);
v___x_1931_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1930_;
}
v_reusejp_1930_:
{
lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; lean_object* v___f_1936_; lean_object* v___x_48364__overap_1937_; lean_object* v___x_1938_; 
v___x_1932_ = l_StateRefT_x27_instMonad___redArg(v___x_1931_);
v___x_1933_ = l_Lean_MonadCacheT_instMonad___redArg(v___x_1875_, v___f_1916_, v___f_1919_, v___x_1932_);
v___x_1934_ = l_Lean_instInhabitedExpr;
v___x_1935_ = l_instInhabitedOfMonad___redArg(v___x_1933_, v___x_1934_);
v___f_1936_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1936_, 0, v___x_1935_);
v___x_48364__overap_1937_ = lean_panic_fn_borrowed(v___f_1936_, v_msg_1866_);
lean_dec_ref(v___f_1936_);
lean_inc(v___y_1873_);
lean_inc_ref(v___y_1872_);
lean_inc(v___y_1871_);
lean_inc_ref(v___y_1870_);
lean_inc(v___y_1869_);
lean_inc(v___y_1868_);
lean_inc_ref(v___y_1867_);
v___x_1938_ = lean_apply_8(v___x_48364__overap_1937_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, lean_box(0));
return v___x_1938_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4___boxed(lean_object* v_msg_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v_msg_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec(v___y_1954_);
lean_dec(v___y_1953_);
lean_dec_ref(v___y_1952_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0(lean_object* v_binderName_1961_, uint8_t v_binderInfo_1962_, lean_object* v_e_1963_, lean_object* v_binderType_1964_, lean_object* v_body_1965_, lean_object* v_t_1966_, lean_object* v_b_1967_){
_start:
{
uint8_t v___y_1969_; size_t v___x_1973_; size_t v___x_1974_; uint8_t v___x_1975_; 
v___x_1973_ = lean_ptr_addr(v_binderType_1964_);
v___x_1974_ = lean_ptr_addr(v_t_1966_);
v___x_1975_ = lean_usize_dec_eq(v___x_1973_, v___x_1974_);
if (v___x_1975_ == 0)
{
v___y_1969_ = v___x_1975_;
goto v___jp_1968_;
}
else
{
size_t v___x_1976_; size_t v___x_1977_; uint8_t v___x_1978_; 
v___x_1976_ = lean_ptr_addr(v_body_1965_);
v___x_1977_ = lean_ptr_addr(v_b_1967_);
v___x_1978_ = lean_usize_dec_eq(v___x_1976_, v___x_1977_);
v___y_1969_ = v___x_1978_;
goto v___jp_1968_;
}
v___jp_1968_:
{
if (v___y_1969_ == 0)
{
lean_object* v___x_1970_; 
v___x_1970_ = l_Lean_Expr_lam___override(v_binderName_1961_, v_t_1966_, v_b_1967_, v_binderInfo_1962_);
return v___x_1970_;
}
else
{
uint8_t v___x_1971_; 
v___x_1971_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1962_, v_binderInfo_1962_);
if (v___x_1971_ == 0)
{
lean_object* v___x_1972_; 
v___x_1972_ = l_Lean_Expr_lam___override(v_binderName_1961_, v_t_1966_, v_b_1967_, v_binderInfo_1962_);
return v___x_1972_;
}
else
{
lean_dec_ref(v_b_1967_);
lean_dec_ref(v_t_1966_);
lean_dec(v_binderName_1961_);
lean_inc_ref(v_e_1963_);
return v_e_1963_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed(lean_object* v_binderName_1979_, lean_object* v_binderInfo_1980_, lean_object* v_e_1981_, lean_object* v_binderType_1982_, lean_object* v_body_1983_, lean_object* v_t_1984_, lean_object* v_b_1985_){
_start:
{
uint8_t v_binderInfo_51595__boxed_1986_; lean_object* v_res_1987_; 
v_binderInfo_51595__boxed_1986_ = lean_unbox(v_binderInfo_1980_);
v_res_1987_ = l_Lean_Meta_ExtractLets_extractCore___lam__0(v_binderName_1979_, v_binderInfo_51595__boxed_1986_, v_e_1981_, v_binderType_1982_, v_body_1983_, v_t_1984_, v_b_1985_);
lean_dec_ref(v_body_1983_);
lean_dec_ref(v_binderType_1982_);
lean_dec_ref(v_e_1981_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(lean_object* v_msg_1988_){
_start:
{
lean_object* v___x_1989_; lean_object* v___x_1990_; 
v___x_1989_ = l_Lean_instInhabitedExpr;
v___x_1990_ = lean_panic_fn_borrowed(v___x_1989_, v_msg_1988_);
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(lean_object* v_a_1991_, lean_object* v_x_1992_){
_start:
{
if (lean_obj_tag(v_x_1992_) == 0)
{
lean_object* v___x_1993_; 
v___x_1993_ = lean_box(0);
return v___x_1993_;
}
else
{
lean_object* v_key_1994_; lean_object* v_value_1995_; lean_object* v_tail_1996_; uint8_t v___x_1997_; 
v_key_1994_ = lean_ctor_get(v_x_1992_, 0);
v_value_1995_ = lean_ctor_get(v_x_1992_, 1);
v_tail_1996_ = lean_ctor_get(v_x_1992_, 2);
v___x_1997_ = l_Lean_ExprStructEq_beq(v_key_1994_, v_a_1991_);
if (v___x_1997_ == 0)
{
v_x_1992_ = v_tail_1996_;
goto _start;
}
else
{
lean_object* v___x_1999_; 
lean_inc(v_value_1995_);
v___x_1999_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1999_, 0, v_value_1995_);
return v___x_1999_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg___boxed(lean_object* v_a_2000_, lean_object* v_x_2001_){
_start:
{
lean_object* v_res_2002_; 
v_res_2002_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2000_, v_x_2001_);
lean_dec(v_x_2001_);
lean_dec_ref(v_a_2000_);
return v_res_2002_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(lean_object* v_m_2003_, lean_object* v_a_2004_){
_start:
{
lean_object* v_buckets_2005_; lean_object* v___x_2006_; uint64_t v___x_2007_; uint64_t v___x_2008_; uint64_t v___x_2009_; uint64_t v_fold_2010_; uint64_t v___x_2011_; uint64_t v___x_2012_; uint64_t v___x_2013_; size_t v___x_2014_; size_t v___x_2015_; size_t v___x_2016_; size_t v___x_2017_; size_t v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; 
v_buckets_2005_ = lean_ctor_get(v_m_2003_, 1);
v___x_2006_ = lean_array_get_size(v_buckets_2005_);
v___x_2007_ = l_Lean_ExprStructEq_hash(v_a_2004_);
v___x_2008_ = 32ULL;
v___x_2009_ = lean_uint64_shift_right(v___x_2007_, v___x_2008_);
v_fold_2010_ = lean_uint64_xor(v___x_2007_, v___x_2009_);
v___x_2011_ = 16ULL;
v___x_2012_ = lean_uint64_shift_right(v_fold_2010_, v___x_2011_);
v___x_2013_ = lean_uint64_xor(v_fold_2010_, v___x_2012_);
v___x_2014_ = lean_uint64_to_usize(v___x_2013_);
v___x_2015_ = lean_usize_of_nat(v___x_2006_);
v___x_2016_ = ((size_t)1ULL);
v___x_2017_ = lean_usize_sub(v___x_2015_, v___x_2016_);
v___x_2018_ = lean_usize_land(v___x_2014_, v___x_2017_);
v___x_2019_ = lean_array_uget_borrowed(v_buckets_2005_, v___x_2018_);
v___x_2020_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_2004_, v___x_2019_);
return v___x_2020_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg___boxed(lean_object* v_m_2021_, lean_object* v_a_2022_){
_start:
{
lean_object* v_res_2023_; 
v_res_2023_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_2021_, v_a_2022_);
lean_dec_ref(v_a_2022_);
lean_dec_ref(v_m_2021_);
return v_res_2023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(lean_object* v_name_2024_, lean_object* v_type_2025_, lean_object* v_val_2026_, lean_object* v_k_2027_, uint8_t v_nondep_2028_, uint8_t v_kind_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_, lean_object* v___y_2033_, lean_object* v___y_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_){
_start:
{
lean_object* v___f_2038_; lean_object* v___x_2039_; 
lean_inc(v___y_2032_);
lean_inc(v___y_2031_);
lean_inc_ref(v___y_2030_);
v___f_2038_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg___lam__0___boxed), 10, 4);
lean_closure_set(v___f_2038_, 0, v_k_2027_);
lean_closure_set(v___f_2038_, 1, v___y_2030_);
lean_closure_set(v___f_2038_, 2, v___y_2031_);
lean_closure_set(v___f_2038_, 3, v___y_2032_);
v___x_2039_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2024_, v_type_2025_, v_val_2026_, v___f_2038_, v_nondep_2028_, v_kind_2029_, v___y_2033_, v___y_2034_, v___y_2035_, v___y_2036_);
if (lean_obj_tag(v___x_2039_) == 0)
{
return v___x_2039_;
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2047_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2042_ = v___x_2039_;
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2039_);
v___x_2042_ = lean_box(0);
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
v_resetjp_2041_:
{
lean_object* v___x_2045_; 
if (v_isShared_2043_ == 0)
{
v___x_2045_ = v___x_2042_;
goto v_reusejp_2044_;
}
else
{
lean_object* v_reuseFailAlloc_2046_; 
v_reuseFailAlloc_2046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2046_, 0, v_a_2040_);
v___x_2045_ = v_reuseFailAlloc_2046_;
goto v_reusejp_2044_;
}
v_reusejp_2044_:
{
return v___x_2045_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg___boxed(lean_object* v_name_2048_, lean_object* v_type_2049_, lean_object* v_val_2050_, lean_object* v_k_2051_, lean_object* v_nondep_2052_, lean_object* v_kind_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_){
_start:
{
uint8_t v_nondep_boxed_2062_; uint8_t v_kind_boxed_2063_; lean_object* v_res_2064_; 
v_nondep_boxed_2062_ = lean_unbox(v_nondep_2052_);
v_kind_boxed_2063_ = lean_unbox(v_kind_2053_);
v_res_2064_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_2048_, v_type_2049_, v_val_2050_, v_k_2051_, v_nondep_boxed_2062_, v_kind_boxed_2063_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_, v___y_2060_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
lean_dec(v___y_2058_);
lean_dec_ref(v___y_2057_);
lean_dec(v___y_2056_);
lean_dec(v___y_2055_);
lean_dec_ref(v___y_2054_);
return v_res_2064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1(lean_object* v_binderName_2065_, uint8_t v_binderInfo_2066_, lean_object* v_e_2067_, lean_object* v_binderType_2068_, lean_object* v_body_2069_, lean_object* v_t_2070_, lean_object* v_b_2071_){
_start:
{
uint8_t v___y_2073_; size_t v___x_2077_; size_t v___x_2078_; uint8_t v___x_2079_; 
v___x_2077_ = lean_ptr_addr(v_binderType_2068_);
v___x_2078_ = lean_ptr_addr(v_t_2070_);
v___x_2079_ = lean_usize_dec_eq(v___x_2077_, v___x_2078_);
if (v___x_2079_ == 0)
{
v___y_2073_ = v___x_2079_;
goto v___jp_2072_;
}
else
{
size_t v___x_2080_; size_t v___x_2081_; uint8_t v___x_2082_; 
v___x_2080_ = lean_ptr_addr(v_body_2069_);
v___x_2081_ = lean_ptr_addr(v_b_2071_);
v___x_2082_ = lean_usize_dec_eq(v___x_2080_, v___x_2081_);
v___y_2073_ = v___x_2082_;
goto v___jp_2072_;
}
v___jp_2072_:
{
if (v___y_2073_ == 0)
{
lean_object* v___x_2074_; 
v___x_2074_ = l_Lean_Expr_forallE___override(v_binderName_2065_, v_t_2070_, v_b_2071_, v_binderInfo_2066_);
return v___x_2074_;
}
else
{
uint8_t v___x_2075_; 
v___x_2075_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_2066_, v_binderInfo_2066_);
if (v___x_2075_ == 0)
{
lean_object* v___x_2076_; 
v___x_2076_ = l_Lean_Expr_forallE___override(v_binderName_2065_, v_t_2070_, v_b_2071_, v_binderInfo_2066_);
return v___x_2076_;
}
else
{
lean_dec_ref(v_b_2071_);
lean_dec_ref(v_t_2070_);
lean_dec(v_binderName_2065_);
lean_inc_ref(v_e_2067_);
return v_e_2067_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed(lean_object* v_binderName_2083_, lean_object* v_binderInfo_2084_, lean_object* v_e_2085_, lean_object* v_binderType_2086_, lean_object* v_body_2087_, lean_object* v_t_2088_, lean_object* v_b_2089_){
_start:
{
uint8_t v_binderInfo_51726__boxed_2090_; lean_object* v_res_2091_; 
v_binderInfo_51726__boxed_2090_ = lean_unbox(v_binderInfo_2084_);
v_res_2091_ = l_Lean_Meta_ExtractLets_extractCore___lam__1(v_binderName_2083_, v_binderInfo_51726__boxed_2090_, v_e_2085_, v_binderType_2086_, v_body_2087_, v_t_2088_, v_b_2089_);
lean_dec_ref(v_body_2087_);
lean_dec_ref(v_binderType_2086_);
lean_dec_ref(v_e_2085_);
return v_res_2091_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(lean_object* v_a_2092_, lean_object* v_x_2093_){
_start:
{
if (lean_obj_tag(v_x_2093_) == 0)
{
lean_object* v___x_2094_; 
v___x_2094_ = lean_box(0);
return v___x_2094_;
}
else
{
lean_object* v_key_2095_; lean_object* v_value_2096_; lean_object* v_tail_2097_; lean_object* v_fst_2098_; lean_object* v_snd_2099_; lean_object* v_fst_2100_; lean_object* v_snd_2101_; uint8_t v___x_2106_; 
v_key_2095_ = lean_ctor_get(v_x_2093_, 0);
v_value_2096_ = lean_ctor_get(v_x_2093_, 1);
v_tail_2097_ = lean_ctor_get(v_x_2093_, 2);
v_fst_2098_ = lean_ctor_get(v_key_2095_, 0);
v_snd_2099_ = lean_ctor_get(v_key_2095_, 1);
v_fst_2100_ = lean_ctor_get(v_a_2092_, 0);
v_snd_2101_ = lean_ctor_get(v_a_2092_, 1);
v___x_2106_ = lean_unbox(v_fst_2098_);
if (v___x_2106_ == 0)
{
uint8_t v___x_2107_; 
v___x_2107_ = lean_unbox(v_fst_2100_);
if (v___x_2107_ == 0)
{
goto v___jp_2102_;
}
else
{
v_x_2093_ = v_tail_2097_;
goto _start;
}
}
else
{
uint8_t v___x_2109_; 
v___x_2109_ = lean_unbox(v_fst_2100_);
if (v___x_2109_ == 0)
{
v_x_2093_ = v_tail_2097_;
goto _start;
}
else
{
goto v___jp_2102_;
}
}
v___jp_2102_:
{
uint8_t v___x_2103_; 
v___x_2103_ = l_Lean_ExprStructEq_beq(v_snd_2099_, v_snd_2101_);
if (v___x_2103_ == 0)
{
v_x_2093_ = v_tail_2097_;
goto _start;
}
else
{
lean_object* v___x_2105_; 
lean_inc(v_value_2096_);
v___x_2105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2105_, 0, v_value_2096_);
return v___x_2105_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg___boxed(lean_object* v_a_2111_, lean_object* v_x_2112_){
_start:
{
lean_object* v_res_2113_; 
v_res_2113_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2111_, v_x_2112_);
lean_dec(v_x_2112_);
lean_dec_ref(v_a_2111_);
return v_res_2113_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(lean_object* v_m_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v_buckets_2116_; lean_object* v_fst_2117_; lean_object* v_snd_2118_; lean_object* v___x_2119_; uint64_t v___y_2121_; uint8_t v___x_2137_; 
v_buckets_2116_ = lean_ctor_get(v_m_2114_, 1);
v_fst_2117_ = lean_ctor_get(v_a_2115_, 0);
v_snd_2118_ = lean_ctor_get(v_a_2115_, 1);
v___x_2119_ = lean_array_get_size(v_buckets_2116_);
v___x_2137_ = lean_unbox(v_fst_2117_);
if (v___x_2137_ == 0)
{
uint64_t v___x_2138_; 
v___x_2138_ = 13ULL;
v___y_2121_ = v___x_2138_;
goto v___jp_2120_;
}
else
{
uint64_t v___x_2139_; 
v___x_2139_ = 11ULL;
v___y_2121_ = v___x_2139_;
goto v___jp_2120_;
}
v___jp_2120_:
{
uint64_t v___x_2122_; uint64_t v___x_2123_; uint64_t v___x_2124_; uint64_t v___x_2125_; uint64_t v_fold_2126_; uint64_t v___x_2127_; uint64_t v___x_2128_; uint64_t v___x_2129_; size_t v___x_2130_; size_t v___x_2131_; size_t v___x_2132_; size_t v___x_2133_; size_t v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2122_ = l_Lean_ExprStructEq_hash(v_snd_2118_);
v___x_2123_ = lean_uint64_mix_hash(v___y_2121_, v___x_2122_);
v___x_2124_ = 32ULL;
v___x_2125_ = lean_uint64_shift_right(v___x_2123_, v___x_2124_);
v_fold_2126_ = lean_uint64_xor(v___x_2123_, v___x_2125_);
v___x_2127_ = 16ULL;
v___x_2128_ = lean_uint64_shift_right(v_fold_2126_, v___x_2127_);
v___x_2129_ = lean_uint64_xor(v_fold_2126_, v___x_2128_);
v___x_2130_ = lean_uint64_to_usize(v___x_2129_);
v___x_2131_ = lean_usize_of_nat(v___x_2119_);
v___x_2132_ = ((size_t)1ULL);
v___x_2133_ = lean_usize_sub(v___x_2131_, v___x_2132_);
v___x_2134_ = lean_usize_land(v___x_2130_, v___x_2133_);
v___x_2135_ = lean_array_uget_borrowed(v_buckets_2116_, v___x_2134_);
v___x_2136_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_2115_, v___x_2135_);
return v___x_2136_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg___boxed(lean_object* v_m_2140_, lean_object* v_a_2141_){
_start:
{
lean_object* v_res_2142_; 
v_res_2142_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_2140_, v_a_2141_);
lean_dec_ref(v_a_2141_);
lean_dec_ref(v_m_2140_);
return v_res_2142_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(lean_object* v_a_2143_, lean_object* v_x_2144_){
_start:
{
if (lean_obj_tag(v_x_2144_) == 0)
{
uint8_t v___x_2145_; 
v___x_2145_ = 0;
return v___x_2145_;
}
else
{
lean_object* v_key_2146_; lean_object* v_tail_2147_; lean_object* v_fst_2148_; lean_object* v_snd_2149_; lean_object* v_fst_2150_; lean_object* v_snd_2151_; uint8_t v___x_2155_; 
v_key_2146_ = lean_ctor_get(v_x_2144_, 0);
v_tail_2147_ = lean_ctor_get(v_x_2144_, 2);
v_fst_2148_ = lean_ctor_get(v_key_2146_, 0);
v_snd_2149_ = lean_ctor_get(v_key_2146_, 1);
v_fst_2150_ = lean_ctor_get(v_a_2143_, 0);
v_snd_2151_ = lean_ctor_get(v_a_2143_, 1);
v___x_2155_ = lean_unbox(v_fst_2148_);
if (v___x_2155_ == 0)
{
uint8_t v___x_2156_; 
v___x_2156_ = lean_unbox(v_fst_2150_);
if (v___x_2156_ == 0)
{
goto v___jp_2152_;
}
else
{
v_x_2144_ = v_tail_2147_;
goto _start;
}
}
else
{
uint8_t v___x_2158_; 
v___x_2158_ = lean_unbox(v_fst_2150_);
if (v___x_2158_ == 0)
{
v_x_2144_ = v_tail_2147_;
goto _start;
}
else
{
goto v___jp_2152_;
}
}
v___jp_2152_:
{
uint8_t v___x_2153_; 
v___x_2153_ = l_Lean_ExprStructEq_beq(v_snd_2149_, v_snd_2151_);
if (v___x_2153_ == 0)
{
v_x_2144_ = v_tail_2147_;
goto _start;
}
else
{
return v___x_2153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg___boxed(lean_object* v_a_2160_, lean_object* v_x_2161_){
_start:
{
uint8_t v_res_2162_; lean_object* v_r_2163_; 
v_res_2162_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2160_, v_x_2161_);
lean_dec(v_x_2161_);
lean_dec_ref(v_a_2160_);
v_r_2163_ = lean_box(v_res_2162_);
return v_r_2163_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(lean_object* v_x_2164_, lean_object* v_x_2165_){
_start:
{
if (lean_obj_tag(v_x_2165_) == 0)
{
return v_x_2164_;
}
else
{
lean_object* v_key_2166_; lean_object* v_value_2167_; lean_object* v_tail_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2199_; 
v_key_2166_ = lean_ctor_get(v_x_2165_, 0);
v_value_2167_ = lean_ctor_get(v_x_2165_, 1);
v_tail_2168_ = lean_ctor_get(v_x_2165_, 2);
v_isSharedCheck_2199_ = !lean_is_exclusive(v_x_2165_);
if (v_isSharedCheck_2199_ == 0)
{
v___x_2170_ = v_x_2165_;
v_isShared_2171_ = v_isSharedCheck_2199_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_tail_2168_);
lean_inc(v_value_2167_);
lean_inc(v_key_2166_);
lean_dec(v_x_2165_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2199_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v_fst_2172_; lean_object* v_snd_2173_; lean_object* v___x_2174_; uint64_t v___y_2176_; uint8_t v___x_2196_; 
v_fst_2172_ = lean_ctor_get(v_key_2166_, 0);
v_snd_2173_ = lean_ctor_get(v_key_2166_, 1);
v___x_2174_ = lean_array_get_size(v_x_2164_);
v___x_2196_ = lean_unbox(v_fst_2172_);
if (v___x_2196_ == 0)
{
uint64_t v___x_2197_; 
v___x_2197_ = 13ULL;
v___y_2176_ = v___x_2197_;
goto v___jp_2175_;
}
else
{
uint64_t v___x_2198_; 
v___x_2198_ = 11ULL;
v___y_2176_ = v___x_2198_;
goto v___jp_2175_;
}
v___jp_2175_:
{
uint64_t v___x_2177_; uint64_t v___x_2178_; uint64_t v___x_2179_; uint64_t v___x_2180_; uint64_t v_fold_2181_; uint64_t v___x_2182_; uint64_t v___x_2183_; uint64_t v___x_2184_; size_t v___x_2185_; size_t v___x_2186_; size_t v___x_2187_; size_t v___x_2188_; size_t v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2192_; 
v___x_2177_ = l_Lean_ExprStructEq_hash(v_snd_2173_);
v___x_2178_ = lean_uint64_mix_hash(v___y_2176_, v___x_2177_);
v___x_2179_ = 32ULL;
v___x_2180_ = lean_uint64_shift_right(v___x_2178_, v___x_2179_);
v_fold_2181_ = lean_uint64_xor(v___x_2178_, v___x_2180_);
v___x_2182_ = 16ULL;
v___x_2183_ = lean_uint64_shift_right(v_fold_2181_, v___x_2182_);
v___x_2184_ = lean_uint64_xor(v_fold_2181_, v___x_2183_);
v___x_2185_ = lean_uint64_to_usize(v___x_2184_);
v___x_2186_ = lean_usize_of_nat(v___x_2174_);
v___x_2187_ = ((size_t)1ULL);
v___x_2188_ = lean_usize_sub(v___x_2186_, v___x_2187_);
v___x_2189_ = lean_usize_land(v___x_2185_, v___x_2188_);
v___x_2190_ = lean_array_uget_borrowed(v_x_2164_, v___x_2189_);
lean_inc(v___x_2190_);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 2, v___x_2190_);
v___x_2192_ = v___x_2170_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v_key_2166_);
lean_ctor_set(v_reuseFailAlloc_2195_, 1, v_value_2167_);
lean_ctor_set(v_reuseFailAlloc_2195_, 2, v___x_2190_);
v___x_2192_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2193_; 
v___x_2193_ = lean_array_uset(v_x_2164_, v___x_2189_, v___x_2192_);
v_x_2164_ = v___x_2193_;
v_x_2165_ = v_tail_2168_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(lean_object* v_i_2200_, lean_object* v_source_2201_, lean_object* v_target_2202_){
_start:
{
lean_object* v___x_2203_; uint8_t v___x_2204_; 
v___x_2203_ = lean_array_get_size(v_source_2201_);
v___x_2204_ = lean_nat_dec_lt(v_i_2200_, v___x_2203_);
if (v___x_2204_ == 0)
{
lean_dec_ref(v_source_2201_);
lean_dec(v_i_2200_);
return v_target_2202_;
}
else
{
lean_object* v_es_2205_; lean_object* v___x_2206_; lean_object* v_source_2207_; lean_object* v_target_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v_es_2205_ = lean_array_fget(v_source_2201_, v_i_2200_);
v___x_2206_ = lean_box(0);
v_source_2207_ = lean_array_fset(v_source_2201_, v_i_2200_, v___x_2206_);
v_target_2208_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_target_2202_, v_es_2205_);
v___x_2209_ = lean_unsigned_to_nat(1u);
v___x_2210_ = lean_nat_add(v_i_2200_, v___x_2209_);
lean_dec(v_i_2200_);
v_i_2200_ = v___x_2210_;
v_source_2201_ = v_source_2207_;
v_target_2202_ = v_target_2208_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(lean_object* v_data_2212_){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v_nbuckets_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2213_ = lean_array_get_size(v_data_2212_);
v___x_2214_ = lean_unsigned_to_nat(2u);
v_nbuckets_2215_ = lean_nat_mul(v___x_2213_, v___x_2214_);
v___x_2216_ = lean_unsigned_to_nat(0u);
v___x_2217_ = lean_box(0);
v___x_2218_ = lean_mk_array(v_nbuckets_2215_, v___x_2217_);
v___x_2219_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v___x_2216_, v_data_2212_, v___x_2218_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(lean_object* v_a_2220_, lean_object* v_b_2221_, lean_object* v_x_2222_){
_start:
{
if (lean_obj_tag(v_x_2222_) == 0)
{
lean_dec(v_b_2221_);
lean_dec_ref(v_a_2220_);
return v_x_2222_;
}
else
{
lean_object* v_key_2223_; lean_object* v_value_2224_; lean_object* v_tail_2225_; lean_object* v___x_2227_; uint8_t v_isShared_2228_; uint8_t v_isSharedCheck_2244_; 
v_key_2223_ = lean_ctor_get(v_x_2222_, 0);
v_value_2224_ = lean_ctor_get(v_x_2222_, 1);
v_tail_2225_ = lean_ctor_get(v_x_2222_, 2);
v_isSharedCheck_2244_ = !lean_is_exclusive(v_x_2222_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2227_ = v_x_2222_;
v_isShared_2228_ = v_isSharedCheck_2244_;
goto v_resetjp_2226_;
}
else
{
lean_inc(v_tail_2225_);
lean_inc(v_value_2224_);
lean_inc(v_key_2223_);
lean_dec(v_x_2222_);
v___x_2227_ = lean_box(0);
v_isShared_2228_ = v_isSharedCheck_2244_;
goto v_resetjp_2226_;
}
v_resetjp_2226_:
{
lean_object* v_fst_2234_; lean_object* v_snd_2235_; lean_object* v_fst_2236_; lean_object* v_snd_2237_; uint8_t v___x_2241_; 
v_fst_2234_ = lean_ctor_get(v_key_2223_, 0);
v_snd_2235_ = lean_ctor_get(v_key_2223_, 1);
v_fst_2236_ = lean_ctor_get(v_a_2220_, 0);
v_snd_2237_ = lean_ctor_get(v_a_2220_, 1);
v___x_2241_ = lean_unbox(v_fst_2234_);
if (v___x_2241_ == 0)
{
uint8_t v___x_2242_; 
v___x_2242_ = lean_unbox(v_fst_2236_);
if (v___x_2242_ == 0)
{
goto v___jp_2238_;
}
else
{
goto v___jp_2229_;
}
}
else
{
uint8_t v___x_2243_; 
v___x_2243_ = lean_unbox(v_fst_2236_);
if (v___x_2243_ == 0)
{
goto v___jp_2229_;
}
else
{
goto v___jp_2238_;
}
}
v___jp_2229_:
{
lean_object* v___x_2230_; lean_object* v___x_2232_; 
v___x_2230_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2220_, v_b_2221_, v_tail_2225_);
if (v_isShared_2228_ == 0)
{
lean_ctor_set(v___x_2227_, 2, v___x_2230_);
v___x_2232_ = v___x_2227_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_key_2223_);
lean_ctor_set(v_reuseFailAlloc_2233_, 1, v_value_2224_);
lean_ctor_set(v_reuseFailAlloc_2233_, 2, v___x_2230_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
v___jp_2238_:
{
uint8_t v___x_2239_; 
v___x_2239_ = l_Lean_ExprStructEq_beq(v_snd_2235_, v_snd_2237_);
if (v___x_2239_ == 0)
{
goto v___jp_2229_;
}
else
{
lean_object* v___x_2240_; 
lean_del_object(v___x_2227_);
lean_dec(v_value_2224_);
lean_dec(v_key_2223_);
v___x_2240_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2240_, 0, v_a_2220_);
lean_ctor_set(v___x_2240_, 1, v_b_2221_);
lean_ctor_set(v___x_2240_, 2, v_tail_2225_);
return v___x_2240_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(lean_object* v_m_2245_, lean_object* v_a_2246_, lean_object* v_b_2247_){
_start:
{
lean_object* v_size_2248_; lean_object* v_buckets_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2300_; 
v_size_2248_ = lean_ctor_get(v_m_2245_, 0);
v_buckets_2249_ = lean_ctor_get(v_m_2245_, 1);
v_isSharedCheck_2300_ = !lean_is_exclusive(v_m_2245_);
if (v_isSharedCheck_2300_ == 0)
{
v___x_2251_ = v_m_2245_;
v_isShared_2252_ = v_isSharedCheck_2300_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_buckets_2249_);
lean_inc(v_size_2248_);
lean_dec(v_m_2245_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2300_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v_fst_2253_; lean_object* v_snd_2254_; lean_object* v___x_2255_; uint64_t v___y_2257_; uint8_t v___x_2297_; 
v_fst_2253_ = lean_ctor_get(v_a_2246_, 0);
v_snd_2254_ = lean_ctor_get(v_a_2246_, 1);
v___x_2255_ = lean_array_get_size(v_buckets_2249_);
v___x_2297_ = lean_unbox(v_fst_2253_);
if (v___x_2297_ == 0)
{
uint64_t v___x_2298_; 
v___x_2298_ = 13ULL;
v___y_2257_ = v___x_2298_;
goto v___jp_2256_;
}
else
{
uint64_t v___x_2299_; 
v___x_2299_ = 11ULL;
v___y_2257_ = v___x_2299_;
goto v___jp_2256_;
}
v___jp_2256_:
{
uint64_t v___x_2258_; uint64_t v___x_2259_; uint64_t v___x_2260_; uint64_t v___x_2261_; uint64_t v_fold_2262_; uint64_t v___x_2263_; uint64_t v___x_2264_; uint64_t v___x_2265_; size_t v___x_2266_; size_t v___x_2267_; size_t v___x_2268_; size_t v___x_2269_; size_t v___x_2270_; lean_object* v_bkt_2271_; uint8_t v___x_2272_; 
v___x_2258_ = l_Lean_ExprStructEq_hash(v_snd_2254_);
v___x_2259_ = lean_uint64_mix_hash(v___y_2257_, v___x_2258_);
v___x_2260_ = 32ULL;
v___x_2261_ = lean_uint64_shift_right(v___x_2259_, v___x_2260_);
v_fold_2262_ = lean_uint64_xor(v___x_2259_, v___x_2261_);
v___x_2263_ = 16ULL;
v___x_2264_ = lean_uint64_shift_right(v_fold_2262_, v___x_2263_);
v___x_2265_ = lean_uint64_xor(v_fold_2262_, v___x_2264_);
v___x_2266_ = lean_uint64_to_usize(v___x_2265_);
v___x_2267_ = lean_usize_of_nat(v___x_2255_);
v___x_2268_ = ((size_t)1ULL);
v___x_2269_ = lean_usize_sub(v___x_2267_, v___x_2268_);
v___x_2270_ = lean_usize_land(v___x_2266_, v___x_2269_);
v_bkt_2271_ = lean_array_uget_borrowed(v_buckets_2249_, v___x_2270_);
v___x_2272_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_2246_, v_bkt_2271_);
if (v___x_2272_ == 0)
{
lean_object* v___x_2273_; lean_object* v_size_x27_2274_; lean_object* v___x_2275_; lean_object* v_buckets_x27_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; uint8_t v___x_2282_; 
v___x_2273_ = lean_unsigned_to_nat(1u);
v_size_x27_2274_ = lean_nat_add(v_size_2248_, v___x_2273_);
lean_dec(v_size_2248_);
lean_inc(v_bkt_2271_);
v___x_2275_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2275_, 0, v_a_2246_);
lean_ctor_set(v___x_2275_, 1, v_b_2247_);
lean_ctor_set(v___x_2275_, 2, v_bkt_2271_);
v_buckets_x27_2276_ = lean_array_uset(v_buckets_2249_, v___x_2270_, v___x_2275_);
v___x_2277_ = lean_unsigned_to_nat(4u);
v___x_2278_ = lean_nat_mul(v_size_x27_2274_, v___x_2277_);
v___x_2279_ = lean_unsigned_to_nat(3u);
v___x_2280_ = lean_nat_div(v___x_2278_, v___x_2279_);
lean_dec(v___x_2278_);
v___x_2281_ = lean_array_get_size(v_buckets_x27_2276_);
v___x_2282_ = lean_nat_dec_le(v___x_2280_, v___x_2281_);
lean_dec(v___x_2280_);
if (v___x_2282_ == 0)
{
lean_object* v_val_2283_; lean_object* v___x_2285_; 
v_val_2283_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_buckets_x27_2276_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 1, v_val_2283_);
lean_ctor_set(v___x_2251_, 0, v_size_x27_2274_);
v___x_2285_ = v___x_2251_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_size_x27_2274_);
lean_ctor_set(v_reuseFailAlloc_2286_, 1, v_val_2283_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
else
{
lean_object* v___x_2288_; 
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 1, v_buckets_x27_2276_);
lean_ctor_set(v___x_2251_, 0, v_size_x27_2274_);
v___x_2288_ = v___x_2251_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_size_x27_2274_);
lean_ctor_set(v_reuseFailAlloc_2289_, 1, v_buckets_x27_2276_);
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
lean_object* v___x_2290_; lean_object* v_buckets_x27_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2295_; 
lean_inc(v_bkt_2271_);
v___x_2290_ = lean_box(0);
v_buckets_x27_2291_ = lean_array_uset(v_buckets_2249_, v___x_2270_, v___x_2290_);
v___x_2292_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_2246_, v_b_2247_, v_bkt_2271_);
v___x_2293_ = lean_array_uset(v_buckets_x27_2291_, v___x_2270_, v___x_2292_);
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 1, v___x_2293_);
v___x_2295_ = v___x_2251_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2296_; 
v_reuseFailAlloc_2296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2296_, 0, v_size_2248_);
lean_ctor_set(v_reuseFailAlloc_2296_, 1, v___x_2293_);
v___x_2295_ = v_reuseFailAlloc_2296_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
return v___x_2295_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4(uint8_t v_types_2301_, lean_object* v_e_2302_, lean_object* v___f_2303_, lean_object* v_____r_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
if (v_types_2301_ == 0)
{
lean_object* v___x_2313_; 
lean_inc_ref(v_e_2302_);
v___x_2313_ = l_Lean_Meta_isType(v_e_2302_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_);
if (lean_obj_tag(v___x_2313_) == 0)
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2324_; 
v_a_2314_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2324_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2324_ == 0)
{
v___x_2316_ = v___x_2313_;
v_isShared_2317_ = v_isSharedCheck_2324_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2313_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2324_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
uint8_t v___x_2318_; 
v___x_2318_ = lean_unbox(v_a_2314_);
lean_dec(v_a_2314_);
if (v___x_2318_ == 0)
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
lean_del_object(v___x_2316_);
lean_dec_ref(v_e_2302_);
v___x_2319_ = lean_box(0);
lean_inc(v___y_2311_);
lean_inc_ref(v___y_2310_);
lean_inc(v___y_2309_);
lean_inc_ref(v___y_2308_);
lean_inc(v___y_2307_);
lean_inc(v___y_2306_);
lean_inc_ref(v___y_2305_);
v___x_2320_ = lean_apply_9(v___f_2303_, v___x_2319_, v___y_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, lean_box(0));
return v___x_2320_;
}
else
{
lean_object* v___x_2322_; 
lean_dec_ref(v___f_2303_);
if (v_isShared_2317_ == 0)
{
lean_ctor_set(v___x_2316_, 0, v_e_2302_);
v___x_2322_ = v___x_2316_;
goto v_reusejp_2321_;
}
else
{
lean_object* v_reuseFailAlloc_2323_; 
v_reuseFailAlloc_2323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2323_, 0, v_e_2302_);
v___x_2322_ = v_reuseFailAlloc_2323_;
goto v_reusejp_2321_;
}
v_reusejp_2321_:
{
return v___x_2322_;
}
}
}
}
else
{
lean_object* v_a_2325_; lean_object* v___x_2327_; uint8_t v_isShared_2328_; uint8_t v_isSharedCheck_2332_; 
lean_dec_ref(v___f_2303_);
lean_dec_ref(v_e_2302_);
v_a_2325_ = lean_ctor_get(v___x_2313_, 0);
v_isSharedCheck_2332_ = !lean_is_exclusive(v___x_2313_);
if (v_isSharedCheck_2332_ == 0)
{
v___x_2327_ = v___x_2313_;
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
else
{
lean_inc(v_a_2325_);
lean_dec(v___x_2313_);
v___x_2327_ = lean_box(0);
v_isShared_2328_ = v_isSharedCheck_2332_;
goto v_resetjp_2326_;
}
v_resetjp_2326_:
{
lean_object* v___x_2330_; 
if (v_isShared_2328_ == 0)
{
v___x_2330_ = v___x_2327_;
goto v_reusejp_2329_;
}
else
{
lean_object* v_reuseFailAlloc_2331_; 
v_reuseFailAlloc_2331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2331_, 0, v_a_2325_);
v___x_2330_ = v_reuseFailAlloc_2331_;
goto v_reusejp_2329_;
}
v_reusejp_2329_:
{
return v___x_2330_;
}
}
}
}
else
{
lean_object* v___x_2333_; lean_object* v___x_2334_; 
lean_dec_ref(v_e_2302_);
v___x_2333_ = lean_box(0);
lean_inc(v___y_2311_);
lean_inc_ref(v___y_2310_);
lean_inc(v___y_2309_);
lean_inc_ref(v___y_2308_);
lean_inc(v___y_2307_);
lean_inc(v___y_2306_);
lean_inc_ref(v___y_2305_);
v___x_2334_ = lean_apply_9(v___f_2303_, v___x_2333_, v___y_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_, lean_box(0));
return v___x_2334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed(lean_object* v_types_2335_, lean_object* v_e_2336_, lean_object* v___f_2337_, lean_object* v_____r_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_){
_start:
{
uint8_t v_types_boxed_2347_; lean_object* v_res_2348_; 
v_types_boxed_2347_ = lean_unbox(v_types_2335_);
v_res_2348_ = l_Lean_Meta_ExtractLets_extractCore___lam__4(v_types_boxed_2347_, v_e_2336_, v___f_2337_, v_____r_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v___y_2341_);
lean_dec(v___y_2340_);
lean_dec_ref(v___y_2339_);
return v_res_2348_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0(void){
_start:
{
lean_object* v___x_2349_; lean_object* v_dummy_2350_; 
v___x_2349_ = lean_box(0);
v_dummy_2350_ = l_Lean_Expr_sort___override(v___x_2349_);
return v_dummy_2350_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(lean_object* v_upperBound_2351_, lean_object* v_fst_2352_, lean_object* v_fvars_2353_, lean_object* v_a_2354_, lean_object* v_b_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_){
_start:
{
lean_object* v_a_2365_; uint8_t v___x_2369_; 
v___x_2369_ = lean_nat_dec_lt(v_a_2354_, v_upperBound_2351_);
if (v___x_2369_ == 0)
{
lean_object* v___x_2370_; 
lean_dec(v_a_2354_);
lean_dec(v_fvars_2353_);
v___x_2370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2370_, 0, v_b_2355_);
return v___x_2370_;
}
else
{
lean_object* v___x_2371_; lean_object* v___x_2372_; uint8_t v_binderInfo_2373_; uint8_t v___x_2374_; 
v___x_2371_ = l_Lean_Meta_instInhabitedExprParamInfo_default;
v___x_2372_ = lean_array_get_borrowed(v___x_2371_, v_fst_2352_, v_a_2354_);
v_binderInfo_2373_ = lean_ctor_get_uint8(v___x_2372_, sizeof(void*)*2);
v___x_2374_ = l_Lean_BinderInfo_isExplicit(v_binderInfo_2373_);
if (v___x_2374_ == 0)
{
v_a_2365_ = v_b_2355_;
goto v___jp_2364_;
}
else
{
uint8_t v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2375_ = 0;
v___x_2376_ = l_Lean_instInhabitedExpr;
v___x_2377_ = lean_array_get_borrowed(v___x_2376_, v_b_2355_, v_a_2354_);
lean_inc(v___x_2377_);
lean_inc(v_fvars_2353_);
v___x_2378_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2353_, v___x_2377_, v___x_2375_, v___y_2356_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_, v___y_2362_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_a_2379_; lean_object* v___x_2380_; 
v_a_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc(v_a_2379_);
lean_dec_ref(v___x_2378_);
v___x_2380_ = lean_array_set(v_b_2355_, v_a_2354_, v_a_2379_);
v_a_2365_ = v___x_2380_;
goto v___jp_2364_;
}
else
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2388_; 
lean_dec_ref(v_b_2355_);
lean_dec(v_a_2354_);
lean_dec(v_fvars_2353_);
v_a_2381_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2388_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2388_ == 0)
{
v___x_2383_ = v___x_2378_;
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2378_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2388_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2384_ == 0)
{
v___x_2386_ = v___x_2383_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2387_; 
v_reuseFailAlloc_2387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2387_, 0, v_a_2381_);
v___x_2386_ = v_reuseFailAlloc_2387_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
return v___x_2386_;
}
}
}
}
}
v___jp_2364_:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; 
v___x_2366_ = lean_unsigned_to_nat(1u);
v___x_2367_ = lean_nat_add(v_a_2354_, v___x_2366_);
lean_dec(v_a_2354_);
v_a_2354_ = v___x_2367_;
v_b_2355_ = v_a_2365_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(lean_object* v_fvars_2389_, size_t v_sz_2390_, size_t v_i_2391_, lean_object* v_bs_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_){
_start:
{
uint8_t v___x_2401_; 
v___x_2401_ = lean_usize_dec_lt(v_i_2391_, v_sz_2390_);
if (v___x_2401_ == 0)
{
lean_object* v___x_2402_; 
lean_dec(v_fvars_2389_);
v___x_2402_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2402_, 0, v_bs_2392_);
return v___x_2402_;
}
else
{
uint8_t v___x_2403_; lean_object* v_v_2404_; lean_object* v___x_2405_; 
v___x_2403_ = 0;
v_v_2404_ = lean_array_uget_borrowed(v_bs_2392_, v_i_2391_);
lean_inc(v_v_2404_);
lean_inc(v_fvars_2389_);
v___x_2405_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2389_, v_v_2404_, v___x_2403_, v___y_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_, v___y_2399_);
if (lean_obj_tag(v___x_2405_) == 0)
{
lean_object* v_a_2406_; lean_object* v___x_2407_; lean_object* v_bs_x27_2408_; size_t v___x_2409_; size_t v___x_2410_; lean_object* v___x_2411_; 
v_a_2406_ = lean_ctor_get(v___x_2405_, 0);
lean_inc(v_a_2406_);
lean_dec_ref(v___x_2405_);
v___x_2407_ = lean_unsigned_to_nat(0u);
v_bs_x27_2408_ = lean_array_uset(v_bs_2392_, v_i_2391_, v___x_2407_);
v___x_2409_ = ((size_t)1ULL);
v___x_2410_ = lean_usize_add(v_i_2391_, v___x_2409_);
v___x_2411_ = lean_array_uset(v_bs_x27_2408_, v_i_2391_, v_a_2406_);
v_i_2391_ = v___x_2410_;
v_bs_2392_ = v___x_2411_;
goto _start;
}
else
{
lean_object* v_a_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2420_; 
lean_dec_ref(v_bs_2392_);
lean_dec(v_fvars_2389_);
v_a_2413_ = lean_ctor_get(v___x_2405_, 0);
v_isSharedCheck_2420_ = !lean_is_exclusive(v___x_2405_);
if (v_isSharedCheck_2420_ == 0)
{
v___x_2415_ = v___x_2405_;
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_a_2413_);
lean_dec(v___x_2405_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2420_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2418_; 
if (v_isShared_2416_ == 0)
{
v___x_2418_ = v___x_2415_;
goto v_reusejp_2417_;
}
else
{
lean_object* v_reuseFailAlloc_2419_; 
v_reuseFailAlloc_2419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2419_, 0, v_a_2413_);
v___x_2418_ = v_reuseFailAlloc_2419_;
goto v_reusejp_2417_;
}
v_reusejp_2417_:
{
return v___x_2418_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(lean_object* v_fvars_2421_, lean_object* v_f_2422_, lean_object* v_args_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_, lean_object* v_a_2428_, lean_object* v_a_2429_, lean_object* v_a_2430_){
_start:
{
uint8_t v___x_2432_; lean_object* v___x_2433_; 
v___x_2432_ = 0;
lean_inc_ref(v_f_2422_);
lean_inc(v_fvars_2421_);
v___x_2433_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2421_, v_f_2422_, v___x_2432_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_, v_a_2428_, v_a_2429_, v_a_2430_);
if (lean_obj_tag(v___x_2433_) == 0)
{
uint8_t v_implicits_2434_; 
v_implicits_2434_ = lean_ctor_get_uint8(v_a_2424_, 2);
if (v_implicits_2434_ == 0)
{
lean_object* v_a_2435_; lean_object* v___x_2436_; 
v_a_2435_ = lean_ctor_get(v___x_2433_, 0);
lean_inc(v_a_2435_);
lean_dec_ref(v___x_2433_);
lean_inc(v_a_2430_);
lean_inc_ref(v_a_2429_);
lean_inc(v_a_2428_);
lean_inc_ref(v_a_2427_);
v___x_2436_ = lean_infer_type(v_f_2422_, v_a_2427_, v_a_2428_, v_a_2429_, v_a_2430_);
if (lean_obj_tag(v___x_2436_) == 0)
{
lean_object* v_a_2437_; lean_object* v___x_2438_; 
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
lean_inc(v_a_2437_);
lean_dec_ref(v___x_2436_);
v___x_2438_ = l_Lean_Meta_instantiateForallWithParamInfos(v_a_2437_, v_args_2423_, v___x_2432_, v_a_2427_, v_a_2428_, v_a_2429_, v_a_2430_);
if (lean_obj_tag(v___x_2438_) == 0)
{
lean_object* v_a_2439_; lean_object* v_fst_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
v_a_2439_ = lean_ctor_get(v___x_2438_, 0);
lean_inc(v_a_2439_);
lean_dec_ref(v___x_2438_);
v_fst_2440_ = lean_ctor_get(v_a_2439_, 0);
lean_inc(v_fst_2440_);
lean_dec(v_a_2439_);
v___x_2441_ = lean_array_get_size(v_args_2423_);
v___x_2442_ = lean_unsigned_to_nat(0u);
v___x_2443_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v___x_2441_, v_fst_2440_, v_fvars_2421_, v___x_2442_, v_args_2423_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_, v_a_2428_, v_a_2429_, v_a_2430_);
lean_dec(v_fst_2440_);
if (lean_obj_tag(v___x_2443_) == 0)
{
lean_object* v_a_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2452_; 
v_a_2444_ = lean_ctor_get(v___x_2443_, 0);
v_isSharedCheck_2452_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2452_ == 0)
{
v___x_2446_ = v___x_2443_;
v_isShared_2447_ = v_isSharedCheck_2452_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_a_2444_);
lean_dec(v___x_2443_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2452_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2448_; lean_object* v___x_2450_; 
v___x_2448_ = l_Lean_mkAppN(v_a_2435_, v_a_2444_);
lean_dec(v_a_2444_);
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 0, v___x_2448_);
v___x_2450_ = v___x_2446_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v___x_2448_);
v___x_2450_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
return v___x_2450_;
}
}
}
else
{
lean_object* v_a_2453_; lean_object* v___x_2455_; uint8_t v_isShared_2456_; uint8_t v_isSharedCheck_2460_; 
lean_dec(v_a_2435_);
v_a_2453_ = lean_ctor_get(v___x_2443_, 0);
v_isSharedCheck_2460_ = !lean_is_exclusive(v___x_2443_);
if (v_isSharedCheck_2460_ == 0)
{
v___x_2455_ = v___x_2443_;
v_isShared_2456_ = v_isSharedCheck_2460_;
goto v_resetjp_2454_;
}
else
{
lean_inc(v_a_2453_);
lean_dec(v___x_2443_);
v___x_2455_ = lean_box(0);
v_isShared_2456_ = v_isSharedCheck_2460_;
goto v_resetjp_2454_;
}
v_resetjp_2454_:
{
lean_object* v___x_2458_; 
if (v_isShared_2456_ == 0)
{
v___x_2458_ = v___x_2455_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2459_; 
v_reuseFailAlloc_2459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2459_, 0, v_a_2453_);
v___x_2458_ = v_reuseFailAlloc_2459_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
return v___x_2458_;
}
}
}
}
else
{
lean_object* v_a_2461_; lean_object* v___x_2463_; uint8_t v_isShared_2464_; uint8_t v_isSharedCheck_2468_; 
lean_dec(v_a_2435_);
lean_dec_ref(v_args_2423_);
lean_dec(v_fvars_2421_);
v_a_2461_ = lean_ctor_get(v___x_2438_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2438_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2463_ = v___x_2438_;
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
else
{
lean_inc(v_a_2461_);
lean_dec(v___x_2438_);
v___x_2463_ = lean_box(0);
v_isShared_2464_ = v_isSharedCheck_2468_;
goto v_resetjp_2462_;
}
v_resetjp_2462_:
{
lean_object* v___x_2466_; 
if (v_isShared_2464_ == 0)
{
v___x_2466_ = v___x_2463_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_a_2461_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
}
else
{
lean_dec(v_a_2435_);
lean_dec_ref(v_args_2423_);
lean_dec(v_fvars_2421_);
return v___x_2436_;
}
}
else
{
lean_object* v_a_2469_; size_t v_sz_2470_; size_t v___x_2471_; lean_object* v___x_2472_; 
lean_dec_ref(v_f_2422_);
v_a_2469_ = lean_ctor_get(v___x_2433_, 0);
lean_inc(v_a_2469_);
lean_dec_ref(v___x_2433_);
v_sz_2470_ = lean_array_size(v_args_2423_);
v___x_2471_ = ((size_t)0ULL);
v___x_2472_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_2421_, v_sz_2470_, v___x_2471_, v_args_2423_, v_a_2424_, v_a_2425_, v_a_2426_, v_a_2427_, v_a_2428_, v_a_2429_, v_a_2430_);
if (lean_obj_tag(v___x_2472_) == 0)
{
lean_object* v_a_2473_; lean_object* v___x_2475_; uint8_t v_isShared_2476_; uint8_t v_isSharedCheck_2481_; 
v_a_2473_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2475_ = v___x_2472_;
v_isShared_2476_ = v_isSharedCheck_2481_;
goto v_resetjp_2474_;
}
else
{
lean_inc(v_a_2473_);
lean_dec(v___x_2472_);
v___x_2475_ = lean_box(0);
v_isShared_2476_ = v_isSharedCheck_2481_;
goto v_resetjp_2474_;
}
v_resetjp_2474_:
{
lean_object* v___x_2477_; lean_object* v___x_2479_; 
v___x_2477_ = l_Lean_mkAppN(v_a_2469_, v_a_2473_);
lean_dec(v_a_2473_);
if (v_isShared_2476_ == 0)
{
lean_ctor_set(v___x_2475_, 0, v___x_2477_);
v___x_2479_ = v___x_2475_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v___x_2477_);
v___x_2479_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
return v___x_2479_;
}
}
}
else
{
lean_object* v_a_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2489_; 
lean_dec(v_a_2469_);
v_a_2482_ = lean_ctor_get(v___x_2472_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2472_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2484_ = v___x_2472_;
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_a_2482_);
lean_dec(v___x_2472_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2487_; 
if (v_isShared_2485_ == 0)
{
v___x_2487_ = v___x_2484_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2482_);
v___x_2487_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
return v___x_2487_;
}
}
}
}
}
else
{
lean_dec_ref(v_args_2423_);
lean_dec_ref(v_f_2422_);
lean_dec(v_fvars_2421_);
return v___x_2433_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed(lean_object* v_fvars_2490_, lean_object* v_f_2491_, lean_object* v_args_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_){
_start:
{
lean_object* v_res_2501_; 
v_res_2501_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp(v_fvars_2490_, v_f_2491_, v_args_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
lean_dec(v_a_2499_);
lean_dec_ref(v_a_2498_);
lean_dec(v_a_2497_);
lean_dec_ref(v_a_2496_);
lean_dec(v_a_2495_);
lean_dec(v_a_2494_);
lean_dec_ref(v_a_2493_);
return v_res_2501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(lean_object* v_fvars_2502_, lean_object* v_b_2503_, uint8_t v___x_2504_, lean_object* v_mk_2505_, lean_object* v_a_2506_, lean_object* v_x_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; 
lean_inc_ref(v_x_2507_);
v___x_2516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2516_, 0, v_x_2507_);
lean_ctor_set(v___x_2516_, 1, v_fvars_2502_);
v___x_2517_ = lean_expr_instantiate1(v_b_2503_, v_x_2507_);
v___x_2518_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2516_, v___x_2517_, v___x_2504_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
if (lean_obj_tag(v___x_2518_) == 0)
{
uint8_t v_lift_2519_; 
v_lift_2519_ = lean_ctor_get_uint8(v___y_2508_, 10);
if (v_lift_2519_ == 0)
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2532_; 
v_a_2520_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2532_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2532_ == 0)
{
v___x_2522_ = v___x_2518_;
v_isShared_2523_ = v_isSharedCheck_2532_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2518_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2532_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2530_; 
v___x_2524_ = lean_unsigned_to_nat(1u);
v___x_2525_ = lean_mk_empty_array_with_capacity(v___x_2524_);
v___x_2526_ = lean_array_push(v___x_2525_, v_x_2507_);
v___x_2527_ = lean_expr_abstract(v_a_2520_, v___x_2526_);
lean_dec_ref(v___x_2526_);
lean_dec(v_a_2520_);
v___x_2528_ = lean_apply_2(v_mk_2505_, v_a_2506_, v___x_2527_);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 0, v___x_2528_);
v___x_2530_ = v___x_2522_;
goto v_reusejp_2529_;
}
else
{
lean_object* v_reuseFailAlloc_2531_; 
v_reuseFailAlloc_2531_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2531_, 0, v___x_2528_);
v___x_2530_ = v_reuseFailAlloc_2531_;
goto v_reusejp_2529_;
}
v_reusejp_2529_:
{
return v___x_2530_;
}
}
}
else
{
lean_object* v_a_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v_a_2533_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_a_2533_);
lean_dec_ref(v___x_2518_);
v___x_2534_ = l_Lean_Expr_fvarId_x21(v_x_2507_);
v___x_2535_ = l_Lean_Meta_ExtractLets_flushDecls(v___x_2534_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2549_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2538_ = v___x_2535_;
v_isShared_2539_ = v_isSharedCheck_2549_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_a_2536_);
lean_dec(v___x_2535_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2549_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2547_; 
v___x_2540_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_a_2536_, v_a_2533_);
lean_dec(v_a_2536_);
v___x_2541_ = lean_unsigned_to_nat(1u);
v___x_2542_ = lean_mk_empty_array_with_capacity(v___x_2541_);
v___x_2543_ = lean_array_push(v___x_2542_, v_x_2507_);
v___x_2544_ = lean_expr_abstract(v___x_2540_, v___x_2543_);
lean_dec_ref(v___x_2543_);
lean_dec_ref(v___x_2540_);
v___x_2545_ = lean_apply_2(v_mk_2505_, v_a_2506_, v___x_2544_);
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 0, v___x_2545_);
v___x_2547_ = v___x_2538_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v___x_2545_);
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
lean_dec(v_a_2533_);
lean_dec_ref(v_x_2507_);
lean_dec_ref(v_a_2506_);
lean_dec_ref(v_mk_2505_);
v_a_2550_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2552_ = v___x_2535_;
v_isShared_2553_ = v_isSharedCheck_2557_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2535_);
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
else
{
lean_dec_ref(v_x_2507_);
lean_dec_ref(v_a_2506_);
lean_dec_ref(v_mk_2505_);
return v___x_2518_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed(lean_object* v_fvars_2558_, lean_object* v_b_2559_, lean_object* v___x_2560_, lean_object* v_mk_2561_, lean_object* v_a_2562_, lean_object* v_x_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_){
_start:
{
uint8_t v___x_52293__boxed_2572_; lean_object* v_res_2573_; 
v___x_52293__boxed_2572_ = lean_unbox(v___x_2560_);
v_res_2573_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0(v_fvars_2558_, v_b_2559_, v___x_52293__boxed_2572_, v_mk_2561_, v_a_2562_, v_x_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
lean_dec(v___y_2570_);
lean_dec_ref(v___y_2569_);
lean_dec(v___y_2568_);
lean_dec_ref(v___y_2567_);
lean_dec(v___y_2566_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec_ref(v_b_2559_);
return v_res_2573_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(lean_object* v_fvars_2574_, lean_object* v_n_2575_, lean_object* v_t_2576_, lean_object* v_b_2577_, uint8_t v_i_2578_, lean_object* v_mk_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_){
_start:
{
uint8_t v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = 0;
lean_inc(v_fvars_2574_);
v___x_2589_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2574_, v_t_2576_, v___x_2588_, v_a_2580_, v_a_2581_, v_a_2582_, v_a_2583_, v_a_2584_, v_a_2585_, v_a_2586_);
if (lean_obj_tag(v___x_2589_) == 0)
{
uint8_t v_underBinder_2590_; 
v_underBinder_2590_ = lean_ctor_get_uint8(v_a_2580_, 4);
if (v_underBinder_2590_ == 0)
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2599_; 
lean_dec(v_n_2575_);
lean_dec(v_fvars_2574_);
v_a_2591_ = lean_ctor_get(v___x_2589_, 0);
v_isSharedCheck_2599_ = !lean_is_exclusive(v___x_2589_);
if (v_isSharedCheck_2599_ == 0)
{
v___x_2593_ = v___x_2589_;
v_isShared_2594_ = v_isSharedCheck_2599_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2589_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2599_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2595_; lean_object* v___x_2597_; 
v___x_2595_ = lean_apply_2(v_mk_2579_, v_a_2591_, v_b_2577_);
if (v_isShared_2594_ == 0)
{
lean_ctor_set(v___x_2593_, 0, v___x_2595_);
v___x_2597_ = v___x_2593_;
goto v_reusejp_2596_;
}
else
{
lean_object* v_reuseFailAlloc_2598_; 
v_reuseFailAlloc_2598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2598_, 0, v___x_2595_);
v___x_2597_ = v_reuseFailAlloc_2598_;
goto v_reusejp_2596_;
}
v_reusejp_2596_:
{
return v___x_2597_;
}
}
}
else
{
lean_object* v_a_2600_; lean_object* v___x_2601_; lean_object* v___f_2602_; uint8_t v___x_2603_; lean_object* v___x_2604_; 
v_a_2600_ = lean_ctor_get(v___x_2589_, 0);
lean_inc_n(v_a_2600_, 2);
lean_dec_ref(v___x_2589_);
v___x_2601_ = lean_box(v___x_2588_);
v___f_2602_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___lam__0___boxed), 14, 5);
lean_closure_set(v___f_2602_, 0, v_fvars_2574_);
lean_closure_set(v___f_2602_, 1, v_b_2577_);
lean_closure_set(v___f_2602_, 2, v___x_2601_);
lean_closure_set(v___f_2602_, 3, v_mk_2579_);
lean_closure_set(v___f_2602_, 4, v_a_2600_);
v___x_2603_ = 0;
v___x_2604_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder_spec__0___redArg(v_n_2575_, v_i_2578_, v_a_2600_, v___f_2602_, v___x_2603_, v_a_2580_, v_a_2581_, v_a_2582_, v_a_2583_, v_a_2584_, v_a_2585_, v_a_2586_);
return v___x_2604_;
}
}
else
{
lean_dec_ref(v_mk_2579_);
lean_dec_ref(v_b_2577_);
lean_dec(v_n_2575_);
lean_dec(v_fvars_2574_);
return v___x_2589_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed(lean_object* v_fvars_2605_, lean_object* v_n_2606_, lean_object* v_t_2607_, lean_object* v_b_2608_, lean_object* v_i_2609_, lean_object* v_mk_2610_, lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_, lean_object* v_a_2618_){
_start:
{
uint8_t v_i_boxed_2619_; lean_object* v_res_2620_; 
v_i_boxed_2619_ = lean_unbox(v_i_2609_);
v_res_2620_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder(v_fvars_2605_, v_n_2606_, v_t_2607_, v_b_2608_, v_i_boxed_2619_, v_mk_2610_, v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_);
lean_dec(v_a_2617_);
lean_dec_ref(v_a_2616_);
lean_dec(v_a_2615_);
lean_dec_ref(v_a_2614_);
lean_dec(v_a_2613_);
lean_dec(v_a_2612_);
lean_dec_ref(v_a_2611_);
return v_res_2620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___boxed(lean_object* v_fvars_2621_, lean_object* v_e_2622_, lean_object* v_topLevel_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_, lean_object* v_a_2631_){
_start:
{
uint8_t v_topLevel_boxed_2632_; lean_object* v_res_2633_; 
v_topLevel_boxed_2632_ = lean_unbox(v_topLevel_2623_);
v_res_2633_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2621_, v_e_2622_, v_topLevel_boxed_2632_, v_a_2624_, v_a_2625_, v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_, v_a_2630_);
lean_dec(v_a_2630_);
lean_dec_ref(v_a_2629_);
lean_dec(v_a_2628_);
lean_dec_ref(v_a_2627_);
lean_dec(v_a_2626_);
lean_dec(v_a_2625_);
lean_dec_ref(v_a_2624_);
return v_res_2633_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2634_; 
v___x_2634_ = lean_mk_string_unchecked("let expression expected", 23, 23);
return v___x_2634_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2635_; 
v___x_2635_ = lean_mk_string_unchecked("Lean.Expr.updateLetE!", 21, 21);
return v___x_2635_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2636_; 
v___x_2636_ = lean_mk_string_unchecked("Lean.Expr", 9, 9);
return v___x_2636_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2637_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__2);
v___x_2638_ = lean_unsigned_to_nat(27u);
v___x_2639_ = lean_unsigned_to_nat(1946u);
v___x_2640_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__1);
v___x_2641_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__0);
v___x_2642_ = l_mkPanicMessageWithDecl(v___x_2641_, v___x_2640_, v___x_2639_, v___x_2638_, v___x_2637_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(uint8_t v_fst_2643_, lean_object* v_fvars_2644_, lean_object* v_b_2645_, uint8_t v___x_2646_, lean_object* v_e_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_, uint8_t v_isLet_2650_, uint8_t v_topLevel_2651_, lean_object* v_x_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_){
_start:
{
if (v_fst_2643_ == 0)
{
lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
lean_inc_ref(v_x_2652_);
v___x_2661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2661_, 0, v_x_2652_);
lean_ctor_set(v___x_2661_, 1, v_fvars_2644_);
v___x_2662_ = lean_expr_instantiate1(v_b_2645_, v_x_2652_);
v___x_2663_ = l_Lean_Meta_ExtractLets_extractCore(v___x_2661_, v___x_2662_, v___x_2646_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
if (lean_obj_tag(v___x_2663_) == 0)
{
if (lean_obj_tag(v_e_2647_) == 8)
{
lean_object* v_a_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2699_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2666_ = v___x_2663_;
v_isShared_2667_ = v_isSharedCheck_2699_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_a_2664_);
lean_dec(v___x_2663_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2699_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v_declName_2668_; lean_object* v_type_2669_; lean_object* v_value_2670_; lean_object* v_body_2671_; uint8_t v_nondep_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; uint8_t v___y_2678_; size_t v___x_2693_; size_t v___x_2694_; uint8_t v___x_2695_; 
v_declName_2668_ = lean_ctor_get(v_e_2647_, 0);
v_type_2669_ = lean_ctor_get(v_e_2647_, 1);
v_value_2670_ = lean_ctor_get(v_e_2647_, 2);
v_body_2671_ = lean_ctor_get(v_e_2647_, 3);
v_nondep_2672_ = lean_ctor_get_uint8(v_e_2647_, sizeof(void*)*4 + 8);
v___x_2673_ = lean_unsigned_to_nat(1u);
v___x_2674_ = lean_mk_empty_array_with_capacity(v___x_2673_);
v___x_2675_ = lean_array_push(v___x_2674_, v_x_2652_);
v___x_2676_ = lean_expr_abstract(v_a_2664_, v___x_2675_);
lean_dec_ref(v___x_2675_);
lean_dec(v_a_2664_);
v___x_2693_ = lean_ptr_addr(v_type_2669_);
v___x_2694_ = lean_ptr_addr(v_a_2648_);
v___x_2695_ = lean_usize_dec_eq(v___x_2693_, v___x_2694_);
if (v___x_2695_ == 0)
{
v___y_2678_ = v___x_2695_;
goto v___jp_2677_;
}
else
{
size_t v___x_2696_; size_t v___x_2697_; uint8_t v___x_2698_; 
v___x_2696_ = lean_ptr_addr(v_value_2670_);
v___x_2697_ = lean_ptr_addr(v_a_2649_);
v___x_2698_ = lean_usize_dec_eq(v___x_2696_, v___x_2697_);
v___y_2678_ = v___x_2698_;
goto v___jp_2677_;
}
v___jp_2677_:
{
if (v___y_2678_ == 0)
{
lean_object* v___x_2679_; lean_object* v___x_2681_; 
lean_inc(v_declName_2668_);
lean_dec_ref(v_e_2647_);
v___x_2679_ = l_Lean_Expr_letE___override(v_declName_2668_, v_a_2648_, v_a_2649_, v___x_2676_, v_nondep_2672_);
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 0, v___x_2679_);
v___x_2681_ = v___x_2666_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2679_);
v___x_2681_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
return v___x_2681_;
}
}
else
{
size_t v___x_2683_; size_t v___x_2684_; uint8_t v___x_2685_; 
v___x_2683_ = lean_ptr_addr(v_body_2671_);
v___x_2684_ = lean_ptr_addr(v___x_2676_);
v___x_2685_ = lean_usize_dec_eq(v___x_2683_, v___x_2684_);
if (v___x_2685_ == 0)
{
lean_object* v___x_2686_; lean_object* v___x_2688_; 
lean_inc(v_declName_2668_);
lean_dec_ref(v_e_2647_);
v___x_2686_ = l_Lean_Expr_letE___override(v_declName_2668_, v_a_2648_, v_a_2649_, v___x_2676_, v_nondep_2672_);
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 0, v___x_2686_);
v___x_2688_ = v___x_2666_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2686_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
else
{
lean_object* v___x_2691_; 
lean_dec_ref(v___x_2676_);
lean_dec_ref(v_a_2649_);
lean_dec_ref(v_a_2648_);
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 0, v_e_2647_);
v___x_2691_ = v___x_2666_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_e_2647_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
}
}
}
else
{
lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2708_; 
lean_dec_ref(v_x_2652_);
lean_dec_ref(v_a_2649_);
lean_dec_ref(v_a_2648_);
lean_dec_ref(v_e_2647_);
v_isSharedCheck_2708_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2708_ == 0)
{
lean_object* v_unused_2709_; 
v_unused_2709_ = lean_ctor_get(v___x_2663_, 0);
lean_dec(v_unused_2709_);
v___x_2701_ = v___x_2663_;
v_isShared_2702_ = v_isSharedCheck_2708_;
goto v_resetjp_2700_;
}
else
{
lean_dec(v___x_2663_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2708_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2706_; 
v___x_2703_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2704_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2703_);
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 0, v___x_2704_);
v___x_2706_ = v___x_2701_;
goto v_reusejp_2705_;
}
else
{
lean_object* v_reuseFailAlloc_2707_; 
v_reuseFailAlloc_2707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2707_, 0, v___x_2704_);
v___x_2706_ = v_reuseFailAlloc_2707_;
goto v_reusejp_2705_;
}
v_reusejp_2705_:
{
return v___x_2706_;
}
}
}
}
else
{
lean_dec_ref(v_x_2652_);
lean_dec_ref(v_a_2649_);
lean_dec_ref(v_a_2648_);
lean_dec_ref(v_e_2647_);
return v___x_2663_;
}
}
else
{
lean_object* v___x_2710_; lean_object* v___x_2711_; 
lean_dec_ref(v_a_2649_);
lean_dec_ref(v_a_2648_);
lean_dec_ref(v_e_2647_);
v___x_2710_ = l_Lean_Expr_fvarId_x21(v_x_2652_);
v___x_2711_ = l_Lean_FVarId_getDecl___redArg(v___x_2710_, v___y_2656_, v___y_2658_, v___y_2659_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2712_; lean_object* v___x_2713_; 
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
lean_inc(v_a_2712_);
lean_dec_ref(v___x_2711_);
v___x_2713_ = l_Lean_Meta_ExtractLets_addDecl___redArg(v_a_2712_, v_isLet_2650_, v___y_2653_, v___y_2655_, v___y_2659_);
if (lean_obj_tag(v___x_2713_) == 0)
{
lean_object* v___x_2714_; lean_object* v___x_2715_; 
lean_dec_ref(v___x_2713_);
v___x_2714_ = lean_expr_instantiate1(v_b_2645_, v_x_2652_);
lean_dec_ref(v_x_2652_);
v___x_2715_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2644_, v___x_2714_, v_topLevel_2651_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_);
return v___x_2715_;
}
else
{
lean_object* v_a_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2723_; 
lean_dec_ref(v_x_2652_);
lean_dec(v_fvars_2644_);
v_a_2716_ = lean_ctor_get(v___x_2713_, 0);
v_isSharedCheck_2723_ = !lean_is_exclusive(v___x_2713_);
if (v_isSharedCheck_2723_ == 0)
{
v___x_2718_ = v___x_2713_;
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_a_2716_);
lean_dec(v___x_2713_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2723_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2721_; 
if (v_isShared_2719_ == 0)
{
v___x_2721_ = v___x_2718_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_a_2716_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
}
else
{
lean_object* v_a_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2731_; 
lean_dec_ref(v_x_2652_);
lean_dec(v_fvars_2644_);
v_a_2724_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2731_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2731_ == 0)
{
v___x_2726_ = v___x_2711_;
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_a_2724_);
lean_dec(v___x_2711_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2731_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2729_; 
if (v_isShared_2727_ == 0)
{
v___x_2729_ = v___x_2726_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2730_; 
v_reuseFailAlloc_2730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2730_, 0, v_a_2724_);
v___x_2729_ = v_reuseFailAlloc_2730_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
return v___x_2729_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed(lean_object** _args){
lean_object* v_fst_2732_ = _args[0];
lean_object* v_fvars_2733_ = _args[1];
lean_object* v_b_2734_ = _args[2];
lean_object* v___x_2735_ = _args[3];
lean_object* v_e_2736_ = _args[4];
lean_object* v_a_2737_ = _args[5];
lean_object* v_a_2738_ = _args[6];
lean_object* v_isLet_2739_ = _args[7];
lean_object* v_topLevel_2740_ = _args[8];
lean_object* v_x_2741_ = _args[9];
lean_object* v___y_2742_ = _args[10];
lean_object* v___y_2743_ = _args[11];
lean_object* v___y_2744_ = _args[12];
lean_object* v___y_2745_ = _args[13];
lean_object* v___y_2746_ = _args[14];
lean_object* v___y_2747_ = _args[15];
lean_object* v___y_2748_ = _args[16];
lean_object* v___y_2749_ = _args[17];
_start:
{
uint8_t v_fst_52438__boxed_2750_; uint8_t v___x_52439__boxed_2751_; uint8_t v_isLet_boxed_2752_; uint8_t v_topLevel_boxed_2753_; lean_object* v_res_2754_; 
v_fst_52438__boxed_2750_ = lean_unbox(v_fst_2732_);
v___x_52439__boxed_2751_ = lean_unbox(v___x_2735_);
v_isLet_boxed_2752_ = lean_unbox(v_isLet_2739_);
v_topLevel_boxed_2753_ = lean_unbox(v_topLevel_2740_);
v_res_2754_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0(v_fst_52438__boxed_2750_, v_fvars_2733_, v_b_2734_, v___x_52439__boxed_2751_, v_e_2736_, v_a_2737_, v_a_2738_, v_isLet_boxed_2752_, v_topLevel_boxed_2753_, v_x_2741_, v___y_2742_, v___y_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_, v___y_2748_);
lean_dec(v___y_2748_);
lean_dec_ref(v___y_2747_);
lean_dec(v___y_2746_);
lean_dec_ref(v___y_2745_);
lean_dec(v___y_2744_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec_ref(v_b_2734_);
return v_res_2754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(lean_object* v_fvars_2755_, lean_object* v_e_2756_, uint8_t v_isLet_2757_, lean_object* v_n_2758_, lean_object* v_t_2759_, lean_object* v_v_2760_, lean_object* v_b_2761_, uint8_t v_topLevel_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_, lean_object* v_a_2768_, lean_object* v_a_2769_){
_start:
{
lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v___y_2774_; lean_object* v___y_2775_; lean_object* v___y_2776_; lean_object* v___y_2777_; lean_object* v___y_2778_; lean_object* v___y_2779_; uint8_t v___x_2785_; lean_object* v___x_2786_; 
v___x_2785_ = 0;
lean_inc(v_fvars_2755_);
v___x_2786_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2755_, v_t_2759_, v___x_2785_, v_a_2763_, v_a_2764_, v_a_2765_, v_a_2766_, v_a_2767_, v_a_2768_, v_a_2769_);
if (lean_obj_tag(v___x_2786_) == 0)
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2906_; 
v_a_2787_ = lean_ctor_get(v___x_2786_, 0);
v_isSharedCheck_2906_ = !lean_is_exclusive(v___x_2786_);
if (v_isSharedCheck_2906_ == 0)
{
v___x_2789_ = v___x_2786_;
v_isShared_2790_ = v_isSharedCheck_2906_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2786_);
v___x_2789_ = lean_box(0);
v_isShared_2790_ = v_isSharedCheck_2906_;
goto v_resetjp_2788_;
}
v_resetjp_2788_:
{
lean_object* v___x_2791_; 
lean_inc(v_fvars_2755_);
v___x_2791_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2755_, v_v_2760_, v___x_2785_, v_a_2763_, v_a_2764_, v_a_2765_, v_a_2766_, v_a_2767_, v_a_2768_, v_a_2769_);
if (lean_obj_tag(v___x_2791_) == 0)
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2905_; 
v_a_2792_ = lean_ctor_get(v___x_2791_, 0);
v_isSharedCheck_2905_ = !lean_is_exclusive(v___x_2791_);
if (v_isSharedCheck_2905_ == 0)
{
v___x_2794_ = v___x_2791_;
v_isShared_2795_ = v_isSharedCheck_2905_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___x_2791_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2905_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___y_2797_; uint8_t v___y_2798_; lean_object* v___y_2799_; uint8_t v___y_2800_; lean_object* v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2835_; lean_object* v___y_2836_; lean_object* v___y_2837_; lean_object* v___y_2838_; lean_object* v___y_2839_; lean_object* v___y_2840_; lean_object* v___y_2841_; uint8_t v_descend_2844_; uint8_t v_underBinder_2845_; uint8_t v_usedOnly_2846_; uint8_t v_merge_2847_; uint8_t v_lift_2848_; lean_object* v___y_2850_; lean_object* v___y_2851_; lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v___y_2854_; lean_object* v___y_2855_; lean_object* v___y_2856_; lean_object* v___y_2857_; lean_object* v___y_2858_; uint8_t v___y_2860_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2866_; lean_object* v___y_2867_; uint8_t v___y_2886_; 
v_descend_2844_ = lean_ctor_get_uint8(v_a_2763_, 3);
v_underBinder_2845_ = lean_ctor_get_uint8(v_a_2763_, 4);
v_usedOnly_2846_ = lean_ctor_get_uint8(v_a_2763_, 5);
v_merge_2847_ = lean_ctor_get_uint8(v_a_2763_, 6);
v_lift_2848_ = lean_ctor_get_uint8(v_a_2763_, 10);
if (v_usedOnly_2846_ == 0)
{
v___y_2886_ = v___x_2785_;
goto v___jp_2885_;
}
else
{
uint8_t v___x_2903_; 
v___x_2903_ = l_Lean_Expr_hasLooseBVars(v_b_2761_);
if (v___x_2903_ == 0)
{
lean_object* v___x_2904_; 
lean_del_object(v___x_2794_);
lean_dec(v_a_2792_);
lean_del_object(v___x_2789_);
lean_dec(v_a_2787_);
lean_dec(v_n_2758_);
lean_dec_ref(v_e_2756_);
v___x_2904_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2755_, v_b_2761_, v_topLevel_2762_, v_a_2763_, v_a_2764_, v_a_2765_, v_a_2766_, v_a_2767_, v_a_2768_, v_a_2769_);
return v___x_2904_;
}
else
{
v___y_2886_ = v___x_2785_;
goto v___jp_2885_;
}
}
v___jp_2796_:
{
if (v___y_2800_ == 0)
{
lean_object* v___x_2801_; lean_object* v___x_2803_; 
lean_dec_ref(v___y_2797_);
lean_dec_ref(v_e_2756_);
v___x_2801_ = l_Lean_Expr_letE___override(v___y_2799_, v_a_2787_, v_a_2792_, v_b_2761_, v___y_2798_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v___x_2801_);
v___x_2803_ = v___x_2794_;
goto v_reusejp_2802_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v___x_2801_);
v___x_2803_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2802_;
}
v_reusejp_2802_:
{
return v___x_2803_;
}
}
else
{
size_t v___x_2805_; size_t v___x_2806_; uint8_t v___x_2807_; 
v___x_2805_ = lean_ptr_addr(v___y_2797_);
lean_dec_ref(v___y_2797_);
v___x_2806_ = lean_ptr_addr(v_b_2761_);
v___x_2807_ = lean_usize_dec_eq(v___x_2805_, v___x_2806_);
if (v___x_2807_ == 0)
{
lean_object* v___x_2808_; lean_object* v___x_2810_; 
lean_dec_ref(v_e_2756_);
v___x_2808_ = l_Lean_Expr_letE___override(v___y_2799_, v_a_2787_, v_a_2792_, v_b_2761_, v___y_2798_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v___x_2808_);
v___x_2810_ = v___x_2794_;
goto v_reusejp_2809_;
}
else
{
lean_object* v_reuseFailAlloc_2811_; 
v_reuseFailAlloc_2811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2811_, 0, v___x_2808_);
v___x_2810_ = v_reuseFailAlloc_2811_;
goto v_reusejp_2809_;
}
v_reusejp_2809_:
{
return v___x_2810_;
}
}
else
{
lean_object* v___x_2813_; 
lean_dec(v___y_2799_);
lean_dec(v_a_2792_);
lean_dec(v_a_2787_);
lean_dec_ref(v_b_2761_);
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v_e_2756_);
v___x_2813_ = v___x_2794_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v_e_2756_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
}
}
v___jp_2815_:
{
if (lean_obj_tag(v_e_2756_) == 8)
{
lean_object* v_declName_2816_; lean_object* v_type_2817_; lean_object* v_value_2818_; lean_object* v_body_2819_; uint8_t v_nondep_2820_; size_t v___x_2821_; size_t v___x_2822_; uint8_t v___x_2823_; 
lean_del_object(v___x_2789_);
v_declName_2816_ = lean_ctor_get(v_e_2756_, 0);
v_type_2817_ = lean_ctor_get(v_e_2756_, 1);
v_value_2818_ = lean_ctor_get(v_e_2756_, 2);
v_body_2819_ = lean_ctor_get(v_e_2756_, 3);
v_nondep_2820_ = lean_ctor_get_uint8(v_e_2756_, sizeof(void*)*4 + 8);
v___x_2821_ = lean_ptr_addr(v_type_2817_);
v___x_2822_ = lean_ptr_addr(v_a_2787_);
v___x_2823_ = lean_usize_dec_eq(v___x_2821_, v___x_2822_);
if (v___x_2823_ == 0)
{
lean_inc(v_declName_2816_);
lean_inc_ref(v_body_2819_);
v___y_2797_ = v_body_2819_;
v___y_2798_ = v_nondep_2820_;
v___y_2799_ = v_declName_2816_;
v___y_2800_ = v___x_2823_;
goto v___jp_2796_;
}
else
{
size_t v___x_2824_; size_t v___x_2825_; uint8_t v___x_2826_; 
v___x_2824_ = lean_ptr_addr(v_value_2818_);
v___x_2825_ = lean_ptr_addr(v_a_2792_);
v___x_2826_ = lean_usize_dec_eq(v___x_2824_, v___x_2825_);
lean_inc(v_declName_2816_);
lean_inc_ref(v_body_2819_);
v___y_2797_ = v_body_2819_;
v___y_2798_ = v_nondep_2820_;
v___y_2799_ = v_declName_2816_;
v___y_2800_ = v___x_2826_;
goto v___jp_2796_;
}
}
else
{
lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2830_; 
lean_del_object(v___x_2794_);
lean_dec(v_a_2792_);
lean_dec(v_a_2787_);
lean_dec_ref(v_b_2761_);
lean_dec_ref(v_e_2756_);
v___x_2827_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___closed__3);
v___x_2828_ = l_panic___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__9(v___x_2827_);
if (v_isShared_2790_ == 0)
{
lean_ctor_set(v___x_2789_, 0, v___x_2828_);
v___x_2830_ = v___x_2789_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v___x_2828_);
v___x_2830_ = v_reuseFailAlloc_2831_;
goto v_reusejp_2829_;
}
v_reusejp_2829_:
{
return v___x_2830_;
}
}
}
v___jp_2832_:
{
uint8_t v___x_2842_; lean_object* v___x_2843_; 
v___x_2842_ = 0;
v___x_2843_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v___y_2838_, v_a_2787_, v_a_2792_, v___y_2834_, v___x_2785_, v___x_2842_, v___y_2840_, v___y_2837_, v___y_2833_, v___y_2839_, v___y_2836_, v___y_2835_, v___y_2841_);
return v___x_2843_;
}
v___jp_2849_:
{
if (v_underBinder_2845_ == 0)
{
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2851_);
goto v___jp_2815_;
}
else
{
if (v_descend_2844_ == 0)
{
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2851_);
goto v___jp_2815_;
}
else
{
lean_del_object(v___x_2794_);
lean_del_object(v___x_2789_);
lean_dec_ref(v_b_2761_);
lean_dec_ref(v_e_2756_);
v___y_2833_ = v___y_2850_;
v___y_2834_ = v___y_2851_;
v___y_2835_ = v___y_2852_;
v___y_2836_ = v___y_2853_;
v___y_2837_ = v___y_2854_;
v___y_2838_ = v___y_2855_;
v___y_2839_ = v___y_2856_;
v___y_2840_ = v___y_2857_;
v___y_2841_ = v___y_2858_;
goto v___jp_2832_;
}
}
}
v___jp_2859_:
{
lean_object* v___x_2868_; 
lean_inc(v_a_2792_);
lean_inc(v_a_2787_);
v___x_2868_ = l_Lean_Meta_ExtractLets_isExtractableLet___redArg(v_fvars_2755_, v_n_2758_, v_a_2787_, v_a_2792_, v___y_2861_, v___y_2863_, v___y_2866_, v___y_2867_);
if (lean_obj_tag(v___x_2868_) == 0)
{
lean_object* v_a_2869_; lean_object* v_fst_2870_; lean_object* v_snd_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___f_2875_; uint8_t v___x_2876_; 
v_a_2869_ = lean_ctor_get(v___x_2868_, 0);
lean_inc(v_a_2869_);
lean_dec_ref(v___x_2868_);
v_fst_2870_ = lean_ctor_get(v_a_2869_, 0);
lean_inc_n(v_fst_2870_, 2);
v_snd_2871_ = lean_ctor_get(v_a_2869_, 1);
lean_inc(v_snd_2871_);
lean_dec(v_a_2869_);
v___x_2872_ = lean_box(v___x_2785_);
v___x_2873_ = lean_box(v_isLet_2757_);
v___x_2874_ = lean_box(v_topLevel_2762_);
lean_inc(v_a_2792_);
lean_inc(v_a_2787_);
lean_inc_ref(v_e_2756_);
lean_inc_ref(v_b_2761_);
v___f_2875_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___lam__0___boxed), 18, 9);
lean_closure_set(v___f_2875_, 0, v_fst_2870_);
lean_closure_set(v___f_2875_, 1, v_fvars_2755_);
lean_closure_set(v___f_2875_, 2, v_b_2761_);
lean_closure_set(v___f_2875_, 3, v___x_2872_);
lean_closure_set(v___f_2875_, 4, v_e_2756_);
lean_closure_set(v___f_2875_, 5, v_a_2787_);
lean_closure_set(v___f_2875_, 6, v_a_2792_);
lean_closure_set(v___f_2875_, 7, v___x_2873_);
lean_closure_set(v___f_2875_, 8, v___x_2874_);
v___x_2876_ = lean_unbox(v_fst_2870_);
lean_dec(v_fst_2870_);
if (v___x_2876_ == 0)
{
v___y_2850_ = v___y_2863_;
v___y_2851_ = v___f_2875_;
v___y_2852_ = v___y_2866_;
v___y_2853_ = v___y_2865_;
v___y_2854_ = v___y_2862_;
v___y_2855_ = v_snd_2871_;
v___y_2856_ = v___y_2864_;
v___y_2857_ = v___y_2861_;
v___y_2858_ = v___y_2867_;
goto v___jp_2849_;
}
else
{
if (v___y_2860_ == 0)
{
lean_del_object(v___x_2794_);
lean_del_object(v___x_2789_);
lean_dec_ref(v_b_2761_);
lean_dec_ref(v_e_2756_);
v___y_2833_ = v___y_2863_;
v___y_2834_ = v___f_2875_;
v___y_2835_ = v___y_2866_;
v___y_2836_ = v___y_2865_;
v___y_2837_ = v___y_2862_;
v___y_2838_ = v_snd_2871_;
v___y_2839_ = v___y_2864_;
v___y_2840_ = v___y_2861_;
v___y_2841_ = v___y_2867_;
goto v___jp_2832_;
}
else
{
v___y_2850_ = v___y_2863_;
v___y_2851_ = v___f_2875_;
v___y_2852_ = v___y_2866_;
v___y_2853_ = v___y_2865_;
v___y_2854_ = v___y_2862_;
v___y_2855_ = v_snd_2871_;
v___y_2856_ = v___y_2864_;
v___y_2857_ = v___y_2861_;
v___y_2858_ = v___y_2867_;
goto v___jp_2849_;
}
}
}
else
{
lean_object* v_a_2877_; lean_object* v___x_2879_; uint8_t v_isShared_2880_; uint8_t v_isSharedCheck_2884_; 
lean_del_object(v___x_2794_);
lean_dec(v_a_2792_);
lean_del_object(v___x_2789_);
lean_dec(v_a_2787_);
lean_dec_ref(v_b_2761_);
lean_dec_ref(v_e_2756_);
lean_dec(v_fvars_2755_);
v_a_2877_ = lean_ctor_get(v___x_2868_, 0);
v_isSharedCheck_2884_ = !lean_is_exclusive(v___x_2868_);
if (v_isSharedCheck_2884_ == 0)
{
v___x_2879_ = v___x_2868_;
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
else
{
lean_inc(v_a_2877_);
lean_dec(v___x_2868_);
v___x_2879_ = lean_box(0);
v_isShared_2880_ = v_isSharedCheck_2884_;
goto v_resetjp_2878_;
}
v_resetjp_2878_:
{
lean_object* v___x_2882_; 
if (v_isShared_2880_ == 0)
{
v___x_2882_ = v___x_2879_;
goto v_reusejp_2881_;
}
else
{
lean_object* v_reuseFailAlloc_2883_; 
v_reuseFailAlloc_2883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2883_, 0, v_a_2877_);
v___x_2882_ = v_reuseFailAlloc_2883_;
goto v_reusejp_2881_;
}
v_reusejp_2881_:
{
return v___x_2882_;
}
}
}
}
v___jp_2885_:
{
if (v_merge_2847_ == 0)
{
v___y_2860_ = v___y_2886_;
v___y_2861_ = v_a_2763_;
v___y_2862_ = v_a_2764_;
v___y_2863_ = v_a_2765_;
v___y_2864_ = v_a_2766_;
v___y_2865_ = v_a_2767_;
v___y_2866_ = v_a_2768_;
v___y_2867_ = v_a_2769_;
goto v___jp_2859_;
}
else
{
lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v_valueMap_2889_; lean_object* v___x_2890_; 
v___x_2887_ = lean_st_ref_get(v_a_2769_);
lean_dec(v___x_2887_);
v___x_2888_ = lean_st_ref_get(v_a_2765_);
v_valueMap_2889_ = lean_ctor_get(v___x_2888_, 2);
lean_inc_ref(v_valueMap_2889_);
lean_dec(v___x_2888_);
v___x_2890_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_valueMap_2889_, v_a_2792_);
lean_dec_ref(v_valueMap_2889_);
if (lean_obj_tag(v___x_2890_) == 1)
{
lean_del_object(v___x_2794_);
lean_dec(v_a_2792_);
lean_del_object(v___x_2789_);
lean_dec(v_a_2787_);
lean_dec(v_n_2758_);
lean_dec_ref(v_e_2756_);
if (v_isLet_2757_ == 0)
{
lean_object* v_val_2891_; 
v_val_2891_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_val_2891_);
lean_dec_ref(v___x_2890_);
v___y_2772_ = v_val_2891_;
v___y_2773_ = v_a_2763_;
v___y_2774_ = v_a_2764_;
v___y_2775_ = v_a_2765_;
v___y_2776_ = v_a_2766_;
v___y_2777_ = v_a_2767_;
v___y_2778_ = v_a_2768_;
v___y_2779_ = v_a_2769_;
goto v___jp_2771_;
}
else
{
if (v_lift_2848_ == 0)
{
lean_object* v_val_2892_; 
v_val_2892_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_val_2892_);
lean_dec_ref(v___x_2890_);
v___y_2772_ = v_val_2892_;
v___y_2773_ = v_a_2763_;
v___y_2774_ = v_a_2764_;
v___y_2775_ = v_a_2765_;
v___y_2776_ = v_a_2766_;
v___y_2777_ = v_a_2767_;
v___y_2778_ = v_a_2768_;
v___y_2779_ = v_a_2769_;
goto v___jp_2771_;
}
else
{
lean_object* v_val_2893_; lean_object* v___x_2894_; 
v_val_2893_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_val_2893_);
lean_dec_ref(v___x_2890_);
v___x_2894_ = l_Lean_Meta_ExtractLets_ensureIsLet___redArg(v_val_2893_, v_a_2765_, v_a_2769_);
if (lean_obj_tag(v___x_2894_) == 0)
{
lean_dec_ref(v___x_2894_);
v___y_2772_ = v_val_2893_;
v___y_2773_ = v_a_2763_;
v___y_2774_ = v_a_2764_;
v___y_2775_ = v_a_2765_;
v___y_2776_ = v_a_2766_;
v___y_2777_ = v_a_2767_;
v___y_2778_ = v_a_2768_;
v___y_2779_ = v_a_2769_;
goto v___jp_2771_;
}
else
{
lean_object* v_a_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2902_; 
lean_dec(v_val_2893_);
lean_dec_ref(v_b_2761_);
lean_dec(v_fvars_2755_);
v_a_2895_ = lean_ctor_get(v___x_2894_, 0);
v_isSharedCheck_2902_ = !lean_is_exclusive(v___x_2894_);
if (v_isSharedCheck_2902_ == 0)
{
v___x_2897_ = v___x_2894_;
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_a_2895_);
lean_dec(v___x_2894_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2902_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v___x_2900_; 
if (v_isShared_2898_ == 0)
{
v___x_2900_ = v___x_2897_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v_a_2895_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
return v___x_2900_;
}
}
}
}
}
}
else
{
lean_dec(v___x_2890_);
v___y_2860_ = v___y_2886_;
v___y_2861_ = v_a_2763_;
v___y_2862_ = v_a_2764_;
v___y_2863_ = v_a_2765_;
v___y_2864_ = v_a_2766_;
v___y_2865_ = v_a_2767_;
v___y_2866_ = v_a_2768_;
v___y_2867_ = v_a_2769_;
goto v___jp_2859_;
}
}
}
}
}
else
{
lean_del_object(v___x_2789_);
lean_dec(v_a_2787_);
lean_dec_ref(v_b_2761_);
lean_dec(v_n_2758_);
lean_dec_ref(v_e_2756_);
lean_dec(v_fvars_2755_);
return v___x_2791_;
}
}
}
else
{
lean_dec_ref(v_b_2761_);
lean_dec_ref(v_v_2760_);
lean_dec(v_n_2758_);
lean_dec_ref(v_e_2756_);
lean_dec(v_fvars_2755_);
return v___x_2786_;
}
v___jp_2771_:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
lean_inc(v___y_2772_);
v___x_2780_ = l_Lean_Expr_fvar___override(v___y_2772_);
v___x_2781_ = lean_expr_instantiate1(v_b_2761_, v___x_2780_);
lean_dec_ref(v___x_2780_);
lean_dec_ref(v_b_2761_);
v___x_2782_ = lean_box(v_topLevel_2762_);
v___x_2783_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___boxed), 11, 3);
lean_closure_set(v___x_2783_, 0, v_fvars_2755_);
lean_closure_set(v___x_2783_, 1, v___x_2781_);
lean_closure_set(v___x_2783_, 2, v___x_2782_);
v___x_2784_ = l_Lean_Meta_ExtractLets_withDeclInContext___redArg(v___y_2772_, v___x_2783_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_);
lean_dec(v___y_2772_);
return v___x_2784_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed(lean_object* v_fvars_2907_, lean_object* v_struct_2908_, lean_object* v___y_2909_, lean_object* v_typeName_2910_, lean_object* v_idx_2911_, lean_object* v_e_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_){
_start:
{
uint8_t v___y_52214__boxed_2921_; lean_object* v_res_2922_; 
v___y_52214__boxed_2921_ = lean_unbox(v___y_2909_);
v_res_2922_ = l_Lean_Meta_ExtractLets_extractCore___lam__2(v_fvars_2907_, v_struct_2908_, v___y_52214__boxed_2921_, v_typeName_2910_, v_idx_2911_, v_e_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
lean_dec(v___y_2917_);
lean_dec_ref(v___y_2916_);
lean_dec(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
return v_res_2922_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3(void){
_start:
{
lean_object* v___x_2923_; 
v___x_2923_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_2923_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2(void){
_start:
{
lean_object* v___x_2924_; 
v___x_2924_ = lean_mk_string_unchecked("Lean.Meta.ExtractLets.extractCore", 33, 33);
return v___x_2924_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1(void){
_start:
{
lean_object* v___x_2925_; 
v___x_2925_ = lean_mk_string_unchecked("Lean.Meta.Tactic.Lets", 21, 21);
return v___x_2925_;
}
}
static lean_object* _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4(void){
_start:
{
lean_object* v___x_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; lean_object* v___x_2931_; 
v___x_2926_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__3);
v___x_2927_ = lean_unsigned_to_nat(75u);
v___x_2928_ = lean_unsigned_to_nat(229u);
v___x_2929_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__2);
v___x_2930_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__1);
v___x_2931_ = l_mkPanicMessageWithDecl(v___x_2930_, v___x_2929_, v___x_2928_, v___x_2927_, v___x_2926_);
return v___x_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3(uint8_t v_descend_2932_, lean_object* v_e_2933_, lean_object* v_fvars_2934_, uint8_t v___x_2935_, uint8_t v_topLevel_2936_, uint8_t v___y_2937_, lean_object* v_____r_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_, lean_object* v___y_2945_){
_start:
{
lean_object* v_k_2948_; 
switch(lean_obj_tag(v_e_2933_))
{
case 5:
{
lean_object* v___x_2951_; lean_object* v_dummy_2952_; lean_object* v_nargs_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2951_ = l_Lean_Expr_getAppFn(v_e_2933_);
v_dummy_2952_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__0);
v_nargs_2953_ = l_Lean_Expr_getAppNumArgs(v_e_2933_);
lean_inc(v_nargs_2953_);
v___x_2954_ = lean_mk_array(v_nargs_2953_, v_dummy_2952_);
v___x_2955_ = lean_unsigned_to_nat(1u);
v___x_2956_ = lean_nat_sub(v_nargs_2953_, v___x_2955_);
lean_dec(v_nargs_2953_);
lean_inc_ref(v_e_2933_);
v___x_2957_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2933_, v___x_2954_, v___x_2956_);
v___x_2958_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp___boxed), 11, 3);
lean_closure_set(v___x_2958_, 0, v_fvars_2934_);
lean_closure_set(v___x_2958_, 1, v___x_2951_);
lean_closure_set(v___x_2958_, 2, v___x_2957_);
v_k_2948_ = v___x_2958_;
goto v___jp_2947_;
}
case 6:
{
lean_object* v_binderName_2959_; lean_object* v_binderType_2960_; lean_object* v_body_2961_; uint8_t v_binderInfo_2962_; lean_object* v___x_2963_; lean_object* v___f_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v_binderName_2959_ = lean_ctor_get(v_e_2933_, 0);
v_binderType_2960_ = lean_ctor_get(v_e_2933_, 1);
v_body_2961_ = lean_ctor_get(v_e_2933_, 2);
v_binderInfo_2962_ = lean_ctor_get_uint8(v_e_2933_, sizeof(void*)*3 + 8);
v___x_2963_ = lean_box(v_binderInfo_2962_);
lean_inc_ref_n(v_body_2961_, 2);
lean_inc_ref_n(v_binderType_2960_, 2);
lean_inc_ref(v_e_2933_);
lean_inc_n(v_binderName_2959_, 2);
v___f_2964_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__0___boxed), 7, 5);
lean_closure_set(v___f_2964_, 0, v_binderName_2959_);
lean_closure_set(v___f_2964_, 1, v___x_2963_);
lean_closure_set(v___f_2964_, 2, v_e_2933_);
lean_closure_set(v___f_2964_, 3, v_binderType_2960_);
lean_closure_set(v___f_2964_, 4, v_body_2961_);
v___x_2965_ = lean_box(v_binderInfo_2962_);
v___x_2966_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2966_, 0, v_fvars_2934_);
lean_closure_set(v___x_2966_, 1, v_binderName_2959_);
lean_closure_set(v___x_2966_, 2, v_binderType_2960_);
lean_closure_set(v___x_2966_, 3, v_body_2961_);
lean_closure_set(v___x_2966_, 4, v___x_2965_);
lean_closure_set(v___x_2966_, 5, v___f_2964_);
v_k_2948_ = v___x_2966_;
goto v___jp_2947_;
}
case 7:
{
lean_object* v_binderName_2967_; lean_object* v_binderType_2968_; lean_object* v_body_2969_; uint8_t v_binderInfo_2970_; lean_object* v___x_2971_; lean_object* v___f_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
v_binderName_2967_ = lean_ctor_get(v_e_2933_, 0);
v_binderType_2968_ = lean_ctor_get(v_e_2933_, 1);
v_body_2969_ = lean_ctor_get(v_e_2933_, 2);
v_binderInfo_2970_ = lean_ctor_get_uint8(v_e_2933_, sizeof(void*)*3 + 8);
v___x_2971_ = lean_box(v_binderInfo_2970_);
lean_inc_ref_n(v_body_2969_, 2);
lean_inc_ref_n(v_binderType_2968_, 2);
lean_inc_ref(v_e_2933_);
lean_inc_n(v_binderName_2967_, 2);
v___f_2972_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2972_, 0, v_binderName_2967_);
lean_closure_set(v___f_2972_, 1, v___x_2971_);
lean_closure_set(v___f_2972_, 2, v_e_2933_);
lean_closure_set(v___f_2972_, 3, v_binderType_2968_);
lean_closure_set(v___f_2972_, 4, v_body_2969_);
v___x_2973_ = lean_box(v_binderInfo_2970_);
v___x_2974_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractBinder___boxed), 14, 6);
lean_closure_set(v___x_2974_, 0, v_fvars_2934_);
lean_closure_set(v___x_2974_, 1, v_binderName_2967_);
lean_closure_set(v___x_2974_, 2, v_binderType_2968_);
lean_closure_set(v___x_2974_, 3, v_body_2969_);
lean_closure_set(v___x_2974_, 4, v___x_2973_);
lean_closure_set(v___x_2974_, 5, v___f_2972_);
v_k_2948_ = v___x_2974_;
goto v___jp_2947_;
}
case 8:
{
uint8_t v_nondep_2975_; 
v_nondep_2975_ = lean_ctor_get_uint8(v_e_2933_, sizeof(void*)*4 + 8);
if (v_nondep_2975_ == 0)
{
lean_object* v_declName_2976_; lean_object* v_type_2977_; lean_object* v_value_2978_; lean_object* v_body_2979_; lean_object* v___x_2980_; 
v_declName_2976_ = lean_ctor_get(v_e_2933_, 0);
lean_inc(v_declName_2976_);
v_type_2977_ = lean_ctor_get(v_e_2933_, 1);
lean_inc_ref(v_type_2977_);
v_value_2978_ = lean_ctor_get(v_e_2933_, 2);
lean_inc_ref(v_value_2978_);
v_body_2979_ = lean_ctor_get(v_e_2933_, 3);
lean_inc_ref(v_body_2979_);
v___x_2980_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2934_, v_e_2933_, v___x_2935_, v_declName_2976_, v_type_2977_, v_value_2978_, v_body_2979_, v_topLevel_2936_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_);
return v___x_2980_;
}
else
{
lean_object* v_declName_2981_; lean_object* v_type_2982_; lean_object* v_value_2983_; lean_object* v_body_2984_; lean_object* v___x_2985_; 
v_declName_2981_ = lean_ctor_get(v_e_2933_, 0);
lean_inc(v_declName_2981_);
v_type_2982_ = lean_ctor_get(v_e_2933_, 1);
lean_inc_ref(v_type_2982_);
v_value_2983_ = lean_ctor_get(v_e_2933_, 2);
lean_inc_ref(v_value_2983_);
v_body_2984_ = lean_ctor_get(v_e_2933_, 3);
lean_inc_ref(v_body_2984_);
v___x_2985_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_2934_, v_e_2933_, v___y_2937_, v_declName_2981_, v_type_2982_, v_value_2983_, v_body_2984_, v_topLevel_2936_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_);
return v___x_2985_;
}
}
case 10:
{
lean_object* v_data_2986_; lean_object* v_expr_2987_; lean_object* v___x_2988_; 
v_data_2986_ = lean_ctor_get(v_e_2933_, 0);
v_expr_2987_ = lean_ctor_get(v_e_2933_, 1);
lean_inc_ref(v_expr_2987_);
v___x_2988_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_2934_, v_expr_2987_, v_topLevel_2936_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_);
if (lean_obj_tag(v___x_2988_) == 0)
{
lean_object* v_a_2989_; lean_object* v___x_2991_; uint8_t v_isShared_2992_; uint8_t v_isSharedCheck_3003_; 
v_a_2989_ = lean_ctor_get(v___x_2988_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2988_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2991_ = v___x_2988_;
v_isShared_2992_ = v_isSharedCheck_3003_;
goto v_resetjp_2990_;
}
else
{
lean_inc(v_a_2989_);
lean_dec(v___x_2988_);
v___x_2991_ = lean_box(0);
v_isShared_2992_ = v_isSharedCheck_3003_;
goto v_resetjp_2990_;
}
v_resetjp_2990_:
{
size_t v___x_2993_; size_t v___x_2994_; uint8_t v___x_2995_; 
v___x_2993_ = lean_ptr_addr(v_expr_2987_);
v___x_2994_ = lean_ptr_addr(v_a_2989_);
v___x_2995_ = lean_usize_dec_eq(v___x_2993_, v___x_2994_);
if (v___x_2995_ == 0)
{
lean_object* v___x_2996_; lean_object* v___x_2998_; 
lean_inc(v_data_2986_);
lean_dec_ref(v_e_2933_);
v___x_2996_ = l_Lean_Expr_mdata___override(v_data_2986_, v_a_2989_);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 0, v___x_2996_);
v___x_2998_ = v___x_2991_;
goto v_reusejp_2997_;
}
else
{
lean_object* v_reuseFailAlloc_2999_; 
v_reuseFailAlloc_2999_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2999_, 0, v___x_2996_);
v___x_2998_ = v_reuseFailAlloc_2999_;
goto v_reusejp_2997_;
}
v_reusejp_2997_:
{
return v___x_2998_;
}
}
else
{
lean_object* v___x_3001_; 
lean_dec(v_a_2989_);
if (v_isShared_2992_ == 0)
{
lean_ctor_set(v___x_2991_, 0, v_e_2933_);
v___x_3001_ = v___x_2991_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_e_2933_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
else
{
lean_dec_ref(v_e_2933_);
return v___x_2988_;
}
}
case 11:
{
lean_object* v_typeName_3004_; lean_object* v_idx_3005_; lean_object* v_struct_3006_; lean_object* v___x_3007_; lean_object* v___f_3008_; 
v_typeName_3004_ = lean_ctor_get(v_e_2933_, 0);
v_idx_3005_ = lean_ctor_get(v_e_2933_, 1);
v_struct_3006_ = lean_ctor_get(v_e_2933_, 2);
v___x_3007_ = lean_box(v___y_2937_);
lean_inc_ref(v_e_2933_);
lean_inc(v_idx_3005_);
lean_inc(v_typeName_3004_);
lean_inc_ref(v_struct_3006_);
v___f_3008_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__2___boxed), 14, 6);
lean_closure_set(v___f_3008_, 0, v_fvars_2934_);
lean_closure_set(v___f_3008_, 1, v_struct_3006_);
lean_closure_set(v___f_3008_, 2, v___x_3007_);
lean_closure_set(v___f_3008_, 3, v_typeName_3004_);
lean_closure_set(v___f_3008_, 4, v_idx_3005_);
lean_closure_set(v___f_3008_, 5, v_e_2933_);
v_k_2948_ = v___f_3008_;
goto v___jp_2947_;
}
default: 
{
lean_object* v___x_3009_; lean_object* v___x_3010_; 
lean_dec(v_fvars_2934_);
lean_dec_ref(v_e_2933_);
v___x_3009_ = lean_obj_once(&l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4, &l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4_once, _init_l_Lean_Meta_ExtractLets_extractCore___lam__3___closed__4);
v___x_3010_ = l_panic___at___00Lean_Meta_ExtractLets_extractCore_spec__4(v___x_3009_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_);
return v___x_3010_;
}
}
v___jp_2947_:
{
if (v_descend_2932_ == 0)
{
lean_object* v___x_2949_; 
lean_dec_ref(v_k_2948_);
v___x_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2949_, 0, v_e_2933_);
return v___x_2949_;
}
else
{
lean_object* v___x_2950_; 
lean_dec_ref(v_e_2933_);
lean_inc(v___y_2945_);
lean_inc_ref(v___y_2944_);
lean_inc(v___y_2943_);
lean_inc_ref(v___y_2942_);
lean_inc(v___y_2941_);
lean_inc(v___y_2940_);
lean_inc_ref(v___y_2939_);
v___x_2950_ = lean_apply_8(v_k_2948_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_, v___y_2945_, lean_box(0));
return v___x_2950_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed(lean_object* v_descend_3011_, lean_object* v_e_3012_, lean_object* v_fvars_3013_, lean_object* v___x_3014_, lean_object* v_topLevel_3015_, lean_object* v___y_3016_, lean_object* v_____r_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_){
_start:
{
uint8_t v_descend_boxed_3026_; uint8_t v___x_52367__boxed_3027_; uint8_t v_topLevel_boxed_3028_; uint8_t v___y_52368__boxed_3029_; lean_object* v_res_3030_; 
v_descend_boxed_3026_ = lean_unbox(v_descend_3011_);
v___x_52367__boxed_3027_ = lean_unbox(v___x_3014_);
v_topLevel_boxed_3028_ = lean_unbox(v_topLevel_3015_);
v___y_52368__boxed_3029_ = lean_unbox(v___y_3016_);
v_res_3030_ = l_Lean_Meta_ExtractLets_extractCore___lam__3(v_descend_boxed_3026_, v_e_3012_, v_fvars_3013_, v___x_52367__boxed_3027_, v_topLevel_boxed_3028_, v___y_52368__boxed_3029_, v_____r_3017_, v___y_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_);
lean_dec(v___y_3024_);
lean_dec_ref(v___y_3023_);
lean_dec(v___y_3022_);
lean_dec_ref(v___y_3021_);
lean_dec(v___y_3020_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore(lean_object* v_fvars_3031_, lean_object* v_e_3032_, uint8_t v_topLevel_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_){
_start:
{
lean_object* v___y_3043_; lean_object* v_a_3044_; lean_object* v___y_3051_; lean_object* v___y_3052_; lean_object* v___y_3055_; lean_object* v___y_3056_; uint8_t v___x_3059_; 
v___x_3059_ = l_Lean_Expr_isAtomic(v_e_3032_);
if (v___x_3059_ == 0)
{
uint8_t v_proofs_3060_; uint8_t v_types_3061_; uint8_t v_descend_3062_; lean_object* v___y_3064_; lean_object* v___y_3065_; uint8_t v___y_3082_; 
v_proofs_3060_ = lean_ctor_get_uint8(v_a_3034_, 0);
v_types_3061_ = lean_ctor_get_uint8(v_a_3034_, 1);
v_descend_3062_ = lean_ctor_get_uint8(v_a_3034_, 3);
if (v_descend_3062_ == 0)
{
goto v___jp_3106_;
}
else
{
if (v___x_3059_ == 0)
{
v___y_3082_ = v___x_3059_;
goto v___jp_3081_;
}
else
{
goto v___jp_3106_;
}
}
v___jp_3063_:
{
if (v_proofs_3060_ == 0)
{
lean_object* v___x_3066_; 
lean_inc_ref(v_e_3032_);
v___x_3066_ = l_Lean_Meta_isProof(v_e_3032_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_);
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; uint8_t v___x_3068_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
lean_inc(v_a_3067_);
lean_dec_ref(v___x_3066_);
v___x_3068_ = lean_unbox(v_a_3067_);
lean_dec(v_a_3067_);
if (v___x_3068_ == 0)
{
lean_object* v___x_3069_; lean_object* v___x_3070_; 
lean_dec_ref(v_e_3032_);
v___x_3069_ = lean_box(0);
lean_inc(v_a_3040_);
lean_inc_ref(v_a_3039_);
lean_inc(v_a_3038_);
lean_inc_ref(v_a_3037_);
lean_inc(v_a_3036_);
lean_inc(v_a_3035_);
lean_inc_ref(v_a_3034_);
v___x_3070_ = lean_apply_9(v___y_3065_, v___x_3069_, v_a_3034_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, lean_box(0));
v___y_3051_ = v___y_3064_;
v___y_3052_ = v___x_3070_;
goto v___jp_3050_;
}
else
{
lean_dec_ref(v___y_3065_);
v___y_3043_ = v___y_3064_;
v_a_3044_ = v_e_3032_;
goto v___jp_3042_;
}
}
else
{
lean_object* v_a_3071_; lean_object* v___x_3073_; uint8_t v_isShared_3074_; uint8_t v_isSharedCheck_3078_; 
lean_dec_ref(v___y_3065_);
lean_dec_ref(v___y_3064_);
lean_dec_ref(v_e_3032_);
v_a_3071_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3078_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3078_ == 0)
{
v___x_3073_ = v___x_3066_;
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
else
{
lean_inc(v_a_3071_);
lean_dec(v___x_3066_);
v___x_3073_ = lean_box(0);
v_isShared_3074_ = v_isSharedCheck_3078_;
goto v_resetjp_3072_;
}
v_resetjp_3072_:
{
lean_object* v___x_3076_; 
if (v_isShared_3074_ == 0)
{
v___x_3076_ = v___x_3073_;
goto v_reusejp_3075_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_a_3071_);
v___x_3076_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3075_;
}
v_reusejp_3075_:
{
return v___x_3076_;
}
}
}
}
else
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
lean_dec_ref(v_e_3032_);
v___x_3079_ = lean_box(0);
lean_inc(v_a_3040_);
lean_inc_ref(v_a_3039_);
lean_inc(v_a_3038_);
lean_inc_ref(v_a_3037_);
lean_inc(v_a_3036_);
lean_inc(v_a_3035_);
lean_inc_ref(v_a_3034_);
v___x_3080_ = lean_apply_9(v___y_3065_, v___x_3079_, v_a_3034_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, lean_box(0));
v___y_3051_ = v___y_3064_;
v___y_3052_ = v___x_3080_;
goto v___jp_3050_;
}
}
v___jp_3081_:
{
lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_3083_ = lean_st_ref_get(v_a_3040_);
lean_dec(v___x_3083_);
v___x_3084_ = lean_st_ref_get(v_a_3035_);
v___x_3085_ = lean_box(v_topLevel_3033_);
lean_inc_ref(v_e_3032_);
v___x_3086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3086_, 0, v___x_3085_);
lean_ctor_set(v___x_3086_, 1, v_e_3032_);
v___x_3087_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v___x_3084_, v___x_3086_);
lean_dec(v___x_3084_);
if (lean_obj_tag(v___x_3087_) == 0)
{
uint8_t v___x_3088_; 
v___x_3088_ = l_Lean_Meta_ExtractLets_containsLet(v_e_3032_);
if (v___x_3088_ == 0)
{
lean_dec(v_fvars_3031_);
v___y_3043_ = v___x_3086_;
v_a_3044_ = v_e_3032_;
goto v___jp_3042_;
}
else
{
lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___f_3093_; lean_object* v___x_3094_; lean_object* v___f_3095_; 
v___x_3089_ = lean_box(v_descend_3062_);
v___x_3090_ = lean_box(v___x_3088_);
v___x_3091_ = lean_box(v_topLevel_3033_);
v___x_3092_ = lean_box(v___y_3082_);
lean_inc_ref_n(v_e_3032_, 2);
v___f_3093_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__3___boxed), 15, 6);
lean_closure_set(v___f_3093_, 0, v___x_3089_);
lean_closure_set(v___f_3093_, 1, v_e_3032_);
lean_closure_set(v___f_3093_, 2, v_fvars_3031_);
lean_closure_set(v___f_3093_, 3, v___x_3090_);
lean_closure_set(v___f_3093_, 4, v___x_3091_);
lean_closure_set(v___f_3093_, 5, v___x_3092_);
v___x_3094_ = lean_box(v_types_3061_);
lean_inc_ref(v___f_3093_);
v___f_3095_ = lean_alloc_closure((void*)(l_Lean_Meta_ExtractLets_extractCore___lam__4___boxed), 12, 3);
lean_closure_set(v___f_3095_, 0, v___x_3094_);
lean_closure_set(v___f_3095_, 1, v_e_3032_);
lean_closure_set(v___f_3095_, 2, v___f_3093_);
if (v_topLevel_3033_ == 0)
{
lean_dec_ref(v___f_3093_);
v___y_3064_ = v___x_3086_;
v___y_3065_ = v___f_3095_;
goto v___jp_3063_;
}
else
{
uint8_t v___x_3096_; 
v___x_3096_ = l_Lean_Expr_isLet(v_e_3032_);
if (v___x_3096_ == 0)
{
uint8_t v___x_3097_; 
v___x_3097_ = l_Lean_Expr_isMData(v_e_3032_);
if (v___x_3097_ == 0)
{
lean_dec_ref(v___f_3093_);
v___y_3064_ = v___x_3086_;
v___y_3065_ = v___f_3095_;
goto v___jp_3063_;
}
else
{
lean_dec_ref(v___f_3095_);
lean_dec_ref(v_e_3032_);
v___y_3055_ = v___f_3093_;
v___y_3056_ = v___x_3086_;
goto v___jp_3054_;
}
}
else
{
lean_dec_ref(v___f_3095_);
lean_dec_ref(v_e_3032_);
v___y_3055_ = v___f_3093_;
v___y_3056_ = v___x_3086_;
goto v___jp_3054_;
}
}
}
}
else
{
lean_object* v_val_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3105_; 
lean_dec_ref(v___x_3086_);
lean_dec_ref(v_e_3032_);
lean_dec(v_fvars_3031_);
v_val_3098_ = lean_ctor_get(v___x_3087_, 0);
v_isSharedCheck_3105_ = !lean_is_exclusive(v___x_3087_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3100_ = v___x_3087_;
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_val_3098_);
lean_dec(v___x_3087_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3105_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v___x_3103_; 
if (v_isShared_3101_ == 0)
{
lean_ctor_set_tag(v___x_3100_, 0);
v___x_3103_ = v___x_3100_;
goto v_reusejp_3102_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v_val_3098_);
v___x_3103_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3102_;
}
v_reusejp_3102_:
{
return v___x_3103_;
}
}
}
}
v___jp_3106_:
{
if (v_topLevel_3033_ == 0)
{
lean_object* v___x_3107_; 
lean_dec(v_fvars_3031_);
v___x_3107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3107_, 0, v_e_3032_);
return v___x_3107_;
}
else
{
if (v___x_3059_ == 0)
{
v___y_3082_ = v___x_3059_;
goto v___jp_3081_;
}
else
{
lean_object* v___x_3108_; 
lean_dec(v_fvars_3031_);
v___x_3108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3108_, 0, v_e_3032_);
return v___x_3108_;
}
}
}
}
else
{
lean_object* v___x_3109_; 
lean_dec(v_fvars_3031_);
v___x_3109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3109_, 0, v_e_3032_);
return v___x_3109_;
}
v___jp_3042_:
{
lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3045_ = lean_st_ref_get(v_a_3040_);
lean_dec(v___x_3045_);
v___x_3046_ = lean_st_ref_take(v_a_3035_);
lean_inc_ref(v_a_3044_);
v___x_3047_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v___x_3046_, v___y_3043_, v_a_3044_);
v___x_3048_ = lean_st_ref_set(v_a_3035_, v___x_3047_);
v___x_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3049_, 0, v_a_3044_);
return v___x_3049_;
}
v___jp_3050_:
{
if (lean_obj_tag(v___y_3052_) == 0)
{
lean_object* v_a_3053_; 
v_a_3053_ = lean_ctor_get(v___y_3052_, 0);
lean_inc(v_a_3053_);
lean_dec_ref(v___y_3052_);
v___y_3043_ = v___y_3051_;
v_a_3044_ = v_a_3053_;
goto v___jp_3042_;
}
else
{
lean_dec_ref(v___y_3051_);
return v___y_3052_;
}
}
v___jp_3054_:
{
lean_object* v___x_3057_; lean_object* v___x_3058_; 
v___x_3057_ = lean_box(0);
lean_inc(v_a_3040_);
lean_inc_ref(v_a_3039_);
lean_inc(v_a_3038_);
lean_inc_ref(v_a_3037_);
lean_inc(v_a_3036_);
lean_inc(v_a_3035_);
lean_inc_ref(v_a_3034_);
v___x_3058_ = lean_apply_9(v___y_3055_, v___x_3057_, v_a_3034_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_, v_a_3039_, v_a_3040_, lean_box(0));
v___y_3051_ = v___y_3056_;
v___y_3052_ = v___x_3058_;
goto v___jp_3050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractCore___lam__2(lean_object* v_fvars_3110_, lean_object* v_struct_3111_, uint8_t v___y_3112_, lean_object* v_typeName_3113_, lean_object* v_idx_3114_, lean_object* v_e_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_, lean_object* v___y_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_){
_start:
{
lean_object* v___x_3124_; 
lean_inc_ref(v_struct_3111_);
v___x_3124_ = l_Lean_Meta_ExtractLets_extractCore(v_fvars_3110_, v_struct_3111_, v___y_3112_, v___y_3116_, v___y_3117_, v___y_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
if (lean_obj_tag(v___x_3124_) == 0)
{
lean_object* v_a_3125_; lean_object* v___x_3127_; uint8_t v_isShared_3128_; uint8_t v_isSharedCheck_3139_; 
v_a_3125_ = lean_ctor_get(v___x_3124_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3124_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3127_ = v___x_3124_;
v_isShared_3128_ = v_isSharedCheck_3139_;
goto v_resetjp_3126_;
}
else
{
lean_inc(v_a_3125_);
lean_dec(v___x_3124_);
v___x_3127_ = lean_box(0);
v_isShared_3128_ = v_isSharedCheck_3139_;
goto v_resetjp_3126_;
}
v_resetjp_3126_:
{
size_t v___x_3129_; size_t v___x_3130_; uint8_t v___x_3131_; 
v___x_3129_ = lean_ptr_addr(v_struct_3111_);
lean_dec_ref(v_struct_3111_);
v___x_3130_ = lean_ptr_addr(v_a_3125_);
v___x_3131_ = lean_usize_dec_eq(v___x_3129_, v___x_3130_);
if (v___x_3131_ == 0)
{
lean_object* v___x_3132_; lean_object* v___x_3134_; 
lean_dec_ref(v_e_3115_);
v___x_3132_ = l_Lean_Expr_proj___override(v_typeName_3113_, v_idx_3114_, v_a_3125_);
if (v_isShared_3128_ == 0)
{
lean_ctor_set(v___x_3127_, 0, v___x_3132_);
v___x_3134_ = v___x_3127_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3135_; 
v_reuseFailAlloc_3135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3135_, 0, v___x_3132_);
v___x_3134_ = v_reuseFailAlloc_3135_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
return v___x_3134_;
}
}
else
{
lean_object* v___x_3137_; 
lean_dec(v_a_3125_);
lean_dec(v_idx_3114_);
lean_dec(v_typeName_3113_);
if (v_isShared_3128_ == 0)
{
lean_ctor_set(v___x_3127_, 0, v_e_3115_);
v___x_3137_ = v___x_3127_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_e_3115_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
}
else
{
lean_dec_ref(v_e_3115_);
lean_dec(v_idx_3114_);
lean_dec(v_typeName_3113_);
lean_dec_ref(v_struct_3111_);
return v___x_3124_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7___boxed(lean_object* v_fvars_3140_, lean_object* v_sz_3141_, lean_object* v_i_3142_, lean_object* v_bs_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_){
_start:
{
size_t v_sz_boxed_3152_; size_t v_i_boxed_3153_; lean_object* v_res_3154_; 
v_sz_boxed_3152_ = lean_unbox_usize(v_sz_3141_);
lean_dec(v_sz_3141_);
v_i_boxed_3153_ = lean_unbox_usize(v_i_3142_);
lean_dec(v_i_3142_);
v_res_3154_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__7(v_fvars_3140_, v_sz_boxed_3152_, v_i_boxed_3153_, v_bs_3143_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_);
lean_dec(v___y_3150_);
lean_dec_ref(v___y_3149_);
lean_dec(v___y_3148_);
lean_dec_ref(v___y_3147_);
lean_dec(v___y_3146_);
lean_dec(v___y_3145_);
lean_dec_ref(v___y_3144_);
return v_res_3154_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg___boxed(lean_object* v_upperBound_3155_, lean_object* v_fst_3156_, lean_object* v_fvars_3157_, lean_object* v_a_3158_, lean_object* v_b_3159_, lean_object* v___y_3160_, lean_object* v___y_3161_, lean_object* v___y_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3155_, v_fst_3156_, v_fvars_3157_, v_a_3158_, v_b_3159_, v___y_3160_, v___y_3161_, v___y_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_);
lean_dec(v___y_3166_);
lean_dec_ref(v___y_3165_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec(v___y_3162_);
lean_dec(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec_ref(v_fst_3156_);
lean_dec(v_upperBound_3155_);
return v_res_3168_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike___boxed(lean_object* v_fvars_3169_, lean_object* v_e_3170_, lean_object* v_isLet_3171_, lean_object* v_n_3172_, lean_object* v_t_3173_, lean_object* v_v_3174_, lean_object* v_b_3175_, lean_object* v_topLevel_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_, lean_object* v_a_3184_){
_start:
{
uint8_t v_isLet_boxed_3185_; uint8_t v_topLevel_boxed_3186_; lean_object* v_res_3187_; 
v_isLet_boxed_3185_ = lean_unbox(v_isLet_3171_);
v_topLevel_boxed_3186_ = lean_unbox(v_topLevel_3176_);
v_res_3187_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike(v_fvars_3169_, v_e_3170_, v_isLet_boxed_3185_, v_n_3172_, v_t_3173_, v_v_3174_, v_b_3175_, v_topLevel_boxed_3186_, v_a_3177_, v_a_3178_, v_a_3179_, v_a_3180_, v_a_3181_, v_a_3182_, v_a_3183_);
lean_dec(v_a_3183_);
lean_dec_ref(v_a_3182_);
lean_dec(v_a_3181_);
lean_dec_ref(v_a_3180_);
lean_dec(v_a_3179_);
lean_dec(v_a_3178_);
lean_dec_ref(v_a_3177_);
return v_res_3187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(lean_object* v_00_u03b1_3188_, lean_object* v_name_3189_, lean_object* v_type_3190_, lean_object* v_val_3191_, lean_object* v_k_3192_, uint8_t v_nondep_3193_, uint8_t v_kind_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_){
_start:
{
lean_object* v___x_3203_; 
v___x_3203_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___redArg(v_name_3189_, v_type_3190_, v_val_3191_, v_k_3192_, v_nondep_3193_, v_kind_3194_, v___y_3195_, v___y_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_, v___y_3201_);
return v___x_3203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10___boxed(lean_object* v_00_u03b1_3204_, lean_object* v_name_3205_, lean_object* v_type_3206_, lean_object* v_val_3207_, lean_object* v_k_3208_, lean_object* v_nondep_3209_, lean_object* v_kind_3210_, lean_object* v___y_3211_, lean_object* v___y_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
uint8_t v_nondep_boxed_3219_; uint8_t v_kind_boxed_3220_; lean_object* v_res_3221_; 
v_nondep_boxed_3219_ = lean_unbox(v_nondep_3209_);
v_kind_boxed_3220_ = lean_unbox(v_kind_3210_);
v_res_3221_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__10(v_00_u03b1_3204_, v_name_3205_, v_type_3206_, v_val_3207_, v_k_3208_, v_nondep_boxed_3219_, v_kind_boxed_3220_, v___y_3211_, v___y_3212_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_);
lean_dec(v___y_3217_);
lean_dec_ref(v___y_3216_);
lean_dec(v___y_3215_);
lean_dec_ref(v___y_3214_);
lean_dec(v___y_3213_);
lean_dec(v___y_3212_);
lean_dec_ref(v___y_3211_);
return v_res_3221_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2(lean_object* v_00_u03b2_3222_, lean_object* v_m_3223_, lean_object* v_a_3224_, lean_object* v_b_3225_){
_start:
{
lean_object* v___x_3226_; 
v___x_3226_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2___redArg(v_m_3223_, v_a_3224_, v_b_3225_);
return v___x_3226_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(lean_object* v_00_u03b2_3227_, lean_object* v_m_3228_, lean_object* v_a_3229_){
_start:
{
lean_object* v___x_3230_; 
v___x_3230_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___redArg(v_m_3228_, v_a_3229_);
return v___x_3230_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3___boxed(lean_object* v_00_u03b2_3231_, lean_object* v_m_3232_, lean_object* v_a_3233_){
_start:
{
lean_object* v_res_3234_; 
v_res_3234_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3(v_00_u03b2_3231_, v_m_3232_, v_a_3233_);
lean_dec_ref(v_a_3233_);
lean_dec_ref(v_m_3232_);
return v_res_3234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(lean_object* v_upperBound_3235_, lean_object* v_fst_3236_, lean_object* v_fvars_3237_, lean_object* v_inst_3238_, lean_object* v_R_3239_, lean_object* v_a_3240_, lean_object* v_b_3241_, lean_object* v_c_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___redArg(v_upperBound_3235_, v_fst_3236_, v_fvars_3237_, v_a_3240_, v_b_3241_, v___y_3243_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6___boxed(lean_object* v_upperBound_3252_, lean_object* v_fst_3253_, lean_object* v_fvars_3254_, lean_object* v_inst_3255_, lean_object* v_R_3256_, lean_object* v_a_3257_, lean_object* v_b_3258_, lean_object* v_c_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
lean_object* v_res_3268_; 
v_res_3268_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractApp_spec__6(v_upperBound_3252_, v_fst_3253_, v_fvars_3254_, v_inst_3255_, v_R_3256_, v_a_3257_, v_b_3258_, v_c_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
lean_dec(v___y_3266_);
lean_dec_ref(v___y_3265_);
lean_dec(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec(v___y_3262_);
lean_dec(v___y_3261_);
lean_dec_ref(v___y_3260_);
lean_dec_ref(v_fst_3253_);
lean_dec(v_upperBound_3252_);
return v_res_3268_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(lean_object* v_00_u03b2_3269_, lean_object* v_m_3270_, lean_object* v_a_3271_){
_start:
{
lean_object* v___x_3272_; 
v___x_3272_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___redArg(v_m_3270_, v_a_3271_);
return v___x_3272_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11___boxed(lean_object* v_00_u03b2_3273_, lean_object* v_m_3274_, lean_object* v_a_3275_){
_start:
{
lean_object* v_res_3276_; 
v_res_3276_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11(v_00_u03b2_3273_, v_m_3274_, v_a_3275_);
lean_dec_ref(v_a_3275_);
lean_dec_ref(v_m_3274_);
return v_res_3276_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(lean_object* v_00_u03b2_3277_, lean_object* v_a_3278_, lean_object* v_x_3279_){
_start:
{
uint8_t v___x_3280_; 
v___x_3280_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___redArg(v_a_3278_, v_x_3279_);
return v___x_3280_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3281_, lean_object* v_a_3282_, lean_object* v_x_3283_){
_start:
{
uint8_t v_res_3284_; lean_object* v_r_3285_; 
v_res_3284_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__2(v_00_u03b2_3281_, v_a_3282_, v_x_3283_);
lean_dec(v_x_3283_);
lean_dec_ref(v_a_3282_);
v_r_3285_ = lean_box(v_res_3284_);
return v_r_3285_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3(lean_object* v_00_u03b2_3286_, lean_object* v_data_3287_){
_start:
{
lean_object* v___x_3288_; 
v___x_3288_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3___redArg(v_data_3287_);
return v___x_3288_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4(lean_object* v_00_u03b2_3289_, lean_object* v_a_3290_, lean_object* v_b_3291_, lean_object* v_x_3292_){
_start:
{
lean_object* v___x_3293_; 
v___x_3293_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__4___redArg(v_a_3290_, v_b_3291_, v_x_3292_);
return v___x_3293_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(lean_object* v_00_u03b2_3294_, lean_object* v_a_3295_, lean_object* v_x_3296_){
_start:
{
lean_object* v___x_3297_; 
v___x_3297_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___redArg(v_a_3295_, v_x_3296_);
return v___x_3297_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6___boxed(lean_object* v_00_u03b2_3298_, lean_object* v_a_3299_, lean_object* v_x_3300_){
_start:
{
lean_object* v_res_3301_; 
v_res_3301_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_ExtractLets_extractCore_spec__3_spec__6(v_00_u03b2_3298_, v_a_3299_, v_x_3300_);
lean_dec(v_x_3300_);
lean_dec_ref(v_a_3299_);
return v_res_3301_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(lean_object* v_00_u03b2_3302_, lean_object* v_a_3303_, lean_object* v_x_3304_){
_start:
{
lean_object* v___x_3305_; 
v___x_3305_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___redArg(v_a_3303_, v_x_3304_);
return v___x_3305_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15___boxed(lean_object* v_00_u03b2_3306_, lean_object* v_a_3307_, lean_object* v_x_3308_){
_start:
{
lean_object* v_res_3309_; 
v_res_3309_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_ExtractLets_extractCore_extractLetLike_spec__11_spec__15(v_00_u03b2_3306_, v_a_3307_, v_x_3308_);
lean_dec(v_x_3308_);
lean_dec_ref(v_a_3307_);
return v_res_3309_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9(lean_object* v_00_u03b2_3310_, lean_object* v_i_3311_, lean_object* v_source_3312_, lean_object* v_target_3313_){
_start:
{
lean_object* v___x_3314_; 
v___x_3314_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9___redArg(v_i_3311_, v_source_3312_, v_target_3313_);
return v___x_3314_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14(lean_object* v_00_u03b2_3315_, lean_object* v_x_3316_, lean_object* v_x_3317_){
_start:
{
lean_object* v___x_3318_; 
v___x_3318_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_ExtractLets_extractCore_spec__2_spec__3_spec__9_spec__14___redArg(v_x_3316_, v_x_3317_);
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel(lean_object* v_e_3319_, lean_object* v_a_3320_, lean_object* v_a_3321_, lean_object* v_a_3322_, lean_object* v_a_3323_, lean_object* v_a_3324_, lean_object* v_a_3325_, lean_object* v_a_3326_){
_start:
{
lean_object* v___x_3328_; lean_object* v_a_3329_; lean_object* v___x_3330_; uint8_t v___x_3331_; lean_object* v___x_3332_; 
v___x_3328_ = l_Lean_instantiateMVars___at___00Lean_Meta_ExtractLets_initializeValueMap_spec__0___redArg(v_e_3319_, v_a_3324_, v_a_3326_);
v_a_3329_ = lean_ctor_get(v___x_3328_, 0);
lean_inc(v_a_3329_);
lean_dec_ref(v___x_3328_);
v___x_3330_ = lean_box(0);
v___x_3331_ = 1;
v___x_3332_ = l_Lean_Meta_ExtractLets_extractCore(v___x_3330_, v_a_3329_, v___x_3331_, v_a_3320_, v_a_3321_, v_a_3322_, v_a_3323_, v_a_3324_, v_a_3325_, v_a_3326_);
return v___x_3332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extractTopLevel___boxed(lean_object* v_e_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_, lean_object* v_a_3337_, lean_object* v_a_3338_, lean_object* v_a_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_){
_start:
{
lean_object* v_res_3342_; 
v_res_3342_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_e_3333_, v_a_3334_, v_a_3335_, v_a_3336_, v_a_3337_, v_a_3338_, v_a_3339_, v_a_3340_);
lean_dec(v_a_3340_);
lean_dec_ref(v_a_3339_);
lean_dec(v_a_3338_);
lean_dec_ref(v_a_3337_);
lean_dec(v_a_3336_);
lean_dec(v_a_3335_);
lean_dec_ref(v_a_3334_);
return v_res_3342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(size_t v_sz_3343_, size_t v_i_3344_, lean_object* v_bs_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_){
_start:
{
uint8_t v___x_3354_; 
v___x_3354_ = lean_usize_dec_lt(v_i_3344_, v_sz_3343_);
if (v___x_3354_ == 0)
{
lean_object* v___x_3355_; 
v___x_3355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3355_, 0, v_bs_3345_);
return v___x_3355_;
}
else
{
lean_object* v_v_3356_; lean_object* v___x_3357_; 
v_v_3356_ = lean_array_uget_borrowed(v_bs_3345_, v_i_3344_);
lean_inc(v_v_3356_);
v___x_3357_ = l_Lean_Meta_ExtractLets_extractTopLevel(v_v_3356_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
if (lean_obj_tag(v___x_3357_) == 0)
{
lean_object* v_a_3358_; lean_object* v___x_3359_; lean_object* v_bs_x27_3360_; size_t v___x_3361_; size_t v___x_3362_; lean_object* v___x_3363_; 
v_a_3358_ = lean_ctor_get(v___x_3357_, 0);
lean_inc(v_a_3358_);
lean_dec_ref(v___x_3357_);
v___x_3359_ = lean_unsigned_to_nat(0u);
v_bs_x27_3360_ = lean_array_uset(v_bs_3345_, v_i_3344_, v___x_3359_);
v___x_3361_ = ((size_t)1ULL);
v___x_3362_ = lean_usize_add(v_i_3344_, v___x_3361_);
v___x_3363_ = lean_array_uset(v_bs_x27_3360_, v_i_3344_, v_a_3358_);
v_i_3344_ = v___x_3362_;
v_bs_3345_ = v___x_3363_;
goto _start;
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3372_; 
lean_dec_ref(v_bs_3345_);
v_a_3365_ = lean_ctor_get(v___x_3357_, 0);
v_isSharedCheck_3372_ = !lean_is_exclusive(v___x_3357_);
if (v_isSharedCheck_3372_ == 0)
{
v___x_3367_ = v___x_3357_;
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v___x_3357_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3372_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
lean_object* v___x_3370_; 
if (v_isShared_3368_ == 0)
{
v___x_3370_ = v___x_3367_;
goto v_reusejp_3369_;
}
else
{
lean_object* v_reuseFailAlloc_3371_; 
v_reuseFailAlloc_3371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3371_, 0, v_a_3365_);
v___x_3370_ = v_reuseFailAlloc_3371_;
goto v_reusejp_3369_;
}
v_reusejp_3369_:
{
return v___x_3370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0___boxed(lean_object* v_sz_3373_, lean_object* v_i_3374_, lean_object* v_bs_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_){
_start:
{
size_t v_sz_boxed_3384_; size_t v_i_boxed_3385_; lean_object* v_res_3386_; 
v_sz_boxed_3384_ = lean_unbox_usize(v_sz_3373_);
lean_dec(v_sz_3373_);
v_i_boxed_3385_ = lean_unbox_usize(v_i_3374_);
lean_dec(v_i_3374_);
v_res_3386_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_boxed_3384_, v_i_boxed_3385_, v_bs_3375_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_);
lean_dec(v___y_3382_);
lean_dec_ref(v___y_3381_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
lean_dec(v___y_3378_);
lean_dec(v___y_3377_);
lean_dec_ref(v___y_3376_);
return v_res_3386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract(lean_object* v_es_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_, lean_object* v_a_3390_, lean_object* v_a_3391_, lean_object* v_a_3392_, lean_object* v_a_3393_, lean_object* v_a_3394_){
_start:
{
lean_object* v___y_3397_; lean_object* v___y_3398_; lean_object* v___y_3399_; lean_object* v___y_3400_; lean_object* v___y_3401_; lean_object* v___y_3402_; lean_object* v___y_3403_; uint8_t v_merge_3407_; 
v_merge_3407_ = lean_ctor_get_uint8(v_a_3388_, 6);
if (v_merge_3407_ == 0)
{
v___y_3397_ = v_a_3388_;
v___y_3398_ = v_a_3389_;
v___y_3399_ = v_a_3390_;
v___y_3400_ = v_a_3391_;
v___y_3401_ = v_a_3392_;
v___y_3402_ = v_a_3393_;
v___y_3403_ = v_a_3394_;
goto v___jp_3396_;
}
else
{
uint8_t v_useContext_3408_; 
v_useContext_3408_ = lean_ctor_get_uint8(v_a_3388_, 7);
if (v_useContext_3408_ == 0)
{
v___y_3397_ = v_a_3388_;
v___y_3398_ = v_a_3389_;
v___y_3399_ = v_a_3390_;
v___y_3400_ = v_a_3391_;
v___y_3401_ = v_a_3392_;
v___y_3402_ = v_a_3393_;
v___y_3403_ = v_a_3394_;
goto v___jp_3396_;
}
else
{
lean_object* v___x_3409_; 
v___x_3409_ = l_Lean_Meta_ExtractLets_initializeValueMap(v_a_3388_, v_a_3389_, v_a_3390_, v_a_3391_, v_a_3392_, v_a_3393_, v_a_3394_);
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_dec_ref(v___x_3409_);
v___y_3397_ = v_a_3388_;
v___y_3398_ = v_a_3389_;
v___y_3399_ = v_a_3390_;
v___y_3400_ = v_a_3391_;
v___y_3401_ = v_a_3392_;
v___y_3402_ = v_a_3393_;
v___y_3403_ = v_a_3394_;
goto v___jp_3396_;
}
else
{
lean_object* v_a_3410_; lean_object* v___x_3412_; uint8_t v_isShared_3413_; uint8_t v_isSharedCheck_3417_; 
lean_dec_ref(v_es_3387_);
v_a_3410_ = lean_ctor_get(v___x_3409_, 0);
v_isSharedCheck_3417_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3417_ == 0)
{
v___x_3412_ = v___x_3409_;
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
else
{
lean_inc(v_a_3410_);
lean_dec(v___x_3409_);
v___x_3412_ = lean_box(0);
v_isShared_3413_ = v_isSharedCheck_3417_;
goto v_resetjp_3411_;
}
v_resetjp_3411_:
{
lean_object* v___x_3415_; 
if (v_isShared_3413_ == 0)
{
v___x_3415_ = v___x_3412_;
goto v_reusejp_3414_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v_a_3410_);
v___x_3415_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3414_;
}
v_reusejp_3414_:
{
return v___x_3415_;
}
}
}
}
}
v___jp_3396_:
{
size_t v_sz_3404_; size_t v___x_3405_; lean_object* v___x_3406_; 
v_sz_3404_ = lean_array_size(v_es_3387_);
v___x_3405_ = ((size_t)0ULL);
v___x_3406_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_extract_spec__0(v_sz_3404_, v___x_3405_, v_es_3387_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
return v___x_3406_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_ExtractLets_extract___boxed(lean_object* v_es_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_, lean_object* v_a_3423_, lean_object* v_a_3424_, lean_object* v_a_3425_, lean_object* v_a_3426_){
_start:
{
lean_object* v_res_3427_; 
v_res_3427_ = l_Lean_Meta_ExtractLets_extract(v_es_3418_, v_a_3419_, v_a_3420_, v_a_3421_, v_a_3422_, v_a_3423_, v_a_3424_, v_a_3425_);
lean_dec(v_a_3425_);
lean_dec_ref(v_a_3424_);
lean_dec(v_a_3423_);
lean_dec_ref(v_a_3422_);
lean_dec(v_a_3421_);
lean_dec(v_a_3420_);
lean_dec_ref(v_a_3419_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(lean_object* v_decls_3428_, lean_object* v_x_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_){
_start:
{
lean_object* v___x_3435_; 
v___x_3435_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withExistingLocalDeclsImp(lean_box(0), v_decls_3428_, v_x_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_);
if (lean_obj_tag(v___x_3435_) == 0)
{
lean_object* v_a_3436_; lean_object* v___x_3438_; uint8_t v_isShared_3439_; uint8_t v_isSharedCheck_3443_; 
v_a_3436_ = lean_ctor_get(v___x_3435_, 0);
v_isSharedCheck_3443_ = !lean_is_exclusive(v___x_3435_);
if (v_isSharedCheck_3443_ == 0)
{
v___x_3438_ = v___x_3435_;
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
else
{
lean_inc(v_a_3436_);
lean_dec(v___x_3435_);
v___x_3438_ = lean_box(0);
v_isShared_3439_ = v_isSharedCheck_3443_;
goto v_resetjp_3437_;
}
v_resetjp_3437_:
{
lean_object* v___x_3441_; 
if (v_isShared_3439_ == 0)
{
v___x_3441_ = v___x_3438_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v_a_3436_);
v___x_3441_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
return v___x_3441_;
}
}
}
else
{
lean_object* v_a_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3451_; 
v_a_3444_ = lean_ctor_get(v___x_3435_, 0);
v_isSharedCheck_3451_ = !lean_is_exclusive(v___x_3435_);
if (v_isSharedCheck_3451_ == 0)
{
v___x_3446_ = v___x_3435_;
v_isShared_3447_ = v_isSharedCheck_3451_;
goto v_resetjp_3445_;
}
else
{
lean_inc(v_a_3444_);
lean_dec(v___x_3435_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3451_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v___x_3449_; 
if (v_isShared_3447_ == 0)
{
v___x_3449_ = v___x_3446_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_a_3444_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg___boxed(lean_object* v_decls_3452_, lean_object* v_x_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_){
_start:
{
lean_object* v_res_3459_; 
v_res_3459_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3452_, v_x_3453_, v___y_3454_, v___y_3455_, v___y_3456_, v___y_3457_);
lean_dec(v___y_3457_);
lean_dec_ref(v___y_3456_);
lean_dec(v___y_3455_);
lean_dec_ref(v___y_3454_);
return v_res_3459_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(lean_object* v_00_u03b1_3460_, lean_object* v_decls_3461_, lean_object* v_x_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_){
_start:
{
lean_object* v___x_3468_; 
v___x_3468_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v_decls_3461_, v_x_3462_, v___y_3463_, v___y_3464_, v___y_3465_, v___y_3466_);
return v___x_3468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___boxed(lean_object* v_00_u03b1_3469_, lean_object* v_decls_3470_, lean_object* v_x_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_){
_start:
{
lean_object* v_res_3477_; 
v_res_3477_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1(v_00_u03b1_3469_, v_decls_3470_, v_x_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_);
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3474_);
lean_dec(v___y_3473_);
lean_dec_ref(v___y_3472_);
return v_res_3477_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(size_t v_sz_3478_, size_t v_i_3479_, lean_object* v_bs_3480_){
_start:
{
uint8_t v___x_3481_; 
v___x_3481_ = lean_usize_dec_lt(v_i_3479_, v_sz_3478_);
if (v___x_3481_ == 0)
{
return v_bs_3480_;
}
else
{
lean_object* v_v_3482_; lean_object* v___x_3483_; lean_object* v_bs_x27_3484_; lean_object* v___x_3485_; size_t v___x_3486_; size_t v___x_3487_; lean_object* v___x_3488_; 
v_v_3482_ = lean_array_uget(v_bs_3480_, v_i_3479_);
v___x_3483_ = lean_unsigned_to_nat(0u);
v_bs_x27_3484_ = lean_array_uset(v_bs_3480_, v_i_3479_, v___x_3483_);
v___x_3485_ = l_Lean_LocalDecl_fvarId(v_v_3482_);
lean_dec(v_v_3482_);
v___x_3486_ = ((size_t)1ULL);
v___x_3487_ = lean_usize_add(v_i_3479_, v___x_3486_);
v___x_3488_ = lean_array_uset(v_bs_x27_3484_, v_i_3479_, v___x_3485_);
v_i_3479_ = v___x_3487_;
v_bs_3480_ = v___x_3488_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0___boxed(lean_object* v_sz_3490_, lean_object* v_i_3491_, lean_object* v_bs_3492_){
_start:
{
size_t v_sz_boxed_3493_; size_t v_i_boxed_3494_; lean_object* v_res_3495_; 
v_sz_boxed_3493_ = lean_unbox_usize(v_sz_3490_);
lean_dec(v_sz_3490_);
v_i_boxed_3494_ = lean_unbox_usize(v_i_3491_);
lean_dec(v_i_3491_);
v_res_3495_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_boxed_3493_, v_i_boxed_3494_, v_bs_3492_);
return v_res_3495_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0(void){
_start:
{
lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3496_ = lean_box(0);
v___x_3497_ = lean_unsigned_to_nat(16u);
v___x_3498_ = lean_mk_array(v___x_3497_, v___x_3496_);
return v___x_3498_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1(void){
_start:
{
lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v___x_3499_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__0);
v___x_3500_ = lean_unsigned_to_nat(0u);
v___x_3501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3501_, 0, v___x_3500_);
lean_ctor_set(v___x_3501_, 1, v___x_3499_);
return v___x_3501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(lean_object* v_es_3502_, lean_object* v_givenNames_3503_, lean_object* v_k_3504_, lean_object* v_config_3505_, lean_object* v_a_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_){
_start:
{
lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; 
v___x_3511_ = lean_st_ref_get(v_a_3509_);
lean_dec(v___x_3511_);
v___x_3512_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3513_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0);
v___x_3514_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3514_, 0, v_givenNames_3503_);
lean_ctor_set(v___x_3514_, 1, v___x_3513_);
lean_ctor_set(v___x_3514_, 2, v___x_3512_);
v___x_3515_ = lean_st_mk_ref(v___x_3514_);
v___x_3516_ = lean_st_ref_get(v_a_3509_);
lean_dec(v___x_3516_);
v___x_3517_ = lean_st_mk_ref(v___x_3512_);
v___x_3518_ = l_Lean_Meta_ExtractLets_extract(v_es_3502_, v_config_3505_, v___x_3517_, v___x_3515_, v_a_3506_, v_a_3507_, v_a_3508_, v_a_3509_);
if (lean_obj_tag(v___x_3518_) == 0)
{
lean_object* v_a_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v_givenNames_3524_; lean_object* v_decls_3525_; size_t v_sz_3526_; size_t v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; size_t v_sz_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
v_a_3519_ = lean_ctor_get(v___x_3518_, 0);
lean_inc(v_a_3519_);
lean_dec_ref(v___x_3518_);
v___x_3520_ = lean_st_ref_get(v_a_3509_);
lean_dec(v___x_3520_);
v___x_3521_ = lean_st_ref_get(v___x_3517_);
lean_dec(v___x_3517_);
lean_dec(v___x_3521_);
v___x_3522_ = lean_st_ref_get(v_a_3509_);
lean_dec(v___x_3522_);
v___x_3523_ = lean_st_ref_get(v___x_3515_);
lean_dec(v___x_3515_);
v_givenNames_3524_ = lean_ctor_get(v___x_3523_, 0);
lean_inc(v_givenNames_3524_);
v_decls_3525_ = lean_ctor_get(v___x_3523_, 1);
lean_inc_ref(v_decls_3525_);
lean_dec(v___x_3523_);
v_sz_3526_ = lean_array_size(v_decls_3525_);
v___x_3527_ = ((size_t)0ULL);
v___x_3528_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_ExtractLets_withEnsuringDeclsInContext___at___00Lean_Meta_ExtractLets_withDeclInContext_spec__1_spec__1(v_sz_3526_, v___x_3527_, v_decls_3525_);
lean_inc_ref(v___x_3528_);
v___x_3529_ = lean_array_to_list(v___x_3528_);
v_sz_3530_ = lean_array_size(v___x_3528_);
v___x_3531_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__0(v_sz_3530_, v___x_3527_, v___x_3528_);
v___x_3532_ = lean_apply_3(v_k_3504_, v___x_3531_, v_a_3519_, v_givenNames_3524_);
v___x_3533_ = l_Lean_Meta_withExistingLocalDecls___at___00__private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp_spec__1___redArg(v___x_3529_, v___x_3532_, v_a_3506_, v_a_3507_, v_a_3508_, v_a_3509_);
return v___x_3533_;
}
else
{
lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3541_; 
lean_dec(v___x_3517_);
lean_dec(v___x_3515_);
lean_dec_ref(v_k_3504_);
v_a_3534_ = lean_ctor_get(v___x_3518_, 0);
v_isSharedCheck_3541_ = !lean_is_exclusive(v___x_3518_);
if (v_isSharedCheck_3541_ == 0)
{
v___x_3536_ = v___x_3518_;
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v___x_3518_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3541_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v___x_3539_; 
if (v_isShared_3537_ == 0)
{
v___x_3539_ = v___x_3536_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3540_; 
v_reuseFailAlloc_3540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3540_, 0, v_a_3534_);
v___x_3539_ = v_reuseFailAlloc_3540_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
return v___x_3539_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___boxed(lean_object* v_es_3542_, lean_object* v_givenNames_3543_, lean_object* v_k_3544_, lean_object* v_config_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_){
_start:
{
lean_object* v_res_3551_; 
v_res_3551_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3542_, v_givenNames_3543_, v_k_3544_, v_config_3545_, v_a_3546_, v_a_3547_, v_a_3548_, v_a_3549_);
lean_dec(v_a_3549_);
lean_dec_ref(v_a_3548_);
lean_dec(v_a_3547_);
lean_dec_ref(v_a_3546_);
lean_dec_ref(v_config_3545_);
return v_res_3551_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(lean_object* v_00_u03b1_3552_, lean_object* v_es_3553_, lean_object* v_givenNames_3554_, lean_object* v_k_3555_, lean_object* v_config_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_, lean_object* v_a_3559_, lean_object* v_a_3560_){
_start:
{
lean_object* v___x_3562_; 
v___x_3562_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3553_, v_givenNames_3554_, v_k_3555_, v_config_3556_, v_a_3557_, v_a_3558_, v_a_3559_, v_a_3560_);
return v___x_3562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___boxed(lean_object* v_00_u03b1_3563_, lean_object* v_es_3564_, lean_object* v_givenNames_3565_, lean_object* v_k_3566_, lean_object* v_config_3567_, lean_object* v_a_3568_, lean_object* v_a_3569_, lean_object* v_a_3570_, lean_object* v_a_3571_, lean_object* v_a_3572_){
_start:
{
lean_object* v_res_3573_; 
v_res_3573_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp(v_00_u03b1_3563_, v_es_3564_, v_givenNames_3565_, v_k_3566_, v_config_3567_, v_a_3568_, v_a_3569_, v_a_3570_, v_a_3571_);
lean_dec(v_a_3571_);
lean_dec_ref(v_a_3570_);
lean_dec(v_a_3569_);
lean_dec_ref(v_a_3568_);
lean_dec_ref(v_config_3567_);
return v_res_3573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0(lean_object* v_k_3574_, lean_object* v_runInBase_3575_, lean_object* v_b_3576_, lean_object* v_c_3577_, lean_object* v_d_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_, lean_object* v___y_3582_){
_start:
{
lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3584_ = lean_apply_3(v_k_3574_, v_b_3576_, v_c_3577_, v_d_3578_);
lean_inc(v___y_3582_);
lean_inc_ref(v___y_3581_);
lean_inc(v___y_3580_);
lean_inc_ref(v___y_3579_);
v___x_3585_ = lean_apply_7(v_runInBase_3575_, lean_box(0), v___x_3584_, v___y_3579_, v___y_3580_, v___y_3581_, v___y_3582_, lean_box(0));
return v___x_3585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__0___boxed(lean_object* v_k_3586_, lean_object* v_runInBase_3587_, lean_object* v_b_3588_, lean_object* v_c_3589_, lean_object* v_d_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_, lean_object* v___y_3595_){
_start:
{
lean_object* v_res_3596_; 
v_res_3596_ = l_Lean_Meta_extractLets___redArg___lam__0(v_k_3586_, v_runInBase_3587_, v_b_3588_, v_c_3589_, v_d_3590_, v___y_3591_, v___y_3592_, v___y_3593_, v___y_3594_);
lean_dec(v___y_3594_);
lean_dec_ref(v___y_3593_);
lean_dec(v___y_3592_);
lean_dec_ref(v___y_3591_);
return v_res_3596_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1(lean_object* v_k_3597_, lean_object* v_es_3598_, lean_object* v_givenNames_3599_, lean_object* v_config_3600_, lean_object* v_runInBase_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_){
_start:
{
lean_object* v___f_3607_; lean_object* v___x_3608_; 
v___f_3607_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_3607_, 0, v_k_3597_);
lean_closure_set(v___f_3607_, 1, v_runInBase_3601_);
v___x_3608_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3598_, v_givenNames_3599_, v___f_3607_, v_config_3600_, v___y_3602_, v___y_3603_, v___y_3604_, v___y_3605_);
return v___x_3608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg___lam__1___boxed(lean_object* v_k_3609_, lean_object* v_es_3610_, lean_object* v_givenNames_3611_, lean_object* v_config_3612_, lean_object* v_runInBase_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_){
_start:
{
lean_object* v_res_3619_; 
v_res_3619_ = l_Lean_Meta_extractLets___redArg___lam__1(v_k_3609_, v_es_3610_, v_givenNames_3611_, v_config_3612_, v_runInBase_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_);
lean_dec(v___y_3617_);
lean_dec_ref(v___y_3616_);
lean_dec(v___y_3615_);
lean_dec_ref(v___y_3614_);
lean_dec_ref(v_config_3612_);
return v_res_3619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___redArg(lean_object* v_inst_3620_, lean_object* v_inst_3621_, lean_object* v_es_3622_, lean_object* v_givenNames_3623_, lean_object* v_k_3624_, lean_object* v_config_3625_){
_start:
{
lean_object* v_toBind_3626_; lean_object* v_liftWith_3627_; lean_object* v_restoreM_3628_; lean_object* v___f_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; 
v_toBind_3626_ = lean_ctor_get(v_inst_3620_, 1);
lean_inc(v_toBind_3626_);
lean_dec_ref(v_inst_3620_);
v_liftWith_3627_ = lean_ctor_get(v_inst_3621_, 0);
lean_inc(v_liftWith_3627_);
v_restoreM_3628_ = lean_ctor_get(v_inst_3621_, 1);
lean_inc(v_restoreM_3628_);
lean_dec_ref(v_inst_3621_);
v___f_3629_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___redArg___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3629_, 0, v_k_3624_);
lean_closure_set(v___f_3629_, 1, v_es_3622_);
lean_closure_set(v___f_3629_, 2, v_givenNames_3623_);
lean_closure_set(v___f_3629_, 3, v_config_3625_);
v___x_3630_ = lean_apply_2(v_liftWith_3627_, lean_box(0), v___f_3629_);
v___x_3631_ = lean_apply_1(v_restoreM_3628_, lean_box(0));
v___x_3632_ = lean_apply_4(v_toBind_3626_, lean_box(0), lean_box(0), v___x_3630_, v___x_3631_);
return v___x_3632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets(lean_object* v_m_3633_, lean_object* v_00_u03b1_3634_, lean_object* v_inst_3635_, lean_object* v_inst_3636_, lean_object* v_es_3637_, lean_object* v_givenNames_3638_, lean_object* v_k_3639_, lean_object* v_config_3640_){
_start:
{
lean_object* v___x_3641_; 
v___x_3641_ = l_Lean_Meta_extractLets___redArg(v_inst_3635_, v_inst_3636_, v_es_3637_, v_givenNames_3638_, v_k_3639_, v_config_3640_);
return v___x_3641_;
}
}
static lean_object* _init_l_Lean_Meta_liftLets___closed__0(void){
_start:
{
lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; 
v___x_3642_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3643_ = lean_obj_once(&l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0, &l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0_once, _init_l_Lean_Meta_ExtractLets_instInhabitedState_default___closed__0);
v___x_3644_ = lean_box(0);
v___x_3645_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3645_, 0, v___x_3644_);
lean_ctor_set(v___x_3645_, 1, v___x_3643_);
lean_ctor_set(v___x_3645_, 2, v___x_3642_);
return v___x_3645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets(lean_object* v_e_3646_, lean_object* v_config_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_, lean_object* v_a_3650_, lean_object* v_a_3651_){
_start:
{
lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v___x_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; lean_object* v___x_3659_; uint8_t v_proofs_3660_; uint8_t v_types_3661_; uint8_t v_implicits_3662_; uint8_t v_descend_3663_; uint8_t v_underBinder_3664_; uint8_t v_usedOnly_3665_; uint8_t v_merge_3666_; uint8_t v_useContext_3667_; uint8_t v_preserveBinderNames_3668_; uint8_t v_lift_3669_; lean_object* v___x_3671_; uint8_t v_isShared_3672_; uint8_t v_isSharedCheck_3705_; 
v___x_3653_ = lean_st_ref_get(v_a_3651_);
lean_dec(v___x_3653_);
v___x_3654_ = lean_unsigned_to_nat(0u);
v___x_3655_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg___closed__1);
v___x_3656_ = lean_obj_once(&l_Lean_Meta_liftLets___closed__0, &l_Lean_Meta_liftLets___closed__0_once, _init_l_Lean_Meta_liftLets___closed__0);
v___x_3657_ = lean_st_mk_ref(v___x_3656_);
v___x_3658_ = lean_st_ref_get(v_a_3651_);
lean_dec(v___x_3658_);
v___x_3659_ = lean_st_mk_ref(v___x_3655_);
v_proofs_3660_ = lean_ctor_get_uint8(v_config_3647_, 0);
v_types_3661_ = lean_ctor_get_uint8(v_config_3647_, 1);
v_implicits_3662_ = lean_ctor_get_uint8(v_config_3647_, 2);
v_descend_3663_ = lean_ctor_get_uint8(v_config_3647_, 3);
v_underBinder_3664_ = lean_ctor_get_uint8(v_config_3647_, 4);
v_usedOnly_3665_ = lean_ctor_get_uint8(v_config_3647_, 5);
v_merge_3666_ = lean_ctor_get_uint8(v_config_3647_, 6);
v_useContext_3667_ = lean_ctor_get_uint8(v_config_3647_, 7);
v_preserveBinderNames_3668_ = lean_ctor_get_uint8(v_config_3647_, 9);
v_lift_3669_ = lean_ctor_get_uint8(v_config_3647_, 10);
v_isSharedCheck_3705_ = !lean_is_exclusive(v_config_3647_);
if (v_isSharedCheck_3705_ == 0)
{
v___x_3671_ = v_config_3647_;
v_isShared_3672_ = v_isSharedCheck_3705_;
goto v_resetjp_3670_;
}
else
{
lean_dec(v_config_3647_);
v___x_3671_ = lean_box(0);
v_isShared_3672_ = v_isSharedCheck_3705_;
goto v_resetjp_3670_;
}
v_resetjp_3670_:
{
lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; uint8_t v___x_3676_; lean_object* v___x_3678_; 
v___x_3673_ = lean_unsigned_to_nat(1u);
v___x_3674_ = lean_mk_empty_array_with_capacity(v___x_3673_);
v___x_3675_ = lean_array_push(v___x_3674_, v_e_3646_);
v___x_3676_ = 1;
if (v_isShared_3672_ == 0)
{
v___x_3678_ = v___x_3671_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3704_; 
v_reuseFailAlloc_3704_ = lean_alloc_ctor(0, 0, 11);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, 0, v_proofs_3660_);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, 1, v_types_3661_);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, 2, v_implicits_3662_);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, 3, v_descend_3663_);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, 4, v_underBinder_3664_);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, 5, v_usedOnly_3665_);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, 6, v_merge_3666_);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, 7, v_useContext_3667_);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, 9, v_preserveBinderNames_3668_);
lean_ctor_set_uint8(v_reuseFailAlloc_3704_, 10, v_lift_3669_);
v___x_3678_ = v_reuseFailAlloc_3704_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
lean_object* v___x_3679_; 
lean_ctor_set_uint8(v___x_3678_, 8, v___x_3676_);
v___x_3679_ = l_Lean_Meta_ExtractLets_extract(v___x_3675_, v___x_3678_, v___x_3659_, v___x_3657_, v_a_3648_, v_a_3649_, v_a_3650_, v_a_3651_);
lean_dec_ref(v___x_3678_);
if (lean_obj_tag(v___x_3679_) == 0)
{
lean_object* v_a_3680_; lean_object* v___x_3682_; uint8_t v_isShared_3683_; uint8_t v_isSharedCheck_3695_; 
v_a_3680_ = lean_ctor_get(v___x_3679_, 0);
v_isSharedCheck_3695_ = !lean_is_exclusive(v___x_3679_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3682_ = v___x_3679_;
v_isShared_3683_ = v_isSharedCheck_3695_;
goto v_resetjp_3681_;
}
else
{
lean_inc(v_a_3680_);
lean_dec(v___x_3679_);
v___x_3682_ = lean_box(0);
v_isShared_3683_ = v_isSharedCheck_3695_;
goto v_resetjp_3681_;
}
v_resetjp_3681_:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v_decls_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3693_; 
v___x_3684_ = lean_st_ref_get(v_a_3651_);
lean_dec(v___x_3684_);
v___x_3685_ = lean_st_ref_get(v___x_3659_);
lean_dec(v___x_3659_);
lean_dec(v___x_3685_);
v___x_3686_ = lean_st_ref_get(v_a_3651_);
lean_dec(v___x_3686_);
v___x_3687_ = lean_st_ref_get(v___x_3657_);
lean_dec(v___x_3657_);
v_decls_3688_ = lean_ctor_get(v___x_3687_, 1);
lean_inc_ref(v_decls_3688_);
lean_dec(v___x_3687_);
v___x_3689_ = l_Lean_instInhabitedExpr;
v___x_3690_ = lean_array_get(v___x_3689_, v_a_3680_, v___x_3654_);
lean_dec(v_a_3680_);
v___x_3691_ = l_Lean_Meta_ExtractLets_mkLetDecls(v_decls_3688_, v___x_3690_);
lean_dec_ref(v_decls_3688_);
if (v_isShared_3683_ == 0)
{
lean_ctor_set(v___x_3682_, 0, v___x_3691_);
v___x_3693_ = v___x_3682_;
goto v_reusejp_3692_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v___x_3691_);
v___x_3693_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3692_;
}
v_reusejp_3692_:
{
return v___x_3693_;
}
}
}
else
{
lean_object* v_a_3696_; lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3703_; 
lean_dec(v___x_3659_);
lean_dec(v___x_3657_);
v_a_3696_ = lean_ctor_get(v___x_3679_, 0);
v_isSharedCheck_3703_ = !lean_is_exclusive(v___x_3679_);
if (v_isSharedCheck_3703_ == 0)
{
v___x_3698_ = v___x_3679_;
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
else
{
lean_inc(v_a_3696_);
lean_dec(v___x_3679_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3703_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3701_; 
if (v_isShared_3699_ == 0)
{
v___x_3701_ = v___x_3698_;
goto v_reusejp_3700_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_a_3696_);
v___x_3701_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3700_;
}
v_reusejp_3700_:
{
return v___x_3701_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_liftLets___boxed(lean_object* v_e_3706_, lean_object* v_config_3707_, lean_object* v_a_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_){
_start:
{
lean_object* v_res_3713_; 
v_res_3713_ = l_Lean_Meta_liftLets(v_e_3706_, v_config_3707_, v_a_3708_, v_a_3709_, v_a_3710_, v_a_3711_);
lean_dec(v_a_3711_);
lean_dec_ref(v_a_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_a_3708_);
return v_res_3713_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0(void){
_start:
{
lean_object* v___x_3714_; 
v___x_3714_ = lean_mk_string_unchecked("made no progress", 16, 16);
return v___x_3714_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1(void){
_start:
{
lean_object* v___x_3715_; lean_object* v___x_3716_; 
v___x_3715_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__0);
v___x_3716_ = l_Lean_stringToMessageData(v___x_3715_);
return v___x_3716_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2(void){
_start:
{
lean_object* v___x_3717_; lean_object* v___x_3718_; 
v___x_3717_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__1);
v___x_3718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3717_);
return v___x_3718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(lean_object* v_tactic_3719_, lean_object* v_mvarId_3720_, lean_object* v_a_3721_, lean_object* v_a_3722_, lean_object* v_a_3723_, lean_object* v_a_3724_){
_start:
{
lean_object* v___x_3726_; lean_object* v___x_3727_; 
v___x_3726_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2, &l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___closed__2);
v___x_3727_ = l_Lean_Meta_throwTacticEx___redArg(v_tactic_3719_, v_mvarId_3720_, v___x_3726_, v_a_3721_, v_a_3722_, v_a_3723_, v_a_3724_);
return v___x_3727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg___boxed(lean_object* v_tactic_3728_, lean_object* v_mvarId_3729_, lean_object* v_a_3730_, lean_object* v_a_3731_, lean_object* v_a_3732_, lean_object* v_a_3733_, lean_object* v_a_3734_){
_start:
{
lean_object* v_res_3735_; 
v_res_3735_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3728_, v_mvarId_3729_, v_a_3730_, v_a_3731_, v_a_3732_, v_a_3733_);
lean_dec(v_a_3733_);
lean_dec_ref(v_a_3732_);
lean_dec(v_a_3731_);
lean_dec_ref(v_a_3730_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(lean_object* v_00_u03b1_3736_, lean_object* v_tactic_3737_, lean_object* v_mvarId_3738_, lean_object* v_a_3739_, lean_object* v_a_3740_, lean_object* v_a_3741_, lean_object* v_a_3742_){
_start:
{
lean_object* v___x_3744_; 
v___x_3744_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v_tactic_3737_, v_mvarId_3738_, v_a_3739_, v_a_3740_, v_a_3741_, v_a_3742_);
return v___x_3744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___boxed(lean_object* v_00_u03b1_3745_, lean_object* v_tactic_3746_, lean_object* v_mvarId_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_, lean_object* v_a_3751_, lean_object* v_a_3752_){
_start:
{
lean_object* v_res_3753_; 
v_res_3753_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress(v_00_u03b1_3745_, v_tactic_3746_, v_mvarId_3747_, v_a_3748_, v_a_3749_, v_a_3750_, v_a_3751_);
lean_dec(v_a_3751_);
lean_dec_ref(v_a_3750_);
lean_dec(v_a_3749_);
lean_dec_ref(v_a_3748_);
return v_res_3753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(lean_object* v_k_3754_, lean_object* v_b_3755_, lean_object* v_c_3756_, lean_object* v_d_3757_, lean_object* v___y_3758_, lean_object* v___y_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_){
_start:
{
lean_object* v___x_3763_; 
lean_inc(v___y_3761_);
lean_inc_ref(v___y_3760_);
lean_inc(v___y_3759_);
lean_inc_ref(v___y_3758_);
v___x_3763_ = lean_apply_8(v_k_3754_, v_b_3755_, v_c_3756_, v_d_3757_, v___y_3758_, v___y_3759_, v___y_3760_, v___y_3761_, lean_box(0));
return v___x_3763_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed(lean_object* v_k_3764_, lean_object* v_b_3765_, lean_object* v_c_3766_, lean_object* v_d_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_){
_start:
{
lean_object* v_res_3773_; 
v_res_3773_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0(v_k_3764_, v_b_3765_, v_c_3766_, v_d_3767_, v___y_3768_, v___y_3769_, v___y_3770_, v___y_3771_);
lean_dec(v___y_3771_);
lean_dec_ref(v___y_3770_);
lean_dec(v___y_3769_);
lean_dec_ref(v___y_3768_);
return v_res_3773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(lean_object* v_es_3774_, lean_object* v_givenNames_3775_, lean_object* v_k_3776_, lean_object* v_config_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_){
_start:
{
lean_object* v___f_3783_; lean_object* v___x_3784_; 
v___f_3783_ = lean_alloc_closure((void*)(l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_3783_, 0, v_k_3776_);
v___x_3784_ = l___private_Lean_Meta_Tactic_Lets_0__Lean_Meta_extractLetsImp___redArg(v_es_3774_, v_givenNames_3775_, v___f_3783_, v_config_3777_, v___y_3778_, v___y_3779_, v___y_3780_, v___y_3781_);
if (lean_obj_tag(v___x_3784_) == 0)
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3792_; 
v_a_3785_ = lean_ctor_get(v___x_3784_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v___x_3784_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3787_ = v___x_3784_;
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v___x_3784_);
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
v_reuseFailAlloc_3791_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_3793_; lean_object* v___x_3795_; uint8_t v_isShared_3796_; uint8_t v_isSharedCheck_3800_; 
v_a_3793_ = lean_ctor_get(v___x_3784_, 0);
v_isSharedCheck_3800_ = !lean_is_exclusive(v___x_3784_);
if (v_isSharedCheck_3800_ == 0)
{
v___x_3795_ = v___x_3784_;
v_isShared_3796_ = v_isSharedCheck_3800_;
goto v_resetjp_3794_;
}
else
{
lean_inc(v_a_3793_);
lean_dec(v___x_3784_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg___boxed(lean_object* v_es_3801_, lean_object* v_givenNames_3802_, lean_object* v_k_3803_, lean_object* v_config_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_){
_start:
{
lean_object* v_res_3810_; 
v_res_3810_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3801_, v_givenNames_3802_, v_k_3803_, v_config_3804_, v___y_3805_, v___y_3806_, v___y_3807_, v___y_3808_);
lean_dec(v___y_3808_);
lean_dec_ref(v___y_3807_);
lean_dec(v___y_3806_);
lean_dec_ref(v___y_3805_);
lean_dec_ref(v_config_3804_);
return v_res_3810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(lean_object* v_00_u03b1_3811_, lean_object* v_es_3812_, lean_object* v_givenNames_3813_, lean_object* v_k_3814_, lean_object* v_config_3815_, lean_object* v___y_3816_, lean_object* v___y_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_){
_start:
{
lean_object* v___x_3821_; 
v___x_3821_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v_es_3812_, v_givenNames_3813_, v_k_3814_, v_config_3815_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_);
return v___x_3821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___boxed(lean_object* v_00_u03b1_3822_, lean_object* v_es_3823_, lean_object* v_givenNames_3824_, lean_object* v_k_3825_, lean_object* v_config_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_){
_start:
{
lean_object* v_res_3832_; 
v_res_3832_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2(v_00_u03b1_3822_, v_es_3823_, v_givenNames_3824_, v_k_3825_, v_config_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
lean_dec(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec_ref(v_config_3826_);
return v_res_3832_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(lean_object* v_mvarId_3833_, lean_object* v_x_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_){
_start:
{
lean_object* v___x_3840_; 
v___x_3840_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_3833_, v_x_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
if (lean_obj_tag(v___x_3840_) == 0)
{
lean_object* v_a_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3848_; 
v_a_3841_ = lean_ctor_get(v___x_3840_, 0);
v_isSharedCheck_3848_ = !lean_is_exclusive(v___x_3840_);
if (v_isSharedCheck_3848_ == 0)
{
v___x_3843_ = v___x_3840_;
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_a_3841_);
lean_dec(v___x_3840_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3848_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3846_; 
if (v_isShared_3844_ == 0)
{
v___x_3846_ = v___x_3843_;
goto v_reusejp_3845_;
}
else
{
lean_object* v_reuseFailAlloc_3847_; 
v_reuseFailAlloc_3847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3847_, 0, v_a_3841_);
v___x_3846_ = v_reuseFailAlloc_3847_;
goto v_reusejp_3845_;
}
v_reusejp_3845_:
{
return v___x_3846_;
}
}
}
else
{
lean_object* v_a_3849_; lean_object* v___x_3851_; uint8_t v_isShared_3852_; uint8_t v_isSharedCheck_3856_; 
v_a_3849_ = lean_ctor_get(v___x_3840_, 0);
v_isSharedCheck_3856_ = !lean_is_exclusive(v___x_3840_);
if (v_isSharedCheck_3856_ == 0)
{
v___x_3851_ = v___x_3840_;
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
else
{
lean_inc(v_a_3849_);
lean_dec(v___x_3840_);
v___x_3851_ = lean_box(0);
v_isShared_3852_ = v_isSharedCheck_3856_;
goto v_resetjp_3850_;
}
v_resetjp_3850_:
{
lean_object* v___x_3854_; 
if (v_isShared_3852_ == 0)
{
v___x_3854_ = v___x_3851_;
goto v_reusejp_3853_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v_a_3849_);
v___x_3854_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3853_;
}
v_reusejp_3853_:
{
return v___x_3854_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg___boxed(lean_object* v_mvarId_3857_, lean_object* v_x_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
lean_object* v_res_3864_; 
v_res_3864_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3857_, v_x_3858_, v___y_3859_, v___y_3860_, v___y_3861_, v___y_3862_);
lean_dec(v___y_3862_);
lean_dec_ref(v___y_3861_);
lean_dec(v___y_3860_);
lean_dec_ref(v___y_3859_);
return v_res_3864_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(lean_object* v_00_u03b1_3865_, lean_object* v_mvarId_3866_, lean_object* v_x_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_){
_start:
{
lean_object* v___x_3873_; 
v___x_3873_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_3866_, v_x_3867_, v___y_3868_, v___y_3869_, v___y_3870_, v___y_3871_);
return v___x_3873_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___boxed(lean_object* v_00_u03b1_3874_, lean_object* v_mvarId_3875_, lean_object* v_x_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_){
_start:
{
lean_object* v_res_3882_; 
v_res_3882_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3(v_00_u03b1_3874_, v_mvarId_3875_, v_x_3876_, v___y_3877_, v___y_3878_, v___y_3879_, v___y_3880_);
lean_dec(v___y_3880_);
lean_dec_ref(v___y_3879_);
lean_dec(v___y_3878_);
lean_dec_ref(v___y_3877_);
return v_res_3882_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_x_3883_, lean_object* v_x_3884_, lean_object* v_x_3885_, lean_object* v_x_3886_){
_start:
{
lean_object* v_ks_3887_; lean_object* v_vs_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3912_; 
v_ks_3887_ = lean_ctor_get(v_x_3883_, 0);
v_vs_3888_ = lean_ctor_get(v_x_3883_, 1);
v_isSharedCheck_3912_ = !lean_is_exclusive(v_x_3883_);
if (v_isSharedCheck_3912_ == 0)
{
v___x_3890_ = v_x_3883_;
v_isShared_3891_ = v_isSharedCheck_3912_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_vs_3888_);
lean_inc(v_ks_3887_);
lean_dec(v_x_3883_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3912_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3892_; uint8_t v___x_3893_; 
v___x_3892_ = lean_array_get_size(v_ks_3887_);
v___x_3893_ = lean_nat_dec_lt(v_x_3884_, v___x_3892_);
if (v___x_3893_ == 0)
{
lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3897_; 
lean_dec(v_x_3884_);
v___x_3894_ = lean_array_push(v_ks_3887_, v_x_3885_);
v___x_3895_ = lean_array_push(v_vs_3888_, v_x_3886_);
if (v_isShared_3891_ == 0)
{
lean_ctor_set(v___x_3890_, 1, v___x_3895_);
lean_ctor_set(v___x_3890_, 0, v___x_3894_);
v___x_3897_ = v___x_3890_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v___x_3894_);
lean_ctor_set(v_reuseFailAlloc_3898_, 1, v___x_3895_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
return v___x_3897_;
}
}
else
{
lean_object* v_k_x27_3899_; uint8_t v___x_3900_; 
v_k_x27_3899_ = lean_array_fget_borrowed(v_ks_3887_, v_x_3884_);
v___x_3900_ = l_Lean_instBEqMVarId_beq(v_x_3885_, v_k_x27_3899_);
if (v___x_3900_ == 0)
{
lean_object* v___x_3902_; 
if (v_isShared_3891_ == 0)
{
v___x_3902_ = v___x_3890_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_ks_3887_);
lean_ctor_set(v_reuseFailAlloc_3906_, 1, v_vs_3888_);
v___x_3902_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; 
v___x_3903_ = lean_unsigned_to_nat(1u);
v___x_3904_ = lean_nat_add(v_x_3884_, v___x_3903_);
lean_dec(v_x_3884_);
v_x_3883_ = v___x_3902_;
v_x_3884_ = v___x_3904_;
goto _start;
}
}
else
{
lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3910_; 
v___x_3907_ = lean_array_fset(v_ks_3887_, v_x_3884_, v_x_3885_);
v___x_3908_ = lean_array_fset(v_vs_3888_, v_x_3884_, v_x_3886_);
lean_dec(v_x_3884_);
if (v_isShared_3891_ == 0)
{
lean_ctor_set(v___x_3890_, 1, v___x_3908_);
lean_ctor_set(v___x_3890_, 0, v___x_3907_);
v___x_3910_ = v___x_3890_;
goto v_reusejp_3909_;
}
else
{
lean_object* v_reuseFailAlloc_3911_; 
v_reuseFailAlloc_3911_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3911_, 0, v___x_3907_);
lean_ctor_set(v_reuseFailAlloc_3911_, 1, v___x_3908_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(lean_object* v_n_3913_, lean_object* v_k_3914_, lean_object* v_v_3915_){
_start:
{
lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3916_ = lean_unsigned_to_nat(0u);
v___x_3917_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_n_3913_, v___x_3916_, v_k_3914_, v_v_3915_);
return v___x_3917_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_3918_; size_t v___x_3919_; size_t v___x_3920_; 
v___x_3918_ = ((size_t)5ULL);
v___x_3919_ = ((size_t)1ULL);
v___x_3920_ = lean_usize_shift_left(v___x_3919_, v___x_3918_);
return v___x_3920_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_3921_; size_t v___x_3922_; size_t v___x_3923_; 
v___x_3921_ = ((size_t)1ULL);
v___x_3922_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__0);
v___x_3923_ = lean_usize_sub(v___x_3922_, v___x_3921_);
return v___x_3923_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_3924_; 
v___x_3924_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_3924_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(lean_object* v_x_3925_, size_t v_x_3926_, size_t v_x_3927_, lean_object* v_x_3928_, lean_object* v_x_3929_){
_start:
{
if (lean_obj_tag(v_x_3925_) == 0)
{
lean_object* v_es_3930_; size_t v___x_3931_; size_t v___x_3932_; size_t v___x_3933_; size_t v___x_3934_; lean_object* v_j_3935_; lean_object* v___x_3936_; uint8_t v___x_3937_; 
v_es_3930_ = lean_ctor_get(v_x_3925_, 0);
v___x_3931_ = ((size_t)5ULL);
v___x_3932_ = ((size_t)1ULL);
v___x_3933_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__1);
v___x_3934_ = lean_usize_land(v_x_3926_, v___x_3933_);
v_j_3935_ = lean_usize_to_nat(v___x_3934_);
v___x_3936_ = lean_array_get_size(v_es_3930_);
v___x_3937_ = lean_nat_dec_lt(v_j_3935_, v___x_3936_);
if (v___x_3937_ == 0)
{
lean_dec(v_j_3935_);
lean_dec(v_x_3929_);
lean_dec(v_x_3928_);
return v_x_3925_;
}
else
{
lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3974_; 
lean_inc_ref(v_es_3930_);
v_isSharedCheck_3974_ = !lean_is_exclusive(v_x_3925_);
if (v_isSharedCheck_3974_ == 0)
{
lean_object* v_unused_3975_; 
v_unused_3975_ = lean_ctor_get(v_x_3925_, 0);
lean_dec(v_unused_3975_);
v___x_3939_ = v_x_3925_;
v_isShared_3940_ = v_isSharedCheck_3974_;
goto v_resetjp_3938_;
}
else
{
lean_dec(v_x_3925_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3974_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
lean_object* v_v_3941_; lean_object* v___x_3942_; lean_object* v_xs_x27_3943_; lean_object* v___y_3945_; 
v_v_3941_ = lean_array_fget(v_es_3930_, v_j_3935_);
v___x_3942_ = lean_box(0);
v_xs_x27_3943_ = lean_array_fset(v_es_3930_, v_j_3935_, v___x_3942_);
switch(lean_obj_tag(v_v_3941_))
{
case 0:
{
lean_object* v_key_3950_; lean_object* v_val_3951_; lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3961_; 
v_key_3950_ = lean_ctor_get(v_v_3941_, 0);
v_val_3951_ = lean_ctor_get(v_v_3941_, 1);
v_isSharedCheck_3961_ = !lean_is_exclusive(v_v_3941_);
if (v_isSharedCheck_3961_ == 0)
{
v___x_3953_ = v_v_3941_;
v_isShared_3954_ = v_isSharedCheck_3961_;
goto v_resetjp_3952_;
}
else
{
lean_inc(v_val_3951_);
lean_inc(v_key_3950_);
lean_dec(v_v_3941_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3961_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
uint8_t v___x_3955_; 
v___x_3955_ = l_Lean_instBEqMVarId_beq(v_x_3928_, v_key_3950_);
if (v___x_3955_ == 0)
{
lean_object* v___x_3956_; lean_object* v___x_3957_; 
lean_del_object(v___x_3953_);
v___x_3956_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_3950_, v_val_3951_, v_x_3928_, v_x_3929_);
v___x_3957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3957_, 0, v___x_3956_);
v___y_3945_ = v___x_3957_;
goto v___jp_3944_;
}
else
{
lean_object* v___x_3959_; 
lean_dec(v_val_3951_);
lean_dec(v_key_3950_);
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 1, v_x_3929_);
lean_ctor_set(v___x_3953_, 0, v_x_3928_);
v___x_3959_ = v___x_3953_;
goto v_reusejp_3958_;
}
else
{
lean_object* v_reuseFailAlloc_3960_; 
v_reuseFailAlloc_3960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3960_, 0, v_x_3928_);
lean_ctor_set(v_reuseFailAlloc_3960_, 1, v_x_3929_);
v___x_3959_ = v_reuseFailAlloc_3960_;
goto v_reusejp_3958_;
}
v_reusejp_3958_:
{
v___y_3945_ = v___x_3959_;
goto v___jp_3944_;
}
}
}
}
case 1:
{
lean_object* v_node_3962_; lean_object* v___x_3964_; uint8_t v_isShared_3965_; uint8_t v_isSharedCheck_3972_; 
v_node_3962_ = lean_ctor_get(v_v_3941_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v_v_3941_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3964_ = v_v_3941_;
v_isShared_3965_ = v_isSharedCheck_3972_;
goto v_resetjp_3963_;
}
else
{
lean_inc(v_node_3962_);
lean_dec(v_v_3941_);
v___x_3964_ = lean_box(0);
v_isShared_3965_ = v_isSharedCheck_3972_;
goto v_resetjp_3963_;
}
v_resetjp_3963_:
{
size_t v___x_3966_; size_t v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3970_; 
v___x_3966_ = lean_usize_shift_right(v_x_3926_, v___x_3931_);
v___x_3967_ = lean_usize_add(v_x_3927_, v___x_3932_);
v___x_3968_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_node_3962_, v___x_3966_, v___x_3967_, v_x_3928_, v_x_3929_);
if (v_isShared_3965_ == 0)
{
lean_ctor_set(v___x_3964_, 0, v___x_3968_);
v___x_3970_ = v___x_3964_;
goto v_reusejp_3969_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v___x_3968_);
v___x_3970_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3969_;
}
v_reusejp_3969_:
{
v___y_3945_ = v___x_3970_;
goto v___jp_3944_;
}
}
}
default: 
{
lean_object* v___x_3973_; 
v___x_3973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3973_, 0, v_x_3928_);
lean_ctor_set(v___x_3973_, 1, v_x_3929_);
v___y_3945_ = v___x_3973_;
goto v___jp_3944_;
}
}
v___jp_3944_:
{
lean_object* v___x_3946_; lean_object* v___x_3948_; 
v___x_3946_ = lean_array_fset(v_xs_x27_3943_, v_j_3935_, v___y_3945_);
lean_dec(v_j_3935_);
if (v_isShared_3940_ == 0)
{
lean_ctor_set(v___x_3939_, 0, v___x_3946_);
v___x_3948_ = v___x_3939_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3949_; 
v_reuseFailAlloc_3949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3949_, 0, v___x_3946_);
v___x_3948_ = v_reuseFailAlloc_3949_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
return v___x_3948_;
}
}
}
}
}
else
{
lean_object* v_ks_3976_; lean_object* v_vs_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3997_; 
v_ks_3976_ = lean_ctor_get(v_x_3925_, 0);
v_vs_3977_ = lean_ctor_get(v_x_3925_, 1);
v_isSharedCheck_3997_ = !lean_is_exclusive(v_x_3925_);
if (v_isSharedCheck_3997_ == 0)
{
v___x_3979_ = v_x_3925_;
v_isShared_3980_ = v_isSharedCheck_3997_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_vs_3977_);
lean_inc(v_ks_3976_);
lean_dec(v_x_3925_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3997_;
goto v_resetjp_3978_;
}
v_resetjp_3978_:
{
lean_object* v___x_3982_; 
if (v_isShared_3980_ == 0)
{
v___x_3982_ = v___x_3979_;
goto v_reusejp_3981_;
}
else
{
lean_object* v_reuseFailAlloc_3996_; 
v_reuseFailAlloc_3996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3996_, 0, v_ks_3976_);
lean_ctor_set(v_reuseFailAlloc_3996_, 1, v_vs_3977_);
v___x_3982_ = v_reuseFailAlloc_3996_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
lean_object* v_newNode_3983_; uint8_t v___y_3985_; size_t v___x_3991_; uint8_t v___x_3992_; 
v_newNode_3983_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v___x_3982_, v_x_3928_, v_x_3929_);
v___x_3991_ = ((size_t)7ULL);
v___x_3992_ = lean_usize_dec_le(v___x_3991_, v_x_3927_);
if (v___x_3992_ == 0)
{
lean_object* v___x_3993_; lean_object* v___x_3994_; uint8_t v___x_3995_; 
v___x_3993_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_3983_);
v___x_3994_ = lean_unsigned_to_nat(4u);
v___x_3995_ = lean_nat_dec_lt(v___x_3993_, v___x_3994_);
lean_dec(v___x_3993_);
v___y_3985_ = v___x_3995_;
goto v___jp_3984_;
}
else
{
v___y_3985_ = v___x_3992_;
goto v___jp_3984_;
}
v___jp_3984_:
{
if (v___y_3985_ == 0)
{
lean_object* v_ks_3986_; lean_object* v_vs_3987_; lean_object* v___x_3988_; lean_object* v___x_3989_; lean_object* v___x_3990_; 
v_ks_3986_ = lean_ctor_get(v_newNode_3983_, 0);
lean_inc_ref(v_ks_3986_);
v_vs_3987_ = lean_ctor_get(v_newNode_3983_, 1);
lean_inc_ref(v_vs_3987_);
lean_dec_ref(v_newNode_3983_);
v___x_3988_ = lean_unsigned_to_nat(0u);
v___x_3989_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___closed__2);
v___x_3990_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_x_3927_, v_ks_3986_, v_vs_3987_, v___x_3988_, v___x_3989_);
lean_dec_ref(v_vs_3987_);
lean_dec_ref(v_ks_3986_);
return v___x_3990_;
}
else
{
return v_newNode_3983_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(size_t v_depth_3998_, lean_object* v_keys_3999_, lean_object* v_vals_4000_, lean_object* v_i_4001_, lean_object* v_entries_4002_){
_start:
{
lean_object* v___x_4003_; uint8_t v___x_4004_; 
v___x_4003_ = lean_array_get_size(v_keys_3999_);
v___x_4004_ = lean_nat_dec_lt(v_i_4001_, v___x_4003_);
if (v___x_4004_ == 0)
{
lean_dec(v_i_4001_);
return v_entries_4002_;
}
else
{
lean_object* v_k_4005_; lean_object* v_v_4006_; uint64_t v___x_4007_; size_t v_h_4008_; size_t v___x_4009_; lean_object* v___x_4010_; size_t v___x_4011_; size_t v___x_4012_; size_t v___x_4013_; size_t v_h_4014_; lean_object* v___x_4015_; lean_object* v___x_4016_; 
v_k_4005_ = lean_array_fget_borrowed(v_keys_3999_, v_i_4001_);
v_v_4006_ = lean_array_fget_borrowed(v_vals_4000_, v_i_4001_);
v___x_4007_ = l_Lean_instHashableMVarId_hash(v_k_4005_);
v_h_4008_ = lean_uint64_to_usize(v___x_4007_);
v___x_4009_ = ((size_t)5ULL);
v___x_4010_ = lean_unsigned_to_nat(1u);
v___x_4011_ = ((size_t)1ULL);
v___x_4012_ = lean_usize_sub(v_depth_3998_, v___x_4011_);
v___x_4013_ = lean_usize_mul(v___x_4009_, v___x_4012_);
v_h_4014_ = lean_usize_shift_right(v_h_4008_, v___x_4013_);
v___x_4015_ = lean_nat_add(v_i_4001_, v___x_4010_);
lean_dec(v_i_4001_);
lean_inc(v_v_4006_);
lean_inc(v_k_4005_);
v___x_4016_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_entries_4002_, v_h_4014_, v_depth_3998_, v_k_4005_, v_v_4006_);
v_i_4001_ = v___x_4015_;
v_entries_4002_ = v___x_4016_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg___boxed(lean_object* v_depth_4018_, lean_object* v_keys_4019_, lean_object* v_vals_4020_, lean_object* v_i_4021_, lean_object* v_entries_4022_){
_start:
{
size_t v_depth_boxed_4023_; lean_object* v_res_4024_; 
v_depth_boxed_4023_ = lean_unbox_usize(v_depth_4018_);
lean_dec(v_depth_4018_);
v_res_4024_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_boxed_4023_, v_keys_4019_, v_vals_4020_, v_i_4021_, v_entries_4022_);
lean_dec_ref(v_vals_4020_);
lean_dec_ref(v_keys_4019_);
return v_res_4024_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_x_4025_, lean_object* v_x_4026_, lean_object* v_x_4027_, lean_object* v_x_4028_, lean_object* v_x_4029_){
_start:
{
size_t v_x_2336__boxed_4030_; size_t v_x_2337__boxed_4031_; lean_object* v_res_4032_; 
v_x_2336__boxed_4030_ = lean_unbox_usize(v_x_4026_);
lean_dec(v_x_4026_);
v_x_2337__boxed_4031_ = lean_unbox_usize(v_x_4027_);
lean_dec(v_x_4027_);
v_res_4032_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_4025_, v_x_2336__boxed_4030_, v_x_2337__boxed_4031_, v_x_4028_, v_x_4029_);
return v_res_4032_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(lean_object* v_x_4033_, lean_object* v_x_4034_, lean_object* v_x_4035_){
_start:
{
uint64_t v___x_4036_; size_t v___x_4037_; size_t v___x_4038_; lean_object* v___x_4039_; 
v___x_4036_ = l_Lean_instHashableMVarId_hash(v_x_4034_);
v___x_4037_ = lean_uint64_to_usize(v___x_4036_);
v___x_4038_ = ((size_t)1ULL);
v___x_4039_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_4033_, v___x_4037_, v___x_4038_, v_x_4034_, v_x_4035_);
return v___x_4039_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(lean_object* v_mvarId_4040_, lean_object* v_val_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_){
_start:
{
lean_object* v___x_4045_; lean_object* v___x_4046_; lean_object* v_mctx_4047_; lean_object* v_cache_4048_; lean_object* v_zetaDeltaFVarIds_4049_; lean_object* v_postponed_4050_; lean_object* v_diag_4051_; lean_object* v___x_4053_; uint8_t v_isShared_4054_; uint8_t v_isSharedCheck_4079_; 
v___x_4045_ = lean_st_ref_get(v___y_4043_);
lean_dec(v___x_4045_);
v___x_4046_ = lean_st_ref_take(v___y_4042_);
v_mctx_4047_ = lean_ctor_get(v___x_4046_, 0);
v_cache_4048_ = lean_ctor_get(v___x_4046_, 1);
v_zetaDeltaFVarIds_4049_ = lean_ctor_get(v___x_4046_, 2);
v_postponed_4050_ = lean_ctor_get(v___x_4046_, 3);
v_diag_4051_ = lean_ctor_get(v___x_4046_, 4);
v_isSharedCheck_4079_ = !lean_is_exclusive(v___x_4046_);
if (v_isSharedCheck_4079_ == 0)
{
v___x_4053_ = v___x_4046_;
v_isShared_4054_ = v_isSharedCheck_4079_;
goto v_resetjp_4052_;
}
else
{
lean_inc(v_diag_4051_);
lean_inc(v_postponed_4050_);
lean_inc(v_zetaDeltaFVarIds_4049_);
lean_inc(v_cache_4048_);
lean_inc(v_mctx_4047_);
lean_dec(v___x_4046_);
v___x_4053_ = lean_box(0);
v_isShared_4054_ = v_isSharedCheck_4079_;
goto v_resetjp_4052_;
}
v_resetjp_4052_:
{
lean_object* v_depth_4055_; lean_object* v_levelAssignDepth_4056_; lean_object* v_lmvarCounter_4057_; lean_object* v_mvarCounter_4058_; lean_object* v_lDecls_4059_; lean_object* v_decls_4060_; lean_object* v_userNames_4061_; lean_object* v_lAssignment_4062_; lean_object* v_eAssignment_4063_; lean_object* v_dAssignment_4064_; lean_object* v___x_4066_; uint8_t v_isShared_4067_; uint8_t v_isSharedCheck_4078_; 
v_depth_4055_ = lean_ctor_get(v_mctx_4047_, 0);
v_levelAssignDepth_4056_ = lean_ctor_get(v_mctx_4047_, 1);
v_lmvarCounter_4057_ = lean_ctor_get(v_mctx_4047_, 2);
v_mvarCounter_4058_ = lean_ctor_get(v_mctx_4047_, 3);
v_lDecls_4059_ = lean_ctor_get(v_mctx_4047_, 4);
v_decls_4060_ = lean_ctor_get(v_mctx_4047_, 5);
v_userNames_4061_ = lean_ctor_get(v_mctx_4047_, 6);
v_lAssignment_4062_ = lean_ctor_get(v_mctx_4047_, 7);
v_eAssignment_4063_ = lean_ctor_get(v_mctx_4047_, 8);
v_dAssignment_4064_ = lean_ctor_get(v_mctx_4047_, 9);
v_isSharedCheck_4078_ = !lean_is_exclusive(v_mctx_4047_);
if (v_isSharedCheck_4078_ == 0)
{
v___x_4066_ = v_mctx_4047_;
v_isShared_4067_ = v_isSharedCheck_4078_;
goto v_resetjp_4065_;
}
else
{
lean_inc(v_dAssignment_4064_);
lean_inc(v_eAssignment_4063_);
lean_inc(v_lAssignment_4062_);
lean_inc(v_userNames_4061_);
lean_inc(v_decls_4060_);
lean_inc(v_lDecls_4059_);
lean_inc(v_mvarCounter_4058_);
lean_inc(v_lmvarCounter_4057_);
lean_inc(v_levelAssignDepth_4056_);
lean_inc(v_depth_4055_);
lean_dec(v_mctx_4047_);
v___x_4066_ = lean_box(0);
v_isShared_4067_ = v_isSharedCheck_4078_;
goto v_resetjp_4065_;
}
v_resetjp_4065_:
{
lean_object* v___x_4068_; lean_object* v___x_4070_; 
v___x_4068_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_eAssignment_4063_, v_mvarId_4040_, v_val_4041_);
if (v_isShared_4067_ == 0)
{
lean_ctor_set(v___x_4066_, 8, v___x_4068_);
v___x_4070_ = v___x_4066_;
goto v_reusejp_4069_;
}
else
{
lean_object* v_reuseFailAlloc_4077_; 
v_reuseFailAlloc_4077_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_4077_, 0, v_depth_4055_);
lean_ctor_set(v_reuseFailAlloc_4077_, 1, v_levelAssignDepth_4056_);
lean_ctor_set(v_reuseFailAlloc_4077_, 2, v_lmvarCounter_4057_);
lean_ctor_set(v_reuseFailAlloc_4077_, 3, v_mvarCounter_4058_);
lean_ctor_set(v_reuseFailAlloc_4077_, 4, v_lDecls_4059_);
lean_ctor_set(v_reuseFailAlloc_4077_, 5, v_decls_4060_);
lean_ctor_set(v_reuseFailAlloc_4077_, 6, v_userNames_4061_);
lean_ctor_set(v_reuseFailAlloc_4077_, 7, v_lAssignment_4062_);
lean_ctor_set(v_reuseFailAlloc_4077_, 8, v___x_4068_);
lean_ctor_set(v_reuseFailAlloc_4077_, 9, v_dAssignment_4064_);
v___x_4070_ = v_reuseFailAlloc_4077_;
goto v_reusejp_4069_;
}
v_reusejp_4069_:
{
lean_object* v___x_4072_; 
if (v_isShared_4054_ == 0)
{
lean_ctor_set(v___x_4053_, 0, v___x_4070_);
v___x_4072_ = v___x_4053_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4076_; 
v_reuseFailAlloc_4076_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4076_, 0, v___x_4070_);
lean_ctor_set(v_reuseFailAlloc_4076_, 1, v_cache_4048_);
lean_ctor_set(v_reuseFailAlloc_4076_, 2, v_zetaDeltaFVarIds_4049_);
lean_ctor_set(v_reuseFailAlloc_4076_, 3, v_postponed_4050_);
lean_ctor_set(v_reuseFailAlloc_4076_, 4, v_diag_4051_);
v___x_4072_ = v_reuseFailAlloc_4076_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; 
v___x_4073_ = lean_st_ref_set(v___y_4042_, v___x_4072_);
v___x_4074_ = lean_box(0);
v___x_4075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4075_, 0, v___x_4074_);
return v___x_4075_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg___boxed(lean_object* v_mvarId_4080_, lean_object* v_val_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_){
_start:
{
lean_object* v_res_4085_; 
v_res_4085_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4080_, v_val_4081_, v___y_4082_, v___y_4083_);
lean_dec(v___y_4083_);
lean_dec(v___y_4082_);
return v_res_4085_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(size_t v_sz_4086_, size_t v_i_4087_, lean_object* v_bs_4088_){
_start:
{
uint8_t v___x_4089_; 
v___x_4089_ = lean_usize_dec_lt(v_i_4087_, v_sz_4086_);
if (v___x_4089_ == 0)
{
return v_bs_4088_;
}
else
{
lean_object* v_v_4090_; lean_object* v___x_4091_; lean_object* v_bs_x27_4092_; lean_object* v___x_4093_; size_t v___x_4094_; size_t v___x_4095_; lean_object* v___x_4096_; 
v_v_4090_ = lean_array_uget(v_bs_4088_, v_i_4087_);
v___x_4091_ = lean_unsigned_to_nat(0u);
v_bs_x27_4092_ = lean_array_uset(v_bs_4088_, v_i_4087_, v___x_4091_);
v___x_4093_ = l_Lean_Expr_fvar___override(v_v_4090_);
v___x_4094_ = ((size_t)1ULL);
v___x_4095_ = lean_usize_add(v_i_4087_, v___x_4094_);
v___x_4096_ = lean_array_uset(v_bs_x27_4092_, v_i_4087_, v___x_4093_);
v_i_4087_ = v___x_4095_;
v_bs_4088_ = v___x_4096_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0___boxed(lean_object* v_sz_4098_, lean_object* v_i_4099_, lean_object* v_bs_4100_){
_start:
{
size_t v_sz_boxed_4101_; size_t v_i_boxed_4102_; lean_object* v_res_4103_; 
v_sz_boxed_4101_ = lean_unbox_usize(v_sz_4098_);
lean_dec(v_sz_4098_);
v_i_boxed_4102_ = lean_unbox_usize(v_i_4099_);
lean_dec(v_i_4099_);
v_res_4103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_boxed_4101_, v_i_boxed_4102_, v_bs_4100_);
return v_res_4103_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0(lean_object* v___x_4104_, lean_object* v_mvarId_4105_, lean_object* v___x_4106_, lean_object* v_a_4107_, lean_object* v_fvarIds_4108_, lean_object* v_es_4109_, lean_object* v_givenNames_x27_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_){
_start:
{
lean_object* v___x_4116_; lean_object* v___x_4117_; uint8_t v___y_4168_; lean_object* v___x_4178_; uint8_t v___x_4179_; 
v___x_4116_ = lean_unsigned_to_nat(0u);
v___x_4117_ = lean_array_get_borrowed(v___x_4104_, v_es_4109_, v___x_4116_);
v___x_4178_ = lean_array_get_size(v_fvarIds_4108_);
v___x_4179_ = lean_nat_dec_eq(v___x_4178_, v___x_4116_);
if (v___x_4179_ == 0)
{
v___y_4168_ = v___x_4179_;
goto v___jp_4167_;
}
else
{
uint8_t v___x_4180_; 
v___x_4180_ = lean_expr_eqv(v_a_4107_, v___x_4117_);
v___y_4168_ = v___x_4180_;
goto v___jp_4167_;
}
v___jp_4118_:
{
lean_object* v___x_4119_; 
lean_inc(v_mvarId_4105_);
v___x_4119_ = l_Lean_MVarId_getTag(v_mvarId_4105_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_);
if (lean_obj_tag(v___x_4119_) == 0)
{
lean_object* v_a_4120_; lean_object* v___x_4121_; 
v_a_4120_ = lean_ctor_get(v___x_4119_, 0);
lean_inc(v_a_4120_);
lean_dec_ref(v___x_4119_);
lean_inc(v___x_4117_);
v___x_4121_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_4117_, v_a_4120_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_);
if (lean_obj_tag(v___x_4121_) == 0)
{
lean_object* v_a_4122_; size_t v_sz_4123_; size_t v___x_4124_; lean_object* v___x_4125_; uint8_t v___x_4126_; uint8_t v___x_4127_; uint8_t v___x_4128_; lean_object* v___x_4129_; 
v_a_4122_ = lean_ctor_get(v___x_4121_, 0);
lean_inc_n(v_a_4122_, 2);
lean_dec_ref(v___x_4121_);
v_sz_4123_ = lean_array_size(v_fvarIds_4108_);
v___x_4124_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_4108_);
v___x_4125_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4123_, v___x_4124_, v_fvarIds_4108_);
v___x_4126_ = 0;
v___x_4127_ = 1;
v___x_4128_ = 1;
v___x_4129_ = l_Lean_Meta_mkLetFVars(v___x_4125_, v_a_4122_, v___x_4126_, v___x_4127_, v___x_4128_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_);
lean_dec_ref(v___x_4125_);
if (lean_obj_tag(v___x_4129_) == 0)
{
lean_object* v_a_4130_; lean_object* v___x_4131_; lean_object* v___x_4133_; uint8_t v_isShared_4134_; uint8_t v_isSharedCheck_4141_; 
v_a_4130_ = lean_ctor_get(v___x_4129_, 0);
lean_inc(v_a_4130_);
lean_dec_ref(v___x_4129_);
v___x_4131_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4105_, v_a_4130_, v___y_4112_, v___y_4114_);
v_isSharedCheck_4141_ = !lean_is_exclusive(v___x_4131_);
if (v_isSharedCheck_4141_ == 0)
{
lean_object* v_unused_4142_; 
v_unused_4142_ = lean_ctor_get(v___x_4131_, 0);
lean_dec(v_unused_4142_);
v___x_4133_ = v___x_4131_;
v_isShared_4134_ = v_isSharedCheck_4141_;
goto v_resetjp_4132_;
}
else
{
lean_dec(v___x_4131_);
v___x_4133_ = lean_box(0);
v_isShared_4134_ = v_isSharedCheck_4141_;
goto v_resetjp_4132_;
}
v_resetjp_4132_:
{
lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4139_; 
v___x_4135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4135_, 0, v_fvarIds_4108_);
lean_ctor_set(v___x_4135_, 1, v_givenNames_x27_4110_);
v___x_4136_ = l_Lean_Expr_mvarId_x21(v_a_4122_);
lean_dec(v_a_4122_);
v___x_4137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4135_);
lean_ctor_set(v___x_4137_, 1, v___x_4136_);
if (v_isShared_4134_ == 0)
{
lean_ctor_set(v___x_4133_, 0, v___x_4137_);
v___x_4139_ = v___x_4133_;
goto v_reusejp_4138_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v___x_4137_);
v___x_4139_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4138_;
}
v_reusejp_4138_:
{
return v___x_4139_;
}
}
}
else
{
lean_object* v_a_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4150_; 
lean_dec(v_a_4122_);
lean_dec(v_givenNames_x27_4110_);
lean_dec_ref(v_fvarIds_4108_);
lean_dec(v_mvarId_4105_);
v_a_4143_ = lean_ctor_get(v___x_4129_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v___x_4129_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4145_ = v___x_4129_;
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_a_4143_);
lean_dec(v___x_4129_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4148_; 
if (v_isShared_4146_ == 0)
{
v___x_4148_ = v___x_4145_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v_a_4143_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
return v___x_4148_;
}
}
}
}
else
{
lean_object* v_a_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4158_; 
lean_dec(v_givenNames_x27_4110_);
lean_dec_ref(v_fvarIds_4108_);
lean_dec(v_mvarId_4105_);
v_a_4151_ = lean_ctor_get(v___x_4121_, 0);
v_isSharedCheck_4158_ = !lean_is_exclusive(v___x_4121_);
if (v_isSharedCheck_4158_ == 0)
{
v___x_4153_ = v___x_4121_;
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_a_4151_);
lean_dec(v___x_4121_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4158_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___x_4156_; 
if (v_isShared_4154_ == 0)
{
v___x_4156_ = v___x_4153_;
goto v_reusejp_4155_;
}
else
{
lean_object* v_reuseFailAlloc_4157_; 
v_reuseFailAlloc_4157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4157_, 0, v_a_4151_);
v___x_4156_ = v_reuseFailAlloc_4157_;
goto v_reusejp_4155_;
}
v_reusejp_4155_:
{
return v___x_4156_;
}
}
}
}
else
{
lean_object* v_a_4159_; lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4166_; 
lean_dec(v_givenNames_x27_4110_);
lean_dec_ref(v_fvarIds_4108_);
lean_dec(v_mvarId_4105_);
v_a_4159_ = lean_ctor_get(v___x_4119_, 0);
v_isSharedCheck_4166_ = !lean_is_exclusive(v___x_4119_);
if (v_isSharedCheck_4166_ == 0)
{
v___x_4161_ = v___x_4119_;
v_isShared_4162_ = v_isSharedCheck_4166_;
goto v_resetjp_4160_;
}
else
{
lean_inc(v_a_4159_);
lean_dec(v___x_4119_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4166_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
lean_object* v___x_4164_; 
if (v_isShared_4162_ == 0)
{
v___x_4164_ = v___x_4161_;
goto v_reusejp_4163_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v_a_4159_);
v___x_4164_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4163_;
}
v_reusejp_4163_:
{
return v___x_4164_;
}
}
}
}
v___jp_4167_:
{
if (v___y_4168_ == 0)
{
lean_dec(v___x_4106_);
goto v___jp_4118_;
}
else
{
lean_object* v___x_4169_; 
lean_inc(v_mvarId_4105_);
v___x_4169_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4106_, v_mvarId_4105_, v___y_4111_, v___y_4112_, v___y_4113_, v___y_4114_);
if (lean_obj_tag(v___x_4169_) == 0)
{
lean_dec_ref(v___x_4169_);
goto v___jp_4118_;
}
else
{
lean_object* v_a_4170_; lean_object* v___x_4172_; uint8_t v_isShared_4173_; uint8_t v_isSharedCheck_4177_; 
lean_dec(v_givenNames_x27_4110_);
lean_dec_ref(v_fvarIds_4108_);
lean_dec(v_mvarId_4105_);
v_a_4170_ = lean_ctor_get(v___x_4169_, 0);
v_isSharedCheck_4177_ = !lean_is_exclusive(v___x_4169_);
if (v_isSharedCheck_4177_ == 0)
{
v___x_4172_ = v___x_4169_;
v_isShared_4173_ = v_isSharedCheck_4177_;
goto v_resetjp_4171_;
}
else
{
lean_inc(v_a_4170_);
lean_dec(v___x_4169_);
v___x_4172_ = lean_box(0);
v_isShared_4173_ = v_isSharedCheck_4177_;
goto v_resetjp_4171_;
}
v_resetjp_4171_:
{
lean_object* v___x_4175_; 
if (v_isShared_4173_ == 0)
{
v___x_4175_ = v___x_4172_;
goto v_reusejp_4174_;
}
else
{
lean_object* v_reuseFailAlloc_4176_; 
v_reuseFailAlloc_4176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4176_, 0, v_a_4170_);
v___x_4175_ = v_reuseFailAlloc_4176_;
goto v_reusejp_4174_;
}
v_reusejp_4174_:
{
return v___x_4175_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__0___boxed(lean_object* v___x_4181_, lean_object* v_mvarId_4182_, lean_object* v___x_4183_, lean_object* v_a_4184_, lean_object* v_fvarIds_4185_, lean_object* v_es_4186_, lean_object* v_givenNames_x27_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_){
_start:
{
lean_object* v_res_4193_; 
v_res_4193_ = l_Lean_MVarId_extractLets___lam__0(v___x_4181_, v_mvarId_4182_, v___x_4183_, v_a_4184_, v_fvarIds_4185_, v_es_4186_, v_givenNames_x27_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_);
lean_dec(v___y_4191_);
lean_dec_ref(v___y_4190_);
lean_dec(v___y_4189_);
lean_dec_ref(v___y_4188_);
lean_dec_ref(v_es_4186_);
lean_dec_ref(v_a_4184_);
lean_dec_ref(v___x_4181_);
return v_res_4193_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1(lean_object* v_mvarId_4194_, lean_object* v___x_4195_, lean_object* v___x_4196_, lean_object* v_givenNames_4197_, lean_object* v_config_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_){
_start:
{
lean_object* v___x_4204_; 
lean_inc(v___x_4195_);
lean_inc(v_mvarId_4194_);
v___x_4204_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4194_, v___x_4195_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_);
if (lean_obj_tag(v___x_4204_) == 0)
{
lean_object* v___x_4205_; 
lean_dec_ref(v___x_4204_);
lean_inc(v_mvarId_4194_);
v___x_4205_ = l_Lean_MVarId_getType(v_mvarId_4194_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_);
if (lean_obj_tag(v___x_4205_) == 0)
{
lean_object* v_a_4206_; lean_object* v___f_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; 
v_a_4206_ = lean_ctor_get(v___x_4205_, 0);
lean_inc_n(v_a_4206_, 2);
lean_dec_ref(v___x_4205_);
v___f_4207_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__0___boxed), 12, 4);
lean_closure_set(v___f_4207_, 0, v___x_4196_);
lean_closure_set(v___f_4207_, 1, v_mvarId_4194_);
lean_closure_set(v___f_4207_, 2, v___x_4195_);
lean_closure_set(v___f_4207_, 3, v_a_4206_);
v___x_4208_ = lean_unsigned_to_nat(1u);
v___x_4209_ = lean_mk_empty_array_with_capacity(v___x_4208_);
v___x_4210_ = lean_array_push(v___x_4209_, v_a_4206_);
v___x_4211_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4210_, v_givenNames_4197_, v___f_4207_, v_config_4198_, v___y_4199_, v___y_4200_, v___y_4201_, v___y_4202_);
return v___x_4211_;
}
else
{
lean_object* v_a_4212_; lean_object* v___x_4214_; uint8_t v_isShared_4215_; uint8_t v_isSharedCheck_4219_; 
lean_dec(v_givenNames_4197_);
lean_dec_ref(v___x_4196_);
lean_dec(v___x_4195_);
lean_dec(v_mvarId_4194_);
v_a_4212_ = lean_ctor_get(v___x_4205_, 0);
v_isSharedCheck_4219_ = !lean_is_exclusive(v___x_4205_);
if (v_isSharedCheck_4219_ == 0)
{
v___x_4214_ = v___x_4205_;
v_isShared_4215_ = v_isSharedCheck_4219_;
goto v_resetjp_4213_;
}
else
{
lean_inc(v_a_4212_);
lean_dec(v___x_4205_);
v___x_4214_ = lean_box(0);
v_isShared_4215_ = v_isSharedCheck_4219_;
goto v_resetjp_4213_;
}
v_resetjp_4213_:
{
lean_object* v___x_4217_; 
if (v_isShared_4215_ == 0)
{
v___x_4217_ = v___x_4214_;
goto v_reusejp_4216_;
}
else
{
lean_object* v_reuseFailAlloc_4218_; 
v_reuseFailAlloc_4218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4218_, 0, v_a_4212_);
v___x_4217_ = v_reuseFailAlloc_4218_;
goto v_reusejp_4216_;
}
v_reusejp_4216_:
{
return v___x_4217_;
}
}
}
}
else
{
lean_object* v_a_4220_; lean_object* v___x_4222_; uint8_t v_isShared_4223_; uint8_t v_isSharedCheck_4227_; 
lean_dec(v_givenNames_4197_);
lean_dec_ref(v___x_4196_);
lean_dec(v___x_4195_);
lean_dec(v_mvarId_4194_);
v_a_4220_ = lean_ctor_get(v___x_4204_, 0);
v_isSharedCheck_4227_ = !lean_is_exclusive(v___x_4204_);
if (v_isSharedCheck_4227_ == 0)
{
v___x_4222_ = v___x_4204_;
v_isShared_4223_ = v_isSharedCheck_4227_;
goto v_resetjp_4221_;
}
else
{
lean_inc(v_a_4220_);
lean_dec(v___x_4204_);
v___x_4222_ = lean_box(0);
v_isShared_4223_ = v_isSharedCheck_4227_;
goto v_resetjp_4221_;
}
v_resetjp_4221_:
{
lean_object* v___x_4225_; 
if (v_isShared_4223_ == 0)
{
v___x_4225_ = v___x_4222_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4226_; 
v_reuseFailAlloc_4226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4226_, 0, v_a_4220_);
v___x_4225_ = v_reuseFailAlloc_4226_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
return v___x_4225_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___lam__1___boxed(lean_object* v_mvarId_4228_, lean_object* v___x_4229_, lean_object* v___x_4230_, lean_object* v_givenNames_4231_, lean_object* v_config_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_){
_start:
{
lean_object* v_res_4238_; 
v_res_4238_ = l_Lean_MVarId_extractLets___lam__1(v_mvarId_4228_, v___x_4229_, v___x_4230_, v_givenNames_4231_, v_config_4232_, v___y_4233_, v___y_4234_, v___y_4235_, v___y_4236_);
lean_dec(v___y_4236_);
lean_dec_ref(v___y_4235_);
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4233_);
lean_dec_ref(v_config_4232_);
return v_res_4238_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLets___closed__0(void){
_start:
{
lean_object* v___x_4239_; 
v___x_4239_ = lean_mk_string_unchecked("extract_lets", 12, 12);
return v___x_4239_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLets___closed__1(void){
_start:
{
lean_object* v___x_4240_; lean_object* v___x_4241_; 
v___x_4240_ = lean_obj_once(&l_Lean_MVarId_extractLets___closed__0, &l_Lean_MVarId_extractLets___closed__0_once, _init_l_Lean_MVarId_extractLets___closed__0);
v___x_4241_ = l_Lean_Name_mkStr1(v___x_4240_);
return v___x_4241_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets(lean_object* v_mvarId_4242_, lean_object* v_givenNames_4243_, lean_object* v_config_4244_, lean_object* v_a_4245_, lean_object* v_a_4246_, lean_object* v_a_4247_, lean_object* v_a_4248_){
_start:
{
lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___f_4252_; lean_object* v___x_4253_; 
v___x_4250_ = l_Lean_instInhabitedExpr;
v___x_4251_ = lean_obj_once(&l_Lean_MVarId_extractLets___closed__1, &l_Lean_MVarId_extractLets___closed__1_once, _init_l_Lean_MVarId_extractLets___closed__1);
lean_inc(v_mvarId_4242_);
v___f_4252_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLets___lam__1___boxed), 10, 5);
lean_closure_set(v___f_4252_, 0, v_mvarId_4242_);
lean_closure_set(v___f_4252_, 1, v___x_4251_);
lean_closure_set(v___f_4252_, 2, v___x_4250_);
lean_closure_set(v___f_4252_, 3, v_givenNames_4243_);
lean_closure_set(v___f_4252_, 4, v_config_4244_);
v___x_4253_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4242_, v___f_4252_, v_a_4245_, v_a_4246_, v_a_4247_, v_a_4248_);
return v___x_4253_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLets___boxed(lean_object* v_mvarId_4254_, lean_object* v_givenNames_4255_, lean_object* v_config_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_, lean_object* v_a_4259_, lean_object* v_a_4260_, lean_object* v_a_4261_){
_start:
{
lean_object* v_res_4262_; 
v_res_4262_ = l_Lean_MVarId_extractLets(v_mvarId_4254_, v_givenNames_4255_, v_config_4256_, v_a_4257_, v_a_4258_, v_a_4259_, v_a_4260_);
lean_dec(v_a_4260_);
lean_dec_ref(v_a_4259_);
lean_dec(v_a_4258_);
lean_dec_ref(v_a_4257_);
return v_res_4262_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(lean_object* v_mvarId_4263_, lean_object* v_val_4264_, lean_object* v___y_4265_, lean_object* v___y_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_){
_start:
{
lean_object* v___x_4270_; 
v___x_4270_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4263_, v_val_4264_, v___y_4266_, v___y_4268_);
return v___x_4270_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___boxed(lean_object* v_mvarId_4271_, lean_object* v_val_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_){
_start:
{
lean_object* v_res_4278_; 
v_res_4278_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1(v_mvarId_4271_, v_val_4272_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_);
lean_dec(v___y_4276_);
lean_dec_ref(v___y_4275_);
lean_dec(v___y_4274_);
lean_dec_ref(v___y_4273_);
return v_res_4278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1(lean_object* v_00_u03b2_4279_, lean_object* v_x_4280_, lean_object* v_x_4281_, lean_object* v_x_4282_){
_start:
{
lean_object* v___x_4283_; 
v___x_4283_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1___redArg(v_x_4280_, v_x_4281_, v_x_4282_);
return v___x_4283_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(lean_object* v_00_u03b2_4284_, lean_object* v_x_4285_, size_t v_x_4286_, size_t v_x_4287_, lean_object* v_x_4288_, lean_object* v_x_4289_){
_start:
{
lean_object* v___x_4290_; 
v___x_4290_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___redArg(v_x_4285_, v_x_4286_, v_x_4287_, v_x_4288_, v_x_4289_);
return v___x_4290_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4___boxed(lean_object* v_00_u03b2_4291_, lean_object* v_x_4292_, lean_object* v_x_4293_, lean_object* v_x_4294_, lean_object* v_x_4295_, lean_object* v_x_4296_){
_start:
{
size_t v_x_2845__boxed_4297_; size_t v_x_2846__boxed_4298_; lean_object* v_res_4299_; 
v_x_2845__boxed_4297_ = lean_unbox_usize(v_x_4293_);
lean_dec(v_x_4293_);
v_x_2846__boxed_4298_ = lean_unbox_usize(v_x_4294_);
lean_dec(v_x_4294_);
v_res_4299_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4(v_00_u03b2_4291_, v_x_4292_, v_x_2845__boxed_4297_, v_x_2846__boxed_4298_, v_x_4295_, v_x_4296_);
return v_res_4299_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_4300_, lean_object* v_n_4301_, lean_object* v_k_4302_, lean_object* v_v_4303_){
_start:
{
lean_object* v___x_4304_; 
v___x_4304_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5___redArg(v_n_4301_, v_k_4302_, v_v_4303_);
return v___x_4304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(lean_object* v_00_u03b2_4305_, size_t v_depth_4306_, lean_object* v_keys_4307_, lean_object* v_vals_4308_, lean_object* v_heq_4309_, lean_object* v_i_4310_, lean_object* v_entries_4311_){
_start:
{
lean_object* v___x_4312_; 
v___x_4312_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___redArg(v_depth_4306_, v_keys_4307_, v_vals_4308_, v_i_4310_, v_entries_4311_);
return v___x_4312_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6___boxed(lean_object* v_00_u03b2_4313_, lean_object* v_depth_4314_, lean_object* v_keys_4315_, lean_object* v_vals_4316_, lean_object* v_heq_4317_, lean_object* v_i_4318_, lean_object* v_entries_4319_){
_start:
{
size_t v_depth_boxed_4320_; lean_object* v_res_4321_; 
v_depth_boxed_4320_ = lean_unbox_usize(v_depth_4314_);
lean_dec(v_depth_4314_);
v_res_4321_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__6(v_00_u03b2_4313_, v_depth_boxed_4320_, v_keys_4315_, v_vals_4316_, v_heq_4317_, v_i_4318_, v_entries_4319_);
lean_dec_ref(v_vals_4316_);
lean_dec_ref(v_keys_4315_);
return v_res_4321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_4322_, lean_object* v_x_4323_, lean_object* v_x_4324_, lean_object* v_x_4325_, lean_object* v_x_4326_){
_start:
{
lean_object* v___x_4327_; 
v___x_4327_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1_spec__1_spec__4_spec__5_spec__6___redArg(v_x_4323_, v_x_4324_, v_x_4325_, v_x_4326_);
return v___x_4327_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(size_t v_sz_4328_, size_t v_i_4329_, lean_object* v_bs_4330_){
_start:
{
uint8_t v___x_4331_; 
v___x_4331_ = lean_usize_dec_lt(v_i_4329_, v_sz_4328_);
if (v___x_4331_ == 0)
{
return v_bs_4330_;
}
else
{
lean_object* v_v_4332_; lean_object* v___x_4333_; lean_object* v_bs_x27_4334_; lean_object* v___x_4335_; size_t v___x_4336_; size_t v___x_4337_; lean_object* v___x_4338_; 
v_v_4332_ = lean_array_uget(v_bs_4330_, v_i_4329_);
v___x_4333_ = lean_unsigned_to_nat(0u);
v_bs_x27_4334_ = lean_array_uset(v_bs_4330_, v_i_4329_, v___x_4333_);
v___x_4335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4335_, 0, v_v_4332_);
v___x_4336_ = ((size_t)1ULL);
v___x_4337_ = lean_usize_add(v_i_4329_, v___x_4336_);
v___x_4338_ = lean_array_uset(v_bs_x27_4334_, v_i_4329_, v___x_4335_);
v_i_4329_ = v___x_4337_;
v_bs_4330_ = v___x_4338_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0___boxed(lean_object* v_sz_4340_, lean_object* v_i_4341_, lean_object* v_bs_4342_){
_start:
{
size_t v_sz_boxed_4343_; size_t v_i_boxed_4344_; lean_object* v_res_4345_; 
v_sz_boxed_4343_ = lean_unbox_usize(v_sz_4340_);
lean_dec(v_sz_4340_);
v_i_boxed_4344_ = lean_unbox_usize(v_i_4341_);
lean_dec(v_i_4341_);
v_res_4345_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_boxed_4343_, v_i_boxed_4344_, v_bs_4342_);
return v_res_4345_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0(lean_object* v_mvarId_4346_, lean_object* v_fvars_4347_, lean_object* v_fvarIds_4348_, lean_object* v_givenNames_x27_4349_, lean_object* v_targetNew_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_){
_start:
{
lean_object* v___x_4356_; 
lean_inc(v_mvarId_4346_);
v___x_4356_ = l_Lean_MVarId_getTag(v_mvarId_4346_, v___y_4351_, v___y_4352_, v___y_4353_, v___y_4354_);
if (lean_obj_tag(v___x_4356_) == 0)
{
lean_object* v_a_4357_; lean_object* v___x_4358_; 
v_a_4357_ = lean_ctor_get(v___x_4356_, 0);
lean_inc(v_a_4357_);
lean_dec_ref(v___x_4356_);
v___x_4358_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_targetNew_4350_, v_a_4357_, v___y_4351_, v___y_4352_, v___y_4353_, v___y_4354_);
if (lean_obj_tag(v___x_4358_) == 0)
{
lean_object* v_a_4359_; size_t v_sz_4360_; size_t v___x_4361_; lean_object* v___x_4362_; uint8_t v___x_4363_; uint8_t v___x_4364_; uint8_t v___x_4365_; lean_object* v___x_4366_; 
v_a_4359_ = lean_ctor_get(v___x_4358_, 0);
lean_inc_n(v_a_4359_, 2);
lean_dec_ref(v___x_4358_);
v_sz_4360_ = lean_array_size(v_fvarIds_4348_);
v___x_4361_ = ((size_t)0ULL);
lean_inc_ref(v_fvarIds_4348_);
v___x_4362_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLets_spec__0(v_sz_4360_, v___x_4361_, v_fvarIds_4348_);
v___x_4363_ = 0;
v___x_4364_ = 1;
v___x_4365_ = 1;
v___x_4366_ = l_Lean_Meta_mkLetFVars(v___x_4362_, v_a_4359_, v___x_4363_, v___x_4364_, v___x_4365_, v___y_4351_, v___y_4352_, v___y_4353_, v___y_4354_);
lean_dec_ref(v___x_4362_);
if (lean_obj_tag(v___x_4366_) == 0)
{
lean_object* v_a_4367_; lean_object* v___x_4368_; lean_object* v___x_4370_; uint8_t v_isShared_4371_; uint8_t v_isSharedCheck_4381_; 
v_a_4367_ = lean_ctor_get(v___x_4366_, 0);
lean_inc(v_a_4367_);
lean_dec_ref(v___x_4366_);
v___x_4368_ = l_Lean_MVarId_assign___at___00Lean_MVarId_extractLets_spec__1___redArg(v_mvarId_4346_, v_a_4367_, v___y_4352_, v___y_4354_);
v_isSharedCheck_4381_ = !lean_is_exclusive(v___x_4368_);
if (v_isSharedCheck_4381_ == 0)
{
lean_object* v_unused_4382_; 
v_unused_4382_ = lean_ctor_get(v___x_4368_, 0);
lean_dec(v_unused_4382_);
v___x_4370_ = v___x_4368_;
v_isShared_4371_ = v_isSharedCheck_4381_;
goto v_resetjp_4369_;
}
else
{
lean_dec(v___x_4368_);
v___x_4370_ = lean_box(0);
v_isShared_4371_ = v_isSharedCheck_4381_;
goto v_resetjp_4369_;
}
v_resetjp_4369_:
{
lean_object* v___x_4372_; size_t v_sz_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v___x_4377_; lean_object* v___x_4379_; 
v___x_4372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4372_, 0, v_fvarIds_4348_);
lean_ctor_set(v___x_4372_, 1, v_givenNames_x27_4349_);
v_sz_4373_ = lean_array_size(v_fvars_4347_);
v___x_4374_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4373_, v___x_4361_, v_fvars_4347_);
v___x_4375_ = l_Lean_Expr_mvarId_x21(v_a_4359_);
lean_dec(v_a_4359_);
v___x_4376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4376_, 0, v___x_4374_);
lean_ctor_set(v___x_4376_, 1, v___x_4375_);
v___x_4377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4377_, 0, v___x_4372_);
lean_ctor_set(v___x_4377_, 1, v___x_4376_);
if (v_isShared_4371_ == 0)
{
lean_ctor_set(v___x_4370_, 0, v___x_4377_);
v___x_4379_ = v___x_4370_;
goto v_reusejp_4378_;
}
else
{
lean_object* v_reuseFailAlloc_4380_; 
v_reuseFailAlloc_4380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4380_, 0, v___x_4377_);
v___x_4379_ = v_reuseFailAlloc_4380_;
goto v_reusejp_4378_;
}
v_reusejp_4378_:
{
return v___x_4379_;
}
}
}
else
{
lean_object* v_a_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4390_; 
lean_dec(v_a_4359_);
lean_dec(v_givenNames_x27_4349_);
lean_dec_ref(v_fvarIds_4348_);
lean_dec_ref(v_fvars_4347_);
lean_dec(v_mvarId_4346_);
v_a_4383_ = lean_ctor_get(v___x_4366_, 0);
v_isSharedCheck_4390_ = !lean_is_exclusive(v___x_4366_);
if (v_isSharedCheck_4390_ == 0)
{
v___x_4385_ = v___x_4366_;
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_a_4383_);
lean_dec(v___x_4366_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4388_; 
if (v_isShared_4386_ == 0)
{
v___x_4388_ = v___x_4385_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4389_; 
v_reuseFailAlloc_4389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4389_, 0, v_a_4383_);
v___x_4388_ = v_reuseFailAlloc_4389_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
return v___x_4388_;
}
}
}
}
else
{
lean_object* v_a_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4398_; 
lean_dec(v_givenNames_x27_4349_);
lean_dec_ref(v_fvarIds_4348_);
lean_dec_ref(v_fvars_4347_);
lean_dec(v_mvarId_4346_);
v_a_4391_ = lean_ctor_get(v___x_4358_, 0);
v_isSharedCheck_4398_ = !lean_is_exclusive(v___x_4358_);
if (v_isSharedCheck_4398_ == 0)
{
v___x_4393_ = v___x_4358_;
v_isShared_4394_ = v_isSharedCheck_4398_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_a_4391_);
lean_dec(v___x_4358_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4398_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4396_; 
if (v_isShared_4394_ == 0)
{
v___x_4396_ = v___x_4393_;
goto v_reusejp_4395_;
}
else
{
lean_object* v_reuseFailAlloc_4397_; 
v_reuseFailAlloc_4397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4397_, 0, v_a_4391_);
v___x_4396_ = v_reuseFailAlloc_4397_;
goto v_reusejp_4395_;
}
v_reusejp_4395_:
{
return v___x_4396_;
}
}
}
}
else
{
lean_object* v_a_4399_; lean_object* v___x_4401_; uint8_t v_isShared_4402_; uint8_t v_isSharedCheck_4406_; 
lean_dec_ref(v_targetNew_4350_);
lean_dec(v_givenNames_x27_4349_);
lean_dec_ref(v_fvarIds_4348_);
lean_dec_ref(v_fvars_4347_);
lean_dec(v_mvarId_4346_);
v_a_4399_ = lean_ctor_get(v___x_4356_, 0);
v_isSharedCheck_4406_ = !lean_is_exclusive(v___x_4356_);
if (v_isSharedCheck_4406_ == 0)
{
v___x_4401_ = v___x_4356_;
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
else
{
lean_inc(v_a_4399_);
lean_dec(v___x_4356_);
v___x_4401_ = lean_box(0);
v_isShared_4402_ = v_isSharedCheck_4406_;
goto v_resetjp_4400_;
}
v_resetjp_4400_:
{
lean_object* v___x_4404_; 
if (v_isShared_4402_ == 0)
{
v___x_4404_ = v___x_4401_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4405_; 
v_reuseFailAlloc_4405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4405_, 0, v_a_4399_);
v___x_4404_ = v_reuseFailAlloc_4405_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
return v___x_4404_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4407_, lean_object* v_fvars_4408_, lean_object* v_fvarIds_4409_, lean_object* v_givenNames_x27_4410_, lean_object* v_targetNew_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_){
_start:
{
lean_object* v_res_4417_; 
v_res_4417_ = l_Lean_MVarId_extractLetsLocalDecl___lam__0(v_mvarId_4407_, v_fvars_4408_, v_fvarIds_4409_, v_givenNames_x27_4410_, v_targetNew_4411_, v___y_4412_, v___y_4413_, v___y_4414_, v___y_4415_);
lean_dec(v___y_4415_);
lean_dec_ref(v___y_4414_);
lean_dec(v___y_4413_);
lean_dec_ref(v___y_4412_);
return v_res_4417_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1(lean_object* v___x_4418_, lean_object* v_binderName_4419_, lean_object* v_body_4420_, uint8_t v_binderInfo_4421_, lean_object* v___f_4422_, lean_object* v___x_4423_, lean_object* v_mvarId_4424_, lean_object* v_binderType_4425_, lean_object* v_fvarIds_4426_, lean_object* v_es_4427_, lean_object* v_givenNames_x27_4428_, lean_object* v___y_4429_, lean_object* v___y_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_){
_start:
{
lean_object* v___x_4434_; lean_object* v___x_4435_; uint8_t v___y_4440_; lean_object* v___x_4450_; uint8_t v___x_4451_; 
v___x_4434_ = lean_unsigned_to_nat(0u);
v___x_4435_ = lean_array_get_borrowed(v___x_4418_, v_es_4427_, v___x_4434_);
v___x_4450_ = lean_array_get_size(v_fvarIds_4426_);
v___x_4451_ = lean_nat_dec_eq(v___x_4450_, v___x_4434_);
if (v___x_4451_ == 0)
{
v___y_4440_ = v___x_4451_;
goto v___jp_4439_;
}
else
{
uint8_t v___x_4452_; 
v___x_4452_ = lean_expr_eqv(v_binderType_4425_, v___x_4435_);
v___y_4440_ = v___x_4452_;
goto v___jp_4439_;
}
v___jp_4436_:
{
lean_object* v___x_4437_; lean_object* v___x_4438_; 
lean_inc(v___x_4435_);
v___x_4437_ = l_Lean_Expr_forallE___override(v_binderName_4419_, v___x_4435_, v_body_4420_, v_binderInfo_4421_);
lean_inc(v___y_4432_);
lean_inc_ref(v___y_4431_);
lean_inc(v___y_4430_);
lean_inc_ref(v___y_4429_);
v___x_4438_ = lean_apply_8(v___f_4422_, v_fvarIds_4426_, v_givenNames_x27_4428_, v___x_4437_, v___y_4429_, v___y_4430_, v___y_4431_, v___y_4432_, lean_box(0));
return v___x_4438_;
}
v___jp_4439_:
{
if (v___y_4440_ == 0)
{
lean_dec(v_mvarId_4424_);
lean_dec(v___x_4423_);
goto v___jp_4436_;
}
else
{
lean_object* v___x_4441_; 
v___x_4441_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4423_, v_mvarId_4424_, v___y_4429_, v___y_4430_, v___y_4431_, v___y_4432_);
if (lean_obj_tag(v___x_4441_) == 0)
{
lean_dec_ref(v___x_4441_);
goto v___jp_4436_;
}
else
{
lean_object* v_a_4442_; lean_object* v___x_4444_; uint8_t v_isShared_4445_; uint8_t v_isSharedCheck_4449_; 
lean_dec(v_givenNames_x27_4428_);
lean_dec_ref(v_fvarIds_4426_);
lean_dec_ref(v___f_4422_);
lean_dec_ref(v_body_4420_);
lean_dec(v_binderName_4419_);
v_a_4442_ = lean_ctor_get(v___x_4441_, 0);
v_isSharedCheck_4449_ = !lean_is_exclusive(v___x_4441_);
if (v_isSharedCheck_4449_ == 0)
{
v___x_4444_ = v___x_4441_;
v_isShared_4445_ = v_isSharedCheck_4449_;
goto v_resetjp_4443_;
}
else
{
lean_inc(v_a_4442_);
lean_dec(v___x_4441_);
v___x_4444_ = lean_box(0);
v_isShared_4445_ = v_isSharedCheck_4449_;
goto v_resetjp_4443_;
}
v_resetjp_4443_:
{
lean_object* v___x_4447_; 
if (v_isShared_4445_ == 0)
{
v___x_4447_ = v___x_4444_;
goto v_reusejp_4446_;
}
else
{
lean_object* v_reuseFailAlloc_4448_; 
v_reuseFailAlloc_4448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4448_, 0, v_a_4442_);
v___x_4447_ = v_reuseFailAlloc_4448_;
goto v_reusejp_4446_;
}
v_reusejp_4446_:
{
return v___x_4447_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed(lean_object* v___x_4453_, lean_object* v_binderName_4454_, lean_object* v_body_4455_, lean_object* v_binderInfo_4456_, lean_object* v___f_4457_, lean_object* v___x_4458_, lean_object* v_mvarId_4459_, lean_object* v_binderType_4460_, lean_object* v_fvarIds_4461_, lean_object* v_es_4462_, lean_object* v_givenNames_x27_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_){
_start:
{
uint8_t v_binderInfo_1854__boxed_4469_; lean_object* v_res_4470_; 
v_binderInfo_1854__boxed_4469_ = lean_unbox(v_binderInfo_4456_);
v_res_4470_ = l_Lean_MVarId_extractLetsLocalDecl___lam__1(v___x_4453_, v_binderName_4454_, v_body_4455_, v_binderInfo_1854__boxed_4469_, v___f_4457_, v___x_4458_, v_mvarId_4459_, v_binderType_4460_, v_fvarIds_4461_, v_es_4462_, v_givenNames_x27_4463_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_);
lean_dec(v___y_4467_);
lean_dec_ref(v___y_4466_);
lean_dec(v___y_4465_);
lean_dec_ref(v___y_4464_);
lean_dec_ref(v_es_4462_);
lean_dec_ref(v_binderType_4460_);
lean_dec_ref(v___x_4453_);
return v_res_4470_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2(lean_object* v___x_4471_, lean_object* v_declName_4472_, lean_object* v_body_4473_, uint8_t v_nondep_4474_, lean_object* v___f_4475_, lean_object* v_value_4476_, lean_object* v___x_4477_, lean_object* v_mvarId_4478_, lean_object* v_type_4479_, lean_object* v_fvarIds_4480_, lean_object* v_es_4481_, lean_object* v_givenNames_x27_4482_, lean_object* v___y_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_){
_start:
{
lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; uint8_t v___y_4496_; lean_object* v___x_4507_; uint8_t v___x_4508_; 
v___x_4488_ = lean_unsigned_to_nat(0u);
v___x_4489_ = lean_array_get_borrowed(v___x_4471_, v_es_4481_, v___x_4488_);
v___x_4490_ = lean_unsigned_to_nat(1u);
v___x_4491_ = lean_array_get_borrowed(v___x_4471_, v_es_4481_, v___x_4490_);
v___x_4507_ = lean_array_get_size(v_fvarIds_4480_);
v___x_4508_ = lean_nat_dec_eq(v___x_4507_, v___x_4488_);
if (v___x_4508_ == 0)
{
v___y_4496_ = v___x_4508_;
goto v___jp_4495_;
}
else
{
uint8_t v___x_4509_; 
v___x_4509_ = lean_expr_eqv(v_type_4479_, v___x_4489_);
v___y_4496_ = v___x_4509_;
goto v___jp_4495_;
}
v___jp_4492_:
{
lean_object* v___x_4493_; lean_object* v___x_4494_; 
lean_inc(v___x_4491_);
lean_inc(v___x_4489_);
v___x_4493_ = l_Lean_Expr_letE___override(v_declName_4472_, v___x_4489_, v___x_4491_, v_body_4473_, v_nondep_4474_);
lean_inc(v___y_4486_);
lean_inc_ref(v___y_4485_);
lean_inc(v___y_4484_);
lean_inc_ref(v___y_4483_);
v___x_4494_ = lean_apply_8(v___f_4475_, v_fvarIds_4480_, v_givenNames_x27_4482_, v___x_4493_, v___y_4483_, v___y_4484_, v___y_4485_, v___y_4486_, lean_box(0));
return v___x_4494_;
}
v___jp_4495_:
{
if (v___y_4496_ == 0)
{
lean_dec(v_mvarId_4478_);
lean_dec(v___x_4477_);
goto v___jp_4492_;
}
else
{
uint8_t v___x_4497_; 
v___x_4497_ = lean_expr_eqv(v_value_4476_, v___x_4491_);
if (v___x_4497_ == 0)
{
lean_dec(v_mvarId_4478_);
lean_dec(v___x_4477_);
goto v___jp_4492_;
}
else
{
lean_object* v___x_4498_; 
v___x_4498_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4477_, v_mvarId_4478_, v___y_4483_, v___y_4484_, v___y_4485_, v___y_4486_);
if (lean_obj_tag(v___x_4498_) == 0)
{
lean_dec_ref(v___x_4498_);
goto v___jp_4492_;
}
else
{
lean_object* v_a_4499_; lean_object* v___x_4501_; uint8_t v_isShared_4502_; uint8_t v_isSharedCheck_4506_; 
lean_dec(v_givenNames_x27_4482_);
lean_dec_ref(v_fvarIds_4480_);
lean_dec_ref(v___f_4475_);
lean_dec_ref(v_body_4473_);
lean_dec(v_declName_4472_);
v_a_4499_ = lean_ctor_get(v___x_4498_, 0);
v_isSharedCheck_4506_ = !lean_is_exclusive(v___x_4498_);
if (v_isSharedCheck_4506_ == 0)
{
v___x_4501_ = v___x_4498_;
v_isShared_4502_ = v_isSharedCheck_4506_;
goto v_resetjp_4500_;
}
else
{
lean_inc(v_a_4499_);
lean_dec(v___x_4498_);
v___x_4501_ = lean_box(0);
v_isShared_4502_ = v_isSharedCheck_4506_;
goto v_resetjp_4500_;
}
v_resetjp_4500_:
{
lean_object* v___x_4504_; 
if (v_isShared_4502_ == 0)
{
v___x_4504_ = v___x_4501_;
goto v_reusejp_4503_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v_a_4499_);
v___x_4504_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4503_;
}
v_reusejp_4503_:
{
return v___x_4504_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed(lean_object** _args){
lean_object* v___x_4510_ = _args[0];
lean_object* v_declName_4511_ = _args[1];
lean_object* v_body_4512_ = _args[2];
lean_object* v_nondep_4513_ = _args[3];
lean_object* v___f_4514_ = _args[4];
lean_object* v_value_4515_ = _args[5];
lean_object* v___x_4516_ = _args[6];
lean_object* v_mvarId_4517_ = _args[7];
lean_object* v_type_4518_ = _args[8];
lean_object* v_fvarIds_4519_ = _args[9];
lean_object* v_es_4520_ = _args[10];
lean_object* v_givenNames_x27_4521_ = _args[11];
lean_object* v___y_4522_ = _args[12];
lean_object* v___y_4523_ = _args[13];
lean_object* v___y_4524_ = _args[14];
lean_object* v___y_4525_ = _args[15];
lean_object* v___y_4526_ = _args[16];
_start:
{
uint8_t v_nondep_1929__boxed_4527_; lean_object* v_res_4528_; 
v_nondep_1929__boxed_4527_ = lean_unbox(v_nondep_4513_);
v_res_4528_ = l_Lean_MVarId_extractLetsLocalDecl___lam__2(v___x_4510_, v_declName_4511_, v_body_4512_, v_nondep_1929__boxed_4527_, v___f_4514_, v_value_4515_, v___x_4516_, v_mvarId_4517_, v_type_4518_, v_fvarIds_4519_, v_es_4520_, v_givenNames_x27_4521_, v___y_4522_, v___y_4523_, v___y_4524_, v___y_4525_);
lean_dec(v___y_4525_);
lean_dec_ref(v___y_4524_);
lean_dec(v___y_4523_);
lean_dec_ref(v___y_4522_);
lean_dec_ref(v_es_4520_);
lean_dec_ref(v_type_4518_);
lean_dec_ref(v_value_4515_);
lean_dec_ref(v___x_4510_);
return v_res_4528_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0(void){
_start:
{
lean_object* v___x_4529_; 
v___x_4529_ = lean_mk_string_unchecked("unexpected auxiliary target", 27, 27);
return v___x_4529_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1(void){
_start:
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4530_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__0);
v___x_4531_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4531_, 0, v___x_4530_);
return v___x_4531_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2(void){
_start:
{
lean_object* v___x_4532_; lean_object* v___x_4533_; 
v___x_4532_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__1);
v___x_4533_ = l_Lean_MessageData_ofFormat(v___x_4532_);
return v___x_4533_;
}
}
static lean_object* _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3(void){
_start:
{
lean_object* v___x_4534_; lean_object* v___x_4535_; 
v___x_4534_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__2);
v___x_4535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4535_, 0, v___x_4534_);
return v___x_4535_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3(lean_object* v_mvarId_4536_, lean_object* v___x_4537_, lean_object* v___f_4538_, lean_object* v___x_4539_, lean_object* v_givenNames_4540_, lean_object* v_config_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_){
_start:
{
lean_object* v___x_4547_; 
lean_inc(v_mvarId_4536_);
v___x_4547_ = l_Lean_MVarId_getType(v_mvarId_4536_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_);
if (lean_obj_tag(v___x_4547_) == 0)
{
lean_object* v_a_4548_; 
v_a_4548_ = lean_ctor_get(v___x_4547_, 0);
lean_inc(v_a_4548_);
lean_dec_ref(v___x_4547_);
switch(lean_obj_tag(v_a_4548_))
{
case 7:
{
lean_object* v_binderName_4549_; lean_object* v_binderType_4550_; lean_object* v_body_4551_; uint8_t v_binderInfo_4552_; lean_object* v___x_4553_; lean_object* v___f_4554_; lean_object* v___x_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; 
v_binderName_4549_ = lean_ctor_get(v_a_4548_, 0);
lean_inc(v_binderName_4549_);
v_binderType_4550_ = lean_ctor_get(v_a_4548_, 1);
lean_inc_ref_n(v_binderType_4550_, 2);
v_body_4551_ = lean_ctor_get(v_a_4548_, 2);
lean_inc_ref(v_body_4551_);
v_binderInfo_4552_ = lean_ctor_get_uint8(v_a_4548_, sizeof(void*)*3 + 8);
lean_dec_ref(v_a_4548_);
v___x_4553_ = lean_box(v_binderInfo_4552_);
v___f_4554_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__1___boxed), 16, 8);
lean_closure_set(v___f_4554_, 0, v___x_4537_);
lean_closure_set(v___f_4554_, 1, v_binderName_4549_);
lean_closure_set(v___f_4554_, 2, v_body_4551_);
lean_closure_set(v___f_4554_, 3, v___x_4553_);
lean_closure_set(v___f_4554_, 4, v___f_4538_);
lean_closure_set(v___f_4554_, 5, v___x_4539_);
lean_closure_set(v___f_4554_, 6, v_mvarId_4536_);
lean_closure_set(v___f_4554_, 7, v_binderType_4550_);
v___x_4555_ = lean_unsigned_to_nat(1u);
v___x_4556_ = lean_mk_empty_array_with_capacity(v___x_4555_);
v___x_4557_ = lean_array_push(v___x_4556_, v_binderType_4550_);
v___x_4558_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4557_, v_givenNames_4540_, v___f_4554_, v_config_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_);
return v___x_4558_;
}
case 8:
{
lean_object* v_declName_4559_; lean_object* v_type_4560_; lean_object* v_value_4561_; lean_object* v_body_4562_; uint8_t v_nondep_4563_; lean_object* v___x_4564_; lean_object* v___f_4565_; lean_object* v___x_4566_; lean_object* v___x_4567_; lean_object* v___x_4568_; lean_object* v___x_4569_; lean_object* v___x_4570_; 
v_declName_4559_ = lean_ctor_get(v_a_4548_, 0);
lean_inc(v_declName_4559_);
v_type_4560_ = lean_ctor_get(v_a_4548_, 1);
lean_inc_ref_n(v_type_4560_, 2);
v_value_4561_ = lean_ctor_get(v_a_4548_, 2);
lean_inc_ref_n(v_value_4561_, 2);
v_body_4562_ = lean_ctor_get(v_a_4548_, 3);
lean_inc_ref(v_body_4562_);
v_nondep_4563_ = lean_ctor_get_uint8(v_a_4548_, sizeof(void*)*4 + 8);
lean_dec_ref(v_a_4548_);
v___x_4564_ = lean_box(v_nondep_4563_);
v___f_4565_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__2___boxed), 17, 9);
lean_closure_set(v___f_4565_, 0, v___x_4537_);
lean_closure_set(v___f_4565_, 1, v_declName_4559_);
lean_closure_set(v___f_4565_, 2, v_body_4562_);
lean_closure_set(v___f_4565_, 3, v___x_4564_);
lean_closure_set(v___f_4565_, 4, v___f_4538_);
lean_closure_set(v___f_4565_, 5, v_value_4561_);
lean_closure_set(v___f_4565_, 6, v___x_4539_);
lean_closure_set(v___f_4565_, 7, v_mvarId_4536_);
lean_closure_set(v___f_4565_, 8, v_type_4560_);
v___x_4566_ = lean_unsigned_to_nat(2u);
v___x_4567_ = lean_mk_empty_array_with_capacity(v___x_4566_);
v___x_4568_ = lean_array_push(v___x_4567_, v_type_4560_);
v___x_4569_ = lean_array_push(v___x_4568_, v_value_4561_);
v___x_4570_ = l_Lean_Meta_extractLets___at___00Lean_MVarId_extractLets_spec__2___redArg(v___x_4569_, v_givenNames_4540_, v___f_4565_, v_config_4541_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_);
return v___x_4570_;
}
default: 
{
lean_object* v___x_4571_; lean_object* v___x_4572_; 
lean_dec(v_a_4548_);
lean_dec(v_givenNames_4540_);
lean_dec_ref(v___f_4538_);
lean_dec_ref(v___x_4537_);
v___x_4571_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4572_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4539_, v_mvarId_4536_, v___x_4571_, v___y_4542_, v___y_4543_, v___y_4544_, v___y_4545_);
return v___x_4572_;
}
}
}
else
{
lean_object* v_a_4573_; lean_object* v___x_4575_; uint8_t v_isShared_4576_; uint8_t v_isSharedCheck_4580_; 
lean_dec(v_givenNames_4540_);
lean_dec(v___x_4539_);
lean_dec_ref(v___f_4538_);
lean_dec_ref(v___x_4537_);
lean_dec(v_mvarId_4536_);
v_a_4573_ = lean_ctor_get(v___x_4547_, 0);
v_isSharedCheck_4580_ = !lean_is_exclusive(v___x_4547_);
if (v_isSharedCheck_4580_ == 0)
{
v___x_4575_ = v___x_4547_;
v_isShared_4576_ = v_isSharedCheck_4580_;
goto v_resetjp_4574_;
}
else
{
lean_inc(v_a_4573_);
lean_dec(v___x_4547_);
v___x_4575_ = lean_box(0);
v_isShared_4576_ = v_isSharedCheck_4580_;
goto v_resetjp_4574_;
}
v_resetjp_4574_:
{
lean_object* v___x_4578_; 
if (v_isShared_4576_ == 0)
{
v___x_4578_ = v___x_4575_;
goto v_reusejp_4577_;
}
else
{
lean_object* v_reuseFailAlloc_4579_; 
v_reuseFailAlloc_4579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4579_, 0, v_a_4573_);
v___x_4578_ = v_reuseFailAlloc_4579_;
goto v_reusejp_4577_;
}
v_reusejp_4577_:
{
return v___x_4578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed(lean_object* v_mvarId_4581_, lean_object* v___x_4582_, lean_object* v___f_4583_, lean_object* v___x_4584_, lean_object* v_givenNames_4585_, lean_object* v_config_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_, lean_object* v___y_4591_){
_start:
{
lean_object* v_res_4592_; 
v_res_4592_ = l_Lean_MVarId_extractLetsLocalDecl___lam__3(v_mvarId_4581_, v___x_4582_, v___f_4583_, v___x_4584_, v_givenNames_4585_, v_config_4586_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_);
lean_dec(v___y_4590_);
lean_dec_ref(v___y_4589_);
lean_dec(v___y_4588_);
lean_dec_ref(v___y_4587_);
lean_dec_ref(v_config_4586_);
return v_res_4592_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4(lean_object* v___x_4593_, lean_object* v___x_4594_, lean_object* v_givenNames_4595_, lean_object* v_config_4596_, lean_object* v_mvarId_4597_, lean_object* v_fvars_4598_, lean_object* v___y_4599_, lean_object* v___y_4600_, lean_object* v___y_4601_, lean_object* v___y_4602_){
_start:
{
lean_object* v___f_4604_; lean_object* v___f_4605_; lean_object* v___x_4606_; 
lean_inc_n(v_mvarId_4597_, 2);
v___f_4604_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__0___boxed), 10, 2);
lean_closure_set(v___f_4604_, 0, v_mvarId_4597_);
lean_closure_set(v___f_4604_, 1, v_fvars_4598_);
v___f_4605_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__3___boxed), 11, 6);
lean_closure_set(v___f_4605_, 0, v_mvarId_4597_);
lean_closure_set(v___f_4605_, 1, v___x_4593_);
lean_closure_set(v___f_4605_, 2, v___f_4604_);
lean_closure_set(v___f_4605_, 3, v___x_4594_);
lean_closure_set(v___f_4605_, 4, v_givenNames_4595_);
lean_closure_set(v___f_4605_, 5, v_config_4596_);
v___x_4606_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4597_, v___f_4605_, v___y_4599_, v___y_4600_, v___y_4601_, v___y_4602_);
return v___x_4606_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed(lean_object* v___x_4607_, lean_object* v___x_4608_, lean_object* v_givenNames_4609_, lean_object* v_config_4610_, lean_object* v_mvarId_4611_, lean_object* v_fvars_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_){
_start:
{
lean_object* v_res_4618_; 
v_res_4618_ = l_Lean_MVarId_extractLetsLocalDecl___lam__4(v___x_4607_, v___x_4608_, v_givenNames_4609_, v_config_4610_, v_mvarId_4611_, v_fvars_4612_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_);
lean_dec(v___y_4616_);
lean_dec_ref(v___y_4615_);
lean_dec(v___y_4614_);
lean_dec_ref(v___y_4613_);
return v_res_4618_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl(lean_object* v_mvarId_4619_, lean_object* v_fvarId_4620_, lean_object* v_givenNames_4621_, lean_object* v_config_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_){
_start:
{
lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4628_ = lean_obj_once(&l_Lean_MVarId_extractLets___closed__1, &l_Lean_MVarId_extractLets___closed__1_once, _init_l_Lean_MVarId_extractLets___closed__1);
lean_inc(v_mvarId_4619_);
v___x_4629_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4619_, v___x_4628_, v_a_4623_, v_a_4624_, v_a_4625_, v_a_4626_);
if (lean_obj_tag(v___x_4629_) == 0)
{
lean_object* v___x_4630_; lean_object* v___f_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; uint8_t v___x_4635_; lean_object* v___x_4636_; 
lean_dec_ref(v___x_4629_);
v___x_4630_ = l_Lean_instInhabitedExpr;
v___f_4631_ = lean_alloc_closure((void*)(l_Lean_MVarId_extractLetsLocalDecl___lam__4___boxed), 11, 4);
lean_closure_set(v___f_4631_, 0, v___x_4630_);
lean_closure_set(v___f_4631_, 1, v___x_4628_);
lean_closure_set(v___f_4631_, 2, v_givenNames_4621_);
lean_closure_set(v___f_4631_, 3, v_config_4622_);
v___x_4632_ = lean_unsigned_to_nat(1u);
v___x_4633_ = lean_mk_empty_array_with_capacity(v___x_4632_);
v___x_4634_ = lean_array_push(v___x_4633_, v_fvarId_4620_);
v___x_4635_ = 0;
v___x_4636_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4619_, v___x_4634_, v___f_4631_, v___x_4635_, v_a_4623_, v_a_4624_, v_a_4625_, v_a_4626_);
return v___x_4636_;
}
else
{
lean_object* v_a_4637_; lean_object* v___x_4639_; uint8_t v_isShared_4640_; uint8_t v_isSharedCheck_4644_; 
lean_dec_ref(v_config_4622_);
lean_dec(v_givenNames_4621_);
lean_dec(v_fvarId_4620_);
lean_dec(v_mvarId_4619_);
v_a_4637_ = lean_ctor_get(v___x_4629_, 0);
v_isSharedCheck_4644_ = !lean_is_exclusive(v___x_4629_);
if (v_isSharedCheck_4644_ == 0)
{
v___x_4639_ = v___x_4629_;
v_isShared_4640_ = v_isSharedCheck_4644_;
goto v_resetjp_4638_;
}
else
{
lean_inc(v_a_4637_);
lean_dec(v___x_4629_);
v___x_4639_ = lean_box(0);
v_isShared_4640_ = v_isSharedCheck_4644_;
goto v_resetjp_4638_;
}
v_resetjp_4638_:
{
lean_object* v___x_4642_; 
if (v_isShared_4640_ == 0)
{
v___x_4642_ = v___x_4639_;
goto v_reusejp_4641_;
}
else
{
lean_object* v_reuseFailAlloc_4643_; 
v_reuseFailAlloc_4643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4643_, 0, v_a_4637_);
v___x_4642_ = v_reuseFailAlloc_4643_;
goto v_reusejp_4641_;
}
v_reusejp_4641_:
{
return v___x_4642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_extractLetsLocalDecl___boxed(lean_object* v_mvarId_4645_, lean_object* v_fvarId_4646_, lean_object* v_givenNames_4647_, lean_object* v_config_4648_, lean_object* v_a_4649_, lean_object* v_a_4650_, lean_object* v_a_4651_, lean_object* v_a_4652_, lean_object* v_a_4653_){
_start:
{
lean_object* v_res_4654_; 
v_res_4654_ = l_Lean_MVarId_extractLetsLocalDecl(v_mvarId_4645_, v_fvarId_4646_, v_givenNames_4647_, v_config_4648_, v_a_4649_, v_a_4650_, v_a_4651_, v_a_4652_);
lean_dec(v_a_4652_);
lean_dec_ref(v_a_4651_);
lean_dec(v_a_4650_);
lean_dec_ref(v_a_4649_);
return v_res_4654_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0(lean_object* v_mvarId_4655_, lean_object* v___x_4656_, lean_object* v_config_4657_, lean_object* v___y_4658_, lean_object* v___y_4659_, lean_object* v___y_4660_, lean_object* v___y_4661_){
_start:
{
lean_object* v___x_4663_; 
lean_inc(v___x_4656_);
lean_inc(v_mvarId_4655_);
v___x_4663_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4655_, v___x_4656_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
if (lean_obj_tag(v___x_4663_) == 0)
{
lean_object* v___x_4664_; 
lean_dec_ref(v___x_4663_);
lean_inc(v_mvarId_4655_);
v___x_4664_ = l_Lean_MVarId_getType(v_mvarId_4655_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
if (lean_obj_tag(v___x_4664_) == 0)
{
lean_object* v_a_4665_; lean_object* v___x_4666_; 
v_a_4665_ = lean_ctor_get(v___x_4664_, 0);
lean_inc_n(v_a_4665_, 2);
lean_dec_ref(v___x_4664_);
v___x_4666_ = l_Lean_Meta_liftLets(v_a_4665_, v_config_4657_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
if (lean_obj_tag(v___x_4666_) == 0)
{
lean_object* v_a_4667_; uint8_t v___x_4668_; 
v_a_4667_ = lean_ctor_get(v___x_4666_, 0);
lean_inc(v_a_4667_);
lean_dec_ref(v___x_4666_);
v___x_4668_ = lean_expr_eqv(v_a_4665_, v_a_4667_);
lean_dec(v_a_4665_);
if (v___x_4668_ == 0)
{
lean_object* v___x_4669_; 
lean_dec(v___x_4656_);
v___x_4669_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4655_, v_a_4667_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
return v___x_4669_;
}
else
{
lean_object* v___x_4670_; 
lean_inc(v_mvarId_4655_);
v___x_4670_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4656_, v_mvarId_4655_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
if (lean_obj_tag(v___x_4670_) == 0)
{
lean_object* v___x_4671_; 
lean_dec_ref(v___x_4670_);
v___x_4671_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4655_, v_a_4667_, v___y_4658_, v___y_4659_, v___y_4660_, v___y_4661_);
return v___x_4671_;
}
else
{
lean_object* v_a_4672_; lean_object* v___x_4674_; uint8_t v_isShared_4675_; uint8_t v_isSharedCheck_4679_; 
lean_dec(v_a_4667_);
lean_dec(v_mvarId_4655_);
v_a_4672_ = lean_ctor_get(v___x_4670_, 0);
v_isSharedCheck_4679_ = !lean_is_exclusive(v___x_4670_);
if (v_isSharedCheck_4679_ == 0)
{
v___x_4674_ = v___x_4670_;
v_isShared_4675_ = v_isSharedCheck_4679_;
goto v_resetjp_4673_;
}
else
{
lean_inc(v_a_4672_);
lean_dec(v___x_4670_);
v___x_4674_ = lean_box(0);
v_isShared_4675_ = v_isSharedCheck_4679_;
goto v_resetjp_4673_;
}
v_resetjp_4673_:
{
lean_object* v___x_4677_; 
if (v_isShared_4675_ == 0)
{
v___x_4677_ = v___x_4674_;
goto v_reusejp_4676_;
}
else
{
lean_object* v_reuseFailAlloc_4678_; 
v_reuseFailAlloc_4678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4678_, 0, v_a_4672_);
v___x_4677_ = v_reuseFailAlloc_4678_;
goto v_reusejp_4676_;
}
v_reusejp_4676_:
{
return v___x_4677_;
}
}
}
}
}
else
{
lean_object* v_a_4680_; lean_object* v___x_4682_; uint8_t v_isShared_4683_; uint8_t v_isSharedCheck_4687_; 
lean_dec(v_a_4665_);
lean_dec(v___x_4656_);
lean_dec(v_mvarId_4655_);
v_a_4680_ = lean_ctor_get(v___x_4666_, 0);
v_isSharedCheck_4687_ = !lean_is_exclusive(v___x_4666_);
if (v_isSharedCheck_4687_ == 0)
{
v___x_4682_ = v___x_4666_;
v_isShared_4683_ = v_isSharedCheck_4687_;
goto v_resetjp_4681_;
}
else
{
lean_inc(v_a_4680_);
lean_dec(v___x_4666_);
v___x_4682_ = lean_box(0);
v_isShared_4683_ = v_isSharedCheck_4687_;
goto v_resetjp_4681_;
}
v_resetjp_4681_:
{
lean_object* v___x_4685_; 
if (v_isShared_4683_ == 0)
{
v___x_4685_ = v___x_4682_;
goto v_reusejp_4684_;
}
else
{
lean_object* v_reuseFailAlloc_4686_; 
v_reuseFailAlloc_4686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4686_, 0, v_a_4680_);
v___x_4685_ = v_reuseFailAlloc_4686_;
goto v_reusejp_4684_;
}
v_reusejp_4684_:
{
return v___x_4685_;
}
}
}
}
else
{
lean_object* v_a_4688_; lean_object* v___x_4690_; uint8_t v_isShared_4691_; uint8_t v_isSharedCheck_4695_; 
lean_dec_ref(v_config_4657_);
lean_dec(v___x_4656_);
lean_dec(v_mvarId_4655_);
v_a_4688_ = lean_ctor_get(v___x_4664_, 0);
v_isSharedCheck_4695_ = !lean_is_exclusive(v___x_4664_);
if (v_isSharedCheck_4695_ == 0)
{
v___x_4690_ = v___x_4664_;
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
else
{
lean_inc(v_a_4688_);
lean_dec(v___x_4664_);
v___x_4690_ = lean_box(0);
v_isShared_4691_ = v_isSharedCheck_4695_;
goto v_resetjp_4689_;
}
v_resetjp_4689_:
{
lean_object* v___x_4693_; 
if (v_isShared_4691_ == 0)
{
v___x_4693_ = v___x_4690_;
goto v_reusejp_4692_;
}
else
{
lean_object* v_reuseFailAlloc_4694_; 
v_reuseFailAlloc_4694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4694_, 0, v_a_4688_);
v___x_4693_ = v_reuseFailAlloc_4694_;
goto v_reusejp_4692_;
}
v_reusejp_4692_:
{
return v___x_4693_;
}
}
}
}
else
{
lean_object* v_a_4696_; lean_object* v___x_4698_; uint8_t v_isShared_4699_; uint8_t v_isSharedCheck_4703_; 
lean_dec_ref(v_config_4657_);
lean_dec(v___x_4656_);
lean_dec(v_mvarId_4655_);
v_a_4696_ = lean_ctor_get(v___x_4663_, 0);
v_isSharedCheck_4703_ = !lean_is_exclusive(v___x_4663_);
if (v_isSharedCheck_4703_ == 0)
{
v___x_4698_ = v___x_4663_;
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
else
{
lean_inc(v_a_4696_);
lean_dec(v___x_4663_);
v___x_4698_ = lean_box(0);
v_isShared_4699_ = v_isSharedCheck_4703_;
goto v_resetjp_4697_;
}
v_resetjp_4697_:
{
lean_object* v___x_4701_; 
if (v_isShared_4699_ == 0)
{
v___x_4701_ = v___x_4698_;
goto v_reusejp_4700_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v_a_4696_);
v___x_4701_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4700_;
}
v_reusejp_4700_:
{
return v___x_4701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___lam__0___boxed(lean_object* v_mvarId_4704_, lean_object* v___x_4705_, lean_object* v_config_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_){
_start:
{
lean_object* v_res_4712_; 
v_res_4712_ = l_Lean_MVarId_liftLets___lam__0(v_mvarId_4704_, v___x_4705_, v_config_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
lean_dec(v___y_4710_);
lean_dec_ref(v___y_4709_);
lean_dec(v___y_4708_);
lean_dec_ref(v___y_4707_);
return v_res_4712_;
}
}
static lean_object* _init_l_Lean_MVarId_liftLets___closed__0(void){
_start:
{
lean_object* v___x_4713_; 
v___x_4713_ = lean_mk_string_unchecked("lift_lets", 9, 9);
return v___x_4713_;
}
}
static lean_object* _init_l_Lean_MVarId_liftLets___closed__1(void){
_start:
{
lean_object* v___x_4714_; lean_object* v___x_4715_; 
v___x_4714_ = lean_obj_once(&l_Lean_MVarId_liftLets___closed__0, &l_Lean_MVarId_liftLets___closed__0_once, _init_l_Lean_MVarId_liftLets___closed__0);
v___x_4715_ = l_Lean_Name_mkStr1(v___x_4714_);
return v___x_4715_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets(lean_object* v_mvarId_4716_, lean_object* v_config_4717_, lean_object* v_a_4718_, lean_object* v_a_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_){
_start:
{
lean_object* v___x_4723_; lean_object* v___f_4724_; lean_object* v___x_4725_; 
v___x_4723_ = lean_obj_once(&l_Lean_MVarId_liftLets___closed__1, &l_Lean_MVarId_liftLets___closed__1_once, _init_l_Lean_MVarId_liftLets___closed__1);
lean_inc(v_mvarId_4716_);
v___f_4724_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLets___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4724_, 0, v_mvarId_4716_);
lean_closure_set(v___f_4724_, 1, v___x_4723_);
lean_closure_set(v___f_4724_, 2, v_config_4717_);
v___x_4725_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4716_, v___f_4724_, v_a_4718_, v_a_4719_, v_a_4720_, v_a_4721_);
return v___x_4725_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLets___boxed(lean_object* v_mvarId_4726_, lean_object* v_config_4727_, lean_object* v_a_4728_, lean_object* v_a_4729_, lean_object* v_a_4730_, lean_object* v_a_4731_, lean_object* v_a_4732_){
_start:
{
lean_object* v_res_4733_; 
v_res_4733_ = l_Lean_MVarId_liftLets(v_mvarId_4726_, v_config_4727_, v_a_4728_, v_a_4729_, v_a_4730_, v_a_4731_);
lean_dec(v_a_4731_);
lean_dec_ref(v_a_4730_);
lean_dec(v_a_4729_);
lean_dec_ref(v_a_4728_);
return v_res_4733_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0(lean_object* v_mvarId_4734_, lean_object* v_fvars_4735_, lean_object* v_targetNew_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_, lean_object* v___y_4740_){
_start:
{
lean_object* v___x_4742_; 
v___x_4742_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4734_, v_targetNew_4736_, v___y_4737_, v___y_4738_, v___y_4739_, v___y_4740_);
if (lean_obj_tag(v___x_4742_) == 0)
{
lean_object* v_a_4743_; lean_object* v___x_4745_; uint8_t v_isShared_4746_; uint8_t v_isSharedCheck_4756_; 
v_a_4743_ = lean_ctor_get(v___x_4742_, 0);
v_isSharedCheck_4756_ = !lean_is_exclusive(v___x_4742_);
if (v_isSharedCheck_4756_ == 0)
{
v___x_4745_ = v___x_4742_;
v_isShared_4746_ = v_isSharedCheck_4756_;
goto v_resetjp_4744_;
}
else
{
lean_inc(v_a_4743_);
lean_dec(v___x_4742_);
v___x_4745_ = lean_box(0);
v_isShared_4746_ = v_isSharedCheck_4756_;
goto v_resetjp_4744_;
}
v_resetjp_4744_:
{
lean_object* v___x_4747_; size_t v_sz_4748_; size_t v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4754_; 
v___x_4747_ = lean_box(0);
v_sz_4748_ = lean_array_size(v_fvars_4735_);
v___x_4749_ = ((size_t)0ULL);
v___x_4750_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_extractLetsLocalDecl_spec__0(v_sz_4748_, v___x_4749_, v_fvars_4735_);
v___x_4751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4751_, 0, v___x_4750_);
lean_ctor_set(v___x_4751_, 1, v_a_4743_);
v___x_4752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4752_, 0, v___x_4747_);
lean_ctor_set(v___x_4752_, 1, v___x_4751_);
if (v_isShared_4746_ == 0)
{
lean_ctor_set(v___x_4745_, 0, v___x_4752_);
v___x_4754_ = v___x_4745_;
goto v_reusejp_4753_;
}
else
{
lean_object* v_reuseFailAlloc_4755_; 
v_reuseFailAlloc_4755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4755_, 0, v___x_4752_);
v___x_4754_ = v_reuseFailAlloc_4755_;
goto v_reusejp_4753_;
}
v_reusejp_4753_:
{
return v___x_4754_;
}
}
}
else
{
lean_object* v_a_4757_; lean_object* v___x_4759_; uint8_t v_isShared_4760_; uint8_t v_isSharedCheck_4764_; 
lean_dec_ref(v_fvars_4735_);
v_a_4757_ = lean_ctor_get(v___x_4742_, 0);
v_isSharedCheck_4764_ = !lean_is_exclusive(v___x_4742_);
if (v_isSharedCheck_4764_ == 0)
{
v___x_4759_ = v___x_4742_;
v_isShared_4760_ = v_isSharedCheck_4764_;
goto v_resetjp_4758_;
}
else
{
lean_inc(v_a_4757_);
lean_dec(v___x_4742_);
v___x_4759_ = lean_box(0);
v_isShared_4760_ = v_isSharedCheck_4764_;
goto v_resetjp_4758_;
}
v_resetjp_4758_:
{
lean_object* v___x_4762_; 
if (v_isShared_4760_ == 0)
{
v___x_4762_ = v___x_4759_;
goto v_reusejp_4761_;
}
else
{
lean_object* v_reuseFailAlloc_4763_; 
v_reuseFailAlloc_4763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4763_, 0, v_a_4757_);
v___x_4762_ = v_reuseFailAlloc_4763_;
goto v_reusejp_4761_;
}
v_reusejp_4761_:
{
return v___x_4762_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed(lean_object* v_mvarId_4765_, lean_object* v_fvars_4766_, lean_object* v_targetNew_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l_Lean_MVarId_liftLetsLocalDecl___lam__0(v_mvarId_4765_, v_fvars_4766_, v_targetNew_4767_, v___y_4768_, v___y_4769_, v___y_4770_, v___y_4771_);
lean_dec(v___y_4771_);
lean_dec_ref(v___y_4770_);
lean_dec(v___y_4769_);
lean_dec_ref(v___y_4768_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1(lean_object* v_mvarId_4774_, lean_object* v_config_4775_, lean_object* v___f_4776_, lean_object* v___x_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_, lean_object* v___y_4781_){
_start:
{
lean_object* v___x_4783_; 
lean_inc(v_mvarId_4774_);
v___x_4783_ = l_Lean_MVarId_getType(v_mvarId_4774_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_);
if (lean_obj_tag(v___x_4783_) == 0)
{
lean_object* v_a_4784_; 
v_a_4784_ = lean_ctor_get(v___x_4783_, 0);
lean_inc(v_a_4784_);
lean_dec_ref(v___x_4783_);
switch(lean_obj_tag(v_a_4784_))
{
case 7:
{
lean_object* v_binderName_4785_; lean_object* v_binderType_4786_; lean_object* v_body_4787_; uint8_t v_binderInfo_4788_; lean_object* v___x_4789_; 
v_binderName_4785_ = lean_ctor_get(v_a_4784_, 0);
lean_inc(v_binderName_4785_);
v_binderType_4786_ = lean_ctor_get(v_a_4784_, 1);
lean_inc_ref_n(v_binderType_4786_, 2);
v_body_4787_ = lean_ctor_get(v_a_4784_, 2);
lean_inc_ref(v_body_4787_);
v_binderInfo_4788_ = lean_ctor_get_uint8(v_a_4784_, sizeof(void*)*3 + 8);
lean_dec_ref(v_a_4784_);
v___x_4789_ = l_Lean_Meta_liftLets(v_binderType_4786_, v_config_4775_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_);
if (lean_obj_tag(v___x_4789_) == 0)
{
lean_object* v_a_4790_; lean_object* v___y_4792_; lean_object* v___y_4793_; lean_object* v___y_4794_; lean_object* v___y_4795_; uint8_t v___x_4798_; 
v_a_4790_ = lean_ctor_get(v___x_4789_, 0);
lean_inc(v_a_4790_);
lean_dec_ref(v___x_4789_);
v___x_4798_ = lean_expr_eqv(v_binderType_4786_, v_a_4790_);
lean_dec_ref(v_binderType_4786_);
if (v___x_4798_ == 0)
{
lean_dec(v___x_4777_);
lean_dec(v_mvarId_4774_);
v___y_4792_ = v___y_4778_;
v___y_4793_ = v___y_4779_;
v___y_4794_ = v___y_4780_;
v___y_4795_ = v___y_4781_;
goto v___jp_4791_;
}
else
{
lean_object* v___x_4799_; 
v___x_4799_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4777_, v_mvarId_4774_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_);
if (lean_obj_tag(v___x_4799_) == 0)
{
lean_dec_ref(v___x_4799_);
v___y_4792_ = v___y_4778_;
v___y_4793_ = v___y_4779_;
v___y_4794_ = v___y_4780_;
v___y_4795_ = v___y_4781_;
goto v___jp_4791_;
}
else
{
lean_object* v_a_4800_; lean_object* v___x_4802_; uint8_t v_isShared_4803_; uint8_t v_isSharedCheck_4807_; 
lean_dec(v_a_4790_);
lean_dec_ref(v_body_4787_);
lean_dec(v_binderName_4785_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
lean_dec_ref(v___f_4776_);
v_a_4800_ = lean_ctor_get(v___x_4799_, 0);
v_isSharedCheck_4807_ = !lean_is_exclusive(v___x_4799_);
if (v_isSharedCheck_4807_ == 0)
{
v___x_4802_ = v___x_4799_;
v_isShared_4803_ = v_isSharedCheck_4807_;
goto v_resetjp_4801_;
}
else
{
lean_inc(v_a_4800_);
lean_dec(v___x_4799_);
v___x_4802_ = lean_box(0);
v_isShared_4803_ = v_isSharedCheck_4807_;
goto v_resetjp_4801_;
}
v_resetjp_4801_:
{
lean_object* v___x_4805_; 
if (v_isShared_4803_ == 0)
{
v___x_4805_ = v___x_4802_;
goto v_reusejp_4804_;
}
else
{
lean_object* v_reuseFailAlloc_4806_; 
v_reuseFailAlloc_4806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4806_, 0, v_a_4800_);
v___x_4805_ = v_reuseFailAlloc_4806_;
goto v_reusejp_4804_;
}
v_reusejp_4804_:
{
return v___x_4805_;
}
}
}
}
v___jp_4791_:
{
lean_object* v___x_4796_; lean_object* v___x_4797_; 
v___x_4796_ = l_Lean_Expr_forallE___override(v_binderName_4785_, v_a_4790_, v_body_4787_, v_binderInfo_4788_);
v___x_4797_ = lean_apply_6(v___f_4776_, v___x_4796_, v___y_4792_, v___y_4793_, v___y_4794_, v___y_4795_, lean_box(0));
return v___x_4797_;
}
}
else
{
lean_object* v_a_4808_; lean_object* v___x_4810_; uint8_t v_isShared_4811_; uint8_t v_isSharedCheck_4815_; 
lean_dec_ref(v_body_4787_);
lean_dec_ref(v_binderType_4786_);
lean_dec(v_binderName_4785_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
lean_dec(v___x_4777_);
lean_dec_ref(v___f_4776_);
lean_dec(v_mvarId_4774_);
v_a_4808_ = lean_ctor_get(v___x_4789_, 0);
v_isSharedCheck_4815_ = !lean_is_exclusive(v___x_4789_);
if (v_isSharedCheck_4815_ == 0)
{
v___x_4810_ = v___x_4789_;
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
else
{
lean_inc(v_a_4808_);
lean_dec(v___x_4789_);
v___x_4810_ = lean_box(0);
v_isShared_4811_ = v_isSharedCheck_4815_;
goto v_resetjp_4809_;
}
v_resetjp_4809_:
{
lean_object* v___x_4813_; 
if (v_isShared_4811_ == 0)
{
v___x_4813_ = v___x_4810_;
goto v_reusejp_4812_;
}
else
{
lean_object* v_reuseFailAlloc_4814_; 
v_reuseFailAlloc_4814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4814_, 0, v_a_4808_);
v___x_4813_ = v_reuseFailAlloc_4814_;
goto v_reusejp_4812_;
}
v_reusejp_4812_:
{
return v___x_4813_;
}
}
}
}
case 8:
{
lean_object* v_declName_4816_; lean_object* v_type_4817_; lean_object* v_value_4818_; lean_object* v_body_4819_; uint8_t v_nondep_4820_; lean_object* v___x_4821_; 
v_declName_4816_ = lean_ctor_get(v_a_4784_, 0);
lean_inc(v_declName_4816_);
v_type_4817_ = lean_ctor_get(v_a_4784_, 1);
lean_inc_ref_n(v_type_4817_, 2);
v_value_4818_ = lean_ctor_get(v_a_4784_, 2);
lean_inc_ref(v_value_4818_);
v_body_4819_ = lean_ctor_get(v_a_4784_, 3);
lean_inc_ref(v_body_4819_);
v_nondep_4820_ = lean_ctor_get_uint8(v_a_4784_, sizeof(void*)*4 + 8);
lean_dec_ref(v_a_4784_);
lean_inc_ref(v_config_4775_);
v___x_4821_ = l_Lean_Meta_liftLets(v_type_4817_, v_config_4775_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_);
if (lean_obj_tag(v___x_4821_) == 0)
{
lean_object* v_a_4822_; lean_object* v___x_4823_; 
v_a_4822_ = lean_ctor_get(v___x_4821_, 0);
lean_inc(v_a_4822_);
lean_dec_ref(v___x_4821_);
lean_inc_ref(v_value_4818_);
v___x_4823_ = l_Lean_Meta_liftLets(v_value_4818_, v_config_4775_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_);
if (lean_obj_tag(v___x_4823_) == 0)
{
lean_object* v_a_4824_; lean_object* v___y_4826_; lean_object* v___y_4827_; lean_object* v___y_4828_; lean_object* v___y_4829_; uint8_t v___y_4833_; uint8_t v___x_4843_; 
v_a_4824_ = lean_ctor_get(v___x_4823_, 0);
lean_inc(v_a_4824_);
lean_dec_ref(v___x_4823_);
v___x_4843_ = lean_expr_eqv(v_type_4817_, v_a_4822_);
lean_dec_ref(v_type_4817_);
if (v___x_4843_ == 0)
{
lean_dec_ref(v_value_4818_);
v___y_4833_ = v___x_4843_;
goto v___jp_4832_;
}
else
{
uint8_t v___x_4844_; 
v___x_4844_ = lean_expr_eqv(v_value_4818_, v_a_4824_);
lean_dec_ref(v_value_4818_);
v___y_4833_ = v___x_4844_;
goto v___jp_4832_;
}
v___jp_4825_:
{
lean_object* v___x_4830_; lean_object* v___x_4831_; 
v___x_4830_ = l_Lean_Expr_letE___override(v_declName_4816_, v_a_4822_, v_a_4824_, v_body_4819_, v_nondep_4820_);
v___x_4831_ = lean_apply_6(v___f_4776_, v___x_4830_, v___y_4826_, v___y_4827_, v___y_4828_, v___y_4829_, lean_box(0));
return v___x_4831_;
}
v___jp_4832_:
{
if (v___y_4833_ == 0)
{
lean_dec(v___x_4777_);
lean_dec(v_mvarId_4774_);
v___y_4826_ = v___y_4778_;
v___y_4827_ = v___y_4779_;
v___y_4828_ = v___y_4780_;
v___y_4829_ = v___y_4781_;
goto v___jp_4825_;
}
else
{
lean_object* v___x_4834_; 
v___x_4834_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4777_, v_mvarId_4774_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_);
if (lean_obj_tag(v___x_4834_) == 0)
{
lean_dec_ref(v___x_4834_);
v___y_4826_ = v___y_4778_;
v___y_4827_ = v___y_4779_;
v___y_4828_ = v___y_4780_;
v___y_4829_ = v___y_4781_;
goto v___jp_4825_;
}
else
{
lean_object* v_a_4835_; lean_object* v___x_4837_; uint8_t v_isShared_4838_; uint8_t v_isSharedCheck_4842_; 
lean_dec(v_a_4824_);
lean_dec(v_a_4822_);
lean_dec_ref(v_body_4819_);
lean_dec(v_declName_4816_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
lean_dec_ref(v___f_4776_);
v_a_4835_ = lean_ctor_get(v___x_4834_, 0);
v_isSharedCheck_4842_ = !lean_is_exclusive(v___x_4834_);
if (v_isSharedCheck_4842_ == 0)
{
v___x_4837_ = v___x_4834_;
v_isShared_4838_ = v_isSharedCheck_4842_;
goto v_resetjp_4836_;
}
else
{
lean_inc(v_a_4835_);
lean_dec(v___x_4834_);
v___x_4837_ = lean_box(0);
v_isShared_4838_ = v_isSharedCheck_4842_;
goto v_resetjp_4836_;
}
v_resetjp_4836_:
{
lean_object* v___x_4840_; 
if (v_isShared_4838_ == 0)
{
v___x_4840_ = v___x_4837_;
goto v_reusejp_4839_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v_a_4835_);
v___x_4840_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4839_;
}
v_reusejp_4839_:
{
return v___x_4840_;
}
}
}
}
}
}
else
{
lean_object* v_a_4845_; lean_object* v___x_4847_; uint8_t v_isShared_4848_; uint8_t v_isSharedCheck_4852_; 
lean_dec(v_a_4822_);
lean_dec_ref(v_body_4819_);
lean_dec_ref(v_value_4818_);
lean_dec_ref(v_type_4817_);
lean_dec(v_declName_4816_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
lean_dec(v___x_4777_);
lean_dec_ref(v___f_4776_);
lean_dec(v_mvarId_4774_);
v_a_4845_ = lean_ctor_get(v___x_4823_, 0);
v_isSharedCheck_4852_ = !lean_is_exclusive(v___x_4823_);
if (v_isSharedCheck_4852_ == 0)
{
v___x_4847_ = v___x_4823_;
v_isShared_4848_ = v_isSharedCheck_4852_;
goto v_resetjp_4846_;
}
else
{
lean_inc(v_a_4845_);
lean_dec(v___x_4823_);
v___x_4847_ = lean_box(0);
v_isShared_4848_ = v_isSharedCheck_4852_;
goto v_resetjp_4846_;
}
v_resetjp_4846_:
{
lean_object* v___x_4850_; 
if (v_isShared_4848_ == 0)
{
v___x_4850_ = v___x_4847_;
goto v_reusejp_4849_;
}
else
{
lean_object* v_reuseFailAlloc_4851_; 
v_reuseFailAlloc_4851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4851_, 0, v_a_4845_);
v___x_4850_ = v_reuseFailAlloc_4851_;
goto v_reusejp_4849_;
}
v_reusejp_4849_:
{
return v___x_4850_;
}
}
}
}
else
{
lean_object* v_a_4853_; lean_object* v___x_4855_; uint8_t v_isShared_4856_; uint8_t v_isSharedCheck_4860_; 
lean_dec_ref(v_body_4819_);
lean_dec_ref(v_value_4818_);
lean_dec_ref(v_type_4817_);
lean_dec(v_declName_4816_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
lean_dec(v___x_4777_);
lean_dec_ref(v___f_4776_);
lean_dec_ref(v_config_4775_);
lean_dec(v_mvarId_4774_);
v_a_4853_ = lean_ctor_get(v___x_4821_, 0);
v_isSharedCheck_4860_ = !lean_is_exclusive(v___x_4821_);
if (v_isSharedCheck_4860_ == 0)
{
v___x_4855_ = v___x_4821_;
v_isShared_4856_ = v_isSharedCheck_4860_;
goto v_resetjp_4854_;
}
else
{
lean_inc(v_a_4853_);
lean_dec(v___x_4821_);
v___x_4855_ = lean_box(0);
v_isShared_4856_ = v_isSharedCheck_4860_;
goto v_resetjp_4854_;
}
v_resetjp_4854_:
{
lean_object* v___x_4858_; 
if (v_isShared_4856_ == 0)
{
v___x_4858_ = v___x_4855_;
goto v_reusejp_4857_;
}
else
{
lean_object* v_reuseFailAlloc_4859_; 
v_reuseFailAlloc_4859_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4859_, 0, v_a_4853_);
v___x_4858_ = v_reuseFailAlloc_4859_;
goto v_reusejp_4857_;
}
v_reusejp_4857_:
{
return v___x_4858_;
}
}
}
}
default: 
{
lean_object* v___x_4861_; lean_object* v___x_4862_; 
lean_dec(v_a_4784_);
lean_dec_ref(v___f_4776_);
lean_dec_ref(v_config_4775_);
v___x_4861_ = lean_obj_once(&l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3, &l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3_once, _init_l_Lean_MVarId_extractLetsLocalDecl___lam__3___closed__3);
v___x_4862_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4777_, v_mvarId_4774_, v___x_4861_, v___y_4778_, v___y_4779_, v___y_4780_, v___y_4781_);
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
return v___x_4862_;
}
}
}
else
{
lean_object* v_a_4863_; lean_object* v___x_4865_; uint8_t v_isShared_4866_; uint8_t v_isSharedCheck_4870_; 
lean_dec(v___y_4781_);
lean_dec_ref(v___y_4780_);
lean_dec(v___y_4779_);
lean_dec_ref(v___y_4778_);
lean_dec(v___x_4777_);
lean_dec_ref(v___f_4776_);
lean_dec_ref(v_config_4775_);
lean_dec(v_mvarId_4774_);
v_a_4863_ = lean_ctor_get(v___x_4783_, 0);
v_isSharedCheck_4870_ = !lean_is_exclusive(v___x_4783_);
if (v_isSharedCheck_4870_ == 0)
{
v___x_4865_ = v___x_4783_;
v_isShared_4866_ = v_isSharedCheck_4870_;
goto v_resetjp_4864_;
}
else
{
lean_inc(v_a_4863_);
lean_dec(v___x_4783_);
v___x_4865_ = lean_box(0);
v_isShared_4866_ = v_isSharedCheck_4870_;
goto v_resetjp_4864_;
}
v_resetjp_4864_:
{
lean_object* v___x_4868_; 
if (v_isShared_4866_ == 0)
{
v___x_4868_ = v___x_4865_;
goto v_reusejp_4867_;
}
else
{
lean_object* v_reuseFailAlloc_4869_; 
v_reuseFailAlloc_4869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4869_, 0, v_a_4863_);
v___x_4868_ = v_reuseFailAlloc_4869_;
goto v_reusejp_4867_;
}
v_reusejp_4867_:
{
return v___x_4868_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed(lean_object* v_mvarId_4871_, lean_object* v_config_4872_, lean_object* v___f_4873_, lean_object* v___x_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_){
_start:
{
lean_object* v_res_4880_; 
v_res_4880_ = l_Lean_MVarId_liftLetsLocalDecl___lam__1(v_mvarId_4871_, v_config_4872_, v___f_4873_, v___x_4874_, v___y_4875_, v___y_4876_, v___y_4877_, v___y_4878_);
return v_res_4880_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2(lean_object* v_config_4881_, lean_object* v___x_4882_, lean_object* v_mvarId_4883_, lean_object* v_fvars_4884_, lean_object* v___y_4885_, lean_object* v___y_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_){
_start:
{
lean_object* v___f_4890_; lean_object* v___f_4891_; lean_object* v___x_4892_; 
lean_inc_n(v_mvarId_4883_, 2);
v___f_4890_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4890_, 0, v_mvarId_4883_);
lean_closure_set(v___f_4890_, 1, v_fvars_4884_);
v___f_4891_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__1___boxed), 9, 4);
lean_closure_set(v___f_4891_, 0, v_mvarId_4883_);
lean_closure_set(v___f_4891_, 1, v_config_4881_);
lean_closure_set(v___f_4891_, 2, v___f_4890_);
lean_closure_set(v___f_4891_, 3, v___x_4882_);
v___x_4892_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_4883_, v___f_4891_, v___y_4885_, v___y_4886_, v___y_4887_, v___y_4888_);
return v___x_4892_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed(lean_object* v_config_4893_, lean_object* v___x_4894_, lean_object* v_mvarId_4895_, lean_object* v_fvars_4896_, lean_object* v___y_4897_, lean_object* v___y_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_, lean_object* v___y_4901_){
_start:
{
lean_object* v_res_4902_; 
v_res_4902_ = l_Lean_MVarId_liftLetsLocalDecl___lam__2(v_config_4893_, v___x_4894_, v_mvarId_4895_, v_fvars_4896_, v___y_4897_, v___y_4898_, v___y_4899_, v___y_4900_);
lean_dec(v___y_4900_);
lean_dec_ref(v___y_4899_);
lean_dec(v___y_4898_);
lean_dec_ref(v___y_4897_);
return v_res_4902_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl(lean_object* v_mvarId_4903_, lean_object* v_fvarId_4904_, lean_object* v_config_4905_, lean_object* v_a_4906_, lean_object* v_a_4907_, lean_object* v_a_4908_, lean_object* v_a_4909_){
_start:
{
lean_object* v___x_4911_; lean_object* v___x_4912_; 
v___x_4911_ = lean_obj_once(&l_Lean_MVarId_liftLets___closed__1, &l_Lean_MVarId_liftLets___closed__1_once, _init_l_Lean_MVarId_liftLets___closed__1);
lean_inc(v_mvarId_4903_);
v___x_4912_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4903_, v___x_4911_, v_a_4906_, v_a_4907_, v_a_4908_, v_a_4909_);
if (lean_obj_tag(v___x_4912_) == 0)
{
lean_object* v___f_4913_; lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; uint8_t v___x_4917_; lean_object* v___x_4918_; 
lean_dec_ref(v___x_4912_);
v___f_4913_ = lean_alloc_closure((void*)(l_Lean_MVarId_liftLetsLocalDecl___lam__2___boxed), 9, 2);
lean_closure_set(v___f_4913_, 0, v_config_4905_);
lean_closure_set(v___f_4913_, 1, v___x_4911_);
v___x_4914_ = lean_unsigned_to_nat(1u);
v___x_4915_ = lean_mk_empty_array_with_capacity(v___x_4914_);
v___x_4916_ = lean_array_push(v___x_4915_, v_fvarId_4904_);
v___x_4917_ = 0;
v___x_4918_ = l_Lean_MVarId_withReverted___redArg(v_mvarId_4903_, v___x_4916_, v___f_4913_, v___x_4917_, v_a_4906_, v_a_4907_, v_a_4908_, v_a_4909_);
if (lean_obj_tag(v___x_4918_) == 0)
{
lean_object* v_a_4919_; lean_object* v___x_4921_; uint8_t v_isShared_4922_; uint8_t v_isSharedCheck_4927_; 
v_a_4919_ = lean_ctor_get(v___x_4918_, 0);
v_isSharedCheck_4927_ = !lean_is_exclusive(v___x_4918_);
if (v_isSharedCheck_4927_ == 0)
{
v___x_4921_ = v___x_4918_;
v_isShared_4922_ = v_isSharedCheck_4927_;
goto v_resetjp_4920_;
}
else
{
lean_inc(v_a_4919_);
lean_dec(v___x_4918_);
v___x_4921_ = lean_box(0);
v_isShared_4922_ = v_isSharedCheck_4927_;
goto v_resetjp_4920_;
}
v_resetjp_4920_:
{
lean_object* v_snd_4923_; lean_object* v___x_4925_; 
v_snd_4923_ = lean_ctor_get(v_a_4919_, 1);
lean_inc(v_snd_4923_);
lean_dec(v_a_4919_);
if (v_isShared_4922_ == 0)
{
lean_ctor_set(v___x_4921_, 0, v_snd_4923_);
v___x_4925_ = v___x_4921_;
goto v_reusejp_4924_;
}
else
{
lean_object* v_reuseFailAlloc_4926_; 
v_reuseFailAlloc_4926_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4926_, 0, v_snd_4923_);
v___x_4925_ = v_reuseFailAlloc_4926_;
goto v_reusejp_4924_;
}
v_reusejp_4924_:
{
return v___x_4925_;
}
}
}
else
{
lean_object* v_a_4928_; lean_object* v___x_4930_; uint8_t v_isShared_4931_; uint8_t v_isSharedCheck_4935_; 
v_a_4928_ = lean_ctor_get(v___x_4918_, 0);
v_isSharedCheck_4935_ = !lean_is_exclusive(v___x_4918_);
if (v_isSharedCheck_4935_ == 0)
{
v___x_4930_ = v___x_4918_;
v_isShared_4931_ = v_isSharedCheck_4935_;
goto v_resetjp_4929_;
}
else
{
lean_inc(v_a_4928_);
lean_dec(v___x_4918_);
v___x_4930_ = lean_box(0);
v_isShared_4931_ = v_isSharedCheck_4935_;
goto v_resetjp_4929_;
}
v_resetjp_4929_:
{
lean_object* v___x_4933_; 
if (v_isShared_4931_ == 0)
{
v___x_4933_ = v___x_4930_;
goto v_reusejp_4932_;
}
else
{
lean_object* v_reuseFailAlloc_4934_; 
v_reuseFailAlloc_4934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4934_, 0, v_a_4928_);
v___x_4933_ = v_reuseFailAlloc_4934_;
goto v_reusejp_4932_;
}
v_reusejp_4932_:
{
return v___x_4933_;
}
}
}
}
else
{
lean_object* v_a_4936_; lean_object* v___x_4938_; uint8_t v_isShared_4939_; uint8_t v_isSharedCheck_4943_; 
lean_dec_ref(v_config_4905_);
lean_dec(v_fvarId_4904_);
lean_dec(v_mvarId_4903_);
v_a_4936_ = lean_ctor_get(v___x_4912_, 0);
v_isSharedCheck_4943_ = !lean_is_exclusive(v___x_4912_);
if (v_isSharedCheck_4943_ == 0)
{
v___x_4938_ = v___x_4912_;
v_isShared_4939_ = v_isSharedCheck_4943_;
goto v_resetjp_4937_;
}
else
{
lean_inc(v_a_4936_);
lean_dec(v___x_4912_);
v___x_4938_ = lean_box(0);
v_isShared_4939_ = v_isSharedCheck_4943_;
goto v_resetjp_4937_;
}
v_resetjp_4937_:
{
lean_object* v___x_4941_; 
if (v_isShared_4939_ == 0)
{
v___x_4941_ = v___x_4938_;
goto v_reusejp_4940_;
}
else
{
lean_object* v_reuseFailAlloc_4942_; 
v_reuseFailAlloc_4942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4942_, 0, v_a_4936_);
v___x_4941_ = v_reuseFailAlloc_4942_;
goto v_reusejp_4940_;
}
v_reusejp_4940_:
{
return v___x_4941_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_liftLetsLocalDecl___boxed(lean_object* v_mvarId_4944_, lean_object* v_fvarId_4945_, lean_object* v_config_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_){
_start:
{
lean_object* v_res_4952_; 
v_res_4952_ = l_Lean_MVarId_liftLetsLocalDecl(v_mvarId_4944_, v_fvarId_4945_, v_config_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_);
lean_dec(v_a_4950_);
lean_dec_ref(v_a_4949_);
lean_dec(v_a_4948_);
lean_dec_ref(v_a_4947_);
return v_res_4952_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0(lean_object* v_mvarId_4953_, lean_object* v___x_4954_, uint8_t v_failIfUnchanged_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_){
_start:
{
lean_object* v___x_4961_; 
lean_inc(v___x_4954_);
lean_inc(v_mvarId_4953_);
v___x_4961_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_4953_, v___x_4954_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_);
if (lean_obj_tag(v___x_4961_) == 0)
{
lean_object* v___x_4962_; 
lean_dec_ref(v___x_4961_);
lean_inc(v_mvarId_4953_);
v___x_4962_ = l_Lean_MVarId_getType(v_mvarId_4953_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_);
if (lean_obj_tag(v___x_4962_) == 0)
{
lean_object* v_a_4963_; lean_object* v___x_4964_; 
v_a_4963_ = lean_ctor_get(v___x_4962_, 0);
lean_inc_n(v_a_4963_, 2);
lean_dec_ref(v___x_4962_);
v___x_4964_ = l_Lean_Meta_letToHave(v_a_4963_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_);
if (lean_obj_tag(v___x_4964_) == 0)
{
if (v_failIfUnchanged_4955_ == 0)
{
lean_object* v_a_4965_; lean_object* v___x_4966_; 
lean_dec(v_a_4963_);
lean_dec(v___x_4954_);
v_a_4965_ = lean_ctor_get(v___x_4964_, 0);
lean_inc(v_a_4965_);
lean_dec_ref(v___x_4964_);
v___x_4966_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4953_, v_a_4965_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_);
return v___x_4966_;
}
else
{
lean_object* v_a_4967_; uint8_t v___x_4968_; 
v_a_4967_ = lean_ctor_get(v___x_4964_, 0);
lean_inc(v_a_4967_);
lean_dec_ref(v___x_4964_);
v___x_4968_ = lean_expr_eqv(v_a_4963_, v_a_4967_);
lean_dec(v_a_4963_);
if (v___x_4968_ == 0)
{
lean_object* v___x_4969_; 
lean_dec(v___x_4954_);
v___x_4969_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4953_, v_a_4967_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_);
return v___x_4969_;
}
else
{
lean_object* v___x_4970_; 
lean_inc(v_mvarId_4953_);
v___x_4970_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_4954_, v_mvarId_4953_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_);
if (lean_obj_tag(v___x_4970_) == 0)
{
lean_object* v___x_4971_; 
lean_dec_ref(v___x_4970_);
v___x_4971_ = l_Lean_MVarId_replaceTargetDefEq(v_mvarId_4953_, v_a_4967_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_);
return v___x_4971_;
}
else
{
lean_object* v_a_4972_; lean_object* v___x_4974_; uint8_t v_isShared_4975_; uint8_t v_isSharedCheck_4979_; 
lean_dec(v_a_4967_);
lean_dec(v_mvarId_4953_);
v_a_4972_ = lean_ctor_get(v___x_4970_, 0);
v_isSharedCheck_4979_ = !lean_is_exclusive(v___x_4970_);
if (v_isSharedCheck_4979_ == 0)
{
v___x_4974_ = v___x_4970_;
v_isShared_4975_ = v_isSharedCheck_4979_;
goto v_resetjp_4973_;
}
else
{
lean_inc(v_a_4972_);
lean_dec(v___x_4970_);
v___x_4974_ = lean_box(0);
v_isShared_4975_ = v_isSharedCheck_4979_;
goto v_resetjp_4973_;
}
v_resetjp_4973_:
{
lean_object* v___x_4977_; 
if (v_isShared_4975_ == 0)
{
v___x_4977_ = v___x_4974_;
goto v_reusejp_4976_;
}
else
{
lean_object* v_reuseFailAlloc_4978_; 
v_reuseFailAlloc_4978_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4978_, 0, v_a_4972_);
v___x_4977_ = v_reuseFailAlloc_4978_;
goto v_reusejp_4976_;
}
v_reusejp_4976_:
{
return v___x_4977_;
}
}
}
}
}
}
else
{
lean_object* v_a_4980_; lean_object* v___x_4982_; uint8_t v_isShared_4983_; uint8_t v_isSharedCheck_4987_; 
lean_dec(v_a_4963_);
lean_dec(v___x_4954_);
lean_dec(v_mvarId_4953_);
v_a_4980_ = lean_ctor_get(v___x_4964_, 0);
v_isSharedCheck_4987_ = !lean_is_exclusive(v___x_4964_);
if (v_isSharedCheck_4987_ == 0)
{
v___x_4982_ = v___x_4964_;
v_isShared_4983_ = v_isSharedCheck_4987_;
goto v_resetjp_4981_;
}
else
{
lean_inc(v_a_4980_);
lean_dec(v___x_4964_);
v___x_4982_ = lean_box(0);
v_isShared_4983_ = v_isSharedCheck_4987_;
goto v_resetjp_4981_;
}
v_resetjp_4981_:
{
lean_object* v___x_4985_; 
if (v_isShared_4983_ == 0)
{
v___x_4985_ = v___x_4982_;
goto v_reusejp_4984_;
}
else
{
lean_object* v_reuseFailAlloc_4986_; 
v_reuseFailAlloc_4986_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4986_, 0, v_a_4980_);
v___x_4985_ = v_reuseFailAlloc_4986_;
goto v_reusejp_4984_;
}
v_reusejp_4984_:
{
return v___x_4985_;
}
}
}
}
else
{
lean_object* v_a_4988_; lean_object* v___x_4990_; uint8_t v_isShared_4991_; uint8_t v_isSharedCheck_4995_; 
lean_dec(v___x_4954_);
lean_dec(v_mvarId_4953_);
v_a_4988_ = lean_ctor_get(v___x_4962_, 0);
v_isSharedCheck_4995_ = !lean_is_exclusive(v___x_4962_);
if (v_isSharedCheck_4995_ == 0)
{
v___x_4990_ = v___x_4962_;
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
else
{
lean_inc(v_a_4988_);
lean_dec(v___x_4962_);
v___x_4990_ = lean_box(0);
v_isShared_4991_ = v_isSharedCheck_4995_;
goto v_resetjp_4989_;
}
v_resetjp_4989_:
{
lean_object* v___x_4993_; 
if (v_isShared_4991_ == 0)
{
v___x_4993_ = v___x_4990_;
goto v_reusejp_4992_;
}
else
{
lean_object* v_reuseFailAlloc_4994_; 
v_reuseFailAlloc_4994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4994_, 0, v_a_4988_);
v___x_4993_ = v_reuseFailAlloc_4994_;
goto v_reusejp_4992_;
}
v_reusejp_4992_:
{
return v___x_4993_;
}
}
}
}
else
{
lean_object* v_a_4996_; lean_object* v___x_4998_; uint8_t v_isShared_4999_; uint8_t v_isSharedCheck_5003_; 
lean_dec(v___x_4954_);
lean_dec(v_mvarId_4953_);
v_a_4996_ = lean_ctor_get(v___x_4961_, 0);
v_isSharedCheck_5003_ = !lean_is_exclusive(v___x_4961_);
if (v_isSharedCheck_5003_ == 0)
{
v___x_4998_ = v___x_4961_;
v_isShared_4999_ = v_isSharedCheck_5003_;
goto v_resetjp_4997_;
}
else
{
lean_inc(v_a_4996_);
lean_dec(v___x_4961_);
v___x_4998_ = lean_box(0);
v_isShared_4999_ = v_isSharedCheck_5003_;
goto v_resetjp_4997_;
}
v_resetjp_4997_:
{
lean_object* v___x_5001_; 
if (v_isShared_4999_ == 0)
{
v___x_5001_ = v___x_4998_;
goto v_reusejp_5000_;
}
else
{
lean_object* v_reuseFailAlloc_5002_; 
v_reuseFailAlloc_5002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5002_, 0, v_a_4996_);
v___x_5001_ = v_reuseFailAlloc_5002_;
goto v_reusejp_5000_;
}
v_reusejp_5000_:
{
return v___x_5001_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___lam__0___boxed(lean_object* v_mvarId_5004_, lean_object* v___x_5005_, lean_object* v_failIfUnchanged_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_){
_start:
{
uint8_t v_failIfUnchanged_boxed_5012_; lean_object* v_res_5013_; 
v_failIfUnchanged_boxed_5012_ = lean_unbox(v_failIfUnchanged_5006_);
v_res_5013_ = l_Lean_MVarId_letToHave___lam__0(v_mvarId_5004_, v___x_5005_, v_failIfUnchanged_boxed_5012_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_);
lean_dec(v___y_5010_);
lean_dec_ref(v___y_5009_);
lean_dec(v___y_5008_);
lean_dec_ref(v___y_5007_);
return v_res_5013_;
}
}
static lean_object* _init_l_Lean_MVarId_letToHave___closed__0(void){
_start:
{
lean_object* v___x_5014_; 
v___x_5014_ = lean_mk_string_unchecked("let_to_have", 11, 11);
return v___x_5014_;
}
}
static lean_object* _init_l_Lean_MVarId_letToHave___closed__1(void){
_start:
{
lean_object* v___x_5015_; lean_object* v___x_5016_; 
v___x_5015_ = lean_obj_once(&l_Lean_MVarId_letToHave___closed__0, &l_Lean_MVarId_letToHave___closed__0_once, _init_l_Lean_MVarId_letToHave___closed__0);
v___x_5016_ = l_Lean_Name_mkStr1(v___x_5015_);
return v___x_5016_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave(lean_object* v_mvarId_5017_, uint8_t v_failIfUnchanged_5018_, lean_object* v_a_5019_, lean_object* v_a_5020_, lean_object* v_a_5021_, lean_object* v_a_5022_){
_start:
{
lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___f_5026_; lean_object* v___x_5027_; 
v___x_5024_ = lean_obj_once(&l_Lean_MVarId_letToHave___closed__1, &l_Lean_MVarId_letToHave___closed__1_once, _init_l_Lean_MVarId_letToHave___closed__1);
v___x_5025_ = lean_box(v_failIfUnchanged_5018_);
lean_inc(v_mvarId_5017_);
v___f_5026_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHave___lam__0___boxed), 8, 3);
lean_closure_set(v___f_5026_, 0, v_mvarId_5017_);
lean_closure_set(v___f_5026_, 1, v___x_5024_);
lean_closure_set(v___f_5026_, 2, v___x_5025_);
v___x_5027_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_5017_, v___f_5026_, v_a_5019_, v_a_5020_, v_a_5021_, v_a_5022_);
return v___x_5027_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHave___boxed(lean_object* v_mvarId_5028_, lean_object* v_failIfUnchanged_5029_, lean_object* v_a_5030_, lean_object* v_a_5031_, lean_object* v_a_5032_, lean_object* v_a_5033_, lean_object* v_a_5034_){
_start:
{
uint8_t v_failIfUnchanged_boxed_5035_; lean_object* v_res_5036_; 
v_failIfUnchanged_boxed_5035_ = lean_unbox(v_failIfUnchanged_5029_);
v_res_5036_ = l_Lean_MVarId_letToHave(v_mvarId_5028_, v_failIfUnchanged_boxed_5035_, v_a_5030_, v_a_5031_, v_a_5032_, v_a_5033_);
lean_dec(v_a_5033_);
lean_dec_ref(v_a_5032_);
lean_dec(v_a_5031_);
lean_dec_ref(v_a_5030_);
return v_res_5036_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0(lean_object* v_mvarId_5037_, lean_object* v___x_5038_, lean_object* v_fvarId_5039_, uint8_t v_failIfUnchanged_5040_, lean_object* v___y_5041_, lean_object* v___y_5042_, lean_object* v___y_5043_, lean_object* v___y_5044_){
_start:
{
lean_object* v___x_5046_; 
lean_inc(v___x_5038_);
lean_inc(v_mvarId_5037_);
v___x_5046_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_5037_, v___x_5038_, v___y_5041_, v___y_5042_, v___y_5043_, v___y_5044_);
if (lean_obj_tag(v___x_5046_) == 0)
{
lean_object* v___x_5047_; 
lean_dec_ref(v___x_5046_);
lean_inc(v_fvarId_5039_);
v___x_5047_ = l_Lean_FVarId_getType___redArg(v_fvarId_5039_, v___y_5041_, v___y_5043_, v___y_5044_);
if (lean_obj_tag(v___x_5047_) == 0)
{
lean_object* v_a_5048_; lean_object* v___x_5049_; 
v_a_5048_ = lean_ctor_get(v___x_5047_, 0);
lean_inc_n(v_a_5048_, 2);
lean_dec_ref(v___x_5047_);
v___x_5049_ = l_Lean_Meta_letToHave(v_a_5048_, v___y_5041_, v___y_5042_, v___y_5043_, v___y_5044_);
if (lean_obj_tag(v___x_5049_) == 0)
{
if (v_failIfUnchanged_5040_ == 0)
{
lean_object* v_a_5050_; lean_object* v___x_5051_; 
lean_dec(v_a_5048_);
lean_dec(v___x_5038_);
v_a_5050_ = lean_ctor_get(v___x_5049_, 0);
lean_inc(v_a_5050_);
lean_dec_ref(v___x_5049_);
v___x_5051_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_5037_, v_fvarId_5039_, v_a_5050_, v___y_5041_, v___y_5042_, v___y_5043_, v___y_5044_);
return v___x_5051_;
}
else
{
lean_object* v_a_5052_; uint8_t v___x_5053_; 
v_a_5052_ = lean_ctor_get(v___x_5049_, 0);
lean_inc(v_a_5052_);
lean_dec_ref(v___x_5049_);
v___x_5053_ = lean_expr_eqv(v_a_5048_, v_a_5052_);
lean_dec(v_a_5048_);
if (v___x_5053_ == 0)
{
lean_object* v___x_5054_; 
lean_dec(v___x_5038_);
v___x_5054_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_5037_, v_fvarId_5039_, v_a_5052_, v___y_5041_, v___y_5042_, v___y_5043_, v___y_5044_);
return v___x_5054_;
}
else
{
lean_object* v___x_5055_; 
lean_inc(v_mvarId_5037_);
v___x_5055_ = l___private_Lean_Meta_Tactic_Lets_0__throwMadeNoProgress___redArg(v___x_5038_, v_mvarId_5037_, v___y_5041_, v___y_5042_, v___y_5043_, v___y_5044_);
if (lean_obj_tag(v___x_5055_) == 0)
{
lean_object* v___x_5056_; 
lean_dec_ref(v___x_5055_);
v___x_5056_ = l_Lean_MVarId_replaceLocalDeclDefEq(v_mvarId_5037_, v_fvarId_5039_, v_a_5052_, v___y_5041_, v___y_5042_, v___y_5043_, v___y_5044_);
return v___x_5056_;
}
else
{
lean_object* v_a_5057_; lean_object* v___x_5059_; uint8_t v_isShared_5060_; uint8_t v_isSharedCheck_5064_; 
lean_dec(v_a_5052_);
lean_dec(v_fvarId_5039_);
lean_dec(v_mvarId_5037_);
v_a_5057_ = lean_ctor_get(v___x_5055_, 0);
v_isSharedCheck_5064_ = !lean_is_exclusive(v___x_5055_);
if (v_isSharedCheck_5064_ == 0)
{
v___x_5059_ = v___x_5055_;
v_isShared_5060_ = v_isSharedCheck_5064_;
goto v_resetjp_5058_;
}
else
{
lean_inc(v_a_5057_);
lean_dec(v___x_5055_);
v___x_5059_ = lean_box(0);
v_isShared_5060_ = v_isSharedCheck_5064_;
goto v_resetjp_5058_;
}
v_resetjp_5058_:
{
lean_object* v___x_5062_; 
if (v_isShared_5060_ == 0)
{
v___x_5062_ = v___x_5059_;
goto v_reusejp_5061_;
}
else
{
lean_object* v_reuseFailAlloc_5063_; 
v_reuseFailAlloc_5063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5063_, 0, v_a_5057_);
v___x_5062_ = v_reuseFailAlloc_5063_;
goto v_reusejp_5061_;
}
v_reusejp_5061_:
{
return v___x_5062_;
}
}
}
}
}
}
else
{
lean_object* v_a_5065_; lean_object* v___x_5067_; uint8_t v_isShared_5068_; uint8_t v_isSharedCheck_5072_; 
lean_dec(v_a_5048_);
lean_dec(v_fvarId_5039_);
lean_dec(v___x_5038_);
lean_dec(v_mvarId_5037_);
v_a_5065_ = lean_ctor_get(v___x_5049_, 0);
v_isSharedCheck_5072_ = !lean_is_exclusive(v___x_5049_);
if (v_isSharedCheck_5072_ == 0)
{
v___x_5067_ = v___x_5049_;
v_isShared_5068_ = v_isSharedCheck_5072_;
goto v_resetjp_5066_;
}
else
{
lean_inc(v_a_5065_);
lean_dec(v___x_5049_);
v___x_5067_ = lean_box(0);
v_isShared_5068_ = v_isSharedCheck_5072_;
goto v_resetjp_5066_;
}
v_resetjp_5066_:
{
lean_object* v___x_5070_; 
if (v_isShared_5068_ == 0)
{
v___x_5070_ = v___x_5067_;
goto v_reusejp_5069_;
}
else
{
lean_object* v_reuseFailAlloc_5071_; 
v_reuseFailAlloc_5071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5071_, 0, v_a_5065_);
v___x_5070_ = v_reuseFailAlloc_5071_;
goto v_reusejp_5069_;
}
v_reusejp_5069_:
{
return v___x_5070_;
}
}
}
}
else
{
lean_object* v_a_5073_; lean_object* v___x_5075_; uint8_t v_isShared_5076_; uint8_t v_isSharedCheck_5080_; 
lean_dec(v_fvarId_5039_);
lean_dec(v___x_5038_);
lean_dec(v_mvarId_5037_);
v_a_5073_ = lean_ctor_get(v___x_5047_, 0);
v_isSharedCheck_5080_ = !lean_is_exclusive(v___x_5047_);
if (v_isSharedCheck_5080_ == 0)
{
v___x_5075_ = v___x_5047_;
v_isShared_5076_ = v_isSharedCheck_5080_;
goto v_resetjp_5074_;
}
else
{
lean_inc(v_a_5073_);
lean_dec(v___x_5047_);
v___x_5075_ = lean_box(0);
v_isShared_5076_ = v_isSharedCheck_5080_;
goto v_resetjp_5074_;
}
v_resetjp_5074_:
{
lean_object* v___x_5078_; 
if (v_isShared_5076_ == 0)
{
v___x_5078_ = v___x_5075_;
goto v_reusejp_5077_;
}
else
{
lean_object* v_reuseFailAlloc_5079_; 
v_reuseFailAlloc_5079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5079_, 0, v_a_5073_);
v___x_5078_ = v_reuseFailAlloc_5079_;
goto v_reusejp_5077_;
}
v_reusejp_5077_:
{
return v___x_5078_;
}
}
}
}
else
{
lean_object* v_a_5081_; lean_object* v___x_5083_; uint8_t v_isShared_5084_; uint8_t v_isSharedCheck_5088_; 
lean_dec(v_fvarId_5039_);
lean_dec(v___x_5038_);
lean_dec(v_mvarId_5037_);
v_a_5081_ = lean_ctor_get(v___x_5046_, 0);
v_isSharedCheck_5088_ = !lean_is_exclusive(v___x_5046_);
if (v_isSharedCheck_5088_ == 0)
{
v___x_5083_ = v___x_5046_;
v_isShared_5084_ = v_isSharedCheck_5088_;
goto v_resetjp_5082_;
}
else
{
lean_inc(v_a_5081_);
lean_dec(v___x_5046_);
v___x_5083_ = lean_box(0);
v_isShared_5084_ = v_isSharedCheck_5088_;
goto v_resetjp_5082_;
}
v_resetjp_5082_:
{
lean_object* v___x_5086_; 
if (v_isShared_5084_ == 0)
{
v___x_5086_ = v___x_5083_;
goto v_reusejp_5085_;
}
else
{
lean_object* v_reuseFailAlloc_5087_; 
v_reuseFailAlloc_5087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5087_, 0, v_a_5081_);
v___x_5086_ = v_reuseFailAlloc_5087_;
goto v_reusejp_5085_;
}
v_reusejp_5085_:
{
return v___x_5086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed(lean_object* v_mvarId_5089_, lean_object* v___x_5090_, lean_object* v_fvarId_5091_, lean_object* v_failIfUnchanged_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_, lean_object* v___y_5095_, lean_object* v___y_5096_, lean_object* v___y_5097_){
_start:
{
uint8_t v_failIfUnchanged_boxed_5098_; lean_object* v_res_5099_; 
v_failIfUnchanged_boxed_5098_ = lean_unbox(v_failIfUnchanged_5092_);
v_res_5099_ = l_Lean_MVarId_letToHaveLocalDecl___lam__0(v_mvarId_5089_, v___x_5090_, v_fvarId_5091_, v_failIfUnchanged_boxed_5098_, v___y_5093_, v___y_5094_, v___y_5095_, v___y_5096_);
lean_dec(v___y_5096_);
lean_dec_ref(v___y_5095_);
lean_dec(v___y_5094_);
lean_dec_ref(v___y_5093_);
return v_res_5099_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl(lean_object* v_mvarId_5100_, lean_object* v_fvarId_5101_, uint8_t v_failIfUnchanged_5102_, lean_object* v_a_5103_, lean_object* v_a_5104_, lean_object* v_a_5105_, lean_object* v_a_5106_){
_start:
{
lean_object* v___x_5108_; lean_object* v___x_5109_; lean_object* v___f_5110_; lean_object* v___x_5111_; 
v___x_5108_ = lean_obj_once(&l_Lean_MVarId_letToHave___closed__1, &l_Lean_MVarId_letToHave___closed__1_once, _init_l_Lean_MVarId_letToHave___closed__1);
v___x_5109_ = lean_box(v_failIfUnchanged_5102_);
lean_inc(v_mvarId_5100_);
v___f_5110_ = lean_alloc_closure((void*)(l_Lean_MVarId_letToHaveLocalDecl___lam__0___boxed), 9, 4);
lean_closure_set(v___f_5110_, 0, v_mvarId_5100_);
lean_closure_set(v___f_5110_, 1, v___x_5108_);
lean_closure_set(v___f_5110_, 2, v_fvarId_5101_);
lean_closure_set(v___f_5110_, 3, v___x_5109_);
v___x_5111_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_extractLets_spec__3___redArg(v_mvarId_5100_, v___f_5110_, v_a_5103_, v_a_5104_, v_a_5105_, v_a_5106_);
return v___x_5111_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_letToHaveLocalDecl___boxed(lean_object* v_mvarId_5112_, lean_object* v_fvarId_5113_, lean_object* v_failIfUnchanged_5114_, lean_object* v_a_5115_, lean_object* v_a_5116_, lean_object* v_a_5117_, lean_object* v_a_5118_, lean_object* v_a_5119_){
_start:
{
uint8_t v_failIfUnchanged_boxed_5120_; lean_object* v_res_5121_; 
v_failIfUnchanged_boxed_5120_ = lean_unbox(v_failIfUnchanged_5114_);
v_res_5121_ = l_Lean_MVarId_letToHaveLocalDecl(v_mvarId_5112_, v_fvarId_5113_, v_failIfUnchanged_boxed_5120_, v_a_5115_, v_a_5116_, v_a_5117_, v_a_5118_);
lean_dec(v_a_5118_);
lean_dec_ref(v_a_5117_);
lean_dec(v_a_5116_);
lean_dec_ref(v_a_5115_);
return v_res_5121_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_LetToHave(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_ExtractLets_instInhabitedState_default = _init_l_Lean_Meta_ExtractLets_instInhabitedState_default();
lean_mark_persistent(l_Lean_Meta_ExtractLets_instInhabitedState_default);
l_Lean_Meta_ExtractLets_instInhabitedState = _init_l_Lean_Meta_ExtractLets_instInhabitedState();
lean_mark_persistent(l_Lean_Meta_ExtractLets_instInhabitedState);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Lean_Meta_LetToHave(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Lets(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Lets(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Lets(builtin);
}
#ifdef __cplusplus
}
#endif
