// Lean compiler output
// Module: Lean.Meta.Transform
// Imports: public import Lean.Meta.FunInfo import Init.Data.Range.Polymorphic.Iterators
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
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_instReprExpr_repr(lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_ExprStructEq_hash___boxed(lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonadControl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadControlTOfMonadControl___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_modifyGetUnsafe___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Expr_withAppAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonadLift___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MonadCacheT_instMonad___aux__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_WellFounded_opaqueFix_u2083___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLocalDecl___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkForallFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withLetDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_mkLetFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_withIncRecDepth___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHeadBetaTarget(lean_object*, uint8_t);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* lean_local_ctx_num_indices(lean_object*);
lean_object* l_Lean_FVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_index(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ConstantInfo_hasValue(lean_object*, uint8_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_inaccessible_x3f(lean_object*);
lean_object* l_Lean_patternWithRef_x3f(lean_object*);
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedTransformStep_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTransformStep_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedTransformStep_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTransformStep_default___closed__1;
static lean_once_cell_t l_Lean_instInhabitedTransformStep_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTransformStep_default___closed__2;
static lean_once_cell_t l_Lean_instInhabitedTransformStep_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedTransformStep_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTransformStep_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedTransformStep;
static lean_once_cell_t l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0;
static lean_once_cell_t l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1;
static lean_once_cell_t l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2;
static lean_once_cell_t l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__0;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__1;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__2;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__3;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__4;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__5;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__6;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__7;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__8;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__9;
static lean_once_cell_t l_Lean_instReprTransformStep_repr___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep_repr___closed__10;
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instReprTransformStep___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTransformStep___closed__0;
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__0;
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__1;
static lean_once_cell_t l_Lean_Core_transform___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_betaReduce___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_betaReduce___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_betaReduce___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_betaReduce___closed__0;
static lean_once_cell_t l_Lean_Core_betaReduce___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_betaReduce___closed__1;
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed(lean_object**);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_zetaReduce___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_zetaReduce___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_eraseInaccessibleAnnotations___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___closed__0;
static lean_once_cell_t l_Lean_Meta_eraseInaccessibleAnnotations___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_erasePatternRefAnnotations___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_erasePatternRefAnnotations___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
lean_object* v_res_6_; 
v_res_6_ = l_Lean_TransformStep_ctorIdx(v_x_5_);
lean_dec_ref(v_x_5_);
return v_res_6_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___redArg(lean_object* v_t_7_, lean_object* v_k_8_){
_start:
{
if (lean_obj_tag(v_t_7_) == 2)
{
lean_object* v_e_x3f_9_; lean_object* v___x_10_; 
v_e_x3f_9_ = lean_ctor_get(v_t_7_, 0);
lean_inc(v_e_x3f_9_);
lean_dec_ref(v_t_7_);
v___x_10_ = lean_apply_1(v_k_8_, v_e_x3f_9_);
return v___x_10_;
}
else
{
lean_object* v_e_11_; lean_object* v___x_12_; 
v_e_11_ = lean_ctor_get(v_t_7_, 0);
lean_inc_ref(v_e_11_);
lean_dec_ref(v_t_7_);
v___x_12_ = lean_apply_1(v_k_8_, v_e_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim(lean_object* v_motive_13_, lean_object* v_ctorIdx_14_, lean_object* v_t_15_, lean_object* v_h_16_, lean_object* v_k_17_){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = l_Lean_TransformStep_ctorElim___redArg(v_t_15_, v_k_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_ctorElim___boxed(lean_object* v_motive_19_, lean_object* v_ctorIdx_20_, lean_object* v_t_21_, lean_object* v_h_22_, lean_object* v_k_23_){
_start:
{
lean_object* v_res_24_; 
v_res_24_ = l_Lean_TransformStep_ctorElim(v_motive_19_, v_ctorIdx_20_, v_t_21_, v_h_22_, v_k_23_);
lean_dec(v_ctorIdx_20_);
return v_res_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim___redArg(lean_object* v_t_25_, lean_object* v_done_26_){
_start:
{
lean_object* v___x_27_; 
v___x_27_ = l_Lean_TransformStep_ctorElim___redArg(v_t_25_, v_done_26_);
return v___x_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_done_elim(lean_object* v_motive_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_done_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_TransformStep_ctorElim___redArg(v_t_29_, v_done_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim___redArg(lean_object* v_t_33_, lean_object* v_visit_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_TransformStep_ctorElim___redArg(v_t_33_, v_visit_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_visit_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_visit_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_TransformStep_ctorElim___redArg(v_t_37_, v_visit_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim___redArg(lean_object* v_t_41_, lean_object* v_continue_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_TransformStep_ctorElim___redArg(v_t_41_, v_continue_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_TransformStep_continue_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_continue_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_TransformStep_ctorElim___redArg(v_t_45_, v_continue_47_);
return v___x_48_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default___closed__0(void){
_start:
{
lean_object* v___x_49_; 
v___x_49_ = lean_mk_string_unchecked("_inhabitedExprDummy", 19, 19);
return v___x_49_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default___closed__1(void){
_start:
{
lean_object* v___x_50_; lean_object* v___x_51_; 
v___x_50_ = lean_obj_once(&l_Lean_instInhabitedTransformStep_default___closed__0, &l_Lean_instInhabitedTransformStep_default___closed__0_once, _init_l_Lean_instInhabitedTransformStep_default___closed__0);
v___x_51_ = l_Lean_Name_mkStr1(v___x_50_);
return v___x_51_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default___closed__2(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_52_ = lean_box(0);
v___x_53_ = lean_obj_once(&l_Lean_instInhabitedTransformStep_default___closed__1, &l_Lean_instInhabitedTransformStep_default___closed__1_once, _init_l_Lean_instInhabitedTransformStep_default___closed__1);
v___x_54_ = l_Lean_Expr_const___override(v___x_53_, v___x_52_);
return v___x_54_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default___closed__3(void){
_start:
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_obj_once(&l_Lean_instInhabitedTransformStep_default___closed__2, &l_Lean_instInhabitedTransformStep_default___closed__2_once, _init_l_Lean_instInhabitedTransformStep_default___closed__2);
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep_default(void){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&l_Lean_instInhabitedTransformStep_default___closed__3, &l_Lean_instInhabitedTransformStep_default___closed__3_once, _init_l_Lean_instInhabitedTransformStep_default___closed__3);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_instInhabitedTransformStep(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_instInhabitedTransformStep_default;
return v___x_58_;
}
}
static lean_object* _init_l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0(void){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_mk_string_unchecked("none", 4, 4);
return v___x_59_;
}
}
static lean_object* _init_l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_60_ = lean_obj_once(&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0, &l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0_once, _init_l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__0);
v___x_61_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_61_, 0, v___x_60_);
return v___x_61_;
}
}
static lean_object* _init_l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2(void){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = lean_mk_string_unchecked("some ", 5, 5);
return v___x_62_;
}
}
static lean_object* _init_l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = lean_obj_once(&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2, &l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2_once, _init_l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__2);
v___x_64_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_64_, 0, v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(lean_object* v_x_65_, lean_object* v_x_66_){
_start:
{
if (lean_obj_tag(v_x_65_) == 0)
{
lean_object* v___x_67_; 
v___x_67_ = lean_obj_once(&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1, &l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1_once, _init_l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__1);
return v___x_67_;
}
else
{
lean_object* v_val_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; 
v_val_68_ = lean_ctor_get(v_x_65_, 0);
lean_inc(v_val_68_);
lean_dec_ref(v_x_65_);
v___x_69_ = lean_obj_once(&l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3, &l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3_once, _init_l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___closed__3);
v___x_70_ = lean_unsigned_to_nat(1024u);
v___x_71_ = l_Lean_instReprExpr_repr(v_val_68_, v___x_70_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_69_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = l_Repr_addAppParen(v___x_72_, v_x_66_);
return v___x_73_;
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0___boxed(lean_object* v_x_74_, lean_object* v_x_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(v_x_74_, v_x_75_);
lean_dec(v_x_75_);
return v_res_76_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__0(void){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lean_mk_string_unchecked("Lean.TransformStep.done", 23, 23);
return v___x_77_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__1(void){
_start:
{
lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_78_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__0, &l_Lean_instReprTransformStep_repr___closed__0_once, _init_l_Lean_instReprTransformStep_repr___closed__0);
v___x_79_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
return v___x_79_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__2(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = lean_box(1);
v___x_81_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__1, &l_Lean_instReprTransformStep_repr___closed__1_once, _init_l_Lean_instReprTransformStep_repr___closed__1);
v___x_82_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_82_, 0, v___x_81_);
lean_ctor_set(v___x_82_, 1, v___x_80_);
return v___x_82_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__3(void){
_start:
{
lean_object* v___x_83_; lean_object* v___x_84_; 
v___x_83_ = lean_unsigned_to_nat(2u);
v___x_84_ = lean_nat_to_int(v___x_83_);
return v___x_84_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__4(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_85_ = lean_unsigned_to_nat(1u);
v___x_86_ = lean_nat_to_int(v___x_85_);
return v___x_86_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__5(void){
_start:
{
lean_object* v___x_87_; 
v___x_87_ = lean_mk_string_unchecked("Lean.TransformStep.visit", 24, 24);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__6(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; 
v___x_88_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__5, &l_Lean_instReprTransformStep_repr___closed__5_once, _init_l_Lean_instReprTransformStep_repr___closed__5);
v___x_89_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
return v___x_89_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__7(void){
_start:
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_90_ = lean_box(1);
v___x_91_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__6, &l_Lean_instReprTransformStep_repr___closed__6_once, _init_l_Lean_instReprTransformStep_repr___closed__6);
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
lean_ctor_set(v___x_92_, 1, v___x_90_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__8(void){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lean_mk_string_unchecked("Lean.TransformStep.continue", 27, 27);
return v___x_93_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__9(void){
_start:
{
lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_94_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__8, &l_Lean_instReprTransformStep_repr___closed__8_once, _init_l_Lean_instReprTransformStep_repr___closed__8);
v___x_95_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep_repr___closed__10(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_box(1);
v___x_97_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__9, &l_Lean_instReprTransformStep_repr___closed__9_once, _init_l_Lean_instReprTransformStep_repr___closed__9);
v___x_98_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_96_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr(lean_object* v_x_99_, lean_object* v_prec_100_){
_start:
{
switch(lean_obj_tag(v_x_99_))
{
case 0:
{
lean_object* v_e_101_; lean_object* v___y_103_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_e_101_ = lean_ctor_get(v_x_99_, 0);
lean_inc_ref(v_e_101_);
lean_dec_ref(v_x_99_);
v___x_112_ = lean_unsigned_to_nat(1024u);
v___x_113_ = lean_nat_dec_le(v___x_112_, v_prec_100_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; 
v___x_114_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_103_ = v___x_114_;
goto v___jp_102_;
}
else
{
lean_object* v___x_115_; 
v___x_115_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_103_ = v___x_115_;
goto v___jp_102_;
}
v___jp_102_:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v___x_104_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__2, &l_Lean_instReprTransformStep_repr___closed__2_once, _init_l_Lean_instReprTransformStep_repr___closed__2);
v___x_105_ = lean_unsigned_to_nat(1024u);
v___x_106_ = l_Lean_instReprExpr_repr(v_e_101_, v___x_105_);
v___x_107_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_107_, 0, v___x_104_);
lean_ctor_set(v___x_107_, 1, v___x_106_);
lean_inc(v___y_103_);
v___x_108_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_108_, 0, v___y_103_);
lean_ctor_set(v___x_108_, 1, v___x_107_);
v___x_109_ = 0;
v___x_110_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_110_, 0, v___x_108_);
lean_ctor_set_uint8(v___x_110_, sizeof(void*)*1, v___x_109_);
v___x_111_ = l_Repr_addAppParen(v___x_110_, v_prec_100_);
return v___x_111_;
}
}
case 1:
{
lean_object* v_e_116_; lean_object* v___y_118_; lean_object* v___x_127_; uint8_t v___x_128_; 
v_e_116_ = lean_ctor_get(v_x_99_, 0);
lean_inc_ref(v_e_116_);
lean_dec_ref(v_x_99_);
v___x_127_ = lean_unsigned_to_nat(1024u);
v___x_128_ = lean_nat_dec_le(v___x_127_, v_prec_100_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; 
v___x_129_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_118_ = v___x_129_;
goto v___jp_117_;
}
else
{
lean_object* v___x_130_; 
v___x_130_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_118_ = v___x_130_;
goto v___jp_117_;
}
v___jp_117_:
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_119_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__7, &l_Lean_instReprTransformStep_repr___closed__7_once, _init_l_Lean_instReprTransformStep_repr___closed__7);
v___x_120_ = lean_unsigned_to_nat(1024u);
v___x_121_ = l_Lean_instReprExpr_repr(v_e_116_, v___x_120_);
v___x_122_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
lean_inc(v___y_118_);
v___x_123_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_123_, 0, v___y_118_);
lean_ctor_set(v___x_123_, 1, v___x_122_);
v___x_124_ = 0;
v___x_125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_125_, 0, v___x_123_);
lean_ctor_set_uint8(v___x_125_, sizeof(void*)*1, v___x_124_);
v___x_126_ = l_Repr_addAppParen(v___x_125_, v_prec_100_);
return v___x_126_;
}
}
default: 
{
lean_object* v_e_x3f_131_; lean_object* v___y_133_; lean_object* v___x_142_; uint8_t v___x_143_; 
v_e_x3f_131_ = lean_ctor_get(v_x_99_, 0);
lean_inc(v_e_x3f_131_);
lean_dec_ref(v_x_99_);
v___x_142_ = lean_unsigned_to_nat(1024u);
v___x_143_ = lean_nat_dec_le(v___x_142_, v_prec_100_);
if (v___x_143_ == 0)
{
lean_object* v___x_144_; 
v___x_144_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__3, &l_Lean_instReprTransformStep_repr___closed__3_once, _init_l_Lean_instReprTransformStep_repr___closed__3);
v___y_133_ = v___x_144_;
goto v___jp_132_;
}
else
{
lean_object* v___x_145_; 
v___x_145_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__4, &l_Lean_instReprTransformStep_repr___closed__4_once, _init_l_Lean_instReprTransformStep_repr___closed__4);
v___y_133_ = v___x_145_;
goto v___jp_132_;
}
v___jp_132_:
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_134_ = lean_obj_once(&l_Lean_instReprTransformStep_repr___closed__10, &l_Lean_instReprTransformStep_repr___closed__10_once, _init_l_Lean_instReprTransformStep_repr___closed__10);
v___x_135_ = lean_unsigned_to_nat(1024u);
v___x_136_ = l_Option_repr___at___00Lean_instReprTransformStep_repr_spec__0(v_e_x3f_131_, v___x_135_);
v___x_137_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_137_, 0, v___x_134_);
lean_ctor_set(v___x_137_, 1, v___x_136_);
lean_inc(v___y_133_);
v___x_138_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_138_, 0, v___y_133_);
lean_ctor_set(v___x_138_, 1, v___x_137_);
v___x_139_ = 0;
v___x_140_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_140_, 0, v___x_138_);
lean_ctor_set_uint8(v___x_140_, sizeof(void*)*1, v___x_139_);
v___x_141_ = l_Repr_addAppParen(v___x_140_, v_prec_100_);
return v___x_141_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTransformStep_repr___boxed(lean_object* v_x_146_, lean_object* v_prec_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lean_instReprTransformStep_repr(v_x_146_, v_prec_147_);
lean_dec(v_prec_147_);
return v_res_148_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep___closed__0(void){
_start:
{
lean_object* v___x_149_; 
v___x_149_ = lean_alloc_closure((void*)(l_Lean_instReprTransformStep_repr___boxed), 2, 0);
return v___x_149_;
}
}
static lean_object* _init_l_Lean_instReprTransformStep(void){
_start:
{
lean_object* v___x_150_; 
v___x_150_ = lean_obj_once(&l_Lean_instReprTransformStep___closed__0, &l_Lean_instReprTransformStep___closed__0_once, _init_l_Lean_instReprTransformStep___closed__0);
return v___x_150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0(lean_object* v_toApplicative_151_, lean_object* v_a_152_, lean_object* v_a_153_){
_start:
{
lean_object* v_toPure_154_; lean_object* v___x_155_; 
v_toPure_154_ = lean_ctor_get(v_toApplicative_151_, 1);
lean_inc(v_toPure_154_);
lean_dec_ref(v_toApplicative_151_);
v___x_155_ = lean_apply_2(v_toPure_154_, lean_box(0), v_a_152_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1(lean_object* v___x_156_, lean_object* v___x_157_, lean_object* v_e_158_, lean_object* v_a_159_, lean_object* v_s_160_){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; 
v___x_161_ = lean_box(0);
v___x_162_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_156_, v___x_157_, v_s_160_, v_e_158_, v_a_159_);
v___x_163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_163_, 0, v___x_161_);
lean_ctor_set(v___x_163_, 1, v___x_162_);
return v___x_163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(lean_object* v_toApplicative_164_, lean_object* v___x_165_, lean_object* v___x_166_, lean_object* v_e_167_, lean_object* v_a_168_, lean_object* v_x_169_, lean_object* v_toBind_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___f_172_; lean_object* v___f_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; 
lean_inc_ref(v_a_171_);
v___f_172_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__0), 3, 2);
lean_closure_set(v___f_172_, 0, v_toApplicative_164_);
lean_closure_set(v___f_172_, 1, v_a_171_);
v___f_173_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__1), 5, 4);
lean_closure_set(v___f_173_, 0, v___x_165_);
lean_closure_set(v___f_173_, 1, v___x_166_);
lean_closure_set(v___f_173_, 2, v_e_167_);
lean_closure_set(v___f_173_, 3, v_a_171_);
lean_inc(v_a_168_);
v___x_174_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_modifyGetUnsafe___boxed), 6, 5);
lean_closure_set(v___x_174_, 0, lean_box(0));
lean_closure_set(v___x_174_, 1, lean_box(0));
lean_closure_set(v___x_174_, 2, lean_box(0));
lean_closure_set(v___x_174_, 3, v_a_168_);
lean_closure_set(v___x_174_, 4, v___f_173_);
v___x_175_ = lean_apply_2(v_x_169_, lean_box(0), v___x_174_);
v___x_176_ = lean_apply_4(v_toBind_170_, lean_box(0), lean_box(0), v___x_175_, v___f_172_);
return v___x_176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed(lean_object* v_toApplicative_177_, lean_object* v___x_178_, lean_object* v___x_179_, lean_object* v_e_180_, lean_object* v_a_181_, lean_object* v_x_182_, lean_object* v_toBind_183_, lean_object* v_a_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2(v_toApplicative_177_, v___x_178_, v___x_179_, v_e_180_, v_a_181_, v_x_182_, v_toBind_183_, v_a_184_);
lean_dec(v_a_181_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(lean_object* v_toApplicative_186_, lean_object* v___x_187_, lean_object* v___x_188_, lean_object* v_e_189_, lean_object* v_a_190_){
_start:
{
lean_object* v_toPure_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v_toPure_191_ = lean_ctor_get(v_toApplicative_186_, 1);
lean_inc(v_toPure_191_);
lean_dec_ref(v_toApplicative_186_);
v___x_192_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_187_, v___x_188_, v_a_190_, v_e_189_);
v___x_193_ = lean_apply_2(v_toPure_191_, lean_box(0), v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed(lean_object* v_toApplicative_194_, lean_object* v___x_195_, lean_object* v___x_196_, lean_object* v_e_197_, lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3(v_toApplicative_194_, v___x_195_, v___x_196_, v_e_197_, v_a_198_);
lean_dec_ref(v_a_198_);
return v_res_199_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0(void){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = lean_mk_string_unchecked("transform", 9, 9);
return v___x_200_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__1(void){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0);
v___x_202_ = lean_alloc_closure((void*)(l_Lean_Core_checkSystem___boxed), 4, 1);
lean_closure_set(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19(lean_object* v_inst_203_, lean_object* v_x_204_, lean_object* v___x_205_, lean_object* v___x_206_, lean_object* v_inst_207_, lean_object* v___f_208_, lean_object* v___x_209_, lean_object* v___x_210_, lean_object* v_a_211_, lean_object* v_toBind_212_, lean_object* v___f_213_, lean_object* v_toApplicative_214_, lean_object* v_a_215_){
_start:
{
if (lean_obj_tag(v_a_215_) == 0)
{
lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_2445__overap_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
lean_dec_ref(v_toApplicative_214_);
v___x_216_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__1);
v___x_217_ = lean_apply_2(v_inst_203_, lean_box(0), v___x_216_);
lean_inc_ref(v___x_206_);
lean_inc_ref(v___x_205_);
v___x_218_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 9);
lean_closure_set(v___x_218_, 0, lean_box(0));
lean_closure_set(v___x_218_, 1, lean_box(0));
lean_closure_set(v___x_218_, 2, lean_box(0));
lean_closure_set(v___x_218_, 3, lean_box(0));
lean_closure_set(v___x_218_, 4, v_x_204_);
lean_closure_set(v___x_218_, 5, v___x_205_);
lean_closure_set(v___x_218_, 6, v___x_206_);
lean_closure_set(v___x_218_, 7, lean_box(0));
lean_closure_set(v___x_218_, 8, v___x_217_);
v___x_219_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___boxed), 13, 12);
lean_closure_set(v___x_219_, 0, lean_box(0));
lean_closure_set(v___x_219_, 1, lean_box(0));
lean_closure_set(v___x_219_, 2, lean_box(0));
lean_closure_set(v___x_219_, 3, lean_box(0));
lean_closure_set(v___x_219_, 4, v_x_204_);
lean_closure_set(v___x_219_, 5, v___x_205_);
lean_closure_set(v___x_219_, 6, v___x_206_);
lean_closure_set(v___x_219_, 7, v_inst_207_);
lean_closure_set(v___x_219_, 8, lean_box(0));
lean_closure_set(v___x_219_, 9, lean_box(0));
lean_closure_set(v___x_219_, 10, v___x_218_);
lean_closure_set(v___x_219_, 11, v___f_208_);
v___x_2445__overap_220_ = l_Lean_Core_withIncRecDepth___redArg(v___x_209_, v___x_210_, v___x_219_);
lean_inc(v_a_211_);
v___x_221_ = lean_apply_1(v___x_2445__overap_220_, v_a_211_);
v___x_222_ = lean_apply_4(v_toBind_212_, lean_box(0), lean_box(0), v___x_221_, v___f_213_);
return v___x_222_;
}
else
{
lean_object* v_val_223_; lean_object* v_toPure_224_; lean_object* v___x_225_; 
lean_dec(v___f_213_);
lean_dec(v_toBind_212_);
lean_dec_ref(v___x_210_);
lean_dec_ref(v___x_209_);
lean_dec(v___f_208_);
lean_dec_ref(v_inst_207_);
lean_dec_ref(v___x_206_);
lean_dec_ref(v___x_205_);
lean_dec(v_inst_203_);
v_val_223_ = lean_ctor_get(v_a_215_, 0);
lean_inc(v_val_223_);
lean_dec_ref(v_a_215_);
v_toPure_224_ = lean_ctor_get(v_toApplicative_214_, 1);
lean_inc(v_toPure_224_);
lean_dec_ref(v_toApplicative_214_);
v___x_225_ = lean_apply_2(v_toPure_224_, lean_box(0), v_val_223_);
return v___x_225_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___boxed(lean_object* v_inst_226_, lean_object* v_x_227_, lean_object* v___x_228_, lean_object* v___x_229_, lean_object* v_inst_230_, lean_object* v___f_231_, lean_object* v___x_232_, lean_object* v___x_233_, lean_object* v_a_234_, lean_object* v_toBind_235_, lean_object* v___f_236_, lean_object* v_toApplicative_237_, lean_object* v_a_238_){
_start:
{
lean_object* v_res_239_; 
v_res_239_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19(v_inst_226_, v_x_227_, v___x_228_, v___x_229_, v_inst_230_, v___f_231_, v___x_232_, v___x_233_, v_a_234_, v_toBind_235_, v___f_236_, v_toApplicative_237_, v_a_238_);
lean_dec(v_a_234_);
return v_res_239_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0(void){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = lean_alloc_closure((void*)(l_Lean_ExprStructEq_beq___boxed), 2, 0);
return v___x_240_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1(void){
_start:
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_closure((void*)(l_Lean_ExprStructEq_hash___boxed), 1, 0);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(lean_object* v_a_242_, lean_object* v_inst_243_, lean_object* v_inst_244_, lean_object* v_inst_245_, lean_object* v_pre_246_, lean_object* v_post_247_, lean_object* v_x_248_, lean_object* v_x_249_, lean_object* v___y_250_, lean_object* v_a_251_){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; 
v___x_252_ = l_Lean_mkAppN(v_a_242_, v_a_251_);
v___x_253_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_243_, v_inst_244_, v_inst_245_, v_pre_246_, v_post_247_, v_x_248_, v_x_249_, v___x_252_, v___y_250_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed(lean_object* v_a_254_, lean_object* v_inst_255_, lean_object* v_inst_256_, lean_object* v_inst_257_, lean_object* v_pre_258_, lean_object* v_post_259_, lean_object* v_x_260_, lean_object* v_x_261_, lean_object* v___y_262_, lean_object* v_a_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4(v_a_254_, v_inst_255_, v_inst_256_, v_inst_257_, v_pre_258_, v_post_259_, v_x_260_, v_x_261_, v___y_262_, v_a_263_);
lean_dec_ref(v_a_263_);
lean_dec(v___y_262_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed(lean_object* v_inst_265_, lean_object* v_inst_266_, lean_object* v_inst_267_, lean_object* v_pre_268_, lean_object* v_post_269_, lean_object* v_x_270_, lean_object* v_x_271_, lean_object* v_e_272_, lean_object* v_a_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_265_, v_inst_266_, v_inst_267_, v_pre_268_, v_post_269_, v_x_270_, v_x_271_, v_e_272_, v_a_273_);
lean_dec(v_a_273_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(lean_object* v_inst_275_, lean_object* v_inst_276_, lean_object* v_inst_277_, lean_object* v_pre_278_, lean_object* v_post_279_, lean_object* v_x_280_, lean_object* v_x_281_, lean_object* v___y_282_, lean_object* v_args_283_, lean_object* v___x_284_, lean_object* v_toBind_285_, lean_object* v_a_286_){
_start:
{
lean_object* v___f_287_; lean_object* v___x_288_; size_t v_sz_289_; size_t v___x_290_; lean_object* v___x_2175__overap_291_; lean_object* v___x_292_; lean_object* v___x_293_; 
lean_inc_n(v___y_282_, 2);
lean_inc(v_x_281_);
lean_inc(v_post_279_);
lean_inc(v_pre_278_);
lean_inc_ref(v_inst_277_);
lean_inc(v_inst_276_);
lean_inc_ref(v_inst_275_);
v___f_287_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__4___boxed), 10, 9);
lean_closure_set(v___f_287_, 0, v_a_286_);
lean_closure_set(v___f_287_, 1, v_inst_275_);
lean_closure_set(v___f_287_, 2, v_inst_276_);
lean_closure_set(v___f_287_, 3, v_inst_277_);
lean_closure_set(v___f_287_, 4, v_pre_278_);
lean_closure_set(v___f_287_, 5, v_post_279_);
lean_closure_set(v___f_287_, 6, v_x_280_);
lean_closure_set(v___f_287_, 7, v_x_281_);
lean_closure_set(v___f_287_, 8, v___y_282_);
v___x_288_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___boxed), 9, 7);
lean_closure_set(v___x_288_, 0, v_inst_275_);
lean_closure_set(v___x_288_, 1, v_inst_276_);
lean_closure_set(v___x_288_, 2, v_inst_277_);
lean_closure_set(v___x_288_, 3, v_pre_278_);
lean_closure_set(v___x_288_, 4, v_post_279_);
lean_closure_set(v___x_288_, 5, v_x_280_);
lean_closure_set(v___x_288_, 6, v_x_281_);
v_sz_289_ = lean_array_size(v_args_283_);
v___x_290_ = ((size_t)0ULL);
v___x_2175__overap_291_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_284_, v___x_288_, v_sz_289_, v___x_290_, v_args_283_);
v___x_292_ = lean_apply_1(v___x_2175__overap_291_, v___y_282_);
v___x_293_ = lean_apply_4(v_toBind_285_, lean_box(0), lean_box(0), v___x_292_, v___f_287_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed(lean_object* v_inst_294_, lean_object* v_inst_295_, lean_object* v_inst_296_, lean_object* v_pre_297_, lean_object* v_post_298_, lean_object* v_x_299_, lean_object* v_x_300_, lean_object* v___y_301_, lean_object* v_args_302_, lean_object* v___x_303_, lean_object* v_toBind_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5(v_inst_294_, v_inst_295_, v_inst_296_, v_pre_297_, v_post_298_, v_x_299_, v_x_300_, v___y_301_, v_args_302_, v___x_303_, v_toBind_304_, v_a_305_);
lean_dec(v___y_301_);
return v_res_306_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(lean_object* v_inst_307_, lean_object* v_inst_308_, lean_object* v_inst_309_, lean_object* v_pre_310_, lean_object* v_post_311_, lean_object* v_x_312_, lean_object* v_x_313_, lean_object* v___x_314_, lean_object* v_toBind_315_, lean_object* v_f_316_, lean_object* v_args_317_, lean_object* v___y_318_){
_start:
{
lean_object* v___f_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
lean_inc(v_toBind_315_);
lean_inc(v___y_318_);
lean_inc(v_x_313_);
lean_inc(v_post_311_);
lean_inc(v_pre_310_);
lean_inc_ref(v_inst_309_);
lean_inc(v_inst_308_);
lean_inc_ref(v_inst_307_);
v___f_319_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__5___boxed), 12, 11);
lean_closure_set(v___f_319_, 0, v_inst_307_);
lean_closure_set(v___f_319_, 1, v_inst_308_);
lean_closure_set(v___f_319_, 2, v_inst_309_);
lean_closure_set(v___f_319_, 3, v_pre_310_);
lean_closure_set(v___f_319_, 4, v_post_311_);
lean_closure_set(v___f_319_, 5, v_x_312_);
lean_closure_set(v___f_319_, 6, v_x_313_);
lean_closure_set(v___f_319_, 7, v___y_318_);
lean_closure_set(v___f_319_, 8, v_args_317_);
lean_closure_set(v___f_319_, 9, v___x_314_);
lean_closure_set(v___f_319_, 10, v_toBind_315_);
v___x_320_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_307_, v_inst_308_, v_inst_309_, v_pre_310_, v_post_311_, v_x_312_, v_x_313_, v_f_316_, v___y_318_);
v___x_321_ = lean_apply_4(v_toBind_315_, lean_box(0), lean_box(0), v___x_320_, v___f_319_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed(lean_object* v_inst_322_, lean_object* v_inst_323_, lean_object* v_inst_324_, lean_object* v_pre_325_, lean_object* v_post_326_, lean_object* v_x_327_, lean_object* v_x_328_, lean_object* v___x_329_, lean_object* v_toBind_330_, lean_object* v_f_331_, lean_object* v_args_332_, lean_object* v___y_333_){
_start:
{
lean_object* v_res_334_; 
v_res_334_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6(v_inst_322_, v_inst_323_, v_inst_324_, v_pre_325_, v_post_326_, v_x_327_, v_x_328_, v___x_329_, v_toBind_330_, v_f_331_, v_args_332_, v___y_333_);
lean_dec(v___y_333_);
return v_res_334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed(lean_object* v_inst_335_, lean_object* v_inst_336_, lean_object* v_inst_337_, lean_object* v_pre_338_, lean_object* v_post_339_, lean_object* v_x_340_, lean_object* v_x_341_, lean_object* v___y_342_, lean_object* v_a_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(v_inst_335_, v_inst_336_, v_inst_337_, v_pre_338_, v_post_339_, v_x_340_, v_x_341_, v___y_342_, v_a_343_);
lean_dec(v___y_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(lean_object* v_binderName_345_, lean_object* v_a_346_, uint8_t v_binderInfo_347_, lean_object* v_inst_348_, lean_object* v_inst_349_, lean_object* v_inst_350_, lean_object* v_pre_351_, lean_object* v_post_352_, lean_object* v_x_353_, lean_object* v_x_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v_binderType_357_, lean_object* v_body_358_, lean_object* v_a_359_){
_start:
{
uint8_t v___y_361_; size_t v___x_368_; size_t v___x_369_; uint8_t v___x_370_; 
v___x_368_ = lean_ptr_addr(v_binderType_357_);
v___x_369_ = lean_ptr_addr(v_a_346_);
v___x_370_ = lean_usize_dec_eq(v___x_368_, v___x_369_);
if (v___x_370_ == 0)
{
v___y_361_ = v___x_370_;
goto v___jp_360_;
}
else
{
size_t v___x_371_; size_t v___x_372_; uint8_t v___x_373_; 
v___x_371_ = lean_ptr_addr(v_body_358_);
v___x_372_ = lean_ptr_addr(v_a_359_);
v___x_373_ = lean_usize_dec_eq(v___x_371_, v___x_372_);
v___y_361_ = v___x_373_;
goto v___jp_360_;
}
v___jp_360_:
{
if (v___y_361_ == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; 
lean_dec_ref(v___y_356_);
v___x_362_ = l_Lean_Expr_forallE___override(v_binderName_345_, v_a_346_, v_a_359_, v_binderInfo_347_);
v___x_363_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_348_, v_inst_349_, v_inst_350_, v_pre_351_, v_post_352_, v_x_353_, v_x_354_, v___x_362_, v___y_355_);
return v___x_363_;
}
else
{
uint8_t v___x_364_; 
v___x_364_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_347_, v_binderInfo_347_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
lean_dec_ref(v___y_356_);
v___x_365_ = l_Lean_Expr_forallE___override(v_binderName_345_, v_a_346_, v_a_359_, v_binderInfo_347_);
v___x_366_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_348_, v_inst_349_, v_inst_350_, v_pre_351_, v_post_352_, v_x_353_, v_x_354_, v___x_365_, v___y_355_);
return v___x_366_;
}
else
{
lean_object* v___x_367_; 
lean_dec_ref(v_a_359_);
lean_dec_ref(v_a_346_);
lean_dec(v_binderName_345_);
v___x_367_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_348_, v_inst_349_, v_inst_350_, v_pre_351_, v_post_352_, v_x_353_, v_x_354_, v___y_356_, v___y_355_);
return v___x_367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed(lean_object* v_binderName_374_, lean_object* v_a_375_, lean_object* v_binderInfo_376_, lean_object* v_inst_377_, lean_object* v_inst_378_, lean_object* v_inst_379_, lean_object* v_pre_380_, lean_object* v_post_381_, lean_object* v_x_382_, lean_object* v_x_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v_binderType_386_, lean_object* v_body_387_, lean_object* v_a_388_){
_start:
{
uint8_t v_binderInfo_2768__boxed_389_; lean_object* v_res_390_; 
v_binderInfo_2768__boxed_389_ = lean_unbox(v_binderInfo_376_);
v_res_390_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8(v_binderName_374_, v_a_375_, v_binderInfo_2768__boxed_389_, v_inst_377_, v_inst_378_, v_inst_379_, v_pre_380_, v_post_381_, v_x_382_, v_x_383_, v___y_384_, v___y_385_, v_binderType_386_, v_body_387_, v_a_388_);
lean_dec_ref(v_body_387_);
lean_dec_ref(v_binderType_386_);
lean_dec(v___y_384_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(lean_object* v_binderName_391_, uint8_t v_binderInfo_392_, lean_object* v_inst_393_, lean_object* v_inst_394_, lean_object* v_inst_395_, lean_object* v_pre_396_, lean_object* v_post_397_, lean_object* v_x_398_, lean_object* v_x_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v_binderType_402_, lean_object* v_body_403_, lean_object* v_toBind_404_, lean_object* v_a_405_){
_start:
{
lean_object* v___x_406_; lean_object* v___f_407_; lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_406_ = lean_box(v_binderInfo_392_);
lean_inc_ref(v_body_403_);
lean_inc(v___y_400_);
lean_inc(v_x_399_);
lean_inc(v_post_397_);
lean_inc(v_pre_396_);
lean_inc_ref(v_inst_395_);
lean_inc(v_inst_394_);
lean_inc_ref(v_inst_393_);
v___f_407_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__8___boxed), 15, 14);
lean_closure_set(v___f_407_, 0, v_binderName_391_);
lean_closure_set(v___f_407_, 1, v_a_405_);
lean_closure_set(v___f_407_, 2, v___x_406_);
lean_closure_set(v___f_407_, 3, v_inst_393_);
lean_closure_set(v___f_407_, 4, v_inst_394_);
lean_closure_set(v___f_407_, 5, v_inst_395_);
lean_closure_set(v___f_407_, 6, v_pre_396_);
lean_closure_set(v___f_407_, 7, v_post_397_);
lean_closure_set(v___f_407_, 8, v_x_398_);
lean_closure_set(v___f_407_, 9, v_x_399_);
lean_closure_set(v___f_407_, 10, v___y_400_);
lean_closure_set(v___f_407_, 11, v___y_401_);
lean_closure_set(v___f_407_, 12, v_binderType_402_);
lean_closure_set(v___f_407_, 13, v_body_403_);
v___x_408_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_393_, v_inst_394_, v_inst_395_, v_pre_396_, v_post_397_, v_x_398_, v_x_399_, v_body_403_, v___y_400_);
v___x_409_ = lean_apply_4(v_toBind_404_, lean_box(0), lean_box(0), v___x_408_, v___f_407_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed(lean_object* v_binderName_410_, lean_object* v_binderInfo_411_, lean_object* v_inst_412_, lean_object* v_inst_413_, lean_object* v_inst_414_, lean_object* v_pre_415_, lean_object* v_post_416_, lean_object* v_x_417_, lean_object* v_x_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v_binderType_421_, lean_object* v_body_422_, lean_object* v_toBind_423_, lean_object* v_a_424_){
_start:
{
uint8_t v_binderInfo_2629__boxed_425_; lean_object* v_res_426_; 
v_binderInfo_2629__boxed_425_ = lean_unbox(v_binderInfo_411_);
v_res_426_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9(v_binderName_410_, v_binderInfo_2629__boxed_425_, v_inst_412_, v_inst_413_, v_inst_414_, v_pre_415_, v_post_416_, v_x_417_, v_x_418_, v___y_419_, v___y_420_, v_binderType_421_, v_body_422_, v_toBind_423_, v_a_424_);
lean_dec(v___y_419_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(lean_object* v_binderName_427_, lean_object* v_a_428_, uint8_t v_binderInfo_429_, lean_object* v_inst_430_, lean_object* v_inst_431_, lean_object* v_inst_432_, lean_object* v_pre_433_, lean_object* v_post_434_, lean_object* v_x_435_, lean_object* v_x_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v_binderType_439_, lean_object* v_body_440_, lean_object* v_a_441_){
_start:
{
uint8_t v___y_443_; size_t v___x_450_; size_t v___x_451_; uint8_t v___x_452_; 
v___x_450_ = lean_ptr_addr(v_binderType_439_);
v___x_451_ = lean_ptr_addr(v_a_428_);
v___x_452_ = lean_usize_dec_eq(v___x_450_, v___x_451_);
if (v___x_452_ == 0)
{
v___y_443_ = v___x_452_;
goto v___jp_442_;
}
else
{
size_t v___x_453_; size_t v___x_454_; uint8_t v___x_455_; 
v___x_453_ = lean_ptr_addr(v_body_440_);
v___x_454_ = lean_ptr_addr(v_a_441_);
v___x_455_ = lean_usize_dec_eq(v___x_453_, v___x_454_);
v___y_443_ = v___x_455_;
goto v___jp_442_;
}
v___jp_442_:
{
if (v___y_443_ == 0)
{
lean_object* v___x_444_; lean_object* v___x_445_; 
lean_dec_ref(v___y_438_);
v___x_444_ = l_Lean_Expr_lam___override(v_binderName_427_, v_a_428_, v_a_441_, v_binderInfo_429_);
v___x_445_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_430_, v_inst_431_, v_inst_432_, v_pre_433_, v_post_434_, v_x_435_, v_x_436_, v___x_444_, v___y_437_);
return v___x_445_;
}
else
{
uint8_t v___x_446_; 
v___x_446_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_429_, v_binderInfo_429_);
if (v___x_446_ == 0)
{
lean_object* v___x_447_; lean_object* v___x_448_; 
lean_dec_ref(v___y_438_);
v___x_447_ = l_Lean_Expr_lam___override(v_binderName_427_, v_a_428_, v_a_441_, v_binderInfo_429_);
v___x_448_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_430_, v_inst_431_, v_inst_432_, v_pre_433_, v_post_434_, v_x_435_, v_x_436_, v___x_447_, v___y_437_);
return v___x_448_;
}
else
{
lean_object* v___x_449_; 
lean_dec_ref(v_a_441_);
lean_dec_ref(v_a_428_);
lean_dec(v_binderName_427_);
v___x_449_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_430_, v_inst_431_, v_inst_432_, v_pre_433_, v_post_434_, v_x_435_, v_x_436_, v___y_438_, v___y_437_);
return v___x_449_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed(lean_object* v_binderName_456_, lean_object* v_a_457_, lean_object* v_binderInfo_458_, lean_object* v_inst_459_, lean_object* v_inst_460_, lean_object* v_inst_461_, lean_object* v_pre_462_, lean_object* v_post_463_, lean_object* v_x_464_, lean_object* v_x_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v_binderType_468_, lean_object* v_body_469_, lean_object* v_a_470_){
_start:
{
uint8_t v_binderInfo_2743__boxed_471_; lean_object* v_res_472_; 
v_binderInfo_2743__boxed_471_ = lean_unbox(v_binderInfo_458_);
v_res_472_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10(v_binderName_456_, v_a_457_, v_binderInfo_2743__boxed_471_, v_inst_459_, v_inst_460_, v_inst_461_, v_pre_462_, v_post_463_, v_x_464_, v_x_465_, v___y_466_, v___y_467_, v_binderType_468_, v_body_469_, v_a_470_);
lean_dec_ref(v_body_469_);
lean_dec_ref(v_binderType_468_);
lean_dec(v___y_466_);
return v_res_472_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(lean_object* v_binderName_473_, uint8_t v_binderInfo_474_, lean_object* v_inst_475_, lean_object* v_inst_476_, lean_object* v_inst_477_, lean_object* v_pre_478_, lean_object* v_post_479_, lean_object* v_x_480_, lean_object* v_x_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v_binderType_484_, lean_object* v_body_485_, lean_object* v_toBind_486_, lean_object* v_a_487_){
_start:
{
lean_object* v___x_488_; lean_object* v___f_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_488_ = lean_box(v_binderInfo_474_);
lean_inc_ref(v_body_485_);
lean_inc(v___y_482_);
lean_inc(v_x_481_);
lean_inc(v_post_479_);
lean_inc(v_pre_478_);
lean_inc_ref(v_inst_477_);
lean_inc(v_inst_476_);
lean_inc_ref(v_inst_475_);
v___f_489_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__10___boxed), 15, 14);
lean_closure_set(v___f_489_, 0, v_binderName_473_);
lean_closure_set(v___f_489_, 1, v_a_487_);
lean_closure_set(v___f_489_, 2, v___x_488_);
lean_closure_set(v___f_489_, 3, v_inst_475_);
lean_closure_set(v___f_489_, 4, v_inst_476_);
lean_closure_set(v___f_489_, 5, v_inst_477_);
lean_closure_set(v___f_489_, 6, v_pre_478_);
lean_closure_set(v___f_489_, 7, v_post_479_);
lean_closure_set(v___f_489_, 8, v_x_480_);
lean_closure_set(v___f_489_, 9, v_x_481_);
lean_closure_set(v___f_489_, 10, v___y_482_);
lean_closure_set(v___f_489_, 11, v___y_483_);
lean_closure_set(v___f_489_, 12, v_binderType_484_);
lean_closure_set(v___f_489_, 13, v_body_485_);
v___x_490_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_475_, v_inst_476_, v_inst_477_, v_pre_478_, v_post_479_, v_x_480_, v_x_481_, v_body_485_, v___y_482_);
v___x_491_ = lean_apply_4(v_toBind_486_, lean_box(0), lean_box(0), v___x_490_, v___f_489_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed(lean_object* v_binderName_492_, lean_object* v_binderInfo_493_, lean_object* v_inst_494_, lean_object* v_inst_495_, lean_object* v_inst_496_, lean_object* v_pre_497_, lean_object* v_post_498_, lean_object* v_x_499_, lean_object* v_x_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v_binderType_503_, lean_object* v_body_504_, lean_object* v_toBind_505_, lean_object* v_a_506_){
_start:
{
uint8_t v_binderInfo_2575__boxed_507_; lean_object* v_res_508_; 
v_binderInfo_2575__boxed_507_ = lean_unbox(v_binderInfo_493_);
v_res_508_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11(v_binderName_492_, v_binderInfo_2575__boxed_507_, v_inst_494_, v_inst_495_, v_inst_496_, v_pre_497_, v_post_498_, v_x_499_, v_x_500_, v___y_501_, v___y_502_, v_binderType_503_, v_body_504_, v_toBind_505_, v_a_506_);
lean_dec(v___y_501_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(lean_object* v_declName_509_, lean_object* v_a_510_, lean_object* v_a_511_, uint8_t v_nondep_512_, lean_object* v_inst_513_, lean_object* v_inst_514_, lean_object* v_inst_515_, lean_object* v_pre_516_, lean_object* v_post_517_, lean_object* v_x_518_, lean_object* v_x_519_, lean_object* v___y_520_, lean_object* v_body_521_, lean_object* v___y_522_, lean_object* v_type_523_, lean_object* v_value_524_, lean_object* v_a_525_){
_start:
{
uint8_t v___y_527_; size_t v___x_536_; size_t v___x_537_; uint8_t v___x_538_; 
v___x_536_ = lean_ptr_addr(v_type_523_);
v___x_537_ = lean_ptr_addr(v_a_510_);
v___x_538_ = lean_usize_dec_eq(v___x_536_, v___x_537_);
if (v___x_538_ == 0)
{
v___y_527_ = v___x_538_;
goto v___jp_526_;
}
else
{
size_t v___x_539_; size_t v___x_540_; uint8_t v___x_541_; 
v___x_539_ = lean_ptr_addr(v_value_524_);
v___x_540_ = lean_ptr_addr(v_a_511_);
v___x_541_ = lean_usize_dec_eq(v___x_539_, v___x_540_);
v___y_527_ = v___x_541_;
goto v___jp_526_;
}
v___jp_526_:
{
if (v___y_527_ == 0)
{
lean_object* v___x_528_; lean_object* v___x_529_; 
lean_dec_ref(v___y_522_);
v___x_528_ = l_Lean_Expr_letE___override(v_declName_509_, v_a_510_, v_a_511_, v_a_525_, v_nondep_512_);
v___x_529_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_513_, v_inst_514_, v_inst_515_, v_pre_516_, v_post_517_, v_x_518_, v_x_519_, v___x_528_, v___y_520_);
return v___x_529_;
}
else
{
size_t v___x_530_; size_t v___x_531_; uint8_t v___x_532_; 
v___x_530_ = lean_ptr_addr(v_body_521_);
v___x_531_ = lean_ptr_addr(v_a_525_);
v___x_532_ = lean_usize_dec_eq(v___x_530_, v___x_531_);
if (v___x_532_ == 0)
{
lean_object* v___x_533_; lean_object* v___x_534_; 
lean_dec_ref(v___y_522_);
v___x_533_ = l_Lean_Expr_letE___override(v_declName_509_, v_a_510_, v_a_511_, v_a_525_, v_nondep_512_);
v___x_534_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_513_, v_inst_514_, v_inst_515_, v_pre_516_, v_post_517_, v_x_518_, v_x_519_, v___x_533_, v___y_520_);
return v___x_534_;
}
else
{
lean_object* v___x_535_; 
lean_dec_ref(v_a_525_);
lean_dec_ref(v_a_511_);
lean_dec_ref(v_a_510_);
lean_dec(v_declName_509_);
v___x_535_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_513_, v_inst_514_, v_inst_515_, v_pre_516_, v_post_517_, v_x_518_, v_x_519_, v___y_522_, v___y_520_);
return v___x_535_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed(lean_object** _args){
lean_object* v_declName_542_ = _args[0];
lean_object* v_a_543_ = _args[1];
lean_object* v_a_544_ = _args[2];
lean_object* v_nondep_545_ = _args[3];
lean_object* v_inst_546_ = _args[4];
lean_object* v_inst_547_ = _args[5];
lean_object* v_inst_548_ = _args[6];
lean_object* v_pre_549_ = _args[7];
lean_object* v_post_550_ = _args[8];
lean_object* v_x_551_ = _args[9];
lean_object* v_x_552_ = _args[10];
lean_object* v___y_553_ = _args[11];
lean_object* v_body_554_ = _args[12];
lean_object* v___y_555_ = _args[13];
lean_object* v_type_556_ = _args[14];
lean_object* v_value_557_ = _args[15];
lean_object* v_a_558_ = _args[16];
_start:
{
uint8_t v_nondep_2793__boxed_559_; lean_object* v_res_560_; 
v_nondep_2793__boxed_559_ = lean_unbox(v_nondep_545_);
v_res_560_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12(v_declName_542_, v_a_543_, v_a_544_, v_nondep_2793__boxed_559_, v_inst_546_, v_inst_547_, v_inst_548_, v_pre_549_, v_post_550_, v_x_551_, v_x_552_, v___y_553_, v_body_554_, v___y_555_, v_type_556_, v_value_557_, v_a_558_);
lean_dec_ref(v_value_557_);
lean_dec_ref(v_type_556_);
lean_dec_ref(v_body_554_);
lean_dec(v___y_553_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(lean_object* v_declName_561_, lean_object* v_a_562_, uint8_t v_nondep_563_, lean_object* v_inst_564_, lean_object* v_inst_565_, lean_object* v_inst_566_, lean_object* v_pre_567_, lean_object* v_post_568_, lean_object* v_x_569_, lean_object* v_x_570_, lean_object* v___y_571_, lean_object* v_body_572_, lean_object* v___y_573_, lean_object* v_type_574_, lean_object* v_value_575_, lean_object* v_toBind_576_, lean_object* v_a_577_){
_start:
{
lean_object* v___x_578_; lean_object* v___f_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_578_ = lean_box(v_nondep_563_);
lean_inc_ref(v_body_572_);
lean_inc(v___y_571_);
lean_inc(v_x_570_);
lean_inc(v_post_568_);
lean_inc(v_pre_567_);
lean_inc_ref(v_inst_566_);
lean_inc(v_inst_565_);
lean_inc_ref(v_inst_564_);
v___f_579_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__12___boxed), 17, 16);
lean_closure_set(v___f_579_, 0, v_declName_561_);
lean_closure_set(v___f_579_, 1, v_a_562_);
lean_closure_set(v___f_579_, 2, v_a_577_);
lean_closure_set(v___f_579_, 3, v___x_578_);
lean_closure_set(v___f_579_, 4, v_inst_564_);
lean_closure_set(v___f_579_, 5, v_inst_565_);
lean_closure_set(v___f_579_, 6, v_inst_566_);
lean_closure_set(v___f_579_, 7, v_pre_567_);
lean_closure_set(v___f_579_, 8, v_post_568_);
lean_closure_set(v___f_579_, 9, v_x_569_);
lean_closure_set(v___f_579_, 10, v_x_570_);
lean_closure_set(v___f_579_, 11, v___y_571_);
lean_closure_set(v___f_579_, 12, v_body_572_);
lean_closure_set(v___f_579_, 13, v___y_573_);
lean_closure_set(v___f_579_, 14, v_type_574_);
lean_closure_set(v___f_579_, 15, v_value_575_);
v___x_580_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_564_, v_inst_565_, v_inst_566_, v_pre_567_, v_post_568_, v_x_569_, v_x_570_, v_body_572_, v___y_571_);
v___x_581_ = lean_apply_4(v_toBind_576_, lean_box(0), lean_box(0), v___x_580_, v___f_579_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed(lean_object** _args){
lean_object* v_declName_582_ = _args[0];
lean_object* v_a_583_ = _args[1];
lean_object* v_nondep_584_ = _args[2];
lean_object* v_inst_585_ = _args[3];
lean_object* v_inst_586_ = _args[4];
lean_object* v_inst_587_ = _args[5];
lean_object* v_pre_588_ = _args[6];
lean_object* v_post_589_ = _args[7];
lean_object* v_x_590_ = _args[8];
lean_object* v_x_591_ = _args[9];
lean_object* v___y_592_ = _args[10];
lean_object* v_body_593_ = _args[11];
lean_object* v___y_594_ = _args[12];
lean_object* v_type_595_ = _args[13];
lean_object* v_value_596_ = _args[14];
lean_object* v_toBind_597_ = _args[15];
lean_object* v_a_598_ = _args[16];
_start:
{
uint8_t v_nondep_2589__boxed_599_; lean_object* v_res_600_; 
v_nondep_2589__boxed_599_ = lean_unbox(v_nondep_584_);
v_res_600_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13(v_declName_582_, v_a_583_, v_nondep_2589__boxed_599_, v_inst_585_, v_inst_586_, v_inst_587_, v_pre_588_, v_post_589_, v_x_590_, v_x_591_, v___y_592_, v_body_593_, v___y_594_, v_type_595_, v_value_596_, v_toBind_597_, v_a_598_);
lean_dec(v___y_592_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(lean_object* v_declName_601_, uint8_t v_nondep_602_, lean_object* v_inst_603_, lean_object* v_inst_604_, lean_object* v_inst_605_, lean_object* v_pre_606_, lean_object* v_post_607_, lean_object* v_x_608_, lean_object* v_x_609_, lean_object* v___y_610_, lean_object* v_body_611_, lean_object* v___y_612_, lean_object* v_type_613_, lean_object* v_value_614_, lean_object* v_toBind_615_, lean_object* v_a_616_){
_start:
{
lean_object* v___x_617_; lean_object* v___f_618_; lean_object* v___x_619_; lean_object* v___x_620_; 
v___x_617_ = lean_box(v_nondep_602_);
lean_inc(v_toBind_615_);
lean_inc_ref(v_value_614_);
lean_inc(v___y_610_);
lean_inc(v_x_609_);
lean_inc(v_post_607_);
lean_inc(v_pre_606_);
lean_inc_ref(v_inst_605_);
lean_inc(v_inst_604_);
lean_inc_ref(v_inst_603_);
v___f_618_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__13___boxed), 17, 16);
lean_closure_set(v___f_618_, 0, v_declName_601_);
lean_closure_set(v___f_618_, 1, v_a_616_);
lean_closure_set(v___f_618_, 2, v___x_617_);
lean_closure_set(v___f_618_, 3, v_inst_603_);
lean_closure_set(v___f_618_, 4, v_inst_604_);
lean_closure_set(v___f_618_, 5, v_inst_605_);
lean_closure_set(v___f_618_, 6, v_pre_606_);
lean_closure_set(v___f_618_, 7, v_post_607_);
lean_closure_set(v___f_618_, 8, v_x_608_);
lean_closure_set(v___f_618_, 9, v_x_609_);
lean_closure_set(v___f_618_, 10, v___y_610_);
lean_closure_set(v___f_618_, 11, v_body_611_);
lean_closure_set(v___f_618_, 12, v___y_612_);
lean_closure_set(v___f_618_, 13, v_type_613_);
lean_closure_set(v___f_618_, 14, v_value_614_);
lean_closure_set(v___f_618_, 15, v_toBind_615_);
v___x_619_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_603_, v_inst_604_, v_inst_605_, v_pre_606_, v_post_607_, v_x_608_, v_x_609_, v_value_614_, v___y_610_);
v___x_620_ = lean_apply_4(v_toBind_615_, lean_box(0), lean_box(0), v___x_619_, v___f_618_);
return v___x_620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed(lean_object* v_declName_621_, lean_object* v_nondep_622_, lean_object* v_inst_623_, lean_object* v_inst_624_, lean_object* v_inst_625_, lean_object* v_pre_626_, lean_object* v_post_627_, lean_object* v_x_628_, lean_object* v_x_629_, lean_object* v___y_630_, lean_object* v_body_631_, lean_object* v___y_632_, lean_object* v_type_633_, lean_object* v_value_634_, lean_object* v_toBind_635_, lean_object* v_a_636_){
_start:
{
uint8_t v_nondep_2604__boxed_637_; lean_object* v_res_638_; 
v_nondep_2604__boxed_637_ = lean_unbox(v_nondep_622_);
v_res_638_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14(v_declName_621_, v_nondep_2604__boxed_637_, v_inst_623_, v_inst_624_, v_inst_625_, v_pre_626_, v_post_627_, v_x_628_, v_x_629_, v___y_630_, v_body_631_, v___y_632_, v_type_633_, v_value_634_, v_toBind_635_, v_a_636_);
lean_dec(v___y_630_);
return v_res_638_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0(void){
_start:
{
lean_object* v___x_639_; lean_object* v_dummy_640_; 
v___x_639_ = lean_box(0);
v_dummy_640_ = l_Lean_Expr_sort___override(v___x_639_);
return v_dummy_640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(lean_object* v_expr_641_, lean_object* v_data_642_, lean_object* v_inst_643_, lean_object* v_inst_644_, lean_object* v_inst_645_, lean_object* v_pre_646_, lean_object* v_post_647_, lean_object* v_x_648_, lean_object* v_x_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v_a_652_){
_start:
{
size_t v___x_653_; size_t v___x_654_; uint8_t v___x_655_; 
v___x_653_ = lean_ptr_addr(v_expr_641_);
v___x_654_ = lean_ptr_addr(v_a_652_);
v___x_655_ = lean_usize_dec_eq(v___x_653_, v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; lean_object* v___x_657_; 
lean_dec_ref(v___y_651_);
v___x_656_ = l_Lean_Expr_mdata___override(v_data_642_, v_a_652_);
v___x_657_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_643_, v_inst_644_, v_inst_645_, v_pre_646_, v_post_647_, v_x_648_, v_x_649_, v___x_656_, v___y_650_);
return v___x_657_;
}
else
{
lean_object* v___x_658_; 
lean_dec_ref(v_a_652_);
lean_dec(v_data_642_);
v___x_658_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_643_, v_inst_644_, v_inst_645_, v_pre_646_, v_post_647_, v_x_648_, v_x_649_, v___y_651_, v___y_650_);
return v___x_658_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed(lean_object* v_expr_659_, lean_object* v_data_660_, lean_object* v_inst_661_, lean_object* v_inst_662_, lean_object* v_inst_663_, lean_object* v_pre_664_, lean_object* v_post_665_, lean_object* v_x_666_, lean_object* v_x_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v_a_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15(v_expr_659_, v_data_660_, v_inst_661_, v_inst_662_, v_inst_663_, v_pre_664_, v_post_665_, v_x_666_, v_x_667_, v___y_668_, v___y_669_, v_a_670_);
lean_dec(v___y_668_);
lean_dec_ref(v_expr_659_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(lean_object* v_struct_672_, lean_object* v_typeName_673_, lean_object* v_idx_674_, lean_object* v_inst_675_, lean_object* v_inst_676_, lean_object* v_inst_677_, lean_object* v_pre_678_, lean_object* v_post_679_, lean_object* v_x_680_, lean_object* v_x_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v_a_684_){
_start:
{
size_t v___x_685_; size_t v___x_686_; uint8_t v___x_687_; 
v___x_685_ = lean_ptr_addr(v_struct_672_);
v___x_686_ = lean_ptr_addr(v_a_684_);
v___x_687_ = lean_usize_dec_eq(v___x_685_, v___x_686_);
if (v___x_687_ == 0)
{
lean_object* v___x_688_; lean_object* v___x_689_; 
lean_dec_ref(v___y_683_);
v___x_688_ = l_Lean_Expr_proj___override(v_typeName_673_, v_idx_674_, v_a_684_);
v___x_689_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_675_, v_inst_676_, v_inst_677_, v_pre_678_, v_post_679_, v_x_680_, v_x_681_, v___x_688_, v___y_682_);
return v___x_689_;
}
else
{
lean_object* v___x_690_; 
lean_dec_ref(v_a_684_);
lean_dec(v_idx_674_);
lean_dec(v_typeName_673_);
v___x_690_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_675_, v_inst_676_, v_inst_677_, v_pre_678_, v_post_679_, v_x_680_, v_x_681_, v___y_683_, v___y_682_);
return v___x_690_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed(lean_object* v_struct_691_, lean_object* v_typeName_692_, lean_object* v_idx_693_, lean_object* v_inst_694_, lean_object* v_inst_695_, lean_object* v_inst_696_, lean_object* v_pre_697_, lean_object* v_post_698_, lean_object* v_x_699_, lean_object* v_x_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v_a_703_){
_start:
{
lean_object* v_res_704_; 
v_res_704_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16(v_struct_691_, v_typeName_692_, v_idx_693_, v_inst_694_, v_inst_695_, v_inst_696_, v_pre_697_, v_post_698_, v_x_699_, v_x_700_, v___y_701_, v___y_702_, v_a_703_);
lean_dec(v___y_701_);
lean_dec_ref(v_struct_691_);
return v_res_704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(lean_object* v_toApplicative_705_, lean_object* v_inst_706_, lean_object* v_inst_707_, lean_object* v_inst_708_, lean_object* v_pre_709_, lean_object* v_post_710_, lean_object* v_x_711_, lean_object* v_x_712_, lean_object* v___y_713_, lean_object* v_toBind_714_, lean_object* v___f_715_, lean_object* v___f_716_, lean_object* v_e_717_, lean_object* v_a_718_){
_start:
{
lean_object* v___y_720_; 
switch(lean_obj_tag(v_a_718_))
{
case 0:
{
lean_object* v_e_765_; lean_object* v_toPure_766_; lean_object* v___x_767_; 
lean_dec_ref(v_e_717_);
lean_dec(v___f_716_);
lean_dec(v___f_715_);
lean_dec(v_toBind_714_);
lean_dec(v_x_712_);
lean_dec(v_post_710_);
lean_dec(v_pre_709_);
lean_dec_ref(v_inst_708_);
lean_dec(v_inst_707_);
lean_dec_ref(v_inst_706_);
v_e_765_ = lean_ctor_get(v_a_718_, 0);
lean_inc_ref(v_e_765_);
lean_dec_ref(v_a_718_);
v_toPure_766_ = lean_ctor_get(v_toApplicative_705_, 1);
lean_inc(v_toPure_766_);
lean_dec_ref(v_toApplicative_705_);
v___x_767_ = lean_apply_2(v_toPure_766_, lean_box(0), v_e_765_);
return v___x_767_;
}
case 1:
{
lean_object* v_e_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
lean_dec_ref(v_e_717_);
lean_dec(v___f_716_);
lean_dec_ref(v_toApplicative_705_);
v_e_768_ = lean_ctor_get(v_a_718_, 0);
lean_inc_ref(v_e_768_);
lean_dec_ref(v_a_718_);
v___x_769_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_706_, v_inst_707_, v_inst_708_, v_pre_709_, v_post_710_, v_x_711_, v_x_712_, v_e_768_, v___y_713_);
v___x_770_ = lean_apply_4(v_toBind_714_, lean_box(0), lean_box(0), v___x_769_, v___f_715_);
return v___x_770_;
}
default: 
{
lean_object* v_e_x3f_771_; 
lean_dec(v___f_715_);
lean_dec_ref(v_toApplicative_705_);
v_e_x3f_771_ = lean_ctor_get(v_a_718_, 0);
lean_inc(v_e_x3f_771_);
lean_dec_ref(v_a_718_);
if (lean_obj_tag(v_e_x3f_771_) == 0)
{
v___y_720_ = v_e_717_;
goto v___jp_719_;
}
else
{
lean_object* v_val_772_; 
lean_dec_ref(v_e_717_);
v_val_772_ = lean_ctor_get(v_e_x3f_771_, 0);
lean_inc(v_val_772_);
lean_dec_ref(v_e_x3f_771_);
v___y_720_ = v_val_772_;
goto v___jp_719_;
}
}
}
v___jp_719_:
{
switch(lean_obj_tag(v___y_720_))
{
case 7:
{
lean_object* v_binderName_721_; lean_object* v_binderType_722_; lean_object* v_body_723_; uint8_t v_binderInfo_724_; lean_object* v___x_725_; lean_object* v___f_726_; lean_object* v___x_727_; lean_object* v___x_728_; 
lean_dec(v___f_716_);
v_binderName_721_ = lean_ctor_get(v___y_720_, 0);
lean_inc(v_binderName_721_);
v_binderType_722_ = lean_ctor_get(v___y_720_, 1);
lean_inc_ref_n(v_binderType_722_, 2);
v_body_723_ = lean_ctor_get(v___y_720_, 2);
lean_inc_ref(v_body_723_);
v_binderInfo_724_ = lean_ctor_get_uint8(v___y_720_, sizeof(void*)*3 + 8);
v___x_725_ = lean_box(v_binderInfo_724_);
lean_inc(v_toBind_714_);
lean_inc(v___y_713_);
lean_inc(v_x_712_);
lean_inc(v_post_710_);
lean_inc(v_pre_709_);
lean_inc_ref(v_inst_708_);
lean_inc(v_inst_707_);
lean_inc_ref(v_inst_706_);
v___f_726_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__9___boxed), 15, 14);
lean_closure_set(v___f_726_, 0, v_binderName_721_);
lean_closure_set(v___f_726_, 1, v___x_725_);
lean_closure_set(v___f_726_, 2, v_inst_706_);
lean_closure_set(v___f_726_, 3, v_inst_707_);
lean_closure_set(v___f_726_, 4, v_inst_708_);
lean_closure_set(v___f_726_, 5, v_pre_709_);
lean_closure_set(v___f_726_, 6, v_post_710_);
lean_closure_set(v___f_726_, 7, v_x_711_);
lean_closure_set(v___f_726_, 8, v_x_712_);
lean_closure_set(v___f_726_, 9, v___y_713_);
lean_closure_set(v___f_726_, 10, v___y_720_);
lean_closure_set(v___f_726_, 11, v_binderType_722_);
lean_closure_set(v___f_726_, 12, v_body_723_);
lean_closure_set(v___f_726_, 13, v_toBind_714_);
v___x_727_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_706_, v_inst_707_, v_inst_708_, v_pre_709_, v_post_710_, v_x_711_, v_x_712_, v_binderType_722_, v___y_713_);
v___x_728_ = lean_apply_4(v_toBind_714_, lean_box(0), lean_box(0), v___x_727_, v___f_726_);
return v___x_728_;
}
case 6:
{
lean_object* v_binderName_729_; lean_object* v_binderType_730_; lean_object* v_body_731_; uint8_t v_binderInfo_732_; lean_object* v___x_733_; lean_object* v___f_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
lean_dec(v___f_716_);
v_binderName_729_ = lean_ctor_get(v___y_720_, 0);
lean_inc(v_binderName_729_);
v_binderType_730_ = lean_ctor_get(v___y_720_, 1);
lean_inc_ref_n(v_binderType_730_, 2);
v_body_731_ = lean_ctor_get(v___y_720_, 2);
lean_inc_ref(v_body_731_);
v_binderInfo_732_ = lean_ctor_get_uint8(v___y_720_, sizeof(void*)*3 + 8);
v___x_733_ = lean_box(v_binderInfo_732_);
lean_inc(v_toBind_714_);
lean_inc(v___y_713_);
lean_inc(v_x_712_);
lean_inc(v_post_710_);
lean_inc(v_pre_709_);
lean_inc_ref(v_inst_708_);
lean_inc(v_inst_707_);
lean_inc_ref(v_inst_706_);
v___f_734_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__11___boxed), 15, 14);
lean_closure_set(v___f_734_, 0, v_binderName_729_);
lean_closure_set(v___f_734_, 1, v___x_733_);
lean_closure_set(v___f_734_, 2, v_inst_706_);
lean_closure_set(v___f_734_, 3, v_inst_707_);
lean_closure_set(v___f_734_, 4, v_inst_708_);
lean_closure_set(v___f_734_, 5, v_pre_709_);
lean_closure_set(v___f_734_, 6, v_post_710_);
lean_closure_set(v___f_734_, 7, v_x_711_);
lean_closure_set(v___f_734_, 8, v_x_712_);
lean_closure_set(v___f_734_, 9, v___y_713_);
lean_closure_set(v___f_734_, 10, v___y_720_);
lean_closure_set(v___f_734_, 11, v_binderType_730_);
lean_closure_set(v___f_734_, 12, v_body_731_);
lean_closure_set(v___f_734_, 13, v_toBind_714_);
v___x_735_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_706_, v_inst_707_, v_inst_708_, v_pre_709_, v_post_710_, v_x_711_, v_x_712_, v_binderType_730_, v___y_713_);
v___x_736_ = lean_apply_4(v_toBind_714_, lean_box(0), lean_box(0), v___x_735_, v___f_734_);
return v___x_736_;
}
case 8:
{
lean_object* v_declName_737_; lean_object* v_type_738_; lean_object* v_value_739_; lean_object* v_body_740_; uint8_t v_nondep_741_; lean_object* v___x_742_; lean_object* v___f_743_; lean_object* v___x_744_; lean_object* v___x_745_; 
lean_dec(v___f_716_);
v_declName_737_ = lean_ctor_get(v___y_720_, 0);
lean_inc(v_declName_737_);
v_type_738_ = lean_ctor_get(v___y_720_, 1);
lean_inc_ref_n(v_type_738_, 2);
v_value_739_ = lean_ctor_get(v___y_720_, 2);
lean_inc_ref(v_value_739_);
v_body_740_ = lean_ctor_get(v___y_720_, 3);
lean_inc_ref(v_body_740_);
v_nondep_741_ = lean_ctor_get_uint8(v___y_720_, sizeof(void*)*4 + 8);
v___x_742_ = lean_box(v_nondep_741_);
lean_inc(v_toBind_714_);
lean_inc(v___y_713_);
lean_inc(v_x_712_);
lean_inc(v_post_710_);
lean_inc(v_pre_709_);
lean_inc_ref(v_inst_708_);
lean_inc(v_inst_707_);
lean_inc_ref(v_inst_706_);
v___f_743_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__14___boxed), 16, 15);
lean_closure_set(v___f_743_, 0, v_declName_737_);
lean_closure_set(v___f_743_, 1, v___x_742_);
lean_closure_set(v___f_743_, 2, v_inst_706_);
lean_closure_set(v___f_743_, 3, v_inst_707_);
lean_closure_set(v___f_743_, 4, v_inst_708_);
lean_closure_set(v___f_743_, 5, v_pre_709_);
lean_closure_set(v___f_743_, 6, v_post_710_);
lean_closure_set(v___f_743_, 7, v_x_711_);
lean_closure_set(v___f_743_, 8, v_x_712_);
lean_closure_set(v___f_743_, 9, v___y_713_);
lean_closure_set(v___f_743_, 10, v_body_740_);
lean_closure_set(v___f_743_, 11, v___y_720_);
lean_closure_set(v___f_743_, 12, v_type_738_);
lean_closure_set(v___f_743_, 13, v_value_739_);
lean_closure_set(v___f_743_, 14, v_toBind_714_);
v___x_744_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_706_, v_inst_707_, v_inst_708_, v_pre_709_, v_post_710_, v_x_711_, v_x_712_, v_type_738_, v___y_713_);
v___x_745_ = lean_apply_4(v_toBind_714_, lean_box(0), lean_box(0), v___x_744_, v___f_743_);
return v___x_745_;
}
case 5:
{
lean_object* v_dummy_746_; lean_object* v_nargs_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_2405__overap_751_; lean_object* v___x_752_; 
lean_dec(v_toBind_714_);
lean_dec(v_x_712_);
lean_dec(v_post_710_);
lean_dec(v_pre_709_);
lean_dec_ref(v_inst_708_);
lean_dec(v_inst_707_);
lean_dec_ref(v_inst_706_);
v_dummy_746_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_747_ = l_Lean_Expr_getAppNumArgs(v___y_720_);
lean_inc(v_nargs_747_);
v___x_748_ = lean_mk_array(v_nargs_747_, v_dummy_746_);
v___x_749_ = lean_unsigned_to_nat(1u);
v___x_750_ = lean_nat_sub(v_nargs_747_, v___x_749_);
lean_dec(v_nargs_747_);
v___x_2405__overap_751_ = l_Lean_Expr_withAppAux___redArg(v___f_716_, v___y_720_, v___x_748_, v___x_750_);
lean_inc(v___y_713_);
v___x_752_ = lean_apply_1(v___x_2405__overap_751_, v___y_713_);
return v___x_752_;
}
case 10:
{
lean_object* v_data_753_; lean_object* v_expr_754_; lean_object* v___f_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
lean_dec(v___f_716_);
v_data_753_ = lean_ctor_get(v___y_720_, 0);
lean_inc(v_data_753_);
v_expr_754_ = lean_ctor_get(v___y_720_, 1);
lean_inc_ref_n(v_expr_754_, 2);
lean_inc(v___y_713_);
lean_inc(v_x_712_);
lean_inc(v_post_710_);
lean_inc(v_pre_709_);
lean_inc_ref(v_inst_708_);
lean_inc(v_inst_707_);
lean_inc_ref(v_inst_706_);
v___f_755_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__15___boxed), 12, 11);
lean_closure_set(v___f_755_, 0, v_expr_754_);
lean_closure_set(v___f_755_, 1, v_data_753_);
lean_closure_set(v___f_755_, 2, v_inst_706_);
lean_closure_set(v___f_755_, 3, v_inst_707_);
lean_closure_set(v___f_755_, 4, v_inst_708_);
lean_closure_set(v___f_755_, 5, v_pre_709_);
lean_closure_set(v___f_755_, 6, v_post_710_);
lean_closure_set(v___f_755_, 7, v_x_711_);
lean_closure_set(v___f_755_, 8, v_x_712_);
lean_closure_set(v___f_755_, 9, v___y_713_);
lean_closure_set(v___f_755_, 10, v___y_720_);
v___x_756_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_706_, v_inst_707_, v_inst_708_, v_pre_709_, v_post_710_, v_x_711_, v_x_712_, v_expr_754_, v___y_713_);
v___x_757_ = lean_apply_4(v_toBind_714_, lean_box(0), lean_box(0), v___x_756_, v___f_755_);
return v___x_757_;
}
case 11:
{
lean_object* v_typeName_758_; lean_object* v_idx_759_; lean_object* v_struct_760_; lean_object* v___f_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
lean_dec(v___f_716_);
v_typeName_758_ = lean_ctor_get(v___y_720_, 0);
lean_inc(v_typeName_758_);
v_idx_759_ = lean_ctor_get(v___y_720_, 1);
lean_inc(v_idx_759_);
v_struct_760_ = lean_ctor_get(v___y_720_, 2);
lean_inc_ref_n(v_struct_760_, 2);
lean_inc(v___y_713_);
lean_inc(v_x_712_);
lean_inc(v_post_710_);
lean_inc(v_pre_709_);
lean_inc_ref(v_inst_708_);
lean_inc(v_inst_707_);
lean_inc_ref(v_inst_706_);
v___f_761_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__16___boxed), 13, 12);
lean_closure_set(v___f_761_, 0, v_struct_760_);
lean_closure_set(v___f_761_, 1, v_typeName_758_);
lean_closure_set(v___f_761_, 2, v_idx_759_);
lean_closure_set(v___f_761_, 3, v_inst_706_);
lean_closure_set(v___f_761_, 4, v_inst_707_);
lean_closure_set(v___f_761_, 5, v_inst_708_);
lean_closure_set(v___f_761_, 6, v_pre_709_);
lean_closure_set(v___f_761_, 7, v_post_710_);
lean_closure_set(v___f_761_, 8, v_x_711_);
lean_closure_set(v___f_761_, 9, v_x_712_);
lean_closure_set(v___f_761_, 10, v___y_713_);
lean_closure_set(v___f_761_, 11, v___y_720_);
v___x_762_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_706_, v_inst_707_, v_inst_708_, v_pre_709_, v_post_710_, v_x_711_, v_x_712_, v_struct_760_, v___y_713_);
v___x_763_ = lean_apply_4(v_toBind_714_, lean_box(0), lean_box(0), v___x_762_, v___f_761_);
return v___x_763_;
}
default: 
{
lean_object* v___x_764_; 
lean_dec(v___f_716_);
lean_dec(v_toBind_714_);
v___x_764_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_706_, v_inst_707_, v_inst_708_, v_pre_709_, v_post_710_, v_x_711_, v_x_712_, v___y_720_, v___y_713_);
return v___x_764_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___boxed(lean_object* v_toApplicative_773_, lean_object* v_inst_774_, lean_object* v_inst_775_, lean_object* v_inst_776_, lean_object* v_pre_777_, lean_object* v_post_778_, lean_object* v_x_779_, lean_object* v_x_780_, lean_object* v___y_781_, lean_object* v_toBind_782_, lean_object* v___f_783_, lean_object* v___f_784_, lean_object* v_e_785_, lean_object* v_a_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17(v_toApplicative_773_, v_inst_774_, v_inst_775_, v_inst_776_, v_pre_777_, v_post_778_, v_x_779_, v_x_780_, v___y_781_, v_toBind_782_, v___f_783_, v___f_784_, v_e_785_, v_a_786_);
lean_dec(v___y_781_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(lean_object* v_inst_788_, lean_object* v_inst_789_, lean_object* v_inst_790_, lean_object* v_pre_791_, lean_object* v_post_792_, lean_object* v_x_793_, lean_object* v_x_794_, lean_object* v_toApplicative_795_, lean_object* v_toBind_796_, lean_object* v___f_797_, lean_object* v_e_798_, lean_object* v_____r_799_, lean_object* v___y_800_){
_start:
{
lean_object* v___f_801_; lean_object* v___f_802_; lean_object* v___x_803_; lean_object* v___x_804_; 
lean_inc_n(v___y_800_, 2);
lean_inc(v_x_794_);
lean_inc(v_post_792_);
lean_inc_n(v_pre_791_, 2);
lean_inc_ref(v_inst_790_);
lean_inc(v_inst_789_);
lean_inc_ref(v_inst_788_);
v___f_801_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7___boxed), 9, 8);
lean_closure_set(v___f_801_, 0, v_inst_788_);
lean_closure_set(v___f_801_, 1, v_inst_789_);
lean_closure_set(v___f_801_, 2, v_inst_790_);
lean_closure_set(v___f_801_, 3, v_pre_791_);
lean_closure_set(v___f_801_, 4, v_post_792_);
lean_closure_set(v___f_801_, 5, v_x_793_);
lean_closure_set(v___f_801_, 6, v_x_794_);
lean_closure_set(v___f_801_, 7, v___y_800_);
lean_inc_ref(v_e_798_);
lean_inc(v_toBind_796_);
v___f_802_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___boxed), 14, 13);
lean_closure_set(v___f_802_, 0, v_toApplicative_795_);
lean_closure_set(v___f_802_, 1, v_inst_788_);
lean_closure_set(v___f_802_, 2, v_inst_789_);
lean_closure_set(v___f_802_, 3, v_inst_790_);
lean_closure_set(v___f_802_, 4, v_pre_791_);
lean_closure_set(v___f_802_, 5, v_post_792_);
lean_closure_set(v___f_802_, 6, v_x_793_);
lean_closure_set(v___f_802_, 7, v_x_794_);
lean_closure_set(v___f_802_, 8, v___y_800_);
lean_closure_set(v___f_802_, 9, v_toBind_796_);
lean_closure_set(v___f_802_, 10, v___f_801_);
lean_closure_set(v___f_802_, 11, v___f_797_);
lean_closure_set(v___f_802_, 12, v_e_798_);
v___x_803_ = lean_apply_1(v_pre_791_, v_e_798_);
v___x_804_ = lean_apply_4(v_toBind_796_, lean_box(0), lean_box(0), v___x_803_, v___f_802_);
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18___boxed(lean_object* v_inst_805_, lean_object* v_inst_806_, lean_object* v_inst_807_, lean_object* v_pre_808_, lean_object* v_post_809_, lean_object* v_x_810_, lean_object* v_x_811_, lean_object* v_toApplicative_812_, lean_object* v_toBind_813_, lean_object* v___f_814_, lean_object* v_e_815_, lean_object* v_____r_816_, lean_object* v___y_817_){
_start:
{
lean_object* v_res_818_; 
v_res_818_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18(v_inst_805_, v_inst_806_, v_inst_807_, v_pre_808_, v_post_809_, v_x_810_, v_x_811_, v_toApplicative_812_, v_toBind_813_, v___f_814_, v_e_815_, v_____r_816_, v___y_817_);
lean_dec(v___y_817_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(lean_object* v_inst_819_, lean_object* v_inst_820_, lean_object* v_inst_821_, lean_object* v_pre_822_, lean_object* v_post_823_, lean_object* v_x_824_, lean_object* v_x_825_, lean_object* v_e_826_, lean_object* v_a_827_){
_start:
{
lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___f_832_; lean_object* v___f_833_; lean_object* v___x_834_; lean_object* v_toApplicative_835_; lean_object* v_toBind_836_; lean_object* v___f_837_; lean_object* v___f_838_; lean_object* v___f_839_; lean_object* v___f_840_; lean_object* v___f_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v___x_828_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0);
v___x_829_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1);
lean_inc_ref_n(v_inst_819_, 3);
v___x_830_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_824_, v___x_828_, v___x_829_, v_inst_819_);
v___x_831_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_824_, v___x_828_, v___x_829_);
lean_inc_ref_n(v_inst_821_, 3);
lean_inc_ref(v___x_831_);
v___f_832_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_832_, 0, v___x_831_);
lean_closure_set(v___f_832_, 1, v_inst_821_);
v___f_833_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_833_, 0, v___x_831_);
lean_closure_set(v___f_833_, 1, v_inst_821_);
v___x_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_834_, 0, v___f_832_);
lean_ctor_set(v___x_834_, 1, v___f_833_);
v_toApplicative_835_ = lean_ctor_get(v_inst_819_, 0);
lean_inc_ref_n(v_toApplicative_835_, 4);
v_toBind_836_ = lean_ctor_get(v_inst_819_, 1);
lean_inc_n(v_toBind_836_, 6);
lean_inc_n(v_x_825_, 3);
lean_inc_n(v_a_827_, 3);
lean_inc_ref_n(v_e_826_, 2);
v___f_837_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_837_, 0, v_toApplicative_835_);
lean_closure_set(v___f_837_, 1, v___x_828_);
lean_closure_set(v___f_837_, 2, v___x_829_);
lean_closure_set(v___f_837_, 3, v_e_826_);
lean_closure_set(v___f_837_, 4, v_a_827_);
lean_closure_set(v___f_837_, 5, v_x_825_);
lean_closure_set(v___f_837_, 6, v_toBind_836_);
v___f_838_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_838_, 0, v_toApplicative_835_);
lean_closure_set(v___f_838_, 1, v___x_828_);
lean_closure_set(v___f_838_, 2, v___x_829_);
lean_closure_set(v___f_838_, 3, v_e_826_);
lean_inc_ref(v___x_830_);
lean_inc(v_post_823_);
lean_inc(v_pre_822_);
lean_inc_n(v_inst_820_, 2);
v___f_839_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__6___boxed), 12, 9);
lean_closure_set(v___f_839_, 0, v_inst_819_);
lean_closure_set(v___f_839_, 1, v_inst_820_);
lean_closure_set(v___f_839_, 2, v_inst_821_);
lean_closure_set(v___f_839_, 3, v_pre_822_);
lean_closure_set(v___f_839_, 4, v_post_823_);
lean_closure_set(v___f_839_, 5, v_x_824_);
lean_closure_set(v___f_839_, 6, v_x_825_);
lean_closure_set(v___f_839_, 7, v___x_830_);
lean_closure_set(v___f_839_, 8, v_toBind_836_);
v___f_840_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__18___boxed), 13, 11);
lean_closure_set(v___f_840_, 0, v_inst_819_);
lean_closure_set(v___f_840_, 1, v_inst_820_);
lean_closure_set(v___f_840_, 2, v_inst_821_);
lean_closure_set(v___f_840_, 3, v_pre_822_);
lean_closure_set(v___f_840_, 4, v_post_823_);
lean_closure_set(v___f_840_, 5, v_x_824_);
lean_closure_set(v___f_840_, 6, v_x_825_);
lean_closure_set(v___f_840_, 7, v_toApplicative_835_);
lean_closure_set(v___f_840_, 8, v_toBind_836_);
lean_closure_set(v___f_840_, 9, v___f_839_);
lean_closure_set(v___f_840_, 10, v_e_826_);
v___f_841_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___boxed), 13, 12);
lean_closure_set(v___f_841_, 0, v_inst_820_);
lean_closure_set(v___f_841_, 1, v_x_824_);
lean_closure_set(v___f_841_, 2, v___x_828_);
lean_closure_set(v___f_841_, 3, v___x_829_);
lean_closure_set(v___f_841_, 4, v_inst_819_);
lean_closure_set(v___f_841_, 5, v___f_840_);
lean_closure_set(v___f_841_, 6, v___x_830_);
lean_closure_set(v___f_841_, 7, v___x_834_);
lean_closure_set(v___f_841_, 8, v_a_827_);
lean_closure_set(v___f_841_, 9, v_toBind_836_);
lean_closure_set(v___f_841_, 10, v___f_837_);
lean_closure_set(v___f_841_, 11, v_toApplicative_835_);
v___x_842_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_842_, 0, lean_box(0));
lean_closure_set(v___x_842_, 1, lean_box(0));
lean_closure_set(v___x_842_, 2, v_a_827_);
v___x_843_ = lean_apply_2(v_x_825_, lean_box(0), v___x_842_);
v___x_844_ = lean_apply_4(v_toBind_836_, lean_box(0), lean_box(0), v___x_843_, v___f_838_);
v___x_845_ = lean_apply_4(v_toBind_836_, lean_box(0), lean_box(0), v___x_844_, v___f_841_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(lean_object* v_toApplicative_846_, lean_object* v_inst_847_, lean_object* v_inst_848_, lean_object* v_inst_849_, lean_object* v_pre_850_, lean_object* v_post_851_, lean_object* v_x_852_, lean_object* v_x_853_, lean_object* v_a_854_, lean_object* v_e_855_, lean_object* v_a_856_){
_start:
{
lean_object* v___y_858_; 
switch(lean_obj_tag(v_a_856_))
{
case 0:
{
lean_object* v_e_861_; lean_object* v_toPure_862_; lean_object* v___x_863_; 
lean_dec_ref(v_e_855_);
lean_dec(v_x_853_);
lean_dec(v_post_851_);
lean_dec(v_pre_850_);
lean_dec_ref(v_inst_849_);
lean_dec(v_inst_848_);
lean_dec_ref(v_inst_847_);
v_e_861_ = lean_ctor_get(v_a_856_, 0);
lean_inc_ref(v_e_861_);
lean_dec_ref(v_a_856_);
v_toPure_862_ = lean_ctor_get(v_toApplicative_846_, 1);
lean_inc(v_toPure_862_);
lean_dec_ref(v_toApplicative_846_);
v___x_863_ = lean_apply_2(v_toPure_862_, lean_box(0), v_e_861_);
return v___x_863_;
}
case 1:
{
lean_object* v_e_864_; lean_object* v___x_865_; 
lean_dec_ref(v_e_855_);
lean_dec_ref(v_toApplicative_846_);
v_e_864_ = lean_ctor_get(v_a_856_, 0);
lean_inc_ref(v_e_864_);
lean_dec_ref(v_a_856_);
v___x_865_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_847_, v_inst_848_, v_inst_849_, v_pre_850_, v_post_851_, v_x_852_, v_x_853_, v_e_864_, v_a_854_);
return v___x_865_;
}
default: 
{
lean_object* v_e_x3f_866_; 
lean_dec(v_x_853_);
lean_dec(v_post_851_);
lean_dec(v_pre_850_);
lean_dec_ref(v_inst_849_);
lean_dec(v_inst_848_);
lean_dec_ref(v_inst_847_);
v_e_x3f_866_ = lean_ctor_get(v_a_856_, 0);
lean_inc(v_e_x3f_866_);
lean_dec_ref(v_a_856_);
if (lean_obj_tag(v_e_x3f_866_) == 0)
{
v___y_858_ = v_e_855_;
goto v___jp_857_;
}
else
{
lean_object* v_val_867_; 
lean_dec_ref(v_e_855_);
v_val_867_ = lean_ctor_get(v_e_x3f_866_, 0);
lean_inc(v_val_867_);
lean_dec_ref(v_e_x3f_866_);
v___y_858_ = v_val_867_;
goto v___jp_857_;
}
}
}
v___jp_857_:
{
lean_object* v_toPure_859_; lean_object* v___x_860_; 
v_toPure_859_ = lean_ctor_get(v_toApplicative_846_, 1);
lean_inc(v_toPure_859_);
lean_dec_ref(v_toApplicative_846_);
v___x_860_ = lean_apply_2(v_toPure_859_, lean_box(0), v___y_858_);
return v___x_860_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed(lean_object* v_toApplicative_868_, lean_object* v_inst_869_, lean_object* v_inst_870_, lean_object* v_inst_871_, lean_object* v_pre_872_, lean_object* v_post_873_, lean_object* v_x_874_, lean_object* v_x_875_, lean_object* v_a_876_, lean_object* v_e_877_, lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0(v_toApplicative_868_, v_inst_869_, v_inst_870_, v_inst_871_, v_pre_872_, v_post_873_, v_x_874_, v_x_875_, v_a_876_, v_e_877_, v_a_878_);
lean_dec(v_a_876_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(lean_object* v_inst_880_, lean_object* v_inst_881_, lean_object* v_inst_882_, lean_object* v_pre_883_, lean_object* v_post_884_, lean_object* v_x_885_, lean_object* v_x_886_, lean_object* v_e_887_, lean_object* v_a_888_){
_start:
{
lean_object* v_toApplicative_889_; lean_object* v_toBind_890_; lean_object* v___f_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
v_toApplicative_889_ = lean_ctor_get(v_inst_880_, 0);
lean_inc_ref(v_toApplicative_889_);
v_toBind_890_ = lean_ctor_get(v_inst_880_, 1);
lean_inc(v_toBind_890_);
lean_inc_ref(v_e_887_);
lean_inc(v_a_888_);
lean_inc(v_post_884_);
v___f_891_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___lam__0___boxed), 11, 10);
lean_closure_set(v___f_891_, 0, v_toApplicative_889_);
lean_closure_set(v___f_891_, 1, v_inst_880_);
lean_closure_set(v___f_891_, 2, v_inst_881_);
lean_closure_set(v___f_891_, 3, v_inst_882_);
lean_closure_set(v___f_891_, 4, v_pre_883_);
lean_closure_set(v___f_891_, 5, v_post_884_);
lean_closure_set(v___f_891_, 6, v_x_885_);
lean_closure_set(v___f_891_, 7, v_x_886_);
lean_closure_set(v___f_891_, 8, v_a_888_);
lean_closure_set(v___f_891_, 9, v_e_887_);
v___x_892_ = lean_apply_1(v_post_884_, v_e_887_);
v___x_893_ = lean_apply_4(v_toBind_890_, lean_box(0), lean_box(0), v___x_892_, v___f_891_);
return v___x_893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__7(lean_object* v_inst_894_, lean_object* v_inst_895_, lean_object* v_inst_896_, lean_object* v_pre_897_, lean_object* v_post_898_, lean_object* v_x_899_, lean_object* v_x_900_, lean_object* v___y_901_, lean_object* v_a_902_){
_start:
{
lean_object* v___x_903_; 
v___x_903_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_894_, v_inst_895_, v_inst_896_, v_pre_897_, v_post_898_, v_x_899_, v_x_900_, v_a_902_, v___y_901_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg___boxed(lean_object* v_inst_904_, lean_object* v_inst_905_, lean_object* v_inst_906_, lean_object* v_pre_907_, lean_object* v_post_908_, lean_object* v_x_909_, lean_object* v_x_910_, lean_object* v_e_911_, lean_object* v_a_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_904_, v_inst_905_, v_inst_906_, v_pre_907_, v_post_908_, v_x_909_, v_x_910_, v_e_911_, v_a_912_);
lean_dec(v_a_912_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(lean_object* v_m_914_, lean_object* v_inst_915_, lean_object* v_inst_916_, lean_object* v_inst_917_, lean_object* v_pre_918_, lean_object* v_post_919_, lean_object* v_x_920_, lean_object* v_x_921_, lean_object* v_e_922_, lean_object* v_a_923_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_915_, v_inst_916_, v_inst_917_, v_pre_918_, v_post_919_, v_x_920_, v_x_921_, v_e_922_, v_a_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___boxed(lean_object* v_m_925_, lean_object* v_inst_926_, lean_object* v_inst_927_, lean_object* v_inst_928_, lean_object* v_pre_929_, lean_object* v_post_930_, lean_object* v_x_931_, lean_object* v_x_932_, lean_object* v_e_933_, lean_object* v_a_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit(v_m_925_, v_inst_926_, v_inst_927_, v_inst_928_, v_pre_929_, v_post_930_, v_x_931_, v_x_932_, v_e_933_, v_a_934_);
lean_dec(v_a_934_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(lean_object* v_m_936_, lean_object* v_inst_937_, lean_object* v_inst_938_, lean_object* v_inst_939_, lean_object* v_pre_940_, lean_object* v_post_941_, lean_object* v_x_942_, lean_object* v_x_943_, lean_object* v_e_944_, lean_object* v_a_945_){
_start:
{
lean_object* v___x_946_; 
v___x_946_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___redArg(v_inst_937_, v_inst_938_, v_inst_939_, v_pre_940_, v_post_941_, v_x_942_, v_x_943_, v_e_944_, v_a_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___boxed(lean_object* v_m_947_, lean_object* v_inst_948_, lean_object* v_inst_949_, lean_object* v_inst_950_, lean_object* v_pre_951_, lean_object* v_post_952_, lean_object* v_x_953_, lean_object* v_x_954_, lean_object* v_e_955_, lean_object* v_a_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost(v_m_947_, v_inst_948_, v_inst_949_, v_inst_950_, v_pre_951_, v_post_952_, v_x_953_, v_x_954_, v_e_955_, v_a_956_);
lean_dec(v_a_956_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0(lean_object* v_x_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_962_ = lean_st_ref_get(v___y_960_);
lean_dec(v___x_962_);
v___x_963_ = lean_apply_1(v_x_958_, lean_box(0));
v___x_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
return v___x_964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__0___boxed(lean_object* v_x_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l_Lean_Core_transform___redArg___lam__0(v_x_965_, v___y_966_, v___y_967_);
lean_dec(v___y_967_);
lean_dec_ref(v___y_966_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__1(lean_object* v_inst_970_, lean_object* v_00_u03b1_971_, lean_object* v_x_972_){
_start:
{
lean_object* v___f_973_; lean_object* v___x_974_; 
v___f_973_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_973_, 0, v_x_972_);
v___x_974_ = lean_apply_2(v_inst_970_, lean_box(0), v___f_973_);
return v___x_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__2(lean_object* v_toPure_975_, lean_object* v_____x_976_){
_start:
{
lean_object* v_fst_977_; lean_object* v___x_978_; 
v_fst_977_ = lean_ctor_get(v_____x_976_, 0);
lean_inc(v_fst_977_);
lean_dec_ref(v_____x_976_);
v___x_978_ = lean_apply_2(v_toPure_975_, lean_box(0), v_fst_977_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__3(lean_object* v_a_979_, lean_object* v_toPure_980_, lean_object* v_s_981_){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_982_, 0, v_a_979_);
lean_ctor_set(v___x_982_, 1, v_s_981_);
v___x_983_ = lean_apply_2(v_toPure_980_, lean_box(0), v___x_982_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__4(lean_object* v_toPure_984_, lean_object* v_ref_985_, lean_object* v_x_986_, lean_object* v_toBind_987_, lean_object* v_a_988_){
_start:
{
lean_object* v___f_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v___f_989_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__3), 3, 2);
lean_closure_set(v___f_989_, 0, v_a_988_);
lean_closure_set(v___f_989_, 1, v_toPure_984_);
v___x_990_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_990_, 0, lean_box(0));
lean_closure_set(v___x_990_, 1, lean_box(0));
lean_closure_set(v___x_990_, 2, v_ref_985_);
v___x_991_ = lean_apply_2(v_x_986_, lean_box(0), v___x_990_);
v___x_992_ = lean_apply_4(v_toBind_987_, lean_box(0), lean_box(0), v___x_991_, v___f_989_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg___lam__5(lean_object* v_toPure_993_, lean_object* v_x_994_, lean_object* v_toBind_995_, lean_object* v_inst_996_, lean_object* v_inst_997_, lean_object* v_inst_998_, lean_object* v_pre_999_, lean_object* v_post_1000_, lean_object* v_x_1001_, lean_object* v_input_1002_, lean_object* v_ref_1003_){
_start:
{
lean_object* v___f_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
lean_inc(v_toBind_995_);
lean_inc(v_x_994_);
lean_inc(v_ref_1003_);
v___f_1004_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_1004_, 0, v_toPure_993_);
lean_closure_set(v___f_1004_, 1, v_ref_1003_);
lean_closure_set(v___f_1004_, 2, v_x_994_);
lean_closure_set(v___f_1004_, 3, v_toBind_995_);
v___x_1005_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg(v_inst_996_, v_inst_997_, v_inst_998_, v_pre_999_, v_post_1000_, v_x_1001_, v_x_994_, v_input_1002_, v_ref_1003_);
lean_dec(v_ref_1003_);
v___x_1006_ = lean_apply_4(v_toBind_995_, lean_box(0), lean_box(0), v___x_1005_, v___f_1004_);
return v___x_1006_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__0(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1007_ = lean_box(0);
v___x_1008_ = lean_unsigned_to_nat(16u);
v___x_1009_ = lean_mk_array(v___x_1008_, v___x_1007_);
return v___x_1009_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__1(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1010_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__0, &l_Lean_Core_transform___redArg___closed__0_once, _init_l_Lean_Core_transform___redArg___closed__0);
v___x_1011_ = lean_unsigned_to_nat(0u);
v___x_1012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1012_, 0, v___x_1011_);
lean_ctor_set(v___x_1012_, 1, v___x_1010_);
return v___x_1012_;
}
}
static lean_object* _init_l_Lean_Core_transform___redArg___closed__2(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1013_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__1, &l_Lean_Core_transform___redArg___closed__1_once, _init_l_Lean_Core_transform___redArg___closed__1);
v___x_1014_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_1014_, 0, lean_box(0));
lean_closure_set(v___x_1014_, 1, lean_box(0));
lean_closure_set(v___x_1014_, 2, v___x_1013_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___redArg(lean_object* v_inst_1015_, lean_object* v_inst_1016_, lean_object* v_inst_1017_, lean_object* v_input_1018_, lean_object* v_pre_1019_, lean_object* v_post_1020_){
_start:
{
lean_object* v_x_1021_; lean_object* v_toApplicative_1022_; lean_object* v_toBind_1023_; lean_object* v_toPure_1024_; lean_object* v_x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___f_1028_; lean_object* v___f_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v_x_1021_ = lean_box(0);
v_toApplicative_1022_ = lean_ctor_get(v_inst_1015_, 0);
v_toBind_1023_ = lean_ctor_get(v_inst_1015_, 1);
lean_inc_n(v_toBind_1023_, 3);
v_toPure_1024_ = lean_ctor_get(v_toApplicative_1022_, 1);
lean_inc_n(v_toPure_1024_, 2);
lean_inc_n(v_inst_1016_, 2);
v_x_1025_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__1), 3, 1);
lean_closure_set(v_x_1025_, 0, v_inst_1016_);
v___x_1026_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_1027_ = l_Lean_Core_transform___redArg___lam__1(v_inst_1016_, lean_box(0), v___x_1026_);
v___f_1028_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__2), 2, 1);
lean_closure_set(v___f_1028_, 0, v_toPure_1024_);
v___f_1029_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__5), 11, 10);
lean_closure_set(v___f_1029_, 0, v_toPure_1024_);
lean_closure_set(v___f_1029_, 1, v_x_1025_);
lean_closure_set(v___f_1029_, 2, v_toBind_1023_);
lean_closure_set(v___f_1029_, 3, v_inst_1015_);
lean_closure_set(v___f_1029_, 4, v_inst_1016_);
lean_closure_set(v___f_1029_, 5, v_inst_1017_);
lean_closure_set(v___f_1029_, 6, v_pre_1019_);
lean_closure_set(v___f_1029_, 7, v_post_1020_);
lean_closure_set(v___f_1029_, 8, v_x_1021_);
lean_closure_set(v___f_1029_, 9, v_input_1018_);
v___x_1030_ = lean_apply_4(v_toBind_1023_, lean_box(0), lean_box(0), v___x_1027_, v___f_1029_);
v___x_1031_ = lean_apply_4(v_toBind_1023_, lean_box(0), lean_box(0), v___x_1030_, v___f_1028_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform(lean_object* v_m_1032_, lean_object* v_inst_1033_, lean_object* v_inst_1034_, lean_object* v_inst_1035_, lean_object* v_input_1036_, lean_object* v_pre_1037_, lean_object* v_post_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_Core_transform___redArg(v_inst_1033_, v_inst_1034_, v_inst_1035_, v_input_1036_, v_pre_1037_, v_post_1038_);
return v___x_1039_;
}
}
static lean_object* _init_l_Lean_Core_betaReduce___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = lean_box(0);
v___x_1041_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1041_, 0, v___x_1040_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0(lean_object* v_e_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_){
_start:
{
uint8_t v___x_1046_; uint8_t v___x_1047_; 
v___x_1046_ = 0;
v___x_1047_ = l_Lean_Expr_isHeadBetaTarget(v_e_1042_, v___x_1046_);
if (v___x_1047_ == 0)
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
lean_dec_ref(v_e_1042_);
v___x_1048_ = lean_obj_once(&l_Lean_Core_betaReduce___lam__0___closed__0, &l_Lean_Core_betaReduce___lam__0___closed__0_once, _init_l_Lean_Core_betaReduce___lam__0___closed__0);
v___x_1049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1048_);
return v___x_1049_;
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1050_ = l_Lean_Expr_headBeta(v_e_1042_);
v___x_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
v___x_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
return v___x_1052_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__0___boxed(lean_object* v_e_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v_res_1057_; 
v_res_1057_ = l_Lean_Core_betaReduce___lam__0(v_e_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
return v_res_1057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1(lean_object* v_e_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_){
_start:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
v___x_1062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1062_, 0, v_e_1058_);
v___x_1063_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1063_, 0, v___x_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___lam__1___boxed(lean_object* v_e_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_Core_betaReduce___lam__1(v_e_1064_, v___y_1065_, v___y_1066_);
lean_dec(v___y_1066_);
lean_dec_ref(v___y_1065_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_object* v_00_u03b1_1069_, lean_object* v_x_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1074_ = lean_st_ref_get(v___y_1072_);
lean_dec(v___x_1074_);
v___x_1075_ = lean_apply_1(v_x_1070_, lean_box(0));
v___x_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1077_, lean_object* v_x_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(v_00_u03b1_1077_, v_x_1078_, v___y_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_1083_, lean_object* v_x_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_){
_start:
{
lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1088_ = lean_st_ref_get(v___y_1086_);
lean_dec(v___x_1088_);
v___x_1089_ = lean_apply_1(v_x_1084_, lean_box(0));
v___x_1090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_1091_, lean_object* v_x_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(v_00_u03b1_1091_, v_x_1092_, v___y_1093_, v___y_1094_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_1097_, lean_object* v_x_1098_){
_start:
{
if (lean_obj_tag(v_x_1098_) == 0)
{
lean_object* v___x_1099_; 
v___x_1099_ = lean_box(0);
return v___x_1099_;
}
else
{
lean_object* v_key_1100_; lean_object* v_value_1101_; lean_object* v_tail_1102_; uint8_t v___x_1103_; 
v_key_1100_ = lean_ctor_get(v_x_1098_, 0);
v_value_1101_ = lean_ctor_get(v_x_1098_, 1);
v_tail_1102_ = lean_ctor_get(v_x_1098_, 2);
v___x_1103_ = l_Lean_ExprStructEq_beq(v_key_1100_, v_a_1097_);
if (v___x_1103_ == 0)
{
v_x_1098_ = v_tail_1102_;
goto _start;
}
else
{
lean_object* v___x_1105_; 
lean_inc(v_value_1101_);
v___x_1105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1105_, 0, v_value_1101_);
return v___x_1105_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_1106_, lean_object* v_x_1107_){
_start:
{
lean_object* v_res_1108_; 
v_res_1108_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1106_, v_x_1107_);
lean_dec(v_x_1107_);
lean_dec_ref(v_a_1106_);
return v_res_1108_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(lean_object* v_m_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v_buckets_1111_; lean_object* v___x_1112_; uint64_t v___x_1113_; uint64_t v___x_1114_; uint64_t v___x_1115_; uint64_t v_fold_1116_; uint64_t v___x_1117_; uint64_t v___x_1118_; uint64_t v___x_1119_; size_t v___x_1120_; size_t v___x_1121_; size_t v___x_1122_; size_t v___x_1123_; size_t v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; 
v_buckets_1111_ = lean_ctor_get(v_m_1109_, 1);
v___x_1112_ = lean_array_get_size(v_buckets_1111_);
v___x_1113_ = l_Lean_ExprStructEq_hash(v_a_1110_);
v___x_1114_ = 32ULL;
v___x_1115_ = lean_uint64_shift_right(v___x_1113_, v___x_1114_);
v_fold_1116_ = lean_uint64_xor(v___x_1113_, v___x_1115_);
v___x_1117_ = 16ULL;
v___x_1118_ = lean_uint64_shift_right(v_fold_1116_, v___x_1117_);
v___x_1119_ = lean_uint64_xor(v_fold_1116_, v___x_1118_);
v___x_1120_ = lean_uint64_to_usize(v___x_1119_);
v___x_1121_ = lean_usize_of_nat(v___x_1112_);
v___x_1122_ = ((size_t)1ULL);
v___x_1123_ = lean_usize_sub(v___x_1121_, v___x_1122_);
v___x_1124_ = lean_usize_land(v___x_1120_, v___x_1123_);
v___x_1125_ = lean_array_uget_borrowed(v_buckets_1111_, v___x_1124_);
v___x_1126_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1110_, v___x_1125_);
return v___x_1126_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_1127_, lean_object* v_a_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_m_1127_, v_a_1128_);
lean_dec_ref(v_a_1128_);
lean_dec_ref(v_m_1127_);
return v_res_1129_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1130_ = lean_box(0);
v___x_1131_ = l_Lean_interruptExceptionId;
v___x_1132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1132_, 0, v___x_1131_);
lean_ctor_set(v___x_1132_, 1, v___x_1130_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___closed__0);
v___x_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1135_, 0, v___x_1134_);
return v___x_1135_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object* v___y_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
return v_res_1137_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_mk_string_unchecked("runtime", 7, 7);
return v___x_1138_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_1139_; 
v___x_1139_ = lean_mk_string_unchecked("maxRecDepth", 11, 11);
return v___x_1139_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; 
v___x_1140_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__1);
v___x_1141_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__0);
v___x_1142_ = l_Lean_Name_mkStr2(v___x_1141_, v___x_1140_);
return v___x_1142_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = l_Lean_maxRecDepthErrorMessage;
v___x_1144_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1143_);
return v___x_1144_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1145_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_1146_ = l_Lean_MessageData_ofFormat(v___x_1145_);
return v___x_1146_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1147_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_1148_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__2);
v___x_1149_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1149_, 0, v___x_1148_);
lean_ctor_set(v___x_1149_, 1, v___x_1147_);
return v___x_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_1150_){
_start:
{
lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v___x_1152_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_1153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1153_, 0, v_ref_1150_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
v___x_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1155_);
return v_res_1157_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(lean_object* v_x_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_){
_start:
{
lean_object* v___y_1164_; lean_object* v___y_1174_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; uint8_t v___y_1182_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; uint8_t v___y_1186_; lean_object* v___y_1187_; lean_object* v___y_1188_; lean_object* v___y_1189_; lean_object* v_fileName_1194_; lean_object* v_fileMap_1195_; lean_object* v_options_1196_; lean_object* v_currRecDepth_1197_; lean_object* v_maxRecDepth_1198_; lean_object* v_ref_1199_; lean_object* v_currNamespace_1200_; lean_object* v_openDecls_1201_; lean_object* v_initHeartbeats_1202_; lean_object* v_maxHeartbeats_1203_; lean_object* v_quotContext_1204_; lean_object* v_currMacroScope_1205_; uint8_t v_diag_1206_; lean_object* v_cancelTk_x3f_1207_; uint8_t v_suppressElabErrors_1208_; lean_object* v_inheritedTraceOptions_1209_; 
v_fileName_1194_ = lean_ctor_get(v___y_1160_, 0);
v_fileMap_1195_ = lean_ctor_get(v___y_1160_, 1);
v_options_1196_ = lean_ctor_get(v___y_1160_, 2);
v_currRecDepth_1197_ = lean_ctor_get(v___y_1160_, 3);
v_maxRecDepth_1198_ = lean_ctor_get(v___y_1160_, 4);
v_ref_1199_ = lean_ctor_get(v___y_1160_, 5);
v_currNamespace_1200_ = lean_ctor_get(v___y_1160_, 6);
v_openDecls_1201_ = lean_ctor_get(v___y_1160_, 7);
v_initHeartbeats_1202_ = lean_ctor_get(v___y_1160_, 8);
v_maxHeartbeats_1203_ = lean_ctor_get(v___y_1160_, 9);
v_quotContext_1204_ = lean_ctor_get(v___y_1160_, 10);
v_currMacroScope_1205_ = lean_ctor_get(v___y_1160_, 11);
v_diag_1206_ = lean_ctor_get_uint8(v___y_1160_, sizeof(void*)*14);
v_cancelTk_x3f_1207_ = lean_ctor_get(v___y_1160_, 12);
v_suppressElabErrors_1208_ = lean_ctor_get_uint8(v___y_1160_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1209_ = lean_ctor_get(v___y_1160_, 13);
if (lean_obj_tag(v_cancelTk_x3f_1207_) == 1)
{
lean_object* v_val_1215_; uint8_t v___x_1216_; 
v_val_1215_ = lean_ctor_get(v_cancelTk_x3f_1207_, 0);
v___x_1216_ = l_IO_CancelToken_isSet(v_val_1215_);
if (v___x_1216_ == 0)
{
goto v___jp_1210_;
}
else
{
lean_object* v___x_1217_; lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_dec_ref(v_x_1158_);
v___x_1217_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_1218_ = lean_ctor_get(v___x_1217_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1217_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1217_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1217_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
else
{
goto v___jp_1210_;
}
v___jp_1163_:
{
if (lean_obj_tag(v___y_1164_) == 0)
{
return v___y_1164_;
}
else
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1172_; 
v_a_1165_ = lean_ctor_get(v___y_1164_, 0);
v_isSharedCheck_1172_ = !lean_is_exclusive(v___y_1164_);
if (v_isSharedCheck_1172_ == 0)
{
v___x_1167_ = v___y_1164_;
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___y_1164_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1172_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1170_; 
if (v_isShared_1168_ == 0)
{
v___x_1170_ = v___x_1167_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v_a_1165_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
}
}
v___jp_1173_:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
v___x_1190_ = lean_unsigned_to_nat(1u);
v___x_1191_ = lean_nat_add(v___y_1177_, v___x_1190_);
lean_inc_ref(v___y_1189_);
lean_inc(v___y_1175_);
lean_inc(v___y_1180_);
lean_inc(v___y_1185_);
lean_inc(v___y_1184_);
lean_inc(v___y_1181_);
lean_inc(v___y_1188_);
lean_inc(v___y_1187_);
lean_inc(v___y_1178_);
lean_inc_ref(v___y_1176_);
lean_inc_ref(v___y_1183_);
lean_inc_ref(v___y_1174_);
v___x_1192_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1192_, 0, v___y_1174_);
lean_ctor_set(v___x_1192_, 1, v___y_1183_);
lean_ctor_set(v___x_1192_, 2, v___y_1176_);
lean_ctor_set(v___x_1192_, 3, v___x_1191_);
lean_ctor_set(v___x_1192_, 4, v___y_1178_);
lean_ctor_set(v___x_1192_, 5, v___y_1179_);
lean_ctor_set(v___x_1192_, 6, v___y_1187_);
lean_ctor_set(v___x_1192_, 7, v___y_1188_);
lean_ctor_set(v___x_1192_, 8, v___y_1181_);
lean_ctor_set(v___x_1192_, 9, v___y_1184_);
lean_ctor_set(v___x_1192_, 10, v___y_1185_);
lean_ctor_set(v___x_1192_, 11, v___y_1180_);
lean_ctor_set(v___x_1192_, 12, v___y_1175_);
lean_ctor_set(v___x_1192_, 13, v___y_1189_);
lean_ctor_set_uint8(v___x_1192_, sizeof(void*)*14, v___y_1186_);
lean_ctor_set_uint8(v___x_1192_, sizeof(void*)*14 + 1, v___y_1182_);
lean_inc(v___y_1161_);
lean_inc(v___y_1159_);
v___x_1193_ = lean_apply_4(v_x_1158_, v___y_1159_, v___x_1192_, v___y_1161_, lean_box(0));
v___y_1164_ = v___x_1193_;
goto v___jp_1163_;
}
v___jp_1210_:
{
lean_object* v___x_1211_; uint8_t v___x_1212_; 
v___x_1211_ = lean_unsigned_to_nat(0u);
v___x_1212_ = lean_nat_dec_eq(v_maxRecDepth_1198_, v___x_1211_);
if (v___x_1212_ == 0)
{
uint8_t v___x_1213_; 
v___x_1213_ = lean_nat_dec_eq(v_currRecDepth_1197_, v_maxRecDepth_1198_);
if (v___x_1213_ == 0)
{
lean_inc(v_ref_1199_);
v___y_1174_ = v_fileName_1194_;
v___y_1175_ = v_cancelTk_x3f_1207_;
v___y_1176_ = v_options_1196_;
v___y_1177_ = v_currRecDepth_1197_;
v___y_1178_ = v_maxRecDepth_1198_;
v___y_1179_ = v_ref_1199_;
v___y_1180_ = v_currMacroScope_1205_;
v___y_1181_ = v_initHeartbeats_1202_;
v___y_1182_ = v_suppressElabErrors_1208_;
v___y_1183_ = v_fileMap_1195_;
v___y_1184_ = v_maxHeartbeats_1203_;
v___y_1185_ = v_quotContext_1204_;
v___y_1186_ = v_diag_1206_;
v___y_1187_ = v_currNamespace_1200_;
v___y_1188_ = v_openDecls_1201_;
v___y_1189_ = v_inheritedTraceOptions_1209_;
goto v___jp_1173_;
}
else
{
lean_object* v___x_1214_; 
lean_dec_ref(v_x_1158_);
lean_inc(v_ref_1199_);
v___x_1214_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1199_);
v___y_1164_ = v___x_1214_;
goto v___jp_1163_;
}
}
else
{
lean_inc(v_ref_1199_);
v___y_1174_ = v_fileName_1194_;
v___y_1175_ = v_cancelTk_x3f_1207_;
v___y_1176_ = v_options_1196_;
v___y_1177_ = v_currRecDepth_1197_;
v___y_1178_ = v_maxRecDepth_1198_;
v___y_1179_ = v_ref_1199_;
v___y_1180_ = v_currMacroScope_1205_;
v___y_1181_ = v_initHeartbeats_1202_;
v___y_1182_ = v_suppressElabErrors_1208_;
v___y_1183_ = v_fileMap_1195_;
v___y_1184_ = v_maxHeartbeats_1203_;
v___y_1185_ = v_quotContext_1204_;
v___y_1186_ = v_diag_1206_;
v___y_1187_ = v_currNamespace_1200_;
v___y_1188_ = v_openDecls_1201_;
v___y_1189_ = v_inheritedTraceOptions_1209_;
goto v___jp_1173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
lean_object* v_res_1231_; 
v_res_1231_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v_x_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
return v_res_1231_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_a_1232_, lean_object* v_x_1233_){
_start:
{
if (lean_obj_tag(v_x_1233_) == 0)
{
uint8_t v___x_1234_; 
v___x_1234_ = 0;
return v___x_1234_;
}
else
{
lean_object* v_key_1235_; lean_object* v_tail_1236_; uint8_t v___x_1237_; 
v_key_1235_ = lean_ctor_get(v_x_1233_, 0);
v_tail_1236_ = lean_ctor_get(v_x_1233_, 2);
v___x_1237_ = l_Lean_ExprStructEq_beq(v_key_1235_, v_a_1232_);
if (v___x_1237_ == 0)
{
v_x_1233_ = v_tail_1236_;
goto _start;
}
else
{
return v___x_1237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object* v_a_1239_, lean_object* v_x_1240_){
_start:
{
uint8_t v_res_1241_; lean_object* v_r_1242_; 
v_res_1241_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1239_, v_x_1240_);
lean_dec(v_x_1240_);
lean_dec_ref(v_a_1239_);
v_r_1242_ = lean_box(v_res_1241_);
return v_r_1242_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object* v_x_1243_, lean_object* v_x_1244_){
_start:
{
if (lean_obj_tag(v_x_1244_) == 0)
{
return v_x_1243_;
}
else
{
lean_object* v_key_1245_; lean_object* v_value_1246_; lean_object* v_tail_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1270_; 
v_key_1245_ = lean_ctor_get(v_x_1244_, 0);
v_value_1246_ = lean_ctor_get(v_x_1244_, 1);
v_tail_1247_ = lean_ctor_get(v_x_1244_, 2);
v_isSharedCheck_1270_ = !lean_is_exclusive(v_x_1244_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1249_ = v_x_1244_;
v_isShared_1250_ = v_isSharedCheck_1270_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_tail_1247_);
lean_inc(v_value_1246_);
lean_inc(v_key_1245_);
lean_dec(v_x_1244_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1270_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1251_; uint64_t v___x_1252_; uint64_t v___x_1253_; uint64_t v___x_1254_; uint64_t v_fold_1255_; uint64_t v___x_1256_; uint64_t v___x_1257_; uint64_t v___x_1258_; size_t v___x_1259_; size_t v___x_1260_; size_t v___x_1261_; size_t v___x_1262_; size_t v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1251_ = lean_array_get_size(v_x_1243_);
v___x_1252_ = l_Lean_ExprStructEq_hash(v_key_1245_);
v___x_1253_ = 32ULL;
v___x_1254_ = lean_uint64_shift_right(v___x_1252_, v___x_1253_);
v_fold_1255_ = lean_uint64_xor(v___x_1252_, v___x_1254_);
v___x_1256_ = 16ULL;
v___x_1257_ = lean_uint64_shift_right(v_fold_1255_, v___x_1256_);
v___x_1258_ = lean_uint64_xor(v_fold_1255_, v___x_1257_);
v___x_1259_ = lean_uint64_to_usize(v___x_1258_);
v___x_1260_ = lean_usize_of_nat(v___x_1251_);
v___x_1261_ = ((size_t)1ULL);
v___x_1262_ = lean_usize_sub(v___x_1260_, v___x_1261_);
v___x_1263_ = lean_usize_land(v___x_1259_, v___x_1262_);
v___x_1264_ = lean_array_uget_borrowed(v_x_1243_, v___x_1263_);
lean_inc(v___x_1264_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 2, v___x_1264_);
v___x_1266_ = v___x_1249_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_key_1245_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v_value_1246_);
lean_ctor_set(v_reuseFailAlloc_1269_, 2, v___x_1264_);
v___x_1266_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
lean_object* v___x_1267_; 
v___x_1267_ = lean_array_uset(v_x_1243_, v___x_1263_, v___x_1266_);
v_x_1243_ = v___x_1267_;
v_x_1244_ = v_tail_1247_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object* v_i_1271_, lean_object* v_source_1272_, lean_object* v_target_1273_){
_start:
{
lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___x_1274_ = lean_array_get_size(v_source_1272_);
v___x_1275_ = lean_nat_dec_lt(v_i_1271_, v___x_1274_);
if (v___x_1275_ == 0)
{
lean_dec_ref(v_source_1272_);
lean_dec(v_i_1271_);
return v_target_1273_;
}
else
{
lean_object* v_es_1276_; lean_object* v___x_1277_; lean_object* v_source_1278_; lean_object* v_target_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; 
v_es_1276_ = lean_array_fget(v_source_1272_, v_i_1271_);
v___x_1277_ = lean_box(0);
v_source_1278_ = lean_array_fset(v_source_1272_, v_i_1271_, v___x_1277_);
v_target_1279_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_target_1273_, v_es_1276_);
v___x_1280_ = lean_unsigned_to_nat(1u);
v___x_1281_ = lean_nat_add(v_i_1271_, v___x_1280_);
lean_dec(v_i_1271_);
v_i_1271_ = v___x_1281_;
v_source_1272_ = v_source_1278_;
v_target_1273_ = v_target_1279_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_data_1283_){
_start:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v_nbuckets_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1284_ = lean_array_get_size(v_data_1283_);
v___x_1285_ = lean_unsigned_to_nat(2u);
v_nbuckets_1286_ = lean_nat_mul(v___x_1284_, v___x_1285_);
v___x_1287_ = lean_unsigned_to_nat(0u);
v___x_1288_ = lean_box(0);
v___x_1289_ = lean_mk_array(v_nbuckets_1286_, v___x_1288_);
v___x_1290_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v___x_1287_, v_data_1283_, v___x_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(lean_object* v_a_1291_, lean_object* v_b_1292_, lean_object* v_x_1293_){
_start:
{
if (lean_obj_tag(v_x_1293_) == 0)
{
lean_dec(v_b_1292_);
lean_dec_ref(v_a_1291_);
return v_x_1293_;
}
else
{
lean_object* v_key_1294_; lean_object* v_value_1295_; lean_object* v_tail_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1308_; 
v_key_1294_ = lean_ctor_get(v_x_1293_, 0);
v_value_1295_ = lean_ctor_get(v_x_1293_, 1);
v_tail_1296_ = lean_ctor_get(v_x_1293_, 2);
v_isSharedCheck_1308_ = !lean_is_exclusive(v_x_1293_);
if (v_isSharedCheck_1308_ == 0)
{
v___x_1298_ = v_x_1293_;
v_isShared_1299_ = v_isSharedCheck_1308_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_tail_1296_);
lean_inc(v_value_1295_);
lean_inc(v_key_1294_);
lean_dec(v_x_1293_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1308_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
uint8_t v___x_1300_; 
v___x_1300_ = l_Lean_ExprStructEq_beq(v_key_1294_, v_a_1291_);
if (v___x_1300_ == 0)
{
lean_object* v___x_1301_; lean_object* v___x_1303_; 
v___x_1301_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1291_, v_b_1292_, v_tail_1296_);
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 2, v___x_1301_);
v___x_1303_ = v___x_1298_;
goto v_reusejp_1302_;
}
else
{
lean_object* v_reuseFailAlloc_1304_; 
v_reuseFailAlloc_1304_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1304_, 0, v_key_1294_);
lean_ctor_set(v_reuseFailAlloc_1304_, 1, v_value_1295_);
lean_ctor_set(v_reuseFailAlloc_1304_, 2, v___x_1301_);
v___x_1303_ = v_reuseFailAlloc_1304_;
goto v_reusejp_1302_;
}
v_reusejp_1302_:
{
return v___x_1303_;
}
}
else
{
lean_object* v___x_1306_; 
lean_dec(v_value_1295_);
lean_dec(v_key_1294_);
if (v_isShared_1299_ == 0)
{
lean_ctor_set(v___x_1298_, 1, v_b_1292_);
lean_ctor_set(v___x_1298_, 0, v_a_1291_);
v___x_1306_ = v___x_1298_;
goto v_reusejp_1305_;
}
else
{
lean_object* v_reuseFailAlloc_1307_; 
v_reuseFailAlloc_1307_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1307_, 0, v_a_1291_);
lean_ctor_set(v_reuseFailAlloc_1307_, 1, v_b_1292_);
lean_ctor_set(v_reuseFailAlloc_1307_, 2, v_tail_1296_);
v___x_1306_ = v_reuseFailAlloc_1307_;
goto v_reusejp_1305_;
}
v_reusejp_1305_:
{
return v___x_1306_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(lean_object* v_m_1309_, lean_object* v_a_1310_, lean_object* v_b_1311_){
_start:
{
lean_object* v_size_1312_; lean_object* v_buckets_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1356_; 
v_size_1312_ = lean_ctor_get(v_m_1309_, 0);
v_buckets_1313_ = lean_ctor_get(v_m_1309_, 1);
v_isSharedCheck_1356_ = !lean_is_exclusive(v_m_1309_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1315_ = v_m_1309_;
v_isShared_1316_ = v_isSharedCheck_1356_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_buckets_1313_);
lean_inc(v_size_1312_);
lean_dec(v_m_1309_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1356_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___x_1317_; uint64_t v___x_1318_; uint64_t v___x_1319_; uint64_t v___x_1320_; uint64_t v_fold_1321_; uint64_t v___x_1322_; uint64_t v___x_1323_; uint64_t v___x_1324_; size_t v___x_1325_; size_t v___x_1326_; size_t v___x_1327_; size_t v___x_1328_; size_t v___x_1329_; lean_object* v_bkt_1330_; uint8_t v___x_1331_; 
v___x_1317_ = lean_array_get_size(v_buckets_1313_);
v___x_1318_ = l_Lean_ExprStructEq_hash(v_a_1310_);
v___x_1319_ = 32ULL;
v___x_1320_ = lean_uint64_shift_right(v___x_1318_, v___x_1319_);
v_fold_1321_ = lean_uint64_xor(v___x_1318_, v___x_1320_);
v___x_1322_ = 16ULL;
v___x_1323_ = lean_uint64_shift_right(v_fold_1321_, v___x_1322_);
v___x_1324_ = lean_uint64_xor(v_fold_1321_, v___x_1323_);
v___x_1325_ = lean_uint64_to_usize(v___x_1324_);
v___x_1326_ = lean_usize_of_nat(v___x_1317_);
v___x_1327_ = ((size_t)1ULL);
v___x_1328_ = lean_usize_sub(v___x_1326_, v___x_1327_);
v___x_1329_ = lean_usize_land(v___x_1325_, v___x_1328_);
v_bkt_1330_ = lean_array_uget_borrowed(v_buckets_1313_, v___x_1329_);
v___x_1331_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1310_, v_bkt_1330_);
if (v___x_1331_ == 0)
{
lean_object* v___x_1332_; lean_object* v_size_x27_1333_; lean_object* v___x_1334_; lean_object* v_buckets_x27_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; 
v___x_1332_ = lean_unsigned_to_nat(1u);
v_size_x27_1333_ = lean_nat_add(v_size_1312_, v___x_1332_);
lean_dec(v_size_1312_);
lean_inc(v_bkt_1330_);
v___x_1334_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1334_, 0, v_a_1310_);
lean_ctor_set(v___x_1334_, 1, v_b_1311_);
lean_ctor_set(v___x_1334_, 2, v_bkt_1330_);
v_buckets_x27_1335_ = lean_array_uset(v_buckets_1313_, v___x_1329_, v___x_1334_);
v___x_1336_ = lean_unsigned_to_nat(4u);
v___x_1337_ = lean_nat_mul(v_size_x27_1333_, v___x_1336_);
v___x_1338_ = lean_unsigned_to_nat(3u);
v___x_1339_ = lean_nat_div(v___x_1337_, v___x_1338_);
lean_dec(v___x_1337_);
v___x_1340_ = lean_array_get_size(v_buckets_x27_1335_);
v___x_1341_ = lean_nat_dec_le(v___x_1339_, v___x_1340_);
lean_dec(v___x_1339_);
if (v___x_1341_ == 0)
{
lean_object* v_val_1342_; lean_object* v___x_1344_; 
v_val_1342_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_buckets_x27_1335_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 1, v_val_1342_);
lean_ctor_set(v___x_1315_, 0, v_size_x27_1333_);
v___x_1344_ = v___x_1315_;
goto v_reusejp_1343_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v_size_x27_1333_);
lean_ctor_set(v_reuseFailAlloc_1345_, 1, v_val_1342_);
v___x_1344_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1343_;
}
v_reusejp_1343_:
{
return v___x_1344_;
}
}
else
{
lean_object* v___x_1347_; 
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 1, v_buckets_x27_1335_);
lean_ctor_set(v___x_1315_, 0, v_size_x27_1333_);
v___x_1347_ = v___x_1315_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_size_x27_1333_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v_buckets_x27_1335_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
else
{
lean_object* v___x_1349_; lean_object* v_buckets_x27_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1354_; 
lean_inc(v_bkt_1330_);
v___x_1349_ = lean_box(0);
v_buckets_x27_1350_ = lean_array_uset(v_buckets_1313_, v___x_1329_, v___x_1349_);
v___x_1351_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1310_, v_b_1311_, v_bkt_1330_);
v___x_1352_ = lean_array_uset(v_buckets_x27_1350_, v___x_1329_, v___x_1351_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 1, v___x_1352_);
v___x_1354_ = v___x_1315_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v_size_1312_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v___x_1352_);
v___x_1354_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
return v___x_1354_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(lean_object* v_a_1357_, lean_object* v_e_1358_, lean_object* v_a_1359_){
_start:
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1361_ = lean_st_ref_take(v_a_1357_);
v___x_1362_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(v___x_1361_, v_e_1358_, v_a_1359_);
v___x_1363_ = lean_st_ref_set(v_a_1357_, v___x_1362_);
v___x_1364_ = lean_box(0);
return v___x_1364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed(lean_object* v_a_1365_, lean_object* v_e_1366_, lean_object* v_a_1367_, lean_object* v___y_1368_){
_start:
{
lean_object* v_res_1369_; 
v_res_1369_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2(v_a_1365_, v_e_1366_, v_a_1367_);
lean_dec(v_a_1365_);
return v_res_1369_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(lean_object* v_pre_1370_, lean_object* v_post_1371_, size_t v_sz_1372_, size_t v_i_1373_, lean_object* v_bs_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
uint8_t v___x_1379_; 
v___x_1379_ = lean_usize_dec_lt(v_i_1373_, v_sz_1372_);
if (v___x_1379_ == 0)
{
lean_object* v___x_1380_; 
lean_dec_ref(v_post_1371_);
lean_dec_ref(v_pre_1370_);
v___x_1380_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1380_, 0, v_bs_1374_);
return v___x_1380_;
}
else
{
lean_object* v_v_1381_; lean_object* v___x_1382_; 
v_v_1381_ = lean_array_uget_borrowed(v_bs_1374_, v_i_1373_);
lean_inc(v_v_1381_);
lean_inc_ref(v_post_1371_);
lean_inc_ref(v_pre_1370_);
v___x_1382_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1370_, v_post_1371_, v_v_1381_, v___y_1375_, v___y_1376_, v___y_1377_);
if (lean_obj_tag(v___x_1382_) == 0)
{
lean_object* v_a_1383_; lean_object* v___x_1384_; lean_object* v_bs_x27_1385_; size_t v___x_1386_; size_t v___x_1387_; lean_object* v___x_1388_; 
v_a_1383_ = lean_ctor_get(v___x_1382_, 0);
lean_inc(v_a_1383_);
lean_dec_ref(v___x_1382_);
v___x_1384_ = lean_unsigned_to_nat(0u);
v_bs_x27_1385_ = lean_array_uset(v_bs_1374_, v_i_1373_, v___x_1384_);
v___x_1386_ = ((size_t)1ULL);
v___x_1387_ = lean_usize_add(v_i_1373_, v___x_1386_);
v___x_1388_ = lean_array_uset(v_bs_x27_1385_, v_i_1373_, v_a_1383_);
v_i_1373_ = v___x_1387_;
v_bs_1374_ = v___x_1388_;
goto _start;
}
else
{
lean_object* v_a_1390_; lean_object* v___x_1392_; uint8_t v_isShared_1393_; uint8_t v_isSharedCheck_1397_; 
lean_dec_ref(v_bs_1374_);
lean_dec_ref(v_post_1371_);
lean_dec_ref(v_pre_1370_);
v_a_1390_ = lean_ctor_get(v___x_1382_, 0);
v_isSharedCheck_1397_ = !lean_is_exclusive(v___x_1382_);
if (v_isSharedCheck_1397_ == 0)
{
v___x_1392_ = v___x_1382_;
v_isShared_1393_ = v_isSharedCheck_1397_;
goto v_resetjp_1391_;
}
else
{
lean_inc(v_a_1390_);
lean_dec(v___x_1382_);
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
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(lean_object* v_pre_1398_, lean_object* v_post_1399_, lean_object* v_x_1400_, lean_object* v_x_1401_, lean_object* v_x_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
if (lean_obj_tag(v_x_1400_) == 5)
{
lean_object* v_fn_1407_; lean_object* v_arg_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v_fn_1407_ = lean_ctor_get(v_x_1400_, 0);
lean_inc_ref(v_fn_1407_);
v_arg_1408_ = lean_ctor_get(v_x_1400_, 1);
lean_inc_ref(v_arg_1408_);
lean_dec_ref(v_x_1400_);
v___x_1409_ = lean_array_set(v_x_1401_, v_x_1402_, v_arg_1408_);
v___x_1410_ = lean_unsigned_to_nat(1u);
v___x_1411_ = lean_nat_sub(v_x_1402_, v___x_1410_);
lean_dec(v_x_1402_);
v_x_1400_ = v_fn_1407_;
v_x_1401_ = v___x_1409_;
v_x_1402_ = v___x_1411_;
goto _start;
}
else
{
lean_object* v___x_1413_; 
lean_dec(v_x_1402_);
lean_inc_ref(v_post_1399_);
lean_inc_ref(v_pre_1398_);
v___x_1413_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1398_, v_post_1399_, v_x_1400_, v___y_1403_, v___y_1404_, v___y_1405_);
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; size_t v_sz_1415_; size_t v___x_1416_; lean_object* v___x_1417_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_a_1414_);
lean_dec_ref(v___x_1413_);
v_sz_1415_ = lean_array_size(v_x_1401_);
v___x_1416_ = ((size_t)0ULL);
lean_inc_ref(v_post_1399_);
lean_inc_ref(v_pre_1398_);
v___x_1417_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(v_pre_1398_, v_post_1399_, v_sz_1415_, v___x_1416_, v_x_1401_, v___y_1403_, v___y_1404_, v___y_1405_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v_a_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; 
v_a_1418_ = lean_ctor_get(v___x_1417_, 0);
lean_inc(v_a_1418_);
lean_dec_ref(v___x_1417_);
v___x_1419_ = l_Lean_mkAppN(v_a_1414_, v_a_1418_);
lean_dec(v_a_1418_);
v___x_1420_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1398_, v_post_1399_, v___x_1419_, v___y_1403_, v___y_1404_, v___y_1405_);
return v___x_1420_;
}
else
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1428_; 
lean_dec(v_a_1414_);
lean_dec_ref(v_post_1399_);
lean_dec_ref(v_pre_1398_);
v_a_1421_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1428_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1423_ = v___x_1417_;
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1417_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1428_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1426_; 
if (v_isShared_1424_ == 0)
{
v___x_1426_ = v___x_1423_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_a_1421_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
return v___x_1426_;
}
}
}
}
else
{
lean_dec_ref(v_x_1401_);
lean_dec_ref(v_post_1399_);
lean_dec_ref(v_pre_1398_);
return v___x_1413_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(lean_object* v___x_1429_, lean_object* v_pre_1430_, lean_object* v_e_1431_, lean_object* v_post_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
lean_object* v___y_1438_; lean_object* v___y_1439_; uint8_t v___y_1440_; lean_object* v___y_1441_; lean_object* v___y_1442_; lean_object* v___y_1443_; lean_object* v___y_1444_; uint8_t v___y_1445_; lean_object* v___y_1455_; lean_object* v___y_1456_; lean_object* v___y_1457_; lean_object* v___y_1458_; uint8_t v___y_1459_; uint8_t v___y_1460_; lean_object* v___y_1468_; lean_object* v___y_1469_; uint8_t v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1472_; uint8_t v___y_1473_; lean_object* v___x_1480_; 
v___x_1480_ = l_Lean_Core_checkSystem(v___x_1429_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v___x_1481_; 
lean_dec_ref(v___x_1480_);
lean_inc_ref(v_pre_1430_);
lean_inc(v___y_1435_);
lean_inc_ref(v___y_1434_);
lean_inc_ref(v_e_1431_);
v___x_1481_ = lean_apply_4(v_pre_1430_, v_e_1431_, v___y_1434_, v___y_1435_, lean_box(0));
if (lean_obj_tag(v___x_1481_) == 0)
{
lean_object* v_a_1482_; lean_object* v___x_1484_; uint8_t v_isShared_1485_; uint8_t v_isSharedCheck_1571_; 
v_a_1482_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1571_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1484_ = v___x_1481_;
v_isShared_1485_ = v_isSharedCheck_1571_;
goto v_resetjp_1483_;
}
else
{
lean_inc(v_a_1482_);
lean_dec(v___x_1481_);
v___x_1484_ = lean_box(0);
v_isShared_1485_ = v_isSharedCheck_1571_;
goto v_resetjp_1483_;
}
v_resetjp_1483_:
{
lean_object* v___y_1487_; 
switch(lean_obj_tag(v_a_1482_))
{
case 0:
{
lean_object* v_e_1561_; lean_object* v___x_1563_; 
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_e_1431_);
lean_dec_ref(v_pre_1430_);
v_e_1561_ = lean_ctor_get(v_a_1482_, 0);
lean_inc_ref(v_e_1561_);
lean_dec_ref(v_a_1482_);
if (v_isShared_1485_ == 0)
{
lean_ctor_set(v___x_1484_, 0, v_e_1561_);
v___x_1563_ = v___x_1484_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_e_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
case 1:
{
lean_object* v_e_1565_; lean_object* v___x_1566_; 
lean_del_object(v___x_1484_);
lean_dec_ref(v_e_1431_);
v_e_1565_ = lean_ctor_get(v_a_1482_, 0);
lean_inc_ref(v_e_1565_);
lean_dec_ref(v_a_1482_);
lean_inc_ref(v_post_1432_);
lean_inc_ref(v_pre_1430_);
v___x_1566_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1430_, v_post_1432_, v_e_1565_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1566_) == 0)
{
lean_object* v_a_1567_; lean_object* v___x_1568_; 
v_a_1567_ = lean_ctor_get(v___x_1566_, 0);
lean_inc(v_a_1567_);
lean_dec_ref(v___x_1566_);
v___x_1568_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v_a_1567_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1568_;
}
else
{
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_pre_1430_);
return v___x_1566_;
}
}
default: 
{
lean_object* v_e_x3f_1569_; 
lean_del_object(v___x_1484_);
v_e_x3f_1569_ = lean_ctor_get(v_a_1482_, 0);
lean_inc(v_e_x3f_1569_);
lean_dec_ref(v_a_1482_);
if (lean_obj_tag(v_e_x3f_1569_) == 0)
{
v___y_1487_ = v_e_1431_;
goto v___jp_1486_;
}
else
{
lean_object* v_val_1570_; 
lean_dec_ref(v_e_1431_);
v_val_1570_ = lean_ctor_get(v_e_x3f_1569_, 0);
lean_inc(v_val_1570_);
lean_dec_ref(v_e_x3f_1569_);
v___y_1487_ = v_val_1570_;
goto v___jp_1486_;
}
}
}
v___jp_1486_:
{
switch(lean_obj_tag(v___y_1487_))
{
case 7:
{
lean_object* v_binderName_1488_; lean_object* v_binderType_1489_; lean_object* v_body_1490_; uint8_t v_binderInfo_1491_; lean_object* v___x_1492_; 
v_binderName_1488_ = lean_ctor_get(v___y_1487_, 0);
lean_inc(v_binderName_1488_);
v_binderType_1489_ = lean_ctor_get(v___y_1487_, 1);
v_body_1490_ = lean_ctor_get(v___y_1487_, 2);
v_binderInfo_1491_ = lean_ctor_get_uint8(v___y_1487_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1489_);
lean_inc_ref(v_post_1432_);
lean_inc_ref(v_pre_1430_);
v___x_1492_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1430_, v_post_1432_, v_binderType_1489_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_object* v_a_1493_; lean_object* v___x_1494_; 
v_a_1493_ = lean_ctor_get(v___x_1492_, 0);
lean_inc(v_a_1493_);
lean_dec_ref(v___x_1492_);
lean_inc_ref(v_body_1490_);
lean_inc_ref(v_post_1432_);
lean_inc_ref(v_pre_1430_);
v___x_1494_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1430_, v_post_1432_, v_body_1490_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1494_) == 0)
{
lean_object* v_a_1495_; size_t v___x_1496_; size_t v___x_1497_; uint8_t v___x_1498_; 
v_a_1495_ = lean_ctor_get(v___x_1494_, 0);
lean_inc(v_a_1495_);
lean_dec_ref(v___x_1494_);
v___x_1496_ = lean_ptr_addr(v_binderType_1489_);
v___x_1497_ = lean_ptr_addr(v_a_1493_);
v___x_1498_ = lean_usize_dec_eq(v___x_1496_, v___x_1497_);
if (v___x_1498_ == 0)
{
v___y_1468_ = v___y_1487_;
v___y_1469_ = v_binderName_1488_;
v___y_1470_ = v_binderInfo_1491_;
v___y_1471_ = v_a_1495_;
v___y_1472_ = v_a_1493_;
v___y_1473_ = v___x_1498_;
goto v___jp_1467_;
}
else
{
size_t v___x_1499_; size_t v___x_1500_; uint8_t v___x_1501_; 
v___x_1499_ = lean_ptr_addr(v_body_1490_);
v___x_1500_ = lean_ptr_addr(v_a_1495_);
v___x_1501_ = lean_usize_dec_eq(v___x_1499_, v___x_1500_);
v___y_1468_ = v___y_1487_;
v___y_1469_ = v_binderName_1488_;
v___y_1470_ = v_binderInfo_1491_;
v___y_1471_ = v_a_1495_;
v___y_1472_ = v_a_1493_;
v___y_1473_ = v___x_1501_;
goto v___jp_1467_;
}
}
else
{
lean_dec(v_a_1493_);
lean_dec_ref(v___y_1487_);
lean_dec(v_binderName_1488_);
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_pre_1430_);
return v___x_1494_;
}
}
else
{
lean_dec(v_binderName_1488_);
lean_dec_ref(v___y_1487_);
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_pre_1430_);
return v___x_1492_;
}
}
case 6:
{
lean_object* v_binderName_1502_; lean_object* v_binderType_1503_; lean_object* v_body_1504_; uint8_t v_binderInfo_1505_; lean_object* v___x_1506_; 
v_binderName_1502_ = lean_ctor_get(v___y_1487_, 0);
lean_inc(v_binderName_1502_);
v_binderType_1503_ = lean_ctor_get(v___y_1487_, 1);
v_body_1504_ = lean_ctor_get(v___y_1487_, 2);
v_binderInfo_1505_ = lean_ctor_get_uint8(v___y_1487_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1503_);
lean_inc_ref(v_post_1432_);
lean_inc_ref(v_pre_1430_);
v___x_1506_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1430_, v_post_1432_, v_binderType_1503_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1506_) == 0)
{
lean_object* v_a_1507_; lean_object* v___x_1508_; 
v_a_1507_ = lean_ctor_get(v___x_1506_, 0);
lean_inc(v_a_1507_);
lean_dec_ref(v___x_1506_);
lean_inc_ref(v_body_1504_);
lean_inc_ref(v_post_1432_);
lean_inc_ref(v_pre_1430_);
v___x_1508_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1430_, v_post_1432_, v_body_1504_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v_a_1509_; size_t v___x_1510_; size_t v___x_1511_; uint8_t v___x_1512_; 
v_a_1509_ = lean_ctor_get(v___x_1508_, 0);
lean_inc(v_a_1509_);
lean_dec_ref(v___x_1508_);
v___x_1510_ = lean_ptr_addr(v_binderType_1503_);
v___x_1511_ = lean_ptr_addr(v_a_1507_);
v___x_1512_ = lean_usize_dec_eq(v___x_1510_, v___x_1511_);
if (v___x_1512_ == 0)
{
v___y_1455_ = v___y_1487_;
v___y_1456_ = v_a_1509_;
v___y_1457_ = v_a_1507_;
v___y_1458_ = v_binderName_1502_;
v___y_1459_ = v_binderInfo_1505_;
v___y_1460_ = v___x_1512_;
goto v___jp_1454_;
}
else
{
size_t v___x_1513_; size_t v___x_1514_; uint8_t v___x_1515_; 
v___x_1513_ = lean_ptr_addr(v_body_1504_);
v___x_1514_ = lean_ptr_addr(v_a_1509_);
v___x_1515_ = lean_usize_dec_eq(v___x_1513_, v___x_1514_);
v___y_1455_ = v___y_1487_;
v___y_1456_ = v_a_1509_;
v___y_1457_ = v_a_1507_;
v___y_1458_ = v_binderName_1502_;
v___y_1459_ = v_binderInfo_1505_;
v___y_1460_ = v___x_1515_;
goto v___jp_1454_;
}
}
else
{
lean_dec(v_a_1507_);
lean_dec(v_binderName_1502_);
lean_dec_ref(v___y_1487_);
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_pre_1430_);
return v___x_1508_;
}
}
else
{
lean_dec(v_binderName_1502_);
lean_dec_ref(v___y_1487_);
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_pre_1430_);
return v___x_1506_;
}
}
case 8:
{
lean_object* v_declName_1516_; lean_object* v_type_1517_; lean_object* v_value_1518_; lean_object* v_body_1519_; uint8_t v_nondep_1520_; lean_object* v___x_1521_; 
v_declName_1516_ = lean_ctor_get(v___y_1487_, 0);
lean_inc(v_declName_1516_);
v_type_1517_ = lean_ctor_get(v___y_1487_, 1);
v_value_1518_ = lean_ctor_get(v___y_1487_, 2);
v_body_1519_ = lean_ctor_get(v___y_1487_, 3);
lean_inc_ref(v_body_1519_);
v_nondep_1520_ = lean_ctor_get_uint8(v___y_1487_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_1517_);
lean_inc_ref(v_post_1432_);
lean_inc_ref(v_pre_1430_);
v___x_1521_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1430_, v_post_1432_, v_type_1517_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1521_) == 0)
{
lean_object* v_a_1522_; lean_object* v___x_1523_; 
v_a_1522_ = lean_ctor_get(v___x_1521_, 0);
lean_inc(v_a_1522_);
lean_dec_ref(v___x_1521_);
lean_inc_ref(v_value_1518_);
lean_inc_ref(v_post_1432_);
lean_inc_ref(v_pre_1430_);
v___x_1523_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1430_, v_post_1432_, v_value_1518_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1523_) == 0)
{
lean_object* v_a_1524_; lean_object* v___x_1525_; 
v_a_1524_ = lean_ctor_get(v___x_1523_, 0);
lean_inc(v_a_1524_);
lean_dec_ref(v___x_1523_);
lean_inc_ref(v_body_1519_);
lean_inc_ref(v_post_1432_);
lean_inc_ref(v_pre_1430_);
v___x_1525_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1430_, v_post_1432_, v_body_1519_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; size_t v___x_1527_; size_t v___x_1528_; uint8_t v___x_1529_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
lean_dec_ref(v___x_1525_);
v___x_1527_ = lean_ptr_addr(v_type_1517_);
v___x_1528_ = lean_ptr_addr(v_a_1522_);
v___x_1529_ = lean_usize_dec_eq(v___x_1527_, v___x_1528_);
if (v___x_1529_ == 0)
{
v___y_1438_ = v___y_1487_;
v___y_1439_ = v_a_1522_;
v___y_1440_ = v_nondep_1520_;
v___y_1441_ = v_a_1524_;
v___y_1442_ = v_declName_1516_;
v___y_1443_ = v_body_1519_;
v___y_1444_ = v_a_1526_;
v___y_1445_ = v___x_1529_;
goto v___jp_1437_;
}
else
{
size_t v___x_1530_; size_t v___x_1531_; uint8_t v___x_1532_; 
v___x_1530_ = lean_ptr_addr(v_value_1518_);
v___x_1531_ = lean_ptr_addr(v_a_1524_);
v___x_1532_ = lean_usize_dec_eq(v___x_1530_, v___x_1531_);
v___y_1438_ = v___y_1487_;
v___y_1439_ = v_a_1522_;
v___y_1440_ = v_nondep_1520_;
v___y_1441_ = v_a_1524_;
v___y_1442_ = v_declName_1516_;
v___y_1443_ = v_body_1519_;
v___y_1444_ = v_a_1526_;
v___y_1445_ = v___x_1532_;
goto v___jp_1437_;
}
}
else
{
lean_dec(v_a_1524_);
lean_dec(v_a_1522_);
lean_dec_ref(v_body_1519_);
lean_dec(v_declName_1516_);
lean_dec_ref(v___y_1487_);
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_pre_1430_);
return v___x_1525_;
}
}
else
{
lean_dec(v_a_1522_);
lean_dec_ref(v_body_1519_);
lean_dec_ref(v___y_1487_);
lean_dec(v_declName_1516_);
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_pre_1430_);
return v___x_1523_;
}
}
else
{
lean_dec_ref(v_body_1519_);
lean_dec_ref(v___y_1487_);
lean_dec(v_declName_1516_);
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_pre_1430_);
return v___x_1521_;
}
}
case 5:
{
lean_object* v_dummy_1533_; lean_object* v_nargs_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; 
v_dummy_1533_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_1534_ = l_Lean_Expr_getAppNumArgs(v___y_1487_);
lean_inc(v_nargs_1534_);
v___x_1535_ = lean_mk_array(v_nargs_1534_, v_dummy_1533_);
v___x_1536_ = lean_unsigned_to_nat(1u);
v___x_1537_ = lean_nat_sub(v_nargs_1534_, v___x_1536_);
lean_dec(v_nargs_1534_);
v___x_1538_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(v_pre_1430_, v_post_1432_, v___y_1487_, v___x_1535_, v___x_1537_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1538_;
}
case 10:
{
lean_object* v_data_1539_; lean_object* v_expr_1540_; lean_object* v___x_1541_; 
v_data_1539_ = lean_ctor_get(v___y_1487_, 0);
v_expr_1540_ = lean_ctor_get(v___y_1487_, 1);
lean_inc_ref(v_expr_1540_);
lean_inc_ref(v_post_1432_);
lean_inc_ref(v_pre_1430_);
v___x_1541_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1430_, v_post_1432_, v_expr_1540_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; size_t v___x_1543_; size_t v___x_1544_; uint8_t v___x_1545_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_a_1542_);
lean_dec_ref(v___x_1541_);
v___x_1543_ = lean_ptr_addr(v_expr_1540_);
v___x_1544_ = lean_ptr_addr(v_a_1542_);
v___x_1545_ = lean_usize_dec_eq(v___x_1543_, v___x_1544_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1546_; lean_object* v___x_1547_; 
lean_inc(v_data_1539_);
lean_dec_ref(v___y_1487_);
v___x_1546_ = l_Lean_Expr_mdata___override(v_data_1539_, v_a_1542_);
v___x_1547_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___x_1546_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1547_;
}
else
{
lean_object* v___x_1548_; 
lean_dec(v_a_1542_);
v___x_1548_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___y_1487_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1548_;
}
}
else
{
lean_dec_ref(v___y_1487_);
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_pre_1430_);
return v___x_1541_;
}
}
case 11:
{
lean_object* v_typeName_1549_; lean_object* v_idx_1550_; lean_object* v_struct_1551_; lean_object* v___x_1552_; 
v_typeName_1549_ = lean_ctor_get(v___y_1487_, 0);
v_idx_1550_ = lean_ctor_get(v___y_1487_, 1);
v_struct_1551_ = lean_ctor_get(v___y_1487_, 2);
lean_inc_ref(v_struct_1551_);
lean_inc_ref(v_post_1432_);
lean_inc_ref(v_pre_1430_);
v___x_1552_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1430_, v_post_1432_, v_struct_1551_, v___y_1433_, v___y_1434_, v___y_1435_);
if (lean_obj_tag(v___x_1552_) == 0)
{
lean_object* v_a_1553_; size_t v___x_1554_; size_t v___x_1555_; uint8_t v___x_1556_; 
v_a_1553_ = lean_ctor_get(v___x_1552_, 0);
lean_inc(v_a_1553_);
lean_dec_ref(v___x_1552_);
v___x_1554_ = lean_ptr_addr(v_struct_1551_);
v___x_1555_ = lean_ptr_addr(v_a_1553_);
v___x_1556_ = lean_usize_dec_eq(v___x_1554_, v___x_1555_);
if (v___x_1556_ == 0)
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
lean_inc(v_idx_1550_);
lean_inc(v_typeName_1549_);
lean_dec_ref(v___y_1487_);
v___x_1557_ = l_Lean_Expr_proj___override(v_typeName_1549_, v_idx_1550_, v_a_1553_);
v___x_1558_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___x_1557_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1558_;
}
else
{
lean_object* v___x_1559_; 
lean_dec(v_a_1553_);
v___x_1559_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___y_1487_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1559_;
}
}
else
{
lean_dec_ref(v___y_1487_);
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_pre_1430_);
return v___x_1552_;
}
}
default: 
{
lean_object* v___x_1560_; 
v___x_1560_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___y_1487_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1560_;
}
}
}
}
}
else
{
lean_object* v_a_1572_; lean_object* v___x_1574_; uint8_t v_isShared_1575_; uint8_t v_isSharedCheck_1579_; 
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_e_1431_);
lean_dec_ref(v_pre_1430_);
v_a_1572_ = lean_ctor_get(v___x_1481_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1481_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1574_ = v___x_1481_;
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
else
{
lean_inc(v_a_1572_);
lean_dec(v___x_1481_);
v___x_1574_ = lean_box(0);
v_isShared_1575_ = v_isSharedCheck_1579_;
goto v_resetjp_1573_;
}
v_resetjp_1573_:
{
lean_object* v___x_1577_; 
if (v_isShared_1575_ == 0)
{
v___x_1577_ = v___x_1574_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_a_1572_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1582_; uint8_t v_isShared_1583_; uint8_t v_isSharedCheck_1587_; 
lean_dec_ref(v_post_1432_);
lean_dec_ref(v_e_1431_);
lean_dec_ref(v_pre_1430_);
v_a_1580_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1587_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1587_ == 0)
{
v___x_1582_ = v___x_1480_;
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
else
{
lean_inc(v_a_1580_);
lean_dec(v___x_1480_);
v___x_1582_ = lean_box(0);
v_isShared_1583_ = v_isSharedCheck_1587_;
goto v_resetjp_1581_;
}
v_resetjp_1581_:
{
lean_object* v___x_1585_; 
if (v_isShared_1583_ == 0)
{
v___x_1585_ = v___x_1582_;
goto v_reusejp_1584_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v_a_1580_);
v___x_1585_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1584_;
}
v_reusejp_1584_:
{
return v___x_1585_;
}
}
}
v___jp_1437_:
{
if (v___y_1445_ == 0)
{
lean_object* v___x_1446_; lean_object* v___x_1447_; 
lean_dec_ref(v___y_1443_);
lean_dec_ref(v___y_1438_);
v___x_1446_ = l_Lean_Expr_letE___override(v___y_1442_, v___y_1439_, v___y_1441_, v___y_1444_, v___y_1440_);
v___x_1447_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___x_1446_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1447_;
}
else
{
size_t v___x_1448_; size_t v___x_1449_; uint8_t v___x_1450_; 
v___x_1448_ = lean_ptr_addr(v___y_1443_);
lean_dec_ref(v___y_1443_);
v___x_1449_ = lean_ptr_addr(v___y_1444_);
v___x_1450_ = lean_usize_dec_eq(v___x_1448_, v___x_1449_);
if (v___x_1450_ == 0)
{
lean_object* v___x_1451_; lean_object* v___x_1452_; 
lean_dec_ref(v___y_1438_);
v___x_1451_ = l_Lean_Expr_letE___override(v___y_1442_, v___y_1439_, v___y_1441_, v___y_1444_, v___y_1440_);
v___x_1452_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___x_1451_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1452_;
}
else
{
lean_object* v___x_1453_; 
lean_dec_ref(v___y_1444_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec_ref(v___y_1439_);
v___x_1453_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___y_1438_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1453_;
}
}
}
v___jp_1454_:
{
if (v___y_1460_ == 0)
{
lean_object* v___x_1461_; lean_object* v___x_1462_; 
lean_dec_ref(v___y_1455_);
v___x_1461_ = l_Lean_Expr_lam___override(v___y_1458_, v___y_1457_, v___y_1456_, v___y_1459_);
v___x_1462_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___x_1461_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1462_;
}
else
{
uint8_t v___x_1463_; 
v___x_1463_ = l_Lean_instBEqBinderInfo_beq(v___y_1459_, v___y_1459_);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; lean_object* v___x_1465_; 
lean_dec_ref(v___y_1455_);
v___x_1464_ = l_Lean_Expr_lam___override(v___y_1458_, v___y_1457_, v___y_1456_, v___y_1459_);
v___x_1465_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___x_1464_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1465_;
}
else
{
lean_object* v___x_1466_; 
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
lean_dec_ref(v___y_1456_);
v___x_1466_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___y_1455_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1466_;
}
}
}
v___jp_1467_:
{
if (v___y_1473_ == 0)
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
lean_dec_ref(v___y_1468_);
v___x_1474_ = l_Lean_Expr_forallE___override(v___y_1469_, v___y_1472_, v___y_1471_, v___y_1470_);
v___x_1475_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___x_1474_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1475_;
}
else
{
uint8_t v___x_1476_; 
v___x_1476_ = l_Lean_instBEqBinderInfo_beq(v___y_1470_, v___y_1470_);
if (v___x_1476_ == 0)
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
lean_dec_ref(v___y_1468_);
v___x_1477_ = l_Lean_Expr_forallE___override(v___y_1469_, v___y_1472_, v___y_1471_, v___y_1470_);
v___x_1478_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___x_1477_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1478_;
}
else
{
lean_object* v___x_1479_; 
lean_dec_ref(v___y_1472_);
lean_dec_ref(v___y_1471_);
lean_dec(v___y_1469_);
v___x_1479_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1430_, v_post_1432_, v___y_1468_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed(lean_object* v___x_1588_, lean_object* v_pre_1589_, lean_object* v_e_1590_, lean_object* v_post_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1(v___x_1588_, v_pre_1589_, v_e_1590_, v_post_1591_, v___y_1592_, v___y_1593_, v___y_1594_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec(v___y_1592_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(lean_object* v_pre_1597_, lean_object* v_post_1598_, lean_object* v_e_1599_, lean_object* v_a_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_){
_start:
{
lean_object* v___x_1604_; lean_object* v___x_1605_; 
lean_inc(v_a_1600_);
v___x_1604_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1604_, 0, lean_box(0));
lean_closure_set(v___x_1604_, 1, lean_box(0));
lean_closure_set(v___x_1604_, 2, v_a_1600_);
v___x_1605_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_box(0), v___x_1604_, v___y_1601_, v___y_1602_);
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_object* v_a_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1637_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
v_isSharedCheck_1637_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1637_ == 0)
{
v___x_1608_ = v___x_1605_;
v_isShared_1609_ = v_isSharedCheck_1637_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1606_);
lean_dec(v___x_1605_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1637_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1610_; 
v___x_1610_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_a_1606_, v_e_1599_);
lean_dec(v_a_1606_);
if (lean_obj_tag(v___x_1610_) == 0)
{
lean_object* v___x_1611_; lean_object* v___f_1612_; lean_object* v___x_1613_; 
lean_del_object(v___x_1608_);
v___x_1611_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0);
lean_inc_ref(v_e_1599_);
v___f_1612_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v___f_1612_, 0, v___x_1611_);
lean_closure_set(v___f_1612_, 1, v_pre_1597_);
lean_closure_set(v___f_1612_, 2, v_e_1599_);
lean_closure_set(v___f_1612_, 3, v_post_1598_);
v___x_1613_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v___f_1612_, v_a_1600_, v___y_1601_, v___y_1602_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; lean_object* v___f_1615_; lean_object* v___x_1616_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
lean_inc_n(v_a_1614_, 2);
lean_dec_ref(v___x_1613_);
lean_inc(v_a_1600_);
v___f_1615_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_1615_, 0, v_a_1600_);
lean_closure_set(v___f_1615_, 1, v_e_1599_);
lean_closure_set(v___f_1615_, 2, v_a_1614_);
v___x_1616_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__0(lean_box(0), v___f_1615_, v___y_1601_, v___y_1602_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1623_ == 0)
{
lean_object* v_unused_1624_; 
v_unused_1624_ = lean_ctor_get(v___x_1616_, 0);
lean_dec(v_unused_1624_);
v___x_1618_ = v___x_1616_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_dec(v___x_1616_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
lean_ctor_set(v___x_1618_, 0, v_a_1614_);
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1614_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
else
{
lean_object* v_a_1625_; lean_object* v___x_1627_; uint8_t v_isShared_1628_; uint8_t v_isSharedCheck_1632_; 
lean_dec(v_a_1614_);
v_a_1625_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1632_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1632_ == 0)
{
v___x_1627_ = v___x_1616_;
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
else
{
lean_inc(v_a_1625_);
lean_dec(v___x_1616_);
v___x_1627_ = lean_box(0);
v_isShared_1628_ = v_isSharedCheck_1632_;
goto v_resetjp_1626_;
}
v_resetjp_1626_:
{
lean_object* v___x_1630_; 
if (v_isShared_1628_ == 0)
{
v___x_1630_ = v___x_1627_;
goto v_reusejp_1629_;
}
else
{
lean_object* v_reuseFailAlloc_1631_; 
v_reuseFailAlloc_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1631_, 0, v_a_1625_);
v___x_1630_ = v_reuseFailAlloc_1631_;
goto v_reusejp_1629_;
}
v_reusejp_1629_:
{
return v___x_1630_;
}
}
}
}
else
{
lean_dec_ref(v_e_1599_);
return v___x_1613_;
}
}
else
{
lean_object* v_val_1633_; lean_object* v___x_1635_; 
lean_dec_ref(v_e_1599_);
lean_dec_ref(v_post_1598_);
lean_dec_ref(v_pre_1597_);
v_val_1633_ = lean_ctor_get(v___x_1610_, 0);
lean_inc(v_val_1633_);
lean_dec_ref(v___x_1610_);
if (v_isShared_1609_ == 0)
{
lean_ctor_set(v___x_1608_, 0, v_val_1633_);
v___x_1635_ = v___x_1608_;
goto v_reusejp_1634_;
}
else
{
lean_object* v_reuseFailAlloc_1636_; 
v_reuseFailAlloc_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1636_, 0, v_val_1633_);
v___x_1635_ = v_reuseFailAlloc_1636_;
goto v_reusejp_1634_;
}
v_reusejp_1634_:
{
return v___x_1635_;
}
}
}
}
else
{
lean_object* v_a_1638_; lean_object* v___x_1640_; uint8_t v_isShared_1641_; uint8_t v_isSharedCheck_1645_; 
lean_dec_ref(v_e_1599_);
lean_dec_ref(v_post_1598_);
lean_dec_ref(v_pre_1597_);
v_a_1638_ = lean_ctor_get(v___x_1605_, 0);
v_isSharedCheck_1645_ = !lean_is_exclusive(v___x_1605_);
if (v_isSharedCheck_1645_ == 0)
{
v___x_1640_ = v___x_1605_;
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
else
{
lean_inc(v_a_1638_);
lean_dec(v___x_1605_);
v___x_1640_ = lean_box(0);
v_isShared_1641_ = v_isSharedCheck_1645_;
goto v_resetjp_1639_;
}
v_resetjp_1639_:
{
lean_object* v___x_1643_; 
if (v_isShared_1641_ == 0)
{
v___x_1643_ = v___x_1640_;
goto v_reusejp_1642_;
}
else
{
lean_object* v_reuseFailAlloc_1644_; 
v_reuseFailAlloc_1644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1644_, 0, v_a_1638_);
v___x_1643_ = v_reuseFailAlloc_1644_;
goto v_reusejp_1642_;
}
v_reusejp_1642_:
{
return v___x_1643_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(lean_object* v_pre_1646_, lean_object* v_post_1647_, lean_object* v_e_1648_, lean_object* v_a_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v___x_1653_; 
lean_inc_ref(v_post_1647_);
lean_inc(v___y_1651_);
lean_inc_ref(v___y_1650_);
lean_inc_ref(v_e_1648_);
v___x_1653_ = lean_apply_4(v_post_1647_, v_e_1648_, v___y_1650_, v___y_1651_, lean_box(0));
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_object* v_a_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1672_; 
v_a_1654_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1656_ = v___x_1653_;
v_isShared_1657_ = v_isSharedCheck_1672_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_a_1654_);
lean_dec(v___x_1653_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1672_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
switch(lean_obj_tag(v_a_1654_))
{
case 0:
{
lean_object* v_e_1658_; lean_object* v___x_1660_; 
lean_dec_ref(v_e_1648_);
lean_dec_ref(v_post_1647_);
lean_dec_ref(v_pre_1646_);
v_e_1658_ = lean_ctor_get(v_a_1654_, 0);
lean_inc_ref(v_e_1658_);
lean_dec_ref(v_a_1654_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 0, v_e_1658_);
v___x_1660_ = v___x_1656_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v_e_1658_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
return v___x_1660_;
}
}
case 1:
{
lean_object* v_e_1662_; lean_object* v___x_1663_; 
lean_del_object(v___x_1656_);
lean_dec_ref(v_e_1648_);
v_e_1662_ = lean_ctor_get(v_a_1654_, 0);
lean_inc_ref(v_e_1662_);
lean_dec_ref(v_a_1654_);
v___x_1663_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1646_, v_post_1647_, v_e_1662_, v_a_1649_, v___y_1650_, v___y_1651_);
return v___x_1663_;
}
default: 
{
lean_object* v_e_x3f_1664_; 
lean_dec_ref(v_post_1647_);
lean_dec_ref(v_pre_1646_);
v_e_x3f_1664_ = lean_ctor_get(v_a_1654_, 0);
lean_inc(v_e_x3f_1664_);
lean_dec_ref(v_a_1654_);
if (lean_obj_tag(v_e_x3f_1664_) == 0)
{
lean_object* v___x_1666_; 
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 0, v_e_1648_);
v___x_1666_ = v___x_1656_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v_e_1648_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
return v___x_1666_;
}
}
else
{
lean_object* v_val_1668_; lean_object* v___x_1670_; 
lean_dec_ref(v_e_1648_);
v_val_1668_ = lean_ctor_get(v_e_x3f_1664_, 0);
lean_inc(v_val_1668_);
lean_dec_ref(v_e_x3f_1664_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 0, v_val_1668_);
v___x_1670_ = v___x_1656_;
goto v_reusejp_1669_;
}
else
{
lean_object* v_reuseFailAlloc_1671_; 
v_reuseFailAlloc_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1671_, 0, v_val_1668_);
v___x_1670_ = v_reuseFailAlloc_1671_;
goto v_reusejp_1669_;
}
v_reusejp_1669_:
{
return v___x_1670_;
}
}
}
}
}
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_dec_ref(v_e_1648_);
lean_dec_ref(v_post_1647_);
lean_dec_ref(v_pre_1646_);
v_a_1673_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___x_1653_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___x_1653_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_1681_, lean_object* v_post_1682_, lean_object* v_e_1683_, lean_object* v_a_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__2(v_pre_1681_, v_post_1682_, v_e_1683_, v_a_1684_, v___y_1685_, v___y_1686_);
lean_dec(v___y_1686_);
lean_dec_ref(v___y_1685_);
lean_dec(v_a_1684_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_1689_, lean_object* v_post_1690_, lean_object* v_sz_1691_, lean_object* v_i_1692_, lean_object* v_bs_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_){
_start:
{
size_t v_sz_boxed_1698_; size_t v_i_boxed_1699_; lean_object* v_res_1700_; 
v_sz_boxed_1698_ = lean_unbox_usize(v_sz_1691_);
lean_dec(v_sz_1691_);
v_i_boxed_1699_ = lean_unbox_usize(v_i_1692_);
lean_dec(v_i_1692_);
v_res_1700_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__1(v_pre_1689_, v_post_1690_, v_sz_boxed_1698_, v_i_boxed_1699_, v_bs_1693_, v___y_1694_, v___y_1695_, v___y_1696_);
lean_dec(v___y_1696_);
lean_dec_ref(v___y_1695_);
lean_dec(v___y_1694_);
return v_res_1700_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_1701_, lean_object* v_post_1702_, lean_object* v_x_1703_, lean_object* v_x_1704_, lean_object* v_x_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_){
_start:
{
lean_object* v_res_1710_; 
v_res_1710_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__4(v_pre_1701_, v_post_1702_, v_x_1703_, v_x_1704_, v_x_1705_, v___y_1706_, v___y_1707_, v___y_1708_);
lean_dec(v___y_1708_);
lean_dec_ref(v___y_1707_);
lean_dec(v___y_1706_);
return v_res_1710_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___boxed(lean_object* v_pre_1711_, lean_object* v_post_1712_, lean_object* v_e_1713_, lean_object* v_a_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1711_, v_post_1712_, v_e_1713_, v_a_1714_, v___y_1715_, v___y_1716_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec(v_a_1714_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(lean_object* v_input_1719_, lean_object* v_pre_1720_, lean_object* v_post_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_){
_start:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; lean_object* v_a_1727_; lean_object* v___x_1728_; 
v___x_1725_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_1726_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_box(0), v___x_1725_, v___y_1722_, v___y_1723_);
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
lean_inc(v_a_1727_);
lean_dec_ref(v___x_1726_);
v___x_1728_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0(v_pre_1720_, v_post_1721_, v_input_1719_, v_a_1727_, v___y_1722_, v___y_1723_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1733_; uint8_t v_isShared_1734_; uint8_t v_isSharedCheck_1738_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1729_);
lean_dec_ref(v___x_1728_);
v___x_1730_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_1730_, 0, lean_box(0));
lean_closure_set(v___x_1730_, 1, lean_box(0));
lean_closure_set(v___x_1730_, 2, v_a_1727_);
v___x_1731_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___lam__0(lean_box(0), v___x_1730_, v___y_1722_, v___y_1723_);
v_isSharedCheck_1738_ = !lean_is_exclusive(v___x_1731_);
if (v_isSharedCheck_1738_ == 0)
{
lean_object* v_unused_1739_; 
v_unused_1739_ = lean_ctor_get(v___x_1731_, 0);
lean_dec(v_unused_1739_);
v___x_1733_ = v___x_1731_;
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
else
{
lean_dec(v___x_1731_);
v___x_1733_ = lean_box(0);
v_isShared_1734_ = v_isSharedCheck_1738_;
goto v_resetjp_1732_;
}
v_resetjp_1732_:
{
lean_object* v___x_1736_; 
if (v_isShared_1734_ == 0)
{
lean_ctor_set(v___x_1733_, 0, v_a_1729_);
v___x_1736_ = v___x_1733_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_a_1729_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
else
{
lean_dec(v_a_1727_);
return v___x_1728_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0___boxed(lean_object* v_input_1740_, lean_object* v_pre_1741_, lean_object* v_post_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v_res_1746_; 
v_res_1746_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_input_1740_, v_pre_1741_, v_post_1742_, v___y_1743_, v___y_1744_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
return v_res_1746_;
}
}
static lean_object* _init_l_Lean_Core_betaReduce___closed__0(void){
_start:
{
lean_object* v___f_1747_; 
v___f_1747_ = lean_alloc_closure((void*)(l_Lean_Core_betaReduce___lam__0___boxed), 4, 0);
return v___f_1747_;
}
}
static lean_object* _init_l_Lean_Core_betaReduce___closed__1(void){
_start:
{
lean_object* v___f_1748_; 
v___f_1748_ = lean_alloc_closure((void*)(l_Lean_Core_betaReduce___lam__1___boxed), 4, 0);
return v___f_1748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce(lean_object* v_e_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_){
_start:
{
lean_object* v___f_1753_; lean_object* v___f_1754_; lean_object* v___x_1755_; 
v___f_1753_ = lean_obj_once(&l_Lean_Core_betaReduce___closed__0, &l_Lean_Core_betaReduce___closed__0_once, _init_l_Lean_Core_betaReduce___closed__0);
v___f_1754_ = lean_obj_once(&l_Lean_Core_betaReduce___closed__1, &l_Lean_Core_betaReduce___closed__1_once, _init_l_Lean_Core_betaReduce___closed__1);
v___x_1755_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_1749_, v___f_1753_, v___f_1754_, v_a_1750_, v_a_1751_);
return v___x_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_betaReduce___boxed(lean_object* v_e_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l_Lean_Core_betaReduce(v_e_1756_, v_a_1757_, v_a_1758_);
lean_dec(v_a_1758_);
lean_dec_ref(v_a_1757_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1761_, lean_object* v_m_1762_, lean_object* v_a_1763_){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_m_1762_, v_a_1763_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1765_, lean_object* v_m_1766_, lean_object* v_a_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3(v_00_u03b2_1765_, v_m_1766_, v_a_1767_);
lean_dec_ref(v_a_1767_);
lean_dec_ref(v_m_1766_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_1769_, lean_object* v_ref_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_){
_start:
{
lean_object* v___x_1774_; 
v___x_1774_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_1770_);
return v___x_1774_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1775_, lean_object* v_ref_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_1775_, v_ref_1776_, v___y_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8(lean_object* v_00_u03b1_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_){
_start:
{
lean_object* v___x_1785_; 
v___x_1785_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___redArg();
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8___boxed(lean_object* v_00_u03b1_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__8(v_00_u03b1_1786_, v___y_1787_, v___y_1788_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
return v_res_1790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_1791_, lean_object* v_x_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_){
_start:
{
lean_object* v___x_1797_; 
v___x_1797_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___redArg(v_x_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_1798_, lean_object* v_x_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_){
_start:
{
lean_object* v_res_1804_; 
v_res_1804_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5(v_00_u03b1_1798_, v_x_1799_, v___y_1800_, v___y_1801_, v___y_1802_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec(v___y_1800_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_1805_, lean_object* v_m_1806_, lean_object* v_a_1807_, lean_object* v_b_1808_){
_start:
{
lean_object* v___x_1809_; 
v___x_1809_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6___redArg(v_m_1806_, v_a_1807_, v_b_1808_);
return v___x_1809_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1810_, lean_object* v_a_1811_, lean_object* v_x_1812_){
_start:
{
lean_object* v___x_1813_; 
v___x_1813_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___redArg(v_a_1811_, v_x_1812_);
return v___x_1813_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_1814_, lean_object* v_a_1815_, lean_object* v_x_1816_){
_start:
{
lean_object* v_res_1817_; 
v_res_1817_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_1814_, v_a_1815_, v_x_1816_);
lean_dec(v_x_1816_);
lean_dec_ref(v_a_1815_);
return v_res_1817_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_1818_, lean_object* v_a_1819_, lean_object* v_x_1820_){
_start:
{
uint8_t v___x_1821_; 
v___x_1821_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___redArg(v_a_1819_, v_x_1820_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10___boxed(lean_object* v_00_u03b2_1822_, lean_object* v_a_1823_, lean_object* v_x_1824_){
_start:
{
uint8_t v_res_1825_; lean_object* v_r_1826_; 
v_res_1825_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__10(v_00_u03b2_1822_, v_a_1823_, v_x_1824_);
lean_dec(v_x_1824_);
lean_dec_ref(v_a_1823_);
v_r_1826_ = lean_box(v_res_1825_);
return v_r_1826_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_1827_, lean_object* v_data_1828_){
_start:
{
lean_object* v___x_1829_; 
v___x_1829_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11___redArg(v_data_1828_);
return v___x_1829_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12(lean_object* v_00_u03b2_1830_, lean_object* v_a_1831_, lean_object* v_b_1832_, lean_object* v_x_1833_){
_start:
{
lean_object* v___x_1834_; 
v___x_1834_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__12___redArg(v_a_1831_, v_b_1832_, v_x_1833_);
return v___x_1834_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_1835_, lean_object* v_i_1836_, lean_object* v_source_1837_, lean_object* v_target_1838_){
_start:
{
lean_object* v___x_1839_; 
v___x_1839_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v_i_1836_, v_source_1837_, v_target_1838_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_1840_, lean_object* v_x_1841_, lean_object* v_x_1842_){
_start:
{
lean_object* v___x_1843_; 
v___x_1843_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_x_1841_, v_x_1842_);
return v___x_1843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0(lean_object* v_toApplicative_1844_, lean_object* v_a_1845_){
_start:
{
lean_object* v_toPure_1846_; lean_object* v___x_1847_; 
v_toPure_1846_ = lean_ctor_get(v_toApplicative_1844_, 1);
lean_inc(v_toPure_1846_);
lean_dec_ref(v_toApplicative_1844_);
v___x_1847_ = lean_apply_2(v_toPure_1846_, lean_box(0), v_a_1845_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13(lean_object* v___x_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v___x_1854_; 
v___x_1854_ = l_Lean_Core_checkSystem(v___x_1848_, v___y_1851_, v___y_1852_);
return v___x_1854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___boxed(lean_object* v___x_1855_, lean_object* v___y_1856_, lean_object* v___y_1857_, lean_object* v___y_1858_, lean_object* v___y_1859_, lean_object* v___y_1860_){
_start:
{
lean_object* v_res_1861_; 
v_res_1861_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13(v___x_1855_, v___y_1856_, v___y_1857_, v___y_1858_, v___y_1859_);
lean_dec(v___y_1859_);
lean_dec_ref(v___y_1858_);
lean_dec(v___y_1857_);
lean_dec_ref(v___y_1856_);
return v_res_1861_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___closed__0(void){
_start:
{
lean_object* v___x_1862_; lean_object* v___f_1863_; 
v___x_1862_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0);
v___f_1863_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__13___boxed), 6, 1);
lean_closure_set(v___f_1863_, 0, v___x_1862_);
return v___f_1863_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14(lean_object* v_inst_1864_, lean_object* v_x_1865_, lean_object* v___x_1866_, lean_object* v___x_1867_, lean_object* v_inst_1868_, lean_object* v___f_1869_, lean_object* v___x_1870_, lean_object* v___x_1871_, lean_object* v_a_1872_, lean_object* v_toBind_1873_, lean_object* v___f_1874_, lean_object* v_toApplicative_1875_, lean_object* v_a_1876_){
_start:
{
if (lean_obj_tag(v_a_1876_) == 0)
{
lean_object* v___f_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_3801__overap_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; 
lean_dec_ref(v_toApplicative_1875_);
v___f_1877_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___closed__0);
v___x_1878_ = lean_apply_2(v_inst_1864_, lean_box(0), v___f_1877_);
lean_inc_ref(v___x_1867_);
lean_inc_ref(v___x_1866_);
v___x_1879_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonadLift___aux__1___boxed), 10, 9);
lean_closure_set(v___x_1879_, 0, lean_box(0));
lean_closure_set(v___x_1879_, 1, lean_box(0));
lean_closure_set(v___x_1879_, 2, lean_box(0));
lean_closure_set(v___x_1879_, 3, lean_box(0));
lean_closure_set(v___x_1879_, 4, v_x_1865_);
lean_closure_set(v___x_1879_, 5, v___x_1866_);
lean_closure_set(v___x_1879_, 6, v___x_1867_);
lean_closure_set(v___x_1879_, 7, lean_box(0));
lean_closure_set(v___x_1879_, 8, v___x_1878_);
v___x_1880_ = lean_alloc_closure((void*)(l_Lean_MonadCacheT_instMonad___aux__13___boxed), 13, 12);
lean_closure_set(v___x_1880_, 0, lean_box(0));
lean_closure_set(v___x_1880_, 1, lean_box(0));
lean_closure_set(v___x_1880_, 2, lean_box(0));
lean_closure_set(v___x_1880_, 3, lean_box(0));
lean_closure_set(v___x_1880_, 4, v_x_1865_);
lean_closure_set(v___x_1880_, 5, v___x_1866_);
lean_closure_set(v___x_1880_, 6, v___x_1867_);
lean_closure_set(v___x_1880_, 7, v_inst_1868_);
lean_closure_set(v___x_1880_, 8, lean_box(0));
lean_closure_set(v___x_1880_, 9, lean_box(0));
lean_closure_set(v___x_1880_, 10, v___x_1879_);
lean_closure_set(v___x_1880_, 11, v___f_1869_);
v___x_3801__overap_1881_ = l_Lean_Meta_withIncRecDepth___redArg(v___x_1870_, v___x_1871_, v___x_1880_);
lean_inc(v_a_1872_);
v___x_1882_ = lean_apply_1(v___x_3801__overap_1881_, v_a_1872_);
v___x_1883_ = lean_apply_4(v_toBind_1873_, lean_box(0), lean_box(0), v___x_1882_, v___f_1874_);
return v___x_1883_;
}
else
{
lean_object* v_val_1884_; lean_object* v_toPure_1885_; lean_object* v___x_1886_; 
lean_dec(v___f_1874_);
lean_dec(v_toBind_1873_);
lean_dec_ref(v___x_1871_);
lean_dec_ref(v___x_1870_);
lean_dec(v___f_1869_);
lean_dec_ref(v_inst_1868_);
lean_dec_ref(v___x_1867_);
lean_dec_ref(v___x_1866_);
lean_dec(v_inst_1864_);
v_val_1884_ = lean_ctor_get(v_a_1876_, 0);
lean_inc(v_val_1884_);
lean_dec_ref(v_a_1876_);
v_toPure_1885_ = lean_ctor_get(v_toApplicative_1875_, 1);
lean_inc(v_toPure_1885_);
lean_dec_ref(v_toApplicative_1875_);
v___x_1886_ = lean_apply_2(v_toPure_1885_, lean_box(0), v_val_1884_);
return v___x_1886_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___boxed(lean_object* v_inst_1887_, lean_object* v_x_1888_, lean_object* v___x_1889_, lean_object* v___x_1890_, lean_object* v_inst_1891_, lean_object* v___f_1892_, lean_object* v___x_1893_, lean_object* v___x_1894_, lean_object* v_a_1895_, lean_object* v_toBind_1896_, lean_object* v___f_1897_, lean_object* v_toApplicative_1898_, lean_object* v_a_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14(v_inst_1887_, v_x_1888_, v___x_1889_, v___x_1890_, v_inst_1891_, v___f_1892_, v___x_1893_, v___x_1894_, v_a_1895_, v_toBind_1896_, v___f_1897_, v_toApplicative_1898_, v_a_1899_);
lean_dec(v_a_1895_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(lean_object* v_toApplicative_1901_, lean_object* v_acc_1902_, lean_object* v_next_1903_, lean_object* v_a_1904_){
_start:
{
lean_object* v_toPure_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v_toPure_1905_ = lean_ctor_get(v_toApplicative_1901_, 1);
lean_inc(v_toPure_1905_);
lean_dec_ref(v_toApplicative_1901_);
v___x_1906_ = lean_array_fset(v_acc_1902_, v_next_1903_, v_a_1904_);
v___x_1907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1906_);
v___x_1908_ = lean_apply_2(v_toPure_1905_, lean_box(0), v___x_1907_);
return v___x_1908_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed(lean_object* v_toApplicative_1909_, lean_object* v_acc_1910_, lean_object* v_next_1911_, lean_object* v_a_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1(v_toApplicative_1909_, v_acc_1910_, v_next_1911_, v_a_1912_);
lean_dec(v_next_1911_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(lean_object* v_toApplicative_1914_, lean_object* v_next_1915_, lean_object* v_G_1916_, lean_object* v___y_1917_, lean_object* v_a_1918_){
_start:
{
if (lean_obj_tag(v_a_1918_) == 0)
{
lean_object* v_a_1919_; lean_object* v_toPure_1920_; lean_object* v___x_1921_; 
lean_dec(v_G_1916_);
v_a_1919_ = lean_ctor_get(v_a_1918_, 0);
lean_inc(v_a_1919_);
lean_dec_ref(v_a_1918_);
v_toPure_1920_ = lean_ctor_get(v_toApplicative_1914_, 1);
lean_inc(v_toPure_1920_);
lean_dec_ref(v_toApplicative_1914_);
v___x_1921_ = lean_apply_2(v_toPure_1920_, lean_box(0), v_a_1919_);
return v___x_1921_;
}
else
{
lean_object* v_a_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; 
lean_dec_ref(v_toApplicative_1914_);
v_a_1922_ = lean_ctor_get(v_a_1918_, 0);
lean_inc(v_a_1922_);
lean_dec_ref(v_a_1918_);
v___x_1923_ = lean_unsigned_to_nat(1u);
v___x_1924_ = lean_nat_add(v_next_1915_, v___x_1923_);
lean_inc(v___y_1917_);
v___x_1925_ = lean_apply_5(v_G_1916_, v___x_1924_, v_a_1922_, lean_box(0), lean_box(0), v___y_1917_);
return v___x_1925_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed(lean_object* v_toApplicative_1926_, lean_object* v_next_1927_, lean_object* v_G_1928_, lean_object* v___y_1929_, lean_object* v_a_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2(v_toApplicative_1926_, v_next_1927_, v_G_1928_, v___y_1929_, v_a_1930_);
lean_dec(v___y_1929_);
lean_dec(v_next_1927_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(lean_object* v___f_1932_, lean_object* v___y_1933_, lean_object* v_a_1934_){
_start:
{
lean_object* v___x_1935_; 
lean_inc(v___y_1933_);
v___x_1935_ = lean_apply_2(v___f_1932_, v_a_1934_, v___y_1933_);
return v___x_1935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed(lean_object* v___f_1936_, lean_object* v___y_1937_, lean_object* v_a_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7(v___f_1936_, v___y_1937_, v_a_1938_);
lean_dec(v___y_1937_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(lean_object* v___x_1940_, lean_object* v___x_1941_, lean_object* v_binderName_1942_, uint8_t v_binderInfo_1943_, lean_object* v___f_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_){
_start:
{
uint8_t v___x_1947_; lean_object* v___x_3878__overap_1948_; lean_object* v___x_1949_; 
v___x_1947_ = 0;
v___x_3878__overap_1948_ = l_Lean_Meta_withLocalDecl___redArg(v___x_1940_, v___x_1941_, v_binderName_1942_, v_binderInfo_1943_, v_a_1946_, v___f_1944_, v___x_1947_);
lean_inc(v_a_1945_);
v___x_1949_ = lean_apply_1(v___x_3878__overap_1948_, v_a_1945_);
return v___x_1949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed(lean_object* v___x_1950_, lean_object* v___x_1951_, lean_object* v_binderName_1952_, lean_object* v_binderInfo_1953_, lean_object* v___f_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_){
_start:
{
uint8_t v_binderInfo_4027__boxed_1957_; lean_object* v_res_1958_; 
v_binderInfo_4027__boxed_1957_ = lean_unbox(v_binderInfo_1953_);
v_res_1958_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1(v___x_1950_, v___x_1951_, v_binderName_1952_, v_binderInfo_4027__boxed_1957_, v___f_1954_, v_a_1955_, v_a_1956_);
lean_dec(v_a_1955_);
return v_res_1958_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(lean_object* v_fvars_1959_, uint8_t v_usedLetOnly_1960_, lean_object* v_inst_1961_, lean_object* v_toBind_1962_, lean_object* v___f_1963_, lean_object* v_a_1964_){
_start:
{
uint8_t v___x_1965_; uint8_t v___x_1966_; uint8_t v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1965_ = 0;
v___x_1966_ = 1;
v___x_1967_ = 1;
v___x_1968_ = lean_box(v___x_1965_);
v___x_1969_ = lean_box(v_usedLetOnly_1960_);
v___x_1970_ = lean_box(v___x_1965_);
v___x_1971_ = lean_box(v___x_1966_);
v___x_1972_ = lean_box(v___x_1967_);
v___x_1973_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLambdaFVars___boxed), 12, 7);
lean_closure_set(v___x_1973_, 0, v_fvars_1959_);
lean_closure_set(v___x_1973_, 1, v_a_1964_);
lean_closure_set(v___x_1973_, 2, v___x_1968_);
lean_closure_set(v___x_1973_, 3, v___x_1969_);
lean_closure_set(v___x_1973_, 4, v___x_1970_);
lean_closure_set(v___x_1973_, 5, v___x_1971_);
lean_closure_set(v___x_1973_, 6, v___x_1972_);
v___x_1974_ = lean_apply_2(v_inst_1961_, lean_box(0), v___x_1973_);
v___x_1975_ = lean_apply_4(v_toBind_1962_, lean_box(0), lean_box(0), v___x_1974_, v___f_1963_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed(lean_object* v_fvars_1976_, lean_object* v_usedLetOnly_1977_, lean_object* v_inst_1978_, lean_object* v_toBind_1979_, lean_object* v___f_1980_, lean_object* v_a_1981_){
_start:
{
uint8_t v_usedLetOnly_boxed_1982_; lean_object* v_res_1983_; 
v_usedLetOnly_boxed_1982_ = lean_unbox(v_usedLetOnly_1977_);
v_res_1983_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3(v_fvars_1976_, v_usedLetOnly_boxed_1982_, v_inst_1978_, v_toBind_1979_, v___f_1980_, v_a_1981_);
return v_res_1983_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(lean_object* v___x_1984_, lean_object* v___x_1985_, lean_object* v_declName_1986_, lean_object* v_a_1987_, lean_object* v___f_1988_, uint8_t v_nondep_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_){
_start:
{
uint8_t v___x_1992_; lean_object* v___x_3820__overap_1993_; lean_object* v___x_1994_; 
v___x_1992_ = 0;
v___x_3820__overap_1993_ = l_Lean_Meta_withLetDecl___redArg(v___x_1984_, v___x_1985_, v_declName_1986_, v_a_1987_, v_a_1991_, v___f_1988_, v_nondep_1989_, v___x_1992_);
lean_inc(v_a_1990_);
v___x_1994_ = lean_apply_1(v___x_3820__overap_1993_, v_a_1990_);
return v___x_1994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed(lean_object* v___x_1995_, lean_object* v___x_1996_, lean_object* v_declName_1997_, lean_object* v_a_1998_, lean_object* v___f_1999_, lean_object* v_nondep_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_){
_start:
{
uint8_t v_nondep_4075__boxed_2003_; lean_object* v_res_2004_; 
v_nondep_4075__boxed_2003_ = lean_unbox(v_nondep_2000_);
v_res_2004_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1(v___x_1995_, v___x_1996_, v_declName_1997_, v_a_1998_, v___f_1999_, v_nondep_4075__boxed_2003_, v_a_2001_, v_a_2002_);
lean_dec(v_a_2001_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(lean_object* v_fvars_2005_, uint8_t v_usedLetOnly_2006_, lean_object* v_inst_2007_, lean_object* v_toBind_2008_, lean_object* v___f_2009_, lean_object* v_a_2010_){
_start:
{
uint8_t v___x_2011_; uint8_t v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2011_ = 0;
v___x_2012_ = 1;
v___x_2013_ = lean_box(v_usedLetOnly_2006_);
v___x_2014_ = lean_box(v___x_2011_);
v___x_2015_ = lean_box(v___x_2012_);
v___x_2016_ = lean_alloc_closure((void*)(l_Lean_Meta_mkLetFVars___boxed), 10, 5);
lean_closure_set(v___x_2016_, 0, v_fvars_2005_);
lean_closure_set(v___x_2016_, 1, v_a_2010_);
lean_closure_set(v___x_2016_, 2, v___x_2013_);
lean_closure_set(v___x_2016_, 3, v___x_2014_);
lean_closure_set(v___x_2016_, 4, v___x_2015_);
v___x_2017_ = lean_apply_2(v_inst_2007_, lean_box(0), v___x_2016_);
v___x_2018_ = lean_apply_4(v_toBind_2008_, lean_box(0), lean_box(0), v___x_2017_, v___f_2009_);
return v___x_2018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed(lean_object* v_fvars_2019_, lean_object* v_usedLetOnly_2020_, lean_object* v_inst_2021_, lean_object* v_toBind_2022_, lean_object* v___f_2023_, lean_object* v_a_2024_){
_start:
{
uint8_t v_usedLetOnly_boxed_2025_; lean_object* v_res_2026_; 
v_usedLetOnly_boxed_2025_ = lean_unbox(v_usedLetOnly_2020_);
v_res_2026_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4(v_fvars_2019_, v_usedLetOnly_boxed_2025_, v_inst_2021_, v_toBind_2022_, v___f_2023_, v_a_2024_);
return v_res_2026_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(lean_object* v_fvars_2027_, uint8_t v_usedLetOnly_2028_, lean_object* v_inst_2029_, lean_object* v_toBind_2030_, lean_object* v___f_2031_, lean_object* v_a_2032_){
_start:
{
uint8_t v___x_2033_; uint8_t v___x_2034_; uint8_t v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; 
v___x_2033_ = 0;
v___x_2034_ = 1;
v___x_2035_ = 1;
v___x_2036_ = lean_box(v___x_2033_);
v___x_2037_ = lean_box(v_usedLetOnly_2028_);
v___x_2038_ = lean_box(v___x_2034_);
v___x_2039_ = lean_box(v___x_2035_);
v___x_2040_ = lean_alloc_closure((void*)(l_Lean_Meta_mkForallFVars___boxed), 11, 6);
lean_closure_set(v___x_2040_, 0, v_fvars_2027_);
lean_closure_set(v___x_2040_, 1, v_a_2032_);
lean_closure_set(v___x_2040_, 2, v___x_2036_);
lean_closure_set(v___x_2040_, 3, v___x_2037_);
lean_closure_set(v___x_2040_, 4, v___x_2038_);
lean_closure_set(v___x_2040_, 5, v___x_2039_);
v___x_2041_ = lean_apply_2(v_inst_2029_, lean_box(0), v___x_2040_);
v___x_2042_ = lean_apply_4(v_toBind_2030_, lean_box(0), lean_box(0), v___x_2041_, v___f_2031_);
return v___x_2042_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed(lean_object* v_fvars_2043_, lean_object* v_usedLetOnly_2044_, lean_object* v_inst_2045_, lean_object* v_toBind_2046_, lean_object* v___f_2047_, lean_object* v_a_2048_){
_start:
{
uint8_t v_usedLetOnly_boxed_2049_; lean_object* v_res_2050_; 
v_usedLetOnly_boxed_2049_ = lean_unbox(v_usedLetOnly_2044_);
v_res_2050_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3(v_fvars_2043_, v_usedLetOnly_boxed_2049_, v_inst_2045_, v_toBind_2046_, v___f_2047_, v_a_2048_);
return v_res_2050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(lean_object* v_f_2051_, lean_object* v_inst_2052_, lean_object* v_inst_2053_, lean_object* v_inst_2054_, lean_object* v_pre_2055_, lean_object* v_post_2056_, uint8_t v_usedLetOnly_2057_, uint8_t v_skipConstInApp_2058_, uint8_t v_skipInstances_2059_, lean_object* v_x_2060_, lean_object* v_x_2061_, lean_object* v___y_2062_, lean_object* v_a_2063_){
_start:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2064_ = l_Lean_mkAppN(v_f_2051_, v_a_2063_);
v___x_2065_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2052_, v_inst_2053_, v_inst_2054_, v_pre_2055_, v_post_2056_, v_usedLetOnly_2057_, v_skipConstInApp_2058_, v_skipInstances_2059_, v_x_2060_, v_x_2061_, v___x_2064_, v___y_2062_);
return v___x_2065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed(lean_object* v_f_2066_, lean_object* v_inst_2067_, lean_object* v_inst_2068_, lean_object* v_inst_2069_, lean_object* v_pre_2070_, lean_object* v_post_2071_, lean_object* v_usedLetOnly_2072_, lean_object* v_skipConstInApp_2073_, lean_object* v_skipInstances_2074_, lean_object* v_x_2075_, lean_object* v_x_2076_, lean_object* v___y_2077_, lean_object* v_a_2078_){
_start:
{
uint8_t v_usedLetOnly_boxed_2079_; uint8_t v_skipConstInApp_boxed_2080_; uint8_t v_skipInstances_boxed_2081_; lean_object* v_res_2082_; 
v_usedLetOnly_boxed_2079_ = lean_unbox(v_usedLetOnly_2072_);
v_skipConstInApp_boxed_2080_ = lean_unbox(v_skipConstInApp_2073_);
v_skipInstances_boxed_2081_ = lean_unbox(v_skipInstances_2074_);
v_res_2082_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5(v_f_2066_, v_inst_2067_, v_inst_2068_, v_inst_2069_, v_pre_2070_, v_post_2071_, v_usedLetOnly_boxed_2079_, v_skipConstInApp_boxed_2080_, v_skipInstances_boxed_2081_, v_x_2075_, v_x_2076_, v___y_2077_, v_a_2078_);
lean_dec_ref(v_a_2078_);
lean_dec(v___y_2077_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed(lean_object* v_inst_2083_, lean_object* v_inst_2084_, lean_object* v_inst_2085_, lean_object* v_pre_2086_, lean_object* v_post_2087_, lean_object* v_usedLetOnly_2088_, lean_object* v_skipConstInApp_2089_, lean_object* v_skipInstances_2090_, lean_object* v_x_2091_, lean_object* v_x_2092_, lean_object* v_e_2093_, lean_object* v_a_2094_){
_start:
{
uint8_t v_usedLetOnly_boxed_2095_; uint8_t v_skipConstInApp_boxed_2096_; uint8_t v_skipInstances_boxed_2097_; lean_object* v_res_2098_; 
v_usedLetOnly_boxed_2095_ = lean_unbox(v_usedLetOnly_2088_);
v_skipConstInApp_boxed_2096_ = lean_unbox(v_skipConstInApp_2089_);
v_skipInstances_boxed_2097_ = lean_unbox(v_skipInstances_2090_);
v_res_2098_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2083_, v_inst_2084_, v_inst_2085_, v_pre_2086_, v_post_2087_, v_usedLetOnly_boxed_2095_, v_skipConstInApp_boxed_2096_, v_skipInstances_boxed_2097_, v_x_2091_, v_x_2092_, v_e_2093_, v_a_2094_);
lean_dec(v_a_2094_);
return v_res_2098_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(lean_object* v___x_2099_, lean_object* v_toApplicative_2100_, lean_object* v_toBind_2101_, lean_object* v___f_2102_, lean_object* v_paramInfo_2103_, lean_object* v_inst_2104_, lean_object* v_inst_2105_, lean_object* v_inst_2106_, lean_object* v_pre_2107_, lean_object* v_post_2108_, uint8_t v_usedLetOnly_2109_, uint8_t v_skipConstInApp_2110_, uint8_t v_skipInstances_2111_, lean_object* v_x_2112_, lean_object* v_x_2113_, lean_object* v_next_2114_, lean_object* v_acc_2115_, lean_object* v_h_2116_, lean_object* v_G_2117_, lean_object* v___y_2118_){
_start:
{
uint8_t v___x_2119_; 
v___x_2119_ = lean_nat_dec_lt(v_next_2114_, v___x_2099_);
if (v___x_2119_ == 0)
{
lean_object* v_toPure_2120_; lean_object* v___x_2121_; 
lean_dec(v_G_2117_);
lean_dec(v_next_2114_);
lean_dec(v_x_2113_);
lean_dec(v_post_2108_);
lean_dec(v_pre_2107_);
lean_dec_ref(v_inst_2106_);
lean_dec(v_inst_2105_);
lean_dec_ref(v_inst_2104_);
lean_dec(v___f_2102_);
lean_dec(v_toBind_2101_);
v_toPure_2120_ = lean_ctor_get(v_toApplicative_2100_, 1);
lean_inc(v_toPure_2120_);
lean_dec_ref(v_toApplicative_2100_);
v___x_2121_ = lean_apply_2(v_toPure_2120_, lean_box(0), v_acc_2115_);
return v___x_2121_;
}
else
{
lean_object* v___f_2122_; lean_object* v___y_2124_; lean_object* v___x_2127_; lean_object* v___x_2128_; uint8_t v___x_2129_; 
lean_inc(v___y_2118_);
lean_inc(v_next_2114_);
lean_inc_ref(v_toApplicative_2100_);
v___f_2122_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_2122_, 0, v_toApplicative_2100_);
lean_closure_set(v___f_2122_, 1, v_next_2114_);
lean_closure_set(v___f_2122_, 2, v_G_2117_);
lean_closure_set(v___f_2122_, 3, v___y_2118_);
v___x_2127_ = lean_array_fget_borrowed(v_acc_2115_, v_next_2114_);
v___x_2128_ = lean_array_get_size(v_paramInfo_2103_);
v___x_2129_ = lean_nat_dec_lt(v_next_2114_, v___x_2128_);
if (v___x_2129_ == 0)
{
lean_object* v___f_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; 
lean_inc(v___x_2127_);
v___f_2130_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2130_, 0, v_toApplicative_2100_);
lean_closure_set(v___f_2130_, 1, v_acc_2115_);
lean_closure_set(v___f_2130_, 2, v_next_2114_);
v___x_2131_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2104_, v_inst_2105_, v_inst_2106_, v_pre_2107_, v_post_2108_, v_usedLetOnly_2109_, v_skipConstInApp_2110_, v_skipInstances_2111_, v_x_2112_, v_x_2113_, v___x_2127_, v___y_2118_);
lean_inc(v_toBind_2101_);
v___x_2132_ = lean_apply_4(v_toBind_2101_, lean_box(0), lean_box(0), v___x_2131_, v___f_2130_);
v___y_2124_ = v___x_2132_;
goto v___jp_2123_;
}
else
{
lean_object* v___x_2133_; uint8_t v_isInstance_2134_; 
v___x_2133_ = lean_array_fget_borrowed(v_paramInfo_2103_, v_next_2114_);
v_isInstance_2134_ = lean_ctor_get_uint8(v___x_2133_, sizeof(void*)*1 + 4);
if (v_isInstance_2134_ == 0)
{
lean_object* v___f_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
lean_inc(v___x_2127_);
v___f_2135_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__1___boxed), 4, 3);
lean_closure_set(v___f_2135_, 0, v_toApplicative_2100_);
lean_closure_set(v___f_2135_, 1, v_acc_2115_);
lean_closure_set(v___f_2135_, 2, v_next_2114_);
v___x_2136_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2104_, v_inst_2105_, v_inst_2106_, v_pre_2107_, v_post_2108_, v_usedLetOnly_2109_, v_skipConstInApp_2110_, v_skipInstances_2111_, v_x_2112_, v_x_2113_, v___x_2127_, v___y_2118_);
lean_inc(v_toBind_2101_);
v___x_2137_ = lean_apply_4(v_toBind_2101_, lean_box(0), lean_box(0), v___x_2136_, v___f_2135_);
v___y_2124_ = v___x_2137_;
goto v___jp_2123_;
}
else
{
lean_object* v_toPure_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; 
lean_dec(v_next_2114_);
lean_dec(v_x_2113_);
lean_dec(v_post_2108_);
lean_dec(v_pre_2107_);
lean_dec_ref(v_inst_2106_);
lean_dec(v_inst_2105_);
lean_dec_ref(v_inst_2104_);
v_toPure_2138_ = lean_ctor_get(v_toApplicative_2100_, 1);
lean_inc(v_toPure_2138_);
lean_dec_ref(v_toApplicative_2100_);
v___x_2139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2139_, 0, v_acc_2115_);
v___x_2140_ = lean_apply_2(v_toPure_2138_, lean_box(0), v___x_2139_);
v___y_2124_ = v___x_2140_;
goto v___jp_2123_;
}
}
v___jp_2123_:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; 
lean_inc(v_toBind_2101_);
v___x_2125_ = lean_apply_4(v_toBind_2101_, lean_box(0), lean_box(0), v___y_2124_, v___f_2102_);
v___x_2126_ = lean_apply_4(v_toBind_2101_, lean_box(0), lean_box(0), v___x_2125_, v___f_2122_);
return v___x_2126_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed(lean_object** _args){
lean_object* v___x_2141_ = _args[0];
lean_object* v_toApplicative_2142_ = _args[1];
lean_object* v_toBind_2143_ = _args[2];
lean_object* v___f_2144_ = _args[3];
lean_object* v_paramInfo_2145_ = _args[4];
lean_object* v_inst_2146_ = _args[5];
lean_object* v_inst_2147_ = _args[6];
lean_object* v_inst_2148_ = _args[7];
lean_object* v_pre_2149_ = _args[8];
lean_object* v_post_2150_ = _args[9];
lean_object* v_usedLetOnly_2151_ = _args[10];
lean_object* v_skipConstInApp_2152_ = _args[11];
lean_object* v_skipInstances_2153_ = _args[12];
lean_object* v_x_2154_ = _args[13];
lean_object* v_x_2155_ = _args[14];
lean_object* v_next_2156_ = _args[15];
lean_object* v_acc_2157_ = _args[16];
lean_object* v_h_2158_ = _args[17];
lean_object* v_G_2159_ = _args[18];
lean_object* v___y_2160_ = _args[19];
_start:
{
uint8_t v_usedLetOnly_boxed_2161_; uint8_t v_skipConstInApp_boxed_2162_; uint8_t v_skipInstances_boxed_2163_; lean_object* v_res_2164_; 
v_usedLetOnly_boxed_2161_ = lean_unbox(v_usedLetOnly_2151_);
v_skipConstInApp_boxed_2162_ = lean_unbox(v_skipConstInApp_2152_);
v_skipInstances_boxed_2163_ = lean_unbox(v_skipInstances_2153_);
v_res_2164_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4(v___x_2141_, v_toApplicative_2142_, v_toBind_2143_, v___f_2144_, v_paramInfo_2145_, v_inst_2146_, v_inst_2147_, v_inst_2148_, v_pre_2149_, v_post_2150_, v_usedLetOnly_boxed_2161_, v_skipConstInApp_boxed_2162_, v_skipInstances_boxed_2163_, v_x_2154_, v_x_2155_, v_next_2156_, v_acc_2157_, v_h_2158_, v_G_2159_, v___y_2160_);
lean_dec(v___y_2160_);
lean_dec_ref(v_paramInfo_2145_);
lean_dec(v___x_2141_);
return v_res_2164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(lean_object* v___x_2165_, lean_object* v_toApplicative_2166_, lean_object* v_toBind_2167_, lean_object* v___f_2168_, lean_object* v_inst_2169_, lean_object* v_inst_2170_, lean_object* v_inst_2171_, lean_object* v_pre_2172_, lean_object* v_post_2173_, uint8_t v_usedLetOnly_2174_, uint8_t v_skipConstInApp_2175_, uint8_t v_skipInstances_2176_, lean_object* v_x_2177_, lean_object* v_x_2178_, lean_object* v_args_2179_, lean_object* v___y_2180_, lean_object* v___f_2181_, lean_object* v_a_2182_){
_start:
{
lean_object* v_paramInfo_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___f_2188_; lean_object* v___x_3638__overap_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
v_paramInfo_2183_ = lean_ctor_get(v_a_2182_, 0);
lean_inc_ref(v_paramInfo_2183_);
lean_dec_ref(v_a_2182_);
v___x_2184_ = lean_unsigned_to_nat(0u);
v___x_2185_ = lean_box(v_usedLetOnly_2174_);
v___x_2186_ = lean_box(v_skipConstInApp_2175_);
v___x_2187_ = lean_box(v_skipInstances_2176_);
lean_inc(v_toBind_2167_);
v___f_2188_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__4___boxed), 20, 15);
lean_closure_set(v___f_2188_, 0, v___x_2165_);
lean_closure_set(v___f_2188_, 1, v_toApplicative_2166_);
lean_closure_set(v___f_2188_, 2, v_toBind_2167_);
lean_closure_set(v___f_2188_, 3, v___f_2168_);
lean_closure_set(v___f_2188_, 4, v_paramInfo_2183_);
lean_closure_set(v___f_2188_, 5, v_inst_2169_);
lean_closure_set(v___f_2188_, 6, v_inst_2170_);
lean_closure_set(v___f_2188_, 7, v_inst_2171_);
lean_closure_set(v___f_2188_, 8, v_pre_2172_);
lean_closure_set(v___f_2188_, 9, v_post_2173_);
lean_closure_set(v___f_2188_, 10, v___x_2185_);
lean_closure_set(v___f_2188_, 11, v___x_2186_);
lean_closure_set(v___f_2188_, 12, v___x_2187_);
lean_closure_set(v___f_2188_, 13, v_x_2177_);
lean_closure_set(v___f_2188_, 14, v_x_2178_);
v___x_3638__overap_2189_ = l_WellFounded_opaqueFix_u2083___redArg(v___f_2188_, v___x_2184_, v_args_2179_, lean_box(0));
lean_inc(v___y_2180_);
v___x_2190_ = lean_apply_1(v___x_3638__overap_2189_, v___y_2180_);
v___x_2191_ = lean_apply_4(v_toBind_2167_, lean_box(0), lean_box(0), v___x_2190_, v___f_2181_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed(lean_object** _args){
lean_object* v___x_2192_ = _args[0];
lean_object* v_toApplicative_2193_ = _args[1];
lean_object* v_toBind_2194_ = _args[2];
lean_object* v___f_2195_ = _args[3];
lean_object* v_inst_2196_ = _args[4];
lean_object* v_inst_2197_ = _args[5];
lean_object* v_inst_2198_ = _args[6];
lean_object* v_pre_2199_ = _args[7];
lean_object* v_post_2200_ = _args[8];
lean_object* v_usedLetOnly_2201_ = _args[9];
lean_object* v_skipConstInApp_2202_ = _args[10];
lean_object* v_skipInstances_2203_ = _args[11];
lean_object* v_x_2204_ = _args[12];
lean_object* v_x_2205_ = _args[13];
lean_object* v_args_2206_ = _args[14];
lean_object* v___y_2207_ = _args[15];
lean_object* v___f_2208_ = _args[16];
lean_object* v_a_2209_ = _args[17];
_start:
{
uint8_t v_usedLetOnly_boxed_2210_; uint8_t v_skipConstInApp_boxed_2211_; uint8_t v_skipInstances_boxed_2212_; lean_object* v_res_2213_; 
v_usedLetOnly_boxed_2210_ = lean_unbox(v_usedLetOnly_2201_);
v_skipConstInApp_boxed_2211_ = lean_unbox(v_skipConstInApp_2202_);
v_skipInstances_boxed_2212_ = lean_unbox(v_skipInstances_2203_);
v_res_2213_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3(v___x_2192_, v_toApplicative_2193_, v_toBind_2194_, v___f_2195_, v_inst_2196_, v_inst_2197_, v_inst_2198_, v_pre_2199_, v_post_2200_, v_usedLetOnly_boxed_2210_, v_skipConstInApp_boxed_2211_, v_skipInstances_boxed_2212_, v_x_2204_, v_x_2205_, v_args_2206_, v___y_2207_, v___f_2208_, v_a_2209_);
lean_dec(v___y_2207_);
return v_res_2213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(uint8_t v_skipInstances_2214_, lean_object* v_inst_2215_, lean_object* v_inst_2216_, lean_object* v_inst_2217_, lean_object* v_pre_2218_, lean_object* v_post_2219_, uint8_t v_usedLetOnly_2220_, uint8_t v_skipConstInApp_2221_, lean_object* v_x_2222_, lean_object* v_x_2223_, lean_object* v_args_2224_, lean_object* v___x_2225_, lean_object* v_toBind_2226_, lean_object* v_toApplicative_2227_, lean_object* v___f_2228_, lean_object* v_f_2229_, lean_object* v___y_2230_){
_start:
{
if (v_skipInstances_2214_ == 0)
{
lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___f_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; size_t v_sz_2239_; size_t v___x_2240_; lean_object* v___x_3651__overap_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
lean_dec(v___f_2228_);
lean_dec_ref(v_toApplicative_2227_);
v___x_2231_ = lean_box(v_usedLetOnly_2220_);
v___x_2232_ = lean_box(v_skipConstInApp_2221_);
v___x_2233_ = lean_box(v_skipInstances_2214_);
lean_inc_n(v___y_2230_, 2);
lean_inc(v_x_2223_);
lean_inc(v_post_2219_);
lean_inc(v_pre_2218_);
lean_inc_ref(v_inst_2217_);
lean_inc(v_inst_2216_);
lean_inc_ref(v_inst_2215_);
v___f_2234_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_2234_, 0, v_f_2229_);
lean_closure_set(v___f_2234_, 1, v_inst_2215_);
lean_closure_set(v___f_2234_, 2, v_inst_2216_);
lean_closure_set(v___f_2234_, 3, v_inst_2217_);
lean_closure_set(v___f_2234_, 4, v_pre_2218_);
lean_closure_set(v___f_2234_, 5, v_post_2219_);
lean_closure_set(v___f_2234_, 6, v___x_2231_);
lean_closure_set(v___f_2234_, 7, v___x_2232_);
lean_closure_set(v___f_2234_, 8, v___x_2233_);
lean_closure_set(v___f_2234_, 9, v_x_2222_);
lean_closure_set(v___f_2234_, 10, v_x_2223_);
lean_closure_set(v___f_2234_, 11, v___y_2230_);
v___x_2235_ = lean_box(v_usedLetOnly_2220_);
v___x_2236_ = lean_box(v_skipConstInApp_2221_);
v___x_2237_ = lean_box(v_skipInstances_2214_);
v___x_2238_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___boxed), 12, 10);
lean_closure_set(v___x_2238_, 0, v_inst_2215_);
lean_closure_set(v___x_2238_, 1, v_inst_2216_);
lean_closure_set(v___x_2238_, 2, v_inst_2217_);
lean_closure_set(v___x_2238_, 3, v_pre_2218_);
lean_closure_set(v___x_2238_, 4, v_post_2219_);
lean_closure_set(v___x_2238_, 5, v___x_2235_);
lean_closure_set(v___x_2238_, 6, v___x_2236_);
lean_closure_set(v___x_2238_, 7, v___x_2237_);
lean_closure_set(v___x_2238_, 8, v_x_2222_);
lean_closure_set(v___x_2238_, 9, v_x_2223_);
v_sz_2239_ = lean_array_size(v_args_2224_);
v___x_2240_ = ((size_t)0ULL);
v___x_3651__overap_2241_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2225_, v___x_2238_, v_sz_2239_, v___x_2240_, v_args_2224_);
v___x_2242_ = lean_apply_1(v___x_3651__overap_2241_, v___y_2230_);
v___x_2243_ = lean_apply_4(v_toBind_2226_, lean_box(0), lean_box(0), v___x_2242_, v___f_2234_);
return v___x_2243_;
}
else
{
lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___f_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; lean_object* v___f_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
lean_dec_ref(v___x_2225_);
v___x_2244_ = lean_box(v_usedLetOnly_2220_);
v___x_2245_ = lean_box(v_skipConstInApp_2221_);
v___x_2246_ = lean_box(v_skipInstances_2214_);
lean_inc_n(v___y_2230_, 2);
lean_inc(v_x_2223_);
lean_inc(v_post_2219_);
lean_inc(v_pre_2218_);
lean_inc_ref(v_inst_2217_);
lean_inc_n(v_inst_2216_, 2);
lean_inc_ref(v_inst_2215_);
lean_inc_ref(v_f_2229_);
v___f_2247_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__5___boxed), 13, 12);
lean_closure_set(v___f_2247_, 0, v_f_2229_);
lean_closure_set(v___f_2247_, 1, v_inst_2215_);
lean_closure_set(v___f_2247_, 2, v_inst_2216_);
lean_closure_set(v___f_2247_, 3, v_inst_2217_);
lean_closure_set(v___f_2247_, 4, v_pre_2218_);
lean_closure_set(v___f_2247_, 5, v_post_2219_);
lean_closure_set(v___f_2247_, 6, v___x_2244_);
lean_closure_set(v___f_2247_, 7, v___x_2245_);
lean_closure_set(v___f_2247_, 8, v___x_2246_);
lean_closure_set(v___f_2247_, 9, v_x_2222_);
lean_closure_set(v___f_2247_, 10, v_x_2223_);
lean_closure_set(v___f_2247_, 11, v___y_2230_);
v___x_2248_ = lean_array_get_size(v_args_2224_);
v___x_2249_ = lean_box(v_usedLetOnly_2220_);
v___x_2250_ = lean_box(v_skipConstInApp_2221_);
v___x_2251_ = lean_box(v_skipInstances_2214_);
lean_inc(v_toBind_2226_);
v___f_2252_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__3___boxed), 18, 17);
lean_closure_set(v___f_2252_, 0, v___x_2248_);
lean_closure_set(v___f_2252_, 1, v_toApplicative_2227_);
lean_closure_set(v___f_2252_, 2, v_toBind_2226_);
lean_closure_set(v___f_2252_, 3, v___f_2228_);
lean_closure_set(v___f_2252_, 4, v_inst_2215_);
lean_closure_set(v___f_2252_, 5, v_inst_2216_);
lean_closure_set(v___f_2252_, 6, v_inst_2217_);
lean_closure_set(v___f_2252_, 7, v_pre_2218_);
lean_closure_set(v___f_2252_, 8, v_post_2219_);
lean_closure_set(v___f_2252_, 9, v___x_2249_);
lean_closure_set(v___f_2252_, 10, v___x_2250_);
lean_closure_set(v___f_2252_, 11, v___x_2251_);
lean_closure_set(v___f_2252_, 12, v_x_2222_);
lean_closure_set(v___f_2252_, 13, v_x_2223_);
lean_closure_set(v___f_2252_, 14, v_args_2224_);
lean_closure_set(v___f_2252_, 15, v___y_2230_);
lean_closure_set(v___f_2252_, 16, v___f_2247_);
v___x_2253_ = lean_alloc_closure((void*)(l_Lean_Meta_getFunInfoNArgs___boxed), 7, 2);
lean_closure_set(v___x_2253_, 0, v_f_2229_);
lean_closure_set(v___x_2253_, 1, v___x_2248_);
v___x_2254_ = lean_apply_2(v_inst_2216_, lean_box(0), v___x_2253_);
v___x_2255_ = lean_apply_4(v_toBind_2226_, lean_box(0), lean_box(0), v___x_2254_, v___f_2252_);
return v___x_2255_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed(lean_object** _args){
lean_object* v_skipInstances_2256_ = _args[0];
lean_object* v_inst_2257_ = _args[1];
lean_object* v_inst_2258_ = _args[2];
lean_object* v_inst_2259_ = _args[3];
lean_object* v_pre_2260_ = _args[4];
lean_object* v_post_2261_ = _args[5];
lean_object* v_usedLetOnly_2262_ = _args[6];
lean_object* v_skipConstInApp_2263_ = _args[7];
lean_object* v_x_2264_ = _args[8];
lean_object* v_x_2265_ = _args[9];
lean_object* v_args_2266_ = _args[10];
lean_object* v___x_2267_ = _args[11];
lean_object* v_toBind_2268_ = _args[12];
lean_object* v_toApplicative_2269_ = _args[13];
lean_object* v___f_2270_ = _args[14];
lean_object* v_f_2271_ = _args[15];
lean_object* v___y_2272_ = _args[16];
_start:
{
uint8_t v_skipInstances_boxed_2273_; uint8_t v_usedLetOnly_boxed_2274_; uint8_t v_skipConstInApp_boxed_2275_; lean_object* v_res_2276_; 
v_skipInstances_boxed_2273_ = lean_unbox(v_skipInstances_2256_);
v_usedLetOnly_boxed_2274_ = lean_unbox(v_usedLetOnly_2262_);
v_skipConstInApp_boxed_2275_ = lean_unbox(v_skipConstInApp_2263_);
v_res_2276_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6(v_skipInstances_boxed_2273_, v_inst_2257_, v_inst_2258_, v_inst_2259_, v_pre_2260_, v_post_2261_, v_usedLetOnly_boxed_2274_, v_skipConstInApp_boxed_2275_, v_x_2264_, v_x_2265_, v_args_2266_, v___x_2267_, v_toBind_2268_, v_toApplicative_2269_, v___f_2270_, v_f_2271_, v___y_2272_);
lean_dec(v___y_2272_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(uint8_t v_skipInstances_2277_, lean_object* v_inst_2278_, lean_object* v_inst_2279_, lean_object* v_inst_2280_, lean_object* v_pre_2281_, lean_object* v_post_2282_, uint8_t v_usedLetOnly_2283_, uint8_t v_skipConstInApp_2284_, lean_object* v_x_2285_, lean_object* v_x_2286_, lean_object* v___x_2287_, lean_object* v_toBind_2288_, lean_object* v_toApplicative_2289_, lean_object* v___f_2290_, lean_object* v_f_2291_, lean_object* v_args_2292_, lean_object* v___y_2293_){
_start:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___f_2297_; lean_object* v___f_2298_; 
v___x_2294_ = lean_box(v_skipInstances_2277_);
v___x_2295_ = lean_box(v_usedLetOnly_2283_);
v___x_2296_ = lean_box(v_skipConstInApp_2284_);
lean_inc_ref(v_toApplicative_2289_);
lean_inc(v_toBind_2288_);
lean_inc(v_x_2286_);
lean_inc(v_post_2282_);
lean_inc(v_pre_2281_);
lean_inc_ref(v_inst_2280_);
lean_inc(v_inst_2279_);
lean_inc_ref(v_inst_2278_);
v___f_2297_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__6___boxed), 17, 15);
lean_closure_set(v___f_2297_, 0, v___x_2294_);
lean_closure_set(v___f_2297_, 1, v_inst_2278_);
lean_closure_set(v___f_2297_, 2, v_inst_2279_);
lean_closure_set(v___f_2297_, 3, v_inst_2280_);
lean_closure_set(v___f_2297_, 4, v_pre_2281_);
lean_closure_set(v___f_2297_, 5, v_post_2282_);
lean_closure_set(v___f_2297_, 6, v___x_2295_);
lean_closure_set(v___f_2297_, 7, v___x_2296_);
lean_closure_set(v___f_2297_, 8, v_x_2285_);
lean_closure_set(v___f_2297_, 9, v_x_2286_);
lean_closure_set(v___f_2297_, 10, v_args_2292_);
lean_closure_set(v___f_2297_, 11, v___x_2287_);
lean_closure_set(v___f_2297_, 12, v_toBind_2288_);
lean_closure_set(v___f_2297_, 13, v_toApplicative_2289_);
lean_closure_set(v___f_2297_, 14, v___f_2290_);
lean_inc(v___y_2293_);
v___f_2298_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__7___boxed), 3, 2);
lean_closure_set(v___f_2298_, 0, v___f_2297_);
lean_closure_set(v___f_2298_, 1, v___y_2293_);
if (v_skipConstInApp_2284_ == 0)
{
lean_dec_ref(v_toApplicative_2289_);
goto v___jp_2299_;
}
else
{
uint8_t v___x_2302_; 
v___x_2302_ = l_Lean_Expr_isConst(v_f_2291_);
if (v___x_2302_ == 0)
{
lean_dec_ref(v_toApplicative_2289_);
goto v___jp_2299_;
}
else
{
lean_object* v_toPure_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
lean_dec(v_x_2286_);
lean_dec(v_post_2282_);
lean_dec(v_pre_2281_);
lean_dec_ref(v_inst_2280_);
lean_dec(v_inst_2279_);
lean_dec_ref(v_inst_2278_);
v_toPure_2303_ = lean_ctor_get(v_toApplicative_2289_, 1);
lean_inc(v_toPure_2303_);
lean_dec_ref(v_toApplicative_2289_);
v___x_2304_ = lean_apply_2(v_toPure_2303_, lean_box(0), v_f_2291_);
v___x_2305_ = lean_apply_4(v_toBind_2288_, lean_box(0), lean_box(0), v___x_2304_, v___f_2298_);
return v___x_2305_;
}
}
v___jp_2299_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2300_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2278_, v_inst_2279_, v_inst_2280_, v_pre_2281_, v_post_2282_, v_usedLetOnly_2283_, v_skipConstInApp_2284_, v_skipInstances_2277_, v_x_2285_, v_x_2286_, v_f_2291_, v___y_2293_);
v___x_2301_ = lean_apply_4(v_toBind_2288_, lean_box(0), lean_box(0), v___x_2300_, v___f_2298_);
return v___x_2301_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed(lean_object** _args){
lean_object* v_skipInstances_2306_ = _args[0];
lean_object* v_inst_2307_ = _args[1];
lean_object* v_inst_2308_ = _args[2];
lean_object* v_inst_2309_ = _args[3];
lean_object* v_pre_2310_ = _args[4];
lean_object* v_post_2311_ = _args[5];
lean_object* v_usedLetOnly_2312_ = _args[6];
lean_object* v_skipConstInApp_2313_ = _args[7];
lean_object* v_x_2314_ = _args[8];
lean_object* v_x_2315_ = _args[9];
lean_object* v___x_2316_ = _args[10];
lean_object* v_toBind_2317_ = _args[11];
lean_object* v_toApplicative_2318_ = _args[12];
lean_object* v___f_2319_ = _args[13];
lean_object* v_f_2320_ = _args[14];
lean_object* v_args_2321_ = _args[15];
lean_object* v___y_2322_ = _args[16];
_start:
{
uint8_t v_skipInstances_boxed_2323_; uint8_t v_usedLetOnly_boxed_2324_; uint8_t v_skipConstInApp_boxed_2325_; lean_object* v_res_2326_; 
v_skipInstances_boxed_2323_ = lean_unbox(v_skipInstances_2306_);
v_usedLetOnly_boxed_2324_ = lean_unbox(v_usedLetOnly_2312_);
v_skipConstInApp_boxed_2325_ = lean_unbox(v_skipConstInApp_2313_);
v_res_2326_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9(v_skipInstances_boxed_2323_, v_inst_2307_, v_inst_2308_, v_inst_2309_, v_pre_2310_, v_post_2311_, v_usedLetOnly_boxed_2324_, v_skipConstInApp_boxed_2325_, v_x_2314_, v_x_2315_, v___x_2316_, v_toBind_2317_, v_toApplicative_2318_, v___f_2319_, v_f_2320_, v_args_2321_, v___y_2322_);
lean_dec(v___y_2322_);
return v_res_2326_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0(void){
_start:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; 
v___x_2327_ = lean_unsigned_to_nat(0u);
v___x_2328_ = lean_mk_empty_array_with_capacity(v___x_2327_);
return v___x_2328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(lean_object* v_fvars_2329_, lean_object* v_inst_2330_, lean_object* v_inst_2331_, lean_object* v_inst_2332_, lean_object* v_pre_2333_, lean_object* v_post_2334_, uint8_t v_usedLetOnly_2335_, uint8_t v_skipConstInApp_2336_, uint8_t v_skipInstances_2337_, lean_object* v_x_2338_, lean_object* v_x_2339_, lean_object* v_body_2340_, lean_object* v_x_2341_, lean_object* v___y_2342_){
_start:
{
lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2343_ = lean_array_push(v_fvars_2329_, v_x_2341_);
v___x_2344_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2330_, v_inst_2331_, v_inst_2332_, v_pre_2333_, v_post_2334_, v_usedLetOnly_2335_, v_skipConstInApp_2336_, v_skipInstances_2337_, v_x_2338_, v_x_2339_, v___x_2343_, v_body_2340_, v___y_2342_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed(lean_object* v_fvars_2345_, lean_object* v_inst_2346_, lean_object* v_inst_2347_, lean_object* v_inst_2348_, lean_object* v_pre_2349_, lean_object* v_post_2350_, lean_object* v_usedLetOnly_2351_, lean_object* v_skipConstInApp_2352_, lean_object* v_skipInstances_2353_, lean_object* v_x_2354_, lean_object* v_x_2355_, lean_object* v_body_2356_, lean_object* v_x_2357_, lean_object* v___y_2358_){
_start:
{
uint8_t v_usedLetOnly_boxed_2359_; uint8_t v_skipConstInApp_boxed_2360_; uint8_t v_skipInstances_boxed_2361_; lean_object* v_res_2362_; 
v_usedLetOnly_boxed_2359_ = lean_unbox(v_usedLetOnly_2351_);
v_skipConstInApp_boxed_2360_ = lean_unbox(v_skipConstInApp_2352_);
v_skipInstances_boxed_2361_ = lean_unbox(v_skipInstances_2353_);
v_res_2362_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0(v_fvars_2345_, v_inst_2346_, v_inst_2347_, v_inst_2348_, v_pre_2349_, v_post_2350_, v_usedLetOnly_boxed_2359_, v_skipConstInApp_boxed_2360_, v_skipInstances_boxed_2361_, v_x_2354_, v_x_2355_, v_body_2356_, v_x_2357_, v___y_2358_);
lean_dec(v___y_2358_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed(lean_object* v_inst_2363_, lean_object* v_inst_2364_, lean_object* v_inst_2365_, lean_object* v_pre_2366_, lean_object* v_post_2367_, lean_object* v_usedLetOnly_2368_, lean_object* v_skipConstInApp_2369_, lean_object* v_skipInstances_2370_, lean_object* v_x_2371_, lean_object* v_x_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_){
_start:
{
uint8_t v_usedLetOnly_boxed_2375_; uint8_t v_skipConstInApp_boxed_2376_; uint8_t v_skipInstances_boxed_2377_; lean_object* v_res_2378_; 
v_usedLetOnly_boxed_2375_ = lean_unbox(v_usedLetOnly_2368_);
v_skipConstInApp_boxed_2376_ = lean_unbox(v_skipConstInApp_2369_);
v_skipInstances_boxed_2377_ = lean_unbox(v_skipInstances_2370_);
v_res_2378_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(v_inst_2363_, v_inst_2364_, v_inst_2365_, v_pre_2366_, v_post_2367_, v_usedLetOnly_boxed_2375_, v_skipConstInApp_boxed_2376_, v_skipInstances_boxed_2377_, v_x_2371_, v_x_2372_, v_a_2373_, v_a_2374_);
lean_dec(v_a_2373_);
return v_res_2378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(lean_object* v_inst_2379_, lean_object* v_inst_2380_, lean_object* v_inst_2381_, lean_object* v_pre_2382_, lean_object* v_post_2383_, uint8_t v_usedLetOnly_2384_, uint8_t v_skipConstInApp_2385_, uint8_t v_skipInstances_2386_, lean_object* v_x_2387_, lean_object* v_x_2388_, lean_object* v_fvars_2389_, lean_object* v_e_2390_, lean_object* v_a_2391_){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___f_2396_; lean_object* v___f_2397_; lean_object* v___x_2398_; 
v___x_2392_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0);
v___x_2393_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1);
lean_inc_ref(v_inst_2379_);
v___x_2394_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2387_, v___x_2392_, v___x_2393_, v_inst_2379_);
v___x_2395_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2387_, v___x_2392_, v___x_2393_);
lean_inc_ref_n(v_inst_2381_, 2);
lean_inc_ref(v___x_2395_);
v___f_2396_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2396_, 0, v___x_2395_);
lean_closure_set(v___f_2396_, 1, v_inst_2381_);
v___f_2397_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2397_, 0, v___x_2395_);
lean_closure_set(v___f_2397_, 1, v_inst_2381_);
v___x_2398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2398_, 0, v___f_2396_);
lean_ctor_set(v___x_2398_, 1, v___f_2397_);
if (lean_obj_tag(v_e_2390_) == 7)
{
lean_object* v_binderName_2399_; lean_object* v_binderType_2400_; lean_object* v_body_2401_; uint8_t v_binderInfo_2402_; lean_object* v_toBind_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v___f_2407_; lean_object* v___x_2408_; lean_object* v___f_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v_binderName_2399_ = lean_ctor_get(v_e_2390_, 0);
lean_inc(v_binderName_2399_);
v_binderType_2400_ = lean_ctor_get(v_e_2390_, 1);
lean_inc_ref(v_binderType_2400_);
v_body_2401_ = lean_ctor_get(v_e_2390_, 2);
lean_inc_ref(v_body_2401_);
v_binderInfo_2402_ = lean_ctor_get_uint8(v_e_2390_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2390_);
v_toBind_2403_ = lean_ctor_get(v_inst_2379_, 1);
lean_inc(v_toBind_2403_);
v___x_2404_ = lean_box(v_usedLetOnly_2384_);
v___x_2405_ = lean_box(v_skipConstInApp_2385_);
v___x_2406_ = lean_box(v_skipInstances_2386_);
lean_inc(v_x_2388_);
lean_inc(v_post_2383_);
lean_inc(v_pre_2382_);
lean_inc_ref(v_inst_2381_);
lean_inc(v_inst_2380_);
lean_inc_ref(v_inst_2379_);
lean_inc_ref(v_fvars_2389_);
v___f_2407_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2407_, 0, v_fvars_2389_);
lean_closure_set(v___f_2407_, 1, v_inst_2379_);
lean_closure_set(v___f_2407_, 2, v_inst_2380_);
lean_closure_set(v___f_2407_, 3, v_inst_2381_);
lean_closure_set(v___f_2407_, 4, v_pre_2382_);
lean_closure_set(v___f_2407_, 5, v_post_2383_);
lean_closure_set(v___f_2407_, 6, v___x_2404_);
lean_closure_set(v___f_2407_, 7, v___x_2405_);
lean_closure_set(v___f_2407_, 8, v___x_2406_);
lean_closure_set(v___f_2407_, 9, v_x_2387_);
lean_closure_set(v___f_2407_, 10, v_x_2388_);
lean_closure_set(v___f_2407_, 11, v_body_2401_);
v___x_2408_ = lean_box(v_binderInfo_2402_);
lean_inc(v_a_2391_);
v___f_2409_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2409_, 0, v___x_2398_);
lean_closure_set(v___f_2409_, 1, v___x_2394_);
lean_closure_set(v___f_2409_, 2, v_binderName_2399_);
lean_closure_set(v___f_2409_, 3, v___x_2408_);
lean_closure_set(v___f_2409_, 4, v___f_2407_);
lean_closure_set(v___f_2409_, 5, v_a_2391_);
v___x_2410_ = lean_expr_instantiate_rev(v_binderType_2400_, v_fvars_2389_);
lean_dec_ref(v_fvars_2389_);
lean_dec_ref(v_binderType_2400_);
v___x_2411_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2379_, v_inst_2380_, v_inst_2381_, v_pre_2382_, v_post_2383_, v_usedLetOnly_2384_, v_skipConstInApp_2385_, v_skipInstances_2386_, v_x_2387_, v_x_2388_, v___x_2410_, v_a_2391_);
v___x_2412_ = lean_apply_4(v_toBind_2403_, lean_box(0), lean_box(0), v___x_2411_, v___f_2409_);
return v___x_2412_;
}
else
{
lean_object* v_toBind_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___f_2417_; lean_object* v___x_2418_; lean_object* v___f_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
lean_dec_ref(v___x_2398_);
lean_dec_ref(v___x_2394_);
v_toBind_2413_ = lean_ctor_get(v_inst_2379_, 1);
lean_inc_n(v_toBind_2413_, 2);
v___x_2414_ = lean_box(v_usedLetOnly_2384_);
v___x_2415_ = lean_box(v_skipConstInApp_2385_);
v___x_2416_ = lean_box(v_skipInstances_2386_);
lean_inc(v_a_2391_);
lean_inc(v_x_2388_);
lean_inc(v_post_2383_);
lean_inc(v_pre_2382_);
lean_inc_ref(v_inst_2381_);
lean_inc_n(v_inst_2380_, 2);
lean_inc_ref(v_inst_2379_);
v___f_2417_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2417_, 0, v_inst_2379_);
lean_closure_set(v___f_2417_, 1, v_inst_2380_);
lean_closure_set(v___f_2417_, 2, v_inst_2381_);
lean_closure_set(v___f_2417_, 3, v_pre_2382_);
lean_closure_set(v___f_2417_, 4, v_post_2383_);
lean_closure_set(v___f_2417_, 5, v___x_2414_);
lean_closure_set(v___f_2417_, 6, v___x_2415_);
lean_closure_set(v___f_2417_, 7, v___x_2416_);
lean_closure_set(v___f_2417_, 8, v_x_2387_);
lean_closure_set(v___f_2417_, 9, v_x_2388_);
lean_closure_set(v___f_2417_, 10, v_a_2391_);
v___x_2418_ = lean_box(v_usedLetOnly_2384_);
lean_inc_ref(v_fvars_2389_);
v___f_2419_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_2419_, 0, v_fvars_2389_);
lean_closure_set(v___f_2419_, 1, v___x_2418_);
lean_closure_set(v___f_2419_, 2, v_inst_2380_);
lean_closure_set(v___f_2419_, 3, v_toBind_2413_);
lean_closure_set(v___f_2419_, 4, v___f_2417_);
v___x_2420_ = lean_expr_instantiate_rev(v_e_2390_, v_fvars_2389_);
lean_dec_ref(v_fvars_2389_);
lean_dec_ref(v_e_2390_);
v___x_2421_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2379_, v_inst_2380_, v_inst_2381_, v_pre_2382_, v_post_2383_, v_usedLetOnly_2384_, v_skipConstInApp_2385_, v_skipInstances_2386_, v_x_2387_, v_x_2388_, v___x_2420_, v_a_2391_);
v___x_2422_ = lean_apply_4(v_toBind_2413_, lean_box(0), lean_box(0), v___x_2421_, v___f_2419_);
return v___x_2422_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(lean_object* v_fvars_2423_, lean_object* v_inst_2424_, lean_object* v_inst_2425_, lean_object* v_inst_2426_, lean_object* v_pre_2427_, lean_object* v_post_2428_, uint8_t v_usedLetOnly_2429_, uint8_t v_skipConstInApp_2430_, uint8_t v_skipInstances_2431_, lean_object* v_x_2432_, lean_object* v_x_2433_, lean_object* v_body_2434_, lean_object* v_x_2435_, lean_object* v___y_2436_){
_start:
{
lean_object* v___x_2437_; lean_object* v___x_2438_; 
v___x_2437_ = lean_array_push(v_fvars_2423_, v_x_2435_);
v___x_2438_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2424_, v_inst_2425_, v_inst_2426_, v_pre_2427_, v_post_2428_, v_usedLetOnly_2429_, v_skipConstInApp_2430_, v_skipInstances_2431_, v_x_2432_, v_x_2433_, v___x_2437_, v_body_2434_, v___y_2436_);
return v___x_2438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed(lean_object* v_fvars_2439_, lean_object* v_inst_2440_, lean_object* v_inst_2441_, lean_object* v_inst_2442_, lean_object* v_pre_2443_, lean_object* v_post_2444_, lean_object* v_usedLetOnly_2445_, lean_object* v_skipConstInApp_2446_, lean_object* v_skipInstances_2447_, lean_object* v_x_2448_, lean_object* v_x_2449_, lean_object* v_body_2450_, lean_object* v_x_2451_, lean_object* v___y_2452_){
_start:
{
uint8_t v_usedLetOnly_boxed_2453_; uint8_t v_skipConstInApp_boxed_2454_; uint8_t v_skipInstances_boxed_2455_; lean_object* v_res_2456_; 
v_usedLetOnly_boxed_2453_ = lean_unbox(v_usedLetOnly_2445_);
v_skipConstInApp_boxed_2454_ = lean_unbox(v_skipConstInApp_2446_);
v_skipInstances_boxed_2455_ = lean_unbox(v_skipInstances_2447_);
v_res_2456_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0(v_fvars_2439_, v_inst_2440_, v_inst_2441_, v_inst_2442_, v_pre_2443_, v_post_2444_, v_usedLetOnly_boxed_2453_, v_skipConstInApp_boxed_2454_, v_skipInstances_boxed_2455_, v_x_2448_, v_x_2449_, v_body_2450_, v_x_2451_, v___y_2452_);
lean_dec(v___y_2452_);
return v_res_2456_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(lean_object* v_inst_2457_, lean_object* v_inst_2458_, lean_object* v_inst_2459_, lean_object* v_pre_2460_, lean_object* v_post_2461_, uint8_t v_usedLetOnly_2462_, uint8_t v_skipConstInApp_2463_, uint8_t v_skipInstances_2464_, lean_object* v_x_2465_, lean_object* v_x_2466_, lean_object* v_fvars_2467_, lean_object* v_e_2468_, lean_object* v_a_2469_){
_start:
{
lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___f_2474_; lean_object* v___f_2475_; lean_object* v___x_2476_; 
v___x_2470_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0);
v___x_2471_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1);
lean_inc_ref(v_inst_2457_);
v___x_2472_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2465_, v___x_2470_, v___x_2471_, v_inst_2457_);
v___x_2473_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2465_, v___x_2470_, v___x_2471_);
lean_inc_ref_n(v_inst_2459_, 2);
lean_inc_ref(v___x_2473_);
v___f_2474_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2474_, 0, v___x_2473_);
lean_closure_set(v___f_2474_, 1, v_inst_2459_);
v___f_2475_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2475_, 0, v___x_2473_);
lean_closure_set(v___f_2475_, 1, v_inst_2459_);
v___x_2476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2476_, 0, v___f_2474_);
lean_ctor_set(v___x_2476_, 1, v___f_2475_);
if (lean_obj_tag(v_e_2468_) == 6)
{
lean_object* v_binderName_2477_; lean_object* v_binderType_2478_; lean_object* v_body_2479_; uint8_t v_binderInfo_2480_; lean_object* v_toBind_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___f_2485_; lean_object* v___x_2486_; lean_object* v___f_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v_binderName_2477_ = lean_ctor_get(v_e_2468_, 0);
lean_inc(v_binderName_2477_);
v_binderType_2478_ = lean_ctor_get(v_e_2468_, 1);
lean_inc_ref(v_binderType_2478_);
v_body_2479_ = lean_ctor_get(v_e_2468_, 2);
lean_inc_ref(v_body_2479_);
v_binderInfo_2480_ = lean_ctor_get_uint8(v_e_2468_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2468_);
v_toBind_2481_ = lean_ctor_get(v_inst_2457_, 1);
lean_inc(v_toBind_2481_);
v___x_2482_ = lean_box(v_usedLetOnly_2462_);
v___x_2483_ = lean_box(v_skipConstInApp_2463_);
v___x_2484_ = lean_box(v_skipInstances_2464_);
lean_inc(v_x_2466_);
lean_inc(v_post_2461_);
lean_inc(v_pre_2460_);
lean_inc_ref(v_inst_2459_);
lean_inc(v_inst_2458_);
lean_inc_ref(v_inst_2457_);
lean_inc_ref(v_fvars_2467_);
v___f_2485_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2485_, 0, v_fvars_2467_);
lean_closure_set(v___f_2485_, 1, v_inst_2457_);
lean_closure_set(v___f_2485_, 2, v_inst_2458_);
lean_closure_set(v___f_2485_, 3, v_inst_2459_);
lean_closure_set(v___f_2485_, 4, v_pre_2460_);
lean_closure_set(v___f_2485_, 5, v_post_2461_);
lean_closure_set(v___f_2485_, 6, v___x_2482_);
lean_closure_set(v___f_2485_, 7, v___x_2483_);
lean_closure_set(v___f_2485_, 8, v___x_2484_);
lean_closure_set(v___f_2485_, 9, v_x_2465_);
lean_closure_set(v___f_2485_, 10, v_x_2466_);
lean_closure_set(v___f_2485_, 11, v_body_2479_);
v___x_2486_ = lean_box(v_binderInfo_2480_);
lean_inc(v_a_2469_);
v___f_2487_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__1___boxed), 7, 6);
lean_closure_set(v___f_2487_, 0, v___x_2476_);
lean_closure_set(v___f_2487_, 1, v___x_2472_);
lean_closure_set(v___f_2487_, 2, v_binderName_2477_);
lean_closure_set(v___f_2487_, 3, v___x_2486_);
lean_closure_set(v___f_2487_, 4, v___f_2485_);
lean_closure_set(v___f_2487_, 5, v_a_2469_);
v___x_2488_ = lean_expr_instantiate_rev(v_binderType_2478_, v_fvars_2467_);
lean_dec_ref(v_fvars_2467_);
lean_dec_ref(v_binderType_2478_);
v___x_2489_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2457_, v_inst_2458_, v_inst_2459_, v_pre_2460_, v_post_2461_, v_usedLetOnly_2462_, v_skipConstInApp_2463_, v_skipInstances_2464_, v_x_2465_, v_x_2466_, v___x_2488_, v_a_2469_);
v___x_2490_ = lean_apply_4(v_toBind_2481_, lean_box(0), lean_box(0), v___x_2489_, v___f_2487_);
return v___x_2490_;
}
else
{
lean_object* v_toBind_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___f_2495_; lean_object* v___x_2496_; lean_object* v___f_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
lean_dec_ref(v___x_2476_);
lean_dec_ref(v___x_2472_);
v_toBind_2491_ = lean_ctor_get(v_inst_2457_, 1);
lean_inc_n(v_toBind_2491_, 2);
v___x_2492_ = lean_box(v_usedLetOnly_2462_);
v___x_2493_ = lean_box(v_skipConstInApp_2463_);
v___x_2494_ = lean_box(v_skipInstances_2464_);
lean_inc(v_a_2469_);
lean_inc(v_x_2466_);
lean_inc(v_post_2461_);
lean_inc(v_pre_2460_);
lean_inc_ref(v_inst_2459_);
lean_inc_n(v_inst_2458_, 2);
lean_inc_ref(v_inst_2457_);
v___f_2495_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2495_, 0, v_inst_2457_);
lean_closure_set(v___f_2495_, 1, v_inst_2458_);
lean_closure_set(v___f_2495_, 2, v_inst_2459_);
lean_closure_set(v___f_2495_, 3, v_pre_2460_);
lean_closure_set(v___f_2495_, 4, v_post_2461_);
lean_closure_set(v___f_2495_, 5, v___x_2492_);
lean_closure_set(v___f_2495_, 6, v___x_2493_);
lean_closure_set(v___f_2495_, 7, v___x_2494_);
lean_closure_set(v___f_2495_, 8, v_x_2465_);
lean_closure_set(v___f_2495_, 9, v_x_2466_);
lean_closure_set(v___f_2495_, 10, v_a_2469_);
v___x_2496_ = lean_box(v_usedLetOnly_2462_);
lean_inc_ref(v_fvars_2467_);
v___f_2497_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___lam__3___boxed), 6, 5);
lean_closure_set(v___f_2497_, 0, v_fvars_2467_);
lean_closure_set(v___f_2497_, 1, v___x_2496_);
lean_closure_set(v___f_2497_, 2, v_inst_2458_);
lean_closure_set(v___f_2497_, 3, v_toBind_2491_);
lean_closure_set(v___f_2497_, 4, v___f_2495_);
v___x_2498_ = lean_expr_instantiate_rev(v_e_2468_, v_fvars_2467_);
lean_dec_ref(v_fvars_2467_);
lean_dec_ref(v_e_2468_);
v___x_2499_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2457_, v_inst_2458_, v_inst_2459_, v_pre_2460_, v_post_2461_, v_usedLetOnly_2462_, v_skipConstInApp_2463_, v_skipInstances_2464_, v_x_2465_, v_x_2466_, v___x_2498_, v_a_2469_);
v___x_2500_ = lean_apply_4(v_toBind_2491_, lean_box(0), lean_box(0), v___x_2499_, v___f_2497_);
return v___x_2500_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(lean_object* v_fvars_2501_, lean_object* v_inst_2502_, lean_object* v_inst_2503_, lean_object* v_inst_2504_, lean_object* v_pre_2505_, lean_object* v_post_2506_, uint8_t v_usedLetOnly_2507_, uint8_t v_skipConstInApp_2508_, uint8_t v_skipInstances_2509_, lean_object* v_x_2510_, lean_object* v_x_2511_, lean_object* v_body_2512_, lean_object* v_x_2513_, lean_object* v___y_2514_){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = lean_array_push(v_fvars_2501_, v_x_2513_);
v___x_2516_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2502_, v_inst_2503_, v_inst_2504_, v_pre_2505_, v_post_2506_, v_usedLetOnly_2507_, v_skipConstInApp_2508_, v_skipInstances_2509_, v_x_2510_, v_x_2511_, v___x_2515_, v_body_2512_, v___y_2514_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed(lean_object* v_fvars_2517_, lean_object* v_inst_2518_, lean_object* v_inst_2519_, lean_object* v_inst_2520_, lean_object* v_pre_2521_, lean_object* v_post_2522_, lean_object* v_usedLetOnly_2523_, lean_object* v_skipConstInApp_2524_, lean_object* v_skipInstances_2525_, lean_object* v_x_2526_, lean_object* v_x_2527_, lean_object* v_body_2528_, lean_object* v_x_2529_, lean_object* v___y_2530_){
_start:
{
uint8_t v_usedLetOnly_boxed_2531_; uint8_t v_skipConstInApp_boxed_2532_; uint8_t v_skipInstances_boxed_2533_; lean_object* v_res_2534_; 
v_usedLetOnly_boxed_2531_ = lean_unbox(v_usedLetOnly_2523_);
v_skipConstInApp_boxed_2532_ = lean_unbox(v_skipConstInApp_2524_);
v_skipInstances_boxed_2533_ = lean_unbox(v_skipInstances_2525_);
v_res_2534_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0(v_fvars_2517_, v_inst_2518_, v_inst_2519_, v_inst_2520_, v_pre_2521_, v_post_2522_, v_usedLetOnly_boxed_2531_, v_skipConstInApp_boxed_2532_, v_skipInstances_boxed_2533_, v_x_2526_, v_x_2527_, v_body_2528_, v_x_2529_, v___y_2530_);
lean_dec(v___y_2530_);
return v_res_2534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(lean_object* v___x_2535_, lean_object* v___x_2536_, lean_object* v_declName_2537_, lean_object* v___f_2538_, uint8_t v_nondep_2539_, lean_object* v_a_2540_, lean_object* v_value_2541_, lean_object* v_fvars_2542_, lean_object* v_inst_2543_, lean_object* v_inst_2544_, lean_object* v_inst_2545_, lean_object* v_pre_2546_, lean_object* v_post_2547_, uint8_t v_usedLetOnly_2548_, uint8_t v_skipConstInApp_2549_, uint8_t v_skipInstances_2550_, lean_object* v_x_2551_, lean_object* v_x_2552_, lean_object* v_toBind_2553_, lean_object* v_a_2554_){
_start:
{
lean_object* v___x_2555_; lean_object* v___f_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2555_ = lean_box(v_nondep_2539_);
lean_inc(v_a_2540_);
v___f_2556_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__1___boxed), 8, 7);
lean_closure_set(v___f_2556_, 0, v___x_2535_);
lean_closure_set(v___f_2556_, 1, v___x_2536_);
lean_closure_set(v___f_2556_, 2, v_declName_2537_);
lean_closure_set(v___f_2556_, 3, v_a_2554_);
lean_closure_set(v___f_2556_, 4, v___f_2538_);
lean_closure_set(v___f_2556_, 5, v___x_2555_);
lean_closure_set(v___f_2556_, 6, v_a_2540_);
v___x_2557_ = lean_expr_instantiate_rev(v_value_2541_, v_fvars_2542_);
v___x_2558_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2543_, v_inst_2544_, v_inst_2545_, v_pre_2546_, v_post_2547_, v_usedLetOnly_2548_, v_skipConstInApp_2549_, v_skipInstances_2550_, v_x_2551_, v_x_2552_, v___x_2557_, v_a_2540_);
v___x_2559_ = lean_apply_4(v_toBind_2553_, lean_box(0), lean_box(0), v___x_2558_, v___f_2556_);
return v___x_2559_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed(lean_object** _args){
lean_object* v___x_2560_ = _args[0];
lean_object* v___x_2561_ = _args[1];
lean_object* v_declName_2562_ = _args[2];
lean_object* v___f_2563_ = _args[3];
lean_object* v_nondep_2564_ = _args[4];
lean_object* v_a_2565_ = _args[5];
lean_object* v_value_2566_ = _args[6];
lean_object* v_fvars_2567_ = _args[7];
lean_object* v_inst_2568_ = _args[8];
lean_object* v_inst_2569_ = _args[9];
lean_object* v_inst_2570_ = _args[10];
lean_object* v_pre_2571_ = _args[11];
lean_object* v_post_2572_ = _args[12];
lean_object* v_usedLetOnly_2573_ = _args[13];
lean_object* v_skipConstInApp_2574_ = _args[14];
lean_object* v_skipInstances_2575_ = _args[15];
lean_object* v_x_2576_ = _args[16];
lean_object* v_x_2577_ = _args[17];
lean_object* v_toBind_2578_ = _args[18];
lean_object* v_a_2579_ = _args[19];
_start:
{
uint8_t v_nondep_4209__boxed_2580_; uint8_t v_usedLetOnly_boxed_2581_; uint8_t v_skipConstInApp_boxed_2582_; uint8_t v_skipInstances_boxed_2583_; lean_object* v_res_2584_; 
v_nondep_4209__boxed_2580_ = lean_unbox(v_nondep_2564_);
v_usedLetOnly_boxed_2581_ = lean_unbox(v_usedLetOnly_2573_);
v_skipConstInApp_boxed_2582_ = lean_unbox(v_skipConstInApp_2574_);
v_skipInstances_boxed_2583_ = lean_unbox(v_skipInstances_2575_);
v_res_2584_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2(v___x_2560_, v___x_2561_, v_declName_2562_, v___f_2563_, v_nondep_4209__boxed_2580_, v_a_2565_, v_value_2566_, v_fvars_2567_, v_inst_2568_, v_inst_2569_, v_inst_2570_, v_pre_2571_, v_post_2572_, v_usedLetOnly_boxed_2581_, v_skipConstInApp_boxed_2582_, v_skipInstances_boxed_2583_, v_x_2576_, v_x_2577_, v_toBind_2578_, v_a_2579_);
lean_dec_ref(v_fvars_2567_);
lean_dec_ref(v_value_2566_);
lean_dec(v_a_2565_);
return v_res_2584_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(lean_object* v_inst_2585_, lean_object* v_inst_2586_, lean_object* v_inst_2587_, lean_object* v_pre_2588_, lean_object* v_post_2589_, uint8_t v_usedLetOnly_2590_, uint8_t v_skipConstInApp_2591_, uint8_t v_skipInstances_2592_, lean_object* v_x_2593_, lean_object* v_x_2594_, lean_object* v_fvars_2595_, lean_object* v_e_2596_, lean_object* v_a_2597_){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___f_2602_; lean_object* v___f_2603_; lean_object* v___x_2604_; 
v___x_2598_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0);
v___x_2599_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1);
lean_inc_ref(v_inst_2585_);
v___x_2600_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2593_, v___x_2598_, v___x_2599_, v_inst_2585_);
v___x_2601_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2593_, v___x_2598_, v___x_2599_);
lean_inc_ref_n(v_inst_2587_, 2);
lean_inc_ref(v___x_2601_);
v___f_2602_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2602_, 0, v___x_2601_);
lean_closure_set(v___f_2602_, 1, v_inst_2587_);
v___f_2603_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2603_, 0, v___x_2601_);
lean_closure_set(v___f_2603_, 1, v_inst_2587_);
v___x_2604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2604_, 0, v___f_2602_);
lean_ctor_set(v___x_2604_, 1, v___f_2603_);
if (lean_obj_tag(v_e_2596_) == 8)
{
lean_object* v_declName_2605_; lean_object* v_type_2606_; lean_object* v_value_2607_; lean_object* v_body_2608_; uint8_t v_nondep_2609_; lean_object* v_toBind_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___f_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___f_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; 
v_declName_2605_ = lean_ctor_get(v_e_2596_, 0);
lean_inc(v_declName_2605_);
v_type_2606_ = lean_ctor_get(v_e_2596_, 1);
lean_inc_ref(v_type_2606_);
v_value_2607_ = lean_ctor_get(v_e_2596_, 2);
lean_inc_ref(v_value_2607_);
v_body_2608_ = lean_ctor_get(v_e_2596_, 3);
lean_inc_ref(v_body_2608_);
v_nondep_2609_ = lean_ctor_get_uint8(v_e_2596_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_2596_);
v_toBind_2610_ = lean_ctor_get(v_inst_2585_, 1);
lean_inc_n(v_toBind_2610_, 2);
v___x_2611_ = lean_box(v_usedLetOnly_2590_);
v___x_2612_ = lean_box(v_skipConstInApp_2591_);
v___x_2613_ = lean_box(v_skipInstances_2592_);
lean_inc_n(v_x_2594_, 2);
lean_inc_n(v_post_2589_, 2);
lean_inc_n(v_pre_2588_, 2);
lean_inc_ref_n(v_inst_2587_, 2);
lean_inc_n(v_inst_2586_, 2);
lean_inc_ref_n(v_inst_2585_, 2);
lean_inc_ref_n(v_fvars_2595_, 2);
v___f_2614_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__0___boxed), 14, 12);
lean_closure_set(v___f_2614_, 0, v_fvars_2595_);
lean_closure_set(v___f_2614_, 1, v_inst_2585_);
lean_closure_set(v___f_2614_, 2, v_inst_2586_);
lean_closure_set(v___f_2614_, 3, v_inst_2587_);
lean_closure_set(v___f_2614_, 4, v_pre_2588_);
lean_closure_set(v___f_2614_, 5, v_post_2589_);
lean_closure_set(v___f_2614_, 6, v___x_2611_);
lean_closure_set(v___f_2614_, 7, v___x_2612_);
lean_closure_set(v___f_2614_, 8, v___x_2613_);
lean_closure_set(v___f_2614_, 9, v_x_2593_);
lean_closure_set(v___f_2614_, 10, v_x_2594_);
lean_closure_set(v___f_2614_, 11, v_body_2608_);
v___x_2615_ = lean_box(v_nondep_2609_);
v___x_2616_ = lean_box(v_usedLetOnly_2590_);
v___x_2617_ = lean_box(v_skipConstInApp_2591_);
v___x_2618_ = lean_box(v_skipInstances_2592_);
lean_inc(v_a_2597_);
v___f_2619_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__2___boxed), 20, 19);
lean_closure_set(v___f_2619_, 0, v___x_2604_);
lean_closure_set(v___f_2619_, 1, v___x_2600_);
lean_closure_set(v___f_2619_, 2, v_declName_2605_);
lean_closure_set(v___f_2619_, 3, v___f_2614_);
lean_closure_set(v___f_2619_, 4, v___x_2615_);
lean_closure_set(v___f_2619_, 5, v_a_2597_);
lean_closure_set(v___f_2619_, 6, v_value_2607_);
lean_closure_set(v___f_2619_, 7, v_fvars_2595_);
lean_closure_set(v___f_2619_, 8, v_inst_2585_);
lean_closure_set(v___f_2619_, 9, v_inst_2586_);
lean_closure_set(v___f_2619_, 10, v_inst_2587_);
lean_closure_set(v___f_2619_, 11, v_pre_2588_);
lean_closure_set(v___f_2619_, 12, v_post_2589_);
lean_closure_set(v___f_2619_, 13, v___x_2616_);
lean_closure_set(v___f_2619_, 14, v___x_2617_);
lean_closure_set(v___f_2619_, 15, v___x_2618_);
lean_closure_set(v___f_2619_, 16, v_x_2593_);
lean_closure_set(v___f_2619_, 17, v_x_2594_);
lean_closure_set(v___f_2619_, 18, v_toBind_2610_);
v___x_2620_ = lean_expr_instantiate_rev(v_type_2606_, v_fvars_2595_);
lean_dec_ref(v_fvars_2595_);
lean_dec_ref(v_type_2606_);
v___x_2621_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2585_, v_inst_2586_, v_inst_2587_, v_pre_2588_, v_post_2589_, v_usedLetOnly_2590_, v_skipConstInApp_2591_, v_skipInstances_2592_, v_x_2593_, v_x_2594_, v___x_2620_, v_a_2597_);
v___x_2622_ = lean_apply_4(v_toBind_2610_, lean_box(0), lean_box(0), v___x_2621_, v___f_2619_);
return v___x_2622_;
}
else
{
lean_object* v_toBind_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___f_2627_; lean_object* v___x_2628_; lean_object* v___f_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
lean_dec_ref(v___x_2604_);
lean_dec_ref(v___x_2600_);
v_toBind_2623_ = lean_ctor_get(v_inst_2585_, 1);
lean_inc_n(v_toBind_2623_, 2);
v___x_2624_ = lean_box(v_usedLetOnly_2590_);
v___x_2625_ = lean_box(v_skipConstInApp_2591_);
v___x_2626_ = lean_box(v_skipInstances_2592_);
lean_inc(v_a_2597_);
lean_inc(v_x_2594_);
lean_inc(v_post_2589_);
lean_inc(v_pre_2588_);
lean_inc_ref(v_inst_2587_);
lean_inc_n(v_inst_2586_, 2);
lean_inc_ref(v_inst_2585_);
v___f_2627_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3___boxed), 12, 11);
lean_closure_set(v___f_2627_, 0, v_inst_2585_);
lean_closure_set(v___f_2627_, 1, v_inst_2586_);
lean_closure_set(v___f_2627_, 2, v_inst_2587_);
lean_closure_set(v___f_2627_, 3, v_pre_2588_);
lean_closure_set(v___f_2627_, 4, v_post_2589_);
lean_closure_set(v___f_2627_, 5, v___x_2624_);
lean_closure_set(v___f_2627_, 6, v___x_2625_);
lean_closure_set(v___f_2627_, 7, v___x_2626_);
lean_closure_set(v___f_2627_, 8, v_x_2593_);
lean_closure_set(v___f_2627_, 9, v_x_2594_);
lean_closure_set(v___f_2627_, 10, v_a_2597_);
v___x_2628_ = lean_box(v_usedLetOnly_2590_);
lean_inc_ref(v_fvars_2595_);
v___f_2629_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__4___boxed), 6, 5);
lean_closure_set(v___f_2629_, 0, v_fvars_2595_);
lean_closure_set(v___f_2629_, 1, v___x_2628_);
lean_closure_set(v___f_2629_, 2, v_inst_2586_);
lean_closure_set(v___f_2629_, 3, v_toBind_2623_);
lean_closure_set(v___f_2629_, 4, v___f_2627_);
v___x_2630_ = lean_expr_instantiate_rev(v_e_2596_, v_fvars_2595_);
lean_dec_ref(v_fvars_2595_);
lean_dec_ref(v_e_2596_);
v___x_2631_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2585_, v_inst_2586_, v_inst_2587_, v_pre_2588_, v_post_2589_, v_usedLetOnly_2590_, v_skipConstInApp_2591_, v_skipInstances_2592_, v_x_2593_, v_x_2594_, v___x_2630_, v_a_2597_);
v___x_2632_ = lean_apply_4(v_toBind_2623_, lean_box(0), lean_box(0), v___x_2631_, v___f_2629_);
return v___x_2632_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(lean_object* v_expr_2633_, lean_object* v_data_2634_, lean_object* v_inst_2635_, lean_object* v_inst_2636_, lean_object* v_inst_2637_, lean_object* v_pre_2638_, lean_object* v_post_2639_, uint8_t v_usedLetOnly_2640_, uint8_t v_skipConstInApp_2641_, uint8_t v_skipInstances_2642_, lean_object* v_x_2643_, lean_object* v_x_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v_a_2647_){
_start:
{
size_t v___x_2648_; size_t v___x_2649_; uint8_t v___x_2650_; 
v___x_2648_ = lean_ptr_addr(v_expr_2633_);
v___x_2649_ = lean_ptr_addr(v_a_2647_);
v___x_2650_ = lean_usize_dec_eq(v___x_2648_, v___x_2649_);
if (v___x_2650_ == 0)
{
lean_object* v___x_2651_; lean_object* v___x_2652_; 
lean_dec_ref(v___y_2646_);
v___x_2651_ = l_Lean_Expr_mdata___override(v_data_2634_, v_a_2647_);
v___x_2652_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2635_, v_inst_2636_, v_inst_2637_, v_pre_2638_, v_post_2639_, v_usedLetOnly_2640_, v_skipConstInApp_2641_, v_skipInstances_2642_, v_x_2643_, v_x_2644_, v___x_2651_, v___y_2645_);
return v___x_2652_;
}
else
{
lean_object* v___x_2653_; 
lean_dec_ref(v_a_2647_);
lean_dec(v_data_2634_);
v___x_2653_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2635_, v_inst_2636_, v_inst_2637_, v_pre_2638_, v_post_2639_, v_usedLetOnly_2640_, v_skipConstInApp_2641_, v_skipInstances_2642_, v_x_2643_, v_x_2644_, v___y_2646_, v___y_2645_);
return v___x_2653_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed(lean_object* v_expr_2654_, lean_object* v_data_2655_, lean_object* v_inst_2656_, lean_object* v_inst_2657_, lean_object* v_inst_2658_, lean_object* v_pre_2659_, lean_object* v_post_2660_, lean_object* v_usedLetOnly_2661_, lean_object* v_skipConstInApp_2662_, lean_object* v_skipInstances_2663_, lean_object* v_x_2664_, lean_object* v_x_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v_a_2668_){
_start:
{
uint8_t v_usedLetOnly_boxed_2669_; uint8_t v_skipConstInApp_boxed_2670_; uint8_t v_skipInstances_boxed_2671_; lean_object* v_res_2672_; 
v_usedLetOnly_boxed_2669_ = lean_unbox(v_usedLetOnly_2661_);
v_skipConstInApp_boxed_2670_ = lean_unbox(v_skipConstInApp_2662_);
v_skipInstances_boxed_2671_ = lean_unbox(v_skipInstances_2663_);
v_res_2672_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8(v_expr_2654_, v_data_2655_, v_inst_2656_, v_inst_2657_, v_inst_2658_, v_pre_2659_, v_post_2660_, v_usedLetOnly_boxed_2669_, v_skipConstInApp_boxed_2670_, v_skipInstances_boxed_2671_, v_x_2664_, v_x_2665_, v___y_2666_, v___y_2667_, v_a_2668_);
lean_dec(v___y_2666_);
lean_dec_ref(v_expr_2654_);
return v_res_2672_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(lean_object* v_struct_2673_, lean_object* v_typeName_2674_, lean_object* v_idx_2675_, lean_object* v_inst_2676_, lean_object* v_inst_2677_, lean_object* v_inst_2678_, lean_object* v_pre_2679_, lean_object* v_post_2680_, uint8_t v_usedLetOnly_2681_, uint8_t v_skipConstInApp_2682_, uint8_t v_skipInstances_2683_, lean_object* v_x_2684_, lean_object* v_x_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v_a_2688_){
_start:
{
size_t v___x_2689_; size_t v___x_2690_; uint8_t v___x_2691_; 
v___x_2689_ = lean_ptr_addr(v_struct_2673_);
v___x_2690_ = lean_ptr_addr(v_a_2688_);
v___x_2691_ = lean_usize_dec_eq(v___x_2689_, v___x_2690_);
if (v___x_2691_ == 0)
{
lean_object* v___x_2692_; lean_object* v___x_2693_; 
lean_dec_ref(v___y_2687_);
v___x_2692_ = l_Lean_Expr_proj___override(v_typeName_2674_, v_idx_2675_, v_a_2688_);
v___x_2693_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2676_, v_inst_2677_, v_inst_2678_, v_pre_2679_, v_post_2680_, v_usedLetOnly_2681_, v_skipConstInApp_2682_, v_skipInstances_2683_, v_x_2684_, v_x_2685_, v___x_2692_, v___y_2686_);
return v___x_2693_;
}
else
{
lean_object* v___x_2694_; 
lean_dec_ref(v_a_2688_);
lean_dec(v_idx_2675_);
lean_dec(v_typeName_2674_);
v___x_2694_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2676_, v_inst_2677_, v_inst_2678_, v_pre_2679_, v_post_2680_, v_usedLetOnly_2681_, v_skipConstInApp_2682_, v_skipInstances_2683_, v_x_2684_, v_x_2685_, v___y_2687_, v___y_2686_);
return v___x_2694_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed(lean_object* v_struct_2695_, lean_object* v_typeName_2696_, lean_object* v_idx_2697_, lean_object* v_inst_2698_, lean_object* v_inst_2699_, lean_object* v_inst_2700_, lean_object* v_pre_2701_, lean_object* v_post_2702_, lean_object* v_usedLetOnly_2703_, lean_object* v_skipConstInApp_2704_, lean_object* v_skipInstances_2705_, lean_object* v_x_2706_, lean_object* v_x_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_, lean_object* v_a_2710_){
_start:
{
uint8_t v_usedLetOnly_boxed_2711_; uint8_t v_skipConstInApp_boxed_2712_; uint8_t v_skipInstances_boxed_2713_; lean_object* v_res_2714_; 
v_usedLetOnly_boxed_2711_ = lean_unbox(v_usedLetOnly_2703_);
v_skipConstInApp_boxed_2712_ = lean_unbox(v_skipConstInApp_2704_);
v_skipInstances_boxed_2713_ = lean_unbox(v_skipInstances_2705_);
v_res_2714_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10(v_struct_2695_, v_typeName_2696_, v_idx_2697_, v_inst_2698_, v_inst_2699_, v_inst_2700_, v_pre_2701_, v_post_2702_, v_usedLetOnly_boxed_2711_, v_skipConstInApp_boxed_2712_, v_skipInstances_boxed_2713_, v_x_2706_, v_x_2707_, v___y_2708_, v___y_2709_, v_a_2710_);
lean_dec(v___y_2708_);
lean_dec_ref(v_struct_2695_);
return v_res_2714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(lean_object* v_toApplicative_2715_, lean_object* v_inst_2716_, lean_object* v_inst_2717_, lean_object* v_inst_2718_, lean_object* v_pre_2719_, lean_object* v_post_2720_, uint8_t v_usedLetOnly_2721_, uint8_t v_skipConstInApp_2722_, uint8_t v_skipInstances_2723_, lean_object* v_x_2724_, lean_object* v_x_2725_, lean_object* v___y_2726_, lean_object* v___f_2727_, lean_object* v_toBind_2728_, lean_object* v_e_2729_, lean_object* v_a_2730_){
_start:
{
lean_object* v___y_2732_; 
switch(lean_obj_tag(v_a_2730_))
{
case 0:
{
lean_object* v_e_2764_; lean_object* v_toPure_2765_; lean_object* v___x_2766_; 
lean_dec_ref(v_e_2729_);
lean_dec(v_toBind_2728_);
lean_dec(v___f_2727_);
lean_dec(v_x_2725_);
lean_dec(v_post_2720_);
lean_dec(v_pre_2719_);
lean_dec_ref(v_inst_2718_);
lean_dec(v_inst_2717_);
lean_dec_ref(v_inst_2716_);
v_e_2764_ = lean_ctor_get(v_a_2730_, 0);
lean_inc_ref(v_e_2764_);
lean_dec_ref(v_a_2730_);
v_toPure_2765_ = lean_ctor_get(v_toApplicative_2715_, 1);
lean_inc(v_toPure_2765_);
lean_dec_ref(v_toApplicative_2715_);
v___x_2766_ = lean_apply_2(v_toPure_2765_, lean_box(0), v_e_2764_);
return v___x_2766_;
}
case 1:
{
lean_object* v_e_2767_; lean_object* v___x_2768_; 
lean_dec_ref(v_e_2729_);
lean_dec(v_toBind_2728_);
lean_dec(v___f_2727_);
lean_dec_ref(v_toApplicative_2715_);
v_e_2767_ = lean_ctor_get(v_a_2730_, 0);
lean_inc_ref(v_e_2767_);
lean_dec_ref(v_a_2730_);
v___x_2768_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2716_, v_inst_2717_, v_inst_2718_, v_pre_2719_, v_post_2720_, v_usedLetOnly_2721_, v_skipConstInApp_2722_, v_skipInstances_2723_, v_x_2724_, v_x_2725_, v_e_2767_, v___y_2726_);
return v___x_2768_;
}
default: 
{
lean_object* v_e_x3f_2769_; 
lean_dec_ref(v_toApplicative_2715_);
v_e_x3f_2769_ = lean_ctor_get(v_a_2730_, 0);
lean_inc(v_e_x3f_2769_);
lean_dec_ref(v_a_2730_);
if (lean_obj_tag(v_e_x3f_2769_) == 0)
{
v___y_2732_ = v_e_2729_;
goto v___jp_2731_;
}
else
{
lean_object* v_val_2770_; 
lean_dec_ref(v_e_2729_);
v_val_2770_ = lean_ctor_get(v_e_x3f_2769_, 0);
lean_inc(v_val_2770_);
lean_dec_ref(v_e_x3f_2769_);
v___y_2732_ = v_val_2770_;
goto v___jp_2731_;
}
}
}
v___jp_2731_:
{
switch(lean_obj_tag(v___y_2732_))
{
case 7:
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
lean_dec(v_toBind_2728_);
lean_dec(v___f_2727_);
v___x_2733_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0);
v___x_2734_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2716_, v_inst_2717_, v_inst_2718_, v_pre_2719_, v_post_2720_, v_usedLetOnly_2721_, v_skipConstInApp_2722_, v_skipInstances_2723_, v_x_2724_, v_x_2725_, v___x_2733_, v___y_2732_, v___y_2726_);
return v___x_2734_;
}
case 6:
{
lean_object* v___x_2735_; lean_object* v___x_2736_; 
lean_dec(v_toBind_2728_);
lean_dec(v___f_2727_);
v___x_2735_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0);
v___x_2736_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2716_, v_inst_2717_, v_inst_2718_, v_pre_2719_, v_post_2720_, v_usedLetOnly_2721_, v_skipConstInApp_2722_, v_skipInstances_2723_, v_x_2724_, v_x_2725_, v___x_2735_, v___y_2732_, v___y_2726_);
return v___x_2736_;
}
case 8:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; 
lean_dec(v_toBind_2728_);
lean_dec(v___f_2727_);
v___x_2737_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0);
v___x_2738_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2716_, v_inst_2717_, v_inst_2718_, v_pre_2719_, v_post_2720_, v_usedLetOnly_2721_, v_skipConstInApp_2722_, v_skipInstances_2723_, v_x_2724_, v_x_2725_, v___x_2737_, v___y_2732_, v___y_2726_);
return v___x_2738_;
}
case 5:
{
lean_object* v_dummy_2739_; lean_object* v_nargs_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_3755__overap_2744_; lean_object* v___x_2745_; 
lean_dec(v_toBind_2728_);
lean_dec(v_x_2725_);
lean_dec(v_post_2720_);
lean_dec(v_pre_2719_);
lean_dec_ref(v_inst_2718_);
lean_dec(v_inst_2717_);
lean_dec_ref(v_inst_2716_);
v_dummy_2739_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_2740_ = l_Lean_Expr_getAppNumArgs(v___y_2732_);
lean_inc(v_nargs_2740_);
v___x_2741_ = lean_mk_array(v_nargs_2740_, v_dummy_2739_);
v___x_2742_ = lean_unsigned_to_nat(1u);
v___x_2743_ = lean_nat_sub(v_nargs_2740_, v___x_2742_);
lean_dec(v_nargs_2740_);
v___x_3755__overap_2744_ = l_Lean_Expr_withAppAux___redArg(v___f_2727_, v___y_2732_, v___x_2741_, v___x_2743_);
lean_inc(v___y_2726_);
v___x_2745_ = lean_apply_1(v___x_3755__overap_2744_, v___y_2726_);
return v___x_2745_;
}
case 10:
{
lean_object* v_data_2746_; lean_object* v_expr_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___f_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
lean_dec(v___f_2727_);
v_data_2746_ = lean_ctor_get(v___y_2732_, 0);
lean_inc(v_data_2746_);
v_expr_2747_ = lean_ctor_get(v___y_2732_, 1);
lean_inc_ref_n(v_expr_2747_, 2);
v___x_2748_ = lean_box(v_usedLetOnly_2721_);
v___x_2749_ = lean_box(v_skipConstInApp_2722_);
v___x_2750_ = lean_box(v_skipInstances_2723_);
lean_inc(v___y_2726_);
lean_inc(v_x_2725_);
lean_inc(v_post_2720_);
lean_inc(v_pre_2719_);
lean_inc_ref(v_inst_2718_);
lean_inc(v_inst_2717_);
lean_inc_ref(v_inst_2716_);
v___f_2751_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__8___boxed), 15, 14);
lean_closure_set(v___f_2751_, 0, v_expr_2747_);
lean_closure_set(v___f_2751_, 1, v_data_2746_);
lean_closure_set(v___f_2751_, 2, v_inst_2716_);
lean_closure_set(v___f_2751_, 3, v_inst_2717_);
lean_closure_set(v___f_2751_, 4, v_inst_2718_);
lean_closure_set(v___f_2751_, 5, v_pre_2719_);
lean_closure_set(v___f_2751_, 6, v_post_2720_);
lean_closure_set(v___f_2751_, 7, v___x_2748_);
lean_closure_set(v___f_2751_, 8, v___x_2749_);
lean_closure_set(v___f_2751_, 9, v___x_2750_);
lean_closure_set(v___f_2751_, 10, v_x_2724_);
lean_closure_set(v___f_2751_, 11, v_x_2725_);
lean_closure_set(v___f_2751_, 12, v___y_2726_);
lean_closure_set(v___f_2751_, 13, v___y_2732_);
v___x_2752_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2716_, v_inst_2717_, v_inst_2718_, v_pre_2719_, v_post_2720_, v_usedLetOnly_2721_, v_skipConstInApp_2722_, v_skipInstances_2723_, v_x_2724_, v_x_2725_, v_expr_2747_, v___y_2726_);
v___x_2753_ = lean_apply_4(v_toBind_2728_, lean_box(0), lean_box(0), v___x_2752_, v___f_2751_);
return v___x_2753_;
}
case 11:
{
lean_object* v_typeName_2754_; lean_object* v_idx_2755_; lean_object* v_struct_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___f_2760_; lean_object* v___x_2761_; lean_object* v___x_2762_; 
lean_dec(v___f_2727_);
v_typeName_2754_ = lean_ctor_get(v___y_2732_, 0);
lean_inc(v_typeName_2754_);
v_idx_2755_ = lean_ctor_get(v___y_2732_, 1);
lean_inc(v_idx_2755_);
v_struct_2756_ = lean_ctor_get(v___y_2732_, 2);
lean_inc_ref_n(v_struct_2756_, 2);
v___x_2757_ = lean_box(v_usedLetOnly_2721_);
v___x_2758_ = lean_box(v_skipConstInApp_2722_);
v___x_2759_ = lean_box(v_skipInstances_2723_);
lean_inc(v___y_2726_);
lean_inc(v_x_2725_);
lean_inc(v_post_2720_);
lean_inc(v_pre_2719_);
lean_inc_ref(v_inst_2718_);
lean_inc(v_inst_2717_);
lean_inc_ref(v_inst_2716_);
v___f_2760_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__10___boxed), 16, 15);
lean_closure_set(v___f_2760_, 0, v_struct_2756_);
lean_closure_set(v___f_2760_, 1, v_typeName_2754_);
lean_closure_set(v___f_2760_, 2, v_idx_2755_);
lean_closure_set(v___f_2760_, 3, v_inst_2716_);
lean_closure_set(v___f_2760_, 4, v_inst_2717_);
lean_closure_set(v___f_2760_, 5, v_inst_2718_);
lean_closure_set(v___f_2760_, 6, v_pre_2719_);
lean_closure_set(v___f_2760_, 7, v_post_2720_);
lean_closure_set(v___f_2760_, 8, v___x_2757_);
lean_closure_set(v___f_2760_, 9, v___x_2758_);
lean_closure_set(v___f_2760_, 10, v___x_2759_);
lean_closure_set(v___f_2760_, 11, v_x_2724_);
lean_closure_set(v___f_2760_, 12, v_x_2725_);
lean_closure_set(v___f_2760_, 13, v___y_2726_);
lean_closure_set(v___f_2760_, 14, v___y_2732_);
v___x_2761_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2716_, v_inst_2717_, v_inst_2718_, v_pre_2719_, v_post_2720_, v_usedLetOnly_2721_, v_skipConstInApp_2722_, v_skipInstances_2723_, v_x_2724_, v_x_2725_, v_struct_2756_, v___y_2726_);
v___x_2762_ = lean_apply_4(v_toBind_2728_, lean_box(0), lean_box(0), v___x_2761_, v___f_2760_);
return v___x_2762_;
}
default: 
{
lean_object* v___x_2763_; 
lean_dec(v_toBind_2728_);
lean_dec(v___f_2727_);
v___x_2763_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2716_, v_inst_2717_, v_inst_2718_, v_pre_2719_, v_post_2720_, v_usedLetOnly_2721_, v_skipConstInApp_2722_, v_skipInstances_2723_, v_x_2724_, v_x_2725_, v___y_2732_, v___y_2726_);
return v___x_2763_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed(lean_object* v_toApplicative_2771_, lean_object* v_inst_2772_, lean_object* v_inst_2773_, lean_object* v_inst_2774_, lean_object* v_pre_2775_, lean_object* v_post_2776_, lean_object* v_usedLetOnly_2777_, lean_object* v_skipConstInApp_2778_, lean_object* v_skipInstances_2779_, lean_object* v_x_2780_, lean_object* v_x_2781_, lean_object* v___y_2782_, lean_object* v___f_2783_, lean_object* v_toBind_2784_, lean_object* v_e_2785_, lean_object* v_a_2786_){
_start:
{
uint8_t v_usedLetOnly_boxed_2787_; uint8_t v_skipConstInApp_boxed_2788_; uint8_t v_skipInstances_boxed_2789_; lean_object* v_res_2790_; 
v_usedLetOnly_boxed_2787_ = lean_unbox(v_usedLetOnly_2777_);
v_skipConstInApp_boxed_2788_ = lean_unbox(v_skipConstInApp_2778_);
v_skipInstances_boxed_2789_ = lean_unbox(v_skipInstances_2779_);
v_res_2790_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11(v_toApplicative_2771_, v_inst_2772_, v_inst_2773_, v_inst_2774_, v_pre_2775_, v_post_2776_, v_usedLetOnly_boxed_2787_, v_skipConstInApp_boxed_2788_, v_skipInstances_boxed_2789_, v_x_2780_, v_x_2781_, v___y_2782_, v___f_2783_, v_toBind_2784_, v_e_2785_, v_a_2786_);
lean_dec(v___y_2782_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(lean_object* v_toApplicative_2791_, lean_object* v_inst_2792_, lean_object* v_inst_2793_, lean_object* v_inst_2794_, lean_object* v_pre_2795_, lean_object* v_post_2796_, uint8_t v_usedLetOnly_2797_, uint8_t v_skipConstInApp_2798_, uint8_t v_skipInstances_2799_, lean_object* v_x_2800_, lean_object* v_x_2801_, lean_object* v___f_2802_, lean_object* v_toBind_2803_, lean_object* v_e_2804_, lean_object* v_____r_2805_, lean_object* v___y_2806_){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___f_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; 
v___x_2807_ = lean_box(v_usedLetOnly_2797_);
v___x_2808_ = lean_box(v_skipConstInApp_2798_);
v___x_2809_ = lean_box(v_skipInstances_2799_);
lean_inc_ref(v_e_2804_);
lean_inc(v_toBind_2803_);
lean_inc(v___y_2806_);
lean_inc(v_pre_2795_);
v___f_2810_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___boxed), 16, 15);
lean_closure_set(v___f_2810_, 0, v_toApplicative_2791_);
lean_closure_set(v___f_2810_, 1, v_inst_2792_);
lean_closure_set(v___f_2810_, 2, v_inst_2793_);
lean_closure_set(v___f_2810_, 3, v_inst_2794_);
lean_closure_set(v___f_2810_, 4, v_pre_2795_);
lean_closure_set(v___f_2810_, 5, v_post_2796_);
lean_closure_set(v___f_2810_, 6, v___x_2807_);
lean_closure_set(v___f_2810_, 7, v___x_2808_);
lean_closure_set(v___f_2810_, 8, v___x_2809_);
lean_closure_set(v___f_2810_, 9, v_x_2800_);
lean_closure_set(v___f_2810_, 10, v_x_2801_);
lean_closure_set(v___f_2810_, 11, v___y_2806_);
lean_closure_set(v___f_2810_, 12, v___f_2802_);
lean_closure_set(v___f_2810_, 13, v_toBind_2803_);
lean_closure_set(v___f_2810_, 14, v_e_2804_);
v___x_2811_ = lean_apply_1(v_pre_2795_, v_e_2804_);
v___x_2812_ = lean_apply_4(v_toBind_2803_, lean_box(0), lean_box(0), v___x_2811_, v___f_2810_);
return v___x_2812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed(lean_object* v_toApplicative_2813_, lean_object* v_inst_2814_, lean_object* v_inst_2815_, lean_object* v_inst_2816_, lean_object* v_pre_2817_, lean_object* v_post_2818_, lean_object* v_usedLetOnly_2819_, lean_object* v_skipConstInApp_2820_, lean_object* v_skipInstances_2821_, lean_object* v_x_2822_, lean_object* v_x_2823_, lean_object* v___f_2824_, lean_object* v_toBind_2825_, lean_object* v_e_2826_, lean_object* v_____r_2827_, lean_object* v___y_2828_){
_start:
{
uint8_t v_usedLetOnly_boxed_2829_; uint8_t v_skipConstInApp_boxed_2830_; uint8_t v_skipInstances_boxed_2831_; lean_object* v_res_2832_; 
v_usedLetOnly_boxed_2829_ = lean_unbox(v_usedLetOnly_2819_);
v_skipConstInApp_boxed_2830_ = lean_unbox(v_skipConstInApp_2820_);
v_skipInstances_boxed_2831_ = lean_unbox(v_skipInstances_2821_);
v_res_2832_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12(v_toApplicative_2813_, v_inst_2814_, v_inst_2815_, v_inst_2816_, v_pre_2817_, v_post_2818_, v_usedLetOnly_boxed_2829_, v_skipConstInApp_boxed_2830_, v_skipInstances_boxed_2831_, v_x_2822_, v_x_2823_, v___f_2824_, v_toBind_2825_, v_e_2826_, v_____r_2827_, v___y_2828_);
lean_dec(v___y_2828_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(lean_object* v_inst_2833_, lean_object* v_inst_2834_, lean_object* v_inst_2835_, lean_object* v_pre_2836_, lean_object* v_post_2837_, uint8_t v_usedLetOnly_2838_, uint8_t v_skipConstInApp_2839_, uint8_t v_skipInstances_2840_, lean_object* v_x_2841_, lean_object* v_x_2842_, lean_object* v_e_2843_, lean_object* v_a_2844_){
_start:
{
lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___f_2849_; lean_object* v___f_2850_; lean_object* v___x_2851_; lean_object* v_toApplicative_2852_; lean_object* v_toBind_2853_; lean_object* v___f_2854_; lean_object* v___f_2855_; lean_object* v___f_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___f_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___f_2864_; lean_object* v___f_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2845_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__0);
v___x_2846_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___closed__1);
lean_inc_ref_n(v_inst_2833_, 3);
v___x_2847_ = l_Lean_MonadCacheT_instMonad___redArg(v_x_2841_, v___x_2845_, v___x_2846_, v_inst_2833_);
v___x_2848_ = l_Lean_MonadCacheT_instMonadControl___redArg(v_x_2841_, v___x_2845_, v___x_2846_);
lean_inc_ref_n(v_inst_2835_, 3);
lean_inc_ref(v___x_2848_);
v___f_2849_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__3), 4, 2);
lean_closure_set(v___f_2849_, 0, v___x_2848_);
lean_closure_set(v___f_2849_, 1, v_inst_2835_);
v___f_2850_ = lean_alloc_closure((void*)(l_instMonadControlTOfMonadControl___redArg___lam__4), 4, 2);
lean_closure_set(v___f_2850_, 0, v___x_2848_);
lean_closure_set(v___f_2850_, 1, v_inst_2835_);
v___x_2851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2851_, 0, v___f_2849_);
lean_ctor_set(v___x_2851_, 1, v___f_2850_);
v_toApplicative_2852_ = lean_ctor_get(v_inst_2833_, 0);
lean_inc_ref_n(v_toApplicative_2852_, 6);
v_toBind_2853_ = lean_ctor_get(v_inst_2833_, 1);
lean_inc_n(v_toBind_2853_, 6);
v___f_2854_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2854_, 0, v_toApplicative_2852_);
lean_inc_n(v_x_2842_, 3);
lean_inc_n(v_a_2844_, 3);
lean_inc_ref_n(v_e_2843_, 2);
v___f_2855_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__2___boxed), 8, 7);
lean_closure_set(v___f_2855_, 0, v_toApplicative_2852_);
lean_closure_set(v___f_2855_, 1, v___x_2845_);
lean_closure_set(v___f_2855_, 2, v___x_2846_);
lean_closure_set(v___f_2855_, 3, v_e_2843_);
lean_closure_set(v___f_2855_, 4, v_a_2844_);
lean_closure_set(v___f_2855_, 5, v_x_2842_);
lean_closure_set(v___f_2855_, 6, v_toBind_2853_);
v___f_2856_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__3___boxed), 5, 4);
lean_closure_set(v___f_2856_, 0, v_toApplicative_2852_);
lean_closure_set(v___f_2856_, 1, v___x_2845_);
lean_closure_set(v___f_2856_, 2, v___x_2846_);
lean_closure_set(v___f_2856_, 3, v_e_2843_);
v___x_2857_ = lean_box(v_skipInstances_2840_);
v___x_2858_ = lean_box(v_usedLetOnly_2838_);
v___x_2859_ = lean_box(v_skipConstInApp_2839_);
lean_inc_ref(v___x_2847_);
lean_inc(v_post_2837_);
lean_inc(v_pre_2836_);
lean_inc_n(v_inst_2834_, 2);
v___f_2860_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__9___boxed), 17, 14);
lean_closure_set(v___f_2860_, 0, v___x_2857_);
lean_closure_set(v___f_2860_, 1, v_inst_2833_);
lean_closure_set(v___f_2860_, 2, v_inst_2834_);
lean_closure_set(v___f_2860_, 3, v_inst_2835_);
lean_closure_set(v___f_2860_, 4, v_pre_2836_);
lean_closure_set(v___f_2860_, 5, v_post_2837_);
lean_closure_set(v___f_2860_, 6, v___x_2858_);
lean_closure_set(v___f_2860_, 7, v___x_2859_);
lean_closure_set(v___f_2860_, 8, v_x_2841_);
lean_closure_set(v___f_2860_, 9, v_x_2842_);
lean_closure_set(v___f_2860_, 10, v___x_2847_);
lean_closure_set(v___f_2860_, 11, v_toBind_2853_);
lean_closure_set(v___f_2860_, 12, v_toApplicative_2852_);
lean_closure_set(v___f_2860_, 13, v___f_2854_);
v___x_2861_ = lean_box(v_usedLetOnly_2838_);
v___x_2862_ = lean_box(v_skipConstInApp_2839_);
v___x_2863_ = lean_box(v_skipInstances_2840_);
v___f_2864_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__12___boxed), 16, 14);
lean_closure_set(v___f_2864_, 0, v_toApplicative_2852_);
lean_closure_set(v___f_2864_, 1, v_inst_2833_);
lean_closure_set(v___f_2864_, 2, v_inst_2834_);
lean_closure_set(v___f_2864_, 3, v_inst_2835_);
lean_closure_set(v___f_2864_, 4, v_pre_2836_);
lean_closure_set(v___f_2864_, 5, v_post_2837_);
lean_closure_set(v___f_2864_, 6, v___x_2861_);
lean_closure_set(v___f_2864_, 7, v___x_2862_);
lean_closure_set(v___f_2864_, 8, v___x_2863_);
lean_closure_set(v___f_2864_, 9, v_x_2841_);
lean_closure_set(v___f_2864_, 10, v_x_2842_);
lean_closure_set(v___f_2864_, 11, v___f_2860_);
lean_closure_set(v___f_2864_, 12, v_toBind_2853_);
lean_closure_set(v___f_2864_, 13, v_e_2843_);
v___f_2865_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__14___boxed), 13, 12);
lean_closure_set(v___f_2865_, 0, v_inst_2834_);
lean_closure_set(v___f_2865_, 1, v_x_2841_);
lean_closure_set(v___f_2865_, 2, v___x_2845_);
lean_closure_set(v___f_2865_, 3, v___x_2846_);
lean_closure_set(v___f_2865_, 4, v_inst_2833_);
lean_closure_set(v___f_2865_, 5, v___f_2864_);
lean_closure_set(v___f_2865_, 6, v___x_2851_);
lean_closure_set(v___f_2865_, 7, v___x_2847_);
lean_closure_set(v___f_2865_, 8, v_a_2844_);
lean_closure_set(v___f_2865_, 9, v_toBind_2853_);
lean_closure_set(v___f_2865_, 10, v___f_2855_);
lean_closure_set(v___f_2865_, 11, v_toApplicative_2852_);
v___x_2866_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2866_, 0, lean_box(0));
lean_closure_set(v___x_2866_, 1, lean_box(0));
lean_closure_set(v___x_2866_, 2, v_a_2844_);
v___x_2867_ = lean_apply_2(v_x_2842_, lean_box(0), v___x_2866_);
v___x_2868_ = lean_apply_4(v_toBind_2853_, lean_box(0), lean_box(0), v___x_2867_, v___f_2856_);
v___x_2869_ = lean_apply_4(v_toBind_2853_, lean_box(0), lean_box(0), v___x_2868_, v___f_2865_);
return v___x_2869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(lean_object* v_toApplicative_2870_, lean_object* v_inst_2871_, lean_object* v_inst_2872_, lean_object* v_inst_2873_, lean_object* v_pre_2874_, lean_object* v_post_2875_, uint8_t v_usedLetOnly_2876_, uint8_t v_skipConstInApp_2877_, uint8_t v_skipInstances_2878_, lean_object* v_x_2879_, lean_object* v_x_2880_, lean_object* v_a_2881_, lean_object* v_e_2882_, lean_object* v_a_2883_){
_start:
{
lean_object* v___y_2885_; 
switch(lean_obj_tag(v_a_2883_))
{
case 0:
{
lean_object* v_e_2888_; lean_object* v_toPure_2889_; lean_object* v___x_2890_; 
lean_dec_ref(v_e_2882_);
lean_dec(v_x_2880_);
lean_dec(v_post_2875_);
lean_dec(v_pre_2874_);
lean_dec_ref(v_inst_2873_);
lean_dec(v_inst_2872_);
lean_dec_ref(v_inst_2871_);
v_e_2888_ = lean_ctor_get(v_a_2883_, 0);
lean_inc_ref(v_e_2888_);
lean_dec_ref(v_a_2883_);
v_toPure_2889_ = lean_ctor_get(v_toApplicative_2870_, 1);
lean_inc(v_toPure_2889_);
lean_dec_ref(v_toApplicative_2870_);
v___x_2890_ = lean_apply_2(v_toPure_2889_, lean_box(0), v_e_2888_);
return v___x_2890_;
}
case 1:
{
lean_object* v_e_2891_; lean_object* v___x_2892_; 
lean_dec_ref(v_e_2882_);
lean_dec_ref(v_toApplicative_2870_);
v_e_2891_ = lean_ctor_get(v_a_2883_, 0);
lean_inc_ref(v_e_2891_);
lean_dec_ref(v_a_2883_);
v___x_2892_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_2871_, v_inst_2872_, v_inst_2873_, v_pre_2874_, v_post_2875_, v_usedLetOnly_2876_, v_skipConstInApp_2877_, v_skipInstances_2878_, v_x_2879_, v_x_2880_, v_e_2891_, v_a_2881_);
return v___x_2892_;
}
default: 
{
lean_object* v_e_x3f_2893_; 
lean_dec(v_x_2880_);
lean_dec(v_post_2875_);
lean_dec(v_pre_2874_);
lean_dec_ref(v_inst_2873_);
lean_dec(v_inst_2872_);
lean_dec_ref(v_inst_2871_);
v_e_x3f_2893_ = lean_ctor_get(v_a_2883_, 0);
lean_inc(v_e_x3f_2893_);
lean_dec_ref(v_a_2883_);
if (lean_obj_tag(v_e_x3f_2893_) == 0)
{
v___y_2885_ = v_e_2882_;
goto v___jp_2884_;
}
else
{
lean_object* v_val_2894_; 
lean_dec_ref(v_e_2882_);
v_val_2894_ = lean_ctor_get(v_e_x3f_2893_, 0);
lean_inc(v_val_2894_);
lean_dec_ref(v_e_x3f_2893_);
v___y_2885_ = v_val_2894_;
goto v___jp_2884_;
}
}
}
v___jp_2884_:
{
lean_object* v_toPure_2886_; lean_object* v___x_2887_; 
v_toPure_2886_ = lean_ctor_get(v_toApplicative_2870_, 1);
lean_inc(v_toPure_2886_);
lean_dec_ref(v_toApplicative_2870_);
v___x_2887_ = lean_apply_2(v_toPure_2886_, lean_box(0), v___y_2885_);
return v___x_2887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed(lean_object* v_toApplicative_2895_, lean_object* v_inst_2896_, lean_object* v_inst_2897_, lean_object* v_inst_2898_, lean_object* v_pre_2899_, lean_object* v_post_2900_, lean_object* v_usedLetOnly_2901_, lean_object* v_skipConstInApp_2902_, lean_object* v_skipInstances_2903_, lean_object* v_x_2904_, lean_object* v_x_2905_, lean_object* v_a_2906_, lean_object* v_e_2907_, lean_object* v_a_2908_){
_start:
{
uint8_t v_usedLetOnly_boxed_2909_; uint8_t v_skipConstInApp_boxed_2910_; uint8_t v_skipInstances_boxed_2911_; lean_object* v_res_2912_; 
v_usedLetOnly_boxed_2909_ = lean_unbox(v_usedLetOnly_2901_);
v_skipConstInApp_boxed_2910_ = lean_unbox(v_skipConstInApp_2902_);
v_skipInstances_boxed_2911_ = lean_unbox(v_skipInstances_2903_);
v_res_2912_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0(v_toApplicative_2895_, v_inst_2896_, v_inst_2897_, v_inst_2898_, v_pre_2899_, v_post_2900_, v_usedLetOnly_boxed_2909_, v_skipConstInApp_boxed_2910_, v_skipInstances_boxed_2911_, v_x_2904_, v_x_2905_, v_a_2906_, v_e_2907_, v_a_2908_);
lean_dec(v_a_2906_);
return v_res_2912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(lean_object* v_inst_2913_, lean_object* v_inst_2914_, lean_object* v_inst_2915_, lean_object* v_pre_2916_, lean_object* v_post_2917_, uint8_t v_usedLetOnly_2918_, uint8_t v_skipConstInApp_2919_, uint8_t v_skipInstances_2920_, lean_object* v_x_2921_, lean_object* v_x_2922_, lean_object* v_e_2923_, lean_object* v_a_2924_){
_start:
{
lean_object* v_toApplicative_2925_; lean_object* v_toBind_2926_; lean_object* v___x_2927_; lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v___f_2930_; lean_object* v___x_2931_; lean_object* v___x_2932_; 
v_toApplicative_2925_ = lean_ctor_get(v_inst_2913_, 0);
lean_inc_ref(v_toApplicative_2925_);
v_toBind_2926_ = lean_ctor_get(v_inst_2913_, 1);
lean_inc(v_toBind_2926_);
v___x_2927_ = lean_box(v_usedLetOnly_2918_);
v___x_2928_ = lean_box(v_skipConstInApp_2919_);
v___x_2929_ = lean_box(v_skipInstances_2920_);
lean_inc_ref(v_e_2923_);
lean_inc(v_a_2924_);
lean_inc(v_post_2917_);
v___f_2930_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___lam__0___boxed), 14, 13);
lean_closure_set(v___f_2930_, 0, v_toApplicative_2925_);
lean_closure_set(v___f_2930_, 1, v_inst_2913_);
lean_closure_set(v___f_2930_, 2, v_inst_2914_);
lean_closure_set(v___f_2930_, 3, v_inst_2915_);
lean_closure_set(v___f_2930_, 4, v_pre_2916_);
lean_closure_set(v___f_2930_, 5, v_post_2917_);
lean_closure_set(v___f_2930_, 6, v___x_2927_);
lean_closure_set(v___f_2930_, 7, v___x_2928_);
lean_closure_set(v___f_2930_, 8, v___x_2929_);
lean_closure_set(v___f_2930_, 9, v_x_2921_);
lean_closure_set(v___f_2930_, 10, v_x_2922_);
lean_closure_set(v___f_2930_, 11, v_a_2924_);
lean_closure_set(v___f_2930_, 12, v_e_2923_);
v___x_2931_ = lean_apply_1(v_post_2917_, v_e_2923_);
v___x_2932_ = lean_apply_4(v_toBind_2926_, lean_box(0), lean_box(0), v___x_2931_, v___f_2930_);
return v___x_2932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___lam__3(lean_object* v_inst_2933_, lean_object* v_inst_2934_, lean_object* v_inst_2935_, lean_object* v_pre_2936_, lean_object* v_post_2937_, uint8_t v_usedLetOnly_2938_, uint8_t v_skipConstInApp_2939_, uint8_t v_skipInstances_2940_, lean_object* v_x_2941_, lean_object* v_x_2942_, lean_object* v_a_2943_, lean_object* v_a_2944_){
_start:
{
lean_object* v___x_2945_; 
v___x_2945_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2933_, v_inst_2934_, v_inst_2935_, v_pre_2936_, v_post_2937_, v_usedLetOnly_2938_, v_skipConstInApp_2939_, v_skipInstances_2940_, v_x_2941_, v_x_2942_, v_a_2944_, v_a_2943_);
return v___x_2945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg___boxed(lean_object* v_inst_2946_, lean_object* v_inst_2947_, lean_object* v_inst_2948_, lean_object* v_pre_2949_, lean_object* v_post_2950_, lean_object* v_usedLetOnly_2951_, lean_object* v_skipConstInApp_2952_, lean_object* v_skipInstances_2953_, lean_object* v_x_2954_, lean_object* v_x_2955_, lean_object* v_e_2956_, lean_object* v_a_2957_){
_start:
{
uint8_t v_usedLetOnly_boxed_2958_; uint8_t v_skipConstInApp_boxed_2959_; uint8_t v_skipInstances_boxed_2960_; lean_object* v_res_2961_; 
v_usedLetOnly_boxed_2958_ = lean_unbox(v_usedLetOnly_2951_);
v_skipConstInApp_boxed_2959_ = lean_unbox(v_skipConstInApp_2952_);
v_skipInstances_boxed_2960_ = lean_unbox(v_skipInstances_2953_);
v_res_2961_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_2946_, v_inst_2947_, v_inst_2948_, v_pre_2949_, v_post_2950_, v_usedLetOnly_boxed_2958_, v_skipConstInApp_boxed_2959_, v_skipInstances_boxed_2960_, v_x_2954_, v_x_2955_, v_e_2956_, v_a_2957_);
lean_dec(v_a_2957_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg___boxed(lean_object* v_inst_2962_, lean_object* v_inst_2963_, lean_object* v_inst_2964_, lean_object* v_pre_2965_, lean_object* v_post_2966_, lean_object* v_usedLetOnly_2967_, lean_object* v_skipConstInApp_2968_, lean_object* v_skipInstances_2969_, lean_object* v_x_2970_, lean_object* v_x_2971_, lean_object* v_fvars_2972_, lean_object* v_e_2973_, lean_object* v_a_2974_){
_start:
{
uint8_t v_usedLetOnly_boxed_2975_; uint8_t v_skipConstInApp_boxed_2976_; uint8_t v_skipInstances_boxed_2977_; lean_object* v_res_2978_; 
v_usedLetOnly_boxed_2975_ = lean_unbox(v_usedLetOnly_2967_);
v_skipConstInApp_boxed_2976_ = lean_unbox(v_skipConstInApp_2968_);
v_skipInstances_boxed_2977_ = lean_unbox(v_skipInstances_2969_);
v_res_2978_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_2962_, v_inst_2963_, v_inst_2964_, v_pre_2965_, v_post_2966_, v_usedLetOnly_boxed_2975_, v_skipConstInApp_boxed_2976_, v_skipInstances_boxed_2977_, v_x_2970_, v_x_2971_, v_fvars_2972_, v_e_2973_, v_a_2974_);
lean_dec(v_a_2974_);
return v_res_2978_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg___boxed(lean_object* v_inst_2979_, lean_object* v_inst_2980_, lean_object* v_inst_2981_, lean_object* v_pre_2982_, lean_object* v_post_2983_, lean_object* v_usedLetOnly_2984_, lean_object* v_skipConstInApp_2985_, lean_object* v_skipInstances_2986_, lean_object* v_x_2987_, lean_object* v_x_2988_, lean_object* v_fvars_2989_, lean_object* v_e_2990_, lean_object* v_a_2991_){
_start:
{
uint8_t v_usedLetOnly_boxed_2992_; uint8_t v_skipConstInApp_boxed_2993_; uint8_t v_skipInstances_boxed_2994_; lean_object* v_res_2995_; 
v_usedLetOnly_boxed_2992_ = lean_unbox(v_usedLetOnly_2984_);
v_skipConstInApp_boxed_2993_ = lean_unbox(v_skipConstInApp_2985_);
v_skipInstances_boxed_2994_ = lean_unbox(v_skipInstances_2986_);
v_res_2995_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_2979_, v_inst_2980_, v_inst_2981_, v_pre_2982_, v_post_2983_, v_usedLetOnly_boxed_2992_, v_skipConstInApp_boxed_2993_, v_skipInstances_boxed_2994_, v_x_2987_, v_x_2988_, v_fvars_2989_, v_e_2990_, v_a_2991_);
lean_dec(v_a_2991_);
return v_res_2995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg___boxed(lean_object* v_inst_2996_, lean_object* v_inst_2997_, lean_object* v_inst_2998_, lean_object* v_pre_2999_, lean_object* v_post_3000_, lean_object* v_usedLetOnly_3001_, lean_object* v_skipConstInApp_3002_, lean_object* v_skipInstances_3003_, lean_object* v_x_3004_, lean_object* v_x_3005_, lean_object* v_fvars_3006_, lean_object* v_e_3007_, lean_object* v_a_3008_){
_start:
{
uint8_t v_usedLetOnly_boxed_3009_; uint8_t v_skipConstInApp_boxed_3010_; uint8_t v_skipInstances_boxed_3011_; lean_object* v_res_3012_; 
v_usedLetOnly_boxed_3009_ = lean_unbox(v_usedLetOnly_3001_);
v_skipConstInApp_boxed_3010_ = lean_unbox(v_skipConstInApp_3002_);
v_skipInstances_boxed_3011_ = lean_unbox(v_skipInstances_3003_);
v_res_3012_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_2996_, v_inst_2997_, v_inst_2998_, v_pre_2999_, v_post_3000_, v_usedLetOnly_boxed_3009_, v_skipConstInApp_boxed_3010_, v_skipInstances_boxed_3011_, v_x_3004_, v_x_3005_, v_fvars_3006_, v_e_3007_, v_a_3008_);
lean_dec(v_a_3008_);
return v_res_3012_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(lean_object* v_m_3013_, lean_object* v_inst_3014_, lean_object* v_inst_3015_, lean_object* v_inst_3016_, lean_object* v_pre_3017_, lean_object* v_post_3018_, uint8_t v_usedLetOnly_3019_, uint8_t v_skipConstInApp_3020_, uint8_t v_skipInstances_3021_, lean_object* v_x_3022_, lean_object* v_x_3023_, lean_object* v_e_3024_, lean_object* v_a_3025_){
_start:
{
lean_object* v___x_3026_; 
v___x_3026_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_3014_, v_inst_3015_, v_inst_3016_, v_pre_3017_, v_post_3018_, v_usedLetOnly_3019_, v_skipConstInApp_3020_, v_skipInstances_3021_, v_x_3022_, v_x_3023_, v_e_3024_, v_a_3025_);
return v___x_3026_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___boxed(lean_object* v_m_3027_, lean_object* v_inst_3028_, lean_object* v_inst_3029_, lean_object* v_inst_3030_, lean_object* v_pre_3031_, lean_object* v_post_3032_, lean_object* v_usedLetOnly_3033_, lean_object* v_skipConstInApp_3034_, lean_object* v_skipInstances_3035_, lean_object* v_x_3036_, lean_object* v_x_3037_, lean_object* v_e_3038_, lean_object* v_a_3039_){
_start:
{
uint8_t v_usedLetOnly_boxed_3040_; uint8_t v_skipConstInApp_boxed_3041_; uint8_t v_skipInstances_boxed_3042_; lean_object* v_res_3043_; 
v_usedLetOnly_boxed_3040_ = lean_unbox(v_usedLetOnly_3033_);
v_skipConstInApp_boxed_3041_ = lean_unbox(v_skipConstInApp_3034_);
v_skipInstances_boxed_3042_ = lean_unbox(v_skipInstances_3035_);
v_res_3043_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit(v_m_3027_, v_inst_3028_, v_inst_3029_, v_inst_3030_, v_pre_3031_, v_post_3032_, v_usedLetOnly_boxed_3040_, v_skipConstInApp_boxed_3041_, v_skipInstances_boxed_3042_, v_x_3036_, v_x_3037_, v_e_3038_, v_a_3039_);
lean_dec(v_a_3039_);
return v_res_3043_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(lean_object* v_m_3044_, lean_object* v_inst_3045_, lean_object* v_inst_3046_, lean_object* v_inst_3047_, lean_object* v_pre_3048_, lean_object* v_post_3049_, uint8_t v_usedLetOnly_3050_, uint8_t v_skipConstInApp_3051_, uint8_t v_skipInstances_3052_, lean_object* v_x_3053_, lean_object* v_x_3054_, lean_object* v_fvars_3055_, lean_object* v_e_3056_, lean_object* v_a_3057_){
_start:
{
lean_object* v___x_3058_; 
v___x_3058_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___redArg(v_inst_3045_, v_inst_3046_, v_inst_3047_, v_pre_3048_, v_post_3049_, v_usedLetOnly_3050_, v_skipConstInApp_3051_, v_skipInstances_3052_, v_x_3053_, v_x_3054_, v_fvars_3055_, v_e_3056_, v_a_3057_);
return v___x_3058_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___boxed(lean_object* v_m_3059_, lean_object* v_inst_3060_, lean_object* v_inst_3061_, lean_object* v_inst_3062_, lean_object* v_pre_3063_, lean_object* v_post_3064_, lean_object* v_usedLetOnly_3065_, lean_object* v_skipConstInApp_3066_, lean_object* v_skipInstances_3067_, lean_object* v_x_3068_, lean_object* v_x_3069_, lean_object* v_fvars_3070_, lean_object* v_e_3071_, lean_object* v_a_3072_){
_start:
{
uint8_t v_usedLetOnly_boxed_3073_; uint8_t v_skipConstInApp_boxed_3074_; uint8_t v_skipInstances_boxed_3075_; lean_object* v_res_3076_; 
v_usedLetOnly_boxed_3073_ = lean_unbox(v_usedLetOnly_3065_);
v_skipConstInApp_boxed_3074_ = lean_unbox(v_skipConstInApp_3066_);
v_skipInstances_boxed_3075_ = lean_unbox(v_skipInstances_3067_);
v_res_3076_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet(v_m_3059_, v_inst_3060_, v_inst_3061_, v_inst_3062_, v_pre_3063_, v_post_3064_, v_usedLetOnly_boxed_3073_, v_skipConstInApp_boxed_3074_, v_skipInstances_boxed_3075_, v_x_3068_, v_x_3069_, v_fvars_3070_, v_e_3071_, v_a_3072_);
lean_dec(v_a_3072_);
return v_res_3076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(lean_object* v_m_3077_, lean_object* v_inst_3078_, lean_object* v_inst_3079_, lean_object* v_inst_3080_, lean_object* v_pre_3081_, lean_object* v_post_3082_, uint8_t v_usedLetOnly_3083_, uint8_t v_skipConstInApp_3084_, uint8_t v_skipInstances_3085_, lean_object* v_x_3086_, lean_object* v_x_3087_, lean_object* v_e_3088_, lean_object* v_a_3089_){
_start:
{
lean_object* v___x_3090_; 
v___x_3090_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___redArg(v_inst_3078_, v_inst_3079_, v_inst_3080_, v_pre_3081_, v_post_3082_, v_usedLetOnly_3083_, v_skipConstInApp_3084_, v_skipInstances_3085_, v_x_3086_, v_x_3087_, v_e_3088_, v_a_3089_);
return v___x_3090_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___boxed(lean_object* v_m_3091_, lean_object* v_inst_3092_, lean_object* v_inst_3093_, lean_object* v_inst_3094_, lean_object* v_pre_3095_, lean_object* v_post_3096_, lean_object* v_usedLetOnly_3097_, lean_object* v_skipConstInApp_3098_, lean_object* v_skipInstances_3099_, lean_object* v_x_3100_, lean_object* v_x_3101_, lean_object* v_e_3102_, lean_object* v_a_3103_){
_start:
{
uint8_t v_usedLetOnly_boxed_3104_; uint8_t v_skipConstInApp_boxed_3105_; uint8_t v_skipInstances_boxed_3106_; lean_object* v_res_3107_; 
v_usedLetOnly_boxed_3104_ = lean_unbox(v_usedLetOnly_3097_);
v_skipConstInApp_boxed_3105_ = lean_unbox(v_skipConstInApp_3098_);
v_skipInstances_boxed_3106_ = lean_unbox(v_skipInstances_3099_);
v_res_3107_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost(v_m_3091_, v_inst_3092_, v_inst_3093_, v_inst_3094_, v_pre_3095_, v_post_3096_, v_usedLetOnly_boxed_3104_, v_skipConstInApp_boxed_3105_, v_skipInstances_boxed_3106_, v_x_3100_, v_x_3101_, v_e_3102_, v_a_3103_);
lean_dec(v_a_3103_);
return v_res_3107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(lean_object* v_m_3108_, lean_object* v_inst_3109_, lean_object* v_inst_3110_, lean_object* v_inst_3111_, lean_object* v_pre_3112_, lean_object* v_post_3113_, uint8_t v_usedLetOnly_3114_, uint8_t v_skipConstInApp_3115_, uint8_t v_skipInstances_3116_, lean_object* v_x_3117_, lean_object* v_x_3118_, lean_object* v_fvars_3119_, lean_object* v_e_3120_, lean_object* v_a_3121_){
_start:
{
lean_object* v___x_3122_; 
v___x_3122_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___redArg(v_inst_3109_, v_inst_3110_, v_inst_3111_, v_pre_3112_, v_post_3113_, v_usedLetOnly_3114_, v_skipConstInApp_3115_, v_skipInstances_3116_, v_x_3117_, v_x_3118_, v_fvars_3119_, v_e_3120_, v_a_3121_);
return v___x_3122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___boxed(lean_object* v_m_3123_, lean_object* v_inst_3124_, lean_object* v_inst_3125_, lean_object* v_inst_3126_, lean_object* v_pre_3127_, lean_object* v_post_3128_, lean_object* v_usedLetOnly_3129_, lean_object* v_skipConstInApp_3130_, lean_object* v_skipInstances_3131_, lean_object* v_x_3132_, lean_object* v_x_3133_, lean_object* v_fvars_3134_, lean_object* v_e_3135_, lean_object* v_a_3136_){
_start:
{
uint8_t v_usedLetOnly_boxed_3137_; uint8_t v_skipConstInApp_boxed_3138_; uint8_t v_skipInstances_boxed_3139_; lean_object* v_res_3140_; 
v_usedLetOnly_boxed_3137_ = lean_unbox(v_usedLetOnly_3129_);
v_skipConstInApp_boxed_3138_ = lean_unbox(v_skipConstInApp_3130_);
v_skipInstances_boxed_3139_ = lean_unbox(v_skipInstances_3131_);
v_res_3140_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda(v_m_3123_, v_inst_3124_, v_inst_3125_, v_inst_3126_, v_pre_3127_, v_post_3128_, v_usedLetOnly_boxed_3137_, v_skipConstInApp_boxed_3138_, v_skipInstances_boxed_3139_, v_x_3132_, v_x_3133_, v_fvars_3134_, v_e_3135_, v_a_3136_);
lean_dec(v_a_3136_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(lean_object* v_m_3141_, lean_object* v_inst_3142_, lean_object* v_inst_3143_, lean_object* v_inst_3144_, lean_object* v_pre_3145_, lean_object* v_post_3146_, uint8_t v_usedLetOnly_3147_, uint8_t v_skipConstInApp_3148_, uint8_t v_skipInstances_3149_, lean_object* v_x_3150_, lean_object* v_x_3151_, lean_object* v_fvars_3152_, lean_object* v_e_3153_, lean_object* v_a_3154_){
_start:
{
lean_object* v___x_3155_; 
v___x_3155_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___redArg(v_inst_3142_, v_inst_3143_, v_inst_3144_, v_pre_3145_, v_post_3146_, v_usedLetOnly_3147_, v_skipConstInApp_3148_, v_skipInstances_3149_, v_x_3150_, v_x_3151_, v_fvars_3152_, v_e_3153_, v_a_3154_);
return v___x_3155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___boxed(lean_object* v_m_3156_, lean_object* v_inst_3157_, lean_object* v_inst_3158_, lean_object* v_inst_3159_, lean_object* v_pre_3160_, lean_object* v_post_3161_, lean_object* v_usedLetOnly_3162_, lean_object* v_skipConstInApp_3163_, lean_object* v_skipInstances_3164_, lean_object* v_x_3165_, lean_object* v_x_3166_, lean_object* v_fvars_3167_, lean_object* v_e_3168_, lean_object* v_a_3169_){
_start:
{
uint8_t v_usedLetOnly_boxed_3170_; uint8_t v_skipConstInApp_boxed_3171_; uint8_t v_skipInstances_boxed_3172_; lean_object* v_res_3173_; 
v_usedLetOnly_boxed_3170_ = lean_unbox(v_usedLetOnly_3162_);
v_skipConstInApp_boxed_3171_ = lean_unbox(v_skipConstInApp_3163_);
v_skipInstances_boxed_3172_ = lean_unbox(v_skipInstances_3164_);
v_res_3173_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall(v_m_3156_, v_inst_3157_, v_inst_3158_, v_inst_3159_, v_pre_3160_, v_post_3161_, v_usedLetOnly_boxed_3170_, v_skipConstInApp_boxed_3171_, v_skipInstances_boxed_3172_, v_x_3165_, v_x_3166_, v_fvars_3167_, v_e_3168_, v_a_3169_);
lean_dec(v_a_3169_);
return v_res_3173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0(lean_object* v_x_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_){
_start:
{
lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3180_ = lean_st_ref_get(v___y_3178_);
lean_dec(v___x_3180_);
v___x_3181_ = lean_apply_1(v_x_3174_, lean_box(0));
v___x_3182_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3182_, 0, v___x_3181_);
return v___x_3182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__0___boxed(lean_object* v_x_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_){
_start:
{
lean_object* v_res_3189_; 
v_res_3189_ = l_Lean_Meta_transformWithCache___redArg___lam__0(v_x_3183_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec(v___y_3185_);
lean_dec_ref(v___y_3184_);
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__1(lean_object* v_inst_3190_, lean_object* v_00_u03b1_3191_, lean_object* v_x_3192_){
_start:
{
lean_object* v___f_3193_; lean_object* v___x_3194_; 
v___f_3193_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3193_, 0, v_x_3192_);
v___x_3194_ = lean_apply_2(v_inst_3190_, lean_box(0), v___f_3193_);
return v___x_3194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4(lean_object* v_toPure_3195_, lean_object* v_x_3196_, lean_object* v_toBind_3197_, lean_object* v_inst_3198_, lean_object* v_inst_3199_, lean_object* v_inst_3200_, lean_object* v_pre_3201_, lean_object* v_post_3202_, uint8_t v_usedLetOnly_3203_, uint8_t v_skipConstInApp_3204_, uint8_t v_skipInstances_3205_, lean_object* v_x_3206_, lean_object* v_input_3207_, lean_object* v_ref_3208_){
_start:
{
lean_object* v___f_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; 
lean_inc(v_toBind_3197_);
lean_inc(v_x_3196_);
lean_inc(v_ref_3208_);
v___f_3209_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3209_, 0, v_toPure_3195_);
lean_closure_set(v___f_3209_, 1, v_ref_3208_);
lean_closure_set(v___f_3209_, 2, v_x_3196_);
lean_closure_set(v___f_3209_, 3, v_toBind_3197_);
v___x_3210_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_3198_, v_inst_3199_, v_inst_3200_, v_pre_3201_, v_post_3202_, v_usedLetOnly_3203_, v_skipConstInApp_3204_, v_skipInstances_3205_, v_x_3206_, v_x_3196_, v_input_3207_, v_ref_3208_);
lean_dec(v_ref_3208_);
v___x_3211_ = lean_apply_4(v_toBind_3197_, lean_box(0), lean_box(0), v___x_3210_, v___f_3209_);
return v___x_3211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___lam__4___boxed(lean_object* v_toPure_3212_, lean_object* v_x_3213_, lean_object* v_toBind_3214_, lean_object* v_inst_3215_, lean_object* v_inst_3216_, lean_object* v_inst_3217_, lean_object* v_pre_3218_, lean_object* v_post_3219_, lean_object* v_usedLetOnly_3220_, lean_object* v_skipConstInApp_3221_, lean_object* v_skipInstances_3222_, lean_object* v_x_3223_, lean_object* v_input_3224_, lean_object* v_ref_3225_){
_start:
{
uint8_t v_usedLetOnly_boxed_3226_; uint8_t v_skipConstInApp_boxed_3227_; uint8_t v_skipInstances_boxed_3228_; lean_object* v_res_3229_; 
v_usedLetOnly_boxed_3226_ = lean_unbox(v_usedLetOnly_3220_);
v_skipConstInApp_boxed_3227_ = lean_unbox(v_skipConstInApp_3221_);
v_skipInstances_boxed_3228_ = lean_unbox(v_skipInstances_3222_);
v_res_3229_ = l_Lean_Meta_transformWithCache___redArg___lam__4(v_toPure_3212_, v_x_3213_, v_toBind_3214_, v_inst_3215_, v_inst_3216_, v_inst_3217_, v_pre_3218_, v_post_3219_, v_usedLetOnly_boxed_3226_, v_skipConstInApp_boxed_3227_, v_skipInstances_boxed_3228_, v_x_3223_, v_input_3224_, v_ref_3225_);
return v_res_3229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg(lean_object* v_inst_3230_, lean_object* v_inst_3231_, lean_object* v_inst_3232_, lean_object* v_input_3233_, lean_object* v_cache_3234_, lean_object* v_pre_3235_, lean_object* v_post_3236_, uint8_t v_usedLetOnly_3237_, uint8_t v_skipConstInApp_3238_, uint8_t v_skipInstances_3239_){
_start:
{
lean_object* v_x_3240_; lean_object* v_toApplicative_3241_; lean_object* v_toBind_3242_; lean_object* v_toPure_3243_; lean_object* v_x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___f_3250_; lean_object* v___x_3251_; 
v_x_3240_ = lean_box(0);
v_toApplicative_3241_ = lean_ctor_get(v_inst_3230_, 0);
v_toBind_3242_ = lean_ctor_get(v_inst_3230_, 1);
lean_inc_n(v_toBind_3242_, 2);
v_toPure_3243_ = lean_ctor_get(v_toApplicative_3241_, 1);
lean_inc(v_toPure_3243_);
lean_inc_n(v_inst_3231_, 2);
v_x_3244_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3244_, 0, v_inst_3231_);
v___x_3245_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3245_, 0, lean_box(0));
lean_closure_set(v___x_3245_, 1, lean_box(0));
lean_closure_set(v___x_3245_, 2, v_cache_3234_);
v___x_3246_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3231_, lean_box(0), v___x_3245_);
v___x_3247_ = lean_box(v_usedLetOnly_3237_);
v___x_3248_ = lean_box(v_skipConstInApp_3238_);
v___x_3249_ = lean_box(v_skipInstances_3239_);
v___f_3250_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_3250_, 0, v_toPure_3243_);
lean_closure_set(v___f_3250_, 1, v_x_3244_);
lean_closure_set(v___f_3250_, 2, v_toBind_3242_);
lean_closure_set(v___f_3250_, 3, v_inst_3230_);
lean_closure_set(v___f_3250_, 4, v_inst_3231_);
lean_closure_set(v___f_3250_, 5, v_inst_3232_);
lean_closure_set(v___f_3250_, 6, v_pre_3235_);
lean_closure_set(v___f_3250_, 7, v_post_3236_);
lean_closure_set(v___f_3250_, 8, v___x_3247_);
lean_closure_set(v___f_3250_, 9, v___x_3248_);
lean_closure_set(v___f_3250_, 10, v___x_3249_);
lean_closure_set(v___f_3250_, 11, v_x_3240_);
lean_closure_set(v___f_3250_, 12, v_input_3233_);
v___x_3251_ = lean_apply_4(v_toBind_3242_, lean_box(0), lean_box(0), v___x_3246_, v___f_3250_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___redArg___boxed(lean_object* v_inst_3252_, lean_object* v_inst_3253_, lean_object* v_inst_3254_, lean_object* v_input_3255_, lean_object* v_cache_3256_, lean_object* v_pre_3257_, lean_object* v_post_3258_, lean_object* v_usedLetOnly_3259_, lean_object* v_skipConstInApp_3260_, lean_object* v_skipInstances_3261_){
_start:
{
uint8_t v_usedLetOnly_boxed_3262_; uint8_t v_skipConstInApp_boxed_3263_; uint8_t v_skipInstances_boxed_3264_; lean_object* v_res_3265_; 
v_usedLetOnly_boxed_3262_ = lean_unbox(v_usedLetOnly_3259_);
v_skipConstInApp_boxed_3263_ = lean_unbox(v_skipConstInApp_3260_);
v_skipInstances_boxed_3264_ = lean_unbox(v_skipInstances_3261_);
v_res_3265_ = l_Lean_Meta_transformWithCache___redArg(v_inst_3252_, v_inst_3253_, v_inst_3254_, v_input_3255_, v_cache_3256_, v_pre_3257_, v_post_3258_, v_usedLetOnly_boxed_3262_, v_skipConstInApp_boxed_3263_, v_skipInstances_boxed_3264_);
return v_res_3265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache(lean_object* v_m_3266_, lean_object* v_inst_3267_, lean_object* v_inst_3268_, lean_object* v_inst_3269_, lean_object* v_input_3270_, lean_object* v_cache_3271_, lean_object* v_pre_3272_, lean_object* v_post_3273_, uint8_t v_usedLetOnly_3274_, uint8_t v_skipConstInApp_3275_, uint8_t v_skipInstances_3276_){
_start:
{
lean_object* v_x_3277_; lean_object* v_toApplicative_3278_; lean_object* v_toBind_3279_; lean_object* v_toPure_3280_; lean_object* v_x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3286_; lean_object* v___f_3287_; lean_object* v___x_3288_; 
v_x_3277_ = lean_box(0);
v_toApplicative_3278_ = lean_ctor_get(v_inst_3267_, 0);
v_toBind_3279_ = lean_ctor_get(v_inst_3267_, 1);
lean_inc_n(v_toBind_3279_, 2);
v_toPure_3280_ = lean_ctor_get(v_toApplicative_3278_, 1);
lean_inc(v_toPure_3280_);
lean_inc_n(v_inst_3268_, 2);
v_x_3281_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3281_, 0, v_inst_3268_);
v___x_3282_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_3282_, 0, lean_box(0));
lean_closure_set(v___x_3282_, 1, lean_box(0));
lean_closure_set(v___x_3282_, 2, v_cache_3271_);
v___x_3283_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3268_, lean_box(0), v___x_3282_);
v___x_3284_ = lean_box(v_usedLetOnly_3274_);
v___x_3285_ = lean_box(v_skipConstInApp_3275_);
v___x_3286_ = lean_box(v_skipInstances_3276_);
v___f_3287_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__4___boxed), 14, 13);
lean_closure_set(v___f_3287_, 0, v_toPure_3280_);
lean_closure_set(v___f_3287_, 1, v_x_3281_);
lean_closure_set(v___f_3287_, 2, v_toBind_3279_);
lean_closure_set(v___f_3287_, 3, v_inst_3267_);
lean_closure_set(v___f_3287_, 4, v_inst_3268_);
lean_closure_set(v___f_3287_, 5, v_inst_3269_);
lean_closure_set(v___f_3287_, 6, v_pre_3272_);
lean_closure_set(v___f_3287_, 7, v_post_3273_);
lean_closure_set(v___f_3287_, 8, v___x_3284_);
lean_closure_set(v___f_3287_, 9, v___x_3285_);
lean_closure_set(v___f_3287_, 10, v___x_3286_);
lean_closure_set(v___f_3287_, 11, v_x_3277_);
lean_closure_set(v___f_3287_, 12, v_input_3270_);
v___x_3288_ = lean_apply_4(v_toBind_3279_, lean_box(0), lean_box(0), v___x_3283_, v___f_3287_);
return v___x_3288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transformWithCache___boxed(lean_object* v_m_3289_, lean_object* v_inst_3290_, lean_object* v_inst_3291_, lean_object* v_inst_3292_, lean_object* v_input_3293_, lean_object* v_cache_3294_, lean_object* v_pre_3295_, lean_object* v_post_3296_, lean_object* v_usedLetOnly_3297_, lean_object* v_skipConstInApp_3298_, lean_object* v_skipInstances_3299_){
_start:
{
uint8_t v_usedLetOnly_boxed_3300_; uint8_t v_skipConstInApp_boxed_3301_; uint8_t v_skipInstances_boxed_3302_; lean_object* v_res_3303_; 
v_usedLetOnly_boxed_3300_ = lean_unbox(v_usedLetOnly_3297_);
v_skipConstInApp_boxed_3301_ = lean_unbox(v_skipConstInApp_3298_);
v_skipInstances_boxed_3302_ = lean_unbox(v_skipInstances_3299_);
v_res_3303_ = l_Lean_Meta_transformWithCache(v_m_3289_, v_inst_3290_, v_inst_3291_, v_inst_3292_, v_input_3293_, v_cache_3294_, v_pre_3295_, v_post_3296_, v_usedLetOnly_boxed_3300_, v_skipConstInApp_boxed_3301_, v_skipInstances_boxed_3302_);
return v_res_3303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5(lean_object* v_toPure_3304_, lean_object* v_x_3305_, lean_object* v_toBind_3306_, lean_object* v_inst_3307_, lean_object* v_inst_3308_, lean_object* v_inst_3309_, lean_object* v_pre_3310_, lean_object* v_post_3311_, uint8_t v_usedLetOnly_3312_, uint8_t v_skipConstInApp_3313_, uint8_t v___x_3314_, lean_object* v_x_3315_, lean_object* v_input_3316_, lean_object* v_ref_3317_){
_start:
{
lean_object* v___f_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; 
lean_inc(v_toBind_3306_);
lean_inc(v_x_3305_);
lean_inc(v_ref_3317_);
v___f_3318_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__4), 5, 4);
lean_closure_set(v___f_3318_, 0, v_toPure_3304_);
lean_closure_set(v___f_3318_, 1, v_ref_3317_);
lean_closure_set(v___f_3318_, 2, v_x_3305_);
lean_closure_set(v___f_3318_, 3, v_toBind_3306_);
v___x_3319_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg(v_inst_3307_, v_inst_3308_, v_inst_3309_, v_pre_3310_, v_post_3311_, v_usedLetOnly_3312_, v_skipConstInApp_3313_, v___x_3314_, v_x_3315_, v_x_3305_, v_input_3316_, v_ref_3317_);
lean_dec(v_ref_3317_);
v___x_3320_ = lean_apply_4(v_toBind_3306_, lean_box(0), lean_box(0), v___x_3319_, v___f_3318_);
return v___x_3320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___lam__5___boxed(lean_object* v_toPure_3321_, lean_object* v_x_3322_, lean_object* v_toBind_3323_, lean_object* v_inst_3324_, lean_object* v_inst_3325_, lean_object* v_inst_3326_, lean_object* v_pre_3327_, lean_object* v_post_3328_, lean_object* v_usedLetOnly_3329_, lean_object* v_skipConstInApp_3330_, lean_object* v___x_3331_, lean_object* v_x_3332_, lean_object* v_input_3333_, lean_object* v_ref_3334_){
_start:
{
uint8_t v_usedLetOnly_boxed_3335_; uint8_t v_skipConstInApp_boxed_3336_; uint8_t v___x_120__boxed_3337_; lean_object* v_res_3338_; 
v_usedLetOnly_boxed_3335_ = lean_unbox(v_usedLetOnly_3329_);
v_skipConstInApp_boxed_3336_ = lean_unbox(v_skipConstInApp_3330_);
v___x_120__boxed_3337_ = lean_unbox(v___x_3331_);
v_res_3338_ = l_Lean_Meta_transform___redArg___lam__5(v_toPure_3321_, v_x_3322_, v_toBind_3323_, v_inst_3324_, v_inst_3325_, v_inst_3326_, v_pre_3327_, v_post_3328_, v_usedLetOnly_boxed_3335_, v_skipConstInApp_boxed_3336_, v___x_120__boxed_3337_, v_x_3332_, v_input_3333_, v_ref_3334_);
return v_res_3338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg(lean_object* v_inst_3339_, lean_object* v_inst_3340_, lean_object* v_inst_3341_, lean_object* v_input_3342_, lean_object* v_pre_3343_, lean_object* v_post_3344_, uint8_t v_usedLetOnly_3345_, uint8_t v_skipConstInApp_3346_){
_start:
{
lean_object* v_toApplicative_3347_; lean_object* v_toBind_3348_; lean_object* v_x_3349_; lean_object* v_toPure_3350_; lean_object* v_x_3351_; uint8_t v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___f_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___f_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; 
v_toApplicative_3347_ = lean_ctor_get(v_inst_3339_, 0);
v_toBind_3348_ = lean_ctor_get(v_inst_3339_, 1);
lean_inc_n(v_toBind_3348_, 3);
v_x_3349_ = lean_box(0);
v_toPure_3350_ = lean_ctor_get(v_toApplicative_3347_, 1);
lean_inc_n(v_toPure_3350_, 2);
lean_inc_n(v_inst_3340_, 2);
v_x_3351_ = lean_alloc_closure((void*)(l_Lean_Meta_transformWithCache___redArg___lam__1), 3, 1);
lean_closure_set(v_x_3351_, 0, v_inst_3340_);
v___x_3352_ = 0;
v___x_3353_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_3354_ = l_Lean_Meta_transformWithCache___redArg___lam__1(v_inst_3340_, lean_box(0), v___x_3353_);
v___f_3355_ = lean_alloc_closure((void*)(l_Lean_Core_transform___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3355_, 0, v_toPure_3350_);
v___x_3356_ = lean_box(v_usedLetOnly_3345_);
v___x_3357_ = lean_box(v_skipConstInApp_3346_);
v___x_3358_ = lean_box(v___x_3352_);
v___f_3359_ = lean_alloc_closure((void*)(l_Lean_Meta_transform___redArg___lam__5___boxed), 14, 13);
lean_closure_set(v___f_3359_, 0, v_toPure_3350_);
lean_closure_set(v___f_3359_, 1, v_x_3351_);
lean_closure_set(v___f_3359_, 2, v_toBind_3348_);
lean_closure_set(v___f_3359_, 3, v_inst_3339_);
lean_closure_set(v___f_3359_, 4, v_inst_3340_);
lean_closure_set(v___f_3359_, 5, v_inst_3341_);
lean_closure_set(v___f_3359_, 6, v_pre_3343_);
lean_closure_set(v___f_3359_, 7, v_post_3344_);
lean_closure_set(v___f_3359_, 8, v___x_3356_);
lean_closure_set(v___f_3359_, 9, v___x_3357_);
lean_closure_set(v___f_3359_, 10, v___x_3358_);
lean_closure_set(v___f_3359_, 11, v_x_3349_);
lean_closure_set(v___f_3359_, 12, v_input_3342_);
v___x_3360_ = lean_apply_4(v_toBind_3348_, lean_box(0), lean_box(0), v___x_3354_, v___f_3359_);
v___x_3361_ = lean_apply_4(v_toBind_3348_, lean_box(0), lean_box(0), v___x_3360_, v___f_3355_);
return v___x_3361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___redArg___boxed(lean_object* v_inst_3362_, lean_object* v_inst_3363_, lean_object* v_inst_3364_, lean_object* v_input_3365_, lean_object* v_pre_3366_, lean_object* v_post_3367_, lean_object* v_usedLetOnly_3368_, lean_object* v_skipConstInApp_3369_){
_start:
{
uint8_t v_usedLetOnly_boxed_3370_; uint8_t v_skipConstInApp_boxed_3371_; lean_object* v_res_3372_; 
v_usedLetOnly_boxed_3370_ = lean_unbox(v_usedLetOnly_3368_);
v_skipConstInApp_boxed_3371_ = lean_unbox(v_skipConstInApp_3369_);
v_res_3372_ = l_Lean_Meta_transform___redArg(v_inst_3362_, v_inst_3363_, v_inst_3364_, v_input_3365_, v_pre_3366_, v_post_3367_, v_usedLetOnly_boxed_3370_, v_skipConstInApp_boxed_3371_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform(lean_object* v_m_3373_, lean_object* v_inst_3374_, lean_object* v_inst_3375_, lean_object* v_inst_3376_, lean_object* v_input_3377_, lean_object* v_pre_3378_, lean_object* v_post_3379_, uint8_t v_usedLetOnly_3380_, uint8_t v_skipConstInApp_3381_){
_start:
{
lean_object* v___x_3382_; 
v___x_3382_ = l_Lean_Meta_transform___redArg(v_inst_3374_, v_inst_3375_, v_inst_3376_, v_input_3377_, v_pre_3378_, v_post_3379_, v_usedLetOnly_3380_, v_skipConstInApp_3381_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___boxed(lean_object* v_m_3383_, lean_object* v_inst_3384_, lean_object* v_inst_3385_, lean_object* v_inst_3386_, lean_object* v_input_3387_, lean_object* v_pre_3388_, lean_object* v_post_3389_, lean_object* v_usedLetOnly_3390_, lean_object* v_skipConstInApp_3391_){
_start:
{
uint8_t v_usedLetOnly_boxed_3392_; uint8_t v_skipConstInApp_boxed_3393_; lean_object* v_res_3394_; 
v_usedLetOnly_boxed_3392_ = lean_unbox(v_usedLetOnly_3390_);
v_skipConstInApp_boxed_3393_ = lean_unbox(v_skipConstInApp_3391_);
v_res_3394_ = l_Lean_Meta_transform(v_m_3383_, v_inst_3384_, v_inst_3385_, v_inst_3386_, v_input_3387_, v_pre_3388_, v_post_3389_, v_usedLetOnly_boxed_3392_, v_skipConstInApp_boxed_3393_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(lean_object* v_e_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_){
_start:
{
uint8_t v___x_3399_; 
v___x_3399_ = l_Lean_Expr_hasMVar(v_e_3395_);
if (v___x_3399_ == 0)
{
lean_object* v___x_3400_; 
v___x_3400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3400_, 0, v_e_3395_);
return v___x_3400_;
}
else
{
lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v_mctx_3403_; lean_object* v___x_3404_; lean_object* v_fst_3405_; lean_object* v_snd_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v_cache_3409_; lean_object* v_zetaDeltaFVarIds_3410_; lean_object* v_postponed_3411_; lean_object* v_diag_3412_; lean_object* v___x_3414_; uint8_t v_isShared_3415_; uint8_t v_isSharedCheck_3421_; 
v___x_3401_ = lean_st_ref_get(v___y_3397_);
lean_dec(v___x_3401_);
v___x_3402_ = lean_st_ref_get(v___y_3396_);
v_mctx_3403_ = lean_ctor_get(v___x_3402_, 0);
lean_inc_ref(v_mctx_3403_);
lean_dec(v___x_3402_);
v___x_3404_ = l_Lean_instantiateMVarsCore(v_mctx_3403_, v_e_3395_);
v_fst_3405_ = lean_ctor_get(v___x_3404_, 0);
lean_inc(v_fst_3405_);
v_snd_3406_ = lean_ctor_get(v___x_3404_, 1);
lean_inc(v_snd_3406_);
lean_dec_ref(v___x_3404_);
v___x_3407_ = lean_st_ref_get(v___y_3397_);
lean_dec(v___x_3407_);
v___x_3408_ = lean_st_ref_take(v___y_3396_);
v_cache_3409_ = lean_ctor_get(v___x_3408_, 1);
v_zetaDeltaFVarIds_3410_ = lean_ctor_get(v___x_3408_, 2);
v_postponed_3411_ = lean_ctor_get(v___x_3408_, 3);
v_diag_3412_ = lean_ctor_get(v___x_3408_, 4);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3408_);
if (v_isSharedCheck_3421_ == 0)
{
lean_object* v_unused_3422_; 
v_unused_3422_ = lean_ctor_get(v___x_3408_, 0);
lean_dec(v_unused_3422_);
v___x_3414_ = v___x_3408_;
v_isShared_3415_ = v_isSharedCheck_3421_;
goto v_resetjp_3413_;
}
else
{
lean_inc(v_diag_3412_);
lean_inc(v_postponed_3411_);
lean_inc(v_zetaDeltaFVarIds_3410_);
lean_inc(v_cache_3409_);
lean_dec(v___x_3408_);
v___x_3414_ = lean_box(0);
v_isShared_3415_ = v_isSharedCheck_3421_;
goto v_resetjp_3413_;
}
v_resetjp_3413_:
{
lean_object* v___x_3417_; 
if (v_isShared_3415_ == 0)
{
lean_ctor_set(v___x_3414_, 0, v_snd_3406_);
v___x_3417_ = v___x_3414_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v_snd_3406_);
lean_ctor_set(v_reuseFailAlloc_3420_, 1, v_cache_3409_);
lean_ctor_set(v_reuseFailAlloc_3420_, 2, v_zetaDeltaFVarIds_3410_);
lean_ctor_set(v_reuseFailAlloc_3420_, 3, v_postponed_3411_);
lean_ctor_set(v_reuseFailAlloc_3420_, 4, v_diag_3412_);
v___x_3417_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; 
v___x_3418_ = lean_st_ref_set(v___y_3396_, v___x_3417_);
v___x_3419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3419_, 0, v_fst_3405_);
return v___x_3419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg___boxed(lean_object* v_e_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v_res_3427_; 
v_res_3427_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_e_3423_, v___y_3424_, v___y_3425_);
lean_dec(v___y_3425_);
lean_dec(v___y_3424_);
return v_res_3427_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(lean_object* v_e_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_){
_start:
{
lean_object* v___x_3434_; 
v___x_3434_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_e_3428_, v___y_3430_, v___y_3432_);
return v___x_3434_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___boxed(lean_object* v_e_3435_, lean_object* v___y_3436_, lean_object* v___y_3437_, lean_object* v___y_3438_, lean_object* v___y_3439_, lean_object* v___y_3440_){
_start:
{
lean_object* v_res_3441_; 
v_res_3441_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0(v_e_3435_, v___y_3436_, v___y_3437_, v___y_3438_, v___y_3439_);
lean_dec(v___y_3439_);
lean_dec_ref(v___y_3438_);
lean_dec(v___y_3437_);
lean_dec_ref(v___y_3436_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0(uint8_t v_zetaHave_3442_, lean_object* v___x_3443_, uint8_t v_zetaDelta_3444_, lean_object* v_fvarId_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_, lean_object* v___y_3449_){
_start:
{
lean_object* v___x_3451_; 
v___x_3451_ = l_Lean_FVarId_findDecl_x3f___redArg(v_fvarId_3445_, v___y_3446_);
if (lean_obj_tag(v___x_3451_) == 0)
{
lean_object* v_a_3452_; lean_object* v___x_3454_; uint8_t v_isShared_3455_; uint8_t v_isSharedCheck_3480_; 
v_a_3452_ = lean_ctor_get(v___x_3451_, 0);
v_isSharedCheck_3480_ = !lean_is_exclusive(v___x_3451_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3454_ = v___x_3451_;
v_isShared_3455_ = v_isSharedCheck_3480_;
goto v_resetjp_3453_;
}
else
{
lean_inc(v_a_3452_);
lean_dec(v___x_3451_);
v___x_3454_ = lean_box(0);
v_isShared_3455_ = v_isSharedCheck_3480_;
goto v_resetjp_3453_;
}
v_resetjp_3453_:
{
if (lean_obj_tag(v_a_3452_) == 1)
{
lean_object* v_val_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3475_; 
v_val_3456_ = lean_ctor_get(v_a_3452_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v_a_3452_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3458_ = v_a_3452_;
v_isShared_3459_ = v_isSharedCheck_3475_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_val_3456_);
lean_dec(v_a_3452_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3475_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
uint8_t v___y_3461_; 
if (v_zetaDelta_3444_ == 0)
{
lean_object* v___x_3469_; uint8_t v___x_3470_; 
v___x_3469_ = l_Lean_LocalDecl_index(v_val_3456_);
v___x_3470_ = lean_nat_dec_lt(v___x_3469_, v___x_3443_);
lean_dec(v___x_3469_);
if (v___x_3470_ == 0)
{
lean_del_object(v___x_3458_);
goto v___jp_3466_;
}
else
{
lean_object* v___x_3471_; lean_object* v___x_3473_; 
lean_dec(v_val_3456_);
lean_del_object(v___x_3454_);
v___x_3471_ = lean_box(0);
if (v_isShared_3459_ == 0)
{
lean_ctor_set_tag(v___x_3458_, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3471_);
v___x_3473_ = v___x_3458_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v___x_3471_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
}
else
{
lean_del_object(v___x_3458_);
goto v___jp_3466_;
}
v___jp_3460_:
{
lean_object* v___x_3462_; lean_object* v___x_3464_; 
v___x_3462_ = l_Lean_LocalDecl_value_x3f(v_val_3456_, v___y_3461_);
lean_dec(v_val_3456_);
if (v_isShared_3455_ == 0)
{
lean_ctor_set(v___x_3454_, 0, v___x_3462_);
v___x_3464_ = v___x_3454_;
goto v_reusejp_3463_;
}
else
{
lean_object* v_reuseFailAlloc_3465_; 
v_reuseFailAlloc_3465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3465_, 0, v___x_3462_);
v___x_3464_ = v_reuseFailAlloc_3465_;
goto v_reusejp_3463_;
}
v_reusejp_3463_:
{
return v___x_3464_;
}
}
v___jp_3466_:
{
if (v_zetaHave_3442_ == 0)
{
v___y_3461_ = v_zetaHave_3442_;
goto v___jp_3460_;
}
else
{
lean_object* v___x_3467_; uint8_t v___x_3468_; 
v___x_3467_ = l_Lean_LocalDecl_index(v_val_3456_);
v___x_3468_ = lean_nat_dec_le(v___x_3443_, v___x_3467_);
lean_dec(v___x_3467_);
v___y_3461_ = v___x_3468_;
goto v___jp_3460_;
}
}
}
}
else
{
lean_object* v___x_3476_; lean_object* v___x_3478_; 
lean_dec(v_a_3452_);
v___x_3476_ = lean_box(0);
if (v_isShared_3455_ == 0)
{
lean_ctor_set(v___x_3454_, 0, v___x_3476_);
v___x_3478_ = v___x_3454_;
goto v_reusejp_3477_;
}
else
{
lean_object* v_reuseFailAlloc_3479_; 
v_reuseFailAlloc_3479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3479_, 0, v___x_3476_);
v___x_3478_ = v_reuseFailAlloc_3479_;
goto v_reusejp_3477_;
}
v_reusejp_3477_:
{
return v___x_3478_;
}
}
}
}
else
{
lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3488_; 
v_a_3481_ = lean_ctor_get(v___x_3451_, 0);
v_isSharedCheck_3488_ = !lean_is_exclusive(v___x_3451_);
if (v_isSharedCheck_3488_ == 0)
{
v___x_3483_ = v___x_3451_;
v_isShared_3484_ = v_isSharedCheck_3488_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_dec(v___x_3451_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3488_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
lean_object* v___x_3486_; 
if (v_isShared_3484_ == 0)
{
v___x_3486_ = v___x_3483_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_a_3481_);
v___x_3486_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
return v___x_3486_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__0___boxed(lean_object* v_zetaHave_3489_, lean_object* v___x_3490_, lean_object* v_zetaDelta_3491_, lean_object* v_fvarId_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_){
_start:
{
uint8_t v_zetaHave_boxed_3498_; uint8_t v_zetaDelta_boxed_3499_; lean_object* v_res_3500_; 
v_zetaHave_boxed_3498_ = lean_unbox(v_zetaHave_3489_);
v_zetaDelta_boxed_3499_ = lean_unbox(v_zetaDelta_3491_);
v_res_3500_ = l_Lean_Meta_zetaReduce___lam__0(v_zetaHave_boxed_3498_, v___x_3490_, v_zetaDelta_boxed_3499_, v_fvarId_3492_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_);
lean_dec(v___y_3496_);
lean_dec_ref(v___y_3495_);
lean_dec(v___y_3494_);
lean_dec_ref(v___y_3493_);
lean_dec(v___x_3490_);
return v_res_3500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1(lean_object* v_e_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_, lean_object* v___y_3505_){
_start:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; 
v___x_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3507_, 0, v_e_3501_);
v___x_3508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
return v___x_3508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__1___boxed(lean_object* v_e_3509_, lean_object* v___y_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_){
_start:
{
lean_object* v_res_3515_; 
v_res_3515_ = l_Lean_Meta_zetaReduce___lam__1(v_e_3509_, v___y_3510_, v___y_3511_, v___y_3512_, v___y_3513_);
lean_dec(v___y_3513_);
lean_dec_ref(v___y_3512_);
lean_dec(v___y_3511_);
lean_dec_ref(v___y_3510_);
return v_res_3515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2(lean_object* v___f_3516_, lean_object* v_e_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_){
_start:
{
if (lean_obj_tag(v_e_3517_) == 1)
{
lean_object* v_fvarId_3523_; lean_object* v___x_3524_; 
v_fvarId_3523_ = lean_ctor_get(v_e_3517_, 0);
lean_inc(v___y_3521_);
lean_inc_ref(v___y_3520_);
lean_inc(v___y_3519_);
lean_inc_ref(v___y_3518_);
lean_inc(v_fvarId_3523_);
v___x_3524_ = lean_apply_6(v___f_3516_, v_fvarId_3523_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, lean_box(0));
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; lean_object* v___x_3527_; uint8_t v_isShared_3528_; uint8_t v_isSharedCheck_3550_; 
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3550_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3527_ = v___x_3524_;
v_isShared_3528_ = v_isSharedCheck_3550_;
goto v_resetjp_3526_;
}
else
{
lean_inc(v_a_3525_);
lean_dec(v___x_3524_);
v___x_3527_ = lean_box(0);
v_isShared_3528_ = v_isSharedCheck_3550_;
goto v_resetjp_3526_;
}
v_resetjp_3526_:
{
if (lean_obj_tag(v_a_3525_) == 1)
{
lean_object* v_val_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3545_; 
lean_del_object(v___x_3527_);
lean_dec_ref(v_e_3517_);
v_val_3529_ = lean_ctor_get(v_a_3525_, 0);
v_isSharedCheck_3545_ = !lean_is_exclusive(v_a_3525_);
if (v_isSharedCheck_3545_ == 0)
{
v___x_3531_ = v_a_3525_;
v_isShared_3532_ = v_isSharedCheck_3545_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_val_3529_);
lean_dec(v_a_3525_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3545_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3533_; lean_object* v_a_3534_; lean_object* v___x_3536_; uint8_t v_isShared_3537_; uint8_t v_isSharedCheck_3544_; 
v___x_3533_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_3529_, v___y_3519_, v___y_3521_);
v_a_3534_ = lean_ctor_get(v___x_3533_, 0);
v_isSharedCheck_3544_ = !lean_is_exclusive(v___x_3533_);
if (v_isSharedCheck_3544_ == 0)
{
v___x_3536_ = v___x_3533_;
v_isShared_3537_ = v_isSharedCheck_3544_;
goto v_resetjp_3535_;
}
else
{
lean_inc(v_a_3534_);
lean_dec(v___x_3533_);
v___x_3536_ = lean_box(0);
v_isShared_3537_ = v_isSharedCheck_3544_;
goto v_resetjp_3535_;
}
v_resetjp_3535_:
{
lean_object* v___x_3539_; 
if (v_isShared_3532_ == 0)
{
lean_ctor_set(v___x_3531_, 0, v_a_3534_);
v___x_3539_ = v___x_3531_;
goto v_reusejp_3538_;
}
else
{
lean_object* v_reuseFailAlloc_3543_; 
v_reuseFailAlloc_3543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3543_, 0, v_a_3534_);
v___x_3539_ = v_reuseFailAlloc_3543_;
goto v_reusejp_3538_;
}
v_reusejp_3538_:
{
lean_object* v___x_3541_; 
if (v_isShared_3537_ == 0)
{
lean_ctor_set(v___x_3536_, 0, v___x_3539_);
v___x_3541_ = v___x_3536_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3542_; 
v_reuseFailAlloc_3542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3542_, 0, v___x_3539_);
v___x_3541_ = v_reuseFailAlloc_3542_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
return v___x_3541_;
}
}
}
}
}
else
{
lean_object* v___x_3546_; lean_object* v___x_3548_; 
lean_dec(v_a_3525_);
v___x_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3546_, 0, v_e_3517_);
if (v_isShared_3528_ == 0)
{
lean_ctor_set(v___x_3527_, 0, v___x_3546_);
v___x_3548_ = v___x_3527_;
goto v_reusejp_3547_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v___x_3546_);
v___x_3548_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3547_;
}
v_reusejp_3547_:
{
return v___x_3548_;
}
}
}
}
else
{
lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3558_; 
lean_dec_ref(v_e_3517_);
v_a_3551_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3553_ = v___x_3524_;
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v___x_3524_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3556_; 
if (v_isShared_3554_ == 0)
{
v___x_3556_ = v___x_3553_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3557_; 
v_reuseFailAlloc_3557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3557_, 0, v_a_3551_);
v___x_3556_ = v_reuseFailAlloc_3557_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
return v___x_3556_;
}
}
}
}
else
{
lean_object* v___x_3559_; lean_object* v___x_3560_; 
lean_dec_ref(v_e_3517_);
lean_dec_ref(v___f_3516_);
v___x_3559_ = lean_obj_once(&l_Lean_Core_betaReduce___lam__0___closed__0, &l_Lean_Core_betaReduce___lam__0___closed__0_once, _init_l_Lean_Core_betaReduce___lam__0___closed__0);
v___x_3560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3560_, 0, v___x_3559_);
return v___x_3560_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__2___boxed(lean_object* v___f_3561_, lean_object* v_e_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_){
_start:
{
lean_object* v_res_3568_; 
v_res_3568_ = l_Lean_Meta_zetaReduce___lam__2(v___f_3561_, v_e_3562_, v___y_3563_, v___y_3564_, v___y_3565_, v___y_3566_);
lean_dec(v___y_3566_);
lean_dec_ref(v___y_3565_);
lean_dec(v___y_3564_);
lean_dec_ref(v___y_3563_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4(lean_object* v___f_3569_, lean_object* v_e_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_){
_start:
{
lean_object* v___x_3576_; 
v___x_3576_ = l_Lean_Expr_getAppFn(v_e_3570_);
if (lean_obj_tag(v___x_3576_) == 1)
{
lean_object* v_fvarId_3577_; lean_object* v___x_3578_; 
v_fvarId_3577_ = lean_ctor_get(v___x_3576_, 0);
lean_inc(v_fvarId_3577_);
lean_dec_ref(v___x_3576_);
lean_inc(v___y_3574_);
lean_inc_ref(v___y_3573_);
lean_inc(v___y_3572_);
lean_inc_ref(v___y_3571_);
v___x_3578_ = lean_apply_6(v___f_3569_, v_fvarId_3577_, v___y_3571_, v___y_3572_, v___y_3573_, v___y_3574_, lean_box(0));
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3611_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3581_ = v___x_3578_;
v_isShared_3582_ = v_isSharedCheck_3611_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_a_3579_);
lean_dec(v___x_3578_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3611_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
if (lean_obj_tag(v_a_3579_) == 1)
{
lean_object* v_val_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3606_; 
lean_del_object(v___x_3581_);
v_val_3583_ = lean_ctor_get(v_a_3579_, 0);
v_isSharedCheck_3606_ = !lean_is_exclusive(v_a_3579_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3585_ = v_a_3579_;
v_isShared_3586_ = v_isSharedCheck_3606_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_val_3583_);
lean_dec(v_a_3579_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3606_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3587_; lean_object* v_a_3588_; lean_object* v___x_3590_; uint8_t v_isShared_3591_; uint8_t v_isSharedCheck_3605_; 
v___x_3587_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_3583_, v___y_3572_, v___y_3574_);
v_a_3588_ = lean_ctor_get(v___x_3587_, 0);
v_isSharedCheck_3605_ = !lean_is_exclusive(v___x_3587_);
if (v_isSharedCheck_3605_ == 0)
{
v___x_3590_ = v___x_3587_;
v_isShared_3591_ = v_isSharedCheck_3605_;
goto v_resetjp_3589_;
}
else
{
lean_inc(v_a_3588_);
lean_dec(v___x_3587_);
v___x_3590_ = lean_box(0);
v_isShared_3591_ = v_isSharedCheck_3605_;
goto v_resetjp_3589_;
}
v_resetjp_3589_:
{
lean_object* v_dummy_3592_; lean_object* v_nargs_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3600_; 
v_dummy_3592_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_3593_ = l_Lean_Expr_getAppNumArgs(v_e_3570_);
lean_inc(v_nargs_3593_);
v___x_3594_ = lean_mk_array(v_nargs_3593_, v_dummy_3592_);
v___x_3595_ = lean_unsigned_to_nat(1u);
v___x_3596_ = lean_nat_sub(v_nargs_3593_, v___x_3595_);
lean_dec(v_nargs_3593_);
v___x_3597_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3570_, v___x_3594_, v___x_3596_);
v___x_3598_ = l_Lean_Expr_beta(v_a_3588_, v___x_3597_);
if (v_isShared_3586_ == 0)
{
lean_ctor_set(v___x_3585_, 0, v___x_3598_);
v___x_3600_ = v___x_3585_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v___x_3598_);
v___x_3600_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
lean_object* v___x_3602_; 
if (v_isShared_3591_ == 0)
{
lean_ctor_set(v___x_3590_, 0, v___x_3600_);
v___x_3602_ = v___x_3590_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v___x_3600_);
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
}
else
{
lean_object* v___x_3607_; lean_object* v___x_3609_; 
lean_dec(v_a_3579_);
lean_dec_ref(v_e_3570_);
v___x_3607_ = lean_obj_once(&l_Lean_Core_betaReduce___lam__0___closed__0, &l_Lean_Core_betaReduce___lam__0___closed__0_once, _init_l_Lean_Core_betaReduce___lam__0___closed__0);
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 0, v___x_3607_);
v___x_3609_ = v___x_3581_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3607_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
}
else
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3619_; 
lean_dec_ref(v_e_3570_);
v_a_3612_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3614_ = v___x_3578_;
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3578_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3617_; 
if (v_isShared_3615_ == 0)
{
v___x_3617_ = v___x_3614_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v_a_3612_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
}
else
{
lean_object* v___x_3620_; lean_object* v___x_3621_; 
lean_dec_ref(v___x_3576_);
lean_dec_ref(v_e_3570_);
lean_dec_ref(v___f_3569_);
v___x_3620_ = lean_obj_once(&l_Lean_Core_betaReduce___lam__0___closed__0, &l_Lean_Core_betaReduce___lam__0___closed__0_once, _init_l_Lean_Core_betaReduce___lam__0___closed__0);
v___x_3621_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3620_);
return v___x_3621_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___lam__4___boxed(lean_object* v___f_3622_, lean_object* v_e_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_, lean_object* v___y_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l_Lean_Meta_zetaReduce___lam__4(v___f_3622_, v_e_3623_, v___y_3624_, v___y_3625_, v___y_3626_, v___y_3627_);
lean_dec(v___y_3627_);
lean_dec_ref(v___y_3626_);
lean_dec(v___y_3625_);
lean_dec_ref(v___y_3624_);
return v_res_3629_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(lean_object* v_ref_3630_){
_start:
{
lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; 
v___x_3632_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_3633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3633_, 0, v_ref_3630_);
lean_ctor_set(v___x_3633_, 1, v___x_3632_);
v___x_3634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3634_, 0, v___x_3633_);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg___boxed(lean_object* v_ref_3635_, lean_object* v___y_3636_){
_start:
{
lean_object* v_res_3637_; 
v_res_3637_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_3635_);
return v_res_3637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(lean_object* v_x_3638_, lean_object* v___y_3639_, lean_object* v___y_3640_, lean_object* v___y_3641_, lean_object* v___y_3642_, lean_object* v___y_3643_){
_start:
{
lean_object* v___y_3646_; lean_object* v_fileName_3655_; lean_object* v_fileMap_3656_; lean_object* v_options_3657_; lean_object* v_currRecDepth_3658_; lean_object* v_maxRecDepth_3659_; lean_object* v_ref_3660_; lean_object* v_currNamespace_3661_; lean_object* v_openDecls_3662_; lean_object* v_initHeartbeats_3663_; lean_object* v_maxHeartbeats_3664_; lean_object* v_quotContext_3665_; lean_object* v_currMacroScope_3666_; uint8_t v_diag_3667_; lean_object* v_cancelTk_x3f_3668_; uint8_t v_suppressElabErrors_3669_; lean_object* v_inheritedTraceOptions_3670_; lean_object* v___x_3676_; uint8_t v___x_3677_; 
v_fileName_3655_ = lean_ctor_get(v___y_3642_, 0);
v_fileMap_3656_ = lean_ctor_get(v___y_3642_, 1);
v_options_3657_ = lean_ctor_get(v___y_3642_, 2);
v_currRecDepth_3658_ = lean_ctor_get(v___y_3642_, 3);
v_maxRecDepth_3659_ = lean_ctor_get(v___y_3642_, 4);
v_ref_3660_ = lean_ctor_get(v___y_3642_, 5);
v_currNamespace_3661_ = lean_ctor_get(v___y_3642_, 6);
v_openDecls_3662_ = lean_ctor_get(v___y_3642_, 7);
v_initHeartbeats_3663_ = lean_ctor_get(v___y_3642_, 8);
v_maxHeartbeats_3664_ = lean_ctor_get(v___y_3642_, 9);
v_quotContext_3665_ = lean_ctor_get(v___y_3642_, 10);
v_currMacroScope_3666_ = lean_ctor_get(v___y_3642_, 11);
v_diag_3667_ = lean_ctor_get_uint8(v___y_3642_, sizeof(void*)*14);
v_cancelTk_x3f_3668_ = lean_ctor_get(v___y_3642_, 12);
v_suppressElabErrors_3669_ = lean_ctor_get_uint8(v___y_3642_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_3670_ = lean_ctor_get(v___y_3642_, 13);
v___x_3676_ = lean_unsigned_to_nat(0u);
v___x_3677_ = lean_nat_dec_eq(v_maxRecDepth_3659_, v___x_3676_);
if (v___x_3677_ == 0)
{
uint8_t v___x_3678_; 
v___x_3678_ = lean_nat_dec_eq(v_currRecDepth_3658_, v_maxRecDepth_3659_);
if (v___x_3678_ == 0)
{
goto v___jp_3671_;
}
else
{
lean_object* v___x_3679_; 
lean_dec_ref(v_x_3638_);
lean_inc(v_ref_3660_);
v___x_3679_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_3660_);
v___y_3646_ = v___x_3679_;
goto v___jp_3645_;
}
}
else
{
goto v___jp_3671_;
}
v___jp_3645_:
{
if (lean_obj_tag(v___y_3646_) == 0)
{
return v___y_3646_;
}
else
{
lean_object* v_a_3647_; lean_object* v___x_3649_; uint8_t v_isShared_3650_; uint8_t v_isSharedCheck_3654_; 
v_a_3647_ = lean_ctor_get(v___y_3646_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v___y_3646_);
if (v_isSharedCheck_3654_ == 0)
{
v___x_3649_ = v___y_3646_;
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
else
{
lean_inc(v_a_3647_);
lean_dec(v___y_3646_);
v___x_3649_ = lean_box(0);
v_isShared_3650_ = v_isSharedCheck_3654_;
goto v_resetjp_3648_;
}
v_resetjp_3648_:
{
lean_object* v___x_3652_; 
if (v_isShared_3650_ == 0)
{
v___x_3652_ = v___x_3649_;
goto v_reusejp_3651_;
}
else
{
lean_object* v_reuseFailAlloc_3653_; 
v_reuseFailAlloc_3653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3653_, 0, v_a_3647_);
v___x_3652_ = v_reuseFailAlloc_3653_;
goto v_reusejp_3651_;
}
v_reusejp_3651_:
{
return v___x_3652_;
}
}
}
}
v___jp_3671_:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3672_ = lean_unsigned_to_nat(1u);
v___x_3673_ = lean_nat_add(v_currRecDepth_3658_, v___x_3672_);
lean_inc_ref(v_inheritedTraceOptions_3670_);
lean_inc(v_cancelTk_x3f_3668_);
lean_inc(v_currMacroScope_3666_);
lean_inc(v_quotContext_3665_);
lean_inc(v_maxHeartbeats_3664_);
lean_inc(v_initHeartbeats_3663_);
lean_inc(v_openDecls_3662_);
lean_inc(v_currNamespace_3661_);
lean_inc(v_ref_3660_);
lean_inc(v_maxRecDepth_3659_);
lean_inc_ref(v_options_3657_);
lean_inc_ref(v_fileMap_3656_);
lean_inc_ref(v_fileName_3655_);
v___x_3674_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_3674_, 0, v_fileName_3655_);
lean_ctor_set(v___x_3674_, 1, v_fileMap_3656_);
lean_ctor_set(v___x_3674_, 2, v_options_3657_);
lean_ctor_set(v___x_3674_, 3, v___x_3673_);
lean_ctor_set(v___x_3674_, 4, v_maxRecDepth_3659_);
lean_ctor_set(v___x_3674_, 5, v_ref_3660_);
lean_ctor_set(v___x_3674_, 6, v_currNamespace_3661_);
lean_ctor_set(v___x_3674_, 7, v_openDecls_3662_);
lean_ctor_set(v___x_3674_, 8, v_initHeartbeats_3663_);
lean_ctor_set(v___x_3674_, 9, v_maxHeartbeats_3664_);
lean_ctor_set(v___x_3674_, 10, v_quotContext_3665_);
lean_ctor_set(v___x_3674_, 11, v_currMacroScope_3666_);
lean_ctor_set(v___x_3674_, 12, v_cancelTk_x3f_3668_);
lean_ctor_set(v___x_3674_, 13, v_inheritedTraceOptions_3670_);
lean_ctor_set_uint8(v___x_3674_, sizeof(void*)*14, v_diag_3667_);
lean_ctor_set_uint8(v___x_3674_, sizeof(void*)*14 + 1, v_suppressElabErrors_3669_);
lean_inc(v___y_3643_);
lean_inc(v___y_3641_);
lean_inc_ref(v___y_3640_);
lean_inc(v___y_3639_);
v___x_3675_ = lean_apply_6(v_x_3638_, v___y_3639_, v___y_3640_, v___y_3641_, v___x_3674_, v___y_3643_, lean_box(0));
v___y_3646_ = v___x_3675_;
goto v___jp_3645_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg___boxed(lean_object* v_x_3680_, lean_object* v___y_3681_, lean_object* v___y_3682_, lean_object* v___y_3683_, lean_object* v___y_3684_, lean_object* v___y_3685_, lean_object* v___y_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v_x_3680_, v___y_3681_, v___y_3682_, v___y_3683_, v___y_3684_, v___y_3685_);
lean_dec(v___y_3685_);
lean_dec_ref(v___y_3684_);
lean_dec(v___y_3683_);
lean_dec_ref(v___y_3682_);
lean_dec(v___y_3681_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(lean_object* v_k_3688_, lean_object* v___y_3689_, lean_object* v_b_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_){
_start:
{
lean_object* v___x_3696_; 
lean_inc(v___y_3694_);
lean_inc_ref(v___y_3693_);
lean_inc(v___y_3692_);
lean_inc_ref(v___y_3691_);
lean_inc(v___y_3689_);
v___x_3696_ = lean_apply_7(v_k_3688_, v_b_3690_, v___y_3689_, v___y_3691_, v___y_3692_, v___y_3693_, v___y_3694_, lean_box(0));
return v___x_3696_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed(lean_object* v_k_3697_, lean_object* v___y_3698_, lean_object* v_b_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_){
_start:
{
lean_object* v_res_3705_; 
v_res_3705_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0(v_k_3697_, v___y_3698_, v_b_3699_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_);
lean_dec(v___y_3703_);
lean_dec_ref(v___y_3702_);
lean_dec(v___y_3701_);
lean_dec_ref(v___y_3700_);
lean_dec(v___y_3698_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(lean_object* v_name_3706_, uint8_t v_bi_3707_, lean_object* v_type_3708_, lean_object* v_k_3709_, uint8_t v_kind_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
lean_object* v___f_3717_; lean_object* v___x_3718_; 
lean_inc(v___y_3711_);
v___f_3717_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3717_, 0, v_k_3709_);
lean_closure_set(v___f_3717_, 1, v___y_3711_);
v___x_3718_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_3706_, v_bi_3707_, v_type_3708_, v___f_3717_, v_kind_3710_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
if (lean_obj_tag(v___x_3718_) == 0)
{
return v___x_3718_;
}
else
{
lean_object* v_a_3719_; lean_object* v___x_3721_; uint8_t v_isShared_3722_; uint8_t v_isSharedCheck_3726_; 
v_a_3719_ = lean_ctor_get(v___x_3718_, 0);
v_isSharedCheck_3726_ = !lean_is_exclusive(v___x_3718_);
if (v_isSharedCheck_3726_ == 0)
{
v___x_3721_ = v___x_3718_;
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
else
{
lean_inc(v_a_3719_);
lean_dec(v___x_3718_);
v___x_3721_ = lean_box(0);
v_isShared_3722_ = v_isSharedCheck_3726_;
goto v_resetjp_3720_;
}
v_resetjp_3720_:
{
lean_object* v___x_3724_; 
if (v_isShared_3722_ == 0)
{
v___x_3724_ = v___x_3721_;
goto v_reusejp_3723_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_a_3719_);
v___x_3724_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3723_;
}
v_reusejp_3723_:
{
return v___x_3724_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___boxed(lean_object* v_name_3727_, lean_object* v_bi_3728_, lean_object* v_type_3729_, lean_object* v_k_3730_, lean_object* v_kind_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_, lean_object* v___y_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_){
_start:
{
uint8_t v_bi_boxed_3738_; uint8_t v_kind_boxed_3739_; lean_object* v_res_3740_; 
v_bi_boxed_3738_ = lean_unbox(v_bi_3728_);
v_kind_boxed_3739_ = lean_unbox(v_kind_3731_);
v_res_3740_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_name_3727_, v_bi_boxed_3738_, v_type_3729_, v_k_3730_, v_kind_boxed_3739_, v___y_3732_, v___y_3733_, v___y_3734_, v___y_3735_, v___y_3736_);
lean_dec(v___y_3736_);
lean_dec_ref(v___y_3735_);
lean_dec(v___y_3734_);
lean_dec_ref(v___y_3733_);
lean_dec(v___y_3732_);
return v_res_3740_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(lean_object* v_name_3741_, lean_object* v_type_3742_, lean_object* v_val_3743_, lean_object* v_k_3744_, uint8_t v_nondep_3745_, uint8_t v_kind_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_){
_start:
{
lean_object* v___f_3753_; lean_object* v___x_3754_; 
lean_inc(v___y_3747_);
v___f_3753_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_3753_, 0, v_k_3744_);
lean_closure_set(v___f_3753_, 1, v___y_3747_);
v___x_3754_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_3741_, v_type_3742_, v_val_3743_, v___f_3753_, v_nondep_3745_, v_kind_3746_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_);
if (lean_obj_tag(v___x_3754_) == 0)
{
return v___x_3754_;
}
else
{
lean_object* v_a_3755_; lean_object* v___x_3757_; uint8_t v_isShared_3758_; uint8_t v_isSharedCheck_3762_; 
v_a_3755_ = lean_ctor_get(v___x_3754_, 0);
v_isSharedCheck_3762_ = !lean_is_exclusive(v___x_3754_);
if (v_isSharedCheck_3762_ == 0)
{
v___x_3757_ = v___x_3754_;
v_isShared_3758_ = v_isSharedCheck_3762_;
goto v_resetjp_3756_;
}
else
{
lean_inc(v_a_3755_);
lean_dec(v___x_3754_);
v___x_3757_ = lean_box(0);
v_isShared_3758_ = v_isSharedCheck_3762_;
goto v_resetjp_3756_;
}
v_resetjp_3756_:
{
lean_object* v___x_3760_; 
if (v_isShared_3758_ == 0)
{
v___x_3760_ = v___x_3757_;
goto v_reusejp_3759_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v_a_3755_);
v___x_3760_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3759_;
}
v_reusejp_3759_:
{
return v___x_3760_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg___boxed(lean_object* v_name_3763_, lean_object* v_type_3764_, lean_object* v_val_3765_, lean_object* v_k_3766_, lean_object* v_nondep_3767_, lean_object* v_kind_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_){
_start:
{
uint8_t v_nondep_boxed_3775_; uint8_t v_kind_boxed_3776_; lean_object* v_res_3777_; 
v_nondep_boxed_3775_ = lean_unbox(v_nondep_3767_);
v_kind_boxed_3776_ = lean_unbox(v_kind_3768_);
v_res_3777_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_name_3763_, v_type_3764_, v_val_3765_, v_k_3766_, v_nondep_boxed_3775_, v_kind_boxed_3776_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_, v___y_3773_);
lean_dec(v___y_3773_);
lean_dec_ref(v___y_3772_);
lean_dec(v___y_3771_);
lean_dec_ref(v___y_3770_);
lean_dec(v___y_3769_);
return v_res_3777_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(lean_object* v___x_3778_, lean_object* v___y_3779_, lean_object* v___y_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_){
_start:
{
lean_object* v___x_3784_; 
v___x_3784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3784_, 0, v___x_3778_);
return v___x_3784_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed(lean_object* v___x_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_, lean_object* v___y_3789_, lean_object* v___y_3790_){
_start:
{
lean_object* v_res_3791_; 
v_res_3791_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2(v___x_3785_, v___y_3786_, v___y_3787_, v___y_3788_, v___y_3789_);
lean_dec(v___y_3789_);
lean_dec_ref(v___y_3788_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
return v_res_3791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_object* v_00_u03b1_3792_, lean_object* v_x_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_){
_start:
{
lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v___x_3799_ = lean_st_ref_get(v___y_3797_);
lean_dec(v___x_3799_);
v___x_3800_ = lean_apply_1(v_x_3793_, lean_box(0));
v___x_3801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3801_, 0, v___x_3800_);
return v___x_3801_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0___boxed(lean_object* v_00_u03b1_3802_, lean_object* v_x_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_, lean_object* v___y_3806_, lean_object* v___y_3807_, lean_object* v___y_3808_){
_start:
{
lean_object* v_res_3809_; 
v_res_3809_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(v_00_u03b1_3802_, v_x_3803_, v___y_3804_, v___y_3805_, v___y_3806_, v___y_3807_);
lean_dec(v___y_3807_);
lean_dec_ref(v___y_3806_);
lean_dec(v___y_3805_);
lean_dec_ref(v___y_3804_);
return v_res_3809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(lean_object* v_fvars_3810_, lean_object* v_pre_3811_, lean_object* v_post_3812_, uint8_t v_usedLetOnly_3813_, uint8_t v_skipConstInApp_3814_, uint8_t v_skipInstances_3815_, lean_object* v_body_3816_, lean_object* v_x_3817_, lean_object* v___y_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_){
_start:
{
lean_object* v___x_3824_; lean_object* v___x_3825_; 
v___x_3824_ = lean_array_push(v_fvars_3810_, v_x_3817_);
v___x_3825_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_3811_, v_post_3812_, v_usedLetOnly_3813_, v_skipConstInApp_3814_, v_skipInstances_3815_, v___x_3824_, v_body_3816_, v___y_3818_, v___y_3819_, v___y_3820_, v___y_3821_, v___y_3822_);
return v___x_3825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed(lean_object* v_fvars_3826_, lean_object* v_pre_3827_, lean_object* v_post_3828_, lean_object* v_usedLetOnly_3829_, lean_object* v_skipConstInApp_3830_, lean_object* v_skipInstances_3831_, lean_object* v_body_3832_, lean_object* v_x_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_){
_start:
{
uint8_t v_usedLetOnly_boxed_3840_; uint8_t v_skipConstInApp_boxed_3841_; uint8_t v_skipInstances_boxed_3842_; lean_object* v_res_3843_; 
v_usedLetOnly_boxed_3840_ = lean_unbox(v_usedLetOnly_3829_);
v_skipConstInApp_boxed_3841_ = lean_unbox(v_skipConstInApp_3830_);
v_skipInstances_boxed_3842_ = lean_unbox(v_skipInstances_3831_);
v_res_3843_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0(v_fvars_3826_, v_pre_3827_, v_post_3828_, v_usedLetOnly_boxed_3840_, v_skipConstInApp_boxed_3841_, v_skipInstances_boxed_3842_, v_body_3832_, v_x_3833_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, v___y_3838_);
lean_dec(v___y_3838_);
lean_dec_ref(v___y_3837_);
lean_dec(v___y_3836_);
lean_dec_ref(v___y_3835_);
lean_dec(v___y_3834_);
return v_res_3843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(lean_object* v_pre_3844_, lean_object* v_post_3845_, uint8_t v_usedLetOnly_3846_, uint8_t v_skipConstInApp_3847_, uint8_t v_skipInstances_3848_, lean_object* v_e_3849_, lean_object* v_a_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_){
_start:
{
lean_object* v___x_3856_; 
lean_inc_ref(v_post_3845_);
lean_inc(v___y_3854_);
lean_inc_ref(v___y_3853_);
lean_inc(v___y_3852_);
lean_inc_ref(v___y_3851_);
lean_inc_ref(v_e_3849_);
v___x_3856_ = lean_apply_6(v_post_3845_, v_e_3849_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, lean_box(0));
if (lean_obj_tag(v___x_3856_) == 0)
{
lean_object* v_a_3857_; lean_object* v___x_3859_; uint8_t v_isShared_3860_; uint8_t v_isSharedCheck_3875_; 
v_a_3857_ = lean_ctor_get(v___x_3856_, 0);
v_isSharedCheck_3875_ = !lean_is_exclusive(v___x_3856_);
if (v_isSharedCheck_3875_ == 0)
{
v___x_3859_ = v___x_3856_;
v_isShared_3860_ = v_isSharedCheck_3875_;
goto v_resetjp_3858_;
}
else
{
lean_inc(v_a_3857_);
lean_dec(v___x_3856_);
v___x_3859_ = lean_box(0);
v_isShared_3860_ = v_isSharedCheck_3875_;
goto v_resetjp_3858_;
}
v_resetjp_3858_:
{
switch(lean_obj_tag(v_a_3857_))
{
case 0:
{
lean_object* v_e_3861_; lean_object* v___x_3863_; 
lean_dec_ref(v_e_3849_);
lean_dec_ref(v_post_3845_);
lean_dec_ref(v_pre_3844_);
v_e_3861_ = lean_ctor_get(v_a_3857_, 0);
lean_inc_ref(v_e_3861_);
lean_dec_ref(v_a_3857_);
if (v_isShared_3860_ == 0)
{
lean_ctor_set(v___x_3859_, 0, v_e_3861_);
v___x_3863_ = v___x_3859_;
goto v_reusejp_3862_;
}
else
{
lean_object* v_reuseFailAlloc_3864_; 
v_reuseFailAlloc_3864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3864_, 0, v_e_3861_);
v___x_3863_ = v_reuseFailAlloc_3864_;
goto v_reusejp_3862_;
}
v_reusejp_3862_:
{
return v___x_3863_;
}
}
case 1:
{
lean_object* v_e_3865_; lean_object* v___x_3866_; 
lean_del_object(v___x_3859_);
lean_dec_ref(v_e_3849_);
v_e_3865_ = lean_ctor_get(v_a_3857_, 0);
lean_inc_ref(v_e_3865_);
lean_dec_ref(v_a_3857_);
v___x_3866_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3844_, v_post_3845_, v_usedLetOnly_3846_, v_skipConstInApp_3847_, v_skipInstances_3848_, v_e_3865_, v_a_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_);
return v___x_3866_;
}
default: 
{
lean_object* v_e_x3f_3867_; 
lean_dec_ref(v_post_3845_);
lean_dec_ref(v_pre_3844_);
v_e_x3f_3867_ = lean_ctor_get(v_a_3857_, 0);
lean_inc(v_e_x3f_3867_);
lean_dec_ref(v_a_3857_);
if (lean_obj_tag(v_e_x3f_3867_) == 0)
{
lean_object* v___x_3869_; 
if (v_isShared_3860_ == 0)
{
lean_ctor_set(v___x_3859_, 0, v_e_3849_);
v___x_3869_ = v___x_3859_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v_e_3849_);
v___x_3869_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
return v___x_3869_;
}
}
else
{
lean_object* v_val_3871_; lean_object* v___x_3873_; 
lean_dec_ref(v_e_3849_);
v_val_3871_ = lean_ctor_get(v_e_x3f_3867_, 0);
lean_inc(v_val_3871_);
lean_dec_ref(v_e_x3f_3867_);
if (v_isShared_3860_ == 0)
{
lean_ctor_set(v___x_3859_, 0, v_val_3871_);
v___x_3873_ = v___x_3859_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v_val_3871_);
v___x_3873_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
return v___x_3873_;
}
}
}
}
}
}
else
{
lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3883_; 
lean_dec_ref(v_e_3849_);
lean_dec_ref(v_post_3845_);
lean_dec_ref(v_pre_3844_);
v_a_3876_ = lean_ctor_get(v___x_3856_, 0);
v_isSharedCheck_3883_ = !lean_is_exclusive(v___x_3856_);
if (v_isSharedCheck_3883_ == 0)
{
v___x_3878_ = v___x_3856_;
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3856_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
lean_object* v___x_3881_; 
if (v_isShared_3879_ == 0)
{
v___x_3881_ = v___x_3878_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3882_; 
v_reuseFailAlloc_3882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3882_, 0, v_a_3876_);
v___x_3881_ = v_reuseFailAlloc_3882_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
return v___x_3881_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(lean_object* v_pre_3884_, lean_object* v_post_3885_, uint8_t v_usedLetOnly_3886_, uint8_t v_skipConstInApp_3887_, uint8_t v_skipInstances_3888_, lean_object* v_fvars_3889_, lean_object* v_e_3890_, lean_object* v_a_3891_, lean_object* v___y_3892_, lean_object* v___y_3893_, lean_object* v___y_3894_, lean_object* v___y_3895_){
_start:
{
if (lean_obj_tag(v_e_3890_) == 6)
{
lean_object* v_binderName_3897_; lean_object* v_binderType_3898_; lean_object* v_body_3899_; uint8_t v_binderInfo_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; 
v_binderName_3897_ = lean_ctor_get(v_e_3890_, 0);
lean_inc(v_binderName_3897_);
v_binderType_3898_ = lean_ctor_get(v_e_3890_, 1);
lean_inc_ref(v_binderType_3898_);
v_body_3899_ = lean_ctor_get(v_e_3890_, 2);
lean_inc_ref(v_body_3899_);
v_binderInfo_3900_ = lean_ctor_get_uint8(v_e_3890_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_3890_);
v___x_3901_ = lean_expr_instantiate_rev(v_binderType_3898_, v_fvars_3889_);
lean_dec_ref(v_binderType_3898_);
lean_inc_ref(v_post_3885_);
lean_inc_ref(v_pre_3884_);
v___x_3902_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3884_, v_post_3885_, v_usedLetOnly_3886_, v_skipConstInApp_3887_, v_skipInstances_3888_, v___x_3901_, v_a_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
if (lean_obj_tag(v___x_3902_) == 0)
{
lean_object* v_a_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___f_3907_; uint8_t v___x_3908_; lean_object* v___x_3909_; 
v_a_3903_ = lean_ctor_get(v___x_3902_, 0);
lean_inc(v_a_3903_);
lean_dec_ref(v___x_3902_);
v___x_3904_ = lean_box(v_usedLetOnly_3886_);
v___x_3905_ = lean_box(v_skipConstInApp_3887_);
v___x_3906_ = lean_box(v_skipInstances_3888_);
v___f_3907_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3907_, 0, v_fvars_3889_);
lean_closure_set(v___f_3907_, 1, v_pre_3884_);
lean_closure_set(v___f_3907_, 2, v_post_3885_);
lean_closure_set(v___f_3907_, 3, v___x_3904_);
lean_closure_set(v___f_3907_, 4, v___x_3905_);
lean_closure_set(v___f_3907_, 5, v___x_3906_);
lean_closure_set(v___f_3907_, 6, v_body_3899_);
v___x_3908_ = 0;
v___x_3909_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_binderName_3897_, v_binderInfo_3900_, v_a_3903_, v___f_3907_, v___x_3908_, v_a_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
return v___x_3909_;
}
else
{
lean_dec_ref(v_body_3899_);
lean_dec(v_binderName_3897_);
lean_dec_ref(v_fvars_3889_);
lean_dec_ref(v_post_3885_);
lean_dec_ref(v_pre_3884_);
return v___x_3902_;
}
}
else
{
lean_object* v___x_3910_; lean_object* v___x_3911_; 
v___x_3910_ = lean_expr_instantiate_rev(v_e_3890_, v_fvars_3889_);
lean_dec_ref(v_e_3890_);
lean_inc_ref(v_post_3885_);
lean_inc_ref(v_pre_3884_);
v___x_3911_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3884_, v_post_3885_, v_usedLetOnly_3886_, v_skipConstInApp_3887_, v_skipInstances_3888_, v___x_3910_, v_a_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
if (lean_obj_tag(v___x_3911_) == 0)
{
lean_object* v_a_3912_; uint8_t v___x_3913_; uint8_t v___x_3914_; uint8_t v___x_3915_; lean_object* v___x_3916_; 
v_a_3912_ = lean_ctor_get(v___x_3911_, 0);
lean_inc(v_a_3912_);
lean_dec_ref(v___x_3911_);
v___x_3913_ = 0;
v___x_3914_ = 1;
v___x_3915_ = 1;
v___x_3916_ = l_Lean_Meta_mkLambdaFVars(v_fvars_3889_, v_a_3912_, v___x_3913_, v_usedLetOnly_3886_, v___x_3913_, v___x_3914_, v___x_3915_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
lean_dec_ref(v_fvars_3889_);
if (lean_obj_tag(v___x_3916_) == 0)
{
lean_object* v_a_3917_; lean_object* v___x_3918_; 
v_a_3917_ = lean_ctor_get(v___x_3916_, 0);
lean_inc(v_a_3917_);
lean_dec_ref(v___x_3916_);
v___x_3918_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3884_, v_post_3885_, v_usedLetOnly_3886_, v_skipConstInApp_3887_, v_skipInstances_3888_, v_a_3917_, v_a_3891_, v___y_3892_, v___y_3893_, v___y_3894_, v___y_3895_);
return v___x_3918_;
}
else
{
lean_dec_ref(v_post_3885_);
lean_dec_ref(v_pre_3884_);
return v___x_3916_;
}
}
else
{
lean_dec_ref(v_fvars_3889_);
lean_dec_ref(v_post_3885_);
lean_dec_ref(v_pre_3884_);
return v___x_3911_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(lean_object* v_fvars_3919_, lean_object* v_pre_3920_, lean_object* v_post_3921_, uint8_t v_usedLetOnly_3922_, uint8_t v_skipConstInApp_3923_, uint8_t v_skipInstances_3924_, lean_object* v_body_3925_, lean_object* v_x_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
lean_object* v___x_3933_; lean_object* v___x_3934_; 
v___x_3933_ = lean_array_push(v_fvars_3919_, v_x_3926_);
v___x_3934_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_3920_, v_post_3921_, v_usedLetOnly_3922_, v_skipConstInApp_3923_, v_skipInstances_3924_, v___x_3933_, v_body_3925_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_);
return v___x_3934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed(lean_object* v_fvars_3935_, lean_object* v_pre_3936_, lean_object* v_post_3937_, lean_object* v_usedLetOnly_3938_, lean_object* v_skipConstInApp_3939_, lean_object* v_skipInstances_3940_, lean_object* v_body_3941_, lean_object* v_x_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_){
_start:
{
uint8_t v_usedLetOnly_boxed_3949_; uint8_t v_skipConstInApp_boxed_3950_; uint8_t v_skipInstances_boxed_3951_; lean_object* v_res_3952_; 
v_usedLetOnly_boxed_3949_ = lean_unbox(v_usedLetOnly_3938_);
v_skipConstInApp_boxed_3950_ = lean_unbox(v_skipConstInApp_3939_);
v_skipInstances_boxed_3951_ = lean_unbox(v_skipInstances_3940_);
v_res_3952_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0(v_fvars_3935_, v_pre_3936_, v_post_3937_, v_usedLetOnly_boxed_3949_, v_skipConstInApp_boxed_3950_, v_skipInstances_boxed_3951_, v_body_3941_, v_x_3942_, v___y_3943_, v___y_3944_, v___y_3945_, v___y_3946_, v___y_3947_);
lean_dec(v___y_3947_);
lean_dec_ref(v___y_3946_);
lean_dec(v___y_3945_);
lean_dec_ref(v___y_3944_);
lean_dec(v___y_3943_);
return v_res_3952_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(lean_object* v_pre_3953_, lean_object* v_post_3954_, uint8_t v_usedLetOnly_3955_, uint8_t v_skipConstInApp_3956_, uint8_t v_skipInstances_3957_, lean_object* v_fvars_3958_, lean_object* v_e_3959_, lean_object* v_a_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_){
_start:
{
if (lean_obj_tag(v_e_3959_) == 8)
{
lean_object* v_declName_3966_; lean_object* v_type_3967_; lean_object* v_value_3968_; lean_object* v_body_3969_; uint8_t v_nondep_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; 
v_declName_3966_ = lean_ctor_get(v_e_3959_, 0);
lean_inc(v_declName_3966_);
v_type_3967_ = lean_ctor_get(v_e_3959_, 1);
lean_inc_ref(v_type_3967_);
v_value_3968_ = lean_ctor_get(v_e_3959_, 2);
lean_inc_ref(v_value_3968_);
v_body_3969_ = lean_ctor_get(v_e_3959_, 3);
lean_inc_ref(v_body_3969_);
v_nondep_3970_ = lean_ctor_get_uint8(v_e_3959_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_3959_);
v___x_3971_ = lean_expr_instantiate_rev(v_type_3967_, v_fvars_3958_);
lean_dec_ref(v_type_3967_);
lean_inc_ref(v_post_3954_);
lean_inc_ref(v_pre_3953_);
v___x_3972_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3953_, v_post_3954_, v_usedLetOnly_3955_, v_skipConstInApp_3956_, v_skipInstances_3957_, v___x_3971_, v_a_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_);
if (lean_obj_tag(v___x_3972_) == 0)
{
lean_object* v_a_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; 
v_a_3973_ = lean_ctor_get(v___x_3972_, 0);
lean_inc(v_a_3973_);
lean_dec_ref(v___x_3972_);
v___x_3974_ = lean_expr_instantiate_rev(v_value_3968_, v_fvars_3958_);
lean_dec_ref(v_value_3968_);
lean_inc_ref(v_post_3954_);
lean_inc_ref(v_pre_3953_);
v___x_3975_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3953_, v_post_3954_, v_usedLetOnly_3955_, v_skipConstInApp_3956_, v_skipInstances_3957_, v___x_3974_, v_a_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_);
if (lean_obj_tag(v___x_3975_) == 0)
{
lean_object* v_a_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___f_3980_; uint8_t v___x_3981_; lean_object* v___x_3982_; 
v_a_3976_ = lean_ctor_get(v___x_3975_, 0);
lean_inc(v_a_3976_);
lean_dec_ref(v___x_3975_);
v___x_3977_ = lean_box(v_usedLetOnly_3955_);
v___x_3978_ = lean_box(v_skipConstInApp_3956_);
v___x_3979_ = lean_box(v_skipInstances_3957_);
v___f_3980_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___lam__0___boxed), 14, 7);
lean_closure_set(v___f_3980_, 0, v_fvars_3958_);
lean_closure_set(v___f_3980_, 1, v_pre_3953_);
lean_closure_set(v___f_3980_, 2, v_post_3954_);
lean_closure_set(v___f_3980_, 3, v___x_3977_);
lean_closure_set(v___f_3980_, 4, v___x_3978_);
lean_closure_set(v___f_3980_, 5, v___x_3979_);
lean_closure_set(v___f_3980_, 6, v_body_3969_);
v___x_3981_ = 0;
v___x_3982_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_declName_3966_, v_a_3973_, v_a_3976_, v___f_3980_, v_nondep_3970_, v___x_3981_, v_a_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_);
return v___x_3982_;
}
else
{
lean_dec(v_a_3973_);
lean_dec_ref(v_body_3969_);
lean_dec(v_declName_3966_);
lean_dec_ref(v_fvars_3958_);
lean_dec_ref(v_post_3954_);
lean_dec_ref(v_pre_3953_);
return v___x_3975_;
}
}
else
{
lean_dec_ref(v_body_3969_);
lean_dec_ref(v_value_3968_);
lean_dec(v_declName_3966_);
lean_dec_ref(v_fvars_3958_);
lean_dec_ref(v_post_3954_);
lean_dec_ref(v_pre_3953_);
return v___x_3972_;
}
}
else
{
lean_object* v___x_3983_; lean_object* v___x_3984_; 
v___x_3983_ = lean_expr_instantiate_rev(v_e_3959_, v_fvars_3958_);
lean_dec_ref(v_e_3959_);
lean_inc_ref(v_post_3954_);
lean_inc_ref(v_pre_3953_);
v___x_3984_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3953_, v_post_3954_, v_usedLetOnly_3955_, v_skipConstInApp_3956_, v_skipInstances_3957_, v___x_3983_, v_a_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_);
if (lean_obj_tag(v___x_3984_) == 0)
{
lean_object* v_a_3985_; uint8_t v___x_3986_; uint8_t v___x_3987_; lean_object* v___x_3988_; 
v_a_3985_ = lean_ctor_get(v___x_3984_, 0);
lean_inc(v_a_3985_);
lean_dec_ref(v___x_3984_);
v___x_3986_ = 0;
v___x_3987_ = 1;
v___x_3988_ = l_Lean_Meta_mkLetFVars(v_fvars_3958_, v_a_3985_, v_usedLetOnly_3955_, v___x_3986_, v___x_3987_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_);
lean_dec_ref(v_fvars_3958_);
if (lean_obj_tag(v___x_3988_) == 0)
{
lean_object* v_a_3989_; lean_object* v___x_3990_; 
v_a_3989_ = lean_ctor_get(v___x_3988_, 0);
lean_inc(v_a_3989_);
lean_dec_ref(v___x_3988_);
v___x_3990_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_3953_, v_post_3954_, v_usedLetOnly_3955_, v_skipConstInApp_3956_, v_skipInstances_3957_, v_a_3989_, v_a_3960_, v___y_3961_, v___y_3962_, v___y_3963_, v___y_3964_);
return v___x_3990_;
}
else
{
lean_dec_ref(v_post_3954_);
lean_dec_ref(v_pre_3953_);
return v___x_3988_;
}
}
else
{
lean_dec_ref(v_fvars_3958_);
lean_dec_ref(v_post_3954_);
lean_dec_ref(v_pre_3953_);
return v___x_3984_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(lean_object* v_pre_3991_, lean_object* v_post_3992_, uint8_t v_usedLetOnly_3993_, uint8_t v_skipConstInApp_3994_, uint8_t v_skipInstances_3995_, size_t v_sz_3996_, size_t v_i_3997_, lean_object* v_bs_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_){
_start:
{
uint8_t v___x_4005_; 
v___x_4005_ = lean_usize_dec_lt(v_i_3997_, v_sz_3996_);
if (v___x_4005_ == 0)
{
lean_object* v___x_4006_; 
lean_dec_ref(v_post_3992_);
lean_dec_ref(v_pre_3991_);
v___x_4006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4006_, 0, v_bs_3998_);
return v___x_4006_;
}
else
{
lean_object* v_v_4007_; lean_object* v___x_4008_; 
v_v_4007_ = lean_array_uget_borrowed(v_bs_3998_, v_i_3997_);
lean_inc(v_v_4007_);
lean_inc_ref(v_post_3992_);
lean_inc_ref(v_pre_3991_);
v___x_4008_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_3991_, v_post_3992_, v_usedLetOnly_3993_, v_skipConstInApp_3994_, v_skipInstances_3995_, v_v_4007_, v___y_3999_, v___y_4000_, v___y_4001_, v___y_4002_, v___y_4003_);
if (lean_obj_tag(v___x_4008_) == 0)
{
lean_object* v_a_4009_; lean_object* v___x_4010_; lean_object* v_bs_x27_4011_; size_t v___x_4012_; size_t v___x_4013_; lean_object* v___x_4014_; 
v_a_4009_ = lean_ctor_get(v___x_4008_, 0);
lean_inc(v_a_4009_);
lean_dec_ref(v___x_4008_);
v___x_4010_ = lean_unsigned_to_nat(0u);
v_bs_x27_4011_ = lean_array_uset(v_bs_3998_, v_i_3997_, v___x_4010_);
v___x_4012_ = ((size_t)1ULL);
v___x_4013_ = lean_usize_add(v_i_3997_, v___x_4012_);
v___x_4014_ = lean_array_uset(v_bs_x27_4011_, v_i_3997_, v_a_4009_);
v_i_3997_ = v___x_4013_;
v_bs_3998_ = v___x_4014_;
goto _start;
}
else
{
lean_object* v_a_4016_; lean_object* v___x_4018_; uint8_t v_isShared_4019_; uint8_t v_isSharedCheck_4023_; 
lean_dec_ref(v_bs_3998_);
lean_dec_ref(v_post_3992_);
lean_dec_ref(v_pre_3991_);
v_a_4016_ = lean_ctor_get(v___x_4008_, 0);
v_isSharedCheck_4023_ = !lean_is_exclusive(v___x_4008_);
if (v_isSharedCheck_4023_ == 0)
{
v___x_4018_ = v___x_4008_;
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
else
{
lean_inc(v_a_4016_);
lean_dec(v___x_4008_);
v___x_4018_ = lean_box(0);
v_isShared_4019_ = v_isSharedCheck_4023_;
goto v_resetjp_4017_;
}
v_resetjp_4017_:
{
lean_object* v___x_4021_; 
if (v_isShared_4019_ == 0)
{
v___x_4021_ = v___x_4018_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v_a_4016_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
return v___x_4021_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(lean_object* v_pre_4024_, lean_object* v_post_4025_, uint8_t v_usedLetOnly_4026_, uint8_t v_skipConstInApp_4027_, uint8_t v_skipInstances_4028_, lean_object* v___x_4029_, lean_object* v___y_4030_, lean_object* v_b_4031_, lean_object* v_a_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_){
_start:
{
lean_object* v___x_4038_; 
v___x_4038_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4024_, v_post_4025_, v_usedLetOnly_4026_, v_skipConstInApp_4027_, v_skipInstances_4028_, v___x_4029_, v___y_4030_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_);
if (lean_obj_tag(v___x_4038_) == 0)
{
lean_object* v_a_4039_; lean_object* v___x_4041_; uint8_t v_isShared_4042_; uint8_t v_isSharedCheck_4048_; 
v_a_4039_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4048_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4048_ == 0)
{
v___x_4041_ = v___x_4038_;
v_isShared_4042_ = v_isSharedCheck_4048_;
goto v_resetjp_4040_;
}
else
{
lean_inc(v_a_4039_);
lean_dec(v___x_4038_);
v___x_4041_ = lean_box(0);
v_isShared_4042_ = v_isSharedCheck_4048_;
goto v_resetjp_4040_;
}
v_resetjp_4040_:
{
lean_object* v___x_4043_; lean_object* v___x_4044_; lean_object* v___x_4046_; 
v___x_4043_ = lean_array_fset(v_b_4031_, v_a_4032_, v_a_4039_);
v___x_4044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4044_, 0, v___x_4043_);
if (v_isShared_4042_ == 0)
{
lean_ctor_set(v___x_4041_, 0, v___x_4044_);
v___x_4046_ = v___x_4041_;
goto v_reusejp_4045_;
}
else
{
lean_object* v_reuseFailAlloc_4047_; 
v_reuseFailAlloc_4047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4047_, 0, v___x_4044_);
v___x_4046_ = v_reuseFailAlloc_4047_;
goto v_reusejp_4045_;
}
v_reusejp_4045_:
{
return v___x_4046_;
}
}
}
else
{
lean_object* v_a_4049_; lean_object* v___x_4051_; uint8_t v_isShared_4052_; uint8_t v_isSharedCheck_4056_; 
lean_dec_ref(v_b_4031_);
v_a_4049_ = lean_ctor_get(v___x_4038_, 0);
v_isSharedCheck_4056_ = !lean_is_exclusive(v___x_4038_);
if (v_isSharedCheck_4056_ == 0)
{
v___x_4051_ = v___x_4038_;
v_isShared_4052_ = v_isSharedCheck_4056_;
goto v_resetjp_4050_;
}
else
{
lean_inc(v_a_4049_);
lean_dec(v___x_4038_);
v___x_4051_ = lean_box(0);
v_isShared_4052_ = v_isSharedCheck_4056_;
goto v_resetjp_4050_;
}
v_resetjp_4050_:
{
lean_object* v___x_4054_; 
if (v_isShared_4052_ == 0)
{
v___x_4054_ = v___x_4051_;
goto v_reusejp_4053_;
}
else
{
lean_object* v_reuseFailAlloc_4055_; 
v_reuseFailAlloc_4055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4055_, 0, v_a_4049_);
v___x_4054_ = v_reuseFailAlloc_4055_;
goto v_reusejp_4053_;
}
v_reusejp_4053_:
{
return v___x_4054_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed(lean_object* v_pre_4057_, lean_object* v_post_4058_, lean_object* v_usedLetOnly_4059_, lean_object* v_skipConstInApp_4060_, lean_object* v_skipInstances_4061_, lean_object* v___x_4062_, lean_object* v___y_4063_, lean_object* v_b_4064_, lean_object* v_a_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_){
_start:
{
uint8_t v_usedLetOnly_boxed_4071_; uint8_t v_skipConstInApp_boxed_4072_; uint8_t v_skipInstances_boxed_4073_; lean_object* v_res_4074_; 
v_usedLetOnly_boxed_4071_ = lean_unbox(v_usedLetOnly_4059_);
v_skipConstInApp_boxed_4072_ = lean_unbox(v_skipConstInApp_4060_);
v_skipInstances_boxed_4073_ = lean_unbox(v_skipInstances_4061_);
v_res_4074_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0(v_pre_4057_, v_post_4058_, v_usedLetOnly_boxed_4071_, v_skipConstInApp_boxed_4072_, v_skipInstances_boxed_4073_, v___x_4062_, v___y_4063_, v_b_4064_, v_a_4065_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec(v___y_4067_);
lean_dec_ref(v___y_4066_);
lean_dec(v_a_4065_);
lean_dec(v___y_4063_);
return v_res_4074_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(lean_object* v_upperBound_4075_, lean_object* v___x_4076_, lean_object* v_pre_4077_, lean_object* v_post_4078_, uint8_t v_usedLetOnly_4079_, uint8_t v_skipConstInApp_4080_, uint8_t v_skipInstances_4081_, lean_object* v_a_4082_, lean_object* v_b_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_){
_start:
{
lean_object* v___y_4091_; uint8_t v___x_4114_; 
v___x_4114_ = lean_nat_dec_lt(v_a_4082_, v_upperBound_4075_);
if (v___x_4114_ == 0)
{
lean_object* v___x_4115_; 
lean_dec(v_a_4082_);
lean_dec_ref(v_post_4078_);
lean_dec_ref(v_pre_4077_);
v___x_4115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4115_, 0, v_b_4083_);
return v___x_4115_;
}
else
{
lean_object* v___x_4116_; lean_object* v___x_4117_; uint8_t v___x_4118_; 
v___x_4116_ = lean_array_fget_borrowed(v_b_4083_, v_a_4082_);
v___x_4117_ = lean_array_get_size(v___x_4076_);
v___x_4118_ = lean_nat_dec_lt(v_a_4082_, v___x_4117_);
if (v___x_4118_ == 0)
{
lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___f_4122_; 
lean_inc(v___x_4116_);
v___x_4119_ = lean_box(v_usedLetOnly_4079_);
v___x_4120_ = lean_box(v_skipConstInApp_4080_);
v___x_4121_ = lean_box(v_skipInstances_4081_);
lean_inc(v_a_4082_);
lean_inc(v___y_4084_);
lean_inc_ref(v_post_4078_);
lean_inc_ref(v_pre_4077_);
v___f_4122_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_4122_, 0, v_pre_4077_);
lean_closure_set(v___f_4122_, 1, v_post_4078_);
lean_closure_set(v___f_4122_, 2, v___x_4119_);
lean_closure_set(v___f_4122_, 3, v___x_4120_);
lean_closure_set(v___f_4122_, 4, v___x_4121_);
lean_closure_set(v___f_4122_, 5, v___x_4116_);
lean_closure_set(v___f_4122_, 6, v___y_4084_);
lean_closure_set(v___f_4122_, 7, v_b_4083_);
lean_closure_set(v___f_4122_, 8, v_a_4082_);
v___y_4091_ = v___f_4122_;
goto v___jp_4090_;
}
else
{
lean_object* v___x_4123_; uint8_t v_isInstance_4124_; 
v___x_4123_ = lean_array_fget_borrowed(v___x_4076_, v_a_4082_);
v_isInstance_4124_ = lean_ctor_get_uint8(v___x_4123_, sizeof(void*)*1 + 4);
if (v_isInstance_4124_ == 0)
{
lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___f_4128_; 
lean_inc(v___x_4116_);
v___x_4125_ = lean_box(v_usedLetOnly_4079_);
v___x_4126_ = lean_box(v_skipConstInApp_4080_);
v___x_4127_ = lean_box(v_skipInstances_4081_);
lean_inc(v_a_4082_);
lean_inc(v___y_4084_);
lean_inc_ref(v_post_4078_);
lean_inc_ref(v_pre_4077_);
v___f_4128_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_4128_, 0, v_pre_4077_);
lean_closure_set(v___f_4128_, 1, v_post_4078_);
lean_closure_set(v___f_4128_, 2, v___x_4125_);
lean_closure_set(v___f_4128_, 3, v___x_4126_);
lean_closure_set(v___f_4128_, 4, v___x_4127_);
lean_closure_set(v___f_4128_, 5, v___x_4116_);
lean_closure_set(v___f_4128_, 6, v___y_4084_);
lean_closure_set(v___f_4128_, 7, v_b_4083_);
lean_closure_set(v___f_4128_, 8, v_a_4082_);
v___y_4091_ = v___f_4128_;
goto v___jp_4090_;
}
else
{
lean_object* v___x_4129_; lean_object* v___f_4130_; 
v___x_4129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4129_, 0, v_b_4083_);
v___f_4130_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_4130_, 0, v___x_4129_);
v___y_4091_ = v___f_4130_;
goto v___jp_4090_;
}
}
}
v___jp_4090_:
{
lean_object* v___x_4092_; 
lean_inc(v___y_4088_);
lean_inc_ref(v___y_4087_);
lean_inc(v___y_4086_);
lean_inc_ref(v___y_4085_);
v___x_4092_ = lean_apply_5(v___y_4091_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, lean_box(0));
if (lean_obj_tag(v___x_4092_) == 0)
{
lean_object* v_a_4093_; lean_object* v___x_4095_; uint8_t v_isShared_4096_; uint8_t v_isSharedCheck_4105_; 
v_a_4093_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4105_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4105_ == 0)
{
v___x_4095_ = v___x_4092_;
v_isShared_4096_ = v_isSharedCheck_4105_;
goto v_resetjp_4094_;
}
else
{
lean_inc(v_a_4093_);
lean_dec(v___x_4092_);
v___x_4095_ = lean_box(0);
v_isShared_4096_ = v_isSharedCheck_4105_;
goto v_resetjp_4094_;
}
v_resetjp_4094_:
{
if (lean_obj_tag(v_a_4093_) == 0)
{
lean_object* v_a_4097_; lean_object* v___x_4099_; 
lean_dec(v_a_4082_);
lean_dec_ref(v_post_4078_);
lean_dec_ref(v_pre_4077_);
v_a_4097_ = lean_ctor_get(v_a_4093_, 0);
lean_inc(v_a_4097_);
lean_dec_ref(v_a_4093_);
if (v_isShared_4096_ == 0)
{
lean_ctor_set(v___x_4095_, 0, v_a_4097_);
v___x_4099_ = v___x_4095_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v_a_4097_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
else
{
lean_object* v_a_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; 
lean_del_object(v___x_4095_);
v_a_4101_ = lean_ctor_get(v_a_4093_, 0);
lean_inc(v_a_4101_);
lean_dec_ref(v_a_4093_);
v___x_4102_ = lean_unsigned_to_nat(1u);
v___x_4103_ = lean_nat_add(v_a_4082_, v___x_4102_);
lean_dec(v_a_4082_);
v_a_4082_ = v___x_4103_;
v_b_4083_ = v_a_4101_;
goto _start;
}
}
}
else
{
lean_object* v_a_4106_; lean_object* v___x_4108_; uint8_t v_isShared_4109_; uint8_t v_isSharedCheck_4113_; 
lean_dec(v_a_4082_);
lean_dec_ref(v_post_4078_);
lean_dec_ref(v_pre_4077_);
v_a_4106_ = lean_ctor_get(v___x_4092_, 0);
v_isSharedCheck_4113_ = !lean_is_exclusive(v___x_4092_);
if (v_isSharedCheck_4113_ == 0)
{
v___x_4108_ = v___x_4092_;
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
else
{
lean_inc(v_a_4106_);
lean_dec(v___x_4092_);
v___x_4108_ = lean_box(0);
v_isShared_4109_ = v_isSharedCheck_4113_;
goto v_resetjp_4107_;
}
v_resetjp_4107_:
{
lean_object* v___x_4111_; 
if (v_isShared_4109_ == 0)
{
v___x_4111_ = v___x_4108_;
goto v_reusejp_4110_;
}
else
{
lean_object* v_reuseFailAlloc_4112_; 
v_reuseFailAlloc_4112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4112_, 0, v_a_4106_);
v___x_4111_ = v_reuseFailAlloc_4112_;
goto v_reusejp_4110_;
}
v_reusejp_4110_:
{
return v___x_4111_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(uint8_t v_skipInstances_4131_, lean_object* v_pre_4132_, lean_object* v_post_4133_, uint8_t v_usedLetOnly_4134_, uint8_t v_skipConstInApp_4135_, lean_object* v_x_4136_, lean_object* v_x_4137_, lean_object* v_x_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_, lean_object* v___y_4141_, lean_object* v___y_4142_, lean_object* v___y_4143_){
_start:
{
lean_object* v_f_4146_; lean_object* v___y_4147_; lean_object* v___y_4148_; lean_object* v___y_4149_; lean_object* v___y_4150_; lean_object* v___y_4151_; 
if (lean_obj_tag(v_x_4136_) == 5)
{
lean_object* v_fn_4194_; lean_object* v_arg_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; 
v_fn_4194_ = lean_ctor_get(v_x_4136_, 0);
lean_inc_ref(v_fn_4194_);
v_arg_4195_ = lean_ctor_get(v_x_4136_, 1);
lean_inc_ref(v_arg_4195_);
lean_dec_ref(v_x_4136_);
v___x_4196_ = lean_array_set(v_x_4137_, v_x_4138_, v_arg_4195_);
v___x_4197_ = lean_unsigned_to_nat(1u);
v___x_4198_ = lean_nat_sub(v_x_4138_, v___x_4197_);
lean_dec(v_x_4138_);
v_x_4136_ = v_fn_4194_;
v_x_4137_ = v___x_4196_;
v_x_4138_ = v___x_4198_;
goto _start;
}
else
{
lean_dec(v_x_4138_);
if (v_skipConstInApp_4135_ == 0)
{
goto v___jp_4191_;
}
else
{
uint8_t v___x_4200_; 
v___x_4200_ = l_Lean_Expr_isConst(v_x_4136_);
if (v___x_4200_ == 0)
{
goto v___jp_4191_;
}
else
{
v_f_4146_ = v_x_4136_;
v___y_4147_ = v___y_4139_;
v___y_4148_ = v___y_4140_;
v___y_4149_ = v___y_4141_;
v___y_4150_ = v___y_4142_;
v___y_4151_ = v___y_4143_;
goto v___jp_4145_;
}
}
}
v___jp_4145_:
{
if (v_skipInstances_4131_ == 0)
{
size_t v_sz_4152_; size_t v___x_4153_; lean_object* v___x_4154_; 
v_sz_4152_ = lean_array_size(v_x_4137_);
v___x_4153_ = ((size_t)0ULL);
lean_inc_ref(v_post_4133_);
lean_inc_ref(v_pre_4132_);
v___x_4154_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(v_pre_4132_, v_post_4133_, v_usedLetOnly_4134_, v_skipConstInApp_4135_, v_skipInstances_4131_, v_sz_4152_, v___x_4153_, v_x_4137_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
if (lean_obj_tag(v___x_4154_) == 0)
{
lean_object* v_a_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; 
v_a_4155_ = lean_ctor_get(v___x_4154_, 0);
lean_inc(v_a_4155_);
lean_dec_ref(v___x_4154_);
v___x_4156_ = l_Lean_mkAppN(v_f_4146_, v_a_4155_);
lean_dec(v_a_4155_);
v___x_4157_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4132_, v_post_4133_, v_usedLetOnly_4134_, v_skipConstInApp_4135_, v_skipInstances_4131_, v___x_4156_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
return v___x_4157_;
}
else
{
lean_object* v_a_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4165_; 
lean_dec_ref(v_f_4146_);
lean_dec_ref(v_post_4133_);
lean_dec_ref(v_pre_4132_);
v_a_4158_ = lean_ctor_get(v___x_4154_, 0);
v_isSharedCheck_4165_ = !lean_is_exclusive(v___x_4154_);
if (v_isSharedCheck_4165_ == 0)
{
v___x_4160_ = v___x_4154_;
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_a_4158_);
lean_dec(v___x_4154_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4165_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v___x_4163_; 
if (v_isShared_4161_ == 0)
{
v___x_4163_ = v___x_4160_;
goto v_reusejp_4162_;
}
else
{
lean_object* v_reuseFailAlloc_4164_; 
v_reuseFailAlloc_4164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4164_, 0, v_a_4158_);
v___x_4163_ = v_reuseFailAlloc_4164_;
goto v_reusejp_4162_;
}
v_reusejp_4162_:
{
return v___x_4163_;
}
}
}
}
else
{
lean_object* v___x_4166_; lean_object* v___x_4167_; 
v___x_4166_ = lean_array_get_size(v_x_4137_);
lean_inc_ref(v_f_4146_);
v___x_4167_ = l_Lean_Meta_getFunInfoNArgs(v_f_4146_, v___x_4166_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
if (lean_obj_tag(v___x_4167_) == 0)
{
lean_object* v_a_4168_; lean_object* v_paramInfo_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; 
v_a_4168_ = lean_ctor_get(v___x_4167_, 0);
lean_inc(v_a_4168_);
lean_dec_ref(v___x_4167_);
v_paramInfo_4169_ = lean_ctor_get(v_a_4168_, 0);
lean_inc_ref(v_paramInfo_4169_);
lean_dec(v_a_4168_);
v___x_4170_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_4133_);
lean_inc_ref(v_pre_4132_);
v___x_4171_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v___x_4166_, v_paramInfo_4169_, v_pre_4132_, v_post_4133_, v_usedLetOnly_4134_, v_skipConstInApp_4135_, v_skipInstances_4131_, v___x_4170_, v_x_4137_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
lean_dec_ref(v_paramInfo_4169_);
if (lean_obj_tag(v___x_4171_) == 0)
{
lean_object* v_a_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; 
v_a_4172_ = lean_ctor_get(v___x_4171_, 0);
lean_inc(v_a_4172_);
lean_dec_ref(v___x_4171_);
v___x_4173_ = l_Lean_mkAppN(v_f_4146_, v_a_4172_);
lean_dec(v_a_4172_);
v___x_4174_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4132_, v_post_4133_, v_usedLetOnly_4134_, v_skipConstInApp_4135_, v_skipInstances_4131_, v___x_4173_, v___y_4147_, v___y_4148_, v___y_4149_, v___y_4150_, v___y_4151_);
return v___x_4174_;
}
else
{
lean_object* v_a_4175_; lean_object* v___x_4177_; uint8_t v_isShared_4178_; uint8_t v_isSharedCheck_4182_; 
lean_dec_ref(v_f_4146_);
lean_dec_ref(v_post_4133_);
lean_dec_ref(v_pre_4132_);
v_a_4175_ = lean_ctor_get(v___x_4171_, 0);
v_isSharedCheck_4182_ = !lean_is_exclusive(v___x_4171_);
if (v_isSharedCheck_4182_ == 0)
{
v___x_4177_ = v___x_4171_;
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
else
{
lean_inc(v_a_4175_);
lean_dec(v___x_4171_);
v___x_4177_ = lean_box(0);
v_isShared_4178_ = v_isSharedCheck_4182_;
goto v_resetjp_4176_;
}
v_resetjp_4176_:
{
lean_object* v___x_4180_; 
if (v_isShared_4178_ == 0)
{
v___x_4180_ = v___x_4177_;
goto v_reusejp_4179_;
}
else
{
lean_object* v_reuseFailAlloc_4181_; 
v_reuseFailAlloc_4181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4181_, 0, v_a_4175_);
v___x_4180_ = v_reuseFailAlloc_4181_;
goto v_reusejp_4179_;
}
v_reusejp_4179_:
{
return v___x_4180_;
}
}
}
}
else
{
lean_object* v_a_4183_; lean_object* v___x_4185_; uint8_t v_isShared_4186_; uint8_t v_isSharedCheck_4190_; 
lean_dec_ref(v_f_4146_);
lean_dec_ref(v_x_4137_);
lean_dec_ref(v_post_4133_);
lean_dec_ref(v_pre_4132_);
v_a_4183_ = lean_ctor_get(v___x_4167_, 0);
v_isSharedCheck_4190_ = !lean_is_exclusive(v___x_4167_);
if (v_isSharedCheck_4190_ == 0)
{
v___x_4185_ = v___x_4167_;
v_isShared_4186_ = v_isSharedCheck_4190_;
goto v_resetjp_4184_;
}
else
{
lean_inc(v_a_4183_);
lean_dec(v___x_4167_);
v___x_4185_ = lean_box(0);
v_isShared_4186_ = v_isSharedCheck_4190_;
goto v_resetjp_4184_;
}
v_resetjp_4184_:
{
lean_object* v___x_4188_; 
if (v_isShared_4186_ == 0)
{
v___x_4188_ = v___x_4185_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4189_; 
v_reuseFailAlloc_4189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4189_, 0, v_a_4183_);
v___x_4188_ = v_reuseFailAlloc_4189_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
return v___x_4188_;
}
}
}
}
}
v___jp_4191_:
{
lean_object* v___x_4192_; 
lean_inc_ref(v_post_4133_);
lean_inc_ref(v_pre_4132_);
v___x_4192_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4132_, v_post_4133_, v_usedLetOnly_4134_, v_skipConstInApp_4135_, v_skipInstances_4131_, v_x_4136_, v___y_4139_, v___y_4140_, v___y_4141_, v___y_4142_, v___y_4143_);
if (lean_obj_tag(v___x_4192_) == 0)
{
lean_object* v_a_4193_; 
v_a_4193_ = lean_ctor_get(v___x_4192_, 0);
lean_inc(v_a_4193_);
lean_dec_ref(v___x_4192_);
v_f_4146_ = v_a_4193_;
v___y_4147_ = v___y_4139_;
v___y_4148_ = v___y_4140_;
v___y_4149_ = v___y_4141_;
v___y_4150_ = v___y_4142_;
v___y_4151_ = v___y_4143_;
goto v___jp_4145_;
}
else
{
lean_dec_ref(v_x_4137_);
lean_dec_ref(v_post_4133_);
lean_dec_ref(v_pre_4132_);
return v___x_4192_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(lean_object* v___x_4201_, lean_object* v_pre_4202_, lean_object* v_e_4203_, lean_object* v_post_4204_, uint8_t v_usedLetOnly_4205_, uint8_t v_skipConstInApp_4206_, uint8_t v_skipInstances_4207_, lean_object* v___y_4208_, lean_object* v___y_4209_, lean_object* v___y_4210_, lean_object* v___y_4211_, lean_object* v___y_4212_){
_start:
{
lean_object* v___x_4214_; 
v___x_4214_ = l_Lean_Core_checkSystem(v___x_4201_, v___y_4211_, v___y_4212_);
if (lean_obj_tag(v___x_4214_) == 0)
{
lean_object* v___x_4215_; 
lean_dec_ref(v___x_4214_);
lean_inc_ref(v_pre_4202_);
lean_inc(v___y_4212_);
lean_inc_ref(v___y_4211_);
lean_inc(v___y_4210_);
lean_inc_ref(v___y_4209_);
lean_inc_ref(v_e_4203_);
v___x_4215_ = lean_apply_6(v_pre_4202_, v_e_4203_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_, lean_box(0));
if (lean_obj_tag(v___x_4215_) == 0)
{
lean_object* v_a_4216_; lean_object* v___x_4218_; uint8_t v_isShared_4219_; uint8_t v_isSharedCheck_4264_; 
v_a_4216_ = lean_ctor_get(v___x_4215_, 0);
v_isSharedCheck_4264_ = !lean_is_exclusive(v___x_4215_);
if (v_isSharedCheck_4264_ == 0)
{
v___x_4218_ = v___x_4215_;
v_isShared_4219_ = v_isSharedCheck_4264_;
goto v_resetjp_4217_;
}
else
{
lean_inc(v_a_4216_);
lean_dec(v___x_4215_);
v___x_4218_ = lean_box(0);
v_isShared_4219_ = v_isSharedCheck_4264_;
goto v_resetjp_4217_;
}
v_resetjp_4217_:
{
lean_object* v___y_4221_; 
switch(lean_obj_tag(v_a_4216_))
{
case 0:
{
lean_object* v_e_4256_; lean_object* v___x_4258_; 
lean_dec_ref(v_post_4204_);
lean_dec_ref(v_e_4203_);
lean_dec_ref(v_pre_4202_);
v_e_4256_ = lean_ctor_get(v_a_4216_, 0);
lean_inc_ref(v_e_4256_);
lean_dec_ref(v_a_4216_);
if (v_isShared_4219_ == 0)
{
lean_ctor_set(v___x_4218_, 0, v_e_4256_);
v___x_4258_ = v___x_4218_;
goto v_reusejp_4257_;
}
else
{
lean_object* v_reuseFailAlloc_4259_; 
v_reuseFailAlloc_4259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4259_, 0, v_e_4256_);
v___x_4258_ = v_reuseFailAlloc_4259_;
goto v_reusejp_4257_;
}
v_reusejp_4257_:
{
return v___x_4258_;
}
}
case 1:
{
lean_object* v_e_4260_; lean_object* v___x_4261_; 
lean_del_object(v___x_4218_);
lean_dec_ref(v_e_4203_);
v_e_4260_ = lean_ctor_get(v_a_4216_, 0);
lean_inc_ref(v_e_4260_);
lean_dec_ref(v_a_4216_);
v___x_4261_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v_e_4260_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
return v___x_4261_;
}
default: 
{
lean_object* v_e_x3f_4262_; 
lean_del_object(v___x_4218_);
v_e_x3f_4262_ = lean_ctor_get(v_a_4216_, 0);
lean_inc(v_e_x3f_4262_);
lean_dec_ref(v_a_4216_);
if (lean_obj_tag(v_e_x3f_4262_) == 0)
{
v___y_4221_ = v_e_4203_;
goto v___jp_4220_;
}
else
{
lean_object* v_val_4263_; 
lean_dec_ref(v_e_4203_);
v_val_4263_ = lean_ctor_get(v_e_x3f_4262_, 0);
lean_inc(v_val_4263_);
lean_dec_ref(v_e_x3f_4262_);
v___y_4221_ = v_val_4263_;
goto v___jp_4220_;
}
}
}
v___jp_4220_:
{
switch(lean_obj_tag(v___y_4221_))
{
case 7:
{
lean_object* v___x_4222_; lean_object* v___x_4223_; 
v___x_4222_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0);
v___x_4223_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v___x_4222_, v___y_4221_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
return v___x_4223_;
}
case 6:
{
lean_object* v___x_4224_; lean_object* v___x_4225_; 
v___x_4224_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0);
v___x_4225_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v___x_4224_, v___y_4221_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
return v___x_4225_;
}
case 8:
{
lean_object* v___x_4226_; lean_object* v___x_4227_; 
v___x_4226_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___redArg___lam__11___closed__0);
v___x_4227_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v___x_4226_, v___y_4221_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
return v___x_4227_;
}
case 5:
{
lean_object* v_dummy_4228_; lean_object* v_nargs_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; 
v_dummy_4228_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_4229_ = l_Lean_Expr_getAppNumArgs(v___y_4221_);
lean_inc(v_nargs_4229_);
v___x_4230_ = lean_mk_array(v_nargs_4229_, v_dummy_4228_);
v___x_4231_ = lean_unsigned_to_nat(1u);
v___x_4232_ = lean_nat_sub(v_nargs_4229_, v___x_4231_);
lean_dec(v_nargs_4229_);
v___x_4233_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(v_skipInstances_4207_, v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v___y_4221_, v___x_4230_, v___x_4232_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
return v___x_4233_;
}
case 10:
{
lean_object* v_data_4234_; lean_object* v_expr_4235_; lean_object* v___x_4236_; 
v_data_4234_ = lean_ctor_get(v___y_4221_, 0);
v_expr_4235_ = lean_ctor_get(v___y_4221_, 1);
lean_inc_ref(v_expr_4235_);
lean_inc_ref(v_post_4204_);
lean_inc_ref(v_pre_4202_);
v___x_4236_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v_expr_4235_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
if (lean_obj_tag(v___x_4236_) == 0)
{
lean_object* v_a_4237_; size_t v___x_4238_; size_t v___x_4239_; uint8_t v___x_4240_; 
v_a_4237_ = lean_ctor_get(v___x_4236_, 0);
lean_inc(v_a_4237_);
lean_dec_ref(v___x_4236_);
v___x_4238_ = lean_ptr_addr(v_expr_4235_);
v___x_4239_ = lean_ptr_addr(v_a_4237_);
v___x_4240_ = lean_usize_dec_eq(v___x_4238_, v___x_4239_);
if (v___x_4240_ == 0)
{
lean_object* v___x_4241_; lean_object* v___x_4242_; 
lean_inc(v_data_4234_);
lean_dec_ref(v___y_4221_);
v___x_4241_ = l_Lean_Expr_mdata___override(v_data_4234_, v_a_4237_);
v___x_4242_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v___x_4241_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
return v___x_4242_;
}
else
{
lean_object* v___x_4243_; 
lean_dec(v_a_4237_);
v___x_4243_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v___y_4221_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
return v___x_4243_;
}
}
else
{
lean_dec_ref(v___y_4221_);
lean_dec_ref(v_post_4204_);
lean_dec_ref(v_pre_4202_);
return v___x_4236_;
}
}
case 11:
{
lean_object* v_typeName_4244_; lean_object* v_idx_4245_; lean_object* v_struct_4246_; lean_object* v___x_4247_; 
v_typeName_4244_ = lean_ctor_get(v___y_4221_, 0);
v_idx_4245_ = lean_ctor_get(v___y_4221_, 1);
v_struct_4246_ = lean_ctor_get(v___y_4221_, 2);
lean_inc_ref(v_struct_4246_);
lean_inc_ref(v_post_4204_);
lean_inc_ref(v_pre_4202_);
v___x_4247_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v_struct_4246_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
if (lean_obj_tag(v___x_4247_) == 0)
{
lean_object* v_a_4248_; size_t v___x_4249_; size_t v___x_4250_; uint8_t v___x_4251_; 
v_a_4248_ = lean_ctor_get(v___x_4247_, 0);
lean_inc(v_a_4248_);
lean_dec_ref(v___x_4247_);
v___x_4249_ = lean_ptr_addr(v_struct_4246_);
v___x_4250_ = lean_ptr_addr(v_a_4248_);
v___x_4251_ = lean_usize_dec_eq(v___x_4249_, v___x_4250_);
if (v___x_4251_ == 0)
{
lean_object* v___x_4252_; lean_object* v___x_4253_; 
lean_inc(v_idx_4245_);
lean_inc(v_typeName_4244_);
lean_dec_ref(v___y_4221_);
v___x_4252_ = l_Lean_Expr_proj___override(v_typeName_4244_, v_idx_4245_, v_a_4248_);
v___x_4253_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v___x_4252_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
return v___x_4253_;
}
else
{
lean_object* v___x_4254_; 
lean_dec(v_a_4248_);
v___x_4254_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v___y_4221_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
return v___x_4254_;
}
}
else
{
lean_dec_ref(v___y_4221_);
lean_dec_ref(v_post_4204_);
lean_dec_ref(v_pre_4202_);
return v___x_4247_;
}
}
default: 
{
lean_object* v___x_4255_; 
v___x_4255_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4202_, v_post_4204_, v_usedLetOnly_4205_, v_skipConstInApp_4206_, v_skipInstances_4207_, v___y_4221_, v___y_4208_, v___y_4209_, v___y_4210_, v___y_4211_, v___y_4212_);
return v___x_4255_;
}
}
}
}
}
else
{
lean_object* v_a_4265_; lean_object* v___x_4267_; uint8_t v_isShared_4268_; uint8_t v_isSharedCheck_4272_; 
lean_dec_ref(v_post_4204_);
lean_dec_ref(v_e_4203_);
lean_dec_ref(v_pre_4202_);
v_a_4265_ = lean_ctor_get(v___x_4215_, 0);
v_isSharedCheck_4272_ = !lean_is_exclusive(v___x_4215_);
if (v_isSharedCheck_4272_ == 0)
{
v___x_4267_ = v___x_4215_;
v_isShared_4268_ = v_isSharedCheck_4272_;
goto v_resetjp_4266_;
}
else
{
lean_inc(v_a_4265_);
lean_dec(v___x_4215_);
v___x_4267_ = lean_box(0);
v_isShared_4268_ = v_isSharedCheck_4272_;
goto v_resetjp_4266_;
}
v_resetjp_4266_:
{
lean_object* v___x_4270_; 
if (v_isShared_4268_ == 0)
{
v___x_4270_ = v___x_4267_;
goto v_reusejp_4269_;
}
else
{
lean_object* v_reuseFailAlloc_4271_; 
v_reuseFailAlloc_4271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4271_, 0, v_a_4265_);
v___x_4270_ = v_reuseFailAlloc_4271_;
goto v_reusejp_4269_;
}
v_reusejp_4269_:
{
return v___x_4270_;
}
}
}
}
else
{
lean_object* v_a_4273_; lean_object* v___x_4275_; uint8_t v_isShared_4276_; uint8_t v_isSharedCheck_4280_; 
lean_dec_ref(v_post_4204_);
lean_dec_ref(v_e_4203_);
lean_dec_ref(v_pre_4202_);
v_a_4273_ = lean_ctor_get(v___x_4214_, 0);
v_isSharedCheck_4280_ = !lean_is_exclusive(v___x_4214_);
if (v_isSharedCheck_4280_ == 0)
{
v___x_4275_ = v___x_4214_;
v_isShared_4276_ = v_isSharedCheck_4280_;
goto v_resetjp_4274_;
}
else
{
lean_inc(v_a_4273_);
lean_dec(v___x_4214_);
v___x_4275_ = lean_box(0);
v_isShared_4276_ = v_isSharedCheck_4280_;
goto v_resetjp_4274_;
}
v_resetjp_4274_:
{
lean_object* v___x_4278_; 
if (v_isShared_4276_ == 0)
{
v___x_4278_ = v___x_4275_;
goto v_reusejp_4277_;
}
else
{
lean_object* v_reuseFailAlloc_4279_; 
v_reuseFailAlloc_4279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4279_, 0, v_a_4273_);
v___x_4278_ = v_reuseFailAlloc_4279_;
goto v_reusejp_4277_;
}
v_reusejp_4277_:
{
return v___x_4278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed(lean_object* v___x_4281_, lean_object* v_pre_4282_, lean_object* v_e_4283_, lean_object* v_post_4284_, lean_object* v_usedLetOnly_4285_, lean_object* v_skipConstInApp_4286_, lean_object* v_skipInstances_4287_, lean_object* v___y_4288_, lean_object* v___y_4289_, lean_object* v___y_4290_, lean_object* v___y_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_){
_start:
{
uint8_t v_usedLetOnly_boxed_4294_; uint8_t v_skipConstInApp_boxed_4295_; uint8_t v_skipInstances_boxed_4296_; lean_object* v_res_4297_; 
v_usedLetOnly_boxed_4294_ = lean_unbox(v_usedLetOnly_4285_);
v_skipConstInApp_boxed_4295_ = lean_unbox(v_skipConstInApp_4286_);
v_skipInstances_boxed_4296_ = lean_unbox(v_skipInstances_4287_);
v_res_4297_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1(v___x_4281_, v_pre_4282_, v_e_4283_, v_post_4284_, v_usedLetOnly_boxed_4294_, v_skipConstInApp_boxed_4295_, v_skipInstances_boxed_4296_, v___y_4288_, v___y_4289_, v___y_4290_, v___y_4291_, v___y_4292_);
lean_dec(v___y_4292_);
lean_dec_ref(v___y_4291_);
lean_dec(v___y_4290_);
lean_dec_ref(v___y_4289_);
lean_dec(v___y_4288_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(lean_object* v_pre_4298_, lean_object* v_post_4299_, uint8_t v_usedLetOnly_4300_, uint8_t v_skipConstInApp_4301_, uint8_t v_skipInstances_4302_, lean_object* v_e_4303_, lean_object* v_a_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_){
_start:
{
lean_object* v___x_4310_; lean_object* v___x_4311_; 
lean_inc(v_a_4304_);
v___x_4310_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4310_, 0, lean_box(0));
lean_closure_set(v___x_4310_, 1, lean_box(0));
lean_closure_set(v___x_4310_, 2, v_a_4304_);
v___x_4311_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_box(0), v___x_4310_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_);
if (lean_obj_tag(v___x_4311_) == 0)
{
lean_object* v_a_4312_; lean_object* v___x_4314_; uint8_t v_isShared_4315_; uint8_t v_isSharedCheck_4346_; 
v_a_4312_ = lean_ctor_get(v___x_4311_, 0);
v_isSharedCheck_4346_ = !lean_is_exclusive(v___x_4311_);
if (v_isSharedCheck_4346_ == 0)
{
v___x_4314_ = v___x_4311_;
v_isShared_4315_ = v_isSharedCheck_4346_;
goto v_resetjp_4313_;
}
else
{
lean_inc(v_a_4312_);
lean_dec(v___x_4311_);
v___x_4314_ = lean_box(0);
v_isShared_4315_ = v_isSharedCheck_4346_;
goto v_resetjp_4313_;
}
v_resetjp_4313_:
{
lean_object* v___x_4316_; 
v___x_4316_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0_spec__3___redArg(v_a_4312_, v_e_4303_);
lean_dec(v_a_4312_);
if (lean_obj_tag(v___x_4316_) == 0)
{
lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; lean_object* v___x_4320_; lean_object* v___f_4321_; lean_object* v___x_4322_; 
lean_del_object(v___x_4314_);
v___x_4317_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__19___closed__0);
v___x_4318_ = lean_box(v_usedLetOnly_4300_);
v___x_4319_ = lean_box(v_skipConstInApp_4301_);
v___x_4320_ = lean_box(v_skipInstances_4302_);
lean_inc_ref(v_e_4303_);
v___f_4321_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__1___boxed), 13, 7);
lean_closure_set(v___f_4321_, 0, v___x_4317_);
lean_closure_set(v___f_4321_, 1, v_pre_4298_);
lean_closure_set(v___f_4321_, 2, v_e_4303_);
lean_closure_set(v___f_4321_, 3, v_post_4299_);
lean_closure_set(v___f_4321_, 4, v___x_4318_);
lean_closure_set(v___f_4321_, 5, v___x_4319_);
lean_closure_set(v___f_4321_, 6, v___x_4320_);
v___x_4322_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v___f_4321_, v_a_4304_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_);
if (lean_obj_tag(v___x_4322_) == 0)
{
lean_object* v_a_4323_; lean_object* v___f_4324_; lean_object* v___x_4325_; 
v_a_4323_ = lean_ctor_get(v___x_4322_, 0);
lean_inc_n(v_a_4323_, 2);
lean_dec_ref(v___x_4322_);
lean_inc(v_a_4304_);
v___f_4324_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_4324_, 0, v_a_4304_);
lean_closure_set(v___f_4324_, 1, v_e_4303_);
lean_closure_set(v___f_4324_, 2, v_a_4323_);
v___x_4325_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___lam__0(lean_box(0), v___f_4324_, v___y_4305_, v___y_4306_, v___y_4307_, v___y_4308_);
if (lean_obj_tag(v___x_4325_) == 0)
{
lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4332_; 
v_isSharedCheck_4332_ = !lean_is_exclusive(v___x_4325_);
if (v_isSharedCheck_4332_ == 0)
{
lean_object* v_unused_4333_; 
v_unused_4333_ = lean_ctor_get(v___x_4325_, 0);
lean_dec(v_unused_4333_);
v___x_4327_ = v___x_4325_;
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
else
{
lean_dec(v___x_4325_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4330_; 
if (v_isShared_4328_ == 0)
{
lean_ctor_set(v___x_4327_, 0, v_a_4323_);
v___x_4330_ = v___x_4327_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4331_; 
v_reuseFailAlloc_4331_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4331_, 0, v_a_4323_);
v___x_4330_ = v_reuseFailAlloc_4331_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
return v___x_4330_;
}
}
}
else
{
lean_object* v_a_4334_; lean_object* v___x_4336_; uint8_t v_isShared_4337_; uint8_t v_isSharedCheck_4341_; 
lean_dec(v_a_4323_);
v_a_4334_ = lean_ctor_get(v___x_4325_, 0);
v_isSharedCheck_4341_ = !lean_is_exclusive(v___x_4325_);
if (v_isSharedCheck_4341_ == 0)
{
v___x_4336_ = v___x_4325_;
v_isShared_4337_ = v_isSharedCheck_4341_;
goto v_resetjp_4335_;
}
else
{
lean_inc(v_a_4334_);
lean_dec(v___x_4325_);
v___x_4336_ = lean_box(0);
v_isShared_4337_ = v_isSharedCheck_4341_;
goto v_resetjp_4335_;
}
v_resetjp_4335_:
{
lean_object* v___x_4339_; 
if (v_isShared_4337_ == 0)
{
v___x_4339_ = v___x_4336_;
goto v_reusejp_4338_;
}
else
{
lean_object* v_reuseFailAlloc_4340_; 
v_reuseFailAlloc_4340_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4340_, 0, v_a_4334_);
v___x_4339_ = v_reuseFailAlloc_4340_;
goto v_reusejp_4338_;
}
v_reusejp_4338_:
{
return v___x_4339_;
}
}
}
}
else
{
lean_dec_ref(v_e_4303_);
return v___x_4322_;
}
}
else
{
lean_object* v_val_4342_; lean_object* v___x_4344_; 
lean_dec_ref(v_e_4303_);
lean_dec_ref(v_post_4299_);
lean_dec_ref(v_pre_4298_);
v_val_4342_ = lean_ctor_get(v___x_4316_, 0);
lean_inc(v_val_4342_);
lean_dec_ref(v___x_4316_);
if (v_isShared_4315_ == 0)
{
lean_ctor_set(v___x_4314_, 0, v_val_4342_);
v___x_4344_ = v___x_4314_;
goto v_reusejp_4343_;
}
else
{
lean_object* v_reuseFailAlloc_4345_; 
v_reuseFailAlloc_4345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4345_, 0, v_val_4342_);
v___x_4344_ = v_reuseFailAlloc_4345_;
goto v_reusejp_4343_;
}
v_reusejp_4343_:
{
return v___x_4344_;
}
}
}
}
else
{
lean_object* v_a_4347_; lean_object* v___x_4349_; uint8_t v_isShared_4350_; uint8_t v_isSharedCheck_4354_; 
lean_dec_ref(v_e_4303_);
lean_dec_ref(v_post_4299_);
lean_dec_ref(v_pre_4298_);
v_a_4347_ = lean_ctor_get(v___x_4311_, 0);
v_isSharedCheck_4354_ = !lean_is_exclusive(v___x_4311_);
if (v_isSharedCheck_4354_ == 0)
{
v___x_4349_ = v___x_4311_;
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
else
{
lean_inc(v_a_4347_);
lean_dec(v___x_4311_);
v___x_4349_ = lean_box(0);
v_isShared_4350_ = v_isSharedCheck_4354_;
goto v_resetjp_4348_;
}
v_resetjp_4348_:
{
lean_object* v___x_4352_; 
if (v_isShared_4350_ == 0)
{
v___x_4352_ = v___x_4349_;
goto v_reusejp_4351_;
}
else
{
lean_object* v_reuseFailAlloc_4353_; 
v_reuseFailAlloc_4353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4353_, 0, v_a_4347_);
v___x_4352_ = v_reuseFailAlloc_4353_;
goto v_reusejp_4351_;
}
v_reusejp_4351_:
{
return v___x_4352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed(lean_object* v_fvars_4355_, lean_object* v_pre_4356_, lean_object* v_post_4357_, lean_object* v_usedLetOnly_4358_, lean_object* v_skipConstInApp_4359_, lean_object* v_skipInstances_4360_, lean_object* v_body_4361_, lean_object* v_x_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_, lean_object* v___y_4367_, lean_object* v___y_4368_){
_start:
{
uint8_t v_usedLetOnly_boxed_4369_; uint8_t v_skipConstInApp_boxed_4370_; uint8_t v_skipInstances_boxed_4371_; lean_object* v_res_4372_; 
v_usedLetOnly_boxed_4369_ = lean_unbox(v_usedLetOnly_4358_);
v_skipConstInApp_boxed_4370_ = lean_unbox(v_skipConstInApp_4359_);
v_skipInstances_boxed_4371_ = lean_unbox(v_skipInstances_4360_);
v_res_4372_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(v_fvars_4355_, v_pre_4356_, v_post_4357_, v_usedLetOnly_boxed_4369_, v_skipConstInApp_boxed_4370_, v_skipInstances_boxed_4371_, v_body_4361_, v_x_4362_, v___y_4363_, v___y_4364_, v___y_4365_, v___y_4366_, v___y_4367_);
lean_dec(v___y_4367_);
lean_dec_ref(v___y_4366_);
lean_dec(v___y_4365_);
lean_dec_ref(v___y_4364_);
lean_dec(v___y_4363_);
return v_res_4372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(lean_object* v_pre_4373_, lean_object* v_post_4374_, uint8_t v_usedLetOnly_4375_, uint8_t v_skipConstInApp_4376_, uint8_t v_skipInstances_4377_, lean_object* v_fvars_4378_, lean_object* v_e_4379_, lean_object* v_a_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_){
_start:
{
if (lean_obj_tag(v_e_4379_) == 7)
{
lean_object* v_binderName_4386_; lean_object* v_binderType_4387_; lean_object* v_body_4388_; uint8_t v_binderInfo_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; 
v_binderName_4386_ = lean_ctor_get(v_e_4379_, 0);
lean_inc(v_binderName_4386_);
v_binderType_4387_ = lean_ctor_get(v_e_4379_, 1);
lean_inc_ref(v_binderType_4387_);
v_body_4388_ = lean_ctor_get(v_e_4379_, 2);
lean_inc_ref(v_body_4388_);
v_binderInfo_4389_ = lean_ctor_get_uint8(v_e_4379_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_4379_);
v___x_4390_ = lean_expr_instantiate_rev(v_binderType_4387_, v_fvars_4378_);
lean_dec_ref(v_binderType_4387_);
lean_inc_ref(v_post_4374_);
lean_inc_ref(v_pre_4373_);
v___x_4391_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4373_, v_post_4374_, v_usedLetOnly_4375_, v_skipConstInApp_4376_, v_skipInstances_4377_, v___x_4390_, v_a_4380_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v_a_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___f_4396_; uint8_t v___x_4397_; lean_object* v___x_4398_; 
v_a_4392_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_a_4392_);
lean_dec_ref(v___x_4391_);
v___x_4393_ = lean_box(v_usedLetOnly_4375_);
v___x_4394_ = lean_box(v_skipConstInApp_4376_);
v___x_4395_ = lean_box(v_skipInstances_4377_);
v___f_4396_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0___boxed), 14, 7);
lean_closure_set(v___f_4396_, 0, v_fvars_4378_);
lean_closure_set(v___f_4396_, 1, v_pre_4373_);
lean_closure_set(v___f_4396_, 2, v_post_4374_);
lean_closure_set(v___f_4396_, 3, v___x_4393_);
lean_closure_set(v___f_4396_, 4, v___x_4394_);
lean_closure_set(v___f_4396_, 5, v___x_4395_);
lean_closure_set(v___f_4396_, 6, v_body_4388_);
v___x_4397_ = 0;
v___x_4398_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_binderName_4386_, v_binderInfo_4389_, v_a_4392_, v___f_4396_, v___x_4397_, v_a_4380_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
return v___x_4398_;
}
else
{
lean_dec_ref(v_body_4388_);
lean_dec(v_binderName_4386_);
lean_dec_ref(v_fvars_4378_);
lean_dec_ref(v_post_4374_);
lean_dec_ref(v_pre_4373_);
return v___x_4391_;
}
}
else
{
lean_object* v___x_4399_; lean_object* v___x_4400_; 
v___x_4399_ = lean_expr_instantiate_rev(v_e_4379_, v_fvars_4378_);
lean_dec_ref(v_e_4379_);
lean_inc_ref(v_post_4374_);
lean_inc_ref(v_pre_4373_);
v___x_4400_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4373_, v_post_4374_, v_usedLetOnly_4375_, v_skipConstInApp_4376_, v_skipInstances_4377_, v___x_4399_, v_a_4380_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
if (lean_obj_tag(v___x_4400_) == 0)
{
lean_object* v_a_4401_; uint8_t v___x_4402_; uint8_t v___x_4403_; uint8_t v___x_4404_; lean_object* v___x_4405_; 
v_a_4401_ = lean_ctor_get(v___x_4400_, 0);
lean_inc(v_a_4401_);
lean_dec_ref(v___x_4400_);
v___x_4402_ = 0;
v___x_4403_ = 1;
v___x_4404_ = 1;
v___x_4405_ = l_Lean_Meta_mkForallFVars(v_fvars_4378_, v_a_4401_, v___x_4402_, v_usedLetOnly_4375_, v___x_4403_, v___x_4404_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
lean_dec_ref(v_fvars_4378_);
if (lean_obj_tag(v___x_4405_) == 0)
{
lean_object* v_a_4406_; lean_object* v___x_4407_; 
v_a_4406_ = lean_ctor_get(v___x_4405_, 0);
lean_inc(v_a_4406_);
lean_dec_ref(v___x_4405_);
v___x_4407_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4373_, v_post_4374_, v_usedLetOnly_4375_, v_skipConstInApp_4376_, v_skipInstances_4377_, v_a_4406_, v_a_4380_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_);
return v___x_4407_;
}
else
{
lean_dec_ref(v_post_4374_);
lean_dec_ref(v_pre_4373_);
return v___x_4405_;
}
}
else
{
lean_dec_ref(v_fvars_4378_);
lean_dec_ref(v_post_4374_);
lean_dec_ref(v_pre_4373_);
return v___x_4400_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___lam__0(lean_object* v_fvars_4408_, lean_object* v_pre_4409_, lean_object* v_post_4410_, uint8_t v_usedLetOnly_4411_, uint8_t v_skipConstInApp_4412_, uint8_t v_skipInstances_4413_, lean_object* v_body_4414_, lean_object* v_x_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_){
_start:
{
lean_object* v___x_4422_; lean_object* v___x_4423_; 
v___x_4422_ = lean_array_push(v_fvars_4408_, v_x_4415_);
v___x_4423_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4409_, v_post_4410_, v_usedLetOnly_4411_, v_skipConstInApp_4412_, v_skipInstances_4413_, v___x_4422_, v_body_4414_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_, v___y_4420_);
return v___x_4423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3___boxed(lean_object* v_pre_4424_, lean_object* v_post_4425_, lean_object* v_usedLetOnly_4426_, lean_object* v_skipConstInApp_4427_, lean_object* v_skipInstances_4428_, lean_object* v_e_4429_, lean_object* v_a_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_){
_start:
{
uint8_t v_usedLetOnly_boxed_4436_; uint8_t v_skipConstInApp_boxed_4437_; uint8_t v_skipInstances_boxed_4438_; lean_object* v_res_4439_; 
v_usedLetOnly_boxed_4436_ = lean_unbox(v_usedLetOnly_4426_);
v_skipConstInApp_boxed_4437_ = lean_unbox(v_skipConstInApp_4427_);
v_skipInstances_boxed_4438_ = lean_unbox(v_skipInstances_4428_);
v_res_4439_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__3(v_pre_4424_, v_post_4425_, v_usedLetOnly_boxed_4436_, v_skipConstInApp_boxed_4437_, v_skipInstances_boxed_4438_, v_e_4429_, v_a_4430_, v___y_4431_, v___y_4432_, v___y_4433_, v___y_4434_);
lean_dec(v___y_4434_);
lean_dec_ref(v___y_4433_);
lean_dec(v___y_4432_);
lean_dec_ref(v___y_4431_);
lean_dec(v_a_4430_);
return v_res_4439_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2___boxed(lean_object* v_pre_4440_, lean_object* v_post_4441_, lean_object* v_usedLetOnly_4442_, lean_object* v_skipConstInApp_4443_, lean_object* v_skipInstances_4444_, lean_object* v_sz_4445_, lean_object* v_i_4446_, lean_object* v_bs_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_){
_start:
{
uint8_t v_usedLetOnly_boxed_4454_; uint8_t v_skipConstInApp_boxed_4455_; uint8_t v_skipInstances_boxed_4456_; size_t v_sz_boxed_4457_; size_t v_i_boxed_4458_; lean_object* v_res_4459_; 
v_usedLetOnly_boxed_4454_ = lean_unbox(v_usedLetOnly_4442_);
v_skipConstInApp_boxed_4455_ = lean_unbox(v_skipConstInApp_4443_);
v_skipInstances_boxed_4456_ = lean_unbox(v_skipInstances_4444_);
v_sz_boxed_4457_ = lean_unbox_usize(v_sz_4445_);
lean_dec(v_sz_4445_);
v_i_boxed_4458_ = lean_unbox_usize(v_i_4446_);
lean_dec(v_i_4446_);
v_res_4459_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__2(v_pre_4440_, v_post_4441_, v_usedLetOnly_boxed_4454_, v_skipConstInApp_boxed_4455_, v_skipInstances_boxed_4456_, v_sz_boxed_4457_, v_i_boxed_4458_, v_bs_4447_, v___y_4448_, v___y_4449_, v___y_4450_, v___y_4451_, v___y_4452_);
lean_dec(v___y_4452_);
lean_dec_ref(v___y_4451_);
lean_dec(v___y_4450_);
lean_dec_ref(v___y_4449_);
lean_dec(v___y_4448_);
return v_res_4459_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1___boxed(lean_object* v_pre_4460_, lean_object* v_post_4461_, lean_object* v_usedLetOnly_4462_, lean_object* v_skipConstInApp_4463_, lean_object* v_skipInstances_4464_, lean_object* v_e_4465_, lean_object* v_a_4466_, lean_object* v___y_4467_, lean_object* v___y_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_){
_start:
{
uint8_t v_usedLetOnly_boxed_4472_; uint8_t v_skipConstInApp_boxed_4473_; uint8_t v_skipInstances_boxed_4474_; lean_object* v_res_4475_; 
v_usedLetOnly_boxed_4472_ = lean_unbox(v_usedLetOnly_4462_);
v_skipConstInApp_boxed_4473_ = lean_unbox(v_skipConstInApp_4463_);
v_skipInstances_boxed_4474_ = lean_unbox(v_skipInstances_4464_);
v_res_4475_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4460_, v_post_4461_, v_usedLetOnly_boxed_4472_, v_skipConstInApp_boxed_4473_, v_skipInstances_boxed_4474_, v_e_4465_, v_a_4466_, v___y_4467_, v___y_4468_, v___y_4469_, v___y_4470_);
lean_dec(v___y_4470_);
lean_dec_ref(v___y_4469_);
lean_dec(v___y_4468_);
lean_dec_ref(v___y_4467_);
lean_dec(v_a_4466_);
return v_res_4475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5___boxed(lean_object* v_pre_4476_, lean_object* v_post_4477_, lean_object* v_usedLetOnly_4478_, lean_object* v_skipConstInApp_4479_, lean_object* v_skipInstances_4480_, lean_object* v_fvars_4481_, lean_object* v_e_4482_, lean_object* v_a_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_){
_start:
{
uint8_t v_usedLetOnly_boxed_4489_; uint8_t v_skipConstInApp_boxed_4490_; uint8_t v_skipInstances_boxed_4491_; lean_object* v_res_4492_; 
v_usedLetOnly_boxed_4489_ = lean_unbox(v_usedLetOnly_4478_);
v_skipConstInApp_boxed_4490_ = lean_unbox(v_skipConstInApp_4479_);
v_skipInstances_boxed_4491_ = lean_unbox(v_skipInstances_4480_);
v_res_4492_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5(v_pre_4476_, v_post_4477_, v_usedLetOnly_boxed_4489_, v_skipConstInApp_boxed_4490_, v_skipInstances_boxed_4491_, v_fvars_4481_, v_e_4482_, v_a_4483_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_);
lean_dec(v___y_4487_);
lean_dec_ref(v___y_4486_);
lean_dec(v___y_4485_);
lean_dec_ref(v___y_4484_);
lean_dec(v_a_4483_);
return v_res_4492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6___boxed(lean_object* v_pre_4493_, lean_object* v_post_4494_, lean_object* v_usedLetOnly_4495_, lean_object* v_skipConstInApp_4496_, lean_object* v_skipInstances_4497_, lean_object* v_fvars_4498_, lean_object* v_e_4499_, lean_object* v_a_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_, lean_object* v___y_4505_){
_start:
{
uint8_t v_usedLetOnly_boxed_4506_; uint8_t v_skipConstInApp_boxed_4507_; uint8_t v_skipInstances_boxed_4508_; lean_object* v_res_4509_; 
v_usedLetOnly_boxed_4506_ = lean_unbox(v_usedLetOnly_4495_);
v_skipConstInApp_boxed_4507_ = lean_unbox(v_skipConstInApp_4496_);
v_skipInstances_boxed_4508_ = lean_unbox(v_skipInstances_4497_);
v_res_4509_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__6(v_pre_4493_, v_post_4494_, v_usedLetOnly_boxed_4506_, v_skipConstInApp_boxed_4507_, v_skipInstances_boxed_4508_, v_fvars_4498_, v_e_4499_, v_a_4500_, v___y_4501_, v___y_4502_, v___y_4503_, v___y_4504_);
lean_dec(v___y_4504_);
lean_dec_ref(v___y_4503_);
lean_dec(v___y_4502_);
lean_dec_ref(v___y_4501_);
lean_dec(v_a_4500_);
return v_res_4509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7___boxed(lean_object* v_pre_4510_, lean_object* v_post_4511_, lean_object* v_usedLetOnly_4512_, lean_object* v_skipConstInApp_4513_, lean_object* v_skipInstances_4514_, lean_object* v_fvars_4515_, lean_object* v_e_4516_, lean_object* v_a_4517_, lean_object* v___y_4518_, lean_object* v___y_4519_, lean_object* v___y_4520_, lean_object* v___y_4521_, lean_object* v___y_4522_){
_start:
{
uint8_t v_usedLetOnly_boxed_4523_; uint8_t v_skipConstInApp_boxed_4524_; uint8_t v_skipInstances_boxed_4525_; lean_object* v_res_4526_; 
v_usedLetOnly_boxed_4523_ = lean_unbox(v_usedLetOnly_4512_);
v_skipConstInApp_boxed_4524_ = lean_unbox(v_skipConstInApp_4513_);
v_skipInstances_boxed_4525_ = lean_unbox(v_skipInstances_4514_);
v_res_4526_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7(v_pre_4510_, v_post_4511_, v_usedLetOnly_boxed_4523_, v_skipConstInApp_boxed_4524_, v_skipInstances_boxed_4525_, v_fvars_4515_, v_e_4516_, v_a_4517_, v___y_4518_, v___y_4519_, v___y_4520_, v___y_4521_);
lean_dec(v___y_4521_);
lean_dec_ref(v___y_4520_);
lean_dec(v___y_4519_);
lean_dec_ref(v___y_4518_);
lean_dec(v_a_4517_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg___boxed(lean_object* v_upperBound_4527_, lean_object* v___x_4528_, lean_object* v_pre_4529_, lean_object* v_post_4530_, lean_object* v_usedLetOnly_4531_, lean_object* v_skipConstInApp_4532_, lean_object* v_skipInstances_4533_, lean_object* v_a_4534_, lean_object* v_b_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_){
_start:
{
uint8_t v_usedLetOnly_boxed_4542_; uint8_t v_skipConstInApp_boxed_4543_; uint8_t v_skipInstances_boxed_4544_; lean_object* v_res_4545_; 
v_usedLetOnly_boxed_4542_ = lean_unbox(v_usedLetOnly_4531_);
v_skipConstInApp_boxed_4543_ = lean_unbox(v_skipConstInApp_4532_);
v_skipInstances_boxed_4544_ = lean_unbox(v_skipInstances_4533_);
v_res_4545_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_4527_, v___x_4528_, v_pre_4529_, v_post_4530_, v_usedLetOnly_boxed_4542_, v_skipConstInApp_boxed_4543_, v_skipInstances_boxed_4544_, v_a_4534_, v_b_4535_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_);
lean_dec(v___y_4540_);
lean_dec_ref(v___y_4539_);
lean_dec(v___y_4538_);
lean_dec_ref(v___y_4537_);
lean_dec(v___y_4536_);
lean_dec_ref(v___x_4528_);
lean_dec(v_upperBound_4527_);
return v_res_4545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8___boxed(lean_object* v_skipInstances_4546_, lean_object* v_pre_4547_, lean_object* v_post_4548_, lean_object* v_usedLetOnly_4549_, lean_object* v_skipConstInApp_4550_, lean_object* v_x_4551_, lean_object* v_x_4552_, lean_object* v_x_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_){
_start:
{
uint8_t v_skipInstances_boxed_4560_; uint8_t v_usedLetOnly_boxed_4561_; uint8_t v_skipConstInApp_boxed_4562_; lean_object* v_res_4563_; 
v_skipInstances_boxed_4560_ = lean_unbox(v_skipInstances_4546_);
v_usedLetOnly_boxed_4561_ = lean_unbox(v_usedLetOnly_4549_);
v_skipConstInApp_boxed_4562_ = lean_unbox(v_skipConstInApp_4550_);
v_res_4563_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__8(v_skipInstances_boxed_4560_, v_pre_4547_, v_post_4548_, v_usedLetOnly_boxed_4561_, v_skipConstInApp_boxed_4562_, v_x_4551_, v_x_4552_, v_x_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_);
lean_dec(v___y_4558_);
lean_dec_ref(v___y_4557_);
lean_dec(v___y_4556_);
lean_dec_ref(v___y_4555_);
lean_dec(v___y_4554_);
return v_res_4563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_object* v_00_u03b1_4564_, lean_object* v_x_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_){
_start:
{
lean_object* v___x_4571_; lean_object* v___x_4572_; lean_object* v___x_4573_; 
v___x_4571_ = lean_st_ref_get(v___y_4569_);
lean_dec(v___x_4571_);
v___x_4572_ = lean_apply_1(v_x_4565_, lean_box(0));
v___x_4573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4573_, 0, v___x_4572_);
return v___x_4573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0___boxed(lean_object* v_00_u03b1_4574_, lean_object* v_x_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_, lean_object* v___y_4578_, lean_object* v___y_4579_, lean_object* v___y_4580_){
_start:
{
lean_object* v_res_4581_; 
v_res_4581_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(v_00_u03b1_4574_, v_x_4575_, v___y_4576_, v___y_4577_, v___y_4578_, v___y_4579_);
lean_dec(v___y_4579_);
lean_dec_ref(v___y_4578_);
lean_dec(v___y_4577_);
lean_dec_ref(v___y_4576_);
return v_res_4581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(lean_object* v_input_4582_, lean_object* v_pre_4583_, lean_object* v_post_4584_, uint8_t v_usedLetOnly_4585_, uint8_t v_skipConstInApp_4586_, lean_object* v___y_4587_, lean_object* v___y_4588_, lean_object* v___y_4589_, lean_object* v___y_4590_){
_start:
{
lean_object* v___x_4592_; lean_object* v___x_4593_; lean_object* v_a_4594_; uint8_t v___x_4595_; lean_object* v___x_4596_; 
v___x_4592_ = lean_obj_once(&l_Lean_Core_transform___redArg___closed__2, &l_Lean_Core_transform___redArg___closed__2_once, _init_l_Lean_Core_transform___redArg___closed__2);
v___x_4593_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_box(0), v___x_4592_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_);
v_a_4594_ = lean_ctor_get(v___x_4593_, 0);
lean_inc(v_a_4594_);
lean_dec_ref(v___x_4593_);
v___x_4595_ = 0;
v___x_4596_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1(v_pre_4583_, v_post_4584_, v_usedLetOnly_4585_, v_skipConstInApp_4586_, v___x_4595_, v_input_4582_, v_a_4594_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_);
if (lean_obj_tag(v___x_4596_) == 0)
{
lean_object* v_a_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4601_; uint8_t v_isShared_4602_; uint8_t v_isSharedCheck_4606_; 
v_a_4597_ = lean_ctor_get(v___x_4596_, 0);
lean_inc(v_a_4597_);
lean_dec_ref(v___x_4596_);
v___x_4598_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_4598_, 0, lean_box(0));
lean_closure_set(v___x_4598_, 1, lean_box(0));
lean_closure_set(v___x_4598_, 2, v_a_4594_);
v___x_4599_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___lam__0(lean_box(0), v___x_4598_, v___y_4587_, v___y_4588_, v___y_4589_, v___y_4590_);
v_isSharedCheck_4606_ = !lean_is_exclusive(v___x_4599_);
if (v_isSharedCheck_4606_ == 0)
{
lean_object* v_unused_4607_; 
v_unused_4607_ = lean_ctor_get(v___x_4599_, 0);
lean_dec(v_unused_4607_);
v___x_4601_ = v___x_4599_;
v_isShared_4602_ = v_isSharedCheck_4606_;
goto v_resetjp_4600_;
}
else
{
lean_dec(v___x_4599_);
v___x_4601_ = lean_box(0);
v_isShared_4602_ = v_isSharedCheck_4606_;
goto v_resetjp_4600_;
}
v_resetjp_4600_:
{
lean_object* v___x_4604_; 
if (v_isShared_4602_ == 0)
{
lean_ctor_set(v___x_4601_, 0, v_a_4597_);
v___x_4604_ = v___x_4601_;
goto v_reusejp_4603_;
}
else
{
lean_object* v_reuseFailAlloc_4605_; 
v_reuseFailAlloc_4605_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4605_, 0, v_a_4597_);
v___x_4604_ = v_reuseFailAlloc_4605_;
goto v_reusejp_4603_;
}
v_reusejp_4603_:
{
return v___x_4604_;
}
}
}
else
{
lean_dec(v_a_4594_);
return v___x_4596_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1___boxed(lean_object* v_input_4608_, lean_object* v_pre_4609_, lean_object* v_post_4610_, lean_object* v_usedLetOnly_4611_, lean_object* v_skipConstInApp_4612_, lean_object* v___y_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_){
_start:
{
uint8_t v_usedLetOnly_boxed_4618_; uint8_t v_skipConstInApp_boxed_4619_; lean_object* v_res_4620_; 
v_usedLetOnly_boxed_4618_ = lean_unbox(v_usedLetOnly_4611_);
v_skipConstInApp_boxed_4619_ = lean_unbox(v_skipConstInApp_4612_);
v_res_4620_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_input_4608_, v_pre_4609_, v_post_4610_, v_usedLetOnly_boxed_4618_, v_skipConstInApp_boxed_4619_, v___y_4613_, v___y_4614_, v___y_4615_, v___y_4616_);
lean_dec(v___y_4616_);
lean_dec_ref(v___y_4615_);
lean_dec(v___y_4614_);
lean_dec_ref(v___y_4613_);
return v_res_4620_;
}
}
static lean_object* _init_l_Lean_Meta_zetaReduce___closed__0(void){
_start:
{
lean_object* v___f_4621_; 
v___f_4621_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__1___boxed), 6, 0);
return v___f_4621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce(lean_object* v_e_4622_, uint8_t v_zetaDelta_4623_, uint8_t v_zetaHave_4624_, uint8_t v_beta_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_, lean_object* v_a_4629_){
_start:
{
lean_object* v_lctx_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___f_4635_; uint8_t v___x_4636_; 
v_lctx_4631_ = lean_ctor_get(v_a_4626_, 2);
lean_inc_ref(v_lctx_4631_);
v___x_4632_ = lean_local_ctx_num_indices(v_lctx_4631_);
v___x_4633_ = lean_box(v_zetaHave_4624_);
v___x_4634_ = lean_box(v_zetaDelta_4623_);
v___f_4635_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__0___boxed), 9, 3);
lean_closure_set(v___f_4635_, 0, v___x_4633_);
lean_closure_set(v___f_4635_, 1, v___x_4632_);
lean_closure_set(v___f_4635_, 2, v___x_4634_);
v___x_4636_ = 1;
if (v_beta_4625_ == 0)
{
lean_object* v___f_4637_; lean_object* v___f_4638_; lean_object* v___x_4639_; 
v___f_4637_ = lean_obj_once(&l_Lean_Meta_zetaReduce___closed__0, &l_Lean_Meta_zetaReduce___closed__0_once, _init_l_Lean_Meta_zetaReduce___closed__0);
v___f_4638_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__2___boxed), 7, 1);
lean_closure_set(v___f_4638_, 0, v___f_4635_);
v___x_4639_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4622_, v___f_4638_, v___f_4637_, v___x_4636_, v_beta_4625_, v_a_4626_, v_a_4627_, v_a_4628_, v_a_4629_);
return v___x_4639_;
}
else
{
lean_object* v___f_4640_; lean_object* v___f_4641_; uint8_t v___x_4642_; lean_object* v___x_4643_; 
v___f_4640_ = lean_obj_once(&l_Lean_Meta_zetaReduce___closed__0, &l_Lean_Meta_zetaReduce___closed__0_once, _init_l_Lean_Meta_zetaReduce___closed__0);
v___f_4641_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___lam__4___boxed), 7, 1);
lean_closure_set(v___f_4641_, 0, v___f_4635_);
v___x_4642_ = 0;
v___x_4643_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4622_, v___f_4641_, v___f_4640_, v___x_4636_, v___x_4642_, v_a_4626_, v_a_4627_, v_a_4628_, v_a_4629_);
return v___x_4643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object* v_e_4644_, lean_object* v_zetaDelta_4645_, lean_object* v_zetaHave_4646_, lean_object* v_beta_4647_, lean_object* v_a_4648_, lean_object* v_a_4649_, lean_object* v_a_4650_, lean_object* v_a_4651_, lean_object* v_a_4652_){
_start:
{
uint8_t v_zetaDelta_boxed_4653_; uint8_t v_zetaHave_boxed_4654_; uint8_t v_beta_boxed_4655_; lean_object* v_res_4656_; 
v_zetaDelta_boxed_4653_ = lean_unbox(v_zetaDelta_4645_);
v_zetaHave_boxed_4654_ = lean_unbox(v_zetaHave_4646_);
v_beta_boxed_4655_ = lean_unbox(v_beta_4647_);
v_res_4656_ = l_Lean_Meta_zetaReduce(v_e_4644_, v_zetaDelta_boxed_4653_, v_zetaHave_boxed_4654_, v_beta_boxed_4655_, v_a_4648_, v_a_4649_, v_a_4650_, v_a_4651_);
lean_dec(v_a_4651_);
lean_dec_ref(v_a_4650_);
lean_dec(v_a_4649_);
lean_dec_ref(v_a_4648_);
return v_res_4656_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(lean_object* v_upperBound_4657_, lean_object* v___x_4658_, lean_object* v_pre_4659_, lean_object* v_post_4660_, uint8_t v_usedLetOnly_4661_, uint8_t v_skipConstInApp_4662_, uint8_t v_skipInstances_4663_, lean_object* v___x_4664_, lean_object* v_inst_4665_, lean_object* v_R_4666_, lean_object* v_a_4667_, lean_object* v_b_4668_, lean_object* v_c_4669_, lean_object* v___y_4670_, lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_){
_start:
{
lean_object* v___x_4676_; 
v___x_4676_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___redArg(v_upperBound_4657_, v___x_4658_, v_pre_4659_, v_post_4660_, v_usedLetOnly_4661_, v_skipConstInApp_4662_, v_skipInstances_4663_, v_a_4667_, v_b_4668_, v___y_4670_, v___y_4671_, v___y_4672_, v___y_4673_, v___y_4674_);
return v___x_4676_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_4677_ = _args[0];
lean_object* v___x_4678_ = _args[1];
lean_object* v_pre_4679_ = _args[2];
lean_object* v_post_4680_ = _args[3];
lean_object* v_usedLetOnly_4681_ = _args[4];
lean_object* v_skipConstInApp_4682_ = _args[5];
lean_object* v_skipInstances_4683_ = _args[6];
lean_object* v___x_4684_ = _args[7];
lean_object* v_inst_4685_ = _args[8];
lean_object* v_R_4686_ = _args[9];
lean_object* v_a_4687_ = _args[10];
lean_object* v_b_4688_ = _args[11];
lean_object* v_c_4689_ = _args[12];
lean_object* v___y_4690_ = _args[13];
lean_object* v___y_4691_ = _args[14];
lean_object* v___y_4692_ = _args[15];
lean_object* v___y_4693_ = _args[16];
lean_object* v___y_4694_ = _args[17];
lean_object* v___y_4695_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_4696_; uint8_t v_skipConstInApp_boxed_4697_; uint8_t v_skipInstances_boxed_4698_; lean_object* v_res_4699_; 
v_usedLetOnly_boxed_4696_ = lean_unbox(v_usedLetOnly_4681_);
v_skipConstInApp_boxed_4697_ = lean_unbox(v_skipConstInApp_4682_);
v_skipInstances_boxed_4698_ = lean_unbox(v_skipInstances_4683_);
v_res_4699_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__4(v_upperBound_4677_, v___x_4678_, v_pre_4679_, v_post_4680_, v_usedLetOnly_boxed_4696_, v_skipConstInApp_boxed_4697_, v_skipInstances_boxed_4698_, v___x_4684_, v_inst_4685_, v_R_4686_, v_a_4687_, v_b_4688_, v_c_4689_, v___y_4690_, v___y_4691_, v___y_4692_, v___y_4693_, v___y_4694_);
lean_dec(v___y_4694_);
lean_dec_ref(v___y_4693_);
lean_dec(v___y_4692_);
lean_dec_ref(v___y_4691_);
lean_dec(v___y_4690_);
lean_dec(v___x_4684_);
lean_dec_ref(v___x_4678_);
lean_dec(v_upperBound_4677_);
return v_res_4699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(lean_object* v_00_u03b1_4700_, lean_object* v_name_4701_, uint8_t v_bi_4702_, lean_object* v_type_4703_, lean_object* v_k_4704_, uint8_t v_kind_4705_, lean_object* v___y_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_){
_start:
{
lean_object* v___x_4712_; 
v___x_4712_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___redArg(v_name_4701_, v_bi_4702_, v_type_4703_, v_k_4704_, v_kind_4705_, v___y_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_);
return v___x_4712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6___boxed(lean_object* v_00_u03b1_4713_, lean_object* v_name_4714_, lean_object* v_bi_4715_, lean_object* v_type_4716_, lean_object* v_k_4717_, lean_object* v_kind_4718_, lean_object* v___y_4719_, lean_object* v___y_4720_, lean_object* v___y_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_){
_start:
{
uint8_t v_bi_boxed_4725_; uint8_t v_kind_boxed_4726_; lean_object* v_res_4727_; 
v_bi_boxed_4725_ = lean_unbox(v_bi_4715_);
v_kind_boxed_4726_ = lean_unbox(v_kind_4718_);
v_res_4727_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__5_spec__6(v_00_u03b1_4713_, v_name_4714_, v_bi_boxed_4725_, v_type_4716_, v_k_4717_, v_kind_boxed_4726_, v___y_4719_, v___y_4720_, v___y_4721_, v___y_4722_, v___y_4723_);
lean_dec(v___y_4723_);
lean_dec_ref(v___y_4722_);
lean_dec(v___y_4721_);
lean_dec_ref(v___y_4720_);
lean_dec(v___y_4719_);
return v_res_4727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(lean_object* v_00_u03b1_4728_, lean_object* v_name_4729_, lean_object* v_type_4730_, lean_object* v_val_4731_, lean_object* v_k_4732_, uint8_t v_nondep_4733_, uint8_t v_kind_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_, lean_object* v___y_4737_, lean_object* v___y_4738_, lean_object* v___y_4739_){
_start:
{
lean_object* v___x_4741_; 
v___x_4741_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___redArg(v_name_4729_, v_type_4730_, v_val_4731_, v_k_4732_, v_nondep_4733_, v_kind_4734_, v___y_4735_, v___y_4736_, v___y_4737_, v___y_4738_, v___y_4739_);
return v___x_4741_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9___boxed(lean_object* v_00_u03b1_4742_, lean_object* v_name_4743_, lean_object* v_type_4744_, lean_object* v_val_4745_, lean_object* v_k_4746_, lean_object* v_nondep_4747_, lean_object* v_kind_4748_, lean_object* v___y_4749_, lean_object* v___y_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_){
_start:
{
uint8_t v_nondep_boxed_4755_; uint8_t v_kind_boxed_4756_; lean_object* v_res_4757_; 
v_nondep_boxed_4755_ = lean_unbox(v_nondep_4747_);
v_kind_boxed_4756_ = lean_unbox(v_kind_4748_);
v_res_4757_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__7_spec__9(v_00_u03b1_4742_, v_name_4743_, v_type_4744_, v_val_4745_, v_k_4746_, v_nondep_boxed_4755_, v_kind_boxed_4756_, v___y_4749_, v___y_4750_, v___y_4751_, v___y_4752_, v___y_4753_);
lean_dec(v___y_4753_);
lean_dec_ref(v___y_4752_);
lean_dec(v___y_4751_);
lean_dec_ref(v___y_4750_);
lean_dec(v___y_4749_);
return v_res_4757_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(lean_object* v_00_u03b1_4758_, lean_object* v_ref_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_, lean_object* v___y_4763_){
_start:
{
lean_object* v___x_4765_; 
v___x_4765_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___redArg(v_ref_4759_);
return v___x_4765_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12___boxed(lean_object* v_00_u03b1_4766_, lean_object* v_ref_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9_spec__12(v_00_u03b1_4766_, v_ref_4767_, v___y_4768_, v___y_4769_, v___y_4770_, v___y_4771_);
lean_dec(v___y_4771_);
lean_dec_ref(v___y_4770_);
lean_dec(v___y_4769_);
lean_dec_ref(v___y_4768_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(lean_object* v_00_u03b1_4774_, lean_object* v_x_4775_, lean_object* v___y_4776_, lean_object* v___y_4777_, lean_object* v___y_4778_, lean_object* v___y_4779_, lean_object* v___y_4780_){
_start:
{
lean_object* v___x_4782_; 
v___x_4782_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___redArg(v_x_4775_, v___y_4776_, v___y_4777_, v___y_4778_, v___y_4779_, v___y_4780_);
return v___x_4782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9___boxed(lean_object* v_00_u03b1_4783_, lean_object* v_x_4784_, lean_object* v___y_4785_, lean_object* v___y_4786_, lean_object* v___y_4787_, lean_object* v___y_4788_, lean_object* v___y_4789_, lean_object* v___y_4790_){
_start:
{
lean_object* v_res_4791_; 
v_res_4791_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1_spec__1_spec__9(v_00_u03b1_4783_, v_x_4784_, v___y_4785_, v___y_4786_, v___y_4787_, v___y_4788_, v___y_4789_);
lean_dec(v___y_4789_);
lean_dec_ref(v___y_4788_);
lean_dec(v___y_4787_);
lean_dec_ref(v___y_4786_);
lean_dec(v___y_4785_);
return v_res_4791_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(lean_object* v_a_4792_, lean_object* v_as_4793_, size_t v_i_4794_, size_t v_stop_4795_){
_start:
{
uint8_t v___x_4796_; 
v___x_4796_ = lean_usize_dec_eq(v_i_4794_, v_stop_4795_);
if (v___x_4796_ == 0)
{
lean_object* v___x_4797_; uint8_t v___x_4798_; 
v___x_4797_ = lean_array_uget_borrowed(v_as_4793_, v_i_4794_);
v___x_4798_ = l_Lean_instBEqFVarId_beq(v_a_4792_, v___x_4797_);
if (v___x_4798_ == 0)
{
size_t v___x_4799_; size_t v___x_4800_; 
v___x_4799_ = ((size_t)1ULL);
v___x_4800_ = lean_usize_add(v_i_4794_, v___x_4799_);
v_i_4794_ = v___x_4800_;
goto _start;
}
else
{
return v___x_4798_;
}
}
else
{
uint8_t v___x_4802_; 
v___x_4802_ = 0;
return v___x_4802_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0___boxed(lean_object* v_a_4803_, lean_object* v_as_4804_, lean_object* v_i_4805_, lean_object* v_stop_4806_){
_start:
{
size_t v_i_boxed_4807_; size_t v_stop_boxed_4808_; uint8_t v_res_4809_; lean_object* v_r_4810_; 
v_i_boxed_4807_ = lean_unbox_usize(v_i_4805_);
lean_dec(v_i_4805_);
v_stop_boxed_4808_ = lean_unbox_usize(v_stop_4806_);
lean_dec(v_stop_4806_);
v_res_4809_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(v_a_4803_, v_as_4804_, v_i_boxed_4807_, v_stop_boxed_4808_);
lean_dec_ref(v_as_4804_);
lean_dec(v_a_4803_);
v_r_4810_ = lean_box(v_res_4809_);
return v_r_4810_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(lean_object* v_as_4811_, lean_object* v_a_4812_){
_start:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; uint8_t v___x_4815_; 
v___x_4813_ = lean_unsigned_to_nat(0u);
v___x_4814_ = lean_array_get_size(v_as_4811_);
v___x_4815_ = lean_nat_dec_lt(v___x_4813_, v___x_4814_);
if (v___x_4815_ == 0)
{
return v___x_4815_;
}
else
{
if (v___x_4815_ == 0)
{
return v___x_4815_;
}
else
{
size_t v___x_4816_; size_t v___x_4817_; uint8_t v___x_4818_; 
v___x_4816_ = ((size_t)0ULL);
v___x_4817_ = lean_usize_of_nat(v___x_4814_);
v___x_4818_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0_spec__0(v_a_4812_, v_as_4811_, v___x_4816_, v___x_4817_);
return v___x_4818_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0___boxed(lean_object* v_as_4819_, lean_object* v_a_4820_){
_start:
{
uint8_t v_res_4821_; lean_object* v_r_4822_; 
v_res_4821_ = l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(v_as_4819_, v_a_4820_);
lean_dec(v_a_4820_);
lean_dec_ref(v_as_4819_);
v_r_4822_ = lean_box(v_res_4821_);
return v_r_4822_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1(lean_object* v_fvars_4823_, lean_object* v_e_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_){
_start:
{
lean_object* v___x_4833_; 
v___x_4833_ = l_Lean_Expr_getAppFn(v_e_4824_);
if (lean_obj_tag(v___x_4833_) == 1)
{
lean_object* v_fvarId_4834_; uint8_t v___x_4835_; 
v_fvarId_4834_ = lean_ctor_get(v___x_4833_, 0);
lean_inc(v_fvarId_4834_);
lean_dec_ref(v___x_4833_);
v___x_4835_ = l_Array_contains___at___00Lean_Meta_zetaDeltaFVars_spec__0(v_fvars_4823_, v_fvarId_4834_);
if (v___x_4835_ == 0)
{
lean_dec(v_fvarId_4834_);
lean_dec_ref(v_e_4824_);
goto v___jp_4830_;
}
else
{
uint8_t v___x_4836_; lean_object* v___x_4837_; 
v___x_4836_ = 0;
v___x_4837_ = l_Lean_FVarId_getValue_x3f___redArg(v_fvarId_4834_, v___x_4836_, v___y_4825_, v___y_4827_, v___y_4828_);
if (lean_obj_tag(v___x_4837_) == 0)
{
lean_object* v_a_4838_; 
v_a_4838_ = lean_ctor_get(v___x_4837_, 0);
lean_inc(v_a_4838_);
lean_dec_ref(v___x_4837_);
if (lean_obj_tag(v_a_4838_) == 1)
{
lean_object* v_val_4839_; lean_object* v___x_4841_; uint8_t v_isShared_4842_; uint8_t v_isSharedCheck_4862_; 
v_val_4839_ = lean_ctor_get(v_a_4838_, 0);
v_isSharedCheck_4862_ = !lean_is_exclusive(v_a_4838_);
if (v_isSharedCheck_4862_ == 0)
{
v___x_4841_ = v_a_4838_;
v_isShared_4842_ = v_isSharedCheck_4862_;
goto v_resetjp_4840_;
}
else
{
lean_inc(v_val_4839_);
lean_dec(v_a_4838_);
v___x_4841_ = lean_box(0);
v_isShared_4842_ = v_isSharedCheck_4862_;
goto v_resetjp_4840_;
}
v_resetjp_4840_:
{
lean_object* v___x_4843_; lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4861_; 
v___x_4843_ = l_Lean_instantiateMVars___at___00Lean_Meta_zetaReduce_spec__0___redArg(v_val_4839_, v___y_4826_, v___y_4828_);
v_a_4844_ = lean_ctor_get(v___x_4843_, 0);
v_isSharedCheck_4861_ = !lean_is_exclusive(v___x_4843_);
if (v_isSharedCheck_4861_ == 0)
{
v___x_4846_ = v___x_4843_;
v_isShared_4847_ = v_isSharedCheck_4861_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4843_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4861_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v_dummy_4848_; lean_object* v_nargs_4849_; lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4853_; lean_object* v___x_4854_; lean_object* v___x_4856_; 
v_dummy_4848_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_4849_ = l_Lean_Expr_getAppNumArgs(v_e_4824_);
lean_inc(v_nargs_4849_);
v___x_4850_ = lean_mk_array(v_nargs_4849_, v_dummy_4848_);
v___x_4851_ = lean_unsigned_to_nat(1u);
v___x_4852_ = lean_nat_sub(v_nargs_4849_, v___x_4851_);
lean_dec(v_nargs_4849_);
v___x_4853_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_4824_, v___x_4850_, v___x_4852_);
v___x_4854_ = l_Lean_Expr_beta(v_a_4844_, v___x_4853_);
if (v_isShared_4842_ == 0)
{
lean_ctor_set(v___x_4841_, 0, v___x_4854_);
v___x_4856_ = v___x_4841_;
goto v_reusejp_4855_;
}
else
{
lean_object* v_reuseFailAlloc_4860_; 
v_reuseFailAlloc_4860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4860_, 0, v___x_4854_);
v___x_4856_ = v_reuseFailAlloc_4860_;
goto v_reusejp_4855_;
}
v_reusejp_4855_:
{
lean_object* v___x_4858_; 
if (v_isShared_4847_ == 0)
{
lean_ctor_set(v___x_4846_, 0, v___x_4856_);
v___x_4858_ = v___x_4846_;
goto v_reusejp_4857_;
}
else
{
lean_object* v_reuseFailAlloc_4859_; 
v_reuseFailAlloc_4859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4859_, 0, v___x_4856_);
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
}
else
{
lean_dec(v_a_4838_);
lean_dec_ref(v_e_4824_);
goto v___jp_4830_;
}
}
else
{
lean_object* v_a_4863_; lean_object* v___x_4865_; uint8_t v_isShared_4866_; uint8_t v_isSharedCheck_4870_; 
lean_dec_ref(v_e_4824_);
v_a_4863_ = lean_ctor_get(v___x_4837_, 0);
v_isSharedCheck_4870_ = !lean_is_exclusive(v___x_4837_);
if (v_isSharedCheck_4870_ == 0)
{
v___x_4865_ = v___x_4837_;
v_isShared_4866_ = v_isSharedCheck_4870_;
goto v_resetjp_4864_;
}
else
{
lean_inc(v_a_4863_);
lean_dec(v___x_4837_);
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
else
{
lean_object* v___x_4871_; lean_object* v___x_4872_; 
lean_dec_ref(v___x_4833_);
lean_dec_ref(v_e_4824_);
v___x_4871_ = lean_obj_once(&l_Lean_Core_betaReduce___lam__0___closed__0, &l_Lean_Core_betaReduce___lam__0___closed__0_once, _init_l_Lean_Core_betaReduce___lam__0___closed__0);
v___x_4872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4872_, 0, v___x_4871_);
return v___x_4872_;
}
v___jp_4830_:
{
lean_object* v___x_4831_; lean_object* v___x_4832_; 
v___x_4831_ = lean_obj_once(&l_Lean_Core_betaReduce___lam__0___closed__0, &l_Lean_Core_betaReduce___lam__0___closed__0_once, _init_l_Lean_Core_betaReduce___lam__0___closed__0);
v___x_4832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4832_, 0, v___x_4831_);
return v___x_4832_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___lam__1___boxed(lean_object* v_fvars_4873_, lean_object* v_e_4874_, lean_object* v___y_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_){
_start:
{
lean_object* v_res_4880_; 
v_res_4880_ = l_Lean_Meta_zetaDeltaFVars___lam__1(v_fvars_4873_, v_e_4874_, v___y_4875_, v___y_4876_, v___y_4877_, v___y_4878_);
lean_dec(v___y_4878_);
lean_dec_ref(v___y_4877_);
lean_dec(v___y_4876_);
lean_dec_ref(v___y_4875_);
lean_dec_ref(v_fvars_4873_);
return v_res_4880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars(lean_object* v_e_4881_, lean_object* v_fvars_4882_, lean_object* v_a_4883_, lean_object* v_a_4884_, lean_object* v_a_4885_, lean_object* v_a_4886_){
_start:
{
lean_object* v___f_4888_; lean_object* v_pre_4889_; uint8_t v___x_4890_; lean_object* v___x_4891_; 
v___f_4888_ = lean_obj_once(&l_Lean_Meta_zetaReduce___closed__0, &l_Lean_Meta_zetaReduce___closed__0_once, _init_l_Lean_Meta_zetaReduce___closed__0);
v_pre_4889_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaDeltaFVars___lam__1___boxed), 7, 1);
lean_closure_set(v_pre_4889_, 0, v_fvars_4882_);
v___x_4890_ = 0;
v___x_4891_ = l_Lean_Meta_transform___at___00Lean_Meta_zetaReduce_spec__1(v_e_4881_, v_pre_4889_, v___f_4888_, v___x_4890_, v___x_4890_, v_a_4883_, v_a_4884_, v_a_4885_, v_a_4886_);
return v___x_4891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_zetaDeltaFVars___boxed(lean_object* v_e_4892_, lean_object* v_fvars_4893_, lean_object* v_a_4894_, lean_object* v_a_4895_, lean_object* v_a_4896_, lean_object* v_a_4897_, lean_object* v_a_4898_){
_start:
{
lean_object* v_res_4899_; 
v_res_4899_ = l_Lean_Meta_zetaDeltaFVars(v_e_4892_, v_fvars_4893_, v_a_4894_, v_a_4895_, v_a_4896_, v_a_4897_);
lean_dec(v_a_4897_);
lean_dec_ref(v_a_4896_);
lean_dec(v_a_4895_);
lean_dec_ref(v_a_4894_);
return v_res_4899_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_4900_; 
v___x_4900_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4900_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_4901_; lean_object* v___x_4902_; 
v___x_4901_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__0);
v___x_4902_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4902_, 0, v___x_4901_);
return v___x_4902_;
}
}
static lean_object* _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_4903_; lean_object* v___x_4904_; 
v___x_4903_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__1);
v___x_4904_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4904_, 0, v___x_4903_);
lean_ctor_set(v___x_4904_, 1, v___x_4903_);
return v___x_4904_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(lean_object* v_env_4905_, lean_object* v___y_4906_){
_start:
{
lean_object* v___x_4908_; lean_object* v_nextMacroScope_4909_; lean_object* v_ngen_4910_; lean_object* v_auxDeclNGen_4911_; lean_object* v_traceState_4912_; lean_object* v_messages_4913_; lean_object* v_infoState_4914_; lean_object* v_snapshotTasks_4915_; lean_object* v___x_4917_; uint8_t v_isShared_4918_; uint8_t v_isSharedCheck_4926_; 
v___x_4908_ = lean_st_ref_take(v___y_4906_);
v_nextMacroScope_4909_ = lean_ctor_get(v___x_4908_, 1);
v_ngen_4910_ = lean_ctor_get(v___x_4908_, 2);
v_auxDeclNGen_4911_ = lean_ctor_get(v___x_4908_, 3);
v_traceState_4912_ = lean_ctor_get(v___x_4908_, 4);
v_messages_4913_ = lean_ctor_get(v___x_4908_, 6);
v_infoState_4914_ = lean_ctor_get(v___x_4908_, 7);
v_snapshotTasks_4915_ = lean_ctor_get(v___x_4908_, 8);
v_isSharedCheck_4926_ = !lean_is_exclusive(v___x_4908_);
if (v_isSharedCheck_4926_ == 0)
{
lean_object* v_unused_4927_; lean_object* v_unused_4928_; 
v_unused_4927_ = lean_ctor_get(v___x_4908_, 5);
lean_dec(v_unused_4927_);
v_unused_4928_ = lean_ctor_get(v___x_4908_, 0);
lean_dec(v_unused_4928_);
v___x_4917_ = v___x_4908_;
v_isShared_4918_ = v_isSharedCheck_4926_;
goto v_resetjp_4916_;
}
else
{
lean_inc(v_snapshotTasks_4915_);
lean_inc(v_infoState_4914_);
lean_inc(v_messages_4913_);
lean_inc(v_traceState_4912_);
lean_inc(v_auxDeclNGen_4911_);
lean_inc(v_ngen_4910_);
lean_inc(v_nextMacroScope_4909_);
lean_dec(v___x_4908_);
v___x_4917_ = lean_box(0);
v_isShared_4918_ = v_isSharedCheck_4926_;
goto v_resetjp_4916_;
}
v_resetjp_4916_:
{
lean_object* v___x_4919_; lean_object* v___x_4921_; 
v___x_4919_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2);
if (v_isShared_4918_ == 0)
{
lean_ctor_set(v___x_4917_, 5, v___x_4919_);
lean_ctor_set(v___x_4917_, 0, v_env_4905_);
v___x_4921_ = v___x_4917_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4925_; 
v_reuseFailAlloc_4925_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4925_, 0, v_env_4905_);
lean_ctor_set(v_reuseFailAlloc_4925_, 1, v_nextMacroScope_4909_);
lean_ctor_set(v_reuseFailAlloc_4925_, 2, v_ngen_4910_);
lean_ctor_set(v_reuseFailAlloc_4925_, 3, v_auxDeclNGen_4911_);
lean_ctor_set(v_reuseFailAlloc_4925_, 4, v_traceState_4912_);
lean_ctor_set(v_reuseFailAlloc_4925_, 5, v___x_4919_);
lean_ctor_set(v_reuseFailAlloc_4925_, 6, v_messages_4913_);
lean_ctor_set(v_reuseFailAlloc_4925_, 7, v_infoState_4914_);
lean_ctor_set(v_reuseFailAlloc_4925_, 8, v_snapshotTasks_4915_);
v___x_4921_ = v_reuseFailAlloc_4925_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
lean_object* v___x_4922_; lean_object* v___x_4923_; lean_object* v___x_4924_; 
v___x_4922_ = lean_st_ref_set(v___y_4906_, v___x_4921_);
v___x_4923_ = lean_box(0);
v___x_4924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4924_, 0, v___x_4923_);
return v___x_4924_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___boxed(lean_object* v_env_4929_, lean_object* v___y_4930_, lean_object* v___y_4931_){
_start:
{
lean_object* v_res_4932_; 
v_res_4932_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4929_, v___y_4930_);
lean_dec(v___y_4930_);
return v_res_4932_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(lean_object* v_env_4933_, lean_object* v___y_4934_, lean_object* v___y_4935_){
_start:
{
lean_object* v___x_4937_; 
v___x_4937_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_4933_, v___y_4935_);
return v___x_4937_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___boxed(lean_object* v_env_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_, lean_object* v___y_4941_){
_start:
{
lean_object* v_res_4942_; 
v_res_4942_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0(v_env_4938_, v___y_4939_, v___y_4940_);
lean_dec(v___y_4940_);
lean_dec_ref(v___y_4939_);
return v_res_4942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1(lean_object* v_env_4943_, lean_object* v___x_4944_, uint8_t v___x_4945_, lean_object* v_e_4946_, lean_object* v___y_4947_, lean_object* v___y_4948_){
_start:
{
if (lean_obj_tag(v_e_4946_) == 4)
{
lean_object* v_declName_4950_; lean_object* v_us_4951_; uint8_t v___x_4952_; uint8_t v___x_4953_; 
v_declName_4950_ = lean_ctor_get(v_e_4946_, 0);
v_us_4951_ = lean_ctor_get(v_e_4946_, 1);
v___x_4952_ = 1;
lean_inc(v_declName_4950_);
v___x_4953_ = l_Lean_Environment_contains(v_env_4943_, v_declName_4950_, v___x_4952_);
if (v___x_4953_ == 0)
{
lean_object* v___x_4954_; 
lean_inc(v_declName_4950_);
v___x_4954_ = l_Lean_Environment_find_x3f(v___x_4944_, v_declName_4950_, v___x_4945_);
if (lean_obj_tag(v___x_4954_) == 1)
{
lean_object* v_val_4955_; lean_object* v___x_4957_; uint8_t v_isShared_4958_; uint8_t v_isSharedCheck_4984_; 
v_val_4955_ = lean_ctor_get(v___x_4954_, 0);
v_isSharedCheck_4984_ = !lean_is_exclusive(v___x_4954_);
if (v_isSharedCheck_4984_ == 0)
{
v___x_4957_ = v___x_4954_;
v_isShared_4958_ = v_isSharedCheck_4984_;
goto v_resetjp_4956_;
}
else
{
lean_inc(v_val_4955_);
lean_dec(v___x_4954_);
v___x_4957_ = lean_box(0);
v_isShared_4958_ = v_isSharedCheck_4984_;
goto v_resetjp_4956_;
}
v_resetjp_4956_:
{
uint8_t v___x_4959_; 
v___x_4959_ = l_Lean_ConstantInfo_hasValue(v_val_4955_, v___x_4952_);
if (v___x_4959_ == 0)
{
lean_object* v___x_4961_; 
lean_dec(v_val_4955_);
if (v_isShared_4958_ == 0)
{
lean_ctor_set_tag(v___x_4957_, 0);
lean_ctor_set(v___x_4957_, 0, v_e_4946_);
v___x_4961_ = v___x_4957_;
goto v_reusejp_4960_;
}
else
{
lean_object* v_reuseFailAlloc_4963_; 
v_reuseFailAlloc_4963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4963_, 0, v_e_4946_);
v___x_4961_ = v_reuseFailAlloc_4963_;
goto v_reusejp_4960_;
}
v_reusejp_4960_:
{
lean_object* v___x_4962_; 
v___x_4962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4962_, 0, v___x_4961_);
return v___x_4962_;
}
}
else
{
lean_object* v___x_4964_; 
lean_inc(v_us_4951_);
lean_dec_ref(v_e_4946_);
v___x_4964_ = l_Lean_Core_instantiateValueLevelParams(v_val_4955_, v_us_4951_, v___x_4952_, v___y_4947_, v___y_4948_);
lean_dec(v_val_4955_);
if (lean_obj_tag(v___x_4964_) == 0)
{
lean_object* v_a_4965_; lean_object* v___x_4967_; uint8_t v_isShared_4968_; uint8_t v_isSharedCheck_4975_; 
v_a_4965_ = lean_ctor_get(v___x_4964_, 0);
v_isSharedCheck_4975_ = !lean_is_exclusive(v___x_4964_);
if (v_isSharedCheck_4975_ == 0)
{
v___x_4967_ = v___x_4964_;
v_isShared_4968_ = v_isSharedCheck_4975_;
goto v_resetjp_4966_;
}
else
{
lean_inc(v_a_4965_);
lean_dec(v___x_4964_);
v___x_4967_ = lean_box(0);
v_isShared_4968_ = v_isSharedCheck_4975_;
goto v_resetjp_4966_;
}
v_resetjp_4966_:
{
lean_object* v___x_4970_; 
if (v_isShared_4958_ == 0)
{
lean_ctor_set(v___x_4957_, 0, v_a_4965_);
v___x_4970_ = v___x_4957_;
goto v_reusejp_4969_;
}
else
{
lean_object* v_reuseFailAlloc_4974_; 
v_reuseFailAlloc_4974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4974_, 0, v_a_4965_);
v___x_4970_ = v_reuseFailAlloc_4974_;
goto v_reusejp_4969_;
}
v_reusejp_4969_:
{
lean_object* v___x_4972_; 
if (v_isShared_4968_ == 0)
{
lean_ctor_set(v___x_4967_, 0, v___x_4970_);
v___x_4972_ = v___x_4967_;
goto v_reusejp_4971_;
}
else
{
lean_object* v_reuseFailAlloc_4973_; 
v_reuseFailAlloc_4973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4973_, 0, v___x_4970_);
v___x_4972_ = v_reuseFailAlloc_4973_;
goto v_reusejp_4971_;
}
v_reusejp_4971_:
{
return v___x_4972_;
}
}
}
}
else
{
lean_object* v_a_4976_; lean_object* v___x_4978_; uint8_t v_isShared_4979_; uint8_t v_isSharedCheck_4983_; 
lean_del_object(v___x_4957_);
v_a_4976_ = lean_ctor_get(v___x_4964_, 0);
v_isSharedCheck_4983_ = !lean_is_exclusive(v___x_4964_);
if (v_isSharedCheck_4983_ == 0)
{
v___x_4978_ = v___x_4964_;
v_isShared_4979_ = v_isSharedCheck_4983_;
goto v_resetjp_4977_;
}
else
{
lean_inc(v_a_4976_);
lean_dec(v___x_4964_);
v___x_4978_ = lean_box(0);
v_isShared_4979_ = v_isSharedCheck_4983_;
goto v_resetjp_4977_;
}
v_resetjp_4977_:
{
lean_object* v___x_4981_; 
if (v_isShared_4979_ == 0)
{
v___x_4981_ = v___x_4978_;
goto v_reusejp_4980_;
}
else
{
lean_object* v_reuseFailAlloc_4982_; 
v_reuseFailAlloc_4982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4982_, 0, v_a_4976_);
v___x_4981_ = v_reuseFailAlloc_4982_;
goto v_reusejp_4980_;
}
v_reusejp_4980_:
{
return v___x_4981_;
}
}
}
}
}
}
else
{
lean_object* v___x_4985_; lean_object* v___x_4986_; 
lean_dec(v___x_4954_);
v___x_4985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4985_, 0, v_e_4946_);
v___x_4986_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4986_, 0, v___x_4985_);
return v___x_4986_;
}
}
else
{
lean_object* v___x_4987_; lean_object* v___x_4988_; 
lean_dec_ref(v___x_4944_);
v___x_4987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4987_, 0, v_e_4946_);
v___x_4988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4988_, 0, v___x_4987_);
return v___x_4988_;
}
}
else
{
lean_object* v___x_4989_; lean_object* v___x_4990_; 
lean_dec_ref(v_e_4946_);
lean_dec_ref(v___x_4944_);
lean_dec_ref(v_env_4943_);
v___x_4989_ = lean_obj_once(&l_Lean_Core_betaReduce___lam__0___closed__0, &l_Lean_Core_betaReduce___lam__0___closed__0_once, _init_l_Lean_Core_betaReduce___lam__0___closed__0);
v___x_4990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4990_, 0, v___x_4989_);
return v___x_4990_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed(lean_object* v_env_4991_, lean_object* v___x_4992_, lean_object* v___x_4993_, lean_object* v_e_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_){
_start:
{
uint8_t v___x_2152__boxed_4998_; lean_object* v_res_4999_; 
v___x_2152__boxed_4998_ = lean_unbox(v___x_4993_);
v_res_4999_ = l_Lean_Meta_unfoldDeclsFrom___lam__1(v_env_4991_, v___x_4992_, v___x_2152__boxed_4998_, v_e_4994_, v___y_4995_, v___y_4996_);
lean_dec(v___y_4996_);
lean_dec_ref(v___y_4995_);
return v_res_4999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0(lean_object* v_biggerEnv_5000_, lean_object* v_e_5001_, lean_object* v___f_5002_, lean_object* v___y_5003_, lean_object* v___y_5004_){
_start:
{
lean_object* v___x_5006_; uint8_t v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v_env_5010_; lean_object* v___x_5011_; lean_object* v___f_5012_; lean_object* v___x_5013_; 
v___x_5006_ = lean_st_ref_get(v___y_5004_);
v___x_5007_ = 0;
v___x_5008_ = l_Lean_Environment_setExporting(v_biggerEnv_5000_, v___x_5007_);
lean_inc_ref(v___x_5008_);
v___x_5009_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v___x_5008_, v___y_5004_);
lean_dec_ref(v___x_5009_);
v_env_5010_ = lean_ctor_get(v___x_5006_, 0);
lean_inc_ref(v_env_5010_);
lean_dec(v___x_5006_);
v___x_5011_ = lean_box(v___x_5007_);
v___f_5012_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDeclsFrom___lam__1___boxed), 7, 3);
lean_closure_set(v___f_5012_, 0, v_env_5010_);
lean_closure_set(v___f_5012_, 1, v___x_5008_);
lean_closure_set(v___f_5012_, 2, v___x_5011_);
v___x_5013_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5001_, v___f_5012_, v___f_5002_, v___y_5003_, v___y_5004_);
return v___x_5013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed(lean_object* v_biggerEnv_5014_, lean_object* v_e_5015_, lean_object* v___f_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_){
_start:
{
lean_object* v_res_5020_; 
v_res_5020_ = l_Lean_Meta_unfoldDeclsFrom___lam__0(v_biggerEnv_5014_, v_e_5015_, v___f_5016_, v___y_5017_, v___y_5018_);
lean_dec(v___y_5018_);
lean_dec_ref(v___y_5017_);
return v_res_5020_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(lean_object* v_env_5021_, lean_object* v_x_5022_, lean_object* v___y_5023_, lean_object* v___y_5024_){
_start:
{
lean_object* v___x_5026_; lean_object* v_env_5027_; lean_object* v_a_5029_; lean_object* v___x_5039_; lean_object* v___x_5040_; 
v___x_5026_ = lean_st_ref_get(v___y_5024_);
v_env_5027_ = lean_ctor_get(v___x_5026_, 0);
lean_inc_ref(v_env_5027_);
lean_dec(v___x_5026_);
v___x_5039_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_5021_, v___y_5024_);
lean_dec_ref(v___x_5039_);
lean_inc(v___y_5024_);
lean_inc_ref(v___y_5023_);
v___x_5040_ = lean_apply_3(v_x_5022_, v___y_5023_, v___y_5024_, lean_box(0));
if (lean_obj_tag(v___x_5040_) == 0)
{
lean_object* v_a_5041_; lean_object* v___x_5042_; lean_object* v___x_5044_; uint8_t v_isShared_5045_; uint8_t v_isSharedCheck_5049_; 
v_a_5041_ = lean_ctor_get(v___x_5040_, 0);
lean_inc(v_a_5041_);
lean_dec_ref(v___x_5040_);
v___x_5042_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_5027_, v___y_5024_);
v_isSharedCheck_5049_ = !lean_is_exclusive(v___x_5042_);
if (v_isSharedCheck_5049_ == 0)
{
lean_object* v_unused_5050_; 
v_unused_5050_ = lean_ctor_get(v___x_5042_, 0);
lean_dec(v_unused_5050_);
v___x_5044_ = v___x_5042_;
v_isShared_5045_ = v_isSharedCheck_5049_;
goto v_resetjp_5043_;
}
else
{
lean_dec(v___x_5042_);
v___x_5044_ = lean_box(0);
v_isShared_5045_ = v_isSharedCheck_5049_;
goto v_resetjp_5043_;
}
v_resetjp_5043_:
{
lean_object* v___x_5047_; 
if (v_isShared_5045_ == 0)
{
lean_ctor_set(v___x_5044_, 0, v_a_5041_);
v___x_5047_ = v___x_5044_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5048_; 
v_reuseFailAlloc_5048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5048_, 0, v_a_5041_);
v___x_5047_ = v_reuseFailAlloc_5048_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
return v___x_5047_;
}
}
}
else
{
lean_object* v_a_5051_; 
v_a_5051_ = lean_ctor_get(v___x_5040_, 0);
lean_inc(v_a_5051_);
lean_dec_ref(v___x_5040_);
v_a_5029_ = v_a_5051_;
goto v___jp_5028_;
}
v___jp_5028_:
{
lean_object* v___x_5030_; lean_object* v___x_5032_; uint8_t v_isShared_5033_; uint8_t v_isSharedCheck_5037_; 
v___x_5030_ = l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg(v_env_5027_, v___y_5024_);
v_isSharedCheck_5037_ = !lean_is_exclusive(v___x_5030_);
if (v_isSharedCheck_5037_ == 0)
{
lean_object* v_unused_5038_; 
v_unused_5038_ = lean_ctor_get(v___x_5030_, 0);
lean_dec(v_unused_5038_);
v___x_5032_ = v___x_5030_;
v_isShared_5033_ = v_isSharedCheck_5037_;
goto v_resetjp_5031_;
}
else
{
lean_dec(v___x_5030_);
v___x_5032_ = lean_box(0);
v_isShared_5033_ = v_isSharedCheck_5037_;
goto v_resetjp_5031_;
}
v_resetjp_5031_:
{
lean_object* v___x_5035_; 
if (v_isShared_5033_ == 0)
{
lean_ctor_set_tag(v___x_5032_, 1);
lean_ctor_set(v___x_5032_, 0, v_a_5029_);
v___x_5035_ = v___x_5032_;
goto v_reusejp_5034_;
}
else
{
lean_object* v_reuseFailAlloc_5036_; 
v_reuseFailAlloc_5036_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5036_, 0, v_a_5029_);
v___x_5035_ = v_reuseFailAlloc_5036_;
goto v_reusejp_5034_;
}
v_reusejp_5034_:
{
return v___x_5035_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg___boxed(lean_object* v_env_5052_, lean_object* v_x_5053_, lean_object* v___y_5054_, lean_object* v___y_5055_, lean_object* v___y_5056_){
_start:
{
lean_object* v_res_5057_; 
v_res_5057_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v_env_5052_, v_x_5053_, v___y_5054_, v___y_5055_);
lean_dec(v___y_5055_);
lean_dec_ref(v___y_5054_);
return v_res_5057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom(lean_object* v_biggerEnv_5058_, lean_object* v_e_5059_, lean_object* v_a_5060_, lean_object* v_a_5061_){
_start:
{
lean_object* v___x_5063_; lean_object* v_env_5064_; lean_object* v___f_5065_; lean_object* v___f_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; 
v___x_5063_ = lean_st_ref_get(v_a_5061_);
v_env_5064_ = lean_ctor_get(v___x_5063_, 0);
lean_inc_ref(v_env_5064_);
lean_dec(v___x_5063_);
v___f_5065_ = lean_obj_once(&l_Lean_Core_betaReduce___closed__1, &l_Lean_Core_betaReduce___closed__1_once, _init_l_Lean_Core_betaReduce___closed__1);
v___f_5066_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldDeclsFrom___lam__0___boxed), 6, 3);
lean_closure_set(v___f_5066_, 0, v_biggerEnv_5058_);
lean_closure_set(v___f_5066_, 1, v_e_5059_);
lean_closure_set(v___f_5066_, 2, v___f_5065_);
v___x_5067_ = l_Lean_Environment_unlockAsync(v_env_5064_);
v___x_5068_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v___x_5067_, v___f_5066_, v_a_5060_, v_a_5061_);
return v___x_5068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldDeclsFrom___boxed(lean_object* v_biggerEnv_5069_, lean_object* v_e_5070_, lean_object* v_a_5071_, lean_object* v_a_5072_, lean_object* v_a_5073_){
_start:
{
lean_object* v_res_5074_; 
v_res_5074_ = l_Lean_Meta_unfoldDeclsFrom(v_biggerEnv_5069_, v_e_5070_, v_a_5071_, v_a_5072_);
lean_dec(v_a_5072_);
lean_dec_ref(v_a_5071_);
return v_res_5074_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(lean_object* v_00_u03b1_5075_, lean_object* v_env_5076_, lean_object* v_x_5077_, lean_object* v___y_5078_, lean_object* v___y_5079_){
_start:
{
lean_object* v___x_5081_; 
v___x_5081_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___redArg(v_env_5076_, v_x_5077_, v___y_5078_, v___y_5079_);
return v___x_5081_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1___boxed(lean_object* v_00_u03b1_5082_, lean_object* v_env_5083_, lean_object* v_x_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_){
_start:
{
lean_object* v_res_5088_; 
v_res_5088_ = l_Lean_withEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__1(v_00_u03b1_5082_, v_env_5083_, v_x_5084_, v___y_5085_, v___y_5086_);
lean_dec(v___y_5086_);
lean_dec_ref(v___y_5085_);
return v_res_5088_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(lean_object* v_af_5089_, lean_object* v_axs_5090_, lean_object* v_numSectionVars_5091_, lean_object* v_as_5092_, size_t v_i_5093_, size_t v_stop_5094_){
_start:
{
uint8_t v___x_5095_; 
v___x_5095_ = lean_usize_dec_eq(v_i_5093_, v_stop_5094_);
if (v___x_5095_ == 0)
{
uint8_t v___x_5096_; uint8_t v___y_5098_; lean_object* v___x_5102_; lean_object* v___x_5103_; uint8_t v___x_5104_; 
v___x_5096_ = 1;
v___x_5102_ = lean_array_uget_borrowed(v_as_5092_, v_i_5093_);
v___x_5103_ = l_Lean_Expr_constName_x21(v_af_5089_);
v___x_5104_ = lean_name_eq(v___x_5103_, v___x_5102_);
lean_dec(v___x_5103_);
if (v___x_5104_ == 0)
{
v___y_5098_ = v___x_5104_;
goto v___jp_5097_;
}
else
{
lean_object* v___x_5105_; uint8_t v___x_5106_; 
v___x_5105_ = lean_array_get_size(v_axs_5090_);
v___x_5106_ = lean_nat_dec_le(v___x_5105_, v_numSectionVars_5091_);
v___y_5098_ = v___x_5106_;
goto v___jp_5097_;
}
v___jp_5097_:
{
if (v___y_5098_ == 0)
{
size_t v___x_5099_; size_t v___x_5100_; 
v___x_5099_ = ((size_t)1ULL);
v___x_5100_ = lean_usize_add(v_i_5093_, v___x_5099_);
v_i_5093_ = v___x_5100_;
goto _start;
}
else
{
return v___x_5096_;
}
}
}
else
{
uint8_t v___x_5107_; 
v___x_5107_ = 0;
return v___x_5107_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0___boxed(lean_object* v_af_5108_, lean_object* v_axs_5109_, lean_object* v_numSectionVars_5110_, lean_object* v_as_5111_, lean_object* v_i_5112_, lean_object* v_stop_5113_){
_start:
{
size_t v_i_boxed_5114_; size_t v_stop_boxed_5115_; uint8_t v_res_5116_; lean_object* v_r_5117_; 
v_i_boxed_5114_ = lean_unbox_usize(v_i_5112_);
lean_dec(v_i_5112_);
v_stop_boxed_5115_ = lean_unbox_usize(v_stop_5113_);
lean_dec(v_stop_5113_);
v_res_5116_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_af_5108_, v_axs_5109_, v_numSectionVars_5110_, v_as_5111_, v_i_boxed_5114_, v_stop_boxed_5115_);
lean_dec_ref(v_as_5111_);
lean_dec(v_numSectionVars_5110_);
lean_dec_ref(v_axs_5109_);
lean_dec_ref(v_af_5108_);
v_r_5117_ = lean_box(v_res_5116_);
return v_r_5117_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(lean_object* v_fnNames_5118_, lean_object* v_numSectionVars_5119_, lean_object* v_x_5120_, lean_object* v_x_5121_, lean_object* v_x_5122_){
_start:
{
if (lean_obj_tag(v_x_5120_) == 5)
{
lean_object* v_fn_5123_; lean_object* v_arg_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; lean_object* v___x_5127_; 
v_fn_5123_ = lean_ctor_get(v_x_5120_, 0);
lean_inc_ref(v_fn_5123_);
v_arg_5124_ = lean_ctor_get(v_x_5120_, 1);
lean_inc_ref(v_arg_5124_);
lean_dec_ref(v_x_5120_);
v___x_5125_ = lean_array_set(v_x_5121_, v_x_5122_, v_arg_5124_);
v___x_5126_ = lean_unsigned_to_nat(1u);
v___x_5127_ = lean_nat_sub(v_x_5122_, v___x_5126_);
lean_dec(v_x_5122_);
v_x_5120_ = v_fn_5123_;
v_x_5121_ = v___x_5125_;
v_x_5122_ = v___x_5127_;
goto _start;
}
else
{
uint8_t v___x_5129_; 
lean_dec(v_x_5122_);
v___x_5129_ = l_Lean_Expr_isConst(v_x_5120_);
if (v___x_5129_ == 0)
{
lean_dec_ref(v_x_5121_);
lean_dec_ref(v_x_5120_);
return v___x_5129_;
}
else
{
lean_object* v___x_5130_; lean_object* v___x_5131_; uint8_t v___x_5132_; 
v___x_5130_ = lean_unsigned_to_nat(0u);
v___x_5131_ = lean_array_get_size(v_fnNames_5118_);
v___x_5132_ = lean_nat_dec_lt(v___x_5130_, v___x_5131_);
if (v___x_5132_ == 0)
{
lean_dec_ref(v_x_5121_);
lean_dec_ref(v_x_5120_);
return v___x_5132_;
}
else
{
if (v___x_5132_ == 0)
{
lean_dec_ref(v_x_5121_);
lean_dec_ref(v_x_5120_);
return v___x_5132_;
}
else
{
size_t v___x_5133_; size_t v___x_5134_; uint8_t v___x_5135_; 
v___x_5133_ = ((size_t)0ULL);
v___x_5134_ = lean_usize_of_nat(v___x_5131_);
v___x_5135_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_x_5120_, v_x_5121_, v_numSectionVars_5119_, v_fnNames_5118_, v___x_5133_, v___x_5134_);
lean_dec_ref(v_x_5121_);
lean_dec_ref(v_x_5120_);
return v___x_5135_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1___boxed(lean_object* v_fnNames_5136_, lean_object* v_numSectionVars_5137_, lean_object* v_x_5138_, lean_object* v_x_5139_, lean_object* v_x_5140_){
_start:
{
uint8_t v_res_5141_; lean_object* v_r_5142_; 
v_res_5141_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(v_fnNames_5136_, v_numSectionVars_5137_, v_x_5138_, v_x_5139_, v_x_5140_);
lean_dec(v_numSectionVars_5137_);
lean_dec_ref(v_fnNames_5136_);
v_r_5142_ = lean_box(v_res_5141_);
return v_r_5142_;
}
}
LEAN_EXPORT uint8_t l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(lean_object* v_numSectionVars_5143_, lean_object* v_fnNames_5144_, lean_object* v_x_5145_, lean_object* v_x_5146_, lean_object* v_x_5147_){
_start:
{
if (lean_obj_tag(v_x_5145_) == 5)
{
lean_object* v_fn_5148_; lean_object* v_arg_5149_; lean_object* v___x_5150_; lean_object* v___x_5151_; lean_object* v___x_5152_; uint8_t v___x_5153_; 
v_fn_5148_ = lean_ctor_get(v_x_5145_, 0);
lean_inc_ref(v_fn_5148_);
v_arg_5149_ = lean_ctor_get(v_x_5145_, 1);
lean_inc_ref(v_arg_5149_);
lean_dec_ref(v_x_5145_);
v___x_5150_ = lean_array_set(v_x_5146_, v_x_5147_, v_arg_5149_);
v___x_5151_ = lean_unsigned_to_nat(1u);
v___x_5152_ = lean_nat_sub(v_x_5147_, v___x_5151_);
v___x_5153_ = l_Lean_Expr_withAppAux___at___00Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1_spec__1(v_fnNames_5144_, v_numSectionVars_5143_, v_fn_5148_, v___x_5150_, v___x_5152_);
return v___x_5153_;
}
else
{
uint8_t v___x_5154_; 
v___x_5154_ = l_Lean_Expr_isConst(v_x_5145_);
if (v___x_5154_ == 0)
{
lean_dec_ref(v_x_5146_);
lean_dec_ref(v_x_5145_);
return v___x_5154_;
}
else
{
lean_object* v___x_5155_; lean_object* v___x_5156_; uint8_t v___x_5157_; 
v___x_5155_ = lean_unsigned_to_nat(0u);
v___x_5156_ = lean_array_get_size(v_fnNames_5144_);
v___x_5157_ = lean_nat_dec_lt(v___x_5155_, v___x_5156_);
if (v___x_5157_ == 0)
{
lean_dec_ref(v_x_5146_);
lean_dec_ref(v_x_5145_);
return v___x_5157_;
}
else
{
if (v___x_5157_ == 0)
{
lean_dec_ref(v_x_5146_);
lean_dec_ref(v_x_5145_);
return v___x_5157_;
}
else
{
size_t v___x_5158_; size_t v___x_5159_; uint8_t v___x_5160_; 
v___x_5158_ = ((size_t)0ULL);
v___x_5159_ = lean_usize_of_nat(v___x_5156_);
v___x_5160_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__0(v_x_5145_, v_x_5146_, v_numSectionVars_5143_, v_fnNames_5144_, v___x_5158_, v___x_5159_);
lean_dec_ref(v_x_5146_);
lean_dec_ref(v_x_5145_);
return v___x_5160_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1___boxed(lean_object* v_numSectionVars_5161_, lean_object* v_fnNames_5162_, lean_object* v_x_5163_, lean_object* v_x_5164_, lean_object* v_x_5165_){
_start:
{
uint8_t v_res_5166_; lean_object* v_r_5167_; 
v_res_5166_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(v_numSectionVars_5161_, v_fnNames_5162_, v_x_5163_, v_x_5164_, v_x_5165_);
lean_dec(v_x_5165_);
lean_dec_ref(v_fnNames_5162_);
lean_dec(v_numSectionVars_5161_);
v_r_5167_ = lean_box(v_res_5166_);
return v_r_5167_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(lean_object* v_fnNames_5168_, lean_object* v_numSectionVars_5169_, lean_object* v_a_5170_){
_start:
{
lean_object* v_dummy_5171_; lean_object* v_nargs_5172_; lean_object* v___x_5173_; lean_object* v___x_5174_; lean_object* v___x_5175_; uint8_t v___x_5176_; 
v_dummy_5171_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___redArg___lam__17___closed__0);
v_nargs_5172_ = l_Lean_Expr_getAppNumArgs(v_a_5170_);
lean_inc(v_nargs_5172_);
v___x_5173_ = lean_mk_array(v_nargs_5172_, v_dummy_5171_);
v___x_5174_ = lean_unsigned_to_nat(1u);
v___x_5175_ = lean_nat_sub(v_nargs_5172_, v___x_5174_);
lean_dec(v_nargs_5172_);
v___x_5176_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg_spec__1(v_numSectionVars_5169_, v_fnNames_5168_, v_a_5170_, v___x_5173_, v___x_5175_);
lean_dec(v___x_5175_);
return v___x_5176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg___boxed(lean_object* v_fnNames_5177_, lean_object* v_numSectionVars_5178_, lean_object* v_a_5179_){
_start:
{
uint8_t v_res_5180_; lean_object* v_r_5181_; 
v_res_5180_ = l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(v_fnNames_5177_, v_numSectionVars_5178_, v_a_5179_);
lean_dec(v_numSectionVars_5178_);
lean_dec_ref(v_fnNames_5177_);
v_r_5181_ = lean_box(v_res_5180_);
return v_r_5181_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(lean_object* v_fnNames_5182_, lean_object* v_numSectionVars_5183_, lean_object* v_as_5184_, size_t v_i_5185_, size_t v_stop_5186_){
_start:
{
uint8_t v___x_5187_; 
v___x_5187_ = lean_usize_dec_eq(v_i_5185_, v_stop_5186_);
if (v___x_5187_ == 0)
{
lean_object* v___x_5188_; uint8_t v___x_5189_; 
v___x_5188_ = lean_array_uget_borrowed(v_as_5184_, v_i_5185_);
lean_inc(v___x_5188_);
v___x_5189_ = l___private_Lean_Meta_Transform_0__Lean_Meta_unfoldIfArgIsAppOf_isInterestingArg(v_fnNames_5182_, v_numSectionVars_5183_, v___x_5188_);
if (v___x_5189_ == 0)
{
size_t v___x_5190_; size_t v___x_5191_; 
v___x_5190_ = ((size_t)1ULL);
v___x_5191_ = lean_usize_add(v_i_5185_, v___x_5190_);
v_i_5185_ = v___x_5191_;
goto _start;
}
else
{
return v___x_5189_;
}
}
else
{
uint8_t v___x_5193_; 
v___x_5193_ = 0;
return v___x_5193_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0___boxed(lean_object* v_fnNames_5194_, lean_object* v_numSectionVars_5195_, lean_object* v_as_5196_, lean_object* v_i_5197_, lean_object* v_stop_5198_){
_start:
{
size_t v_i_boxed_5199_; size_t v_stop_boxed_5200_; uint8_t v_res_5201_; lean_object* v_r_5202_; 
v_i_boxed_5199_ = lean_unbox_usize(v_i_5197_);
lean_dec(v_i_5197_);
v_stop_boxed_5200_ = lean_unbox_usize(v_stop_5198_);
lean_dec(v_stop_5198_);
v_res_5201_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(v_fnNames_5194_, v_numSectionVars_5195_, v_as_5196_, v_i_boxed_5199_, v_stop_boxed_5200_);
lean_dec_ref(v_as_5196_);
lean_dec(v_numSectionVars_5195_);
lean_dec_ref(v_fnNames_5194_);
v_r_5202_ = lean_box(v_res_5201_);
return v_r_5202_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(lean_object* v_fnNames_5203_, lean_object* v_numSectionVars_5204_, lean_object* v___x_5205_, lean_object* v_x_5206_, lean_object* v_x_5207_, lean_object* v___y_5208_, lean_object* v___y_5209_){
_start:
{
if (lean_obj_tag(v_x_5206_) == 5)
{
lean_object* v_fn_5214_; lean_object* v_arg_5215_; lean_object* v___x_5216_; 
v_fn_5214_ = lean_ctor_get(v_x_5206_, 0);
lean_inc_ref(v_fn_5214_);
v_arg_5215_ = lean_ctor_get(v_x_5206_, 1);
lean_inc_ref(v_arg_5215_);
lean_dec_ref(v_x_5206_);
v___x_5216_ = lean_array_push(v_x_5207_, v_arg_5215_);
v_x_5206_ = v_fn_5214_;
v_x_5207_ = v___x_5216_;
goto _start;
}
else
{
uint8_t v___x_5218_; 
v___x_5218_ = l_Lean_Expr_isConst(v_x_5206_);
if (v___x_5218_ == 0)
{
lean_dec_ref(v_x_5207_);
lean_dec_ref(v_x_5206_);
lean_dec_ref(v___x_5205_);
goto v___jp_5211_;
}
else
{
lean_object* v___x_5219_; lean_object* v___x_5220_; uint8_t v___x_5221_; 
v___x_5219_ = lean_unsigned_to_nat(0u);
v___x_5220_ = lean_array_get_size(v_x_5207_);
v___x_5221_ = lean_nat_dec_lt(v___x_5219_, v___x_5220_);
if (v___x_5221_ == 0)
{
lean_dec_ref(v_x_5207_);
lean_dec_ref(v_x_5206_);
lean_dec_ref(v___x_5205_);
goto v___jp_5211_;
}
else
{
if (v___x_5221_ == 0)
{
lean_dec_ref(v_x_5207_);
lean_dec_ref(v_x_5206_);
lean_dec_ref(v___x_5205_);
goto v___jp_5211_;
}
else
{
size_t v___x_5222_; size_t v___x_5223_; uint8_t v___x_5224_; 
v___x_5222_ = ((size_t)0ULL);
v___x_5223_ = lean_usize_of_nat(v___x_5220_);
v___x_5224_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__0(v_fnNames_5203_, v_numSectionVars_5204_, v_x_5207_, v___x_5222_, v___x_5223_);
if (v___x_5224_ == 0)
{
lean_dec_ref(v_x_5207_);
lean_dec_ref(v_x_5206_);
lean_dec_ref(v___x_5205_);
goto v___jp_5211_;
}
else
{
lean_object* v___x_5225_; uint8_t v___x_5226_; lean_object* v___x_5227_; 
v___x_5225_ = l_Lean_Expr_constName_x21(v_x_5206_);
v___x_5226_ = 0;
v___x_5227_ = l_Lean_Environment_find_x3f(v___x_5205_, v___x_5225_, v___x_5226_);
if (lean_obj_tag(v___x_5227_) == 1)
{
lean_object* v_val_5228_; 
v_val_5228_ = lean_ctor_get(v___x_5227_, 0);
lean_inc(v_val_5228_);
lean_dec_ref(v___x_5227_);
if (lean_obj_tag(v_val_5228_) == 2)
{
lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5232_; uint8_t v_isShared_5233_; uint8_t v_isSharedCheck_5254_; 
v___x_5229_ = l_Lean_Expr_constLevels_x21(v_x_5206_);
lean_dec_ref(v_x_5206_);
v___x_5230_ = l_Lean_Core_instantiateValueLevelParams(v_val_5228_, v___x_5229_, v___x_5218_, v___y_5208_, v___y_5209_);
v_isSharedCheck_5254_ = !lean_is_exclusive(v_val_5228_);
if (v_isSharedCheck_5254_ == 0)
{
lean_object* v_unused_5255_; 
v_unused_5255_ = lean_ctor_get(v_val_5228_, 0);
lean_dec(v_unused_5255_);
v___x_5232_ = v_val_5228_;
v_isShared_5233_ = v_isSharedCheck_5254_;
goto v_resetjp_5231_;
}
else
{
lean_dec(v_val_5228_);
v___x_5232_ = lean_box(0);
v_isShared_5233_ = v_isSharedCheck_5254_;
goto v_resetjp_5231_;
}
v_resetjp_5231_:
{
if (lean_obj_tag(v___x_5230_) == 0)
{
lean_object* v_a_5234_; lean_object* v___x_5236_; uint8_t v_isShared_5237_; uint8_t v_isSharedCheck_5245_; 
v_a_5234_ = lean_ctor_get(v___x_5230_, 0);
v_isSharedCheck_5245_ = !lean_is_exclusive(v___x_5230_);
if (v_isSharedCheck_5245_ == 0)
{
v___x_5236_ = v___x_5230_;
v_isShared_5237_ = v_isSharedCheck_5245_;
goto v_resetjp_5235_;
}
else
{
lean_inc(v_a_5234_);
lean_dec(v___x_5230_);
v___x_5236_ = lean_box(0);
v_isShared_5237_ = v_isSharedCheck_5245_;
goto v_resetjp_5235_;
}
v_resetjp_5235_:
{
lean_object* v___x_5238_; lean_object* v___x_5240_; 
v___x_5238_ = l_Lean_Expr_betaRev(v_a_5234_, v_x_5207_, v___x_5226_, v___x_5226_);
lean_dec_ref(v_x_5207_);
if (v_isShared_5233_ == 0)
{
lean_ctor_set_tag(v___x_5232_, 1);
lean_ctor_set(v___x_5232_, 0, v___x_5238_);
v___x_5240_ = v___x_5232_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5244_; 
v_reuseFailAlloc_5244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5244_, 0, v___x_5238_);
v___x_5240_ = v_reuseFailAlloc_5244_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
lean_object* v___x_5242_; 
if (v_isShared_5237_ == 0)
{
lean_ctor_set(v___x_5236_, 0, v___x_5240_);
v___x_5242_ = v___x_5236_;
goto v_reusejp_5241_;
}
else
{
lean_object* v_reuseFailAlloc_5243_; 
v_reuseFailAlloc_5243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5243_, 0, v___x_5240_);
v___x_5242_ = v_reuseFailAlloc_5243_;
goto v_reusejp_5241_;
}
v_reusejp_5241_:
{
return v___x_5242_;
}
}
}
}
else
{
lean_object* v_a_5246_; lean_object* v___x_5248_; uint8_t v_isShared_5249_; uint8_t v_isSharedCheck_5253_; 
lean_del_object(v___x_5232_);
lean_dec_ref(v_x_5207_);
v_a_5246_ = lean_ctor_get(v___x_5230_, 0);
v_isSharedCheck_5253_ = !lean_is_exclusive(v___x_5230_);
if (v_isSharedCheck_5253_ == 0)
{
v___x_5248_ = v___x_5230_;
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
else
{
lean_inc(v_a_5246_);
lean_dec(v___x_5230_);
v___x_5248_ = lean_box(0);
v_isShared_5249_ = v_isSharedCheck_5253_;
goto v_resetjp_5247_;
}
v_resetjp_5247_:
{
lean_object* v___x_5251_; 
if (v_isShared_5249_ == 0)
{
v___x_5251_ = v___x_5248_;
goto v_reusejp_5250_;
}
else
{
lean_object* v_reuseFailAlloc_5252_; 
v_reuseFailAlloc_5252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5252_, 0, v_a_5246_);
v___x_5251_ = v_reuseFailAlloc_5252_;
goto v_reusejp_5250_;
}
v_reusejp_5250_:
{
return v___x_5251_;
}
}
}
}
}
else
{
lean_dec(v_val_5228_);
lean_dec_ref(v_x_5207_);
lean_dec_ref(v_x_5206_);
goto v___jp_5211_;
}
}
else
{
lean_dec(v___x_5227_);
lean_dec_ref(v_x_5207_);
lean_dec_ref(v_x_5206_);
goto v___jp_5211_;
}
}
}
}
}
}
v___jp_5211_:
{
lean_object* v___x_5212_; lean_object* v___x_5213_; 
v___x_5212_ = lean_obj_once(&l_Lean_Core_betaReduce___lam__0___closed__0, &l_Lean_Core_betaReduce___lam__0___closed__0_once, _init_l_Lean_Core_betaReduce___lam__0___closed__0);
v___x_5213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5213_, 0, v___x_5212_);
return v___x_5213_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1___boxed(lean_object* v_fnNames_5256_, lean_object* v_numSectionVars_5257_, lean_object* v___x_5258_, lean_object* v_x_5259_, lean_object* v_x_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_){
_start:
{
lean_object* v_res_5264_; 
v_res_5264_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(v_fnNames_5256_, v_numSectionVars_5257_, v___x_5258_, v_x_5259_, v_x_5260_, v___y_5261_, v___y_5262_);
lean_dec(v___y_5262_);
lean_dec_ref(v___y_5261_);
lean_dec(v_numSectionVars_5257_);
lean_dec_ref(v_fnNames_5256_);
return v_res_5264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(lean_object* v_fnNames_5265_, lean_object* v_numSectionVars_5266_, lean_object* v_env_5267_, lean_object* v_e_5268_, lean_object* v___y_5269_, lean_object* v___y_5270_){
_start:
{
lean_object* v___x_5272_; lean_object* v___x_5273_; lean_object* v___x_5274_; 
v___x_5272_ = l_Lean_Expr_getAppNumArgs(v_e_5268_);
v___x_5273_ = lean_mk_empty_array_with_capacity(v___x_5272_);
lean_dec(v___x_5272_);
v___x_5274_ = l___private_Lean_Expr_0__Lean_Expr_withAppRevAux___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__1(v_fnNames_5265_, v_numSectionVars_5266_, v_env_5267_, v_e_5268_, v___x_5273_, v___y_5269_, v___y_5270_);
return v___x_5274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed(lean_object* v_fnNames_5275_, lean_object* v_numSectionVars_5276_, lean_object* v_env_5277_, lean_object* v_e_5278_, lean_object* v___y_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_){
_start:
{
lean_object* v_res_5282_; 
v_res_5282_ = l_Lean_Meta_unfoldIfArgIsAppOf___lam__1(v_fnNames_5275_, v_numSectionVars_5276_, v_env_5277_, v_e_5278_, v___y_5279_, v___y_5280_);
lean_dec(v___y_5280_);
lean_dec_ref(v___y_5279_);
lean_dec(v_numSectionVars_5276_);
lean_dec_ref(v_fnNames_5275_);
return v_res_5282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(lean_object* v_fnNames_5283_, lean_object* v_numSectionVars_5284_, lean_object* v_e_5285_, lean_object* v___f_5286_, lean_object* v___y_5287_, lean_object* v___y_5288_){
_start:
{
lean_object* v___x_5290_; lean_object* v_env_5291_; lean_object* v___f_5292_; lean_object* v___x_5293_; 
v___x_5290_ = lean_st_ref_get(v___y_5288_);
v_env_5291_ = lean_ctor_get(v___x_5290_, 0);
lean_inc_ref(v_env_5291_);
lean_dec(v___x_5290_);
v___f_5292_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldIfArgIsAppOf___lam__1___boxed), 7, 3);
lean_closure_set(v___f_5292_, 0, v_fnNames_5283_);
lean_closure_set(v___f_5292_, 1, v_numSectionVars_5284_);
lean_closure_set(v___f_5292_, 2, v_env_5291_);
v___x_5293_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5285_, v___f_5292_, v___f_5286_, v___y_5287_, v___y_5288_);
return v___x_5293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed(lean_object* v_fnNames_5294_, lean_object* v_numSectionVars_5295_, lean_object* v_e_5296_, lean_object* v___f_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_){
_start:
{
lean_object* v_res_5301_; 
v_res_5301_ = l_Lean_Meta_unfoldIfArgIsAppOf___lam__0(v_fnNames_5294_, v_numSectionVars_5295_, v_e_5296_, v___f_5297_, v___y_5298_, v___y_5299_);
lean_dec(v___y_5299_);
lean_dec_ref(v___y_5298_);
return v_res_5301_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(lean_object* v___y_5302_, uint8_t v_isExporting_5303_, lean_object* v___x_5304_, lean_object* v_a_x3f_5305_){
_start:
{
lean_object* v___x_5307_; lean_object* v_env_5308_; lean_object* v_nextMacroScope_5309_; lean_object* v_ngen_5310_; lean_object* v_auxDeclNGen_5311_; lean_object* v_traceState_5312_; lean_object* v_messages_5313_; lean_object* v_infoState_5314_; lean_object* v_snapshotTasks_5315_; lean_object* v___x_5317_; uint8_t v_isShared_5318_; uint8_t v_isSharedCheck_5326_; 
v___x_5307_ = lean_st_ref_take(v___y_5302_);
v_env_5308_ = lean_ctor_get(v___x_5307_, 0);
v_nextMacroScope_5309_ = lean_ctor_get(v___x_5307_, 1);
v_ngen_5310_ = lean_ctor_get(v___x_5307_, 2);
v_auxDeclNGen_5311_ = lean_ctor_get(v___x_5307_, 3);
v_traceState_5312_ = lean_ctor_get(v___x_5307_, 4);
v_messages_5313_ = lean_ctor_get(v___x_5307_, 6);
v_infoState_5314_ = lean_ctor_get(v___x_5307_, 7);
v_snapshotTasks_5315_ = lean_ctor_get(v___x_5307_, 8);
v_isSharedCheck_5326_ = !lean_is_exclusive(v___x_5307_);
if (v_isSharedCheck_5326_ == 0)
{
lean_object* v_unused_5327_; 
v_unused_5327_ = lean_ctor_get(v___x_5307_, 5);
lean_dec(v_unused_5327_);
v___x_5317_ = v___x_5307_;
v_isShared_5318_ = v_isSharedCheck_5326_;
goto v_resetjp_5316_;
}
else
{
lean_inc(v_snapshotTasks_5315_);
lean_inc(v_infoState_5314_);
lean_inc(v_messages_5313_);
lean_inc(v_traceState_5312_);
lean_inc(v_auxDeclNGen_5311_);
lean_inc(v_ngen_5310_);
lean_inc(v_nextMacroScope_5309_);
lean_inc(v_env_5308_);
lean_dec(v___x_5307_);
v___x_5317_ = lean_box(0);
v_isShared_5318_ = v_isSharedCheck_5326_;
goto v_resetjp_5316_;
}
v_resetjp_5316_:
{
lean_object* v___x_5319_; lean_object* v___x_5321_; 
v___x_5319_ = l_Lean_Environment_setExporting(v_env_5308_, v_isExporting_5303_);
if (v_isShared_5318_ == 0)
{
lean_ctor_set(v___x_5317_, 5, v___x_5304_);
lean_ctor_set(v___x_5317_, 0, v___x_5319_);
v___x_5321_ = v___x_5317_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5325_; 
v_reuseFailAlloc_5325_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5325_, 0, v___x_5319_);
lean_ctor_set(v_reuseFailAlloc_5325_, 1, v_nextMacroScope_5309_);
lean_ctor_set(v_reuseFailAlloc_5325_, 2, v_ngen_5310_);
lean_ctor_set(v_reuseFailAlloc_5325_, 3, v_auxDeclNGen_5311_);
lean_ctor_set(v_reuseFailAlloc_5325_, 4, v_traceState_5312_);
lean_ctor_set(v_reuseFailAlloc_5325_, 5, v___x_5304_);
lean_ctor_set(v_reuseFailAlloc_5325_, 6, v_messages_5313_);
lean_ctor_set(v_reuseFailAlloc_5325_, 7, v_infoState_5314_);
lean_ctor_set(v_reuseFailAlloc_5325_, 8, v_snapshotTasks_5315_);
v___x_5321_ = v_reuseFailAlloc_5325_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; 
v___x_5322_ = lean_st_ref_set(v___y_5302_, v___x_5321_);
v___x_5323_ = lean_box(0);
v___x_5324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5324_, 0, v___x_5323_);
return v___x_5324_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v___y_5328_, lean_object* v_isExporting_5329_, lean_object* v___x_5330_, lean_object* v_a_x3f_5331_, lean_object* v___y_5332_){
_start:
{
uint8_t v_isExporting_boxed_5333_; lean_object* v_res_5334_; 
v_isExporting_boxed_5333_ = lean_unbox(v_isExporting_5329_);
v_res_5334_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5328_, v_isExporting_boxed_5333_, v___x_5330_, v_a_x3f_5331_);
lean_dec(v_a_x3f_5331_);
lean_dec(v___y_5328_);
return v_res_5334_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(lean_object* v_x_5335_, uint8_t v_isExporting_5336_, lean_object* v___y_5337_, lean_object* v___y_5338_){
_start:
{
lean_object* v___x_5340_; lean_object* v_env_5341_; uint8_t v_isExporting_5342_; lean_object* v___x_5343_; lean_object* v_env_5344_; lean_object* v_nextMacroScope_5345_; lean_object* v_ngen_5346_; lean_object* v_auxDeclNGen_5347_; lean_object* v_traceState_5348_; lean_object* v_messages_5349_; lean_object* v_infoState_5350_; lean_object* v_snapshotTasks_5351_; lean_object* v___x_5353_; uint8_t v_isShared_5354_; uint8_t v_isSharedCheck_5390_; 
v___x_5340_ = lean_st_ref_get(v___y_5338_);
v_env_5341_ = lean_ctor_get(v___x_5340_, 0);
lean_inc_ref(v_env_5341_);
lean_dec(v___x_5340_);
v_isExporting_5342_ = lean_ctor_get_uint8(v_env_5341_, sizeof(void*)*8);
lean_dec_ref(v_env_5341_);
v___x_5343_ = lean_st_ref_take(v___y_5338_);
v_env_5344_ = lean_ctor_get(v___x_5343_, 0);
v_nextMacroScope_5345_ = lean_ctor_get(v___x_5343_, 1);
v_ngen_5346_ = lean_ctor_get(v___x_5343_, 2);
v_auxDeclNGen_5347_ = lean_ctor_get(v___x_5343_, 3);
v_traceState_5348_ = lean_ctor_get(v___x_5343_, 4);
v_messages_5349_ = lean_ctor_get(v___x_5343_, 6);
v_infoState_5350_ = lean_ctor_get(v___x_5343_, 7);
v_snapshotTasks_5351_ = lean_ctor_get(v___x_5343_, 8);
v_isSharedCheck_5390_ = !lean_is_exclusive(v___x_5343_);
if (v_isSharedCheck_5390_ == 0)
{
lean_object* v_unused_5391_; 
v_unused_5391_ = lean_ctor_get(v___x_5343_, 5);
lean_dec(v_unused_5391_);
v___x_5353_ = v___x_5343_;
v_isShared_5354_ = v_isSharedCheck_5390_;
goto v_resetjp_5352_;
}
else
{
lean_inc(v_snapshotTasks_5351_);
lean_inc(v_infoState_5350_);
lean_inc(v_messages_5349_);
lean_inc(v_traceState_5348_);
lean_inc(v_auxDeclNGen_5347_);
lean_inc(v_ngen_5346_);
lean_inc(v_nextMacroScope_5345_);
lean_inc(v_env_5344_);
lean_dec(v___x_5343_);
v___x_5353_ = lean_box(0);
v_isShared_5354_ = v_isSharedCheck_5390_;
goto v_resetjp_5352_;
}
v_resetjp_5352_:
{
lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5358_; 
v___x_5355_ = l_Lean_Environment_setExporting(v_env_5344_, v_isExporting_5336_);
v___x_5356_ = lean_obj_once(&l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2, &l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2_once, _init_l_Lean_setEnv___at___00Lean_Meta_unfoldDeclsFrom_spec__0___redArg___closed__2);
if (v_isShared_5354_ == 0)
{
lean_ctor_set(v___x_5353_, 5, v___x_5356_);
lean_ctor_set(v___x_5353_, 0, v___x_5355_);
v___x_5358_ = v___x_5353_;
goto v_reusejp_5357_;
}
else
{
lean_object* v_reuseFailAlloc_5389_; 
v_reuseFailAlloc_5389_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5389_, 0, v___x_5355_);
lean_ctor_set(v_reuseFailAlloc_5389_, 1, v_nextMacroScope_5345_);
lean_ctor_set(v_reuseFailAlloc_5389_, 2, v_ngen_5346_);
lean_ctor_set(v_reuseFailAlloc_5389_, 3, v_auxDeclNGen_5347_);
lean_ctor_set(v_reuseFailAlloc_5389_, 4, v_traceState_5348_);
lean_ctor_set(v_reuseFailAlloc_5389_, 5, v___x_5356_);
lean_ctor_set(v_reuseFailAlloc_5389_, 6, v_messages_5349_);
lean_ctor_set(v_reuseFailAlloc_5389_, 7, v_infoState_5350_);
lean_ctor_set(v_reuseFailAlloc_5389_, 8, v_snapshotTasks_5351_);
v___x_5358_ = v_reuseFailAlloc_5389_;
goto v_reusejp_5357_;
}
v_reusejp_5357_:
{
lean_object* v___x_5359_; lean_object* v_r_5360_; 
v___x_5359_ = lean_st_ref_set(v___y_5338_, v___x_5358_);
lean_inc(v___y_5338_);
lean_inc_ref(v___y_5337_);
v_r_5360_ = lean_apply_3(v_x_5335_, v___y_5337_, v___y_5338_, lean_box(0));
if (lean_obj_tag(v_r_5360_) == 0)
{
lean_object* v_a_5361_; lean_object* v___x_5363_; uint8_t v_isShared_5364_; uint8_t v_isSharedCheck_5377_; 
v_a_5361_ = lean_ctor_get(v_r_5360_, 0);
v_isSharedCheck_5377_ = !lean_is_exclusive(v_r_5360_);
if (v_isSharedCheck_5377_ == 0)
{
v___x_5363_ = v_r_5360_;
v_isShared_5364_ = v_isSharedCheck_5377_;
goto v_resetjp_5362_;
}
else
{
lean_inc(v_a_5361_);
lean_dec(v_r_5360_);
v___x_5363_ = lean_box(0);
v_isShared_5364_ = v_isSharedCheck_5377_;
goto v_resetjp_5362_;
}
v_resetjp_5362_:
{
lean_object* v___x_5366_; 
lean_inc(v_a_5361_);
if (v_isShared_5364_ == 0)
{
lean_ctor_set_tag(v___x_5363_, 1);
v___x_5366_ = v___x_5363_;
goto v_reusejp_5365_;
}
else
{
lean_object* v_reuseFailAlloc_5376_; 
v_reuseFailAlloc_5376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5376_, 0, v_a_5361_);
v___x_5366_ = v_reuseFailAlloc_5376_;
goto v_reusejp_5365_;
}
v_reusejp_5365_:
{
lean_object* v___x_5367_; lean_object* v___x_5369_; uint8_t v_isShared_5370_; uint8_t v_isSharedCheck_5374_; 
v___x_5367_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5338_, v_isExporting_5342_, v___x_5356_, v___x_5366_);
lean_dec_ref(v___x_5366_);
v_isSharedCheck_5374_ = !lean_is_exclusive(v___x_5367_);
if (v_isSharedCheck_5374_ == 0)
{
lean_object* v_unused_5375_; 
v_unused_5375_ = lean_ctor_get(v___x_5367_, 0);
lean_dec(v_unused_5375_);
v___x_5369_ = v___x_5367_;
v_isShared_5370_ = v_isSharedCheck_5374_;
goto v_resetjp_5368_;
}
else
{
lean_dec(v___x_5367_);
v___x_5369_ = lean_box(0);
v_isShared_5370_ = v_isSharedCheck_5374_;
goto v_resetjp_5368_;
}
v_resetjp_5368_:
{
lean_object* v___x_5372_; 
if (v_isShared_5370_ == 0)
{
lean_ctor_set(v___x_5369_, 0, v_a_5361_);
v___x_5372_ = v___x_5369_;
goto v_reusejp_5371_;
}
else
{
lean_object* v_reuseFailAlloc_5373_; 
v_reuseFailAlloc_5373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5373_, 0, v_a_5361_);
v___x_5372_ = v_reuseFailAlloc_5373_;
goto v_reusejp_5371_;
}
v_reusejp_5371_:
{
return v___x_5372_;
}
}
}
}
}
else
{
lean_object* v_a_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5382_; uint8_t v_isShared_5383_; uint8_t v_isSharedCheck_5387_; 
v_a_5378_ = lean_ctor_get(v_r_5360_, 0);
lean_inc(v_a_5378_);
lean_dec_ref(v_r_5360_);
v___x_5379_ = lean_box(0);
v___x_5380_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___lam__0(v___y_5338_, v_isExporting_5342_, v___x_5356_, v___x_5379_);
v_isSharedCheck_5387_ = !lean_is_exclusive(v___x_5380_);
if (v_isSharedCheck_5387_ == 0)
{
lean_object* v_unused_5388_; 
v_unused_5388_ = lean_ctor_get(v___x_5380_, 0);
lean_dec(v_unused_5388_);
v___x_5382_ = v___x_5380_;
v_isShared_5383_ = v_isSharedCheck_5387_;
goto v_resetjp_5381_;
}
else
{
lean_dec(v___x_5380_);
v___x_5382_ = lean_box(0);
v_isShared_5383_ = v_isSharedCheck_5387_;
goto v_resetjp_5381_;
}
v_resetjp_5381_:
{
lean_object* v___x_5385_; 
if (v_isShared_5383_ == 0)
{
lean_ctor_set_tag(v___x_5382_, 1);
lean_ctor_set(v___x_5382_, 0, v_a_5378_);
v___x_5385_ = v___x_5382_;
goto v_reusejp_5384_;
}
else
{
lean_object* v_reuseFailAlloc_5386_; 
v_reuseFailAlloc_5386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5386_, 0, v_a_5378_);
v___x_5385_ = v_reuseFailAlloc_5386_;
goto v_reusejp_5384_;
}
v_reusejp_5384_:
{
return v___x_5385_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg___boxed(lean_object* v_x_5392_, lean_object* v_isExporting_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_){
_start:
{
uint8_t v_isExporting_boxed_5397_; lean_object* v_res_5398_; 
v_isExporting_boxed_5397_ = lean_unbox(v_isExporting_5393_);
v_res_5398_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5392_, v_isExporting_boxed_5397_, v___y_5394_, v___y_5395_);
lean_dec(v___y_5395_);
lean_dec_ref(v___y_5394_);
return v_res_5398_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(lean_object* v_x_5399_, uint8_t v_when_5400_, lean_object* v___y_5401_, lean_object* v___y_5402_){
_start:
{
if (v_when_5400_ == 0)
{
lean_object* v___x_5404_; 
lean_inc(v___y_5402_);
lean_inc_ref(v___y_5401_);
v___x_5404_ = lean_apply_3(v_x_5399_, v___y_5401_, v___y_5402_, lean_box(0));
return v___x_5404_;
}
else
{
uint8_t v___x_5405_; lean_object* v___x_5406_; 
v___x_5405_ = 0;
v___x_5406_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5399_, v___x_5405_, v___y_5401_, v___y_5402_);
return v___x_5406_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg___boxed(lean_object* v_x_5407_, lean_object* v_when_5408_, lean_object* v___y_5409_, lean_object* v___y_5410_, lean_object* v___y_5411_){
_start:
{
uint8_t v_when_boxed_5412_; lean_object* v_res_5413_; 
v_when_boxed_5412_ = lean_unbox(v_when_5408_);
v_res_5413_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v_x_5407_, v_when_boxed_5412_, v___y_5409_, v___y_5410_);
lean_dec(v___y_5410_);
lean_dec_ref(v___y_5409_);
return v_res_5413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf(lean_object* v_fnNames_5414_, lean_object* v_numSectionVars_5415_, lean_object* v_e_5416_, lean_object* v_a_5417_, lean_object* v_a_5418_){
_start:
{
lean_object* v___f_5420_; lean_object* v___f_5421_; uint8_t v___x_5422_; lean_object* v___x_5423_; 
v___f_5420_ = lean_obj_once(&l_Lean_Core_betaReduce___closed__1, &l_Lean_Core_betaReduce___closed__1_once, _init_l_Lean_Core_betaReduce___closed__1);
v___f_5421_ = lean_alloc_closure((void*)(l_Lean_Meta_unfoldIfArgIsAppOf___lam__0___boxed), 7, 4);
lean_closure_set(v___f_5421_, 0, v_fnNames_5414_);
lean_closure_set(v___f_5421_, 1, v_numSectionVars_5415_);
lean_closure_set(v___f_5421_, 2, v_e_5416_);
lean_closure_set(v___f_5421_, 3, v___f_5420_);
v___x_5422_ = 1;
v___x_5423_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v___f_5421_, v___x_5422_, v_a_5417_, v_a_5418_);
return v___x_5423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unfoldIfArgIsAppOf___boxed(lean_object* v_fnNames_5424_, lean_object* v_numSectionVars_5425_, lean_object* v_e_5426_, lean_object* v_a_5427_, lean_object* v_a_5428_, lean_object* v_a_5429_){
_start:
{
lean_object* v_res_5430_; 
v_res_5430_ = l_Lean_Meta_unfoldIfArgIsAppOf(v_fnNames_5424_, v_numSectionVars_5425_, v_e_5426_, v_a_5427_, v_a_5428_);
lean_dec(v_a_5428_);
lean_dec_ref(v_a_5427_);
return v_res_5430_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(lean_object* v_00_u03b1_5431_, lean_object* v_x_5432_, uint8_t v_isExporting_5433_, lean_object* v___y_5434_, lean_object* v___y_5435_){
_start:
{
lean_object* v___x_5437_; 
v___x_5437_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___redArg(v_x_5432_, v_isExporting_5433_, v___y_5434_, v___y_5435_);
return v___x_5437_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2___boxed(lean_object* v_00_u03b1_5438_, lean_object* v_x_5439_, lean_object* v_isExporting_5440_, lean_object* v___y_5441_, lean_object* v___y_5442_, lean_object* v___y_5443_){
_start:
{
uint8_t v_isExporting_boxed_5444_; lean_object* v_res_5445_; 
v_isExporting_boxed_5444_ = lean_unbox(v_isExporting_5440_);
v_res_5445_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2_spec__2(v_00_u03b1_5438_, v_x_5439_, v_isExporting_boxed_5444_, v___y_5441_, v___y_5442_);
lean_dec(v___y_5442_);
lean_dec_ref(v___y_5441_);
return v_res_5445_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(lean_object* v_00_u03b1_5446_, lean_object* v_x_5447_, uint8_t v_when_5448_, lean_object* v___y_5449_, lean_object* v___y_5450_){
_start:
{
lean_object* v___x_5452_; 
v___x_5452_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___redArg(v_x_5447_, v_when_5448_, v___y_5449_, v___y_5450_);
return v___x_5452_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2___boxed(lean_object* v_00_u03b1_5453_, lean_object* v_x_5454_, lean_object* v_when_5455_, lean_object* v___y_5456_, lean_object* v___y_5457_, lean_object* v___y_5458_){
_start:
{
uint8_t v_when_boxed_5459_; lean_object* v_res_5460_; 
v_when_boxed_5459_ = lean_unbox(v_when_5455_);
v_res_5460_ = l_Lean_withoutExporting___at___00Lean_Meta_unfoldIfArgIsAppOf_spec__2(v_00_u03b1_5453_, v_x_5454_, v_when_boxed_5459_, v___y_5456_, v___y_5457_);
lean_dec(v___y_5457_);
lean_dec_ref(v___y_5456_);
return v_res_5460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(lean_object* v_x_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_){
_start:
{
lean_object* v___x_5465_; lean_object* v___x_5466_; 
v___x_5465_ = lean_obj_once(&l_Lean_Core_betaReduce___lam__0___closed__0, &l_Lean_Core_betaReduce___lam__0___closed__0_once, _init_l_Lean_Core_betaReduce___lam__0___closed__0);
v___x_5466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5466_, 0, v___x_5465_);
return v___x_5466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed(lean_object* v_x_5467_, lean_object* v___y_5468_, lean_object* v___y_5469_, lean_object* v___y_5470_){
_start:
{
lean_object* v_res_5471_; 
v_res_5471_ = l_Lean_Meta_eraseInaccessibleAnnotations___lam__0(v_x_5467_, v___y_5468_, v___y_5469_);
lean_dec(v___y_5469_);
lean_dec_ref(v___y_5468_);
lean_dec_ref(v_x_5467_);
return v_res_5471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(lean_object* v_e_5472_, lean_object* v___y_5473_, lean_object* v___y_5474_){
_start:
{
lean_object* v___y_5477_; lean_object* v___x_5480_; 
v___x_5480_ = l_Lean_inaccessible_x3f(v_e_5472_);
if (lean_obj_tag(v___x_5480_) == 1)
{
lean_object* v_val_5481_; 
lean_dec_ref(v_e_5472_);
v_val_5481_ = lean_ctor_get(v___x_5480_, 0);
lean_inc(v_val_5481_);
lean_dec_ref(v___x_5480_);
v___y_5477_ = v_val_5481_;
goto v___jp_5476_;
}
else
{
lean_dec(v___x_5480_);
v___y_5477_ = v_e_5472_;
goto v___jp_5476_;
}
v___jp_5476_:
{
lean_object* v___x_5478_; lean_object* v___x_5479_; 
v___x_5478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5478_, 0, v___y_5477_);
v___x_5479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5479_, 0, v___x_5478_);
return v___x_5479_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed(lean_object* v_e_5482_, lean_object* v___y_5483_, lean_object* v___y_5484_, lean_object* v___y_5485_){
_start:
{
lean_object* v_res_5486_; 
v_res_5486_ = l_Lean_Meta_eraseInaccessibleAnnotations___lam__1(v_e_5482_, v___y_5483_, v___y_5484_);
lean_dec(v___y_5484_);
lean_dec_ref(v___y_5483_);
return v_res_5486_;
}
}
static lean_object* _init_l_Lean_Meta_eraseInaccessibleAnnotations___closed__0(void){
_start:
{
lean_object* v___f_5487_; 
v___f_5487_ = lean_alloc_closure((void*)(l_Lean_Meta_eraseInaccessibleAnnotations___lam__0___boxed), 4, 0);
return v___f_5487_;
}
}
static lean_object* _init_l_Lean_Meta_eraseInaccessibleAnnotations___closed__1(void){
_start:
{
lean_object* v___f_5488_; 
v___f_5488_ = lean_alloc_closure((void*)(l_Lean_Meta_eraseInaccessibleAnnotations___lam__1___boxed), 4, 0);
return v___f_5488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations(lean_object* v_e_5489_, lean_object* v_a_5490_, lean_object* v_a_5491_){
_start:
{
lean_object* v___f_5493_; lean_object* v___f_5494_; lean_object* v___x_5495_; 
v___f_5493_ = lean_obj_once(&l_Lean_Meta_eraseInaccessibleAnnotations___closed__0, &l_Lean_Meta_eraseInaccessibleAnnotations___closed__0_once, _init_l_Lean_Meta_eraseInaccessibleAnnotations___closed__0);
v___f_5494_ = lean_obj_once(&l_Lean_Meta_eraseInaccessibleAnnotations___closed__1, &l_Lean_Meta_eraseInaccessibleAnnotations___closed__1_once, _init_l_Lean_Meta_eraseInaccessibleAnnotations___closed__1);
v___x_5495_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5489_, v___f_5493_, v___f_5494_, v_a_5490_, v_a_5491_);
return v___x_5495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_eraseInaccessibleAnnotations___boxed(lean_object* v_e_5496_, lean_object* v_a_5497_, lean_object* v_a_5498_, lean_object* v_a_5499_){
_start:
{
lean_object* v_res_5500_; 
v_res_5500_ = l_Lean_Meta_eraseInaccessibleAnnotations(v_e_5496_, v_a_5497_, v_a_5498_);
lean_dec(v_a_5498_);
lean_dec_ref(v_a_5497_);
return v_res_5500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1(lean_object* v_e_5501_, lean_object* v___y_5502_, lean_object* v___y_5503_){
_start:
{
lean_object* v___y_5506_; lean_object* v___x_5509_; 
v___x_5509_ = l_Lean_patternWithRef_x3f(v_e_5501_);
if (lean_obj_tag(v___x_5509_) == 1)
{
lean_object* v_val_5510_; lean_object* v_snd_5511_; 
lean_dec_ref(v_e_5501_);
v_val_5510_ = lean_ctor_get(v___x_5509_, 0);
lean_inc(v_val_5510_);
lean_dec_ref(v___x_5509_);
v_snd_5511_ = lean_ctor_get(v_val_5510_, 1);
lean_inc(v_snd_5511_);
lean_dec(v_val_5510_);
v___y_5506_ = v_snd_5511_;
goto v___jp_5505_;
}
else
{
lean_dec(v___x_5509_);
v___y_5506_ = v_e_5501_;
goto v___jp_5505_;
}
v___jp_5505_:
{
lean_object* v___x_5507_; lean_object* v___x_5508_; 
v___x_5507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5507_, 0, v___y_5506_);
v___x_5508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5508_, 0, v___x_5507_);
return v___x_5508_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed(lean_object* v_e_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_){
_start:
{
lean_object* v_res_5516_; 
v_res_5516_ = l_Lean_Meta_erasePatternRefAnnotations___lam__1(v_e_5512_, v___y_5513_, v___y_5514_);
lean_dec(v___y_5514_);
lean_dec_ref(v___y_5513_);
return v_res_5516_;
}
}
static lean_object* _init_l_Lean_Meta_erasePatternRefAnnotations___closed__0(void){
_start:
{
lean_object* v___f_5517_; 
v___f_5517_ = lean_alloc_closure((void*)(l_Lean_Meta_erasePatternRefAnnotations___lam__1___boxed), 4, 0);
return v___f_5517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations(lean_object* v_e_5518_, lean_object* v_a_5519_, lean_object* v_a_5520_){
_start:
{
lean_object* v___f_5522_; lean_object* v___f_5523_; lean_object* v___x_5524_; 
v___f_5522_ = lean_obj_once(&l_Lean_Meta_eraseInaccessibleAnnotations___closed__0, &l_Lean_Meta_eraseInaccessibleAnnotations___closed__0_once, _init_l_Lean_Meta_eraseInaccessibleAnnotations___closed__0);
v___f_5523_ = lean_obj_once(&l_Lean_Meta_erasePatternRefAnnotations___closed__0, &l_Lean_Meta_erasePatternRefAnnotations___closed__0_once, _init_l_Lean_Meta_erasePatternRefAnnotations___closed__0);
v___x_5524_ = l_Lean_Core_transform___at___00Lean_Core_betaReduce_spec__0(v_e_5518_, v___f_5522_, v___f_5523_, v_a_5519_, v_a_5520_);
return v___x_5524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_erasePatternRefAnnotations___boxed(lean_object* v_e_5525_, lean_object* v_a_5526_, lean_object* v_a_5527_, lean_object* v_a_5528_){
_start:
{
lean_object* v_res_5529_; 
v_res_5529_ = l_Lean_Meta_erasePatternRefAnnotations(v_e_5525_, v_a_5526_, v_a_5527_);
lean_dec(v_a_5527_);
lean_dec_ref(v_a_5526_);
return v_res_5529_;
}
}
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedTransformStep_default = _init_l_Lean_instInhabitedTransformStep_default();
lean_mark_persistent(l_Lean_instInhabitedTransformStep_default);
l_Lean_instInhabitedTransformStep = _init_l_Lean_instInhabitedTransformStep();
lean_mark_persistent(l_Lean_instInhabitedTransformStep);
l_Lean_instReprTransformStep = _init_l_Lean_instReprTransformStep();
lean_mark_persistent(l_Lean_instReprTransformStep);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Transform(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Transform(builtin);
}
#ifdef __cplusplus
}
#endif
