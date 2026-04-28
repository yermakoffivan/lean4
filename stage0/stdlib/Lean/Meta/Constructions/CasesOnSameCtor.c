// Lean compiler output
// Module: Lean.Meta.Constructions.CasesOnSameCtor
// Imports: public import Lean.Meta.Basic import Lean.Meta.CompletionName import Lean.Meta.Constructions.CtorIdx import Lean.Meta.Constructions.CtorElim import Lean.Elab.App import Lean.Meta.SameCtorUtils
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
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_withNewEqs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* l_Lean_Meta_inferArgumentTypesN(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_elabAsElim;
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_EnvExtension_asyncMayModify___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_asyncPrefix_x3f(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
extern lean_object* l_Lean_MessageData_nil;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Match_Extension_addMatcherInfo(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_setInlineAttribute(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_enableRealizationsForConst(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_compileDecl(lean_object*, uint8_t, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withSharedCtorIndices___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
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
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_mkCtorIdxName(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_mkConstructorElimName(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_markMatcherLike(lean_object*, lean_object*);
lean_object* l_Lean_markAuxRecursor(lean_object*, lean_object*);
lean_object* l_Lean_Meta_addToCompletionBlackList(lean_object*, lean_object*);
lean_object* l_Lean_addProtected(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed(lean_object**);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed(lean_object**);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1___boxed(lean_object**);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2___boxed(lean_object**);
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5___boxed(lean_object**);
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__4;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__5;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__6;
static lean_once_cell_t l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__7;
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0;
static lean_once_cell_t l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__0;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__1;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__2;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__3;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__4;
static lean_once_cell_t l_Lean_mkCasesOnSameCtorHet___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtorHet___closed__5;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___lam__3___closed__0;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11___boxed(lean_object**);
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__0;
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__1;
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__2;
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__3;
static lean_once_cell_t l_Lean_mkCasesOnSameCtor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkCasesOnSameCtor___closed__4;
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_){
_start:
{
lean_object* v___f_27_; uint8_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___f_27_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_27_, 0, v_k_20_);
v___x_28_ = 0;
v___x_29_ = lean_box(0);
v___x_30_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_28_, v___x_29_, v_type_19_, v___f_27_, v_cleanupAnnotations_21_, v___x_28_, v___y_22_, v___y_23_, v___y_24_, v___y_25_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___boxed(lean_object* v_type_47_, lean_object* v_k_48_, lean_object* v_cleanupAnnotations_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; lean_object* v_res_56_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_49_);
v_res_56_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_type_47_, v_k_48_, v_cleanupAnnotations_boxed_55_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(lean_object* v_00_u03b1_57_, lean_object* v_type_58_, lean_object* v_k_59_, uint8_t v_cleanupAnnotations_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_type_58_, v_k_59_, v_cleanupAnnotations_60_, v___y_61_, v___y_62_, v___y_63_, v___y_64_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___boxed(lean_object* v_00_u03b1_67_, lean_object* v_type_68_, lean_object* v_k_69_, lean_object* v_cleanupAnnotations_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_76_; lean_object* v_res_77_; 
v_cleanupAnnotations_boxed_76_ = lean_unbox(v_cleanupAnnotations_70_);
v_res_77_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3(v_00_u03b1_67_, v_type_68_, v_k_69_, v_cleanupAnnotations_boxed_76_, v___y_71_, v___y_72_, v___y_73_, v___y_74_);
lean_dec(v___y_74_);
lean_dec_ref(v___y_73_);
lean_dec(v___y_72_);
lean_dec_ref(v___y_71_);
return v_res_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(lean_object* v_k_78_, lean_object* v_b_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_){
_start:
{
lean_object* v___x_85_; 
lean_inc(v___y_83_);
lean_inc_ref(v___y_82_);
lean_inc(v___y_81_);
lean_inc_ref(v___y_80_);
v___x_85_ = lean_apply_6(v_k_78_, v_b_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, lean_box(0));
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed(lean_object* v_k_86_, lean_object* v_b_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0(v_k_86_, v_b_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(lean_object* v_name_94_, uint8_t v_bi_95_, lean_object* v_type_96_, lean_object* v_k_97_, uint8_t v_kind_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___f_104_; lean_object* v___x_105_; 
v___f_104_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_104_, 0, v_k_97_);
v___x_105_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_94_, v_bi_95_, v_type_96_, v___f_104_, v_kind_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
if (lean_obj_tag(v___x_105_) == 0)
{
lean_object* v_a_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_113_; 
v_a_106_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_113_ == 0)
{
v___x_108_ = v___x_105_;
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_a_106_);
lean_dec(v___x_105_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_113_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___x_111_; 
if (v_isShared_109_ == 0)
{
v___x_111_ = v___x_108_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v_a_106_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_121_; 
v_a_114_ = lean_ctor_get(v___x_105_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_105_);
if (v_isSharedCheck_121_ == 0)
{
v___x_116_ = v___x_105_;
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_105_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_121_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
lean_object* v___x_119_; 
if (v_isShared_117_ == 0)
{
v___x_119_ = v___x_116_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_114_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg___boxed(lean_object* v_name_122_, lean_object* v_bi_123_, lean_object* v_type_124_, lean_object* v_k_125_, lean_object* v_kind_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_){
_start:
{
uint8_t v_bi_boxed_132_; uint8_t v_kind_boxed_133_; lean_object* v_res_134_; 
v_bi_boxed_132_ = lean_unbox(v_bi_123_);
v_kind_boxed_133_ = lean_unbox(v_kind_126_);
v_res_134_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_122_, v_bi_boxed_132_, v_type_124_, v_k_125_, v_kind_boxed_133_, v___y_127_, v___y_128_, v___y_129_, v___y_130_);
lean_dec(v___y_130_);
lean_dec_ref(v___y_129_);
lean_dec(v___y_128_);
lean_dec_ref(v___y_127_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(lean_object* v_00_u03b1_135_, lean_object* v_name_136_, uint8_t v_bi_137_, lean_object* v_type_138_, lean_object* v_k_139_, uint8_t v_kind_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_){
_start:
{
lean_object* v___x_146_; 
v___x_146_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_136_, v_bi_137_, v_type_138_, v_k_139_, v_kind_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___boxed(lean_object* v_00_u03b1_147_, lean_object* v_name_148_, lean_object* v_bi_149_, lean_object* v_type_150_, lean_object* v_k_151_, lean_object* v_kind_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_){
_start:
{
uint8_t v_bi_boxed_158_; uint8_t v_kind_boxed_159_; lean_object* v_res_160_; 
v_bi_boxed_158_ = lean_unbox(v_bi_149_);
v_kind_boxed_159_ = lean_unbox(v_kind_152_);
v_res_160_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8(v_00_u03b1_147_, v_name_148_, v_bi_boxed_158_, v_type_150_, v_k_151_, v_kind_boxed_159_, v___y_153_, v___y_154_, v___y_155_, v___y_156_);
lean_dec(v___y_156_);
lean_dec_ref(v___y_155_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(lean_object* v_type_161_, lean_object* v_maxFVars_x3f_162_, lean_object* v_k_163_, uint8_t v_cleanupAnnotations_164_, uint8_t v_whnfType_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v___f_171_; lean_object* v___x_172_; 
v___f_171_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_171_, 0, v_k_163_);
v___x_172_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_161_, v_maxFVars_x3f_162_, v___f_171_, v_cleanupAnnotations_164_, v_whnfType_165_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg___boxed(lean_object* v_type_189_, lean_object* v_maxFVars_x3f_190_, lean_object* v_k_191_, lean_object* v_cleanupAnnotations_192_, lean_object* v_whnfType_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_199_; uint8_t v_whnfType_boxed_200_; lean_object* v_res_201_; 
v_cleanupAnnotations_boxed_199_ = lean_unbox(v_cleanupAnnotations_192_);
v_whnfType_boxed_200_ = lean_unbox(v_whnfType_193_);
v_res_201_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_189_, v_maxFVars_x3f_190_, v_k_191_, v_cleanupAnnotations_boxed_199_, v_whnfType_boxed_200_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(lean_object* v_00_u03b1_202_, lean_object* v_type_203_, lean_object* v_maxFVars_x3f_204_, lean_object* v_k_205_, uint8_t v_cleanupAnnotations_206_, uint8_t v_whnfType_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_203_, v_maxFVars_x3f_204_, v_k_205_, v_cleanupAnnotations_206_, v_whnfType_207_, v___y_208_, v___y_209_, v___y_210_, v___y_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___boxed(lean_object* v_00_u03b1_214_, lean_object* v_type_215_, lean_object* v_maxFVars_x3f_216_, lean_object* v_k_217_, lean_object* v_cleanupAnnotations_218_, lean_object* v_whnfType_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_225_; uint8_t v_whnfType_boxed_226_; lean_object* v_res_227_; 
v_cleanupAnnotations_boxed_225_ = lean_unbox(v_cleanupAnnotations_218_);
v_whnfType_boxed_226_ = lean_unbox(v_whnfType_219_);
v_res_227_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9(v_00_u03b1_214_, v_type_215_, v_maxFVars_x3f_216_, v_k_217_, v_cleanupAnnotations_boxed_225_, v_whnfType_boxed_226_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(lean_object* v_name_228_, lean_object* v_levelParams_229_, lean_object* v_type_230_, lean_object* v_value_231_, lean_object* v_hints_232_, lean_object* v___y_233_){
_start:
{
lean_object* v___x_235_; uint8_t v___y_237_; uint8_t v___y_244_; lean_object* v_env_247_; uint8_t v___x_248_; 
v___x_235_ = lean_st_ref_get(v___y_233_);
v_env_247_ = lean_ctor_get(v___x_235_, 0);
lean_inc_ref_n(v_env_247_, 2);
lean_dec(v___x_235_);
v___x_248_ = l_Lean_Environment_hasUnsafe(v_env_247_, v_type_230_);
if (v___x_248_ == 0)
{
uint8_t v___x_249_; 
v___x_249_ = l_Lean_Environment_hasUnsafe(v_env_247_, v_value_231_);
v___y_244_ = v___x_249_;
goto v___jp_243_;
}
else
{
lean_dec_ref(v_env_247_);
v___y_244_ = v___x_248_;
goto v___jp_243_;
}
v___jp_236_:
{
lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; 
lean_inc(v_name_228_);
v___x_238_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_238_, 0, v_name_228_);
lean_ctor_set(v___x_238_, 1, v_levelParams_229_);
lean_ctor_set(v___x_238_, 2, v_type_230_);
v___x_239_ = lean_box(0);
v___x_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_240_, 0, v_name_228_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_241_, 0, v___x_238_);
lean_ctor_set(v___x_241_, 1, v_value_231_);
lean_ctor_set(v___x_241_, 2, v_hints_232_);
lean_ctor_set(v___x_241_, 3, v___x_240_);
lean_ctor_set_uint8(v___x_241_, sizeof(void*)*4, v___y_237_);
v___x_242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_242_, 0, v___x_241_);
return v___x_242_;
}
v___jp_243_:
{
if (v___y_244_ == 0)
{
uint8_t v___x_245_; 
v___x_245_ = 1;
v___y_237_ = v___x_245_;
goto v___jp_236_;
}
else
{
uint8_t v___x_246_; 
v___x_246_ = 0;
v___y_237_ = v___x_246_;
goto v___jp_236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg___boxed(lean_object* v_name_250_, lean_object* v_levelParams_251_, lean_object* v_type_252_, lean_object* v_value_253_, lean_object* v_hints_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_name_250_, v_levelParams_251_, v_type_252_, v_value_253_, v_hints_254_, v___y_255_);
lean_dec(v___y_255_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(lean_object* v_name_258_, lean_object* v_levelParams_259_, lean_object* v_type_260_, lean_object* v_value_261_, lean_object* v_hints_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_name_258_, v_levelParams_259_, v_type_260_, v_value_261_, v_hints_262_, v___y_266_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___boxed(lean_object* v_name_269_, lean_object* v_levelParams_270_, lean_object* v_type_271_, lean_object* v_value_272_, lean_object* v_hints_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10(v_name_269_, v_levelParams_270_, v_type_271_, v_value_272_, v_hints_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(lean_object* v___y_280_, uint8_t v_isExporting_281_, lean_object* v___x_282_, lean_object* v___y_283_, lean_object* v___x_284_, lean_object* v_a_x3f_285_){
_start:
{
lean_object* v___x_287_; lean_object* v_env_288_; lean_object* v_nextMacroScope_289_; lean_object* v_ngen_290_; lean_object* v_auxDeclNGen_291_; lean_object* v_traceState_292_; lean_object* v_messages_293_; lean_object* v_infoState_294_; lean_object* v_snapshotTasks_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_321_; 
v___x_287_ = lean_st_ref_take(v___y_280_);
v_env_288_ = lean_ctor_get(v___x_287_, 0);
v_nextMacroScope_289_ = lean_ctor_get(v___x_287_, 1);
v_ngen_290_ = lean_ctor_get(v___x_287_, 2);
v_auxDeclNGen_291_ = lean_ctor_get(v___x_287_, 3);
v_traceState_292_ = lean_ctor_get(v___x_287_, 4);
v_messages_293_ = lean_ctor_get(v___x_287_, 6);
v_infoState_294_ = lean_ctor_get(v___x_287_, 7);
v_snapshotTasks_295_ = lean_ctor_get(v___x_287_, 8);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_287_);
if (v_isSharedCheck_321_ == 0)
{
lean_object* v_unused_322_; 
v_unused_322_ = lean_ctor_get(v___x_287_, 5);
lean_dec(v_unused_322_);
v___x_297_ = v___x_287_;
v_isShared_298_ = v_isSharedCheck_321_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_snapshotTasks_295_);
lean_inc(v_infoState_294_);
lean_inc(v_messages_293_);
lean_inc(v_traceState_292_);
lean_inc(v_auxDeclNGen_291_);
lean_inc(v_ngen_290_);
lean_inc(v_nextMacroScope_289_);
lean_inc(v_env_288_);
lean_dec(v___x_287_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_321_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; lean_object* v___x_301_; 
v___x_299_ = l_Lean_Environment_setExporting(v_env_288_, v_isExporting_281_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 5, v___x_282_);
lean_ctor_set(v___x_297_, 0, v___x_299_);
v___x_301_ = v___x_297_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_nextMacroScope_289_);
lean_ctor_set(v_reuseFailAlloc_320_, 2, v_ngen_290_);
lean_ctor_set(v_reuseFailAlloc_320_, 3, v_auxDeclNGen_291_);
lean_ctor_set(v_reuseFailAlloc_320_, 4, v_traceState_292_);
lean_ctor_set(v_reuseFailAlloc_320_, 5, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_320_, 6, v_messages_293_);
lean_ctor_set(v_reuseFailAlloc_320_, 7, v_infoState_294_);
lean_ctor_set(v_reuseFailAlloc_320_, 8, v_snapshotTasks_295_);
v___x_301_ = v_reuseFailAlloc_320_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v_mctx_305_; lean_object* v_zetaDeltaFVarIds_306_; lean_object* v_postponed_307_; lean_object* v_diag_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_318_; 
v___x_302_ = lean_st_ref_set(v___y_280_, v___x_301_);
v___x_303_ = lean_st_ref_get(v___y_280_);
lean_dec(v___x_303_);
v___x_304_ = lean_st_ref_take(v___y_283_);
v_mctx_305_ = lean_ctor_get(v___x_304_, 0);
v_zetaDeltaFVarIds_306_ = lean_ctor_get(v___x_304_, 2);
v_postponed_307_ = lean_ctor_get(v___x_304_, 3);
v_diag_308_ = lean_ctor_get(v___x_304_, 4);
v_isSharedCheck_318_ = !lean_is_exclusive(v___x_304_);
if (v_isSharedCheck_318_ == 0)
{
lean_object* v_unused_319_; 
v_unused_319_ = lean_ctor_get(v___x_304_, 1);
lean_dec(v_unused_319_);
v___x_310_ = v___x_304_;
v_isShared_311_ = v_isSharedCheck_318_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_diag_308_);
lean_inc(v_postponed_307_);
lean_inc(v_zetaDeltaFVarIds_306_);
lean_inc(v_mctx_305_);
lean_dec(v___x_304_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_318_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
lean_ctor_set(v___x_310_, 1, v___x_284_);
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_317_; 
v_reuseFailAlloc_317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_317_, 0, v_mctx_305_);
lean_ctor_set(v_reuseFailAlloc_317_, 1, v___x_284_);
lean_ctor_set(v_reuseFailAlloc_317_, 2, v_zetaDeltaFVarIds_306_);
lean_ctor_set(v_reuseFailAlloc_317_, 3, v_postponed_307_);
lean_ctor_set(v_reuseFailAlloc_317_, 4, v_diag_308_);
v___x_313_ = v_reuseFailAlloc_317_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_314_ = lean_st_ref_set(v___y_283_, v___x_313_);
v___x_315_ = lean_box(0);
v___x_316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_316_, 0, v___x_315_);
return v___x_316_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0___boxed(lean_object* v___y_323_, lean_object* v_isExporting_324_, lean_object* v___x_325_, lean_object* v___y_326_, lean_object* v___x_327_, lean_object* v_a_x3f_328_, lean_object* v___y_329_){
_start:
{
uint8_t v_isExporting_boxed_330_; lean_object* v_res_331_; 
v_isExporting_boxed_330_ = lean_unbox(v_isExporting_324_);
v_res_331_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_323_, v_isExporting_boxed_330_, v___x_325_, v___y_326_, v___x_327_, v_a_x3f_328_);
lean_dec(v_a_x3f_328_);
lean_dec(v___y_326_);
lean_dec(v___y_323_);
return v_res_331_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0(void){
_start:
{
lean_object* v___x_332_; 
v___x_332_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_332_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; 
v___x_333_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__0);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
return v___x_334_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2(void){
_start:
{
lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_335_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1);
v___x_336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
return v___x_336_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_337_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__1);
v___x_338_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_338_, 0, v___x_337_);
lean_ctor_set(v___x_338_, 1, v___x_337_);
lean_ctor_set(v___x_338_, 2, v___x_337_);
lean_ctor_set(v___x_338_, 3, v___x_337_);
lean_ctor_set(v___x_338_, 4, v___x_337_);
lean_ctor_set(v___x_338_, 5, v___x_337_);
return v___x_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(lean_object* v_x_339_, uint8_t v_isExporting_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v___x_346_; lean_object* v_env_347_; uint8_t v_isExporting_348_; lean_object* v___x_349_; lean_object* v_env_350_; lean_object* v_nextMacroScope_351_; lean_object* v_ngen_352_; lean_object* v_auxDeclNGen_353_; lean_object* v_traceState_354_; lean_object* v_messages_355_; lean_object* v_infoState_356_; lean_object* v_snapshotTasks_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_412_; 
v___x_346_ = lean_st_ref_get(v___y_344_);
v_env_347_ = lean_ctor_get(v___x_346_, 0);
lean_inc_ref(v_env_347_);
lean_dec(v___x_346_);
v_isExporting_348_ = lean_ctor_get_uint8(v_env_347_, sizeof(void*)*8);
lean_dec_ref(v_env_347_);
v___x_349_ = lean_st_ref_take(v___y_344_);
v_env_350_ = lean_ctor_get(v___x_349_, 0);
v_nextMacroScope_351_ = lean_ctor_get(v___x_349_, 1);
v_ngen_352_ = lean_ctor_get(v___x_349_, 2);
v_auxDeclNGen_353_ = lean_ctor_get(v___x_349_, 3);
v_traceState_354_ = lean_ctor_get(v___x_349_, 4);
v_messages_355_ = lean_ctor_get(v___x_349_, 6);
v_infoState_356_ = lean_ctor_get(v___x_349_, 7);
v_snapshotTasks_357_ = lean_ctor_get(v___x_349_, 8);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_349_);
if (v_isSharedCheck_412_ == 0)
{
lean_object* v_unused_413_; 
v_unused_413_ = lean_ctor_get(v___x_349_, 5);
lean_dec(v_unused_413_);
v___x_359_ = v___x_349_;
v_isShared_360_ = v_isSharedCheck_412_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_snapshotTasks_357_);
lean_inc(v_infoState_356_);
lean_inc(v_messages_355_);
lean_inc(v_traceState_354_);
lean_inc(v_auxDeclNGen_353_);
lean_inc(v_ngen_352_);
lean_inc(v_nextMacroScope_351_);
lean_inc(v_env_350_);
lean_dec(v___x_349_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_412_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_364_; 
v___x_361_ = l_Lean_Environment_setExporting(v_env_350_, v_isExporting_340_);
v___x_362_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 5, v___x_362_);
lean_ctor_set(v___x_359_, 0, v___x_361_);
v___x_364_ = v___x_359_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_361_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v_nextMacroScope_351_);
lean_ctor_set(v_reuseFailAlloc_411_, 2, v_ngen_352_);
lean_ctor_set(v_reuseFailAlloc_411_, 3, v_auxDeclNGen_353_);
lean_ctor_set(v_reuseFailAlloc_411_, 4, v_traceState_354_);
lean_ctor_set(v_reuseFailAlloc_411_, 5, v___x_362_);
lean_ctor_set(v_reuseFailAlloc_411_, 6, v_messages_355_);
lean_ctor_set(v_reuseFailAlloc_411_, 7, v_infoState_356_);
lean_ctor_set(v_reuseFailAlloc_411_, 8, v_snapshotTasks_357_);
v___x_364_ = v_reuseFailAlloc_411_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v_mctx_368_; lean_object* v_zetaDeltaFVarIds_369_; lean_object* v_postponed_370_; lean_object* v_diag_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_409_; 
v___x_365_ = lean_st_ref_set(v___y_344_, v___x_364_);
v___x_366_ = lean_st_ref_get(v___y_344_);
lean_dec(v___x_366_);
v___x_367_ = lean_st_ref_take(v___y_342_);
v_mctx_368_ = lean_ctor_get(v___x_367_, 0);
v_zetaDeltaFVarIds_369_ = lean_ctor_get(v___x_367_, 2);
v_postponed_370_ = lean_ctor_get(v___x_367_, 3);
v_diag_371_ = lean_ctor_get(v___x_367_, 4);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_367_);
if (v_isSharedCheck_409_ == 0)
{
lean_object* v_unused_410_; 
v_unused_410_ = lean_ctor_get(v___x_367_, 1);
lean_dec(v_unused_410_);
v___x_373_ = v___x_367_;
v_isShared_374_ = v_isSharedCheck_409_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_diag_371_);
lean_inc(v_postponed_370_);
lean_inc(v_zetaDeltaFVarIds_369_);
lean_inc(v_mctx_368_);
lean_dec(v___x_367_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_409_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; lean_object* v___x_377_; 
v___x_375_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_374_ == 0)
{
lean_ctor_set(v___x_373_, 1, v___x_375_);
v___x_377_ = v___x_373_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_mctx_368_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v___x_375_);
lean_ctor_set(v_reuseFailAlloc_408_, 2, v_zetaDeltaFVarIds_369_);
lean_ctor_set(v_reuseFailAlloc_408_, 3, v_postponed_370_);
lean_ctor_set(v_reuseFailAlloc_408_, 4, v_diag_371_);
v___x_377_ = v_reuseFailAlloc_408_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
lean_object* v___x_378_; lean_object* v_r_379_; 
v___x_378_ = lean_st_ref_set(v___y_342_, v___x_377_);
lean_inc(v___y_344_);
lean_inc_ref(v___y_343_);
lean_inc(v___y_342_);
lean_inc_ref(v___y_341_);
v_r_379_ = lean_apply_5(v_x_339_, v___y_341_, v___y_342_, v___y_343_, v___y_344_, lean_box(0));
if (lean_obj_tag(v_r_379_) == 0)
{
lean_object* v_a_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_396_; 
v_a_380_ = lean_ctor_get(v_r_379_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v_r_379_);
if (v_isSharedCheck_396_ == 0)
{
v___x_382_ = v_r_379_;
v_isShared_383_ = v_isSharedCheck_396_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_a_380_);
lean_dec(v_r_379_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_396_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v___x_385_; 
lean_inc(v_a_380_);
if (v_isShared_383_ == 0)
{
lean_ctor_set_tag(v___x_382_, 1);
v___x_385_ = v___x_382_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_a_380_);
v___x_385_ = v_reuseFailAlloc_395_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
lean_object* v___x_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
v___x_386_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_344_, v_isExporting_348_, v___x_362_, v___y_342_, v___x_375_, v___x_385_);
lean_dec_ref(v___x_385_);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_386_);
if (v_isSharedCheck_393_ == 0)
{
lean_object* v_unused_394_; 
v_unused_394_ = lean_ctor_get(v___x_386_, 0);
lean_dec(v_unused_394_);
v___x_388_ = v___x_386_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_dec(v___x_386_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
lean_ctor_set(v___x_388_, 0, v_a_380_);
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_380_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
}
else
{
lean_object* v_a_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_401_; uint8_t v_isShared_402_; uint8_t v_isSharedCheck_406_; 
v_a_397_ = lean_ctor_get(v_r_379_, 0);
lean_inc(v_a_397_);
lean_dec_ref(v_r_379_);
v___x_398_ = lean_box(0);
v___x_399_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___lam__0(v___y_344_, v_isExporting_348_, v___x_362_, v___y_342_, v___x_375_, v___x_398_);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_406_ == 0)
{
lean_object* v_unused_407_; 
v_unused_407_ = lean_ctor_get(v___x_399_, 0);
lean_dec(v_unused_407_);
v___x_401_ = v___x_399_;
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
else
{
lean_dec(v___x_399_);
v___x_401_ = lean_box(0);
v_isShared_402_ = v_isSharedCheck_406_;
goto v_resetjp_400_;
}
v_resetjp_400_:
{
lean_object* v___x_404_; 
if (v_isShared_402_ == 0)
{
lean_ctor_set_tag(v___x_401_, 1);
lean_ctor_set(v___x_401_, 0, v_a_397_);
v___x_404_ = v___x_401_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v_a_397_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___boxed(lean_object* v_x_414_, lean_object* v_isExporting_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_){
_start:
{
uint8_t v_isExporting_boxed_421_; lean_object* v_res_422_; 
v_isExporting_boxed_421_ = lean_unbox(v_isExporting_415_);
v_res_422_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v_x_414_, v_isExporting_boxed_421_, v___y_416_, v___y_417_, v___y_418_, v___y_419_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(lean_object* v_00_u03b1_423_, lean_object* v_x_424_, uint8_t v_isExporting_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v___x_431_; 
v___x_431_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v_x_424_, v_isExporting_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
return v___x_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___boxed(lean_object* v_00_u03b1_432_, lean_object* v_x_433_, lean_object* v_isExporting_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
uint8_t v_isExporting_boxed_440_; lean_object* v_res_441_; 
v_isExporting_boxed_440_ = lean_unbox(v_isExporting_434_);
v_res_441_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11(v_00_u03b1_432_, v_x_433_, v_isExporting_boxed_440_, v___y_435_, v___y_436_, v___y_437_, v___y_438_);
lean_dec(v___y_438_);
lean_dec_ref(v___y_437_);
lean_dec(v___y_436_);
lean_dec_ref(v___y_435_);
return v_res_441_;
}
}
static lean_object* _init_l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0(void){
_start:
{
lean_object* v___f_442_; 
v___f_442_ = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___lam__0___boxed), 5, 0);
return v___f_442_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(lean_object* v_msg_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v___f_449_; lean_object* v___x_15993__overap_450_; lean_object* v___x_451_; 
v___f_449_ = lean_obj_once(&l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0, &l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0_once, _init_l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___closed__0);
v___x_15993__overap_450_ = lean_panic_fn_borrowed(v___f_449_, v_msg_443_);
lean_inc(v___y_447_);
lean_inc_ref(v___y_446_);
lean_inc(v___y_445_);
lean_inc_ref(v___y_444_);
v___x_451_ = lean_apply_5(v___x_15993__overap_450_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, lean_box(0));
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14___boxed(lean_object* v_msg_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v_msg_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(lean_object* v___x_459_, lean_object* v_alts_460_, lean_object* v_j_461_, lean_object* v_zs1_462_, uint8_t v_isZero_463_, uint8_t v___x_464_, uint8_t v___x_465_, lean_object* v_zs2_466_, lean_object* v_x_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_473_ = lean_array_get_borrowed(v___x_459_, v_alts_460_, v_j_461_);
v___x_474_ = l_Array_append___redArg(v_zs1_462_, v_zs2_466_);
lean_inc(v___x_473_);
v___x_475_ = l_Lean_mkAppN(v___x_473_, v___x_474_);
lean_dec_ref(v___x_474_);
v___x_476_ = l_Lean_Meta_mkLambdaFVars(v_zs2_466_, v___x_475_, v_isZero_463_, v___x_464_, v_isZero_463_, v___x_464_, v___x_465_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed(lean_object* v___x_477_, lean_object* v_alts_478_, lean_object* v_j_479_, lean_object* v_zs1_480_, lean_object* v_isZero_481_, lean_object* v___x_482_, lean_object* v___x_483_, lean_object* v_zs2_484_, lean_object* v_x_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
uint8_t v_isZero_boxed_491_; uint8_t v___x_21102__boxed_492_; uint8_t v___x_21103__boxed_493_; lean_object* v_res_494_; 
v_isZero_boxed_491_ = lean_unbox(v_isZero_481_);
v___x_21102__boxed_492_ = lean_unbox(v___x_482_);
v___x_21103__boxed_493_ = lean_unbox(v___x_483_);
v_res_494_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0(v___x_477_, v_alts_478_, v_j_479_, v_zs1_480_, v_isZero_boxed_491_, v___x_21102__boxed_492_, v___x_21103__boxed_493_, v_zs2_484_, v_x_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec_ref(v_x_485_);
lean_dec_ref(v_zs2_484_);
lean_dec(v_j_479_);
lean_dec_ref(v_alts_478_);
lean_dec_ref(v___x_477_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(lean_object* v_name_495_, lean_object* v_type_496_, lean_object* v_k_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
uint8_t v___x_503_; uint8_t v___x_504_; lean_object* v___x_505_; 
v___x_503_ = 0;
v___x_504_ = 0;
v___x_505_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_name_495_, v___x_503_, v_type_496_, v_k_497_, v___x_504_, v___y_498_, v___y_499_, v___y_500_, v___y_501_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg___boxed(lean_object* v_name_506_, lean_object* v_type_507_, lean_object* v_k_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_){
_start:
{
lean_object* v_res_514_; 
v_res_514_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v_name_506_, v_type_507_, v_k_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec_ref(v___y_509_);
return v_res_514_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(lean_object* v___x_515_, lean_object* v_ism2_516_, lean_object* v_motive_517_, uint8_t v_isZero_518_, uint8_t v___x_519_, uint8_t v___x_520_, lean_object* v_a_521_, lean_object* v___f_522_, lean_object* v_zs1_523_, lean_object* v_val_524_, lean_object* v___x_525_, lean_object* v_indName_526_, lean_object* v___x_527_, lean_object* v___x_528_, lean_object* v_params_529_, lean_object* v___x_530_, lean_object* v_h_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_){
_start:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_537_ = l_Array_append___redArg(v___x_515_, v_ism2_516_);
v___x_538_ = l_Lean_mkAppN(v_motive_517_, v___x_537_);
lean_dec_ref(v___x_537_);
v___x_539_ = l_Lean_Meta_mkLambdaFVars(v_ism2_516_, v___x_538_, v_isZero_518_, v___x_519_, v_isZero_518_, v___x_519_, v___x_520_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_541_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_a_540_);
lean_dec_ref(v___x_539_);
v___x_541_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_521_, v___f_522_, v_isZero_518_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
if (lean_obj_tag(v___x_541_) == 0)
{
lean_object* v_a_542_; lean_object* v___y_544_; lean_object* v___x_547_; uint8_t v___x_548_; 
v_a_542_ = lean_ctor_get(v___x_541_, 0);
lean_inc(v_a_542_);
lean_dec_ref(v___x_541_);
v___x_547_ = l_Lean_InductiveVal_numCtors(v_val_524_);
v___x_548_ = lean_nat_dec_eq(v___x_547_, v___x_525_);
lean_dec(v___x_547_);
if (v___x_548_ == 0)
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; 
lean_dec(v___x_530_);
v___x_549_ = l_Lean_mkConstructorElimName(v_indName_526_, v___x_527_);
v___x_550_ = l_Lean_mkConst(v___x_549_, v___x_528_);
v___x_551_ = lean_mk_empty_array_with_capacity(v___x_525_);
v___x_552_ = lean_array_push(v___x_551_, v_a_540_);
v___x_553_ = l_Array_append___redArg(v_params_529_, v___x_552_);
lean_dec_ref(v___x_552_);
v___x_554_ = l_Array_append___redArg(v___x_553_, v_ism2_516_);
v___x_555_ = lean_unsigned_to_nat(2u);
v___x_556_ = lean_mk_empty_array_with_capacity(v___x_555_);
lean_inc_ref(v_h_531_);
v___x_557_ = lean_array_push(v___x_556_, v_h_531_);
v___x_558_ = lean_array_push(v___x_557_, v_a_542_);
v___x_559_ = l_Array_append___redArg(v___x_554_, v___x_558_);
lean_dec_ref(v___x_558_);
v___x_560_ = l_Lean_mkAppN(v___x_550_, v___x_559_);
lean_dec_ref(v___x_559_);
v___y_544_ = v___x_560_;
goto v___jp_543_;
}
else
{
lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
lean_dec(v___x_527_);
lean_dec(v_indName_526_);
v___x_561_ = l_Lean_mkConst(v___x_530_, v___x_528_);
v___x_562_ = lean_mk_empty_array_with_capacity(v___x_525_);
lean_inc_ref(v___x_562_);
v___x_563_ = lean_array_push(v___x_562_, v_a_540_);
v___x_564_ = l_Array_append___redArg(v_params_529_, v___x_563_);
lean_dec_ref(v___x_563_);
v___x_565_ = l_Array_append___redArg(v___x_564_, v_ism2_516_);
v___x_566_ = lean_array_push(v___x_562_, v_a_542_);
v___x_567_ = l_Array_append___redArg(v___x_565_, v___x_566_);
lean_dec_ref(v___x_566_);
v___x_568_ = l_Lean_mkAppN(v___x_561_, v___x_567_);
lean_dec_ref(v___x_567_);
v___y_544_ = v___x_568_;
goto v___jp_543_;
}
v___jp_543_:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_array_push(v_zs1_523_, v_h_531_);
v___x_546_ = l_Lean_Meta_mkLambdaFVars(v___x_545_, v___y_544_, v_isZero_518_, v___x_519_, v_isZero_518_, v___x_519_, v___x_520_, v___y_532_, v___y_533_, v___y_534_, v___y_535_);
lean_dec_ref(v___x_545_);
return v___x_546_;
}
}
else
{
lean_dec(v_a_540_);
lean_dec_ref(v_h_531_);
lean_dec(v___x_530_);
lean_dec_ref(v_params_529_);
lean_dec(v___x_528_);
lean_dec(v___x_527_);
lean_dec(v_indName_526_);
lean_dec_ref(v_zs1_523_);
return v___x_541_;
}
}
else
{
lean_dec_ref(v_h_531_);
lean_dec(v___x_530_);
lean_dec_ref(v_params_529_);
lean_dec(v___x_528_);
lean_dec(v___x_527_);
lean_dec(v_indName_526_);
lean_dec_ref(v_zs1_523_);
lean_dec_ref(v___f_522_);
lean_dec_ref(v_a_521_);
return v___x_539_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_569_ = _args[0];
lean_object* v_ism2_570_ = _args[1];
lean_object* v_motive_571_ = _args[2];
lean_object* v_isZero_572_ = _args[3];
lean_object* v___x_573_ = _args[4];
lean_object* v___x_574_ = _args[5];
lean_object* v_a_575_ = _args[6];
lean_object* v___f_576_ = _args[7];
lean_object* v_zs1_577_ = _args[8];
lean_object* v_val_578_ = _args[9];
lean_object* v___x_579_ = _args[10];
lean_object* v_indName_580_ = _args[11];
lean_object* v___x_581_ = _args[12];
lean_object* v___x_582_ = _args[13];
lean_object* v_params_583_ = _args[14];
lean_object* v___x_584_ = _args[15];
lean_object* v_h_585_ = _args[16];
lean_object* v___y_586_ = _args[17];
lean_object* v___y_587_ = _args[18];
lean_object* v___y_588_ = _args[19];
lean_object* v___y_589_ = _args[20];
lean_object* v___y_590_ = _args[21];
_start:
{
uint8_t v_isZero_boxed_591_; uint8_t v___x_21158__boxed_592_; uint8_t v___x_21159__boxed_593_; lean_object* v_res_594_; 
v_isZero_boxed_591_ = lean_unbox(v_isZero_572_);
v___x_21158__boxed_592_ = lean_unbox(v___x_573_);
v___x_21159__boxed_593_ = lean_unbox(v___x_574_);
v_res_594_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1(v___x_569_, v_ism2_570_, v_motive_571_, v_isZero_boxed_591_, v___x_21158__boxed_592_, v___x_21159__boxed_593_, v_a_575_, v___f_576_, v_zs1_577_, v_val_578_, v___x_579_, v_indName_580_, v___x_581_, v___x_582_, v_params_583_, v___x_584_, v_h_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
lean_dec(v___y_587_);
lean_dec_ref(v___y_586_);
lean_dec(v___x_579_);
lean_dec_ref(v_val_578_);
lean_dec_ref(v_ism2_570_);
return v_res_594_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_595_; lean_object* v_dummy_596_; 
v___x_595_ = lean_box(0);
v_dummy_596_ = l_Lean_Expr_sort___override(v___x_595_);
return v_dummy_596_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_597_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_598_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__1);
v___x_599_ = l_Lean_Name_mkStr1(v___x_598_);
return v___x_599_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_600_; 
v___x_600_ = lean_mk_string_unchecked("Nat", 3, 3);
return v___x_600_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4(void){
_start:
{
lean_object* v___x_601_; lean_object* v___x_602_; 
v___x_601_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__3);
v___x_602_ = l_Lean_Name_mkStr1(v___x_601_);
return v___x_602_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5(void){
_start:
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_603_ = lean_box(0);
v___x_604_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__4);
v___x_605_ = l_Lean_mkConst(v___x_604_, v___x_603_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(lean_object* v___x_606_, lean_object* v_alts_607_, lean_object* v_j_608_, uint8_t v_isZero_609_, uint8_t v___x_610_, uint8_t v___x_611_, lean_object* v___x_612_, lean_object* v___x_613_, lean_object* v___x_614_, lean_object* v_ism2_615_, lean_object* v_motive_616_, lean_object* v_a_617_, lean_object* v_val_618_, lean_object* v_indName_619_, lean_object* v___x_620_, lean_object* v___x_621_, lean_object* v_params_622_, lean_object* v___x_623_, lean_object* v___x_624_, lean_object* v___x_625_, lean_object* v_zs1_626_, lean_object* v_ctorRet1_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v___x_633_; 
lean_inc(v___y_631_);
lean_inc_ref(v___y_630_);
lean_inc(v___y_629_);
lean_inc_ref(v___y_628_);
v___x_633_ = lean_whnf(v_ctorRet1_627_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___f_638_; lean_object* v___x_639_; lean_object* v_dummy_640_; lean_object* v_nargs_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___f_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc(v_a_634_);
lean_dec_ref(v___x_633_);
v___x_635_ = lean_box(v_isZero_609_);
v___x_636_ = lean_box(v___x_610_);
v___x_637_ = lean_box(v___x_611_);
lean_inc_ref(v_zs1_626_);
lean_inc(v_j_608_);
v___f_638_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__0___boxed), 14, 7);
lean_closure_set(v___f_638_, 0, v___x_606_);
lean_closure_set(v___f_638_, 1, v_alts_607_);
lean_closure_set(v___f_638_, 2, v_j_608_);
lean_closure_set(v___f_638_, 3, v_zs1_626_);
lean_closure_set(v___f_638_, 4, v___x_635_);
lean_closure_set(v___f_638_, 5, v___x_636_);
lean_closure_set(v___f_638_, 6, v___x_637_);
v___x_639_ = l_Lean_mkAppN(v___x_612_, v_zs1_626_);
v_dummy_640_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0);
v_nargs_641_ = l_Lean_Expr_getAppNumArgs(v_a_634_);
lean_inc(v_nargs_641_);
v___x_642_ = lean_mk_array(v_nargs_641_, v_dummy_640_);
v___x_643_ = lean_nat_sub(v_nargs_641_, v___x_613_);
lean_dec(v_nargs_641_);
v___x_644_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_634_, v___x_642_, v___x_643_);
v___x_645_ = lean_array_get_size(v___x_644_);
v___x_646_ = l_Array_toSubarray___redArg(v___x_644_, v___x_614_, v___x_645_);
v___x_647_ = l_Subarray_copy___redArg(v___x_646_);
v___x_648_ = lean_array_push(v___x_647_, v___x_639_);
v___x_649_ = lean_box(v_isZero_609_);
v___x_650_ = lean_box(v___x_610_);
v___x_651_ = lean_box(v___x_611_);
lean_inc(v___x_613_);
v___f_652_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__1___boxed), 22, 16);
lean_closure_set(v___f_652_, 0, v___x_648_);
lean_closure_set(v___f_652_, 1, v_ism2_615_);
lean_closure_set(v___f_652_, 2, v_motive_616_);
lean_closure_set(v___f_652_, 3, v___x_649_);
lean_closure_set(v___f_652_, 4, v___x_650_);
lean_closure_set(v___f_652_, 5, v___x_651_);
lean_closure_set(v___f_652_, 6, v_a_617_);
lean_closure_set(v___f_652_, 7, v___f_638_);
lean_closure_set(v___f_652_, 8, v_zs1_626_);
lean_closure_set(v___f_652_, 9, v_val_618_);
lean_closure_set(v___f_652_, 10, v___x_613_);
lean_closure_set(v___f_652_, 11, v_indName_619_);
lean_closure_set(v___f_652_, 12, v___x_620_);
lean_closure_set(v___f_652_, 13, v___x_621_);
lean_closure_set(v___f_652_, 14, v_params_622_);
lean_closure_set(v___f_652_, 15, v___x_623_);
v___x_653_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__2);
v___x_654_ = l_Lean_Level_ofNat(v___x_613_);
lean_dec(v___x_613_);
v___x_655_ = lean_box(0);
v___x_656_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_656_, 0, v___x_654_);
lean_ctor_set(v___x_656_, 1, v___x_655_);
v___x_657_ = l_Lean_mkConst(v___x_653_, v___x_656_);
v___x_658_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__5);
v___x_659_ = l_Lean_mkRawNatLit(v_j_608_);
v___x_660_ = l_Lean_mkApp3(v___x_657_, v___x_658_, v___x_624_, v___x_659_);
v___x_661_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_625_, v___x_660_, v___f_652_, v___y_628_, v___y_629_, v___y_630_, v___y_631_);
return v___x_661_;
}
else
{
lean_dec_ref(v_zs1_626_);
lean_dec(v___x_625_);
lean_dec_ref(v___x_624_);
lean_dec(v___x_623_);
lean_dec_ref(v_params_622_);
lean_dec(v___x_621_);
lean_dec(v___x_620_);
lean_dec(v_indName_619_);
lean_dec_ref(v_val_618_);
lean_dec_ref(v_a_617_);
lean_dec_ref(v_motive_616_);
lean_dec_ref(v_ism2_615_);
lean_dec(v___x_614_);
lean_dec(v___x_613_);
lean_dec_ref(v___x_612_);
lean_dec(v_j_608_);
lean_dec_ref(v_alts_607_);
lean_dec_ref(v___x_606_);
return v___x_633_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_662_ = _args[0];
lean_object* v_alts_663_ = _args[1];
lean_object* v_j_664_ = _args[2];
lean_object* v_isZero_665_ = _args[3];
lean_object* v___x_666_ = _args[4];
lean_object* v___x_667_ = _args[5];
lean_object* v___x_668_ = _args[6];
lean_object* v___x_669_ = _args[7];
lean_object* v___x_670_ = _args[8];
lean_object* v_ism2_671_ = _args[9];
lean_object* v_motive_672_ = _args[10];
lean_object* v_a_673_ = _args[11];
lean_object* v_val_674_ = _args[12];
lean_object* v_indName_675_ = _args[13];
lean_object* v___x_676_ = _args[14];
lean_object* v___x_677_ = _args[15];
lean_object* v_params_678_ = _args[16];
lean_object* v___x_679_ = _args[17];
lean_object* v___x_680_ = _args[18];
lean_object* v___x_681_ = _args[19];
lean_object* v_zs1_682_ = _args[20];
lean_object* v_ctorRet1_683_ = _args[21];
lean_object* v___y_684_ = _args[22];
lean_object* v___y_685_ = _args[23];
lean_object* v___y_686_ = _args[24];
lean_object* v___y_687_ = _args[25];
lean_object* v___y_688_ = _args[26];
_start:
{
uint8_t v_isZero_boxed_689_; uint8_t v___x_21289__boxed_690_; uint8_t v___x_21290__boxed_691_; lean_object* v_res_692_; 
v_isZero_boxed_689_ = lean_unbox(v_isZero_665_);
v___x_21289__boxed_690_ = lean_unbox(v___x_666_);
v___x_21290__boxed_691_ = lean_unbox(v___x_667_);
v_res_692_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2(v___x_662_, v_alts_663_, v_j_664_, v_isZero_boxed_689_, v___x_21289__boxed_690_, v___x_21290__boxed_691_, v___x_668_, v___x_669_, v___x_670_, v_ism2_671_, v_motive_672_, v_a_673_, v_val_674_, v_indName_675_, v___x_676_, v___x_677_, v_params_678_, v___x_679_, v___x_680_, v___x_681_, v_zs1_682_, v_ctorRet1_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
return v_res_692_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = lean_mk_string_unchecked("h", 1, 1);
return v___x_693_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__0);
v___x_695_ = l_Lean_Name_mkStr1(v___x_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(lean_object* v_tail_696_, lean_object* v_params_697_, lean_object* v_alts_698_, lean_object* v___x_699_, lean_object* v_ism2_700_, lean_object* v_motive_701_, lean_object* v_val_702_, lean_object* v_indName_703_, lean_object* v___x_704_, lean_object* v___x_705_, lean_object* v___x_706_, lean_object* v_as_707_, lean_object* v_i_708_, lean_object* v_j_709_, lean_object* v_bs_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_){
_start:
{
lean_object* v_zero_716_; uint8_t v_isZero_717_; 
v_zero_716_ = lean_unsigned_to_nat(0u);
v_isZero_717_ = lean_nat_dec_eq(v_i_708_, v_zero_716_);
if (v_isZero_717_ == 1)
{
lean_object* v___x_718_; 
lean_dec(v_j_709_);
lean_dec(v_i_708_);
lean_dec_ref(v___x_706_);
lean_dec(v___x_705_);
lean_dec(v___x_704_);
lean_dec(v_indName_703_);
lean_dec_ref(v_val_702_);
lean_dec_ref(v_motive_701_);
lean_dec_ref(v_ism2_700_);
lean_dec(v___x_699_);
lean_dec_ref(v_alts_698_);
lean_dec_ref(v_params_697_);
lean_dec(v_tail_696_);
v___x_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_718_, 0, v_bs_710_);
return v___x_718_;
}
else
{
lean_object* v___x_719_; lean_object* v_n_720_; lean_object* v___y_722_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; 
v___x_719_ = lean_unsigned_to_nat(1u);
v_n_720_ = lean_nat_sub(v_i_708_, v___x_719_);
lean_dec(v_i_708_);
v___x_735_ = lean_array_fget_borrowed(v_as_707_, v_j_709_);
lean_inc(v_tail_696_);
lean_inc(v___x_735_);
v___x_736_ = l_Lean_mkConst(v___x_735_, v_tail_696_);
v___x_737_ = l_Lean_mkAppN(v___x_736_, v_params_697_);
lean_inc(v___y_714_);
lean_inc_ref(v___y_713_);
lean_inc(v___y_712_);
lean_inc_ref(v___y_711_);
lean_inc_ref(v___x_737_);
v___x_738_ = lean_infer_type(v___x_737_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
if (lean_obj_tag(v___x_738_) == 0)
{
lean_object* v_a_739_; lean_object* v___x_740_; uint8_t v___x_741_; uint8_t v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___f_747_; lean_object* v___x_748_; 
v_a_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc_n(v_a_739_, 2);
lean_dec_ref(v___x_738_);
v___x_740_ = l_Lean_instInhabitedExpr;
v___x_741_ = 1;
v___x_742_ = 1;
v___x_743_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1);
v___x_744_ = lean_box(v_isZero_717_);
v___x_745_ = lean_box(v___x_741_);
v___x_746_ = lean_box(v___x_742_);
lean_inc_ref(v___x_706_);
lean_inc(v___x_705_);
lean_inc_ref(v_params_697_);
lean_inc(v___x_704_);
lean_inc(v___x_735_);
lean_inc(v_indName_703_);
lean_inc_ref(v_val_702_);
lean_inc_ref(v_motive_701_);
lean_inc_ref(v_ism2_700_);
lean_inc(v___x_699_);
lean_inc(v_j_709_);
lean_inc_ref(v_alts_698_);
v___f_747_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___boxed), 27, 20);
lean_closure_set(v___f_747_, 0, v___x_740_);
lean_closure_set(v___f_747_, 1, v_alts_698_);
lean_closure_set(v___f_747_, 2, v_j_709_);
lean_closure_set(v___f_747_, 3, v___x_744_);
lean_closure_set(v___f_747_, 4, v___x_745_);
lean_closure_set(v___f_747_, 5, v___x_746_);
lean_closure_set(v___f_747_, 6, v___x_737_);
lean_closure_set(v___f_747_, 7, v___x_719_);
lean_closure_set(v___f_747_, 8, v___x_699_);
lean_closure_set(v___f_747_, 9, v_ism2_700_);
lean_closure_set(v___f_747_, 10, v_motive_701_);
lean_closure_set(v___f_747_, 11, v_a_739_);
lean_closure_set(v___f_747_, 12, v_val_702_);
lean_closure_set(v___f_747_, 13, v_indName_703_);
lean_closure_set(v___f_747_, 14, v___x_735_);
lean_closure_set(v___f_747_, 15, v___x_704_);
lean_closure_set(v___f_747_, 16, v_params_697_);
lean_closure_set(v___f_747_, 17, v___x_705_);
lean_closure_set(v___f_747_, 18, v___x_706_);
lean_closure_set(v___f_747_, 19, v___x_743_);
v___x_748_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_739_, v___f_747_, v_isZero_717_, v___y_711_, v___y_712_, v___y_713_, v___y_714_);
v___y_722_ = v___x_748_;
goto v___jp_721_;
}
else
{
lean_dec_ref(v___x_737_);
v___y_722_ = v___x_738_;
goto v___jp_721_;
}
v___jp_721_:
{
if (lean_obj_tag(v___y_722_) == 0)
{
lean_object* v_a_723_; lean_object* v___x_724_; lean_object* v___x_725_; 
v_a_723_ = lean_ctor_get(v___y_722_, 0);
lean_inc(v_a_723_);
lean_dec_ref(v___y_722_);
v___x_724_ = lean_nat_add(v_j_709_, v___x_719_);
lean_dec(v_j_709_);
v___x_725_ = lean_array_push(v_bs_710_, v_a_723_);
v_i_708_ = v_n_720_;
v_j_709_ = v___x_724_;
v_bs_710_ = v___x_725_;
goto _start;
}
else
{
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec(v_n_720_);
lean_dec_ref(v_bs_710_);
lean_dec(v_j_709_);
lean_dec_ref(v___x_706_);
lean_dec(v___x_705_);
lean_dec(v___x_704_);
lean_dec(v_indName_703_);
lean_dec_ref(v_val_702_);
lean_dec_ref(v_motive_701_);
lean_dec_ref(v_ism2_700_);
lean_dec(v___x_699_);
lean_dec_ref(v_alts_698_);
lean_dec_ref(v_params_697_);
lean_dec(v_tail_696_);
v_a_727_ = lean_ctor_get(v___y_722_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___y_722_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___y_722_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___y_722_);
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
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___boxed(lean_object** _args){
lean_object* v_tail_749_ = _args[0];
lean_object* v_params_750_ = _args[1];
lean_object* v_alts_751_ = _args[2];
lean_object* v___x_752_ = _args[3];
lean_object* v_ism2_753_ = _args[4];
lean_object* v_motive_754_ = _args[5];
lean_object* v_val_755_ = _args[6];
lean_object* v_indName_756_ = _args[7];
lean_object* v___x_757_ = _args[8];
lean_object* v___x_758_ = _args[9];
lean_object* v___x_759_ = _args[10];
lean_object* v_as_760_ = _args[11];
lean_object* v_i_761_ = _args[12];
lean_object* v_j_762_ = _args[13];
lean_object* v_bs_763_ = _args[14];
lean_object* v___y_764_ = _args[15];
lean_object* v___y_765_ = _args[16];
lean_object* v___y_766_ = _args[17];
lean_object* v___y_767_ = _args[18];
lean_object* v___y_768_ = _args[19];
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_749_, v_params_750_, v_alts_751_, v___x_752_, v_ism2_753_, v_motive_754_, v_val_755_, v_indName_756_, v___x_757_, v___x_758_, v___x_759_, v_as_760_, v_i_761_, v_j_762_, v_bs_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec_ref(v_as_760_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0(lean_object* v_motive_770_, lean_object* v___x_771_, lean_object* v_a_772_, lean_object* v_ism1_773_, uint8_t v___x_774_, uint8_t v___x_775_, uint8_t v___x_776_, lean_object* v___x_777_, lean_object* v_tail_778_, lean_object* v_params_779_, lean_object* v_alts_780_, lean_object* v_numParams_781_, lean_object* v_ism2_782_, lean_object* v_val_783_, lean_object* v_indName_784_, lean_object* v___x_785_, lean_object* v___x_786_, lean_object* v___x_787_, lean_object* v_name_788_, lean_object* v___x_789_, lean_object* v_heq_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
lean_inc_ref(v_motive_770_);
v___x_796_ = l_Lean_mkAppN(v_motive_770_, v___x_771_);
v___x_797_ = l_Lean_mkArrow(v_a_772_, v___x_796_, v___y_793_, v___y_794_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_object* v_a_798_; lean_object* v___x_799_; 
v_a_798_ = lean_ctor_get(v___x_797_, 0);
lean_inc(v_a_798_);
lean_dec_ref(v___x_797_);
v___x_799_ = l_Lean_Meta_mkLambdaFVars(v_ism1_773_, v_a_798_, v___x_774_, v___x_775_, v___x_774_, v___x_775_, v___x_776_, v___y_791_, v___y_792_, v___y_793_, v___y_794_);
if (lean_obj_tag(v___x_799_) == 0)
{
lean_object* v_a_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
v_a_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_a_800_);
lean_dec_ref(v___x_799_);
v___x_801_ = lean_array_get_size(v___x_777_);
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = lean_mk_empty_array_with_capacity(v___x_801_);
lean_inc(v___x_785_);
lean_inc_ref(v_motive_770_);
lean_inc_ref(v_ism2_782_);
lean_inc_ref(v_alts_780_);
lean_inc_ref(v_params_779_);
v___x_804_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_778_, v_params_779_, v_alts_780_, v_numParams_781_, v_ism2_782_, v_motive_770_, v_val_783_, v_indName_784_, v___x_785_, v___x_786_, v___x_787_, v___x_777_, v___x_801_, v___x_802_, v___x_803_, v___y_791_, v___y_792_, v___y_793_, v___y_794_);
if (lean_obj_tag(v___x_804_) == 0)
{
lean_object* v_a_805_; lean_object* v___x_806_; 
v_a_805_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_a_805_);
lean_dec_ref(v___x_804_);
lean_inc_ref(v_heq_790_);
v___x_806_ = l_Lean_Meta_mkEqSymm(v_heq_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_object* v_a_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; 
v_a_807_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_a_807_);
lean_dec_ref(v___x_806_);
v___x_808_ = l_Lean_mkConst(v_name_788_, v___x_785_);
v___x_809_ = l_Lean_mkAppN(v___x_808_, v_params_779_);
v___x_810_ = l_Lean_Expr_app___override(v___x_809_, v_a_800_);
v___x_811_ = l_Lean_mkAppN(v___x_810_, v_ism1_773_);
v___x_812_ = l_Lean_mkAppN(v___x_811_, v_a_805_);
lean_dec(v_a_805_);
v___x_813_ = l_Lean_Expr_app___override(v___x_812_, v_a_807_);
v___x_814_ = lean_mk_empty_array_with_capacity(v___x_789_);
lean_inc_ref(v___x_814_);
v___x_815_ = lean_array_push(v___x_814_, v_motive_770_);
v___x_816_ = l_Array_append___redArg(v_params_779_, v___x_815_);
lean_dec_ref(v___x_815_);
v___x_817_ = l_Array_append___redArg(v___x_816_, v_ism1_773_);
v___x_818_ = l_Array_append___redArg(v___x_817_, v_ism2_782_);
lean_dec_ref(v_ism2_782_);
v___x_819_ = lean_array_push(v___x_814_, v_heq_790_);
v___x_820_ = l_Array_append___redArg(v___x_818_, v___x_819_);
lean_dec_ref(v___x_819_);
v___x_821_ = l_Array_append___redArg(v___x_820_, v_alts_780_);
lean_dec_ref(v_alts_780_);
v___x_822_ = l_Lean_Meta_mkLambdaFVars(v___x_821_, v___x_813_, v___x_774_, v___x_775_, v___x_774_, v___x_775_, v___x_776_, v___y_791_, v___y_792_, v___y_793_, v___y_794_);
lean_dec_ref(v___x_821_);
return v___x_822_;
}
else
{
lean_dec(v_a_805_);
lean_dec(v_a_800_);
lean_dec_ref(v_heq_790_);
lean_dec(v_name_788_);
lean_dec(v___x_785_);
lean_dec_ref(v_ism2_782_);
lean_dec_ref(v_alts_780_);
lean_dec_ref(v_params_779_);
lean_dec_ref(v_motive_770_);
return v___x_806_;
}
}
else
{
lean_object* v_a_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_830_; 
lean_dec(v_a_800_);
lean_dec_ref(v_heq_790_);
lean_dec(v_name_788_);
lean_dec(v___x_785_);
lean_dec_ref(v_ism2_782_);
lean_dec_ref(v_alts_780_);
lean_dec_ref(v_params_779_);
lean_dec_ref(v_motive_770_);
v_a_823_ = lean_ctor_get(v___x_804_, 0);
v_isSharedCheck_830_ = !lean_is_exclusive(v___x_804_);
if (v_isSharedCheck_830_ == 0)
{
v___x_825_ = v___x_804_;
v_isShared_826_ = v_isSharedCheck_830_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_a_823_);
lean_dec(v___x_804_);
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
lean_dec_ref(v_heq_790_);
lean_dec(v_name_788_);
lean_dec_ref(v___x_787_);
lean_dec(v___x_786_);
lean_dec(v___x_785_);
lean_dec(v_indName_784_);
lean_dec_ref(v_val_783_);
lean_dec_ref(v_ism2_782_);
lean_dec(v_numParams_781_);
lean_dec_ref(v_alts_780_);
lean_dec_ref(v_params_779_);
lean_dec(v_tail_778_);
lean_dec_ref(v_motive_770_);
return v___x_799_;
}
}
else
{
lean_dec_ref(v_heq_790_);
lean_dec(v_name_788_);
lean_dec_ref(v___x_787_);
lean_dec(v___x_786_);
lean_dec(v___x_785_);
lean_dec(v_indName_784_);
lean_dec_ref(v_val_783_);
lean_dec_ref(v_ism2_782_);
lean_dec(v_numParams_781_);
lean_dec_ref(v_alts_780_);
lean_dec_ref(v_params_779_);
lean_dec(v_tail_778_);
lean_dec_ref(v_motive_770_);
return v___x_797_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__0___boxed(lean_object** _args){
lean_object* v_motive_831_ = _args[0];
lean_object* v___x_832_ = _args[1];
lean_object* v_a_833_ = _args[2];
lean_object* v_ism1_834_ = _args[3];
lean_object* v___x_835_ = _args[4];
lean_object* v___x_836_ = _args[5];
lean_object* v___x_837_ = _args[6];
lean_object* v___x_838_ = _args[7];
lean_object* v_tail_839_ = _args[8];
lean_object* v_params_840_ = _args[9];
lean_object* v_alts_841_ = _args[10];
lean_object* v_numParams_842_ = _args[11];
lean_object* v_ism2_843_ = _args[12];
lean_object* v_val_844_ = _args[13];
lean_object* v_indName_845_ = _args[14];
lean_object* v___x_846_ = _args[15];
lean_object* v___x_847_ = _args[16];
lean_object* v___x_848_ = _args[17];
lean_object* v_name_849_ = _args[18];
lean_object* v___x_850_ = _args[19];
lean_object* v_heq_851_ = _args[20];
lean_object* v___y_852_ = _args[21];
lean_object* v___y_853_ = _args[22];
lean_object* v___y_854_ = _args[23];
lean_object* v___y_855_ = _args[24];
lean_object* v___y_856_ = _args[25];
_start:
{
uint8_t v___x_21514__boxed_857_; uint8_t v___x_21515__boxed_858_; uint8_t v___x_21516__boxed_859_; lean_object* v_res_860_; 
v___x_21514__boxed_857_ = lean_unbox(v___x_835_);
v___x_21515__boxed_858_ = lean_unbox(v___x_836_);
v___x_21516__boxed_859_ = lean_unbox(v___x_837_);
v_res_860_ = l_Lean_mkCasesOnSameCtorHet___lam__0(v_motive_831_, v___x_832_, v_a_833_, v_ism1_834_, v___x_21514__boxed_857_, v___x_21515__boxed_858_, v___x_21516__boxed_859_, v___x_838_, v_tail_839_, v_params_840_, v_alts_841_, v_numParams_842_, v_ism2_843_, v_val_844_, v_indName_845_, v___x_846_, v___x_847_, v___x_848_, v_name_849_, v___x_850_, v_heq_851_, v___y_852_, v___y_853_, v___y_854_, v___y_855_);
lean_dec(v___y_855_);
lean_dec_ref(v___y_854_);
lean_dec(v___y_853_);
lean_dec_ref(v___y_852_);
lean_dec(v___x_850_);
lean_dec_ref(v___x_838_);
lean_dec_ref(v_ism1_834_);
lean_dec_ref(v___x_832_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1(lean_object* v_indName_861_, lean_object* v_tail_862_, lean_object* v_params_863_, lean_object* v_ism1_864_, lean_object* v_ism2_865_, lean_object* v_motive_866_, lean_object* v___x_867_, uint8_t v___x_868_, uint8_t v___x_869_, uint8_t v___x_870_, lean_object* v___x_871_, lean_object* v_numParams_872_, lean_object* v_val_873_, lean_object* v___x_874_, lean_object* v___x_875_, lean_object* v_name_876_, lean_object* v___x_877_, lean_object* v_alts_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
lean_inc(v_indName_861_);
v___x_884_ = l_mkCtorIdxName(v_indName_861_);
lean_inc(v_tail_862_);
v___x_885_ = l_Lean_mkConst(v___x_884_, v_tail_862_);
lean_inc_ref_n(v_params_863_, 2);
v___x_886_ = l_Array_append___redArg(v_params_863_, v_ism1_864_);
lean_inc_ref(v___x_885_);
v___x_887_ = l_Lean_mkAppN(v___x_885_, v___x_886_);
lean_dec_ref(v___x_886_);
v___x_888_ = l_Array_append___redArg(v_params_863_, v_ism2_865_);
v___x_889_ = l_Lean_mkAppN(v___x_885_, v___x_888_);
lean_dec_ref(v___x_888_);
lean_inc_ref(v___x_889_);
lean_inc_ref(v___x_887_);
v___x_890_ = l_Lean_Meta_mkEq(v___x_887_, v___x_889_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; lean_object* v___x_892_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_a_891_);
lean_dec_ref(v___x_890_);
lean_inc_ref(v___x_889_);
v___x_892_ = l_Lean_Meta_mkEq(v___x_889_, v___x_887_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
if (lean_obj_tag(v___x_892_) == 0)
{
lean_object* v_a_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___f_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
v_a_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_a_893_);
lean_dec_ref(v___x_892_);
v___x_894_ = lean_box(v___x_868_);
v___x_895_ = lean_box(v___x_869_);
v___x_896_ = lean_box(v___x_870_);
v___f_897_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__0___boxed), 26, 20);
lean_closure_set(v___f_897_, 0, v_motive_866_);
lean_closure_set(v___f_897_, 1, v___x_867_);
lean_closure_set(v___f_897_, 2, v_a_893_);
lean_closure_set(v___f_897_, 3, v_ism1_864_);
lean_closure_set(v___f_897_, 4, v___x_894_);
lean_closure_set(v___f_897_, 5, v___x_895_);
lean_closure_set(v___f_897_, 6, v___x_896_);
lean_closure_set(v___f_897_, 7, v___x_871_);
lean_closure_set(v___f_897_, 8, v_tail_862_);
lean_closure_set(v___f_897_, 9, v_params_863_);
lean_closure_set(v___f_897_, 10, v_alts_878_);
lean_closure_set(v___f_897_, 11, v_numParams_872_);
lean_closure_set(v___f_897_, 12, v_ism2_865_);
lean_closure_set(v___f_897_, 13, v_val_873_);
lean_closure_set(v___f_897_, 14, v_indName_861_);
lean_closure_set(v___f_897_, 15, v___x_874_);
lean_closure_set(v___f_897_, 16, v___x_875_);
lean_closure_set(v___f_897_, 17, v___x_889_);
lean_closure_set(v___f_897_, 18, v_name_876_);
lean_closure_set(v___f_897_, 19, v___x_877_);
v___x_898_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1);
v___x_899_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_898_, v_a_891_, v___f_897_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
return v___x_899_;
}
else
{
lean_dec(v_a_891_);
lean_dec_ref(v___x_889_);
lean_dec_ref(v_alts_878_);
lean_dec(v___x_877_);
lean_dec(v_name_876_);
lean_dec(v___x_875_);
lean_dec(v___x_874_);
lean_dec_ref(v_val_873_);
lean_dec(v_numParams_872_);
lean_dec_ref(v___x_871_);
lean_dec_ref(v___x_867_);
lean_dec_ref(v_motive_866_);
lean_dec_ref(v_ism2_865_);
lean_dec_ref(v_ism1_864_);
lean_dec_ref(v_params_863_);
lean_dec(v_tail_862_);
lean_dec(v_indName_861_);
return v___x_892_;
}
}
else
{
lean_dec_ref(v___x_889_);
lean_dec_ref(v___x_887_);
lean_dec_ref(v_alts_878_);
lean_dec(v___x_877_);
lean_dec(v_name_876_);
lean_dec(v___x_875_);
lean_dec(v___x_874_);
lean_dec_ref(v_val_873_);
lean_dec(v_numParams_872_);
lean_dec_ref(v___x_871_);
lean_dec_ref(v___x_867_);
lean_dec_ref(v_motive_866_);
lean_dec_ref(v_ism2_865_);
lean_dec_ref(v_ism1_864_);
lean_dec_ref(v_params_863_);
lean_dec(v_tail_862_);
lean_dec(v_indName_861_);
return v___x_890_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__1___boxed(lean_object** _args){
lean_object* v_indName_900_ = _args[0];
lean_object* v_tail_901_ = _args[1];
lean_object* v_params_902_ = _args[2];
lean_object* v_ism1_903_ = _args[3];
lean_object* v_ism2_904_ = _args[4];
lean_object* v_motive_905_ = _args[5];
lean_object* v___x_906_ = _args[6];
lean_object* v___x_907_ = _args[7];
lean_object* v___x_908_ = _args[8];
lean_object* v___x_909_ = _args[9];
lean_object* v___x_910_ = _args[10];
lean_object* v_numParams_911_ = _args[11];
lean_object* v_val_912_ = _args[12];
lean_object* v___x_913_ = _args[13];
lean_object* v___x_914_ = _args[14];
lean_object* v_name_915_ = _args[15];
lean_object* v___x_916_ = _args[16];
lean_object* v_alts_917_ = _args[17];
lean_object* v___y_918_ = _args[18];
lean_object* v___y_919_ = _args[19];
lean_object* v___y_920_ = _args[20];
lean_object* v___y_921_ = _args[21];
lean_object* v___y_922_ = _args[22];
_start:
{
uint8_t v___x_21641__boxed_923_; uint8_t v___x_21642__boxed_924_; uint8_t v___x_21643__boxed_925_; lean_object* v_res_926_; 
v___x_21641__boxed_923_ = lean_unbox(v___x_907_);
v___x_21642__boxed_924_ = lean_unbox(v___x_908_);
v___x_21643__boxed_925_ = lean_unbox(v___x_909_);
v_res_926_ = l_Lean_mkCasesOnSameCtorHet___lam__1(v_indName_900_, v_tail_901_, v_params_902_, v_ism1_903_, v_ism2_904_, v_motive_905_, v___x_906_, v___x_21641__boxed_923_, v___x_21642__boxed_924_, v___x_21643__boxed_925_, v___x_910_, v_numParams_911_, v_val_912_, v___x_913_, v___x_914_, v_name_915_, v___x_916_, v_alts_917_, v___y_918_, v___y_919_, v___y_920_, v___y_921_);
lean_dec(v___y_921_);
lean_dec_ref(v___y_920_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
return v_res_926_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_927_; 
v___x_927_ = lean_mk_string_unchecked("alt", 3, 3);
return v___x_927_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(lean_object* v___x_928_, lean_object* v_dummy_929_, lean_object* v___x_930_, lean_object* v___x_931_, lean_object* v___x_932_, lean_object* v_motive_933_, lean_object* v_zs1_934_, uint8_t v_isZero_935_, uint8_t v___x_936_, uint8_t v___x_937_, lean_object* v___x_938_, lean_object* v_j_939_, lean_object* v_zs2_940_, lean_object* v_ctorRet2_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_){
_start:
{
lean_object* v___x_947_; 
lean_inc(v___y_945_);
lean_inc_ref(v___y_944_);
lean_inc(v___y_943_);
lean_inc_ref(v___y_942_);
v___x_947_ = lean_whnf(v_ctorRet2_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
if (lean_obj_tag(v___x_947_) == 0)
{
lean_object* v_a_948_; lean_object* v___x_949_; lean_object* v_nargs_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v_a_948_ = lean_ctor_get(v___x_947_, 0);
lean_inc(v_a_948_);
lean_dec_ref(v___x_947_);
v___x_949_ = l_Lean_mkAppN(v___x_928_, v_zs2_940_);
v_nargs_950_ = l_Lean_Expr_getAppNumArgs(v_a_948_);
lean_inc(v_nargs_950_);
v___x_951_ = lean_mk_array(v_nargs_950_, v_dummy_929_);
v___x_952_ = lean_nat_sub(v_nargs_950_, v___x_930_);
lean_dec(v_nargs_950_);
v___x_953_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_948_, v___x_951_, v___x_952_);
v___x_954_ = lean_array_get_size(v___x_953_);
v___x_955_ = l_Array_toSubarray___redArg(v___x_953_, v___x_931_, v___x_954_);
v___x_956_ = l_Subarray_copy___redArg(v___x_955_);
v___x_957_ = lean_array_push(v___x_956_, v___x_949_);
v___x_958_ = l_Array_append___redArg(v___x_932_, v___x_957_);
lean_dec_ref(v___x_957_);
v___x_959_ = l_Lean_mkAppN(v_motive_933_, v___x_958_);
lean_dec_ref(v___x_958_);
v___x_960_ = l_Array_append___redArg(v_zs1_934_, v_zs2_940_);
v___x_961_ = l_Lean_Meta_mkForallFVars(v___x_960_, v___x_959_, v_isZero_935_, v___x_936_, v___x_936_, v___x_937_, v___y_942_, v___y_943_, v___y_944_, v___y_945_);
lean_dec_ref(v___x_960_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v_a_962_; lean_object* v___x_964_; uint8_t v_isShared_965_; uint8_t v_isSharedCheck_981_; 
v_a_962_ = lean_ctor_get(v___x_961_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_961_);
if (v_isSharedCheck_981_ == 0)
{
v___x_964_ = v___x_961_;
v_isShared_965_ = v_isSharedCheck_981_;
goto v_resetjp_963_;
}
else
{
lean_inc(v_a_962_);
lean_dec(v___x_961_);
v___x_964_ = lean_box(0);
v_isShared_965_ = v_isSharedCheck_981_;
goto v_resetjp_963_;
}
v_resetjp_963_:
{
lean_object* v___y_967_; 
if (lean_obj_tag(v___x_938_) == 1)
{
lean_object* v_str_972_; lean_object* v___x_973_; lean_object* v___x_974_; 
v_str_972_ = lean_ctor_get(v___x_938_, 1);
lean_inc_ref(v_str_972_);
lean_dec_ref(v___x_938_);
v___x_973_ = lean_box(0);
v___x_974_ = l_Lean_Name_str___override(v___x_973_, v_str_972_);
v___y_967_ = v___x_974_;
goto v___jp_966_;
}
else
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; 
lean_dec(v___x_938_);
v___x_975_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0);
v___x_976_ = lean_nat_add(v_j_939_, v___x_930_);
v___x_977_ = l_Nat_reprFast(v___x_976_);
v___x_978_ = lean_string_append(v___x_975_, v___x_977_);
lean_dec_ref(v___x_977_);
v___x_979_ = lean_box(0);
v___x_980_ = l_Lean_Name_str___override(v___x_979_, v___x_978_);
v___y_967_ = v___x_980_;
goto v___jp_966_;
}
v___jp_966_:
{
lean_object* v___x_968_; lean_object* v___x_970_; 
v___x_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_968_, 0, v___y_967_);
lean_ctor_set(v___x_968_, 1, v_a_962_);
if (v_isShared_965_ == 0)
{
lean_ctor_set(v___x_964_, 0, v___x_968_);
v___x_970_ = v___x_964_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_968_);
v___x_970_ = v_reuseFailAlloc_971_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
return v___x_970_;
}
}
}
}
else
{
lean_object* v_a_982_; lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_989_; 
lean_dec(v___x_938_);
v_a_982_ = lean_ctor_get(v___x_961_, 0);
v_isSharedCheck_989_ = !lean_is_exclusive(v___x_961_);
if (v_isSharedCheck_989_ == 0)
{
v___x_984_ = v___x_961_;
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
else
{
lean_inc(v_a_982_);
lean_dec(v___x_961_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_989_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_987_; 
if (v_isShared_985_ == 0)
{
v___x_987_ = v___x_984_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v_a_982_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
lean_dec(v___x_938_);
lean_dec_ref(v_zs1_934_);
lean_dec_ref(v_motive_933_);
lean_dec_ref(v___x_932_);
lean_dec(v___x_931_);
lean_dec_ref(v_dummy_929_);
lean_dec_ref(v___x_928_);
v_a_990_ = lean_ctor_get(v___x_947_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_947_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_947_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_947_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_998_ = _args[0];
lean_object* v_dummy_999_ = _args[1];
lean_object* v___x_1000_ = _args[2];
lean_object* v___x_1001_ = _args[3];
lean_object* v___x_1002_ = _args[4];
lean_object* v_motive_1003_ = _args[5];
lean_object* v_zs1_1004_ = _args[6];
lean_object* v_isZero_1005_ = _args[7];
lean_object* v___x_1006_ = _args[8];
lean_object* v___x_1007_ = _args[9];
lean_object* v___x_1008_ = _args[10];
lean_object* v_j_1009_ = _args[11];
lean_object* v_zs2_1010_ = _args[12];
lean_object* v_ctorRet2_1011_ = _args[13];
lean_object* v___y_1012_ = _args[14];
lean_object* v___y_1013_ = _args[15];
lean_object* v___y_1014_ = _args[16];
lean_object* v___y_1015_ = _args[17];
lean_object* v___y_1016_ = _args[18];
_start:
{
uint8_t v_isZero_boxed_1017_; uint8_t v___x_21725__boxed_1018_; uint8_t v___x_21726__boxed_1019_; lean_object* v_res_1020_; 
v_isZero_boxed_1017_ = lean_unbox(v_isZero_1005_);
v___x_21725__boxed_1018_ = lean_unbox(v___x_1006_);
v___x_21726__boxed_1019_ = lean_unbox(v___x_1007_);
v_res_1020_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0(v___x_998_, v_dummy_999_, v___x_1000_, v___x_1001_, v___x_1002_, v_motive_1003_, v_zs1_1004_, v_isZero_boxed_1017_, v___x_21725__boxed_1018_, v___x_21726__boxed_1019_, v___x_1008_, v_j_1009_, v_zs2_1010_, v_ctorRet2_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec_ref(v_zs2_1010_);
lean_dec(v_j_1009_);
lean_dec(v___x_1000_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(lean_object* v___x_1021_, lean_object* v___x_1022_, lean_object* v___x_1023_, lean_object* v_motive_1024_, uint8_t v_isZero_1025_, uint8_t v___x_1026_, uint8_t v___x_1027_, lean_object* v___x_1028_, lean_object* v_j_1029_, lean_object* v_a_1030_, lean_object* v_zs1_1031_, lean_object* v_ctorRet1_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v___x_1038_; 
lean_inc(v___y_1036_);
lean_inc_ref(v___y_1035_);
lean_inc(v___y_1034_);
lean_inc_ref(v___y_1033_);
v___x_1038_ = lean_whnf(v_ctorRet1_1032_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v_a_1039_; lean_object* v___x_1040_; lean_object* v_dummy_1041_; lean_object* v_nargs_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___f_1053_; lean_object* v___x_1054_; 
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc(v_a_1039_);
lean_dec_ref(v___x_1038_);
lean_inc_ref(v___x_1021_);
v___x_1040_ = l_Lean_mkAppN(v___x_1021_, v_zs1_1031_);
v_dummy_1041_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___lam__2___closed__0);
v_nargs_1042_ = l_Lean_Expr_getAppNumArgs(v_a_1039_);
lean_inc(v_nargs_1042_);
v___x_1043_ = lean_mk_array(v_nargs_1042_, v_dummy_1041_);
v___x_1044_ = lean_nat_sub(v_nargs_1042_, v___x_1022_);
lean_dec(v_nargs_1042_);
v___x_1045_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1039_, v___x_1043_, v___x_1044_);
v___x_1046_ = lean_array_get_size(v___x_1045_);
lean_inc(v___x_1023_);
v___x_1047_ = l_Array_toSubarray___redArg(v___x_1045_, v___x_1023_, v___x_1046_);
v___x_1048_ = l_Subarray_copy___redArg(v___x_1047_);
v___x_1049_ = lean_array_push(v___x_1048_, v___x_1040_);
v___x_1050_ = lean_box(v_isZero_1025_);
v___x_1051_ = lean_box(v___x_1026_);
v___x_1052_ = lean_box(v___x_1027_);
v___f_1053_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___boxed), 19, 12);
lean_closure_set(v___f_1053_, 0, v___x_1021_);
lean_closure_set(v___f_1053_, 1, v_dummy_1041_);
lean_closure_set(v___f_1053_, 2, v___x_1022_);
lean_closure_set(v___f_1053_, 3, v___x_1023_);
lean_closure_set(v___f_1053_, 4, v___x_1049_);
lean_closure_set(v___f_1053_, 5, v_motive_1024_);
lean_closure_set(v___f_1053_, 6, v_zs1_1031_);
lean_closure_set(v___f_1053_, 7, v___x_1050_);
lean_closure_set(v___f_1053_, 8, v___x_1051_);
lean_closure_set(v___f_1053_, 9, v___x_1052_);
lean_closure_set(v___f_1053_, 10, v___x_1028_);
lean_closure_set(v___f_1053_, 11, v_j_1029_);
v___x_1054_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_1030_, v___f_1053_, v_isZero_1025_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
return v___x_1054_;
}
else
{
lean_object* v_a_1055_; lean_object* v___x_1057_; uint8_t v_isShared_1058_; uint8_t v_isSharedCheck_1062_; 
lean_dec_ref(v_zs1_1031_);
lean_dec_ref(v_a_1030_);
lean_dec(v_j_1029_);
lean_dec(v___x_1028_);
lean_dec_ref(v_motive_1024_);
lean_dec(v___x_1023_);
lean_dec(v___x_1022_);
lean_dec_ref(v___x_1021_);
v_a_1055_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1062_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1057_ = v___x_1038_;
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
else
{
lean_inc(v_a_1055_);
lean_dec(v___x_1038_);
v___x_1057_ = lean_box(0);
v_isShared_1058_ = v_isSharedCheck_1062_;
goto v_resetjp_1056_;
}
v_resetjp_1056_:
{
lean_object* v___x_1060_; 
if (v_isShared_1058_ == 0)
{
v___x_1060_ = v___x_1057_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_a_1055_);
v___x_1060_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
return v___x_1060_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed(lean_object** _args){
lean_object* v___x_1063_ = _args[0];
lean_object* v___x_1064_ = _args[1];
lean_object* v___x_1065_ = _args[2];
lean_object* v_motive_1066_ = _args[3];
lean_object* v_isZero_1067_ = _args[4];
lean_object* v___x_1068_ = _args[5];
lean_object* v___x_1069_ = _args[6];
lean_object* v___x_1070_ = _args[7];
lean_object* v_j_1071_ = _args[8];
lean_object* v_a_1072_ = _args[9];
lean_object* v_zs1_1073_ = _args[10];
lean_object* v_ctorRet1_1074_ = _args[11];
lean_object* v___y_1075_ = _args[12];
lean_object* v___y_1076_ = _args[13];
lean_object* v___y_1077_ = _args[14];
lean_object* v___y_1078_ = _args[15];
lean_object* v___y_1079_ = _args[16];
_start:
{
uint8_t v_isZero_boxed_1080_; uint8_t v___x_21863__boxed_1081_; uint8_t v___x_21864__boxed_1082_; lean_object* v_res_1083_; 
v_isZero_boxed_1080_ = lean_unbox(v_isZero_1067_);
v___x_21863__boxed_1081_ = lean_unbox(v___x_1068_);
v___x_21864__boxed_1082_ = lean_unbox(v___x_1069_);
v_res_1083_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1(v___x_1063_, v___x_1064_, v___x_1065_, v_motive_1066_, v_isZero_boxed_1080_, v___x_21863__boxed_1081_, v___x_21864__boxed_1082_, v___x_1070_, v_j_1071_, v_a_1072_, v_zs1_1073_, v_ctorRet1_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(lean_object* v_tail_1084_, lean_object* v_params_1085_, lean_object* v___x_1086_, lean_object* v_motive_1087_, lean_object* v_as_1088_, lean_object* v_i_1089_, lean_object* v_j_1090_, lean_object* v_bs_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_zero_1097_; uint8_t v_isZero_1098_; 
v_zero_1097_ = lean_unsigned_to_nat(0u);
v_isZero_1098_ = lean_nat_dec_eq(v_i_1089_, v_zero_1097_);
if (v_isZero_1098_ == 1)
{
lean_object* v___x_1099_; 
lean_dec(v_j_1090_);
lean_dec(v_i_1089_);
lean_dec_ref(v_motive_1087_);
lean_dec(v___x_1086_);
lean_dec(v_tail_1084_);
v___x_1099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1099_, 0, v_bs_1091_);
return v___x_1099_;
}
else
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
v___x_1100_ = lean_array_fget_borrowed(v_as_1088_, v_j_1090_);
lean_inc(v_tail_1084_);
lean_inc(v___x_1100_);
v___x_1101_ = l_Lean_mkConst(v___x_1100_, v_tail_1084_);
v___x_1102_ = l_Lean_mkAppN(v___x_1101_, v_params_1085_);
lean_inc(v___y_1095_);
lean_inc_ref(v___y_1094_);
lean_inc(v___y_1093_);
lean_inc_ref(v___y_1092_);
lean_inc_ref(v___x_1102_);
v___x_1103_ = lean_infer_type(v___x_1102_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
if (lean_obj_tag(v___x_1103_) == 0)
{
lean_object* v_a_1104_; uint8_t v___x_1105_; uint8_t v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___f_1111_; lean_object* v___x_1112_; 
v_a_1104_ = lean_ctor_get(v___x_1103_, 0);
lean_inc_n(v_a_1104_, 2);
lean_dec_ref(v___x_1103_);
v___x_1105_ = 1;
v___x_1106_ = 1;
v___x_1107_ = lean_unsigned_to_nat(1u);
v___x_1108_ = lean_box(v_isZero_1098_);
v___x_1109_ = lean_box(v___x_1105_);
v___x_1110_ = lean_box(v___x_1106_);
lean_inc(v_j_1090_);
lean_inc(v___x_1100_);
lean_inc_ref(v_motive_1087_);
lean_inc(v___x_1086_);
v___f_1111_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__1___boxed), 17, 10);
lean_closure_set(v___f_1111_, 0, v___x_1102_);
lean_closure_set(v___f_1111_, 1, v___x_1107_);
lean_closure_set(v___f_1111_, 2, v___x_1086_);
lean_closure_set(v___f_1111_, 3, v_motive_1087_);
lean_closure_set(v___f_1111_, 4, v___x_1108_);
lean_closure_set(v___f_1111_, 5, v___x_1109_);
lean_closure_set(v___f_1111_, 6, v___x_1110_);
lean_closure_set(v___f_1111_, 7, v___x_1100_);
lean_closure_set(v___f_1111_, 8, v_j_1090_);
lean_closure_set(v___f_1111_, 9, v_a_1104_);
v___x_1112_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_1104_, v___f_1111_, v_isZero_1098_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v_n_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; 
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc(v_a_1113_);
lean_dec_ref(v___x_1112_);
v_n_1114_ = lean_nat_sub(v_i_1089_, v___x_1107_);
lean_dec(v_i_1089_);
v___x_1115_ = lean_nat_add(v_j_1090_, v___x_1107_);
lean_dec(v_j_1090_);
v___x_1116_ = lean_array_push(v_bs_1091_, v_a_1113_);
v_i_1089_ = v_n_1114_;
v_j_1090_ = v___x_1115_;
v_bs_1091_ = v___x_1116_;
goto _start;
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_dec_ref(v_bs_1091_);
lean_dec(v_j_1090_);
lean_dec(v_i_1089_);
lean_dec_ref(v_motive_1087_);
lean_dec(v___x_1086_);
lean_dec(v_tail_1084_);
v_a_1118_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1112_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1112_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
}
else
{
lean_object* v_a_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1133_; 
lean_dec_ref(v___x_1102_);
lean_dec_ref(v_bs_1091_);
lean_dec(v_j_1090_);
lean_dec(v_i_1089_);
lean_dec_ref(v_motive_1087_);
lean_dec(v___x_1086_);
lean_dec(v_tail_1084_);
v_a_1126_ = lean_ctor_get(v___x_1103_, 0);
v_isSharedCheck_1133_ = !lean_is_exclusive(v___x_1103_);
if (v_isSharedCheck_1133_ == 0)
{
v___x_1128_ = v___x_1103_;
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_a_1126_);
lean_dec(v___x_1103_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1133_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1131_; 
if (v_isShared_1129_ == 0)
{
v___x_1131_ = v___x_1128_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1132_; 
v_reuseFailAlloc_1132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1132_, 0, v_a_1126_);
v___x_1131_ = v_reuseFailAlloc_1132_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
return v___x_1131_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___boxed(lean_object* v_tail_1134_, lean_object* v_params_1135_, lean_object* v___x_1136_, lean_object* v_motive_1137_, lean_object* v_as_1138_, lean_object* v_i_1139_, lean_object* v_j_1140_, lean_object* v_bs_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_1134_, v_params_1135_, v___x_1136_, v_motive_1137_, v_as_1138_, v_i_1139_, v_j_1140_, v_bs_1141_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_);
lean_dec(v___y_1145_);
lean_dec_ref(v___y_1144_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec_ref(v_as_1138_);
lean_dec_ref(v_params_1135_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(lean_object* v___x_1148_, lean_object* v_a_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
lean_object* v___x_1155_; lean_object* v___x_20540__overap_1156_; lean_object* v___x_1157_; 
v___x_1155_ = l_Lean_instInhabitedExpr;
v___x_20540__overap_1156_ = l_instInhabitedOfMonad___redArg(v___x_1148_, v___x_1155_);
lean_inc(v___y_1153_);
lean_inc_ref(v___y_1152_);
lean_inc(v___y_1151_);
lean_inc_ref(v___y_1150_);
v___x_1157_ = lean_apply_5(v___x_20540__overap_1156_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, lean_box(0));
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed(lean_object* v___x_1158_, lean_object* v_a_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0(v___x_1158_, v_a_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec_ref(v_a_1159_);
return v_res_1165_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0(void){
_start:
{
lean_object* v___x_1166_; 
v___x_1166_ = l_instMonadEIO(lean_box(0));
return v___x_1166_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__0);
v___x_1168_ = l_StateRefT_x27_instMonad___redArg(v___x_1167_);
return v___x_1168_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2(void){
_start:
{
lean_object* v___f_1169_; 
v___f_1169_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_1169_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3(void){
_start:
{
lean_object* v___f_1170_; 
v___f_1170_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_1170_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4(void){
_start:
{
lean_object* v___f_1171_; 
v___f_1171_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_1171_;
}
}
static lean_object* _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5(void){
_start:
{
lean_object* v___f_1172_; 
v___f_1172_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_1172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed(lean_object* v_acc_1173_, lean_object* v_declInfos_1174_, lean_object* v_k_1175_, lean_object* v_kind_1176_, lean_object* v_x_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_){
_start:
{
uint8_t v_kind_boxed_1183_; lean_object* v_res_1184_; 
v_kind_boxed_1183_ = lean_unbox(v_kind_1176_);
v_res_1184_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(v_acc_1173_, v_declInfos_1174_, v_k_1175_, v_kind_boxed_1183_, v_x_1177_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(lean_object* v_declInfos_1185_, lean_object* v_k_1186_, uint8_t v_kind_1187_, lean_object* v_acc_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
lean_object* v___x_1194_; lean_object* v_toApplicative_1195_; lean_object* v_toFunctor_1196_; lean_object* v_toSeq_1197_; lean_object* v_toSeqLeft_1198_; lean_object* v_toSeqRight_1199_; lean_object* v___f_1200_; lean_object* v___f_1201_; lean_object* v___f_1202_; lean_object* v___f_1203_; lean_object* v___x_1204_; lean_object* v___f_1205_; lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v_toApplicative_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1260_; 
v___x_1194_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1);
v_toApplicative_1195_ = lean_ctor_get(v___x_1194_, 0);
v_toFunctor_1196_ = lean_ctor_get(v_toApplicative_1195_, 0);
v_toSeq_1197_ = lean_ctor_get(v_toApplicative_1195_, 2);
v_toSeqLeft_1198_ = lean_ctor_get(v_toApplicative_1195_, 3);
v_toSeqRight_1199_ = lean_ctor_get(v_toApplicative_1195_, 4);
v___f_1200_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2);
v___f_1201_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3);
lean_inc_ref_n(v_toFunctor_1196_, 2);
v___f_1202_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1202_, 0, v_toFunctor_1196_);
v___f_1203_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1203_, 0, v_toFunctor_1196_);
v___x_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1204_, 0, v___f_1202_);
lean_ctor_set(v___x_1204_, 1, v___f_1203_);
lean_inc(v_toSeqRight_1199_);
v___f_1205_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1205_, 0, v_toSeqRight_1199_);
lean_inc(v_toSeqLeft_1198_);
v___f_1206_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1206_, 0, v_toSeqLeft_1198_);
lean_inc(v_toSeq_1197_);
v___f_1207_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1207_, 0, v_toSeq_1197_);
v___x_1208_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1204_);
lean_ctor_set(v___x_1208_, 1, v___f_1200_);
lean_ctor_set(v___x_1208_, 2, v___f_1207_);
lean_ctor_set(v___x_1208_, 3, v___f_1206_);
lean_ctor_set(v___x_1208_, 4, v___f_1205_);
v___x_1209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1209_, 0, v___x_1208_);
lean_ctor_set(v___x_1209_, 1, v___f_1201_);
v___x_1210_ = l_StateRefT_x27_instMonad___redArg(v___x_1209_);
v_toApplicative_1211_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1260_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1260_ == 0)
{
lean_object* v_unused_1261_; 
v_unused_1261_ = lean_ctor_get(v___x_1210_, 1);
lean_dec(v_unused_1261_);
v___x_1213_ = v___x_1210_;
v_isShared_1214_ = v_isSharedCheck_1260_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_toApplicative_1211_);
lean_dec(v___x_1210_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1260_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v_toFunctor_1215_; lean_object* v_toSeq_1216_; lean_object* v_toSeqLeft_1217_; lean_object* v_toSeqRight_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1258_; 
v_toFunctor_1215_ = lean_ctor_get(v_toApplicative_1211_, 0);
v_toSeq_1216_ = lean_ctor_get(v_toApplicative_1211_, 2);
v_toSeqLeft_1217_ = lean_ctor_get(v_toApplicative_1211_, 3);
v_toSeqRight_1218_ = lean_ctor_get(v_toApplicative_1211_, 4);
v_isSharedCheck_1258_ = !lean_is_exclusive(v_toApplicative_1211_);
if (v_isSharedCheck_1258_ == 0)
{
lean_object* v_unused_1259_; 
v_unused_1259_ = lean_ctor_get(v_toApplicative_1211_, 1);
lean_dec(v_unused_1259_);
v___x_1220_ = v_toApplicative_1211_;
v_isShared_1221_ = v_isSharedCheck_1258_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_toSeqRight_1218_);
lean_inc(v_toSeqLeft_1217_);
lean_inc(v_toSeq_1216_);
lean_inc(v_toFunctor_1215_);
lean_dec(v_toApplicative_1211_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1258_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___f_1222_; lean_object* v___f_1223_; lean_object* v___f_1224_; lean_object* v___f_1225_; lean_object* v___x_1226_; lean_object* v___f_1227_; lean_object* v___f_1228_; lean_object* v___f_1229_; lean_object* v___x_1231_; 
v___f_1222_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4);
v___f_1223_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5);
lean_inc_ref(v_toFunctor_1215_);
v___f_1224_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1224_, 0, v_toFunctor_1215_);
v___f_1225_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1225_, 0, v_toFunctor_1215_);
v___x_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___f_1224_);
lean_ctor_set(v___x_1226_, 1, v___f_1225_);
v___f_1227_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1227_, 0, v_toSeqRight_1218_);
v___f_1228_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1228_, 0, v_toSeqLeft_1217_);
v___f_1229_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1229_, 0, v_toSeq_1216_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 4, v___f_1227_);
lean_ctor_set(v___x_1220_, 3, v___f_1228_);
lean_ctor_set(v___x_1220_, 2, v___f_1229_);
lean_ctor_set(v___x_1220_, 1, v___f_1222_);
lean_ctor_set(v___x_1220_, 0, v___x_1226_);
v___x_1231_ = v___x_1220_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v___x_1226_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v___f_1222_);
lean_ctor_set(v_reuseFailAlloc_1257_, 2, v___f_1229_);
lean_ctor_set(v_reuseFailAlloc_1257_, 3, v___f_1228_);
lean_ctor_set(v_reuseFailAlloc_1257_, 4, v___f_1227_);
v___x_1231_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
lean_object* v___x_1233_; 
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 1, v___f_1223_);
lean_ctor_set(v___x_1213_, 0, v___x_1231_);
v___x_1233_ = v___x_1213_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1256_, 1, v___f_1223_);
v___x_1233_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1234_ = lean_array_get_size(v_acc_1188_);
v___x_1235_ = lean_array_get_size(v_declInfos_1185_);
v___x_1236_ = lean_nat_dec_lt(v___x_1234_, v___x_1235_);
if (v___x_1236_ == 0)
{
lean_object* v___x_1237_; 
lean_dec_ref(v___x_1233_);
lean_dec_ref(v_declInfos_1185_);
lean_inc(v___y_1192_);
lean_inc_ref(v___y_1191_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
v___x_1237_ = lean_apply_6(v_k_1186_, v_acc_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, lean_box(0));
return v___x_1237_;
}
else
{
lean_object* v___f_1238_; lean_object* v___x_1239_; uint8_t v___x_1240_; lean_object* v___f_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v_snd_1246_; lean_object* v_fst_1247_; lean_object* v_fst_1248_; lean_object* v_snd_1249_; lean_object* v___x_1250_; 
v___f_1238_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1238_, 0, v___x_1233_);
v___x_1239_ = lean_box(0);
v___x_1240_ = 0;
v___f_1241_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1241_, 0, v___f_1238_);
v___x_1242_ = lean_box(v___x_1240_);
v___x_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1242_);
lean_ctor_set(v___x_1243_, 1, v___f_1241_);
v___x_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1239_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
v___x_1245_ = lean_array_get(v___x_1244_, v_declInfos_1185_, v___x_1234_);
lean_dec_ref(v___x_1244_);
v_snd_1246_ = lean_ctor_get(v___x_1245_, 1);
lean_inc(v_snd_1246_);
v_fst_1247_ = lean_ctor_get(v___x_1245_, 0);
lean_inc(v_fst_1247_);
lean_dec(v___x_1245_);
v_fst_1248_ = lean_ctor_get(v_snd_1246_, 0);
lean_inc(v_fst_1248_);
v_snd_1249_ = lean_ctor_get(v_snd_1246_, 1);
lean_inc(v_snd_1249_);
lean_dec(v_snd_1246_);
lean_inc(v___y_1192_);
lean_inc_ref(v___y_1191_);
lean_inc(v___y_1190_);
lean_inc_ref(v___y_1189_);
lean_inc_ref(v_acc_1188_);
v___x_1250_ = lean_apply_6(v_snd_1249_, v_acc_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, lean_box(0));
if (lean_obj_tag(v___x_1250_) == 0)
{
lean_object* v_a_1251_; lean_object* v___x_1252_; lean_object* v___f_1253_; uint8_t v___x_1254_; lean_object* v___x_1255_; 
v_a_1251_ = lean_ctor_get(v___x_1250_, 0);
lean_inc(v_a_1251_);
lean_dec_ref(v___x_1250_);
v___x_1252_ = lean_box(v_kind_1187_);
v___f_1253_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1___boxed), 10, 4);
lean_closure_set(v___f_1253_, 0, v_acc_1188_);
lean_closure_set(v___f_1253_, 1, v_declInfos_1185_);
lean_closure_set(v___f_1253_, 2, v_k_1186_);
lean_closure_set(v___f_1253_, 3, v___x_1252_);
v___x_1254_ = lean_unbox(v_fst_1248_);
lean_dec(v_fst_1248_);
v___x_1255_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_fst_1247_, v___x_1254_, v_a_1251_, v___f_1253_, v_kind_1187_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
return v___x_1255_;
}
else
{
lean_dec(v_fst_1248_);
lean_dec(v_fst_1247_);
lean_dec_ref(v_acc_1188_);
lean_dec_ref(v_k_1186_);
lean_dec_ref(v_declInfos_1185_);
return v___x_1250_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__1(lean_object* v_acc_1262_, lean_object* v_declInfos_1263_, lean_object* v_k_1264_, uint8_t v_kind_1265_, lean_object* v_x_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = lean_array_push(v_acc_1262_, v_x_1266_);
v___x_1273_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1263_, v_k_1264_, v_kind_1265_, v___x_1272_, v___y_1267_, v___y_1268_, v___y_1269_, v___y_1270_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___boxed(lean_object* v_declInfos_1274_, lean_object* v_k_1275_, lean_object* v_kind_1276_, lean_object* v_acc_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
uint8_t v_kind_boxed_1283_; lean_object* v_res_1284_; 
v_kind_boxed_1283_ = lean_unbox(v_kind_1276_);
v_res_1284_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1274_, v_k_1275_, v_kind_boxed_1283_, v_acc_1277_, v___y_1278_, v___y_1279_, v___y_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v___y_1280_);
lean_dec(v___y_1279_);
lean_dec_ref(v___y_1278_);
return v_res_1284_;
}
}
static lean_object* _init_l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0(void){
_start:
{
lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1285_ = lean_unsigned_to_nat(0u);
v___x_1286_ = lean_mk_empty_array_with_capacity(v___x_1285_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(lean_object* v_declInfos_1287_, lean_object* v_k_1288_, uint8_t v_kind_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v___x_1295_; lean_object* v___x_1296_; 
v___x_1295_ = lean_obj_once(&l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0, &l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0_once, _init_l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0);
v___x_1296_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22(v_declInfos_1287_, v_k_1288_, v_kind_1289_, v___x_1295_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___boxed(lean_object* v_declInfos_1297_, lean_object* v_k_1298_, lean_object* v_kind_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_){
_start:
{
uint8_t v_kind_boxed_1305_; lean_object* v_res_1306_; 
v_kind_boxed_1305_ = lean_unbox(v_kind_1299_);
v_res_1306_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(v_declInfos_1297_, v_k_1298_, v_kind_boxed_1305_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_);
lean_dec(v___y_1303_);
lean_dec_ref(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
return v_res_1306_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(size_t v_sz_1307_, size_t v_i_1308_, lean_object* v_bs_1309_){
_start:
{
uint8_t v___x_1310_; 
v___x_1310_ = lean_usize_dec_lt(v_i_1308_, v_sz_1307_);
if (v___x_1310_ == 0)
{
return v_bs_1309_;
}
else
{
lean_object* v_v_1311_; lean_object* v_fst_1312_; lean_object* v_snd_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1329_; 
v_v_1311_ = lean_array_uget(v_bs_1309_, v_i_1308_);
v_fst_1312_ = lean_ctor_get(v_v_1311_, 0);
v_snd_1313_ = lean_ctor_get(v_v_1311_, 1);
v_isSharedCheck_1329_ = !lean_is_exclusive(v_v_1311_);
if (v_isSharedCheck_1329_ == 0)
{
v___x_1315_ = v_v_1311_;
v_isShared_1316_ = v_isSharedCheck_1329_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_snd_1313_);
lean_inc(v_fst_1312_);
lean_dec(v_v_1311_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1329_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1317_; lean_object* v_bs_x27_1318_; uint8_t v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1322_; 
v___x_1317_ = lean_unsigned_to_nat(0u);
v_bs_x27_1318_ = lean_array_uset(v_bs_1309_, v_i_1308_, v___x_1317_);
v___x_1319_ = 0;
v___x_1320_ = lean_box(v___x_1319_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 0, v___x_1320_);
v___x_1322_ = v___x_1315_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1328_; 
v_reuseFailAlloc_1328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1328_, 0, v___x_1320_);
lean_ctor_set(v_reuseFailAlloc_1328_, 1, v_snd_1313_);
v___x_1322_ = v_reuseFailAlloc_1328_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
lean_object* v___x_1323_; size_t v___x_1324_; size_t v___x_1325_; lean_object* v___x_1326_; 
v___x_1323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1323_, 0, v_fst_1312_);
lean_ctor_set(v___x_1323_, 1, v___x_1322_);
v___x_1324_ = ((size_t)1ULL);
v___x_1325_ = lean_usize_add(v_i_1308_, v___x_1324_);
v___x_1326_ = lean_array_uset(v_bs_x27_1318_, v_i_1308_, v___x_1323_);
v_i_1308_ = v___x_1325_;
v_bs_1309_ = v___x_1326_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16___boxed(lean_object* v_sz_1330_, lean_object* v_i_1331_, lean_object* v_bs_1332_){
_start:
{
size_t v_sz_boxed_1333_; size_t v_i_boxed_1334_; lean_object* v_res_1335_; 
v_sz_boxed_1333_ = lean_unbox_usize(v_sz_1330_);
lean_dec(v_sz_1330_);
v_i_boxed_1334_ = lean_unbox_usize(v_i_1331_);
lean_dec(v_i_1331_);
v_res_1335_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_boxed_1333_, v_i_boxed_1334_, v_bs_1332_);
return v_res_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(lean_object* v_declInfos_1336_, lean_object* v_k_1337_, uint8_t v_kind_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
size_t v_sz_1344_; size_t v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v_sz_1344_ = lean_array_size(v_declInfos_1336_);
v___x_1345_ = ((size_t)0ULL);
v___x_1346_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_1344_, v___x_1345_, v_declInfos_1336_);
v___x_1347_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17(v___x_1346_, v_k_1337_, v_kind_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_);
return v___x_1347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9___boxed(lean_object* v_declInfos_1348_, lean_object* v_k_1349_, lean_object* v_kind_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
uint8_t v_kind_boxed_1356_; lean_object* v_res_1357_; 
v_kind_boxed_1356_ = lean_unbox(v_kind_1350_);
v_res_1357_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(v_declInfos_1348_, v_k_1349_, v_kind_boxed_1356_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
lean_dec(v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec_ref(v___y_1351_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(lean_object* v_snd_1358_, lean_object* v_x_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v___x_1365_; 
v___x_1365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1365_, 0, v_snd_1358_);
return v___x_1365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed(lean_object* v_snd_1366_, lean_object* v_x_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0(v_snd_1366_, v_x_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_);
lean_dec(v___y_1371_);
lean_dec_ref(v___y_1370_);
lean_dec(v___y_1369_);
lean_dec_ref(v___y_1368_);
lean_dec_ref(v_x_1367_);
return v_res_1373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(size_t v_sz_1374_, size_t v_i_1375_, lean_object* v_bs_1376_){
_start:
{
uint8_t v___x_1377_; 
v___x_1377_ = lean_usize_dec_lt(v_i_1375_, v_sz_1374_);
if (v___x_1377_ == 0)
{
return v_bs_1376_;
}
else
{
lean_object* v_v_1378_; lean_object* v_fst_1379_; lean_object* v_snd_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1394_; 
v_v_1378_ = lean_array_uget(v_bs_1376_, v_i_1375_);
v_fst_1379_ = lean_ctor_get(v_v_1378_, 0);
v_snd_1380_ = lean_ctor_get(v_v_1378_, 1);
v_isSharedCheck_1394_ = !lean_is_exclusive(v_v_1378_);
if (v_isSharedCheck_1394_ == 0)
{
v___x_1382_ = v_v_1378_;
v_isShared_1383_ = v_isSharedCheck_1394_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_snd_1380_);
lean_inc(v_fst_1379_);
lean_dec(v_v_1378_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1394_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1384_; lean_object* v_bs_x27_1385_; lean_object* v___f_1386_; lean_object* v___x_1388_; 
v___x_1384_ = lean_unsigned_to_nat(0u);
v_bs_x27_1385_ = lean_array_uset(v_bs_1376_, v_i_1375_, v___x_1384_);
v___f_1386_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___lam__0___boxed), 7, 1);
lean_closure_set(v___f_1386_, 0, v_snd_1380_);
if (v_isShared_1383_ == 0)
{
lean_ctor_set(v___x_1382_, 1, v___f_1386_);
v___x_1388_ = v___x_1382_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_fst_1379_);
lean_ctor_set(v_reuseFailAlloc_1393_, 1, v___f_1386_);
v___x_1388_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
size_t v___x_1389_; size_t v___x_1390_; lean_object* v___x_1391_; 
v___x_1389_ = ((size_t)1ULL);
v___x_1390_ = lean_usize_add(v_i_1375_, v___x_1389_);
v___x_1391_ = lean_array_uset(v_bs_x27_1385_, v_i_1375_, v___x_1388_);
v_i_1375_ = v___x_1390_;
v_bs_1376_ = v___x_1391_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8___boxed(lean_object* v_sz_1395_, lean_object* v_i_1396_, lean_object* v_bs_1397_){
_start:
{
size_t v_sz_boxed_1398_; size_t v_i_boxed_1399_; lean_object* v_res_1400_; 
v_sz_boxed_1398_ = lean_unbox_usize(v_sz_1395_);
lean_dec(v_sz_1395_);
v_i_boxed_1399_ = lean_unbox_usize(v_i_1396_);
lean_dec(v_i_1396_);
v_res_1400_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_boxed_1398_, v_i_boxed_1399_, v_bs_1397_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(lean_object* v_declInfos_1401_, lean_object* v_k_1402_, uint8_t v_kind_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_){
_start:
{
size_t v_sz_1409_; size_t v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; 
v_sz_1409_ = lean_array_size(v_declInfos_1401_);
v___x_1410_ = ((size_t)0ULL);
v___x_1411_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_1409_, v___x_1410_, v_declInfos_1401_);
v___x_1412_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9(v___x_1411_, v_k_1402_, v_kind_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
return v___x_1412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7___boxed(lean_object* v_declInfos_1413_, lean_object* v_k_1414_, lean_object* v_kind_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
uint8_t v_kind_boxed_1421_; lean_object* v_res_1422_; 
v_kind_boxed_1421_ = lean_unbox(v_kind_1415_);
v_res_1422_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(v_declInfos_1413_, v_k_1414_, v_kind_boxed_1421_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
lean_dec(v___y_1417_);
lean_dec_ref(v___y_1416_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2(lean_object* v_ctors_1423_, lean_object* v_tail_1424_, lean_object* v_params_1425_, lean_object* v_numParams_1426_, lean_object* v_indName_1427_, lean_object* v_ism1_1428_, lean_object* v_ism2_1429_, lean_object* v___x_1430_, uint8_t v___x_1431_, uint8_t v___x_1432_, uint8_t v___x_1433_, lean_object* v_val_1434_, lean_object* v___x_1435_, lean_object* v___x_1436_, lean_object* v_name_1437_, lean_object* v___x_1438_, lean_object* v_motive_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1445_ = lean_array_mk(v_ctors_1423_);
v___x_1446_ = lean_array_get_size(v___x_1445_);
v___x_1447_ = lean_unsigned_to_nat(0u);
v___x_1448_ = lean_mk_empty_array_with_capacity(v___x_1446_);
lean_inc_ref(v_motive_1439_);
lean_inc(v_numParams_1426_);
lean_inc(v_tail_1424_);
v___x_1449_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_1424_, v_params_1425_, v_numParams_1426_, v_motive_1439_, v___x_1445_, v___x_1446_, v___x_1447_, v___x_1448_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_);
if (lean_obj_tag(v___x_1449_) == 0)
{
lean_object* v_a_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___f_1454_; uint8_t v___x_1455_; lean_object* v___x_1456_; 
v_a_1450_ = lean_ctor_get(v___x_1449_, 0);
lean_inc(v_a_1450_);
lean_dec_ref(v___x_1449_);
v___x_1451_ = lean_box(v___x_1431_);
v___x_1452_ = lean_box(v___x_1432_);
v___x_1453_ = lean_box(v___x_1433_);
v___f_1454_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__1___boxed), 23, 17);
lean_closure_set(v___f_1454_, 0, v_indName_1427_);
lean_closure_set(v___f_1454_, 1, v_tail_1424_);
lean_closure_set(v___f_1454_, 2, v_params_1425_);
lean_closure_set(v___f_1454_, 3, v_ism1_1428_);
lean_closure_set(v___f_1454_, 4, v_ism2_1429_);
lean_closure_set(v___f_1454_, 5, v_motive_1439_);
lean_closure_set(v___f_1454_, 6, v___x_1430_);
lean_closure_set(v___f_1454_, 7, v___x_1451_);
lean_closure_set(v___f_1454_, 8, v___x_1452_);
lean_closure_set(v___f_1454_, 9, v___x_1453_);
lean_closure_set(v___f_1454_, 10, v___x_1445_);
lean_closure_set(v___f_1454_, 11, v_numParams_1426_);
lean_closure_set(v___f_1454_, 12, v_val_1434_);
lean_closure_set(v___f_1454_, 13, v___x_1435_);
lean_closure_set(v___f_1454_, 14, v___x_1436_);
lean_closure_set(v___f_1454_, 15, v_name_1437_);
lean_closure_set(v___f_1454_, 16, v___x_1438_);
v___x_1455_ = 0;
v___x_1456_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7(v_a_1450_, v___f_1454_, v___x_1455_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_);
return v___x_1456_;
}
else
{
lean_object* v_a_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1464_; 
lean_dec_ref(v___x_1445_);
lean_dec_ref(v_motive_1439_);
lean_dec(v___x_1438_);
lean_dec(v_name_1437_);
lean_dec(v___x_1436_);
lean_dec(v___x_1435_);
lean_dec_ref(v_val_1434_);
lean_dec_ref(v___x_1430_);
lean_dec_ref(v_ism2_1429_);
lean_dec_ref(v_ism1_1428_);
lean_dec(v_indName_1427_);
lean_dec(v_numParams_1426_);
lean_dec_ref(v_params_1425_);
lean_dec(v_tail_1424_);
v_a_1457_ = lean_ctor_get(v___x_1449_, 0);
v_isSharedCheck_1464_ = !lean_is_exclusive(v___x_1449_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1459_ = v___x_1449_;
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_a_1457_);
lean_dec(v___x_1449_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1464_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___x_1462_; 
if (v_isShared_1460_ == 0)
{
v___x_1462_ = v___x_1459_;
goto v_reusejp_1461_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_a_1457_);
v___x_1462_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1461_;
}
v_reusejp_1461_:
{
return v___x_1462_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__2___boxed(lean_object** _args){
lean_object* v_ctors_1465_ = _args[0];
lean_object* v_tail_1466_ = _args[1];
lean_object* v_params_1467_ = _args[2];
lean_object* v_numParams_1468_ = _args[3];
lean_object* v_indName_1469_ = _args[4];
lean_object* v_ism1_1470_ = _args[5];
lean_object* v_ism2_1471_ = _args[6];
lean_object* v___x_1472_ = _args[7];
lean_object* v___x_1473_ = _args[8];
lean_object* v___x_1474_ = _args[9];
lean_object* v___x_1475_ = _args[10];
lean_object* v_val_1476_ = _args[11];
lean_object* v___x_1477_ = _args[12];
lean_object* v___x_1478_ = _args[13];
lean_object* v_name_1479_ = _args[14];
lean_object* v___x_1480_ = _args[15];
lean_object* v_motive_1481_ = _args[16];
lean_object* v___y_1482_ = _args[17];
lean_object* v___y_1483_ = _args[18];
lean_object* v___y_1484_ = _args[19];
lean_object* v___y_1485_ = _args[20];
lean_object* v___y_1486_ = _args[21];
_start:
{
uint8_t v___x_22388__boxed_1487_; uint8_t v___x_22389__boxed_1488_; uint8_t v___x_22390__boxed_1489_; lean_object* v_res_1490_; 
v___x_22388__boxed_1487_ = lean_unbox(v___x_1473_);
v___x_22389__boxed_1488_ = lean_unbox(v___x_1474_);
v___x_22390__boxed_1489_ = lean_unbox(v___x_1475_);
v_res_1490_ = l_Lean_mkCasesOnSameCtorHet___lam__2(v_ctors_1465_, v_tail_1466_, v_params_1467_, v_numParams_1468_, v_indName_1469_, v_ism1_1470_, v_ism2_1471_, v___x_1472_, v___x_22388__boxed_1487_, v___x_22389__boxed_1488_, v___x_22390__boxed_1489_, v_val_1476_, v___x_1477_, v___x_1478_, v_name_1479_, v___x_1480_, v_motive_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_);
lean_dec(v___y_1485_);
lean_dec_ref(v___y_1484_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
return v_res_1490_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1491_; 
v___x_1491_ = lean_mk_string_unchecked("motive", 6, 6);
return v___x_1491_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1492_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0, &l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0_once, _init_l_Lean_mkCasesOnSameCtorHet___lam__3___closed__0);
v___x_1493_ = l_Lean_Name_mkStr1(v___x_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3(lean_object* v_ism1_1494_, lean_object* v_head_1495_, lean_object* v_ctors_1496_, lean_object* v_tail_1497_, lean_object* v_params_1498_, lean_object* v_numParams_1499_, lean_object* v_indName_1500_, lean_object* v_val_1501_, lean_object* v___x_1502_, lean_object* v___x_1503_, lean_object* v_name_1504_, lean_object* v___x_1505_, lean_object* v_ism2_1506_, lean_object* v_x_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; uint8_t v___x_1515_; uint8_t v___x_1516_; uint8_t v___x_1517_; lean_object* v___x_1518_; 
lean_inc_ref(v_ism1_1494_);
v___x_1513_ = l_Array_append___redArg(v_ism1_1494_, v_ism2_1506_);
v___x_1514_ = l_Lean_mkSort(v_head_1495_);
v___x_1515_ = 0;
v___x_1516_ = 1;
v___x_1517_ = 1;
v___x_1518_ = l_Lean_Meta_mkForallFVars(v___x_1513_, v___x_1514_, v___x_1515_, v___x_1516_, v___x_1516_, v___x_1517_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
if (lean_obj_tag(v___x_1518_) == 0)
{
lean_object* v_a_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___f_1523_; lean_object* v___x_1524_; uint8_t v___x_1525_; lean_object* v___x_1526_; 
v_a_1519_ = lean_ctor_get(v___x_1518_, 0);
lean_inc(v_a_1519_);
lean_dec_ref(v___x_1518_);
v___x_1520_ = lean_box(v___x_1515_);
v___x_1521_ = lean_box(v___x_1516_);
v___x_1522_ = lean_box(v___x_1517_);
v___f_1523_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__2___boxed), 22, 16);
lean_closure_set(v___f_1523_, 0, v_ctors_1496_);
lean_closure_set(v___f_1523_, 1, v_tail_1497_);
lean_closure_set(v___f_1523_, 2, v_params_1498_);
lean_closure_set(v___f_1523_, 3, v_numParams_1499_);
lean_closure_set(v___f_1523_, 4, v_indName_1500_);
lean_closure_set(v___f_1523_, 5, v_ism1_1494_);
lean_closure_set(v___f_1523_, 6, v_ism2_1506_);
lean_closure_set(v___f_1523_, 7, v___x_1513_);
lean_closure_set(v___f_1523_, 8, v___x_1520_);
lean_closure_set(v___f_1523_, 9, v___x_1521_);
lean_closure_set(v___f_1523_, 10, v___x_1522_);
lean_closure_set(v___f_1523_, 11, v_val_1501_);
lean_closure_set(v___f_1523_, 12, v___x_1502_);
lean_closure_set(v___f_1523_, 13, v___x_1503_);
lean_closure_set(v___f_1523_, 14, v_name_1504_);
lean_closure_set(v___f_1523_, 15, v___x_1505_);
v___x_1524_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1, &l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1_once, _init_l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1);
v___x_1525_ = 0;
v___x_1526_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v___x_1524_, v___x_1517_, v_a_1519_, v___f_1523_, v___x_1525_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
return v___x_1526_;
}
else
{
lean_dec_ref(v___x_1513_);
lean_dec_ref(v_ism2_1506_);
lean_dec(v___x_1505_);
lean_dec(v_name_1504_);
lean_dec(v___x_1503_);
lean_dec(v___x_1502_);
lean_dec_ref(v_val_1501_);
lean_dec(v_indName_1500_);
lean_dec(v_numParams_1499_);
lean_dec_ref(v_params_1498_);
lean_dec(v_tail_1497_);
lean_dec(v_ctors_1496_);
lean_dec_ref(v_ism1_1494_);
return v___x_1518_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__3___boxed(lean_object** _args){
lean_object* v_ism1_1527_ = _args[0];
lean_object* v_head_1528_ = _args[1];
lean_object* v_ctors_1529_ = _args[2];
lean_object* v_tail_1530_ = _args[3];
lean_object* v_params_1531_ = _args[4];
lean_object* v_numParams_1532_ = _args[5];
lean_object* v_indName_1533_ = _args[6];
lean_object* v_val_1534_ = _args[7];
lean_object* v___x_1535_ = _args[8];
lean_object* v___x_1536_ = _args[9];
lean_object* v_name_1537_ = _args[10];
lean_object* v___x_1538_ = _args[11];
lean_object* v_ism2_1539_ = _args[12];
lean_object* v_x_1540_ = _args[13];
lean_object* v___y_1541_ = _args[14];
lean_object* v___y_1542_ = _args[15];
lean_object* v___y_1543_ = _args[16];
lean_object* v___y_1544_ = _args[17];
lean_object* v___y_1545_ = _args[18];
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lean_mkCasesOnSameCtorHet___lam__3(v_ism1_1527_, v_head_1528_, v_ctors_1529_, v_tail_1530_, v_params_1531_, v_numParams_1532_, v_indName_1533_, v_val_1534_, v___x_1535_, v___x_1536_, v_name_1537_, v___x_1538_, v_ism2_1539_, v_x_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
lean_dec_ref(v_x_1540_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4(lean_object* v_head_1547_, lean_object* v_ctors_1548_, lean_object* v_tail_1549_, lean_object* v_params_1550_, lean_object* v_numParams_1551_, lean_object* v_indName_1552_, lean_object* v_val_1553_, lean_object* v___x_1554_, lean_object* v___x_1555_, lean_object* v_name_1556_, lean_object* v___x_1557_, lean_object* v_t_1558_, lean_object* v___x_1559_, lean_object* v_ism1_1560_, lean_object* v_x_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_){
_start:
{
lean_object* v___f_1567_; uint8_t v___x_1568_; lean_object* v___x_1569_; 
v___f_1567_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__3___boxed), 19, 12);
lean_closure_set(v___f_1567_, 0, v_ism1_1560_);
lean_closure_set(v___f_1567_, 1, v_head_1547_);
lean_closure_set(v___f_1567_, 2, v_ctors_1548_);
lean_closure_set(v___f_1567_, 3, v_tail_1549_);
lean_closure_set(v___f_1567_, 4, v_params_1550_);
lean_closure_set(v___f_1567_, 5, v_numParams_1551_);
lean_closure_set(v___f_1567_, 6, v_indName_1552_);
lean_closure_set(v___f_1567_, 7, v_val_1553_);
lean_closure_set(v___f_1567_, 8, v___x_1554_);
lean_closure_set(v___f_1567_, 9, v___x_1555_);
lean_closure_set(v___f_1567_, 10, v_name_1556_);
lean_closure_set(v___f_1567_, 11, v___x_1557_);
v___x_1568_ = 0;
v___x_1569_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1558_, v___x_1559_, v___f_1567_, v___x_1568_, v___x_1568_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__4___boxed(lean_object** _args){
lean_object* v_head_1570_ = _args[0];
lean_object* v_ctors_1571_ = _args[1];
lean_object* v_tail_1572_ = _args[2];
lean_object* v_params_1573_ = _args[3];
lean_object* v_numParams_1574_ = _args[4];
lean_object* v_indName_1575_ = _args[5];
lean_object* v_val_1576_ = _args[6];
lean_object* v___x_1577_ = _args[7];
lean_object* v___x_1578_ = _args[8];
lean_object* v_name_1579_ = _args[9];
lean_object* v___x_1580_ = _args[10];
lean_object* v_t_1581_ = _args[11];
lean_object* v___x_1582_ = _args[12];
lean_object* v_ism1_1583_ = _args[13];
lean_object* v_x_1584_ = _args[14];
lean_object* v___y_1585_ = _args[15];
lean_object* v___y_1586_ = _args[16];
lean_object* v___y_1587_ = _args[17];
lean_object* v___y_1588_ = _args[18];
lean_object* v___y_1589_ = _args[19];
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = l_Lean_mkCasesOnSameCtorHet___lam__4(v_head_1570_, v_ctors_1571_, v_tail_1572_, v_params_1573_, v_numParams_1574_, v_indName_1575_, v_val_1576_, v___x_1577_, v___x_1578_, v_name_1579_, v___x_1580_, v_t_1581_, v___x_1582_, v_ism1_1583_, v_x_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
lean_dec_ref(v_x_1584_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5(lean_object* v_numIndices_1591_, lean_object* v___x_1592_, lean_object* v_head_1593_, lean_object* v_ctors_1594_, lean_object* v_tail_1595_, lean_object* v_params_1596_, lean_object* v_numParams_1597_, lean_object* v_indName_1598_, lean_object* v_val_1599_, lean_object* v___x_1600_, lean_object* v___x_1601_, lean_object* v_name_1602_, lean_object* v_x_1603_, lean_object* v_t_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___f_1612_; uint8_t v___x_1613_; lean_object* v___x_1614_; 
v___x_1610_ = lean_nat_add(v_numIndices_1591_, v___x_1592_);
v___x_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
lean_inc_ref(v___x_1611_);
lean_inc_ref(v_t_1604_);
v___f_1612_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__4___boxed), 20, 13);
lean_closure_set(v___f_1612_, 0, v_head_1593_);
lean_closure_set(v___f_1612_, 1, v_ctors_1594_);
lean_closure_set(v___f_1612_, 2, v_tail_1595_);
lean_closure_set(v___f_1612_, 3, v_params_1596_);
lean_closure_set(v___f_1612_, 4, v_numParams_1597_);
lean_closure_set(v___f_1612_, 5, v_indName_1598_);
lean_closure_set(v___f_1612_, 6, v_val_1599_);
lean_closure_set(v___f_1612_, 7, v___x_1600_);
lean_closure_set(v___f_1612_, 8, v___x_1601_);
lean_closure_set(v___f_1612_, 9, v_name_1602_);
lean_closure_set(v___f_1612_, 10, v___x_1592_);
lean_closure_set(v___f_1612_, 11, v_t_1604_);
lean_closure_set(v___f_1612_, 12, v___x_1611_);
v___x_1613_ = 0;
v___x_1614_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1604_, v___x_1611_, v___f_1612_, v___x_1613_, v___x_1613_, v___y_1605_, v___y_1606_, v___y_1607_, v___y_1608_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__5___boxed(lean_object** _args){
lean_object* v_numIndices_1615_ = _args[0];
lean_object* v___x_1616_ = _args[1];
lean_object* v_head_1617_ = _args[2];
lean_object* v_ctors_1618_ = _args[3];
lean_object* v_tail_1619_ = _args[4];
lean_object* v_params_1620_ = _args[5];
lean_object* v_numParams_1621_ = _args[6];
lean_object* v_indName_1622_ = _args[7];
lean_object* v_val_1623_ = _args[8];
lean_object* v___x_1624_ = _args[9];
lean_object* v___x_1625_ = _args[10];
lean_object* v_name_1626_ = _args[11];
lean_object* v_x_1627_ = _args[12];
lean_object* v_t_1628_ = _args[13];
lean_object* v___y_1629_ = _args[14];
lean_object* v___y_1630_ = _args[15];
lean_object* v___y_1631_ = _args[16];
lean_object* v___y_1632_ = _args[17];
lean_object* v___y_1633_ = _args[18];
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Lean_mkCasesOnSameCtorHet___lam__5(v_numIndices_1615_, v___x_1616_, v_head_1617_, v_ctors_1618_, v_tail_1619_, v_params_1620_, v_numParams_1621_, v_indName_1622_, v_val_1623_, v___x_1624_, v___x_1625_, v_name_1626_, v_x_1627_, v_t_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
lean_dec_ref(v_x_1627_);
lean_dec(v_numIndices_1615_);
return v_res_1634_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0(void){
_start:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; 
v___x_1635_ = lean_unsigned_to_nat(1u);
v___x_1636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1636_, 0, v___x_1635_);
return v___x_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6(lean_object* v_numIndices_1637_, lean_object* v_head_1638_, lean_object* v_ctors_1639_, lean_object* v_tail_1640_, lean_object* v_numParams_1641_, lean_object* v_indName_1642_, lean_object* v_val_1643_, lean_object* v___x_1644_, lean_object* v___x_1645_, lean_object* v_name_1646_, lean_object* v_params_1647_, lean_object* v_t_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_){
_start:
{
lean_object* v___x_1654_; lean_object* v___f_1655_; lean_object* v___x_1656_; uint8_t v___x_1657_; lean_object* v___x_1658_; 
v___x_1654_ = lean_unsigned_to_nat(1u);
v___f_1655_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__5___boxed), 19, 12);
lean_closure_set(v___f_1655_, 0, v_numIndices_1637_);
lean_closure_set(v___f_1655_, 1, v___x_1654_);
lean_closure_set(v___f_1655_, 2, v_head_1638_);
lean_closure_set(v___f_1655_, 3, v_ctors_1639_);
lean_closure_set(v___f_1655_, 4, v_tail_1640_);
lean_closure_set(v___f_1655_, 5, v_params_1647_);
lean_closure_set(v___f_1655_, 6, v_numParams_1641_);
lean_closure_set(v___f_1655_, 7, v_indName_1642_);
lean_closure_set(v___f_1655_, 8, v_val_1643_);
lean_closure_set(v___f_1655_, 9, v___x_1644_);
lean_closure_set(v___f_1655_, 10, v___x_1645_);
lean_closure_set(v___f_1655_, 11, v_name_1646_);
v___x_1656_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0, &l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0_once, _init_l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0);
v___x_1657_ = 0;
v___x_1658_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_1648_, v___x_1656_, v___f_1655_, v___x_1657_, v___x_1657_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__6___boxed(lean_object** _args){
lean_object* v_numIndices_1659_ = _args[0];
lean_object* v_head_1660_ = _args[1];
lean_object* v_ctors_1661_ = _args[2];
lean_object* v_tail_1662_ = _args[3];
lean_object* v_numParams_1663_ = _args[4];
lean_object* v_indName_1664_ = _args[5];
lean_object* v_val_1665_ = _args[6];
lean_object* v___x_1666_ = _args[7];
lean_object* v___x_1667_ = _args[8];
lean_object* v_name_1668_ = _args[9];
lean_object* v_params_1669_ = _args[10];
lean_object* v_t_1670_ = _args[11];
lean_object* v___y_1671_ = _args[12];
lean_object* v___y_1672_ = _args[13];
lean_object* v___y_1673_ = _args[14];
lean_object* v___y_1674_ = _args[15];
lean_object* v___y_1675_ = _args[16];
_start:
{
lean_object* v_res_1676_; 
v_res_1676_ = l_Lean_mkCasesOnSameCtorHet___lam__6(v_numIndices_1659_, v_head_1660_, v_ctors_1661_, v_tail_1662_, v_numParams_1663_, v_indName_1664_, v_val_1665_, v___x_1666_, v___x_1667_, v_name_1668_, v_params_1669_, v_t_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_);
lean_dec(v___y_1674_);
lean_dec_ref(v___y_1673_);
lean_dec(v___y_1672_);
lean_dec_ref(v___y_1671_);
return v_res_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7(lean_object* v_a_1677_, lean_object* v_declName_1678_, lean_object* v_levelParams_1679_, uint8_t v___x_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_){
_start:
{
lean_object* v___x_1686_; 
lean_inc(v___y_1684_);
lean_inc_ref(v___y_1683_);
lean_inc_ref(v_a_1677_);
v___x_1686_ = lean_infer_type(v_a_1677_, v___y_1681_, v___y_1682_, v___y_1683_, v___y_1684_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v_a_1690_; lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1698_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc(v_a_1687_);
lean_dec_ref(v___x_1686_);
v___x_1688_ = lean_box(1);
v___x_1689_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_declName_1678_, v_levelParams_1679_, v_a_1687_, v_a_1677_, v___x_1688_, v___y_1684_);
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1692_ = v___x_1689_;
v_isShared_1693_ = v_isSharedCheck_1698_;
goto v_resetjp_1691_;
}
else
{
lean_inc(v_a_1690_);
lean_dec(v___x_1689_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1698_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v___x_1695_; 
if (v_isShared_1693_ == 0)
{
lean_ctor_set_tag(v___x_1692_, 1);
v___x_1695_ = v___x_1692_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_a_1690_);
v___x_1695_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
lean_object* v___x_1696_; 
v___x_1696_ = l_Lean_addDecl(v___x_1695_, v___x_1680_, v___y_1683_, v___y_1684_);
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
return v___x_1696_;
}
}
}
else
{
lean_object* v_a_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1706_; 
lean_dec(v___y_1684_);
lean_dec_ref(v___y_1683_);
lean_dec(v_levelParams_1679_);
lean_dec(v_declName_1678_);
lean_dec_ref(v_a_1677_);
v_a_1699_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1706_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1706_ == 0)
{
v___x_1701_ = v___x_1686_;
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_a_1699_);
lean_dec(v___x_1686_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1706_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1702_ == 0)
{
v___x_1704_ = v___x_1701_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1705_; 
v_reuseFailAlloc_1705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1705_, 0, v_a_1699_);
v___x_1704_ = v_reuseFailAlloc_1705_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
return v___x_1704_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___lam__7___boxed(lean_object* v_a_1707_, lean_object* v_declName_1708_, lean_object* v_levelParams_1709_, lean_object* v___x_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_){
_start:
{
uint8_t v___x_22680__boxed_1716_; lean_object* v_res_1717_; 
v___x_22680__boxed_1716_ = lean_unbox(v___x_1710_);
v_res_1717_ = l_Lean_mkCasesOnSameCtorHet___lam__7(v_a_1707_, v_declName_1708_, v_levelParams_1709_, v___x_22680__boxed_1716_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_);
return v_res_1717_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0(void){
_start:
{
lean_object* v___x_1718_; 
v___x_1718_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1718_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1(void){
_start:
{
lean_object* v___x_1719_; lean_object* v___x_1720_; 
v___x_1719_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__0);
v___x_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1719_);
return v___x_1720_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2(void){
_start:
{
lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
v___x_1721_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1);
v___x_1722_ = lean_unsigned_to_nat(0u);
v___x_1723_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1723_, 0, v___x_1722_);
lean_ctor_set(v___x_1723_, 1, v___x_1722_);
lean_ctor_set(v___x_1723_, 2, v___x_1722_);
lean_ctor_set(v___x_1723_, 3, v___x_1722_);
lean_ctor_set(v___x_1723_, 4, v___x_1721_);
lean_ctor_set(v___x_1723_, 5, v___x_1721_);
lean_ctor_set(v___x_1723_, 6, v___x_1721_);
lean_ctor_set(v___x_1723_, 7, v___x_1721_);
lean_ctor_set(v___x_1723_, 8, v___x_1721_);
lean_ctor_set(v___x_1723_, 9, v___x_1721_);
return v___x_1723_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3(void){
_start:
{
lean_object* v___x_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1724_ = lean_unsigned_to_nat(32u);
v___x_1725_ = lean_mk_empty_array_with_capacity(v___x_1724_);
v___x_1726_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1726_, 0, v___x_1725_);
return v___x_1726_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4(void){
_start:
{
size_t v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1727_ = ((size_t)5ULL);
v___x_1728_ = lean_unsigned_to_nat(0u);
v___x_1729_ = lean_unsigned_to_nat(32u);
v___x_1730_ = lean_mk_empty_array_with_capacity(v___x_1729_);
v___x_1731_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__3);
v___x_1732_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1732_, 0, v___x_1731_);
lean_ctor_set(v___x_1732_, 1, v___x_1730_);
lean_ctor_set(v___x_1732_, 2, v___x_1728_);
lean_ctor_set(v___x_1732_, 3, v___x_1728_);
lean_ctor_set_usize(v___x_1732_, 4, v___x_1727_);
return v___x_1732_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5(void){
_start:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1733_ = lean_box(1);
v___x_1734_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__4);
v___x_1735_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__1);
v___x_1736_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1736_, 0, v___x_1735_);
lean_ctor_set(v___x_1736_, 1, v___x_1734_);
lean_ctor_set(v___x_1736_, 2, v___x_1733_);
return v___x_1736_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6(void){
_start:
{
lean_object* v___x_1737_; 
v___x_1737_ = lean_mk_string_unchecked("A private declaration `", 23, 23);
return v___x_1737_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7(void){
_start:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1738_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__6);
v___x_1739_ = l_Lean_stringToMessageData(v___x_1738_);
return v___x_1739_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8(void){
_start:
{
lean_object* v___x_1740_; 
v___x_1740_ = lean_mk_string_unchecked("` (from the current module) exists but would need to be public to access here.", 78, 78);
return v___x_1740_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9(void){
_start:
{
lean_object* v___x_1741_; lean_object* v___x_1742_; 
v___x_1741_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__8);
v___x_1742_ = l_Lean_stringToMessageData(v___x_1741_);
return v___x_1742_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10(void){
_start:
{
lean_object* v___x_1743_; 
v___x_1743_ = lean_mk_string_unchecked("A public declaration `", 22, 22);
return v___x_1743_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11(void){
_start:
{
lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1744_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__10);
v___x_1745_ = l_Lean_stringToMessageData(v___x_1744_);
return v___x_1745_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12(void){
_start:
{
lean_object* v___x_1746_; 
v___x_1746_ = lean_mk_string_unchecked("` exists but is imported privately; consider adding `public import ", 67, 67);
return v___x_1746_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13(void){
_start:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; 
v___x_1747_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__12);
v___x_1748_ = l_Lean_stringToMessageData(v___x_1747_);
return v___x_1748_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14(void){
_start:
{
lean_object* v___x_1749_; 
v___x_1749_ = lean_mk_string_unchecked("`.", 2, 2);
return v___x_1749_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15(void){
_start:
{
lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1750_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__14);
v___x_1751_ = l_Lean_stringToMessageData(v___x_1750_);
return v___x_1751_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16(void){
_start:
{
lean_object* v___x_1752_; 
v___x_1752_ = lean_mk_string_unchecked("` (from `", 9, 9);
return v___x_1752_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17(void){
_start:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1753_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__16);
v___x_1754_ = l_Lean_stringToMessageData(v___x_1753_);
return v___x_1754_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18(void){
_start:
{
lean_object* v___x_1755_; 
v___x_1755_ = lean_mk_string_unchecked("`) exists but would need to be public to access here.", 53, 53);
return v___x_1755_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__19(void){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1756_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__18);
v___x_1757_ = l_Lean_stringToMessageData(v___x_1756_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(lean_object* v_msg_1758_, lean_object* v_declHint_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v___x_1762_; lean_object* v_env_1763_; uint8_t v___x_1764_; 
v___x_1762_ = lean_st_ref_get(v___y_1760_);
v_env_1763_ = lean_ctor_get(v___x_1762_, 0);
lean_inc_ref(v_env_1763_);
lean_dec(v___x_1762_);
v___x_1764_ = l_Lean_Name_isAnonymous(v_declHint_1759_);
if (v___x_1764_ == 0)
{
uint8_t v_isExporting_1765_; 
v_isExporting_1765_ = lean_ctor_get_uint8(v_env_1763_, sizeof(void*)*8);
if (v_isExporting_1765_ == 0)
{
lean_object* v___x_1766_; 
lean_dec_ref(v_env_1763_);
lean_dec(v_declHint_1759_);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v_msg_1758_);
return v___x_1766_;
}
else
{
lean_object* v___x_1767_; uint8_t v___x_1768_; 
lean_inc_ref(v_env_1763_);
v___x_1767_ = l_Lean_Environment_setExporting(v_env_1763_, v___x_1764_);
lean_inc(v_declHint_1759_);
lean_inc_ref(v___x_1767_);
v___x_1768_ = l_Lean_Environment_contains(v___x_1767_, v_declHint_1759_, v_isExporting_1765_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; 
lean_dec_ref(v___x_1767_);
lean_dec_ref(v_env_1763_);
lean_dec(v_declHint_1759_);
v___x_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1769_, 0, v_msg_1758_);
return v___x_1769_;
}
else
{
lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v_c_1775_; lean_object* v___x_1776_; 
v___x_1770_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__2);
v___x_1771_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__5);
v___x_1772_ = l_Lean_Options_empty;
v___x_1773_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1767_);
lean_ctor_set(v___x_1773_, 1, v___x_1770_);
lean_ctor_set(v___x_1773_, 2, v___x_1771_);
lean_ctor_set(v___x_1773_, 3, v___x_1772_);
lean_inc(v_declHint_1759_);
v___x_1774_ = l_Lean_MessageData_ofConstName(v_declHint_1759_, v___x_1764_);
v_c_1775_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1775_, 0, v___x_1773_);
lean_ctor_set(v_c_1775_, 1, v___x_1774_);
v___x_1776_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1763_, v_declHint_1759_);
if (lean_obj_tag(v___x_1776_) == 0)
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
lean_dec_ref(v_env_1763_);
lean_dec(v_declHint_1759_);
v___x_1777_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7);
v___x_1778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1778_, 0, v___x_1777_);
lean_ctor_set(v___x_1778_, 1, v_c_1775_);
v___x_1779_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__9);
v___x_1780_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1780_, 0, v___x_1778_);
lean_ctor_set(v___x_1780_, 1, v___x_1779_);
v___x_1781_ = l_Lean_MessageData_note(v___x_1780_);
v___x_1782_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1782_, 0, v_msg_1758_);
lean_ctor_set(v___x_1782_, 1, v___x_1781_);
v___x_1783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1783_, 0, v___x_1782_);
return v___x_1783_;
}
else
{
lean_object* v_val_1784_; lean_object* v___x_1786_; uint8_t v_isShared_1787_; uint8_t v_isSharedCheck_1819_; 
v_val_1784_ = lean_ctor_get(v___x_1776_, 0);
v_isSharedCheck_1819_ = !lean_is_exclusive(v___x_1776_);
if (v_isSharedCheck_1819_ == 0)
{
v___x_1786_ = v___x_1776_;
v_isShared_1787_ = v_isSharedCheck_1819_;
goto v_resetjp_1785_;
}
else
{
lean_inc(v_val_1784_);
lean_dec(v___x_1776_);
v___x_1786_ = lean_box(0);
v_isShared_1787_ = v_isSharedCheck_1819_;
goto v_resetjp_1785_;
}
v_resetjp_1785_:
{
lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v_mod_1791_; uint8_t v___x_1792_; 
v___x_1788_ = lean_box(0);
v___x_1789_ = l_Lean_Environment_header(v_env_1763_);
lean_dec_ref(v_env_1763_);
v___x_1790_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1789_);
v_mod_1791_ = lean_array_get(v___x_1788_, v___x_1790_, v_val_1784_);
lean_dec(v_val_1784_);
lean_dec_ref(v___x_1790_);
v___x_1792_ = l_Lean_isPrivateName(v_declHint_1759_);
lean_dec(v_declHint_1759_);
if (v___x_1792_ == 0)
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1804_; 
v___x_1793_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__11);
v___x_1794_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1794_, 0, v___x_1793_);
lean_ctor_set(v___x_1794_, 1, v_c_1775_);
v___x_1795_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__13);
v___x_1796_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1794_);
lean_ctor_set(v___x_1796_, 1, v___x_1795_);
v___x_1797_ = l_Lean_MessageData_ofName(v_mod_1791_);
v___x_1798_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1798_, 0, v___x_1796_);
lean_ctor_set(v___x_1798_, 1, v___x_1797_);
v___x_1799_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__15);
v___x_1800_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1800_, 0, v___x_1798_);
lean_ctor_set(v___x_1800_, 1, v___x_1799_);
v___x_1801_ = l_Lean_MessageData_note(v___x_1800_);
v___x_1802_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1802_, 0, v_msg_1758_);
lean_ctor_set(v___x_1802_, 1, v___x_1801_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set_tag(v___x_1786_, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1802_);
v___x_1804_ = v___x_1786_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v___x_1802_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
else
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1817_; 
v___x_1806_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__7);
v___x_1807_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1807_, 0, v___x_1806_);
lean_ctor_set(v___x_1807_, 1, v_c_1775_);
v___x_1808_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__17);
v___x_1809_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1809_, 0, v___x_1807_);
lean_ctor_set(v___x_1809_, 1, v___x_1808_);
v___x_1810_ = l_Lean_MessageData_ofName(v_mod_1791_);
v___x_1811_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1809_);
lean_ctor_set(v___x_1811_, 1, v___x_1810_);
v___x_1812_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___closed__19);
v___x_1813_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1813_, 0, v___x_1811_);
lean_ctor_set(v___x_1813_, 1, v___x_1812_);
v___x_1814_ = l_Lean_MessageData_note(v___x_1813_);
v___x_1815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1815_, 0, v_msg_1758_);
lean_ctor_set(v___x_1815_, 1, v___x_1814_);
if (v_isShared_1787_ == 0)
{
lean_ctor_set_tag(v___x_1786_, 0);
lean_ctor_set(v___x_1786_, 0, v___x_1815_);
v___x_1817_ = v___x_1786_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v___x_1815_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1820_; 
lean_dec_ref(v_env_1763_);
lean_dec(v_declHint_1759_);
v___x_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1820_, 0, v_msg_1758_);
return v___x_1820_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg___boxed(lean_object* v_msg_1821_, lean_object* v_declHint_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_1821_, v_declHint_1822_, v___y_1823_);
lean_dec(v___y_1823_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(lean_object* v_msg_1826_, lean_object* v_declHint_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_){
_start:
{
lean_object* v___x_1833_; lean_object* v_a_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_1843_; 
v___x_1833_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_1826_, v_declHint_1827_, v___y_1831_);
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1833_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1836_ = v___x_1833_;
v_isShared_1837_ = v_isSharedCheck_1843_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_a_1834_);
lean_dec(v___x_1833_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_1843_;
goto v_resetjp_1835_;
}
v_resetjp_1835_:
{
lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1841_; 
v___x_1838_ = l_Lean_unknownIdentifierMessageTag;
v___x_1839_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1839_, 0, v___x_1838_);
lean_ctor_set(v___x_1839_, 1, v_a_1834_);
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 0, v___x_1839_);
v___x_1841_ = v___x_1836_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1842_; 
v_reuseFailAlloc_1842_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1842_, 0, v___x_1839_);
v___x_1841_ = v_reuseFailAlloc_1842_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
return v___x_1841_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22___boxed(lean_object* v_msg_1844_, lean_object* v_declHint_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_){
_start:
{
lean_object* v_res_1851_; 
v_res_1851_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(v_msg_1844_, v_declHint_1845_, v___y_1846_, v___y_1847_, v___y_1848_, v___y_1849_);
lean_dec(v___y_1849_);
lean_dec_ref(v___y_1848_);
lean_dec(v___y_1847_);
lean_dec_ref(v___y_1846_);
return v_res_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(lean_object* v_msgData_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_, lean_object* v___y_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v___x_1858_; lean_object* v_env_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v_mctx_1862_; lean_object* v_lctx_1863_; lean_object* v_options_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; 
v___x_1858_ = lean_st_ref_get(v___y_1856_);
v_env_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc_ref(v_env_1859_);
lean_dec(v___x_1858_);
v___x_1860_ = lean_st_ref_get(v___y_1856_);
lean_dec(v___x_1860_);
v___x_1861_ = lean_st_ref_get(v___y_1854_);
v_mctx_1862_ = lean_ctor_get(v___x_1861_, 0);
lean_inc_ref(v_mctx_1862_);
lean_dec(v___x_1861_);
v_lctx_1863_ = lean_ctor_get(v___y_1853_, 2);
v_options_1864_ = lean_ctor_get(v___y_1855_, 2);
lean_inc_ref(v_options_1864_);
lean_inc_ref(v_lctx_1863_);
v___x_1865_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1865_, 0, v_env_1859_);
lean_ctor_set(v___x_1865_, 1, v_mctx_1862_);
lean_ctor_set(v___x_1865_, 2, v_lctx_1863_);
lean_ctor_set(v___x_1865_, 3, v_options_1864_);
v___x_1866_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1866_, 0, v___x_1865_);
lean_ctor_set(v___x_1866_, 1, v_msgData_1852_);
v___x_1867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1867_, 0, v___x_1866_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25___boxed(lean_object* v_msgData_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_){
_start:
{
lean_object* v_res_1874_; 
v_res_1874_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(v_msgData_1868_, v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_);
lean_dec(v___y_1872_);
lean_dec_ref(v___y_1871_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
return v_res_1874_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(lean_object* v_msg_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v_ref_1881_; lean_object* v___x_1882_; lean_object* v_a_1883_; lean_object* v___x_1885_; uint8_t v_isShared_1886_; uint8_t v_isSharedCheck_1891_; 
v_ref_1881_ = lean_ctor_get(v___y_1878_, 5);
v___x_1882_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20_spec__25(v_msg_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
v_a_1883_ = lean_ctor_get(v___x_1882_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1882_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1885_ = v___x_1882_;
v_isShared_1886_ = v_isSharedCheck_1891_;
goto v_resetjp_1884_;
}
else
{
lean_inc(v_a_1883_);
lean_dec(v___x_1882_);
v___x_1885_ = lean_box(0);
v_isShared_1886_ = v_isSharedCheck_1891_;
goto v_resetjp_1884_;
}
v_resetjp_1884_:
{
lean_object* v___x_1887_; lean_object* v___x_1889_; 
lean_inc(v_ref_1881_);
v___x_1887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1887_, 0, v_ref_1881_);
lean_ctor_set(v___x_1887_, 1, v_a_1883_);
if (v_isShared_1886_ == 0)
{
lean_ctor_set_tag(v___x_1885_, 1);
lean_ctor_set(v___x_1885_, 0, v___x_1887_);
v___x_1889_ = v___x_1885_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v___x_1887_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg___boxed(lean_object* v_msg_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1895_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(lean_object* v_ref_1899_, lean_object* v_msg_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_){
_start:
{
lean_object* v_fileName_1906_; lean_object* v_fileMap_1907_; lean_object* v_options_1908_; lean_object* v_currRecDepth_1909_; lean_object* v_maxRecDepth_1910_; lean_object* v_ref_1911_; lean_object* v_currNamespace_1912_; lean_object* v_openDecls_1913_; lean_object* v_initHeartbeats_1914_; lean_object* v_maxHeartbeats_1915_; lean_object* v_quotContext_1916_; lean_object* v_currMacroScope_1917_; uint8_t v_diag_1918_; lean_object* v_cancelTk_x3f_1919_; uint8_t v_suppressElabErrors_1920_; lean_object* v_inheritedTraceOptions_1921_; lean_object* v_ref_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; 
v_fileName_1906_ = lean_ctor_get(v___y_1903_, 0);
v_fileMap_1907_ = lean_ctor_get(v___y_1903_, 1);
v_options_1908_ = lean_ctor_get(v___y_1903_, 2);
v_currRecDepth_1909_ = lean_ctor_get(v___y_1903_, 3);
v_maxRecDepth_1910_ = lean_ctor_get(v___y_1903_, 4);
v_ref_1911_ = lean_ctor_get(v___y_1903_, 5);
v_currNamespace_1912_ = lean_ctor_get(v___y_1903_, 6);
v_openDecls_1913_ = lean_ctor_get(v___y_1903_, 7);
v_initHeartbeats_1914_ = lean_ctor_get(v___y_1903_, 8);
v_maxHeartbeats_1915_ = lean_ctor_get(v___y_1903_, 9);
v_quotContext_1916_ = lean_ctor_get(v___y_1903_, 10);
v_currMacroScope_1917_ = lean_ctor_get(v___y_1903_, 11);
v_diag_1918_ = lean_ctor_get_uint8(v___y_1903_, sizeof(void*)*14);
v_cancelTk_x3f_1919_ = lean_ctor_get(v___y_1903_, 12);
v_suppressElabErrors_1920_ = lean_ctor_get_uint8(v___y_1903_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1921_ = lean_ctor_get(v___y_1903_, 13);
v_ref_1922_ = l_Lean_replaceRef(v_ref_1899_, v_ref_1911_);
lean_inc_ref(v_inheritedTraceOptions_1921_);
lean_inc(v_cancelTk_x3f_1919_);
lean_inc(v_currMacroScope_1917_);
lean_inc(v_quotContext_1916_);
lean_inc(v_maxHeartbeats_1915_);
lean_inc(v_initHeartbeats_1914_);
lean_inc(v_openDecls_1913_);
lean_inc(v_currNamespace_1912_);
lean_inc(v_maxRecDepth_1910_);
lean_inc(v_currRecDepth_1909_);
lean_inc_ref(v_options_1908_);
lean_inc_ref(v_fileMap_1907_);
lean_inc_ref(v_fileName_1906_);
v___x_1923_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1923_, 0, v_fileName_1906_);
lean_ctor_set(v___x_1923_, 1, v_fileMap_1907_);
lean_ctor_set(v___x_1923_, 2, v_options_1908_);
lean_ctor_set(v___x_1923_, 3, v_currRecDepth_1909_);
lean_ctor_set(v___x_1923_, 4, v_maxRecDepth_1910_);
lean_ctor_set(v___x_1923_, 5, v_ref_1922_);
lean_ctor_set(v___x_1923_, 6, v_currNamespace_1912_);
lean_ctor_set(v___x_1923_, 7, v_openDecls_1913_);
lean_ctor_set(v___x_1923_, 8, v_initHeartbeats_1914_);
lean_ctor_set(v___x_1923_, 9, v_maxHeartbeats_1915_);
lean_ctor_set(v___x_1923_, 10, v_quotContext_1916_);
lean_ctor_set(v___x_1923_, 11, v_currMacroScope_1917_);
lean_ctor_set(v___x_1923_, 12, v_cancelTk_x3f_1919_);
lean_ctor_set(v___x_1923_, 13, v_inheritedTraceOptions_1921_);
lean_ctor_set_uint8(v___x_1923_, sizeof(void*)*14, v_diag_1918_);
lean_ctor_set_uint8(v___x_1923_, sizeof(void*)*14 + 1, v_suppressElabErrors_1920_);
v___x_1924_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_1900_, v___y_1901_, v___y_1902_, v___x_1923_, v___y_1904_);
lean_dec_ref(v___x_1923_);
return v___x_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg___boxed(lean_object* v_ref_1925_, lean_object* v_msg_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_1925_, v_msg_1926_, v___y_1927_, v___y_1928_, v___y_1929_, v___y_1930_);
lean_dec(v___y_1930_);
lean_dec_ref(v___y_1929_);
lean_dec(v___y_1928_);
lean_dec_ref(v___y_1927_);
lean_dec(v_ref_1925_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(lean_object* v_ref_1933_, lean_object* v_msg_1934_, lean_object* v_declHint_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v___x_1941_; lean_object* v_a_1942_; lean_object* v___x_1943_; 
v___x_1941_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22(v_msg_1934_, v_declHint_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_);
v_a_1942_ = lean_ctor_get(v___x_1941_, 0);
lean_inc(v_a_1942_);
lean_dec_ref(v___x_1941_);
v___x_1943_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_1933_, v_a_1942_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_);
return v___x_1943_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg___boxed(lean_object* v_ref_1944_, lean_object* v_msg_1945_, lean_object* v_declHint_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_){
_start:
{
lean_object* v_res_1952_; 
v_res_1952_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_1944_, v_msg_1945_, v_declHint_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec(v_ref_1944_);
return v_res_1952_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_1953_; 
v___x_1953_ = lean_mk_string_unchecked("Unknown constant `", 18, 18);
return v___x_1953_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1954_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__0);
v___x_1955_ = l_Lean_stringToMessageData(v___x_1954_);
return v___x_1955_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_1956_; 
v___x_1956_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_1956_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1957_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__2);
v___x_1958_ = l_Lean_stringToMessageData(v___x_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(lean_object* v_ref_1959_, lean_object* v_constName_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v___x_1966_; uint8_t v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1966_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__1);
v___x_1967_ = 0;
lean_inc(v_constName_1960_);
v___x_1968_ = l_Lean_MessageData_ofConstName(v_constName_1960_, v___x_1967_);
v___x_1969_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1966_);
lean_ctor_set(v___x_1969_, 1, v___x_1968_);
v___x_1970_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3);
v___x_1971_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1971_, 0, v___x_1969_);
lean_ctor_set(v___x_1971_, 1, v___x_1970_);
v___x_1972_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_1959_, v___x_1971_, v_constName_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
return v___x_1972_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___boxed(lean_object* v_ref_1973_, lean_object* v_constName_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_1973_, v_constName_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1977_);
lean_dec(v___y_1976_);
lean_dec_ref(v___y_1975_);
lean_dec(v_ref_1973_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(lean_object* v_constName_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_){
_start:
{
lean_object* v_ref_1987_; lean_object* v___x_1988_; 
v_ref_1987_ = lean_ctor_get(v___y_1984_, 5);
v___x_1988_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_1987_, v_constName_1981_, v___y_1982_, v___y_1983_, v___y_1984_, v___y_1985_);
return v___x_1988_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_){
_start:
{
lean_object* v_res_1995_; 
v_res_1995_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_);
lean_dec(v___y_1993_);
lean_dec_ref(v___y_1992_);
lean_dec(v___y_1991_);
lean_dec_ref(v___y_1990_);
return v_res_1995_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(lean_object* v_constName_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_){
_start:
{
lean_object* v___x_2002_; lean_object* v_env_2003_; uint8_t v___x_2004_; lean_object* v___x_2005_; 
v___x_2002_ = lean_st_ref_get(v___y_2000_);
v_env_2003_ = lean_ctor_get(v___x_2002_, 0);
lean_inc_ref(v_env_2003_);
lean_dec(v___x_2002_);
v___x_2004_ = 0;
lean_inc(v_constName_1996_);
v___x_2005_ = l_Lean_Environment_findConstVal_x3f(v_env_2003_, v_constName_1996_, v___x_2004_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v___x_2006_; 
v___x_2006_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_1996_, v___y_1997_, v___y_1998_, v___y_1999_, v___y_2000_);
return v___x_2006_;
}
else
{
lean_object* v_val_2007_; lean_object* v___x_2009_; uint8_t v_isShared_2010_; uint8_t v_isSharedCheck_2014_; 
lean_dec(v_constName_1996_);
v_val_2007_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2009_ = v___x_2005_;
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
else
{
lean_inc(v_val_2007_);
lean_dec(v___x_2005_);
v___x_2009_ = lean_box(0);
v_isShared_2010_ = v_isSharedCheck_2014_;
goto v_resetjp_2008_;
}
v_resetjp_2008_:
{
lean_object* v___x_2012_; 
if (v_isShared_2010_ == 0)
{
lean_ctor_set_tag(v___x_2009_, 0);
v___x_2012_ = v___x_2009_;
goto v_reusejp_2011_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_val_2007_);
v___x_2012_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2011_;
}
v_reusejp_2011_:
{
return v___x_2012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1___boxed(lean_object* v_constName_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_){
_start:
{
lean_object* v_res_2021_; 
v_res_2021_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v_constName_2015_, v___y_2016_, v___y_2017_, v___y_2018_, v___y_2019_);
lean_dec(v___y_2019_);
lean_dec_ref(v___y_2018_);
lean_dec(v___y_2017_);
lean_dec_ref(v___y_2016_);
return v_res_2021_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(lean_object* v_declName_2022_, uint8_t v_s_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_){
_start:
{
lean_object* v___x_2027_; lean_object* v_env_2028_; lean_object* v_nextMacroScope_2029_; lean_object* v_ngen_2030_; lean_object* v_auxDeclNGen_2031_; lean_object* v_traceState_2032_; lean_object* v_messages_2033_; lean_object* v_infoState_2034_; lean_object* v_snapshotTasks_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2065_; 
v___x_2027_ = lean_st_ref_take(v___y_2025_);
v_env_2028_ = lean_ctor_get(v___x_2027_, 0);
v_nextMacroScope_2029_ = lean_ctor_get(v___x_2027_, 1);
v_ngen_2030_ = lean_ctor_get(v___x_2027_, 2);
v_auxDeclNGen_2031_ = lean_ctor_get(v___x_2027_, 3);
v_traceState_2032_ = lean_ctor_get(v___x_2027_, 4);
v_messages_2033_ = lean_ctor_get(v___x_2027_, 6);
v_infoState_2034_ = lean_ctor_get(v___x_2027_, 7);
v_snapshotTasks_2035_ = lean_ctor_get(v___x_2027_, 8);
v_isSharedCheck_2065_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2065_ == 0)
{
lean_object* v_unused_2066_; 
v_unused_2066_ = lean_ctor_get(v___x_2027_, 5);
lean_dec(v_unused_2066_);
v___x_2037_ = v___x_2027_;
v_isShared_2038_ = v_isSharedCheck_2065_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_snapshotTasks_2035_);
lean_inc(v_infoState_2034_);
lean_inc(v_messages_2033_);
lean_inc(v_traceState_2032_);
lean_inc(v_auxDeclNGen_2031_);
lean_inc(v_ngen_2030_);
lean_inc(v_nextMacroScope_2029_);
lean_inc(v_env_2028_);
lean_dec(v___x_2027_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2065_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
uint8_t v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2044_; 
v___x_2039_ = 0;
v___x_2040_ = lean_box(0);
v___x_2041_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_2028_, v_declName_2022_, v_s_2023_, v___x_2039_, v___x_2040_);
v___x_2042_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2038_ == 0)
{
lean_ctor_set(v___x_2037_, 5, v___x_2042_);
lean_ctor_set(v___x_2037_, 0, v___x_2041_);
v___x_2044_ = v___x_2037_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v___x_2041_);
lean_ctor_set(v_reuseFailAlloc_2064_, 1, v_nextMacroScope_2029_);
lean_ctor_set(v_reuseFailAlloc_2064_, 2, v_ngen_2030_);
lean_ctor_set(v_reuseFailAlloc_2064_, 3, v_auxDeclNGen_2031_);
lean_ctor_set(v_reuseFailAlloc_2064_, 4, v_traceState_2032_);
lean_ctor_set(v_reuseFailAlloc_2064_, 5, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2064_, 6, v_messages_2033_);
lean_ctor_set(v_reuseFailAlloc_2064_, 7, v_infoState_2034_);
lean_ctor_set(v_reuseFailAlloc_2064_, 8, v_snapshotTasks_2035_);
v___x_2044_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v_mctx_2048_; lean_object* v_zetaDeltaFVarIds_2049_; lean_object* v_postponed_2050_; lean_object* v_diag_2051_; lean_object* v___x_2053_; uint8_t v_isShared_2054_; uint8_t v_isSharedCheck_2062_; 
v___x_2045_ = lean_st_ref_set(v___y_2025_, v___x_2044_);
v___x_2046_ = lean_st_ref_get(v___y_2025_);
lean_dec(v___x_2046_);
v___x_2047_ = lean_st_ref_take(v___y_2024_);
v_mctx_2048_ = lean_ctor_get(v___x_2047_, 0);
v_zetaDeltaFVarIds_2049_ = lean_ctor_get(v___x_2047_, 2);
v_postponed_2050_ = lean_ctor_get(v___x_2047_, 3);
v_diag_2051_ = lean_ctor_get(v___x_2047_, 4);
v_isSharedCheck_2062_ = !lean_is_exclusive(v___x_2047_);
if (v_isSharedCheck_2062_ == 0)
{
lean_object* v_unused_2063_; 
v_unused_2063_ = lean_ctor_get(v___x_2047_, 1);
lean_dec(v_unused_2063_);
v___x_2053_ = v___x_2047_;
v_isShared_2054_ = v_isSharedCheck_2062_;
goto v_resetjp_2052_;
}
else
{
lean_inc(v_diag_2051_);
lean_inc(v_postponed_2050_);
lean_inc(v_zetaDeltaFVarIds_2049_);
lean_inc(v_mctx_2048_);
lean_dec(v___x_2047_);
v___x_2053_ = lean_box(0);
v_isShared_2054_ = v_isSharedCheck_2062_;
goto v_resetjp_2052_;
}
v_resetjp_2052_:
{
lean_object* v___x_2055_; lean_object* v___x_2057_; 
v___x_2055_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2054_ == 0)
{
lean_ctor_set(v___x_2053_, 1, v___x_2055_);
v___x_2057_ = v___x_2053_;
goto v_reusejp_2056_;
}
else
{
lean_object* v_reuseFailAlloc_2061_; 
v_reuseFailAlloc_2061_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2061_, 0, v_mctx_2048_);
lean_ctor_set(v_reuseFailAlloc_2061_, 1, v___x_2055_);
lean_ctor_set(v_reuseFailAlloc_2061_, 2, v_zetaDeltaFVarIds_2049_);
lean_ctor_set(v_reuseFailAlloc_2061_, 3, v_postponed_2050_);
lean_ctor_set(v_reuseFailAlloc_2061_, 4, v_diag_2051_);
v___x_2057_ = v_reuseFailAlloc_2061_;
goto v_reusejp_2056_;
}
v_reusejp_2056_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; 
v___x_2058_ = lean_st_ref_set(v___y_2024_, v___x_2057_);
v___x_2059_ = lean_box(0);
v___x_2060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2060_, 0, v___x_2059_);
return v___x_2060_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg___boxed(lean_object* v_declName_2067_, lean_object* v_s_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
uint8_t v_s_boxed_2072_; lean_object* v_res_2073_; 
v_s_boxed_2072_ = lean_unbox(v_s_2068_);
v_res_2073_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2067_, v_s_boxed_2072_, v___y_2069_, v___y_2070_);
lean_dec(v___y_2070_);
lean_dec(v___y_2069_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(lean_object* v_declName_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_){
_start:
{
uint8_t v___x_2080_; lean_object* v___x_2081_; 
v___x_2080_ = 0;
v___x_2081_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2074_, v___x_2080_, v___y_2076_, v___y_2078_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13___boxed(lean_object* v_declName_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v_res_2088_; 
v_res_2088_ = l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(v_declName_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
lean_dec(v___y_2084_);
lean_dec_ref(v___y_2083_);
return v_res_2088_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(lean_object* v_a_2089_, lean_object* v_a_2090_){
_start:
{
if (lean_obj_tag(v_a_2089_) == 0)
{
lean_object* v___x_2091_; 
v___x_2091_ = l_List_reverse___redArg(v_a_2090_);
return v___x_2091_;
}
else
{
lean_object* v_head_2092_; lean_object* v_tail_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2102_; 
v_head_2092_ = lean_ctor_get(v_a_2089_, 0);
v_tail_2093_ = lean_ctor_get(v_a_2089_, 1);
v_isSharedCheck_2102_ = !lean_is_exclusive(v_a_2089_);
if (v_isSharedCheck_2102_ == 0)
{
v___x_2095_ = v_a_2089_;
v_isShared_2096_ = v_isSharedCheck_2102_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_tail_2093_);
lean_inc(v_head_2092_);
lean_dec(v_a_2089_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2102_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2097_; lean_object* v___x_2099_; 
v___x_2097_ = l_Lean_mkLevelParam(v_head_2092_);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 1, v_a_2090_);
lean_ctor_set(v___x_2095_, 0, v___x_2097_);
v___x_2099_ = v___x_2095_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2101_; 
v_reuseFailAlloc_2101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2101_, 0, v___x_2097_);
lean_ctor_set(v_reuseFailAlloc_2101_, 1, v_a_2090_);
v___x_2099_ = v_reuseFailAlloc_2101_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
v_a_2089_ = v_tail_2093_;
v_a_2090_ = v___x_2099_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0(void){
_start:
{
lean_object* v___x_2103_; 
v___x_2103_ = lean_mk_string_unchecked("Cannot add attribute `[", 23, 23);
return v___x_2103_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1(void){
_start:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2104_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__0);
v___x_2105_ = l_Lean_stringToMessageData(v___x_2104_);
return v___x_2105_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2(void){
_start:
{
lean_object* v___x_2106_; 
v___x_2106_ = lean_mk_string_unchecked("]` to declaration `", 19, 19);
return v___x_2106_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3(void){
_start:
{
lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2107_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__2);
v___x_2108_ = l_Lean_stringToMessageData(v___x_2107_);
return v___x_2108_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__4(void){
_start:
{
lean_object* v___x_2109_; 
v___x_2109_ = lean_mk_string_unchecked("` because it is not from the present async context", 50, 50);
return v___x_2109_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__5(void){
_start:
{
lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2110_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__4, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__4_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__4);
v___x_2111_ = l_Lean_stringToMessageData(v___x_2110_);
return v___x_2111_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__6(void){
_start:
{
lean_object* v___x_2112_; 
v___x_2112_ = lean_mk_string_unchecked(" `", 2, 2);
return v___x_2112_;
}
}
static lean_object* _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__7(void){
_start:
{
lean_object* v___x_2113_; lean_object* v___x_2114_; 
v___x_2113_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__6, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__6_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__6);
v___x_2114_ = l_Lean_stringToMessageData(v___x_2113_);
return v___x_2114_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(lean_object* v_attrName_2115_, lean_object* v_declName_2116_, lean_object* v_asyncPrefix_x3f_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_){
_start:
{
lean_object* v___y_2124_; 
if (lean_obj_tag(v_asyncPrefix_x3f_2117_) == 0)
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Lean_MessageData_nil;
v___y_2124_ = v___x_2137_;
goto v___jp_2123_;
}
else
{
lean_object* v_val_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; 
v_val_2138_ = lean_ctor_get(v_asyncPrefix_x3f_2117_, 0);
lean_inc(v_val_2138_);
lean_dec_ref(v_asyncPrefix_x3f_2117_);
v___x_2139_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__7, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__7_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__7);
v___x_2140_ = l_Lean_MessageData_ofName(v_val_2138_);
v___x_2141_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2139_);
lean_ctor_set(v___x_2141_, 1, v___x_2140_);
v___x_2142_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg___closed__3);
v___x_2143_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2141_);
lean_ctor_set(v___x_2143_, 1, v___x_2142_);
v___y_2124_ = v___x_2143_;
goto v___jp_2123_;
}
v___jp_2123_:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; uint8_t v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2125_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1);
v___x_2126_ = l_Lean_MessageData_ofName(v_attrName_2115_);
v___x_2127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2125_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3);
v___x_2129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2127_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = 0;
v___x_2131_ = l_Lean_MessageData_ofConstName(v_declName_2116_, v___x_2130_);
v___x_2132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2129_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
v___x_2133_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__5, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__5_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__5);
v___x_2134_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2132_);
lean_ctor_set(v___x_2134_, 1, v___x_2133_);
v___x_2135_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2134_);
lean_ctor_set(v___x_2135_, 1, v___y_2124_);
v___x_2136_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_2135_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_);
return v___x_2136_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___boxed(lean_object* v_attrName_2144_, lean_object* v_declName_2145_, lean_object* v_asyncPrefix_x3f_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_attrName_2144_, v_declName_2145_, v_asyncPrefix_x3f_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
return v_res_2152_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0(void){
_start:
{
lean_object* v___x_2153_; 
v___x_2153_ = lean_mk_string_unchecked("` because it is in an imported module", 37, 37);
return v___x_2153_;
}
}
static lean_object* _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1(void){
_start:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; 
v___x_2154_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__0);
v___x_2155_ = l_Lean_stringToMessageData(v___x_2154_);
return v___x_2155_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(lean_object* v_attrName_2156_, lean_object* v_declName_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; uint8_t v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2163_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__1);
v___x_2164_ = l_Lean_MessageData_ofName(v_attrName_2156_);
v___x_2165_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2163_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
v___x_2166_ = lean_obj_once(&l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3, &l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3_once, _init_l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg___closed__3);
v___x_2167_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2165_);
lean_ctor_set(v___x_2167_, 1, v___x_2166_);
v___x_2168_ = 0;
v___x_2169_ = l_Lean_MessageData_ofConstName(v_declName_2157_, v___x_2168_);
v___x_2170_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2170_, 0, v___x_2167_);
lean_ctor_set(v___x_2170_, 1, v___x_2169_);
v___x_2171_ = lean_obj_once(&l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1, &l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1_once, _init_l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___closed__1);
v___x_2172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2172_, 0, v___x_2170_);
lean_ctor_set(v___x_2172_, 1, v___x_2171_);
v___x_2173_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_2172_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_);
return v___x_2173_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg___boxed(lean_object* v_attrName_2174_, lean_object* v_declName_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_){
_start:
{
lean_object* v_res_2181_; 
v_res_2181_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_attrName_2174_, v_declName_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_);
lean_dec(v___y_2179_);
lean_dec_ref(v___y_2178_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
return v_res_2181_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(lean_object* v_attr_2182_, lean_object* v_decl_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
lean_object* v___y_2190_; lean_object* v___y_2191_; lean_object* v___x_2233_; lean_object* v_env_2234_; lean_object* v___y_2236_; lean_object* v___y_2237_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___x_2249_; 
v___x_2233_ = lean_st_ref_get(v___y_2187_);
v_env_2234_ = lean_ctor_get(v___x_2233_, 0);
lean_inc_ref(v_env_2234_);
lean_dec(v___x_2233_);
v___x_2249_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_2234_, v_decl_2183_);
if (lean_obj_tag(v___x_2249_) == 0)
{
v___y_2236_ = v___y_2184_;
v___y_2237_ = v___y_2185_;
v___y_2238_ = v___y_2186_;
v___y_2239_ = v___y_2187_;
goto v___jp_2235_;
}
else
{
lean_object* v_attr_2250_; lean_object* v_toAttributeImplCore_2251_; lean_object* v_name_2252_; lean_object* v___x_2253_; 
lean_dec_ref(v___x_2249_);
lean_dec_ref(v_env_2234_);
v_attr_2250_ = lean_ctor_get(v_attr_2182_, 0);
lean_inc_ref(v_attr_2250_);
lean_dec_ref(v_attr_2182_);
v_toAttributeImplCore_2251_ = lean_ctor_get(v_attr_2250_, 0);
lean_inc_ref(v_toAttributeImplCore_2251_);
lean_dec_ref(v_attr_2250_);
v_name_2252_ = lean_ctor_get(v_toAttributeImplCore_2251_, 1);
lean_inc(v_name_2252_);
lean_dec_ref(v_toAttributeImplCore_2251_);
v___x_2253_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_name_2252_, v_decl_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
return v___x_2253_;
}
v___jp_2189_:
{
lean_object* v___x_2192_; lean_object* v_ext_2193_; lean_object* v_toEnvExtension_2194_; lean_object* v_env_2195_; lean_object* v_nextMacroScope_2196_; lean_object* v_ngen_2197_; lean_object* v_auxDeclNGen_2198_; lean_object* v_traceState_2199_; lean_object* v_messages_2200_; lean_object* v_infoState_2201_; lean_object* v_snapshotTasks_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2231_; 
v___x_2192_ = lean_st_ref_take(v___y_2191_);
v_ext_2193_ = lean_ctor_get(v_attr_2182_, 1);
lean_inc_ref(v_ext_2193_);
lean_dec_ref(v_attr_2182_);
v_toEnvExtension_2194_ = lean_ctor_get(v_ext_2193_, 0);
v_env_2195_ = lean_ctor_get(v___x_2192_, 0);
v_nextMacroScope_2196_ = lean_ctor_get(v___x_2192_, 1);
v_ngen_2197_ = lean_ctor_get(v___x_2192_, 2);
v_auxDeclNGen_2198_ = lean_ctor_get(v___x_2192_, 3);
v_traceState_2199_ = lean_ctor_get(v___x_2192_, 4);
v_messages_2200_ = lean_ctor_get(v___x_2192_, 6);
v_infoState_2201_ = lean_ctor_get(v___x_2192_, 7);
v_snapshotTasks_2202_ = lean_ctor_get(v___x_2192_, 8);
v_isSharedCheck_2231_ = !lean_is_exclusive(v___x_2192_);
if (v_isSharedCheck_2231_ == 0)
{
lean_object* v_unused_2232_; 
v_unused_2232_ = lean_ctor_get(v___x_2192_, 5);
lean_dec(v_unused_2232_);
v___x_2204_ = v___x_2192_;
v_isShared_2205_ = v_isSharedCheck_2231_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_snapshotTasks_2202_);
lean_inc(v_infoState_2201_);
lean_inc(v_messages_2200_);
lean_inc(v_traceState_2199_);
lean_inc(v_auxDeclNGen_2198_);
lean_inc(v_ngen_2197_);
lean_inc(v_nextMacroScope_2196_);
lean_inc(v_env_2195_);
lean_dec(v___x_2192_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2231_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v_asyncMode_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2210_; 
v_asyncMode_2206_ = lean_ctor_get(v_toEnvExtension_2194_, 2);
lean_inc(v_asyncMode_2206_);
lean_inc(v_decl_2183_);
v___x_2207_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_2193_, v_env_2195_, v_decl_2183_, v_asyncMode_2206_, v_decl_2183_);
lean_dec(v_asyncMode_2206_);
v___x_2208_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2205_ == 0)
{
lean_ctor_set(v___x_2204_, 5, v___x_2208_);
lean_ctor_set(v___x_2204_, 0, v___x_2207_);
v___x_2210_ = v___x_2204_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v___x_2207_);
lean_ctor_set(v_reuseFailAlloc_2230_, 1, v_nextMacroScope_2196_);
lean_ctor_set(v_reuseFailAlloc_2230_, 2, v_ngen_2197_);
lean_ctor_set(v_reuseFailAlloc_2230_, 3, v_auxDeclNGen_2198_);
lean_ctor_set(v_reuseFailAlloc_2230_, 4, v_traceState_2199_);
lean_ctor_set(v_reuseFailAlloc_2230_, 5, v___x_2208_);
lean_ctor_set(v_reuseFailAlloc_2230_, 6, v_messages_2200_);
lean_ctor_set(v_reuseFailAlloc_2230_, 7, v_infoState_2201_);
lean_ctor_set(v_reuseFailAlloc_2230_, 8, v_snapshotTasks_2202_);
v___x_2210_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v_mctx_2214_; lean_object* v_zetaDeltaFVarIds_2215_; lean_object* v_postponed_2216_; lean_object* v_diag_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2228_; 
v___x_2211_ = lean_st_ref_set(v___y_2191_, v___x_2210_);
v___x_2212_ = lean_st_ref_get(v___y_2191_);
lean_dec(v___x_2212_);
v___x_2213_ = lean_st_ref_take(v___y_2190_);
v_mctx_2214_ = lean_ctor_get(v___x_2213_, 0);
v_zetaDeltaFVarIds_2215_ = lean_ctor_get(v___x_2213_, 2);
v_postponed_2216_ = lean_ctor_get(v___x_2213_, 3);
v_diag_2217_ = lean_ctor_get(v___x_2213_, 4);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2228_ == 0)
{
lean_object* v_unused_2229_; 
v_unused_2229_ = lean_ctor_get(v___x_2213_, 1);
lean_dec(v_unused_2229_);
v___x_2219_ = v___x_2213_;
v_isShared_2220_ = v_isSharedCheck_2228_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_diag_2217_);
lean_inc(v_postponed_2216_);
lean_inc(v_zetaDeltaFVarIds_2215_);
lean_inc(v_mctx_2214_);
lean_dec(v___x_2213_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2228_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2221_; lean_object* v___x_2223_; 
v___x_2221_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 1, v___x_2221_);
v___x_2223_ = v___x_2219_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_mctx_2214_);
lean_ctor_set(v_reuseFailAlloc_2227_, 1, v___x_2221_);
lean_ctor_set(v_reuseFailAlloc_2227_, 2, v_zetaDeltaFVarIds_2215_);
lean_ctor_set(v_reuseFailAlloc_2227_, 3, v_postponed_2216_);
lean_ctor_set(v_reuseFailAlloc_2227_, 4, v_diag_2217_);
v___x_2223_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2224_ = lean_st_ref_set(v___y_2190_, v___x_2223_);
v___x_2225_ = lean_box(0);
v___x_2226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2226_, 0, v___x_2225_);
return v___x_2226_;
}
}
}
}
}
v___jp_2235_:
{
lean_object* v_ext_2240_; lean_object* v_toEnvExtension_2241_; lean_object* v_attr_2242_; lean_object* v_asyncMode_2243_; uint8_t v___x_2244_; 
v_ext_2240_ = lean_ctor_get(v_attr_2182_, 1);
v_toEnvExtension_2241_ = lean_ctor_get(v_ext_2240_, 0);
v_attr_2242_ = lean_ctor_get(v_attr_2182_, 0);
v_asyncMode_2243_ = lean_ctor_get(v_toEnvExtension_2241_, 2);
lean_inc(v_decl_2183_);
lean_inc_ref(v_env_2234_);
v___x_2244_ = l_Lean_EnvExtension_asyncMayModify___redArg(v_env_2234_, v_decl_2183_, v_asyncMode_2243_);
if (v___x_2244_ == 0)
{
lean_object* v_toAttributeImplCore_2245_; lean_object* v_name_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
lean_inc_ref(v_attr_2242_);
lean_dec_ref(v_attr_2182_);
v_toAttributeImplCore_2245_ = lean_ctor_get(v_attr_2242_, 0);
lean_inc_ref(v_toAttributeImplCore_2245_);
lean_dec_ref(v_attr_2242_);
v_name_2246_ = lean_ctor_get(v_toAttributeImplCore_2245_, 1);
lean_inc(v_name_2246_);
lean_dec_ref(v_toAttributeImplCore_2245_);
v___x_2247_ = l_Lean_Environment_asyncPrefix_x3f(v_env_2234_);
v___x_2248_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_name_2246_, v_decl_2183_, v___x_2247_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_);
return v___x_2248_;
}
else
{
lean_dec_ref(v_env_2234_);
v___y_2190_ = v___y_2237_;
v___y_2191_ = v___y_2239_;
goto v___jp_2189_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12___boxed(lean_object* v_attr_2254_, lean_object* v_decl_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v_attr_2254_, v_decl_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
lean_dec(v___y_2257_);
lean_dec_ref(v___y_2256_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(lean_object* v_constName_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v___x_2268_; lean_object* v_env_2269_; uint8_t v___x_2270_; lean_object* v___x_2271_; 
v___x_2268_ = lean_st_ref_get(v___y_2266_);
v_env_2269_ = lean_ctor_get(v___x_2268_, 0);
lean_inc_ref(v_env_2269_);
lean_dec(v___x_2268_);
v___x_2270_ = 0;
lean_inc(v_constName_2262_);
v___x_2271_ = l_Lean_Environment_find_x3f(v_env_2269_, v_constName_2262_, v___x_2270_);
if (lean_obj_tag(v___x_2271_) == 0)
{
lean_object* v___x_2272_; 
v___x_2272_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_);
return v___x_2272_;
}
else
{
lean_object* v_val_2273_; lean_object* v___x_2275_; uint8_t v_isShared_2276_; uint8_t v_isSharedCheck_2280_; 
lean_dec(v_constName_2262_);
v_val_2273_ = lean_ctor_get(v___x_2271_, 0);
v_isSharedCheck_2280_ = !lean_is_exclusive(v___x_2271_);
if (v_isSharedCheck_2280_ == 0)
{
v___x_2275_ = v___x_2271_;
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
else
{
lean_inc(v_val_2273_);
lean_dec(v___x_2271_);
v___x_2275_ = lean_box(0);
v_isShared_2276_ = v_isSharedCheck_2280_;
goto v_resetjp_2274_;
}
v_resetjp_2274_:
{
lean_object* v___x_2278_; 
if (v_isShared_2276_ == 0)
{
lean_ctor_set_tag(v___x_2275_, 0);
v___x_2278_ = v___x_2275_;
goto v_reusejp_2277_;
}
else
{
lean_object* v_reuseFailAlloc_2279_; 
v_reuseFailAlloc_2279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2279_, 0, v_val_2273_);
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
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0___boxed(lean_object* v_constName_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_constName_2281_, v___y_2282_, v___y_2283_, v___y_2284_, v___y_2285_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
lean_dec(v___y_2283_);
lean_dec_ref(v___y_2282_);
return v_res_2287_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__0(void){
_start:
{
lean_object* v___x_2288_; 
v___x_2288_ = lean_mk_string_unchecked("Lean.Meta.Constructions.CasesOnSameCtor", 39, 39);
return v___x_2288_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__1(void){
_start:
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_mk_string_unchecked("Lean.mkCasesOnSameCtorHet", 25, 25);
return v___x_2289_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__2(void){
_start:
{
lean_object* v___x_2290_; 
v___x_2290_ = lean_mk_string_unchecked("unexpected universe levels on `casesOn`", 39, 39);
return v___x_2290_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__3(void){
_start:
{
lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; 
v___x_2291_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__2, &l_Lean_mkCasesOnSameCtorHet___closed__2_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__2);
v___x_2292_ = lean_unsigned_to_nat(58u);
v___x_2293_ = lean_unsigned_to_nat(33u);
v___x_2294_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__1, &l_Lean_mkCasesOnSameCtorHet___closed__1_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__1);
v___x_2295_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__0, &l_Lean_mkCasesOnSameCtorHet___closed__0_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__0);
v___x_2296_ = l_mkPanicMessageWithDecl(v___x_2295_, v___x_2294_, v___x_2293_, v___x_2292_, v___x_2291_);
return v___x_2296_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__4(void){
_start:
{
lean_object* v___x_2297_; 
v___x_2297_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_2297_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtorHet___closed__5(void){
_start:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2298_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__4, &l_Lean_mkCasesOnSameCtorHet___closed__4_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__4);
v___x_2299_ = lean_unsigned_to_nat(60u);
v___x_2300_ = lean_unsigned_to_nat(30u);
v___x_2301_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__1, &l_Lean_mkCasesOnSameCtorHet___closed__1_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__1);
v___x_2302_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__0, &l_Lean_mkCasesOnSameCtorHet___closed__0_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__0);
v___x_2303_ = l_mkPanicMessageWithDecl(v___x_2302_, v___x_2301_, v___x_2300_, v___x_2299_, v___x_2298_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet(lean_object* v_declName_2304_, lean_object* v_indName_2305_, lean_object* v_a_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_){
_start:
{
lean_object* v___x_2311_; 
lean_inc(v_indName_2305_);
v___x_2311_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_indName_2305_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
if (lean_obj_tag(v___x_2311_) == 0)
{
lean_object* v_a_2312_; 
v_a_2312_ = lean_ctor_get(v___x_2311_, 0);
lean_inc(v_a_2312_);
lean_dec_ref(v___x_2311_);
if (lean_obj_tag(v_a_2312_) == 5)
{
lean_object* v_val_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2503_; 
v_val_2313_ = lean_ctor_get(v_a_2312_, 0);
v_isSharedCheck_2503_ = !lean_is_exclusive(v_a_2312_);
if (v_isSharedCheck_2503_ == 0)
{
v___x_2315_ = v_a_2312_;
v_isShared_2316_ = v_isSharedCheck_2503_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_val_2313_);
lean_dec(v_a_2312_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2503_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
lean_inc(v_indName_2305_);
v___x_2317_ = l_Lean_mkCasesOnName(v_indName_2305_);
lean_inc(v___x_2317_);
v___x_2318_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v___x_2317_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; lean_object* v_name_2320_; lean_object* v_levelParams_2321_; lean_object* v_type_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc(v_a_2319_);
lean_dec_ref(v___x_2318_);
v_name_2320_ = lean_ctor_get(v_a_2319_, 0);
lean_inc(v_name_2320_);
v_levelParams_2321_ = lean_ctor_get(v_a_2319_, 1);
lean_inc_n(v_levelParams_2321_, 2);
v_type_2322_ = lean_ctor_get(v_a_2319_, 2);
lean_inc_ref(v_type_2322_);
lean_dec(v_a_2319_);
v___x_2323_ = lean_box(0);
v___x_2324_ = l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(v_levelParams_2321_, v___x_2323_);
if (lean_obj_tag(v___x_2324_) == 1)
{
lean_object* v_head_2325_; lean_object* v_tail_2326_; lean_object* v_numParams_2327_; lean_object* v_numIndices_2328_; lean_object* v_ctors_2329_; lean_object* v___f_2330_; lean_object* v___x_2332_; 
v_head_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_head_2325_);
v_tail_2326_ = lean_ctor_get(v___x_2324_, 1);
lean_inc(v_tail_2326_);
v_numParams_2327_ = lean_ctor_get(v_val_2313_, 1);
lean_inc_n(v_numParams_2327_, 2);
v_numIndices_2328_ = lean_ctor_get(v_val_2313_, 2);
lean_inc(v_numIndices_2328_);
v_ctors_2329_ = lean_ctor_get(v_val_2313_, 4);
lean_inc(v_ctors_2329_);
v___f_2330_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__6___boxed), 17, 10);
lean_closure_set(v___f_2330_, 0, v_numIndices_2328_);
lean_closure_set(v___f_2330_, 1, v_head_2325_);
lean_closure_set(v___f_2330_, 2, v_ctors_2329_);
lean_closure_set(v___f_2330_, 3, v_tail_2326_);
lean_closure_set(v___f_2330_, 4, v_numParams_2327_);
lean_closure_set(v___f_2330_, 5, v_indName_2305_);
lean_closure_set(v___f_2330_, 6, v_val_2313_);
lean_closure_set(v___f_2330_, 7, v___x_2324_);
lean_closure_set(v___f_2330_, 8, v___x_2317_);
lean_closure_set(v___f_2330_, 9, v_name_2320_);
if (v_isShared_2316_ == 0)
{
lean_ctor_set_tag(v___x_2315_, 1);
lean_ctor_set(v___x_2315_, 0, v_numParams_2327_);
v___x_2332_ = v___x_2315_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v_numParams_2327_);
v___x_2332_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
uint8_t v___x_2333_; lean_object* v___x_2334_; 
v___x_2333_ = 0;
v___x_2334_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_2322_, v___x_2332_, v___f_2330_, v___x_2333_, v___x_2333_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
if (lean_obj_tag(v___x_2334_) == 0)
{
lean_object* v_a_2335_; lean_object* v___x_2336_; lean_object* v___f_2337_; uint8_t v___y_2339_; uint8_t v___x_2482_; 
v_a_2335_ = lean_ctor_get(v___x_2334_, 0);
lean_inc(v_a_2335_);
lean_dec_ref(v___x_2334_);
v___x_2336_ = lean_box(v___x_2333_);
lean_inc(v_declName_2304_);
v___f_2337_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtorHet___lam__7___boxed), 9, 4);
lean_closure_set(v___f_2337_, 0, v_a_2335_);
lean_closure_set(v___f_2337_, 1, v_declName_2304_);
lean_closure_set(v___f_2337_, 2, v_levelParams_2321_);
lean_closure_set(v___f_2337_, 3, v___x_2336_);
v___x_2482_ = l_Lean_isPrivateName(v_declName_2304_);
if (v___x_2482_ == 0)
{
uint8_t v___x_2483_; 
v___x_2483_ = 1;
v___y_2339_ = v___x_2483_;
goto v___jp_2338_;
}
else
{
v___y_2339_ = v___x_2333_;
goto v___jp_2338_;
}
v___jp_2338_:
{
lean_object* v___x_2340_; 
v___x_2340_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v___f_2337_, v___y_2339_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_object* v___x_2341_; lean_object* v_env_2342_; lean_object* v_nextMacroScope_2343_; lean_object* v_ngen_2344_; lean_object* v_auxDeclNGen_2345_; lean_object* v_traceState_2346_; lean_object* v_messages_2347_; lean_object* v_infoState_2348_; lean_object* v_snapshotTasks_2349_; lean_object* v___x_2351_; uint8_t v_isShared_2352_; uint8_t v_isSharedCheck_2480_; 
lean_dec_ref(v___x_2340_);
v___x_2341_ = lean_st_ref_take(v_a_2309_);
v_env_2342_ = lean_ctor_get(v___x_2341_, 0);
v_nextMacroScope_2343_ = lean_ctor_get(v___x_2341_, 1);
v_ngen_2344_ = lean_ctor_get(v___x_2341_, 2);
v_auxDeclNGen_2345_ = lean_ctor_get(v___x_2341_, 3);
v_traceState_2346_ = lean_ctor_get(v___x_2341_, 4);
v_messages_2347_ = lean_ctor_get(v___x_2341_, 6);
v_infoState_2348_ = lean_ctor_get(v___x_2341_, 7);
v_snapshotTasks_2349_ = lean_ctor_get(v___x_2341_, 8);
v_isSharedCheck_2480_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2480_ == 0)
{
lean_object* v_unused_2481_; 
v_unused_2481_ = lean_ctor_get(v___x_2341_, 5);
lean_dec(v_unused_2481_);
v___x_2351_ = v___x_2341_;
v_isShared_2352_ = v_isSharedCheck_2480_;
goto v_resetjp_2350_;
}
else
{
lean_inc(v_snapshotTasks_2349_);
lean_inc(v_infoState_2348_);
lean_inc(v_messages_2347_);
lean_inc(v_traceState_2346_);
lean_inc(v_auxDeclNGen_2345_);
lean_inc(v_ngen_2344_);
lean_inc(v_nextMacroScope_2343_);
lean_inc(v_env_2342_);
lean_dec(v___x_2341_);
v___x_2351_ = lean_box(0);
v_isShared_2352_ = v_isSharedCheck_2480_;
goto v_resetjp_2350_;
}
v_resetjp_2350_:
{
lean_object* v___x_2353_; lean_object* v___x_2354_; lean_object* v___x_2356_; 
lean_inc(v_declName_2304_);
v___x_2353_ = l_Lean_Meta_markMatcherLike(v_env_2342_, v_declName_2304_);
v___x_2354_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2352_ == 0)
{
lean_ctor_set(v___x_2351_, 5, v___x_2354_);
lean_ctor_set(v___x_2351_, 0, v___x_2353_);
v___x_2356_ = v___x_2351_;
goto v_reusejp_2355_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2353_);
lean_ctor_set(v_reuseFailAlloc_2479_, 1, v_nextMacroScope_2343_);
lean_ctor_set(v_reuseFailAlloc_2479_, 2, v_ngen_2344_);
lean_ctor_set(v_reuseFailAlloc_2479_, 3, v_auxDeclNGen_2345_);
lean_ctor_set(v_reuseFailAlloc_2479_, 4, v_traceState_2346_);
lean_ctor_set(v_reuseFailAlloc_2479_, 5, v___x_2354_);
lean_ctor_set(v_reuseFailAlloc_2479_, 6, v_messages_2347_);
lean_ctor_set(v_reuseFailAlloc_2479_, 7, v_infoState_2348_);
lean_ctor_set(v_reuseFailAlloc_2479_, 8, v_snapshotTasks_2349_);
v___x_2356_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2355_;
}
v_reusejp_2355_:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v_mctx_2360_; lean_object* v_zetaDeltaFVarIds_2361_; lean_object* v_postponed_2362_; lean_object* v_diag_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2477_; 
v___x_2357_ = lean_st_ref_set(v_a_2309_, v___x_2356_);
v___x_2358_ = lean_st_ref_get(v_a_2309_);
lean_dec(v___x_2358_);
v___x_2359_ = lean_st_ref_take(v_a_2307_);
v_mctx_2360_ = lean_ctor_get(v___x_2359_, 0);
v_zetaDeltaFVarIds_2361_ = lean_ctor_get(v___x_2359_, 2);
v_postponed_2362_ = lean_ctor_get(v___x_2359_, 3);
v_diag_2363_ = lean_ctor_get(v___x_2359_, 4);
v_isSharedCheck_2477_ = !lean_is_exclusive(v___x_2359_);
if (v_isSharedCheck_2477_ == 0)
{
lean_object* v_unused_2478_; 
v_unused_2478_ = lean_ctor_get(v___x_2359_, 1);
lean_dec(v_unused_2478_);
v___x_2365_ = v___x_2359_;
v_isShared_2366_ = v_isSharedCheck_2477_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_diag_2363_);
lean_inc(v_postponed_2362_);
lean_inc(v_zetaDeltaFVarIds_2361_);
lean_inc(v_mctx_2360_);
lean_dec(v___x_2359_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2477_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2367_; lean_object* v___x_2369_; 
v___x_2367_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2366_ == 0)
{
lean_ctor_set(v___x_2365_, 1, v___x_2367_);
v___x_2369_ = v___x_2365_;
goto v_reusejp_2368_;
}
else
{
lean_object* v_reuseFailAlloc_2476_; 
v_reuseFailAlloc_2476_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2476_, 0, v_mctx_2360_);
lean_ctor_set(v_reuseFailAlloc_2476_, 1, v___x_2367_);
lean_ctor_set(v_reuseFailAlloc_2476_, 2, v_zetaDeltaFVarIds_2361_);
lean_ctor_set(v_reuseFailAlloc_2476_, 3, v_postponed_2362_);
lean_ctor_set(v_reuseFailAlloc_2476_, 4, v_diag_2363_);
v___x_2369_ = v_reuseFailAlloc_2476_;
goto v_reusejp_2368_;
}
v_reusejp_2368_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v_env_2372_; lean_object* v_nextMacroScope_2373_; lean_object* v_ngen_2374_; lean_object* v_auxDeclNGen_2375_; lean_object* v_traceState_2376_; lean_object* v_messages_2377_; lean_object* v_infoState_2378_; lean_object* v_snapshotTasks_2379_; lean_object* v___x_2381_; uint8_t v_isShared_2382_; uint8_t v_isSharedCheck_2474_; 
v___x_2370_ = lean_st_ref_set(v_a_2307_, v___x_2369_);
v___x_2371_ = lean_st_ref_take(v_a_2309_);
v_env_2372_ = lean_ctor_get(v___x_2371_, 0);
v_nextMacroScope_2373_ = lean_ctor_get(v___x_2371_, 1);
v_ngen_2374_ = lean_ctor_get(v___x_2371_, 2);
v_auxDeclNGen_2375_ = lean_ctor_get(v___x_2371_, 3);
v_traceState_2376_ = lean_ctor_get(v___x_2371_, 4);
v_messages_2377_ = lean_ctor_get(v___x_2371_, 6);
v_infoState_2378_ = lean_ctor_get(v___x_2371_, 7);
v_snapshotTasks_2379_ = lean_ctor_get(v___x_2371_, 8);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2474_ == 0)
{
lean_object* v_unused_2475_; 
v_unused_2475_ = lean_ctor_get(v___x_2371_, 5);
lean_dec(v_unused_2475_);
v___x_2381_ = v___x_2371_;
v_isShared_2382_ = v_isSharedCheck_2474_;
goto v_resetjp_2380_;
}
else
{
lean_inc(v_snapshotTasks_2379_);
lean_inc(v_infoState_2378_);
lean_inc(v_messages_2377_);
lean_inc(v_traceState_2376_);
lean_inc(v_auxDeclNGen_2375_);
lean_inc(v_ngen_2374_);
lean_inc(v_nextMacroScope_2373_);
lean_inc(v_env_2372_);
lean_dec(v___x_2371_);
v___x_2381_ = lean_box(0);
v_isShared_2382_ = v_isSharedCheck_2474_;
goto v_resetjp_2380_;
}
v_resetjp_2380_:
{
lean_object* v___x_2383_; lean_object* v___x_2385_; 
lean_inc(v_declName_2304_);
v___x_2383_ = l_Lean_markAuxRecursor(v_env_2372_, v_declName_2304_);
if (v_isShared_2382_ == 0)
{
lean_ctor_set(v___x_2381_, 5, v___x_2354_);
lean_ctor_set(v___x_2381_, 0, v___x_2383_);
v___x_2385_ = v___x_2381_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v___x_2383_);
lean_ctor_set(v_reuseFailAlloc_2473_, 1, v_nextMacroScope_2373_);
lean_ctor_set(v_reuseFailAlloc_2473_, 2, v_ngen_2374_);
lean_ctor_set(v_reuseFailAlloc_2473_, 3, v_auxDeclNGen_2375_);
lean_ctor_set(v_reuseFailAlloc_2473_, 4, v_traceState_2376_);
lean_ctor_set(v_reuseFailAlloc_2473_, 5, v___x_2354_);
lean_ctor_set(v_reuseFailAlloc_2473_, 6, v_messages_2377_);
lean_ctor_set(v_reuseFailAlloc_2473_, 7, v_infoState_2378_);
lean_ctor_set(v_reuseFailAlloc_2473_, 8, v_snapshotTasks_2379_);
v___x_2385_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
lean_object* v___x_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v_mctx_2389_; lean_object* v_zetaDeltaFVarIds_2390_; lean_object* v_postponed_2391_; lean_object* v_diag_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2471_; 
v___x_2386_ = lean_st_ref_set(v_a_2309_, v___x_2385_);
v___x_2387_ = lean_st_ref_get(v_a_2309_);
lean_dec(v___x_2387_);
v___x_2388_ = lean_st_ref_take(v_a_2307_);
v_mctx_2389_ = lean_ctor_get(v___x_2388_, 0);
v_zetaDeltaFVarIds_2390_ = lean_ctor_get(v___x_2388_, 2);
v_postponed_2391_ = lean_ctor_get(v___x_2388_, 3);
v_diag_2392_ = lean_ctor_get(v___x_2388_, 4);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2388_);
if (v_isSharedCheck_2471_ == 0)
{
lean_object* v_unused_2472_; 
v_unused_2472_ = lean_ctor_get(v___x_2388_, 1);
lean_dec(v_unused_2472_);
v___x_2394_ = v___x_2388_;
v_isShared_2395_ = v_isSharedCheck_2471_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_diag_2392_);
lean_inc(v_postponed_2391_);
lean_inc(v_zetaDeltaFVarIds_2390_);
lean_inc(v_mctx_2389_);
lean_dec(v___x_2388_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2471_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2395_ == 0)
{
lean_ctor_set(v___x_2394_, 1, v___x_2367_);
v___x_2397_ = v___x_2394_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_mctx_2389_);
lean_ctor_set(v_reuseFailAlloc_2470_, 1, v___x_2367_);
lean_ctor_set(v_reuseFailAlloc_2470_, 2, v_zetaDeltaFVarIds_2390_);
lean_ctor_set(v_reuseFailAlloc_2470_, 3, v_postponed_2391_);
lean_ctor_set(v_reuseFailAlloc_2470_, 4, v_diag_2392_);
v___x_2397_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v_env_2400_; lean_object* v_nextMacroScope_2401_; lean_object* v_ngen_2402_; lean_object* v_auxDeclNGen_2403_; lean_object* v_traceState_2404_; lean_object* v_messages_2405_; lean_object* v_infoState_2406_; lean_object* v_snapshotTasks_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2468_; 
v___x_2398_ = lean_st_ref_set(v_a_2307_, v___x_2397_);
v___x_2399_ = lean_st_ref_take(v_a_2309_);
v_env_2400_ = lean_ctor_get(v___x_2399_, 0);
v_nextMacroScope_2401_ = lean_ctor_get(v___x_2399_, 1);
v_ngen_2402_ = lean_ctor_get(v___x_2399_, 2);
v_auxDeclNGen_2403_ = lean_ctor_get(v___x_2399_, 3);
v_traceState_2404_ = lean_ctor_get(v___x_2399_, 4);
v_messages_2405_ = lean_ctor_get(v___x_2399_, 6);
v_infoState_2406_ = lean_ctor_get(v___x_2399_, 7);
v_snapshotTasks_2407_ = lean_ctor_get(v___x_2399_, 8);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2399_);
if (v_isSharedCheck_2468_ == 0)
{
lean_object* v_unused_2469_; 
v_unused_2469_ = lean_ctor_get(v___x_2399_, 5);
lean_dec(v_unused_2469_);
v___x_2409_ = v___x_2399_;
v_isShared_2410_ = v_isSharedCheck_2468_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_snapshotTasks_2407_);
lean_inc(v_infoState_2406_);
lean_inc(v_messages_2405_);
lean_inc(v_traceState_2404_);
lean_inc(v_auxDeclNGen_2403_);
lean_inc(v_ngen_2402_);
lean_inc(v_nextMacroScope_2401_);
lean_inc(v_env_2400_);
lean_dec(v___x_2399_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2468_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2411_; lean_object* v___x_2413_; 
lean_inc(v_declName_2304_);
v___x_2411_ = l_Lean_Meta_addToCompletionBlackList(v_env_2400_, v_declName_2304_);
if (v_isShared_2410_ == 0)
{
lean_ctor_set(v___x_2409_, 5, v___x_2354_);
lean_ctor_set(v___x_2409_, 0, v___x_2411_);
v___x_2413_ = v___x_2409_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v___x_2411_);
lean_ctor_set(v_reuseFailAlloc_2467_, 1, v_nextMacroScope_2401_);
lean_ctor_set(v_reuseFailAlloc_2467_, 2, v_ngen_2402_);
lean_ctor_set(v_reuseFailAlloc_2467_, 3, v_auxDeclNGen_2403_);
lean_ctor_set(v_reuseFailAlloc_2467_, 4, v_traceState_2404_);
lean_ctor_set(v_reuseFailAlloc_2467_, 5, v___x_2354_);
lean_ctor_set(v_reuseFailAlloc_2467_, 6, v_messages_2405_);
lean_ctor_set(v_reuseFailAlloc_2467_, 7, v_infoState_2406_);
lean_ctor_set(v_reuseFailAlloc_2467_, 8, v_snapshotTasks_2407_);
v___x_2413_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v_mctx_2417_; lean_object* v_zetaDeltaFVarIds_2418_; lean_object* v_postponed_2419_; lean_object* v_diag_2420_; lean_object* v___x_2422_; uint8_t v_isShared_2423_; uint8_t v_isSharedCheck_2465_; 
v___x_2414_ = lean_st_ref_set(v_a_2309_, v___x_2413_);
v___x_2415_ = lean_st_ref_get(v_a_2309_);
lean_dec(v___x_2415_);
v___x_2416_ = lean_st_ref_take(v_a_2307_);
v_mctx_2417_ = lean_ctor_get(v___x_2416_, 0);
v_zetaDeltaFVarIds_2418_ = lean_ctor_get(v___x_2416_, 2);
v_postponed_2419_ = lean_ctor_get(v___x_2416_, 3);
v_diag_2420_ = lean_ctor_get(v___x_2416_, 4);
v_isSharedCheck_2465_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2465_ == 0)
{
lean_object* v_unused_2466_; 
v_unused_2466_ = lean_ctor_get(v___x_2416_, 1);
lean_dec(v_unused_2466_);
v___x_2422_ = v___x_2416_;
v_isShared_2423_ = v_isSharedCheck_2465_;
goto v_resetjp_2421_;
}
else
{
lean_inc(v_diag_2420_);
lean_inc(v_postponed_2419_);
lean_inc(v_zetaDeltaFVarIds_2418_);
lean_inc(v_mctx_2417_);
lean_dec(v___x_2416_);
v___x_2422_ = lean_box(0);
v_isShared_2423_ = v_isSharedCheck_2465_;
goto v_resetjp_2421_;
}
v_resetjp_2421_:
{
lean_object* v___x_2425_; 
if (v_isShared_2423_ == 0)
{
lean_ctor_set(v___x_2422_, 1, v___x_2367_);
v___x_2425_ = v___x_2422_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2464_; 
v_reuseFailAlloc_2464_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2464_, 0, v_mctx_2417_);
lean_ctor_set(v_reuseFailAlloc_2464_, 1, v___x_2367_);
lean_ctor_set(v_reuseFailAlloc_2464_, 2, v_zetaDeltaFVarIds_2418_);
lean_ctor_set(v_reuseFailAlloc_2464_, 3, v_postponed_2419_);
lean_ctor_set(v_reuseFailAlloc_2464_, 4, v_diag_2420_);
v___x_2425_ = v_reuseFailAlloc_2464_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v_env_2428_; lean_object* v_nextMacroScope_2429_; lean_object* v_ngen_2430_; lean_object* v_auxDeclNGen_2431_; lean_object* v_traceState_2432_; lean_object* v_messages_2433_; lean_object* v_infoState_2434_; lean_object* v_snapshotTasks_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2462_; 
v___x_2426_ = lean_st_ref_set(v_a_2307_, v___x_2425_);
v___x_2427_ = lean_st_ref_take(v_a_2309_);
v_env_2428_ = lean_ctor_get(v___x_2427_, 0);
v_nextMacroScope_2429_ = lean_ctor_get(v___x_2427_, 1);
v_ngen_2430_ = lean_ctor_get(v___x_2427_, 2);
v_auxDeclNGen_2431_ = lean_ctor_get(v___x_2427_, 3);
v_traceState_2432_ = lean_ctor_get(v___x_2427_, 4);
v_messages_2433_ = lean_ctor_get(v___x_2427_, 6);
v_infoState_2434_ = lean_ctor_get(v___x_2427_, 7);
v_snapshotTasks_2435_ = lean_ctor_get(v___x_2427_, 8);
v_isSharedCheck_2462_ = !lean_is_exclusive(v___x_2427_);
if (v_isSharedCheck_2462_ == 0)
{
lean_object* v_unused_2463_; 
v_unused_2463_ = lean_ctor_get(v___x_2427_, 5);
lean_dec(v_unused_2463_);
v___x_2437_ = v___x_2427_;
v_isShared_2438_ = v_isSharedCheck_2462_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_snapshotTasks_2435_);
lean_inc(v_infoState_2434_);
lean_inc(v_messages_2433_);
lean_inc(v_traceState_2432_);
lean_inc(v_auxDeclNGen_2431_);
lean_inc(v_ngen_2430_);
lean_inc(v_nextMacroScope_2429_);
lean_inc(v_env_2428_);
lean_dec(v___x_2427_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2462_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2439_; lean_object* v___x_2441_; 
lean_inc(v_declName_2304_);
v___x_2439_ = l_Lean_addProtected(v_env_2428_, v_declName_2304_);
if (v_isShared_2438_ == 0)
{
lean_ctor_set(v___x_2437_, 5, v___x_2354_);
lean_ctor_set(v___x_2437_, 0, v___x_2439_);
v___x_2441_ = v___x_2437_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v___x_2439_);
lean_ctor_set(v_reuseFailAlloc_2461_, 1, v_nextMacroScope_2429_);
lean_ctor_set(v_reuseFailAlloc_2461_, 2, v_ngen_2430_);
lean_ctor_set(v_reuseFailAlloc_2461_, 3, v_auxDeclNGen_2431_);
lean_ctor_set(v_reuseFailAlloc_2461_, 4, v_traceState_2432_);
lean_ctor_set(v_reuseFailAlloc_2461_, 5, v___x_2354_);
lean_ctor_set(v_reuseFailAlloc_2461_, 6, v_messages_2433_);
lean_ctor_set(v_reuseFailAlloc_2461_, 7, v_infoState_2434_);
lean_ctor_set(v_reuseFailAlloc_2461_, 8, v_snapshotTasks_2435_);
v___x_2441_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v_mctx_2445_; lean_object* v_zetaDeltaFVarIds_2446_; lean_object* v_postponed_2447_; lean_object* v_diag_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2459_; 
v___x_2442_ = lean_st_ref_set(v_a_2309_, v___x_2441_);
v___x_2443_ = lean_st_ref_get(v_a_2309_);
lean_dec(v___x_2443_);
v___x_2444_ = lean_st_ref_take(v_a_2307_);
v_mctx_2445_ = lean_ctor_get(v___x_2444_, 0);
v_zetaDeltaFVarIds_2446_ = lean_ctor_get(v___x_2444_, 2);
v_postponed_2447_ = lean_ctor_get(v___x_2444_, 3);
v_diag_2448_ = lean_ctor_get(v___x_2444_, 4);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2444_);
if (v_isSharedCheck_2459_ == 0)
{
lean_object* v_unused_2460_; 
v_unused_2460_ = lean_ctor_get(v___x_2444_, 1);
lean_dec(v_unused_2460_);
v___x_2450_ = v___x_2444_;
v_isShared_2451_ = v_isSharedCheck_2459_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_diag_2448_);
lean_inc(v_postponed_2447_);
lean_inc(v_zetaDeltaFVarIds_2446_);
lean_inc(v_mctx_2445_);
lean_dec(v___x_2444_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2459_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v___x_2453_; 
if (v_isShared_2451_ == 0)
{
lean_ctor_set(v___x_2450_, 1, v___x_2367_);
v___x_2453_ = v___x_2450_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v_mctx_2445_);
lean_ctor_set(v_reuseFailAlloc_2458_, 1, v___x_2367_);
lean_ctor_set(v_reuseFailAlloc_2458_, 2, v_zetaDeltaFVarIds_2446_);
lean_ctor_set(v_reuseFailAlloc_2458_, 3, v_postponed_2447_);
lean_ctor_set(v_reuseFailAlloc_2458_, 4, v_diag_2448_);
v___x_2453_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2454_ = lean_st_ref_set(v_a_2307_, v___x_2453_);
v___x_2455_ = l_Lean_Elab_Term_elabAsElim;
lean_inc(v_declName_2304_);
v___x_2456_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v___x_2455_, v_declName_2304_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v___x_2457_; 
lean_dec_ref(v___x_2456_);
v___x_2457_ = l_Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13(v_declName_2304_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
return v___x_2457_;
}
else
{
lean_dec(v_declName_2304_);
return v___x_2456_;
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
else
{
lean_dec(v_declName_2304_);
return v___x_2340_;
}
}
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2491_; 
lean_dec(v_levelParams_2321_);
lean_dec(v_declName_2304_);
v_a_2484_ = lean_ctor_get(v___x_2334_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2334_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2486_ = v___x_2334_;
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_a_2484_);
lean_dec(v___x_2334_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2489_; 
if (v_isShared_2487_ == 0)
{
v___x_2489_ = v___x_2486_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2484_);
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
}
else
{
lean_object* v___x_2493_; lean_object* v___x_2494_; 
lean_dec(v___x_2324_);
lean_dec_ref(v_type_2322_);
lean_dec(v_levelParams_2321_);
lean_dec(v_name_2320_);
lean_dec(v___x_2317_);
lean_del_object(v___x_2315_);
lean_dec_ref(v_val_2313_);
lean_dec(v_indName_2305_);
lean_dec(v_declName_2304_);
v___x_2493_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__3, &l_Lean_mkCasesOnSameCtorHet___closed__3_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__3);
v___x_2494_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_2493_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
return v___x_2494_;
}
}
else
{
lean_object* v_a_2495_; lean_object* v___x_2497_; uint8_t v_isShared_2498_; uint8_t v_isSharedCheck_2502_; 
lean_dec(v___x_2317_);
lean_del_object(v___x_2315_);
lean_dec_ref(v_val_2313_);
lean_dec(v_indName_2305_);
lean_dec(v_declName_2304_);
v_a_2495_ = lean_ctor_get(v___x_2318_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2318_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2497_ = v___x_2318_;
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
else
{
lean_inc(v_a_2495_);
lean_dec(v___x_2318_);
v___x_2497_ = lean_box(0);
v_isShared_2498_ = v_isSharedCheck_2502_;
goto v_resetjp_2496_;
}
v_resetjp_2496_:
{
lean_object* v___x_2500_; 
if (v_isShared_2498_ == 0)
{
v___x_2500_ = v___x_2497_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v_a_2495_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
}
}
else
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
lean_dec(v_a_2312_);
lean_dec(v_indName_2305_);
lean_dec(v_declName_2304_);
v___x_2504_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__5, &l_Lean_mkCasesOnSameCtorHet___closed__5_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__5);
v___x_2505_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_2504_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
return v___x_2505_;
}
}
else
{
lean_object* v_a_2506_; lean_object* v___x_2508_; uint8_t v_isShared_2509_; uint8_t v_isSharedCheck_2513_; 
lean_dec(v_indName_2305_);
lean_dec(v_declName_2304_);
v_a_2506_ = lean_ctor_get(v___x_2311_, 0);
v_isSharedCheck_2513_ = !lean_is_exclusive(v___x_2311_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2508_ = v___x_2311_;
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
else
{
lean_inc(v_a_2506_);
lean_dec(v___x_2311_);
v___x_2508_ = lean_box(0);
v_isShared_2509_ = v_isSharedCheck_2513_;
goto v_resetjp_2507_;
}
v_resetjp_2507_:
{
lean_object* v___x_2511_; 
if (v_isShared_2509_ == 0)
{
v___x_2511_ = v___x_2508_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_a_2506_);
v___x_2511_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
return v___x_2511_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtorHet___boxed(lean_object* v_declName_2514_, lean_object* v_indName_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = l_Lean_mkCasesOnSameCtorHet(v_declName_2514_, v_indName_2515_, v_a_2516_, v_a_2517_, v_a_2518_, v_a_2519_);
lean_dec(v_a_2519_);
lean_dec_ref(v_a_2518_);
lean_dec(v_a_2517_);
lean_dec_ref(v_a_2516_);
return v_res_2521_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(lean_object* v_00_u03b1_2522_, lean_object* v_name_2523_, lean_object* v_type_2524_, lean_object* v_k_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_){
_start:
{
lean_object* v___x_2531_; 
v___x_2531_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v_name_2523_, v_type_2524_, v_k_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___boxed(lean_object* v_00_u03b1_2532_, lean_object* v_name_2533_, lean_object* v_type_2534_, lean_object* v_k_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_){
_start:
{
lean_object* v_res_2541_; 
v_res_2541_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4(v_00_u03b1_2532_, v_name_2533_, v_type_2534_, v_k_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_);
lean_dec(v___y_2539_);
lean_dec_ref(v___y_2538_);
lean_dec(v___y_2537_);
lean_dec_ref(v___y_2536_);
return v_res_2541_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(lean_object* v_tail_2542_, lean_object* v_params_2543_, lean_object* v_alts_2544_, lean_object* v___x_2545_, lean_object* v_ism2_2546_, lean_object* v_motive_2547_, lean_object* v_val_2548_, lean_object* v_indName_2549_, lean_object* v___x_2550_, lean_object* v___x_2551_, lean_object* v___x_2552_, lean_object* v_as_2553_, lean_object* v_i_2554_, lean_object* v_j_2555_, lean_object* v_inv_2556_, lean_object* v_bs_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
lean_object* v___x_2563_; 
v___x_2563_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg(v_tail_2542_, v_params_2543_, v_alts_2544_, v___x_2545_, v_ism2_2546_, v_motive_2547_, v_val_2548_, v_indName_2549_, v___x_2550_, v___x_2551_, v___x_2552_, v_as_2553_, v_i_2554_, v_j_2555_, v_bs_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___boxed(lean_object** _args){
lean_object* v_tail_2564_ = _args[0];
lean_object* v_params_2565_ = _args[1];
lean_object* v_alts_2566_ = _args[2];
lean_object* v___x_2567_ = _args[3];
lean_object* v_ism2_2568_ = _args[4];
lean_object* v_motive_2569_ = _args[5];
lean_object* v_val_2570_ = _args[6];
lean_object* v_indName_2571_ = _args[7];
lean_object* v___x_2572_ = _args[8];
lean_object* v___x_2573_ = _args[9];
lean_object* v___x_2574_ = _args[10];
lean_object* v_as_2575_ = _args[11];
lean_object* v_i_2576_ = _args[12];
lean_object* v_j_2577_ = _args[13];
lean_object* v_inv_2578_ = _args[14];
lean_object* v_bs_2579_ = _args[15];
lean_object* v___y_2580_ = _args[16];
lean_object* v___y_2581_ = _args[17];
lean_object* v___y_2582_ = _args[18];
lean_object* v___y_2583_ = _args[19];
lean_object* v___y_2584_ = _args[20];
_start:
{
lean_object* v_res_2585_; 
v_res_2585_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5(v_tail_2564_, v_params_2565_, v_alts_2566_, v___x_2567_, v_ism2_2568_, v_motive_2569_, v_val_2570_, v_indName_2571_, v___x_2572_, v___x_2573_, v___x_2574_, v_as_2575_, v_i_2576_, v_j_2577_, v_inv_2578_, v_bs_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_);
lean_dec(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
lean_dec_ref(v_as_2575_);
return v_res_2585_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(lean_object* v_tail_2586_, lean_object* v_params_2587_, lean_object* v___x_2588_, lean_object* v_motive_2589_, lean_object* v_as_2590_, lean_object* v_i_2591_, lean_object* v_j_2592_, lean_object* v_inv_2593_, lean_object* v_bs_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v___x_2600_; 
v___x_2600_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg(v_tail_2586_, v_params_2587_, v___x_2588_, v_motive_2589_, v_as_2590_, v_i_2591_, v_j_2592_, v_bs_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_);
return v___x_2600_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___boxed(lean_object* v_tail_2601_, lean_object* v_params_2602_, lean_object* v___x_2603_, lean_object* v_motive_2604_, lean_object* v_as_2605_, lean_object* v_i_2606_, lean_object* v_j_2607_, lean_object* v_inv_2608_, lean_object* v_bs_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_, lean_object* v___y_2612_, lean_object* v___y_2613_, lean_object* v___y_2614_){
_start:
{
lean_object* v_res_2615_; 
v_res_2615_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6(v_tail_2601_, v_params_2602_, v___x_2603_, v_motive_2604_, v_as_2605_, v_i_2606_, v_j_2607_, v_inv_2608_, v_bs_2609_, v___y_2610_, v___y_2611_, v___y_2612_, v___y_2613_);
lean_dec(v___y_2613_);
lean_dec_ref(v___y_2612_);
lean_dec(v___y_2611_);
lean_dec_ref(v___y_2610_);
lean_dec_ref(v_as_2605_);
lean_dec_ref(v_params_2602_);
return v_res_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(lean_object* v_declName_2616_, uint8_t v_s_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_){
_start:
{
lean_object* v___x_2623_; 
v___x_2623_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___redArg(v_declName_2616_, v_s_2617_, v___y_2619_, v___y_2621_);
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18___boxed(lean_object* v_declName_2624_, lean_object* v_s_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_){
_start:
{
uint8_t v_s_boxed_2631_; lean_object* v_res_2632_; 
v_s_boxed_2631_ = lean_unbox(v_s_2625_);
v_res_2632_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_mkCasesOnSameCtorHet_spec__13_spec__18(v_declName_2624_, v_s_boxed_2631_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_);
lean_dec(v___y_2629_);
lean_dec_ref(v___y_2628_);
lean_dec(v___y_2627_);
lean_dec_ref(v___y_2626_);
return v_res_2632_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(lean_object* v_00_u03b1_2633_, lean_object* v_constName_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v___x_2640_; 
v___x_2640_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___redArg(v_constName_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
return v___x_2640_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2641_, lean_object* v_constName_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_){
_start:
{
lean_object* v_res_2648_; 
v_res_2648_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0(v_00_u03b1_2641_, v_constName_2642_, v___y_2643_, v___y_2644_, v___y_2645_, v___y_2646_);
lean_dec(v___y_2646_);
lean_dec_ref(v___y_2645_);
lean_dec(v___y_2644_);
lean_dec_ref(v___y_2643_);
return v_res_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(lean_object* v_00_u03b1_2649_, lean_object* v_attrName_2650_, lean_object* v_declName_2651_, lean_object* v_asyncPrefix_x3f_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_){
_start:
{
lean_object* v___x_2658_; 
v___x_2658_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___redArg(v_attrName_2650_, v_declName_2651_, v_asyncPrefix_x3f_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_);
return v___x_2658_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15___boxed(lean_object* v_00_u03b1_2659_, lean_object* v_attrName_2660_, lean_object* v_declName_2661_, lean_object* v_asyncPrefix_x3f_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_){
_start:
{
lean_object* v_res_2668_; 
v_res_2668_ = l_Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15(v_00_u03b1_2659_, v_attrName_2660_, v_declName_2661_, v_asyncPrefix_x3f_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_);
lean_dec(v___y_2666_);
lean_dec_ref(v___y_2665_);
lean_dec(v___y_2664_);
lean_dec_ref(v___y_2663_);
return v_res_2668_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(lean_object* v_00_u03b1_2669_, lean_object* v_attrName_2670_, lean_object* v_declName_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_){
_start:
{
lean_object* v___x_2677_; 
v___x_2677_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___redArg(v_attrName_2670_, v_declName_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16___boxed(lean_object* v_00_u03b1_2678_, lean_object* v_attrName_2679_, lean_object* v_declName_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
lean_object* v_res_2686_; 
v_res_2686_ = l_Lean_throwAttrDeclInImportedModule___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__16(v_00_u03b1_2678_, v_attrName_2679_, v_declName_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec(v___y_2682_);
lean_dec_ref(v___y_2681_);
return v_res_2686_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(lean_object* v_00_u03b1_2687_, lean_object* v_ref_2688_, lean_object* v_constName_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v___x_2695_; 
v___x_2695_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___redArg(v_ref_2688_, v_constName_2689_, v___y_2690_, v___y_2691_, v___y_2692_, v___y_2693_);
return v___x_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7___boxed(lean_object* v_00_u03b1_2696_, lean_object* v_ref_2697_, lean_object* v_constName_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_){
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7(v_00_u03b1_2696_, v_ref_2697_, v_constName_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_);
lean_dec(v___y_2702_);
lean_dec_ref(v___y_2701_);
lean_dec(v___y_2700_);
lean_dec_ref(v___y_2699_);
lean_dec(v_ref_2697_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(lean_object* v_00_u03b1_2705_, lean_object* v_msg_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v___y_2710_){
_start:
{
lean_object* v___x_2712_; 
v___x_2712_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v_msg_2706_, v___y_2707_, v___y_2708_, v___y_2709_, v___y_2710_);
return v___x_2712_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___boxed(lean_object* v_00_u03b1_2713_, lean_object* v_msg_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20(v_00_u03b1_2713_, v_msg_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
lean_dec(v___y_2718_);
lean_dec_ref(v___y_2717_);
lean_dec(v___y_2716_);
lean_dec_ref(v___y_2715_);
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(lean_object* v_00_u03b1_2721_, lean_object* v_ref_2722_, lean_object* v_msg_2723_, lean_object* v_declHint_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_, lean_object* v___y_2727_, lean_object* v___y_2728_){
_start:
{
lean_object* v___x_2730_; 
v___x_2730_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___redArg(v_ref_2722_, v_msg_2723_, v_declHint_2724_, v___y_2725_, v___y_2726_, v___y_2727_, v___y_2728_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17___boxed(lean_object* v_00_u03b1_2731_, lean_object* v_ref_2732_, lean_object* v_msg_2733_, lean_object* v_declHint_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17(v_00_u03b1_2731_, v_ref_2732_, v_msg_2733_, v_declHint_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
lean_dec(v___y_2736_);
lean_dec_ref(v___y_2735_);
lean_dec(v_ref_2732_);
return v_res_2740_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(lean_object* v_msg_2741_, lean_object* v_declHint_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_){
_start:
{
lean_object* v___x_2748_; 
v___x_2748_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___redArg(v_msg_2741_, v_declHint_2742_, v___y_2746_);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27___boxed(lean_object* v_msg_2749_, lean_object* v_declHint_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
lean_object* v_res_2756_; 
v_res_2756_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__22_spec__27(v_msg_2749_, v_declHint_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(lean_object* v_00_u03b1_2757_, lean_object* v_ref_2758_, lean_object* v_msg_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_){
_start:
{
lean_object* v___x_2765_; 
v___x_2765_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___redArg(v_ref_2758_, v_msg_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23___boxed(lean_object* v_00_u03b1_2766_, lean_object* v_ref_2767_, lean_object* v_msg_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_, lean_object* v___y_2773_){
_start:
{
lean_object* v_res_2774_; 
v_res_2774_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0_spec__0_spec__7_spec__17_spec__23(v_00_u03b1_2766_, v_ref_2767_, v_msg_2768_, v___y_2769_, v___y_2770_, v___y_2771_, v___y_2772_);
lean_dec(v___y_2772_);
lean_dec_ref(v___y_2771_);
lean_dec(v___y_2770_);
lean_dec_ref(v___y_2769_);
lean_dec(v_ref_2767_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(lean_object* v_e_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
uint8_t v___x_2779_; 
v___x_2779_ = l_Lean_Expr_hasMVar(v_e_2775_);
if (v___x_2779_ == 0)
{
lean_object* v___x_2780_; 
v___x_2780_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2780_, 0, v_e_2775_);
return v___x_2780_;
}
else
{
lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v_mctx_2783_; lean_object* v___x_2784_; lean_object* v_fst_2785_; lean_object* v_snd_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v_cache_2789_; lean_object* v_zetaDeltaFVarIds_2790_; lean_object* v_postponed_2791_; lean_object* v_diag_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2801_; 
v___x_2781_ = lean_st_ref_get(v___y_2777_);
lean_dec(v___x_2781_);
v___x_2782_ = lean_st_ref_get(v___y_2776_);
v_mctx_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc_ref(v_mctx_2783_);
lean_dec(v___x_2782_);
v___x_2784_ = l_Lean_instantiateMVarsCore(v_mctx_2783_, v_e_2775_);
v_fst_2785_ = lean_ctor_get(v___x_2784_, 0);
lean_inc(v_fst_2785_);
v_snd_2786_ = lean_ctor_get(v___x_2784_, 1);
lean_inc(v_snd_2786_);
lean_dec_ref(v___x_2784_);
v___x_2787_ = lean_st_ref_get(v___y_2777_);
lean_dec(v___x_2787_);
v___x_2788_ = lean_st_ref_take(v___y_2776_);
v_cache_2789_ = lean_ctor_get(v___x_2788_, 1);
v_zetaDeltaFVarIds_2790_ = lean_ctor_get(v___x_2788_, 2);
v_postponed_2791_ = lean_ctor_get(v___x_2788_, 3);
v_diag_2792_ = lean_ctor_get(v___x_2788_, 4);
v_isSharedCheck_2801_ = !lean_is_exclusive(v___x_2788_);
if (v_isSharedCheck_2801_ == 0)
{
lean_object* v_unused_2802_; 
v_unused_2802_ = lean_ctor_get(v___x_2788_, 0);
lean_dec(v_unused_2802_);
v___x_2794_ = v___x_2788_;
v_isShared_2795_ = v_isSharedCheck_2801_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_diag_2792_);
lean_inc(v_postponed_2791_);
lean_inc(v_zetaDeltaFVarIds_2790_);
lean_inc(v_cache_2789_);
lean_dec(v___x_2788_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2801_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2797_; 
if (v_isShared_2795_ == 0)
{
lean_ctor_set(v___x_2794_, 0, v_snd_2786_);
v___x_2797_ = v___x_2794_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_snd_2786_);
lean_ctor_set(v_reuseFailAlloc_2800_, 1, v_cache_2789_);
lean_ctor_set(v_reuseFailAlloc_2800_, 2, v_zetaDeltaFVarIds_2790_);
lean_ctor_set(v_reuseFailAlloc_2800_, 3, v_postponed_2791_);
lean_ctor_set(v_reuseFailAlloc_2800_, 4, v_diag_2792_);
v___x_2797_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2798_ = lean_st_ref_set(v___y_2776_, v___x_2797_);
v___x_2799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2799_, 0, v_fst_2785_);
return v___x_2799_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg___boxed(lean_object* v_e_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_){
_start:
{
lean_object* v_res_2807_; 
v_res_2807_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_e_2803_, v___y_2804_, v___y_2805_);
lean_dec(v___y_2805_);
lean_dec(v___y_2804_);
return v_res_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(lean_object* v_e_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v___x_2814_; 
v___x_2814_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_e_2808_, v___y_2810_, v___y_2812_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___boxed(lean_object* v_e_2815_, lean_object* v___y_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_){
_start:
{
lean_object* v_res_2821_; 
v_res_2821_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1(v_e_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
lean_dec(v___y_2817_);
lean_dec_ref(v___y_2816_);
return v_res_2821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(lean_object* v_matcherName_2822_, lean_object* v_info_2823_, lean_object* v___y_2824_, lean_object* v___y_2825_){
_start:
{
lean_object* v___x_2827_; lean_object* v_env_2828_; lean_object* v_nextMacroScope_2829_; lean_object* v_ngen_2830_; lean_object* v_auxDeclNGen_2831_; lean_object* v_traceState_2832_; lean_object* v_messages_2833_; lean_object* v_infoState_2834_; lean_object* v_snapshotTasks_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2863_; 
v___x_2827_ = lean_st_ref_take(v___y_2825_);
v_env_2828_ = lean_ctor_get(v___x_2827_, 0);
v_nextMacroScope_2829_ = lean_ctor_get(v___x_2827_, 1);
v_ngen_2830_ = lean_ctor_get(v___x_2827_, 2);
v_auxDeclNGen_2831_ = lean_ctor_get(v___x_2827_, 3);
v_traceState_2832_ = lean_ctor_get(v___x_2827_, 4);
v_messages_2833_ = lean_ctor_get(v___x_2827_, 6);
v_infoState_2834_ = lean_ctor_get(v___x_2827_, 7);
v_snapshotTasks_2835_ = lean_ctor_get(v___x_2827_, 8);
v_isSharedCheck_2863_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2863_ == 0)
{
lean_object* v_unused_2864_; 
v_unused_2864_ = lean_ctor_get(v___x_2827_, 5);
lean_dec(v_unused_2864_);
v___x_2837_ = v___x_2827_;
v_isShared_2838_ = v_isSharedCheck_2863_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_snapshotTasks_2835_);
lean_inc(v_infoState_2834_);
lean_inc(v_messages_2833_);
lean_inc(v_traceState_2832_);
lean_inc(v_auxDeclNGen_2831_);
lean_inc(v_ngen_2830_);
lean_inc(v_nextMacroScope_2829_);
lean_inc(v_env_2828_);
lean_dec(v___x_2827_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2863_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2842_; 
v___x_2839_ = l_Lean_Meta_Match_Extension_addMatcherInfo(v_env_2828_, v_matcherName_2822_, v_info_2823_);
v___x_2840_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__2);
if (v_isShared_2838_ == 0)
{
lean_ctor_set(v___x_2837_, 5, v___x_2840_);
lean_ctor_set(v___x_2837_, 0, v___x_2839_);
v___x_2842_ = v___x_2837_;
goto v_reusejp_2841_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v___x_2839_);
lean_ctor_set(v_reuseFailAlloc_2862_, 1, v_nextMacroScope_2829_);
lean_ctor_set(v_reuseFailAlloc_2862_, 2, v_ngen_2830_);
lean_ctor_set(v_reuseFailAlloc_2862_, 3, v_auxDeclNGen_2831_);
lean_ctor_set(v_reuseFailAlloc_2862_, 4, v_traceState_2832_);
lean_ctor_set(v_reuseFailAlloc_2862_, 5, v___x_2840_);
lean_ctor_set(v_reuseFailAlloc_2862_, 6, v_messages_2833_);
lean_ctor_set(v_reuseFailAlloc_2862_, 7, v_infoState_2834_);
lean_ctor_set(v_reuseFailAlloc_2862_, 8, v_snapshotTasks_2835_);
v___x_2842_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2841_;
}
v_reusejp_2841_:
{
lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v_mctx_2846_; lean_object* v_zetaDeltaFVarIds_2847_; lean_object* v_postponed_2848_; lean_object* v_diag_2849_; lean_object* v___x_2851_; uint8_t v_isShared_2852_; uint8_t v_isSharedCheck_2860_; 
v___x_2843_ = lean_st_ref_set(v___y_2825_, v___x_2842_);
v___x_2844_ = lean_st_ref_get(v___y_2825_);
lean_dec(v___x_2844_);
v___x_2845_ = lean_st_ref_take(v___y_2824_);
v_mctx_2846_ = lean_ctor_get(v___x_2845_, 0);
v_zetaDeltaFVarIds_2847_ = lean_ctor_get(v___x_2845_, 2);
v_postponed_2848_ = lean_ctor_get(v___x_2845_, 3);
v_diag_2849_ = lean_ctor_get(v___x_2845_, 4);
v_isSharedCheck_2860_ = !lean_is_exclusive(v___x_2845_);
if (v_isSharedCheck_2860_ == 0)
{
lean_object* v_unused_2861_; 
v_unused_2861_ = lean_ctor_get(v___x_2845_, 1);
lean_dec(v_unused_2861_);
v___x_2851_ = v___x_2845_;
v_isShared_2852_ = v_isSharedCheck_2860_;
goto v_resetjp_2850_;
}
else
{
lean_inc(v_diag_2849_);
lean_inc(v_postponed_2848_);
lean_inc(v_zetaDeltaFVarIds_2847_);
lean_inc(v_mctx_2846_);
lean_dec(v___x_2845_);
v___x_2851_ = lean_box(0);
v_isShared_2852_ = v_isSharedCheck_2860_;
goto v_resetjp_2850_;
}
v_resetjp_2850_:
{
lean_object* v___x_2853_; lean_object* v___x_2855_; 
v___x_2853_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3, &l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg___closed__3);
if (v_isShared_2852_ == 0)
{
lean_ctor_set(v___x_2851_, 1, v___x_2853_);
v___x_2855_ = v___x_2851_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v_mctx_2846_);
lean_ctor_set(v_reuseFailAlloc_2859_, 1, v___x_2853_);
lean_ctor_set(v_reuseFailAlloc_2859_, 2, v_zetaDeltaFVarIds_2847_);
lean_ctor_set(v_reuseFailAlloc_2859_, 3, v_postponed_2848_);
lean_ctor_set(v_reuseFailAlloc_2859_, 4, v_diag_2849_);
v___x_2855_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v___x_2856_ = lean_st_ref_set(v___y_2824_, v___x_2855_);
v___x_2857_ = lean_box(0);
v___x_2858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2858_, 0, v___x_2857_);
return v___x_2858_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg___boxed(lean_object* v_matcherName_2865_, lean_object* v_info_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
lean_object* v_res_2870_; 
v_res_2870_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_matcherName_2865_, v_info_2866_, v___y_2867_, v___y_2868_);
lean_dec(v___y_2868_);
lean_dec(v___y_2867_);
return v_res_2870_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(lean_object* v_matcherName_2871_, lean_object* v_info_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
lean_object* v___x_2878_; 
v___x_2878_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_matcherName_2871_, v_info_2872_, v___y_2874_, v___y_2876_);
return v___x_2878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___boxed(lean_object* v_matcherName_2879_, lean_object* v_info_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3(v_matcherName_2879_, v_info_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_);
lean_dec(v___y_2884_);
lean_dec_ref(v___y_2883_);
lean_dec(v___y_2882_);
lean_dec_ref(v___y_2881_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0(lean_object* v_motive_2887_, lean_object* v___x_2888_, lean_object* v_newEqs1_2889_, uint8_t v___x_2890_, uint8_t v___x_2891_, uint8_t v___x_2892_, lean_object* v_ism1_x27_2893_, lean_object* v_ism2_x27_2894_, lean_object* v_newRefls1_2895_, lean_object* v_newEqs2_2896_, lean_object* v_newRefls2_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_){
_start:
{
lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
v___x_2903_ = l_Lean_mkAppN(v_motive_2887_, v___x_2888_);
v___x_2904_ = l_Array_append___redArg(v_newEqs1_2889_, v_newEqs2_2896_);
v___x_2905_ = l_Lean_Meta_mkForallFVars(v___x_2904_, v___x_2903_, v___x_2890_, v___x_2891_, v___x_2891_, v___x_2892_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_);
lean_dec_ref(v___x_2904_);
if (lean_obj_tag(v___x_2905_) == 0)
{
lean_object* v_a_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; 
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
lean_inc(v_a_2906_);
lean_dec_ref(v___x_2905_);
v___x_2907_ = l_Array_append___redArg(v_ism1_x27_2893_, v_ism2_x27_2894_);
v___x_2908_ = l_Lean_Meta_mkLambdaFVars(v___x_2907_, v_a_2906_, v___x_2890_, v___x_2891_, v___x_2890_, v___x_2891_, v___x_2892_, v___y_2898_, v___y_2899_, v___y_2900_, v___y_2901_);
lean_dec_ref(v___x_2907_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2918_; 
v_a_2909_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2918_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2918_ == 0)
{
v___x_2911_ = v___x_2908_;
v_isShared_2912_ = v_isSharedCheck_2918_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2908_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2918_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2916_; 
v___x_2913_ = l_Array_append___redArg(v_newRefls1_2895_, v_newRefls2_2897_);
v___x_2914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2914_, 0, v_a_2909_);
lean_ctor_set(v___x_2914_, 1, v___x_2913_);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 0, v___x_2914_);
v___x_2916_ = v___x_2911_;
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
else
{
lean_object* v_a_2919_; lean_object* v___x_2921_; uint8_t v_isShared_2922_; uint8_t v_isSharedCheck_2926_; 
lean_dec_ref(v_newRefls1_2895_);
v_a_2919_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2921_ = v___x_2908_;
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
else
{
lean_inc(v_a_2919_);
lean_dec(v___x_2908_);
v___x_2921_ = lean_box(0);
v_isShared_2922_ = v_isSharedCheck_2926_;
goto v_resetjp_2920_;
}
v_resetjp_2920_:
{
lean_object* v___x_2924_; 
if (v_isShared_2922_ == 0)
{
v___x_2924_ = v___x_2921_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v_a_2919_);
v___x_2924_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
return v___x_2924_;
}
}
}
}
else
{
lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2934_; 
lean_dec_ref(v_newRefls1_2895_);
lean_dec_ref(v_ism1_x27_2893_);
v_a_2927_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2929_ = v___x_2905_;
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_dec(v___x_2905_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2932_; 
if (v_isShared_2930_ == 0)
{
v___x_2932_ = v___x_2929_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2933_; 
v_reuseFailAlloc_2933_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2933_, 0, v_a_2927_);
v___x_2932_ = v_reuseFailAlloc_2933_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
return v___x_2932_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__0___boxed(lean_object* v_motive_2935_, lean_object* v___x_2936_, lean_object* v_newEqs1_2937_, lean_object* v___x_2938_, lean_object* v___x_2939_, lean_object* v___x_2940_, lean_object* v_ism1_x27_2941_, lean_object* v_ism2_x27_2942_, lean_object* v_newRefls1_2943_, lean_object* v_newEqs2_2944_, lean_object* v_newRefls2_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_){
_start:
{
uint8_t v___x_15272__boxed_2951_; uint8_t v___x_15273__boxed_2952_; uint8_t v___x_15274__boxed_2953_; lean_object* v_res_2954_; 
v___x_15272__boxed_2951_ = lean_unbox(v___x_2938_);
v___x_15273__boxed_2952_ = lean_unbox(v___x_2939_);
v___x_15274__boxed_2953_ = lean_unbox(v___x_2940_);
v_res_2954_ = l_Lean_mkCasesOnSameCtor___lam__0(v_motive_2935_, v___x_2936_, v_newEqs1_2937_, v___x_15272__boxed_2951_, v___x_15273__boxed_2952_, v___x_15274__boxed_2953_, v_ism1_x27_2941_, v_ism2_x27_2942_, v_newRefls1_2943_, v_newEqs2_2944_, v_newRefls2_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_);
lean_dec(v___y_2949_);
lean_dec_ref(v___y_2948_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec_ref(v_newRefls2_2945_);
lean_dec_ref(v_newEqs2_2944_);
lean_dec_ref(v_ism2_x27_2942_);
lean_dec_ref(v___x_2936_);
return v_res_2954_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1(lean_object* v_motive_2955_, lean_object* v___x_2956_, uint8_t v___x_2957_, uint8_t v___x_2958_, uint8_t v___x_2959_, lean_object* v_ism1_x27_2960_, lean_object* v_ism2_x27_2961_, lean_object* v_is_2962_, lean_object* v___x_2963_, lean_object* v_newEqs1_2964_, lean_object* v_newRefls1_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___f_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2971_ = lean_box(v___x_2957_);
v___x_2972_ = lean_box(v___x_2958_);
v___x_2973_ = lean_box(v___x_2959_);
lean_inc_ref(v_ism2_x27_2961_);
v___f_2974_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__0___boxed), 16, 9);
lean_closure_set(v___f_2974_, 0, v_motive_2955_);
lean_closure_set(v___f_2974_, 1, v___x_2956_);
lean_closure_set(v___f_2974_, 2, v_newEqs1_2964_);
lean_closure_set(v___f_2974_, 3, v___x_2971_);
lean_closure_set(v___f_2974_, 4, v___x_2972_);
lean_closure_set(v___f_2974_, 5, v___x_2973_);
lean_closure_set(v___f_2974_, 6, v_ism1_x27_2960_);
lean_closure_set(v___f_2974_, 7, v_ism2_x27_2961_);
lean_closure_set(v___f_2974_, 8, v_newRefls1_2965_);
v___x_2975_ = lean_array_push(v_is_2962_, v___x_2963_);
v___x_2976_ = l_Lean_Meta_withNewEqs___redArg(v___x_2975_, v_ism2_x27_2961_, v___f_2974_, v___y_2966_, v___y_2967_, v___y_2968_, v___y_2969_);
return v___x_2976_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__1___boxed(lean_object* v_motive_2977_, lean_object* v___x_2978_, lean_object* v___x_2979_, lean_object* v___x_2980_, lean_object* v___x_2981_, lean_object* v_ism1_x27_2982_, lean_object* v_ism2_x27_2983_, lean_object* v_is_2984_, lean_object* v___x_2985_, lean_object* v_newEqs1_2986_, lean_object* v_newRefls1_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_){
_start:
{
uint8_t v___x_15363__boxed_2993_; uint8_t v___x_15364__boxed_2994_; uint8_t v___x_15365__boxed_2995_; lean_object* v_res_2996_; 
v___x_15363__boxed_2993_ = lean_unbox(v___x_2979_);
v___x_15364__boxed_2994_ = lean_unbox(v___x_2980_);
v___x_15365__boxed_2995_ = lean_unbox(v___x_2981_);
v_res_2996_ = l_Lean_mkCasesOnSameCtor___lam__1(v_motive_2977_, v___x_2978_, v___x_15363__boxed_2993_, v___x_15364__boxed_2994_, v___x_15365__boxed_2995_, v_ism1_x27_2982_, v_ism2_x27_2983_, v_is_2984_, v___x_2985_, v_newEqs1_2986_, v_newRefls1_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_);
lean_dec(v___y_2991_);
lean_dec_ref(v___y_2990_);
lean_dec(v___y_2989_);
lean_dec_ref(v___y_2988_);
return v_res_2996_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2(lean_object* v___x_2997_, uint8_t v___x_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_){
_start:
{
lean_object* v___x_3004_; 
v___x_3004_ = l_Lean_addDecl(v___x_2997_, v___x_2998_, v___y_3001_, v___y_3002_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__2___boxed(lean_object* v___x_3005_, lean_object* v___x_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_, lean_object* v___y_3011_){
_start:
{
uint8_t v___x_15405__boxed_3012_; lean_object* v_res_3013_; 
v___x_15405__boxed_3012_ = lean_unbox(v___x_3006_);
v_res_3013_ = l_Lean_mkCasesOnSameCtor___lam__2(v___x_3005_, v___x_15405__boxed_3012_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_);
lean_dec(v___y_3010_);
lean_dec_ref(v___y_3009_);
lean_dec(v___y_3008_);
lean_dec_ref(v___y_3007_);
return v_res_3013_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3014_; 
v___x_3014_ = lean_mk_string_unchecked("could not apply ", 16, 16);
return v___x_3014_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3015_; lean_object* v___x_3016_; 
v___x_3015_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__0);
v___x_3016_ = l_Lean_stringToMessageData(v___x_3015_);
return v___x_3016_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3017_; 
v___x_3017_ = lean_mk_string_unchecked(" to close\n", 10, 10);
return v___x_3017_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3018_; lean_object* v___x_3019_; 
v___x_3018_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__2);
v___x_3019_ = l_Lean_stringToMessageData(v___x_3018_);
return v___x_3019_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3020_; 
v___x_3020_ = lean_mk_string_unchecked("Unit", 4, 4);
return v___x_3020_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_3021_; 
v___x_3021_ = lean_mk_string_unchecked("unit", 4, 4);
return v___x_3021_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; 
v___x_3022_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__5);
v___x_3023_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4);
v___x_3024_ = l_Lean_Name_mkStr2(v___x_3023_, v___x_3022_);
return v___x_3024_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; 
v___x_3025_ = lean_box(0);
v___x_3026_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__6);
v___x_3027_ = l_Lean_mkConst(v___x_3026_, v___x_3025_);
return v___x_3027_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_3028_; 
v___x_3028_ = lean_mk_string_unchecked("unifyEqns\? unexpectedly closed goal", 35, 35);
return v___x_3028_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9(void){
_start:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3029_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__8);
v___x_3030_ = l_Lean_stringToMessageData(v___x_3029_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(lean_object* v___x_3031_, lean_object* v_a_3032_, lean_object* v_j_3033_, lean_object* v_zs1_3034_, lean_object* v_snd_3035_, uint8_t v___x_3036_, uint8_t v_isZero_3037_, uint8_t v___x_3038_, lean_object* v_alts_3039_, lean_object* v_zs2_3040_, lean_object* v___ctorRet2_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_){
_start:
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3047_ = lean_array_get_borrowed(v___x_3031_, v_a_3032_, v_j_3033_);
lean_inc_ref(v_zs1_3034_);
v___x_3048_ = l_Array_append___redArg(v_zs1_3034_, v_zs2_3040_);
lean_inc(v___x_3047_);
v___x_3049_ = l_Lean_Meta_instantiateForall(v___x_3047_, v___x_3048_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v_a_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; 
v_a_3050_ = lean_ctor_get(v___x_3049_, 0);
lean_inc(v_a_3050_);
lean_dec_ref(v___x_3049_);
v___x_3051_ = lean_box(0);
v___x_3052_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_3050_, v___x_3051_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
if (lean_obj_tag(v___x_3052_) == 0)
{
lean_object* v_a_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; 
v_a_3053_ = lean_ctor_get(v___x_3052_, 0);
lean_inc(v_a_3053_);
lean_dec_ref(v___x_3052_);
v___x_3054_ = l_Lean_Expr_mvarId_x21(v_a_3053_);
v___x_3055_ = lean_array_get_size(v_snd_3035_);
v___x_3056_ = lean_box(0);
v___x_3057_ = lean_box(0);
lean_inc_ref(v___y_3044_);
v___x_3058_ = l_Lean_Meta_Cases_unifyEqs_x3f(v___x_3055_, v___x_3054_, v___x_3056_, v___x_3057_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
if (lean_obj_tag(v___x_3058_) == 0)
{
lean_object* v_a_3059_; 
v_a_3059_ = lean_ctor_get(v___x_3058_, 0);
lean_inc(v_a_3059_);
lean_dec_ref(v___x_3058_);
if (lean_obj_tag(v_a_3059_) == 1)
{
lean_object* v_val_3060_; lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3107_; 
v_val_3060_ = lean_ctor_get(v_a_3059_, 0);
v_isSharedCheck_3107_ = !lean_is_exclusive(v_a_3059_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3062_ = v_a_3059_;
v_isShared_3063_ = v_isSharedCheck_3107_;
goto v_resetjp_3061_;
}
else
{
lean_inc(v_val_3060_);
lean_dec(v_a_3059_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3107_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v_fst_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3105_; 
v_fst_3064_ = lean_ctor_get(v_val_3060_, 0);
v_isSharedCheck_3105_ = !lean_is_exclusive(v_val_3060_);
if (v_isSharedCheck_3105_ == 0)
{
lean_object* v_unused_3106_; 
v_unused_3106_ = lean_ctor_get(v_val_3060_, 1);
lean_dec(v_unused_3106_);
v___x_3066_ = v_val_3060_;
v_isShared_3067_ = v_isSharedCheck_3105_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_fst_3064_);
lean_dec(v_val_3060_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3105_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___y_3069_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; uint8_t v___x_3100_; 
v___x_3097_ = lean_array_get_borrowed(v___x_3031_, v_alts_3039_, v_j_3033_);
v___x_3098_ = lean_array_get_size(v_zs1_3034_);
lean_dec_ref(v_zs1_3034_);
v___x_3099_ = lean_unsigned_to_nat(0u);
v___x_3100_ = lean_nat_dec_eq(v___x_3098_, v___x_3099_);
if (v___x_3100_ == 0)
{
lean_inc(v___x_3097_);
v___y_3069_ = v___x_3097_;
goto v___jp_3068_;
}
else
{
lean_object* v___x_3101_; uint8_t v___x_3102_; 
v___x_3101_ = lean_array_get_size(v_zs2_3040_);
v___x_3102_ = lean_nat_dec_eq(v___x_3101_, v___x_3099_);
if (v___x_3102_ == 0)
{
lean_inc(v___x_3097_);
v___y_3069_ = v___x_3097_;
goto v___jp_3068_;
}
else
{
lean_object* v___x_3103_; lean_object* v___x_3104_; 
v___x_3103_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__7);
lean_inc(v___x_3097_);
v___x_3104_ = l_Lean_Expr_app___override(v___x_3097_, v___x_3103_);
v___y_3069_ = v___x_3104_;
goto v___jp_3068_;
}
}
v___jp_3068_:
{
uint8_t v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v___x_3070_ = 0;
v___x_3071_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3071_, 0, v___x_3070_);
lean_ctor_set_uint8(v___x_3071_, 1, v___x_3036_);
lean_ctor_set_uint8(v___x_3071_, 2, v_isZero_3037_);
lean_ctor_set_uint8(v___x_3071_, 3, v___x_3036_);
lean_inc_ref(v___y_3069_);
lean_inc(v_fst_3064_);
v___x_3072_ = l_Lean_MVarId_apply(v_fst_3064_, v___y_3069_, v___x_3071_, v___x_3057_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
if (lean_obj_tag(v___x_3072_) == 0)
{
lean_object* v_a_3073_; 
v_a_3073_ = lean_ctor_get(v___x_3072_, 0);
lean_inc(v_a_3073_);
lean_dec_ref(v___x_3072_);
if (lean_obj_tag(v_a_3073_) == 0)
{
lean_object* v___x_3074_; lean_object* v_a_3075_; lean_object* v___x_3076_; 
lean_dec_ref(v___y_3069_);
lean_del_object(v___x_3066_);
lean_dec(v_fst_3064_);
lean_del_object(v___x_3062_);
v___x_3074_ = l_Lean_instantiateMVars___at___00Lean_mkCasesOnSameCtor_spec__1___redArg(v_a_3053_, v___y_3043_, v___y_3045_);
v_a_3075_ = lean_ctor_get(v___x_3074_, 0);
lean_inc(v_a_3075_);
lean_dec_ref(v___x_3074_);
v___x_3076_ = l_Lean_Meta_mkLambdaFVars(v___x_3048_, v_a_3075_, v_isZero_3037_, v___x_3036_, v_isZero_3037_, v___x_3036_, v___x_3038_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
lean_dec_ref(v___x_3048_);
return v___x_3076_;
}
else
{
lean_object* v___x_3077_; lean_object* v___x_3078_; lean_object* v___x_3080_; 
lean_dec(v_a_3073_);
lean_dec(v_a_3053_);
lean_dec_ref(v___x_3048_);
v___x_3077_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__1);
v___x_3078_ = l_Lean_MessageData_ofExpr(v___y_3069_);
if (v_isShared_3067_ == 0)
{
lean_ctor_set_tag(v___x_3066_, 7);
lean_ctor_set(v___x_3066_, 1, v___x_3078_);
lean_ctor_set(v___x_3066_, 0, v___x_3077_);
v___x_3080_ = v___x_3066_;
goto v_reusejp_3079_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v___x_3077_);
lean_ctor_set(v_reuseFailAlloc_3088_, 1, v___x_3078_);
v___x_3080_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3079_;
}
v_reusejp_3079_:
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3084_; 
v___x_3081_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__3);
v___x_3082_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3082_, 0, v___x_3080_);
lean_ctor_set(v___x_3082_, 1, v___x_3081_);
if (v_isShared_3063_ == 0)
{
lean_ctor_set(v___x_3062_, 0, v_fst_3064_);
v___x_3084_ = v___x_3062_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_fst_3064_);
v___x_3084_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
lean_object* v___x_3085_; lean_object* v___x_3086_; 
v___x_3085_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3082_);
lean_ctor_set(v___x_3085_, 1, v___x_3084_);
v___x_3086_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_3085_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
return v___x_3086_;
}
}
}
}
else
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3096_; 
lean_dec_ref(v___y_3069_);
lean_del_object(v___x_3066_);
lean_dec(v_fst_3064_);
lean_del_object(v___x_3062_);
lean_dec(v_a_3053_);
lean_dec_ref(v___x_3048_);
v_a_3089_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3096_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3096_ == 0)
{
v___x_3091_ = v___x_3072_;
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_3072_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3096_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v___x_3094_; 
if (v_isShared_3092_ == 0)
{
v___x_3094_ = v___x_3091_;
goto v_reusejp_3093_;
}
else
{
lean_object* v_reuseFailAlloc_3095_; 
v_reuseFailAlloc_3095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3095_, 0, v_a_3089_);
v___x_3094_ = v_reuseFailAlloc_3095_;
goto v_reusejp_3093_;
}
v_reusejp_3093_:
{
return v___x_3094_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_3108_; lean_object* v___x_3109_; 
lean_dec(v_a_3059_);
lean_dec(v_a_3053_);
lean_dec_ref(v___x_3048_);
lean_dec_ref(v_zs1_3034_);
v___x_3108_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__9);
v___x_3109_ = l_Lean_throwError___at___00Lean_throwAttrNotInAsyncCtx___at___00Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12_spec__15_spec__20___redArg(v___x_3108_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
return v___x_3109_;
}
}
else
{
lean_object* v_a_3110_; lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3117_; 
lean_dec(v_a_3053_);
lean_dec_ref(v___x_3048_);
lean_dec_ref(v_zs1_3034_);
v_a_3110_ = lean_ctor_get(v___x_3058_, 0);
v_isSharedCheck_3117_ = !lean_is_exclusive(v___x_3058_);
if (v_isSharedCheck_3117_ == 0)
{
v___x_3112_ = v___x_3058_;
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
else
{
lean_inc(v_a_3110_);
lean_dec(v___x_3058_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3117_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v___x_3115_; 
if (v_isShared_3113_ == 0)
{
v___x_3115_ = v___x_3112_;
goto v_reusejp_3114_;
}
else
{
lean_object* v_reuseFailAlloc_3116_; 
v_reuseFailAlloc_3116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3116_, 0, v_a_3110_);
v___x_3115_ = v_reuseFailAlloc_3116_;
goto v_reusejp_3114_;
}
v_reusejp_3114_:
{
return v___x_3115_;
}
}
}
}
else
{
lean_dec_ref(v___x_3048_);
lean_dec_ref(v_zs1_3034_);
return v___x_3052_;
}
}
else
{
lean_dec_ref(v___x_3048_);
lean_dec_ref(v_zs1_3034_);
return v___x_3049_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed(lean_object* v___x_3118_, lean_object* v_a_3119_, lean_object* v_j_3120_, lean_object* v_zs1_3121_, lean_object* v_snd_3122_, lean_object* v___x_3123_, lean_object* v_isZero_3124_, lean_object* v___x_3125_, lean_object* v_alts_3126_, lean_object* v_zs2_3127_, lean_object* v___ctorRet2_3128_, lean_object* v___y_3129_, lean_object* v___y_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_){
_start:
{
uint8_t v___x_15464__boxed_3134_; uint8_t v_isZero_boxed_3135_; uint8_t v___x_15465__boxed_3136_; lean_object* v_res_3137_; 
v___x_15464__boxed_3134_ = lean_unbox(v___x_3123_);
v_isZero_boxed_3135_ = lean_unbox(v_isZero_3124_);
v___x_15465__boxed_3136_ = lean_unbox(v___x_3125_);
v_res_3137_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0(v___x_3118_, v_a_3119_, v_j_3120_, v_zs1_3121_, v_snd_3122_, v___x_15464__boxed_3134_, v_isZero_boxed_3135_, v___x_15465__boxed_3136_, v_alts_3126_, v_zs2_3127_, v___ctorRet2_3128_, v___y_3129_, v___y_3130_, v___y_3131_, v___y_3132_);
lean_dec(v___y_3132_);
lean_dec_ref(v___y_3131_);
lean_dec(v___y_3130_);
lean_dec_ref(v___y_3129_);
lean_dec_ref(v___ctorRet2_3128_);
lean_dec_ref(v_zs2_3127_);
lean_dec_ref(v_alts_3126_);
lean_dec_ref(v_snd_3122_);
lean_dec(v_j_3120_);
lean_dec_ref(v_a_3119_);
lean_dec_ref(v___x_3118_);
return v_res_3137_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(lean_object* v___x_3138_, lean_object* v_a_3139_, lean_object* v_j_3140_, lean_object* v_snd_3141_, uint8_t v___x_3142_, uint8_t v_isZero_3143_, uint8_t v___x_3144_, lean_object* v_alts_3145_, lean_object* v_a_3146_, lean_object* v_zs1_3147_, lean_object* v___ctorRet1_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_){
_start:
{
lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___f_3157_; lean_object* v___x_3158_; 
v___x_3154_ = lean_box(v___x_3142_);
v___x_3155_ = lean_box(v_isZero_3143_);
v___x_3156_ = lean_box(v___x_3144_);
v___f_3157_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___boxed), 16, 9);
lean_closure_set(v___f_3157_, 0, v___x_3138_);
lean_closure_set(v___f_3157_, 1, v_a_3139_);
lean_closure_set(v___f_3157_, 2, v_j_3140_);
lean_closure_set(v___f_3157_, 3, v_zs1_3147_);
lean_closure_set(v___f_3157_, 4, v_snd_3141_);
lean_closure_set(v___f_3157_, 5, v___x_3154_);
lean_closure_set(v___f_3157_, 6, v___x_3155_);
lean_closure_set(v___f_3157_, 7, v___x_3156_);
lean_closure_set(v___f_3157_, 8, v_alts_3145_);
v___x_3158_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_3146_, v___f_3157_, v_isZero_3143_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_);
return v___x_3158_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed(lean_object* v___x_3159_, lean_object* v_a_3160_, lean_object* v_j_3161_, lean_object* v_snd_3162_, lean_object* v___x_3163_, lean_object* v_isZero_3164_, lean_object* v___x_3165_, lean_object* v_alts_3166_, lean_object* v_a_3167_, lean_object* v_zs1_3168_, lean_object* v___ctorRet1_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_){
_start:
{
uint8_t v___x_15657__boxed_3175_; uint8_t v_isZero_boxed_3176_; uint8_t v___x_15658__boxed_3177_; lean_object* v_res_3178_; 
v___x_15657__boxed_3175_ = lean_unbox(v___x_3163_);
v_isZero_boxed_3176_ = lean_unbox(v_isZero_3164_);
v___x_15658__boxed_3177_ = lean_unbox(v___x_3165_);
v_res_3178_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1(v___x_3159_, v_a_3160_, v_j_3161_, v_snd_3162_, v___x_15657__boxed_3175_, v_isZero_boxed_3176_, v___x_15658__boxed_3177_, v_alts_3166_, v_a_3167_, v_zs1_3168_, v___ctorRet1_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_);
lean_dec(v___y_3173_);
lean_dec_ref(v___y_3172_);
lean_dec(v___y_3171_);
lean_dec_ref(v___y_3170_);
lean_dec_ref(v___ctorRet1_3169_);
return v_res_3178_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(lean_object* v_tail_3179_, lean_object* v_params_3180_, lean_object* v_a_3181_, lean_object* v_snd_3182_, lean_object* v_alts_3183_, lean_object* v_as_3184_, lean_object* v_i_3185_, lean_object* v_j_3186_, lean_object* v_bs_3187_, lean_object* v___y_3188_, lean_object* v___y_3189_, lean_object* v___y_3190_, lean_object* v___y_3191_){
_start:
{
lean_object* v_zero_3193_; uint8_t v_isZero_3194_; 
v_zero_3193_ = lean_unsigned_to_nat(0u);
v_isZero_3194_ = lean_nat_dec_eq(v_i_3185_, v_zero_3193_);
if (v_isZero_3194_ == 1)
{
lean_object* v___x_3195_; 
lean_dec(v_j_3186_);
lean_dec(v_i_3185_);
lean_dec_ref(v_alts_3183_);
lean_dec_ref(v_snd_3182_);
lean_dec_ref(v_a_3181_);
lean_dec(v_tail_3179_);
v___x_3195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3195_, 0, v_bs_3187_);
return v___x_3195_;
}
else
{
lean_object* v_one_3196_; lean_object* v_n_3197_; lean_object* v___y_3199_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; 
v_one_3196_ = lean_unsigned_to_nat(1u);
v_n_3197_ = lean_nat_sub(v_i_3185_, v_one_3196_);
lean_dec(v_i_3185_);
v___x_3212_ = lean_array_fget_borrowed(v_as_3184_, v_j_3186_);
lean_inc(v_tail_3179_);
lean_inc(v___x_3212_);
v___x_3213_ = l_Lean_mkConst(v___x_3212_, v_tail_3179_);
v___x_3214_ = l_Lean_mkAppN(v___x_3213_, v_params_3180_);
lean_inc(v___y_3191_);
lean_inc_ref(v___y_3190_);
lean_inc(v___y_3189_);
lean_inc_ref(v___y_3188_);
v___x_3215_ = lean_infer_type(v___x_3214_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_);
if (lean_obj_tag(v___x_3215_) == 0)
{
lean_object* v_a_3216_; lean_object* v___x_3217_; uint8_t v___x_3218_; uint8_t v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___f_3223_; lean_object* v___x_3224_; 
v_a_3216_ = lean_ctor_get(v___x_3215_, 0);
lean_inc_n(v_a_3216_, 2);
lean_dec_ref(v___x_3215_);
v___x_3217_ = l_Lean_instInhabitedExpr;
v___x_3218_ = 1;
v___x_3219_ = 1;
v___x_3220_ = lean_box(v___x_3218_);
v___x_3221_ = lean_box(v_isZero_3194_);
v___x_3222_ = lean_box(v___x_3219_);
lean_inc_ref(v_alts_3183_);
lean_inc_ref(v_snd_3182_);
lean_inc(v_j_3186_);
lean_inc_ref(v_a_3181_);
v___f_3223_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__1___boxed), 16, 9);
lean_closure_set(v___f_3223_, 0, v___x_3217_);
lean_closure_set(v___f_3223_, 1, v_a_3181_);
lean_closure_set(v___f_3223_, 2, v_j_3186_);
lean_closure_set(v___f_3223_, 3, v_snd_3182_);
lean_closure_set(v___f_3223_, 4, v___x_3220_);
lean_closure_set(v___f_3223_, 5, v___x_3221_);
lean_closure_set(v___f_3223_, 6, v___x_3222_);
lean_closure_set(v___f_3223_, 7, v_alts_3183_);
lean_closure_set(v___f_3223_, 8, v_a_3216_);
v___x_3224_ = l_Lean_Meta_forallTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__3___redArg(v_a_3216_, v___f_3223_, v_isZero_3194_, v___y_3188_, v___y_3189_, v___y_3190_, v___y_3191_);
v___y_3199_ = v___x_3224_;
goto v___jp_3198_;
}
else
{
v___y_3199_ = v___x_3215_;
goto v___jp_3198_;
}
v___jp_3198_:
{
if (lean_obj_tag(v___y_3199_) == 0)
{
lean_object* v_a_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v_a_3200_ = lean_ctor_get(v___y_3199_, 0);
lean_inc(v_a_3200_);
lean_dec_ref(v___y_3199_);
v___x_3201_ = lean_nat_add(v_j_3186_, v_one_3196_);
lean_dec(v_j_3186_);
v___x_3202_ = lean_array_push(v_bs_3187_, v_a_3200_);
v_i_3185_ = v_n_3197_;
v_j_3186_ = v___x_3201_;
v_bs_3187_ = v___x_3202_;
goto _start;
}
else
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3211_; 
lean_dec(v_n_3197_);
lean_dec_ref(v_bs_3187_);
lean_dec(v_j_3186_);
lean_dec_ref(v_alts_3183_);
lean_dec_ref(v_snd_3182_);
lean_dec_ref(v_a_3181_);
lean_dec(v_tail_3179_);
v_a_3204_ = lean_ctor_get(v___y_3199_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v___y_3199_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3206_ = v___y_3199_;
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v___y_3199_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3209_; 
if (v_isShared_3207_ == 0)
{
v___x_3209_ = v___x_3206_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_a_3204_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___boxed(lean_object* v_tail_3225_, lean_object* v_params_3226_, lean_object* v_a_3227_, lean_object* v_snd_3228_, lean_object* v_alts_3229_, lean_object* v_as_3230_, lean_object* v_i_3231_, lean_object* v_j_3232_, lean_object* v_bs_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_){
_start:
{
lean_object* v_res_3239_; 
v_res_3239_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_3225_, v_params_3226_, v_a_3227_, v_snd_3228_, v_alts_3229_, v_as_3230_, v_i_3231_, v_j_3232_, v_bs_3233_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
lean_dec(v___y_3237_);
lean_dec_ref(v___y_3236_);
lean_dec(v___y_3235_);
lean_dec_ref(v___y_3234_);
lean_dec_ref(v_as_3230_);
lean_dec_ref(v_params_3226_);
return v_res_3239_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___lam__3___closed__0(void){
_start:
{
lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; 
v___x_3240_ = lean_box(0);
v___x_3241_ = lean_unsigned_to_nat(16u);
v___x_3242_ = lean_mk_array(v___x_3241_, v___x_3240_);
return v___x_3242_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3(lean_object* v_motive_3243_, lean_object* v___x_3244_, uint8_t v___x_3245_, uint8_t v___x_3246_, uint8_t v___x_3247_, lean_object* v_ism1_x27_3248_, lean_object* v_is_3249_, lean_object* v___x_3250_, lean_object* v___x_3251_, lean_object* v___x_3252_, lean_object* v___x_3253_, lean_object* v_params_3254_, lean_object* v___x_3255_, lean_object* v___x_3256_, lean_object* v_heq_3257_, lean_object* v_val_3258_, lean_object* v___x_3259_, lean_object* v_tail_3260_, lean_object* v_alts_3261_, lean_object* v___x_3262_, lean_object* v___x_3263_, lean_object* v___x_3264_, lean_object* v_declName_3265_, lean_object* v_levelParams_3266_, lean_object* v_numIndices_3267_, lean_object* v___x_3268_, lean_object* v_numParams_3269_, lean_object* v_snd_3270_, lean_object* v_ism2_x27_3271_, lean_object* v_x_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v___f_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3278_ = lean_box(v___x_3245_);
v___x_3279_ = lean_box(v___x_3246_);
v___x_3280_ = lean_box(v___x_3247_);
lean_inc_ref(v___x_3250_);
lean_inc_ref_n(v_is_3249_, 2);
lean_inc_ref(v_ism1_x27_3248_);
lean_inc_ref(v_motive_3243_);
v___f_3281_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__1___boxed), 16, 9);
lean_closure_set(v___f_3281_, 0, v_motive_3243_);
lean_closure_set(v___f_3281_, 1, v___x_3244_);
lean_closure_set(v___f_3281_, 2, v___x_3278_);
lean_closure_set(v___f_3281_, 3, v___x_3279_);
lean_closure_set(v___f_3281_, 4, v___x_3280_);
lean_closure_set(v___f_3281_, 5, v_ism1_x27_3248_);
lean_closure_set(v___f_3281_, 6, v_ism2_x27_3271_);
lean_closure_set(v___f_3281_, 7, v_is_3249_);
lean_closure_set(v___f_3281_, 8, v___x_3250_);
lean_inc_ref(v___x_3251_);
v___x_3282_ = lean_array_push(v_is_3249_, v___x_3251_);
v___x_3283_ = l_Lean_Meta_withNewEqs___redArg(v___x_3282_, v_ism1_x27_3248_, v___f_3281_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3283_) == 0)
{
lean_object* v_a_3284_; lean_object* v_fst_3285_; lean_object* v_snd_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3388_; 
v_a_3284_ = lean_ctor_get(v___x_3283_, 0);
lean_inc(v_a_3284_);
lean_dec_ref(v___x_3283_);
v_fst_3285_ = lean_ctor_get(v_a_3284_, 0);
v_snd_3286_ = lean_ctor_get(v_a_3284_, 1);
v_isSharedCheck_3388_ = !lean_is_exclusive(v_a_3284_);
if (v_isSharedCheck_3388_ == 0)
{
v___x_3288_ = v_a_3284_;
v_isShared_3289_ = v_isSharedCheck_3388_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_snd_3286_);
lean_inc(v_fst_3285_);
lean_dec(v_a_3284_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3388_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; 
v___x_3290_ = l_Lean_mkConst(v___x_3252_, v___x_3253_);
v___x_3291_ = l_Lean_mkAppN(v___x_3290_, v_params_3254_);
v___x_3292_ = l_Lean_Expr_app___override(v___x_3291_, v_fst_3285_);
lean_inc_ref(v_is_3249_);
v___x_3293_ = l_Array_append___redArg(v_is_3249_, v___x_3255_);
v___x_3294_ = l_Array_append___redArg(v___x_3293_, v_is_3249_);
v___x_3295_ = l_Array_append___redArg(v___x_3294_, v___x_3256_);
v___x_3296_ = l_Lean_mkAppN(v___x_3292_, v___x_3295_);
lean_dec_ref(v___x_3295_);
lean_inc_ref(v_heq_3257_);
v___x_3297_ = l_Lean_Expr_app___override(v___x_3296_, v_heq_3257_);
v___x_3298_ = l_Lean_InductiveVal_numCtors(v_val_3258_);
lean_inc_ref(v___x_3297_);
v___x_3299_ = l_Lean_Meta_inferArgumentTypesN(v___x_3298_, v___x_3297_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v_a_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; 
v_a_3300_ = lean_ctor_get(v___x_3299_, 0);
lean_inc(v_a_3300_);
lean_dec_ref(v___x_3299_);
v___x_3301_ = lean_mk_empty_array_with_capacity(v___x_3259_);
lean_inc(v___x_3263_);
lean_inc_ref(v_alts_3261_);
lean_inc(v_snd_3286_);
v___x_3302_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_3260_, v_params_3254_, v_a_3300_, v_snd_3286_, v_alts_3261_, v___x_3262_, v___x_3259_, v___x_3263_, v___x_3301_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3302_) == 0)
{
lean_object* v_a_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; 
v_a_3303_ = lean_ctor_get(v___x_3302_, 0);
lean_inc(v_a_3303_);
lean_dec_ref(v___x_3302_);
v___x_3304_ = l_Lean_mkAppN(v___x_3297_, v_a_3303_);
lean_dec(v_a_3303_);
v___x_3305_ = l_Lean_mkAppN(v___x_3304_, v_snd_3286_);
lean_dec(v_snd_3286_);
lean_inc_ref(v___x_3264_);
v___x_3306_ = lean_array_push(v___x_3264_, v_motive_3243_);
v___x_3307_ = l_Array_append___redArg(v_params_3254_, v___x_3306_);
lean_dec_ref(v___x_3306_);
v___x_3308_ = l_Array_append___redArg(v___x_3307_, v_is_3249_);
lean_dec_ref(v_is_3249_);
v___x_3309_ = lean_unsigned_to_nat(2u);
v___x_3310_ = lean_mk_empty_array_with_capacity(v___x_3309_);
v___x_3311_ = lean_array_push(v___x_3310_, v___x_3251_);
v___x_3312_ = lean_array_push(v___x_3311_, v___x_3250_);
v___x_3313_ = l_Array_append___redArg(v___x_3308_, v___x_3312_);
lean_dec_ref(v___x_3312_);
v___x_3314_ = lean_array_push(v___x_3264_, v_heq_3257_);
v___x_3315_ = l_Array_append___redArg(v___x_3313_, v___x_3314_);
lean_dec_ref(v___x_3314_);
v___x_3316_ = l_Array_append___redArg(v___x_3315_, v_alts_3261_);
lean_dec_ref(v_alts_3261_);
v___x_3317_ = l_Lean_Meta_mkLambdaFVars(v___x_3316_, v___x_3305_, v___x_3245_, v___x_3246_, v___x_3245_, v___x_3246_, v___x_3247_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
lean_dec_ref(v___x_3316_);
if (lean_obj_tag(v___x_3317_) == 0)
{
lean_object* v_a_3318_; lean_object* v___x_3319_; 
v_a_3318_ = lean_ctor_get(v___x_3317_, 0);
lean_inc_n(v_a_3318_, 2);
lean_dec_ref(v___x_3317_);
lean_inc(v___y_3276_);
lean_inc_ref(v___y_3275_);
lean_inc(v___y_3274_);
lean_inc_ref(v___y_3273_);
v___x_3319_ = lean_infer_type(v_a_3318_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3319_) == 0)
{
lean_object* v_a_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v_a_3323_; lean_object* v___x_3325_; uint8_t v_isShared_3326_; uint8_t v_isSharedCheck_3355_; 
v_a_3320_ = lean_ctor_get(v___x_3319_, 0);
lean_inc(v_a_3320_);
lean_dec_ref(v___x_3319_);
v___x_3321_ = lean_box(1);
lean_inc(v_declName_3265_);
v___x_3322_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_mkCasesOnSameCtorHet_spec__10___redArg(v_declName_3265_, v_levelParams_3266_, v_a_3320_, v_a_3318_, v___x_3321_, v___y_3276_);
v_a_3323_ = lean_ctor_get(v___x_3322_, 0);
v_isSharedCheck_3355_ = !lean_is_exclusive(v___x_3322_);
if (v_isSharedCheck_3355_ == 0)
{
v___x_3325_ = v___x_3322_;
v_isShared_3326_ = v_isSharedCheck_3355_;
goto v_resetjp_3324_;
}
else
{
lean_inc(v_a_3323_);
lean_dec(v___x_3322_);
v___x_3325_ = lean_box(0);
v_isShared_3326_ = v_isSharedCheck_3355_;
goto v_resetjp_3324_;
}
v_resetjp_3324_:
{
lean_object* v___x_3328_; 
if (v_isShared_3326_ == 0)
{
lean_ctor_set_tag(v___x_3325_, 1);
v___x_3328_ = v___x_3325_;
goto v_reusejp_3327_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v_a_3323_);
v___x_3328_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3327_;
}
v_reusejp_3327_:
{
lean_object* v___x_3329_; lean_object* v___f_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3340_; 
v___x_3329_ = lean_box(v___x_3245_);
lean_inc_ref(v___x_3328_);
v___f_3330_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__2___boxed), 7, 2);
lean_closure_set(v___f_3330_, 0, v___x_3328_);
lean_closure_set(v___f_3330_, 1, v___x_3329_);
v___x_3331_ = lean_nat_add(v_numIndices_3267_, v___x_3268_);
lean_inc(v___x_3263_);
v___x_3332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3332_, 0, v___x_3263_);
v___x_3333_ = lean_box(0);
v___x_3334_ = lean_mk_empty_array_with_capacity(v___x_3268_);
v___x_3335_ = lean_array_push(v___x_3334_, v___x_3333_);
v___x_3336_ = lean_array_push(v___x_3335_, v___x_3333_);
v___x_3337_ = lean_array_push(v___x_3336_, v___x_3333_);
v___x_3338_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___lam__3___closed__0, &l_Lean_mkCasesOnSameCtor___lam__3___closed__0_once, _init_l_Lean_mkCasesOnSameCtor___lam__3___closed__0);
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 1, v___x_3338_);
lean_ctor_set(v___x_3288_, 0, v___x_3263_);
v___x_3340_ = v___x_3288_;
goto v_reusejp_3339_;
}
else
{
lean_object* v_reuseFailAlloc_3353_; 
v_reuseFailAlloc_3353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3353_, 0, v___x_3263_);
lean_ctor_set(v_reuseFailAlloc_3353_, 1, v___x_3338_);
v___x_3340_ = v_reuseFailAlloc_3353_;
goto v_reusejp_3339_;
}
v_reusejp_3339_:
{
lean_object* v___x_3341_; uint8_t v___y_3343_; uint8_t v___x_3352_; 
v___x_3341_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3341_, 0, v_numParams_3269_);
lean_ctor_set(v___x_3341_, 1, v___x_3331_);
lean_ctor_set(v___x_3341_, 2, v_snd_3270_);
lean_ctor_set(v___x_3341_, 3, v___x_3332_);
lean_ctor_set(v___x_3341_, 4, v___x_3337_);
lean_ctor_set(v___x_3341_, 5, v___x_3340_);
v___x_3352_ = l_Lean_isPrivateName(v_declName_3265_);
if (v___x_3352_ == 0)
{
v___y_3343_ = v___x_3246_;
goto v___jp_3342_;
}
else
{
v___y_3343_ = v___x_3245_;
goto v___jp_3342_;
}
v___jp_3342_:
{
lean_object* v___x_3344_; 
v___x_3344_ = l_Lean_withExporting___at___00Lean_mkCasesOnSameCtorHet_spec__11___redArg(v___f_3330_, v___y_3343_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v___x_3345_; lean_object* v___x_3346_; 
lean_dec_ref(v___x_3344_);
v___x_3345_ = l_Lean_Elab_Term_elabAsElim;
lean_inc(v_declName_3265_);
v___x_3346_ = l_Lean_TagAttribute_setTag___at___00Lean_mkCasesOnSameCtorHet_spec__12(v___x_3345_, v_declName_3265_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v___x_3347_; uint8_t v___x_3348_; lean_object* v___x_3349_; 
lean_dec_ref(v___x_3346_);
lean_inc_n(v_declName_3265_, 2);
v___x_3347_ = l_Lean_Meta_Match_addMatcherInfo___at___00Lean_mkCasesOnSameCtor_spec__3___redArg(v_declName_3265_, v___x_3341_, v___y_3274_, v___y_3276_);
lean_dec_ref(v___x_3347_);
v___x_3348_ = 0;
v___x_3349_ = l_Lean_Meta_setInlineAttribute(v_declName_3265_, v___x_3348_, v___y_3273_, v___y_3274_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3349_) == 0)
{
lean_object* v___x_3350_; 
lean_dec_ref(v___x_3349_);
v___x_3350_ = l_Lean_enableRealizationsForConst(v_declName_3265_, v___y_3275_, v___y_3276_);
if (lean_obj_tag(v___x_3350_) == 0)
{
lean_object* v___x_3351_; 
lean_dec_ref(v___x_3350_);
v___x_3351_ = l_Lean_compileDecl(v___x_3328_, v___x_3246_, v___y_3275_, v___y_3276_);
return v___x_3351_;
}
else
{
lean_dec_ref(v___x_3328_);
return v___x_3350_;
}
}
else
{
lean_dec_ref(v___x_3328_);
lean_dec(v_declName_3265_);
return v___x_3349_;
}
}
else
{
lean_dec_ref(v___x_3341_);
lean_dec_ref(v___x_3328_);
lean_dec(v_declName_3265_);
return v___x_3346_;
}
}
else
{
lean_dec_ref(v___x_3341_);
lean_dec_ref(v___x_3328_);
lean_dec(v_declName_3265_);
return v___x_3344_;
}
}
}
}
}
}
else
{
lean_object* v_a_3356_; lean_object* v___x_3358_; uint8_t v_isShared_3359_; uint8_t v_isSharedCheck_3363_; 
lean_dec(v_a_3318_);
lean_del_object(v___x_3288_);
lean_dec_ref(v_snd_3270_);
lean_dec(v_numParams_3269_);
lean_dec(v_levelParams_3266_);
lean_dec(v_declName_3265_);
lean_dec(v___x_3263_);
v_a_3356_ = lean_ctor_get(v___x_3319_, 0);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3319_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3358_ = v___x_3319_;
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
else
{
lean_inc(v_a_3356_);
lean_dec(v___x_3319_);
v___x_3358_ = lean_box(0);
v_isShared_3359_ = v_isSharedCheck_3363_;
goto v_resetjp_3357_;
}
v_resetjp_3357_:
{
lean_object* v___x_3361_; 
if (v_isShared_3359_ == 0)
{
v___x_3361_ = v___x_3358_;
goto v_reusejp_3360_;
}
else
{
lean_object* v_reuseFailAlloc_3362_; 
v_reuseFailAlloc_3362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3362_, 0, v_a_3356_);
v___x_3361_ = v_reuseFailAlloc_3362_;
goto v_reusejp_3360_;
}
v_reusejp_3360_:
{
return v___x_3361_;
}
}
}
}
else
{
lean_object* v_a_3364_; lean_object* v___x_3366_; uint8_t v_isShared_3367_; uint8_t v_isSharedCheck_3371_; 
lean_del_object(v___x_3288_);
lean_dec_ref(v_snd_3270_);
lean_dec(v_numParams_3269_);
lean_dec(v_levelParams_3266_);
lean_dec(v_declName_3265_);
lean_dec(v___x_3263_);
v_a_3364_ = lean_ctor_get(v___x_3317_, 0);
v_isSharedCheck_3371_ = !lean_is_exclusive(v___x_3317_);
if (v_isSharedCheck_3371_ == 0)
{
v___x_3366_ = v___x_3317_;
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
else
{
lean_inc(v_a_3364_);
lean_dec(v___x_3317_);
v___x_3366_ = lean_box(0);
v_isShared_3367_ = v_isSharedCheck_3371_;
goto v_resetjp_3365_;
}
v_resetjp_3365_:
{
lean_object* v___x_3369_; 
if (v_isShared_3367_ == 0)
{
v___x_3369_ = v___x_3366_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v_a_3364_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
return v___x_3369_;
}
}
}
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3374_; uint8_t v_isShared_3375_; uint8_t v_isSharedCheck_3379_; 
lean_dec_ref(v___x_3297_);
lean_del_object(v___x_3288_);
lean_dec(v_snd_3286_);
lean_dec_ref(v_snd_3270_);
lean_dec(v_numParams_3269_);
lean_dec(v_levelParams_3266_);
lean_dec(v_declName_3265_);
lean_dec_ref(v___x_3264_);
lean_dec(v___x_3263_);
lean_dec_ref(v_alts_3261_);
lean_dec_ref(v_heq_3257_);
lean_dec_ref(v_params_3254_);
lean_dec_ref(v___x_3251_);
lean_dec_ref(v___x_3250_);
lean_dec_ref(v_is_3249_);
lean_dec_ref(v_motive_3243_);
v_a_3372_ = lean_ctor_get(v___x_3302_, 0);
v_isSharedCheck_3379_ = !lean_is_exclusive(v___x_3302_);
if (v_isSharedCheck_3379_ == 0)
{
v___x_3374_ = v___x_3302_;
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
else
{
lean_inc(v_a_3372_);
lean_dec(v___x_3302_);
v___x_3374_ = lean_box(0);
v_isShared_3375_ = v_isSharedCheck_3379_;
goto v_resetjp_3373_;
}
v_resetjp_3373_:
{
lean_object* v___x_3377_; 
if (v_isShared_3375_ == 0)
{
v___x_3377_ = v___x_3374_;
goto v_reusejp_3376_;
}
else
{
lean_object* v_reuseFailAlloc_3378_; 
v_reuseFailAlloc_3378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3378_, 0, v_a_3372_);
v___x_3377_ = v_reuseFailAlloc_3378_;
goto v_reusejp_3376_;
}
v_reusejp_3376_:
{
return v___x_3377_;
}
}
}
}
else
{
lean_object* v_a_3380_; lean_object* v___x_3382_; uint8_t v_isShared_3383_; uint8_t v_isSharedCheck_3387_; 
lean_dec_ref(v___x_3297_);
lean_del_object(v___x_3288_);
lean_dec(v_snd_3286_);
lean_dec_ref(v_snd_3270_);
lean_dec(v_numParams_3269_);
lean_dec(v_levelParams_3266_);
lean_dec(v_declName_3265_);
lean_dec_ref(v___x_3264_);
lean_dec(v___x_3263_);
lean_dec_ref(v_alts_3261_);
lean_dec(v_tail_3260_);
lean_dec(v___x_3259_);
lean_dec_ref(v_heq_3257_);
lean_dec_ref(v_params_3254_);
lean_dec_ref(v___x_3251_);
lean_dec_ref(v___x_3250_);
lean_dec_ref(v_is_3249_);
lean_dec_ref(v_motive_3243_);
v_a_3380_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3387_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3387_ == 0)
{
v___x_3382_ = v___x_3299_;
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
else
{
lean_inc(v_a_3380_);
lean_dec(v___x_3299_);
v___x_3382_ = lean_box(0);
v_isShared_3383_ = v_isSharedCheck_3387_;
goto v_resetjp_3381_;
}
v_resetjp_3381_:
{
lean_object* v___x_3385_; 
if (v_isShared_3383_ == 0)
{
v___x_3385_ = v___x_3382_;
goto v_reusejp_3384_;
}
else
{
lean_object* v_reuseFailAlloc_3386_; 
v_reuseFailAlloc_3386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3386_, 0, v_a_3380_);
v___x_3385_ = v_reuseFailAlloc_3386_;
goto v_reusejp_3384_;
}
v_reusejp_3384_:
{
return v___x_3385_;
}
}
}
}
}
else
{
lean_object* v_a_3389_; lean_object* v___x_3391_; uint8_t v_isShared_3392_; uint8_t v_isSharedCheck_3396_; 
lean_dec_ref(v_snd_3270_);
lean_dec(v_numParams_3269_);
lean_dec(v_levelParams_3266_);
lean_dec(v_declName_3265_);
lean_dec_ref(v___x_3264_);
lean_dec(v___x_3263_);
lean_dec_ref(v_alts_3261_);
lean_dec(v_tail_3260_);
lean_dec(v___x_3259_);
lean_dec_ref(v_heq_3257_);
lean_dec_ref(v_params_3254_);
lean_dec(v___x_3253_);
lean_dec(v___x_3252_);
lean_dec_ref(v___x_3251_);
lean_dec_ref(v___x_3250_);
lean_dec_ref(v_is_3249_);
lean_dec_ref(v_motive_3243_);
v_a_3389_ = lean_ctor_get(v___x_3283_, 0);
v_isSharedCheck_3396_ = !lean_is_exclusive(v___x_3283_);
if (v_isSharedCheck_3396_ == 0)
{
v___x_3391_ = v___x_3283_;
v_isShared_3392_ = v_isSharedCheck_3396_;
goto v_resetjp_3390_;
}
else
{
lean_inc(v_a_3389_);
lean_dec(v___x_3283_);
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
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__3___boxed(lean_object** _args){
lean_object* v_motive_3397_ = _args[0];
lean_object* v___x_3398_ = _args[1];
lean_object* v___x_3399_ = _args[2];
lean_object* v___x_3400_ = _args[3];
lean_object* v___x_3401_ = _args[4];
lean_object* v_ism1_x27_3402_ = _args[5];
lean_object* v_is_3403_ = _args[6];
lean_object* v___x_3404_ = _args[7];
lean_object* v___x_3405_ = _args[8];
lean_object* v___x_3406_ = _args[9];
lean_object* v___x_3407_ = _args[10];
lean_object* v_params_3408_ = _args[11];
lean_object* v___x_3409_ = _args[12];
lean_object* v___x_3410_ = _args[13];
lean_object* v_heq_3411_ = _args[14];
lean_object* v_val_3412_ = _args[15];
lean_object* v___x_3413_ = _args[16];
lean_object* v_tail_3414_ = _args[17];
lean_object* v_alts_3415_ = _args[18];
lean_object* v___x_3416_ = _args[19];
lean_object* v___x_3417_ = _args[20];
lean_object* v___x_3418_ = _args[21];
lean_object* v_declName_3419_ = _args[22];
lean_object* v_levelParams_3420_ = _args[23];
lean_object* v_numIndices_3421_ = _args[24];
lean_object* v___x_3422_ = _args[25];
lean_object* v_numParams_3423_ = _args[26];
lean_object* v_snd_3424_ = _args[27];
lean_object* v_ism2_x27_3425_ = _args[28];
lean_object* v_x_3426_ = _args[29];
lean_object* v___y_3427_ = _args[30];
lean_object* v___y_3428_ = _args[31];
lean_object* v___y_3429_ = _args[32];
lean_object* v___y_3430_ = _args[33];
lean_object* v___y_3431_ = _args[34];
_start:
{
uint8_t v___x_15787__boxed_3432_; uint8_t v___x_15788__boxed_3433_; uint8_t v___x_15789__boxed_3434_; lean_object* v_res_3435_; 
v___x_15787__boxed_3432_ = lean_unbox(v___x_3399_);
v___x_15788__boxed_3433_ = lean_unbox(v___x_3400_);
v___x_15789__boxed_3434_ = lean_unbox(v___x_3401_);
v_res_3435_ = l_Lean_mkCasesOnSameCtor___lam__3(v_motive_3397_, v___x_3398_, v___x_15787__boxed_3432_, v___x_15788__boxed_3433_, v___x_15789__boxed_3434_, v_ism1_x27_3402_, v_is_3403_, v___x_3404_, v___x_3405_, v___x_3406_, v___x_3407_, v_params_3408_, v___x_3409_, v___x_3410_, v_heq_3411_, v_val_3412_, v___x_3413_, v_tail_3414_, v_alts_3415_, v___x_3416_, v___x_3417_, v___x_3418_, v_declName_3419_, v_levelParams_3420_, v_numIndices_3421_, v___x_3422_, v_numParams_3423_, v_snd_3424_, v_ism2_x27_3425_, v_x_3426_, v___y_3427_, v___y_3428_, v___y_3429_, v___y_3430_);
lean_dec(v___y_3430_);
lean_dec_ref(v___y_3429_);
lean_dec(v___y_3428_);
lean_dec_ref(v___y_3427_);
lean_dec_ref(v_x_3426_);
lean_dec(v___x_3422_);
lean_dec(v_numIndices_3421_);
lean_dec_ref(v___x_3416_);
lean_dec_ref(v_val_3412_);
lean_dec_ref(v___x_3410_);
lean_dec_ref(v___x_3409_);
return v_res_3435_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4(lean_object* v_motive_3436_, lean_object* v___x_3437_, uint8_t v___x_3438_, uint8_t v___x_3439_, uint8_t v___x_3440_, lean_object* v_is_3441_, lean_object* v___x_3442_, lean_object* v___x_3443_, lean_object* v___x_3444_, lean_object* v___x_3445_, lean_object* v_params_3446_, lean_object* v___x_3447_, lean_object* v___x_3448_, lean_object* v_heq_3449_, lean_object* v_val_3450_, lean_object* v___x_3451_, lean_object* v_tail_3452_, lean_object* v_alts_3453_, lean_object* v___x_3454_, lean_object* v___x_3455_, lean_object* v___x_3456_, lean_object* v_declName_3457_, lean_object* v_levelParams_3458_, lean_object* v_numIndices_3459_, lean_object* v___x_3460_, lean_object* v_numParams_3461_, lean_object* v_snd_3462_, lean_object* v___x_3463_, lean_object* v___x_3464_, lean_object* v_ism1_x27_3465_, lean_object* v_x_3466_, lean_object* v___y_3467_, lean_object* v___y_3468_, lean_object* v___y_3469_, lean_object* v___y_3470_){
_start:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; lean_object* v___f_3475_; lean_object* v___x_3476_; 
v___x_3472_ = lean_box(v___x_3438_);
v___x_3473_ = lean_box(v___x_3439_);
v___x_3474_ = lean_box(v___x_3440_);
v___f_3475_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__3___boxed), 35, 28);
lean_closure_set(v___f_3475_, 0, v_motive_3436_);
lean_closure_set(v___f_3475_, 1, v___x_3437_);
lean_closure_set(v___f_3475_, 2, v___x_3472_);
lean_closure_set(v___f_3475_, 3, v___x_3473_);
lean_closure_set(v___f_3475_, 4, v___x_3474_);
lean_closure_set(v___f_3475_, 5, v_ism1_x27_3465_);
lean_closure_set(v___f_3475_, 6, v_is_3441_);
lean_closure_set(v___f_3475_, 7, v___x_3442_);
lean_closure_set(v___f_3475_, 8, v___x_3443_);
lean_closure_set(v___f_3475_, 9, v___x_3444_);
lean_closure_set(v___f_3475_, 10, v___x_3445_);
lean_closure_set(v___f_3475_, 11, v_params_3446_);
lean_closure_set(v___f_3475_, 12, v___x_3447_);
lean_closure_set(v___f_3475_, 13, v___x_3448_);
lean_closure_set(v___f_3475_, 14, v_heq_3449_);
lean_closure_set(v___f_3475_, 15, v_val_3450_);
lean_closure_set(v___f_3475_, 16, v___x_3451_);
lean_closure_set(v___f_3475_, 17, v_tail_3452_);
lean_closure_set(v___f_3475_, 18, v_alts_3453_);
lean_closure_set(v___f_3475_, 19, v___x_3454_);
lean_closure_set(v___f_3475_, 20, v___x_3455_);
lean_closure_set(v___f_3475_, 21, v___x_3456_);
lean_closure_set(v___f_3475_, 22, v_declName_3457_);
lean_closure_set(v___f_3475_, 23, v_levelParams_3458_);
lean_closure_set(v___f_3475_, 24, v_numIndices_3459_);
lean_closure_set(v___f_3475_, 25, v___x_3460_);
lean_closure_set(v___f_3475_, 26, v_numParams_3461_);
lean_closure_set(v___f_3475_, 27, v_snd_3462_);
v___x_3476_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_3463_, v___x_3464_, v___f_3475_, v___x_3438_, v___x_3438_, v___y_3467_, v___y_3468_, v___y_3469_, v___y_3470_);
return v___x_3476_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__4___boxed(lean_object** _args){
lean_object* v_motive_3477_ = _args[0];
lean_object* v___x_3478_ = _args[1];
lean_object* v___x_3479_ = _args[2];
lean_object* v___x_3480_ = _args[3];
lean_object* v___x_3481_ = _args[4];
lean_object* v_is_3482_ = _args[5];
lean_object* v___x_3483_ = _args[6];
lean_object* v___x_3484_ = _args[7];
lean_object* v___x_3485_ = _args[8];
lean_object* v___x_3486_ = _args[9];
lean_object* v_params_3487_ = _args[10];
lean_object* v___x_3488_ = _args[11];
lean_object* v___x_3489_ = _args[12];
lean_object* v_heq_3490_ = _args[13];
lean_object* v_val_3491_ = _args[14];
lean_object* v___x_3492_ = _args[15];
lean_object* v_tail_3493_ = _args[16];
lean_object* v_alts_3494_ = _args[17];
lean_object* v___x_3495_ = _args[18];
lean_object* v___x_3496_ = _args[19];
lean_object* v___x_3497_ = _args[20];
lean_object* v_declName_3498_ = _args[21];
lean_object* v_levelParams_3499_ = _args[22];
lean_object* v_numIndices_3500_ = _args[23];
lean_object* v___x_3501_ = _args[24];
lean_object* v_numParams_3502_ = _args[25];
lean_object* v_snd_3503_ = _args[26];
lean_object* v___x_3504_ = _args[27];
lean_object* v___x_3505_ = _args[28];
lean_object* v_ism1_x27_3506_ = _args[29];
lean_object* v_x_3507_ = _args[30];
lean_object* v___y_3508_ = _args[31];
lean_object* v___y_3509_ = _args[32];
lean_object* v___y_3510_ = _args[33];
lean_object* v___y_3511_ = _args[34];
lean_object* v___y_3512_ = _args[35];
_start:
{
uint8_t v___x_16111__boxed_3513_; uint8_t v___x_16112__boxed_3514_; uint8_t v___x_16113__boxed_3515_; lean_object* v_res_3516_; 
v___x_16111__boxed_3513_ = lean_unbox(v___x_3479_);
v___x_16112__boxed_3514_ = lean_unbox(v___x_3480_);
v___x_16113__boxed_3515_ = lean_unbox(v___x_3481_);
v_res_3516_ = l_Lean_mkCasesOnSameCtor___lam__4(v_motive_3477_, v___x_3478_, v___x_16111__boxed_3513_, v___x_16112__boxed_3514_, v___x_16113__boxed_3515_, v_is_3482_, v___x_3483_, v___x_3484_, v___x_3485_, v___x_3486_, v_params_3487_, v___x_3488_, v___x_3489_, v_heq_3490_, v_val_3491_, v___x_3492_, v_tail_3493_, v_alts_3494_, v___x_3495_, v___x_3496_, v___x_3497_, v_declName_3498_, v_levelParams_3499_, v_numIndices_3500_, v___x_3501_, v_numParams_3502_, v_snd_3503_, v___x_3504_, v___x_3505_, v_ism1_x27_3506_, v_x_3507_, v___y_3508_, v___y_3509_, v___y_3510_, v___y_3511_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
lean_dec(v___y_3509_);
lean_dec_ref(v___y_3508_);
lean_dec_ref(v_x_3507_);
return v_res_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5(lean_object* v_numIndices_3517_, lean_object* v___x_3518_, lean_object* v_motive_3519_, lean_object* v___x_3520_, uint8_t v___x_3521_, uint8_t v___x_3522_, uint8_t v___x_3523_, lean_object* v_is_3524_, lean_object* v___x_3525_, lean_object* v___x_3526_, lean_object* v___x_3527_, lean_object* v___x_3528_, lean_object* v_params_3529_, lean_object* v___x_3530_, lean_object* v___x_3531_, lean_object* v_heq_3532_, lean_object* v_val_3533_, lean_object* v___x_3534_, lean_object* v_tail_3535_, lean_object* v___x_3536_, lean_object* v___x_3537_, lean_object* v___x_3538_, lean_object* v_declName_3539_, lean_object* v_levelParams_3540_, lean_object* v___x_3541_, lean_object* v_numParams_3542_, lean_object* v_snd_3543_, lean_object* v___x_3544_, lean_object* v_alts_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_){
_start:
{
lean_object* v___x_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; lean_object* v___x_3554_; lean_object* v___x_3555_; lean_object* v___f_3556_; lean_object* v___x_3557_; 
v___x_3551_ = lean_nat_add(v_numIndices_3517_, v___x_3518_);
v___x_3552_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3552_, 0, v___x_3551_);
v___x_3553_ = lean_box(v___x_3521_);
v___x_3554_ = lean_box(v___x_3522_);
v___x_3555_ = lean_box(v___x_3523_);
lean_inc_ref(v___x_3552_);
lean_inc_ref(v___x_3544_);
v___f_3556_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__4___boxed), 36, 29);
lean_closure_set(v___f_3556_, 0, v_motive_3519_);
lean_closure_set(v___f_3556_, 1, v___x_3520_);
lean_closure_set(v___f_3556_, 2, v___x_3553_);
lean_closure_set(v___f_3556_, 3, v___x_3554_);
lean_closure_set(v___f_3556_, 4, v___x_3555_);
lean_closure_set(v___f_3556_, 5, v_is_3524_);
lean_closure_set(v___f_3556_, 6, v___x_3525_);
lean_closure_set(v___f_3556_, 7, v___x_3526_);
lean_closure_set(v___f_3556_, 8, v___x_3527_);
lean_closure_set(v___f_3556_, 9, v___x_3528_);
lean_closure_set(v___f_3556_, 10, v_params_3529_);
lean_closure_set(v___f_3556_, 11, v___x_3530_);
lean_closure_set(v___f_3556_, 12, v___x_3531_);
lean_closure_set(v___f_3556_, 13, v_heq_3532_);
lean_closure_set(v___f_3556_, 14, v_val_3533_);
lean_closure_set(v___f_3556_, 15, v___x_3534_);
lean_closure_set(v___f_3556_, 16, v_tail_3535_);
lean_closure_set(v___f_3556_, 17, v_alts_3545_);
lean_closure_set(v___f_3556_, 18, v___x_3536_);
lean_closure_set(v___f_3556_, 19, v___x_3537_);
lean_closure_set(v___f_3556_, 20, v___x_3538_);
lean_closure_set(v___f_3556_, 21, v_declName_3539_);
lean_closure_set(v___f_3556_, 22, v_levelParams_3540_);
lean_closure_set(v___f_3556_, 23, v_numIndices_3517_);
lean_closure_set(v___f_3556_, 24, v___x_3541_);
lean_closure_set(v___f_3556_, 25, v_numParams_3542_);
lean_closure_set(v___f_3556_, 26, v_snd_3543_);
lean_closure_set(v___f_3556_, 27, v___x_3544_);
lean_closure_set(v___f_3556_, 28, v___x_3552_);
v___x_3557_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_3544_, v___x_3552_, v___f_3556_, v___x_3521_, v___x_3521_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_);
return v___x_3557_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__5___boxed(lean_object** _args){
lean_object* v_numIndices_3558_ = _args[0];
lean_object* v___x_3559_ = _args[1];
lean_object* v_motive_3560_ = _args[2];
lean_object* v___x_3561_ = _args[3];
lean_object* v___x_3562_ = _args[4];
lean_object* v___x_3563_ = _args[5];
lean_object* v___x_3564_ = _args[6];
lean_object* v_is_3565_ = _args[7];
lean_object* v___x_3566_ = _args[8];
lean_object* v___x_3567_ = _args[9];
lean_object* v___x_3568_ = _args[10];
lean_object* v___x_3569_ = _args[11];
lean_object* v_params_3570_ = _args[12];
lean_object* v___x_3571_ = _args[13];
lean_object* v___x_3572_ = _args[14];
lean_object* v_heq_3573_ = _args[15];
lean_object* v_val_3574_ = _args[16];
lean_object* v___x_3575_ = _args[17];
lean_object* v_tail_3576_ = _args[18];
lean_object* v___x_3577_ = _args[19];
lean_object* v___x_3578_ = _args[20];
lean_object* v___x_3579_ = _args[21];
lean_object* v_declName_3580_ = _args[22];
lean_object* v_levelParams_3581_ = _args[23];
lean_object* v___x_3582_ = _args[24];
lean_object* v_numParams_3583_ = _args[25];
lean_object* v_snd_3584_ = _args[26];
lean_object* v___x_3585_ = _args[27];
lean_object* v_alts_3586_ = _args[28];
lean_object* v___y_3587_ = _args[29];
lean_object* v___y_3588_ = _args[30];
lean_object* v___y_3589_ = _args[31];
lean_object* v___y_3590_ = _args[32];
lean_object* v___y_3591_ = _args[33];
_start:
{
uint8_t v___x_16200__boxed_3592_; uint8_t v___x_16201__boxed_3593_; uint8_t v___x_16202__boxed_3594_; lean_object* v_res_3595_; 
v___x_16200__boxed_3592_ = lean_unbox(v___x_3562_);
v___x_16201__boxed_3593_ = lean_unbox(v___x_3563_);
v___x_16202__boxed_3594_ = lean_unbox(v___x_3564_);
v_res_3595_ = l_Lean_mkCasesOnSameCtor___lam__5(v_numIndices_3558_, v___x_3559_, v_motive_3560_, v___x_3561_, v___x_16200__boxed_3592_, v___x_16201__boxed_3593_, v___x_16202__boxed_3594_, v_is_3565_, v___x_3566_, v___x_3567_, v___x_3568_, v___x_3569_, v_params_3570_, v___x_3571_, v___x_3572_, v_heq_3573_, v_val_3574_, v___x_3575_, v_tail_3576_, v___x_3577_, v___x_3578_, v___x_3579_, v_declName_3580_, v_levelParams_3581_, v___x_3582_, v_numParams_3583_, v_snd_3584_, v___x_3585_, v_alts_3586_, v___y_3587_, v___y_3588_, v___y_3589_, v___y_3590_);
lean_dec(v___y_3590_);
lean_dec_ref(v___y_3589_);
lean_dec(v___y_3588_);
lean_dec_ref(v___y_3587_);
lean_dec(v___x_3559_);
return v_res_3595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed(lean_object* v_acc_3596_, lean_object* v_declInfos_3597_, lean_object* v_k_3598_, lean_object* v_kind_3599_, lean_object* v_x_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_){
_start:
{
uint8_t v_kind_boxed_3606_; lean_object* v_res_3607_; 
v_kind_boxed_3606_ = lean_unbox(v_kind_3599_);
v_res_3607_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(v_acc_3596_, v_declInfos_3597_, v_k_3598_, v_kind_boxed_3606_, v_x_3600_, v___y_3601_, v___y_3602_, v___y_3603_, v___y_3604_);
lean_dec(v___y_3604_);
lean_dec_ref(v___y_3603_);
lean_dec(v___y_3602_);
lean_dec_ref(v___y_3601_);
return v_res_3607_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(lean_object* v_declInfos_3608_, lean_object* v_k_3609_, uint8_t v_kind_3610_, lean_object* v_acc_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_){
_start:
{
lean_object* v___x_3617_; lean_object* v_toApplicative_3618_; lean_object* v_toFunctor_3619_; lean_object* v_toSeq_3620_; lean_object* v_toSeqLeft_3621_; lean_object* v_toSeqRight_3622_; lean_object* v___f_3623_; lean_object* v___f_3624_; lean_object* v___f_3625_; lean_object* v___f_3626_; lean_object* v___x_3627_; lean_object* v___f_3628_; lean_object* v___f_3629_; lean_object* v___f_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v_toApplicative_3634_; lean_object* v___x_3636_; uint8_t v_isShared_3637_; uint8_t v_isSharedCheck_3691_; 
v___x_3617_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__1);
v_toApplicative_3618_ = lean_ctor_get(v___x_3617_, 0);
v_toFunctor_3619_ = lean_ctor_get(v_toApplicative_3618_, 0);
v_toSeq_3620_ = lean_ctor_get(v_toApplicative_3618_, 2);
v_toSeqLeft_3621_ = lean_ctor_get(v_toApplicative_3618_, 3);
v_toSeqRight_3622_ = lean_ctor_get(v_toApplicative_3618_, 4);
v___f_3623_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__2);
v___f_3624_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__3);
lean_inc_ref_n(v_toFunctor_3619_, 2);
v___f_3625_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3625_, 0, v_toFunctor_3619_);
v___f_3626_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3626_, 0, v_toFunctor_3619_);
v___x_3627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3627_, 0, v___f_3625_);
lean_ctor_set(v___x_3627_, 1, v___f_3626_);
lean_inc(v_toSeqRight_3622_);
v___f_3628_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3628_, 0, v_toSeqRight_3622_);
lean_inc(v_toSeqLeft_3621_);
v___f_3629_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3629_, 0, v_toSeqLeft_3621_);
lean_inc(v_toSeq_3620_);
v___f_3630_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3630_, 0, v_toSeq_3620_);
v___x_3631_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3631_, 0, v___x_3627_);
lean_ctor_set(v___x_3631_, 1, v___f_3623_);
lean_ctor_set(v___x_3631_, 2, v___f_3630_);
lean_ctor_set(v___x_3631_, 3, v___f_3629_);
lean_ctor_set(v___x_3631_, 4, v___f_3628_);
v___x_3632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3632_, 0, v___x_3631_);
lean_ctor_set(v___x_3632_, 1, v___f_3624_);
v___x_3633_ = l_StateRefT_x27_instMonad___redArg(v___x_3632_);
v_toApplicative_3634_ = lean_ctor_get(v___x_3633_, 0);
v_isSharedCheck_3691_ = !lean_is_exclusive(v___x_3633_);
if (v_isSharedCheck_3691_ == 0)
{
lean_object* v_unused_3692_; 
v_unused_3692_ = lean_ctor_get(v___x_3633_, 1);
lean_dec(v_unused_3692_);
v___x_3636_ = v___x_3633_;
v_isShared_3637_ = v_isSharedCheck_3691_;
goto v_resetjp_3635_;
}
else
{
lean_inc(v_toApplicative_3634_);
lean_dec(v___x_3633_);
v___x_3636_ = lean_box(0);
v_isShared_3637_ = v_isSharedCheck_3691_;
goto v_resetjp_3635_;
}
v_resetjp_3635_:
{
lean_object* v_toFunctor_3638_; lean_object* v_toSeq_3639_; lean_object* v_toSeqLeft_3640_; lean_object* v_toSeqRight_3641_; lean_object* v___x_3643_; uint8_t v_isShared_3644_; uint8_t v_isSharedCheck_3689_; 
v_toFunctor_3638_ = lean_ctor_get(v_toApplicative_3634_, 0);
v_toSeq_3639_ = lean_ctor_get(v_toApplicative_3634_, 2);
v_toSeqLeft_3640_ = lean_ctor_get(v_toApplicative_3634_, 3);
v_toSeqRight_3641_ = lean_ctor_get(v_toApplicative_3634_, 4);
v_isSharedCheck_3689_ = !lean_is_exclusive(v_toApplicative_3634_);
if (v_isSharedCheck_3689_ == 0)
{
lean_object* v_unused_3690_; 
v_unused_3690_ = lean_ctor_get(v_toApplicative_3634_, 1);
lean_dec(v_unused_3690_);
v___x_3643_ = v_toApplicative_3634_;
v_isShared_3644_ = v_isSharedCheck_3689_;
goto v_resetjp_3642_;
}
else
{
lean_inc(v_toSeqRight_3641_);
lean_inc(v_toSeqLeft_3640_);
lean_inc(v_toSeq_3639_);
lean_inc(v_toFunctor_3638_);
lean_dec(v_toApplicative_3634_);
v___x_3643_ = lean_box(0);
v_isShared_3644_ = v_isSharedCheck_3689_;
goto v_resetjp_3642_;
}
v_resetjp_3642_:
{
lean_object* v___f_3645_; lean_object* v___f_3646_; lean_object* v___f_3647_; lean_object* v___f_3648_; lean_object* v___x_3649_; lean_object* v___f_3650_; lean_object* v___f_3651_; lean_object* v___f_3652_; lean_object* v___x_3654_; 
v___f_3645_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__4);
v___f_3646_ = lean_obj_once(&l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5, &l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5_once, _init_l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___closed__5);
lean_inc_ref(v_toFunctor_3638_);
v___f_3647_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3647_, 0, v_toFunctor_3638_);
v___f_3648_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3648_, 0, v_toFunctor_3638_);
v___x_3649_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3649_, 0, v___f_3647_);
lean_ctor_set(v___x_3649_, 1, v___f_3648_);
v___f_3650_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3650_, 0, v_toSeqRight_3641_);
v___f_3651_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3651_, 0, v_toSeqLeft_3640_);
v___f_3652_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3652_, 0, v_toSeq_3639_);
if (v_isShared_3644_ == 0)
{
lean_ctor_set(v___x_3643_, 4, v___f_3650_);
lean_ctor_set(v___x_3643_, 3, v___f_3651_);
lean_ctor_set(v___x_3643_, 2, v___f_3652_);
lean_ctor_set(v___x_3643_, 1, v___f_3645_);
lean_ctor_set(v___x_3643_, 0, v___x_3649_);
v___x_3654_ = v___x_3643_;
goto v_reusejp_3653_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v___x_3649_);
lean_ctor_set(v_reuseFailAlloc_3688_, 1, v___f_3645_);
lean_ctor_set(v_reuseFailAlloc_3688_, 2, v___f_3652_);
lean_ctor_set(v_reuseFailAlloc_3688_, 3, v___f_3651_);
lean_ctor_set(v_reuseFailAlloc_3688_, 4, v___f_3650_);
v___x_3654_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3653_;
}
v_reusejp_3653_:
{
lean_object* v___x_3656_; 
if (v_isShared_3637_ == 0)
{
lean_ctor_set(v___x_3636_, 1, v___f_3646_);
lean_ctor_set(v___x_3636_, 0, v___x_3654_);
v___x_3656_ = v___x_3636_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3654_);
lean_ctor_set(v_reuseFailAlloc_3687_, 1, v___f_3646_);
v___x_3656_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
lean_object* v___x_3657_; lean_object* v___x_3658_; uint8_t v___x_3659_; 
v___x_3657_ = lean_array_get_size(v_acc_3611_);
v___x_3658_ = lean_array_get_size(v_declInfos_3608_);
v___x_3659_ = lean_nat_dec_lt(v___x_3657_, v___x_3658_);
if (v___x_3659_ == 0)
{
lean_object* v___x_3660_; 
lean_dec_ref(v___x_3656_);
lean_dec_ref(v_declInfos_3608_);
lean_inc(v___y_3615_);
lean_inc_ref(v___y_3614_);
lean_inc(v___y_3613_);
lean_inc_ref(v___y_3612_);
v___x_3660_ = lean_apply_6(v_k_3609_, v_acc_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_, lean_box(0));
return v___x_3660_;
}
else
{
lean_object* v___f_3661_; lean_object* v___x_3662_; uint8_t v___x_3663_; lean_object* v___f_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; lean_object* v___x_3668_; lean_object* v_snd_3669_; lean_object* v_fst_3670_; lean_object* v_fst_3671_; lean_object* v_snd_3672_; lean_object* v___x_3673_; 
v___f_3661_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17_spec__22___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3661_, 0, v___x_3656_);
v___x_3662_ = lean_box(0);
v___x_3663_ = 0;
v___f_3664_ = lean_alloc_closure((void*)(l_Pi_instInhabited___redArg___lam__0), 2, 1);
lean_closure_set(v___f_3664_, 0, v___f_3661_);
v___x_3665_ = lean_box(v___x_3663_);
v___x_3666_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3666_, 0, v___x_3665_);
lean_ctor_set(v___x_3666_, 1, v___f_3664_);
v___x_3667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3662_);
lean_ctor_set(v___x_3667_, 1, v___x_3666_);
v___x_3668_ = lean_array_get(v___x_3667_, v_declInfos_3608_, v___x_3657_);
lean_dec_ref(v___x_3667_);
v_snd_3669_ = lean_ctor_get(v___x_3668_, 1);
lean_inc(v_snd_3669_);
v_fst_3670_ = lean_ctor_get(v___x_3668_, 0);
lean_inc(v_fst_3670_);
lean_dec(v___x_3668_);
v_fst_3671_ = lean_ctor_get(v_snd_3669_, 0);
lean_inc(v_fst_3671_);
v_snd_3672_ = lean_ctor_get(v_snd_3669_, 1);
lean_inc(v_snd_3672_);
lean_dec(v_snd_3669_);
lean_inc(v___y_3615_);
lean_inc_ref(v___y_3614_);
lean_inc(v___y_3613_);
lean_inc_ref(v___y_3612_);
lean_inc_ref(v_acc_3611_);
v___x_3673_ = lean_apply_6(v_snd_3672_, v_acc_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_, lean_box(0));
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3675_; lean_object* v___f_3676_; uint8_t v___x_3677_; lean_object* v___x_3678_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
lean_inc(v_a_3674_);
lean_dec_ref(v___x_3673_);
v___x_3675_ = lean_box(v_kind_3610_);
v___f_3676_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1___boxed), 10, 4);
lean_closure_set(v___f_3676_, 0, v_acc_3611_);
lean_closure_set(v___f_3676_, 1, v_declInfos_3608_);
lean_closure_set(v___f_3676_, 2, v_k_3609_);
lean_closure_set(v___f_3676_, 3, v___x_3675_);
v___x_3677_ = lean_unbox(v_fst_3671_);
lean_dec(v_fst_3671_);
v___x_3678_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v_fst_3670_, v___x_3677_, v_a_3674_, v___f_3676_, v_kind_3610_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_);
return v___x_3678_;
}
else
{
lean_object* v_a_3679_; lean_object* v___x_3681_; uint8_t v_isShared_3682_; uint8_t v_isSharedCheck_3686_; 
lean_dec(v_fst_3671_);
lean_dec(v_fst_3670_);
lean_dec_ref(v_acc_3611_);
lean_dec_ref(v_k_3609_);
lean_dec_ref(v_declInfos_3608_);
v_a_3679_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3686_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3686_ == 0)
{
v___x_3681_ = v___x_3673_;
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
else
{
lean_inc(v_a_3679_);
lean_dec(v___x_3673_);
v___x_3681_ = lean_box(0);
v_isShared_3682_ = v_isSharedCheck_3686_;
goto v_resetjp_3680_;
}
v_resetjp_3680_:
{
lean_object* v___x_3684_; 
if (v_isShared_3682_ == 0)
{
v___x_3684_ = v___x_3681_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3685_; 
v_reuseFailAlloc_3685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3685_, 0, v_a_3679_);
v___x_3684_ = v_reuseFailAlloc_3685_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
return v___x_3684_;
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___lam__1(lean_object* v_acc_3693_, lean_object* v_declInfos_3694_, lean_object* v_k_3695_, uint8_t v_kind_3696_, lean_object* v_x_3697_, lean_object* v___y_3698_, lean_object* v___y_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_){
_start:
{
lean_object* v___x_3703_; lean_object* v___x_3704_; 
v___x_3703_ = lean_array_push(v_acc_3693_, v_x_3697_);
v___x_3704_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3694_, v_k_3695_, v_kind_3696_, v___x_3703_, v___y_3698_, v___y_3699_, v___y_3700_, v___y_3701_);
return v___x_3704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6___boxed(lean_object* v_declInfos_3705_, lean_object* v_k_3706_, lean_object* v_kind_3707_, lean_object* v_acc_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_){
_start:
{
uint8_t v_kind_boxed_3714_; lean_object* v_res_3715_; 
v_kind_boxed_3714_ = lean_unbox(v_kind_3707_);
v_res_3715_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3705_, v_k_3706_, v_kind_boxed_3714_, v_acc_3708_, v___y_3709_, v___y_3710_, v___y_3711_, v___y_3712_);
lean_dec(v___y_3712_);
lean_dec_ref(v___y_3711_);
lean_dec(v___y_3710_);
lean_dec_ref(v___y_3709_);
return v_res_3715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(lean_object* v_declInfos_3716_, lean_object* v_k_3717_, uint8_t v_kind_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_){
_start:
{
lean_object* v___x_3724_; lean_object* v___x_3725_; 
v___x_3724_ = lean_obj_once(&l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0, &l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0_once, _init_l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__17___closed__0);
v___x_3725_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDecls_loop___at___00Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5_spec__6(v_declInfos_3716_, v_k_3717_, v_kind_3718_, v___x_3724_, v___y_3719_, v___y_3720_, v___y_3721_, v___y_3722_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5___boxed(lean_object* v_declInfos_3726_, lean_object* v_k_3727_, lean_object* v_kind_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_){
_start:
{
uint8_t v_kind_boxed_3734_; lean_object* v_res_3735_; 
v_kind_boxed_3734_ = lean_unbox(v_kind_3728_);
v_res_3735_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(v_declInfos_3726_, v_k_3727_, v_kind_boxed_3734_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
lean_dec(v___y_3732_);
lean_dec_ref(v___y_3731_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(lean_object* v_declInfos_3736_, lean_object* v_k_3737_, uint8_t v_kind_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_){
_start:
{
size_t v_sz_3744_; size_t v___x_3745_; lean_object* v___x_3746_; lean_object* v___x_3747_; 
v_sz_3744_ = lean_array_size(v_declInfos_3736_);
v___x_3745_ = ((size_t)0ULL);
v___x_3746_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__9_spec__16(v_sz_3744_, v___x_3745_, v_declInfos_3736_);
v___x_3747_ = l_Lean_Meta_withLocalDecls___at___00Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4_spec__5(v___x_3746_, v_k_3737_, v_kind_3738_, v___y_3739_, v___y_3740_, v___y_3741_, v___y_3742_);
return v___x_3747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4___boxed(lean_object* v_declInfos_3748_, lean_object* v_k_3749_, lean_object* v_kind_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_){
_start:
{
uint8_t v_kind_boxed_3756_; lean_object* v_res_3757_; 
v_kind_boxed_3756_ = lean_unbox(v_kind_3750_);
v_res_3757_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(v_declInfos_3748_, v_k_3749_, v_kind_boxed_3756_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_);
lean_dec(v___y_3754_);
lean_dec_ref(v___y_3753_);
lean_dec(v___y_3752_);
lean_dec_ref(v___y_3751_);
return v_res_3757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(lean_object* v_declInfos_3758_, lean_object* v_k_3759_, uint8_t v_kind_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_){
_start:
{
size_t v_sz_3766_; size_t v___x_3767_; lean_object* v___x_3768_; lean_object* v___x_3769_; 
v_sz_3766_ = lean_array_size(v_declInfos_3758_);
v___x_3767_ = ((size_t)0ULL);
v___x_3768_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtorHet_spec__7_spec__8(v_sz_3766_, v___x_3767_, v_declInfos_3758_);
v___x_3769_ = l_Lean_Meta_withLocalDeclsD___at___00Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4_spec__4(v___x_3768_, v_k_3759_, v_kind_3760_, v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_);
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4___boxed(lean_object* v_declInfos_3770_, lean_object* v_k_3771_, lean_object* v_kind_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_){
_start:
{
uint8_t v_kind_boxed_3778_; lean_object* v_res_3779_; 
v_kind_boxed_3778_ = lean_unbox(v_kind_3772_);
v_res_3779_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(v_declInfos_3770_, v_k_3771_, v_kind_boxed_3778_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_);
lean_dec(v___y_3776_);
lean_dec_ref(v___y_3775_);
lean_dec(v___y_3774_);
lean_dec_ref(v___y_3773_);
return v_res_3779_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3780_; lean_object* v___x_3781_; 
v___x_3780_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg___lam__0___closed__4);
v___x_3781_ = l_Lean_Name_mkStr1(v___x_3780_);
return v___x_3781_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; 
v___x_3782_ = lean_box(0);
v___x_3783_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__0);
v___x_3784_ = l_Lean_mkConst(v___x_3783_, v___x_3782_);
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(lean_object* v_j_3785_, lean_object* v___x_3786_, lean_object* v_motive_3787_, uint8_t v_isZero_3788_, uint8_t v___x_3789_, uint8_t v___x_3790_, lean_object* v___x_3791_, lean_object* v___x_3792_, lean_object* v___x_3793_, lean_object* v_zs12_3794_, lean_object* v_is_3795_, lean_object* v_fields1_3796_, lean_object* v_fields2_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_){
_start:
{
lean_object* v___y_3804_; lean_object* v___y_3805_; lean_object* v_e_3813_; lean_object* v___x_3823_; lean_object* v___x_3824_; 
lean_inc(v_j_3785_);
v___x_3823_ = l_Lean_mkNatLit(v_j_3785_);
v___x_3824_ = l_Lean_Meta_mkEqRefl(v___x_3823_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3825_; lean_object* v___x_3826_; lean_object* v___x_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; lean_object* v___x_3832_; lean_object* v___x_3833_; lean_object* v___x_3834_; lean_object* v___x_3835_; 
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_a_3825_);
lean_dec_ref(v___x_3824_);
lean_inc_ref(v___x_3786_);
v___x_3826_ = l_Lean_mkAppN(v___x_3786_, v_fields1_3796_);
v___x_3827_ = l_Lean_mkAppN(v___x_3786_, v_fields2_3797_);
v___x_3828_ = lean_unsigned_to_nat(3u);
v___x_3829_ = lean_mk_empty_array_with_capacity(v___x_3828_);
v___x_3830_ = lean_array_push(v___x_3829_, v___x_3826_);
v___x_3831_ = lean_array_push(v___x_3830_, v___x_3827_);
v___x_3832_ = lean_array_push(v___x_3831_, v_a_3825_);
v___x_3833_ = l_Array_append___redArg(v_is_3795_, v___x_3832_);
lean_dec_ref(v___x_3832_);
v___x_3834_ = l_Lean_mkAppN(v_motive_3787_, v___x_3833_);
lean_dec_ref(v___x_3833_);
v___x_3835_ = l_Lean_Meta_mkForallFVars(v_zs12_3794_, v___x_3834_, v_isZero_3788_, v___x_3789_, v___x_3789_, v___x_3790_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v_a_3836_; lean_object* v___x_3837_; uint8_t v___x_3838_; 
v_a_3836_ = lean_ctor_get(v___x_3835_, 0);
lean_inc(v_a_3836_);
lean_dec_ref(v___x_3835_);
v___x_3837_ = lean_array_get_size(v_zs12_3794_);
v___x_3838_ = lean_nat_dec_eq(v___x_3837_, v___x_3791_);
if (v___x_3838_ == 0)
{
v_e_3813_ = v_a_3836_;
goto v___jp_3812_;
}
else
{
lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3839_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___closed__1);
v___x_3840_ = l_Lean_mkArrow(v___x_3839_, v_a_3836_, v___y_3800_, v___y_3801_);
if (lean_obj_tag(v___x_3840_) == 0)
{
lean_object* v_a_3841_; 
v_a_3841_ = lean_ctor_get(v___x_3840_, 0);
lean_inc(v_a_3841_);
lean_dec_ref(v___x_3840_);
v_e_3813_ = v_a_3841_;
goto v___jp_3812_;
}
else
{
lean_object* v_a_3842_; lean_object* v___x_3844_; uint8_t v_isShared_3845_; uint8_t v_isSharedCheck_3849_; 
lean_dec(v___x_3792_);
lean_dec(v___x_3791_);
lean_dec(v_j_3785_);
v_a_3842_ = lean_ctor_get(v___x_3840_, 0);
v_isSharedCheck_3849_ = !lean_is_exclusive(v___x_3840_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3844_ = v___x_3840_;
v_isShared_3845_ = v_isSharedCheck_3849_;
goto v_resetjp_3843_;
}
else
{
lean_inc(v_a_3842_);
lean_dec(v___x_3840_);
v___x_3844_ = lean_box(0);
v_isShared_3845_ = v_isSharedCheck_3849_;
goto v_resetjp_3843_;
}
v_resetjp_3843_:
{
lean_object* v___x_3847_; 
if (v_isShared_3845_ == 0)
{
v___x_3847_ = v___x_3844_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v_a_3842_);
v___x_3847_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
return v___x_3847_;
}
}
}
}
}
else
{
lean_object* v_a_3850_; lean_object* v___x_3852_; uint8_t v_isShared_3853_; uint8_t v_isSharedCheck_3857_; 
lean_dec(v___x_3792_);
lean_dec(v___x_3791_);
lean_dec(v_j_3785_);
v_a_3850_ = lean_ctor_get(v___x_3835_, 0);
v_isSharedCheck_3857_ = !lean_is_exclusive(v___x_3835_);
if (v_isSharedCheck_3857_ == 0)
{
v___x_3852_ = v___x_3835_;
v_isShared_3853_ = v_isSharedCheck_3857_;
goto v_resetjp_3851_;
}
else
{
lean_inc(v_a_3850_);
lean_dec(v___x_3835_);
v___x_3852_ = lean_box(0);
v_isShared_3853_ = v_isSharedCheck_3857_;
goto v_resetjp_3851_;
}
v_resetjp_3851_:
{
lean_object* v___x_3855_; 
if (v_isShared_3853_ == 0)
{
v___x_3855_ = v___x_3852_;
goto v_reusejp_3854_;
}
else
{
lean_object* v_reuseFailAlloc_3856_; 
v_reuseFailAlloc_3856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3856_, 0, v_a_3850_);
v___x_3855_ = v_reuseFailAlloc_3856_;
goto v_reusejp_3854_;
}
v_reusejp_3854_:
{
return v___x_3855_;
}
}
}
}
else
{
lean_object* v_a_3858_; lean_object* v___x_3860_; uint8_t v_isShared_3861_; uint8_t v_isSharedCheck_3865_; 
lean_dec_ref(v_is_3795_);
lean_dec(v___x_3792_);
lean_dec(v___x_3791_);
lean_dec_ref(v_motive_3787_);
lean_dec_ref(v___x_3786_);
lean_dec(v_j_3785_);
v_a_3858_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3865_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3865_ == 0)
{
v___x_3860_ = v___x_3824_;
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
else
{
lean_inc(v_a_3858_);
lean_dec(v___x_3824_);
v___x_3860_ = lean_box(0);
v_isShared_3861_ = v_isSharedCheck_3865_;
goto v_resetjp_3859_;
}
v_resetjp_3859_:
{
lean_object* v___x_3863_; 
if (v_isShared_3861_ == 0)
{
v___x_3863_ = v___x_3860_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_a_3858_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
return v___x_3863_;
}
}
}
v___jp_3803_:
{
lean_object* v___x_3806_; uint8_t v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; 
v___x_3806_ = lean_array_get_size(v_zs12_3794_);
v___x_3807_ = lean_nat_dec_eq(v___x_3806_, v___x_3791_);
v___x_3808_ = lean_alloc_ctor(0, 2, 1);
lean_ctor_set(v___x_3808_, 0, v___x_3806_);
lean_ctor_set(v___x_3808_, 1, v___x_3791_);
lean_ctor_set_uint8(v___x_3808_, sizeof(void*)*2, v___x_3807_);
v___x_3809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3809_, 0, v___y_3805_);
lean_ctor_set(v___x_3809_, 1, v___y_3804_);
v___x_3810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3809_);
lean_ctor_set(v___x_3810_, 1, v___x_3808_);
v___x_3811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
return v___x_3811_;
}
v___jp_3812_:
{
if (lean_obj_tag(v___x_3792_) == 1)
{
lean_object* v_str_3814_; lean_object* v___x_3815_; lean_object* v___x_3816_; 
lean_dec(v_j_3785_);
v_str_3814_ = lean_ctor_get(v___x_3792_, 1);
lean_inc_ref(v_str_3814_);
lean_dec_ref(v___x_3792_);
v___x_3815_ = lean_box(0);
v___x_3816_ = l_Lean_Name_str___override(v___x_3815_, v_str_3814_);
v___y_3804_ = v_e_3813_;
v___y_3805_ = v___x_3816_;
goto v___jp_3803_;
}
else
{
lean_object* v___x_3817_; lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; 
lean_dec(v___x_3792_);
v___x_3817_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__6___redArg___lam__0___closed__0);
v___x_3818_ = lean_nat_add(v_j_3785_, v___x_3793_);
lean_dec(v_j_3785_);
v___x_3819_ = l_Nat_reprFast(v___x_3818_);
v___x_3820_ = lean_string_append(v___x_3817_, v___x_3819_);
lean_dec_ref(v___x_3819_);
v___x_3821_ = lean_box(0);
v___x_3822_ = l_Lean_Name_str___override(v___x_3821_, v___x_3820_);
v___y_3804_ = v_e_3813_;
v___y_3805_ = v___x_3822_;
goto v___jp_3803_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_j_3866_ = _args[0];
lean_object* v___x_3867_ = _args[1];
lean_object* v_motive_3868_ = _args[2];
lean_object* v_isZero_3869_ = _args[3];
lean_object* v___x_3870_ = _args[4];
lean_object* v___x_3871_ = _args[5];
lean_object* v___x_3872_ = _args[6];
lean_object* v___x_3873_ = _args[7];
lean_object* v___x_3874_ = _args[8];
lean_object* v_zs12_3875_ = _args[9];
lean_object* v_is_3876_ = _args[10];
lean_object* v_fields1_3877_ = _args[11];
lean_object* v_fields2_3878_ = _args[12];
lean_object* v___y_3879_ = _args[13];
lean_object* v___y_3880_ = _args[14];
lean_object* v___y_3881_ = _args[15];
lean_object* v___y_3882_ = _args[16];
lean_object* v___y_3883_ = _args[17];
_start:
{
uint8_t v_isZero_boxed_3884_; uint8_t v___x_16538__boxed_3885_; uint8_t v___x_16539__boxed_3886_; lean_object* v_res_3887_; 
v_isZero_boxed_3884_ = lean_unbox(v_isZero_3869_);
v___x_16538__boxed_3885_ = lean_unbox(v___x_3870_);
v___x_16539__boxed_3886_ = lean_unbox(v___x_3871_);
v_res_3887_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0(v_j_3866_, v___x_3867_, v_motive_3868_, v_isZero_boxed_3884_, v___x_16538__boxed_3885_, v___x_16539__boxed_3886_, v___x_3872_, v___x_3873_, v___x_3874_, v_zs12_3875_, v_is_3876_, v_fields1_3877_, v_fields2_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_);
lean_dec(v___y_3882_);
lean_dec_ref(v___y_3881_);
lean_dec(v___y_3880_);
lean_dec_ref(v___y_3879_);
lean_dec_ref(v_fields2_3878_);
lean_dec_ref(v_fields1_3877_);
lean_dec_ref(v_zs12_3875_);
lean_dec(v___x_3874_);
return v_res_3887_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(lean_object* v_tail_3888_, lean_object* v_params_3889_, lean_object* v_motive_3890_, lean_object* v_as_3891_, lean_object* v_i_3892_, lean_object* v_j_3893_, lean_object* v_bs_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_){
_start:
{
lean_object* v_zero_3900_; uint8_t v_isZero_3901_; 
v_zero_3900_ = lean_unsigned_to_nat(0u);
v_isZero_3901_ = lean_nat_dec_eq(v_i_3892_, v_zero_3900_);
if (v_isZero_3901_ == 1)
{
lean_object* v___x_3902_; 
lean_dec(v_j_3893_);
lean_dec(v_i_3892_);
lean_dec_ref(v_motive_3890_);
lean_dec(v_tail_3888_);
v___x_3902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3902_, 0, v_bs_3894_);
return v___x_3902_;
}
else
{
lean_object* v___x_3903_; uint8_t v___x_3904_; uint8_t v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___f_3912_; lean_object* v___x_3913_; 
v___x_3903_ = lean_unsigned_to_nat(1u);
v___x_3904_ = 1;
v___x_3905_ = 1;
v___x_3906_ = lean_array_fget_borrowed(v_as_3891_, v_j_3893_);
lean_inc(v_tail_3888_);
lean_inc_n(v___x_3906_, 2);
v___x_3907_ = l_Lean_mkConst(v___x_3906_, v_tail_3888_);
v___x_3908_ = l_Lean_mkAppN(v___x_3907_, v_params_3889_);
v___x_3909_ = lean_box(v_isZero_3901_);
v___x_3910_ = lean_box(v___x_3904_);
v___x_3911_ = lean_box(v___x_3905_);
lean_inc_ref(v_motive_3890_);
lean_inc_ref(v___x_3908_);
lean_inc(v_j_3893_);
v___f_3912_ = lean_alloc_closure((void*)(l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___lam__0___boxed), 18, 9);
lean_closure_set(v___f_3912_, 0, v_j_3893_);
lean_closure_set(v___f_3912_, 1, v___x_3908_);
lean_closure_set(v___f_3912_, 2, v_motive_3890_);
lean_closure_set(v___f_3912_, 3, v___x_3909_);
lean_closure_set(v___f_3912_, 4, v___x_3910_);
lean_closure_set(v___f_3912_, 5, v___x_3911_);
lean_closure_set(v___f_3912_, 6, v_zero_3900_);
lean_closure_set(v___f_3912_, 7, v___x_3906_);
lean_closure_set(v___f_3912_, 8, v___x_3903_);
v___x_3913_ = l_Lean_Meta_withSharedCtorIndices___redArg(v___x_3908_, v___f_3912_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_);
if (lean_obj_tag(v___x_3913_) == 0)
{
lean_object* v_a_3914_; lean_object* v_n_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; 
v_a_3914_ = lean_ctor_get(v___x_3913_, 0);
lean_inc(v_a_3914_);
lean_dec_ref(v___x_3913_);
v_n_3915_ = lean_nat_sub(v_i_3892_, v___x_3903_);
lean_dec(v_i_3892_);
v___x_3916_ = lean_nat_add(v_j_3893_, v___x_3903_);
lean_dec(v_j_3893_);
v___x_3917_ = lean_array_push(v_bs_3894_, v_a_3914_);
v_i_3892_ = v_n_3915_;
v_j_3893_ = v___x_3916_;
v_bs_3894_ = v___x_3917_;
goto _start;
}
else
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3926_; 
lean_dec_ref(v_bs_3894_);
lean_dec(v_j_3893_);
lean_dec(v_i_3892_);
lean_dec_ref(v_motive_3890_);
lean_dec(v_tail_3888_);
v_a_3919_ = lean_ctor_get(v___x_3913_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3913_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3921_ = v___x_3913_;
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3913_);
v___x_3921_ = lean_box(0);
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
v_resetjp_3920_:
{
lean_object* v___x_3924_; 
if (v_isShared_3922_ == 0)
{
v___x_3924_ = v___x_3921_;
goto v_reusejp_3923_;
}
else
{
lean_object* v_reuseFailAlloc_3925_; 
v_reuseFailAlloc_3925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3925_, 0, v_a_3919_);
v___x_3924_ = v_reuseFailAlloc_3925_;
goto v_reusejp_3923_;
}
v_reusejp_3923_:
{
return v___x_3924_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg___boxed(lean_object* v_tail_3927_, lean_object* v_params_3928_, lean_object* v_motive_3929_, lean_object* v_as_3930_, lean_object* v_i_3931_, lean_object* v_j_3932_, lean_object* v_bs_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_){
_start:
{
lean_object* v_res_3939_; 
v_res_3939_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_3927_, v_params_3928_, v_motive_3929_, v_as_3930_, v_i_3931_, v_j_3932_, v_bs_3933_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_);
lean_dec(v___y_3937_);
lean_dec_ref(v___y_3936_);
lean_dec(v___y_3935_);
lean_dec_ref(v___y_3934_);
lean_dec_ref(v_as_3930_);
lean_dec_ref(v_params_3928_);
return v_res_3939_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6(lean_object* v_ctors_3940_, lean_object* v_tail_3941_, lean_object* v_params_3942_, lean_object* v___x_3943_, lean_object* v_numIndices_3944_, lean_object* v___x_3945_, lean_object* v___x_3946_, uint8_t v___x_3947_, uint8_t v___x_3948_, uint8_t v___x_3949_, lean_object* v_is_3950_, lean_object* v___x_3951_, lean_object* v___x_3952_, lean_object* v___x_3953_, lean_object* v___x_3954_, lean_object* v___x_3955_, lean_object* v___x_3956_, lean_object* v_heq_3957_, lean_object* v_val_3958_, lean_object* v___x_3959_, lean_object* v_declName_3960_, lean_object* v_levelParams_3961_, lean_object* v___x_3962_, lean_object* v_numParams_3963_, lean_object* v___x_3964_, lean_object* v_motive_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_){
_start:
{
lean_object* v___x_3971_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; 
v___x_3971_ = lean_array_mk(v_ctors_3940_);
v___x_3972_ = lean_array_get_size(v___x_3971_);
v___x_3973_ = lean_mk_empty_array_with_capacity(v___x_3972_);
lean_inc(v___x_3943_);
lean_inc_ref(v_motive_3965_);
lean_inc(v_tail_3941_);
v___x_3974_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_3941_, v_params_3942_, v_motive_3965_, v___x_3971_, v___x_3972_, v___x_3943_, v___x_3973_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_);
if (lean_obj_tag(v___x_3974_) == 0)
{
lean_object* v_a_3975_; lean_object* v___x_3976_; lean_object* v_fst_3977_; lean_object* v_snd_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; lean_object* v___x_3981_; lean_object* v___f_3982_; uint8_t v___x_3983_; lean_object* v___x_3984_; 
v_a_3975_ = lean_ctor_get(v___x_3974_, 0);
lean_inc(v_a_3975_);
lean_dec_ref(v___x_3974_);
v___x_3976_ = l_Array_unzip___redArg(v_a_3975_);
lean_dec(v_a_3975_);
v_fst_3977_ = lean_ctor_get(v___x_3976_, 0);
lean_inc(v_fst_3977_);
v_snd_3978_ = lean_ctor_get(v___x_3976_, 1);
lean_inc(v_snd_3978_);
lean_dec_ref(v___x_3976_);
v___x_3979_ = lean_box(v___x_3947_);
v___x_3980_ = lean_box(v___x_3948_);
v___x_3981_ = lean_box(v___x_3949_);
v___f_3982_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__5___boxed), 34, 28);
lean_closure_set(v___f_3982_, 0, v_numIndices_3944_);
lean_closure_set(v___f_3982_, 1, v___x_3945_);
lean_closure_set(v___f_3982_, 2, v_motive_3965_);
lean_closure_set(v___f_3982_, 3, v___x_3946_);
lean_closure_set(v___f_3982_, 4, v___x_3979_);
lean_closure_set(v___f_3982_, 5, v___x_3980_);
lean_closure_set(v___f_3982_, 6, v___x_3981_);
lean_closure_set(v___f_3982_, 7, v_is_3950_);
lean_closure_set(v___f_3982_, 8, v___x_3951_);
lean_closure_set(v___f_3982_, 9, v___x_3952_);
lean_closure_set(v___f_3982_, 10, v___x_3953_);
lean_closure_set(v___f_3982_, 11, v___x_3954_);
lean_closure_set(v___f_3982_, 12, v_params_3942_);
lean_closure_set(v___f_3982_, 13, v___x_3955_);
lean_closure_set(v___f_3982_, 14, v___x_3956_);
lean_closure_set(v___f_3982_, 15, v_heq_3957_);
lean_closure_set(v___f_3982_, 16, v_val_3958_);
lean_closure_set(v___f_3982_, 17, v___x_3972_);
lean_closure_set(v___f_3982_, 18, v_tail_3941_);
lean_closure_set(v___f_3982_, 19, v___x_3971_);
lean_closure_set(v___f_3982_, 20, v___x_3943_);
lean_closure_set(v___f_3982_, 21, v___x_3959_);
lean_closure_set(v___f_3982_, 22, v_declName_3960_);
lean_closure_set(v___f_3982_, 23, v_levelParams_3961_);
lean_closure_set(v___f_3982_, 24, v___x_3962_);
lean_closure_set(v___f_3982_, 25, v_numParams_3963_);
lean_closure_set(v___f_3982_, 26, v_snd_3978_);
lean_closure_set(v___f_3982_, 27, v___x_3964_);
v___x_3983_ = 0;
v___x_3984_ = l_Lean_Meta_withLocalDeclsDND___at___00Lean_mkCasesOnSameCtor_spec__4(v_fst_3977_, v___f_3982_, v___x_3983_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_);
return v___x_3984_;
}
else
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3992_; 
lean_dec_ref(v___x_3971_);
lean_dec_ref(v_motive_3965_);
lean_dec_ref(v___x_3964_);
lean_dec(v_numParams_3963_);
lean_dec(v___x_3962_);
lean_dec(v_levelParams_3961_);
lean_dec(v_declName_3960_);
lean_dec_ref(v___x_3959_);
lean_dec_ref(v_val_3958_);
lean_dec_ref(v_heq_3957_);
lean_dec_ref(v___x_3956_);
lean_dec_ref(v___x_3955_);
lean_dec(v___x_3954_);
lean_dec(v___x_3953_);
lean_dec_ref(v___x_3952_);
lean_dec_ref(v___x_3951_);
lean_dec_ref(v_is_3950_);
lean_dec_ref(v___x_3946_);
lean_dec(v___x_3945_);
lean_dec(v_numIndices_3944_);
lean_dec(v___x_3943_);
lean_dec_ref(v_params_3942_);
lean_dec(v_tail_3941_);
v_a_3985_ = lean_ctor_get(v___x_3974_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v___x_3974_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3987_ = v___x_3974_;
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v___x_3974_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3990_; 
if (v_isShared_3988_ == 0)
{
v___x_3990_ = v___x_3987_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3985_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__6___boxed(lean_object** _args){
lean_object* v_ctors_3993_ = _args[0];
lean_object* v_tail_3994_ = _args[1];
lean_object* v_params_3995_ = _args[2];
lean_object* v___x_3996_ = _args[3];
lean_object* v_numIndices_3997_ = _args[4];
lean_object* v___x_3998_ = _args[5];
lean_object* v___x_3999_ = _args[6];
lean_object* v___x_4000_ = _args[7];
lean_object* v___x_4001_ = _args[8];
lean_object* v___x_4002_ = _args[9];
lean_object* v_is_4003_ = _args[10];
lean_object* v___x_4004_ = _args[11];
lean_object* v___x_4005_ = _args[12];
lean_object* v___x_4006_ = _args[13];
lean_object* v___x_4007_ = _args[14];
lean_object* v___x_4008_ = _args[15];
lean_object* v___x_4009_ = _args[16];
lean_object* v_heq_4010_ = _args[17];
lean_object* v_val_4011_ = _args[18];
lean_object* v___x_4012_ = _args[19];
lean_object* v_declName_4013_ = _args[20];
lean_object* v_levelParams_4014_ = _args[21];
lean_object* v___x_4015_ = _args[22];
lean_object* v_numParams_4016_ = _args[23];
lean_object* v___x_4017_ = _args[24];
lean_object* v_motive_4018_ = _args[25];
lean_object* v___y_4019_ = _args[26];
lean_object* v___y_4020_ = _args[27];
lean_object* v___y_4021_ = _args[28];
lean_object* v___y_4022_ = _args[29];
lean_object* v___y_4023_ = _args[30];
_start:
{
uint8_t v___x_16772__boxed_4024_; uint8_t v___x_16773__boxed_4025_; uint8_t v___x_16774__boxed_4026_; lean_object* v_res_4027_; 
v___x_16772__boxed_4024_ = lean_unbox(v___x_4000_);
v___x_16773__boxed_4025_ = lean_unbox(v___x_4001_);
v___x_16774__boxed_4026_ = lean_unbox(v___x_4002_);
v_res_4027_ = l_Lean_mkCasesOnSameCtor___lam__6(v_ctors_3993_, v_tail_3994_, v_params_3995_, v___x_3996_, v_numIndices_3997_, v___x_3998_, v___x_3999_, v___x_16772__boxed_4024_, v___x_16773__boxed_4025_, v___x_16774__boxed_4026_, v_is_4003_, v___x_4004_, v___x_4005_, v___x_4006_, v___x_4007_, v___x_4008_, v___x_4009_, v_heq_4010_, v_val_4011_, v___x_4012_, v_declName_4013_, v_levelParams_4014_, v___x_4015_, v_numParams_4016_, v___x_4017_, v_motive_4018_, v___y_4019_, v___y_4020_, v___y_4021_, v___y_4022_);
lean_dec(v___y_4022_);
lean_dec_ref(v___y_4021_);
lean_dec(v___y_4020_);
lean_dec_ref(v___y_4019_);
return v_res_4027_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7(lean_object* v___x_4028_, lean_object* v___x_4029_, lean_object* v_is_4030_, lean_object* v_head_4031_, lean_object* v_ctors_4032_, lean_object* v_tail_4033_, lean_object* v_params_4034_, lean_object* v___x_4035_, lean_object* v_numIndices_4036_, lean_object* v___x_4037_, lean_object* v___x_4038_, lean_object* v___x_4039_, lean_object* v___x_4040_, lean_object* v___x_4041_, lean_object* v_val_4042_, lean_object* v___x_4043_, lean_object* v_declName_4044_, lean_object* v_levelParams_4045_, lean_object* v_numParams_4046_, lean_object* v___x_4047_, lean_object* v_heq_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_){
_start:
{
lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v___x_4060_; uint8_t v___x_4061_; uint8_t v___x_4062_; uint8_t v___x_4063_; lean_object* v___x_4064_; 
v___x_4054_ = lean_unsigned_to_nat(3u);
v___x_4055_ = lean_mk_empty_array_with_capacity(v___x_4054_);
lean_inc_ref(v___x_4028_);
v___x_4056_ = lean_array_push(v___x_4055_, v___x_4028_);
lean_inc_ref(v___x_4029_);
v___x_4057_ = lean_array_push(v___x_4056_, v___x_4029_);
lean_inc_ref(v_heq_4048_);
v___x_4058_ = lean_array_push(v___x_4057_, v_heq_4048_);
lean_inc_ref(v_is_4030_);
v___x_4059_ = l_Array_append___redArg(v_is_4030_, v___x_4058_);
lean_dec_ref(v___x_4058_);
v___x_4060_ = l_Lean_mkSort(v_head_4031_);
v___x_4061_ = 0;
v___x_4062_ = 1;
v___x_4063_ = 1;
v___x_4064_ = l_Lean_Meta_mkForallFVars(v___x_4059_, v___x_4060_, v___x_4061_, v___x_4062_, v___x_4062_, v___x_4063_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_);
if (lean_obj_tag(v___x_4064_) == 0)
{
lean_object* v_a_4065_; lean_object* v___x_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; lean_object* v___f_4069_; lean_object* v___x_4070_; uint8_t v___x_4071_; lean_object* v___x_4072_; 
v_a_4065_ = lean_ctor_get(v___x_4064_, 0);
lean_inc(v_a_4065_);
lean_dec_ref(v___x_4064_);
v___x_4066_ = lean_box(v___x_4061_);
v___x_4067_ = lean_box(v___x_4062_);
v___x_4068_ = lean_box(v___x_4063_);
v___f_4069_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__6___boxed), 31, 25);
lean_closure_set(v___f_4069_, 0, v_ctors_4032_);
lean_closure_set(v___f_4069_, 1, v_tail_4033_);
lean_closure_set(v___f_4069_, 2, v_params_4034_);
lean_closure_set(v___f_4069_, 3, v___x_4035_);
lean_closure_set(v___f_4069_, 4, v_numIndices_4036_);
lean_closure_set(v___f_4069_, 5, v___x_4037_);
lean_closure_set(v___f_4069_, 6, v___x_4059_);
lean_closure_set(v___f_4069_, 7, v___x_4066_);
lean_closure_set(v___f_4069_, 8, v___x_4067_);
lean_closure_set(v___f_4069_, 9, v___x_4068_);
lean_closure_set(v___f_4069_, 10, v_is_4030_);
lean_closure_set(v___f_4069_, 11, v___x_4029_);
lean_closure_set(v___f_4069_, 12, v___x_4028_);
lean_closure_set(v___f_4069_, 13, v___x_4038_);
lean_closure_set(v___f_4069_, 14, v___x_4039_);
lean_closure_set(v___f_4069_, 15, v___x_4040_);
lean_closure_set(v___f_4069_, 16, v___x_4041_);
lean_closure_set(v___f_4069_, 17, v_heq_4048_);
lean_closure_set(v___f_4069_, 18, v_val_4042_);
lean_closure_set(v___f_4069_, 19, v___x_4043_);
lean_closure_set(v___f_4069_, 20, v_declName_4044_);
lean_closure_set(v___f_4069_, 21, v_levelParams_4045_);
lean_closure_set(v___f_4069_, 22, v___x_4054_);
lean_closure_set(v___f_4069_, 23, v_numParams_4046_);
lean_closure_set(v___f_4069_, 24, v___x_4047_);
v___x_4070_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1, &l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1_once, _init_l_Lean_mkCasesOnSameCtorHet___lam__3___closed__1);
v___x_4071_ = 0;
v___x_4072_ = l_Lean_Meta_withLocalDecl___at___00Lean_mkCasesOnSameCtorHet_spec__8___redArg(v___x_4070_, v___x_4063_, v_a_4065_, v___f_4069_, v___x_4071_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_);
return v___x_4072_;
}
else
{
lean_object* v_a_4073_; lean_object* v___x_4075_; uint8_t v_isShared_4076_; uint8_t v_isSharedCheck_4080_; 
lean_dec_ref(v___x_4059_);
lean_dec_ref(v_heq_4048_);
lean_dec_ref(v___x_4047_);
lean_dec(v_numParams_4046_);
lean_dec(v_levelParams_4045_);
lean_dec(v_declName_4044_);
lean_dec_ref(v___x_4043_);
lean_dec_ref(v_val_4042_);
lean_dec_ref(v___x_4041_);
lean_dec_ref(v___x_4040_);
lean_dec(v___x_4039_);
lean_dec(v___x_4038_);
lean_dec(v___x_4037_);
lean_dec(v_numIndices_4036_);
lean_dec(v___x_4035_);
lean_dec_ref(v_params_4034_);
lean_dec(v_tail_4033_);
lean_dec(v_ctors_4032_);
lean_dec_ref(v_is_4030_);
lean_dec_ref(v___x_4029_);
lean_dec_ref(v___x_4028_);
v_a_4073_ = lean_ctor_get(v___x_4064_, 0);
v_isSharedCheck_4080_ = !lean_is_exclusive(v___x_4064_);
if (v_isSharedCheck_4080_ == 0)
{
v___x_4075_ = v___x_4064_;
v_isShared_4076_ = v_isSharedCheck_4080_;
goto v_resetjp_4074_;
}
else
{
lean_inc(v_a_4073_);
lean_dec(v___x_4064_);
v___x_4075_ = lean_box(0);
v_isShared_4076_ = v_isSharedCheck_4080_;
goto v_resetjp_4074_;
}
v_resetjp_4074_:
{
lean_object* v___x_4078_; 
if (v_isShared_4076_ == 0)
{
v___x_4078_ = v___x_4075_;
goto v_reusejp_4077_;
}
else
{
lean_object* v_reuseFailAlloc_4079_; 
v_reuseFailAlloc_4079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4079_, 0, v_a_4073_);
v___x_4078_ = v_reuseFailAlloc_4079_;
goto v_reusejp_4077_;
}
v_reusejp_4077_:
{
return v___x_4078_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__7___boxed(lean_object** _args){
lean_object* v___x_4081_ = _args[0];
lean_object* v___x_4082_ = _args[1];
lean_object* v_is_4083_ = _args[2];
lean_object* v_head_4084_ = _args[3];
lean_object* v_ctors_4085_ = _args[4];
lean_object* v_tail_4086_ = _args[5];
lean_object* v_params_4087_ = _args[6];
lean_object* v___x_4088_ = _args[7];
lean_object* v_numIndices_4089_ = _args[8];
lean_object* v___x_4090_ = _args[9];
lean_object* v___x_4091_ = _args[10];
lean_object* v___x_4092_ = _args[11];
lean_object* v___x_4093_ = _args[12];
lean_object* v___x_4094_ = _args[13];
lean_object* v_val_4095_ = _args[14];
lean_object* v___x_4096_ = _args[15];
lean_object* v_declName_4097_ = _args[16];
lean_object* v_levelParams_4098_ = _args[17];
lean_object* v_numParams_4099_ = _args[18];
lean_object* v___x_4100_ = _args[19];
lean_object* v_heq_4101_ = _args[20];
lean_object* v___y_4102_ = _args[21];
lean_object* v___y_4103_ = _args[22];
lean_object* v___y_4104_ = _args[23];
lean_object* v___y_4105_ = _args[24];
lean_object* v___y_4106_ = _args[25];
_start:
{
lean_object* v_res_4107_; 
v_res_4107_ = l_Lean_mkCasesOnSameCtor___lam__7(v___x_4081_, v___x_4082_, v_is_4083_, v_head_4084_, v_ctors_4085_, v_tail_4086_, v_params_4087_, v___x_4088_, v_numIndices_4089_, v___x_4090_, v___x_4091_, v___x_4092_, v___x_4093_, v___x_4094_, v_val_4095_, v___x_4096_, v_declName_4097_, v_levelParams_4098_, v_numParams_4099_, v___x_4100_, v_heq_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
lean_dec(v___y_4103_);
lean_dec_ref(v___y_4102_);
return v_res_4107_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8(lean_object* v___x_4108_, lean_object* v_x1_4109_, lean_object* v_indName_4110_, lean_object* v_tail_4111_, lean_object* v_params_4112_, lean_object* v_is_4113_, lean_object* v___x_4114_, lean_object* v_head_4115_, lean_object* v_ctors_4116_, lean_object* v_numIndices_4117_, lean_object* v___x_4118_, lean_object* v___x_4119_, lean_object* v_val_4120_, lean_object* v_declName_4121_, lean_object* v_levelParams_4122_, lean_object* v_numParams_4123_, lean_object* v___x_4124_, lean_object* v_x2_4125_, lean_object* v_x_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_){
_start:
{
lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; 
v___x_4132_ = lean_unsigned_to_nat(0u);
v___x_4133_ = lean_array_get_borrowed(v___x_4108_, v_x1_4109_, v___x_4132_);
v___x_4134_ = lean_array_get_borrowed(v___x_4108_, v_x2_4125_, v___x_4132_);
v___x_4135_ = l_mkCtorIdxName(v_indName_4110_);
lean_inc(v_tail_4111_);
v___x_4136_ = l_Lean_mkConst(v___x_4135_, v_tail_4111_);
lean_inc_ref(v_params_4112_);
v___x_4137_ = l_Array_append___redArg(v_params_4112_, v_is_4113_);
v___x_4138_ = lean_mk_empty_array_with_capacity(v___x_4114_);
lean_inc(v___x_4133_);
lean_inc_ref_n(v___x_4138_, 2);
v___x_4139_ = lean_array_push(v___x_4138_, v___x_4133_);
lean_inc_ref(v___x_4137_);
v___x_4140_ = l_Array_append___redArg(v___x_4137_, v___x_4139_);
lean_inc_ref(v___x_4136_);
v___x_4141_ = l_Lean_mkAppN(v___x_4136_, v___x_4140_);
lean_dec_ref(v___x_4140_);
lean_inc(v___x_4134_);
v___x_4142_ = lean_array_push(v___x_4138_, v___x_4134_);
v___x_4143_ = l_Array_append___redArg(v___x_4137_, v___x_4142_);
v___x_4144_ = l_Lean_mkAppN(v___x_4136_, v___x_4143_);
lean_dec_ref(v___x_4143_);
v___x_4145_ = l_Lean_Meta_mkEq(v___x_4141_, v___x_4144_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_);
if (lean_obj_tag(v___x_4145_) == 0)
{
lean_object* v_a_4146_; lean_object* v___f_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; 
v_a_4146_ = lean_ctor_get(v___x_4145_, 0);
lean_inc(v_a_4146_);
lean_dec_ref(v___x_4145_);
lean_inc(v___x_4134_);
lean_inc(v___x_4133_);
v___f_4147_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__7___boxed), 26, 20);
lean_closure_set(v___f_4147_, 0, v___x_4133_);
lean_closure_set(v___f_4147_, 1, v___x_4134_);
lean_closure_set(v___f_4147_, 2, v_is_4113_);
lean_closure_set(v___f_4147_, 3, v_head_4115_);
lean_closure_set(v___f_4147_, 4, v_ctors_4116_);
lean_closure_set(v___f_4147_, 5, v_tail_4111_);
lean_closure_set(v___f_4147_, 6, v_params_4112_);
lean_closure_set(v___f_4147_, 7, v___x_4132_);
lean_closure_set(v___f_4147_, 8, v_numIndices_4117_);
lean_closure_set(v___f_4147_, 9, v___x_4114_);
lean_closure_set(v___f_4147_, 10, v___x_4118_);
lean_closure_set(v___f_4147_, 11, v___x_4119_);
lean_closure_set(v___f_4147_, 12, v___x_4139_);
lean_closure_set(v___f_4147_, 13, v___x_4142_);
lean_closure_set(v___f_4147_, 14, v_val_4120_);
lean_closure_set(v___f_4147_, 15, v___x_4138_);
lean_closure_set(v___f_4147_, 16, v_declName_4121_);
lean_closure_set(v___f_4147_, 17, v_levelParams_4122_);
lean_closure_set(v___f_4147_, 18, v_numParams_4123_);
lean_closure_set(v___f_4147_, 19, v___x_4124_);
v___x_4148_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1, &l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtorHet_spec__5___redArg___closed__1);
v___x_4149_ = l_Lean_Meta_withLocalDeclD___at___00Lean_mkCasesOnSameCtorHet_spec__4___redArg(v___x_4148_, v_a_4146_, v___f_4147_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_);
return v___x_4149_;
}
else
{
lean_object* v_a_4150_; lean_object* v___x_4152_; uint8_t v_isShared_4153_; uint8_t v_isSharedCheck_4157_; 
lean_dec_ref(v___x_4142_);
lean_dec_ref(v___x_4139_);
lean_dec_ref(v___x_4138_);
lean_dec_ref(v___x_4124_);
lean_dec(v_numParams_4123_);
lean_dec(v_levelParams_4122_);
lean_dec(v_declName_4121_);
lean_dec_ref(v_val_4120_);
lean_dec(v___x_4119_);
lean_dec(v___x_4118_);
lean_dec(v_numIndices_4117_);
lean_dec(v_ctors_4116_);
lean_dec(v_head_4115_);
lean_dec(v___x_4114_);
lean_dec_ref(v_is_4113_);
lean_dec_ref(v_params_4112_);
lean_dec(v_tail_4111_);
v_a_4150_ = lean_ctor_get(v___x_4145_, 0);
v_isSharedCheck_4157_ = !lean_is_exclusive(v___x_4145_);
if (v_isSharedCheck_4157_ == 0)
{
v___x_4152_ = v___x_4145_;
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
else
{
lean_inc(v_a_4150_);
lean_dec(v___x_4145_);
v___x_4152_ = lean_box(0);
v_isShared_4153_ = v_isSharedCheck_4157_;
goto v_resetjp_4151_;
}
v_resetjp_4151_:
{
lean_object* v___x_4155_; 
if (v_isShared_4153_ == 0)
{
v___x_4155_ = v___x_4152_;
goto v_reusejp_4154_;
}
else
{
lean_object* v_reuseFailAlloc_4156_; 
v_reuseFailAlloc_4156_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4156_, 0, v_a_4150_);
v___x_4155_ = v_reuseFailAlloc_4156_;
goto v_reusejp_4154_;
}
v_reusejp_4154_:
{
return v___x_4155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__8___boxed(lean_object** _args){
lean_object* v___x_4158_ = _args[0];
lean_object* v_x1_4159_ = _args[1];
lean_object* v_indName_4160_ = _args[2];
lean_object* v_tail_4161_ = _args[3];
lean_object* v_params_4162_ = _args[4];
lean_object* v_is_4163_ = _args[5];
lean_object* v___x_4164_ = _args[6];
lean_object* v_head_4165_ = _args[7];
lean_object* v_ctors_4166_ = _args[8];
lean_object* v_numIndices_4167_ = _args[9];
lean_object* v___x_4168_ = _args[10];
lean_object* v___x_4169_ = _args[11];
lean_object* v_val_4170_ = _args[12];
lean_object* v_declName_4171_ = _args[13];
lean_object* v_levelParams_4172_ = _args[14];
lean_object* v_numParams_4173_ = _args[15];
lean_object* v___x_4174_ = _args[16];
lean_object* v_x2_4175_ = _args[17];
lean_object* v_x_4176_ = _args[18];
lean_object* v___y_4177_ = _args[19];
lean_object* v___y_4178_ = _args[20];
lean_object* v___y_4179_ = _args[21];
lean_object* v___y_4180_ = _args[22];
lean_object* v___y_4181_ = _args[23];
_start:
{
lean_object* v_res_4182_; 
v_res_4182_ = l_Lean_mkCasesOnSameCtor___lam__8(v___x_4158_, v_x1_4159_, v_indName_4160_, v_tail_4161_, v_params_4162_, v_is_4163_, v___x_4164_, v_head_4165_, v_ctors_4166_, v_numIndices_4167_, v___x_4168_, v___x_4169_, v_val_4170_, v_declName_4171_, v_levelParams_4172_, v_numParams_4173_, v___x_4174_, v_x2_4175_, v_x_4176_, v___y_4177_, v___y_4178_, v___y_4179_, v___y_4180_);
lean_dec(v___y_4180_);
lean_dec_ref(v___y_4179_);
lean_dec(v___y_4178_);
lean_dec_ref(v___y_4177_);
lean_dec_ref(v_x_4176_);
lean_dec_ref(v_x2_4175_);
lean_dec_ref(v_x1_4159_);
lean_dec_ref(v___x_4158_);
return v_res_4182_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9(lean_object* v___x_4183_, lean_object* v_indName_4184_, lean_object* v_tail_4185_, lean_object* v_params_4186_, lean_object* v_is_4187_, lean_object* v___x_4188_, lean_object* v_head_4189_, lean_object* v_ctors_4190_, lean_object* v_numIndices_4191_, lean_object* v___x_4192_, lean_object* v___x_4193_, lean_object* v_val_4194_, lean_object* v_declName_4195_, lean_object* v_levelParams_4196_, lean_object* v_numParams_4197_, lean_object* v___x_4198_, lean_object* v_t_4199_, lean_object* v___x_4200_, lean_object* v_x1_4201_, lean_object* v_x_4202_, lean_object* v___y_4203_, lean_object* v___y_4204_, lean_object* v___y_4205_, lean_object* v___y_4206_){
_start:
{
lean_object* v___f_4208_; uint8_t v___x_4209_; lean_object* v___x_4210_; 
v___f_4208_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__8___boxed), 24, 17);
lean_closure_set(v___f_4208_, 0, v___x_4183_);
lean_closure_set(v___f_4208_, 1, v_x1_4201_);
lean_closure_set(v___f_4208_, 2, v_indName_4184_);
lean_closure_set(v___f_4208_, 3, v_tail_4185_);
lean_closure_set(v___f_4208_, 4, v_params_4186_);
lean_closure_set(v___f_4208_, 5, v_is_4187_);
lean_closure_set(v___f_4208_, 6, v___x_4188_);
lean_closure_set(v___f_4208_, 7, v_head_4189_);
lean_closure_set(v___f_4208_, 8, v_ctors_4190_);
lean_closure_set(v___f_4208_, 9, v_numIndices_4191_);
lean_closure_set(v___f_4208_, 10, v___x_4192_);
lean_closure_set(v___f_4208_, 11, v___x_4193_);
lean_closure_set(v___f_4208_, 12, v_val_4194_);
lean_closure_set(v___f_4208_, 13, v_declName_4195_);
lean_closure_set(v___f_4208_, 14, v_levelParams_4196_);
lean_closure_set(v___f_4208_, 15, v_numParams_4197_);
lean_closure_set(v___f_4208_, 16, v___x_4198_);
v___x_4209_ = 0;
v___x_4210_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_4199_, v___x_4200_, v___f_4208_, v___x_4209_, v___x_4209_, v___y_4203_, v___y_4204_, v___y_4205_, v___y_4206_);
return v___x_4210_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__9___boxed(lean_object** _args){
lean_object* v___x_4211_ = _args[0];
lean_object* v_indName_4212_ = _args[1];
lean_object* v_tail_4213_ = _args[2];
lean_object* v_params_4214_ = _args[3];
lean_object* v_is_4215_ = _args[4];
lean_object* v___x_4216_ = _args[5];
lean_object* v_head_4217_ = _args[6];
lean_object* v_ctors_4218_ = _args[7];
lean_object* v_numIndices_4219_ = _args[8];
lean_object* v___x_4220_ = _args[9];
lean_object* v___x_4221_ = _args[10];
lean_object* v_val_4222_ = _args[11];
lean_object* v_declName_4223_ = _args[12];
lean_object* v_levelParams_4224_ = _args[13];
lean_object* v_numParams_4225_ = _args[14];
lean_object* v___x_4226_ = _args[15];
lean_object* v_t_4227_ = _args[16];
lean_object* v___x_4228_ = _args[17];
lean_object* v_x1_4229_ = _args[18];
lean_object* v_x_4230_ = _args[19];
lean_object* v___y_4231_ = _args[20];
lean_object* v___y_4232_ = _args[21];
lean_object* v___y_4233_ = _args[22];
lean_object* v___y_4234_ = _args[23];
lean_object* v___y_4235_ = _args[24];
_start:
{
lean_object* v_res_4236_; 
v_res_4236_ = l_Lean_mkCasesOnSameCtor___lam__9(v___x_4211_, v_indName_4212_, v_tail_4213_, v_params_4214_, v_is_4215_, v___x_4216_, v_head_4217_, v_ctors_4218_, v_numIndices_4219_, v___x_4220_, v___x_4221_, v_val_4222_, v_declName_4223_, v_levelParams_4224_, v_numParams_4225_, v___x_4226_, v_t_4227_, v___x_4228_, v_x1_4229_, v_x_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4233_);
lean_dec(v___y_4232_);
lean_dec_ref(v___y_4231_);
lean_dec_ref(v_x_4230_);
return v_res_4236_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10(lean_object* v___x_4237_, lean_object* v_indName_4238_, lean_object* v_tail_4239_, lean_object* v_params_4240_, lean_object* v_head_4241_, lean_object* v_ctors_4242_, lean_object* v_numIndices_4243_, lean_object* v___x_4244_, lean_object* v___x_4245_, lean_object* v_val_4246_, lean_object* v_declName_4247_, lean_object* v_levelParams_4248_, lean_object* v_numParams_4249_, lean_object* v___x_4250_, lean_object* v_is_4251_, lean_object* v_t_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_){
_start:
{
lean_object* v___x_4258_; lean_object* v___x_4259_; lean_object* v___f_4260_; uint8_t v___x_4261_; lean_object* v___x_4262_; 
v___x_4258_ = lean_unsigned_to_nat(1u);
v___x_4259_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0, &l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0_once, _init_l_Lean_mkCasesOnSameCtorHet___lam__6___closed__0);
lean_inc_ref(v_t_4252_);
v___f_4260_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__9___boxed), 25, 18);
lean_closure_set(v___f_4260_, 0, v___x_4237_);
lean_closure_set(v___f_4260_, 1, v_indName_4238_);
lean_closure_set(v___f_4260_, 2, v_tail_4239_);
lean_closure_set(v___f_4260_, 3, v_params_4240_);
lean_closure_set(v___f_4260_, 4, v_is_4251_);
lean_closure_set(v___f_4260_, 5, v___x_4258_);
lean_closure_set(v___f_4260_, 6, v_head_4241_);
lean_closure_set(v___f_4260_, 7, v_ctors_4242_);
lean_closure_set(v___f_4260_, 8, v_numIndices_4243_);
lean_closure_set(v___f_4260_, 9, v___x_4244_);
lean_closure_set(v___f_4260_, 10, v___x_4245_);
lean_closure_set(v___f_4260_, 11, v_val_4246_);
lean_closure_set(v___f_4260_, 12, v_declName_4247_);
lean_closure_set(v___f_4260_, 13, v_levelParams_4248_);
lean_closure_set(v___f_4260_, 14, v_numParams_4249_);
lean_closure_set(v___f_4260_, 15, v___x_4250_);
lean_closure_set(v___f_4260_, 16, v_t_4252_);
lean_closure_set(v___f_4260_, 17, v___x_4259_);
v___x_4261_ = 0;
v___x_4262_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_t_4252_, v___x_4259_, v___f_4260_, v___x_4261_, v___x_4261_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_);
return v___x_4262_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__10___boxed(lean_object** _args){
lean_object* v___x_4263_ = _args[0];
lean_object* v_indName_4264_ = _args[1];
lean_object* v_tail_4265_ = _args[2];
lean_object* v_params_4266_ = _args[3];
lean_object* v_head_4267_ = _args[4];
lean_object* v_ctors_4268_ = _args[5];
lean_object* v_numIndices_4269_ = _args[6];
lean_object* v___x_4270_ = _args[7];
lean_object* v___x_4271_ = _args[8];
lean_object* v_val_4272_ = _args[9];
lean_object* v_declName_4273_ = _args[10];
lean_object* v_levelParams_4274_ = _args[11];
lean_object* v_numParams_4275_ = _args[12];
lean_object* v___x_4276_ = _args[13];
lean_object* v_is_4277_ = _args[14];
lean_object* v_t_4278_ = _args[15];
lean_object* v___y_4279_ = _args[16];
lean_object* v___y_4280_ = _args[17];
lean_object* v___y_4281_ = _args[18];
lean_object* v___y_4282_ = _args[19];
lean_object* v___y_4283_ = _args[20];
_start:
{
lean_object* v_res_4284_; 
v_res_4284_ = l_Lean_mkCasesOnSameCtor___lam__10(v___x_4263_, v_indName_4264_, v_tail_4265_, v_params_4266_, v_head_4267_, v_ctors_4268_, v_numIndices_4269_, v___x_4270_, v___x_4271_, v_val_4272_, v_declName_4273_, v_levelParams_4274_, v_numParams_4275_, v___x_4276_, v_is_4277_, v_t_4278_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_);
lean_dec(v___y_4282_);
lean_dec_ref(v___y_4281_);
lean_dec(v___y_4280_);
lean_dec_ref(v___y_4279_);
return v_res_4284_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11(lean_object* v___x_4285_, lean_object* v_indName_4286_, lean_object* v_tail_4287_, lean_object* v_head_4288_, lean_object* v_ctors_4289_, lean_object* v_numIndices_4290_, lean_object* v___x_4291_, lean_object* v___x_4292_, lean_object* v_val_4293_, lean_object* v_declName_4294_, lean_object* v_levelParams_4295_, lean_object* v_numParams_4296_, lean_object* v_params_4297_, lean_object* v_t_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_){
_start:
{
lean_object* v___x_4304_; lean_object* v___f_4305_; lean_object* v___x_4306_; uint8_t v___x_4307_; lean_object* v___x_4308_; 
v___x_4304_ = l_Lean_Expr_bindingBody_x21(v_t_4298_);
lean_inc_ref(v___x_4304_);
lean_inc(v_numIndices_4290_);
v___f_4305_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__10___boxed), 21, 14);
lean_closure_set(v___f_4305_, 0, v___x_4285_);
lean_closure_set(v___f_4305_, 1, v_indName_4286_);
lean_closure_set(v___f_4305_, 2, v_tail_4287_);
lean_closure_set(v___f_4305_, 3, v_params_4297_);
lean_closure_set(v___f_4305_, 4, v_head_4288_);
lean_closure_set(v___f_4305_, 5, v_ctors_4289_);
lean_closure_set(v___f_4305_, 6, v_numIndices_4290_);
lean_closure_set(v___f_4305_, 7, v___x_4291_);
lean_closure_set(v___f_4305_, 8, v___x_4292_);
lean_closure_set(v___f_4305_, 9, v_val_4293_);
lean_closure_set(v___f_4305_, 10, v_declName_4294_);
lean_closure_set(v___f_4305_, 11, v_levelParams_4295_);
lean_closure_set(v___f_4305_, 12, v_numParams_4296_);
lean_closure_set(v___f_4305_, 13, v___x_4304_);
v___x_4306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4306_, 0, v_numIndices_4290_);
v___x_4307_ = 0;
v___x_4308_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v___x_4304_, v___x_4306_, v___f_4305_, v___x_4307_, v___x_4307_, v___y_4299_, v___y_4300_, v___y_4301_, v___y_4302_);
return v___x_4308_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___lam__11___boxed(lean_object** _args){
lean_object* v___x_4309_ = _args[0];
lean_object* v_indName_4310_ = _args[1];
lean_object* v_tail_4311_ = _args[2];
lean_object* v_head_4312_ = _args[3];
lean_object* v_ctors_4313_ = _args[4];
lean_object* v_numIndices_4314_ = _args[5];
lean_object* v___x_4315_ = _args[6];
lean_object* v___x_4316_ = _args[7];
lean_object* v_val_4317_ = _args[8];
lean_object* v_declName_4318_ = _args[9];
lean_object* v_levelParams_4319_ = _args[10];
lean_object* v_numParams_4320_ = _args[11];
lean_object* v_params_4321_ = _args[12];
lean_object* v_t_4322_ = _args[13];
lean_object* v___y_4323_ = _args[14];
lean_object* v___y_4324_ = _args[15];
lean_object* v___y_4325_ = _args[16];
lean_object* v___y_4326_ = _args[17];
lean_object* v___y_4327_ = _args[18];
_start:
{
lean_object* v_res_4328_; 
v_res_4328_ = l_Lean_mkCasesOnSameCtor___lam__11(v___x_4309_, v_indName_4310_, v_tail_4311_, v_head_4312_, v_ctors_4313_, v_numIndices_4314_, v___x_4315_, v___x_4316_, v_val_4317_, v_declName_4318_, v_levelParams_4319_, v_numParams_4320_, v_params_4321_, v_t_4322_, v___y_4323_, v___y_4324_, v___y_4325_, v___y_4326_);
lean_dec(v___y_4326_);
lean_dec_ref(v___y_4325_);
lean_dec(v___y_4324_);
lean_dec_ref(v___y_4323_);
lean_dec_ref(v_t_4322_);
return v_res_4328_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__0(void){
_start:
{
lean_object* v___x_4329_; 
v___x_4329_ = lean_mk_string_unchecked("het", 3, 3);
return v___x_4329_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__1(void){
_start:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; 
v___x_4330_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__0, &l_Lean_mkCasesOnSameCtor___closed__0_once, _init_l_Lean_mkCasesOnSameCtor___closed__0);
v___x_4331_ = l_Lean_Name_mkStr1(v___x_4330_);
return v___x_4331_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__2(void){
_start:
{
lean_object* v___x_4332_; 
v___x_4332_ = lean_mk_string_unchecked("Lean.mkCasesOnSameCtor", 22, 22);
return v___x_4332_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__3(void){
_start:
{
lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; 
v___x_4333_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__2, &l_Lean_mkCasesOnSameCtorHet___closed__2_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__2);
v___x_4334_ = lean_unsigned_to_nat(58u);
v___x_4335_ = lean_unsigned_to_nat(142u);
v___x_4336_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__2, &l_Lean_mkCasesOnSameCtor___closed__2_once, _init_l_Lean_mkCasesOnSameCtor___closed__2);
v___x_4337_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__0, &l_Lean_mkCasesOnSameCtorHet___closed__0_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__0);
v___x_4338_ = l_mkPanicMessageWithDecl(v___x_4337_, v___x_4336_, v___x_4335_, v___x_4334_, v___x_4333_);
return v___x_4338_;
}
}
static lean_object* _init_l_Lean_mkCasesOnSameCtor___closed__4(void){
_start:
{
lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
v___x_4339_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__4, &l_Lean_mkCasesOnSameCtorHet___closed__4_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__4);
v___x_4340_ = lean_unsigned_to_nat(60u);
v___x_4341_ = lean_unsigned_to_nat(136u);
v___x_4342_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__2, &l_Lean_mkCasesOnSameCtor___closed__2_once, _init_l_Lean_mkCasesOnSameCtor___closed__2);
v___x_4343_ = lean_obj_once(&l_Lean_mkCasesOnSameCtorHet___closed__0, &l_Lean_mkCasesOnSameCtorHet___closed__0_once, _init_l_Lean_mkCasesOnSameCtorHet___closed__0);
v___x_4344_ = l_mkPanicMessageWithDecl(v___x_4343_, v___x_4342_, v___x_4341_, v___x_4340_, v___x_4339_);
return v___x_4344_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor(lean_object* v_declName_4345_, lean_object* v_indName_4346_, lean_object* v_a_4347_, lean_object* v_a_4348_, lean_object* v_a_4349_, lean_object* v_a_4350_){
_start:
{
lean_object* v___x_4352_; 
lean_inc(v_indName_4346_);
v___x_4352_ = l_Lean_getConstInfo___at___00Lean_mkCasesOnSameCtorHet_spec__0(v_indName_4346_, v_a_4347_, v_a_4348_, v_a_4349_, v_a_4350_);
if (lean_obj_tag(v___x_4352_) == 0)
{
lean_object* v_a_4353_; 
v_a_4353_ = lean_ctor_get(v___x_4352_, 0);
lean_inc(v_a_4353_);
lean_dec_ref(v___x_4352_);
if (lean_obj_tag(v_a_4353_) == 5)
{
lean_object* v_val_4354_; lean_object* v___x_4355_; lean_object* v___x_4356_; lean_object* v___x_4357_; 
v_val_4354_ = lean_ctor_get(v_a_4353_, 0);
lean_inc_ref(v_val_4354_);
lean_dec_ref(v_a_4353_);
v___x_4355_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__1, &l_Lean_mkCasesOnSameCtor___closed__1_once, _init_l_Lean_mkCasesOnSameCtor___closed__1);
lean_inc(v_declName_4345_);
v___x_4356_ = l_Lean_Name_append(v_declName_4345_, v___x_4355_);
lean_inc(v_indName_4346_);
lean_inc(v___x_4356_);
v___x_4357_ = l_Lean_mkCasesOnSameCtorHet(v___x_4356_, v_indName_4346_, v_a_4347_, v_a_4348_, v_a_4349_, v_a_4350_);
if (lean_obj_tag(v___x_4357_) == 0)
{
lean_object* v___x_4359_; uint8_t v_isShared_4360_; uint8_t v_isSharedCheck_4390_; 
v_isSharedCheck_4390_ = !lean_is_exclusive(v___x_4357_);
if (v_isSharedCheck_4390_ == 0)
{
lean_object* v_unused_4391_; 
v_unused_4391_ = lean_ctor_get(v___x_4357_, 0);
lean_dec(v_unused_4391_);
v___x_4359_ = v___x_4357_;
v_isShared_4360_ = v_isSharedCheck_4390_;
goto v_resetjp_4358_;
}
else
{
lean_dec(v___x_4357_);
v___x_4359_ = lean_box(0);
v_isShared_4360_ = v_isSharedCheck_4390_;
goto v_resetjp_4358_;
}
v_resetjp_4358_:
{
lean_object* v___x_4361_; lean_object* v___x_4362_; 
lean_inc(v_indName_4346_);
v___x_4361_ = l_Lean_mkCasesOnName(v_indName_4346_);
v___x_4362_ = l_Lean_getConstVal___at___00Lean_mkCasesOnSameCtorHet_spec__1(v___x_4361_, v_a_4347_, v_a_4348_, v_a_4349_, v_a_4350_);
if (lean_obj_tag(v___x_4362_) == 0)
{
lean_object* v_a_4363_; lean_object* v_levelParams_4364_; lean_object* v_type_4365_; lean_object* v___x_4366_; lean_object* v___x_4367_; 
v_a_4363_ = lean_ctor_get(v___x_4362_, 0);
lean_inc(v_a_4363_);
lean_dec_ref(v___x_4362_);
v_levelParams_4364_ = lean_ctor_get(v_a_4363_, 1);
lean_inc_n(v_levelParams_4364_, 2);
v_type_4365_ = lean_ctor_get(v_a_4363_, 2);
lean_inc_ref(v_type_4365_);
lean_dec(v_a_4363_);
v___x_4366_ = lean_box(0);
v___x_4367_ = l_List_mapTR_loop___at___00Lean_mkCasesOnSameCtorHet_spec__2(v_levelParams_4364_, v___x_4366_);
if (lean_obj_tag(v___x_4367_) == 1)
{
lean_object* v_head_4368_; lean_object* v_tail_4369_; lean_object* v_numParams_4370_; lean_object* v_numIndices_4371_; lean_object* v_ctors_4372_; lean_object* v___x_4373_; lean_object* v___f_4374_; lean_object* v___x_4376_; 
v_head_4368_ = lean_ctor_get(v___x_4367_, 0);
lean_inc(v_head_4368_);
v_tail_4369_ = lean_ctor_get(v___x_4367_, 1);
lean_inc(v_tail_4369_);
v_numParams_4370_ = lean_ctor_get(v_val_4354_, 1);
lean_inc_n(v_numParams_4370_, 2);
v_numIndices_4371_ = lean_ctor_get(v_val_4354_, 2);
lean_inc(v_numIndices_4371_);
v_ctors_4372_ = lean_ctor_get(v_val_4354_, 4);
lean_inc(v_ctors_4372_);
v___x_4373_ = l_Lean_instInhabitedExpr;
v___f_4374_ = lean_alloc_closure((void*)(l_Lean_mkCasesOnSameCtor___lam__11___boxed), 19, 12);
lean_closure_set(v___f_4374_, 0, v___x_4373_);
lean_closure_set(v___f_4374_, 1, v_indName_4346_);
lean_closure_set(v___f_4374_, 2, v_tail_4369_);
lean_closure_set(v___f_4374_, 3, v_head_4368_);
lean_closure_set(v___f_4374_, 4, v_ctors_4372_);
lean_closure_set(v___f_4374_, 5, v_numIndices_4371_);
lean_closure_set(v___f_4374_, 6, v___x_4356_);
lean_closure_set(v___f_4374_, 7, v___x_4367_);
lean_closure_set(v___f_4374_, 8, v_val_4354_);
lean_closure_set(v___f_4374_, 9, v_declName_4345_);
lean_closure_set(v___f_4374_, 10, v_levelParams_4364_);
lean_closure_set(v___f_4374_, 11, v_numParams_4370_);
if (v_isShared_4360_ == 0)
{
lean_ctor_set_tag(v___x_4359_, 1);
lean_ctor_set(v___x_4359_, 0, v_numParams_4370_);
v___x_4376_ = v___x_4359_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4379_; 
v_reuseFailAlloc_4379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4379_, 0, v_numParams_4370_);
v___x_4376_ = v_reuseFailAlloc_4379_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
uint8_t v___x_4377_; lean_object* v___x_4378_; 
v___x_4377_ = 0;
v___x_4378_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_mkCasesOnSameCtorHet_spec__9___redArg(v_type_4365_, v___x_4376_, v___f_4374_, v___x_4377_, v___x_4377_, v_a_4347_, v_a_4348_, v_a_4349_, v_a_4350_);
return v___x_4378_;
}
}
else
{
lean_object* v___x_4380_; lean_object* v___x_4381_; 
lean_dec(v___x_4367_);
lean_dec_ref(v_type_4365_);
lean_dec(v_levelParams_4364_);
lean_del_object(v___x_4359_);
lean_dec(v___x_4356_);
lean_dec_ref(v_val_4354_);
lean_dec(v_indName_4346_);
lean_dec(v_declName_4345_);
v___x_4380_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__3, &l_Lean_mkCasesOnSameCtor___closed__3_once, _init_l_Lean_mkCasesOnSameCtor___closed__3);
v___x_4381_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_4380_, v_a_4347_, v_a_4348_, v_a_4349_, v_a_4350_);
return v___x_4381_;
}
}
else
{
lean_object* v_a_4382_; lean_object* v___x_4384_; uint8_t v_isShared_4385_; uint8_t v_isSharedCheck_4389_; 
lean_del_object(v___x_4359_);
lean_dec(v___x_4356_);
lean_dec_ref(v_val_4354_);
lean_dec(v_indName_4346_);
lean_dec(v_declName_4345_);
v_a_4382_ = lean_ctor_get(v___x_4362_, 0);
v_isSharedCheck_4389_ = !lean_is_exclusive(v___x_4362_);
if (v_isSharedCheck_4389_ == 0)
{
v___x_4384_ = v___x_4362_;
v_isShared_4385_ = v_isSharedCheck_4389_;
goto v_resetjp_4383_;
}
else
{
lean_inc(v_a_4382_);
lean_dec(v___x_4362_);
v___x_4384_ = lean_box(0);
v_isShared_4385_ = v_isSharedCheck_4389_;
goto v_resetjp_4383_;
}
v_resetjp_4383_:
{
lean_object* v___x_4387_; 
if (v_isShared_4385_ == 0)
{
v___x_4387_ = v___x_4384_;
goto v_reusejp_4386_;
}
else
{
lean_object* v_reuseFailAlloc_4388_; 
v_reuseFailAlloc_4388_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4388_, 0, v_a_4382_);
v___x_4387_ = v_reuseFailAlloc_4388_;
goto v_reusejp_4386_;
}
v_reusejp_4386_:
{
return v___x_4387_;
}
}
}
}
}
else
{
lean_dec(v___x_4356_);
lean_dec_ref(v_val_4354_);
lean_dec(v_indName_4346_);
lean_dec(v_declName_4345_);
return v___x_4357_;
}
}
else
{
lean_object* v___x_4392_; lean_object* v___x_4393_; 
lean_dec(v_a_4353_);
lean_dec(v_indName_4346_);
lean_dec(v_declName_4345_);
v___x_4392_ = lean_obj_once(&l_Lean_mkCasesOnSameCtor___closed__4, &l_Lean_mkCasesOnSameCtor___closed__4_once, _init_l_Lean_mkCasesOnSameCtor___closed__4);
v___x_4393_ = l_panic___at___00Lean_mkCasesOnSameCtorHet_spec__14(v___x_4392_, v_a_4347_, v_a_4348_, v_a_4349_, v_a_4350_);
return v___x_4393_;
}
}
else
{
lean_object* v_a_4394_; lean_object* v___x_4396_; uint8_t v_isShared_4397_; uint8_t v_isSharedCheck_4401_; 
lean_dec(v_indName_4346_);
lean_dec(v_declName_4345_);
v_a_4394_ = lean_ctor_get(v___x_4352_, 0);
v_isSharedCheck_4401_ = !lean_is_exclusive(v___x_4352_);
if (v_isSharedCheck_4401_ == 0)
{
v___x_4396_ = v___x_4352_;
v_isShared_4397_ = v_isSharedCheck_4401_;
goto v_resetjp_4395_;
}
else
{
lean_inc(v_a_4394_);
lean_dec(v___x_4352_);
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
LEAN_EXPORT lean_object* l_Lean_mkCasesOnSameCtor___boxed(lean_object* v_declName_4402_, lean_object* v_indName_4403_, lean_object* v_a_4404_, lean_object* v_a_4405_, lean_object* v_a_4406_, lean_object* v_a_4407_, lean_object* v_a_4408_){
_start:
{
lean_object* v_res_4409_; 
v_res_4409_ = l_Lean_mkCasesOnSameCtor(v_declName_4402_, v_indName_4403_, v_a_4404_, v_a_4405_, v_a_4406_, v_a_4407_);
lean_dec(v_a_4407_);
lean_dec_ref(v_a_4406_);
lean_dec(v_a_4405_);
lean_dec_ref(v_a_4404_);
return v_res_4409_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0(lean_object* v_tail_4410_, lean_object* v_params_4411_, lean_object* v_motive_4412_, lean_object* v_as_4413_, lean_object* v_i_4414_, lean_object* v_j_4415_, lean_object* v_inv_4416_, lean_object* v_bs_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_, lean_object* v___y_4421_){
_start:
{
lean_object* v___x_4423_; 
v___x_4423_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___redArg(v_tail_4410_, v_params_4411_, v_motive_4412_, v_as_4413_, v_i_4414_, v_j_4415_, v_bs_4417_, v___y_4418_, v___y_4419_, v___y_4420_, v___y_4421_);
return v___x_4423_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0___boxed(lean_object* v_tail_4424_, lean_object* v_params_4425_, lean_object* v_motive_4426_, lean_object* v_as_4427_, lean_object* v_i_4428_, lean_object* v_j_4429_, lean_object* v_inv_4430_, lean_object* v_bs_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_){
_start:
{
lean_object* v_res_4437_; 
v_res_4437_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__0(v_tail_4424_, v_params_4425_, v_motive_4426_, v_as_4427_, v_i_4428_, v_j_4429_, v_inv_4430_, v_bs_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
lean_dec(v___y_4435_);
lean_dec_ref(v___y_4434_);
lean_dec(v___y_4433_);
lean_dec_ref(v___y_4432_);
lean_dec_ref(v_as_4427_);
lean_dec_ref(v_params_4425_);
return v_res_4437_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2(lean_object* v_tail_4438_, lean_object* v_params_4439_, lean_object* v_a_4440_, lean_object* v_snd_4441_, lean_object* v_alts_4442_, lean_object* v_as_4443_, lean_object* v_i_4444_, lean_object* v_j_4445_, lean_object* v_inv_4446_, lean_object* v_bs_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_){
_start:
{
lean_object* v___x_4453_; 
v___x_4453_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___redArg(v_tail_4438_, v_params_4439_, v_a_4440_, v_snd_4441_, v_alts_4442_, v_as_4443_, v_i_4444_, v_j_4445_, v_bs_4447_, v___y_4448_, v___y_4449_, v___y_4450_, v___y_4451_);
return v___x_4453_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2___boxed(lean_object* v_tail_4454_, lean_object* v_params_4455_, lean_object* v_a_4456_, lean_object* v_snd_4457_, lean_object* v_alts_4458_, lean_object* v_as_4459_, lean_object* v_i_4460_, lean_object* v_j_4461_, lean_object* v_inv_4462_, lean_object* v_bs_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_){
_start:
{
lean_object* v_res_4469_; 
v_res_4469_ = l_Array_mapFinIdxM_map___at___00Lean_mkCasesOnSameCtor_spec__2(v_tail_4454_, v_params_4455_, v_a_4456_, v_snd_4457_, v_alts_4458_, v_as_4459_, v_i_4460_, v_j_4461_, v_inv_4462_, v_bs_4463_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_);
lean_dec(v___y_4467_);
lean_dec_ref(v___y_4466_);
lean_dec(v___y_4465_);
lean_dec_ref(v___y_4464_);
lean_dec_ref(v_as_4459_);
lean_dec_ref(v_params_4455_);
return v_res_4469_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorElim(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_CompletionName(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorElim(uint8_t builtin);
lean_object* initialize_Lean_Elab_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_SameCtorUtils(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Constructions_CasesOnSameCtor(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_CompletionName(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorElim(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_SameCtorUtils(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Constructions_CasesOnSameCtor(builtin);
}
#ifdef __cplusplus
}
#endif
