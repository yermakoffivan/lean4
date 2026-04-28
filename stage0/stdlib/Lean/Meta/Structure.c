// Lean compiler output
// Module: Lean.Meta.Structure
// Imports: public import Lean.AddDecl public import Lean.Meta.AppBuilder import Lean.Structure import Lean.Meta.Transform
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
lean_object* l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_LocalContext_setBinderInfo(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_LocalDecl_binderInfo(lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t lean_is_out_param(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_findAsync_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_AsyncConstantInfo_toConstantInfo(lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getProjectionFnInfo_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isDefEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_isInductiveCore_x3f(lean_object*, lean_object*);
lean_object* l_List_head_x21___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isPropFormerType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_addProjectionFnInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_inferImplicit(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_updateForallBinderInfos(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLambda(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Environment_hasUnsafe(lean_object*, lean_object*);
lean_object* l_Lean_Expr_bindingDomain_x21(lean_object*);
lean_object* lean_expr_consume_type_annotations(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_InductiveVal_numCtors(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshLevelMVarsFor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_getConstInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
uint8_t l_Lean_isStructure(lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__0;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__1;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__2;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__3;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__4;
static lean_once_cell_t l_Lean_Meta_getStructureName___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getStructureName___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__6;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__7;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__8;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__9;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed(lean_object**);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__0;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__1;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__2;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__3;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__4;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0;
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1;
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2;
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3;
static lean_once_cell_t l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4;
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4;
static lean_once_cell_t l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5;
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0;
static lean_once_cell_t l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__0;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__1;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__2;
static lean_once_cell_t l_Lean_Meta_mkProjections___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__0;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__1;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__2;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__3;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__4;
static lean_once_cell_t l_Lean_Meta_mkProjections___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkProjections___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_etaStructReduce___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_etaStructReduce___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1;
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_etaStructReduce___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_etaStructReduce___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0;
static lean_once_cell_t l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1;
static lean_once_cell_t l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2;
static lean_once_cell_t l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
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
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0___boxed(lean_object* v_msgData_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(v_msgData_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(lean_object* v_msg_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_ref_30_; lean_object* v___x_31_; lean_object* v_a_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_40_; 
v_ref_30_ = lean_ctor_get(v___y_27_, 5);
v___x_31_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_getStructureName_spec__0_spec__0(v_msg_24_, v___y_25_, v___y_26_, v___y_27_, v___y_28_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg___boxed(lean_object* v_msg_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
return v_res_47_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__0(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = lean_mk_string_unchecked("`", 1, 1);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; 
v___x_49_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__0, &l_Lean_Meta_getStructureName___closed__0_once, _init_l_Lean_Meta_getStructureName___closed__0);
v___x_50_ = l_Lean_stringToMessageData(v___x_49_);
return v___x_50_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__2(void){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = lean_mk_string_unchecked("` is not a structure", 20, 20);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__3(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__2, &l_Lean_Meta_getStructureName___closed__2_once, _init_l_Lean_Meta_getStructureName___closed__2);
v___x_53_ = l_Lean_stringToMessageData(v___x_52_);
return v___x_53_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__4(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_mk_string_unchecked("expected structure", 18, 18);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_Meta_getStructureName___closed__5(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__4, &l_Lean_Meta_getStructureName___closed__4_once, _init_l_Lean_Meta_getStructureName___closed__4);
v___x_56_ = l_Lean_stringToMessageData(v___x_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName(lean_object* v_struct_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_Expr_getAppFn(v_struct_57_);
if (lean_obj_tag(v___x_63_) == 4)
{
lean_object* v_declName_64_; lean_object* v___x_65_; lean_object* v_env_66_; uint8_t v___x_67_; 
v_declName_64_ = lean_ctor_get(v___x_63_, 0);
lean_inc_n(v_declName_64_, 2);
lean_dec_ref(v___x_63_);
v___x_65_ = lean_st_ref_get(v_a_61_);
v_env_66_ = lean_ctor_get(v___x_65_, 0);
lean_inc_ref(v_env_66_);
lean_dec(v___x_65_);
v___x_67_ = l_Lean_isStructure(v_env_66_, v_declName_64_);
if (v___x_67_ == 0)
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v_a_74_; lean_object* v___x_76_; uint8_t v_isShared_77_; uint8_t v_isSharedCheck_81_; 
v___x_68_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_69_ = l_Lean_MessageData_ofConstName(v_declName_64_, v___x_67_);
v___x_70_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_70_, 0, v___x_68_);
lean_ctor_set(v___x_70_, 1, v___x_69_);
v___x_71_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__3, &l_Lean_Meta_getStructureName___closed__3_once, _init_l_Lean_Meta_getStructureName___closed__3);
v___x_72_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_70_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_72_, v_a_58_, v_a_59_, v_a_60_, v_a_61_);
v_a_74_ = lean_ctor_get(v___x_73_, 0);
v_isSharedCheck_81_ = !lean_is_exclusive(v___x_73_);
if (v_isSharedCheck_81_ == 0)
{
v___x_76_ = v___x_73_;
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
else
{
lean_inc(v_a_74_);
lean_dec(v___x_73_);
v___x_76_ = lean_box(0);
v_isShared_77_ = v_isSharedCheck_81_;
goto v_resetjp_75_;
}
v_resetjp_75_:
{
lean_object* v___x_79_; 
if (v_isShared_77_ == 0)
{
v___x_79_ = v___x_76_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v_a_74_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
else
{
lean_object* v___x_82_; 
v___x_82_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_82_, 0, v_declName_64_);
return v___x_82_;
}
}
else
{
lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec_ref(v___x_63_);
v___x_83_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__5, &l_Lean_Meta_getStructureName___closed__5_once, _init_l_Lean_Meta_getStructureName___closed__5);
v___x_84_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_83_, v_a_58_, v_a_59_, v_a_60_, v_a_61_);
return v___x_84_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getStructureName___boxed(lean_object* v_struct_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_Meta_getStructureName(v_struct_85_, v_a_86_, v_a_87_, v_a_88_, v_a_89_);
lean_dec(v_a_89_);
lean_dec_ref(v_a_88_);
lean_dec(v_a_87_);
lean_dec_ref(v_a_86_);
lean_dec_ref(v_struct_85_);
return v_res_91_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(lean_object* v_00_u03b1_92_, lean_object* v_msg_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___boxed(lean_object* v_00_u03b1_100_, lean_object* v_msg_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0(v_00_u03b1_100_, v_msg_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v___y_103_);
lean_dec_ref(v___y_102_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(lean_object* v_name_108_, lean_object* v_levelParams_109_, lean_object* v_type_110_, lean_object* v_value_111_, lean_object* v_hints_112_, lean_object* v___y_113_){
_start:
{
lean_object* v___x_115_; uint8_t v___y_117_; uint8_t v___y_124_; lean_object* v_env_127_; uint8_t v___x_128_; 
v___x_115_ = lean_st_ref_get(v___y_113_);
v_env_127_ = lean_ctor_get(v___x_115_, 0);
lean_inc_ref_n(v_env_127_, 2);
lean_dec(v___x_115_);
v___x_128_ = l_Lean_Environment_hasUnsafe(v_env_127_, v_type_110_);
if (v___x_128_ == 0)
{
uint8_t v___x_129_; 
v___x_129_ = l_Lean_Environment_hasUnsafe(v_env_127_, v_value_111_);
v___y_124_ = v___x_129_;
goto v___jp_123_;
}
else
{
lean_dec_ref(v_env_127_);
v___y_124_ = v___x_128_;
goto v___jp_123_;
}
v___jp_116_:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
lean_inc(v_name_108_);
v___x_118_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_118_, 0, v_name_108_);
lean_ctor_set(v___x_118_, 1, v_levelParams_109_);
lean_ctor_set(v___x_118_, 2, v_type_110_);
v___x_119_ = lean_box(0);
v___x_120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_120_, 0, v_name_108_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_121_, 0, v___x_118_);
lean_ctor_set(v___x_121_, 1, v_value_111_);
lean_ctor_set(v___x_121_, 2, v_hints_112_);
lean_ctor_set(v___x_121_, 3, v___x_120_);
lean_ctor_set_uint8(v___x_121_, sizeof(void*)*4, v___y_117_);
v___x_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_122_, 0, v___x_121_);
return v___x_122_;
}
v___jp_123_:
{
if (v___y_124_ == 0)
{
uint8_t v___x_125_; 
v___x_125_ = 1;
v___y_117_ = v___x_125_;
goto v___jp_116_;
}
else
{
uint8_t v___x_126_; 
v___x_126_ = 0;
v___y_117_ = v___x_126_;
goto v___jp_116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg___boxed(lean_object* v_name_130_, lean_object* v_levelParams_131_, lean_object* v_type_132_, lean_object* v_value_133_, lean_object* v_hints_134_, lean_object* v___y_135_, lean_object* v___y_136_){
_start:
{
lean_object* v_res_137_; 
v_res_137_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_name_130_, v_levelParams_131_, v_type_132_, v_value_133_, v_hints_134_, v___y_135_);
lean_dec(v___y_135_);
return v_res_137_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(lean_object* v_name_138_, lean_object* v_levelParams_139_, lean_object* v_type_140_, lean_object* v_value_141_, lean_object* v_hints_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_name_138_, v_levelParams_139_, v_type_140_, v_value_141_, v_hints_142_, v___y_146_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___boxed(lean_object* v_name_149_, lean_object* v_levelParams_150_, lean_object* v_type_151_, lean_object* v_value_152_, lean_object* v_hints_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4(v_name_149_, v_levelParams_150_, v_type_151_, v_value_152_, v_hints_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(lean_object* v_k_160_, lean_object* v_b_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_167_; 
lean_inc(v___y_165_);
lean_inc_ref(v___y_164_);
lean_inc(v___y_163_);
lean_inc_ref(v___y_162_);
v___x_167_ = lean_apply_6(v_k_160_, v_b_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, lean_box(0));
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed(lean_object* v_k_168_, lean_object* v_b_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0(v_k_168_, v_b_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(lean_object* v_name_176_, uint8_t v_bi_177_, lean_object* v_type_178_, lean_object* v_k_179_, uint8_t v_kind_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v___f_186_; lean_object* v___x_187_; 
v___f_186_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_186_, 0, v_k_179_);
v___x_187_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_176_, v_bi_177_, v_type_178_, v___f_186_, v_kind_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_);
if (lean_obj_tag(v___x_187_) == 0)
{
lean_object* v_a_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_195_; 
v_a_188_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_195_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_195_ == 0)
{
v___x_190_ = v___x_187_;
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_a_188_);
lean_dec(v___x_187_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_195_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___x_193_; 
if (v_isShared_191_ == 0)
{
v___x_193_ = v___x_190_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_194_; 
v_reuseFailAlloc_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_194_, 0, v_a_188_);
v___x_193_ = v_reuseFailAlloc_194_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
return v___x_193_;
}
}
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
v_a_196_ = lean_ctor_get(v___x_187_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_187_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_187_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_187_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg___boxed(lean_object* v_name_204_, lean_object* v_bi_205_, lean_object* v_type_206_, lean_object* v_k_207_, lean_object* v_kind_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_){
_start:
{
uint8_t v_bi_boxed_214_; uint8_t v_kind_boxed_215_; lean_object* v_res_216_; 
v_bi_boxed_214_ = lean_unbox(v_bi_205_);
v_kind_boxed_215_ = lean_unbox(v_kind_208_);
v_res_216_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v_name_204_, v_bi_boxed_214_, v_type_206_, v_k_207_, v_kind_boxed_215_, v___y_209_, v___y_210_, v___y_211_, v___y_212_);
lean_dec(v___y_212_);
lean_dec_ref(v___y_211_);
lean_dec(v___y_210_);
lean_dec_ref(v___y_209_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(lean_object* v_00_u03b1_217_, lean_object* v_name_218_, uint8_t v_bi_219_, lean_object* v_type_220_, lean_object* v_k_221_, uint8_t v_kind_222_, lean_object* v___y_223_, lean_object* v___y_224_, lean_object* v___y_225_, lean_object* v___y_226_){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v_name_218_, v_bi_219_, v_type_220_, v_k_221_, v_kind_222_, v___y_223_, v___y_224_, v___y_225_, v___y_226_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___boxed(lean_object* v_00_u03b1_229_, lean_object* v_name_230_, lean_object* v_bi_231_, lean_object* v_type_232_, lean_object* v_k_233_, lean_object* v_kind_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
uint8_t v_bi_boxed_240_; uint8_t v_kind_boxed_241_; lean_object* v_res_242_; 
v_bi_boxed_240_ = lean_unbox(v_bi_231_);
v_kind_boxed_241_ = lean_unbox(v_kind_234_);
v_res_242_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9(v_00_u03b1_229_, v_name_230_, v_bi_boxed_240_, v_type_232_, v_k_233_, v_kind_boxed_241_, v___y_235_, v___y_236_, v___y_237_, v___y_238_);
lean_dec(v___y_238_);
lean_dec_ref(v___y_237_);
lean_dec(v___y_236_);
lean_dec_ref(v___y_235_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(lean_object* v_k_243_, lean_object* v_b_244_, lean_object* v_c_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_){
_start:
{
lean_object* v___x_251_; 
lean_inc(v___y_249_);
lean_inc_ref(v___y_248_);
lean_inc(v___y_247_);
lean_inc_ref(v___y_246_);
v___x_251_ = lean_apply_7(v_k_243_, v_b_244_, v_c_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, lean_box(0));
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed(lean_object* v_k_252_, lean_object* v_b_253_, lean_object* v_c_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0(v_k_252_, v_b_253_, v_c_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec(v___y_256_);
lean_dec_ref(v___y_255_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(lean_object* v_type_261_, lean_object* v_maxFVars_x3f_262_, lean_object* v_k_263_, uint8_t v_cleanupAnnotations_264_, uint8_t v_whnfType_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
lean_object* v___f_271_; lean_object* v___x_272_; 
v___f_271_ = lean_alloc_closure((void*)(l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_271_, 0, v_k_263_);
v___x_272_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_261_, v_maxFVars_x3f_262_, v___f_271_, v_cleanupAnnotations_264_, v_whnfType_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_280_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_280_ == 0)
{
v___x_275_ = v___x_272_;
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_280_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_278_; 
if (v_isShared_276_ == 0)
{
v___x_278_ = v___x_275_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_a_273_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
else
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
v_a_281_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_272_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_272_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg___boxed(lean_object* v_type_289_, lean_object* v_maxFVars_x3f_290_, lean_object* v_k_291_, lean_object* v_cleanupAnnotations_292_, lean_object* v_whnfType_293_, lean_object* v___y_294_, lean_object* v___y_295_, lean_object* v___y_296_, lean_object* v___y_297_, lean_object* v___y_298_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_299_; uint8_t v_whnfType_boxed_300_; lean_object* v_res_301_; 
v_cleanupAnnotations_boxed_299_ = lean_unbox(v_cleanupAnnotations_292_);
v_whnfType_boxed_300_ = lean_unbox(v_whnfType_293_);
v_res_301_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_289_, v_maxFVars_x3f_290_, v_k_291_, v_cleanupAnnotations_boxed_299_, v_whnfType_boxed_300_, v___y_294_, v___y_295_, v___y_296_, v___y_297_);
lean_dec(v___y_297_);
lean_dec_ref(v___y_296_);
lean_dec(v___y_295_);
lean_dec_ref(v___y_294_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(lean_object* v_00_u03b1_302_, lean_object* v_type_303_, lean_object* v_maxFVars_x3f_304_, lean_object* v_k_305_, uint8_t v_cleanupAnnotations_306_, uint8_t v_whnfType_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_303_, v_maxFVars_x3f_304_, v_k_305_, v_cleanupAnnotations_306_, v_whnfType_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___boxed(lean_object* v_00_u03b1_314_, lean_object* v_type_315_, lean_object* v_maxFVars_x3f_316_, lean_object* v_k_317_, lean_object* v_cleanupAnnotations_318_, lean_object* v_whnfType_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_325_; uint8_t v_whnfType_boxed_326_; lean_object* v_res_327_; 
v_cleanupAnnotations_boxed_325_ = lean_unbox(v_cleanupAnnotations_318_);
v_whnfType_boxed_326_ = lean_unbox(v_whnfType_319_);
v_res_327_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10(v_00_u03b1_314_, v_type_315_, v_maxFVars_x3f_316_, v_k_317_, v_cleanupAnnotations_boxed_325_, v_whnfType_boxed_326_, v___y_320_, v___y_321_, v___y_322_, v___y_323_);
lean_dec(v___y_323_);
lean_dec_ref(v___y_322_);
lean_dec(v___y_321_);
lean_dec_ref(v___y_320_);
return v_res_327_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(lean_object* v_lctx_328_, lean_object* v_localInsts_329_, lean_object* v_x_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_){
_start:
{
lean_object* v___x_336_; 
v___x_336_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_328_, v_localInsts_329_, v_x_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_);
if (lean_obj_tag(v___x_336_) == 0)
{
lean_object* v_a_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_344_; 
v_a_337_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_344_ == 0)
{
v___x_339_ = v___x_336_;
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_a_337_);
lean_dec(v___x_336_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_344_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_342_; 
if (v_isShared_340_ == 0)
{
v___x_342_ = v___x_339_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v_a_337_);
v___x_342_ = v_reuseFailAlloc_343_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
return v___x_342_;
}
}
}
else
{
lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
v_a_345_ = lean_ctor_get(v___x_336_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_336_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_336_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_336_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_350_; 
if (v_isShared_348_ == 0)
{
v___x_350_ = v___x_347_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_351_; 
v_reuseFailAlloc_351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_351_, 0, v_a_345_);
v___x_350_ = v_reuseFailAlloc_351_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
return v___x_350_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg___boxed(lean_object* v_lctx_353_, lean_object* v_localInsts_354_, lean_object* v_x_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v_lctx_353_, v_localInsts_354_, v_x_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(lean_object* v_00_u03b1_362_, lean_object* v_lctx_363_, lean_object* v_localInsts_364_, lean_object* v_x_365_, lean_object* v___y_366_, lean_object* v___y_367_, lean_object* v___y_368_, lean_object* v___y_369_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v_lctx_363_, v_localInsts_364_, v_x_365_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___boxed(lean_object* v_00_u03b1_372_, lean_object* v_lctx_373_, lean_object* v_localInsts_374_, lean_object* v_x_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11(v_00_u03b1_372_, v_lctx_373_, v_localInsts_374_, v_x_375_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
lean_dec(v___y_379_);
lean_dec_ref(v___y_378_);
lean_dec(v___y_377_);
lean_dec_ref(v___y_376_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(lean_object* v___y_382_, uint8_t v_isExporting_383_, lean_object* v___x_384_, lean_object* v___y_385_, lean_object* v___x_386_, lean_object* v_a_x3f_387_){
_start:
{
lean_object* v___x_389_; lean_object* v_env_390_; lean_object* v_nextMacroScope_391_; lean_object* v_ngen_392_; lean_object* v_auxDeclNGen_393_; lean_object* v_traceState_394_; lean_object* v_messages_395_; lean_object* v_infoState_396_; lean_object* v_snapshotTasks_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_423_; 
v___x_389_ = lean_st_ref_take(v___y_382_);
v_env_390_ = lean_ctor_get(v___x_389_, 0);
v_nextMacroScope_391_ = lean_ctor_get(v___x_389_, 1);
v_ngen_392_ = lean_ctor_get(v___x_389_, 2);
v_auxDeclNGen_393_ = lean_ctor_get(v___x_389_, 3);
v_traceState_394_ = lean_ctor_get(v___x_389_, 4);
v_messages_395_ = lean_ctor_get(v___x_389_, 6);
v_infoState_396_ = lean_ctor_get(v___x_389_, 7);
v_snapshotTasks_397_ = lean_ctor_get(v___x_389_, 8);
v_isSharedCheck_423_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_423_ == 0)
{
lean_object* v_unused_424_; 
v_unused_424_ = lean_ctor_get(v___x_389_, 5);
lean_dec(v_unused_424_);
v___x_399_ = v___x_389_;
v_isShared_400_ = v_isSharedCheck_423_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_snapshotTasks_397_);
lean_inc(v_infoState_396_);
lean_inc(v_messages_395_);
lean_inc(v_traceState_394_);
lean_inc(v_auxDeclNGen_393_);
lean_inc(v_ngen_392_);
lean_inc(v_nextMacroScope_391_);
lean_inc(v_env_390_);
lean_dec(v___x_389_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_423_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_401_; lean_object* v___x_403_; 
v___x_401_ = l_Lean_Environment_setExporting(v_env_390_, v_isExporting_383_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 5, v___x_384_);
lean_ctor_set(v___x_399_, 0, v___x_401_);
v___x_403_ = v___x_399_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_422_; 
v_reuseFailAlloc_422_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_422_, 0, v___x_401_);
lean_ctor_set(v_reuseFailAlloc_422_, 1, v_nextMacroScope_391_);
lean_ctor_set(v_reuseFailAlloc_422_, 2, v_ngen_392_);
lean_ctor_set(v_reuseFailAlloc_422_, 3, v_auxDeclNGen_393_);
lean_ctor_set(v_reuseFailAlloc_422_, 4, v_traceState_394_);
lean_ctor_set(v_reuseFailAlloc_422_, 5, v___x_384_);
lean_ctor_set(v_reuseFailAlloc_422_, 6, v_messages_395_);
lean_ctor_set(v_reuseFailAlloc_422_, 7, v_infoState_396_);
lean_ctor_set(v_reuseFailAlloc_422_, 8, v_snapshotTasks_397_);
v___x_403_ = v_reuseFailAlloc_422_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v_mctx_407_; lean_object* v_zetaDeltaFVarIds_408_; lean_object* v_postponed_409_; lean_object* v_diag_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_420_; 
v___x_404_ = lean_st_ref_set(v___y_382_, v___x_403_);
v___x_405_ = lean_st_ref_get(v___y_382_);
lean_dec(v___x_405_);
v___x_406_ = lean_st_ref_take(v___y_385_);
v_mctx_407_ = lean_ctor_get(v___x_406_, 0);
v_zetaDeltaFVarIds_408_ = lean_ctor_get(v___x_406_, 2);
v_postponed_409_ = lean_ctor_get(v___x_406_, 3);
v_diag_410_ = lean_ctor_get(v___x_406_, 4);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_406_);
if (v_isSharedCheck_420_ == 0)
{
lean_object* v_unused_421_; 
v_unused_421_ = lean_ctor_get(v___x_406_, 1);
lean_dec(v_unused_421_);
v___x_412_ = v___x_406_;
v_isShared_413_ = v_isSharedCheck_420_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_diag_410_);
lean_inc(v_postponed_409_);
lean_inc(v_zetaDeltaFVarIds_408_);
lean_inc(v_mctx_407_);
lean_dec(v___x_406_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_420_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
lean_ctor_set(v___x_412_, 1, v___x_386_);
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_419_; 
v_reuseFailAlloc_419_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_419_, 0, v_mctx_407_);
lean_ctor_set(v_reuseFailAlloc_419_, 1, v___x_386_);
lean_ctor_set(v_reuseFailAlloc_419_, 2, v_zetaDeltaFVarIds_408_);
lean_ctor_set(v_reuseFailAlloc_419_, 3, v_postponed_409_);
lean_ctor_set(v_reuseFailAlloc_419_, 4, v_diag_410_);
v___x_415_ = v_reuseFailAlloc_419_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_416_ = lean_st_ref_set(v___y_385_, v___x_415_);
v___x_417_ = lean_box(0);
v___x_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
return v___x_418_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0___boxed(lean_object* v___y_425_, lean_object* v_isExporting_426_, lean_object* v___x_427_, lean_object* v___y_428_, lean_object* v___x_429_, lean_object* v_a_x3f_430_, lean_object* v___y_431_){
_start:
{
uint8_t v_isExporting_boxed_432_; lean_object* v_res_433_; 
v_isExporting_boxed_432_ = lean_unbox(v_isExporting_426_);
v_res_433_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_425_, v_isExporting_boxed_432_, v___x_427_, v___y_428_, v___x_429_, v_a_x3f_430_);
lean_dec(v_a_x3f_430_);
lean_dec(v___y_428_);
lean_dec(v___y_425_);
return v_res_433_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_434_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__1(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__0);
v___x_436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_436_, 0, v___x_435_);
return v___x_436_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2(void){
_start:
{
lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_437_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__1);
v___x_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
return v___x_438_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; 
v___x_439_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__1);
v___x_440_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_440_, 0, v___x_439_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
lean_ctor_set(v___x_440_, 2, v___x_439_);
lean_ctor_set(v___x_440_, 3, v___x_439_);
lean_ctor_set(v___x_440_, 4, v___x_439_);
lean_ctor_set(v___x_440_, 5, v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(lean_object* v_x_441_, uint8_t v_isExporting_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_){
_start:
{
lean_object* v___x_448_; lean_object* v_env_449_; uint8_t v_isExporting_450_; lean_object* v___x_451_; lean_object* v_env_452_; lean_object* v_nextMacroScope_453_; lean_object* v_ngen_454_; lean_object* v_auxDeclNGen_455_; lean_object* v_traceState_456_; lean_object* v_messages_457_; lean_object* v_infoState_458_; lean_object* v_snapshotTasks_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_514_; 
v___x_448_ = lean_st_ref_get(v___y_446_);
v_env_449_ = lean_ctor_get(v___x_448_, 0);
lean_inc_ref(v_env_449_);
lean_dec(v___x_448_);
v_isExporting_450_ = lean_ctor_get_uint8(v_env_449_, sizeof(void*)*8);
lean_dec_ref(v_env_449_);
v___x_451_ = lean_st_ref_take(v___y_446_);
v_env_452_ = lean_ctor_get(v___x_451_, 0);
v_nextMacroScope_453_ = lean_ctor_get(v___x_451_, 1);
v_ngen_454_ = lean_ctor_get(v___x_451_, 2);
v_auxDeclNGen_455_ = lean_ctor_get(v___x_451_, 3);
v_traceState_456_ = lean_ctor_get(v___x_451_, 4);
v_messages_457_ = lean_ctor_get(v___x_451_, 6);
v_infoState_458_ = lean_ctor_get(v___x_451_, 7);
v_snapshotTasks_459_ = lean_ctor_get(v___x_451_, 8);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_451_);
if (v_isSharedCheck_514_ == 0)
{
lean_object* v_unused_515_; 
v_unused_515_ = lean_ctor_get(v___x_451_, 5);
lean_dec(v_unused_515_);
v___x_461_ = v___x_451_;
v_isShared_462_ = v_isSharedCheck_514_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_snapshotTasks_459_);
lean_inc(v_infoState_458_);
lean_inc(v_messages_457_);
lean_inc(v_traceState_456_);
lean_inc(v_auxDeclNGen_455_);
lean_inc(v_ngen_454_);
lean_inc(v_nextMacroScope_453_);
lean_inc(v_env_452_);
lean_dec(v___x_451_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_514_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_466_; 
v___x_463_ = l_Lean_Environment_setExporting(v_env_452_, v_isExporting_442_);
v___x_464_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2);
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 5, v___x_464_);
lean_ctor_set(v___x_461_, 0, v___x_463_);
v___x_466_ = v___x_461_;
goto v_reusejp_465_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_463_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_nextMacroScope_453_);
lean_ctor_set(v_reuseFailAlloc_513_, 2, v_ngen_454_);
lean_ctor_set(v_reuseFailAlloc_513_, 3, v_auxDeclNGen_455_);
lean_ctor_set(v_reuseFailAlloc_513_, 4, v_traceState_456_);
lean_ctor_set(v_reuseFailAlloc_513_, 5, v___x_464_);
lean_ctor_set(v_reuseFailAlloc_513_, 6, v_messages_457_);
lean_ctor_set(v_reuseFailAlloc_513_, 7, v_infoState_458_);
lean_ctor_set(v_reuseFailAlloc_513_, 8, v_snapshotTasks_459_);
v___x_466_ = v_reuseFailAlloc_513_;
goto v_reusejp_465_;
}
v_reusejp_465_:
{
lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v_mctx_470_; lean_object* v_zetaDeltaFVarIds_471_; lean_object* v_postponed_472_; lean_object* v_diag_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_511_; 
v___x_467_ = lean_st_ref_set(v___y_446_, v___x_466_);
v___x_468_ = lean_st_ref_get(v___y_446_);
lean_dec(v___x_468_);
v___x_469_ = lean_st_ref_take(v___y_444_);
v_mctx_470_ = lean_ctor_get(v___x_469_, 0);
v_zetaDeltaFVarIds_471_ = lean_ctor_get(v___x_469_, 2);
v_postponed_472_ = lean_ctor_get(v___x_469_, 3);
v_diag_473_ = lean_ctor_get(v___x_469_, 4);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_511_ == 0)
{
lean_object* v_unused_512_; 
v_unused_512_ = lean_ctor_get(v___x_469_, 1);
lean_dec(v_unused_512_);
v___x_475_ = v___x_469_;
v_isShared_476_ = v_isSharedCheck_511_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_diag_473_);
lean_inc(v_postponed_472_);
lean_inc(v_zetaDeltaFVarIds_471_);
lean_inc(v_mctx_470_);
lean_dec(v___x_469_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_511_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v___x_479_; 
v___x_477_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 1, v___x_477_);
v___x_479_ = v___x_475_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_mctx_470_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_510_, 2, v_zetaDeltaFVarIds_471_);
lean_ctor_set(v_reuseFailAlloc_510_, 3, v_postponed_472_);
lean_ctor_set(v_reuseFailAlloc_510_, 4, v_diag_473_);
v___x_479_ = v_reuseFailAlloc_510_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_480_; lean_object* v_r_481_; 
v___x_480_ = lean_st_ref_set(v___y_444_, v___x_479_);
lean_inc(v___y_446_);
lean_inc_ref(v___y_445_);
lean_inc(v___y_444_);
lean_inc_ref(v___y_443_);
v_r_481_ = lean_apply_5(v_x_441_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, lean_box(0));
if (lean_obj_tag(v_r_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_498_; 
v_a_482_ = lean_ctor_get(v_r_481_, 0);
v_isSharedCheck_498_ = !lean_is_exclusive(v_r_481_);
if (v_isSharedCheck_498_ == 0)
{
v___x_484_ = v_r_481_;
v_isShared_485_ = v_isSharedCheck_498_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v_r_481_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_498_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
lean_inc(v_a_482_);
if (v_isShared_485_ == 0)
{
lean_ctor_set_tag(v___x_484_, 1);
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_497_; 
v_reuseFailAlloc_497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_497_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_497_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
lean_object* v___x_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_495_; 
v___x_488_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_446_, v_isExporting_450_, v___x_464_, v___y_444_, v___x_477_, v___x_487_);
lean_dec_ref(v___x_487_);
v_isSharedCheck_495_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_495_ == 0)
{
lean_object* v_unused_496_; 
v_unused_496_ = lean_ctor_get(v___x_488_, 0);
lean_dec(v_unused_496_);
v___x_490_ = v___x_488_;
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
else
{
lean_dec(v___x_488_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_495_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v___x_493_; 
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 0, v_a_482_);
v___x_493_ = v___x_490_;
goto v_reusejp_492_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_a_482_);
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
else
{
lean_object* v_a_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
v_a_499_ = lean_ctor_get(v_r_481_, 0);
lean_inc(v_a_499_);
lean_dec_ref(v_r_481_);
v___x_500_ = lean_box(0);
v___x_501_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___lam__0(v___y_446_, v_isExporting_450_, v___x_464_, v___y_444_, v___x_477_, v___x_500_);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_508_ == 0)
{
lean_object* v_unused_509_; 
v_unused_509_ = lean_ctor_get(v___x_501_, 0);
lean_dec(v_unused_509_);
v___x_503_ = v___x_501_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_dec(v___x_501_);
v___x_503_ = lean_box(0);
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
v_resetjp_502_:
{
lean_object* v___x_506_; 
if (v_isShared_504_ == 0)
{
lean_ctor_set_tag(v___x_503_, 1);
lean_ctor_set(v___x_503_, 0, v_a_499_);
v___x_506_ = v___x_503_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_507_; 
v_reuseFailAlloc_507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_507_, 0, v_a_499_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___boxed(lean_object* v_x_516_, lean_object* v_isExporting_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
uint8_t v_isExporting_boxed_523_; lean_object* v_res_524_; 
v_isExporting_boxed_523_ = lean_unbox(v_isExporting_517_);
v_res_524_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_516_, v_isExporting_boxed_523_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(lean_object* v_x_525_, uint8_t v_when_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
if (v_when_526_ == 0)
{
lean_object* v___x_532_; 
lean_inc(v___y_530_);
lean_inc_ref(v___y_529_);
lean_inc(v___y_528_);
lean_inc_ref(v___y_527_);
v___x_532_ = lean_apply_5(v_x_525_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, lean_box(0));
return v___x_532_;
}
else
{
uint8_t v___x_533_; lean_object* v___x_534_; 
v___x_533_ = 0;
v___x_534_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_525_, v___x_533_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
return v___x_534_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg___boxed(lean_object* v_x_535_, lean_object* v_when_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_){
_start:
{
uint8_t v_when_boxed_542_; lean_object* v_res_543_; 
v_when_boxed_542_ = lean_unbox(v_when_536_);
v_res_543_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v_x_535_, v_when_boxed_542_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(lean_object* v_declName_544_, uint8_t v_s_545_, lean_object* v___y_546_, lean_object* v___y_547_){
_start:
{
lean_object* v___x_549_; lean_object* v_env_550_; lean_object* v_nextMacroScope_551_; lean_object* v_ngen_552_; lean_object* v_auxDeclNGen_553_; lean_object* v_traceState_554_; lean_object* v_messages_555_; lean_object* v_infoState_556_; lean_object* v_snapshotTasks_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_587_; 
v___x_549_ = lean_st_ref_take(v___y_547_);
v_env_550_ = lean_ctor_get(v___x_549_, 0);
v_nextMacroScope_551_ = lean_ctor_get(v___x_549_, 1);
v_ngen_552_ = lean_ctor_get(v___x_549_, 2);
v_auxDeclNGen_553_ = lean_ctor_get(v___x_549_, 3);
v_traceState_554_ = lean_ctor_get(v___x_549_, 4);
v_messages_555_ = lean_ctor_get(v___x_549_, 6);
v_infoState_556_ = lean_ctor_get(v___x_549_, 7);
v_snapshotTasks_557_ = lean_ctor_get(v___x_549_, 8);
v_isSharedCheck_587_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_587_ == 0)
{
lean_object* v_unused_588_; 
v_unused_588_ = lean_ctor_get(v___x_549_, 5);
lean_dec(v_unused_588_);
v___x_559_ = v___x_549_;
v_isShared_560_ = v_isSharedCheck_587_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_snapshotTasks_557_);
lean_inc(v_infoState_556_);
lean_inc(v_messages_555_);
lean_inc(v_traceState_554_);
lean_inc(v_auxDeclNGen_553_);
lean_inc(v_ngen_552_);
lean_inc(v_nextMacroScope_551_);
lean_inc(v_env_550_);
lean_dec(v___x_549_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_587_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
uint8_t v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_566_; 
v___x_561_ = 0;
v___x_562_ = lean_box(0);
v___x_563_ = l___private_Lean_ReducibilityAttrs_0__Lean_setReducibilityStatusCore(v_env_550_, v_declName_544_, v_s_545_, v___x_561_, v___x_562_);
v___x_564_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 5, v___x_564_);
lean_ctor_set(v___x_559_, 0, v___x_563_);
v___x_566_ = v___x_559_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_586_; 
v_reuseFailAlloc_586_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_586_, 0, v___x_563_);
lean_ctor_set(v_reuseFailAlloc_586_, 1, v_nextMacroScope_551_);
lean_ctor_set(v_reuseFailAlloc_586_, 2, v_ngen_552_);
lean_ctor_set(v_reuseFailAlloc_586_, 3, v_auxDeclNGen_553_);
lean_ctor_set(v_reuseFailAlloc_586_, 4, v_traceState_554_);
lean_ctor_set(v_reuseFailAlloc_586_, 5, v___x_564_);
lean_ctor_set(v_reuseFailAlloc_586_, 6, v_messages_555_);
lean_ctor_set(v_reuseFailAlloc_586_, 7, v_infoState_556_);
lean_ctor_set(v_reuseFailAlloc_586_, 8, v_snapshotTasks_557_);
v___x_566_ = v_reuseFailAlloc_586_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v_mctx_570_; lean_object* v_zetaDeltaFVarIds_571_; lean_object* v_postponed_572_; lean_object* v_diag_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_584_; 
v___x_567_ = lean_st_ref_set(v___y_547_, v___x_566_);
v___x_568_ = lean_st_ref_get(v___y_547_);
lean_dec(v___x_568_);
v___x_569_ = lean_st_ref_take(v___y_546_);
v_mctx_570_ = lean_ctor_get(v___x_569_, 0);
v_zetaDeltaFVarIds_571_ = lean_ctor_get(v___x_569_, 2);
v_postponed_572_ = lean_ctor_get(v___x_569_, 3);
v_diag_573_ = lean_ctor_get(v___x_569_, 4);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_569_);
if (v_isSharedCheck_584_ == 0)
{
lean_object* v_unused_585_; 
v_unused_585_ = lean_ctor_get(v___x_569_, 1);
lean_dec(v_unused_585_);
v___x_575_ = v___x_569_;
v_isShared_576_ = v_isSharedCheck_584_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_diag_573_);
lean_inc(v_postponed_572_);
lean_inc(v_zetaDeltaFVarIds_571_);
lean_inc(v_mctx_570_);
lean_dec(v___x_569_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_584_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_579_; 
v___x_577_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v___x_577_);
v___x_579_ = v___x_575_;
goto v_reusejp_578_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_mctx_570_);
lean_ctor_set(v_reuseFailAlloc_583_, 1, v___x_577_);
lean_ctor_set(v_reuseFailAlloc_583_, 2, v_zetaDeltaFVarIds_571_);
lean_ctor_set(v_reuseFailAlloc_583_, 3, v_postponed_572_);
lean_ctor_set(v_reuseFailAlloc_583_, 4, v_diag_573_);
v___x_579_ = v_reuseFailAlloc_583_;
goto v_reusejp_578_;
}
v_reusejp_578_:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_580_ = lean_st_ref_set(v___y_546_, v___x_579_);
v___x_581_ = lean_box(0);
v___x_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_582_, 0, v___x_581_);
return v___x_582_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg___boxed(lean_object* v_declName_589_, lean_object* v_s_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
uint8_t v_s_boxed_594_; lean_object* v_res_595_; 
v_s_boxed_594_ = lean_unbox(v_s_590_);
v_res_595_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_589_, v_s_boxed_594_, v___y_591_, v___y_592_);
lean_dec(v___y_592_);
lean_dec(v___y_591_);
return v_res_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(lean_object* v_declName_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
uint8_t v___x_602_; lean_object* v___x_603_; 
v___x_602_ = 0;
v___x_603_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_596_, v___x_602_, v___y_598_, v___y_600_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5___boxed(lean_object* v_declName_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v_res_610_; 
v_res_610_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(v_declName_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(lean_object* v_ref_611_, lean_object* v_msg_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_){
_start:
{
lean_object* v_fileName_618_; lean_object* v_fileMap_619_; lean_object* v_options_620_; lean_object* v_currRecDepth_621_; lean_object* v_maxRecDepth_622_; lean_object* v_ref_623_; lean_object* v_currNamespace_624_; lean_object* v_openDecls_625_; lean_object* v_initHeartbeats_626_; lean_object* v_maxHeartbeats_627_; lean_object* v_quotContext_628_; lean_object* v_currMacroScope_629_; uint8_t v_diag_630_; lean_object* v_cancelTk_x3f_631_; uint8_t v_suppressElabErrors_632_; lean_object* v_inheritedTraceOptions_633_; lean_object* v_ref_634_; lean_object* v___x_635_; lean_object* v___x_636_; 
v_fileName_618_ = lean_ctor_get(v___y_615_, 0);
v_fileMap_619_ = lean_ctor_get(v___y_615_, 1);
v_options_620_ = lean_ctor_get(v___y_615_, 2);
v_currRecDepth_621_ = lean_ctor_get(v___y_615_, 3);
v_maxRecDepth_622_ = lean_ctor_get(v___y_615_, 4);
v_ref_623_ = lean_ctor_get(v___y_615_, 5);
v_currNamespace_624_ = lean_ctor_get(v___y_615_, 6);
v_openDecls_625_ = lean_ctor_get(v___y_615_, 7);
v_initHeartbeats_626_ = lean_ctor_get(v___y_615_, 8);
v_maxHeartbeats_627_ = lean_ctor_get(v___y_615_, 9);
v_quotContext_628_ = lean_ctor_get(v___y_615_, 10);
v_currMacroScope_629_ = lean_ctor_get(v___y_615_, 11);
v_diag_630_ = lean_ctor_get_uint8(v___y_615_, sizeof(void*)*14);
v_cancelTk_x3f_631_ = lean_ctor_get(v___y_615_, 12);
v_suppressElabErrors_632_ = lean_ctor_get_uint8(v___y_615_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_633_ = lean_ctor_get(v___y_615_, 13);
v_ref_634_ = l_Lean_replaceRef(v_ref_611_, v_ref_623_);
lean_inc_ref(v_inheritedTraceOptions_633_);
lean_inc(v_cancelTk_x3f_631_);
lean_inc(v_currMacroScope_629_);
lean_inc(v_quotContext_628_);
lean_inc(v_maxHeartbeats_627_);
lean_inc(v_initHeartbeats_626_);
lean_inc(v_openDecls_625_);
lean_inc(v_currNamespace_624_);
lean_inc(v_maxRecDepth_622_);
lean_inc(v_currRecDepth_621_);
lean_inc_ref(v_options_620_);
lean_inc_ref(v_fileMap_619_);
lean_inc_ref(v_fileName_618_);
v___x_635_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_635_, 0, v_fileName_618_);
lean_ctor_set(v___x_635_, 1, v_fileMap_619_);
lean_ctor_set(v___x_635_, 2, v_options_620_);
lean_ctor_set(v___x_635_, 3, v_currRecDepth_621_);
lean_ctor_set(v___x_635_, 4, v_maxRecDepth_622_);
lean_ctor_set(v___x_635_, 5, v_ref_634_);
lean_ctor_set(v___x_635_, 6, v_currNamespace_624_);
lean_ctor_set(v___x_635_, 7, v_openDecls_625_);
lean_ctor_set(v___x_635_, 8, v_initHeartbeats_626_);
lean_ctor_set(v___x_635_, 9, v_maxHeartbeats_627_);
lean_ctor_set(v___x_635_, 10, v_quotContext_628_);
lean_ctor_set(v___x_635_, 11, v_currMacroScope_629_);
lean_ctor_set(v___x_635_, 12, v_cancelTk_x3f_631_);
lean_ctor_set(v___x_635_, 13, v_inheritedTraceOptions_633_);
lean_ctor_set_uint8(v___x_635_, sizeof(void*)*14, v_diag_630_);
lean_ctor_set_uint8(v___x_635_, sizeof(void*)*14 + 1, v_suppressElabErrors_632_);
v___x_636_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v_msg_612_, v___y_613_, v___y_614_, v___x_635_, v___y_616_);
lean_dec_ref(v___x_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg___boxed(lean_object* v_ref_637_, lean_object* v_msg_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_637_, v_msg_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v___y_640_);
lean_dec_ref(v___y_639_);
lean_dec(v_ref_637_);
return v_res_644_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_645_; 
v___x_645_ = lean_mk_string_unchecked("failed to generate projection `", 31, 31);
return v___x_645_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__0);
v___x_647_ = l_Lean_stringToMessageData(v___x_646_);
return v___x_647_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_648_; 
v___x_648_ = lean_mk_string_unchecked("` for the 'Prop'-valued type `", 30, 30);
return v___x_648_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_649_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__2);
v___x_650_ = l_Lean_stringToMessageData(v___x_649_);
return v___x_650_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_651_; 
v___x_651_ = lean_mk_string_unchecked("`, field must be a proof, but it has type", 41, 41);
return v___x_651_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_652_; lean_object* v___x_653_; 
v___x_652_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__4);
v___x_653_ = l_Lean_stringToMessageData(v___x_652_);
return v___x_653_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = lean_mk_string_unchecked("` for `", 7, 7);
return v___x_654_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; 
v___x_655_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__6);
v___x_656_ = l_Lean_stringToMessageData(v___x_655_);
return v___x_656_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_657_; 
v___x_657_ = lean_mk_string_unchecked("`, too many structure parameter overrides", 41, 41);
return v___x_657_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__9(void){
_start:
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__8);
v___x_659_ = l_Lean_stringToMessageData(v___x_658_);
return v___x_659_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(lean_object* v___x_660_, lean_object* v_projName_661_, lean_object* v___x_662_, lean_object* v_a_663_, uint8_t v_instImplicit_664_, lean_object* v___x_665_, lean_object* v_params_666_, lean_object* v_self_667_, lean_object* v_b_668_, uint8_t v___x_669_, lean_object* v_a_670_, lean_object* v___x_671_, lean_object* v_paramInfoOverrides_672_, lean_object* v_n_673_, lean_object* v_ref_674_, lean_object* v___x_675_, uint8_t v_a_676_, lean_object* v_____r_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
lean_object* v___y_684_; lean_object* v___y_685_; lean_object* v___y_730_; lean_object* v___y_731_; lean_object* v___y_732_; lean_object* v___y_742_; lean_object* v___y_743_; lean_object* v___y_744_; lean_object* v___y_745_; uint8_t v___y_746_; lean_object* v___y_747_; uint8_t v___y_754_; lean_object* v___y_755_; lean_object* v___y_756_; lean_object* v___y_757_; lean_object* v___y_758_; lean_object* v___y_759_; lean_object* v___x_847_; lean_object* v___x_848_; uint8_t v___x_849_; 
v___x_847_ = l_List_lengthTR___redArg(v_paramInfoOverrides_672_);
v___x_848_ = lean_array_get_size(v_params_666_);
v___x_849_ = lean_nat_dec_le(v___x_847_, v___x_848_);
lean_dec(v___x_847_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_850_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1);
lean_inc(v_projName_661_);
v___x_851_ = l_Lean_MessageData_ofName(v_projName_661_);
v___x_852_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_852_, 0, v___x_850_);
lean_ctor_set(v___x_852_, 1, v___x_851_);
v___x_853_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__7);
v___x_854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_854_, 0, v___x_852_);
lean_ctor_set(v___x_854_, 1, v___x_853_);
lean_inc(v_n_673_);
v___x_855_ = l_Lean_MessageData_ofConstName(v_n_673_, v___x_849_);
v___x_856_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_856_, 0, v___x_854_);
lean_ctor_set(v___x_856_, 1, v___x_855_);
v___x_857_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__9);
v___x_858_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_856_);
lean_ctor_set(v___x_858_, 1, v___x_857_);
v___x_859_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_674_, v___x_858_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_859_) == 0)
{
lean_dec_ref(v___x_859_);
goto v___jp_808_;
}
else
{
lean_object* v_a_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_867_; 
lean_dec(v___x_675_);
lean_dec(v_n_673_);
lean_dec_ref(v_a_670_);
lean_dec_ref(v_self_667_);
lean_dec(v___x_665_);
lean_dec(v_a_663_);
lean_dec(v___x_662_);
lean_dec(v_projName_661_);
lean_dec_ref(v___x_660_);
v_a_860_ = lean_ctor_get(v___x_859_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_859_);
if (v_isSharedCheck_867_ == 0)
{
v___x_862_ = v___x_859_;
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_a_860_);
lean_dec(v___x_859_);
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
else
{
goto v___jp_808_;
}
v___jp_683_:
{
lean_object* v___x_686_; lean_object* v_env_687_; lean_object* v_nextMacroScope_688_; lean_object* v_ngen_689_; lean_object* v_auxDeclNGen_690_; lean_object* v_traceState_691_; lean_object* v_messages_692_; lean_object* v_infoState_693_; lean_object* v_snapshotTasks_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_727_; 
v___x_686_ = lean_st_ref_take(v___y_685_);
v_env_687_ = lean_ctor_get(v___x_686_, 0);
v_nextMacroScope_688_ = lean_ctor_get(v___x_686_, 1);
v_ngen_689_ = lean_ctor_get(v___x_686_, 2);
v_auxDeclNGen_690_ = lean_ctor_get(v___x_686_, 3);
v_traceState_691_ = lean_ctor_get(v___x_686_, 4);
v_messages_692_ = lean_ctor_get(v___x_686_, 6);
v_infoState_693_ = lean_ctor_get(v___x_686_, 7);
v_snapshotTasks_694_ = lean_ctor_get(v___x_686_, 8);
v_isSharedCheck_727_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_727_ == 0)
{
lean_object* v_unused_728_; 
v_unused_728_ = lean_ctor_get(v___x_686_, 5);
lean_dec(v_unused_728_);
v___x_696_ = v___x_686_;
v_isShared_697_ = v_isSharedCheck_727_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_snapshotTasks_694_);
lean_inc(v_infoState_693_);
lean_inc(v_messages_692_);
lean_inc(v_traceState_691_);
lean_inc(v_auxDeclNGen_690_);
lean_inc(v_ngen_689_);
lean_inc(v_nextMacroScope_688_);
lean_inc(v_env_687_);
lean_dec(v___x_686_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_727_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v_name_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_702_; 
v_name_698_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_name_698_);
lean_dec_ref(v___x_660_);
lean_inc(v_projName_661_);
v___x_699_ = l_Lean_addProjectionFnInfo(v_env_687_, v_projName_661_, v_name_698_, v___x_662_, v_a_663_, v_instImplicit_664_);
v___x_700_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__2);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 5, v___x_700_);
lean_ctor_set(v___x_696_, 0, v___x_699_);
v___x_702_ = v___x_696_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v___x_699_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v_nextMacroScope_688_);
lean_ctor_set(v_reuseFailAlloc_726_, 2, v_ngen_689_);
lean_ctor_set(v_reuseFailAlloc_726_, 3, v_auxDeclNGen_690_);
lean_ctor_set(v_reuseFailAlloc_726_, 4, v_traceState_691_);
lean_ctor_set(v_reuseFailAlloc_726_, 5, v___x_700_);
lean_ctor_set(v_reuseFailAlloc_726_, 6, v_messages_692_);
lean_ctor_set(v_reuseFailAlloc_726_, 7, v_infoState_693_);
lean_ctor_set(v_reuseFailAlloc_726_, 8, v_snapshotTasks_694_);
v___x_702_ = v_reuseFailAlloc_726_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v_mctx_706_; lean_object* v_zetaDeltaFVarIds_707_; lean_object* v_postponed_708_; lean_object* v_diag_709_; lean_object* v___x_711_; uint8_t v_isShared_712_; uint8_t v_isSharedCheck_724_; 
v___x_703_ = lean_st_ref_set(v___y_685_, v___x_702_);
v___x_704_ = lean_st_ref_get(v___y_685_);
lean_dec(v___x_704_);
v___x_705_ = lean_st_ref_take(v___y_684_);
v_mctx_706_ = lean_ctor_get(v___x_705_, 0);
v_zetaDeltaFVarIds_707_ = lean_ctor_get(v___x_705_, 2);
v_postponed_708_ = lean_ctor_get(v___x_705_, 3);
v_diag_709_ = lean_ctor_get(v___x_705_, 4);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_724_ == 0)
{
lean_object* v_unused_725_; 
v_unused_725_ = lean_ctor_get(v___x_705_, 1);
lean_dec(v_unused_725_);
v___x_711_ = v___x_705_;
v_isShared_712_ = v_isSharedCheck_724_;
goto v_resetjp_710_;
}
else
{
lean_inc(v_diag_709_);
lean_inc(v_postponed_708_);
lean_inc(v_zetaDeltaFVarIds_707_);
lean_inc(v_mctx_706_);
lean_dec(v___x_705_);
v___x_711_ = lean_box(0);
v_isShared_712_ = v_isSharedCheck_724_;
goto v_resetjp_710_;
}
v_resetjp_710_:
{
lean_object* v___x_713_; lean_object* v___x_715_; 
v___x_713_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg___closed__3);
if (v_isShared_712_ == 0)
{
lean_ctor_set(v___x_711_, 1, v___x_713_);
v___x_715_ = v___x_711_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_mctx_706_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v___x_713_);
lean_ctor_set(v_reuseFailAlloc_723_, 2, v_zetaDeltaFVarIds_707_);
lean_ctor_set(v_reuseFailAlloc_723_, 3, v_postponed_708_);
lean_ctor_set(v_reuseFailAlloc_723_, 4, v_diag_709_);
v___x_715_ = v_reuseFailAlloc_723_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; 
v___x_716_ = lean_st_ref_set(v___y_684_, v___x_715_);
v___x_717_ = l_Lean_Expr_const___override(v_projName_661_, v___x_665_);
v___x_718_ = l_Lean_mkAppN(v___x_717_, v_params_666_);
v___x_719_ = l_Lean_Expr_app___override(v___x_718_, v_self_667_);
v___x_720_ = l_Lean_Expr_bindingBody_x21(v_b_668_);
v___x_721_ = lean_expr_instantiate1(v___x_720_, v___x_719_);
lean_dec_ref(v___x_719_);
lean_dec_ref(v___x_720_);
v___x_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
return v___x_722_;
}
}
}
}
}
v___jp_729_:
{
if (lean_obj_tag(v___y_732_) == 0)
{
lean_dec_ref(v___y_732_);
v___y_684_ = v___y_730_;
v___y_685_ = v___y_731_;
goto v___jp_683_;
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec_ref(v_self_667_);
lean_dec(v___x_665_);
lean_dec(v_a_663_);
lean_dec(v___x_662_);
lean_dec(v_projName_661_);
lean_dec_ref(v___x_660_);
v_a_733_ = lean_ctor_get(v___y_732_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___y_732_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___y_732_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___y_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
v___jp_741_:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_748_ = lean_box(0);
lean_inc(v_projName_661_);
v___x_749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_749_, 0, v_projName_661_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_750_, 0, v___y_745_);
lean_ctor_set(v___x_750_, 1, v___y_744_);
lean_ctor_set(v___x_750_, 2, v___x_749_);
lean_ctor_set_uint8(v___x_750_, sizeof(void*)*3, v___x_669_);
v___x_751_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_751_, 0, v___x_750_);
v___x_752_ = l_Lean_addDecl(v___x_751_, v___y_746_, v___y_742_, v___y_747_);
lean_dec_ref(v___y_742_);
v___y_730_ = v___y_743_;
v___y_731_ = v___y_747_;
v___y_732_ = v___x_752_;
goto v___jp_729_;
}
v___jp_753_:
{
uint8_t v___x_760_; lean_object* v___x_761_; lean_object* v_fileName_762_; lean_object* v_fileMap_763_; lean_object* v_options_764_; lean_object* v_currRecDepth_765_; lean_object* v_maxRecDepth_766_; lean_object* v_ref_767_; lean_object* v_currNamespace_768_; lean_object* v_openDecls_769_; lean_object* v_initHeartbeats_770_; lean_object* v_maxHeartbeats_771_; lean_object* v_quotContext_772_; lean_object* v_currMacroScope_773_; uint8_t v_diag_774_; lean_object* v_cancelTk_x3f_775_; uint8_t v_suppressElabErrors_776_; lean_object* v_inheritedTraceOptions_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v_ref_782_; lean_object* v___x_783_; 
v___x_760_ = 0;
lean_inc_ref(v_a_670_);
v___x_761_ = l_Lean_LocalContext_mkForall(v_a_670_, v___x_671_, v___y_755_, v___x_669_, v___x_760_);
lean_dec_ref(v___y_755_);
v_fileName_762_ = lean_ctor_get(v___y_758_, 0);
v_fileMap_763_ = lean_ctor_get(v___y_758_, 1);
v_options_764_ = lean_ctor_get(v___y_758_, 2);
v_currRecDepth_765_ = lean_ctor_get(v___y_758_, 3);
v_maxRecDepth_766_ = lean_ctor_get(v___y_758_, 4);
v_ref_767_ = lean_ctor_get(v___y_758_, 5);
v_currNamespace_768_ = lean_ctor_get(v___y_758_, 6);
v_openDecls_769_ = lean_ctor_get(v___y_758_, 7);
v_initHeartbeats_770_ = lean_ctor_get(v___y_758_, 8);
v_maxHeartbeats_771_ = lean_ctor_get(v___y_758_, 9);
v_quotContext_772_ = lean_ctor_get(v___y_758_, 10);
v_currMacroScope_773_ = lean_ctor_get(v___y_758_, 11);
v_diag_774_ = lean_ctor_get_uint8(v___y_758_, sizeof(void*)*14);
v_cancelTk_x3f_775_ = lean_ctor_get(v___y_758_, 12);
v_suppressElabErrors_776_ = lean_ctor_get_uint8(v___y_758_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_777_ = lean_ctor_get(v___y_758_, 13);
v___x_778_ = l_Lean_Expr_inferImplicit(v___x_761_, v___x_662_, v___x_669_);
v___x_779_ = l_Lean_Expr_updateForallBinderInfos(v___x_778_, v_paramInfoOverrides_672_);
lean_inc_ref(v_self_667_);
lean_inc(v_a_663_);
v___x_780_ = l_Lean_Expr_proj___override(v_n_673_, v_a_663_, v_self_667_);
v___x_781_ = l_Lean_LocalContext_mkLambda(v_a_670_, v___x_671_, v___x_780_, v___x_669_, v___x_760_);
lean_dec_ref(v___x_780_);
v_ref_782_ = l_Lean_replaceRef(v_ref_674_, v_ref_767_);
lean_inc_ref(v_inheritedTraceOptions_777_);
lean_inc(v_cancelTk_x3f_775_);
lean_inc(v_currMacroScope_773_);
lean_inc(v_quotContext_772_);
lean_inc(v_maxHeartbeats_771_);
lean_inc(v_initHeartbeats_770_);
lean_inc(v_openDecls_769_);
lean_inc(v_currNamespace_768_);
lean_inc(v_maxRecDepth_766_);
lean_inc(v_currRecDepth_765_);
lean_inc_ref(v_options_764_);
lean_inc_ref(v_fileMap_763_);
lean_inc_ref(v_fileName_762_);
v___x_783_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_783_, 0, v_fileName_762_);
lean_ctor_set(v___x_783_, 1, v_fileMap_763_);
lean_ctor_set(v___x_783_, 2, v_options_764_);
lean_ctor_set(v___x_783_, 3, v_currRecDepth_765_);
lean_ctor_set(v___x_783_, 4, v_maxRecDepth_766_);
lean_ctor_set(v___x_783_, 5, v_ref_782_);
lean_ctor_set(v___x_783_, 6, v_currNamespace_768_);
lean_ctor_set(v___x_783_, 7, v_openDecls_769_);
lean_ctor_set(v___x_783_, 8, v_initHeartbeats_770_);
lean_ctor_set(v___x_783_, 9, v_maxHeartbeats_771_);
lean_ctor_set(v___x_783_, 10, v_quotContext_772_);
lean_ctor_set(v___x_783_, 11, v_currMacroScope_773_);
lean_ctor_set(v___x_783_, 12, v_cancelTk_x3f_775_);
lean_ctor_set(v___x_783_, 13, v_inheritedTraceOptions_777_);
lean_ctor_set_uint8(v___x_783_, sizeof(void*)*14, v_diag_774_);
lean_ctor_set_uint8(v___x_783_, sizeof(void*)*14 + 1, v_suppressElabErrors_776_);
if (v___y_754_ == 0)
{
lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_784_ = lean_box(1);
lean_inc(v_projName_661_);
v___x_785_ = l_Lean_mkDefinitionValInferringUnsafe___at___00Lean_Meta_mkProjections_spec__4___redArg(v_projName_661_, v___x_675_, v___x_779_, v___x_781_, v___x_784_, v___y_759_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v_a_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v_a_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_a_786_);
lean_dec_ref(v___x_785_);
v___x_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_787_, 0, v_a_786_);
v___x_788_ = l_Lean_addDecl(v___x_787_, v___x_760_, v___x_783_, v___y_759_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_dec_ref(v___x_788_);
if (v_instImplicit_664_ == 0)
{
lean_object* v___x_789_; 
lean_inc(v_projName_661_);
v___x_789_ = l_Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5(v_projName_661_, v___y_756_, v___y_757_, v___x_783_, v___y_759_);
lean_dec_ref(v___x_783_);
v___y_730_ = v___y_757_;
v___y_731_ = v___y_759_;
v___y_732_ = v___x_789_;
goto v___jp_729_;
}
else
{
lean_dec_ref(v___x_783_);
v___y_684_ = v___y_757_;
v___y_685_ = v___y_759_;
goto v___jp_683_;
}
}
else
{
lean_dec_ref(v___x_783_);
v___y_730_ = v___y_757_;
v___y_731_ = v___y_759_;
v___y_732_ = v___x_788_;
goto v___jp_729_;
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec_ref(v___x_783_);
lean_dec_ref(v_self_667_);
lean_dec(v___x_665_);
lean_dec(v_a_663_);
lean_dec(v___x_662_);
lean_dec(v_projName_661_);
lean_dec_ref(v___x_660_);
v_a_790_ = lean_ctor_get(v___x_785_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_785_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_785_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_785_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
else
{
lean_object* v___x_798_; lean_object* v_env_799_; lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_798_ = lean_st_ref_get(v___y_759_);
v_env_799_ = lean_ctor_get(v___x_798_, 0);
lean_inc_ref_n(v_env_799_, 2);
lean_dec(v___x_798_);
lean_inc_ref(v___x_779_);
lean_inc(v_projName_661_);
v___x_800_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_800_, 0, v_projName_661_);
lean_ctor_set(v___x_800_, 1, v___x_675_);
lean_ctor_set(v___x_800_, 2, v___x_779_);
v___x_801_ = l_Lean_Environment_hasUnsafe(v_env_799_, v___x_779_);
lean_dec_ref(v___x_779_);
if (v___x_801_ == 0)
{
uint8_t v___x_802_; 
v___x_802_ = l_Lean_Environment_hasUnsafe(v_env_799_, v___x_781_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_803_ = lean_box(0);
lean_inc(v_projName_661_);
v___x_804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_804_, 0, v_projName_661_);
lean_ctor_set(v___x_804_, 1, v___x_803_);
v___x_805_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_805_, 0, v___x_800_);
lean_ctor_set(v___x_805_, 1, v___x_781_);
lean_ctor_set(v___x_805_, 2, v___x_804_);
v___x_806_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
v___x_807_ = l_Lean_addDecl(v___x_806_, v___x_760_, v___x_783_, v___y_759_);
lean_dec_ref(v___x_783_);
v___y_730_ = v___y_757_;
v___y_731_ = v___y_759_;
v___y_732_ = v___x_807_;
goto v___jp_729_;
}
else
{
v___y_742_ = v___x_783_;
v___y_743_ = v___y_757_;
v___y_744_ = v___x_781_;
v___y_745_ = v___x_800_;
v___y_746_ = v___x_760_;
v___y_747_ = v___y_759_;
goto v___jp_741_;
}
}
else
{
lean_dec_ref(v_env_799_);
v___y_742_ = v___x_783_;
v___y_743_ = v___y_757_;
v___y_744_ = v___x_781_;
v___y_745_ = v___x_800_;
v___y_746_ = v___x_760_;
v___y_747_ = v___y_759_;
goto v___jp_741_;
}
}
}
v___jp_808_:
{
lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; 
v___x_809_ = l_Lean_Expr_bindingDomain_x21(v_b_668_);
v___x_810_ = lean_expr_consume_type_annotations(v___x_809_);
lean_inc_ref(v___x_810_);
v___x_811_ = l_Lean_Meta_isProp(v___x_810_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_811_) == 0)
{
if (v_a_676_ == 0)
{
lean_object* v_a_812_; uint8_t v___x_813_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_812_);
lean_dec_ref(v___x_811_);
v___x_813_ = lean_unbox(v_a_812_);
lean_dec(v_a_812_);
v___y_754_ = v___x_813_;
v___y_755_ = v___x_810_;
v___y_756_ = v___y_678_;
v___y_757_ = v___y_679_;
v___y_758_ = v___y_680_;
v___y_759_ = v___y_681_;
goto v___jp_753_;
}
else
{
lean_object* v_a_814_; uint8_t v___x_815_; 
v_a_814_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_814_);
lean_dec_ref(v___x_811_);
v___x_815_ = lean_unbox(v_a_814_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; uint8_t v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; 
v___x_816_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1);
lean_inc(v_projName_661_);
v___x_817_ = l_Lean_MessageData_ofName(v_projName_661_);
v___x_818_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_818_, 0, v___x_816_);
lean_ctor_set(v___x_818_, 1, v___x_817_);
v___x_819_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__3);
v___x_820_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_820_, 0, v___x_818_);
lean_ctor_set(v___x_820_, 1, v___x_819_);
v___x_821_ = lean_unbox(v_a_814_);
lean_inc(v_n_673_);
v___x_822_ = l_Lean_MessageData_ofConstName(v_n_673_, v___x_821_);
v___x_823_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_823_, 0, v___x_820_);
lean_ctor_set(v___x_823_, 1, v___x_822_);
v___x_824_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__5);
v___x_825_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_825_, 0, v___x_823_);
lean_ctor_set(v___x_825_, 1, v___x_824_);
lean_inc_ref(v___x_810_);
v___x_826_ = l_Lean_indentExpr(v___x_810_);
v___x_827_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_827_, 0, v___x_825_);
lean_ctor_set(v___x_827_, 1, v___x_826_);
v___x_828_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_674_, v___x_827_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_828_) == 0)
{
uint8_t v___x_829_; 
lean_dec_ref(v___x_828_);
v___x_829_ = lean_unbox(v_a_814_);
lean_dec(v_a_814_);
v___y_754_ = v___x_829_;
v___y_755_ = v___x_810_;
v___y_756_ = v___y_678_;
v___y_757_ = v___y_679_;
v___y_758_ = v___y_680_;
v___y_759_ = v___y_681_;
goto v___jp_753_;
}
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
lean_dec(v_a_814_);
lean_dec_ref(v___x_810_);
lean_dec(v___x_675_);
lean_dec(v_n_673_);
lean_dec_ref(v_a_670_);
lean_dec_ref(v_self_667_);
lean_dec(v___x_665_);
lean_dec(v_a_663_);
lean_dec(v___x_662_);
lean_dec(v_projName_661_);
lean_dec_ref(v___x_660_);
v_a_830_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_828_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_828_);
v___x_832_ = lean_box(0);
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
v_resetjp_831_:
{
lean_object* v___x_835_; 
if (v_isShared_833_ == 0)
{
v___x_835_ = v___x_832_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_830_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
else
{
uint8_t v___x_838_; 
v___x_838_ = lean_unbox(v_a_814_);
lean_dec(v_a_814_);
v___y_754_ = v___x_838_;
v___y_755_ = v___x_810_;
v___y_756_ = v___y_678_;
v___y_757_ = v___y_679_;
v___y_758_ = v___y_680_;
v___y_759_ = v___y_681_;
goto v___jp_753_;
}
}
}
else
{
lean_object* v_a_839_; lean_object* v___x_841_; uint8_t v_isShared_842_; uint8_t v_isSharedCheck_846_; 
lean_dec_ref(v___x_810_);
lean_dec(v___x_675_);
lean_dec(v_n_673_);
lean_dec_ref(v_a_670_);
lean_dec_ref(v_self_667_);
lean_dec(v___x_665_);
lean_dec(v_a_663_);
lean_dec(v___x_662_);
lean_dec(v_projName_661_);
lean_dec_ref(v___x_660_);
v_a_839_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_846_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_846_ == 0)
{
v___x_841_ = v___x_811_;
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
else
{
lean_inc(v_a_839_);
lean_dec(v___x_811_);
v___x_841_ = lean_box(0);
v_isShared_842_ = v_isSharedCheck_846_;
goto v_resetjp_840_;
}
v_resetjp_840_:
{
lean_object* v___x_844_; 
if (v_isShared_842_ == 0)
{
v___x_844_ = v___x_841_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_a_839_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed(lean_object** _args){
lean_object* v___x_868_ = _args[0];
lean_object* v_projName_869_ = _args[1];
lean_object* v___x_870_ = _args[2];
lean_object* v_a_871_ = _args[3];
lean_object* v_instImplicit_872_ = _args[4];
lean_object* v___x_873_ = _args[5];
lean_object* v_params_874_ = _args[6];
lean_object* v_self_875_ = _args[7];
lean_object* v_b_876_ = _args[8];
lean_object* v___x_877_ = _args[9];
lean_object* v_a_878_ = _args[10];
lean_object* v___x_879_ = _args[11];
lean_object* v_paramInfoOverrides_880_ = _args[12];
lean_object* v_n_881_ = _args[13];
lean_object* v_ref_882_ = _args[14];
lean_object* v___x_883_ = _args[15];
lean_object* v_a_884_ = _args[16];
lean_object* v_____r_885_ = _args[17];
lean_object* v___y_886_ = _args[18];
lean_object* v___y_887_ = _args[19];
lean_object* v___y_888_ = _args[20];
lean_object* v___y_889_ = _args[21];
lean_object* v___y_890_ = _args[22];
_start:
{
uint8_t v_instImplicit_boxed_891_; uint8_t v___x_19260__boxed_892_; uint8_t v_a_19266__boxed_893_; lean_object* v_res_894_; 
v_instImplicit_boxed_891_ = lean_unbox(v_instImplicit_872_);
v___x_19260__boxed_892_ = lean_unbox(v___x_877_);
v_a_19266__boxed_893_ = lean_unbox(v_a_884_);
v_res_894_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0(v___x_868_, v_projName_869_, v___x_870_, v_a_871_, v_instImplicit_boxed_891_, v___x_873_, v_params_874_, v_self_875_, v_b_876_, v___x_19260__boxed_892_, v_a_878_, v___x_879_, v_paramInfoOverrides_880_, v_n_881_, v_ref_882_, v___x_883_, v_a_19266__boxed_893_, v_____r_885_, v___y_886_, v___y_887_, v___y_888_, v___y_889_);
lean_dec(v___y_889_);
lean_dec_ref(v___y_888_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v_ref_882_);
lean_dec(v_paramInfoOverrides_880_);
lean_dec_ref(v___x_879_);
lean_dec_ref(v_b_876_);
lean_dec_ref(v_params_874_);
return v_res_894_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = lean_mk_string_unchecked("`, not enough constructor fields", 32, 32);
return v___x_895_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_896_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__0);
v___x_897_ = l_Lean_stringToMessageData(v___x_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(uint8_t v___x_898_, lean_object* v_projName_899_, lean_object* v_n_900_, lean_object* v_ref_901_, lean_object* v___f_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
if (v___x_898_ == 0)
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_908_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__1);
v___x_909_ = l_Lean_MessageData_ofName(v_projName_899_);
v___x_910_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_910_, 0, v___x_908_);
lean_ctor_set(v___x_910_, 1, v___x_909_);
v___x_911_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___closed__7);
v___x_912_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_912_, 0, v___x_910_);
lean_ctor_set(v___x_912_, 1, v___x_911_);
v___x_913_ = l_Lean_MessageData_ofConstName(v_n_900_, v___x_898_);
v___x_914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_914_, 0, v___x_912_);
lean_ctor_set(v___x_914_, 1, v___x_913_);
v___x_915_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___closed__1);
v___x_916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_916_, 0, v___x_914_);
lean_ctor_set(v___x_916_, 1, v___x_915_);
v___x_917_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_901_, v___x_916_, v___y_903_, v___y_904_, v___y_905_, v___y_906_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_919_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_a_918_);
lean_dec_ref(v___x_917_);
lean_inc(v___y_906_);
lean_inc_ref(v___y_905_);
lean_inc(v___y_904_);
lean_inc_ref(v___y_903_);
v___x_919_ = lean_apply_6(v___f_902_, v_a_918_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, lean_box(0));
return v___x_919_;
}
else
{
lean_object* v_a_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_927_; 
lean_dec_ref(v___f_902_);
v_a_920_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_927_ == 0)
{
v___x_922_ = v___x_917_;
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_a_920_);
lean_dec(v___x_917_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_927_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_925_; 
if (v_isShared_923_ == 0)
{
v___x_925_ = v___x_922_;
goto v_reusejp_924_;
}
else
{
lean_object* v_reuseFailAlloc_926_; 
v_reuseFailAlloc_926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_926_, 0, v_a_920_);
v___x_925_ = v_reuseFailAlloc_926_;
goto v_reusejp_924_;
}
v_reusejp_924_:
{
return v___x_925_;
}
}
}
}
else
{
lean_object* v___x_928_; lean_object* v___x_929_; 
lean_dec(v_n_900_);
lean_dec(v_projName_899_);
v___x_928_ = lean_box(0);
lean_inc(v___y_906_);
lean_inc_ref(v___y_905_);
lean_inc(v___y_904_);
lean_inc_ref(v___y_903_);
v___x_929_ = lean_apply_6(v___f_902_, v___x_928_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, lean_box(0));
return v___x_929_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed(lean_object* v___x_930_, lean_object* v_projName_931_, lean_object* v_n_932_, lean_object* v_ref_933_, lean_object* v___f_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
uint8_t v___x_19646__boxed_940_; lean_object* v_res_941_; 
v___x_19646__boxed_940_ = lean_unbox(v___x_930_);
v_res_941_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1(v___x_19646__boxed_940_, v_projName_931_, v_n_932_, v_ref_933_, v___f_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec(v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v_ref_933_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(lean_object* v_upperBound_942_, lean_object* v_projDecls_943_, lean_object* v___x_944_, lean_object* v___x_945_, uint8_t v_instImplicit_946_, lean_object* v___x_947_, lean_object* v_params_948_, lean_object* v_self_949_, lean_object* v_a_950_, lean_object* v___x_951_, lean_object* v_n_952_, lean_object* v___x_953_, uint8_t v_a_954_, lean_object* v_a_955_, lean_object* v_b_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
uint8_t v___x_962_; 
v___x_962_ = lean_nat_dec_lt(v_a_955_, v_upperBound_942_);
if (v___x_962_ == 0)
{
lean_object* v___x_963_; 
lean_dec(v_a_955_);
lean_dec(v___x_953_);
lean_dec(v_n_952_);
lean_dec_ref(v___x_951_);
lean_dec_ref(v_a_950_);
lean_dec_ref(v_self_949_);
lean_dec_ref(v_params_948_);
lean_dec(v___x_947_);
lean_dec(v___x_945_);
lean_dec_ref(v___x_944_);
v___x_963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_963_, 0, v_b_956_);
return v___x_963_;
}
else
{
lean_object* v___x_964_; lean_object* v_ref_965_; lean_object* v_projName_966_; lean_object* v_paramInfoOverrides_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___f_971_; uint8_t v___x_972_; lean_object* v___x_973_; lean_object* v___y_974_; uint8_t v___x_975_; lean_object* v___x_976_; 
v___x_964_ = lean_array_fget_borrowed(v_projDecls_943_, v_a_955_);
v_ref_965_ = lean_ctor_get(v___x_964_, 0);
v_projName_966_ = lean_ctor_get(v___x_964_, 1);
v_paramInfoOverrides_967_ = lean_ctor_get(v___x_964_, 2);
v___x_968_ = lean_box(v_instImplicit_946_);
v___x_969_ = lean_box(v___x_962_);
v___x_970_ = lean_box(v_a_954_);
lean_inc(v___x_953_);
lean_inc_n(v_ref_965_, 2);
lean_inc_n(v_n_952_, 2);
lean_inc(v_paramInfoOverrides_967_);
lean_inc_ref(v___x_951_);
lean_inc_ref(v_a_950_);
lean_inc_ref(v_b_956_);
lean_inc_ref(v_self_949_);
lean_inc_ref(v_params_948_);
lean_inc(v___x_947_);
lean_inc(v_a_955_);
lean_inc(v___x_945_);
lean_inc_n(v_projName_966_, 2);
lean_inc_ref(v___x_944_);
v___f_971_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__0___boxed), 23, 17);
lean_closure_set(v___f_971_, 0, v___x_944_);
lean_closure_set(v___f_971_, 1, v_projName_966_);
lean_closure_set(v___f_971_, 2, v___x_945_);
lean_closure_set(v___f_971_, 3, v_a_955_);
lean_closure_set(v___f_971_, 4, v___x_968_);
lean_closure_set(v___f_971_, 5, v___x_947_);
lean_closure_set(v___f_971_, 6, v_params_948_);
lean_closure_set(v___f_971_, 7, v_self_949_);
lean_closure_set(v___f_971_, 8, v_b_956_);
lean_closure_set(v___f_971_, 9, v___x_969_);
lean_closure_set(v___f_971_, 10, v_a_950_);
lean_closure_set(v___f_971_, 11, v___x_951_);
lean_closure_set(v___f_971_, 12, v_paramInfoOverrides_967_);
lean_closure_set(v___f_971_, 13, v_n_952_);
lean_closure_set(v___f_971_, 14, v_ref_965_);
lean_closure_set(v___f_971_, 15, v___x_953_);
lean_closure_set(v___f_971_, 16, v___x_970_);
v___x_972_ = l_Lean_Expr_isForall(v_b_956_);
lean_dec_ref(v_b_956_);
v___x_973_ = lean_box(v___x_972_);
v___y_974_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___lam__1___boxed), 10, 5);
lean_closure_set(v___y_974_, 0, v___x_973_);
lean_closure_set(v___y_974_, 1, v_projName_966_);
lean_closure_set(v___y_974_, 2, v_n_952_);
lean_closure_set(v___y_974_, 3, v_ref_965_);
lean_closure_set(v___y_974_, 4, v___f_971_);
v___x_975_ = l_Lean_isPrivateName(v_projName_966_);
v___x_976_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v___y_974_, v___x_975_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
if (lean_obj_tag(v___x_976_) == 0)
{
lean_object* v_a_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v_a_977_ = lean_ctor_get(v___x_976_, 0);
lean_inc(v_a_977_);
lean_dec_ref(v___x_976_);
v___x_978_ = lean_unsigned_to_nat(1u);
v___x_979_ = lean_nat_add(v_a_955_, v___x_978_);
lean_dec(v_a_955_);
v_a_955_ = v___x_979_;
v_b_956_ = v_a_977_;
goto _start;
}
else
{
lean_dec(v_a_955_);
lean_dec(v___x_953_);
lean_dec(v_n_952_);
lean_dec_ref(v___x_951_);
lean_dec_ref(v_a_950_);
lean_dec_ref(v_self_949_);
lean_dec_ref(v_params_948_);
lean_dec(v___x_947_);
lean_dec(v___x_945_);
lean_dec_ref(v___x_944_);
return v___x_976_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_981_ = _args[0];
lean_object* v_projDecls_982_ = _args[1];
lean_object* v___x_983_ = _args[2];
lean_object* v___x_984_ = _args[3];
lean_object* v_instImplicit_985_ = _args[4];
lean_object* v___x_986_ = _args[5];
lean_object* v_params_987_ = _args[6];
lean_object* v_self_988_ = _args[7];
lean_object* v_a_989_ = _args[8];
lean_object* v___x_990_ = _args[9];
lean_object* v_n_991_ = _args[10];
lean_object* v___x_992_ = _args[11];
lean_object* v_a_993_ = _args[12];
lean_object* v_a_994_ = _args[13];
lean_object* v_b_995_ = _args[14];
lean_object* v___y_996_ = _args[15];
lean_object* v___y_997_ = _args[16];
lean_object* v___y_998_ = _args[17];
lean_object* v___y_999_ = _args[18];
lean_object* v___y_1000_ = _args[19];
_start:
{
uint8_t v_instImplicit_boxed_1001_; uint8_t v_a_19727__boxed_1002_; lean_object* v_res_1003_; 
v_instImplicit_boxed_1001_ = lean_unbox(v_instImplicit_985_);
v_a_19727__boxed_1002_ = lean_unbox(v_a_993_);
v_res_1003_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v_upperBound_981_, v_projDecls_982_, v___x_983_, v___x_984_, v_instImplicit_boxed_1001_, v___x_986_, v_params_987_, v_self_988_, v_a_989_, v___x_990_, v_n_991_, v___x_992_, v_a_19727__boxed_1002_, v_a_994_, v_b_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v___y_996_);
lean_dec_ref(v_projDecls_982_);
lean_dec(v_upperBound_981_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(uint8_t v_instImplicit_1004_, lean_object* v_as_1005_, size_t v_sz_1006_, size_t v_i_1007_, lean_object* v_b_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_){
_start:
{
uint8_t v___x_1013_; 
v___x_1013_ = lean_usize_dec_lt(v_i_1007_, v_sz_1006_);
if (v___x_1013_ == 0)
{
lean_object* v___x_1014_; 
v___x_1014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1014_, 0, v_b_1008_);
return v___x_1014_;
}
else
{
lean_object* v_a_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v_a_1015_ = lean_array_uget_borrowed(v_as_1005_, v_i_1007_);
v___x_1016_ = l_Lean_Expr_fvarId_x21(v_a_1015_);
lean_inc(v___x_1016_);
v___x_1017_ = l_Lean_FVarId_getDecl___redArg(v___x_1016_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1017_) == 0)
{
lean_object* v_a_1018_; lean_object* v_a_1020_; uint8_t v___y_1025_; uint8_t v___x_1028_; uint8_t v___x_1029_; 
v_a_1018_ = lean_ctor_get(v___x_1017_, 0);
lean_inc(v_a_1018_);
lean_dec_ref(v___x_1017_);
v___x_1028_ = l_Lean_LocalDecl_binderInfo(v_a_1018_);
v___x_1029_ = l_Lean_BinderInfo_isInstImplicit(v___x_1028_);
if (v___x_1029_ == 0)
{
lean_object* v___x_1031_; uint8_t v___x_1032_; 
v___x_1031_ = l_Lean_LocalDecl_type(v_a_1018_);
lean_dec(v_a_1018_);
v___x_1032_ = lean_is_out_param(v___x_1031_);
if (v___x_1032_ == 0)
{
uint8_t v___x_1033_; lean_object* v___x_1034_; 
v___x_1033_ = 0;
v___x_1034_ = l_Lean_LocalContext_setBinderInfo(v_b_1008_, v___x_1016_, v___x_1033_);
v_a_1020_ = v___x_1034_;
goto v___jp_1019_;
}
else
{
goto v___jp_1030_;
}
}
else
{
lean_dec(v_a_1018_);
goto v___jp_1030_;
}
v___jp_1019_:
{
size_t v___x_1021_; size_t v___x_1022_; 
v___x_1021_ = ((size_t)1ULL);
v___x_1022_ = lean_usize_add(v_i_1007_, v___x_1021_);
v_i_1007_ = v___x_1022_;
v_b_1008_ = v_a_1020_;
goto _start;
}
v___jp_1024_:
{
if (v___y_1025_ == 0)
{
lean_dec(v___x_1016_);
v_a_1020_ = v_b_1008_;
goto v___jp_1019_;
}
else
{
uint8_t v___x_1026_; lean_object* v___x_1027_; 
v___x_1026_ = 1;
v___x_1027_ = l_Lean_LocalContext_setBinderInfo(v_b_1008_, v___x_1016_, v___x_1026_);
v_a_1020_ = v___x_1027_;
goto v___jp_1019_;
}
}
v___jp_1030_:
{
if (v___x_1029_ == 0)
{
v___y_1025_ = v___x_1029_;
goto v___jp_1024_;
}
else
{
v___y_1025_ = v_instImplicit_1004_;
goto v___jp_1024_;
}
}
}
else
{
lean_object* v_a_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1042_; 
lean_dec(v___x_1016_);
lean_dec_ref(v_b_1008_);
v_a_1035_ = lean_ctor_get(v___x_1017_, 0);
v_isSharedCheck_1042_ = !lean_is_exclusive(v___x_1017_);
if (v_isSharedCheck_1042_ == 0)
{
v___x_1037_ = v___x_1017_;
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_a_1035_);
lean_dec(v___x_1017_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1042_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___x_1040_; 
if (v_isShared_1038_ == 0)
{
v___x_1040_ = v___x_1037_;
goto v_reusejp_1039_;
}
else
{
lean_object* v_reuseFailAlloc_1041_; 
v_reuseFailAlloc_1041_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1041_, 0, v_a_1035_);
v___x_1040_ = v_reuseFailAlloc_1041_;
goto v_reusejp_1039_;
}
v_reusejp_1039_:
{
return v___x_1040_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg___boxed(lean_object* v_instImplicit_1043_, lean_object* v_as_1044_, lean_object* v_sz_1045_, lean_object* v_i_1046_, lean_object* v_b_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_, lean_object* v___y_1051_){
_start:
{
uint8_t v_instImplicit_boxed_1052_; size_t v_sz_boxed_1053_; size_t v_i_boxed_1054_; lean_object* v_res_1055_; 
v_instImplicit_boxed_1052_ = lean_unbox(v_instImplicit_1043_);
v_sz_boxed_1053_ = lean_unbox_usize(v_sz_1045_);
lean_dec(v_sz_1045_);
v_i_boxed_1054_ = lean_unbox_usize(v_i_1046_);
lean_dec(v_i_1046_);
v_res_1055_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_boxed_1052_, v_as_1044_, v_sz_boxed_1053_, v_i_boxed_1054_, v_b_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
lean_dec(v___y_1050_);
lean_dec_ref(v___y_1049_);
lean_dec_ref(v___y_1048_);
lean_dec_ref(v_as_1044_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0(lean_object* v_params_1056_, uint8_t v_instImplicit_1057_, lean_object* v_projDecls_1058_, lean_object* v_toConstantVal_1059_, lean_object* v_numParams_1060_, lean_object* v___x_1061_, lean_object* v_n_1062_, lean_object* v_levelParams_1063_, uint8_t v_a_1064_, lean_object* v_ctorType_1065_, lean_object* v_self_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_lctx_1072_; lean_object* v___x_1073_; size_t v_sz_1074_; size_t v___x_1075_; lean_object* v___x_1076_; 
v_lctx_1072_ = lean_ctor_get(v___y_1067_, 2);
lean_inc_ref(v_self_1066_);
lean_inc_ref(v_params_1056_);
v___x_1073_ = lean_array_push(v_params_1056_, v_self_1066_);
v_sz_1074_ = lean_array_size(v_params_1056_);
v___x_1075_ = ((size_t)0ULL);
lean_inc_ref(v_lctx_1072_);
v___x_1076_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_1057_, v_params_1056_, v_sz_1074_, v___x_1075_, v_lctx_1072_, v___y_1067_, v___y_1069_, v___y_1070_);
if (lean_obj_tag(v___x_1076_) == 0)
{
lean_object* v_a_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v_a_1077_ = lean_ctor_get(v___x_1076_, 0);
lean_inc(v_a_1077_);
lean_dec_ref(v___x_1076_);
v___x_1078_ = lean_array_get_size(v_projDecls_1058_);
v___x_1079_ = lean_unsigned_to_nat(0u);
v___x_1080_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v___x_1078_, v_projDecls_1058_, v_toConstantVal_1059_, v_numParams_1060_, v_instImplicit_1057_, v___x_1061_, v_params_1056_, v_self_1066_, v_a_1077_, v___x_1073_, v_n_1062_, v_levelParams_1063_, v_a_1064_, v___x_1079_, v_ctorType_1065_, v___y_1067_, v___y_1068_, v___y_1069_, v___y_1070_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1088_; 
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1088_ == 0)
{
lean_object* v_unused_1089_; 
v_unused_1089_ = lean_ctor_get(v___x_1080_, 0);
lean_dec(v_unused_1089_);
v___x_1082_ = v___x_1080_;
v_isShared_1083_ = v_isSharedCheck_1088_;
goto v_resetjp_1081_;
}
else
{
lean_dec(v___x_1080_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1088_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1084_ = lean_box(0);
if (v_isShared_1083_ == 0)
{
lean_ctor_set(v___x_1082_, 0, v___x_1084_);
v___x_1086_ = v___x_1082_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
return v___x_1086_;
}
}
}
else
{
lean_object* v_a_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1097_; 
v_a_1090_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1097_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1097_ == 0)
{
v___x_1092_ = v___x_1080_;
v_isShared_1093_ = v_isSharedCheck_1097_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_a_1090_);
lean_dec(v___x_1080_);
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
lean_dec_ref(v___x_1073_);
lean_dec_ref(v_self_1066_);
lean_dec_ref(v_ctorType_1065_);
lean_dec(v_levelParams_1063_);
lean_dec(v_n_1062_);
lean_dec(v___x_1061_);
lean_dec(v_numParams_1060_);
lean_dec_ref(v_toConstantVal_1059_);
lean_dec_ref(v_params_1056_);
v_a_1098_ = lean_ctor_get(v___x_1076_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1076_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1100_ = v___x_1076_;
v_isShared_1101_ = v_isSharedCheck_1105_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1076_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__0___boxed(lean_object* v_params_1106_, lean_object* v_instImplicit_1107_, lean_object* v_projDecls_1108_, lean_object* v_toConstantVal_1109_, lean_object* v_numParams_1110_, lean_object* v___x_1111_, lean_object* v_n_1112_, lean_object* v_levelParams_1113_, lean_object* v_a_1114_, lean_object* v_ctorType_1115_, lean_object* v_self_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_){
_start:
{
uint8_t v_instImplicit_boxed_1122_; uint8_t v_a_19869__boxed_1123_; lean_object* v_res_1124_; 
v_instImplicit_boxed_1122_ = lean_unbox(v_instImplicit_1107_);
v_a_19869__boxed_1123_ = lean_unbox(v_a_1114_);
v_res_1124_ = l_Lean_Meta_mkProjections___lam__0(v_params_1106_, v_instImplicit_boxed_1122_, v_projDecls_1108_, v_toConstantVal_1109_, v_numParams_1110_, v___x_1111_, v_n_1112_, v_levelParams_1113_, v_a_19869__boxed_1123_, v_ctorType_1115_, v_self_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_);
lean_dec(v___y_1120_);
lean_dec_ref(v___y_1119_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec_ref(v_projDecls_1108_);
return v_res_1124_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = lean_mk_string_unchecked("self", 4, 4);
return v___x_1125_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1126_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__0, &l_Lean_Meta_mkProjections___lam__1___closed__0_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__0);
v___x_1127_ = l_Lean_Name_mkStr1(v___x_1126_);
return v___x_1127_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1128_; 
v___x_1128_ = lean_mk_string_unchecked("projection generation failed, `", 31, 31);
return v___x_1128_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__2, &l_Lean_Meta_mkProjections___lam__1___closed__2_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__2);
v___x_1130_ = l_Lean_stringToMessageData(v___x_1129_);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_mk_string_unchecked("` is an ill-formed inductive datatype", 37, 37);
return v___x_1131_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__4, &l_Lean_Meta_mkProjections___lam__1___closed__4_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__4);
v___x_1133_ = l_Lean_stringToMessageData(v___x_1132_);
return v___x_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1(uint8_t v_instImplicit_1134_, lean_object* v_projDecls_1135_, lean_object* v_toConstantVal_1136_, lean_object* v_numParams_1137_, lean_object* v___x_1138_, lean_object* v_n_1139_, lean_object* v_levelParams_1140_, uint8_t v_a_1141_, lean_object* v_params_1142_, lean_object* v_ctorType_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v___y_1150_; lean_object* v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; lean_object* v___y_1154_; lean_object* v___y_1155_; uint8_t v___y_1156_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___f_1162_; lean_object* v___x_1168_; uint8_t v___x_1169_; 
v___x_1160_ = lean_box(v_instImplicit_1134_);
v___x_1161_ = lean_box(v_a_1141_);
lean_inc(v_n_1139_);
lean_inc(v___x_1138_);
lean_inc(v_numParams_1137_);
lean_inc_ref(v_params_1142_);
v___f_1162_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__0___boxed), 16, 10);
lean_closure_set(v___f_1162_, 0, v_params_1142_);
lean_closure_set(v___f_1162_, 1, v___x_1160_);
lean_closure_set(v___f_1162_, 2, v_projDecls_1135_);
lean_closure_set(v___f_1162_, 3, v_toConstantVal_1136_);
lean_closure_set(v___f_1162_, 4, v_numParams_1137_);
lean_closure_set(v___f_1162_, 5, v___x_1138_);
lean_closure_set(v___f_1162_, 6, v_n_1139_);
lean_closure_set(v___f_1162_, 7, v_levelParams_1140_);
lean_closure_set(v___f_1162_, 8, v___x_1161_);
lean_closure_set(v___f_1162_, 9, v_ctorType_1143_);
v___x_1168_ = lean_array_get_size(v_params_1142_);
v___x_1169_ = lean_nat_dec_eq(v___x_1168_, v_numParams_1137_);
lean_dec(v_numParams_1137_);
if (v___x_1169_ == 0)
{
lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
lean_dec_ref(v___f_1162_);
lean_dec_ref(v_params_1142_);
lean_dec(v___x_1138_);
v___x_1170_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__3, &l_Lean_Meta_mkProjections___lam__1___closed__3_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__3);
v___x_1171_ = l_Lean_MessageData_ofConstName(v_n_1139_, v___x_1169_);
v___x_1172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1170_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
v___x_1173_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__5, &l_Lean_Meta_mkProjections___lam__1___closed__5_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__5);
v___x_1174_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1174_, 0, v___x_1172_);
lean_ctor_set(v___x_1174_, 1, v___x_1173_);
v___x_1175_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1174_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
return v___x_1175_;
}
else
{
goto v___jp_1163_;
}
v___jp_1149_:
{
lean_object* v___x_1157_; uint8_t v___x_1158_; lean_object* v___x_1159_; 
v___x_1157_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__1___closed__1, &l_Lean_Meta_mkProjections___lam__1___closed__1_once, _init_l_Lean_Meta_mkProjections___lam__1___closed__1);
v___x_1158_ = 0;
v___x_1159_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_mkProjections_spec__9___redArg(v___x_1157_, v___y_1156_, v___y_1153_, v___y_1151_, v___x_1158_, v___y_1155_, v___y_1152_, v___y_1154_, v___y_1150_);
return v___x_1159_;
}
v___jp_1163_:
{
lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1164_ = l_Lean_Expr_const___override(v_n_1139_, v___x_1138_);
v___x_1165_ = l_Lean_mkAppN(v___x_1164_, v_params_1142_);
lean_dec_ref(v_params_1142_);
if (v_instImplicit_1134_ == 0)
{
uint8_t v___x_1166_; 
v___x_1166_ = 0;
v___y_1150_ = v___y_1147_;
v___y_1151_ = v___f_1162_;
v___y_1152_ = v___y_1145_;
v___y_1153_ = v___x_1165_;
v___y_1154_ = v___y_1146_;
v___y_1155_ = v___y_1144_;
v___y_1156_ = v___x_1166_;
goto v___jp_1149_;
}
else
{
uint8_t v___x_1167_; 
v___x_1167_ = 3;
v___y_1150_ = v___y_1147_;
v___y_1151_ = v___f_1162_;
v___y_1152_ = v___y_1145_;
v___y_1153_ = v___x_1165_;
v___y_1154_ = v___y_1146_;
v___y_1155_ = v___y_1144_;
v___y_1156_ = v___x_1167_;
goto v___jp_1149_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__1___boxed(lean_object* v_instImplicit_1176_, lean_object* v_projDecls_1177_, lean_object* v_toConstantVal_1178_, lean_object* v_numParams_1179_, lean_object* v___x_1180_, lean_object* v_n_1181_, lean_object* v_levelParams_1182_, lean_object* v_a_1183_, lean_object* v_params_1184_, lean_object* v_ctorType_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_){
_start:
{
uint8_t v_instImplicit_boxed_1191_; uint8_t v_a_19973__boxed_1192_; lean_object* v_res_1193_; 
v_instImplicit_boxed_1191_ = lean_unbox(v_instImplicit_1176_);
v_a_19973__boxed_1192_ = lean_unbox(v_a_1183_);
v_res_1193_ = l_Lean_Meta_mkProjections___lam__1(v_instImplicit_boxed_1191_, v_projDecls_1177_, v_toConstantVal_1178_, v_numParams_1179_, v___x_1180_, v_n_1181_, v_levelParams_1182_, v_a_19973__boxed_1192_, v_params_1184_, v_ctorType_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_dec(v___y_1187_);
lean_dec_ref(v___y_1186_);
return v_res_1193_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1194_; 
v___x_1194_ = l_instMonadEIO(lean_box(0));
return v___x_1194_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1(void){
_start:
{
lean_object* v___f_1195_; 
v___f_1195_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__0___boxed), 5, 0);
return v___f_1195_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2(void){
_start:
{
lean_object* v___f_1196_; 
v___f_1196_ = lean_alloc_closure((void*)(l_Lean_Core_instMonadCoreM___lam__1___boxed), 7, 0);
return v___f_1196_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___f_1197_; 
v___f_1197_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__0___boxed), 7, 0);
return v___f_1197_;
}
}
static lean_object* _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4(void){
_start:
{
lean_object* v___f_1198_; 
v___f_1198_ = lean_alloc_closure((void*)(l_Lean_Meta_instMonadMetaM___lam__1___boxed), 9, 0);
return v___f_1198_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(lean_object* v_msg_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v_toApplicative_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1268_; 
v___x_1205_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__0);
v___x_1206_ = l_StateRefT_x27_instMonad___redArg(v___x_1205_);
v_toApplicative_1207_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1268_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1268_ == 0)
{
lean_object* v_unused_1269_; 
v_unused_1269_ = lean_ctor_get(v___x_1206_, 1);
lean_dec(v_unused_1269_);
v___x_1209_ = v___x_1206_;
v_isShared_1210_ = v_isSharedCheck_1268_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_toApplicative_1207_);
lean_dec(v___x_1206_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1268_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v_toFunctor_1211_; lean_object* v_toSeq_1212_; lean_object* v_toSeqLeft_1213_; lean_object* v_toSeqRight_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1266_; 
v_toFunctor_1211_ = lean_ctor_get(v_toApplicative_1207_, 0);
v_toSeq_1212_ = lean_ctor_get(v_toApplicative_1207_, 2);
v_toSeqLeft_1213_ = lean_ctor_get(v_toApplicative_1207_, 3);
v_toSeqRight_1214_ = lean_ctor_get(v_toApplicative_1207_, 4);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_toApplicative_1207_);
if (v_isSharedCheck_1266_ == 0)
{
lean_object* v_unused_1267_; 
v_unused_1267_ = lean_ctor_get(v_toApplicative_1207_, 1);
lean_dec(v_unused_1267_);
v___x_1216_ = v_toApplicative_1207_;
v_isShared_1217_ = v_isSharedCheck_1266_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_toSeqRight_1214_);
lean_inc(v_toSeqLeft_1213_);
lean_inc(v_toSeq_1212_);
lean_inc(v_toFunctor_1211_);
lean_dec(v_toApplicative_1207_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1266_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v___f_1218_; lean_object* v___f_1219_; lean_object* v___f_1220_; lean_object* v___f_1221_; lean_object* v___x_1222_; lean_object* v___f_1223_; lean_object* v___f_1224_; lean_object* v___f_1225_; lean_object* v___x_1227_; 
v___f_1218_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__1);
v___f_1219_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__2);
lean_inc_ref(v_toFunctor_1211_);
v___f_1220_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1220_, 0, v_toFunctor_1211_);
v___f_1221_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1221_, 0, v_toFunctor_1211_);
v___x_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1222_, 0, v___f_1220_);
lean_ctor_set(v___x_1222_, 1, v___f_1221_);
v___f_1223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1223_, 0, v_toSeqRight_1214_);
v___f_1224_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1224_, 0, v_toSeqLeft_1213_);
v___f_1225_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1225_, 0, v_toSeq_1212_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 4, v___f_1223_);
lean_ctor_set(v___x_1216_, 3, v___f_1224_);
lean_ctor_set(v___x_1216_, 2, v___f_1225_);
lean_ctor_set(v___x_1216_, 1, v___f_1218_);
lean_ctor_set(v___x_1216_, 0, v___x_1222_);
v___x_1227_ = v___x_1216_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1222_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v___f_1218_);
lean_ctor_set(v_reuseFailAlloc_1265_, 2, v___f_1225_);
lean_ctor_set(v_reuseFailAlloc_1265_, 3, v___f_1224_);
lean_ctor_set(v_reuseFailAlloc_1265_, 4, v___f_1223_);
v___x_1227_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
lean_object* v___x_1229_; 
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 1, v___f_1219_);
lean_ctor_set(v___x_1209_, 0, v___x_1227_);
v___x_1229_ = v___x_1209_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___x_1227_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v___f_1219_);
v___x_1229_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
lean_object* v___x_1230_; lean_object* v_toApplicative_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1262_; 
v___x_1230_ = l_StateRefT_x27_instMonad___redArg(v___x_1229_);
v_toApplicative_1231_ = lean_ctor_get(v___x_1230_, 0);
v_isSharedCheck_1262_ = !lean_is_exclusive(v___x_1230_);
if (v_isSharedCheck_1262_ == 0)
{
lean_object* v_unused_1263_; 
v_unused_1263_ = lean_ctor_get(v___x_1230_, 1);
lean_dec(v_unused_1263_);
v___x_1233_ = v___x_1230_;
v_isShared_1234_ = v_isSharedCheck_1262_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_toApplicative_1231_);
lean_dec(v___x_1230_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1262_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v_toFunctor_1235_; lean_object* v_toSeq_1236_; lean_object* v_toSeqLeft_1237_; lean_object* v_toSeqRight_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1260_; 
v_toFunctor_1235_ = lean_ctor_get(v_toApplicative_1231_, 0);
v_toSeq_1236_ = lean_ctor_get(v_toApplicative_1231_, 2);
v_toSeqLeft_1237_ = lean_ctor_get(v_toApplicative_1231_, 3);
v_toSeqRight_1238_ = lean_ctor_get(v_toApplicative_1231_, 4);
v_isSharedCheck_1260_ = !lean_is_exclusive(v_toApplicative_1231_);
if (v_isSharedCheck_1260_ == 0)
{
lean_object* v_unused_1261_; 
v_unused_1261_ = lean_ctor_get(v_toApplicative_1231_, 1);
lean_dec(v_unused_1261_);
v___x_1240_ = v_toApplicative_1231_;
v_isShared_1241_ = v_isSharedCheck_1260_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_toSeqRight_1238_);
lean_inc(v_toSeqLeft_1237_);
lean_inc(v_toSeq_1236_);
lean_inc(v_toFunctor_1235_);
lean_dec(v_toApplicative_1231_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1260_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v___f_1242_; lean_object* v___f_1243_; lean_object* v___f_1244_; lean_object* v___f_1245_; lean_object* v___x_1246_; lean_object* v___f_1247_; lean_object* v___f_1248_; lean_object* v___f_1249_; lean_object* v___x_1251_; 
v___f_1242_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__3);
v___f_1243_ = lean_obj_once(&l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4, &l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4_once, _init_l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___closed__4);
lean_inc_ref(v_toFunctor_1235_);
v___f_1244_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1244_, 0, v_toFunctor_1235_);
v___f_1245_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1245_, 0, v_toFunctor_1235_);
v___x_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___f_1244_);
lean_ctor_set(v___x_1246_, 1, v___f_1245_);
v___f_1247_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1247_, 0, v_toSeqRight_1238_);
v___f_1248_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1248_, 0, v_toSeqLeft_1237_);
v___f_1249_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1249_, 0, v_toSeq_1236_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set(v___x_1240_, 4, v___f_1247_);
lean_ctor_set(v___x_1240_, 3, v___f_1248_);
lean_ctor_set(v___x_1240_, 2, v___f_1249_);
lean_ctor_set(v___x_1240_, 1, v___f_1242_);
lean_ctor_set(v___x_1240_, 0, v___x_1246_);
v___x_1251_ = v___x_1240_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1259_; 
v_reuseFailAlloc_1259_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1259_, 0, v___x_1246_);
lean_ctor_set(v_reuseFailAlloc_1259_, 1, v___f_1242_);
lean_ctor_set(v_reuseFailAlloc_1259_, 2, v___f_1249_);
lean_ctor_set(v_reuseFailAlloc_1259_, 3, v___f_1248_);
lean_ctor_set(v_reuseFailAlloc_1259_, 4, v___f_1247_);
v___x_1251_ = v_reuseFailAlloc_1259_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
lean_object* v___x_1253_; 
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 1, v___f_1243_);
lean_ctor_set(v___x_1233_, 0, v___x_1251_);
v___x_1253_ = v___x_1233_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1251_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v___f_1243_);
v___x_1253_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_14714__overap_1256_; lean_object* v___x_1257_; 
v___x_1254_ = lean_box(0);
v___x_1255_ = l_instInhabitedOfMonad___redArg(v___x_1253_, v___x_1254_);
v___x_14714__overap_1256_ = lean_panic_fn_borrowed(v___x_1255_, v_msg_1199_);
lean_dec(v___x_1255_);
lean_inc(v___y_1203_);
lean_inc_ref(v___y_1202_);
lean_inc(v___y_1201_);
lean_inc_ref(v___y_1200_);
v___x_1257_ = lean_apply_5(v___x_14714__overap_1256_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, lean_box(0));
return v___x_1257_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1___boxed(lean_object* v_msg_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v_msg_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
return v_res_1276_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_mk_string_unchecked("` is not a constructor", 22, 22);
return v___x_1277_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
v___x_1278_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__0);
v___x_1279_ = l_Lean_stringToMessageData(v___x_1278_);
return v___x_1279_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2(void){
_start:
{
lean_object* v___x_1280_; 
v___x_1280_ = lean_mk_string_unchecked("Lean.MonadEnv", 13, 13);
return v___x_1280_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3(void){
_start:
{
lean_object* v___x_1281_; 
v___x_1281_ = lean_mk_string_unchecked("Lean.isCtor\?", 12, 12);
return v___x_1281_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4(void){
_start:
{
lean_object* v___x_1282_; 
v___x_1282_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_1282_;
}
}
static lean_object* _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5(void){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1283_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__4);
v___x_1284_ = lean_unsigned_to_nat(11u);
v___x_1285_ = lean_unsigned_to_nat(122u);
v___x_1286_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__3);
v___x_1287_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__2);
v___x_1288_ = l_mkPanicMessageWithDecl(v___x_1287_, v___x_1286_, v___x_1285_, v___x_1284_, v___x_1283_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(lean_object* v_constName_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v___x_1303_; lean_object* v_env_1304_; uint8_t v___x_1305_; lean_object* v___x_1306_; 
v___x_1303_ = lean_st_ref_get(v___y_1293_);
v_env_1304_ = lean_ctor_get(v___x_1303_, 0);
lean_inc_ref(v_env_1304_);
lean_dec(v___x_1303_);
v___x_1305_ = 0;
lean_inc(v_constName_1289_);
v___x_1306_ = l_Lean_Environment_findAsync_x3f(v_env_1304_, v_constName_1289_, v___x_1305_);
if (lean_obj_tag(v___x_1306_) == 1)
{
lean_object* v_val_1307_; uint8_t v_kind_1308_; 
v_val_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_val_1307_);
lean_dec_ref(v___x_1306_);
v_kind_1308_ = lean_ctor_get_uint8(v_val_1307_, sizeof(void*)*3);
if (v_kind_1308_ == 6)
{
lean_object* v___x_1309_; 
v___x_1309_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_1307_);
if (lean_obj_tag(v___x_1309_) == 6)
{
lean_object* v_val_1310_; lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1317_; 
lean_dec(v_constName_1289_);
v_val_1310_ = lean_ctor_get(v___x_1309_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v___x_1309_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1312_ = v___x_1309_;
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
else
{
lean_inc(v_val_1310_);
lean_dec(v___x_1309_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1317_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v___x_1315_; 
if (v_isShared_1313_ == 0)
{
lean_ctor_set_tag(v___x_1312_, 0);
v___x_1315_ = v___x_1312_;
goto v_reusejp_1314_;
}
else
{
lean_object* v_reuseFailAlloc_1316_; 
v_reuseFailAlloc_1316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1316_, 0, v_val_1310_);
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
lean_object* v___x_1318_; lean_object* v___x_1319_; 
lean_dec_ref(v___x_1309_);
v___x_1318_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5);
v___x_1319_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v___x_1318_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1322_; uint8_t v_isShared_1323_; uint8_t v_isSharedCheck_1328_; 
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1322_ = v___x_1319_;
v_isShared_1323_ = v_isSharedCheck_1328_;
goto v_resetjp_1321_;
}
else
{
lean_inc(v_a_1320_);
lean_dec(v___x_1319_);
v___x_1322_ = lean_box(0);
v_isShared_1323_ = v_isSharedCheck_1328_;
goto v_resetjp_1321_;
}
v_resetjp_1321_:
{
if (lean_obj_tag(v_a_1320_) == 0)
{
lean_del_object(v___x_1322_);
goto v___jp_1295_;
}
else
{
lean_object* v_val_1324_; lean_object* v___x_1326_; 
lean_dec(v_constName_1289_);
v_val_1324_ = lean_ctor_get(v_a_1320_, 0);
lean_inc(v_val_1324_);
lean_dec_ref(v_a_1320_);
if (v_isShared_1323_ == 0)
{
lean_ctor_set(v___x_1322_, 0, v_val_1324_);
v___x_1326_ = v___x_1322_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_val_1324_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
else
{
lean_object* v_a_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1336_; 
lean_dec(v_constName_1289_);
v_a_1329_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1336_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1336_ == 0)
{
v___x_1331_ = v___x_1319_;
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_a_1329_);
lean_dec(v___x_1319_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1336_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1334_; 
if (v_isShared_1332_ == 0)
{
v___x_1334_ = v___x_1331_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v_a_1329_);
v___x_1334_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
return v___x_1334_;
}
}
}
}
}
else
{
lean_dec(v_val_1307_);
goto v___jp_1295_;
}
}
else
{
lean_dec(v___x_1306_);
goto v___jp_1295_;
}
v___jp_1295_:
{
lean_object* v___x_1296_; uint8_t v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1296_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_1297_ = 0;
v___x_1298_ = l_Lean_MessageData_ofConstName(v_constName_1289_, v___x_1297_);
v___x_1299_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1296_);
lean_ctor_set(v___x_1299_, 1, v___x_1298_);
v___x_1300_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__1);
v___x_1301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1301_, 0, v___x_1299_);
lean_ctor_set(v___x_1301_, 1, v___x_1300_);
v___x_1302_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1301_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_);
return v___x_1302_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___boxed(lean_object* v_constName_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(v_constName_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_);
lean_dec(v___y_1341_);
lean_dec_ref(v___y_1340_);
lean_dec(v___y_1339_);
lean_dec_ref(v___y_1338_);
return v_res_1343_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_mk_string_unchecked("` is not an inductive type", 26, 26);
return v___x_1344_;
}
}
static lean_object* _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0, &l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__0);
v___x_1346_ = l_Lean_stringToMessageData(v___x_1345_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(lean_object* v_constName_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v___x_1353_; lean_object* v_env_1354_; lean_object* v___x_1355_; 
v___x_1353_ = lean_st_ref_get(v___y_1351_);
v_env_1354_ = lean_ctor_get(v___x_1353_, 0);
lean_inc_ref(v_env_1354_);
lean_dec(v___x_1353_);
lean_inc(v_constName_1347_);
v___x_1355_ = l_Lean_isInductiveCore_x3f(v_env_1354_, v_constName_1347_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_object* v___x_1356_; uint8_t v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; 
v___x_1356_ = lean_obj_once(&l_Lean_Meta_getStructureName___closed__1, &l_Lean_Meta_getStructureName___closed__1_once, _init_l_Lean_Meta_getStructureName___closed__1);
v___x_1357_ = 0;
v___x_1358_ = l_Lean_MessageData_ofConstName(v_constName_1347_, v___x_1357_);
v___x_1359_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1356_);
lean_ctor_set(v___x_1359_, 1, v___x_1358_);
v___x_1360_ = lean_obj_once(&l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1, &l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1_once, _init_l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___closed__1);
v___x_1361_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1361_, 0, v___x_1359_);
lean_ctor_set(v___x_1361_, 1, v___x_1360_);
v___x_1362_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1361_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
return v___x_1362_;
}
else
{
lean_object* v_val_1363_; lean_object* v___x_1365_; uint8_t v_isShared_1366_; uint8_t v_isSharedCheck_1370_; 
lean_dec(v_constName_1347_);
v_val_1363_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1370_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1365_ = v___x_1355_;
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
else
{
lean_inc(v_val_1363_);
lean_dec(v___x_1355_);
v___x_1365_ = lean_box(0);
v_isShared_1366_ = v_isSharedCheck_1370_;
goto v_resetjp_1364_;
}
v_resetjp_1364_:
{
lean_object* v___x_1368_; 
if (v_isShared_1366_ == 0)
{
lean_ctor_set_tag(v___x_1365_, 0);
v___x_1368_ = v___x_1365_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_val_1363_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0___boxed(lean_object* v_constName_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(v_constName_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v___y_1372_);
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(lean_object* v_a_1378_, lean_object* v_a_1379_){
_start:
{
if (lean_obj_tag(v_a_1378_) == 0)
{
lean_object* v___x_1380_; 
v___x_1380_ = l_List_reverse___redArg(v_a_1379_);
return v___x_1380_;
}
else
{
lean_object* v_head_1381_; lean_object* v_tail_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1391_; 
v_head_1381_ = lean_ctor_get(v_a_1378_, 0);
v_tail_1382_ = lean_ctor_get(v_a_1378_, 1);
v_isSharedCheck_1391_ = !lean_is_exclusive(v_a_1378_);
if (v_isSharedCheck_1391_ == 0)
{
v___x_1384_ = v_a_1378_;
v_isShared_1385_ = v_isSharedCheck_1391_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_tail_1382_);
lean_inc(v_head_1381_);
lean_dec(v_a_1378_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1391_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; lean_object* v___x_1388_; 
v___x_1386_ = l_Lean_mkLevelParam(v_head_1381_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 1, v_a_1379_);
lean_ctor_set(v___x_1384_, 0, v___x_1386_);
v___x_1388_ = v___x_1384_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1386_);
lean_ctor_set(v_reuseFailAlloc_1390_, 1, v_a_1379_);
v___x_1388_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
v_a_1378_ = v_tail_1382_;
v_a_1379_ = v___x_1388_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__0(void){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = lean_mk_string_unchecked("cannot generate projections for `", 33, 33);
return v___x_1392_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__1(void){
_start:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__0, &l_Lean_Meta_mkProjections___lam__2___closed__0_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__0);
v___x_1394_ = l_Lean_stringToMessageData(v___x_1393_);
return v___x_1394_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__2(void){
_start:
{
lean_object* v___x_1395_; 
v___x_1395_ = lean_mk_string_unchecked("`, does not have exactly one constructor", 40, 40);
return v___x_1395_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1396_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__2, &l_Lean_Meta_mkProjections___lam__2___closed__2_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__2);
v___x_1397_ = l_Lean_stringToMessageData(v___x_1396_);
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2(lean_object* v_n_1398_, lean_object* v___x_1399_, uint8_t v_instImplicit_1400_, lean_object* v_projDecls_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v___x_1407_; 
lean_inc(v_n_1398_);
v___x_1407_ = l_Lean_getConstInfoInduct___at___00Lean_Meta_mkProjections_spec__0(v_n_1398_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
if (lean_obj_tag(v___x_1407_) == 0)
{
lean_object* v_a_1408_; lean_object* v___y_1410_; lean_object* v___y_1411_; lean_object* v___y_1412_; lean_object* v___y_1413_; lean_object* v___x_1449_; lean_object* v___x_1450_; uint8_t v___x_1451_; 
v_a_1408_ = lean_ctor_get(v___x_1407_, 0);
lean_inc(v_a_1408_);
lean_dec_ref(v___x_1407_);
v___x_1449_ = l_Lean_InductiveVal_numCtors(v_a_1408_);
v___x_1450_ = lean_unsigned_to_nat(1u);
v___x_1451_ = lean_nat_dec_eq(v___x_1449_, v___x_1450_);
lean_dec(v___x_1449_);
if (v___x_1451_ == 0)
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
lean_dec(v_a_1408_);
lean_dec_ref(v_projDecls_1401_);
v___x_1452_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__1, &l_Lean_Meta_mkProjections___lam__2___closed__1_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__1);
v___x_1453_ = l_Lean_MessageData_ofConstName(v_n_1398_, v___x_1451_);
v___x_1454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1452_);
lean_ctor_set(v___x_1454_, 1, v___x_1453_);
v___x_1455_ = lean_obj_once(&l_Lean_Meta_mkProjections___lam__2___closed__3, &l_Lean_Meta_mkProjections___lam__2___closed__3_once, _init_l_Lean_Meta_mkProjections___lam__2___closed__3);
v___x_1456_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1456_, 0, v___x_1454_);
lean_ctor_set(v___x_1456_, 1, v___x_1455_);
v___x_1457_ = l_Lean_throwError___at___00Lean_Meta_getStructureName_spec__0___redArg(v___x_1456_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
return v___x_1457_;
}
else
{
v___y_1410_ = v___y_1402_;
v___y_1411_ = v___y_1403_;
v___y_1412_ = v___y_1404_;
v___y_1413_ = v___y_1405_;
goto v___jp_1409_;
}
v___jp_1409_:
{
lean_object* v_toConstantVal_1414_; lean_object* v_numParams_1415_; lean_object* v_ctors_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v_toConstantVal_1414_ = lean_ctor_get(v_a_1408_, 0);
lean_inc_ref(v_toConstantVal_1414_);
v_numParams_1415_ = lean_ctor_get(v_a_1408_, 1);
lean_inc(v_numParams_1415_);
v_ctors_1416_ = lean_ctor_get(v_a_1408_, 4);
lean_inc(v_ctors_1416_);
lean_dec(v_a_1408_);
v___x_1417_ = l_List_head_x21___redArg(v___x_1399_, v_ctors_1416_);
lean_dec(v_ctors_1416_);
v___x_1418_ = l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1(v___x_1417_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1418_) == 0)
{
lean_object* v_a_1419_; lean_object* v_levelParams_1420_; lean_object* v_type_1421_; lean_object* v___x_1422_; 
v_a_1419_ = lean_ctor_get(v___x_1418_, 0);
lean_inc(v_a_1419_);
lean_dec_ref(v___x_1418_);
v_levelParams_1420_ = lean_ctor_get(v_toConstantVal_1414_, 1);
lean_inc(v_levelParams_1420_);
v_type_1421_ = lean_ctor_get(v_toConstantVal_1414_, 2);
lean_inc_ref(v_type_1421_);
lean_dec_ref(v_toConstantVal_1414_);
v___x_1422_ = l_Lean_Meta_isPropFormerType(v_type_1421_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v_toConstantVal_1423_; lean_object* v_a_1424_; lean_object* v_type_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___f_1429_; lean_object* v___x_1430_; uint8_t v___x_1431_; lean_object* v___x_1432_; 
v_toConstantVal_1423_ = lean_ctor_get(v_a_1419_, 0);
lean_inc_ref(v_toConstantVal_1423_);
lean_dec(v_a_1419_);
v_a_1424_ = lean_ctor_get(v___x_1422_, 0);
lean_inc(v_a_1424_);
lean_dec_ref(v___x_1422_);
v_type_1425_ = lean_ctor_get(v_toConstantVal_1423_, 2);
lean_inc_ref(v_type_1425_);
v___x_1426_ = lean_box(0);
lean_inc(v_levelParams_1420_);
v___x_1427_ = l_List_mapTR_loop___at___00Lean_Meta_mkProjections_spec__2(v_levelParams_1420_, v___x_1426_);
v___x_1428_ = lean_box(v_instImplicit_1400_);
lean_inc(v_numParams_1415_);
v___f_1429_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__1___boxed), 15, 8);
lean_closure_set(v___f_1429_, 0, v___x_1428_);
lean_closure_set(v___f_1429_, 1, v_projDecls_1401_);
lean_closure_set(v___f_1429_, 2, v_toConstantVal_1423_);
lean_closure_set(v___f_1429_, 3, v_numParams_1415_);
lean_closure_set(v___f_1429_, 4, v___x_1427_);
lean_closure_set(v___f_1429_, 5, v_n_1398_);
lean_closure_set(v___f_1429_, 6, v_levelParams_1420_);
lean_closure_set(v___f_1429_, 7, v_a_1424_);
v___x_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1430_, 0, v_numParams_1415_);
v___x_1431_ = 0;
v___x_1432_ = l_Lean_Meta_forallBoundedTelescope___at___00Lean_Meta_mkProjections_spec__10___redArg(v_type_1425_, v___x_1430_, v___f_1429_, v___x_1431_, v___x_1431_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
return v___x_1432_;
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1440_; 
lean_dec(v_levelParams_1420_);
lean_dec(v_a_1419_);
lean_dec(v_numParams_1415_);
lean_dec_ref(v_projDecls_1401_);
lean_dec(v_n_1398_);
v_a_1433_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1435_ = v___x_1422_;
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1422_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1438_; 
if (v_isShared_1436_ == 0)
{
v___x_1438_ = v___x_1435_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1433_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
lean_dec(v_numParams_1415_);
lean_dec_ref(v_toConstantVal_1414_);
lean_dec_ref(v_projDecls_1401_);
lean_dec(v_n_1398_);
v_a_1441_ = lean_ctor_get(v___x_1418_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1418_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1418_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1418_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1447_, 0, v_a_1441_);
v___x_1446_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
return v___x_1446_;
}
}
}
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec_ref(v_projDecls_1401_);
lean_dec(v_n_1398_);
v_a_1458_ = lean_ctor_get(v___x_1407_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1407_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1407_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1407_);
v___x_1460_ = lean_box(0);
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
v_resetjp_1459_:
{
lean_object* v___x_1463_; 
if (v_isShared_1461_ == 0)
{
v___x_1463_ = v___x_1460_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v_a_1458_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___lam__2___boxed(lean_object* v_n_1466_, lean_object* v___x_1467_, lean_object* v_instImplicit_1468_, lean_object* v_projDecls_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_, lean_object* v___y_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_){
_start:
{
uint8_t v_instImplicit_boxed_1475_; lean_object* v_res_1476_; 
v_instImplicit_boxed_1475_ = lean_unbox(v_instImplicit_1468_);
v_res_1476_ = l_Lean_Meta_mkProjections___lam__2(v_n_1466_, v___x_1467_, v_instImplicit_boxed_1475_, v_projDecls_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_);
lean_dec(v___y_1473_);
lean_dec_ref(v___y_1472_);
lean_dec(v___y_1471_);
lean_dec_ref(v___y_1470_);
lean_dec(v___x_1467_);
return v_res_1476_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__0(void){
_start:
{
lean_object* v___x_1477_; 
v___x_1477_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1477_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__1(void){
_start:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1478_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__0, &l_Lean_Meta_mkProjections___closed__0_once, _init_l_Lean_Meta_mkProjections___closed__0);
v___x_1479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1479_, 0, v___x_1478_);
return v___x_1479_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__2(void){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1480_ = lean_unsigned_to_nat(32u);
v___x_1481_ = lean_mk_empty_array_with_capacity(v___x_1480_);
v___x_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1481_);
return v___x_1482_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__3(void){
_start:
{
size_t v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1483_ = ((size_t)5ULL);
v___x_1484_ = lean_unsigned_to_nat(0u);
v___x_1485_ = lean_unsigned_to_nat(32u);
v___x_1486_ = lean_mk_empty_array_with_capacity(v___x_1485_);
v___x_1487_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__2, &l_Lean_Meta_mkProjections___closed__2_once, _init_l_Lean_Meta_mkProjections___closed__2);
v___x_1488_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1488_, 0, v___x_1487_);
lean_ctor_set(v___x_1488_, 1, v___x_1486_);
lean_ctor_set(v___x_1488_, 2, v___x_1484_);
lean_ctor_set(v___x_1488_, 3, v___x_1484_);
lean_ctor_set_usize(v___x_1488_, 4, v___x_1483_);
return v___x_1488_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__4(void){
_start:
{
lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1489_ = lean_box(1);
v___x_1490_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__3, &l_Lean_Meta_mkProjections___closed__3_once, _init_l_Lean_Meta_mkProjections___closed__3);
v___x_1491_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__1, &l_Lean_Meta_mkProjections___closed__1_once, _init_l_Lean_Meta_mkProjections___closed__1);
v___x_1492_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1491_);
lean_ctor_set(v___x_1492_, 1, v___x_1490_);
lean_ctor_set(v___x_1492_, 2, v___x_1489_);
return v___x_1492_;
}
}
static lean_object* _init_l_Lean_Meta_mkProjections___closed__5(void){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = lean_unsigned_to_nat(0u);
v___x_1494_ = lean_mk_empty_array_with_capacity(v___x_1493_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections(lean_object* v_n_1495_, lean_object* v_projDecls_1496_, uint8_t v_instImplicit_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_){
_start:
{
lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___f_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1503_ = lean_box(0);
v___x_1504_ = lean_box(v_instImplicit_1497_);
v___f_1505_ = lean_alloc_closure((void*)(l_Lean_Meta_mkProjections___lam__2___boxed), 9, 4);
lean_closure_set(v___f_1505_, 0, v_n_1495_);
lean_closure_set(v___f_1505_, 1, v___x_1503_);
lean_closure_set(v___f_1505_, 2, v___x_1504_);
lean_closure_set(v___f_1505_, 3, v_projDecls_1496_);
v___x_1506_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__4, &l_Lean_Meta_mkProjections___closed__4_once, _init_l_Lean_Meta_mkProjections___closed__4);
v___x_1507_ = lean_obj_once(&l_Lean_Meta_mkProjections___closed__5, &l_Lean_Meta_mkProjections___closed__5_once, _init_l_Lean_Meta_mkProjections___closed__5);
v___x_1508_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_mkProjections_spec__11___redArg(v___x_1506_, v___x_1507_, v___f_1505_, v_a_1498_, v_a_1499_, v_a_1500_, v_a_1501_);
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkProjections___boxed(lean_object* v_n_1509_, lean_object* v_projDecls_1510_, lean_object* v_instImplicit_1511_, lean_object* v_a_1512_, lean_object* v_a_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_){
_start:
{
uint8_t v_instImplicit_boxed_1517_; lean_object* v_res_1518_; 
v_instImplicit_boxed_1517_ = lean_unbox(v_instImplicit_1511_);
v_res_1518_ = l_Lean_Meta_mkProjections(v_n_1509_, v_projDecls_1510_, v_instImplicit_boxed_1517_, v_a_1512_, v_a_1513_, v_a_1514_, v_a_1515_);
lean_dec(v_a_1515_);
lean_dec_ref(v_a_1514_);
lean_dec(v_a_1513_);
lean_dec_ref(v_a_1512_);
return v_res_1518_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(uint8_t v_instImplicit_1519_, lean_object* v_as_1520_, size_t v_sz_1521_, size_t v_i_1522_, lean_object* v_b_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
lean_object* v___x_1529_; 
v___x_1529_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___redArg(v_instImplicit_1519_, v_as_1520_, v_sz_1521_, v_i_1522_, v_b_1523_, v___y_1524_, v___y_1526_, v___y_1527_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3___boxed(lean_object* v_instImplicit_1530_, lean_object* v_as_1531_, lean_object* v_sz_1532_, lean_object* v_i_1533_, lean_object* v_b_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
uint8_t v_instImplicit_boxed_1540_; size_t v_sz_boxed_1541_; size_t v_i_boxed_1542_; lean_object* v_res_1543_; 
v_instImplicit_boxed_1540_ = lean_unbox(v_instImplicit_1530_);
v_sz_boxed_1541_ = lean_unbox_usize(v_sz_1532_);
lean_dec(v_sz_1532_);
v_i_boxed_1542_ = lean_unbox_usize(v_i_1533_);
lean_dec(v_i_1533_);
v_res_1543_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkProjections_spec__3(v_instImplicit_boxed_1540_, v_as_1531_, v_sz_boxed_1541_, v_i_boxed_1542_, v_b_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
lean_dec_ref(v_as_1531_);
return v_res_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(lean_object* v_declName_1544_, uint8_t v_s_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___redArg(v_declName_1544_, v_s_1545_, v___y_1547_, v___y_1549_);
return v___x_1551_;
}
}
LEAN_EXPORT lean_object* l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6___boxed(lean_object* v_declName_1552_, lean_object* v_s_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_, lean_object* v___y_1557_, lean_object* v___y_1558_){
_start:
{
uint8_t v_s_boxed_1559_; lean_object* v_res_1560_; 
v_s_boxed_1559_ = lean_unbox(v_s_1553_);
v_res_1560_ = l_Lean_setReducibilityStatus___at___00Lean_setReducibleAttribute___at___00Lean_Meta_mkProjections_spec__5_spec__6(v_declName_1552_, v_s_boxed_1559_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_);
lean_dec(v___y_1557_);
lean_dec_ref(v___y_1556_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(lean_object* v_00_u03b1_1561_, lean_object* v_ref_1562_, lean_object* v_msg_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v___x_1569_; 
v___x_1569_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___redArg(v_ref_1562_, v_msg_1563_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6___boxed(lean_object* v_00_u03b1_1570_, lean_object* v_ref_1571_, lean_object* v_msg_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_){
_start:
{
lean_object* v_res_1578_; 
v_res_1578_ = l_Lean_throwErrorAt___at___00Lean_Meta_mkProjections_spec__6(v_00_u03b1_1570_, v_ref_1571_, v_msg_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_);
lean_dec(v___y_1576_);
lean_dec_ref(v___y_1575_);
lean_dec(v___y_1574_);
lean_dec_ref(v___y_1573_);
lean_dec(v_ref_1571_);
return v_res_1578_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(lean_object* v_00_u03b1_1579_, lean_object* v_x_1580_, uint8_t v_isExporting_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_){
_start:
{
lean_object* v___x_1587_; 
v___x_1587_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___redArg(v_x_1580_, v_isExporting_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9___boxed(lean_object* v_00_u03b1_1588_, lean_object* v_x_1589_, lean_object* v_isExporting_1590_, lean_object* v___y_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
uint8_t v_isExporting_boxed_1596_; lean_object* v_res_1597_; 
v_isExporting_boxed_1596_ = lean_unbox(v_isExporting_1590_);
v_res_1597_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7_spec__9(v_00_u03b1_1588_, v_x_1589_, v_isExporting_boxed_1596_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec(v___y_1592_);
lean_dec_ref(v___y_1591_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(lean_object* v_00_u03b1_1598_, lean_object* v_x_1599_, uint8_t v_when_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___redArg(v_x_1599_, v_when_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
return v___x_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7___boxed(lean_object* v_00_u03b1_1607_, lean_object* v_x_1608_, lean_object* v_when_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
uint8_t v_when_boxed_1615_; lean_object* v_res_1616_; 
v_when_boxed_1615_ = lean_unbox(v_when_1609_);
v_res_1616_ = l_Lean_withoutExporting___at___00Lean_Meta_mkProjections_spec__7(v_00_u03b1_1607_, v_x_1608_, v_when_boxed_1615_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec_ref(v___y_1610_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(lean_object* v_upperBound_1617_, lean_object* v_projDecls_1618_, lean_object* v___x_1619_, lean_object* v___x_1620_, uint8_t v_instImplicit_1621_, lean_object* v___x_1622_, lean_object* v_params_1623_, lean_object* v_self_1624_, lean_object* v_a_1625_, lean_object* v___x_1626_, lean_object* v_n_1627_, lean_object* v___x_1628_, uint8_t v_a_1629_, lean_object* v_inst_1630_, lean_object* v_R_1631_, lean_object* v_a_1632_, lean_object* v_b_1633_, lean_object* v_c_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v___x_1640_; 
v___x_1640_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___redArg(v_upperBound_1617_, v_projDecls_1618_, v___x_1619_, v___x_1620_, v_instImplicit_1621_, v___x_1622_, v_params_1623_, v_self_1624_, v_a_1625_, v___x_1626_, v_n_1627_, v___x_1628_, v_a_1629_, v_a_1632_, v_b_1633_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8___boxed(lean_object** _args){
lean_object* v_upperBound_1641_ = _args[0];
lean_object* v_projDecls_1642_ = _args[1];
lean_object* v___x_1643_ = _args[2];
lean_object* v___x_1644_ = _args[3];
lean_object* v_instImplicit_1645_ = _args[4];
lean_object* v___x_1646_ = _args[5];
lean_object* v_params_1647_ = _args[6];
lean_object* v_self_1648_ = _args[7];
lean_object* v_a_1649_ = _args[8];
lean_object* v___x_1650_ = _args[9];
lean_object* v_n_1651_ = _args[10];
lean_object* v___x_1652_ = _args[11];
lean_object* v_a_1653_ = _args[12];
lean_object* v_inst_1654_ = _args[13];
lean_object* v_R_1655_ = _args[14];
lean_object* v_a_1656_ = _args[15];
lean_object* v_b_1657_ = _args[16];
lean_object* v_c_1658_ = _args[17];
lean_object* v___y_1659_ = _args[18];
lean_object* v___y_1660_ = _args[19];
lean_object* v___y_1661_ = _args[20];
lean_object* v___y_1662_ = _args[21];
lean_object* v___y_1663_ = _args[22];
_start:
{
uint8_t v_instImplicit_boxed_1664_; uint8_t v_a_20726__boxed_1665_; lean_object* v_res_1666_; 
v_instImplicit_boxed_1664_ = lean_unbox(v_instImplicit_1645_);
v_a_20726__boxed_1665_ = lean_unbox(v_a_1653_);
v_res_1666_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_mkProjections_spec__8(v_upperBound_1641_, v_projDecls_1642_, v___x_1643_, v___x_1644_, v_instImplicit_boxed_1664_, v___x_1646_, v_params_1647_, v_self_1648_, v_a_1649_, v___x_1650_, v_n_1651_, v___x_1652_, v_a_20726__boxed_1665_, v_inst_1654_, v_R_1655_, v_a_1656_, v_b_1657_, v_c_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec_ref(v_projDecls_1642_);
lean_dec(v_upperBound_1641_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(lean_object* v_k_1667_, uint8_t v_allowLevelAssignments_1668_, lean_object* v___y_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_){
_start:
{
lean_object* v___x_1674_; 
v___x_1674_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_1668_, v_k_1667_, v___y_1669_, v___y_1670_, v___y_1671_, v___y_1672_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; lean_object* v___x_1677_; uint8_t v_isShared_1678_; uint8_t v_isSharedCheck_1682_; 
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1682_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1682_ == 0)
{
v___x_1677_ = v___x_1674_;
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
else
{
lean_inc(v_a_1675_);
lean_dec(v___x_1674_);
v___x_1677_ = lean_box(0);
v_isShared_1678_ = v_isSharedCheck_1682_;
goto v_resetjp_1676_;
}
v_resetjp_1676_:
{
lean_object* v___x_1680_; 
if (v_isShared_1678_ == 0)
{
v___x_1680_ = v___x_1677_;
goto v_reusejp_1679_;
}
else
{
lean_object* v_reuseFailAlloc_1681_; 
v_reuseFailAlloc_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1681_, 0, v_a_1675_);
v___x_1680_ = v_reuseFailAlloc_1681_;
goto v_reusejp_1679_;
}
v_reusejp_1679_:
{
return v___x_1680_;
}
}
}
else
{
lean_object* v_a_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1690_; 
v_a_1683_ = lean_ctor_get(v___x_1674_, 0);
v_isSharedCheck_1690_ = !lean_is_exclusive(v___x_1674_);
if (v_isSharedCheck_1690_ == 0)
{
v___x_1685_ = v___x_1674_;
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_a_1683_);
lean_dec(v___x_1674_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1690_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1688_; 
if (v_isShared_1686_ == 0)
{
v___x_1688_ = v___x_1685_;
goto v_reusejp_1687_;
}
else
{
lean_object* v_reuseFailAlloc_1689_; 
v_reuseFailAlloc_1689_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1689_, 0, v_a_1683_);
v___x_1688_ = v_reuseFailAlloc_1689_;
goto v_reusejp_1687_;
}
v_reusejp_1687_:
{
return v___x_1688_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg___boxed(lean_object* v_k_1691_, lean_object* v_allowLevelAssignments_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1698_; lean_object* v_res_1699_; 
v_allowLevelAssignments_boxed_1698_ = lean_unbox(v_allowLevelAssignments_1692_);
v_res_1699_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v_k_1691_, v_allowLevelAssignments_boxed_1698_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
return v_res_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(lean_object* v_00_u03b1_1700_, lean_object* v_k_1701_, uint8_t v_allowLevelAssignments_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_){
_start:
{
lean_object* v___x_1708_; 
v___x_1708_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v_k_1701_, v_allowLevelAssignments_1702_, v___y_1703_, v___y_1704_, v___y_1705_, v___y_1706_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___boxed(lean_object* v_00_u03b1_1709_, lean_object* v_k_1710_, lean_object* v_allowLevelAssignments_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_1717_; lean_object* v_res_1718_; 
v_allowLevelAssignments_boxed_1717_ = lean_unbox(v_allowLevelAssignments_1711_);
v_res_1718_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1(v_00_u03b1_1709_, v_k_1710_, v_allowLevelAssignments_boxed_1717_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_);
lean_dec(v___y_1715_);
lean_dec_ref(v___y_1714_);
lean_dec(v___y_1713_);
lean_dec_ref(v___y_1712_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(lean_object* v_as_1719_, size_t v_sz_1720_, size_t v_i_1721_, lean_object* v_b_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_){
_start:
{
uint8_t v___x_1728_; 
v___x_1728_ = lean_usize_dec_lt(v_i_1721_, v_sz_1720_);
if (v___x_1728_ == 0)
{
lean_object* v___x_1729_; 
v___x_1729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1729_, 0, v_b_1722_);
return v___x_1729_;
}
else
{
lean_object* v_snd_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1785_; 
v_snd_1730_ = lean_ctor_get(v_b_1722_, 1);
v_isSharedCheck_1785_ = !lean_is_exclusive(v_b_1722_);
if (v_isSharedCheck_1785_ == 0)
{
lean_object* v_unused_1786_; 
v_unused_1786_ = lean_ctor_get(v_b_1722_, 0);
lean_dec(v_unused_1786_);
v___x_1732_ = v_b_1722_;
v_isShared_1733_ = v_isSharedCheck_1785_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_snd_1730_);
lean_dec(v_b_1722_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1785_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v_array_1734_; lean_object* v_start_1735_; lean_object* v_stop_1736_; lean_object* v___x_1737_; uint8_t v___x_1738_; 
v_array_1734_ = lean_ctor_get(v_snd_1730_, 0);
v_start_1735_ = lean_ctor_get(v_snd_1730_, 1);
v_stop_1736_ = lean_ctor_get(v_snd_1730_, 2);
v___x_1737_ = lean_box(0);
v___x_1738_ = lean_nat_dec_lt(v_start_1735_, v_stop_1736_);
if (v___x_1738_ == 0)
{
lean_object* v___x_1740_; 
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 0, v___x_1737_);
v___x_1740_ = v___x_1732_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1742_; 
v_reuseFailAlloc_1742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1742_, 0, v___x_1737_);
lean_ctor_set(v_reuseFailAlloc_1742_, 1, v_snd_1730_);
v___x_1740_ = v_reuseFailAlloc_1742_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
lean_object* v___x_1741_; 
v___x_1741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1741_, 0, v___x_1740_);
return v___x_1741_;
}
}
else
{
lean_object* v___x_1744_; uint8_t v_isShared_1745_; uint8_t v_isSharedCheck_1781_; 
lean_inc(v_stop_1736_);
lean_inc(v_start_1735_);
lean_inc_ref(v_array_1734_);
v_isSharedCheck_1781_ = !lean_is_exclusive(v_snd_1730_);
if (v_isSharedCheck_1781_ == 0)
{
lean_object* v_unused_1782_; lean_object* v_unused_1783_; lean_object* v_unused_1784_; 
v_unused_1782_ = lean_ctor_get(v_snd_1730_, 2);
lean_dec(v_unused_1782_);
v_unused_1783_ = lean_ctor_get(v_snd_1730_, 1);
lean_dec(v_unused_1783_);
v_unused_1784_ = lean_ctor_get(v_snd_1730_, 0);
lean_dec(v_unused_1784_);
v___x_1744_ = v_snd_1730_;
v_isShared_1745_ = v_isSharedCheck_1781_;
goto v_resetjp_1743_;
}
else
{
lean_dec(v_snd_1730_);
v___x_1744_ = lean_box(0);
v_isShared_1745_ = v_isSharedCheck_1781_;
goto v_resetjp_1743_;
}
v_resetjp_1743_:
{
lean_object* v_a_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
v_a_1746_ = lean_array_uget_borrowed(v_as_1719_, v_i_1721_);
v___x_1747_ = lean_array_fget_borrowed(v_array_1734_, v_start_1735_);
lean_inc(v___x_1747_);
lean_inc(v_a_1746_);
v___x_1748_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1746_, v___x_1747_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_);
if (lean_obj_tag(v___x_1748_) == 0)
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1772_; 
v_a_1749_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1751_ = v___x_1748_;
v_isShared_1752_ = v_isSharedCheck_1772_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1748_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1772_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1756_; 
v___x_1753_ = lean_unsigned_to_nat(1u);
v___x_1754_ = lean_nat_add(v_start_1735_, v___x_1753_);
lean_dec(v_start_1735_);
if (v_isShared_1745_ == 0)
{
lean_ctor_set(v___x_1744_, 1, v___x_1754_);
v___x_1756_ = v___x_1744_;
goto v_reusejp_1755_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_array_1734_);
lean_ctor_set(v_reuseFailAlloc_1771_, 1, v___x_1754_);
lean_ctor_set(v_reuseFailAlloc_1771_, 2, v_stop_1736_);
v___x_1756_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1755_;
}
v_reusejp_1755_:
{
uint8_t v___x_1757_; 
v___x_1757_ = lean_unbox(v_a_1749_);
if (v___x_1757_ == 0)
{
lean_object* v___x_1758_; lean_object* v___x_1760_; 
v___x_1758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1758_, 0, v_a_1749_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 1, v___x_1756_);
lean_ctor_set(v___x_1732_, 0, v___x_1758_);
v___x_1760_ = v___x_1732_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1764_; 
v_reuseFailAlloc_1764_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1764_, 0, v___x_1758_);
lean_ctor_set(v_reuseFailAlloc_1764_, 1, v___x_1756_);
v___x_1760_ = v_reuseFailAlloc_1764_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
lean_object* v___x_1762_; 
if (v_isShared_1752_ == 0)
{
lean_ctor_set(v___x_1751_, 0, v___x_1760_);
v___x_1762_ = v___x_1751_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v___x_1760_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
else
{
lean_object* v___x_1766_; 
lean_del_object(v___x_1751_);
lean_dec(v_a_1749_);
if (v_isShared_1733_ == 0)
{
lean_ctor_set(v___x_1732_, 1, v___x_1756_);
lean_ctor_set(v___x_1732_, 0, v___x_1737_);
v___x_1766_ = v___x_1732_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1770_; 
v_reuseFailAlloc_1770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1770_, 0, v___x_1737_);
lean_ctor_set(v_reuseFailAlloc_1770_, 1, v___x_1756_);
v___x_1766_ = v_reuseFailAlloc_1770_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
size_t v___x_1767_; size_t v___x_1768_; 
v___x_1767_ = ((size_t)1ULL);
v___x_1768_ = lean_usize_add(v_i_1721_, v___x_1767_);
v_i_1721_ = v___x_1768_;
v_b_1722_ = v___x_1766_;
goto _start;
}
}
}
}
}
else
{
lean_object* v_a_1773_; lean_object* v___x_1775_; uint8_t v_isShared_1776_; uint8_t v_isSharedCheck_1780_; 
lean_del_object(v___x_1744_);
lean_dec(v_stop_1736_);
lean_dec(v_start_1735_);
lean_dec_ref(v_array_1734_);
lean_del_object(v___x_1732_);
v_a_1773_ = lean_ctor_get(v___x_1748_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1775_ = v___x_1748_;
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
else
{
lean_inc(v_a_1773_);
lean_dec(v___x_1748_);
v___x_1775_ = lean_box(0);
v_isShared_1776_ = v_isSharedCheck_1780_;
goto v_resetjp_1774_;
}
v_resetjp_1774_:
{
lean_object* v___x_1778_; 
if (v_isShared_1776_ == 0)
{
v___x_1778_ = v___x_1775_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_a_1773_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0___boxed(lean_object* v_as_1787_, lean_object* v_sz_1788_, lean_object* v_i_1789_, lean_object* v_b_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
size_t v_sz_boxed_1796_; size_t v_i_boxed_1797_; lean_object* v_res_1798_; 
v_sz_boxed_1796_ = lean_unbox_usize(v_sz_1788_);
lean_dec(v_sz_1788_);
v_i_boxed_1797_ = lean_unbox_usize(v_i_1789_);
lean_dec(v_i_1789_);
v_res_1798_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(v_as_1787_, v_sz_boxed_1796_, v_i_boxed_1797_, v_b_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_);
lean_dec(v___y_1794_);
lean_dec_ref(v___y_1793_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
lean_dec_ref(v_as_1787_);
return v_res_1798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(uint8_t v___x_1799_, lean_object* v_params2_1800_, lean_object* v___x_1801_, lean_object* v_params1_1802_, uint8_t v___x_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_){
_start:
{
if (v___x_1799_ == 0)
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
lean_dec(v___x_1801_);
lean_dec_ref(v_params2_1800_);
v___x_1809_ = lean_box(v___x_1799_);
v___x_1810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1810_, 0, v___x_1809_);
return v___x_1810_;
}
else
{
lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; size_t v_sz_1815_; size_t v___x_1816_; lean_object* v___x_1817_; 
v___x_1811_ = lean_unsigned_to_nat(0u);
v___x_1812_ = l_Array_toSubarray___redArg(v_params2_1800_, v___x_1811_, v___x_1801_);
v___x_1813_ = lean_box(0);
v___x_1814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1814_, 0, v___x_1813_);
lean_ctor_set(v___x_1814_, 1, v___x_1812_);
v_sz_1815_ = lean_array_size(v_params1_1802_);
v___x_1816_ = ((size_t)0ULL);
v___x_1817_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__0(v_params1_1802_, v_sz_1815_, v___x_1816_, v___x_1814_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_);
if (lean_obj_tag(v___x_1817_) == 0)
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1831_; 
v_a_1818_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1831_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1831_ == 0)
{
v___x_1820_ = v___x_1817_;
v_isShared_1821_ = v_isSharedCheck_1831_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1817_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1831_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v_fst_1822_; 
v_fst_1822_ = lean_ctor_get(v_a_1818_, 0);
lean_inc(v_fst_1822_);
lean_dec(v_a_1818_);
if (lean_obj_tag(v_fst_1822_) == 0)
{
lean_object* v___x_1823_; lean_object* v___x_1825_; 
v___x_1823_ = lean_box(v___x_1803_);
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 0, v___x_1823_);
v___x_1825_ = v___x_1820_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v___x_1823_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
else
{
lean_object* v_val_1827_; lean_object* v___x_1829_; 
v_val_1827_ = lean_ctor_get(v_fst_1822_, 0);
lean_inc(v_val_1827_);
lean_dec_ref(v_fst_1822_);
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 0, v_val_1827_);
v___x_1829_ = v___x_1820_;
goto v_reusejp_1828_;
}
else
{
lean_object* v_reuseFailAlloc_1830_; 
v_reuseFailAlloc_1830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1830_, 0, v_val_1827_);
v___x_1829_ = v_reuseFailAlloc_1830_;
goto v_reusejp_1828_;
}
v_reusejp_1828_:
{
return v___x_1829_;
}
}
}
}
else
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1839_; 
v_a_1832_ = lean_ctor_get(v___x_1817_, 0);
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1817_);
if (v_isSharedCheck_1839_ == 0)
{
v___x_1834_ = v___x_1817_;
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1817_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1839_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1837_; 
if (v_isShared_1835_ == 0)
{
v___x_1837_ = v___x_1834_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v_a_1832_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed(lean_object* v___x_1840_, lean_object* v_params2_1841_, lean_object* v___x_1842_, lean_object* v_params1_1843_, lean_object* v___x_1844_, lean_object* v___y_1845_, lean_object* v___y_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_){
_start:
{
uint8_t v___x_2097__boxed_1850_; uint8_t v___x_2099__boxed_1851_; lean_object* v_res_1852_; 
v___x_2097__boxed_1850_ = lean_unbox(v___x_1840_);
v___x_2099__boxed_1851_ = lean_unbox(v___x_1844_);
v_res_1852_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0(v___x_2097__boxed_1850_, v_params2_1841_, v___x_1842_, v_params1_1843_, v___x_2099__boxed_1851_, v___y_1845_, v___y_1846_, v___y_1847_, v___y_1848_);
lean_dec(v___y_1848_);
lean_dec_ref(v___y_1847_);
lean_dec(v___y_1846_);
lean_dec_ref(v___y_1845_);
lean_dec_ref(v_params1_1843_);
return v_res_1852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(lean_object* v_params1_1853_, lean_object* v_params2_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_){
_start:
{
lean_object* v___x_1860_; lean_object* v___x_1861_; uint8_t v___x_1862_; uint8_t v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___y_1866_; uint8_t v___x_1867_; lean_object* v___x_1868_; 
v___x_1860_ = lean_array_get_size(v_params1_1853_);
v___x_1861_ = lean_array_get_size(v_params2_1854_);
v___x_1862_ = lean_nat_dec_eq(v___x_1860_, v___x_1861_);
v___x_1863_ = 1;
v___x_1864_ = lean_box(v___x_1862_);
v___x_1865_ = lean_box(v___x_1863_);
v___y_1866_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___lam__0___boxed), 10, 5);
lean_closure_set(v___y_1866_, 0, v___x_1864_);
lean_closure_set(v___y_1866_, 1, v_params2_1854_);
lean_closure_set(v___y_1866_, 2, v___x_1861_);
lean_closure_set(v___y_1866_, 3, v_params1_1853_);
lean_closure_set(v___y_1866_, 4, v___x_1865_);
v___x_1867_ = 0;
v___x_1868_ = l_Lean_Meta_withNewMCtxDepth___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams_spec__1___redArg(v___y_1866_, v___x_1867_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_);
return v___x_1868_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams___boxed(lean_object* v_params1_1869_, lean_object* v_params2_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_){
_start:
{
lean_object* v_res_1876_; 
v_res_1876_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params1_1869_, v_params2_1870_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_);
lean_dec(v_a_1874_);
lean_dec_ref(v_a_1873_);
lean_dec(v_a_1872_);
lean_dec_ref(v_a_1871_);
return v_res_1876_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(lean_object* v_declName_1877_, lean_object* v___y_1878_){
_start:
{
lean_object* v___x_1880_; lean_object* v_env_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1880_ = lean_st_ref_get(v___y_1878_);
v_env_1881_ = lean_ctor_get(v___x_1880_, 0);
lean_inc_ref(v_env_1881_);
lean_dec(v___x_1880_);
v___x_1882_ = l_Lean_Environment_getProjectionFnInfo_x3f(v_env_1881_, v_declName_1877_);
v___x_1883_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1883_, 0, v___x_1882_);
return v___x_1883_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg___boxed(lean_object* v_declName_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v_res_1887_; 
v_res_1887_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1884_, v___y_1885_);
lean_dec(v___y_1885_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(lean_object* v_declName_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_){
_start:
{
lean_object* v___x_1894_; 
v___x_1894_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1888_, v___y_1892_);
return v___x_1894_;
}
}
LEAN_EXPORT lean_object* l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___boxed(lean_object* v_declName_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_){
_start:
{
lean_object* v_res_1901_; 
v_res_1901_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0(v_declName_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
return v_res_1901_;
}
}
static lean_object* _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0(void){
_start:
{
lean_object* v___x_1902_; lean_object* v_dummy_1903_; 
v___x_1902_ = lean_box(0);
v_dummy_1903_ = l_Lean_Expr_sort___override(v___x_1902_);
return v_dummy_1903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(lean_object* v_ctor_1904_, lean_object* v_induct_1905_, lean_object* v_params_1906_, lean_object* v_idx_1907_, lean_object* v_e_1908_, lean_object* v_x_x3f_1909_, lean_object* v_a_1910_, lean_object* v_a_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_){
_start:
{
if (lean_obj_tag(v_e_1908_) == 11)
{
lean_object* v_typeName_1921_; lean_object* v_idx_1922_; lean_object* v_struct_1923_; uint8_t v___y_1971_; uint8_t v___x_1974_; 
v_typeName_1921_ = lean_ctor_get(v_e_1908_, 0);
v_idx_1922_ = lean_ctor_get(v_e_1908_, 1);
v_struct_1923_ = lean_ctor_get(v_e_1908_, 2);
lean_inc_ref(v_struct_1923_);
v___x_1974_ = lean_nat_dec_eq(v_idx_1922_, v_idx_1907_);
if (v___x_1974_ == 0)
{
v___y_1971_ = v___x_1974_;
goto v___jp_1970_;
}
else
{
uint8_t v___x_1975_; 
v___x_1975_ = lean_name_eq(v_induct_1905_, v_typeName_1921_);
v___y_1971_ = v___x_1975_;
goto v___jp_1970_;
}
v___jp_1924_:
{
lean_object* v___x_1925_; 
lean_inc(v_a_1913_);
lean_inc_ref(v_a_1912_);
lean_inc(v_a_1911_);
lean_inc_ref(v_a_1910_);
v___x_1925_ = lean_infer_type(v_e_1908_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
if (lean_obj_tag(v___x_1925_) == 0)
{
lean_object* v_a_1926_; lean_object* v___x_1927_; 
v_a_1926_ = lean_ctor_get(v___x_1925_, 0);
lean_inc(v_a_1926_);
lean_dec_ref(v___x_1925_);
lean_inc(v_a_1913_);
lean_inc_ref(v_a_1912_);
lean_inc(v_a_1911_);
lean_inc_ref(v_a_1910_);
v___x_1927_ = lean_whnf(v_a_1926_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v_a_1928_; lean_object* v_dummy_1929_; lean_object* v_nargs_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1935_; 
v_a_1928_ = lean_ctor_get(v___x_1927_, 0);
lean_inc(v_a_1928_);
lean_dec_ref(v___x_1927_);
v_dummy_1929_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_1930_ = l_Lean_Expr_getAppNumArgs(v_a_1928_);
lean_inc(v_nargs_1930_);
v___x_1931_ = lean_mk_array(v_nargs_1930_, v_dummy_1929_);
v___x_1932_ = lean_unsigned_to_nat(1u);
v___x_1933_ = lean_nat_sub(v_nargs_1930_, v___x_1932_);
lean_dec(v_nargs_1930_);
v___x_1934_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_1928_, v___x_1931_, v___x_1933_);
v___x_1935_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params_1906_, v___x_1934_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
if (lean_obj_tag(v___x_1935_) == 0)
{
lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1945_; 
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1945_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1945_ == 0)
{
v___x_1938_ = v___x_1935_;
v_isShared_1939_ = v_isSharedCheck_1945_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1935_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1945_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
uint8_t v___x_1940_; 
v___x_1940_ = lean_unbox(v_a_1936_);
lean_dec(v_a_1936_);
if (v___x_1940_ == 0)
{
lean_del_object(v___x_1938_);
lean_dec_ref(v_struct_1923_);
goto v___jp_1915_;
}
else
{
lean_object* v___x_1941_; lean_object* v___x_1943_; 
v___x_1941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1941_, 0, v_struct_1923_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v___x_1941_);
v___x_1943_ = v___x_1938_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v___x_1941_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
}
else
{
lean_object* v_a_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1953_; 
lean_dec_ref(v_struct_1923_);
v_a_1946_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1953_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1948_ = v___x_1935_;
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_a_1946_);
lean_dec(v___x_1935_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1953_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
lean_object* v___x_1951_; 
if (v_isShared_1949_ == 0)
{
v___x_1951_ = v___x_1948_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_a_1946_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
}
else
{
lean_object* v_a_1954_; lean_object* v___x_1956_; uint8_t v_isShared_1957_; uint8_t v_isSharedCheck_1961_; 
lean_dec_ref(v_struct_1923_);
lean_dec_ref(v_params_1906_);
v_a_1954_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1961_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1956_ = v___x_1927_;
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
else
{
lean_inc(v_a_1954_);
lean_dec(v___x_1927_);
v___x_1956_ = lean_box(0);
v_isShared_1957_ = v_isSharedCheck_1961_;
goto v_resetjp_1955_;
}
v_resetjp_1955_:
{
lean_object* v___x_1959_; 
if (v_isShared_1957_ == 0)
{
v___x_1959_ = v___x_1956_;
goto v_reusejp_1958_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_a_1954_);
v___x_1959_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1958_;
}
v_reusejp_1958_:
{
return v___x_1959_;
}
}
}
}
else
{
lean_object* v_a_1962_; lean_object* v___x_1964_; uint8_t v_isShared_1965_; uint8_t v_isSharedCheck_1969_; 
lean_dec_ref(v_struct_1923_);
lean_dec_ref(v_params_1906_);
v_a_1962_ = lean_ctor_get(v___x_1925_, 0);
v_isSharedCheck_1969_ = !lean_is_exclusive(v___x_1925_);
if (v_isSharedCheck_1969_ == 0)
{
v___x_1964_ = v___x_1925_;
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
else
{
lean_inc(v_a_1962_);
lean_dec(v___x_1925_);
v___x_1964_ = lean_box(0);
v_isShared_1965_ = v_isSharedCheck_1969_;
goto v_resetjp_1963_;
}
v_resetjp_1963_:
{
lean_object* v___x_1967_; 
if (v_isShared_1965_ == 0)
{
v___x_1967_ = v___x_1964_;
goto v_reusejp_1966_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_a_1962_);
v___x_1967_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1966_;
}
v_reusejp_1966_:
{
return v___x_1967_;
}
}
}
}
v___jp_1970_:
{
if (v___y_1971_ == 0)
{
lean_dec_ref(v_struct_1923_);
lean_dec_ref(v_e_1908_);
lean_dec_ref(v_params_1906_);
goto v___jp_1915_;
}
else
{
if (lean_obj_tag(v_x_x3f_1909_) == 0)
{
goto v___jp_1924_;
}
else
{
lean_object* v_val_1972_; uint8_t v___x_1973_; 
v_val_1972_ = lean_ctor_get(v_x_x3f_1909_, 0);
v___x_1973_ = lean_expr_eqv(v_val_1972_, v_struct_1923_);
if (v___x_1973_ == 0)
{
lean_dec_ref(v_struct_1923_);
lean_dec_ref(v_e_1908_);
lean_dec_ref(v_params_1906_);
goto v___jp_1915_;
}
else
{
goto v___jp_1924_;
}
}
}
}
}
else
{
lean_object* v___x_1976_; 
v___x_1976_ = l_Lean_Expr_getAppFn(v_e_1908_);
if (lean_obj_tag(v___x_1976_) == 4)
{
lean_object* v_declName_1977_; lean_object* v___x_1978_; lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_2028_; 
v_declName_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_declName_1977_);
lean_dec_ref(v___x_1976_);
v___x_1978_ = l_Lean_getProjectionFnInfo_x3f___at___00__private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr_spec__0___redArg(v_declName_1977_, v_a_1913_);
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_2028_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_1981_ = v___x_1978_;
v_isShared_1982_ = v_isSharedCheck_2028_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_2028_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___y_1984_; lean_object* v___y_1985_; 
if (lean_obj_tag(v_a_1979_) == 1)
{
lean_object* v_val_2013_; lean_object* v_ctorName_2014_; lean_object* v_numParams_2015_; lean_object* v_i_2016_; uint8_t v___y_2018_; uint8_t v___x_2026_; 
v_val_2013_ = lean_ctor_get(v_a_1979_, 0);
lean_inc(v_val_2013_);
lean_dec_ref(v_a_1979_);
v_ctorName_2014_ = lean_ctor_get(v_val_2013_, 0);
lean_inc(v_ctorName_2014_);
v_numParams_2015_ = lean_ctor_get(v_val_2013_, 1);
lean_inc(v_numParams_2015_);
v_i_2016_ = lean_ctor_get(v_val_2013_, 2);
lean_inc(v_i_2016_);
lean_dec(v_val_2013_);
v___x_2026_ = lean_name_eq(v_ctorName_2014_, v_ctor_1904_);
lean_dec(v_ctorName_2014_);
if (v___x_2026_ == 0)
{
lean_dec(v_i_2016_);
v___y_2018_ = v___x_2026_;
goto v___jp_2017_;
}
else
{
uint8_t v___x_2027_; 
v___x_2027_ = lean_nat_dec_eq(v_i_2016_, v_idx_1907_);
lean_dec(v_i_2016_);
v___y_2018_ = v___x_2027_;
goto v___jp_2017_;
}
v___jp_2017_:
{
if (v___y_2018_ == 0)
{
lean_dec(v_numParams_2015_);
lean_del_object(v___x_1981_);
lean_dec_ref(v_e_1908_);
lean_dec_ref(v_params_1906_);
goto v___jp_1918_;
}
else
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; uint8_t v___x_2022_; 
v___x_2019_ = l_Lean_Expr_getAppNumArgs(v_e_1908_);
v___x_2020_ = lean_unsigned_to_nat(1u);
v___x_2021_ = lean_nat_add(v_numParams_2015_, v___x_2020_);
lean_dec(v_numParams_2015_);
v___x_2022_ = lean_nat_dec_eq(v___x_2019_, v___x_2021_);
lean_dec(v___x_2021_);
lean_dec(v___x_2019_);
if (v___x_2022_ == 0)
{
lean_del_object(v___x_1981_);
lean_dec_ref(v_e_1908_);
lean_dec_ref(v_params_1906_);
goto v___jp_1918_;
}
else
{
lean_object* v___x_2023_; 
v___x_2023_ = l_Lean_Expr_appArg_x21(v_e_1908_);
if (lean_obj_tag(v_x_x3f_1909_) == 0)
{
v___y_1984_ = v___x_2020_;
v___y_1985_ = v___x_2023_;
goto v___jp_1983_;
}
else
{
lean_object* v_val_2024_; uint8_t v___x_2025_; 
v_val_2024_ = lean_ctor_get(v_x_x3f_1909_, 0);
v___x_2025_ = lean_expr_eqv(v_val_2024_, v___x_2023_);
if (v___x_2025_ == 0)
{
lean_dec_ref(v___x_2023_);
lean_del_object(v___x_1981_);
lean_dec_ref(v_e_1908_);
lean_dec_ref(v_params_1906_);
goto v___jp_1918_;
}
else
{
v___y_1984_ = v___x_2020_;
v___y_1985_ = v___x_2023_;
goto v___jp_1983_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1981_);
lean_dec(v_a_1979_);
lean_dec_ref(v_e_1908_);
lean_dec_ref(v_params_1906_);
goto v___jp_1918_;
}
v___jp_1983_:
{
lean_object* v___x_1986_; lean_object* v_dummy_1987_; lean_object* v_nargs_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1986_ = l_Lean_Expr_appFn_x21(v_e_1908_);
lean_dec_ref(v_e_1908_);
v_dummy_1987_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_1988_ = l_Lean_Expr_getAppNumArgs(v___x_1986_);
lean_inc(v_nargs_1988_);
v___x_1989_ = lean_mk_array(v_nargs_1988_, v_dummy_1987_);
v___x_1990_ = lean_nat_sub(v_nargs_1988_, v___y_1984_);
lean_dec(v_nargs_1988_);
v___x_1991_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v___x_1986_, v___x_1989_, v___x_1990_);
v___x_1992_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_sameParams(v_params_1906_, v___x_1991_, v_a_1910_, v_a_1911_, v_a_1912_, v_a_1913_);
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2004_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2004_ == 0)
{
v___x_1995_ = v___x_1992_;
v_isShared_1996_ = v_isSharedCheck_2004_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_a_1993_);
lean_dec(v___x_1992_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2004_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
uint8_t v___x_1997_; 
v___x_1997_ = lean_unbox(v_a_1993_);
lean_dec(v_a_1993_);
if (v___x_1997_ == 0)
{
lean_del_object(v___x_1995_);
lean_dec_ref(v___y_1985_);
lean_del_object(v___x_1981_);
goto v___jp_1918_;
}
else
{
lean_object* v___x_1999_; 
if (v_isShared_1982_ == 0)
{
lean_ctor_set_tag(v___x_1981_, 1);
lean_ctor_set(v___x_1981_, 0, v___y_1985_);
v___x_1999_ = v___x_1981_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2003_; 
v_reuseFailAlloc_2003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2003_, 0, v___y_1985_);
v___x_1999_ = v_reuseFailAlloc_2003_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
lean_object* v___x_2001_; 
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 0, v___x_1999_);
v___x_2001_ = v___x_1995_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2002_; 
v_reuseFailAlloc_2002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2002_, 0, v___x_1999_);
v___x_2001_ = v_reuseFailAlloc_2002_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
return v___x_2001_;
}
}
}
}
}
else
{
lean_object* v_a_2005_; lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2012_; 
lean_dec_ref(v___y_1985_);
lean_del_object(v___x_1981_);
v_a_2005_ = lean_ctor_get(v___x_1992_, 0);
v_isSharedCheck_2012_ = !lean_is_exclusive(v___x_1992_);
if (v_isSharedCheck_2012_ == 0)
{
v___x_2007_ = v___x_1992_;
v_isShared_2008_ = v_isSharedCheck_2012_;
goto v_resetjp_2006_;
}
else
{
lean_inc(v_a_2005_);
lean_dec(v___x_1992_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2012_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2010_; 
if (v_isShared_2008_ == 0)
{
v___x_2010_ = v___x_2007_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_a_2005_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_1976_);
lean_dec_ref(v_e_1908_);
lean_dec_ref(v_params_1906_);
goto v___jp_1918_;
}
}
v___jp_1915_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; 
v___x_1916_ = lean_box(0);
v___x_1917_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1917_, 0, v___x_1916_);
return v___x_1917_;
}
v___jp_1918_:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; 
v___x_1919_ = lean_box(0);
v___x_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1920_, 0, v___x_1919_);
return v___x_1920_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___boxed(lean_object* v_ctor_2029_, lean_object* v_induct_2030_, lean_object* v_params_2031_, lean_object* v_idx_2032_, lean_object* v_e_2033_, lean_object* v_x_x3f_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_, lean_object* v_a_2037_, lean_object* v_a_2038_, lean_object* v_a_2039_){
_start:
{
lean_object* v_res_2040_; 
v_res_2040_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_ctor_2029_, v_induct_2030_, v_params_2031_, v_idx_2032_, v_e_2033_, v_x_x3f_2034_, v_a_2035_, v_a_2036_, v_a_2037_, v_a_2038_);
lean_dec(v_a_2038_);
lean_dec_ref(v_a_2037_);
lean_dec(v_a_2036_);
lean_dec_ref(v_a_2035_);
lean_dec(v_x_x3f_2034_);
lean_dec(v_idx_2032_);
lean_dec(v_induct_2030_);
lean_dec(v_ctor_2029_);
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(lean_object* v_constName_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_){
_start:
{
lean_object* v___x_2047_; lean_object* v_env_2051_; uint8_t v___x_2052_; lean_object* v___x_2053_; 
v___x_2047_ = lean_st_ref_get(v___y_2045_);
v_env_2051_ = lean_ctor_get(v___x_2047_, 0);
lean_inc_ref(v_env_2051_);
lean_dec(v___x_2047_);
v___x_2052_ = 0;
v___x_2053_ = l_Lean_Environment_findAsync_x3f(v_env_2051_, v_constName_2041_, v___x_2052_);
if (lean_obj_tag(v___x_2053_) == 1)
{
lean_object* v_val_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2073_; 
v_val_2054_ = lean_ctor_get(v___x_2053_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2053_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2056_ = v___x_2053_;
v_isShared_2057_ = v_isSharedCheck_2073_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_val_2054_);
lean_dec(v___x_2053_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2073_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
uint8_t v_kind_2058_; 
v_kind_2058_ = lean_ctor_get_uint8(v_val_2054_, sizeof(void*)*3);
if (v_kind_2058_ == 6)
{
lean_object* v___x_2059_; 
v___x_2059_ = l_Lean_AsyncConstantInfo_toConstantInfo(v_val_2054_);
if (lean_obj_tag(v___x_2059_) == 6)
{
lean_object* v_val_2060_; lean_object* v___x_2062_; uint8_t v_isShared_2063_; uint8_t v_isSharedCheck_2070_; 
v_val_2060_ = lean_ctor_get(v___x_2059_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2059_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2062_ = v___x_2059_;
v_isShared_2063_ = v_isSharedCheck_2070_;
goto v_resetjp_2061_;
}
else
{
lean_inc(v_val_2060_);
lean_dec(v___x_2059_);
v___x_2062_ = lean_box(0);
v_isShared_2063_ = v_isSharedCheck_2070_;
goto v_resetjp_2061_;
}
v_resetjp_2061_:
{
lean_object* v___x_2065_; 
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 0, v_val_2060_);
v___x_2065_ = v___x_2056_;
goto v_reusejp_2064_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v_val_2060_);
v___x_2065_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2064_;
}
v_reusejp_2064_:
{
lean_object* v___x_2067_; 
if (v_isShared_2063_ == 0)
{
lean_ctor_set_tag(v___x_2062_, 0);
lean_ctor_set(v___x_2062_, 0, v___x_2065_);
v___x_2067_ = v___x_2062_;
goto v_reusejp_2066_;
}
else
{
lean_object* v_reuseFailAlloc_2068_; 
v_reuseFailAlloc_2068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2068_, 0, v___x_2065_);
v___x_2067_ = v_reuseFailAlloc_2068_;
goto v_reusejp_2066_;
}
v_reusejp_2066_:
{
return v___x_2067_;
}
}
}
}
else
{
lean_object* v___x_2071_; lean_object* v___x_2072_; 
lean_dec_ref(v___x_2059_);
lean_del_object(v___x_2056_);
v___x_2071_ = lean_obj_once(&l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5, &l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5_once, _init_l_Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1___closed__5);
v___x_2072_ = l_panic___at___00Lean_getConstInfoCtor___at___00Lean_Meta_mkProjections_spec__1_spec__1(v___x_2071_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_);
return v___x_2072_;
}
}
else
{
lean_del_object(v___x_2056_);
lean_dec(v_val_2054_);
goto v___jp_2048_;
}
}
}
else
{
lean_dec(v___x_2053_);
goto v___jp_2048_;
}
v___jp_2048_:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; 
v___x_2049_ = lean_box(0);
v___x_2050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2050_, 0, v___x_2049_);
return v___x_2050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0___boxed(lean_object* v_constName_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
lean_object* v_res_2080_; 
v_res_2080_ = l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(v_constName_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
return v_res_2080_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2081_ = lean_box(0);
v___x_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2082_, 0, v___x_2081_);
return v___x_2082_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___x_2083_ = lean_box(0);
v___x_2084_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__0);
v___x_2085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2085_, 0, v___x_2084_);
lean_ctor_set(v___x_2085_, 1, v___x_2083_);
return v___x_2085_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; 
v___x_2086_ = lean_box(0);
v___x_2087_ = lean_box(0);
v___x_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2087_);
lean_ctor_set(v___x_2088_, 1, v___x_2086_);
return v___x_2088_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(lean_object* v_upperBound_2089_, lean_object* v___x_2090_, lean_object* v___x_2091_, lean_object* v_declName_2092_, lean_object* v___x_2093_, lean_object* v___x_2094_, lean_object* v_a_2095_, lean_object* v_val_2096_, lean_object* v_a_2097_, lean_object* v_b_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_){
_start:
{
uint8_t v___x_2104_; 
v___x_2104_ = lean_nat_dec_lt(v_a_2097_, v_upperBound_2089_);
if (v___x_2104_ == 0)
{
lean_object* v___x_2105_; 
lean_dec(v_a_2097_);
lean_dec_ref(v___x_2094_);
v___x_2105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2105_, 0, v_b_2098_);
return v___x_2105_;
}
else
{
lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
lean_dec_ref(v_b_2098_);
v___x_2106_ = l_Lean_instInhabitedExpr;
v___x_2107_ = lean_nat_add(v___x_2090_, v_a_2097_);
v___x_2108_ = lean_array_get_borrowed(v___x_2106_, v___x_2091_, v___x_2107_);
lean_dec(v___x_2107_);
lean_inc(v___x_2108_);
lean_inc_ref(v___x_2094_);
v___x_2109_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_declName_2092_, v___x_2093_, v___x_2094_, v_a_2097_, v___x_2108_, v_a_2095_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2128_; 
v_a_2110_ = lean_ctor_get(v___x_2109_, 0);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2128_ == 0)
{
v___x_2112_ = v___x_2109_;
v_isShared_2113_ = v_isSharedCheck_2128_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2109_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2128_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
if (lean_obj_tag(v_a_2110_) == 1)
{
lean_object* v_val_2114_; uint8_t v___x_2115_; 
v_val_2114_ = lean_ctor_get(v_a_2110_, 0);
lean_inc(v_val_2114_);
lean_dec_ref(v_a_2110_);
v___x_2115_ = lean_expr_eqv(v_val_2114_, v_val_2096_);
lean_dec(v_val_2114_);
if (v___x_2115_ == 0)
{
lean_object* v___x_2116_; lean_object* v___x_2118_; 
lean_dec(v_a_2097_);
lean_dec_ref(v___x_2094_);
v___x_2116_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1);
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 0, v___x_2116_);
v___x_2118_ = v___x_2112_;
goto v_reusejp_2117_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2116_);
v___x_2118_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2117_;
}
v_reusejp_2117_:
{
return v___x_2118_;
}
}
else
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
lean_del_object(v___x_2112_);
v___x_2120_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2);
v___x_2121_ = lean_unsigned_to_nat(1u);
v___x_2122_ = lean_nat_add(v_a_2097_, v___x_2121_);
lean_dec(v_a_2097_);
v_a_2097_ = v___x_2122_;
v_b_2098_ = v___x_2120_;
goto _start;
}
}
else
{
lean_object* v___x_2124_; lean_object* v___x_2126_; 
lean_dec(v_a_2110_);
lean_dec(v_a_2097_);
lean_dec_ref(v___x_2094_);
v___x_2124_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__1);
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 0, v___x_2124_);
v___x_2126_ = v___x_2112_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v___x_2124_);
v___x_2126_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
return v___x_2126_;
}
}
}
}
else
{
lean_object* v_a_2129_; lean_object* v___x_2131_; uint8_t v_isShared_2132_; uint8_t v_isSharedCheck_2136_; 
lean_dec(v_a_2097_);
lean_dec_ref(v___x_2094_);
v_a_2129_ = lean_ctor_get(v___x_2109_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2131_ = v___x_2109_;
v_isShared_2132_ = v_isSharedCheck_2136_;
goto v_resetjp_2130_;
}
else
{
lean_inc(v_a_2129_);
lean_dec(v___x_2109_);
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___boxed(lean_object* v_upperBound_2137_, lean_object* v___x_2138_, lean_object* v___x_2139_, lean_object* v_declName_2140_, lean_object* v___x_2141_, lean_object* v___x_2142_, lean_object* v_a_2143_, lean_object* v_val_2144_, lean_object* v_a_2145_, lean_object* v_b_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_){
_start:
{
lean_object* v_res_2152_; 
v_res_2152_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_upperBound_2137_, v___x_2138_, v___x_2139_, v_declName_2140_, v___x_2141_, v___x_2142_, v_a_2143_, v_val_2144_, v_a_2145_, v_b_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
lean_dec_ref(v_val_2144_);
lean_dec(v_a_2143_);
lean_dec(v___x_2141_);
lean_dec(v_declName_2140_);
lean_dec_ref(v___x_2139_);
lean_dec(v___x_2138_);
lean_dec(v_upperBound_2137_);
return v_res_2152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f(lean_object* v_e_2153_, lean_object* v_p_2154_, lean_object* v_a_2155_, lean_object* v_a_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_){
_start:
{
lean_object* v___x_2160_; 
v___x_2160_ = l_Lean_Expr_getAppFn(v_e_2153_);
if (lean_obj_tag(v___x_2160_) == 4)
{
lean_object* v_declName_2161_; lean_object* v___x_2162_; 
v_declName_2161_ = lean_ctor_get(v___x_2160_, 0);
lean_inc_n(v_declName_2161_, 2);
lean_dec_ref(v___x_2160_);
v___x_2162_ = l_Lean_isCtor_x3f___at___00Lean_Meta_etaStruct_x3f_spec__0(v_declName_2161_, v_a_2155_, v_a_2156_, v_a_2157_, v_a_2158_);
if (lean_obj_tag(v___x_2162_) == 0)
{
lean_object* v_a_2163_; lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2235_; 
v_a_2163_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2235_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2235_ == 0)
{
v___x_2165_ = v___x_2162_;
v_isShared_2166_ = v_isSharedCheck_2235_;
goto v_resetjp_2164_;
}
else
{
lean_inc(v_a_2163_);
lean_dec(v___x_2162_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2235_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
if (lean_obj_tag(v_a_2163_) == 1)
{
lean_object* v_val_2167_; lean_object* v_induct_2168_; lean_object* v_numParams_2169_; lean_object* v_numFields_2170_; lean_object* v___x_2171_; uint8_t v___x_2172_; 
v_val_2167_ = lean_ctor_get(v_a_2163_, 0);
lean_inc(v_val_2167_);
lean_dec_ref(v_a_2163_);
v_induct_2168_ = lean_ctor_get(v_val_2167_, 1);
lean_inc_n(v_induct_2168_, 2);
v_numParams_2169_ = lean_ctor_get(v_val_2167_, 3);
lean_inc(v_numParams_2169_);
v_numFields_2170_ = lean_ctor_get(v_val_2167_, 4);
lean_inc(v_numFields_2170_);
lean_dec(v_val_2167_);
v___x_2171_ = lean_apply_1(v_p_2154_, v_induct_2168_);
v___x_2172_ = lean_unbox(v___x_2171_);
if (v___x_2172_ == 0)
{
lean_object* v___x_2173_; lean_object* v___x_2175_; 
lean_dec(v_numFields_2170_);
lean_dec(v_numParams_2169_);
lean_dec(v_induct_2168_);
lean_dec(v_declName_2161_);
lean_dec_ref(v_e_2153_);
v___x_2173_ = lean_box(0);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v___x_2173_);
v___x_2175_ = v___x_2165_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v___x_2173_);
v___x_2175_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
return v___x_2175_;
}
}
else
{
lean_object* v___x_2177_; uint8_t v___y_2179_; uint8_t v___x_2227_; 
v___x_2177_ = lean_unsigned_to_nat(0u);
v___x_2227_ = lean_nat_dec_lt(v___x_2177_, v_numFields_2170_);
if (v___x_2227_ == 0)
{
v___y_2179_ = v___x_2227_;
goto v___jp_2178_;
}
else
{
lean_object* v___x_2228_; lean_object* v___x_2229_; uint8_t v___x_2230_; 
v___x_2228_ = l_Lean_Expr_getAppNumArgs(v_e_2153_);
v___x_2229_ = lean_nat_add(v_numParams_2169_, v_numFields_2170_);
v___x_2230_ = lean_nat_dec_eq(v___x_2228_, v___x_2229_);
lean_dec(v___x_2229_);
lean_dec(v___x_2228_);
v___y_2179_ = v___x_2230_;
goto v___jp_2178_;
}
v___jp_2178_:
{
if (v___y_2179_ == 0)
{
lean_object* v___x_2180_; lean_object* v___x_2182_; 
lean_dec(v_numFields_2170_);
lean_dec(v_numParams_2169_);
lean_dec(v_induct_2168_);
lean_dec(v_declName_2161_);
lean_dec_ref(v_e_2153_);
v___x_2180_ = lean_box(0);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v___x_2180_);
v___x_2182_ = v___x_2165_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v___x_2180_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
else
{
lean_object* v_dummy_2184_; lean_object* v_nargs_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
lean_del_object(v___x_2165_);
v_dummy_2184_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_2185_ = l_Lean_Expr_getAppNumArgs(v_e_2153_);
lean_inc(v_nargs_2185_);
v___x_2186_ = lean_mk_array(v_nargs_2185_, v_dummy_2184_);
v___x_2187_ = lean_unsigned_to_nat(1u);
v___x_2188_ = lean_nat_sub(v_nargs_2185_, v___x_2187_);
lean_dec(v_nargs_2185_);
v___x_2189_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_2153_, v___x_2186_, v___x_2188_);
lean_inc(v_numParams_2169_);
v___x_2190_ = l_Array_extract___redArg(v___x_2189_, v___x_2177_, v_numParams_2169_);
v___x_2191_ = l_Lean_instInhabitedExpr;
v___x_2192_ = lean_array_get(v___x_2191_, v___x_2189_, v_numParams_2169_);
v___x_2193_ = lean_box(0);
lean_inc_ref(v___x_2190_);
v___x_2194_ = l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr(v_declName_2161_, v_induct_2168_, v___x_2190_, v___x_2177_, v___x_2192_, v___x_2193_, v_a_2155_, v_a_2156_, v_a_2157_, v_a_2158_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2226_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
v_isSharedCheck_2226_ = !lean_is_exclusive(v___x_2194_);
if (v_isSharedCheck_2226_ == 0)
{
v___x_2197_ = v___x_2194_;
v_isShared_2198_ = v_isSharedCheck_2226_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_a_2195_);
lean_dec(v___x_2194_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2226_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
if (lean_obj_tag(v_a_2195_) == 1)
{
lean_object* v_val_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; 
lean_del_object(v___x_2197_);
v_val_2199_ = lean_ctor_get(v_a_2195_, 0);
v___x_2200_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg___closed__2);
v___x_2201_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_numFields_2170_, v_numParams_2169_, v___x_2189_, v_declName_2161_, v_induct_2168_, v___x_2190_, v_a_2195_, v_val_2199_, v___x_2187_, v___x_2200_, v_a_2155_, v_a_2156_, v_a_2157_, v_a_2158_);
lean_dec(v_induct_2168_);
lean_dec(v_declName_2161_);
lean_dec_ref(v___x_2189_);
lean_dec(v_numParams_2169_);
lean_dec(v_numFields_2170_);
if (lean_obj_tag(v___x_2201_) == 0)
{
lean_object* v_a_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2214_; 
v_a_2202_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2204_ = v___x_2201_;
v_isShared_2205_ = v_isSharedCheck_2214_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_a_2202_);
lean_dec(v___x_2201_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2214_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v_fst_2206_; 
v_fst_2206_ = lean_ctor_get(v_a_2202_, 0);
lean_inc(v_fst_2206_);
lean_dec(v_a_2202_);
if (lean_obj_tag(v_fst_2206_) == 0)
{
lean_object* v___x_2208_; 
if (v_isShared_2205_ == 0)
{
lean_ctor_set(v___x_2204_, 0, v_a_2195_);
v___x_2208_ = v___x_2204_;
goto v_reusejp_2207_;
}
else
{
lean_object* v_reuseFailAlloc_2209_; 
v_reuseFailAlloc_2209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2209_, 0, v_a_2195_);
v___x_2208_ = v_reuseFailAlloc_2209_;
goto v_reusejp_2207_;
}
v_reusejp_2207_:
{
return v___x_2208_;
}
}
else
{
lean_object* v_val_2210_; lean_object* v___x_2212_; 
lean_dec_ref(v_a_2195_);
v_val_2210_ = lean_ctor_get(v_fst_2206_, 0);
lean_inc(v_val_2210_);
lean_dec_ref(v_fst_2206_);
if (v_isShared_2205_ == 0)
{
lean_ctor_set(v___x_2204_, 0, v_val_2210_);
v___x_2212_ = v___x_2204_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v_val_2210_);
v___x_2212_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
return v___x_2212_;
}
}
}
}
else
{
lean_object* v_a_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2222_; 
lean_dec_ref(v_a_2195_);
v_a_2215_ = lean_ctor_get(v___x_2201_, 0);
v_isSharedCheck_2222_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2222_ == 0)
{
v___x_2217_ = v___x_2201_;
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_a_2215_);
lean_dec(v___x_2201_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2222_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v___x_2220_; 
if (v_isShared_2218_ == 0)
{
v___x_2220_ = v___x_2217_;
goto v_reusejp_2219_;
}
else
{
lean_object* v_reuseFailAlloc_2221_; 
v_reuseFailAlloc_2221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2221_, 0, v_a_2215_);
v___x_2220_ = v_reuseFailAlloc_2221_;
goto v_reusejp_2219_;
}
v_reusejp_2219_:
{
return v___x_2220_;
}
}
}
}
else
{
lean_object* v___x_2224_; 
lean_dec(v_a_2195_);
lean_dec_ref(v___x_2190_);
lean_dec_ref(v___x_2189_);
lean_dec(v_numFields_2170_);
lean_dec(v_numParams_2169_);
lean_dec(v_induct_2168_);
lean_dec(v_declName_2161_);
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 0, v___x_2193_);
v___x_2224_ = v___x_2197_;
goto v_reusejp_2223_;
}
else
{
lean_object* v_reuseFailAlloc_2225_; 
v_reuseFailAlloc_2225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2225_, 0, v___x_2193_);
v___x_2224_ = v_reuseFailAlloc_2225_;
goto v_reusejp_2223_;
}
v_reusejp_2223_:
{
return v___x_2224_;
}
}
}
}
else
{
lean_dec_ref(v___x_2190_);
lean_dec_ref(v___x_2189_);
lean_dec(v_numFields_2170_);
lean_dec(v_numParams_2169_);
lean_dec(v_induct_2168_);
lean_dec(v_declName_2161_);
return v___x_2194_;
}
}
}
}
}
else
{
lean_object* v___x_2231_; lean_object* v___x_2233_; 
lean_dec(v_a_2163_);
lean_dec(v_declName_2161_);
lean_dec_ref(v_p_2154_);
lean_dec_ref(v_e_2153_);
v___x_2231_ = lean_box(0);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v___x_2231_);
v___x_2233_ = v___x_2165_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v___x_2231_);
v___x_2233_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
return v___x_2233_;
}
}
}
}
else
{
lean_object* v_a_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2243_; 
lean_dec(v_declName_2161_);
lean_dec_ref(v_p_2154_);
lean_dec_ref(v_e_2153_);
v_a_2236_ = lean_ctor_get(v___x_2162_, 0);
v_isSharedCheck_2243_ = !lean_is_exclusive(v___x_2162_);
if (v_isSharedCheck_2243_ == 0)
{
v___x_2238_ = v___x_2162_;
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_a_2236_);
lean_dec(v___x_2162_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2243_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___x_2241_; 
if (v_isShared_2239_ == 0)
{
v___x_2241_ = v___x_2238_;
goto v_reusejp_2240_;
}
else
{
lean_object* v_reuseFailAlloc_2242_; 
v_reuseFailAlloc_2242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2242_, 0, v_a_2236_);
v___x_2241_ = v_reuseFailAlloc_2242_;
goto v_reusejp_2240_;
}
v_reusejp_2240_:
{
return v___x_2241_;
}
}
}
}
else
{
lean_object* v___x_2244_; lean_object* v___x_2245_; 
lean_dec_ref(v___x_2160_);
lean_dec_ref(v_p_2154_);
lean_dec_ref(v_e_2153_);
v___x_2244_ = lean_box(0);
v___x_2245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2244_);
return v___x_2245_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStruct_x3f___boxed(lean_object* v_e_2246_, lean_object* v_p_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lean_Meta_etaStruct_x3f(v_e_2246_, v_p_2247_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
lean_dec(v_a_2251_);
lean_dec_ref(v_a_2250_);
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(lean_object* v_upperBound_2254_, lean_object* v___x_2255_, lean_object* v___x_2256_, lean_object* v_declName_2257_, lean_object* v___x_2258_, lean_object* v___x_2259_, lean_object* v_a_2260_, lean_object* v_val_2261_, lean_object* v_inst_2262_, lean_object* v_R_2263_, lean_object* v_a_2264_, lean_object* v_b_2265_, lean_object* v_c_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_){
_start:
{
lean_object* v___x_2272_; 
v___x_2272_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___redArg(v_upperBound_2254_, v___x_2255_, v___x_2256_, v_declName_2257_, v___x_2258_, v___x_2259_, v_a_2260_, v_val_2261_, v_a_2264_, v_b_2265_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_);
return v___x_2272_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2273_ = _args[0];
lean_object* v___x_2274_ = _args[1];
lean_object* v___x_2275_ = _args[2];
lean_object* v_declName_2276_ = _args[3];
lean_object* v___x_2277_ = _args[4];
lean_object* v___x_2278_ = _args[5];
lean_object* v_a_2279_ = _args[6];
lean_object* v_val_2280_ = _args[7];
lean_object* v_inst_2281_ = _args[8];
lean_object* v_R_2282_ = _args[9];
lean_object* v_a_2283_ = _args[10];
lean_object* v_b_2284_ = _args[11];
lean_object* v_c_2285_ = _args[12];
lean_object* v___y_2286_ = _args[13];
lean_object* v___y_2287_ = _args[14];
lean_object* v___y_2288_ = _args[15];
lean_object* v___y_2289_ = _args[16];
lean_object* v___y_2290_ = _args[17];
_start:
{
lean_object* v_res_2291_; 
v_res_2291_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_etaStruct_x3f_spec__1(v_upperBound_2273_, v___x_2274_, v___x_2275_, v_declName_2276_, v___x_2277_, v___x_2278_, v_a_2279_, v_val_2280_, v_inst_2281_, v_R_2282_, v_a_2283_, v_b_2284_, v_c_2285_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
lean_dec_ref(v_val_2280_);
lean_dec(v_a_2279_);
lean_dec(v___x_2277_);
lean_dec(v_declName_2276_);
lean_dec_ref(v___x_2275_);
lean_dec(v___x_2274_);
lean_dec(v_upperBound_2273_);
return v_res_2291_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(lean_object* v_e_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_){
_start:
{
uint8_t v___x_2296_; 
v___x_2296_ = l_Lean_Expr_hasMVar(v_e_2292_);
if (v___x_2296_ == 0)
{
lean_object* v___x_2297_; 
v___x_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2297_, 0, v_e_2292_);
return v___x_2297_;
}
else
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v_mctx_2300_; lean_object* v___x_2301_; lean_object* v_fst_2302_; lean_object* v_snd_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v_cache_2306_; lean_object* v_zetaDeltaFVarIds_2307_; lean_object* v_postponed_2308_; lean_object* v_diag_2309_; lean_object* v___x_2311_; uint8_t v_isShared_2312_; uint8_t v_isSharedCheck_2318_; 
v___x_2298_ = lean_st_ref_get(v___y_2294_);
lean_dec(v___x_2298_);
v___x_2299_ = lean_st_ref_get(v___y_2293_);
v_mctx_2300_ = lean_ctor_get(v___x_2299_, 0);
lean_inc_ref(v_mctx_2300_);
lean_dec(v___x_2299_);
v___x_2301_ = l_Lean_instantiateMVarsCore(v_mctx_2300_, v_e_2292_);
v_fst_2302_ = lean_ctor_get(v___x_2301_, 0);
lean_inc(v_fst_2302_);
v_snd_2303_ = lean_ctor_get(v___x_2301_, 1);
lean_inc(v_snd_2303_);
lean_dec_ref(v___x_2301_);
v___x_2304_ = lean_st_ref_get(v___y_2294_);
lean_dec(v___x_2304_);
v___x_2305_ = lean_st_ref_take(v___y_2293_);
v_cache_2306_ = lean_ctor_get(v___x_2305_, 1);
v_zetaDeltaFVarIds_2307_ = lean_ctor_get(v___x_2305_, 2);
v_postponed_2308_ = lean_ctor_get(v___x_2305_, 3);
v_diag_2309_ = lean_ctor_get(v___x_2305_, 4);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2305_);
if (v_isSharedCheck_2318_ == 0)
{
lean_object* v_unused_2319_; 
v_unused_2319_ = lean_ctor_get(v___x_2305_, 0);
lean_dec(v_unused_2319_);
v___x_2311_ = v___x_2305_;
v_isShared_2312_ = v_isSharedCheck_2318_;
goto v_resetjp_2310_;
}
else
{
lean_inc(v_diag_2309_);
lean_inc(v_postponed_2308_);
lean_inc(v_zetaDeltaFVarIds_2307_);
lean_inc(v_cache_2306_);
lean_dec(v___x_2305_);
v___x_2311_ = lean_box(0);
v_isShared_2312_ = v_isSharedCheck_2318_;
goto v_resetjp_2310_;
}
v_resetjp_2310_:
{
lean_object* v___x_2314_; 
if (v_isShared_2312_ == 0)
{
lean_ctor_set(v___x_2311_, 0, v_snd_2303_);
v___x_2314_ = v___x_2311_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_snd_2303_);
lean_ctor_set(v_reuseFailAlloc_2317_, 1, v_cache_2306_);
lean_ctor_set(v_reuseFailAlloc_2317_, 2, v_zetaDeltaFVarIds_2307_);
lean_ctor_set(v_reuseFailAlloc_2317_, 3, v_postponed_2308_);
lean_ctor_set(v_reuseFailAlloc_2317_, 4, v_diag_2309_);
v___x_2314_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
v___x_2315_ = lean_st_ref_set(v___y_2293_, v___x_2314_);
v___x_2316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2316_, 0, v_fst_2302_);
return v___x_2316_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg___boxed(lean_object* v_e_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_){
_start:
{
lean_object* v_res_2324_; 
v_res_2324_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_2320_, v___y_2321_, v___y_2322_);
lean_dec(v___y_2322_);
lean_dec(v___y_2321_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(lean_object* v_e_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_, lean_object* v___y_2328_, lean_object* v___y_2329_){
_start:
{
lean_object* v___x_2331_; 
v___x_2331_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_2325_, v___y_2327_, v___y_2329_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___boxed(lean_object* v_e_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
lean_object* v_res_2338_; 
v_res_2338_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0(v_e_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_);
lean_dec(v___y_2336_);
lean_dec_ref(v___y_2335_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
return v_res_2338_;
}
}
static lean_object* _init_l_Lean_Meta_etaStructReduce___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; 
v___x_2339_ = lean_box(0);
v___x_2340_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2339_);
return v___x_2340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0(lean_object* v_x_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_){
_start:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = lean_obj_once(&l_Lean_Meta_etaStructReduce___lam__0___closed__0, &l_Lean_Meta_etaStructReduce___lam__0___closed__0_once, _init_l_Lean_Meta_etaStructReduce___lam__0___closed__0);
v___x_2348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
return v___x_2348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__0___boxed(lean_object* v_x_2349_, lean_object* v___y_2350_, lean_object* v___y_2351_, lean_object* v___y_2352_, lean_object* v___y_2353_, lean_object* v___y_2354_){
_start:
{
lean_object* v_res_2355_; 
v_res_2355_ = l_Lean_Meta_etaStructReduce___lam__0(v_x_2349_, v___y_2350_, v___y_2351_, v___y_2352_, v___y_2353_);
lean_dec(v___y_2353_);
lean_dec_ref(v___y_2352_);
lean_dec(v___y_2351_);
lean_dec_ref(v___y_2350_);
lean_dec_ref(v_x_2349_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1(lean_object* v_p_2356_, lean_object* v_e_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_){
_start:
{
lean_object* v___x_2363_; 
v___x_2363_ = l_Lean_Meta_etaStruct_x3f(v_e_2357_, v_p_2356_, v___y_2358_, v___y_2359_, v___y_2360_, v___y_2361_);
if (lean_obj_tag(v___x_2363_) == 0)
{
lean_object* v_a_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2383_; 
v_a_2364_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2383_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2383_ == 0)
{
v___x_2366_ = v___x_2363_;
v_isShared_2367_ = v_isSharedCheck_2383_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_a_2364_);
lean_dec(v___x_2363_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2383_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
if (lean_obj_tag(v_a_2364_) == 1)
{
lean_object* v_val_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2378_; 
v_val_2368_ = lean_ctor_get(v_a_2364_, 0);
v_isSharedCheck_2378_ = !lean_is_exclusive(v_a_2364_);
if (v_isSharedCheck_2378_ == 0)
{
v___x_2370_ = v_a_2364_;
v_isShared_2371_ = v_isSharedCheck_2378_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_val_2368_);
lean_dec(v_a_2364_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2378_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
if (v_isShared_2371_ == 0)
{
lean_ctor_set_tag(v___x_2370_, 0);
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v_val_2368_);
v___x_2373_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2375_; 
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v___x_2373_);
v___x_2375_ = v___x_2366_;
goto v_reusejp_2374_;
}
else
{
lean_object* v_reuseFailAlloc_2376_; 
v_reuseFailAlloc_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2376_, 0, v___x_2373_);
v___x_2375_ = v_reuseFailAlloc_2376_;
goto v_reusejp_2374_;
}
v_reusejp_2374_:
{
return v___x_2375_;
}
}
}
}
else
{
lean_object* v___x_2379_; lean_object* v___x_2381_; 
lean_dec(v_a_2364_);
v___x_2379_ = lean_obj_once(&l_Lean_Meta_etaStructReduce___lam__0___closed__0, &l_Lean_Meta_etaStructReduce___lam__0___closed__0_once, _init_l_Lean_Meta_etaStructReduce___lam__0___closed__0);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v___x_2379_);
v___x_2381_ = v___x_2366_;
goto v_reusejp_2380_;
}
else
{
lean_object* v_reuseFailAlloc_2382_; 
v_reuseFailAlloc_2382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2382_, 0, v___x_2379_);
v___x_2381_ = v_reuseFailAlloc_2382_;
goto v_reusejp_2380_;
}
v_reusejp_2380_:
{
return v___x_2381_;
}
}
}
}
else
{
lean_object* v_a_2384_; lean_object* v___x_2386_; uint8_t v_isShared_2387_; uint8_t v_isSharedCheck_2391_; 
v_a_2384_ = lean_ctor_get(v___x_2363_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2363_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2386_ = v___x_2363_;
v_isShared_2387_ = v_isSharedCheck_2391_;
goto v_resetjp_2385_;
}
else
{
lean_inc(v_a_2384_);
lean_dec(v___x_2363_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___lam__1___boxed(lean_object* v_p_2392_, lean_object* v_e_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_, lean_object* v___y_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_){
_start:
{
lean_object* v_res_2399_; 
v_res_2399_ = l_Lean_Meta_etaStructReduce___lam__1(v_p_2392_, v_e_2393_, v___y_2394_, v___y_2395_, v___y_2396_, v___y_2397_);
lean_dec(v___y_2397_);
lean_dec_ref(v___y_2396_);
lean_dec(v___y_2395_);
lean_dec_ref(v___y_2394_);
return v_res_2399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_object* v_00_u03b1_2400_, lean_object* v_x_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2407_ = lean_st_ref_get(v___y_2405_);
lean_dec(v___x_2407_);
v___x_2408_ = lean_apply_1(v_x_2401_, lean_box(0));
v___x_2409_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2408_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2410_, lean_object* v_x_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_){
_start:
{
lean_object* v_res_2417_; 
v_res_2417_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(v_00_u03b1_2410_, v_x_2411_, v___y_2412_, v___y_2413_, v___y_2414_, v___y_2415_);
lean_dec(v___y_2415_);
lean_dec_ref(v___y_2414_);
lean_dec(v___y_2413_);
lean_dec_ref(v___y_2412_);
return v_res_2417_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0(void){
_start:
{
lean_object* v___x_2418_; 
v___x_2418_ = lean_mk_string_unchecked("runtime", 7, 7);
return v___x_2418_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1(void){
_start:
{
lean_object* v___x_2419_; 
v___x_2419_ = lean_mk_string_unchecked("maxRecDepth", 11, 11);
return v___x_2419_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2(void){
_start:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
v___x_2420_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__1);
v___x_2421_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__0);
v___x_2422_ = l_Lean_Name_mkStr2(v___x_2421_, v___x_2420_);
return v___x_2422_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3(void){
_start:
{
lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2423_ = l_Lean_maxRecDepthErrorMessage;
v___x_2424_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2424_, 0, v___x_2423_);
return v___x_2424_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2425_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__3);
v___x_2426_ = l_Lean_MessageData_ofFormat(v___x_2425_);
return v___x_2426_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5(void){
_start:
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; 
v___x_2427_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__4);
v___x_2428_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__2);
v___x_2429_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2428_);
lean_ctor_set(v___x_2429_, 1, v___x_2427_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(lean_object* v_ref_2430_){
_start:
{
lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2432_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___closed__5);
v___x_2433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2433_, 0, v_ref_2430_);
lean_ctor_set(v___x_2433_, 1, v___x_2432_);
v___x_2434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg___boxed(lean_object* v_ref_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_2435_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(lean_object* v_x_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v___y_2446_; lean_object* v_fileName_2455_; lean_object* v_fileMap_2456_; lean_object* v_options_2457_; lean_object* v_currRecDepth_2458_; lean_object* v_maxRecDepth_2459_; lean_object* v_ref_2460_; lean_object* v_currNamespace_2461_; lean_object* v_openDecls_2462_; lean_object* v_initHeartbeats_2463_; lean_object* v_maxHeartbeats_2464_; lean_object* v_quotContext_2465_; lean_object* v_currMacroScope_2466_; uint8_t v_diag_2467_; lean_object* v_cancelTk_x3f_2468_; uint8_t v_suppressElabErrors_2469_; lean_object* v_inheritedTraceOptions_2470_; lean_object* v___x_2476_; uint8_t v___x_2477_; 
v_fileName_2455_ = lean_ctor_get(v___y_2442_, 0);
v_fileMap_2456_ = lean_ctor_get(v___y_2442_, 1);
v_options_2457_ = lean_ctor_get(v___y_2442_, 2);
v_currRecDepth_2458_ = lean_ctor_get(v___y_2442_, 3);
v_maxRecDepth_2459_ = lean_ctor_get(v___y_2442_, 4);
v_ref_2460_ = lean_ctor_get(v___y_2442_, 5);
v_currNamespace_2461_ = lean_ctor_get(v___y_2442_, 6);
v_openDecls_2462_ = lean_ctor_get(v___y_2442_, 7);
v_initHeartbeats_2463_ = lean_ctor_get(v___y_2442_, 8);
v_maxHeartbeats_2464_ = lean_ctor_get(v___y_2442_, 9);
v_quotContext_2465_ = lean_ctor_get(v___y_2442_, 10);
v_currMacroScope_2466_ = lean_ctor_get(v___y_2442_, 11);
v_diag_2467_ = lean_ctor_get_uint8(v___y_2442_, sizeof(void*)*14);
v_cancelTk_x3f_2468_ = lean_ctor_get(v___y_2442_, 12);
v_suppressElabErrors_2469_ = lean_ctor_get_uint8(v___y_2442_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_2470_ = lean_ctor_get(v___y_2442_, 13);
v___x_2476_ = lean_unsigned_to_nat(0u);
v___x_2477_ = lean_nat_dec_eq(v_maxRecDepth_2459_, v___x_2476_);
if (v___x_2477_ == 0)
{
uint8_t v___x_2478_; 
v___x_2478_ = lean_nat_dec_eq(v_currRecDepth_2458_, v_maxRecDepth_2459_);
if (v___x_2478_ == 0)
{
goto v___jp_2471_;
}
else
{
lean_object* v___x_2479_; 
lean_dec_ref(v_x_2438_);
lean_inc(v_ref_2460_);
v___x_2479_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_2460_);
v___y_2446_ = v___x_2479_;
goto v___jp_2445_;
}
}
else
{
goto v___jp_2471_;
}
v___jp_2445_:
{
if (lean_obj_tag(v___y_2446_) == 0)
{
return v___y_2446_;
}
else
{
lean_object* v_a_2447_; lean_object* v___x_2449_; uint8_t v_isShared_2450_; uint8_t v_isSharedCheck_2454_; 
v_a_2447_ = lean_ctor_get(v___y_2446_, 0);
v_isSharedCheck_2454_ = !lean_is_exclusive(v___y_2446_);
if (v_isSharedCheck_2454_ == 0)
{
v___x_2449_ = v___y_2446_;
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
else
{
lean_inc(v_a_2447_);
lean_dec(v___y_2446_);
v___x_2449_ = lean_box(0);
v_isShared_2450_ = v_isSharedCheck_2454_;
goto v_resetjp_2448_;
}
v_resetjp_2448_:
{
lean_object* v___x_2452_; 
if (v_isShared_2450_ == 0)
{
v___x_2452_ = v___x_2449_;
goto v_reusejp_2451_;
}
else
{
lean_object* v_reuseFailAlloc_2453_; 
v_reuseFailAlloc_2453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2453_, 0, v_a_2447_);
v___x_2452_ = v_reuseFailAlloc_2453_;
goto v_reusejp_2451_;
}
v_reusejp_2451_:
{
return v___x_2452_;
}
}
}
}
v___jp_2471_:
{
lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2472_ = lean_unsigned_to_nat(1u);
v___x_2473_ = lean_nat_add(v_currRecDepth_2458_, v___x_2472_);
lean_inc_ref(v_inheritedTraceOptions_2470_);
lean_inc(v_cancelTk_x3f_2468_);
lean_inc(v_currMacroScope_2466_);
lean_inc(v_quotContext_2465_);
lean_inc(v_maxHeartbeats_2464_);
lean_inc(v_initHeartbeats_2463_);
lean_inc(v_openDecls_2462_);
lean_inc(v_currNamespace_2461_);
lean_inc(v_ref_2460_);
lean_inc(v_maxRecDepth_2459_);
lean_inc_ref(v_options_2457_);
lean_inc_ref(v_fileMap_2456_);
lean_inc_ref(v_fileName_2455_);
v___x_2474_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_2474_, 0, v_fileName_2455_);
lean_ctor_set(v___x_2474_, 1, v_fileMap_2456_);
lean_ctor_set(v___x_2474_, 2, v_options_2457_);
lean_ctor_set(v___x_2474_, 3, v___x_2473_);
lean_ctor_set(v___x_2474_, 4, v_maxRecDepth_2459_);
lean_ctor_set(v___x_2474_, 5, v_ref_2460_);
lean_ctor_set(v___x_2474_, 6, v_currNamespace_2461_);
lean_ctor_set(v___x_2474_, 7, v_openDecls_2462_);
lean_ctor_set(v___x_2474_, 8, v_initHeartbeats_2463_);
lean_ctor_set(v___x_2474_, 9, v_maxHeartbeats_2464_);
lean_ctor_set(v___x_2474_, 10, v_quotContext_2465_);
lean_ctor_set(v___x_2474_, 11, v_currMacroScope_2466_);
lean_ctor_set(v___x_2474_, 12, v_cancelTk_x3f_2468_);
lean_ctor_set(v___x_2474_, 13, v_inheritedTraceOptions_2470_);
lean_ctor_set_uint8(v___x_2474_, sizeof(void*)*14, v_diag_2467_);
lean_ctor_set_uint8(v___x_2474_, sizeof(void*)*14 + 1, v_suppressElabErrors_2469_);
lean_inc(v___y_2443_);
lean_inc(v___y_2441_);
lean_inc_ref(v___y_2440_);
lean_inc(v___y_2439_);
v___x_2475_ = lean_apply_6(v_x_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___x_2474_, v___y_2443_, lean_box(0));
v___y_2446_ = v___x_2475_;
goto v___jp_2445_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg___boxed(lean_object* v_x_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v_x_2480_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
lean_dec(v___y_2483_);
lean_dec_ref(v___y_2482_);
lean_dec(v___y_2481_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_2488_, lean_object* v_x_2489_, lean_object* v___y_2490_, lean_object* v___y_2491_, lean_object* v___y_2492_, lean_object* v___y_2493_){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2495_ = lean_st_ref_get(v___y_2493_);
lean_dec(v___x_2495_);
v___x_2496_ = lean_apply_1(v_x_2489_, lean_box(0));
v___x_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
return v___x_2497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_2498_, lean_object* v_x_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_){
_start:
{
lean_object* v_res_2505_; 
v_res_2505_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(v_00_u03b1_2498_, v_x_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
return v_res_2505_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_a_2506_, lean_object* v_x_2507_){
_start:
{
if (lean_obj_tag(v_x_2507_) == 0)
{
lean_object* v___x_2508_; 
v___x_2508_ = lean_box(0);
return v___x_2508_;
}
else
{
lean_object* v_key_2509_; lean_object* v_value_2510_; lean_object* v_tail_2511_; uint8_t v___x_2512_; 
v_key_2509_ = lean_ctor_get(v_x_2507_, 0);
v_value_2510_ = lean_ctor_get(v_x_2507_, 1);
v_tail_2511_ = lean_ctor_get(v_x_2507_, 2);
v___x_2512_ = l_Lean_ExprStructEq_beq(v_key_2509_, v_a_2506_);
if (v___x_2512_ == 0)
{
v_x_2507_ = v_tail_2511_;
goto _start;
}
else
{
lean_object* v___x_2514_; 
lean_inc(v_value_2510_);
v___x_2514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2514_, 0, v_value_2510_);
return v___x_2514_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_a_2515_, lean_object* v_x_2516_){
_start:
{
lean_object* v_res_2517_; 
v_res_2517_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_2515_, v_x_2516_);
lean_dec(v_x_2516_);
lean_dec_ref(v_a_2515_);
return v_res_2517_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(lean_object* v_m_2518_, lean_object* v_a_2519_){
_start:
{
lean_object* v_buckets_2520_; lean_object* v___x_2521_; uint64_t v___x_2522_; uint64_t v___x_2523_; uint64_t v___x_2524_; uint64_t v_fold_2525_; uint64_t v___x_2526_; uint64_t v___x_2527_; uint64_t v___x_2528_; size_t v___x_2529_; size_t v___x_2530_; size_t v___x_2531_; size_t v___x_2532_; size_t v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v_buckets_2520_ = lean_ctor_get(v_m_2518_, 1);
v___x_2521_ = lean_array_get_size(v_buckets_2520_);
v___x_2522_ = l_Lean_ExprStructEq_hash(v_a_2519_);
v___x_2523_ = 32ULL;
v___x_2524_ = lean_uint64_shift_right(v___x_2522_, v___x_2523_);
v_fold_2525_ = lean_uint64_xor(v___x_2522_, v___x_2524_);
v___x_2526_ = 16ULL;
v___x_2527_ = lean_uint64_shift_right(v_fold_2525_, v___x_2526_);
v___x_2528_ = lean_uint64_xor(v_fold_2525_, v___x_2527_);
v___x_2529_ = lean_uint64_to_usize(v___x_2528_);
v___x_2530_ = lean_usize_of_nat(v___x_2521_);
v___x_2531_ = ((size_t)1ULL);
v___x_2532_ = lean_usize_sub(v___x_2530_, v___x_2531_);
v___x_2533_ = lean_usize_land(v___x_2529_, v___x_2532_);
v___x_2534_ = lean_array_uget_borrowed(v_buckets_2520_, v___x_2533_);
v___x_2535_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_2519_, v___x_2534_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg___boxed(lean_object* v_m_2536_, lean_object* v_a_2537_){
_start:
{
lean_object* v_res_2538_; 
v_res_2538_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_m_2536_, v_a_2537_);
lean_dec_ref(v_a_2537_);
lean_dec_ref(v_m_2536_);
return v_res_2538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(lean_object* v_k_2539_, lean_object* v___y_2540_, lean_object* v_b_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_){
_start:
{
lean_object* v___x_2547_; 
lean_inc(v___y_2545_);
lean_inc_ref(v___y_2544_);
lean_inc(v___y_2543_);
lean_inc_ref(v___y_2542_);
lean_inc(v___y_2540_);
v___x_2547_ = lean_apply_7(v_k_2539_, v_b_2541_, v___y_2540_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, lean_box(0));
return v___x_2547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed(lean_object* v_k_2548_, lean_object* v___y_2549_, lean_object* v_b_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_){
_start:
{
lean_object* v_res_2556_; 
v_res_2556_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0(v_k_2548_, v___y_2549_, v_b_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
lean_dec(v___y_2554_);
lean_dec_ref(v___y_2553_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2549_);
return v_res_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(lean_object* v_name_2557_, uint8_t v_bi_2558_, lean_object* v_type_2559_, lean_object* v_k_2560_, uint8_t v_kind_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_){
_start:
{
lean_object* v___f_2568_; lean_object* v___x_2569_; 
lean_inc(v___y_2562_);
v___f_2568_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2568_, 0, v_k_2560_);
lean_closure_set(v___f_2568_, 1, v___y_2562_);
v___x_2569_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2557_, v_bi_2558_, v_type_2559_, v___f_2568_, v_kind_2561_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_);
if (lean_obj_tag(v___x_2569_) == 0)
{
return v___x_2569_;
}
else
{
lean_object* v_a_2570_; lean_object* v___x_2572_; uint8_t v_isShared_2573_; uint8_t v_isSharedCheck_2577_; 
v_a_2570_ = lean_ctor_get(v___x_2569_, 0);
v_isSharedCheck_2577_ = !lean_is_exclusive(v___x_2569_);
if (v_isSharedCheck_2577_ == 0)
{
v___x_2572_ = v___x_2569_;
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
else
{
lean_inc(v_a_2570_);
lean_dec(v___x_2569_);
v___x_2572_ = lean_box(0);
v_isShared_2573_ = v_isSharedCheck_2577_;
goto v_resetjp_2571_;
}
v_resetjp_2571_:
{
lean_object* v___x_2575_; 
if (v_isShared_2573_ == 0)
{
v___x_2575_ = v___x_2572_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2576_; 
v_reuseFailAlloc_2576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2576_, 0, v_a_2570_);
v___x_2575_ = v_reuseFailAlloc_2576_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
return v___x_2575_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___boxed(lean_object* v_name_2578_, lean_object* v_bi_2579_, lean_object* v_type_2580_, lean_object* v_k_2581_, lean_object* v_kind_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
uint8_t v_bi_boxed_2589_; uint8_t v_kind_boxed_2590_; lean_object* v_res_2591_; 
v_bi_boxed_2589_ = lean_unbox(v_bi_2579_);
v_kind_boxed_2590_ = lean_unbox(v_kind_2582_);
v_res_2591_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_name_2578_, v_bi_boxed_2589_, v_type_2580_, v_k_2581_, v_kind_boxed_2590_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_, v___y_2587_);
lean_dec(v___y_2587_);
lean_dec_ref(v___y_2586_);
lean_dec(v___y_2585_);
lean_dec_ref(v___y_2584_);
lean_dec(v___y_2583_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(lean_object* v_name_2592_, lean_object* v_type_2593_, lean_object* v_val_2594_, lean_object* v_k_2595_, uint8_t v_nondep_2596_, uint8_t v_kind_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_, lean_object* v___y_2602_){
_start:
{
lean_object* v___f_2604_; lean_object* v___x_2605_; 
lean_inc(v___y_2598_);
v___f_2604_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2604_, 0, v_k_2595_);
lean_closure_set(v___f_2604_, 1, v___y_2598_);
v___x_2605_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2592_, v_type_2593_, v_val_2594_, v___f_2604_, v_nondep_2596_, v_kind_2597_, v___y_2599_, v___y_2600_, v___y_2601_, v___y_2602_);
if (lean_obj_tag(v___x_2605_) == 0)
{
return v___x_2605_;
}
else
{
lean_object* v_a_2606_; lean_object* v___x_2608_; uint8_t v_isShared_2609_; uint8_t v_isSharedCheck_2613_; 
v_a_2606_ = lean_ctor_get(v___x_2605_, 0);
v_isSharedCheck_2613_ = !lean_is_exclusive(v___x_2605_);
if (v_isSharedCheck_2613_ == 0)
{
v___x_2608_ = v___x_2605_;
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
else
{
lean_inc(v_a_2606_);
lean_dec(v___x_2605_);
v___x_2608_ = lean_box(0);
v_isShared_2609_ = v_isSharedCheck_2613_;
goto v_resetjp_2607_;
}
v_resetjp_2607_:
{
lean_object* v___x_2611_; 
if (v_isShared_2609_ == 0)
{
v___x_2611_ = v___x_2608_;
goto v_reusejp_2610_;
}
else
{
lean_object* v_reuseFailAlloc_2612_; 
v_reuseFailAlloc_2612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2612_, 0, v_a_2606_);
v___x_2611_ = v_reuseFailAlloc_2612_;
goto v_reusejp_2610_;
}
v_reusejp_2610_:
{
return v___x_2611_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg___boxed(lean_object* v_name_2614_, lean_object* v_type_2615_, lean_object* v_val_2616_, lean_object* v_k_2617_, lean_object* v_nondep_2618_, lean_object* v_kind_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_){
_start:
{
uint8_t v_nondep_boxed_2626_; uint8_t v_kind_boxed_2627_; lean_object* v_res_2628_; 
v_nondep_boxed_2626_ = lean_unbox(v_nondep_2618_);
v_kind_boxed_2627_ = lean_unbox(v_kind_2619_);
v_res_2628_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_name_2614_, v_type_2615_, v_val_2616_, v_k_2617_, v_nondep_boxed_2626_, v_kind_boxed_2627_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_);
lean_dec(v___y_2624_);
lean_dec_ref(v___y_2623_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
lean_dec(v___y_2620_);
return v_res_2628_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object* v___x_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v___x_2635_; 
v___x_2635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2635_, 0, v___x_2629_);
return v___x_2635_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object* v___x_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v_res_2642_; 
v_res_2642_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2(v___x_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_);
lean_dec(v___y_2640_);
lean_dec_ref(v___y_2639_);
lean_dec(v___y_2638_);
lean_dec_ref(v___y_2637_);
return v_res_2642_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(lean_object* v_a_2643_, lean_object* v_x_2644_){
_start:
{
if (lean_obj_tag(v_x_2644_) == 0)
{
uint8_t v___x_2645_; 
v___x_2645_ = 0;
return v___x_2645_;
}
else
{
lean_object* v_key_2646_; lean_object* v_tail_2647_; uint8_t v___x_2648_; 
v_key_2646_ = lean_ctor_get(v_x_2644_, 0);
v_tail_2647_ = lean_ctor_get(v_x_2644_, 2);
v___x_2648_ = l_Lean_ExprStructEq_beq(v_key_2646_, v_a_2643_);
if (v___x_2648_ == 0)
{
v_x_2644_ = v_tail_2647_;
goto _start;
}
else
{
return v___x_2648_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg___boxed(lean_object* v_a_2650_, lean_object* v_x_2651_){
_start:
{
uint8_t v_res_2652_; lean_object* v_r_2653_; 
v_res_2652_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2650_, v_x_2651_);
lean_dec(v_x_2651_);
lean_dec_ref(v_a_2650_);
v_r_2653_ = lean_box(v_res_2652_);
return v_r_2653_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(lean_object* v_x_2654_, lean_object* v_x_2655_){
_start:
{
if (lean_obj_tag(v_x_2655_) == 0)
{
return v_x_2654_;
}
else
{
lean_object* v_key_2656_; lean_object* v_value_2657_; lean_object* v_tail_2658_; lean_object* v___x_2660_; uint8_t v_isShared_2661_; uint8_t v_isSharedCheck_2681_; 
v_key_2656_ = lean_ctor_get(v_x_2655_, 0);
v_value_2657_ = lean_ctor_get(v_x_2655_, 1);
v_tail_2658_ = lean_ctor_get(v_x_2655_, 2);
v_isSharedCheck_2681_ = !lean_is_exclusive(v_x_2655_);
if (v_isSharedCheck_2681_ == 0)
{
v___x_2660_ = v_x_2655_;
v_isShared_2661_ = v_isSharedCheck_2681_;
goto v_resetjp_2659_;
}
else
{
lean_inc(v_tail_2658_);
lean_inc(v_value_2657_);
lean_inc(v_key_2656_);
lean_dec(v_x_2655_);
v___x_2660_ = lean_box(0);
v_isShared_2661_ = v_isSharedCheck_2681_;
goto v_resetjp_2659_;
}
v_resetjp_2659_:
{
lean_object* v___x_2662_; uint64_t v___x_2663_; uint64_t v___x_2664_; uint64_t v___x_2665_; uint64_t v_fold_2666_; uint64_t v___x_2667_; uint64_t v___x_2668_; uint64_t v___x_2669_; size_t v___x_2670_; size_t v___x_2671_; size_t v___x_2672_; size_t v___x_2673_; size_t v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2677_; 
v___x_2662_ = lean_array_get_size(v_x_2654_);
v___x_2663_ = l_Lean_ExprStructEq_hash(v_key_2656_);
v___x_2664_ = 32ULL;
v___x_2665_ = lean_uint64_shift_right(v___x_2663_, v___x_2664_);
v_fold_2666_ = lean_uint64_xor(v___x_2663_, v___x_2665_);
v___x_2667_ = 16ULL;
v___x_2668_ = lean_uint64_shift_right(v_fold_2666_, v___x_2667_);
v___x_2669_ = lean_uint64_xor(v_fold_2666_, v___x_2668_);
v___x_2670_ = lean_uint64_to_usize(v___x_2669_);
v___x_2671_ = lean_usize_of_nat(v___x_2662_);
v___x_2672_ = ((size_t)1ULL);
v___x_2673_ = lean_usize_sub(v___x_2671_, v___x_2672_);
v___x_2674_ = lean_usize_land(v___x_2670_, v___x_2673_);
v___x_2675_ = lean_array_uget_borrowed(v_x_2654_, v___x_2674_);
lean_inc(v___x_2675_);
if (v_isShared_2661_ == 0)
{
lean_ctor_set(v___x_2660_, 2, v___x_2675_);
v___x_2677_ = v___x_2660_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2680_; 
v_reuseFailAlloc_2680_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2680_, 0, v_key_2656_);
lean_ctor_set(v_reuseFailAlloc_2680_, 1, v_value_2657_);
lean_ctor_set(v_reuseFailAlloc_2680_, 2, v___x_2675_);
v___x_2677_ = v_reuseFailAlloc_2680_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
lean_object* v___x_2678_; 
v___x_2678_ = lean_array_uset(v_x_2654_, v___x_2674_, v___x_2677_);
v_x_2654_ = v___x_2678_;
v_x_2655_ = v_tail_2658_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(lean_object* v_i_2682_, lean_object* v_source_2683_, lean_object* v_target_2684_){
_start:
{
lean_object* v___x_2685_; uint8_t v___x_2686_; 
v___x_2685_ = lean_array_get_size(v_source_2683_);
v___x_2686_ = lean_nat_dec_lt(v_i_2682_, v___x_2685_);
if (v___x_2686_ == 0)
{
lean_dec_ref(v_source_2683_);
lean_dec(v_i_2682_);
return v_target_2684_;
}
else
{
lean_object* v_es_2687_; lean_object* v___x_2688_; lean_object* v_source_2689_; lean_object* v_target_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; 
v_es_2687_ = lean_array_fget(v_source_2683_, v_i_2682_);
v___x_2688_ = lean_box(0);
v_source_2689_ = lean_array_fset(v_source_2683_, v_i_2682_, v___x_2688_);
v_target_2690_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_target_2684_, v_es_2687_);
v___x_2691_ = lean_unsigned_to_nat(1u);
v___x_2692_ = lean_nat_add(v_i_2682_, v___x_2691_);
lean_dec(v_i_2682_);
v_i_2682_ = v___x_2692_;
v_source_2683_ = v_source_2689_;
v_target_2684_ = v_target_2690_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(lean_object* v_data_2694_){
_start:
{
lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v_nbuckets_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; 
v___x_2695_ = lean_array_get_size(v_data_2694_);
v___x_2696_ = lean_unsigned_to_nat(2u);
v_nbuckets_2697_ = lean_nat_mul(v___x_2695_, v___x_2696_);
v___x_2698_ = lean_unsigned_to_nat(0u);
v___x_2699_ = lean_box(0);
v___x_2700_ = lean_mk_array(v_nbuckets_2697_, v___x_2699_);
v___x_2701_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v___x_2698_, v_data_2694_, v___x_2700_);
return v___x_2701_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(lean_object* v_a_2702_, lean_object* v_b_2703_, lean_object* v_x_2704_){
_start:
{
if (lean_obj_tag(v_x_2704_) == 0)
{
lean_dec(v_b_2703_);
lean_dec_ref(v_a_2702_);
return v_x_2704_;
}
else
{
lean_object* v_key_2705_; lean_object* v_value_2706_; lean_object* v_tail_2707_; lean_object* v___x_2709_; uint8_t v_isShared_2710_; uint8_t v_isSharedCheck_2719_; 
v_key_2705_ = lean_ctor_get(v_x_2704_, 0);
v_value_2706_ = lean_ctor_get(v_x_2704_, 1);
v_tail_2707_ = lean_ctor_get(v_x_2704_, 2);
v_isSharedCheck_2719_ = !lean_is_exclusive(v_x_2704_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2709_ = v_x_2704_;
v_isShared_2710_ = v_isSharedCheck_2719_;
goto v_resetjp_2708_;
}
else
{
lean_inc(v_tail_2707_);
lean_inc(v_value_2706_);
lean_inc(v_key_2705_);
lean_dec(v_x_2704_);
v___x_2709_ = lean_box(0);
v_isShared_2710_ = v_isSharedCheck_2719_;
goto v_resetjp_2708_;
}
v_resetjp_2708_:
{
uint8_t v___x_2711_; 
v___x_2711_ = l_Lean_ExprStructEq_beq(v_key_2705_, v_a_2702_);
if (v___x_2711_ == 0)
{
lean_object* v___x_2712_; lean_object* v___x_2714_; 
v___x_2712_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2702_, v_b_2703_, v_tail_2707_);
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 2, v___x_2712_);
v___x_2714_ = v___x_2709_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_key_2705_);
lean_ctor_set(v_reuseFailAlloc_2715_, 1, v_value_2706_);
lean_ctor_set(v_reuseFailAlloc_2715_, 2, v___x_2712_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
return v___x_2714_;
}
}
else
{
lean_object* v___x_2717_; 
lean_dec(v_value_2706_);
lean_dec(v_key_2705_);
if (v_isShared_2710_ == 0)
{
lean_ctor_set(v___x_2709_, 1, v_b_2703_);
lean_ctor_set(v___x_2709_, 0, v_a_2702_);
v___x_2717_ = v___x_2709_;
goto v_reusejp_2716_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v_a_2702_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v_b_2703_);
lean_ctor_set(v_reuseFailAlloc_2718_, 2, v_tail_2707_);
v___x_2717_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2716_;
}
v_reusejp_2716_:
{
return v___x_2717_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(lean_object* v_m_2720_, lean_object* v_a_2721_, lean_object* v_b_2722_){
_start:
{
lean_object* v_size_2723_; lean_object* v_buckets_2724_; lean_object* v___x_2726_; uint8_t v_isShared_2727_; uint8_t v_isSharedCheck_2767_; 
v_size_2723_ = lean_ctor_get(v_m_2720_, 0);
v_buckets_2724_ = lean_ctor_get(v_m_2720_, 1);
v_isSharedCheck_2767_ = !lean_is_exclusive(v_m_2720_);
if (v_isSharedCheck_2767_ == 0)
{
v___x_2726_ = v_m_2720_;
v_isShared_2727_ = v_isSharedCheck_2767_;
goto v_resetjp_2725_;
}
else
{
lean_inc(v_buckets_2724_);
lean_inc(v_size_2723_);
lean_dec(v_m_2720_);
v___x_2726_ = lean_box(0);
v_isShared_2727_ = v_isSharedCheck_2767_;
goto v_resetjp_2725_;
}
v_resetjp_2725_:
{
lean_object* v___x_2728_; uint64_t v___x_2729_; uint64_t v___x_2730_; uint64_t v___x_2731_; uint64_t v_fold_2732_; uint64_t v___x_2733_; uint64_t v___x_2734_; uint64_t v___x_2735_; size_t v___x_2736_; size_t v___x_2737_; size_t v___x_2738_; size_t v___x_2739_; size_t v___x_2740_; lean_object* v_bkt_2741_; uint8_t v___x_2742_; 
v___x_2728_ = lean_array_get_size(v_buckets_2724_);
v___x_2729_ = l_Lean_ExprStructEq_hash(v_a_2721_);
v___x_2730_ = 32ULL;
v___x_2731_ = lean_uint64_shift_right(v___x_2729_, v___x_2730_);
v_fold_2732_ = lean_uint64_xor(v___x_2729_, v___x_2731_);
v___x_2733_ = 16ULL;
v___x_2734_ = lean_uint64_shift_right(v_fold_2732_, v___x_2733_);
v___x_2735_ = lean_uint64_xor(v_fold_2732_, v___x_2734_);
v___x_2736_ = lean_uint64_to_usize(v___x_2735_);
v___x_2737_ = lean_usize_of_nat(v___x_2728_);
v___x_2738_ = ((size_t)1ULL);
v___x_2739_ = lean_usize_sub(v___x_2737_, v___x_2738_);
v___x_2740_ = lean_usize_land(v___x_2736_, v___x_2739_);
v_bkt_2741_ = lean_array_uget_borrowed(v_buckets_2724_, v___x_2740_);
v___x_2742_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_2721_, v_bkt_2741_);
if (v___x_2742_ == 0)
{
lean_object* v___x_2743_; lean_object* v_size_x27_2744_; lean_object* v___x_2745_; lean_object* v_buckets_x27_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; uint8_t v___x_2752_; 
v___x_2743_ = lean_unsigned_to_nat(1u);
v_size_x27_2744_ = lean_nat_add(v_size_2723_, v___x_2743_);
lean_dec(v_size_2723_);
lean_inc(v_bkt_2741_);
v___x_2745_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2745_, 0, v_a_2721_);
lean_ctor_set(v___x_2745_, 1, v_b_2722_);
lean_ctor_set(v___x_2745_, 2, v_bkt_2741_);
v_buckets_x27_2746_ = lean_array_uset(v_buckets_2724_, v___x_2740_, v___x_2745_);
v___x_2747_ = lean_unsigned_to_nat(4u);
v___x_2748_ = lean_nat_mul(v_size_x27_2744_, v___x_2747_);
v___x_2749_ = lean_unsigned_to_nat(3u);
v___x_2750_ = lean_nat_div(v___x_2748_, v___x_2749_);
lean_dec(v___x_2748_);
v___x_2751_ = lean_array_get_size(v_buckets_x27_2746_);
v___x_2752_ = lean_nat_dec_le(v___x_2750_, v___x_2751_);
lean_dec(v___x_2750_);
if (v___x_2752_ == 0)
{
lean_object* v_val_2753_; lean_object* v___x_2755_; 
v_val_2753_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(v_buckets_x27_2746_);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 1, v_val_2753_);
lean_ctor_set(v___x_2726_, 0, v_size_x27_2744_);
v___x_2755_ = v___x_2726_;
goto v_reusejp_2754_;
}
else
{
lean_object* v_reuseFailAlloc_2756_; 
v_reuseFailAlloc_2756_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2756_, 0, v_size_x27_2744_);
lean_ctor_set(v_reuseFailAlloc_2756_, 1, v_val_2753_);
v___x_2755_ = v_reuseFailAlloc_2756_;
goto v_reusejp_2754_;
}
v_reusejp_2754_:
{
return v___x_2755_;
}
}
else
{
lean_object* v___x_2758_; 
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 1, v_buckets_x27_2746_);
lean_ctor_set(v___x_2726_, 0, v_size_x27_2744_);
v___x_2758_ = v___x_2726_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v_size_x27_2744_);
lean_ctor_set(v_reuseFailAlloc_2759_, 1, v_buckets_x27_2746_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
else
{
lean_object* v___x_2760_; lean_object* v_buckets_x27_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2765_; 
lean_inc(v_bkt_2741_);
v___x_2760_ = lean_box(0);
v_buckets_x27_2761_ = lean_array_uset(v_buckets_2724_, v___x_2740_, v___x_2760_);
v___x_2762_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_2721_, v_b_2722_, v_bkt_2741_);
v___x_2763_ = lean_array_uset(v_buckets_x27_2761_, v___x_2740_, v___x_2762_);
if (v_isShared_2727_ == 0)
{
lean_ctor_set(v___x_2726_, 1, v___x_2763_);
v___x_2765_ = v___x_2726_;
goto v_reusejp_2764_;
}
else
{
lean_object* v_reuseFailAlloc_2766_; 
v_reuseFailAlloc_2766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2766_, 0, v_size_2723_);
lean_ctor_set(v_reuseFailAlloc_2766_, 1, v___x_2763_);
v___x_2765_ = v_reuseFailAlloc_2766_;
goto v_reusejp_2764_;
}
v_reusejp_2764_:
{
return v___x_2765_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(lean_object* v_a_2768_, lean_object* v_e_2769_, lean_object* v_a_2770_){
_start:
{
lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v___x_2772_ = lean_st_ref_take(v_a_2768_);
v___x_2773_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(v___x_2772_, v_e_2769_, v_a_2770_);
v___x_2774_ = lean_st_ref_set(v_a_2768_, v___x_2773_);
v___x_2775_ = lean_box(0);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed(lean_object* v_a_2776_, lean_object* v_e_2777_, lean_object* v_a_2778_, lean_object* v___y_2779_){
_start:
{
lean_object* v_res_2780_; 
v_res_2780_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2(v_a_2776_, v_e_2777_, v_a_2778_);
lean_dec(v_a_2776_);
return v_res_2780_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2781_; 
v___x_2781_ = lean_mk_string_unchecked("transform", 9, 9);
return v___x_2781_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2782_ = lean_unsigned_to_nat(0u);
v___x_2783_ = lean_mk_empty_array_with_capacity(v___x_2782_);
return v___x_2783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_2784_, lean_object* v_pre_2785_, lean_object* v_post_2786_, uint8_t v_usedLetOnly_2787_, uint8_t v_skipConstInApp_2788_, uint8_t v_skipInstances_2789_, lean_object* v_body_2790_, lean_object* v_x_2791_, lean_object* v___y_2792_, lean_object* v___y_2793_, lean_object* v___y_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_){
_start:
{
lean_object* v___x_2798_; lean_object* v___x_2799_; 
v___x_2798_ = lean_array_push(v_fvars_2784_, v_x_2791_);
v___x_2799_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_2785_, v_post_2786_, v_usedLetOnly_2787_, v_skipConstInApp_2788_, v_skipInstances_2789_, v___x_2798_, v_body_2790_, v___y_2792_, v___y_2793_, v___y_2794_, v___y_2795_, v___y_2796_);
return v___x_2799_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_2800_, lean_object* v_pre_2801_, lean_object* v_post_2802_, lean_object* v_usedLetOnly_2803_, lean_object* v_skipConstInApp_2804_, lean_object* v_skipInstances_2805_, lean_object* v_body_2806_, lean_object* v_x_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_, lean_object* v___y_2813_){
_start:
{
uint8_t v_usedLetOnly_boxed_2814_; uint8_t v_skipConstInApp_boxed_2815_; uint8_t v_skipInstances_boxed_2816_; lean_object* v_res_2817_; 
v_usedLetOnly_boxed_2814_ = lean_unbox(v_usedLetOnly_2803_);
v_skipConstInApp_boxed_2815_ = lean_unbox(v_skipConstInApp_2804_);
v_skipInstances_boxed_2816_ = lean_unbox(v_skipInstances_2805_);
v_res_2817_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0(v_fvars_2800_, v_pre_2801_, v_post_2802_, v_usedLetOnly_boxed_2814_, v_skipConstInApp_boxed_2815_, v_skipInstances_boxed_2816_, v_body_2806_, v_x_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_);
lean_dec(v___y_2812_);
lean_dec_ref(v___y_2811_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v___y_2808_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(lean_object* v_pre_2818_, lean_object* v_post_2819_, uint8_t v_usedLetOnly_2820_, uint8_t v_skipConstInApp_2821_, uint8_t v_skipInstances_2822_, lean_object* v_e_2823_, lean_object* v_a_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_){
_start:
{
lean_object* v___x_2830_; 
lean_inc_ref(v_post_2819_);
lean_inc(v___y_2828_);
lean_inc_ref(v___y_2827_);
lean_inc(v___y_2826_);
lean_inc_ref(v___y_2825_);
lean_inc_ref(v_e_2823_);
v___x_2830_ = lean_apply_6(v_post_2819_, v_e_2823_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, lean_box(0));
if (lean_obj_tag(v___x_2830_) == 0)
{
lean_object* v_a_2831_; lean_object* v___x_2833_; uint8_t v_isShared_2834_; uint8_t v_isSharedCheck_2849_; 
v_a_2831_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2849_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2849_ == 0)
{
v___x_2833_ = v___x_2830_;
v_isShared_2834_ = v_isSharedCheck_2849_;
goto v_resetjp_2832_;
}
else
{
lean_inc(v_a_2831_);
lean_dec(v___x_2830_);
v___x_2833_ = lean_box(0);
v_isShared_2834_ = v_isSharedCheck_2849_;
goto v_resetjp_2832_;
}
v_resetjp_2832_:
{
switch(lean_obj_tag(v_a_2831_))
{
case 0:
{
lean_object* v_e_2835_; lean_object* v___x_2837_; 
lean_dec_ref(v_e_2823_);
lean_dec_ref(v_post_2819_);
lean_dec_ref(v_pre_2818_);
v_e_2835_ = lean_ctor_get(v_a_2831_, 0);
lean_inc_ref(v_e_2835_);
lean_dec_ref(v_a_2831_);
if (v_isShared_2834_ == 0)
{
lean_ctor_set(v___x_2833_, 0, v_e_2835_);
v___x_2837_ = v___x_2833_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_e_2835_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
case 1:
{
lean_object* v_e_2839_; lean_object* v___x_2840_; 
lean_del_object(v___x_2833_);
lean_dec_ref(v_e_2823_);
v_e_2839_ = lean_ctor_get(v_a_2831_, 0);
lean_inc_ref(v_e_2839_);
lean_dec_ref(v_a_2831_);
v___x_2840_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2818_, v_post_2819_, v_usedLetOnly_2820_, v_skipConstInApp_2821_, v_skipInstances_2822_, v_e_2839_, v_a_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_);
return v___x_2840_;
}
default: 
{
lean_object* v_e_x3f_2841_; 
lean_dec_ref(v_post_2819_);
lean_dec_ref(v_pre_2818_);
v_e_x3f_2841_ = lean_ctor_get(v_a_2831_, 0);
lean_inc(v_e_x3f_2841_);
lean_dec_ref(v_a_2831_);
if (lean_obj_tag(v_e_x3f_2841_) == 0)
{
lean_object* v___x_2843_; 
if (v_isShared_2834_ == 0)
{
lean_ctor_set(v___x_2833_, 0, v_e_2823_);
v___x_2843_ = v___x_2833_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_e_2823_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
return v___x_2843_;
}
}
else
{
lean_object* v_val_2845_; lean_object* v___x_2847_; 
lean_dec_ref(v_e_2823_);
v_val_2845_ = lean_ctor_get(v_e_x3f_2841_, 0);
lean_inc(v_val_2845_);
lean_dec_ref(v_e_x3f_2841_);
if (v_isShared_2834_ == 0)
{
lean_ctor_set(v___x_2833_, 0, v_val_2845_);
v___x_2847_ = v___x_2833_;
goto v_reusejp_2846_;
}
else
{
lean_object* v_reuseFailAlloc_2848_; 
v_reuseFailAlloc_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2848_, 0, v_val_2845_);
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
}
}
else
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2857_; 
lean_dec_ref(v_e_2823_);
lean_dec_ref(v_post_2819_);
lean_dec_ref(v_pre_2818_);
v_a_2850_ = lean_ctor_get(v___x_2830_, 0);
v_isSharedCheck_2857_ = !lean_is_exclusive(v___x_2830_);
if (v_isSharedCheck_2857_ == 0)
{
v___x_2852_ = v___x_2830_;
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2830_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2857_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2855_; 
if (v_isShared_2853_ == 0)
{
v___x_2855_ = v___x_2852_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v_a_2850_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(lean_object* v_pre_2858_, lean_object* v_post_2859_, uint8_t v_usedLetOnly_2860_, uint8_t v_skipConstInApp_2861_, uint8_t v_skipInstances_2862_, lean_object* v_fvars_2863_, lean_object* v_e_2864_, lean_object* v_a_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_){
_start:
{
if (lean_obj_tag(v_e_2864_) == 6)
{
lean_object* v_binderName_2871_; lean_object* v_binderType_2872_; lean_object* v_body_2873_; uint8_t v_binderInfo_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; 
v_binderName_2871_ = lean_ctor_get(v_e_2864_, 0);
lean_inc(v_binderName_2871_);
v_binderType_2872_ = lean_ctor_get(v_e_2864_, 1);
lean_inc_ref(v_binderType_2872_);
v_body_2873_ = lean_ctor_get(v_e_2864_, 2);
lean_inc_ref(v_body_2873_);
v_binderInfo_2874_ = lean_ctor_get_uint8(v_e_2864_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2864_);
v___x_2875_ = lean_expr_instantiate_rev(v_binderType_2872_, v_fvars_2863_);
lean_dec_ref(v_binderType_2872_);
lean_inc_ref(v_post_2859_);
lean_inc_ref(v_pre_2858_);
v___x_2876_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2858_, v_post_2859_, v_usedLetOnly_2860_, v_skipConstInApp_2861_, v_skipInstances_2862_, v___x_2875_, v_a_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_);
if (lean_obj_tag(v___x_2876_) == 0)
{
lean_object* v_a_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___f_2881_; uint8_t v___x_2882_; lean_object* v___x_2883_; 
v_a_2877_ = lean_ctor_get(v___x_2876_, 0);
lean_inc(v_a_2877_);
lean_dec_ref(v___x_2876_);
v___x_2878_ = lean_box(v_usedLetOnly_2860_);
v___x_2879_ = lean_box(v_skipConstInApp_2861_);
v___x_2880_ = lean_box(v_skipInstances_2862_);
v___f_2881_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2881_, 0, v_fvars_2863_);
lean_closure_set(v___f_2881_, 1, v_pre_2858_);
lean_closure_set(v___f_2881_, 2, v_post_2859_);
lean_closure_set(v___f_2881_, 3, v___x_2878_);
lean_closure_set(v___f_2881_, 4, v___x_2879_);
lean_closure_set(v___f_2881_, 5, v___x_2880_);
lean_closure_set(v___f_2881_, 6, v_body_2873_);
v___x_2882_ = 0;
v___x_2883_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_2871_, v_binderInfo_2874_, v_a_2877_, v___f_2881_, v___x_2882_, v_a_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_);
return v___x_2883_;
}
else
{
lean_dec_ref(v_body_2873_);
lean_dec(v_binderName_2871_);
lean_dec_ref(v_fvars_2863_);
lean_dec_ref(v_post_2859_);
lean_dec_ref(v_pre_2858_);
return v___x_2876_;
}
}
else
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
v___x_2884_ = lean_expr_instantiate_rev(v_e_2864_, v_fvars_2863_);
lean_dec_ref(v_e_2864_);
lean_inc_ref(v_post_2859_);
lean_inc_ref(v_pre_2858_);
v___x_2885_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2858_, v_post_2859_, v_usedLetOnly_2860_, v_skipConstInApp_2861_, v_skipInstances_2862_, v___x_2884_, v_a_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_);
if (lean_obj_tag(v___x_2885_) == 0)
{
lean_object* v_a_2886_; uint8_t v___x_2887_; uint8_t v___x_2888_; uint8_t v___x_2889_; lean_object* v___x_2890_; 
v_a_2886_ = lean_ctor_get(v___x_2885_, 0);
lean_inc(v_a_2886_);
lean_dec_ref(v___x_2885_);
v___x_2887_ = 0;
v___x_2888_ = 1;
v___x_2889_ = 1;
v___x_2890_ = l_Lean_Meta_mkLambdaFVars(v_fvars_2863_, v_a_2886_, v___x_2887_, v_usedLetOnly_2860_, v___x_2887_, v___x_2888_, v___x_2889_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_);
lean_dec_ref(v_fvars_2863_);
if (lean_obj_tag(v___x_2890_) == 0)
{
lean_object* v_a_2891_; lean_object* v___x_2892_; 
v_a_2891_ = lean_ctor_get(v___x_2890_, 0);
lean_inc(v_a_2891_);
lean_dec_ref(v___x_2890_);
v___x_2892_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_2858_, v_post_2859_, v_usedLetOnly_2860_, v_skipConstInApp_2861_, v_skipInstances_2862_, v_a_2891_, v_a_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_);
return v___x_2892_;
}
else
{
lean_dec_ref(v_post_2859_);
lean_dec_ref(v_pre_2858_);
return v___x_2890_;
}
}
else
{
lean_dec_ref(v_fvars_2863_);
lean_dec_ref(v_post_2859_);
lean_dec_ref(v_pre_2858_);
return v___x_2885_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(lean_object* v_fvars_2893_, lean_object* v_pre_2894_, lean_object* v_post_2895_, uint8_t v_usedLetOnly_2896_, uint8_t v_skipConstInApp_2897_, uint8_t v_skipInstances_2898_, lean_object* v_body_2899_, lean_object* v_x_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_){
_start:
{
lean_object* v___x_2907_; lean_object* v___x_2908_; 
v___x_2907_ = lean_array_push(v_fvars_2893_, v_x_2900_);
v___x_2908_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_2894_, v_post_2895_, v_usedLetOnly_2896_, v_skipConstInApp_2897_, v_skipInstances_2898_, v___x_2907_, v_body_2899_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_);
return v___x_2908_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed(lean_object* v_fvars_2909_, lean_object* v_pre_2910_, lean_object* v_post_2911_, lean_object* v_usedLetOnly_2912_, lean_object* v_skipConstInApp_2913_, lean_object* v_skipInstances_2914_, lean_object* v_body_2915_, lean_object* v_x_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_){
_start:
{
uint8_t v_usedLetOnly_boxed_2923_; uint8_t v_skipConstInApp_boxed_2924_; uint8_t v_skipInstances_boxed_2925_; lean_object* v_res_2926_; 
v_usedLetOnly_boxed_2923_ = lean_unbox(v_usedLetOnly_2912_);
v_skipConstInApp_boxed_2924_ = lean_unbox(v_skipConstInApp_2913_);
v_skipInstances_boxed_2925_ = lean_unbox(v_skipInstances_2914_);
v_res_2926_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0(v_fvars_2909_, v_pre_2910_, v_post_2911_, v_usedLetOnly_boxed_2923_, v_skipConstInApp_boxed_2924_, v_skipInstances_boxed_2925_, v_body_2915_, v_x_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_);
lean_dec(v___y_2921_);
lean_dec_ref(v___y_2920_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
lean_dec(v___y_2917_);
return v_res_2926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(lean_object* v_pre_2927_, lean_object* v_post_2928_, uint8_t v_usedLetOnly_2929_, uint8_t v_skipConstInApp_2930_, uint8_t v_skipInstances_2931_, lean_object* v_fvars_2932_, lean_object* v_e_2933_, lean_object* v_a_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_){
_start:
{
if (lean_obj_tag(v_e_2933_) == 8)
{
lean_object* v_declName_2940_; lean_object* v_type_2941_; lean_object* v_value_2942_; lean_object* v_body_2943_; uint8_t v_nondep_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; 
v_declName_2940_ = lean_ctor_get(v_e_2933_, 0);
lean_inc(v_declName_2940_);
v_type_2941_ = lean_ctor_get(v_e_2933_, 1);
lean_inc_ref(v_type_2941_);
v_value_2942_ = lean_ctor_get(v_e_2933_, 2);
lean_inc_ref(v_value_2942_);
v_body_2943_ = lean_ctor_get(v_e_2933_, 3);
lean_inc_ref(v_body_2943_);
v_nondep_2944_ = lean_ctor_get_uint8(v_e_2933_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_2933_);
v___x_2945_ = lean_expr_instantiate_rev(v_type_2941_, v_fvars_2932_);
lean_dec_ref(v_type_2941_);
lean_inc_ref(v_post_2928_);
lean_inc_ref(v_pre_2927_);
v___x_2946_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2927_, v_post_2928_, v_usedLetOnly_2929_, v_skipConstInApp_2930_, v_skipInstances_2931_, v___x_2945_, v_a_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
if (lean_obj_tag(v___x_2946_) == 0)
{
lean_object* v_a_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; 
v_a_2947_ = lean_ctor_get(v___x_2946_, 0);
lean_inc(v_a_2947_);
lean_dec_ref(v___x_2946_);
v___x_2948_ = lean_expr_instantiate_rev(v_value_2942_, v_fvars_2932_);
lean_dec_ref(v_value_2942_);
lean_inc_ref(v_post_2928_);
lean_inc_ref(v_pre_2927_);
v___x_2949_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2927_, v_post_2928_, v_usedLetOnly_2929_, v_skipConstInApp_2930_, v_skipInstances_2931_, v___x_2948_, v_a_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
if (lean_obj_tag(v___x_2949_) == 0)
{
lean_object* v_a_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v___x_2953_; lean_object* v___f_2954_; uint8_t v___x_2955_; lean_object* v___x_2956_; 
v_a_2950_ = lean_ctor_get(v___x_2949_, 0);
lean_inc(v_a_2950_);
lean_dec_ref(v___x_2949_);
v___x_2951_ = lean_box(v_usedLetOnly_2929_);
v___x_2952_ = lean_box(v_skipConstInApp_2930_);
v___x_2953_ = lean_box(v_skipInstances_2931_);
v___f_2954_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2954_, 0, v_fvars_2932_);
lean_closure_set(v___f_2954_, 1, v_pre_2927_);
lean_closure_set(v___f_2954_, 2, v_post_2928_);
lean_closure_set(v___f_2954_, 3, v___x_2951_);
lean_closure_set(v___f_2954_, 4, v___x_2952_);
lean_closure_set(v___f_2954_, 5, v___x_2953_);
lean_closure_set(v___f_2954_, 6, v_body_2943_);
v___x_2955_ = 0;
v___x_2956_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_declName_2940_, v_a_2947_, v_a_2950_, v___f_2954_, v_nondep_2944_, v___x_2955_, v_a_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
return v___x_2956_;
}
else
{
lean_dec(v_a_2947_);
lean_dec_ref(v_body_2943_);
lean_dec(v_declName_2940_);
lean_dec_ref(v_fvars_2932_);
lean_dec_ref(v_post_2928_);
lean_dec_ref(v_pre_2927_);
return v___x_2949_;
}
}
else
{
lean_dec_ref(v_body_2943_);
lean_dec_ref(v_value_2942_);
lean_dec(v_declName_2940_);
lean_dec_ref(v_fvars_2932_);
lean_dec_ref(v_post_2928_);
lean_dec_ref(v_pre_2927_);
return v___x_2946_;
}
}
else
{
lean_object* v___x_2957_; lean_object* v___x_2958_; 
v___x_2957_ = lean_expr_instantiate_rev(v_e_2933_, v_fvars_2932_);
lean_dec_ref(v_e_2933_);
lean_inc_ref(v_post_2928_);
lean_inc_ref(v_pre_2927_);
v___x_2958_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2927_, v_post_2928_, v_usedLetOnly_2929_, v_skipConstInApp_2930_, v_skipInstances_2931_, v___x_2957_, v_a_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
if (lean_obj_tag(v___x_2958_) == 0)
{
lean_object* v_a_2959_; uint8_t v___x_2960_; uint8_t v___x_2961_; lean_object* v___x_2962_; 
v_a_2959_ = lean_ctor_get(v___x_2958_, 0);
lean_inc(v_a_2959_);
lean_dec_ref(v___x_2958_);
v___x_2960_ = 0;
v___x_2961_ = 1;
v___x_2962_ = l_Lean_Meta_mkLetFVars(v_fvars_2932_, v_a_2959_, v_usedLetOnly_2929_, v___x_2960_, v___x_2961_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
lean_dec_ref(v_fvars_2932_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v___x_2964_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref(v___x_2962_);
v___x_2964_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_2927_, v_post_2928_, v_usedLetOnly_2929_, v_skipConstInApp_2930_, v_skipInstances_2931_, v_a_2963_, v_a_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_);
return v___x_2964_;
}
else
{
lean_dec_ref(v_post_2928_);
lean_dec_ref(v_pre_2927_);
return v___x_2962_;
}
}
else
{
lean_dec_ref(v_fvars_2932_);
lean_dec_ref(v_post_2928_);
lean_dec_ref(v_pre_2927_);
return v___x_2958_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(lean_object* v_pre_2965_, lean_object* v_post_2966_, uint8_t v_usedLetOnly_2967_, uint8_t v_skipConstInApp_2968_, uint8_t v_skipInstances_2969_, size_t v_sz_2970_, size_t v_i_2971_, lean_object* v_bs_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_){
_start:
{
uint8_t v___x_2979_; 
v___x_2979_ = lean_usize_dec_lt(v_i_2971_, v_sz_2970_);
if (v___x_2979_ == 0)
{
lean_object* v___x_2980_; 
lean_dec_ref(v_post_2966_);
lean_dec_ref(v_pre_2965_);
v___x_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2980_, 0, v_bs_2972_);
return v___x_2980_;
}
else
{
lean_object* v_v_2981_; lean_object* v___x_2982_; 
v_v_2981_ = lean_array_uget_borrowed(v_bs_2972_, v_i_2971_);
lean_inc(v_v_2981_);
lean_inc_ref(v_post_2966_);
lean_inc_ref(v_pre_2965_);
v___x_2982_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2965_, v_post_2966_, v_usedLetOnly_2967_, v_skipConstInApp_2968_, v_skipInstances_2969_, v_v_2981_, v___y_2973_, v___y_2974_, v___y_2975_, v___y_2976_, v___y_2977_);
if (lean_obj_tag(v___x_2982_) == 0)
{
lean_object* v_a_2983_; lean_object* v___x_2984_; lean_object* v_bs_x27_2985_; size_t v___x_2986_; size_t v___x_2987_; lean_object* v___x_2988_; 
v_a_2983_ = lean_ctor_get(v___x_2982_, 0);
lean_inc(v_a_2983_);
lean_dec_ref(v___x_2982_);
v___x_2984_ = lean_unsigned_to_nat(0u);
v_bs_x27_2985_ = lean_array_uset(v_bs_2972_, v_i_2971_, v___x_2984_);
v___x_2986_ = ((size_t)1ULL);
v___x_2987_ = lean_usize_add(v_i_2971_, v___x_2986_);
v___x_2988_ = lean_array_uset(v_bs_x27_2985_, v_i_2971_, v_a_2983_);
v_i_2971_ = v___x_2987_;
v_bs_2972_ = v___x_2988_;
goto _start;
}
else
{
lean_object* v_a_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_2997_; 
lean_dec_ref(v_bs_2972_);
lean_dec_ref(v_post_2966_);
lean_dec_ref(v_pre_2965_);
v_a_2990_ = lean_ctor_get(v___x_2982_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v___x_2982_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2992_ = v___x_2982_;
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_a_2990_);
lean_dec(v___x_2982_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_2997_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2995_; 
if (v_isShared_2993_ == 0)
{
v___x_2995_ = v___x_2992_;
goto v_reusejp_2994_;
}
else
{
lean_object* v_reuseFailAlloc_2996_; 
v_reuseFailAlloc_2996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2996_, 0, v_a_2990_);
v___x_2995_ = v_reuseFailAlloc_2996_;
goto v_reusejp_2994_;
}
v_reusejp_2994_:
{
return v___x_2995_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object* v_pre_2998_, lean_object* v_post_2999_, uint8_t v_usedLetOnly_3000_, uint8_t v_skipConstInApp_3001_, uint8_t v_skipInstances_3002_, lean_object* v___x_3003_, lean_object* v___y_3004_, lean_object* v_b_3005_, lean_object* v_a_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_, lean_object* v___y_3010_){
_start:
{
lean_object* v___x_3012_; 
v___x_3012_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_2998_, v_post_2999_, v_usedLetOnly_3000_, v_skipConstInApp_3001_, v_skipInstances_3002_, v___x_3003_, v___y_3004_, v___y_3007_, v___y_3008_, v___y_3009_, v___y_3010_);
if (lean_obj_tag(v___x_3012_) == 0)
{
lean_object* v_a_3013_; lean_object* v___x_3015_; uint8_t v_isShared_3016_; uint8_t v_isSharedCheck_3022_; 
v_a_3013_ = lean_ctor_get(v___x_3012_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3015_ = v___x_3012_;
v_isShared_3016_ = v_isSharedCheck_3022_;
goto v_resetjp_3014_;
}
else
{
lean_inc(v_a_3013_);
lean_dec(v___x_3012_);
v___x_3015_ = lean_box(0);
v_isShared_3016_ = v_isSharedCheck_3022_;
goto v_resetjp_3014_;
}
v_resetjp_3014_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3020_; 
v___x_3017_ = lean_array_fset(v_b_3005_, v_a_3006_, v_a_3013_);
v___x_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3017_);
if (v_isShared_3016_ == 0)
{
lean_ctor_set(v___x_3015_, 0, v___x_3018_);
v___x_3020_ = v___x_3015_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v___x_3018_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
else
{
lean_object* v_a_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3030_; 
lean_dec_ref(v_b_3005_);
v_a_3023_ = lean_ctor_get(v___x_3012_, 0);
v_isSharedCheck_3030_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3030_ == 0)
{
v___x_3025_ = v___x_3012_;
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
else
{
lean_inc(v_a_3023_);
lean_dec(v___x_3012_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3030_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
lean_object* v___x_3028_; 
if (v_isShared_3026_ == 0)
{
v___x_3028_ = v___x_3025_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_a_3023_);
v___x_3028_ = v_reuseFailAlloc_3029_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
return v___x_3028_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v_pre_3031_, lean_object* v_post_3032_, lean_object* v_usedLetOnly_3033_, lean_object* v_skipConstInApp_3034_, lean_object* v_skipInstances_3035_, lean_object* v___x_3036_, lean_object* v___y_3037_, lean_object* v_b_3038_, lean_object* v_a_3039_, lean_object* v___y_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_){
_start:
{
uint8_t v_usedLetOnly_boxed_3045_; uint8_t v_skipConstInApp_boxed_3046_; uint8_t v_skipInstances_boxed_3047_; lean_object* v_res_3048_; 
v_usedLetOnly_boxed_3045_ = lean_unbox(v_usedLetOnly_3033_);
v_skipConstInApp_boxed_3046_ = lean_unbox(v_skipConstInApp_3034_);
v_skipInstances_boxed_3047_ = lean_unbox(v_skipInstances_3035_);
v_res_3048_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0(v_pre_3031_, v_post_3032_, v_usedLetOnly_boxed_3045_, v_skipConstInApp_boxed_3046_, v_skipInstances_boxed_3047_, v___x_3036_, v___y_3037_, v_b_3038_, v_a_3039_, v___y_3040_, v___y_3041_, v___y_3042_, v___y_3043_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec(v___y_3041_);
lean_dec_ref(v___y_3040_);
lean_dec(v_a_3039_);
lean_dec(v___y_3037_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_3049_, lean_object* v___x_3050_, lean_object* v_pre_3051_, lean_object* v_post_3052_, uint8_t v_usedLetOnly_3053_, uint8_t v_skipConstInApp_3054_, uint8_t v_skipInstances_3055_, lean_object* v_a_3056_, lean_object* v_b_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v___y_3065_; uint8_t v___x_3088_; 
v___x_3088_ = lean_nat_dec_lt(v_a_3056_, v_upperBound_3049_);
if (v___x_3088_ == 0)
{
lean_object* v___x_3089_; 
lean_dec(v_a_3056_);
lean_dec_ref(v_post_3052_);
lean_dec_ref(v_pre_3051_);
v___x_3089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3089_, 0, v_b_3057_);
return v___x_3089_;
}
else
{
lean_object* v___x_3090_; lean_object* v___x_3091_; uint8_t v___x_3092_; 
v___x_3090_ = lean_array_fget_borrowed(v_b_3057_, v_a_3056_);
v___x_3091_ = lean_array_get_size(v___x_3050_);
v___x_3092_ = lean_nat_dec_lt(v_a_3056_, v___x_3091_);
if (v___x_3092_ == 0)
{
lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___f_3096_; 
lean_inc(v___x_3090_);
v___x_3093_ = lean_box(v_usedLetOnly_3053_);
v___x_3094_ = lean_box(v_skipConstInApp_3054_);
v___x_3095_ = lean_box(v_skipInstances_3055_);
lean_inc(v_a_3056_);
lean_inc(v___y_3058_);
lean_inc_ref(v_post_3052_);
lean_inc_ref(v_pre_3051_);
v___f_3096_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3096_, 0, v_pre_3051_);
lean_closure_set(v___f_3096_, 1, v_post_3052_);
lean_closure_set(v___f_3096_, 2, v___x_3093_);
lean_closure_set(v___f_3096_, 3, v___x_3094_);
lean_closure_set(v___f_3096_, 4, v___x_3095_);
lean_closure_set(v___f_3096_, 5, v___x_3090_);
lean_closure_set(v___f_3096_, 6, v___y_3058_);
lean_closure_set(v___f_3096_, 7, v_b_3057_);
lean_closure_set(v___f_3096_, 8, v_a_3056_);
v___y_3065_ = v___f_3096_;
goto v___jp_3064_;
}
else
{
lean_object* v___x_3097_; uint8_t v_isInstance_3098_; 
v___x_3097_ = lean_array_fget_borrowed(v___x_3050_, v_a_3056_);
v_isInstance_3098_ = lean_ctor_get_uint8(v___x_3097_, sizeof(void*)*1 + 4);
if (v_isInstance_3098_ == 0)
{
lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___f_3102_; 
lean_inc(v___x_3090_);
v___x_3099_ = lean_box(v_usedLetOnly_3053_);
v___x_3100_ = lean_box(v_skipConstInApp_3054_);
v___x_3101_ = lean_box(v_skipInstances_3055_);
lean_inc(v_a_3056_);
lean_inc(v___y_3058_);
lean_inc_ref(v_post_3052_);
lean_inc_ref(v_pre_3051_);
v___f_3102_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_3102_, 0, v_pre_3051_);
lean_closure_set(v___f_3102_, 1, v_post_3052_);
lean_closure_set(v___f_3102_, 2, v___x_3099_);
lean_closure_set(v___f_3102_, 3, v___x_3100_);
lean_closure_set(v___f_3102_, 4, v___x_3101_);
lean_closure_set(v___f_3102_, 5, v___x_3090_);
lean_closure_set(v___f_3102_, 6, v___y_3058_);
lean_closure_set(v___f_3102_, 7, v_b_3057_);
lean_closure_set(v___f_3102_, 8, v_a_3056_);
v___y_3065_ = v___f_3102_;
goto v___jp_3064_;
}
else
{
lean_object* v___x_3103_; lean_object* v___f_3104_; 
v___x_3103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3103_, 0, v_b_3057_);
v___f_3104_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_3104_, 0, v___x_3103_);
v___y_3065_ = v___f_3104_;
goto v___jp_3064_;
}
}
}
v___jp_3064_:
{
lean_object* v___x_3066_; 
lean_inc(v___y_3062_);
lean_inc_ref(v___y_3061_);
lean_inc(v___y_3060_);
lean_inc_ref(v___y_3059_);
v___x_3066_ = lean_apply_5(v___y_3065_, v___y_3059_, v___y_3060_, v___y_3061_, v___y_3062_, lean_box(0));
if (lean_obj_tag(v___x_3066_) == 0)
{
lean_object* v_a_3067_; lean_object* v___x_3069_; uint8_t v_isShared_3070_; uint8_t v_isSharedCheck_3079_; 
v_a_3067_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3069_ = v___x_3066_;
v_isShared_3070_ = v_isSharedCheck_3079_;
goto v_resetjp_3068_;
}
else
{
lean_inc(v_a_3067_);
lean_dec(v___x_3066_);
v___x_3069_ = lean_box(0);
v_isShared_3070_ = v_isSharedCheck_3079_;
goto v_resetjp_3068_;
}
v_resetjp_3068_:
{
if (lean_obj_tag(v_a_3067_) == 0)
{
lean_object* v_a_3071_; lean_object* v___x_3073_; 
lean_dec(v_a_3056_);
lean_dec_ref(v_post_3052_);
lean_dec_ref(v_pre_3051_);
v_a_3071_ = lean_ctor_get(v_a_3067_, 0);
lean_inc(v_a_3071_);
lean_dec_ref(v_a_3067_);
if (v_isShared_3070_ == 0)
{
lean_ctor_set(v___x_3069_, 0, v_a_3071_);
v___x_3073_ = v___x_3069_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_a_3071_);
v___x_3073_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
return v___x_3073_;
}
}
else
{
lean_object* v_a_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; 
lean_del_object(v___x_3069_);
v_a_3075_ = lean_ctor_get(v_a_3067_, 0);
lean_inc(v_a_3075_);
lean_dec_ref(v_a_3067_);
v___x_3076_ = lean_unsigned_to_nat(1u);
v___x_3077_ = lean_nat_add(v_a_3056_, v___x_3076_);
lean_dec(v_a_3056_);
v_a_3056_ = v___x_3077_;
v_b_3057_ = v_a_3075_;
goto _start;
}
}
}
else
{
lean_object* v_a_3080_; lean_object* v___x_3082_; uint8_t v_isShared_3083_; uint8_t v_isSharedCheck_3087_; 
lean_dec(v_a_3056_);
lean_dec_ref(v_post_3052_);
lean_dec_ref(v_pre_3051_);
v_a_3080_ = lean_ctor_get(v___x_3066_, 0);
v_isSharedCheck_3087_ = !lean_is_exclusive(v___x_3066_);
if (v_isSharedCheck_3087_ == 0)
{
v___x_3082_ = v___x_3066_;
v_isShared_3083_ = v_isSharedCheck_3087_;
goto v_resetjp_3081_;
}
else
{
lean_inc(v_a_3080_);
lean_dec(v___x_3066_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(uint8_t v_skipInstances_3105_, lean_object* v_pre_3106_, lean_object* v_post_3107_, uint8_t v_usedLetOnly_3108_, uint8_t v_skipConstInApp_3109_, lean_object* v_x_3110_, lean_object* v_x_3111_, lean_object* v_x_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_){
_start:
{
lean_object* v_f_3120_; lean_object* v___y_3121_; lean_object* v___y_3122_; lean_object* v___y_3123_; lean_object* v___y_3124_; lean_object* v___y_3125_; 
if (lean_obj_tag(v_x_3110_) == 5)
{
lean_object* v_fn_3168_; lean_object* v_arg_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v_fn_3168_ = lean_ctor_get(v_x_3110_, 0);
lean_inc_ref(v_fn_3168_);
v_arg_3169_ = lean_ctor_get(v_x_3110_, 1);
lean_inc_ref(v_arg_3169_);
lean_dec_ref(v_x_3110_);
v___x_3170_ = lean_array_set(v_x_3111_, v_x_3112_, v_arg_3169_);
v___x_3171_ = lean_unsigned_to_nat(1u);
v___x_3172_ = lean_nat_sub(v_x_3112_, v___x_3171_);
lean_dec(v_x_3112_);
v_x_3110_ = v_fn_3168_;
v_x_3111_ = v___x_3170_;
v_x_3112_ = v___x_3172_;
goto _start;
}
else
{
lean_dec(v_x_3112_);
if (v_skipConstInApp_3109_ == 0)
{
goto v___jp_3165_;
}
else
{
uint8_t v___x_3174_; 
v___x_3174_ = l_Lean_Expr_isConst(v_x_3110_);
if (v___x_3174_ == 0)
{
goto v___jp_3165_;
}
else
{
v_f_3120_ = v_x_3110_;
v___y_3121_ = v___y_3113_;
v___y_3122_ = v___y_3114_;
v___y_3123_ = v___y_3115_;
v___y_3124_ = v___y_3116_;
v___y_3125_ = v___y_3117_;
goto v___jp_3119_;
}
}
}
v___jp_3119_:
{
if (v_skipInstances_3105_ == 0)
{
size_t v_sz_3126_; size_t v___x_3127_; lean_object* v___x_3128_; 
v_sz_3126_ = lean_array_size(v_x_3111_);
v___x_3127_ = ((size_t)0ULL);
lean_inc_ref(v_post_3107_);
lean_inc_ref(v_pre_3106_);
v___x_3128_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(v_pre_3106_, v_post_3107_, v_usedLetOnly_3108_, v_skipConstInApp_3109_, v_skipInstances_3105_, v_sz_3126_, v___x_3127_, v_x_3111_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
if (lean_obj_tag(v___x_3128_) == 0)
{
lean_object* v_a_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v_a_3129_ = lean_ctor_get(v___x_3128_, 0);
lean_inc(v_a_3129_);
lean_dec_ref(v___x_3128_);
v___x_3130_ = l_Lean_mkAppN(v_f_3120_, v_a_3129_);
lean_dec(v_a_3129_);
v___x_3131_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3106_, v_post_3107_, v_usedLetOnly_3108_, v_skipConstInApp_3109_, v_skipInstances_3105_, v___x_3130_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
return v___x_3131_;
}
else
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
lean_dec_ref(v_f_3120_);
lean_dec_ref(v_post_3107_);
lean_dec_ref(v_pre_3106_);
v_a_3132_ = lean_ctor_get(v___x_3128_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3128_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3134_ = v___x_3128_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3128_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3137_; 
if (v_isShared_3135_ == 0)
{
v___x_3137_ = v___x_3134_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_a_3132_);
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
lean_object* v___x_3140_; lean_object* v___x_3141_; 
v___x_3140_ = lean_array_get_size(v_x_3111_);
lean_inc_ref(v_f_3120_);
v___x_3141_ = l_Lean_Meta_getFunInfoNArgs(v_f_3120_, v___x_3140_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
if (lean_obj_tag(v___x_3141_) == 0)
{
lean_object* v_a_3142_; lean_object* v_paramInfo_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; 
v_a_3142_ = lean_ctor_get(v___x_3141_, 0);
lean_inc(v_a_3142_);
lean_dec_ref(v___x_3141_);
v_paramInfo_3143_ = lean_ctor_get(v_a_3142_, 0);
lean_inc_ref(v_paramInfo_3143_);
lean_dec(v_a_3142_);
v___x_3144_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_3107_);
lean_inc_ref(v_pre_3106_);
v___x_3145_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v___x_3140_, v_paramInfo_3143_, v_pre_3106_, v_post_3107_, v_usedLetOnly_3108_, v_skipConstInApp_3109_, v_skipInstances_3105_, v___x_3144_, v_x_3111_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
lean_dec_ref(v_paramInfo_3143_);
if (lean_obj_tag(v___x_3145_) == 0)
{
lean_object* v_a_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
v_a_3146_ = lean_ctor_get(v___x_3145_, 0);
lean_inc(v_a_3146_);
lean_dec_ref(v___x_3145_);
v___x_3147_ = l_Lean_mkAppN(v_f_3120_, v_a_3146_);
lean_dec(v_a_3146_);
v___x_3148_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3106_, v_post_3107_, v_usedLetOnly_3108_, v_skipConstInApp_3109_, v_skipInstances_3105_, v___x_3147_, v___y_3121_, v___y_3122_, v___y_3123_, v___y_3124_, v___y_3125_);
return v___x_3148_;
}
else
{
lean_object* v_a_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3156_; 
lean_dec_ref(v_f_3120_);
lean_dec_ref(v_post_3107_);
lean_dec_ref(v_pre_3106_);
v_a_3149_ = lean_ctor_get(v___x_3145_, 0);
v_isSharedCheck_3156_ = !lean_is_exclusive(v___x_3145_);
if (v_isSharedCheck_3156_ == 0)
{
v___x_3151_ = v___x_3145_;
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_a_3149_);
lean_dec(v___x_3145_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3156_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3154_; 
if (v_isShared_3152_ == 0)
{
v___x_3154_ = v___x_3151_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v_a_3149_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
else
{
lean_object* v_a_3157_; lean_object* v___x_3159_; uint8_t v_isShared_3160_; uint8_t v_isSharedCheck_3164_; 
lean_dec_ref(v_f_3120_);
lean_dec_ref(v_x_3111_);
lean_dec_ref(v_post_3107_);
lean_dec_ref(v_pre_3106_);
v_a_3157_ = lean_ctor_get(v___x_3141_, 0);
v_isSharedCheck_3164_ = !lean_is_exclusive(v___x_3141_);
if (v_isSharedCheck_3164_ == 0)
{
v___x_3159_ = v___x_3141_;
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
else
{
lean_inc(v_a_3157_);
lean_dec(v___x_3141_);
v___x_3159_ = lean_box(0);
v_isShared_3160_ = v_isSharedCheck_3164_;
goto v_resetjp_3158_;
}
v_resetjp_3158_:
{
lean_object* v___x_3162_; 
if (v_isShared_3160_ == 0)
{
v___x_3162_ = v___x_3159_;
goto v_reusejp_3161_;
}
else
{
lean_object* v_reuseFailAlloc_3163_; 
v_reuseFailAlloc_3163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3163_, 0, v_a_3157_);
v___x_3162_ = v_reuseFailAlloc_3163_;
goto v_reusejp_3161_;
}
v_reusejp_3161_:
{
return v___x_3162_;
}
}
}
}
}
v___jp_3165_:
{
lean_object* v___x_3166_; 
lean_inc_ref(v_post_3107_);
lean_inc_ref(v_pre_3106_);
v___x_3166_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3106_, v_post_3107_, v_usedLetOnly_3108_, v_skipConstInApp_3109_, v_skipInstances_3105_, v_x_3110_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_, v___y_3117_);
if (lean_obj_tag(v___x_3166_) == 0)
{
lean_object* v_a_3167_; 
v_a_3167_ = lean_ctor_get(v___x_3166_, 0);
lean_inc(v_a_3167_);
lean_dec_ref(v___x_3166_);
v_f_3120_ = v_a_3167_;
v___y_3121_ = v___y_3113_;
v___y_3122_ = v___y_3114_;
v___y_3123_ = v___y_3115_;
v___y_3124_ = v___y_3116_;
v___y_3125_ = v___y_3117_;
goto v___jp_3119_;
}
else
{
lean_dec_ref(v_x_3111_);
lean_dec_ref(v_post_3107_);
lean_dec_ref(v_pre_3106_);
return v___x_3166_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(lean_object* v___x_3175_, lean_object* v_pre_3176_, lean_object* v_e_3177_, lean_object* v_post_3178_, uint8_t v_usedLetOnly_3179_, uint8_t v_skipConstInApp_3180_, uint8_t v_skipInstances_3181_, lean_object* v___y_3182_, lean_object* v___y_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_){
_start:
{
lean_object* v___x_3188_; 
v___x_3188_ = l_Lean_Core_checkSystem(v___x_3175_, v___y_3185_, v___y_3186_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v___x_3189_; 
lean_dec_ref(v___x_3188_);
lean_inc_ref(v_pre_3176_);
lean_inc(v___y_3186_);
lean_inc_ref(v___y_3185_);
lean_inc(v___y_3184_);
lean_inc_ref(v___y_3183_);
lean_inc_ref(v_e_3177_);
v___x_3189_ = lean_apply_6(v_pre_3176_, v_e_3177_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_, lean_box(0));
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_object* v_a_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3238_; 
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3238_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3238_ == 0)
{
v___x_3192_ = v___x_3189_;
v_isShared_3193_ = v_isSharedCheck_3238_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_a_3190_);
lean_dec(v___x_3189_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3238_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
lean_object* v___y_3195_; 
switch(lean_obj_tag(v_a_3190_))
{
case 0:
{
lean_object* v_e_3230_; lean_object* v___x_3232_; 
lean_dec_ref(v_post_3178_);
lean_dec_ref(v_e_3177_);
lean_dec_ref(v_pre_3176_);
v_e_3230_ = lean_ctor_get(v_a_3190_, 0);
lean_inc_ref(v_e_3230_);
lean_dec_ref(v_a_3190_);
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 0, v_e_3230_);
v___x_3232_ = v___x_3192_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v_e_3230_);
v___x_3232_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
return v___x_3232_;
}
}
case 1:
{
lean_object* v_e_3234_; lean_object* v___x_3235_; 
lean_del_object(v___x_3192_);
lean_dec_ref(v_e_3177_);
v_e_3234_ = lean_ctor_get(v_a_3190_, 0);
lean_inc_ref(v_e_3234_);
lean_dec_ref(v_a_3190_);
v___x_3235_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v_e_3234_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3235_;
}
default: 
{
lean_object* v_e_x3f_3236_; 
lean_del_object(v___x_3192_);
v_e_x3f_3236_ = lean_ctor_get(v_a_3190_, 0);
lean_inc(v_e_x3f_3236_);
lean_dec_ref(v_a_3190_);
if (lean_obj_tag(v_e_x3f_3236_) == 0)
{
v___y_3195_ = v_e_3177_;
goto v___jp_3194_;
}
else
{
lean_object* v_val_3237_; 
lean_dec_ref(v_e_3177_);
v_val_3237_ = lean_ctor_get(v_e_x3f_3236_, 0);
lean_inc(v_val_3237_);
lean_dec_ref(v_e_x3f_3236_);
v___y_3195_ = v_val_3237_;
goto v___jp_3194_;
}
}
}
v___jp_3194_:
{
switch(lean_obj_tag(v___y_3195_))
{
case 7:
{
lean_object* v___x_3196_; lean_object* v___x_3197_; 
v___x_3196_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0);
v___x_3197_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v___x_3196_, v___y_3195_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3197_;
}
case 6:
{
lean_object* v___x_3198_; lean_object* v___x_3199_; 
v___x_3198_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0);
v___x_3199_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v___x_3198_, v___y_3195_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3199_;
}
case 8:
{
lean_object* v___x_3200_; lean_object* v___x_3201_; 
v___x_3200_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___closed__0);
v___x_3201_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v___x_3200_, v___y_3195_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3201_;
}
case 5:
{
lean_object* v_dummy_3202_; lean_object* v_nargs_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; 
v_dummy_3202_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_etaStruct_x3f_getProjectedExpr___closed__0);
v_nargs_3203_ = l_Lean_Expr_getAppNumArgs(v___y_3195_);
lean_inc(v_nargs_3203_);
v___x_3204_ = lean_mk_array(v_nargs_3203_, v_dummy_3202_);
v___x_3205_ = lean_unsigned_to_nat(1u);
v___x_3206_ = lean_nat_sub(v_nargs_3203_, v___x_3205_);
lean_dec(v_nargs_3203_);
v___x_3207_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(v_skipInstances_3181_, v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v___y_3195_, v___x_3204_, v___x_3206_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3207_;
}
case 10:
{
lean_object* v_data_3208_; lean_object* v_expr_3209_; lean_object* v___x_3210_; 
v_data_3208_ = lean_ctor_get(v___y_3195_, 0);
v_expr_3209_ = lean_ctor_get(v___y_3195_, 1);
lean_inc_ref(v_expr_3209_);
lean_inc_ref(v_post_3178_);
lean_inc_ref(v_pre_3176_);
v___x_3210_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v_expr_3209_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
if (lean_obj_tag(v___x_3210_) == 0)
{
lean_object* v_a_3211_; size_t v___x_3212_; size_t v___x_3213_; uint8_t v___x_3214_; 
v_a_3211_ = lean_ctor_get(v___x_3210_, 0);
lean_inc(v_a_3211_);
lean_dec_ref(v___x_3210_);
v___x_3212_ = lean_ptr_addr(v_expr_3209_);
v___x_3213_ = lean_ptr_addr(v_a_3211_);
v___x_3214_ = lean_usize_dec_eq(v___x_3212_, v___x_3213_);
if (v___x_3214_ == 0)
{
lean_object* v___x_3215_; lean_object* v___x_3216_; 
lean_inc(v_data_3208_);
lean_dec_ref(v___y_3195_);
v___x_3215_ = l_Lean_Expr_mdata___override(v_data_3208_, v_a_3211_);
v___x_3216_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v___x_3215_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3216_;
}
else
{
lean_object* v___x_3217_; 
lean_dec(v_a_3211_);
v___x_3217_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v___y_3195_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3217_;
}
}
else
{
lean_dec_ref(v___y_3195_);
lean_dec_ref(v_post_3178_);
lean_dec_ref(v_pre_3176_);
return v___x_3210_;
}
}
case 11:
{
lean_object* v_typeName_3218_; lean_object* v_idx_3219_; lean_object* v_struct_3220_; lean_object* v___x_3221_; 
v_typeName_3218_ = lean_ctor_get(v___y_3195_, 0);
v_idx_3219_ = lean_ctor_get(v___y_3195_, 1);
v_struct_3220_ = lean_ctor_get(v___y_3195_, 2);
lean_inc_ref(v_struct_3220_);
lean_inc_ref(v_post_3178_);
lean_inc_ref(v_pre_3176_);
v___x_3221_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v_struct_3220_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
if (lean_obj_tag(v___x_3221_) == 0)
{
lean_object* v_a_3222_; size_t v___x_3223_; size_t v___x_3224_; uint8_t v___x_3225_; 
v_a_3222_ = lean_ctor_get(v___x_3221_, 0);
lean_inc(v_a_3222_);
lean_dec_ref(v___x_3221_);
v___x_3223_ = lean_ptr_addr(v_struct_3220_);
v___x_3224_ = lean_ptr_addr(v_a_3222_);
v___x_3225_ = lean_usize_dec_eq(v___x_3223_, v___x_3224_);
if (v___x_3225_ == 0)
{
lean_object* v___x_3226_; lean_object* v___x_3227_; 
lean_inc(v_idx_3219_);
lean_inc(v_typeName_3218_);
lean_dec_ref(v___y_3195_);
v___x_3226_ = l_Lean_Expr_proj___override(v_typeName_3218_, v_idx_3219_, v_a_3222_);
v___x_3227_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v___x_3226_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3227_;
}
else
{
lean_object* v___x_3228_; 
lean_dec(v_a_3222_);
v___x_3228_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v___y_3195_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3228_;
}
}
else
{
lean_dec_ref(v___y_3195_);
lean_dec_ref(v_post_3178_);
lean_dec_ref(v_pre_3176_);
return v___x_3221_;
}
}
default: 
{
lean_object* v___x_3229_; 
v___x_3229_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3176_, v_post_3178_, v_usedLetOnly_3179_, v_skipConstInApp_3180_, v_skipInstances_3181_, v___y_3195_, v___y_3182_, v___y_3183_, v___y_3184_, v___y_3185_, v___y_3186_);
return v___x_3229_;
}
}
}
}
}
else
{
lean_object* v_a_3239_; lean_object* v___x_3241_; uint8_t v_isShared_3242_; uint8_t v_isSharedCheck_3246_; 
lean_dec_ref(v_post_3178_);
lean_dec_ref(v_e_3177_);
lean_dec_ref(v_pre_3176_);
v_a_3239_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3241_ = v___x_3189_;
v_isShared_3242_ = v_isSharedCheck_3246_;
goto v_resetjp_3240_;
}
else
{
lean_inc(v_a_3239_);
lean_dec(v___x_3189_);
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
else
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3254_; 
lean_dec_ref(v_post_3178_);
lean_dec_ref(v_e_3177_);
lean_dec_ref(v_pre_3176_);
v_a_3247_ = lean_ctor_get(v___x_3188_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3188_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3249_ = v___x_3188_;
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3188_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3252_; 
if (v_isShared_3250_ == 0)
{
v___x_3252_ = v___x_3249_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3253_; 
v_reuseFailAlloc_3253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3253_, 0, v_a_3247_);
v___x_3252_ = v_reuseFailAlloc_3253_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
return v___x_3252_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed(lean_object* v___x_3255_, lean_object* v_pre_3256_, lean_object* v_e_3257_, lean_object* v_post_3258_, lean_object* v_usedLetOnly_3259_, lean_object* v_skipConstInApp_3260_, lean_object* v_skipInstances_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
uint8_t v_usedLetOnly_boxed_3268_; uint8_t v_skipConstInApp_boxed_3269_; uint8_t v_skipInstances_boxed_3270_; lean_object* v_res_3271_; 
v_usedLetOnly_boxed_3268_ = lean_unbox(v_usedLetOnly_3259_);
v_skipConstInApp_boxed_3269_ = lean_unbox(v_skipConstInApp_3260_);
v_skipInstances_boxed_3270_ = lean_unbox(v_skipInstances_3261_);
v_res_3271_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1(v___x_3255_, v_pre_3256_, v_e_3257_, v_post_3258_, v_usedLetOnly_boxed_3268_, v_skipConstInApp_boxed_3269_, v_skipInstances_boxed_3270_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
lean_dec(v___y_3266_);
lean_dec_ref(v___y_3265_);
lean_dec(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec(v___y_3262_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(lean_object* v_pre_3272_, lean_object* v_post_3273_, uint8_t v_usedLetOnly_3274_, uint8_t v_skipConstInApp_3275_, uint8_t v_skipInstances_3276_, lean_object* v_e_3277_, lean_object* v_a_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_){
_start:
{
lean_object* v___x_3284_; lean_object* v___x_3285_; 
lean_inc(v_a_3278_);
v___x_3284_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3284_, 0, lean_box(0));
lean_closure_set(v___x_3284_, 1, lean_box(0));
lean_closure_set(v___x_3284_, 2, v_a_3278_);
v___x_3285_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_box(0), v___x_3284_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_);
if (lean_obj_tag(v___x_3285_) == 0)
{
lean_object* v_a_3286_; lean_object* v___x_3288_; uint8_t v_isShared_3289_; uint8_t v_isSharedCheck_3320_; 
v_a_3286_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3288_ = v___x_3285_;
v_isShared_3289_ = v_isSharedCheck_3320_;
goto v_resetjp_3287_;
}
else
{
lean_inc(v_a_3286_);
lean_dec(v___x_3285_);
v___x_3288_ = lean_box(0);
v_isShared_3289_ = v_isSharedCheck_3320_;
goto v_resetjp_3287_;
}
v_resetjp_3287_:
{
lean_object* v___x_3290_; 
v___x_3290_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_a_3286_, v_e_3277_);
lean_dec(v_a_3286_);
if (lean_obj_tag(v___x_3290_) == 0)
{
lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___f_3295_; lean_object* v___x_3296_; 
lean_del_object(v___x_3288_);
v___x_3291_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___closed__0);
v___x_3292_ = lean_box(v_usedLetOnly_3274_);
v___x_3293_ = lean_box(v_skipConstInApp_3275_);
v___x_3294_ = lean_box(v_skipInstances_3276_);
lean_inc_ref(v_e_3277_);
v___f_3295_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__1___boxed), 13, 7);
lean_closure_set(v___f_3295_, 0, v___x_3291_);
lean_closure_set(v___f_3295_, 1, v_pre_3272_);
lean_closure_set(v___f_3295_, 2, v_e_3277_);
lean_closure_set(v___f_3295_, 3, v_post_3273_);
lean_closure_set(v___f_3295_, 4, v___x_3292_);
lean_closure_set(v___f_3295_, 5, v___x_3293_);
lean_closure_set(v___f_3295_, 6, v___x_3294_);
v___x_3296_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v___f_3295_, v_a_3278_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_);
if (lean_obj_tag(v___x_3296_) == 0)
{
lean_object* v_a_3297_; lean_object* v___f_3298_; lean_object* v___x_3299_; 
v_a_3297_ = lean_ctor_get(v___x_3296_, 0);
lean_inc_n(v_a_3297_, 2);
lean_dec_ref(v___x_3296_);
lean_inc(v_a_3278_);
v___f_3298_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3298_, 0, v_a_3278_);
lean_closure_set(v___f_3298_, 1, v_e_3277_);
lean_closure_set(v___f_3298_, 2, v_a_3297_);
v___x_3299_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___lam__0(lean_box(0), v___f_3298_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_);
if (lean_obj_tag(v___x_3299_) == 0)
{
lean_object* v___x_3301_; uint8_t v_isShared_3302_; uint8_t v_isSharedCheck_3306_; 
v_isSharedCheck_3306_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3306_ == 0)
{
lean_object* v_unused_3307_; 
v_unused_3307_ = lean_ctor_get(v___x_3299_, 0);
lean_dec(v_unused_3307_);
v___x_3301_ = v___x_3299_;
v_isShared_3302_ = v_isSharedCheck_3306_;
goto v_resetjp_3300_;
}
else
{
lean_dec(v___x_3299_);
v___x_3301_ = lean_box(0);
v_isShared_3302_ = v_isSharedCheck_3306_;
goto v_resetjp_3300_;
}
v_resetjp_3300_:
{
lean_object* v___x_3304_; 
if (v_isShared_3302_ == 0)
{
lean_ctor_set(v___x_3301_, 0, v_a_3297_);
v___x_3304_ = v___x_3301_;
goto v_reusejp_3303_;
}
else
{
lean_object* v_reuseFailAlloc_3305_; 
v_reuseFailAlloc_3305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3305_, 0, v_a_3297_);
v___x_3304_ = v_reuseFailAlloc_3305_;
goto v_reusejp_3303_;
}
v_reusejp_3303_:
{
return v___x_3304_;
}
}
}
else
{
lean_object* v_a_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3315_; 
lean_dec(v_a_3297_);
v_a_3308_ = lean_ctor_get(v___x_3299_, 0);
v_isSharedCheck_3315_ = !lean_is_exclusive(v___x_3299_);
if (v_isSharedCheck_3315_ == 0)
{
v___x_3310_ = v___x_3299_;
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_a_3308_);
lean_dec(v___x_3299_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3315_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v___x_3313_; 
if (v_isShared_3311_ == 0)
{
v___x_3313_ = v___x_3310_;
goto v_reusejp_3312_;
}
else
{
lean_object* v_reuseFailAlloc_3314_; 
v_reuseFailAlloc_3314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3314_, 0, v_a_3308_);
v___x_3313_ = v_reuseFailAlloc_3314_;
goto v_reusejp_3312_;
}
v_reusejp_3312_:
{
return v___x_3313_;
}
}
}
}
else
{
lean_dec_ref(v_e_3277_);
return v___x_3296_;
}
}
else
{
lean_object* v_val_3316_; lean_object* v___x_3318_; 
lean_dec_ref(v_e_3277_);
lean_dec_ref(v_post_3273_);
lean_dec_ref(v_pre_3272_);
v_val_3316_ = lean_ctor_get(v___x_3290_, 0);
lean_inc(v_val_3316_);
lean_dec_ref(v___x_3290_);
if (v_isShared_3289_ == 0)
{
lean_ctor_set(v___x_3288_, 0, v_val_3316_);
v___x_3318_ = v___x_3288_;
goto v_reusejp_3317_;
}
else
{
lean_object* v_reuseFailAlloc_3319_; 
v_reuseFailAlloc_3319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3319_, 0, v_val_3316_);
v___x_3318_ = v_reuseFailAlloc_3319_;
goto v_reusejp_3317_;
}
v_reusejp_3317_:
{
return v___x_3318_;
}
}
}
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
lean_dec_ref(v_e_3277_);
lean_dec_ref(v_post_3273_);
lean_dec_ref(v_pre_3272_);
v_a_3321_ = lean_ctor_get(v___x_3285_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3285_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3285_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3285_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
if (v_isShared_3324_ == 0)
{
v___x_3326_ = v___x_3323_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_a_3321_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_3329_, lean_object* v_pre_3330_, lean_object* v_post_3331_, lean_object* v_usedLetOnly_3332_, lean_object* v_skipConstInApp_3333_, lean_object* v_skipInstances_3334_, lean_object* v_body_3335_, lean_object* v_x_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_, lean_object* v___y_3341_, lean_object* v___y_3342_){
_start:
{
uint8_t v_usedLetOnly_boxed_3343_; uint8_t v_skipConstInApp_boxed_3344_; uint8_t v_skipInstances_boxed_3345_; lean_object* v_res_3346_; 
v_usedLetOnly_boxed_3343_ = lean_unbox(v_usedLetOnly_3332_);
v_skipConstInApp_boxed_3344_ = lean_unbox(v_skipConstInApp_3333_);
v_skipInstances_boxed_3345_ = lean_unbox(v_skipInstances_3334_);
v_res_3346_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(v_fvars_3329_, v_pre_3330_, v_post_3331_, v_usedLetOnly_boxed_3343_, v_skipConstInApp_boxed_3344_, v_skipInstances_boxed_3345_, v_body_3335_, v_x_3336_, v___y_3337_, v___y_3338_, v___y_3339_, v___y_3340_, v___y_3341_);
lean_dec(v___y_3341_);
lean_dec_ref(v___y_3340_);
lean_dec(v___y_3339_);
lean_dec_ref(v___y_3338_);
lean_dec(v___y_3337_);
return v_res_3346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(lean_object* v_pre_3347_, lean_object* v_post_3348_, uint8_t v_usedLetOnly_3349_, uint8_t v_skipConstInApp_3350_, uint8_t v_skipInstances_3351_, lean_object* v_fvars_3352_, lean_object* v_e_3353_, lean_object* v_a_3354_, lean_object* v___y_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_){
_start:
{
if (lean_obj_tag(v_e_3353_) == 7)
{
lean_object* v_binderName_3360_; lean_object* v_binderType_3361_; lean_object* v_body_3362_; uint8_t v_binderInfo_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; 
v_binderName_3360_ = lean_ctor_get(v_e_3353_, 0);
lean_inc(v_binderName_3360_);
v_binderType_3361_ = lean_ctor_get(v_e_3353_, 1);
lean_inc_ref(v_binderType_3361_);
v_body_3362_ = lean_ctor_get(v_e_3353_, 2);
lean_inc_ref(v_body_3362_);
v_binderInfo_3363_ = lean_ctor_get_uint8(v_e_3353_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3353_);
v___x_3364_ = lean_expr_instantiate_rev(v_binderType_3361_, v_fvars_3352_);
lean_dec_ref(v_binderType_3361_);
lean_inc_ref(v_post_3348_);
lean_inc_ref(v_pre_3347_);
v___x_3365_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3347_, v_post_3348_, v_usedLetOnly_3349_, v_skipConstInApp_3350_, v_skipInstances_3351_, v___x_3364_, v_a_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_);
if (lean_obj_tag(v___x_3365_) == 0)
{
lean_object* v_a_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___f_3370_; uint8_t v___x_3371_; lean_object* v___x_3372_; 
v_a_3366_ = lean_ctor_get(v___x_3365_, 0);
lean_inc(v_a_3366_);
lean_dec_ref(v___x_3365_);
v___x_3367_ = lean_box(v_usedLetOnly_3349_);
v___x_3368_ = lean_box(v_skipConstInApp_3350_);
v___x_3369_ = lean_box(v_skipInstances_3351_);
v___f_3370_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3370_, 0, v_fvars_3352_);
lean_closure_set(v___f_3370_, 1, v_pre_3347_);
lean_closure_set(v___f_3370_, 2, v_post_3348_);
lean_closure_set(v___f_3370_, 3, v___x_3367_);
lean_closure_set(v___f_3370_, 4, v___x_3368_);
lean_closure_set(v___f_3370_, 5, v___x_3369_);
lean_closure_set(v___f_3370_, 6, v_body_3362_);
v___x_3371_ = 0;
v___x_3372_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_binderName_3360_, v_binderInfo_3363_, v_a_3366_, v___f_3370_, v___x_3371_, v_a_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_);
return v___x_3372_;
}
else
{
lean_dec_ref(v_body_3362_);
lean_dec(v_binderName_3360_);
lean_dec_ref(v_fvars_3352_);
lean_dec_ref(v_post_3348_);
lean_dec_ref(v_pre_3347_);
return v___x_3365_;
}
}
else
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
v___x_3373_ = lean_expr_instantiate_rev(v_e_3353_, v_fvars_3352_);
lean_dec_ref(v_e_3353_);
lean_inc_ref(v_post_3348_);
lean_inc_ref(v_pre_3347_);
v___x_3374_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3347_, v_post_3348_, v_usedLetOnly_3349_, v_skipConstInApp_3350_, v_skipInstances_3351_, v___x_3373_, v_a_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_);
if (lean_obj_tag(v___x_3374_) == 0)
{
lean_object* v_a_3375_; uint8_t v___x_3376_; uint8_t v___x_3377_; uint8_t v___x_3378_; lean_object* v___x_3379_; 
v_a_3375_ = lean_ctor_get(v___x_3374_, 0);
lean_inc(v_a_3375_);
lean_dec_ref(v___x_3374_);
v___x_3376_ = 0;
v___x_3377_ = 1;
v___x_3378_ = 1;
v___x_3379_ = l_Lean_Meta_mkForallFVars(v_fvars_3352_, v_a_3375_, v___x_3376_, v_usedLetOnly_3349_, v___x_3377_, v___x_3378_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_);
lean_dec_ref(v_fvars_3352_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; lean_object* v___x_3381_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref(v___x_3379_);
v___x_3381_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3347_, v_post_3348_, v_usedLetOnly_3349_, v_skipConstInApp_3350_, v_skipInstances_3351_, v_a_3380_, v_a_3354_, v___y_3355_, v___y_3356_, v___y_3357_, v___y_3358_);
return v___x_3381_;
}
else
{
lean_dec_ref(v_post_3348_);
lean_dec_ref(v_pre_3347_);
return v___x_3379_;
}
}
else
{
lean_dec_ref(v_fvars_3352_);
lean_dec_ref(v_post_3348_);
lean_dec_ref(v_pre_3347_);
return v___x_3374_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_3382_, lean_object* v_pre_3383_, lean_object* v_post_3384_, uint8_t v_usedLetOnly_3385_, uint8_t v_skipConstInApp_3386_, uint8_t v_skipInstances_3387_, lean_object* v_body_3388_, lean_object* v_x_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_){
_start:
{
lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3396_ = lean_array_push(v_fvars_3382_, v_x_3389_);
v___x_3397_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3383_, v_post_3384_, v_usedLetOnly_3385_, v_skipConstInApp_3386_, v_skipInstances_3387_, v___x_3396_, v_body_3388_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
return v___x_3397_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_3398_, lean_object* v_post_3399_, lean_object* v_usedLetOnly_3400_, lean_object* v_skipConstInApp_3401_, lean_object* v_skipInstances_3402_, lean_object* v_e_3403_, lean_object* v_a_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_, lean_object* v___y_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_){
_start:
{
uint8_t v_usedLetOnly_boxed_3410_; uint8_t v_skipConstInApp_boxed_3411_; uint8_t v_skipInstances_boxed_3412_; lean_object* v_res_3413_; 
v_usedLetOnly_boxed_3410_ = lean_unbox(v_usedLetOnly_3400_);
v_skipConstInApp_boxed_3411_ = lean_unbox(v_skipConstInApp_3401_);
v_skipInstances_boxed_3412_ = lean_unbox(v_skipInstances_3402_);
v_res_3413_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__3(v_pre_3398_, v_post_3399_, v_usedLetOnly_boxed_3410_, v_skipConstInApp_boxed_3411_, v_skipInstances_boxed_3412_, v_e_3403_, v_a_3404_, v___y_3405_, v___y_3406_, v___y_3407_, v___y_3408_);
lean_dec(v___y_3408_);
lean_dec_ref(v___y_3407_);
lean_dec(v___y_3406_);
lean_dec_ref(v___y_3405_);
lean_dec(v_a_3404_);
return v_res_3413_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_3414_, lean_object* v_post_3415_, lean_object* v_usedLetOnly_3416_, lean_object* v_skipConstInApp_3417_, lean_object* v_skipInstances_3418_, lean_object* v_sz_3419_, lean_object* v_i_3420_, lean_object* v_bs_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_){
_start:
{
uint8_t v_usedLetOnly_boxed_3428_; uint8_t v_skipConstInApp_boxed_3429_; uint8_t v_skipInstances_boxed_3430_; size_t v_sz_boxed_3431_; size_t v_i_boxed_3432_; lean_object* v_res_3433_; 
v_usedLetOnly_boxed_3428_ = lean_unbox(v_usedLetOnly_3416_);
v_skipConstInApp_boxed_3429_ = lean_unbox(v_skipConstInApp_3417_);
v_skipInstances_boxed_3430_ = lean_unbox(v_skipInstances_3418_);
v_sz_boxed_3431_ = lean_unbox_usize(v_sz_3419_);
lean_dec(v_sz_3419_);
v_i_boxed_3432_ = lean_unbox_usize(v_i_3420_);
lean_dec(v_i_3420_);
v_res_3433_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__2(v_pre_3414_, v_post_3415_, v_usedLetOnly_boxed_3428_, v_skipConstInApp_boxed_3429_, v_skipInstances_boxed_3430_, v_sz_boxed_3431_, v_i_boxed_3432_, v_bs_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_, v___y_3426_);
lean_dec(v___y_3426_);
lean_dec_ref(v___y_3425_);
lean_dec(v___y_3424_);
lean_dec_ref(v___y_3423_);
lean_dec(v___y_3422_);
return v_res_3433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1___boxed(lean_object* v_pre_3434_, lean_object* v_post_3435_, lean_object* v_usedLetOnly_3436_, lean_object* v_skipConstInApp_3437_, lean_object* v_skipInstances_3438_, lean_object* v_e_3439_, lean_object* v_a_3440_, lean_object* v___y_3441_, lean_object* v___y_3442_, lean_object* v___y_3443_, lean_object* v___y_3444_, lean_object* v___y_3445_){
_start:
{
uint8_t v_usedLetOnly_boxed_3446_; uint8_t v_skipConstInApp_boxed_3447_; uint8_t v_skipInstances_boxed_3448_; lean_object* v_res_3449_; 
v_usedLetOnly_boxed_3446_ = lean_unbox(v_usedLetOnly_3436_);
v_skipConstInApp_boxed_3447_ = lean_unbox(v_skipConstInApp_3437_);
v_skipInstances_boxed_3448_ = lean_unbox(v_skipInstances_3438_);
v_res_3449_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3434_, v_post_3435_, v_usedLetOnly_boxed_3446_, v_skipConstInApp_boxed_3447_, v_skipInstances_boxed_3448_, v_e_3439_, v_a_3440_, v___y_3441_, v___y_3442_, v___y_3443_, v___y_3444_);
lean_dec(v___y_3444_);
lean_dec_ref(v___y_3443_);
lean_dec(v___y_3442_);
lean_dec_ref(v___y_3441_);
lean_dec(v_a_3440_);
return v_res_3449_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_3450_, lean_object* v_post_3451_, lean_object* v_usedLetOnly_3452_, lean_object* v_skipConstInApp_3453_, lean_object* v_skipInstances_3454_, lean_object* v_fvars_3455_, lean_object* v_e_3456_, lean_object* v_a_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_){
_start:
{
uint8_t v_usedLetOnly_boxed_3463_; uint8_t v_skipConstInApp_boxed_3464_; uint8_t v_skipInstances_boxed_3465_; lean_object* v_res_3466_; 
v_usedLetOnly_boxed_3463_ = lean_unbox(v_usedLetOnly_3452_);
v_skipConstInApp_boxed_3464_ = lean_unbox(v_skipConstInApp_3453_);
v_skipInstances_boxed_3465_ = lean_unbox(v_skipInstances_3454_);
v_res_3466_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6(v_pre_3450_, v_post_3451_, v_usedLetOnly_boxed_3463_, v_skipConstInApp_boxed_3464_, v_skipInstances_boxed_3465_, v_fvars_3455_, v_e_3456_, v_a_3457_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_);
lean_dec(v___y_3461_);
lean_dec_ref(v___y_3460_);
lean_dec(v___y_3459_);
lean_dec_ref(v___y_3458_);
lean_dec(v_a_3457_);
return v_res_3466_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_3467_, lean_object* v_post_3468_, lean_object* v_usedLetOnly_3469_, lean_object* v_skipConstInApp_3470_, lean_object* v_skipInstances_3471_, lean_object* v_fvars_3472_, lean_object* v_e_3473_, lean_object* v_a_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_, lean_object* v___y_3477_, lean_object* v___y_3478_, lean_object* v___y_3479_){
_start:
{
uint8_t v_usedLetOnly_boxed_3480_; uint8_t v_skipConstInApp_boxed_3481_; uint8_t v_skipInstances_boxed_3482_; lean_object* v_res_3483_; 
v_usedLetOnly_boxed_3480_ = lean_unbox(v_usedLetOnly_3469_);
v_skipConstInApp_boxed_3481_ = lean_unbox(v_skipConstInApp_3470_);
v_skipInstances_boxed_3482_ = lean_unbox(v_skipInstances_3471_);
v_res_3483_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__7(v_pre_3467_, v_post_3468_, v_usedLetOnly_boxed_3480_, v_skipConstInApp_boxed_3481_, v_skipInstances_boxed_3482_, v_fvars_3472_, v_e_3473_, v_a_3474_, v___y_3475_, v___y_3476_, v___y_3477_, v___y_3478_);
lean_dec(v___y_3478_);
lean_dec_ref(v___y_3477_);
lean_dec(v___y_3476_);
lean_dec_ref(v___y_3475_);
lean_dec(v_a_3474_);
return v_res_3483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8___boxed(lean_object* v_pre_3484_, lean_object* v_post_3485_, lean_object* v_usedLetOnly_3486_, lean_object* v_skipConstInApp_3487_, lean_object* v_skipInstances_3488_, lean_object* v_fvars_3489_, lean_object* v_e_3490_, lean_object* v_a_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_){
_start:
{
uint8_t v_usedLetOnly_boxed_3497_; uint8_t v_skipConstInApp_boxed_3498_; uint8_t v_skipInstances_boxed_3499_; lean_object* v_res_3500_; 
v_usedLetOnly_boxed_3497_ = lean_unbox(v_usedLetOnly_3486_);
v_skipConstInApp_boxed_3498_ = lean_unbox(v_skipConstInApp_3487_);
v_skipInstances_boxed_3499_ = lean_unbox(v_skipInstances_3488_);
v_res_3500_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8(v_pre_3484_, v_post_3485_, v_usedLetOnly_boxed_3497_, v_skipConstInApp_boxed_3498_, v_skipInstances_boxed_3499_, v_fvars_3489_, v_e_3490_, v_a_3491_, v___y_3492_, v___y_3493_, v___y_3494_, v___y_3495_);
lean_dec(v___y_3495_);
lean_dec_ref(v___y_3494_);
lean_dec(v___y_3493_);
lean_dec_ref(v___y_3492_);
lean_dec(v_a_3491_);
return v_res_3500_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_3501_, lean_object* v___x_3502_, lean_object* v_pre_3503_, lean_object* v_post_3504_, lean_object* v_usedLetOnly_3505_, lean_object* v_skipConstInApp_3506_, lean_object* v_skipInstances_3507_, lean_object* v_a_3508_, lean_object* v_b_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_){
_start:
{
uint8_t v_usedLetOnly_boxed_3516_; uint8_t v_skipConstInApp_boxed_3517_; uint8_t v_skipInstances_boxed_3518_; lean_object* v_res_3519_; 
v_usedLetOnly_boxed_3516_ = lean_unbox(v_usedLetOnly_3505_);
v_skipConstInApp_boxed_3517_ = lean_unbox(v_skipConstInApp_3506_);
v_skipInstances_boxed_3518_ = lean_unbox(v_skipInstances_3507_);
v_res_3519_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_3501_, v___x_3502_, v_pre_3503_, v_post_3504_, v_usedLetOnly_boxed_3516_, v_skipConstInApp_boxed_3517_, v_skipInstances_boxed_3518_, v_a_3508_, v_b_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec(v___y_3512_);
lean_dec_ref(v___y_3511_);
lean_dec(v___y_3510_);
lean_dec_ref(v___x_3502_);
lean_dec(v_upperBound_3501_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9___boxed(lean_object* v_skipInstances_3520_, lean_object* v_pre_3521_, lean_object* v_post_3522_, lean_object* v_usedLetOnly_3523_, lean_object* v_skipConstInApp_3524_, lean_object* v_x_3525_, lean_object* v_x_3526_, lean_object* v_x_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_, lean_object* v___y_3533_){
_start:
{
uint8_t v_skipInstances_boxed_3534_; uint8_t v_usedLetOnly_boxed_3535_; uint8_t v_skipConstInApp_boxed_3536_; lean_object* v_res_3537_; 
v_skipInstances_boxed_3534_ = lean_unbox(v_skipInstances_3520_);
v_usedLetOnly_boxed_3535_ = lean_unbox(v_usedLetOnly_3523_);
v_skipConstInApp_boxed_3536_ = lean_unbox(v_skipConstInApp_3524_);
v_res_3537_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__9(v_skipInstances_boxed_3534_, v_pre_3521_, v_post_3522_, v_usedLetOnly_boxed_3535_, v_skipConstInApp_boxed_3536_, v_x_3525_, v_x_3526_, v_x_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_);
lean_dec(v___y_3532_);
lean_dec_ref(v___y_3531_);
lean_dec(v___y_3530_);
lean_dec_ref(v___y_3529_);
lean_dec(v___y_3528_);
return v_res_3537_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; 
v___x_3538_ = lean_box(0);
v___x_3539_ = lean_unsigned_to_nat(16u);
v___x_3540_ = lean_mk_array(v___x_3539_, v___x_3538_);
return v___x_3540_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; 
v___x_3541_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__0);
v___x_3542_ = lean_unsigned_to_nat(0u);
v___x_3543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3542_);
lean_ctor_set(v___x_3543_, 1, v___x_3541_);
return v___x_3543_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2(void){
_start:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3544_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__1);
v___x_3545_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3545_, 0, lean_box(0));
lean_closure_set(v___x_3545_, 1, lean_box(0));
lean_closure_set(v___x_3545_, 2, v___x_3544_);
return v___x_3545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(lean_object* v_input_3546_, lean_object* v_pre_3547_, lean_object* v_post_3548_, uint8_t v_usedLetOnly_3549_, uint8_t v_skipConstInApp_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_){
_start:
{
lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v_a_3558_; uint8_t v___x_3559_; lean_object* v___x_3560_; 
v___x_3556_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2, &l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2_once, _init_l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___closed__2);
v___x_3557_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_box(0), v___x_3556_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_);
v_a_3558_ = lean_ctor_get(v___x_3557_, 0);
lean_inc(v_a_3558_);
lean_dec_ref(v___x_3557_);
v___x_3559_ = 0;
v___x_3560_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1(v_pre_3547_, v_post_3548_, v_usedLetOnly_3549_, v_skipConstInApp_3550_, v___x_3559_, v_input_3546_, v_a_3558_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_);
if (lean_obj_tag(v___x_3560_) == 0)
{
lean_object* v_a_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3565_; uint8_t v_isShared_3566_; uint8_t v_isSharedCheck_3570_; 
v_a_3561_ = lean_ctor_get(v___x_3560_, 0);
lean_inc(v_a_3561_);
lean_dec_ref(v___x_3560_);
v___x_3562_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_3562_, 0, lean_box(0));
lean_closure_set(v___x_3562_, 1, lean_box(0));
lean_closure_set(v___x_3562_, 2, v_a_3558_);
v___x_3563_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___lam__0(lean_box(0), v___x_3562_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_);
v_isSharedCheck_3570_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3570_ == 0)
{
lean_object* v_unused_3571_; 
v_unused_3571_ = lean_ctor_get(v___x_3563_, 0);
lean_dec(v_unused_3571_);
v___x_3565_ = v___x_3563_;
v_isShared_3566_ = v_isSharedCheck_3570_;
goto v_resetjp_3564_;
}
else
{
lean_dec(v___x_3563_);
v___x_3565_ = lean_box(0);
v_isShared_3566_ = v_isSharedCheck_3570_;
goto v_resetjp_3564_;
}
v_resetjp_3564_:
{
lean_object* v___x_3568_; 
if (v_isShared_3566_ == 0)
{
lean_ctor_set(v___x_3565_, 0, v_a_3561_);
v___x_3568_ = v___x_3565_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3569_; 
v_reuseFailAlloc_3569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3569_, 0, v_a_3561_);
v___x_3568_ = v_reuseFailAlloc_3569_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
return v___x_3568_;
}
}
}
else
{
lean_dec(v_a_3558_);
return v___x_3560_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1___boxed(lean_object* v_input_3572_, lean_object* v_pre_3573_, lean_object* v_post_3574_, lean_object* v_usedLetOnly_3575_, lean_object* v_skipConstInApp_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
uint8_t v_usedLetOnly_boxed_3582_; uint8_t v_skipConstInApp_boxed_3583_; lean_object* v_res_3584_; 
v_usedLetOnly_boxed_3582_ = lean_unbox(v_usedLetOnly_3575_);
v_skipConstInApp_boxed_3583_ = lean_unbox(v_skipConstInApp_3576_);
v_res_3584_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(v_input_3572_, v_pre_3573_, v_post_3574_, v_usedLetOnly_boxed_3582_, v_skipConstInApp_boxed_3583_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
return v_res_3584_;
}
}
static lean_object* _init_l_Lean_Meta_etaStructReduce___closed__0(void){
_start:
{
lean_object* v___f_3585_; 
v___f_3585_ = lean_alloc_closure((void*)(l_Lean_Meta_etaStructReduce___lam__0___boxed), 6, 0);
return v___f_3585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce(lean_object* v_e_3586_, lean_object* v_p_3587_, lean_object* v_a_3588_, lean_object* v_a_3589_, lean_object* v_a_3590_, lean_object* v_a_3591_){
_start:
{
lean_object* v___x_3593_; lean_object* v_a_3594_; lean_object* v___f_3595_; lean_object* v___f_3596_; uint8_t v___x_3597_; lean_object* v___x_3598_; 
v___x_3593_ = l_Lean_instantiateMVars___at___00Lean_Meta_etaStructReduce_spec__0___redArg(v_e_3586_, v_a_3589_, v_a_3591_);
v_a_3594_ = lean_ctor_get(v___x_3593_, 0);
lean_inc(v_a_3594_);
lean_dec_ref(v___x_3593_);
v___f_3595_ = lean_obj_once(&l_Lean_Meta_etaStructReduce___closed__0, &l_Lean_Meta_etaStructReduce___closed__0_once, _init_l_Lean_Meta_etaStructReduce___closed__0);
v___f_3596_ = lean_alloc_closure((void*)(l_Lean_Meta_etaStructReduce___lam__1___boxed), 7, 1);
lean_closure_set(v___f_3596_, 0, v_p_3587_);
v___x_3597_ = 0;
v___x_3598_ = l_Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1(v_a_3594_, v___f_3595_, v___f_3596_, v___x_3597_, v___x_3597_, v_a_3588_, v_a_3589_, v_a_3590_, v_a_3591_);
return v___x_3598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_etaStructReduce___boxed(lean_object* v_e_3599_, lean_object* v_p_3600_, lean_object* v_a_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_){
_start:
{
lean_object* v_res_3606_; 
v_res_3606_ = l_Lean_Meta_etaStructReduce(v_e_3599_, v_p_3600_, v_a_3601_, v_a_3602_, v_a_3603_, v_a_3604_);
lean_dec(v_a_3604_);
lean_dec_ref(v_a_3603_);
lean_dec(v_a_3602_);
lean_dec_ref(v_a_3601_);
return v_res_3606_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(lean_object* v_upperBound_3607_, lean_object* v___x_3608_, lean_object* v_pre_3609_, lean_object* v_post_3610_, uint8_t v_usedLetOnly_3611_, uint8_t v_skipConstInApp_3612_, uint8_t v_skipInstances_3613_, lean_object* v___x_3614_, lean_object* v_inst_3615_, lean_object* v_R_3616_, lean_object* v_a_3617_, lean_object* v_b_3618_, lean_object* v_c_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
lean_object* v___x_3626_; 
v___x_3626_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_3607_, v___x_3608_, v_pre_3609_, v_post_3610_, v_usedLetOnly_3611_, v_skipConstInApp_3612_, v_skipInstances_3613_, v_a_3617_, v_b_3618_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_, v___y_3624_);
return v___x_3626_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_3627_ = _args[0];
lean_object* v___x_3628_ = _args[1];
lean_object* v_pre_3629_ = _args[2];
lean_object* v_post_3630_ = _args[3];
lean_object* v_usedLetOnly_3631_ = _args[4];
lean_object* v_skipConstInApp_3632_ = _args[5];
lean_object* v_skipInstances_3633_ = _args[6];
lean_object* v___x_3634_ = _args[7];
lean_object* v_inst_3635_ = _args[8];
lean_object* v_R_3636_ = _args[9];
lean_object* v_a_3637_ = _args[10];
lean_object* v_b_3638_ = _args[11];
lean_object* v_c_3639_ = _args[12];
lean_object* v___y_3640_ = _args[13];
lean_object* v___y_3641_ = _args[14];
lean_object* v___y_3642_ = _args[15];
lean_object* v___y_3643_ = _args[16];
lean_object* v___y_3644_ = _args[17];
lean_object* v___y_3645_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3646_; uint8_t v_skipConstInApp_boxed_3647_; uint8_t v_skipInstances_boxed_3648_; lean_object* v_res_3649_; 
v_usedLetOnly_boxed_3646_ = lean_unbox(v_usedLetOnly_3631_);
v_skipConstInApp_boxed_3647_ = lean_unbox(v_skipConstInApp_3632_);
v_skipInstances_boxed_3648_ = lean_unbox(v_skipInstances_3633_);
v_res_3649_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__4(v_upperBound_3627_, v___x_3628_, v_pre_3629_, v_post_3630_, v_usedLetOnly_boxed_3646_, v_skipConstInApp_boxed_3647_, v_skipInstances_boxed_3648_, v___x_3634_, v_inst_3635_, v_R_3636_, v_a_3637_, v_b_3638_, v_c_3639_, v___y_3640_, v___y_3641_, v___y_3642_, v___y_3643_, v___y_3644_);
lean_dec(v___y_3644_);
lean_dec_ref(v___y_3643_);
lean_dec(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec(v___y_3640_);
lean_dec(v___x_3634_);
lean_dec_ref(v___x_3628_);
lean_dec(v_upperBound_3627_);
return v_res_3649_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(lean_object* v_00_u03b2_3650_, lean_object* v_m_3651_, lean_object* v_a_3652_){
_start:
{
lean_object* v___x_3653_; 
v___x_3653_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___redArg(v_m_3651_, v_a_3652_);
return v___x_3653_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5___boxed(lean_object* v_00_u03b2_3654_, lean_object* v_m_3655_, lean_object* v_a_3656_){
_start:
{
lean_object* v_res_3657_; 
v_res_3657_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5(v_00_u03b2_3654_, v_m_3655_, v_a_3656_);
lean_dec_ref(v_a_3656_);
lean_dec_ref(v_m_3655_);
return v_res_3657_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(lean_object* v_00_u03b1_3658_, lean_object* v_name_3659_, uint8_t v_bi_3660_, lean_object* v_type_3661_, lean_object* v_k_3662_, uint8_t v_kind_3663_, lean_object* v___y_3664_, lean_object* v___y_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_){
_start:
{
lean_object* v___x_3670_; 
v___x_3670_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___redArg(v_name_3659_, v_bi_3660_, v_type_3661_, v_k_3662_, v_kind_3663_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_);
return v___x_3670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8___boxed(lean_object* v_00_u03b1_3671_, lean_object* v_name_3672_, lean_object* v_bi_3673_, lean_object* v_type_3674_, lean_object* v_k_3675_, lean_object* v_kind_3676_, lean_object* v___y_3677_, lean_object* v___y_3678_, lean_object* v___y_3679_, lean_object* v___y_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_){
_start:
{
uint8_t v_bi_boxed_3683_; uint8_t v_kind_boxed_3684_; lean_object* v_res_3685_; 
v_bi_boxed_3683_ = lean_unbox(v_bi_3673_);
v_kind_boxed_3684_ = lean_unbox(v_kind_3676_);
v_res_3685_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__6_spec__8(v_00_u03b1_3671_, v_name_3672_, v_bi_boxed_3683_, v_type_3674_, v_k_3675_, v_kind_boxed_3684_, v___y_3677_, v___y_3678_, v___y_3679_, v___y_3680_, v___y_3681_);
lean_dec(v___y_3681_);
lean_dec_ref(v___y_3680_);
lean_dec(v___y_3679_);
lean_dec_ref(v___y_3678_);
lean_dec(v___y_3677_);
return v_res_3685_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(lean_object* v_00_u03b1_3686_, lean_object* v_name_3687_, lean_object* v_type_3688_, lean_object* v_val_3689_, lean_object* v_k_3690_, uint8_t v_nondep_3691_, uint8_t v_kind_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_, lean_object* v___y_3697_){
_start:
{
lean_object* v___x_3699_; 
v___x_3699_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___redArg(v_name_3687_, v_type_3688_, v_val_3689_, v_k_3690_, v_nondep_3691_, v_kind_3692_, v___y_3693_, v___y_3694_, v___y_3695_, v___y_3696_, v___y_3697_);
return v___x_3699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11___boxed(lean_object* v_00_u03b1_3700_, lean_object* v_name_3701_, lean_object* v_type_3702_, lean_object* v_val_3703_, lean_object* v_k_3704_, lean_object* v_nondep_3705_, lean_object* v_kind_3706_, lean_object* v___y_3707_, lean_object* v___y_3708_, lean_object* v___y_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_){
_start:
{
uint8_t v_nondep_boxed_3713_; uint8_t v_kind_boxed_3714_; lean_object* v_res_3715_; 
v_nondep_boxed_3713_ = lean_unbox(v_nondep_3705_);
v_kind_boxed_3714_ = lean_unbox(v_kind_3706_);
v_res_3715_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__8_spec__11(v_00_u03b1_3700_, v_name_3701_, v_type_3702_, v_val_3703_, v_k_3704_, v_nondep_boxed_3713_, v_kind_boxed_3714_, v___y_3707_, v___y_3708_, v___y_3709_, v___y_3710_, v___y_3711_);
lean_dec(v___y_3711_);
lean_dec_ref(v___y_3710_);
lean_dec(v___y_3709_);
lean_dec_ref(v___y_3708_);
lean_dec(v___y_3707_);
return v_res_3715_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(lean_object* v_00_u03b1_3716_, lean_object* v_ref_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_){
_start:
{
lean_object* v___x_3723_; 
v___x_3723_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___redArg(v_ref_3717_);
return v___x_3723_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14___boxed(lean_object* v_00_u03b1_3724_, lean_object* v_ref_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_){
_start:
{
lean_object* v_res_3731_; 
v_res_3731_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10_spec__14(v_00_u03b1_3724_, v_ref_3725_, v___y_3726_, v___y_3727_, v___y_3728_, v___y_3729_);
lean_dec(v___y_3729_);
lean_dec_ref(v___y_3728_);
lean_dec(v___y_3727_);
lean_dec_ref(v___y_3726_);
return v_res_3731_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(lean_object* v_00_u03b1_3732_, lean_object* v_x_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_){
_start:
{
lean_object* v___x_3740_; 
v___x_3740_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___redArg(v_x_3733_, v___y_3734_, v___y_3735_, v___y_3736_, v___y_3737_, v___y_3738_);
return v___x_3740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10___boxed(lean_object* v_00_u03b1_3741_, lean_object* v_x_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_){
_start:
{
lean_object* v_res_3749_; 
v_res_3749_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__10(v_00_u03b1_3741_, v_x_3742_, v___y_3743_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_);
lean_dec(v___y_3747_);
lean_dec_ref(v___y_3746_);
lean_dec(v___y_3745_);
lean_dec_ref(v___y_3744_);
lean_dec(v___y_3743_);
return v_res_3749_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11(lean_object* v_00_u03b2_3750_, lean_object* v_m_3751_, lean_object* v_a_3752_, lean_object* v_b_3753_){
_start:
{
lean_object* v___x_3754_; 
v___x_3754_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11___redArg(v_m_3751_, v_a_3752_, v_b_3753_);
return v___x_3754_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b2_3755_, lean_object* v_a_3756_, lean_object* v_x_3757_){
_start:
{
lean_object* v___x_3758_; 
v___x_3758_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_a_3756_, v_x_3757_);
return v___x_3758_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b2_3759_, lean_object* v_a_3760_, lean_object* v_x_3761_){
_start:
{
lean_object* v_res_3762_; 
v_res_3762_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__5_spec__6(v_00_u03b2_3759_, v_a_3760_, v_x_3761_);
lean_dec(v_x_3761_);
lean_dec_ref(v_a_3760_);
return v_res_3762_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(lean_object* v_00_u03b2_3763_, lean_object* v_a_3764_, lean_object* v_x_3765_){
_start:
{
uint8_t v___x_3766_; 
v___x_3766_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___redArg(v_a_3764_, v_x_3765_);
return v___x_3766_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16___boxed(lean_object* v_00_u03b2_3767_, lean_object* v_a_3768_, lean_object* v_x_3769_){
_start:
{
uint8_t v_res_3770_; lean_object* v_r_3771_; 
v_res_3770_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__16(v_00_u03b2_3767_, v_a_3768_, v_x_3769_);
lean_dec(v_x_3769_);
lean_dec_ref(v_a_3768_);
v_r_3771_ = lean_box(v_res_3770_);
return v_r_3771_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17(lean_object* v_00_u03b2_3772_, lean_object* v_data_3773_){
_start:
{
lean_object* v___x_3774_; 
v___x_3774_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17___redArg(v_data_3773_);
return v___x_3774_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18(lean_object* v_00_u03b2_3775_, lean_object* v_a_3776_, lean_object* v_b_3777_, lean_object* v_x_3778_){
_start:
{
lean_object* v___x_3779_; 
v___x_3779_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__18___redArg(v_a_3776_, v_b_3777_, v_x_3778_);
return v___x_3779_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18(lean_object* v_00_u03b2_3780_, lean_object* v_i_3781_, lean_object* v_source_3782_, lean_object* v_target_3783_){
_start:
{
lean_object* v___x_3784_; 
v___x_3784_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18___redArg(v_i_3781_, v_source_3782_, v_target_3783_);
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19(lean_object* v_00_u03b2_3785_, lean_object* v_x_3786_, lean_object* v_x_3787_){
_start:
{
lean_object* v___x_3788_; 
v___x_3788_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_etaStructReduce_spec__1_spec__1_spec__11_spec__17_spec__18_spec__19___redArg(v_x_3786_, v_x_3787_);
return v___x_3788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1(lean_object* v_binderType_3789_, lean_object* v_inst_3790_, lean_object* v_toBind_3791_, lean_object* v___f_3792_, lean_object* v_____do__lift_3793_){
_start:
{
lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; 
v___x_3794_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_3794_, 0, v_____do__lift_3793_);
lean_closure_set(v___x_3794_, 1, v_binderType_3789_);
v___x_3795_ = lean_apply_2(v_inst_3790_, lean_box(0), v___x_3794_);
v___x_3796_ = lean_apply_4(v_toBind_3791_, lean_box(0), lean_box(0), v___x_3795_, v___f_3792_);
return v___x_3796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed(lean_object* v_toPure_3797_, lean_object* v_usedFields_3798_, lean_object* v_binderName_3799_, lean_object* v_body_3800_, lean_object* v_val_3801_, lean_object* v_inst_3802_, lean_object* v_inst_3803_, lean_object* v_fieldVal_x3f_3804_, lean_object* v_____do__lift_3805_){
_start:
{
uint8_t v_____do__lift_469__boxed_3806_; lean_object* v_res_3807_; 
v_____do__lift_469__boxed_3806_ = lean_unbox(v_____do__lift_3805_);
v_res_3807_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(v_toPure_3797_, v_usedFields_3798_, v_binderName_3799_, v_body_3800_, v_val_3801_, v_inst_3802_, v_inst_3803_, v_fieldVal_x3f_3804_, v_____do__lift_469__boxed_3806_);
lean_dec_ref(v_val_3801_);
lean_dec_ref(v_body_3800_);
return v_res_3807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2(lean_object* v_toPure_3808_, lean_object* v_usedFields_3809_, lean_object* v_binderName_3810_, lean_object* v_body_3811_, lean_object* v_inst_3812_, lean_object* v_inst_3813_, lean_object* v_fieldVal_x3f_3814_, lean_object* v_binderType_3815_, lean_object* v_toBind_3816_, lean_object* v_____x_3817_){
_start:
{
if (lean_obj_tag(v_____x_3817_) == 1)
{
lean_object* v_val_3818_; lean_object* v___f_3819_; lean_object* v___f_3820_; lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; 
v_val_3818_ = lean_ctor_get(v_____x_3817_, 0);
lean_inc_n(v_val_3818_, 2);
lean_dec_ref(v_____x_3817_);
lean_inc_n(v_inst_3813_, 2);
v___f_3819_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0___boxed), 9, 8);
lean_closure_set(v___f_3819_, 0, v_toPure_3808_);
lean_closure_set(v___f_3819_, 1, v_usedFields_3809_);
lean_closure_set(v___f_3819_, 2, v_binderName_3810_);
lean_closure_set(v___f_3819_, 3, v_body_3811_);
lean_closure_set(v___f_3819_, 4, v_val_3818_);
lean_closure_set(v___f_3819_, 5, v_inst_3812_);
lean_closure_set(v___f_3819_, 6, v_inst_3813_);
lean_closure_set(v___f_3819_, 7, v_fieldVal_x3f_3814_);
lean_inc(v_toBind_3816_);
v___f_3820_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__1), 5, 4);
lean_closure_set(v___f_3820_, 0, v_binderType_3815_);
lean_closure_set(v___f_3820_, 1, v_inst_3813_);
lean_closure_set(v___f_3820_, 2, v_toBind_3816_);
lean_closure_set(v___f_3820_, 3, v___f_3819_);
v___x_3821_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3821_, 0, v_val_3818_);
v___x_3822_ = lean_apply_2(v_inst_3813_, lean_box(0), v___x_3821_);
v___x_3823_ = lean_apply_4(v_toBind_3816_, lean_box(0), lean_box(0), v___x_3822_, v___f_3820_);
return v___x_3823_;
}
else
{
lean_object* v___x_3824_; lean_object* v___x_3825_; 
lean_dec(v_____x_3817_);
lean_dec(v_toBind_3816_);
lean_dec_ref(v_binderType_3815_);
lean_dec(v_fieldVal_x3f_3814_);
lean_dec(v_inst_3813_);
lean_dec_ref(v_inst_3812_);
lean_dec_ref(v_body_3811_);
lean_dec(v_binderName_3810_);
lean_dec(v_usedFields_3809_);
v___x_3824_ = lean_box(0);
v___x_3825_ = lean_apply_2(v_toPure_3808_, lean_box(0), v___x_3824_);
return v___x_3825_;
}
}
}
static lean_object* _init_l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_3826_; 
v___x_3826_ = lean_mk_string_unchecked("id", 2, 2);
return v___x_3826_;
}
}
static lean_object* _init_l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_3827_; lean_object* v___x_3828_; 
v___x_3827_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0, &l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__0);
v___x_3828_ = l_Lean_Name_mkStr1(v___x_3827_);
return v___x_3828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(lean_object* v_inst_3829_, lean_object* v_inst_3830_, lean_object* v_fieldVal_x3f_3831_, lean_object* v_usedFields_3832_, lean_object* v_e_3833_){
_start:
{
lean_object* v_toApplicative_3834_; lean_object* v_toBind_3835_; lean_object* v_toPure_3836_; 
v_toApplicative_3834_ = lean_ctor_get(v_inst_3829_, 0);
v_toBind_3835_ = lean_ctor_get(v_inst_3829_, 1);
v_toPure_3836_ = lean_ctor_get(v_toApplicative_3834_, 1);
lean_inc(v_toPure_3836_);
if (lean_obj_tag(v_e_3833_) == 6)
{
lean_object* v_binderName_3841_; lean_object* v_binderType_3842_; lean_object* v_body_3843_; lean_object* v___f_3844_; lean_object* v___x_3845_; lean_object* v___x_3846_; 
lean_inc_n(v_toBind_3835_, 2);
v_binderName_3841_ = lean_ctor_get(v_e_3833_, 0);
lean_inc_n(v_binderName_3841_, 2);
v_binderType_3842_ = lean_ctor_get(v_e_3833_, 1);
lean_inc_ref(v_binderType_3842_);
v_body_3843_ = lean_ctor_get(v_e_3833_, 2);
lean_inc_ref(v_body_3843_);
lean_dec_ref(v_e_3833_);
lean_inc(v_fieldVal_x3f_3831_);
v___f_3844_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__2), 10, 9);
lean_closure_set(v___f_3844_, 0, v_toPure_3836_);
lean_closure_set(v___f_3844_, 1, v_usedFields_3832_);
lean_closure_set(v___f_3844_, 2, v_binderName_3841_);
lean_closure_set(v___f_3844_, 3, v_body_3843_);
lean_closure_set(v___f_3844_, 4, v_inst_3829_);
lean_closure_set(v___f_3844_, 5, v_inst_3830_);
lean_closure_set(v___f_3844_, 6, v_fieldVal_x3f_3831_);
lean_closure_set(v___f_3844_, 7, v_binderType_3842_);
lean_closure_set(v___f_3844_, 8, v_toBind_3835_);
v___x_3845_ = lean_apply_1(v_fieldVal_x3f_3831_, v_binderName_3841_);
v___x_3846_ = lean_apply_4(v_toBind_3835_, lean_box(0), lean_box(0), v___x_3845_, v___f_3844_);
return v___x_3846_;
}
else
{
lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3863_; 
lean_dec(v_fieldVal_x3f_3831_);
lean_dec(v_inst_3830_);
v_isSharedCheck_3863_ = !lean_is_exclusive(v_inst_3829_);
if (v_isSharedCheck_3863_ == 0)
{
lean_object* v_unused_3864_; lean_object* v_unused_3865_; 
v_unused_3864_ = lean_ctor_get(v_inst_3829_, 1);
lean_dec(v_unused_3864_);
v_unused_3865_ = lean_ctor_get(v_inst_3829_, 0);
lean_dec(v_unused_3865_);
v___x_3848_ = v_inst_3829_;
v_isShared_3849_ = v_isSharedCheck_3863_;
goto v_resetjp_3847_;
}
else
{
lean_dec(v_inst_3829_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3863_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v___x_3850_; uint8_t v___x_3851_; 
lean_inc_ref(v_e_3833_);
v___x_3850_ = l_Lean_Expr_cleanupAnnotations(v_e_3833_);
v___x_3851_ = l_Lean_Expr_isApp(v___x_3850_);
if (v___x_3851_ == 0)
{
lean_dec_ref(v___x_3850_);
lean_del_object(v___x_3848_);
goto v___jp_3837_;
}
else
{
lean_object* v_arg_3852_; lean_object* v___x_3853_; uint8_t v___x_3854_; 
v_arg_3852_ = lean_ctor_get(v___x_3850_, 1);
lean_inc_ref(v_arg_3852_);
v___x_3853_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3850_);
v___x_3854_ = l_Lean_Expr_isApp(v___x_3853_);
if (v___x_3854_ == 0)
{
lean_dec_ref(v___x_3853_);
lean_dec_ref(v_arg_3852_);
lean_del_object(v___x_3848_);
goto v___jp_3837_;
}
else
{
lean_object* v___x_3855_; lean_object* v___x_3856_; uint8_t v___x_3857_; 
v___x_3855_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3853_);
v___x_3856_ = lean_obj_once(&l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1, &l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___closed__1);
v___x_3857_ = l_Lean_Expr_isConstOf(v___x_3855_, v___x_3856_);
lean_dec_ref(v___x_3855_);
if (v___x_3857_ == 0)
{
lean_dec_ref(v_arg_3852_);
lean_del_object(v___x_3848_);
goto v___jp_3837_;
}
else
{
lean_object* v___x_3859_; 
lean_dec_ref(v_e_3833_);
if (v_isShared_3849_ == 0)
{
lean_ctor_set(v___x_3848_, 1, v_arg_3852_);
lean_ctor_set(v___x_3848_, 0, v_usedFields_3832_);
v___x_3859_ = v___x_3848_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_usedFields_3832_);
lean_ctor_set(v_reuseFailAlloc_3862_, 1, v_arg_3852_);
v___x_3859_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3860_, 0, v___x_3859_);
v___x_3861_ = lean_apply_2(v_toPure_3836_, lean_box(0), v___x_3860_);
return v___x_3861_;
}
}
}
}
}
}
v___jp_3837_:
{
lean_object* v___x_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; 
v___x_3838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3838_, 0, v_usedFields_3832_);
lean_ctor_set(v___x_3838_, 1, v_e_3833_);
v___x_3839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3839_, 0, v___x_3838_);
v___x_3840_ = lean_apply_2(v_toPure_3836_, lean_box(0), v___x_3839_);
return v___x_3840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg___lam__0(lean_object* v_toPure_3866_, lean_object* v_usedFields_3867_, lean_object* v_binderName_3868_, lean_object* v_body_3869_, lean_object* v_val_3870_, lean_object* v_inst_3871_, lean_object* v_inst_3872_, lean_object* v_fieldVal_x3f_3873_, uint8_t v_____do__lift_3874_){
_start:
{
if (v_____do__lift_3874_ == 0)
{
lean_object* v___x_3875_; lean_object* v___x_3876_; 
lean_dec(v_fieldVal_x3f_3873_);
lean_dec(v_inst_3872_);
lean_dec_ref(v_inst_3871_);
lean_dec(v_binderName_3868_);
lean_dec(v_usedFields_3867_);
v___x_3875_ = lean_box(0);
v___x_3876_ = lean_apply_2(v_toPure_3866_, lean_box(0), v___x_3875_);
return v___x_3876_;
}
else
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; 
lean_dec(v_toPure_3866_);
v___x_3877_ = l_Lean_NameSet_insert(v_usedFields_3867_, v_binderName_3868_);
v___x_3878_ = lean_expr_instantiate1(v_body_3869_, v_val_3870_);
v___x_3879_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3871_, v_inst_3872_, v_fieldVal_x3f_3873_, v___x_3877_, v___x_3878_);
return v___x_3879_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f(lean_object* v_m_3880_, lean_object* v_inst_3881_, lean_object* v_inst_3882_, lean_object* v_fieldVal_x3f_3883_, lean_object* v_usedFields_3884_, lean_object* v_e_3885_){
_start:
{
lean_object* v___x_3886_; 
v___x_3886_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3881_, v_inst_3882_, v_fieldVal_x3f_3883_, v_usedFields_3884_, v_e_3885_);
return v___x_3886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0(lean_object* v_inst_3887_, lean_object* v_inst_3888_, lean_object* v_fieldVal_x3f_3889_, lean_object* v_toPure_3890_, lean_object* v_____s_3891_){
_start:
{
lean_object* v_fst_3892_; 
v_fst_3892_ = lean_ctor_get(v_____s_3891_, 0);
if (lean_obj_tag(v_fst_3892_) == 0)
{
lean_object* v_snd_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; 
lean_dec(v_toPure_3890_);
v_snd_3893_ = lean_ctor_get(v_____s_3891_, 1);
lean_inc(v_snd_3893_);
lean_dec_ref(v_____s_3891_);
v___x_3894_ = l_Lean_NameSet_empty;
v___x_3895_ = l___private_Lean_Meta_Structure_0__Lean_Meta_instantiateStructDefaultValueFn_x3f_go_x3f___redArg(v_inst_3887_, v_inst_3888_, v_fieldVal_x3f_3889_, v___x_3894_, v_snd_3893_);
return v___x_3895_;
}
else
{
lean_object* v_val_3896_; lean_object* v___x_3897_; 
lean_inc_ref(v_fst_3892_);
lean_dec_ref(v_____s_3891_);
lean_dec(v_fieldVal_x3f_3889_);
lean_dec(v_inst_3888_);
lean_dec_ref(v_inst_3887_);
v_val_3896_ = lean_ctor_get(v_fst_3892_, 0);
lean_inc(v_val_3896_);
lean_dec_ref(v_fst_3892_);
v___x_3897_ = lean_apply_2(v_toPure_3890_, lean_box(0), v_val_3896_);
return v___x_3897_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(lean_object* v_body_3898_, lean_object* v_a_3899_, lean_object* v___x_3900_, lean_object* v_toPure_3901_, lean_object* v_____r_3902_){
_start:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; 
v___x_3903_ = lean_expr_instantiate1(v_body_3898_, v_a_3899_);
v___x_3904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3904_, 0, v___x_3900_);
lean_ctor_set(v___x_3904_, 1, v___x_3903_);
v___x_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3905_, 0, v___x_3904_);
v___x_3906_ = lean_apply_2(v_toPure_3901_, lean_box(0), v___x_3905_);
return v___x_3906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed(lean_object* v_body_3907_, lean_object* v_a_3908_, lean_object* v___x_3909_, lean_object* v_toPure_3910_, lean_object* v_____r_3911_){
_start:
{
lean_object* v_res_3912_; 
v_res_3912_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(v_body_3907_, v_a_3908_, v___x_3909_, v_toPure_3910_, v_____r_3911_);
lean_dec_ref(v_a_3908_);
lean_dec_ref(v_body_3907_);
return v_res_3912_;
}
}
static lean_object* _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; 
v___x_3913_ = lean_box(0);
v___x_3914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3914_, 0, v___x_3913_);
return v___x_3914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(lean_object* v_snd_3915_, lean_object* v_toPure_3916_, lean_object* v___f_3917_, uint8_t v_____do__lift_3918_){
_start:
{
if (v_____do__lift_3918_ == 0)
{
lean_object* v___x_3919_; lean_object* v___x_3920_; lean_object* v___x_3921_; lean_object* v___x_3922_; 
lean_dec(v___f_3917_);
v___x_3919_ = lean_obj_once(&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0, &l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_once, _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0);
v___x_3920_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3920_, 0, v___x_3919_);
lean_ctor_set(v___x_3920_, 1, v_snd_3915_);
v___x_3921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3921_, 0, v___x_3920_);
v___x_3922_ = lean_apply_2(v_toPure_3916_, lean_box(0), v___x_3921_);
return v___x_3922_;
}
else
{
lean_object* v___x_3923_; lean_object* v___x_3924_; 
lean_dec(v_toPure_3916_);
lean_dec(v_snd_3915_);
v___x_3923_ = lean_box(0);
v___x_3924_ = lean_apply_1(v___f_3917_, v___x_3923_);
return v___x_3924_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed(lean_object* v_snd_3925_, lean_object* v_toPure_3926_, lean_object* v___f_3927_, lean_object* v_____do__lift_3928_){
_start:
{
uint8_t v_____do__lift_852__boxed_3929_; lean_object* v_res_3930_; 
v_____do__lift_852__boxed_3929_ = lean_unbox(v_____do__lift_3928_);
v_res_3930_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2(v_snd_3925_, v_toPure_3926_, v___f_3927_, v_____do__lift_852__boxed_3929_);
return v_res_3930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3(lean_object* v_binderType_3931_, lean_object* v_inst_3932_, lean_object* v_toBind_3933_, lean_object* v___f_3934_, lean_object* v_____do__lift_3935_){
_start:
{
lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; 
v___x_3936_ = lean_alloc_closure((void*)(l_Lean_Meta_isDefEq___boxed), 7, 2);
lean_closure_set(v___x_3936_, 0, v_____do__lift_3935_);
lean_closure_set(v___x_3936_, 1, v_binderType_3931_);
v___x_3937_ = lean_apply_2(v_inst_3932_, lean_box(0), v___x_3936_);
v___x_3938_ = lean_apply_4(v_toBind_3933_, lean_box(0), lean_box(0), v___x_3937_, v___f_3934_);
return v___x_3938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(lean_object* v___x_3939_, lean_object* v_toPure_3940_, lean_object* v_levels_x3f_3941_, uint8_t v___x_3942_, lean_object* v_inst_3943_, lean_object* v_toBind_3944_, lean_object* v_a_3945_, lean_object* v_x_3946_, lean_object* v___y_3947_){
_start:
{
lean_object* v_snd_3948_; lean_object* v___x_3950_; uint8_t v_isShared_3951_; uint8_t v_isSharedCheck_3969_; 
v_snd_3948_ = lean_ctor_get(v___y_3947_, 1);
v_isSharedCheck_3969_ = !lean_is_exclusive(v___y_3947_);
if (v_isSharedCheck_3969_ == 0)
{
lean_object* v_unused_3970_; 
v_unused_3970_ = lean_ctor_get(v___y_3947_, 0);
lean_dec(v_unused_3970_);
v___x_3950_ = v___y_3947_;
v_isShared_3951_ = v_isSharedCheck_3969_;
goto v_resetjp_3949_;
}
else
{
lean_inc(v_snd_3948_);
lean_dec(v___y_3947_);
v___x_3950_ = lean_box(0);
v_isShared_3951_ = v_isSharedCheck_3969_;
goto v_resetjp_3949_;
}
v_resetjp_3949_:
{
if (lean_obj_tag(v_snd_3948_) == 6)
{
lean_object* v_binderType_3952_; lean_object* v_body_3953_; lean_object* v___f_3954_; 
lean_del_object(v___x_3950_);
v_binderType_3952_ = lean_ctor_get(v_snd_3948_, 1);
lean_inc_ref(v_binderType_3952_);
v_body_3953_ = lean_ctor_get(v_snd_3948_, 2);
lean_inc(v_toPure_3940_);
lean_inc(v___x_3939_);
lean_inc_ref(v_a_3945_);
lean_inc_ref(v_body_3953_);
v___f_3954_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3954_, 0, v_body_3953_);
lean_closure_set(v___f_3954_, 1, v_a_3945_);
lean_closure_set(v___f_3954_, 2, v___x_3939_);
lean_closure_set(v___f_3954_, 3, v_toPure_3940_);
if (lean_obj_tag(v_levels_x3f_3941_) == 0)
{
if (v___x_3942_ == 0)
{
lean_inc_ref(v_body_3953_);
lean_dec_ref(v___f_3954_);
lean_dec_ref(v_binderType_3952_);
lean_dec_ref(v_snd_3948_);
lean_dec(v_toBind_3944_);
lean_dec(v_inst_3943_);
goto v___jp_3955_;
}
else
{
lean_object* v___f_3958_; lean_object* v___f_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; 
lean_dec(v___x_3939_);
v___f_3958_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___boxed), 4, 3);
lean_closure_set(v___f_3958_, 0, v_snd_3948_);
lean_closure_set(v___f_3958_, 1, v_toPure_3940_);
lean_closure_set(v___f_3958_, 2, v___f_3954_);
lean_inc(v_toBind_3944_);
lean_inc(v_inst_3943_);
v___f_3959_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__3), 5, 4);
lean_closure_set(v___f_3959_, 0, v_binderType_3952_);
lean_closure_set(v___f_3959_, 1, v_inst_3943_);
lean_closure_set(v___f_3959_, 2, v_toBind_3944_);
lean_closure_set(v___f_3959_, 3, v___f_3958_);
v___x_3960_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_3960_, 0, v_a_3945_);
v___x_3961_ = lean_apply_2(v_inst_3943_, lean_box(0), v___x_3960_);
v___x_3962_ = lean_apply_4(v_toBind_3944_, lean_box(0), lean_box(0), v___x_3961_, v___f_3959_);
return v___x_3962_;
}
}
else
{
lean_inc_ref(v_body_3953_);
lean_dec_ref(v___f_3954_);
lean_dec_ref(v_binderType_3952_);
lean_dec_ref(v_snd_3948_);
lean_dec(v_toBind_3944_);
lean_dec(v_inst_3943_);
goto v___jp_3955_;
}
v___jp_3955_:
{
lean_object* v___x_3956_; lean_object* v___x_3957_; 
v___x_3956_ = lean_box(0);
v___x_3957_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__1(v_body_3953_, v_a_3945_, v___x_3939_, v_toPure_3940_, v___x_3956_);
lean_dec_ref(v_a_3945_);
lean_dec_ref(v_body_3953_);
return v___x_3957_;
}
}
else
{
lean_object* v___x_3963_; lean_object* v___x_3965_; 
lean_dec_ref(v_a_3945_);
lean_dec(v_toBind_3944_);
lean_dec(v_inst_3943_);
lean_dec(v___x_3939_);
v___x_3963_ = lean_obj_once(&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0, &l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0_once, _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__2___closed__0);
if (v_isShared_3951_ == 0)
{
lean_ctor_set(v___x_3950_, 0, v___x_3963_);
v___x_3965_ = v___x_3950_;
goto v_reusejp_3964_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v___x_3963_);
lean_ctor_set(v_reuseFailAlloc_3968_, 1, v_snd_3948_);
v___x_3965_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3964_;
}
v_reusejp_3964_:
{
lean_object* v___x_3966_; lean_object* v___x_3967_; 
v___x_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3965_);
v___x_3967_ = lean_apply_2(v_toPure_3940_, lean_box(0), v___x_3966_);
return v___x_3967_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed(lean_object* v___x_3971_, lean_object* v_toPure_3972_, lean_object* v_levels_x3f_3973_, lean_object* v___x_3974_, lean_object* v_inst_3975_, lean_object* v_toBind_3976_, lean_object* v_a_3977_, lean_object* v_x_3978_, lean_object* v___y_3979_){
_start:
{
uint8_t v___x_888__boxed_3980_; lean_object* v_res_3981_; 
v___x_888__boxed_3980_ = lean_unbox(v___x_3974_);
v_res_3981_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4(v___x_3971_, v_toPure_3972_, v_levels_x3f_3973_, v___x_888__boxed_3980_, v_inst_3975_, v_toBind_3976_, v_a_3977_, v_x_3978_, v___y_3979_);
lean_dec(v_levels_x3f_3973_);
return v_res_3981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(lean_object* v_toPure_3982_, lean_object* v_levels_x3f_3983_, uint8_t v___x_3984_, lean_object* v_inst_3985_, lean_object* v_toBind_3986_, lean_object* v_params_3987_, lean_object* v_inst_3988_, lean_object* v___f_3989_, lean_object* v_val_3990_){
_start:
{
lean_object* v___x_3991_; lean_object* v___x_3992_; lean_object* v___f_3993_; lean_object* v___x_3994_; size_t v_sz_3995_; size_t v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; 
v___x_3991_ = lean_box(0);
v___x_3992_ = lean_box(v___x_3984_);
lean_inc(v_toBind_3986_);
v___f_3993_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__4___boxed), 9, 6);
lean_closure_set(v___f_3993_, 0, v___x_3991_);
lean_closure_set(v___f_3993_, 1, v_toPure_3982_);
lean_closure_set(v___f_3993_, 2, v_levels_x3f_3983_);
lean_closure_set(v___f_3993_, 3, v___x_3992_);
lean_closure_set(v___f_3993_, 4, v_inst_3985_);
lean_closure_set(v___f_3993_, 5, v_toBind_3986_);
v___x_3994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3994_, 0, v___x_3991_);
lean_ctor_set(v___x_3994_, 1, v_val_3990_);
v_sz_3995_ = lean_array_size(v_params_3987_);
v___x_3996_ = ((size_t)0ULL);
v___x_3997_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_3988_, v_params_3987_, v___f_3993_, v_sz_3995_, v___x_3996_, v___x_3994_);
v___x_3998_ = lean_apply_4(v_toBind_3986_, lean_box(0), lean_box(0), v___x_3997_, v___f_3989_);
return v___x_3998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5___boxed(lean_object* v_toPure_3999_, lean_object* v_levels_x3f_4000_, lean_object* v___x_4001_, lean_object* v_inst_4002_, lean_object* v_toBind_4003_, lean_object* v_params_4004_, lean_object* v_inst_4005_, lean_object* v___f_4006_, lean_object* v_val_4007_){
_start:
{
uint8_t v___x_950__boxed_4008_; lean_object* v_res_4009_; 
v___x_950__boxed_4008_ = lean_unbox(v___x_4001_);
v_res_4009_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5(v_toPure_3999_, v_levels_x3f_4000_, v___x_950__boxed_4008_, v_inst_4002_, v_toBind_4003_, v_params_4004_, v_inst_4005_, v___f_4006_, v_val_4007_);
return v_res_4009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(lean_object* v_cinfo_4010_, lean_object* v_us_4011_, uint8_t v___x_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_){
_start:
{
lean_object* v___x_4018_; 
v___x_4018_ = l_Lean_Core_instantiateValueLevelParams(v_cinfo_4010_, v_us_4011_, v___x_4012_, v___y_4015_, v___y_4016_);
return v___x_4018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed(lean_object* v_cinfo_4019_, lean_object* v_us_4020_, lean_object* v___x_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_){
_start:
{
uint8_t v___x_976__boxed_4027_; lean_object* v_res_4028_; 
v___x_976__boxed_4027_ = lean_unbox(v___x_4021_);
v_res_4028_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6(v_cinfo_4019_, v_us_4020_, v___x_976__boxed_4027_, v___y_4022_, v___y_4023_, v___y_4024_, v___y_4025_);
lean_dec(v___y_4025_);
lean_dec_ref(v___y_4024_);
lean_dec(v___y_4023_);
lean_dec_ref(v___y_4022_);
lean_dec_ref(v_cinfo_4019_);
return v_res_4028_;
}
}
static lean_object* _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0(void){
_start:
{
lean_object* v___x_4029_; 
v___x_4029_ = lean_mk_string_unchecked("Lean.Meta.Structure", 19, 19);
return v___x_4029_;
}
}
static lean_object* _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1(void){
_start:
{
lean_object* v___x_4030_; 
v___x_4030_ = lean_mk_string_unchecked("Lean.Meta.instantiateStructDefaultValueFn\?", 42, 42);
return v___x_4030_;
}
}
static lean_object* _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2(void){
_start:
{
lean_object* v___x_4031_; 
v___x_4031_ = lean_mk_string_unchecked("assertion violation: us.length == cinfo.levelParams.length\n  ", 61, 61);
return v___x_4031_;
}
}
static lean_object* _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3(void){
_start:
{
lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; 
v___x_4032_ = lean_obj_once(&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2, &l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2_once, _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__2);
v___x_4033_ = lean_unsigned_to_nat(2u);
v___x_4034_ = lean_unsigned_to_nat(202u);
v___x_4035_ = lean_obj_once(&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1, &l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1_once, _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__1);
v___x_4036_ = lean_obj_once(&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0, &l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0_once, _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__0);
v___x_4037_ = l_mkPanicMessageWithDecl(v___x_4036_, v___x_4035_, v___x_4034_, v___x_4033_, v___x_4032_);
return v___x_4037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7(lean_object* v_cinfo_4038_, lean_object* v_inst_4039_, lean_object* v_toPure_4040_, lean_object* v_levels_x3f_4041_, lean_object* v_inst_4042_, lean_object* v_toBind_4043_, lean_object* v_params_4044_, lean_object* v___f_4045_, lean_object* v_us_4046_){
_start:
{
lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; uint8_t v___x_4050_; 
v___x_4047_ = l_List_lengthTR___redArg(v_us_4046_);
v___x_4048_ = l_Lean_ConstantInfo_levelParams(v_cinfo_4038_);
v___x_4049_ = l_List_lengthTR___redArg(v___x_4048_);
lean_dec(v___x_4048_);
v___x_4050_ = lean_nat_dec_eq(v___x_4047_, v___x_4049_);
lean_dec(v___x_4049_);
lean_dec(v___x_4047_);
if (v___x_4050_ == 0)
{
lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
lean_dec(v_us_4046_);
lean_dec(v___f_4045_);
lean_dec_ref(v_params_4044_);
lean_dec(v_toBind_4043_);
lean_dec(v_inst_4042_);
lean_dec(v_levels_x3f_4041_);
lean_dec(v_toPure_4040_);
lean_dec_ref(v_cinfo_4038_);
v___x_4051_ = lean_box(0);
v___x_4052_ = l_instInhabitedOfMonad___redArg(v_inst_4039_, v___x_4051_);
v___x_4053_ = lean_obj_once(&l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3, &l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3_once, _init_l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7___closed__3);
v___x_4054_ = l_panic___redArg(v___x_4052_, v___x_4053_);
lean_dec(v___x_4052_);
return v___x_4054_;
}
else
{
lean_object* v___x_4055_; lean_object* v___f_4056_; uint8_t v___x_4057_; lean_object* v___x_4058_; lean_object* v___f_4059_; lean_object* v___x_4060_; lean_object* v___x_4061_; 
v___x_4055_ = lean_box(v___x_4050_);
lean_inc(v_toBind_4043_);
lean_inc(v_inst_4042_);
v___f_4056_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__5___boxed), 9, 8);
lean_closure_set(v___f_4056_, 0, v_toPure_4040_);
lean_closure_set(v___f_4056_, 1, v_levels_x3f_4041_);
lean_closure_set(v___f_4056_, 2, v___x_4055_);
lean_closure_set(v___f_4056_, 3, v_inst_4042_);
lean_closure_set(v___f_4056_, 4, v_toBind_4043_);
lean_closure_set(v___f_4056_, 5, v_params_4044_);
lean_closure_set(v___f_4056_, 6, v_inst_4039_);
lean_closure_set(v___f_4056_, 7, v___f_4045_);
v___x_4057_ = 0;
v___x_4058_ = lean_box(v___x_4057_);
v___f_4059_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__6___boxed), 8, 3);
lean_closure_set(v___f_4059_, 0, v_cinfo_4038_);
lean_closure_set(v___f_4059_, 1, v_us_4046_);
lean_closure_set(v___f_4059_, 2, v___x_4058_);
v___x_4060_ = lean_apply_2(v_inst_4042_, lean_box(0), v___f_4059_);
v___x_4061_ = lean_apply_4(v_toBind_4043_, lean_box(0), lean_box(0), v___x_4060_, v___f_4056_);
return v___x_4061_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8(lean_object* v_inst_4062_, lean_object* v_toPure_4063_, lean_object* v_levels_x3f_4064_, lean_object* v_inst_4065_, lean_object* v_toBind_4066_, lean_object* v_params_4067_, lean_object* v___f_4068_, lean_object* v_cinfo_4069_){
_start:
{
lean_object* v___f_4070_; 
lean_inc(v_toBind_4066_);
lean_inc(v_inst_4065_);
lean_inc(v_levels_x3f_4064_);
lean_inc(v_toPure_4063_);
lean_inc_ref(v_cinfo_4069_);
v___f_4070_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__7), 9, 8);
lean_closure_set(v___f_4070_, 0, v_cinfo_4069_);
lean_closure_set(v___f_4070_, 1, v_inst_4062_);
lean_closure_set(v___f_4070_, 2, v_toPure_4063_);
lean_closure_set(v___f_4070_, 3, v_levels_x3f_4064_);
lean_closure_set(v___f_4070_, 4, v_inst_4065_);
lean_closure_set(v___f_4070_, 5, v_toBind_4066_);
lean_closure_set(v___f_4070_, 6, v_params_4067_);
lean_closure_set(v___f_4070_, 7, v___f_4068_);
if (lean_obj_tag(v_levels_x3f_4064_) == 0)
{
lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; 
lean_dec(v_toPure_4063_);
v___x_4071_ = lean_alloc_closure((void*)(l_Lean_Meta_mkFreshLevelMVarsFor___boxed), 6, 1);
lean_closure_set(v___x_4071_, 0, v_cinfo_4069_);
v___x_4072_ = lean_apply_2(v_inst_4065_, lean_box(0), v___x_4071_);
v___x_4073_ = lean_apply_4(v_toBind_4066_, lean_box(0), lean_box(0), v___x_4072_, v___f_4070_);
return v___x_4073_;
}
else
{
lean_object* v_val_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; 
lean_dec_ref(v_cinfo_4069_);
lean_dec(v_inst_4065_);
v_val_4074_ = lean_ctor_get(v_levels_x3f_4064_, 0);
lean_inc(v_val_4074_);
lean_dec_ref(v_levels_x3f_4064_);
v___x_4075_ = lean_apply_2(v_toPure_4063_, lean_box(0), v_val_4074_);
v___x_4076_ = lean_apply_4(v_toBind_4066_, lean_box(0), lean_box(0), v___x_4075_, v___f_4070_);
return v___x_4076_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(lean_object* v_inst_4077_, lean_object* v_inst_4078_, lean_object* v_inst_4079_, lean_object* v_inst_4080_, lean_object* v_defaultFn_4081_, lean_object* v_levels_x3f_4082_, lean_object* v_params_4083_, lean_object* v_fieldVal_x3f_4084_){
_start:
{
lean_object* v_toApplicative_4085_; lean_object* v_toBind_4086_; lean_object* v_toPure_4087_; lean_object* v___x_4088_; lean_object* v___f_4089_; lean_object* v___f_4090_; lean_object* v___x_4091_; 
v_toApplicative_4085_ = lean_ctor_get(v_inst_4077_, 0);
v_toBind_4086_ = lean_ctor_get(v_inst_4077_, 1);
lean_inc_n(v_toBind_4086_, 2);
v_toPure_4087_ = lean_ctor_get(v_toApplicative_4085_, 1);
lean_inc_n(v_toPure_4087_, 2);
lean_inc_ref_n(v_inst_4077_, 2);
v___x_4088_ = l_Lean_getConstInfo___redArg(v_inst_4077_, v_inst_4078_, v_inst_4079_, v_defaultFn_4081_);
lean_inc(v_inst_4080_);
v___f_4089_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__0), 5, 4);
lean_closure_set(v___f_4089_, 0, v_inst_4077_);
lean_closure_set(v___f_4089_, 1, v_inst_4080_);
lean_closure_set(v___f_4089_, 2, v_fieldVal_x3f_4084_);
lean_closure_set(v___f_4089_, 3, v_toPure_4087_);
v___f_4090_ = lean_alloc_closure((void*)(l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg___lam__8), 8, 7);
lean_closure_set(v___f_4090_, 0, v_inst_4077_);
lean_closure_set(v___f_4090_, 1, v_toPure_4087_);
lean_closure_set(v___f_4090_, 2, v_levels_x3f_4082_);
lean_closure_set(v___f_4090_, 3, v_inst_4080_);
lean_closure_set(v___f_4090_, 4, v_toBind_4086_);
lean_closure_set(v___f_4090_, 5, v_params_4083_);
lean_closure_set(v___f_4090_, 6, v___f_4089_);
v___x_4091_ = lean_apply_4(v_toBind_4086_, lean_box(0), lean_box(0), v___x_4088_, v___f_4090_);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f(lean_object* v_m_4092_, lean_object* v_inst_4093_, lean_object* v_inst_4094_, lean_object* v_inst_4095_, lean_object* v_inst_4096_, lean_object* v_inst_4097_, lean_object* v_defaultFn_4098_, lean_object* v_levels_x3f_4099_, lean_object* v_params_4100_, lean_object* v_fieldVal_x3f_4101_){
_start:
{
lean_object* v___x_4102_; 
v___x_4102_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f___redArg(v_inst_4093_, v_inst_4094_, v_inst_4095_, v_inst_4096_, v_defaultFn_4098_, v_levels_x3f_4099_, v_params_4100_, v_fieldVal_x3f_4101_);
return v___x_4102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_instantiateStructDefaultValueFn_x3f___boxed(lean_object* v_m_4103_, lean_object* v_inst_4104_, lean_object* v_inst_4105_, lean_object* v_inst_4106_, lean_object* v_inst_4107_, lean_object* v_inst_4108_, lean_object* v_defaultFn_4109_, lean_object* v_levels_x3f_4110_, lean_object* v_params_4111_, lean_object* v_fieldVal_x3f_4112_){
_start:
{
lean_object* v_res_4113_; 
v_res_4113_ = l_Lean_Meta_instantiateStructDefaultValueFn_x3f(v_m_4103_, v_inst_4104_, v_inst_4105_, v_inst_4106_, v_inst_4107_, v_inst_4108_, v_defaultFn_4109_, v_levels_x3f_4110_, v_params_4111_, v_fieldVal_x3f_4112_);
lean_dec_ref(v_inst_4108_);
return v_res_4113_;
}
}
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Structure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Structure(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Structure(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Structure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Structure(builtin);
}
#ifdef __cplusplus
}
#endif
