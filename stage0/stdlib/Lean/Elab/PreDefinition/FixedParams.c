// Lean compiler output
// Module: Lean.Elab.PreDefinition.FixedParams
// Imports: public import Lean.Elab.PreDefinition.Basic import Init.Omega
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
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instInhabitedMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
lean_object* l_Lean_Expr_constName_x21(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Array_instInhabited(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_instDecidableEqNat___boxed(lean_object*, lean_object*);
uint8_t l_Option_instDecidableEq___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLetFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfoNArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkSort(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Expr_bindingBody_x21(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Array_range(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Std_Format_indentD(lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_instInhabitedPreDefinition_default;
uint8_t l_Lean_Expr_isFVar(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0;
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParams_Info_setVarying___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParams_Info_setVarying___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object*, lean_object*);
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParams_instToFormatInfo___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_instToFormatInfo;
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1;
static lean_once_cell_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getParamRevDeps___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getParamRevDeps___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getParamRevDeps___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getParamRevDeps___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getFixedParamsInfo___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamsInfo___closed__0;
static lean_once_cell_t l_Lean_Elab_getFixedParamsInfo___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamsInfo___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0;
static lean_once_cell_t l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedFixedParamPerms_default;
LEAN_EXPORT lean_object* l_Lean_Elab_instInhabitedFixedParamPerms;
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object*, lean_object*);
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__0;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__1;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__2;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__4;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__7;
static lean_once_cell_t l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8;
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object*);
static lean_once_cell_t l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0;
static lean_once_cell_t l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1;
static lean_once_cell_t l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2;
static lean_once_cell_t l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17;
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_instReprFixedParamPerms___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_instReprFixedParamPerms___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__0;
static lean_once_cell_t l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0;
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1;
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2;
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3;
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4;
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5;
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6;
static lean_once_cell_t l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__0;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__1;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__2;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__3;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__4;
static lean_once_cell_t l_Lean_Elab_FixedParamPerms_erase___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_FixedParamPerms_erase___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(lean_object* v_revDeps_1_, size_t v_sz_2_, size_t v_i_3_, lean_object* v_bs_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_lt(v_i_3_, v_sz_2_);
if (v___x_5_ == 0)
{
return v_bs_4_;
}
else
{
lean_object* v_v_6_; lean_object* v___x_7_; lean_object* v_bs_x27_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; size_t v___x_15_; size_t v___x_16_; lean_object* v___x_17_; 
v_v_6_ = lean_array_uget(v_bs_4_, v_i_3_);
v___x_7_ = lean_unsigned_to_nat(0u);
v_bs_x27_8_ = lean_array_uset(v_bs_4_, v_i_3_, v___x_7_);
v___x_9_ = lean_array_get_size(v_v_6_);
lean_dec(v_v_6_);
v___x_10_ = lean_array_get_size(v_revDeps_1_);
v___x_11_ = lean_box(0);
v___x_12_ = lean_mk_array(v___x_10_, v___x_11_);
v___x_13_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
v___x_14_ = lean_mk_array(v___x_9_, v___x_13_);
v___x_15_ = ((size_t)1ULL);
v___x_16_ = lean_usize_add(v_i_3_, v___x_15_);
v___x_17_ = lean_array_uset(v_bs_x27_8_, v_i_3_, v___x_14_);
v_i_3_ = v___x_16_;
v_bs_4_ = v___x_17_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0___boxed(lean_object* v_revDeps_19_, lean_object* v_sz_20_, lean_object* v_i_21_, lean_object* v_bs_22_){
_start:
{
size_t v_sz_boxed_23_; size_t v_i_boxed_24_; lean_object* v_res_25_; 
v_sz_boxed_23_ = lean_unbox_usize(v_sz_20_);
lean_dec(v_sz_20_);
v_i_boxed_24_ = lean_unbox_usize(v_i_21_);
lean_dec(v_i_21_);
v_res_25_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_19_, v_sz_boxed_23_, v_i_boxed_24_, v_bs_22_);
lean_dec_ref(v_revDeps_19_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_init(lean_object* v_revDeps_26_){
_start:
{
size_t v_sz_27_; size_t v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_sz_27_ = lean_array_size(v_revDeps_26_);
v___x_28_ = ((size_t)0ULL);
lean_inc_ref(v_revDeps_26_);
v___x_29_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParams_Info_init_spec__0(v_revDeps_26_, v_sz_27_, v___x_28_, v_revDeps_26_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v_revDeps_26_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(lean_object* v_i_31_, lean_object* v_as_32_, lean_object* v_i_33_, lean_object* v_j_34_, lean_object* v_bs_35_){
_start:
{
lean_object* v_zero_36_; uint8_t v_isZero_37_; 
v_zero_36_ = lean_unsigned_to_nat(0u);
v_isZero_37_ = lean_nat_dec_eq(v_i_33_, v_zero_36_);
if (v_isZero_37_ == 1)
{
lean_dec(v_j_34_);
lean_dec(v_i_33_);
return v_bs_35_;
}
else
{
lean_object* v_one_38_; lean_object* v_n_39_; lean_object* v___y_41_; lean_object* v___x_45_; 
v_one_38_ = lean_unsigned_to_nat(1u);
v_n_39_ = lean_nat_sub(v_i_33_, v_one_38_);
lean_dec(v_i_33_);
v___x_45_ = lean_array_fget(v_as_32_, v_j_34_);
if (lean_obj_tag(v___x_45_) == 0)
{
v___y_41_ = v___x_45_;
goto v___jp_40_;
}
else
{
lean_object* v_val_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_55_; 
v_val_46_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_55_ == 0)
{
v___x_48_ = v___x_45_;
v_isShared_49_ = v_isSharedCheck_55_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_val_46_);
lean_dec(v___x_45_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_55_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_51_; 
lean_inc(v_j_34_);
if (v_isShared_49_ == 0)
{
lean_ctor_set(v___x_48_, 0, v_j_34_);
v___x_51_ = v___x_48_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_j_34_);
v___x_51_ = v_reuseFailAlloc_54_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = lean_array_set(v_val_46_, v_i_31_, v___x_51_);
v___x_53_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
v___y_41_ = v___x_53_;
goto v___jp_40_;
}
}
}
v___jp_40_:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_nat_add(v_j_34_, v_one_38_);
lean_dec(v_j_34_);
v___x_43_ = lean_array_push(v_bs_35_, v___y_41_);
v_i_33_ = v_n_39_;
v_j_34_ = v___x_42_;
v_bs_35_ = v___x_43_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg___boxed(lean_object* v_i_56_, lean_object* v_as_57_, lean_object* v_i_58_, lean_object* v_j_59_, lean_object* v_bs_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_56_, v_as_57_, v_i_58_, v_j_59_, v_bs_60_);
lean_dec_ref(v_as_57_);
lean_dec(v_i_56_);
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(lean_object* v_as_62_, lean_object* v_i_63_, lean_object* v_j_64_, lean_object* v_bs_65_){
_start:
{
lean_object* v_zero_66_; uint8_t v_isZero_67_; 
v_zero_66_ = lean_unsigned_to_nat(0u);
v_isZero_67_ = lean_nat_dec_eq(v_i_63_, v_zero_66_);
if (v_isZero_67_ == 1)
{
lean_dec(v_j_64_);
lean_dec(v_i_63_);
return v_bs_65_;
}
else
{
lean_object* v_one_68_; lean_object* v_n_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_one_68_ = lean_unsigned_to_nat(1u);
v_n_69_ = lean_nat_sub(v_i_63_, v_one_68_);
lean_dec(v_i_63_);
v___x_70_ = lean_array_fget_borrowed(v_as_62_, v_j_64_);
v___x_71_ = lean_array_get_size(v___x_70_);
v___x_72_ = lean_mk_empty_array_with_capacity(v___x_71_);
v___x_73_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_j_64_, v___x_70_, v___x_71_, v_zero_66_, v___x_72_);
v___x_74_ = lean_nat_add(v_j_64_, v_one_68_);
lean_dec(v_j_64_);
v___x_75_ = lean_array_push(v_bs_65_, v___x_73_);
v_i_63_ = v_n_69_;
v_j_64_ = v___x_74_;
v_bs_65_ = v___x_75_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg___boxed(lean_object* v_as_77_, lean_object* v_i_78_, lean_object* v_j_79_, lean_object* v_bs_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_as_77_, v_i_78_, v_j_79_, v_bs_80_);
lean_dec_ref(v_as_77_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_addSelfCalls(lean_object* v_info_82_){
_start:
{
lean_object* v_graph_83_; lean_object* v_revDeps_84_; lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_95_; 
v_graph_83_ = lean_ctor_get(v_info_82_, 0);
v_revDeps_84_ = lean_ctor_get(v_info_82_, 1);
v_isSharedCheck_95_ = !lean_is_exclusive(v_info_82_);
if (v_isSharedCheck_95_ == 0)
{
v___x_86_ = v_info_82_;
v_isShared_87_ = v_isSharedCheck_95_;
goto v_resetjp_85_;
}
else
{
lean_inc(v_revDeps_84_);
lean_inc(v_graph_83_);
lean_dec(v_info_82_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_95_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_93_; 
v___x_88_ = lean_array_get_size(v_graph_83_);
v___x_89_ = lean_unsigned_to_nat(0u);
v___x_90_ = lean_mk_empty_array_with_capacity(v___x_88_);
v___x_91_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_graph_83_, v___x_88_, v___x_89_, v___x_90_);
lean_dec_ref(v_graph_83_);
if (v_isShared_87_ == 0)
{
lean_ctor_set(v___x_86_, 0, v___x_91_);
v___x_93_ = v___x_86_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_94_; 
v_reuseFailAlloc_94_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_94_, 0, v___x_91_);
lean_ctor_set(v_reuseFailAlloc_94_, 1, v_revDeps_84_);
v___x_93_ = v_reuseFailAlloc_94_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
return v___x_93_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(lean_object* v_i_96_, lean_object* v_as_97_, lean_object* v_i_98_, lean_object* v_j_99_, lean_object* v_inv_100_, lean_object* v_bs_101_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___redArg(v_i_96_, v_as_97_, v_i_98_, v_j_99_, v_bs_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0___boxed(lean_object* v_i_103_, lean_object* v_as_104_, lean_object* v_i_105_, lean_object* v_j_106_, lean_object* v_inv_107_, lean_object* v_bs_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__0(v_i_103_, v_as_104_, v_i_105_, v_j_106_, v_inv_107_, v_bs_108_);
lean_dec_ref(v_as_104_);
lean_dec(v_i_103_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(lean_object* v_as_110_, lean_object* v_i_111_, lean_object* v_j_112_, lean_object* v_inv_113_, lean_object* v_bs_114_){
_start:
{
lean_object* v___x_115_; 
v___x_115_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___redArg(v_as_110_, v_i_111_, v_j_112_, v_bs_114_);
return v___x_115_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1___boxed(lean_object* v_as_116_, lean_object* v_i_117_, lean_object* v_j_118_, lean_object* v_inv_119_, lean_object* v_bs_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_FixedParams_Info_addSelfCalls_spec__1(v_as_116_, v_i_117_, v_j_118_, v_inv_119_, v_bs_120_);
lean_dec_ref(v_as_116_);
return v_res_121_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0(void){
_start:
{
lean_object* v___x_122_; 
v___x_122_ = l_Array_instInhabited(lean_box(0));
return v___x_122_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParams_Info_mayBeFixed(lean_object* v_callerIdx_123_, lean_object* v_paramIdx_124_, lean_object* v_info_125_){
_start:
{
lean_object* v_graph_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; 
v_graph_126_ = lean_ctor_get(v_info_125_, 0);
v___x_127_ = lean_box(0);
v___x_128_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_129_ = lean_array_get_borrowed(v___x_128_, v_graph_126_, v_callerIdx_123_);
v___x_130_ = lean_array_get_borrowed(v___x_127_, v___x_129_, v_paramIdx_124_);
if (lean_obj_tag(v___x_130_) == 0)
{
uint8_t v___x_131_; 
v___x_131_ = 0;
return v___x_131_;
}
else
{
uint8_t v___x_132_; 
v___x_132_ = 1;
return v___x_132_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_mayBeFixed___boxed(lean_object* v_callerIdx_133_, lean_object* v_paramIdx_134_, lean_object* v_info_135_){
_start:
{
uint8_t v_res_136_; lean_object* v_r_137_; 
v_res_136_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_133_, v_paramIdx_134_, v_info_135_);
lean_dec_ref(v_info_135_);
lean_dec(v_paramIdx_134_);
lean_dec(v_callerIdx_133_);
v_r_137_ = lean_box(v_res_136_);
return v_r_137_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(lean_object* v_upperBound_138_, lean_object* v_next_139_, lean_object* v_funIdx_140_, lean_object* v_paramIdx_141_, lean_object* v_a_142_, lean_object* v_b_143_){
_start:
{
lean_object* v_a_145_; uint8_t v___x_149_; 
v___x_149_ = lean_nat_dec_lt(v_a_142_, v_upperBound_138_);
if (v___x_149_ == 0)
{
lean_dec(v_a_142_);
lean_dec(v_paramIdx_141_);
return v_b_143_;
}
else
{
lean_object* v_graph_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v_graph_150_ = lean_ctor_get(v_b_143_, 0);
v___x_151_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_152_ = lean_box(0);
v___x_153_ = lean_array_get_borrowed(v___x_151_, v_graph_150_, v_next_139_);
v___x_154_ = lean_array_get(v___x_152_, v___x_153_, v_a_142_);
if (lean_obj_tag(v___x_154_) == 1)
{
lean_object* v_val_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_166_; 
v_val_155_ = lean_ctor_get(v___x_154_, 0);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_154_);
if (v_isSharedCheck_166_ == 0)
{
v___x_157_ = v___x_154_;
v_isShared_158_ = v_isSharedCheck_166_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_val_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_166_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_159_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_160_ = lean_array_get(v___x_152_, v_val_155_, v_funIdx_140_);
lean_dec(v_val_155_);
lean_inc(v_paramIdx_141_);
if (v_isShared_158_ == 0)
{
lean_ctor_set(v___x_157_, 0, v_paramIdx_141_);
v___x_162_ = v___x_157_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_paramIdx_141_);
v___x_162_ = v_reuseFailAlloc_165_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
uint8_t v___x_163_; 
v___x_163_ = l_Option_instDecidableEq___redArg(v___x_159_, v___x_160_, v___x_162_);
if (v___x_163_ == 0)
{
v_a_145_ = v_b_143_;
goto v___jp_144_;
}
else
{
lean_object* v___x_164_; 
lean_inc(v_a_142_);
v___x_164_ = l_Lean_Elab_FixedParams_Info_setVarying(v_next_139_, v_a_142_, v_b_143_);
v_a_145_ = v___x_164_;
goto v___jp_144_;
}
}
}
}
else
{
lean_dec(v___x_154_);
v_a_145_ = v_b_143_;
goto v___jp_144_;
}
}
v___jp_144_:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = lean_unsigned_to_nat(1u);
v___x_147_ = lean_nat_add(v_a_142_, v___x_146_);
lean_dec(v_a_142_);
v_a_142_ = v___x_147_;
v_b_143_ = v_a_145_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(lean_object* v_upperBound_167_, lean_object* v_funIdx_168_, lean_object* v_paramIdx_169_, lean_object* v_a_170_, lean_object* v_b_171_){
_start:
{
uint8_t v___x_172_; 
v___x_172_ = lean_nat_dec_lt(v_a_170_, v_upperBound_167_);
if (v___x_172_ == 0)
{
lean_dec(v_a_170_);
lean_dec(v_paramIdx_169_);
return v_b_171_;
}
else
{
lean_object* v_graph_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v_graph_173_ = lean_ctor_get(v_b_171_, 0);
v___x_174_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_175_ = lean_array_get_borrowed(v___x_174_, v_graph_173_, v_a_170_);
v___x_176_ = lean_array_get_size(v___x_175_);
v___x_177_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_169_);
v___x_178_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v___x_176_, v_a_170_, v_funIdx_168_, v_paramIdx_169_, v___x_177_, v_b_171_);
v___x_179_ = lean_unsigned_to_nat(1u);
v___x_180_ = lean_nat_add(v_a_170_, v___x_179_);
lean_dec(v_a_170_);
v_a_170_ = v___x_180_;
v_b_171_ = v___x_178_;
goto _start;
}
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_Info_setVarying___closed__0(void){
_start:
{
lean_object* v___x_182_; 
v___x_182_ = l_Array_instInhabited(lean_box(0));
return v___x_182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying(lean_object* v_funIdx_183_, lean_object* v_paramIdx_184_, lean_object* v_info_185_){
_start:
{
uint8_t v___x_186_; 
v___x_186_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_funIdx_183_, v_paramIdx_184_, v_info_185_);
if (v___x_186_ == 0)
{
lean_dec(v_paramIdx_184_);
return v_info_185_;
}
else
{
lean_object* v_graph_187_; lean_object* v_revDeps_188_; lean_object* v___x_190_; uint8_t v_isShared_191_; uint8_t v_isSharedCheck_215_; 
v_graph_187_ = lean_ctor_get(v_info_185_, 0);
v_revDeps_188_ = lean_ctor_get(v_info_185_, 1);
v_isSharedCheck_215_ = !lean_is_exclusive(v_info_185_);
if (v_isSharedCheck_215_ == 0)
{
v___x_190_ = v_info_185_;
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
else
{
lean_inc(v_revDeps_188_);
lean_inc(v_graph_187_);
lean_dec(v_info_185_);
v___x_190_ = lean_box(0);
v_isShared_191_ = v_isSharedCheck_215_;
goto v_resetjp_189_;
}
v_resetjp_189_:
{
lean_object* v___y_193_; lean_object* v___x_207_; uint8_t v___x_208_; 
v___x_207_ = lean_array_get_size(v_graph_187_);
v___x_208_ = lean_nat_dec_lt(v_funIdx_183_, v___x_207_);
if (v___x_208_ == 0)
{
v___y_193_ = v_graph_187_;
goto v___jp_192_;
}
else
{
lean_object* v_v_209_; lean_object* v___x_210_; lean_object* v_xs_x27_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v_v_209_ = lean_array_fget(v_graph_187_, v_funIdx_183_);
v___x_210_ = lean_box(0);
v_xs_x27_211_ = lean_array_fset(v_graph_187_, v_funIdx_183_, v___x_210_);
v___x_212_ = lean_box(0);
v___x_213_ = lean_array_set(v_v_209_, v_paramIdx_184_, v___x_212_);
v___x_214_ = lean_array_fset(v_xs_x27_211_, v_funIdx_183_, v___x_213_);
v___y_193_ = v___x_214_;
goto v___jp_192_;
}
v___jp_192_:
{
lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v_info_197_; 
v___x_194_ = lean_array_get_size(v___y_193_);
v___x_195_ = lean_unsigned_to_nat(0u);
if (v_isShared_191_ == 0)
{
lean_ctor_set(v___x_190_, 0, v___y_193_);
v_info_197_ = v___x_190_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_206_; 
v_reuseFailAlloc_206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_206_, 0, v___y_193_);
lean_ctor_set(v_reuseFailAlloc_206_, 1, v_revDeps_188_);
v_info_197_ = v_reuseFailAlloc_206_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
lean_object* v___x_198_; lean_object* v_revDeps_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; size_t v_sz_203_; size_t v___x_204_; lean_object* v___x_205_; 
lean_inc(v_paramIdx_184_);
v___x_198_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v___x_194_, v_funIdx_183_, v_paramIdx_184_, v___x_195_, v_info_197_);
v_revDeps_199_ = lean_ctor_get(v___x_198_, 1);
lean_inc_ref(v_revDeps_199_);
v___x_200_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_setVarying___closed__0, &l_Lean_Elab_FixedParams_Info_setVarying___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_setVarying___closed__0);
v___x_201_ = lean_array_get(v___x_200_, v_revDeps_199_, v_funIdx_183_);
lean_dec_ref(v_revDeps_199_);
v___x_202_ = lean_array_get(v___x_200_, v___x_201_, v_paramIdx_184_);
lean_dec(v_paramIdx_184_);
lean_dec(v___x_201_);
v_sz_203_ = lean_array_size(v___x_202_);
v___x_204_ = ((size_t)0ULL);
v___x_205_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_183_, v___x_202_, v_sz_203_, v___x_204_, v___x_198_);
lean_dec(v___x_202_);
return v___x_205_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(lean_object* v_funIdx_216_, lean_object* v_as_217_, size_t v_sz_218_, size_t v_i_219_, lean_object* v_b_220_){
_start:
{
uint8_t v___x_221_; 
v___x_221_ = lean_usize_dec_lt(v_i_219_, v_sz_218_);
if (v___x_221_ == 0)
{
return v_b_220_;
}
else
{
lean_object* v_a_222_; lean_object* v___x_223_; size_t v___x_224_; size_t v___x_225_; 
v_a_222_ = lean_array_uget_borrowed(v_as_217_, v_i_219_);
lean_inc(v_a_222_);
v___x_223_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_216_, v_a_222_, v_b_220_);
v___x_224_ = ((size_t)1ULL);
v___x_225_ = lean_usize_add(v_i_219_, v___x_224_);
v_i_219_ = v___x_225_;
v_b_220_ = v___x_223_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0___boxed(lean_object* v_funIdx_227_, lean_object* v_as_228_, lean_object* v_sz_229_, lean_object* v_i_230_, lean_object* v_b_231_){
_start:
{
size_t v_sz_boxed_232_; size_t v_i_boxed_233_; lean_object* v_res_234_; 
v_sz_boxed_232_ = lean_unbox_usize(v_sz_229_);
lean_dec(v_sz_229_);
v_i_boxed_233_ = lean_unbox_usize(v_i_230_);
lean_dec(v_i_230_);
v_res_234_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParams_Info_setVarying_spec__0(v_funIdx_227_, v_as_228_, v_sz_boxed_232_, v_i_boxed_233_, v_b_231_);
lean_dec_ref(v_as_228_);
lean_dec(v_funIdx_227_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg___boxed(lean_object* v_upperBound_235_, lean_object* v_funIdx_236_, lean_object* v_paramIdx_237_, lean_object* v_a_238_, lean_object* v_b_239_){
_start:
{
lean_object* v_res_240_; 
v_res_240_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_235_, v_funIdx_236_, v_paramIdx_237_, v_a_238_, v_b_239_);
lean_dec(v_funIdx_236_);
lean_dec(v_upperBound_235_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg___boxed(lean_object* v_upperBound_241_, lean_object* v_next_242_, lean_object* v_funIdx_243_, lean_object* v_paramIdx_244_, lean_object* v_a_245_, lean_object* v_b_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_241_, v_next_242_, v_funIdx_243_, v_paramIdx_244_, v_a_245_, v_b_246_);
lean_dec(v_funIdx_243_);
lean_dec(v_next_242_);
lean_dec(v_upperBound_241_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setVarying___boxed(lean_object* v_funIdx_248_, lean_object* v_paramIdx_249_, lean_object* v_info_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_Elab_FixedParams_Info_setVarying(v_funIdx_248_, v_paramIdx_249_, v_info_250_);
lean_dec(v_funIdx_248_);
return v_res_251_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(lean_object* v_upperBound_252_, lean_object* v_next_253_, lean_object* v_funIdx_254_, lean_object* v_paramIdx_255_, lean_object* v_inst_256_, lean_object* v_R_257_, lean_object* v_a_258_, lean_object* v_b_259_, lean_object* v_c_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___redArg(v_upperBound_252_, v_next_253_, v_funIdx_254_, v_paramIdx_255_, v_a_258_, v_b_259_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1___boxed(lean_object* v_upperBound_262_, lean_object* v_next_263_, lean_object* v_funIdx_264_, lean_object* v_paramIdx_265_, lean_object* v_inst_266_, lean_object* v_R_267_, lean_object* v_a_268_, lean_object* v_b_269_, lean_object* v_c_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__1(v_upperBound_262_, v_next_263_, v_funIdx_264_, v_paramIdx_265_, v_inst_266_, v_R_267_, v_a_268_, v_b_269_, v_c_270_);
lean_dec(v_funIdx_264_);
lean_dec(v_next_263_);
lean_dec(v_upperBound_262_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(lean_object* v_upperBound_272_, lean_object* v_funIdx_273_, lean_object* v_paramIdx_274_, lean_object* v_inst_275_, lean_object* v_R_276_, lean_object* v_a_277_, lean_object* v_b_278_, lean_object* v_c_279_){
_start:
{
lean_object* v___x_280_; 
v___x_280_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___redArg(v_upperBound_272_, v_funIdx_273_, v_paramIdx_274_, v_a_277_, v_b_278_);
return v___x_280_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2___boxed(lean_object* v_upperBound_281_, lean_object* v_funIdx_282_, lean_object* v_paramIdx_283_, lean_object* v_inst_284_, lean_object* v_R_285_, lean_object* v_a_286_, lean_object* v_b_287_, lean_object* v_c_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setVarying_spec__2(v_upperBound_281_, v_funIdx_282_, v_paramIdx_283_, v_inst_284_, v_R_285_, v_a_286_, v_b_287_, v_c_288_);
lean_dec(v_funIdx_282_);
lean_dec(v_upperBound_281_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(lean_object* v_calleeIdx_290_, lean_object* v_argIdx_291_, lean_object* v_callerIdx_292_, lean_object* v_info_293_){
_start:
{
lean_object* v_graph_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v_graph_294_ = lean_ctor_get(v_info_293_, 0);
v___x_295_ = lean_box(0);
v___x_296_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_297_ = lean_array_get_borrowed(v___x_296_, v_graph_294_, v_calleeIdx_290_);
v___x_298_ = lean_array_get_borrowed(v___x_295_, v___x_297_, v_argIdx_291_);
if (lean_obj_tag(v___x_298_) == 0)
{
return v___x_295_;
}
else
{
lean_object* v_val_299_; lean_object* v___x_300_; 
v_val_299_ = lean_ctor_get(v___x_298_, 0);
v___x_300_ = lean_array_get_borrowed(v___x_295_, v_val_299_, v_callerIdx_292_);
lean_inc(v___x_300_);
return v___x_300_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_getCallerParam_x3f___boxed(lean_object* v_calleeIdx_301_, lean_object* v_argIdx_302_, lean_object* v_callerIdx_303_, lean_object* v_info_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_301_, v_argIdx_302_, v_callerIdx_303_, v_info_304_);
lean_dec_ref(v_info_304_);
lean_dec(v_callerIdx_303_);
lean_dec(v_argIdx_302_);
lean_dec(v_calleeIdx_301_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(lean_object* v_upperBound_306_, lean_object* v_val_307_, lean_object* v_calleeIdx_308_, lean_object* v_argIdx_309_, lean_object* v_a_310_, lean_object* v_b_311_){
_start:
{
lean_object* v_a_313_; uint8_t v___x_317_; 
v___x_317_ = lean_nat_dec_lt(v_a_310_, v_upperBound_306_);
if (v___x_317_ == 0)
{
lean_dec(v_a_310_);
lean_dec(v_argIdx_309_);
return v_b_311_;
}
else
{
lean_object* v___x_318_; 
v___x_318_ = lean_array_fget_borrowed(v_val_307_, v_a_310_);
if (lean_obj_tag(v___x_318_) == 1)
{
lean_object* v_val_319_; lean_object* v___x_320_; 
v_val_319_ = lean_ctor_get(v___x_318_, 0);
lean_inc(v_val_319_);
lean_inc(v_argIdx_309_);
v___x_320_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_308_, v_argIdx_309_, v_a_310_, v_val_319_, v_b_311_);
v_a_313_ = v___x_320_;
goto v___jp_312_;
}
else
{
v_a_313_ = v_b_311_;
goto v___jp_312_;
}
}
v___jp_312_:
{
lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_314_ = lean_unsigned_to_nat(1u);
v___x_315_ = lean_nat_add(v_a_310_, v___x_314_);
lean_dec(v_a_310_);
v_a_310_ = v___x_315_;
v_b_311_ = v_a_313_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam(lean_object* v_calleeIdx_321_, lean_object* v_argIdx_322_, lean_object* v_callerIdx_323_, lean_object* v_paramIdx_324_, lean_object* v_info_325_){
_start:
{
lean_object* v_info_327_; lean_object* v_graph_328_; uint8_t v___x_332_; 
v___x_332_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
if (v___x_332_ == 0)
{
lean_dec(v_paramIdx_324_);
lean_dec(v_argIdx_322_);
return v_info_325_;
}
else
{
uint8_t v___x_333_; 
v___x_333_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_callerIdx_323_, v_paramIdx_324_, v_info_325_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_dec(v_paramIdx_324_);
v___x_334_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
return v___x_334_;
}
else
{
lean_object* v___x_335_; 
v___x_335_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_calleeIdx_321_, v_argIdx_322_, v_callerIdx_323_, v_info_325_);
if (lean_obj_tag(v___x_335_) == 1)
{
lean_object* v_val_336_; uint8_t v___x_337_; 
v_val_336_ = lean_ctor_get(v___x_335_, 0);
lean_inc(v_val_336_);
lean_dec_ref(v___x_335_);
v___x_337_ = lean_nat_dec_eq(v_paramIdx_324_, v_val_336_);
lean_dec(v_val_336_);
lean_dec(v_paramIdx_324_);
if (v___x_337_ == 0)
{
lean_object* v___x_338_; 
v___x_338_ = l_Lean_Elab_FixedParams_Info_setVarying(v_calleeIdx_321_, v_argIdx_322_, v_info_325_);
return v___x_338_;
}
else
{
lean_dec(v_argIdx_322_);
return v_info_325_;
}
}
else
{
lean_object* v_graph_339_; lean_object* v_revDeps_340_; lean_object* v___x_342_; uint8_t v_isShared_343_; uint8_t v_isSharedCheck_383_; 
lean_dec(v___x_335_);
v_graph_339_ = lean_ctor_get(v_info_325_, 0);
v_revDeps_340_ = lean_ctor_get(v_info_325_, 1);
v_isSharedCheck_383_ = !lean_is_exclusive(v_info_325_);
if (v_isSharedCheck_383_ == 0)
{
v___x_342_ = v_info_325_;
v_isShared_343_ = v_isSharedCheck_383_;
goto v_resetjp_341_;
}
else
{
lean_inc(v_revDeps_340_);
lean_inc(v_graph_339_);
lean_dec(v_info_325_);
v___x_342_ = lean_box(0);
v_isShared_343_ = v_isSharedCheck_383_;
goto v_resetjp_341_;
}
v_resetjp_341_:
{
lean_object* v___y_345_; lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = lean_array_get_size(v_graph_339_);
v___x_359_ = lean_nat_dec_lt(v_calleeIdx_321_, v___x_358_);
if (v___x_359_ == 0)
{
v___y_345_ = v_graph_339_;
goto v___jp_344_;
}
else
{
lean_object* v_v_360_; lean_object* v___x_361_; lean_object* v_xs_x27_362_; lean_object* v___y_364_; lean_object* v___x_366_; uint8_t v___x_367_; 
v_v_360_ = lean_array_fget(v_graph_339_, v_calleeIdx_321_);
v___x_361_ = lean_box(0);
v_xs_x27_362_ = lean_array_fset(v_graph_339_, v_calleeIdx_321_, v___x_361_);
v___x_366_ = lean_array_get_size(v_v_360_);
v___x_367_ = lean_nat_dec_lt(v_argIdx_322_, v___x_366_);
if (v___x_367_ == 0)
{
v___y_364_ = v_v_360_;
goto v___jp_363_;
}
else
{
lean_object* v_v_368_; lean_object* v_xs_x27_369_; lean_object* v___y_371_; 
v_v_368_ = lean_array_fget(v_v_360_, v_argIdx_322_);
v_xs_x27_369_ = lean_array_fset(v_v_360_, v_argIdx_322_, v___x_361_);
if (lean_obj_tag(v_v_368_) == 0)
{
v___y_371_ = v_v_368_;
goto v___jp_370_;
}
else
{
lean_object* v_val_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_382_; 
v_val_373_ = lean_ctor_get(v_v_368_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v_v_368_);
if (v_isSharedCheck_382_ == 0)
{
v___x_375_ = v_v_368_;
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_val_373_);
lean_dec(v_v_368_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_382_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
lean_inc(v_paramIdx_324_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v_paramIdx_324_);
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_paramIdx_324_);
v___x_378_ = v_reuseFailAlloc_381_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_379_ = lean_array_set(v_val_373_, v_callerIdx_323_, v___x_378_);
v___x_380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
v___y_371_ = v___x_380_;
goto v___jp_370_;
}
}
}
v___jp_370_:
{
lean_object* v___x_372_; 
v___x_372_ = lean_array_fset(v_xs_x27_369_, v_argIdx_322_, v___y_371_);
v___y_364_ = v___x_372_;
goto v___jp_363_;
}
}
v___jp_363_:
{
lean_object* v___x_365_; 
v___x_365_ = lean_array_fset(v_xs_x27_362_, v_calleeIdx_321_, v___y_364_);
v___y_345_ = v___x_365_;
goto v___jp_344_;
}
}
v___jp_344_:
{
lean_object* v_info_347_; 
lean_inc_ref(v___y_345_);
if (v_isShared_343_ == 0)
{
lean_ctor_set(v___x_342_, 0, v___y_345_);
v_info_347_ = v___x_342_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_357_; 
v_reuseFailAlloc_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_357_, 0, v___y_345_);
lean_ctor_set(v_reuseFailAlloc_357_, 1, v_revDeps_340_);
v_info_347_ = v_reuseFailAlloc_357_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_348_ = lean_box(0);
v___x_349_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_350_ = lean_array_get_borrowed(v___x_349_, v___y_345_, v_callerIdx_323_);
v___x_351_ = lean_array_get_borrowed(v___x_348_, v___x_350_, v_paramIdx_324_);
if (lean_obj_tag(v___x_351_) == 1)
{
lean_object* v_val_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v_graph_356_; 
lean_inc_ref(v___x_351_);
lean_dec_ref(v___y_345_);
v_val_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_val_352_);
lean_dec_ref(v___x_351_);
v___x_353_ = lean_array_get_size(v_val_352_);
v___x_354_ = lean_unsigned_to_nat(0u);
lean_inc(v_argIdx_322_);
v___x_355_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v___x_353_, v_val_352_, v_calleeIdx_321_, v_argIdx_322_, v___x_354_, v_info_347_);
lean_dec(v_val_352_);
v_graph_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc_ref(v_graph_356_);
v_info_327_ = v___x_355_;
v_graph_328_ = v_graph_356_;
goto v___jp_326_;
}
else
{
v_info_327_ = v_info_347_;
v_graph_328_ = v___y_345_;
goto v___jp_326_;
}
}
}
}
}
}
}
v___jp_326_:
{
lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_329_ = lean_array_get_size(v_graph_328_);
lean_dec_ref(v_graph_328_);
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v___x_329_, v_calleeIdx_321_, v_argIdx_322_, v_callerIdx_323_, v_paramIdx_324_, v___x_330_, v_info_327_);
lean_dec(v_argIdx_322_);
return v___x_331_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(lean_object* v_upperBound_384_, lean_object* v_next_385_, lean_object* v_calleeIdx_386_, lean_object* v_argIdx_387_, lean_object* v_callerIdx_388_, lean_object* v_paramIdx_389_, lean_object* v_a_390_, lean_object* v_b_391_){
_start:
{
lean_object* v_a_393_; uint8_t v___x_397_; 
v___x_397_ = lean_nat_dec_lt(v_a_390_, v_upperBound_384_);
if (v___x_397_ == 0)
{
lean_dec(v_a_390_);
lean_dec(v_paramIdx_389_);
return v_b_391_;
}
else
{
lean_object* v_graph_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; 
v_graph_398_ = lean_ctor_get(v_b_391_, 0);
v___x_399_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_400_ = lean_box(0);
v___x_401_ = lean_array_get_borrowed(v___x_399_, v_graph_398_, v_next_385_);
v___x_402_ = lean_array_get_borrowed(v___x_400_, v___x_401_, v_a_390_);
if (lean_obj_tag(v___x_402_) == 1)
{
lean_object* v_val_403_; lean_object* v___x_404_; 
v_val_403_ = lean_ctor_get(v___x_402_, 0);
v___x_404_ = lean_array_get_borrowed(v___x_400_, v_val_403_, v_calleeIdx_386_);
if (lean_obj_tag(v___x_404_) == 1)
{
lean_object* v_val_405_; uint8_t v___x_406_; 
v_val_405_ = lean_ctor_get(v___x_404_, 0);
v___x_406_ = lean_nat_dec_eq(v_val_405_, v_argIdx_387_);
if (v___x_406_ == 0)
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
else
{
lean_object* v___x_407_; 
lean_inc(v_paramIdx_389_);
lean_inc(v_a_390_);
v___x_407_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_next_385_, v_a_390_, v_callerIdx_388_, v_paramIdx_389_, v_b_391_);
v_a_393_ = v___x_407_;
goto v___jp_392_;
}
}
else
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
}
else
{
v_a_393_ = v_b_391_;
goto v___jp_392_;
}
}
v___jp_392_:
{
lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_394_ = lean_unsigned_to_nat(1u);
v___x_395_ = lean_nat_add(v_a_390_, v___x_394_);
lean_dec(v_a_390_);
v_a_390_ = v___x_395_;
v_b_391_ = v_a_393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(lean_object* v_upperBound_408_, lean_object* v_calleeIdx_409_, lean_object* v_argIdx_410_, lean_object* v_callerIdx_411_, lean_object* v_paramIdx_412_, lean_object* v_a_413_, lean_object* v_b_414_){
_start:
{
uint8_t v___x_415_; 
v___x_415_ = lean_nat_dec_lt(v_a_413_, v_upperBound_408_);
if (v___x_415_ == 0)
{
lean_dec(v_a_413_);
lean_dec(v_paramIdx_412_);
return v_b_414_;
}
else
{
lean_object* v_graph_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v_graph_416_ = lean_ctor_get(v_b_414_, 0);
v___x_417_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___x_418_ = lean_array_get_borrowed(v___x_417_, v_graph_416_, v_a_413_);
v___x_419_ = lean_array_get_size(v___x_418_);
v___x_420_ = lean_unsigned_to_nat(0u);
lean_inc(v_paramIdx_412_);
v___x_421_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v___x_419_, v_a_413_, v_calleeIdx_409_, v_argIdx_410_, v_callerIdx_411_, v_paramIdx_412_, v___x_420_, v_b_414_);
v___x_422_ = lean_unsigned_to_nat(1u);
v___x_423_ = lean_nat_add(v_a_413_, v___x_422_);
lean_dec(v_a_413_);
v_a_413_ = v___x_423_;
v_b_414_ = v___x_421_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg___boxed(lean_object* v_upperBound_425_, lean_object* v_calleeIdx_426_, lean_object* v_argIdx_427_, lean_object* v_callerIdx_428_, lean_object* v_paramIdx_429_, lean_object* v_a_430_, lean_object* v_b_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_425_, v_calleeIdx_426_, v_argIdx_427_, v_callerIdx_428_, v_paramIdx_429_, v_a_430_, v_b_431_);
lean_dec(v_callerIdx_428_);
lean_dec(v_argIdx_427_);
lean_dec(v_calleeIdx_426_);
lean_dec(v_upperBound_425_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg___boxed(lean_object* v_upperBound_433_, lean_object* v_val_434_, lean_object* v_calleeIdx_435_, lean_object* v_argIdx_436_, lean_object* v_a_437_, lean_object* v_b_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_433_, v_val_434_, v_calleeIdx_435_, v_argIdx_436_, v_a_437_, v_b_438_);
lean_dec(v_calleeIdx_435_);
lean_dec_ref(v_val_434_);
lean_dec(v_upperBound_433_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg___boxed(lean_object* v_upperBound_440_, lean_object* v_next_441_, lean_object* v_calleeIdx_442_, lean_object* v_argIdx_443_, lean_object* v_callerIdx_444_, lean_object* v_paramIdx_445_, lean_object* v_a_446_, lean_object* v_b_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_440_, v_next_441_, v_calleeIdx_442_, v_argIdx_443_, v_callerIdx_444_, v_paramIdx_445_, v_a_446_, v_b_447_);
lean_dec(v_callerIdx_444_);
lean_dec(v_argIdx_443_);
lean_dec(v_calleeIdx_442_);
lean_dec(v_next_441_);
lean_dec(v_upperBound_440_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_setCallerParam___boxed(lean_object* v_calleeIdx_449_, lean_object* v_argIdx_450_, lean_object* v_callerIdx_451_, lean_object* v_paramIdx_452_, lean_object* v_info_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_calleeIdx_449_, v_argIdx_450_, v_callerIdx_451_, v_paramIdx_452_, v_info_453_);
lean_dec(v_callerIdx_451_);
lean_dec(v_calleeIdx_449_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(lean_object* v_upperBound_455_, lean_object* v_next_456_, lean_object* v_calleeIdx_457_, lean_object* v_argIdx_458_, lean_object* v_callerIdx_459_, lean_object* v_paramIdx_460_, lean_object* v_inst_461_, lean_object* v_R_462_, lean_object* v_a_463_, lean_object* v_b_464_, lean_object* v_c_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___redArg(v_upperBound_455_, v_next_456_, v_calleeIdx_457_, v_argIdx_458_, v_callerIdx_459_, v_paramIdx_460_, v_a_463_, v_b_464_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0___boxed(lean_object* v_upperBound_467_, lean_object* v_next_468_, lean_object* v_calleeIdx_469_, lean_object* v_argIdx_470_, lean_object* v_callerIdx_471_, lean_object* v_paramIdx_472_, lean_object* v_inst_473_, lean_object* v_R_474_, lean_object* v_a_475_, lean_object* v_b_476_, lean_object* v_c_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__0(v_upperBound_467_, v_next_468_, v_calleeIdx_469_, v_argIdx_470_, v_callerIdx_471_, v_paramIdx_472_, v_inst_473_, v_R_474_, v_a_475_, v_b_476_, v_c_477_);
lean_dec(v_callerIdx_471_);
lean_dec(v_argIdx_470_);
lean_dec(v_calleeIdx_469_);
lean_dec(v_next_468_);
lean_dec(v_upperBound_467_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(lean_object* v_upperBound_479_, lean_object* v_calleeIdx_480_, lean_object* v_argIdx_481_, lean_object* v_callerIdx_482_, lean_object* v_paramIdx_483_, lean_object* v_inst_484_, lean_object* v_R_485_, lean_object* v_a_486_, lean_object* v_b_487_, lean_object* v_c_488_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___redArg(v_upperBound_479_, v_calleeIdx_480_, v_argIdx_481_, v_callerIdx_482_, v_paramIdx_483_, v_a_486_, v_b_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1___boxed(lean_object* v_upperBound_490_, lean_object* v_calleeIdx_491_, lean_object* v_argIdx_492_, lean_object* v_callerIdx_493_, lean_object* v_paramIdx_494_, lean_object* v_inst_495_, lean_object* v_R_496_, lean_object* v_a_497_, lean_object* v_b_498_, lean_object* v_c_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__1(v_upperBound_490_, v_calleeIdx_491_, v_argIdx_492_, v_callerIdx_493_, v_paramIdx_494_, v_inst_495_, v_R_496_, v_a_497_, v_b_498_, v_c_499_);
lean_dec(v_callerIdx_493_);
lean_dec(v_argIdx_492_);
lean_dec(v_calleeIdx_491_);
lean_dec(v_upperBound_490_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(lean_object* v_upperBound_501_, lean_object* v_val_502_, lean_object* v_calleeIdx_503_, lean_object* v_argIdx_504_, lean_object* v_inst_505_, lean_object* v_R_506_, lean_object* v_a_507_, lean_object* v_b_508_, lean_object* v_c_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___redArg(v_upperBound_501_, v_val_502_, v_calleeIdx_503_, v_argIdx_504_, v_a_507_, v_b_508_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2___boxed(lean_object* v_upperBound_511_, lean_object* v_val_512_, lean_object* v_calleeIdx_513_, lean_object* v_argIdx_514_, lean_object* v_inst_515_, lean_object* v_R_516_, lean_object* v_a_517_, lean_object* v_b_518_, lean_object* v_c_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParams_Info_setCallerParam_spec__2(v_upperBound_511_, v_val_512_, v_calleeIdx_513_, v_argIdx_514_, v_inst_515_, v_R_516_, v_a_517_, v_b_518_, v_c_519_);
lean_dec(v_calleeIdx_513_);
lean_dec_ref(v_val_512_);
lean_dec(v_upperBound_511_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_FixedParams_Info_format_spec__2(lean_object* v_a_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = lean_nat_to_int(v_a_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(lean_object* v_x_523_, lean_object* v_x_524_, lean_object* v_x_525_){
_start:
{
if (lean_obj_tag(v_x_525_) == 0)
{
lean_dec(v_x_523_);
return v_x_524_;
}
else
{
lean_object* v_head_526_; lean_object* v_tail_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_536_; 
v_head_526_ = lean_ctor_get(v_x_525_, 0);
v_tail_527_ = lean_ctor_get(v_x_525_, 1);
v_isSharedCheck_536_ = !lean_is_exclusive(v_x_525_);
if (v_isSharedCheck_536_ == 0)
{
v___x_529_ = v_x_525_;
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_tail_527_);
lean_inc(v_head_526_);
lean_dec(v_x_525_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
lean_inc(v_x_523_);
if (v_isShared_530_ == 0)
{
lean_ctor_set_tag(v___x_529_, 5);
lean_ctor_set(v___x_529_, 1, v_x_523_);
lean_ctor_set(v___x_529_, 0, v_x_524_);
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_x_524_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_x_523_);
v___x_532_ = v_reuseFailAlloc_535_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
lean_object* v___x_533_; 
v___x_533_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_533_, 0, v___x_532_);
lean_ctor_set(v___x_533_, 1, v_head_526_);
v_x_524_ = v___x_533_;
v_x_525_ = v_tail_527_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(lean_object* v_x_537_, lean_object* v_x_538_){
_start:
{
if (lean_obj_tag(v_x_537_) == 0)
{
lean_object* v___x_539_; 
lean_dec(v_x_538_);
v___x_539_ = lean_box(0);
return v___x_539_;
}
else
{
lean_object* v_tail_540_; 
v_tail_540_ = lean_ctor_get(v_x_537_, 1);
if (lean_obj_tag(v_tail_540_) == 0)
{
lean_object* v_head_541_; 
lean_dec(v_x_538_);
v_head_541_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_541_);
lean_dec_ref(v_x_537_);
return v_head_541_;
}
else
{
lean_object* v_head_542_; lean_object* v___x_543_; 
lean_inc(v_tail_540_);
v_head_542_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_542_);
lean_dec_ref(v_x_537_);
v___x_543_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1_spec__1(v_x_538_, v_head_542_, v_tail_540_);
return v___x_543_;
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0(void){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = lean_mk_string_unchecked("\?", 1, 1);
return v___x_544_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__0);
v___x_546_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
return v___x_546_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2(void){
_start:
{
lean_object* v___x_547_; 
v___x_547_ = lean_mk_string_unchecked("#", 1, 1);
return v___x_547_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__2);
v___x_549_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_549_, 0, v___x_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(lean_object* v_a_550_, lean_object* v_a_551_){
_start:
{
if (lean_obj_tag(v_a_550_) == 0)
{
lean_object* v___x_552_; 
v___x_552_ = l_List_reverse___redArg(v_a_551_);
return v___x_552_;
}
else
{
lean_object* v_head_553_; lean_object* v_tail_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_578_; 
v_head_553_ = lean_ctor_get(v_a_550_, 0);
v_tail_554_ = lean_ctor_get(v_a_550_, 1);
v_isSharedCheck_578_ = !lean_is_exclusive(v_a_550_);
if (v_isSharedCheck_578_ == 0)
{
v___x_556_ = v_a_550_;
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_tail_554_);
lean_inc(v_head_553_);
lean_dec(v_a_550_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_578_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___y_559_; 
if (lean_obj_tag(v_head_553_) == 0)
{
lean_object* v___x_564_; 
v___x_564_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__1);
v___y_559_ = v___x_564_;
goto v___jp_558_;
}
else
{
lean_object* v_val_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_577_; 
v_val_565_ = lean_ctor_get(v_head_553_, 0);
v_isSharedCheck_577_ = !lean_is_exclusive(v_head_553_);
if (v_isSharedCheck_577_ == 0)
{
v___x_567_ = v_head_553_;
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_val_565_);
lean_dec(v_head_553_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_577_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_574_; 
v___x_569_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0___closed__3);
v___x_570_ = lean_unsigned_to_nat(1u);
v___x_571_ = lean_nat_add(v_val_565_, v___x_570_);
lean_dec(v_val_565_);
v___x_572_ = l_Nat_reprFast(v___x_571_);
if (v_isShared_568_ == 0)
{
lean_ctor_set_tag(v___x_567_, 3);
lean_ctor_set(v___x_567_, 0, v___x_572_);
v___x_574_ = v___x_567_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_572_);
v___x_574_ = v_reuseFailAlloc_576_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_575_, 0, v___x_569_);
lean_ctor_set(v___x_575_, 1, v___x_574_);
v___y_559_ = v___x_575_;
goto v___jp_558_;
}
}
}
v___jp_558_:
{
lean_object* v___x_561_; 
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 1, v_a_551_);
lean_ctor_set(v___x_556_, 0, v___y_559_);
v___x_561_ = v___x_556_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___y_559_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v_a_551_);
v___x_561_ = v_reuseFailAlloc_563_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
v_a_550_ = v_tail_554_;
v_a_551_ = v___x_561_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0(void){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = lean_mk_string_unchecked("❌", 3, 1);
return v___x_579_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1(void){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; 
v___x_580_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__0);
v___x_581_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_581_, 0, v___x_580_);
return v___x_581_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2(void){
_start:
{
lean_object* v___x_582_; 
v___x_582_ = lean_mk_string_unchecked(" ", 1, 1);
return v___x_582_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3(void){
_start:
{
lean_object* v___x_583_; lean_object* v___x_584_; 
v___x_583_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2);
v___x_584_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
return v___x_584_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4(void){
_start:
{
lean_object* v___x_585_; 
v___x_585_ = lean_mk_string_unchecked("[", 1, 1);
return v___x_585_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5(void){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = lean_mk_string_unchecked("]", 1, 1);
return v___x_586_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6(void){
_start:
{
lean_object* v___x_587_; lean_object* v___x_588_; 
v___x_587_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4);
v___x_588_ = lean_string_length(v___x_587_);
return v___x_588_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7(void){
_start:
{
lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_589_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__6);
v___x_590_ = lean_nat_to_int(v___x_589_);
return v___x_590_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8(void){
_start:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
v___x_591_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__4);
v___x_592_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_592_, 0, v___x_591_);
return v___x_592_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__5);
v___x_594_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_594_, 0, v___x_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(lean_object* v_a_595_, lean_object* v_a_596_){
_start:
{
if (lean_obj_tag(v_a_595_) == 0)
{
lean_object* v___x_597_; 
v___x_597_ = l_List_reverse___redArg(v_a_596_);
return v___x_597_;
}
else
{
lean_object* v_head_598_; lean_object* v_tail_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_624_; 
v_head_598_ = lean_ctor_get(v_a_595_, 0);
v_tail_599_ = lean_ctor_get(v_a_595_, 1);
v_isSharedCheck_624_ = !lean_is_exclusive(v_a_595_);
if (v_isSharedCheck_624_ == 0)
{
v___x_601_ = v_a_595_;
v_isShared_602_ = v_isSharedCheck_624_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_tail_599_);
lean_inc(v_head_598_);
lean_dec(v_a_595_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_624_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___y_604_; 
if (lean_obj_tag(v_head_598_) == 0)
{
lean_object* v___x_609_; 
v___x_609_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__1);
v___y_604_ = v___x_609_;
goto v___jp_603_;
}
else
{
lean_object* v_val_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; lean_object* v___x_623_; 
v_val_610_ = lean_ctor_get(v_head_598_, 0);
lean_inc(v_val_610_);
lean_dec_ref(v_head_598_);
v___x_611_ = lean_array_to_list(v_val_610_);
v___x_612_ = lean_box(0);
v___x_613_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__0(v___x_611_, v___x_612_);
v___x_614_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3);
v___x_615_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_613_, v___x_614_);
v___x_616_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__7);
v___x_617_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__8);
v___x_618_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
lean_ctor_set(v___x_618_, 1, v___x_615_);
v___x_619_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9);
v___x_620_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_620_, 0, v___x_618_);
lean_ctor_set(v___x_620_, 1, v___x_619_);
v___x_621_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_616_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = 0;
v___x_623_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_623_, 0, v___x_621_);
lean_ctor_set_uint8(v___x_623_, sizeof(void*)*1, v___x_622_);
v___y_604_ = v___x_623_;
goto v___jp_603_;
}
v___jp_603_:
{
lean_object* v___x_606_; 
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v_a_596_);
lean_ctor_set(v___x_601_, 0, v___y_604_);
v___x_606_ = v___x_601_;
goto v_reusejp_605_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___y_604_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_a_596_);
v___x_606_ = v_reuseFailAlloc_608_;
goto v_reusejp_605_;
}
v_reusejp_605_:
{
v_a_595_ = v_tail_599_;
v_a_596_ = v___x_606_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0(void){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = lean_mk_string_unchecked("• ", 4, 2);
return v___x_625_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__0);
v___x_627_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_627_, 0, v___x_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(lean_object* v_a_628_, lean_object* v_a_629_){
_start:
{
if (lean_obj_tag(v_a_628_) == 0)
{
lean_object* v___x_630_; 
v___x_630_ = l_List_reverse___redArg(v_a_629_);
return v___x_630_;
}
else
{
lean_object* v_head_631_; lean_object* v_tail_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_647_; 
v_head_631_ = lean_ctor_get(v_a_628_, 0);
v_tail_632_ = lean_ctor_get(v_a_628_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v_a_628_);
if (v_isSharedCheck_647_ == 0)
{
v___x_634_ = v_a_628_;
v_isShared_635_ = v_isSharedCheck_647_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_tail_632_);
lean_inc(v_head_631_);
lean_dec(v_a_628_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_647_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_644_; 
v___x_636_ = lean_array_to_list(v_head_631_);
v___x_637_ = lean_box(0);
v___x_638_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3(v___x_636_, v___x_637_);
v___x_639_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__3);
v___x_640_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_638_, v___x_639_);
v___x_641_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4___closed__1);
v___x_642_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_642_, 0, v___x_641_);
lean_ctor_set(v___x_642_, 1, v___x_640_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v_a_629_);
lean_ctor_set(v___x_634_, 0, v___x_642_);
v___x_644_ = v___x_634_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_a_629_);
v___x_644_ = v_reuseFailAlloc_646_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
v_a_628_ = v_tail_632_;
v_a_629_ = v___x_644_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParams_Info_format(lean_object* v_info_648_){
_start:
{
lean_object* v_graph_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
v_graph_649_ = lean_ctor_get(v_info_648_, 0);
lean_inc_ref(v_graph_649_);
lean_dec_ref(v_info_648_);
v___x_650_ = lean_array_to_list(v_graph_649_);
v___x_651_ = lean_box(0);
v___x_652_ = l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__4(v___x_650_, v___x_651_);
v___x_653_ = lean_box(1);
v___x_654_ = l_Std_Format_joinSep___at___00Lean_Elab_FixedParams_Info_format_spec__1(v___x_652_, v___x_653_);
return v___x_654_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_instToFormatInfo___closed__0(void){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParams_Info_format), 1, 0);
return v___x_655_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParams_instToFormatInfo(void){
_start:
{
lean_object* v___x_656_; 
v___x_656_ = lean_obj_once(&l_Lean_Elab_FixedParams_instToFormatInfo___closed__0, &l_Lean_Elab_FixedParams_instToFormatInfo___closed__0_once, _init_l_Lean_Elab_FixedParams_instToFormatInfo___closed__0);
return v___x_656_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(lean_object* v_x_657_){
_start:
{
uint8_t v___x_658_; 
v___x_658_ = 0;
return v___x_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed(lean_object* v_x_659_){
_start:
{
uint8_t v_res_660_; lean_object* v_r_661_; 
v_res_660_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0(v_x_659_);
lean_dec(v_x_659_);
v_r_661_ = lean_box(v_res_660_);
return v_r_661_;
}
}
LEAN_EXPORT uint8_t l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(lean_object* v_fvarId_662_, lean_object* v_x_663_){
_start:
{
uint8_t v___x_664_; 
v___x_664_ = l_Lean_instBEqFVarId_beq(v_fvarId_662_, v_x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed(lean_object* v_fvarId_665_, lean_object* v_x_666_){
_start:
{
uint8_t v_res_667_; lean_object* v_r_668_; 
v_res_667_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1(v_fvarId_665_, v_x_666_);
lean_dec(v_x_666_);
lean_dec(v_fvarId_665_);
v_r_668_ = lean_box(v_res_667_);
return v_r_668_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___f_669_; 
v___f_669_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__0___boxed), 1, 0);
return v___f_669_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = lean_box(0);
v___x_671_ = lean_unsigned_to_nat(16u);
v___x_672_ = lean_mk_array(v___x_671_, v___x_670_);
return v___x_672_;
}
}
static lean_object* _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_673_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__1);
v___x_674_ = lean_unsigned_to_nat(0u);
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
lean_ctor_set(v___x_675_, 1, v___x_673_);
return v___x_675_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(lean_object* v_e_676_, lean_object* v_fvarId_677_, lean_object* v___y_678_, lean_object* v___y_679_){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; uint8_t v_fst_684_; lean_object* v_mctx_685_; lean_object* v___y_704_; lean_object* v_mctx_709_; lean_object* v___f_710_; lean_object* v___f_711_; lean_object* v___x_712_; lean_object* v___x_713_; uint8_t v___x_714_; 
v___x_681_ = lean_st_ref_get(v___y_679_);
lean_dec(v___x_681_);
v___x_682_ = lean_st_ref_get(v___y_678_);
v_mctx_709_ = lean_ctor_get(v___x_682_, 0);
lean_inc_ref_n(v_mctx_709_, 2);
lean_dec(v___x_682_);
v___f_710_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__0);
v___f_711_ = lean_alloc_closure((void*)(l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_711_, 0, v_fvarId_677_);
v___x_712_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
lean_ctor_set(v___x_713_, 1, v_mctx_709_);
v___x_714_ = l_Lean_Expr_hasFVar(v_e_676_);
if (v___x_714_ == 0)
{
uint8_t v___x_715_; 
v___x_715_ = l_Lean_Expr_hasMVar(v_e_676_);
if (v___x_715_ == 0)
{
lean_dec_ref(v___x_713_);
lean_dec_ref(v___f_711_);
lean_dec_ref(v_e_676_);
v_fst_684_ = v___x_715_;
v_mctx_685_ = v_mctx_709_;
goto v___jp_683_;
}
else
{
lean_object* v___x_716_; 
lean_dec_ref(v_mctx_709_);
v___x_716_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_711_, v___f_710_, v_e_676_, v___x_713_);
v___y_704_ = v___x_716_;
goto v___jp_703_;
}
}
else
{
lean_object* v___x_717_; 
lean_dec_ref(v_mctx_709_);
v___x_717_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_711_, v___f_710_, v_e_676_, v___x_713_);
v___y_704_ = v___x_717_;
goto v___jp_703_;
}
v___jp_683_:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v_cache_688_; lean_object* v_zetaDeltaFVarIds_689_; lean_object* v_postponed_690_; lean_object* v_diag_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_701_; 
v___x_686_ = lean_st_ref_get(v___y_679_);
lean_dec(v___x_686_);
v___x_687_ = lean_st_ref_take(v___y_678_);
v_cache_688_ = lean_ctor_get(v___x_687_, 1);
v_zetaDeltaFVarIds_689_ = lean_ctor_get(v___x_687_, 2);
v_postponed_690_ = lean_ctor_get(v___x_687_, 3);
v_diag_691_ = lean_ctor_get(v___x_687_, 4);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_701_ == 0)
{
lean_object* v_unused_702_; 
v_unused_702_ = lean_ctor_get(v___x_687_, 0);
lean_dec(v_unused_702_);
v___x_693_ = v___x_687_;
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_diag_691_);
lean_inc(v_postponed_690_);
lean_inc(v_zetaDeltaFVarIds_689_);
lean_inc(v_cache_688_);
lean_dec(v___x_687_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_701_;
goto v_resetjp_692_;
}
v_resetjp_692_:
{
lean_object* v___x_696_; 
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 0, v_mctx_685_);
v___x_696_ = v___x_693_;
goto v_reusejp_695_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_mctx_685_);
lean_ctor_set(v_reuseFailAlloc_700_, 1, v_cache_688_);
lean_ctor_set(v_reuseFailAlloc_700_, 2, v_zetaDeltaFVarIds_689_);
lean_ctor_set(v_reuseFailAlloc_700_, 3, v_postponed_690_);
lean_ctor_set(v_reuseFailAlloc_700_, 4, v_diag_691_);
v___x_696_ = v_reuseFailAlloc_700_;
goto v_reusejp_695_;
}
v_reusejp_695_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_697_ = lean_st_ref_set(v___y_678_, v___x_696_);
v___x_698_ = lean_box(v_fst_684_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
}
v___jp_703_:
{
lean_object* v_snd_705_; lean_object* v_fst_706_; lean_object* v_mctx_707_; uint8_t v___x_708_; 
v_snd_705_ = lean_ctor_get(v___y_704_, 1);
lean_inc(v_snd_705_);
v_fst_706_ = lean_ctor_get(v___y_704_, 0);
lean_inc(v_fst_706_);
lean_dec_ref(v___y_704_);
v_mctx_707_ = lean_ctor_get(v_snd_705_, 1);
lean_inc_ref(v_mctx_707_);
lean_dec(v_snd_705_);
v___x_708_ = lean_unbox(v_fst_706_);
lean_dec(v_fst_706_);
v_fst_684_ = v___x_708_;
v_mctx_685_ = v_mctx_707_;
goto v___jp_683_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___boxed(lean_object* v_e_718_, lean_object* v_fvarId_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_718_, v_fvarId_719_, v___y_720_, v___y_721_);
lean_dec(v___y_721_);
lean_dec(v___y_720_);
return v_res_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(lean_object* v_e_724_, lean_object* v_fvarId_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_e_724_, v_fvarId_725_, v___y_727_, v___y_729_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___boxed(lean_object* v_e_732_, lean_object* v_fvarId_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0(v_e_732_, v_fvarId_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(lean_object* v_k_740_, lean_object* v_b_741_, lean_object* v_c_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
lean_object* v___x_748_; 
lean_inc(v___y_746_);
lean_inc_ref(v___y_745_);
lean_inc(v___y_744_);
lean_inc_ref(v___y_743_);
v___x_748_ = lean_apply_7(v_k_740_, v_b_741_, v_c_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, lean_box(0));
return v___x_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed(lean_object* v_k_749_, lean_object* v_b_750_, lean_object* v_c_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0(v_k_749_, v_b_750_, v_c_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v___y_753_);
lean_dec_ref(v___y_752_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(lean_object* v_e_758_, lean_object* v_k_759_, uint8_t v_cleanupAnnotations_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v___f_766_; uint8_t v___x_767_; uint8_t v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; 
v___f_766_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_766_, 0, v_k_759_);
v___x_767_ = 1;
v___x_768_ = 0;
v___x_769_ = lean_box(0);
v___x_770_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_758_, v___x_767_, v___x_768_, v___x_767_, v___x_768_, v___x_769_, v___f_766_, v_cleanupAnnotations_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_770_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_770_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
v_a_779_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_770_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_770_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___boxed(lean_object* v_e_787_, lean_object* v_k_788_, lean_object* v_cleanupAnnotations_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_795_; lean_object* v_res_796_; 
v_cleanupAnnotations_boxed_795_ = lean_unbox(v_cleanupAnnotations_789_);
v_res_796_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_787_, v_k_788_, v_cleanupAnnotations_boxed_795_, v___y_790_, v___y_791_, v___y_792_, v___y_793_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
return v_res_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(lean_object* v_00_u03b1_797_, lean_object* v_e_798_, lean_object* v_k_799_, uint8_t v_cleanupAnnotations_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_){
_start:
{
lean_object* v___x_806_; 
v___x_806_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_e_798_, v_k_799_, v_cleanupAnnotations_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___boxed(lean_object* v_00_u03b1_807_, lean_object* v_e_808_, lean_object* v_k_809_, lean_object* v_cleanupAnnotations_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_816_; lean_object* v_res_817_; 
v_cleanupAnnotations_boxed_816_ = lean_unbox(v_cleanupAnnotations_810_);
v_res_817_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3(v_00_u03b1_807_, v_e_808_, v_k_809_, v_cleanupAnnotations_boxed_816_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v___y_812_);
lean_dec_ref(v___y_811_);
return v_res_817_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(lean_object* v_upperBound_818_, lean_object* v_xs_819_, lean_object* v_next_820_, lean_object* v_a_821_, lean_object* v_b_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
uint8_t v___x_828_; 
v___x_828_ = lean_nat_dec_lt(v_a_821_, v_upperBound_818_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; 
lean_dec(v_a_821_);
v___x_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_829_, 0, v_b_822_);
return v___x_829_;
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_array_fget_borrowed(v_xs_819_, v_a_821_);
lean_inc(v___y_826_);
lean_inc_ref(v___y_825_);
lean_inc(v___y_824_);
lean_inc_ref(v___y_823_);
lean_inc(v___x_830_);
v___x_831_ = lean_infer_type(v___x_830_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_object* v_a_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v_a_832_ = lean_ctor_get(v___x_831_, 0);
lean_inc(v_a_832_);
lean_dec_ref(v___x_831_);
v___x_833_ = lean_array_fget_borrowed(v_xs_819_, v_next_820_);
v___x_834_ = l_Lean_Expr_fvarId_x21(v___x_833_);
v___x_835_ = l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg(v_a_832_, v___x_834_, v___y_824_, v___y_826_);
if (lean_obj_tag(v___x_835_) == 0)
{
lean_object* v_a_836_; lean_object* v_a_838_; uint8_t v___x_842_; 
v_a_836_ = lean_ctor_get(v___x_835_, 0);
lean_inc(v_a_836_);
lean_dec_ref(v___x_835_);
v___x_842_ = lean_unbox(v_a_836_);
lean_dec(v_a_836_);
if (v___x_842_ == 0)
{
v_a_838_ = v_b_822_;
goto v___jp_837_;
}
else
{
lean_object* v___x_843_; 
lean_inc(v_a_821_);
v___x_843_ = lean_array_push(v_b_822_, v_a_821_);
v_a_838_ = v___x_843_;
goto v___jp_837_;
}
v___jp_837_:
{
lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_839_ = lean_unsigned_to_nat(1u);
v___x_840_ = lean_nat_add(v_a_821_, v___x_839_);
lean_dec(v_a_821_);
v_a_821_ = v___x_840_;
v_b_822_ = v_a_838_;
goto _start;
}
}
else
{
lean_object* v_a_844_; lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_851_; 
lean_dec_ref(v_b_822_);
lean_dec(v_a_821_);
v_a_844_ = lean_ctor_get(v___x_835_, 0);
v_isSharedCheck_851_ = !lean_is_exclusive(v___x_835_);
if (v_isSharedCheck_851_ == 0)
{
v___x_846_ = v___x_835_;
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
else
{
lean_inc(v_a_844_);
lean_dec(v___x_835_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_851_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_849_; 
if (v_isShared_847_ == 0)
{
v___x_849_ = v___x_846_;
goto v_reusejp_848_;
}
else
{
lean_object* v_reuseFailAlloc_850_; 
v_reuseFailAlloc_850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_850_, 0, v_a_844_);
v___x_849_ = v_reuseFailAlloc_850_;
goto v_reusejp_848_;
}
v_reusejp_848_:
{
return v___x_849_;
}
}
}
}
else
{
lean_object* v_a_852_; lean_object* v___x_854_; uint8_t v_isShared_855_; uint8_t v_isSharedCheck_859_; 
lean_dec_ref(v_b_822_);
lean_dec(v_a_821_);
v_a_852_ = lean_ctor_get(v___x_831_, 0);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_831_);
if (v_isSharedCheck_859_ == 0)
{
v___x_854_ = v___x_831_;
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
else
{
lean_inc(v_a_852_);
lean_dec(v___x_831_);
v___x_854_ = lean_box(0);
v_isShared_855_ = v_isSharedCheck_859_;
goto v_resetjp_853_;
}
v_resetjp_853_:
{
lean_object* v___x_857_; 
if (v_isShared_855_ == 0)
{
v___x_857_ = v___x_854_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_a_852_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg___boxed(lean_object* v_upperBound_860_, lean_object* v_xs_861_, lean_object* v_next_862_, lean_object* v_a_863_, lean_object* v_b_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_860_, v_xs_861_, v_next_862_, v_a_863_, v_b_864_, v___y_865_, v___y_866_, v___y_867_, v___y_868_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v_next_862_);
lean_dec_ref(v_xs_861_);
lean_dec(v_upperBound_860_);
return v_res_870_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = lean_unsigned_to_nat(0u);
v___x_872_ = lean_mk_empty_array_with_capacity(v___x_871_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(lean_object* v_upperBound_873_, lean_object* v___x_874_, lean_object* v_xs_875_, lean_object* v_a_876_, lean_object* v_b_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
uint8_t v___x_883_; 
v___x_883_ = lean_nat_dec_lt(v_a_876_, v_upperBound_873_);
if (v___x_883_ == 0)
{
lean_object* v___x_884_; 
lean_dec(v_a_876_);
v___x_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_884_, 0, v_b_877_);
return v___x_884_;
}
else
{
lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; 
v___x_885_ = lean_unsigned_to_nat(1u);
v___x_886_ = lean_nat_add(v_a_876_, v___x_885_);
v___x_887_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___closed__0);
lean_inc(v___x_886_);
v___x_888_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v___x_874_, v_xs_875_, v_a_876_, v___x_886_, v___x_887_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
lean_dec(v_a_876_);
if (lean_obj_tag(v___x_888_) == 0)
{
lean_object* v_a_889_; lean_object* v___x_890_; 
v_a_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc(v_a_889_);
lean_dec_ref(v___x_888_);
v___x_890_ = lean_array_push(v_b_877_, v_a_889_);
v_a_876_ = v___x_886_;
v_b_877_ = v___x_890_;
goto _start;
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
lean_dec(v___x_886_);
lean_dec_ref(v_b_877_);
v_a_892_ = lean_ctor_get(v___x_888_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_888_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_888_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_888_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg___boxed(lean_object* v_upperBound_900_, lean_object* v___x_901_, lean_object* v_xs_902_, lean_object* v_a_903_, lean_object* v_b_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_){
_start:
{
lean_object* v_res_910_; 
v_res_910_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_900_, v___x_901_, v_xs_902_, v_a_903_, v_b_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec(v___y_906_);
lean_dec_ref(v___y_905_);
lean_dec_ref(v_xs_902_);
lean_dec(v___x_901_);
lean_dec(v_upperBound_900_);
return v_res_910_;
}
}
static lean_object* _init_l_Lean_Elab_getParamRevDeps___lam__0___closed__0(void){
_start:
{
lean_object* v___x_911_; lean_object* v_revDeps_912_; 
v___x_911_ = lean_unsigned_to_nat(0u);
v_revDeps_912_ = lean_mk_empty_array_with_capacity(v___x_911_);
return v_revDeps_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0(lean_object* v_xs_913_, lean_object* v_x_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v_revDeps_922_; lean_object* v___x_923_; 
v___x_920_ = lean_array_get_size(v_xs_913_);
v___x_921_ = lean_unsigned_to_nat(0u);
v_revDeps_922_ = lean_obj_once(&l_Lean_Elab_getParamRevDeps___lam__0___closed__0, &l_Lean_Elab_getParamRevDeps___lam__0___closed__0_once, _init_l_Lean_Elab_getParamRevDeps___lam__0___closed__0);
v___x_923_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v___x_920_, v___x_920_, v_xs_913_, v___x_921_, v_revDeps_922_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___lam__0___boxed(lean_object* v_xs_924_, lean_object* v_x_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_){
_start:
{
lean_object* v_res_931_; 
v_res_931_ = l_Lean_Elab_getParamRevDeps___lam__0(v_xs_924_, v_x_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
lean_dec_ref(v_x_925_);
lean_dec_ref(v_xs_924_);
return v_res_931_;
}
}
static lean_object* _init_l_Lean_Elab_getParamRevDeps___closed__0(void){
_start:
{
lean_object* v___f_932_; 
v___f_932_ = lean_alloc_closure((void*)(l_Lean_Elab_getParamRevDeps___lam__0___boxed), 7, 0);
return v___f_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps(lean_object* v_value_933_, lean_object* v_a_934_, lean_object* v_a_935_, lean_object* v_a_936_, lean_object* v_a_937_){
_start:
{
lean_object* v___f_939_; uint8_t v___x_940_; lean_object* v___x_941_; 
v___f_939_ = lean_obj_once(&l_Lean_Elab_getParamRevDeps___closed__0, &l_Lean_Elab_getParamRevDeps___closed__0_once, _init_l_Lean_Elab_getParamRevDeps___closed__0);
v___x_940_ = 1;
v___x_941_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_933_, v___f_939_, v___x_940_, v_a_934_, v_a_935_, v_a_936_, v_a_937_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getParamRevDeps___boxed(lean_object* v_value_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_, lean_object* v_a_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lean_Elab_getParamRevDeps(v_value_942_, v_a_943_, v_a_944_, v_a_945_, v_a_946_);
lean_dec(v_a_946_);
lean_dec_ref(v_a_945_);
lean_dec(v_a_944_);
lean_dec_ref(v_a_943_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(lean_object* v_upperBound_949_, lean_object* v_xs_950_, lean_object* v_next_951_, lean_object* v_inst_952_, lean_object* v_R_953_, lean_object* v_a_954_, lean_object* v_b_955_, lean_object* v_c_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
lean_object* v___x_962_; 
v___x_962_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___redArg(v_upperBound_949_, v_xs_950_, v_next_951_, v_a_954_, v_b_955_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1___boxed(lean_object* v_upperBound_963_, lean_object* v_xs_964_, lean_object* v_next_965_, lean_object* v_inst_966_, lean_object* v_R_967_, lean_object* v_a_968_, lean_object* v_b_969_, lean_object* v_c_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__1(v_upperBound_963_, v_xs_964_, v_next_965_, v_inst_966_, v_R_967_, v_a_968_, v_b_969_, v_c_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_);
lean_dec(v___y_974_);
lean_dec_ref(v___y_973_);
lean_dec(v___y_972_);
lean_dec_ref(v___y_971_);
lean_dec(v_next_965_);
lean_dec_ref(v_xs_964_);
lean_dec(v_upperBound_963_);
return v_res_976_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(lean_object* v_upperBound_977_, lean_object* v___x_978_, lean_object* v_xs_979_, lean_object* v_inst_980_, lean_object* v_R_981_, lean_object* v_a_982_, lean_object* v_b_983_, lean_object* v_c_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___redArg(v_upperBound_977_, v___x_978_, v_xs_979_, v_a_982_, v_b_983_, v___y_985_, v___y_986_, v___y_987_, v___y_988_);
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2___boxed(lean_object* v_upperBound_991_, lean_object* v___x_992_, lean_object* v_xs_993_, lean_object* v_inst_994_, lean_object* v_R_995_, lean_object* v_a_996_, lean_object* v_b_997_, lean_object* v_c_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getParamRevDeps_spec__2(v_upperBound_991_, v___x_992_, v_xs_993_, v_inst_994_, v_R_995_, v_a_996_, v_b_997_, v_c_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec_ref(v_xs_993_);
lean_dec(v___x_992_);
lean_dec(v_upperBound_991_);
return v_res_1004_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0(void){
_start:
{
lean_object* v___f_1005_; 
v___f_1005_ = lean_alloc_closure((void*)(l_Lean_Meta_instInhabitedMetaM___lam__0___boxed), 5, 0);
return v___f_1005_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(lean_object* v_msg_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v___f_1012_; lean_object* v___x_34355__overap_1013_; lean_object* v___x_1014_; 
v___f_1012_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_34355__overap_1013_ = lean_panic_fn_borrowed(v___f_1012_, v_msg_1006_);
lean_inc(v___y_1010_);
lean_inc_ref(v___y_1009_);
lean_inc(v___y_1008_);
lean_inc_ref(v___y_1007_);
v___x_1014_ = lean_apply_5(v___x_34355__overap_1013_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_, lean_box(0));
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___boxed(lean_object* v_msg_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v_msg_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(size_t v_sz_1022_, size_t v_i_1023_, lean_object* v_bs_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
uint8_t v___x_1030_; 
v___x_1030_ = lean_usize_dec_lt(v_i_1023_, v_sz_1022_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1031_, 0, v_bs_1024_);
return v___x_1031_;
}
else
{
lean_object* v_v_1032_; lean_object* v_value_1033_; lean_object* v___x_1034_; 
v_v_1032_ = lean_array_uget_borrowed(v_bs_1024_, v_i_1023_);
v_value_1033_ = lean_ctor_get(v_v_1032_, 7);
lean_inc_ref(v_value_1033_);
v___x_1034_ = l_Lean_Elab_getParamRevDeps(v_value_1033_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v_a_1035_; lean_object* v___x_1036_; lean_object* v_bs_x27_1037_; size_t v___x_1038_; size_t v___x_1039_; lean_object* v___x_1040_; 
v_a_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc(v_a_1035_);
lean_dec_ref(v___x_1034_);
v___x_1036_ = lean_unsigned_to_nat(0u);
v_bs_x27_1037_ = lean_array_uset(v_bs_1024_, v_i_1023_, v___x_1036_);
v___x_1038_ = ((size_t)1ULL);
v___x_1039_ = lean_usize_add(v_i_1023_, v___x_1038_);
v___x_1040_ = lean_array_uset(v_bs_x27_1037_, v_i_1023_, v_a_1035_);
v_i_1023_ = v___x_1039_;
v_bs_1024_ = v___x_1040_;
goto _start;
}
else
{
lean_object* v_a_1042_; lean_object* v___x_1044_; uint8_t v_isShared_1045_; uint8_t v_isSharedCheck_1049_; 
lean_dec_ref(v_bs_1024_);
v_a_1042_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1044_ = v___x_1034_;
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
else
{
lean_inc(v_a_1042_);
lean_dec(v___x_1034_);
v___x_1044_ = lean_box(0);
v_isShared_1045_ = v_isSharedCheck_1049_;
goto v_resetjp_1043_;
}
v_resetjp_1043_:
{
lean_object* v___x_1047_; 
if (v_isShared_1045_ == 0)
{
v___x_1047_ = v___x_1044_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v_a_1042_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0___boxed(lean_object* v_sz_1050_, lean_object* v_i_1051_, lean_object* v_bs_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
size_t v_sz_boxed_1058_; size_t v_i_boxed_1059_; lean_object* v_res_1060_; 
v_sz_boxed_1058_ = lean_unbox_usize(v_sz_1050_);
lean_dec(v_sz_1050_);
v_i_boxed_1059_ = lean_unbox_usize(v_i_1051_);
lean_dec(v_i_1051_);
v_res_1060_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_boxed_1058_, v_i_boxed_1059_, v_bs_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_);
lean_dec(v___y_1056_);
lean_dec_ref(v___y_1055_);
lean_dec(v___y_1054_);
lean_dec_ref(v___y_1053_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(lean_object* v_msgData_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v___x_1067_; lean_object* v_env_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v_mctx_1071_; lean_object* v_lctx_1072_; lean_object* v_options_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1067_ = lean_st_ref_get(v___y_1065_);
v_env_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc_ref(v_env_1068_);
lean_dec(v___x_1067_);
v___x_1069_ = lean_st_ref_get(v___y_1065_);
lean_dec(v___x_1069_);
v___x_1070_ = lean_st_ref_get(v___y_1063_);
v_mctx_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc_ref(v_mctx_1071_);
lean_dec(v___x_1070_);
v_lctx_1072_ = lean_ctor_get(v___y_1062_, 2);
v_options_1073_ = lean_ctor_get(v___y_1064_, 2);
lean_inc_ref(v_options_1073_);
lean_inc_ref(v_lctx_1072_);
v___x_1074_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1074_, 0, v_env_1068_);
lean_ctor_set(v___x_1074_, 1, v_mctx_1071_);
lean_ctor_set(v___x_1074_, 2, v_lctx_1072_);
lean_ctor_set(v___x_1074_, 3, v_options_1073_);
v___x_1075_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1074_);
lean_ctor_set(v___x_1075_, 1, v_msgData_1061_);
v___x_1076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1076_, 0, v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2___boxed(lean_object* v_msgData_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msgData_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
return v_res_1083_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0(void){
_start:
{
lean_object* v___x_1084_; double v___x_1085_; 
v___x_1084_ = lean_unsigned_to_nat(0u);
v___x_1085_ = lean_float_of_nat(v___x_1084_);
return v___x_1085_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1(void){
_start:
{
lean_object* v___x_1086_; 
v___x_1086_ = lean_mk_string_unchecked("", 0, 0);
return v___x_1086_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = lean_unsigned_to_nat(0u);
v___x_1088_ = lean_mk_empty_array_with_capacity(v___x_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(lean_object* v_cls_1089_, lean_object* v_msg_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v_ref_1096_; lean_object* v___x_1097_; lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1142_; 
v_ref_1096_ = lean_ctor_get(v___y_1093_, 5);
v___x_1097_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2_spec__2(v_msg_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_);
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1100_ = v___x_1097_;
v_isShared_1101_ = v_isSharedCheck_1142_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v___x_1097_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1142_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1102_; lean_object* v_traceState_1103_; lean_object* v_env_1104_; lean_object* v_nextMacroScope_1105_; lean_object* v_ngen_1106_; lean_object* v_auxDeclNGen_1107_; lean_object* v_cache_1108_; lean_object* v_messages_1109_; lean_object* v_infoState_1110_; lean_object* v_snapshotTasks_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1141_; 
v___x_1102_ = lean_st_ref_take(v___y_1094_);
v_traceState_1103_ = lean_ctor_get(v___x_1102_, 4);
v_env_1104_ = lean_ctor_get(v___x_1102_, 0);
v_nextMacroScope_1105_ = lean_ctor_get(v___x_1102_, 1);
v_ngen_1106_ = lean_ctor_get(v___x_1102_, 2);
v_auxDeclNGen_1107_ = lean_ctor_get(v___x_1102_, 3);
v_cache_1108_ = lean_ctor_get(v___x_1102_, 5);
v_messages_1109_ = lean_ctor_get(v___x_1102_, 6);
v_infoState_1110_ = lean_ctor_get(v___x_1102_, 7);
v_snapshotTasks_1111_ = lean_ctor_get(v___x_1102_, 8);
v_isSharedCheck_1141_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1141_ == 0)
{
v___x_1113_ = v___x_1102_;
v_isShared_1114_ = v_isSharedCheck_1141_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_snapshotTasks_1111_);
lean_inc(v_infoState_1110_);
lean_inc(v_messages_1109_);
lean_inc(v_cache_1108_);
lean_inc(v_traceState_1103_);
lean_inc(v_auxDeclNGen_1107_);
lean_inc(v_ngen_1106_);
lean_inc(v_nextMacroScope_1105_);
lean_inc(v_env_1104_);
lean_dec(v___x_1102_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1141_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
uint64_t v_tid_1115_; lean_object* v_traces_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1140_; 
v_tid_1115_ = lean_ctor_get_uint64(v_traceState_1103_, sizeof(void*)*1);
v_traces_1116_ = lean_ctor_get(v_traceState_1103_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v_traceState_1103_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1118_ = v_traceState_1103_;
v_isShared_1119_ = v_isSharedCheck_1140_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_traces_1116_);
lean_dec(v_traceState_1103_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1140_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1120_; double v___x_1121_; uint8_t v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
v___x_1120_ = lean_box(0);
v___x_1121_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0, &l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__0);
v___x_1122_ = 0;
v___x_1123_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1, &l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__1);
v___x_1124_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1124_, 0, v_cls_1089_);
lean_ctor_set(v___x_1124_, 1, v___x_1120_);
lean_ctor_set(v___x_1124_, 2, v___x_1123_);
lean_ctor_set_float(v___x_1124_, sizeof(void*)*3, v___x_1121_);
lean_ctor_set_float(v___x_1124_, sizeof(void*)*3 + 8, v___x_1121_);
lean_ctor_set_uint8(v___x_1124_, sizeof(void*)*3 + 16, v___x_1122_);
v___x_1125_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2, &l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___closed__2);
v___x_1126_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1126_, 0, v___x_1124_);
lean_ctor_set(v___x_1126_, 1, v_a_1098_);
lean_ctor_set(v___x_1126_, 2, v___x_1125_);
lean_inc(v_ref_1096_);
v___x_1127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1127_, 0, v_ref_1096_);
lean_ctor_set(v___x_1127_, 1, v___x_1126_);
v___x_1128_ = l_Lean_PersistentArray_push___redArg(v_traces_1116_, v___x_1127_);
if (v_isShared_1119_ == 0)
{
lean_ctor_set(v___x_1118_, 0, v___x_1128_);
v___x_1130_ = v___x_1118_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1128_);
lean_ctor_set_uint64(v_reuseFailAlloc_1139_, sizeof(void*)*1, v_tid_1115_);
v___x_1130_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1132_; 
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 4, v___x_1130_);
v___x_1132_ = v___x_1113_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_env_1104_);
lean_ctor_set(v_reuseFailAlloc_1138_, 1, v_nextMacroScope_1105_);
lean_ctor_set(v_reuseFailAlloc_1138_, 2, v_ngen_1106_);
lean_ctor_set(v_reuseFailAlloc_1138_, 3, v_auxDeclNGen_1107_);
lean_ctor_set(v_reuseFailAlloc_1138_, 4, v___x_1130_);
lean_ctor_set(v_reuseFailAlloc_1138_, 5, v_cache_1108_);
lean_ctor_set(v_reuseFailAlloc_1138_, 6, v_messages_1109_);
lean_ctor_set(v_reuseFailAlloc_1138_, 7, v_infoState_1110_);
lean_ctor_set(v_reuseFailAlloc_1138_, 8, v_snapshotTasks_1111_);
v___x_1132_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1136_; 
v___x_1133_ = lean_st_ref_set(v___y_1094_, v___x_1132_);
v___x_1134_ = lean_box(0);
if (v_isShared_1101_ == 0)
{
lean_ctor_set(v___x_1100_, 0, v___x_1134_);
v___x_1136_ = v___x_1100_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1134_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2___boxed(lean_object* v_cls_1143_, lean_object* v_msg_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
lean_object* v_res_1150_; 
v_res_1150_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v_cls_1143_, v_msg_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_);
lean_dec(v___y_1148_);
lean_dec_ref(v___y_1147_);
lean_dec(v___y_1146_);
lean_dec_ref(v___y_1145_);
return v_res_1150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(size_t v_sz_1151_, size_t v_i_1152_, lean_object* v_bs_1153_){
_start:
{
uint8_t v___x_1154_; 
v___x_1154_ = lean_usize_dec_lt(v_i_1152_, v_sz_1151_);
if (v___x_1154_ == 0)
{
return v_bs_1153_;
}
else
{
lean_object* v_v_1155_; lean_object* v___x_1156_; lean_object* v_bs_x27_1157_; lean_object* v___x_1158_; size_t v___x_1159_; size_t v___x_1160_; lean_object* v___x_1161_; 
v_v_1155_ = lean_array_uget(v_bs_1153_, v_i_1152_);
v___x_1156_ = lean_unsigned_to_nat(0u);
v_bs_x27_1157_ = lean_array_uset(v_bs_1153_, v_i_1152_, v___x_1156_);
v___x_1158_ = lean_array_get_size(v_v_1155_);
lean_dec(v_v_1155_);
v___x_1159_ = ((size_t)1ULL);
v___x_1160_ = lean_usize_add(v_i_1152_, v___x_1159_);
v___x_1161_ = lean_array_uset(v_bs_x27_1157_, v_i_1152_, v___x_1158_);
v_i_1152_ = v___x_1160_;
v_bs_1153_ = v___x_1161_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1___boxed(lean_object* v_sz_1163_, lean_object* v_i_1164_, lean_object* v_bs_1165_){
_start:
{
size_t v_sz_boxed_1166_; size_t v_i_boxed_1167_; lean_object* v_res_1168_; 
v_sz_boxed_1166_ = lean_unbox_usize(v_sz_1163_);
lean_dec(v_sz_1163_);
v_i_boxed_1167_ = lean_unbox_usize(v_i_1164_);
lean_dec(v_i_1164_);
v_res_1168_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_boxed_1166_, v_i_boxed_1167_, v_bs_1165_);
return v_res_1168_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(lean_object* v_val_1169_, lean_object* v_val_1170_, lean_object* v_a_1171_, lean_object* v___x_1172_, lean_object* v_____r_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_){
_start:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1179_ = lean_st_ref_get(v___y_1177_);
lean_dec(v___x_1179_);
v___x_1180_ = lean_st_ref_take(v_val_1169_);
v___x_1181_ = l_Lean_Elab_FixedParams_Info_setVarying(v_val_1170_, v_a_1171_, v___x_1180_);
v___x_1182_ = lean_st_ref_set(v_val_1169_, v___x_1181_);
v___x_1183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1183_, 0, v___x_1172_);
v___x_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1___boxed(lean_object* v_val_1185_, lean_object* v_val_1186_, lean_object* v_a_1187_, lean_object* v___x_1188_, lean_object* v_____r_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_1185_, v_val_1186_, v_a_1187_, v___x_1188_, v_____r_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
lean_dec(v___y_1193_);
lean_dec_ref(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec_ref(v___y_1190_);
lean_dec(v_val_1186_);
lean_dec(v_val_1185_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(lean_object* v_val_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1200_ = lean_st_ref_get(v___y_1198_);
lean_dec(v___x_1200_);
v___x_1201_ = lean_st_ref_get(v_val_1196_);
v___x_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
return v___x_1202_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0___boxed(lean_object* v_val_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_){
_start:
{
lean_object* v_res_1207_; 
v_res_1207_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_1203_, v___y_1204_, v___y_1205_);
lean_dec(v___y_1205_);
lean_dec_ref(v___y_1204_);
lean_dec(v_val_1203_);
return v_res_1207_;
}
}
static uint64_t _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0(void){
_start:
{
uint8_t v___x_1208_; uint64_t v___x_1209_; 
v___x_1208_ = 2;
v___x_1209_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_1208_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(lean_object* v_upperBound_1210_, lean_object* v_val_1211_, lean_object* v_next_1212_, lean_object* v_params_1213_, lean_object* v___x_1214_, lean_object* v_val_1215_, lean_object* v_next_1216_, uint8_t v___x_1217_, lean_object* v_a_1218_, uint8_t v_b_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_){
_start:
{
uint8_t v_a_1226_; uint8_t v___x_1230_; 
v___x_1230_ = lean_nat_dec_lt(v_a_1218_, v_upperBound_1210_);
if (v___x_1230_ == 0)
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
lean_dec(v_a_1218_);
lean_dec(v_next_1216_);
lean_dec_ref(v___x_1214_);
v___x_1231_ = lean_box(v_b_1219_);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
return v___x_1232_;
}
else
{
lean_object* v___x_1233_; lean_object* v___x_1234_; uint8_t v___x_1235_; 
v___x_1233_ = lean_st_ref_get(v___y_1223_);
lean_dec(v___x_1233_);
v___x_1234_ = lean_st_ref_get(v_val_1211_);
v___x_1235_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_next_1212_, v_a_1218_, v___x_1234_);
lean_dec(v___x_1234_);
if (v___x_1235_ == 0)
{
v_a_1226_ = v_b_1219_;
goto v___jp_1225_;
}
else
{
lean_object* v___x_1236_; uint8_t v_foApprox_1237_; uint8_t v_ctxApprox_1238_; uint8_t v_quasiPatternApprox_1239_; uint8_t v_constApprox_1240_; uint8_t v_isDefEqStuckEx_1241_; uint8_t v_unificationHints_1242_; uint8_t v_assignSyntheticOpaque_1243_; uint8_t v_offsetCnstrs_1244_; uint8_t v_transparency_1245_; uint8_t v_etaStruct_1246_; uint8_t v_univApprox_1247_; uint8_t v_iota_1248_; uint8_t v_beta_1249_; uint8_t v_proj_1250_; uint8_t v_zeta_1251_; uint8_t v_zetaDelta_1252_; uint8_t v_zetaUnused_1253_; uint8_t v_zetaHave_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1318_; 
v___x_1236_ = l_Lean_Meta_Context_config(v___y_1220_);
v_foApprox_1237_ = lean_ctor_get_uint8(v___x_1236_, 0);
v_ctxApprox_1238_ = lean_ctor_get_uint8(v___x_1236_, 1);
v_quasiPatternApprox_1239_ = lean_ctor_get_uint8(v___x_1236_, 2);
v_constApprox_1240_ = lean_ctor_get_uint8(v___x_1236_, 3);
v_isDefEqStuckEx_1241_ = lean_ctor_get_uint8(v___x_1236_, 4);
v_unificationHints_1242_ = lean_ctor_get_uint8(v___x_1236_, 5);
v_assignSyntheticOpaque_1243_ = lean_ctor_get_uint8(v___x_1236_, 7);
v_offsetCnstrs_1244_ = lean_ctor_get_uint8(v___x_1236_, 8);
v_transparency_1245_ = lean_ctor_get_uint8(v___x_1236_, 9);
v_etaStruct_1246_ = lean_ctor_get_uint8(v___x_1236_, 10);
v_univApprox_1247_ = lean_ctor_get_uint8(v___x_1236_, 11);
v_iota_1248_ = lean_ctor_get_uint8(v___x_1236_, 12);
v_beta_1249_ = lean_ctor_get_uint8(v___x_1236_, 13);
v_proj_1250_ = lean_ctor_get_uint8(v___x_1236_, 14);
v_zeta_1251_ = lean_ctor_get_uint8(v___x_1236_, 15);
v_zetaDelta_1252_ = lean_ctor_get_uint8(v___x_1236_, 16);
v_zetaUnused_1253_ = lean_ctor_get_uint8(v___x_1236_, 17);
v_zetaHave_1254_ = lean_ctor_get_uint8(v___x_1236_, 18);
v_isSharedCheck_1318_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1318_ == 0)
{
v___x_1256_ = v___x_1236_;
v_isShared_1257_ = v_isSharedCheck_1318_;
goto v_resetjp_1255_;
}
else
{
lean_dec(v___x_1236_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1318_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
uint8_t v_trackZetaDelta_1258_; lean_object* v_zetaDeltaSet_1259_; lean_object* v_lctx_1260_; lean_object* v_localInstances_1261_; lean_object* v_defEqCtx_x3f_1262_; lean_object* v_synthPendingDepth_1263_; lean_object* v_canUnfold_x3f_1264_; uint8_t v_univApprox_1265_; uint8_t v_inTypeClassResolution_1266_; uint8_t v_cacheInferType_1267_; uint8_t v___x_1268_; lean_object* v___x_1270_; 
v_trackZetaDelta_1258_ = lean_ctor_get_uint8(v___y_1220_, sizeof(void*)*7);
v_zetaDeltaSet_1259_ = lean_ctor_get(v___y_1220_, 1);
v_lctx_1260_ = lean_ctor_get(v___y_1220_, 2);
v_localInstances_1261_ = lean_ctor_get(v___y_1220_, 3);
v_defEqCtx_x3f_1262_ = lean_ctor_get(v___y_1220_, 4);
v_synthPendingDepth_1263_ = lean_ctor_get(v___y_1220_, 5);
v_canUnfold_x3f_1264_ = lean_ctor_get(v___y_1220_, 6);
v_univApprox_1265_ = lean_ctor_get_uint8(v___y_1220_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1266_ = lean_ctor_get_uint8(v___y_1220_, sizeof(void*)*7 + 2);
v_cacheInferType_1267_ = lean_ctor_get_uint8(v___y_1220_, sizeof(void*)*7 + 3);
v___x_1268_ = 0;
if (v_isShared_1257_ == 0)
{
v___x_1270_ = v___x_1256_;
goto v_reusejp_1269_;
}
else
{
lean_object* v_reuseFailAlloc_1317_; 
v_reuseFailAlloc_1317_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 0, v_foApprox_1237_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 1, v_ctxApprox_1238_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 2, v_quasiPatternApprox_1239_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 3, v_constApprox_1240_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 4, v_isDefEqStuckEx_1241_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 5, v_unificationHints_1242_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 7, v_assignSyntheticOpaque_1243_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 8, v_offsetCnstrs_1244_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 9, v_transparency_1245_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 10, v_etaStruct_1246_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 11, v_univApprox_1247_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 12, v_iota_1248_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 13, v_beta_1249_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 14, v_proj_1250_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 15, v_zeta_1251_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 16, v_zetaDelta_1252_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 17, v_zetaUnused_1253_);
lean_ctor_set_uint8(v_reuseFailAlloc_1317_, 18, v_zetaHave_1254_);
v___x_1270_ = v_reuseFailAlloc_1317_;
goto v_reusejp_1269_;
}
v_reusejp_1269_:
{
uint64_t v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; uint8_t v_foApprox_1275_; uint8_t v_ctxApprox_1276_; uint8_t v_quasiPatternApprox_1277_; uint8_t v_constApprox_1278_; uint8_t v_isDefEqStuckEx_1279_; uint8_t v_unificationHints_1280_; uint8_t v_proofIrrelevance_1281_; uint8_t v_assignSyntheticOpaque_1282_; uint8_t v_offsetCnstrs_1283_; uint8_t v_etaStruct_1284_; uint8_t v_univApprox_1285_; uint8_t v_iota_1286_; uint8_t v_beta_1287_; uint8_t v_proj_1288_; uint8_t v_zeta_1289_; uint8_t v_zetaDelta_1290_; uint8_t v_zetaUnused_1291_; uint8_t v_zetaHave_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1316_; 
lean_ctor_set_uint8(v___x_1270_, 6, v___x_1268_);
v___x_1271_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1270_);
v___x_1272_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1272_, 0, v___x_1270_);
lean_ctor_set_uint64(v___x_1272_, sizeof(void*)*1, v___x_1271_);
lean_inc(v_canUnfold_x3f_1264_);
lean_inc(v_synthPendingDepth_1263_);
lean_inc(v_defEqCtx_x3f_1262_);
lean_inc_ref(v_localInstances_1261_);
lean_inc_ref(v_lctx_1260_);
lean_inc(v_zetaDeltaSet_1259_);
v___x_1273_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1273_, 0, v___x_1272_);
lean_ctor_set(v___x_1273_, 1, v_zetaDeltaSet_1259_);
lean_ctor_set(v___x_1273_, 2, v_lctx_1260_);
lean_ctor_set(v___x_1273_, 3, v_localInstances_1261_);
lean_ctor_set(v___x_1273_, 4, v_defEqCtx_x3f_1262_);
lean_ctor_set(v___x_1273_, 5, v_synthPendingDepth_1263_);
lean_ctor_set(v___x_1273_, 6, v_canUnfold_x3f_1264_);
lean_ctor_set_uint8(v___x_1273_, sizeof(void*)*7, v_trackZetaDelta_1258_);
lean_ctor_set_uint8(v___x_1273_, sizeof(void*)*7 + 1, v_univApprox_1265_);
lean_ctor_set_uint8(v___x_1273_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1266_);
lean_ctor_set_uint8(v___x_1273_, sizeof(void*)*7 + 3, v_cacheInferType_1267_);
v___x_1274_ = l_Lean_Meta_Context_config(v___x_1273_);
v_foApprox_1275_ = lean_ctor_get_uint8(v___x_1274_, 0);
v_ctxApprox_1276_ = lean_ctor_get_uint8(v___x_1274_, 1);
v_quasiPatternApprox_1277_ = lean_ctor_get_uint8(v___x_1274_, 2);
v_constApprox_1278_ = lean_ctor_get_uint8(v___x_1274_, 3);
v_isDefEqStuckEx_1279_ = lean_ctor_get_uint8(v___x_1274_, 4);
v_unificationHints_1280_ = lean_ctor_get_uint8(v___x_1274_, 5);
v_proofIrrelevance_1281_ = lean_ctor_get_uint8(v___x_1274_, 6);
v_assignSyntheticOpaque_1282_ = lean_ctor_get_uint8(v___x_1274_, 7);
v_offsetCnstrs_1283_ = lean_ctor_get_uint8(v___x_1274_, 8);
v_etaStruct_1284_ = lean_ctor_get_uint8(v___x_1274_, 10);
v_univApprox_1285_ = lean_ctor_get_uint8(v___x_1274_, 11);
v_iota_1286_ = lean_ctor_get_uint8(v___x_1274_, 12);
v_beta_1287_ = lean_ctor_get_uint8(v___x_1274_, 13);
v_proj_1288_ = lean_ctor_get_uint8(v___x_1274_, 14);
v_zeta_1289_ = lean_ctor_get_uint8(v___x_1274_, 15);
v_zetaDelta_1290_ = lean_ctor_get_uint8(v___x_1274_, 16);
v_zetaUnused_1291_ = lean_ctor_get_uint8(v___x_1274_, 17);
v_zetaHave_1292_ = lean_ctor_get_uint8(v___x_1274_, 18);
v_isSharedCheck_1316_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1294_ = v___x_1274_;
v_isShared_1295_ = v_isSharedCheck_1316_;
goto v_resetjp_1293_;
}
else
{
lean_dec(v___x_1274_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1316_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v___x_1296_; uint8_t v___x_1297_; lean_object* v_config_1299_; 
v___x_1296_ = lean_array_fget_borrowed(v_params_1213_, v_a_1218_);
v___x_1297_ = 2;
if (v_isShared_1295_ == 0)
{
v_config_1299_ = v___x_1294_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 0, v_foApprox_1275_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 1, v_ctxApprox_1276_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 2, v_quasiPatternApprox_1277_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 3, v_constApprox_1278_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 4, v_isDefEqStuckEx_1279_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 5, v_unificationHints_1280_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 6, v_proofIrrelevance_1281_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 7, v_assignSyntheticOpaque_1282_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 8, v_offsetCnstrs_1283_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 10, v_etaStruct_1284_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 11, v_univApprox_1285_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 12, v_iota_1286_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 13, v_beta_1287_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 14, v_proj_1288_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 15, v_zeta_1289_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 16, v_zetaDelta_1290_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 17, v_zetaUnused_1291_);
lean_ctor_set_uint8(v_reuseFailAlloc_1315_, 18, v_zetaHave_1292_);
v_config_1299_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
uint64_t v___x_1300_; uint64_t v___x_1301_; uint64_t v___x_1302_; uint64_t v___x_1303_; uint64_t v___x_1304_; uint64_t v_key_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
lean_ctor_set_uint8(v_config_1299_, 9, v___x_1297_);
v___x_1300_ = l_Lean_Meta_Context_configKey(v___x_1273_);
lean_dec_ref(v___x_1273_);
v___x_1301_ = 2ULL;
v___x_1302_ = lean_uint64_shift_right(v___x_1300_, v___x_1301_);
v___x_1303_ = lean_uint64_shift_left(v___x_1302_, v___x_1301_);
v___x_1304_ = lean_uint64_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0);
v_key_1305_ = lean_uint64_lor(v___x_1303_, v___x_1304_);
v___x_1306_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1306_, 0, v_config_1299_);
lean_ctor_set_uint64(v___x_1306_, sizeof(void*)*1, v_key_1305_);
lean_inc(v_canUnfold_x3f_1264_);
lean_inc(v_synthPendingDepth_1263_);
lean_inc(v_defEqCtx_x3f_1262_);
lean_inc_ref(v_localInstances_1261_);
lean_inc_ref(v_lctx_1260_);
lean_inc(v_zetaDeltaSet_1259_);
v___x_1307_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1307_, 0, v___x_1306_);
lean_ctor_set(v___x_1307_, 1, v_zetaDeltaSet_1259_);
lean_ctor_set(v___x_1307_, 2, v_lctx_1260_);
lean_ctor_set(v___x_1307_, 3, v_localInstances_1261_);
lean_ctor_set(v___x_1307_, 4, v_defEqCtx_x3f_1262_);
lean_ctor_set(v___x_1307_, 5, v_synthPendingDepth_1263_);
lean_ctor_set(v___x_1307_, 6, v_canUnfold_x3f_1264_);
lean_ctor_set_uint8(v___x_1307_, sizeof(void*)*7, v_trackZetaDelta_1258_);
lean_ctor_set_uint8(v___x_1307_, sizeof(void*)*7 + 1, v_univApprox_1265_);
lean_ctor_set_uint8(v___x_1307_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1266_);
lean_ctor_set_uint8(v___x_1307_, sizeof(void*)*7 + 3, v_cacheInferType_1267_);
lean_inc_ref(v___x_1214_);
lean_inc(v___x_1296_);
v___x_1308_ = l_Lean_Meta_isExprDefEq(v___x_1296_, v___x_1214_, v___x_1307_, v___y_1221_, v___y_1222_, v___y_1223_);
lean_dec_ref(v___x_1307_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; uint8_t v___x_1310_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
lean_inc(v_a_1309_);
lean_dec_ref(v___x_1308_);
v___x_1310_ = lean_unbox(v_a_1309_);
lean_dec(v_a_1309_);
if (v___x_1310_ == 0)
{
v_a_1226_ = v_b_1219_;
goto v___jp_1225_;
}
else
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; 
v___x_1311_ = lean_st_ref_get(v___y_1223_);
lean_dec(v___x_1311_);
v___x_1312_ = lean_st_ref_take(v_val_1211_);
lean_inc(v_a_1218_);
lean_inc(v_next_1216_);
v___x_1313_ = l_Lean_Elab_FixedParams_Info_setCallerParam(v_val_1215_, v_next_1216_, v_next_1212_, v_a_1218_, v___x_1312_);
v___x_1314_ = lean_st_ref_set(v_val_1211_, v___x_1313_);
v_a_1226_ = v___x_1217_;
goto v___jp_1225_;
}
}
else
{
lean_dec(v_a_1218_);
lean_dec(v_next_1216_);
lean_dec_ref(v___x_1214_);
return v___x_1308_;
}
}
}
}
}
}
}
v___jp_1225_:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1227_ = lean_unsigned_to_nat(1u);
v___x_1228_ = lean_nat_add(v_a_1218_, v___x_1227_);
lean_dec(v_a_1218_);
v_a_1218_ = v___x_1228_;
v_b_1219_ = v_a_1226_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___boxed(lean_object* v_upperBound_1319_, lean_object* v_val_1320_, lean_object* v_next_1321_, lean_object* v_params_1322_, lean_object* v___x_1323_, lean_object* v_val_1324_, lean_object* v_next_1325_, lean_object* v___x_1326_, lean_object* v_a_1327_, lean_object* v_b_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_){
_start:
{
uint8_t v___x_44617__boxed_1334_; uint8_t v_b_boxed_1335_; lean_object* v_res_1336_; 
v___x_44617__boxed_1334_ = lean_unbox(v___x_1326_);
v_b_boxed_1335_ = lean_unbox(v_b_1328_);
v_res_1336_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_upperBound_1319_, v_val_1320_, v_next_1321_, v_params_1322_, v___x_1323_, v_val_1324_, v_next_1325_, v___x_44617__boxed_1334_, v_a_1327_, v_b_boxed_1335_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_);
lean_dec(v___y_1332_);
lean_dec_ref(v___y_1331_);
lean_dec(v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v_val_1324_);
lean_dec_ref(v_params_1322_);
lean_dec(v_next_1321_);
lean_dec(v_val_1320_);
lean_dec(v_upperBound_1319_);
return v_res_1336_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1337_; 
v___x_1337_ = lean_mk_string_unchecked("Elab", 4, 4);
return v___x_1337_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1338_; 
v___x_1338_ = lean_mk_string_unchecked("definition", 10, 10);
return v___x_1338_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_mk_string_unchecked("fixedParams", 11, 11);
return v___x_1339_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1340_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__2);
v___x_1341_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__1);
v___x_1342_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0);
v___x_1343_ = l_Lean_Name_mkStr3(v___x_1342_, v___x_1341_, v___x_1340_);
return v___x_1343_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4(void){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_mk_string_unchecked("trace", 5, 5);
return v___x_1344_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_1345_; lean_object* v___x_1346_; 
v___x_1345_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__4);
v___x_1346_ = l_Lean_Name_mkStr1(v___x_1345_);
return v___x_1346_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6(void){
_start:
{
lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1347_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3);
v___x_1348_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__5);
v___x_1349_ = l_Lean_Name_append(v___x_1348_, v___x_1347_);
return v___x_1349_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7(void){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = lean_mk_string_unchecked("getFixedParams: notFixed ", 25, 25);
return v___x_1350_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8(void){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
v___x_1351_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__7);
v___x_1352_ = l_Lean_stringToMessageData(v___x_1351_);
return v___x_1352_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; 
v___x_1353_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__2);
v___x_1354_ = l_Lean_stringToMessageData(v___x_1353_);
return v___x_1354_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10(void){
_start:
{
lean_object* v___x_1355_; 
v___x_1355_ = lean_mk_string_unchecked(":\nIn ", 5, 5);
return v___x_1355_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__10);
v___x_1357_ = l_Lean_stringToMessageData(v___x_1356_);
return v___x_1357_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12(void){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = lean_mk_string_unchecked("\ntoo few arguments for ", 23, 23);
return v___x_1358_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
v___x_1359_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__12);
v___x_1360_ = l_Lean_stringToMessageData(v___x_1359_);
return v___x_1360_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14(void){
_start:
{
lean_object* v___x_1361_; 
v___x_1361_ = lean_mk_string_unchecked("\n", 1, 1);
return v___x_1361_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1362_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__14);
v___x_1363_ = l_Lean_stringToMessageData(v___x_1362_);
return v___x_1363_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16(void){
_start:
{
lean_object* v___x_1364_; 
v___x_1364_ = lean_mk_string_unchecked(" =/= ", 5, 5);
return v___x_1364_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1365_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__16);
v___x_1366_ = l_Lean_stringToMessageData(v___x_1365_);
return v___x_1366_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18(void){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = lean_mk_string_unchecked(" not matched", 12, 12);
return v___x_1367_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1368_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__18);
v___x_1369_ = l_Lean_stringToMessageData(v___x_1368_);
return v___x_1369_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(lean_object* v_val_1370_, lean_object* v_val_1371_, lean_object* v_upperBound_1372_, lean_object* v_args_1373_, lean_object* v_e_1374_, lean_object* v_next_1375_, lean_object* v_params_1376_, lean_object* v___x_1377_, uint8_t v___x_1378_, lean_object* v_a_1379_, lean_object* v_b_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
lean_object* v_a_1387_; lean_object* v___y_1392_; uint8_t v___x_1411_; 
v___x_1411_ = lean_nat_dec_lt(v_a_1379_, v_upperBound_1372_);
if (v___x_1411_ == 0)
{
lean_object* v___x_1412_; 
lean_dec(v_a_1379_);
lean_dec_ref(v_e_1374_);
lean_dec(v_val_1371_);
v___x_1412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1412_, 0, v_b_1380_);
return v___x_1412_;
}
else
{
lean_object* v___x_1413_; 
v___x_1413_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_1370_, v___y_1383_, v___y_1384_);
if (lean_obj_tag(v___x_1413_) == 0)
{
lean_object* v_a_1414_; lean_object* v___x_1415_; uint8_t v___x_1416_; 
v_a_1414_ = lean_ctor_get(v___x_1413_, 0);
lean_inc(v_a_1414_);
lean_dec_ref(v___x_1413_);
v___x_1415_ = lean_box(0);
v___x_1416_ = l_Lean_Elab_FixedParams_Info_mayBeFixed(v_val_1371_, v_a_1379_, v_a_1414_);
lean_dec(v_a_1414_);
if (v___x_1416_ == 0)
{
v_a_1387_ = v___x_1415_;
goto v___jp_1386_;
}
else
{
lean_object* v___x_1417_; uint8_t v___x_1418_; 
v___x_1417_ = lean_array_get_size(v_args_1373_);
v___x_1418_ = lean_nat_dec_lt(v_a_1379_, v___x_1417_);
if (v___x_1418_ == 0)
{
lean_object* v_options_1419_; lean_object* v_inheritedTraceOptions_1420_; uint8_t v_hasTrace_1421_; 
v_options_1419_ = lean_ctor_get(v___y_1383_, 2);
v_inheritedTraceOptions_1420_ = lean_ctor_get(v___y_1383_, 13);
v_hasTrace_1421_ = lean_ctor_get_uint8(v_options_1419_, sizeof(void*)*1);
if (v_hasTrace_1421_ == 0)
{
goto v___jp_1422_;
}
else
{
lean_object* v___x_1424_; lean_object* v___x_1425_; uint8_t v___x_1426_; 
v___x_1424_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3);
v___x_1425_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_1426_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1420_, v_options_1419_, v___x_1425_);
if (v___x_1426_ == 0)
{
goto v___jp_1422_;
}
else
{
lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1427_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_1371_);
v___x_1428_ = l_Nat_reprFast(v_val_1371_);
v___x_1429_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1428_);
v___x_1430_ = l_Lean_MessageData_ofFormat(v___x_1429_);
v___x_1431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1431_, 0, v___x_1427_);
lean_ctor_set(v___x_1431_, 1, v___x_1430_);
v___x_1432_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_1433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1433_, 0, v___x_1431_);
lean_ctor_set(v___x_1433_, 1, v___x_1432_);
lean_inc(v_a_1379_);
v___x_1434_ = l_Nat_reprFast(v_a_1379_);
v___x_1435_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1435_, 0, v___x_1434_);
v___x_1436_ = l_Lean_MessageData_ofFormat(v___x_1435_);
lean_inc_ref(v___x_1436_);
v___x_1437_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1433_);
lean_ctor_set(v___x_1437_, 1, v___x_1436_);
v___x_1438_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_1439_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1439_, 0, v___x_1437_);
lean_ctor_set(v___x_1439_, 1, v___x_1438_);
lean_inc_ref(v_e_1374_);
v___x_1440_ = l_Lean_MessageData_ofExpr(v_e_1374_);
v___x_1441_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1439_);
lean_ctor_set(v___x_1441_, 1, v___x_1440_);
v___x_1442_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__13);
v___x_1443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1441_);
lean_ctor_set(v___x_1443_, 1, v___x_1442_);
v___x_1444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1444_, 0, v___x_1443_);
lean_ctor_set(v___x_1444_, 1, v___x_1436_);
v___x_1445_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_1424_, v___x_1444_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
if (lean_obj_tag(v___x_1445_) == 0)
{
lean_object* v_a_1446_; lean_object* v___x_1447_; 
v_a_1446_ = lean_ctor_get(v___x_1445_, 0);
lean_inc(v_a_1446_);
lean_dec_ref(v___x_1445_);
lean_inc(v_a_1379_);
v___x_1447_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_1370_, v_val_1371_, v_a_1379_, v___x_1415_, v_a_1446_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
v___y_1392_ = v___x_1447_;
goto v___jp_1391_;
}
else
{
lean_dec(v_a_1379_);
lean_dec_ref(v_e_1374_);
lean_dec(v_val_1371_);
return v___x_1445_;
}
}
}
v___jp_1422_:
{
lean_object* v___x_1423_; 
lean_inc(v_a_1379_);
v___x_1423_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_1370_, v_val_1371_, v_a_1379_, v___x_1415_, v___x_1415_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
v___y_1392_ = v___x_1423_;
goto v___jp_1391_;
}
}
else
{
lean_object* v___x_1448_; 
v___x_1448_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__0(v_val_1370_, v___y_1383_, v___y_1384_);
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v_a_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v_a_1449_ = lean_ctor_get(v___x_1448_, 0);
lean_inc(v_a_1449_);
lean_dec_ref(v___x_1448_);
v___x_1450_ = lean_array_fget_borrowed(v_args_1373_, v_a_1379_);
v___x_1451_ = l_Lean_Elab_FixedParams_Info_getCallerParam_x3f(v_val_1371_, v_a_1379_, v_next_1375_, v_a_1449_);
lean_dec(v_a_1449_);
if (lean_obj_tag(v___x_1451_) == 1)
{
lean_object* v_val_1452_; lean_object* v___x_1454_; uint8_t v_isShared_1455_; uint8_t v_isSharedCheck_1580_; 
v_val_1452_ = lean_ctor_get(v___x_1451_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1451_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1454_ = v___x_1451_;
v_isShared_1455_ = v_isSharedCheck_1580_;
goto v_resetjp_1453_;
}
else
{
lean_inc(v_val_1452_);
lean_dec(v___x_1451_);
v___x_1454_ = lean_box(0);
v_isShared_1455_ = v_isSharedCheck_1580_;
goto v_resetjp_1453_;
}
v_resetjp_1453_:
{
lean_object* v___x_1456_; uint8_t v_foApprox_1457_; uint8_t v_ctxApprox_1458_; uint8_t v_quasiPatternApprox_1459_; uint8_t v_constApprox_1460_; uint8_t v_isDefEqStuckEx_1461_; uint8_t v_unificationHints_1462_; uint8_t v_assignSyntheticOpaque_1463_; uint8_t v_offsetCnstrs_1464_; uint8_t v_transparency_1465_; uint8_t v_etaStruct_1466_; uint8_t v_univApprox_1467_; uint8_t v_iota_1468_; uint8_t v_beta_1469_; uint8_t v_proj_1470_; uint8_t v_zeta_1471_; uint8_t v_zetaDelta_1472_; uint8_t v_zetaUnused_1473_; uint8_t v_zetaHave_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1579_; 
v___x_1456_ = l_Lean_Meta_Context_config(v___y_1381_);
v_foApprox_1457_ = lean_ctor_get_uint8(v___x_1456_, 0);
v_ctxApprox_1458_ = lean_ctor_get_uint8(v___x_1456_, 1);
v_quasiPatternApprox_1459_ = lean_ctor_get_uint8(v___x_1456_, 2);
v_constApprox_1460_ = lean_ctor_get_uint8(v___x_1456_, 3);
v_isDefEqStuckEx_1461_ = lean_ctor_get_uint8(v___x_1456_, 4);
v_unificationHints_1462_ = lean_ctor_get_uint8(v___x_1456_, 5);
v_assignSyntheticOpaque_1463_ = lean_ctor_get_uint8(v___x_1456_, 7);
v_offsetCnstrs_1464_ = lean_ctor_get_uint8(v___x_1456_, 8);
v_transparency_1465_ = lean_ctor_get_uint8(v___x_1456_, 9);
v_etaStruct_1466_ = lean_ctor_get_uint8(v___x_1456_, 10);
v_univApprox_1467_ = lean_ctor_get_uint8(v___x_1456_, 11);
v_iota_1468_ = lean_ctor_get_uint8(v___x_1456_, 12);
v_beta_1469_ = lean_ctor_get_uint8(v___x_1456_, 13);
v_proj_1470_ = lean_ctor_get_uint8(v___x_1456_, 14);
v_zeta_1471_ = lean_ctor_get_uint8(v___x_1456_, 15);
v_zetaDelta_1472_ = lean_ctor_get_uint8(v___x_1456_, 16);
v_zetaUnused_1473_ = lean_ctor_get_uint8(v___x_1456_, 17);
v_zetaHave_1474_ = lean_ctor_get_uint8(v___x_1456_, 18);
v_isSharedCheck_1579_ = !lean_is_exclusive(v___x_1456_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1476_ = v___x_1456_;
v_isShared_1477_ = v_isSharedCheck_1579_;
goto v_resetjp_1475_;
}
else
{
lean_dec(v___x_1456_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1579_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
uint8_t v_trackZetaDelta_1478_; lean_object* v_zetaDeltaSet_1479_; lean_object* v_lctx_1480_; lean_object* v_localInstances_1481_; lean_object* v_defEqCtx_x3f_1482_; lean_object* v_synthPendingDepth_1483_; lean_object* v_canUnfold_x3f_1484_; uint8_t v_univApprox_1485_; uint8_t v_inTypeClassResolution_1486_; uint8_t v_cacheInferType_1487_; uint8_t v___x_1488_; lean_object* v___x_1490_; 
v_trackZetaDelta_1478_ = lean_ctor_get_uint8(v___y_1381_, sizeof(void*)*7);
v_zetaDeltaSet_1479_ = lean_ctor_get(v___y_1381_, 1);
v_lctx_1480_ = lean_ctor_get(v___y_1381_, 2);
v_localInstances_1481_ = lean_ctor_get(v___y_1381_, 3);
v_defEqCtx_x3f_1482_ = lean_ctor_get(v___y_1381_, 4);
v_synthPendingDepth_1483_ = lean_ctor_get(v___y_1381_, 5);
v_canUnfold_x3f_1484_ = lean_ctor_get(v___y_1381_, 6);
v_univApprox_1485_ = lean_ctor_get_uint8(v___y_1381_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1486_ = lean_ctor_get_uint8(v___y_1381_, sizeof(void*)*7 + 2);
v_cacheInferType_1487_ = lean_ctor_get_uint8(v___y_1381_, sizeof(void*)*7 + 3);
v___x_1488_ = 0;
if (v_isShared_1477_ == 0)
{
v___x_1490_ = v___x_1476_;
goto v_reusejp_1489_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 0, v_foApprox_1457_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 1, v_ctxApprox_1458_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 2, v_quasiPatternApprox_1459_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 3, v_constApprox_1460_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 4, v_isDefEqStuckEx_1461_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 5, v_unificationHints_1462_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 7, v_assignSyntheticOpaque_1463_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 8, v_offsetCnstrs_1464_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 9, v_transparency_1465_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 10, v_etaStruct_1466_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 11, v_univApprox_1467_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 12, v_iota_1468_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 13, v_beta_1469_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 14, v_proj_1470_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 15, v_zeta_1471_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 16, v_zetaDelta_1472_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 17, v_zetaUnused_1473_);
lean_ctor_set_uint8(v_reuseFailAlloc_1578_, 18, v_zetaHave_1474_);
v___x_1490_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1489_;
}
v_reusejp_1489_:
{
uint64_t v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; uint8_t v_foApprox_1495_; uint8_t v_ctxApprox_1496_; uint8_t v_quasiPatternApprox_1497_; uint8_t v_constApprox_1498_; uint8_t v_isDefEqStuckEx_1499_; uint8_t v_unificationHints_1500_; uint8_t v_proofIrrelevance_1501_; uint8_t v_assignSyntheticOpaque_1502_; uint8_t v_offsetCnstrs_1503_; uint8_t v_etaStruct_1504_; uint8_t v_univApprox_1505_; uint8_t v_iota_1506_; uint8_t v_beta_1507_; uint8_t v_proj_1508_; uint8_t v_zeta_1509_; uint8_t v_zetaDelta_1510_; uint8_t v_zetaUnused_1511_; uint8_t v_zetaHave_1512_; lean_object* v___x_1514_; uint8_t v_isShared_1515_; uint8_t v_isSharedCheck_1577_; 
lean_ctor_set_uint8(v___x_1490_, 6, v___x_1488_);
v___x_1491_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1490_);
v___x_1492_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1492_, 0, v___x_1490_);
lean_ctor_set_uint64(v___x_1492_, sizeof(void*)*1, v___x_1491_);
lean_inc(v_canUnfold_x3f_1484_);
lean_inc(v_synthPendingDepth_1483_);
lean_inc(v_defEqCtx_x3f_1482_);
lean_inc_ref(v_localInstances_1481_);
lean_inc_ref(v_lctx_1480_);
lean_inc(v_zetaDeltaSet_1479_);
v___x_1493_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1493_, 0, v___x_1492_);
lean_ctor_set(v___x_1493_, 1, v_zetaDeltaSet_1479_);
lean_ctor_set(v___x_1493_, 2, v_lctx_1480_);
lean_ctor_set(v___x_1493_, 3, v_localInstances_1481_);
lean_ctor_set(v___x_1493_, 4, v_defEqCtx_x3f_1482_);
lean_ctor_set(v___x_1493_, 5, v_synthPendingDepth_1483_);
lean_ctor_set(v___x_1493_, 6, v_canUnfold_x3f_1484_);
lean_ctor_set_uint8(v___x_1493_, sizeof(void*)*7, v_trackZetaDelta_1478_);
lean_ctor_set_uint8(v___x_1493_, sizeof(void*)*7 + 1, v_univApprox_1485_);
lean_ctor_set_uint8(v___x_1493_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1486_);
lean_ctor_set_uint8(v___x_1493_, sizeof(void*)*7 + 3, v_cacheInferType_1487_);
v___x_1494_ = l_Lean_Meta_Context_config(v___x_1493_);
v_foApprox_1495_ = lean_ctor_get_uint8(v___x_1494_, 0);
v_ctxApprox_1496_ = lean_ctor_get_uint8(v___x_1494_, 1);
v_quasiPatternApprox_1497_ = lean_ctor_get_uint8(v___x_1494_, 2);
v_constApprox_1498_ = lean_ctor_get_uint8(v___x_1494_, 3);
v_isDefEqStuckEx_1499_ = lean_ctor_get_uint8(v___x_1494_, 4);
v_unificationHints_1500_ = lean_ctor_get_uint8(v___x_1494_, 5);
v_proofIrrelevance_1501_ = lean_ctor_get_uint8(v___x_1494_, 6);
v_assignSyntheticOpaque_1502_ = lean_ctor_get_uint8(v___x_1494_, 7);
v_offsetCnstrs_1503_ = lean_ctor_get_uint8(v___x_1494_, 8);
v_etaStruct_1504_ = lean_ctor_get_uint8(v___x_1494_, 10);
v_univApprox_1505_ = lean_ctor_get_uint8(v___x_1494_, 11);
v_iota_1506_ = lean_ctor_get_uint8(v___x_1494_, 12);
v_beta_1507_ = lean_ctor_get_uint8(v___x_1494_, 13);
v_proj_1508_ = lean_ctor_get_uint8(v___x_1494_, 14);
v_zeta_1509_ = lean_ctor_get_uint8(v___x_1494_, 15);
v_zetaDelta_1510_ = lean_ctor_get_uint8(v___x_1494_, 16);
v_zetaUnused_1511_ = lean_ctor_get_uint8(v___x_1494_, 17);
v_zetaHave_1512_ = lean_ctor_get_uint8(v___x_1494_, 18);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1494_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1514_ = v___x_1494_;
v_isShared_1515_ = v_isSharedCheck_1577_;
goto v_resetjp_1513_;
}
else
{
lean_dec(v___x_1494_);
v___x_1514_ = lean_box(0);
v_isShared_1515_ = v_isSharedCheck_1577_;
goto v_resetjp_1513_;
}
v_resetjp_1513_:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; uint8_t v___x_1518_; lean_object* v_config_1520_; 
v___x_1516_ = l_Lean_instInhabitedExpr;
v___x_1517_ = lean_array_get_borrowed(v___x_1516_, v_params_1376_, v_val_1452_);
lean_dec(v_val_1452_);
v___x_1518_ = 2;
if (v_isShared_1515_ == 0)
{
v_config_1520_ = v___x_1514_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 0, v_foApprox_1495_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 1, v_ctxApprox_1496_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 2, v_quasiPatternApprox_1497_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 3, v_constApprox_1498_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 4, v_isDefEqStuckEx_1499_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 5, v_unificationHints_1500_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 6, v_proofIrrelevance_1501_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 7, v_assignSyntheticOpaque_1502_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 8, v_offsetCnstrs_1503_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 10, v_etaStruct_1504_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 11, v_univApprox_1505_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 12, v_iota_1506_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 13, v_beta_1507_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 14, v_proj_1508_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 15, v_zeta_1509_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 16, v_zetaDelta_1510_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 17, v_zetaUnused_1511_);
lean_ctor_set_uint8(v_reuseFailAlloc_1576_, 18, v_zetaHave_1512_);
v_config_1520_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
uint64_t v___x_1521_; uint64_t v___x_1522_; uint64_t v___x_1523_; uint64_t v___x_1524_; uint64_t v___x_1525_; uint64_t v_key_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_ctor_set_uint8(v_config_1520_, 9, v___x_1518_);
v___x_1521_ = l_Lean_Meta_Context_configKey(v___x_1493_);
lean_dec_ref(v___x_1493_);
v___x_1522_ = 2ULL;
v___x_1523_ = lean_uint64_shift_right(v___x_1521_, v___x_1522_);
v___x_1524_ = lean_uint64_shift_left(v___x_1523_, v___x_1522_);
v___x_1525_ = lean_uint64_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg___closed__0);
v_key_1526_ = lean_uint64_lor(v___x_1524_, v___x_1525_);
v___x_1527_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1527_, 0, v_config_1520_);
lean_ctor_set_uint64(v___x_1527_, sizeof(void*)*1, v_key_1526_);
lean_inc(v_canUnfold_x3f_1484_);
lean_inc(v_synthPendingDepth_1483_);
lean_inc(v_defEqCtx_x3f_1482_);
lean_inc_ref(v_localInstances_1481_);
lean_inc_ref(v_lctx_1480_);
lean_inc(v_zetaDeltaSet_1479_);
v___x_1528_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1528_, 0, v___x_1527_);
lean_ctor_set(v___x_1528_, 1, v_zetaDeltaSet_1479_);
lean_ctor_set(v___x_1528_, 2, v_lctx_1480_);
lean_ctor_set(v___x_1528_, 3, v_localInstances_1481_);
lean_ctor_set(v___x_1528_, 4, v_defEqCtx_x3f_1482_);
lean_ctor_set(v___x_1528_, 5, v_synthPendingDepth_1483_);
lean_ctor_set(v___x_1528_, 6, v_canUnfold_x3f_1484_);
lean_ctor_set_uint8(v___x_1528_, sizeof(void*)*7, v_trackZetaDelta_1478_);
lean_ctor_set_uint8(v___x_1528_, sizeof(void*)*7 + 1, v_univApprox_1485_);
lean_ctor_set_uint8(v___x_1528_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1486_);
lean_ctor_set_uint8(v___x_1528_, sizeof(void*)*7 + 3, v_cacheInferType_1487_);
lean_inc(v___x_1450_);
lean_inc(v___x_1517_);
v___x_1529_ = l_Lean_Meta_isExprDefEq(v___x_1517_, v___x_1450_, v___x_1528_, v___y_1382_, v___y_1383_, v___y_1384_);
lean_dec_ref(v___x_1528_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v_a_1530_; uint8_t v___x_1531_; 
v_a_1530_ = lean_ctor_get(v___x_1529_, 0);
lean_inc(v_a_1530_);
lean_dec_ref(v___x_1529_);
v___x_1531_ = lean_unbox(v_a_1530_);
lean_dec(v_a_1530_);
if (v___x_1531_ == 0)
{
lean_object* v_options_1532_; lean_object* v_inheritedTraceOptions_1533_; uint8_t v_hasTrace_1534_; 
v_options_1532_ = lean_ctor_get(v___y_1383_, 2);
v_inheritedTraceOptions_1533_ = lean_ctor_get(v___y_1383_, 13);
v_hasTrace_1534_ = lean_ctor_get_uint8(v_options_1532_, sizeof(void*)*1);
if (v_hasTrace_1534_ == 0)
{
lean_del_object(v___x_1454_);
goto v___jp_1535_;
}
else
{
lean_object* v___x_1537_; lean_object* v___x_1538_; uint8_t v___x_1539_; 
v___x_1537_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3);
v___x_1538_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_1539_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1533_, v_options_1532_, v___x_1538_);
if (v___x_1539_ == 0)
{
lean_del_object(v___x_1454_);
goto v___jp_1535_;
}
else
{
lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1543_; 
v___x_1540_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_1371_);
v___x_1541_ = l_Nat_reprFast(v_val_1371_);
if (v_isShared_1455_ == 0)
{
lean_ctor_set_tag(v___x_1454_, 3);
lean_ctor_set(v___x_1454_, 0, v___x_1541_);
v___x_1543_ = v___x_1454_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v___x_1541_);
v___x_1543_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1544_ = l_Lean_MessageData_ofFormat(v___x_1543_);
v___x_1545_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1540_);
lean_ctor_set(v___x_1545_, 1, v___x_1544_);
v___x_1546_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_1547_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1545_);
lean_ctor_set(v___x_1547_, 1, v___x_1546_);
lean_inc(v_a_1379_);
v___x_1548_ = l_Nat_reprFast(v_a_1379_);
v___x_1549_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1548_);
v___x_1550_ = l_Lean_MessageData_ofFormat(v___x_1549_);
v___x_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1547_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_1553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1551_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
lean_inc_ref(v_e_1374_);
v___x_1554_ = l_Lean_MessageData_ofExpr(v_e_1374_);
v___x_1555_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1553_);
lean_ctor_set(v___x_1555_, 1, v___x_1554_);
v___x_1556_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_1557_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1555_);
lean_ctor_set(v___x_1557_, 1, v___x_1556_);
lean_inc(v___x_1517_);
v___x_1558_ = l_Lean_MessageData_ofExpr(v___x_1517_);
v___x_1559_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1557_);
lean_ctor_set(v___x_1559_, 1, v___x_1558_);
v___x_1560_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__17);
v___x_1561_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1561_, 0, v___x_1559_);
lean_ctor_set(v___x_1561_, 1, v___x_1560_);
lean_inc(v___x_1450_);
v___x_1562_ = l_Lean_MessageData_ofExpr(v___x_1450_);
v___x_1563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1561_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
v___x_1564_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_1537_, v___x_1563_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
if (lean_obj_tag(v___x_1564_) == 0)
{
lean_object* v_a_1565_; lean_object* v___x_1566_; 
v_a_1565_ = lean_ctor_get(v___x_1564_, 0);
lean_inc(v_a_1565_);
lean_dec_ref(v___x_1564_);
lean_inc(v_a_1379_);
v___x_1566_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_1370_, v_val_1371_, v_a_1379_, v___x_1415_, v_a_1565_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
v___y_1392_ = v___x_1566_;
goto v___jp_1391_;
}
else
{
lean_dec(v_a_1379_);
lean_dec_ref(v_e_1374_);
lean_dec(v_val_1371_);
return v___x_1564_;
}
}
}
}
v___jp_1535_:
{
lean_object* v___x_1536_; 
lean_inc(v_a_1379_);
v___x_1536_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_1370_, v_val_1371_, v_a_1379_, v___x_1415_, v___x_1415_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
v___y_1392_ = v___x_1536_;
goto v___jp_1391_;
}
}
else
{
lean_del_object(v___x_1454_);
v_a_1387_ = v___x_1415_;
goto v___jp_1386_;
}
}
else
{
lean_object* v_a_1568_; lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
lean_del_object(v___x_1454_);
lean_dec(v_a_1379_);
lean_dec_ref(v_e_1374_);
lean_dec(v_val_1371_);
v_a_1568_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1575_ == 0)
{
v___x_1570_ = v___x_1529_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_inc(v_a_1568_);
lean_dec(v___x_1529_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1568_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
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
lean_object* v___x_1581_; uint8_t v___x_1582_; lean_object* v___x_1583_; 
lean_dec(v___x_1451_);
v___x_1581_ = lean_unsigned_to_nat(0u);
v___x_1582_ = 0;
lean_inc(v_a_1379_);
lean_inc(v___x_1450_);
v___x_1583_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v___x_1377_, v_val_1370_, v_next_1375_, v_params_1376_, v___x_1450_, v_val_1371_, v_a_1379_, v___x_1378_, v___x_1581_, v___x_1582_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
if (lean_obj_tag(v___x_1583_) == 0)
{
lean_object* v_a_1584_; uint8_t v___x_1585_; 
v_a_1584_ = lean_ctor_get(v___x_1583_, 0);
lean_inc(v_a_1584_);
lean_dec_ref(v___x_1583_);
v___x_1585_ = lean_unbox(v_a_1584_);
lean_dec(v_a_1584_);
if (v___x_1585_ == 0)
{
lean_object* v_options_1586_; lean_object* v_inheritedTraceOptions_1587_; uint8_t v_hasTrace_1588_; 
v_options_1586_ = lean_ctor_get(v___y_1383_, 2);
v_inheritedTraceOptions_1587_ = lean_ctor_get(v___y_1383_, 13);
v_hasTrace_1588_ = lean_ctor_get_uint8(v_options_1586_, sizeof(void*)*1);
if (v_hasTrace_1588_ == 0)
{
goto v___jp_1589_;
}
else
{
lean_object* v___x_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; 
v___x_1591_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3);
v___x_1592_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_1593_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1587_, v_options_1586_, v___x_1592_);
if (v___x_1593_ == 0)
{
goto v___jp_1589_;
}
else
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; 
v___x_1594_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__8);
lean_inc(v_val_1371_);
v___x_1595_ = l_Nat_reprFast(v_val_1371_);
v___x_1596_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1596_, 0, v___x_1595_);
v___x_1597_ = l_Lean_MessageData_ofFormat(v___x_1596_);
v___x_1598_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1598_, 0, v___x_1594_);
lean_ctor_set(v___x_1598_, 1, v___x_1597_);
v___x_1599_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__9);
v___x_1600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1600_, 0, v___x_1598_);
lean_ctor_set(v___x_1600_, 1, v___x_1599_);
lean_inc(v_a_1379_);
v___x_1601_ = l_Nat_reprFast(v_a_1379_);
v___x_1602_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1602_, 0, v___x_1601_);
v___x_1603_ = l_Lean_MessageData_ofFormat(v___x_1602_);
v___x_1604_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1600_);
lean_ctor_set(v___x_1604_, 1, v___x_1603_);
v___x_1605_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__11);
v___x_1606_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1604_);
lean_ctor_set(v___x_1606_, 1, v___x_1605_);
lean_inc_ref(v_e_1374_);
v___x_1607_ = l_Lean_MessageData_ofExpr(v_e_1374_);
v___x_1608_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1606_);
lean_ctor_set(v___x_1608_, 1, v___x_1607_);
v___x_1609_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__15);
v___x_1610_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1608_);
lean_ctor_set(v___x_1610_, 1, v___x_1609_);
lean_inc(v___x_1450_);
v___x_1611_ = l_Lean_MessageData_ofExpr(v___x_1450_);
v___x_1612_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1610_);
lean_ctor_set(v___x_1612_, 1, v___x_1611_);
v___x_1613_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__19);
v___x_1614_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1614_, 0, v___x_1612_);
lean_ctor_set(v___x_1614_, 1, v___x_1613_);
v___x_1615_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_1591_, v___x_1614_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; lean_object* v___x_1617_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
lean_inc(v_a_1616_);
lean_dec_ref(v___x_1615_);
lean_inc(v_a_1379_);
v___x_1617_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_1370_, v_val_1371_, v_a_1379_, v___x_1415_, v_a_1616_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
v___y_1392_ = v___x_1617_;
goto v___jp_1391_;
}
else
{
lean_dec(v_a_1379_);
lean_dec_ref(v_e_1374_);
lean_dec(v_val_1371_);
return v___x_1615_;
}
}
}
v___jp_1589_:
{
lean_object* v___x_1590_; 
lean_inc(v_a_1379_);
v___x_1590_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___lam__1(v_val_1370_, v_val_1371_, v_a_1379_, v___x_1415_, v___x_1415_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_);
v___y_1392_ = v___x_1590_;
goto v___jp_1391_;
}
}
else
{
v_a_1387_ = v___x_1415_;
goto v___jp_1386_;
}
}
else
{
lean_object* v_a_1618_; lean_object* v___x_1620_; uint8_t v_isShared_1621_; uint8_t v_isSharedCheck_1625_; 
lean_dec(v_a_1379_);
lean_dec_ref(v_e_1374_);
lean_dec(v_val_1371_);
v_a_1618_ = lean_ctor_get(v___x_1583_, 0);
v_isSharedCheck_1625_ = !lean_is_exclusive(v___x_1583_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1620_ = v___x_1583_;
v_isShared_1621_ = v_isSharedCheck_1625_;
goto v_resetjp_1619_;
}
else
{
lean_inc(v_a_1618_);
lean_dec(v___x_1583_);
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
}
else
{
lean_object* v_a_1626_; lean_object* v___x_1628_; uint8_t v_isShared_1629_; uint8_t v_isSharedCheck_1633_; 
lean_dec(v_a_1379_);
lean_dec_ref(v_e_1374_);
lean_dec(v_val_1371_);
v_a_1626_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1633_ == 0)
{
v___x_1628_ = v___x_1448_;
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
else
{
lean_inc(v_a_1626_);
lean_dec(v___x_1448_);
v___x_1628_ = lean_box(0);
v_isShared_1629_ = v_isSharedCheck_1633_;
goto v_resetjp_1627_;
}
v_resetjp_1627_:
{
lean_object* v___x_1631_; 
if (v_isShared_1629_ == 0)
{
v___x_1631_ = v___x_1628_;
goto v_reusejp_1630_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_a_1626_);
v___x_1631_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1630_;
}
v_reusejp_1630_:
{
return v___x_1631_;
}
}
}
}
}
}
else
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1641_; 
lean_dec(v_a_1379_);
lean_dec_ref(v_e_1374_);
lean_dec(v_val_1371_);
v_a_1634_ = lean_ctor_get(v___x_1413_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1413_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1636_ = v___x_1413_;
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1413_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1639_; 
if (v_isShared_1637_ == 0)
{
v___x_1639_ = v___x_1636_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_a_1634_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
}
v___jp_1386_:
{
lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1388_ = lean_unsigned_to_nat(1u);
v___x_1389_ = lean_nat_add(v_a_1379_, v___x_1388_);
lean_dec(v_a_1379_);
v_a_1379_ = v___x_1389_;
v_b_1380_ = v_a_1387_;
goto _start;
}
v___jp_1391_:
{
if (lean_obj_tag(v___y_1392_) == 0)
{
lean_object* v_a_1393_; lean_object* v___x_1395_; uint8_t v_isShared_1396_; uint8_t v_isSharedCheck_1402_; 
v_a_1393_ = lean_ctor_get(v___y_1392_, 0);
v_isSharedCheck_1402_ = !lean_is_exclusive(v___y_1392_);
if (v_isSharedCheck_1402_ == 0)
{
v___x_1395_ = v___y_1392_;
v_isShared_1396_ = v_isSharedCheck_1402_;
goto v_resetjp_1394_;
}
else
{
lean_inc(v_a_1393_);
lean_dec(v___y_1392_);
v___x_1395_ = lean_box(0);
v_isShared_1396_ = v_isSharedCheck_1402_;
goto v_resetjp_1394_;
}
v_resetjp_1394_:
{
if (lean_obj_tag(v_a_1393_) == 0)
{
lean_object* v_a_1397_; lean_object* v___x_1399_; 
lean_dec(v_a_1379_);
lean_dec_ref(v_e_1374_);
lean_dec(v_val_1371_);
v_a_1397_ = lean_ctor_get(v_a_1393_, 0);
lean_inc(v_a_1397_);
lean_dec_ref(v_a_1393_);
if (v_isShared_1396_ == 0)
{
lean_ctor_set(v___x_1395_, 0, v_a_1397_);
v___x_1399_ = v___x_1395_;
goto v_reusejp_1398_;
}
else
{
lean_object* v_reuseFailAlloc_1400_; 
v_reuseFailAlloc_1400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1400_, 0, v_a_1397_);
v___x_1399_ = v_reuseFailAlloc_1400_;
goto v_reusejp_1398_;
}
v_reusejp_1398_:
{
return v___x_1399_;
}
}
else
{
lean_object* v_a_1401_; 
lean_del_object(v___x_1395_);
v_a_1401_ = lean_ctor_get(v_a_1393_, 0);
lean_inc(v_a_1401_);
lean_dec_ref(v_a_1393_);
v_a_1387_ = v_a_1401_;
goto v___jp_1386_;
}
}
}
else
{
lean_object* v_a_1403_; lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1410_; 
lean_dec(v_a_1379_);
lean_dec_ref(v_e_1374_);
lean_dec(v_val_1371_);
v_a_1403_ = lean_ctor_get(v___y_1392_, 0);
v_isSharedCheck_1410_ = !lean_is_exclusive(v___y_1392_);
if (v_isSharedCheck_1410_ == 0)
{
v___x_1405_ = v___y_1392_;
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
else
{
lean_inc(v_a_1403_);
lean_dec(v___y_1392_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1410_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1408_; 
if (v_isShared_1406_ == 0)
{
v___x_1408_ = v___x_1405_;
goto v_reusejp_1407_;
}
else
{
lean_object* v_reuseFailAlloc_1409_; 
v_reuseFailAlloc_1409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1409_, 0, v_a_1403_);
v___x_1408_ = v_reuseFailAlloc_1409_;
goto v_reusejp_1407_;
}
v_reusejp_1407_:
{
return v___x_1408_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___boxed(lean_object* v_val_1642_, lean_object* v_val_1643_, lean_object* v_upperBound_1644_, lean_object* v_args_1645_, lean_object* v_e_1646_, lean_object* v_next_1647_, lean_object* v_params_1648_, lean_object* v___x_1649_, lean_object* v___x_1650_, lean_object* v_a_1651_, lean_object* v_b_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_){
_start:
{
uint8_t v___x_44858__boxed_1658_; lean_object* v_res_1659_; 
v___x_44858__boxed_1658_ = lean_unbox(v___x_1650_);
v_res_1659_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_1642_, v_val_1643_, v_upperBound_1644_, v_args_1645_, v_e_1646_, v_next_1647_, v_params_1648_, v___x_1649_, v___x_44858__boxed_1658_, v_a_1651_, v_b_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
lean_dec(v___y_1656_);
lean_dec_ref(v___y_1655_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec(v___x_1649_);
lean_dec_ref(v_params_1648_);
lean_dec(v_next_1647_);
lean_dec_ref(v_args_1645_);
lean_dec(v_upperBound_1644_);
lean_dec(v_val_1642_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(lean_object* v___x_1660_, lean_object* v_as_1661_, lean_object* v_j_1662_){
_start:
{
lean_object* v___x_1663_; uint8_t v___x_1664_; 
v___x_1663_ = lean_array_get_size(v_as_1661_);
v___x_1664_ = lean_nat_dec_lt(v_j_1662_, v___x_1663_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; 
lean_dec(v_j_1662_);
v___x_1665_ = lean_box(0);
return v___x_1665_;
}
else
{
lean_object* v___x_1666_; lean_object* v_declName_1667_; uint8_t v___x_1668_; 
v___x_1666_ = lean_array_fget_borrowed(v_as_1661_, v_j_1662_);
v_declName_1667_ = lean_ctor_get(v___x_1666_, 3);
v___x_1668_ = lean_name_eq(v_declName_1667_, v___x_1660_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; lean_object* v___x_1670_; 
v___x_1669_ = lean_unsigned_to_nat(1u);
v___x_1670_ = lean_nat_add(v_j_1662_, v___x_1669_);
lean_dec(v_j_1662_);
v_j_1662_ = v___x_1670_;
goto _start;
}
else
{
lean_object* v___x_1672_; 
v___x_1672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1672_, 0, v_j_1662_);
return v___x_1672_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3___boxed(lean_object* v___x_1673_, lean_object* v_as_1674_, lean_object* v_j_1675_){
_start:
{
lean_object* v_res_1676_; 
v_res_1676_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_1673_, v_as_1674_, v_j_1675_);
lean_dec_ref(v_as_1674_);
lean_dec(v___x_1673_);
return v_res_1676_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0(void){
_start:
{
lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1677_ = lean_box(0);
v___x_1678_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1677_);
return v___x_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(lean_object* v_preDefs_1679_, lean_object* v___x_1680_, lean_object* v_val_1681_, lean_object* v_e_1682_, lean_object* v_next_1683_, lean_object* v_params_1684_, lean_object* v___x_1685_, lean_object* v_x_1686_, lean_object* v_x_1687_, lean_object* v_x_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
if (lean_obj_tag(v_x_1686_) == 5)
{
lean_object* v_fn_1694_; lean_object* v_arg_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v_fn_1694_ = lean_ctor_get(v_x_1686_, 0);
lean_inc_ref(v_fn_1694_);
v_arg_1695_ = lean_ctor_get(v_x_1686_, 1);
lean_inc_ref(v_arg_1695_);
lean_dec_ref(v_x_1686_);
v___x_1696_ = lean_array_set(v_x_1687_, v_x_1688_, v_arg_1695_);
v___x_1697_ = lean_unsigned_to_nat(1u);
v___x_1698_ = lean_nat_sub(v_x_1688_, v___x_1697_);
lean_dec(v_x_1688_);
v_x_1686_ = v_fn_1694_;
v_x_1687_ = v___x_1696_;
v_x_1688_ = v___x_1698_;
goto _start;
}
else
{
uint8_t v___x_1700_; 
lean_dec(v_x_1688_);
v___x_1700_ = l_Lean_Expr_isConst(v_x_1686_);
if (v___x_1700_ == 0)
{
lean_object* v___x_1701_; lean_object* v___x_1702_; 
lean_dec_ref(v_x_1687_);
lean_dec_ref(v_x_1686_);
lean_dec_ref(v_e_1682_);
v___x_1701_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0, &l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0);
v___x_1702_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1702_, 0, v___x_1701_);
return v___x_1702_;
}
else
{
lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1703_ = l_Lean_Expr_constName_x21(v_x_1686_);
lean_dec_ref(v_x_1686_);
v___x_1704_ = lean_unsigned_to_nat(0u);
v___x_1705_ = l_Array_findIdx_x3f_loop___at___00Lean_Elab_getFixedParamsInfo_spec__3(v___x_1703_, v_preDefs_1679_, v___x_1704_);
lean_dec(v___x_1703_);
if (lean_obj_tag(v___x_1705_) == 1)
{
lean_object* v_val_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; 
v_val_1706_ = lean_ctor_get(v___x_1705_, 0);
lean_inc(v_val_1706_);
lean_dec_ref(v___x_1705_);
v___x_1707_ = lean_box(0);
v___x_1708_ = lean_array_get_borrowed(v___x_1704_, v___x_1680_, v_val_1706_);
v___x_1709_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_1681_, v_val_1706_, v___x_1708_, v_x_1687_, v_e_1682_, v_next_1683_, v_params_1684_, v___x_1685_, v___x_1700_, v___x_1704_, v___x_1707_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_);
lean_dec_ref(v_x_1687_);
if (lean_obj_tag(v___x_1709_) == 0)
{
lean_object* v___x_1711_; uint8_t v_isShared_1712_; uint8_t v_isSharedCheck_1717_; 
v_isSharedCheck_1717_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1717_ == 0)
{
lean_object* v_unused_1718_; 
v_unused_1718_ = lean_ctor_get(v___x_1709_, 0);
lean_dec(v_unused_1718_);
v___x_1711_ = v___x_1709_;
v_isShared_1712_ = v_isSharedCheck_1717_;
goto v_resetjp_1710_;
}
else
{
lean_dec(v___x_1709_);
v___x_1711_ = lean_box(0);
v_isShared_1712_ = v_isSharedCheck_1717_;
goto v_resetjp_1710_;
}
v_resetjp_1710_:
{
lean_object* v___x_1713_; lean_object* v___x_1715_; 
v___x_1713_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0, &l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0);
if (v_isShared_1712_ == 0)
{
lean_ctor_set(v___x_1711_, 0, v___x_1713_);
v___x_1715_ = v___x_1711_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v___x_1713_);
v___x_1715_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
return v___x_1715_;
}
}
}
else
{
lean_object* v_a_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1726_; 
v_a_1719_ = lean_ctor_get(v___x_1709_, 0);
v_isSharedCheck_1726_ = !lean_is_exclusive(v___x_1709_);
if (v_isSharedCheck_1726_ == 0)
{
v___x_1721_ = v___x_1709_;
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_a_1719_);
lean_dec(v___x_1709_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1726_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v___x_1724_; 
if (v_isShared_1722_ == 0)
{
v___x_1724_ = v___x_1721_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1725_; 
v_reuseFailAlloc_1725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1725_, 0, v_a_1719_);
v___x_1724_ = v_reuseFailAlloc_1725_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
return v___x_1724_;
}
}
}
}
else
{
lean_object* v___x_1727_; lean_object* v___x_1728_; 
lean_dec(v___x_1705_);
lean_dec_ref(v_x_1687_);
lean_dec_ref(v_e_1682_);
v___x_1727_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0, &l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___closed__0);
v___x_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1728_, 0, v___x_1727_);
return v___x_1728_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6___boxed(lean_object* v_preDefs_1729_, lean_object* v___x_1730_, lean_object* v_val_1731_, lean_object* v_e_1732_, lean_object* v_next_1733_, lean_object* v_params_1734_, lean_object* v___x_1735_, lean_object* v_x_1736_, lean_object* v_x_1737_, lean_object* v_x_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_1729_, v___x_1730_, v_val_1731_, v_e_1732_, v_next_1733_, v_params_1734_, v___x_1735_, v_x_1736_, v_x_1737_, v_x_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___x_1735_);
lean_dec_ref(v_params_1734_);
lean_dec(v_next_1733_);
lean_dec(v_val_1731_);
lean_dec_ref(v___x_1730_);
lean_dec_ref(v_preDefs_1729_);
return v_res_1744_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_1745_; lean_object* v_dummy_1746_; 
v___x_1745_ = lean_box(0);
v_dummy_1746_ = l_Lean_Expr_sort___override(v___x_1745_);
return v_dummy_1746_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(lean_object* v_preDefs_1747_, lean_object* v___x_1748_, lean_object* v_val_1749_, lean_object* v_a_1750_, lean_object* v_params_1751_, lean_object* v___x_1752_, lean_object* v_e_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_){
_start:
{
lean_object* v_dummy_1759_; lean_object* v_nargs_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v_dummy_1759_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___closed__0);
v_nargs_1760_ = l_Lean_Expr_getAppNumArgs(v_e_1753_);
lean_inc(v_nargs_1760_);
v___x_1761_ = lean_mk_array(v_nargs_1760_, v_dummy_1759_);
v___x_1762_ = lean_unsigned_to_nat(1u);
v___x_1763_ = lean_nat_sub(v_nargs_1760_, v___x_1762_);
lean_dec(v_nargs_1760_);
lean_inc_ref(v_e_1753_);
v___x_1764_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_getFixedParamsInfo_spec__6(v_preDefs_1747_, v___x_1748_, v_val_1749_, v_e_1753_, v_a_1750_, v_params_1751_, v___x_1752_, v_e_1753_, v___x_1761_, v___x_1763_, v___y_1754_, v___y_1755_, v___y_1756_, v___y_1757_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed(lean_object* v_preDefs_1765_, lean_object* v___x_1766_, lean_object* v_val_1767_, lean_object* v_a_1768_, lean_object* v_params_1769_, lean_object* v___x_1770_, lean_object* v_e_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1(v_preDefs_1765_, v___x_1766_, v_val_1767_, v_a_1768_, v_params_1769_, v___x_1770_, v_e_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_dec_ref(v___y_1774_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___x_1770_);
lean_dec_ref(v_params_1769_);
lean_dec(v_a_1768_);
lean_dec(v_val_1767_);
lean_dec_ref(v___x_1766_);
lean_dec_ref(v_preDefs_1765_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(lean_object* v_a_1778_, lean_object* v_b_1779_, lean_object* v_x_1780_){
_start:
{
if (lean_obj_tag(v_x_1780_) == 0)
{
lean_dec(v_b_1779_);
lean_dec_ref(v_a_1778_);
return v_x_1780_;
}
else
{
lean_object* v_key_1781_; lean_object* v_value_1782_; lean_object* v_tail_1783_; lean_object* v___x_1785_; uint8_t v_isShared_1786_; uint8_t v_isSharedCheck_1795_; 
v_key_1781_ = lean_ctor_get(v_x_1780_, 0);
v_value_1782_ = lean_ctor_get(v_x_1780_, 1);
v_tail_1783_ = lean_ctor_get(v_x_1780_, 2);
v_isSharedCheck_1795_ = !lean_is_exclusive(v_x_1780_);
if (v_isSharedCheck_1795_ == 0)
{
v___x_1785_ = v_x_1780_;
v_isShared_1786_ = v_isSharedCheck_1795_;
goto v_resetjp_1784_;
}
else
{
lean_inc(v_tail_1783_);
lean_inc(v_value_1782_);
lean_inc(v_key_1781_);
lean_dec(v_x_1780_);
v___x_1785_ = lean_box(0);
v_isShared_1786_ = v_isSharedCheck_1795_;
goto v_resetjp_1784_;
}
v_resetjp_1784_:
{
uint8_t v___x_1787_; 
v___x_1787_ = l_Lean_ExprStructEq_beq(v_key_1781_, v_a_1778_);
if (v___x_1787_ == 0)
{
lean_object* v___x_1788_; lean_object* v___x_1790_; 
v___x_1788_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1778_, v_b_1779_, v_tail_1783_);
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 2, v___x_1788_);
v___x_1790_ = v___x_1785_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_key_1781_);
lean_ctor_set(v_reuseFailAlloc_1791_, 1, v_value_1782_);
lean_ctor_set(v_reuseFailAlloc_1791_, 2, v___x_1788_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
else
{
lean_object* v___x_1793_; 
lean_dec(v_value_1782_);
lean_dec(v_key_1781_);
if (v_isShared_1786_ == 0)
{
lean_ctor_set(v___x_1785_, 1, v_b_1779_);
lean_ctor_set(v___x_1785_, 0, v_a_1778_);
v___x_1793_ = v___x_1785_;
goto v_reusejp_1792_;
}
else
{
lean_object* v_reuseFailAlloc_1794_; 
v_reuseFailAlloc_1794_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1794_, 0, v_a_1778_);
lean_ctor_set(v_reuseFailAlloc_1794_, 1, v_b_1779_);
lean_ctor_set(v_reuseFailAlloc_1794_, 2, v_tail_1783_);
v___x_1793_ = v_reuseFailAlloc_1794_;
goto v_reusejp_1792_;
}
v_reusejp_1792_:
{
return v___x_1793_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(lean_object* v_x_1796_, lean_object* v_x_1797_){
_start:
{
if (lean_obj_tag(v_x_1797_) == 0)
{
return v_x_1796_;
}
else
{
lean_object* v_key_1798_; lean_object* v_value_1799_; lean_object* v_tail_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1823_; 
v_key_1798_ = lean_ctor_get(v_x_1797_, 0);
v_value_1799_ = lean_ctor_get(v_x_1797_, 1);
v_tail_1800_ = lean_ctor_get(v_x_1797_, 2);
v_isSharedCheck_1823_ = !lean_is_exclusive(v_x_1797_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1802_ = v_x_1797_;
v_isShared_1803_ = v_isSharedCheck_1823_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_tail_1800_);
lean_inc(v_value_1799_);
lean_inc(v_key_1798_);
lean_dec(v_x_1797_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1823_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1804_; uint64_t v___x_1805_; uint64_t v___x_1806_; uint64_t v___x_1807_; uint64_t v_fold_1808_; uint64_t v___x_1809_; uint64_t v___x_1810_; uint64_t v___x_1811_; size_t v___x_1812_; size_t v___x_1813_; size_t v___x_1814_; size_t v___x_1815_; size_t v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1819_; 
v___x_1804_ = lean_array_get_size(v_x_1796_);
v___x_1805_ = l_Lean_ExprStructEq_hash(v_key_1798_);
v___x_1806_ = 32ULL;
v___x_1807_ = lean_uint64_shift_right(v___x_1805_, v___x_1806_);
v_fold_1808_ = lean_uint64_xor(v___x_1805_, v___x_1807_);
v___x_1809_ = 16ULL;
v___x_1810_ = lean_uint64_shift_right(v_fold_1808_, v___x_1809_);
v___x_1811_ = lean_uint64_xor(v_fold_1808_, v___x_1810_);
v___x_1812_ = lean_uint64_to_usize(v___x_1811_);
v___x_1813_ = lean_usize_of_nat(v___x_1804_);
v___x_1814_ = ((size_t)1ULL);
v___x_1815_ = lean_usize_sub(v___x_1813_, v___x_1814_);
v___x_1816_ = lean_usize_land(v___x_1812_, v___x_1815_);
v___x_1817_ = lean_array_uget_borrowed(v_x_1796_, v___x_1816_);
lean_inc(v___x_1817_);
if (v_isShared_1803_ == 0)
{
lean_ctor_set(v___x_1802_, 2, v___x_1817_);
v___x_1819_ = v___x_1802_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v_key_1798_);
lean_ctor_set(v_reuseFailAlloc_1822_, 1, v_value_1799_);
lean_ctor_set(v_reuseFailAlloc_1822_, 2, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
lean_object* v___x_1820_; 
v___x_1820_ = lean_array_uset(v_x_1796_, v___x_1816_, v___x_1819_);
v_x_1796_ = v___x_1820_;
v_x_1797_ = v_tail_1800_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(lean_object* v_i_1824_, lean_object* v_source_1825_, lean_object* v_target_1826_){
_start:
{
lean_object* v___x_1827_; uint8_t v___x_1828_; 
v___x_1827_ = lean_array_get_size(v_source_1825_);
v___x_1828_ = lean_nat_dec_lt(v_i_1824_, v___x_1827_);
if (v___x_1828_ == 0)
{
lean_dec_ref(v_source_1825_);
lean_dec(v_i_1824_);
return v_target_1826_;
}
else
{
lean_object* v_es_1829_; lean_object* v___x_1830_; lean_object* v_source_1831_; lean_object* v_target_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; 
v_es_1829_ = lean_array_fget(v_source_1825_, v_i_1824_);
v___x_1830_ = lean_box(0);
v_source_1831_ = lean_array_fset(v_source_1825_, v_i_1824_, v___x_1830_);
v_target_1832_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_target_1826_, v_es_1829_);
v___x_1833_ = lean_unsigned_to_nat(1u);
v___x_1834_ = lean_nat_add(v_i_1824_, v___x_1833_);
lean_dec(v_i_1824_);
v_i_1824_ = v___x_1834_;
v_source_1825_ = v_source_1831_;
v_target_1826_ = v_target_1832_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(lean_object* v_data_1836_){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v_nbuckets_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1837_ = lean_array_get_size(v_data_1836_);
v___x_1838_ = lean_unsigned_to_nat(2u);
v_nbuckets_1839_ = lean_nat_mul(v___x_1837_, v___x_1838_);
v___x_1840_ = lean_unsigned_to_nat(0u);
v___x_1841_ = lean_box(0);
v___x_1842_ = lean_mk_array(v_nbuckets_1839_, v___x_1841_);
v___x_1843_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v___x_1840_, v_data_1836_, v___x_1842_);
return v___x_1843_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(lean_object* v_a_1844_, lean_object* v_x_1845_){
_start:
{
if (lean_obj_tag(v_x_1845_) == 0)
{
uint8_t v___x_1846_; 
v___x_1846_ = 0;
return v___x_1846_;
}
else
{
lean_object* v_key_1847_; lean_object* v_tail_1848_; uint8_t v___x_1849_; 
v_key_1847_ = lean_ctor_get(v_x_1845_, 0);
v_tail_1848_ = lean_ctor_get(v_x_1845_, 2);
v___x_1849_ = l_Lean_ExprStructEq_beq(v_key_1847_, v_a_1844_);
if (v___x_1849_ == 0)
{
v_x_1845_ = v_tail_1848_;
goto _start;
}
else
{
return v___x_1849_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg___boxed(lean_object* v_a_1851_, lean_object* v_x_1852_){
_start:
{
uint8_t v_res_1853_; lean_object* v_r_1854_; 
v_res_1853_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1851_, v_x_1852_);
lean_dec(v_x_1852_);
lean_dec_ref(v_a_1851_);
v_r_1854_ = lean_box(v_res_1853_);
return v_r_1854_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(lean_object* v_m_1855_, lean_object* v_a_1856_, lean_object* v_b_1857_){
_start:
{
lean_object* v_size_1858_; lean_object* v_buckets_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1902_; 
v_size_1858_ = lean_ctor_get(v_m_1855_, 0);
v_buckets_1859_ = lean_ctor_get(v_m_1855_, 1);
v_isSharedCheck_1902_ = !lean_is_exclusive(v_m_1855_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1861_ = v_m_1855_;
v_isShared_1862_ = v_isSharedCheck_1902_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_buckets_1859_);
lean_inc(v_size_1858_);
lean_dec(v_m_1855_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1902_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1863_; uint64_t v___x_1864_; uint64_t v___x_1865_; uint64_t v___x_1866_; uint64_t v_fold_1867_; uint64_t v___x_1868_; uint64_t v___x_1869_; uint64_t v___x_1870_; size_t v___x_1871_; size_t v___x_1872_; size_t v___x_1873_; size_t v___x_1874_; size_t v___x_1875_; lean_object* v_bkt_1876_; uint8_t v___x_1877_; 
v___x_1863_ = lean_array_get_size(v_buckets_1859_);
v___x_1864_ = l_Lean_ExprStructEq_hash(v_a_1856_);
v___x_1865_ = 32ULL;
v___x_1866_ = lean_uint64_shift_right(v___x_1864_, v___x_1865_);
v_fold_1867_ = lean_uint64_xor(v___x_1864_, v___x_1866_);
v___x_1868_ = 16ULL;
v___x_1869_ = lean_uint64_shift_right(v_fold_1867_, v___x_1868_);
v___x_1870_ = lean_uint64_xor(v_fold_1867_, v___x_1869_);
v___x_1871_ = lean_uint64_to_usize(v___x_1870_);
v___x_1872_ = lean_usize_of_nat(v___x_1863_);
v___x_1873_ = ((size_t)1ULL);
v___x_1874_ = lean_usize_sub(v___x_1872_, v___x_1873_);
v___x_1875_ = lean_usize_land(v___x_1871_, v___x_1874_);
v_bkt_1876_ = lean_array_uget_borrowed(v_buckets_1859_, v___x_1875_);
v___x_1877_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_1856_, v_bkt_1876_);
if (v___x_1877_ == 0)
{
lean_object* v___x_1878_; lean_object* v_size_x27_1879_; lean_object* v___x_1880_; lean_object* v_buckets_x27_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; uint8_t v___x_1887_; 
v___x_1878_ = lean_unsigned_to_nat(1u);
v_size_x27_1879_ = lean_nat_add(v_size_1858_, v___x_1878_);
lean_dec(v_size_1858_);
lean_inc(v_bkt_1876_);
v___x_1880_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1880_, 0, v_a_1856_);
lean_ctor_set(v___x_1880_, 1, v_b_1857_);
lean_ctor_set(v___x_1880_, 2, v_bkt_1876_);
v_buckets_x27_1881_ = lean_array_uset(v_buckets_1859_, v___x_1875_, v___x_1880_);
v___x_1882_ = lean_unsigned_to_nat(4u);
v___x_1883_ = lean_nat_mul(v_size_x27_1879_, v___x_1882_);
v___x_1884_ = lean_unsigned_to_nat(3u);
v___x_1885_ = lean_nat_div(v___x_1883_, v___x_1884_);
lean_dec(v___x_1883_);
v___x_1886_ = lean_array_get_size(v_buckets_x27_1881_);
v___x_1887_ = lean_nat_dec_le(v___x_1885_, v___x_1886_);
lean_dec(v___x_1885_);
if (v___x_1887_ == 0)
{
lean_object* v_val_1888_; lean_object* v___x_1890_; 
v_val_1888_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_buckets_x27_1881_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 1, v_val_1888_);
lean_ctor_set(v___x_1861_, 0, v_size_x27_1879_);
v___x_1890_ = v___x_1861_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_size_x27_1879_);
lean_ctor_set(v_reuseFailAlloc_1891_, 1, v_val_1888_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
else
{
lean_object* v___x_1893_; 
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 1, v_buckets_x27_1881_);
lean_ctor_set(v___x_1861_, 0, v_size_x27_1879_);
v___x_1893_ = v___x_1861_;
goto v_reusejp_1892_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v_size_x27_1879_);
lean_ctor_set(v_reuseFailAlloc_1894_, 1, v_buckets_x27_1881_);
v___x_1893_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1892_;
}
v_reusejp_1892_:
{
return v___x_1893_;
}
}
}
else
{
lean_object* v___x_1895_; lean_object* v_buckets_x27_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1900_; 
lean_inc(v_bkt_1876_);
v___x_1895_ = lean_box(0);
v_buckets_x27_1896_ = lean_array_uset(v_buckets_1859_, v___x_1875_, v___x_1895_);
v___x_1897_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_1856_, v_b_1857_, v_bkt_1876_);
v___x_1898_ = lean_array_uset(v_buckets_x27_1896_, v___x_1875_, v___x_1897_);
if (v_isShared_1862_ == 0)
{
lean_ctor_set(v___x_1861_, 1, v___x_1898_);
v___x_1900_ = v___x_1861_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_size_1858_);
lean_ctor_set(v_reuseFailAlloc_1901_, 1, v___x_1898_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(lean_object* v_a_1903_, lean_object* v_e_1904_, lean_object* v_a_1905_){
_start:
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; 
v___x_1907_ = lean_st_ref_take(v_a_1903_);
v___x_1908_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v___x_1907_, v_e_1904_, v_a_1905_);
v___x_1909_ = lean_st_ref_set(v_a_1903_, v___x_1908_);
v___x_1910_ = lean_box(0);
return v___x_1910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed(lean_object* v_a_1911_, lean_object* v_e_1912_, lean_object* v_a_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v_res_1915_; 
v_res_1915_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2(v_a_1911_, v_e_1912_, v_a_1913_);
lean_dec(v_a_1911_);
return v_res_1915_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0(void){
_start:
{
lean_object* v___x_1916_; 
v___x_1916_ = lean_mk_string_unchecked("runtime", 7, 7);
return v___x_1916_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1(void){
_start:
{
lean_object* v___x_1917_; 
v___x_1917_ = lean_mk_string_unchecked("maxRecDepth", 11, 11);
return v___x_1917_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2(void){
_start:
{
lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; 
v___x_1918_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__1);
v___x_1919_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__0);
v___x_1920_ = l_Lean_Name_mkStr2(v___x_1919_, v___x_1918_);
return v___x_1920_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3(void){
_start:
{
lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1921_ = l_Lean_maxRecDepthErrorMessage;
v___x_1922_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
return v___x_1922_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4(void){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1923_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__3);
v___x_1924_ = l_Lean_MessageData_ofFormat(v___x_1923_);
return v___x_1924_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5(void){
_start:
{
lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1925_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__4);
v___x_1926_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__2);
v___x_1927_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1926_);
lean_ctor_set(v___x_1927_, 1, v___x_1925_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(lean_object* v_ref_1928_){
_start:
{
lean_object* v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1930_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___closed__5);
v___x_1931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1931_, 0, v_ref_1928_);
lean_ctor_set(v___x_1931_, 1, v___x_1930_);
v___x_1932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1932_, 0, v___x_1931_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg___boxed(lean_object* v_ref_1933_, lean_object* v___y_1934_){
_start:
{
lean_object* v_res_1935_; 
v_res_1935_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1933_);
return v_res_1935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(lean_object* v_x_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
lean_object* v___y_1944_; lean_object* v_fileName_1953_; lean_object* v_fileMap_1954_; lean_object* v_options_1955_; lean_object* v_currRecDepth_1956_; lean_object* v_maxRecDepth_1957_; lean_object* v_ref_1958_; lean_object* v_currNamespace_1959_; lean_object* v_openDecls_1960_; lean_object* v_initHeartbeats_1961_; lean_object* v_maxHeartbeats_1962_; lean_object* v_quotContext_1963_; lean_object* v_currMacroScope_1964_; uint8_t v_diag_1965_; lean_object* v_cancelTk_x3f_1966_; uint8_t v_suppressElabErrors_1967_; lean_object* v_inheritedTraceOptions_1968_; lean_object* v___x_1974_; uint8_t v___x_1975_; 
v_fileName_1953_ = lean_ctor_get(v___y_1940_, 0);
v_fileMap_1954_ = lean_ctor_get(v___y_1940_, 1);
v_options_1955_ = lean_ctor_get(v___y_1940_, 2);
v_currRecDepth_1956_ = lean_ctor_get(v___y_1940_, 3);
v_maxRecDepth_1957_ = lean_ctor_get(v___y_1940_, 4);
v_ref_1958_ = lean_ctor_get(v___y_1940_, 5);
v_currNamespace_1959_ = lean_ctor_get(v___y_1940_, 6);
v_openDecls_1960_ = lean_ctor_get(v___y_1940_, 7);
v_initHeartbeats_1961_ = lean_ctor_get(v___y_1940_, 8);
v_maxHeartbeats_1962_ = lean_ctor_get(v___y_1940_, 9);
v_quotContext_1963_ = lean_ctor_get(v___y_1940_, 10);
v_currMacroScope_1964_ = lean_ctor_get(v___y_1940_, 11);
v_diag_1965_ = lean_ctor_get_uint8(v___y_1940_, sizeof(void*)*14);
v_cancelTk_x3f_1966_ = lean_ctor_get(v___y_1940_, 12);
v_suppressElabErrors_1967_ = lean_ctor_get_uint8(v___y_1940_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_1968_ = lean_ctor_get(v___y_1940_, 13);
v___x_1974_ = lean_unsigned_to_nat(0u);
v___x_1975_ = lean_nat_dec_eq(v_maxRecDepth_1957_, v___x_1974_);
if (v___x_1975_ == 0)
{
uint8_t v___x_1976_; 
v___x_1976_ = lean_nat_dec_eq(v_currRecDepth_1956_, v_maxRecDepth_1957_);
if (v___x_1976_ == 0)
{
goto v___jp_1969_;
}
else
{
lean_object* v___x_1977_; 
lean_dec_ref(v_x_1936_);
lean_inc(v_ref_1958_);
v___x_1977_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_1958_);
v___y_1944_ = v___x_1977_;
goto v___jp_1943_;
}
}
else
{
goto v___jp_1969_;
}
v___jp_1943_:
{
if (lean_obj_tag(v___y_1944_) == 0)
{
return v___y_1944_;
}
else
{
lean_object* v_a_1945_; lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1952_; 
v_a_1945_ = lean_ctor_get(v___y_1944_, 0);
v_isSharedCheck_1952_ = !lean_is_exclusive(v___y_1944_);
if (v_isSharedCheck_1952_ == 0)
{
v___x_1947_ = v___y_1944_;
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
else
{
lean_inc(v_a_1945_);
lean_dec(v___y_1944_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1952_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1950_; 
if (v_isShared_1948_ == 0)
{
v___x_1950_ = v___x_1947_;
goto v_reusejp_1949_;
}
else
{
lean_object* v_reuseFailAlloc_1951_; 
v_reuseFailAlloc_1951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1951_, 0, v_a_1945_);
v___x_1950_ = v_reuseFailAlloc_1951_;
goto v_reusejp_1949_;
}
v_reusejp_1949_:
{
return v___x_1950_;
}
}
}
}
v___jp_1969_:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1970_ = lean_unsigned_to_nat(1u);
v___x_1971_ = lean_nat_add(v_currRecDepth_1956_, v___x_1970_);
lean_inc_ref(v_inheritedTraceOptions_1968_);
lean_inc(v_cancelTk_x3f_1966_);
lean_inc(v_currMacroScope_1964_);
lean_inc(v_quotContext_1963_);
lean_inc(v_maxHeartbeats_1962_);
lean_inc(v_initHeartbeats_1961_);
lean_inc(v_openDecls_1960_);
lean_inc(v_currNamespace_1959_);
lean_inc(v_ref_1958_);
lean_inc(v_maxRecDepth_1957_);
lean_inc_ref(v_options_1955_);
lean_inc_ref(v_fileMap_1954_);
lean_inc_ref(v_fileName_1953_);
v___x_1972_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_1972_, 0, v_fileName_1953_);
lean_ctor_set(v___x_1972_, 1, v_fileMap_1954_);
lean_ctor_set(v___x_1972_, 2, v_options_1955_);
lean_ctor_set(v___x_1972_, 3, v___x_1971_);
lean_ctor_set(v___x_1972_, 4, v_maxRecDepth_1957_);
lean_ctor_set(v___x_1972_, 5, v_ref_1958_);
lean_ctor_set(v___x_1972_, 6, v_currNamespace_1959_);
lean_ctor_set(v___x_1972_, 7, v_openDecls_1960_);
lean_ctor_set(v___x_1972_, 8, v_initHeartbeats_1961_);
lean_ctor_set(v___x_1972_, 9, v_maxHeartbeats_1962_);
lean_ctor_set(v___x_1972_, 10, v_quotContext_1963_);
lean_ctor_set(v___x_1972_, 11, v_currMacroScope_1964_);
lean_ctor_set(v___x_1972_, 12, v_cancelTk_x3f_1966_);
lean_ctor_set(v___x_1972_, 13, v_inheritedTraceOptions_1968_);
lean_ctor_set_uint8(v___x_1972_, sizeof(void*)*14, v_diag_1965_);
lean_ctor_set_uint8(v___x_1972_, sizeof(void*)*14 + 1, v_suppressElabErrors_1967_);
lean_inc(v___y_1941_);
lean_inc(v___y_1939_);
lean_inc_ref(v___y_1938_);
lean_inc(v___y_1937_);
v___x_1973_ = lean_apply_6(v_x_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___x_1972_, v___y_1941_, lean_box(0));
v___y_1944_ = v___x_1973_;
goto v___jp_1943_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg___boxed(lean_object* v_x_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1979_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(lean_object* v___x_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_){
_start:
{
lean_object* v___x_1992_; 
v___x_1992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1992_, 0, v___x_1986_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed(lean_object* v___x_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_, lean_object* v___y_1998_){
_start:
{
lean_object* v_res_1999_; 
v_res_1999_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2(v___x_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_);
lean_dec(v___y_1997_);
lean_dec_ref(v___y_1996_);
lean_dec(v___y_1995_);
lean_dec_ref(v___y_1994_);
return v_res_1999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(lean_object* v_k_2000_, lean_object* v___y_2001_, lean_object* v_b_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_){
_start:
{
lean_object* v___x_2008_; 
lean_inc(v___y_2006_);
lean_inc_ref(v___y_2005_);
lean_inc(v___y_2004_);
lean_inc_ref(v___y_2003_);
lean_inc(v___y_2001_);
v___x_2008_ = lean_apply_7(v_k_2000_, v_b_2002_, v___y_2001_, v___y_2003_, v___y_2004_, v___y_2005_, v___y_2006_, lean_box(0));
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed(lean_object* v_k_2009_, lean_object* v___y_2010_, lean_object* v_b_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_, lean_object* v___y_2016_){
_start:
{
lean_object* v_res_2017_; 
v_res_2017_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0(v_k_2009_, v___y_2010_, v_b_2011_, v___y_2012_, v___y_2013_, v___y_2014_, v___y_2015_);
lean_dec(v___y_2015_);
lean_dec_ref(v___y_2014_);
lean_dec(v___y_2013_);
lean_dec_ref(v___y_2012_);
lean_dec(v___y_2010_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(lean_object* v_name_2018_, lean_object* v_type_2019_, lean_object* v_val_2020_, lean_object* v_k_2021_, uint8_t v_nondep_2022_, uint8_t v_kind_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_){
_start:
{
lean_object* v___f_2030_; lean_object* v___x_2031_; 
lean_inc(v___y_2024_);
v___f_2030_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2030_, 0, v_k_2021_);
lean_closure_set(v___f_2030_, 1, v___y_2024_);
v___x_2031_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLetDeclImp(lean_box(0), v_name_2018_, v_type_2019_, v_val_2020_, v___f_2030_, v_nondep_2022_, v_kind_2023_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_);
if (lean_obj_tag(v___x_2031_) == 0)
{
return v___x_2031_;
}
else
{
lean_object* v_a_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2039_; 
v_a_2032_ = lean_ctor_get(v___x_2031_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2031_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2034_ = v___x_2031_;
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_a_2032_);
lean_dec(v___x_2031_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2039_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2037_; 
if (v_isShared_2035_ == 0)
{
v___x_2037_ = v___x_2034_;
goto v_reusejp_2036_;
}
else
{
lean_object* v_reuseFailAlloc_2038_; 
v_reuseFailAlloc_2038_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2038_, 0, v_a_2032_);
v___x_2037_ = v_reuseFailAlloc_2038_;
goto v_reusejp_2036_;
}
v_reusejp_2036_:
{
return v___x_2037_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg___boxed(lean_object* v_name_2040_, lean_object* v_type_2041_, lean_object* v_val_2042_, lean_object* v_k_2043_, lean_object* v_nondep_2044_, lean_object* v_kind_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_){
_start:
{
uint8_t v_nondep_boxed_2052_; uint8_t v_kind_boxed_2053_; lean_object* v_res_2054_; 
v_nondep_boxed_2052_ = lean_unbox(v_nondep_2044_);
v_kind_boxed_2053_ = lean_unbox(v_kind_2045_);
v_res_2054_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_2040_, v_type_2041_, v_val_2042_, v_k_2043_, v_nondep_boxed_2052_, v_kind_boxed_2053_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v___y_2046_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(lean_object* v_name_2055_, uint8_t v_bi_2056_, lean_object* v_type_2057_, lean_object* v_k_2058_, uint8_t v_kind_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_){
_start:
{
lean_object* v___f_2066_; lean_object* v___x_2067_; 
lean_inc(v___y_2060_);
v___f_2066_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_2066_, 0, v_k_2058_);
lean_closure_set(v___f_2066_, 1, v___y_2060_);
v___x_2067_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_2055_, v_bi_2056_, v_type_2057_, v___f_2066_, v_kind_2059_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_);
if (lean_obj_tag(v___x_2067_) == 0)
{
return v___x_2067_;
}
else
{
lean_object* v_a_2068_; lean_object* v___x_2070_; uint8_t v_isShared_2071_; uint8_t v_isSharedCheck_2075_; 
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2075_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2070_ = v___x_2067_;
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
else
{
lean_inc(v_a_2068_);
lean_dec(v___x_2067_);
v___x_2070_ = lean_box(0);
v_isShared_2071_ = v_isSharedCheck_2075_;
goto v_resetjp_2069_;
}
v_resetjp_2069_:
{
lean_object* v___x_2073_; 
if (v_isShared_2071_ == 0)
{
v___x_2073_ = v___x_2070_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v_a_2068_);
v___x_2073_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
return v___x_2073_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg___boxed(lean_object* v_name_2076_, lean_object* v_bi_2077_, lean_object* v_type_2078_, lean_object* v_k_2079_, lean_object* v_kind_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
uint8_t v_bi_boxed_2087_; uint8_t v_kind_boxed_2088_; lean_object* v_res_2089_; 
v_bi_boxed_2087_ = lean_unbox(v_bi_2077_);
v_kind_boxed_2088_ = lean_unbox(v_kind_2080_);
v_res_2089_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_2076_, v_bi_boxed_2087_, v_type_2078_, v_k_2079_, v_kind_boxed_2088_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_);
lean_dec(v___y_2085_);
lean_dec_ref(v___y_2084_);
lean_dec(v___y_2083_);
lean_dec_ref(v___y_2082_);
lean_dec(v___y_2081_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_object* v_00_u03b1_2090_, lean_object* v_x_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_){
_start:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
v___x_2097_ = lean_st_ref_get(v___y_2095_);
lean_dec(v___x_2097_);
v___x_2098_ = lean_apply_1(v_x_2091_, lean_box(0));
v___x_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2099_, 0, v___x_2098_);
return v___x_2099_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0___boxed(lean_object* v_00_u03b1_2100_, lean_object* v_x_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(v_00_u03b1_2100_, v_x_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_);
lean_dec(v___y_2105_);
lean_dec_ref(v___y_2104_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(lean_object* v_a_2108_, lean_object* v_x_2109_){
_start:
{
if (lean_obj_tag(v_x_2109_) == 0)
{
lean_object* v___x_2110_; 
v___x_2110_ = lean_box(0);
return v___x_2110_;
}
else
{
lean_object* v_key_2111_; lean_object* v_value_2112_; lean_object* v_tail_2113_; uint8_t v___x_2114_; 
v_key_2111_ = lean_ctor_get(v_x_2109_, 0);
v_value_2112_ = lean_ctor_get(v_x_2109_, 1);
v_tail_2113_ = lean_ctor_get(v_x_2109_, 2);
v___x_2114_ = l_Lean_ExprStructEq_beq(v_key_2111_, v_a_2108_);
if (v___x_2114_ == 0)
{
v_x_2109_ = v_tail_2113_;
goto _start;
}
else
{
lean_object* v___x_2116_; 
lean_inc(v_value_2112_);
v___x_2116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2116_, 0, v_value_2112_);
return v___x_2116_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg___boxed(lean_object* v_a_2117_, lean_object* v_x_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_2117_, v_x_2118_);
lean_dec(v_x_2118_);
lean_dec_ref(v_a_2117_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(lean_object* v_m_2120_, lean_object* v_a_2121_){
_start:
{
lean_object* v_buckets_2122_; lean_object* v___x_2123_; uint64_t v___x_2124_; uint64_t v___x_2125_; uint64_t v___x_2126_; uint64_t v_fold_2127_; uint64_t v___x_2128_; uint64_t v___x_2129_; uint64_t v___x_2130_; size_t v___x_2131_; size_t v___x_2132_; size_t v___x_2133_; size_t v___x_2134_; size_t v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; 
v_buckets_2122_ = lean_ctor_get(v_m_2120_, 1);
v___x_2123_ = lean_array_get_size(v_buckets_2122_);
v___x_2124_ = l_Lean_ExprStructEq_hash(v_a_2121_);
v___x_2125_ = 32ULL;
v___x_2126_ = lean_uint64_shift_right(v___x_2124_, v___x_2125_);
v_fold_2127_ = lean_uint64_xor(v___x_2124_, v___x_2126_);
v___x_2128_ = 16ULL;
v___x_2129_ = lean_uint64_shift_right(v_fold_2127_, v___x_2128_);
v___x_2130_ = lean_uint64_xor(v_fold_2127_, v___x_2129_);
v___x_2131_ = lean_uint64_to_usize(v___x_2130_);
v___x_2132_ = lean_usize_of_nat(v___x_2123_);
v___x_2133_ = ((size_t)1ULL);
v___x_2134_ = lean_usize_sub(v___x_2132_, v___x_2133_);
v___x_2135_ = lean_usize_land(v___x_2131_, v___x_2134_);
v___x_2136_ = lean_array_uget_borrowed(v_buckets_2122_, v___x_2135_);
v___x_2137_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_2121_, v___x_2136_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg___boxed(lean_object* v_m_2138_, lean_object* v_a_2139_){
_start:
{
lean_object* v_res_2140_; 
v_res_2140_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_m_2138_, v_a_2139_);
lean_dec_ref(v_a_2139_);
lean_dec_ref(v_m_2138_);
return v_res_2140_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0(void){
_start:
{
lean_object* v___x_2141_; 
v___x_2141_ = lean_mk_string_unchecked("transform", 9, 9);
return v___x_2141_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0(void){
_start:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; 
v___x_2142_ = lean_unsigned_to_nat(0u);
v___x_2143_ = lean_mk_empty_array_with_capacity(v___x_2142_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(lean_object* v_fvars_2144_, lean_object* v_pre_2145_, lean_object* v_post_2146_, uint8_t v_usedLetOnly_2147_, uint8_t v_skipConstInApp_2148_, uint8_t v_skipInstances_2149_, lean_object* v_body_2150_, lean_object* v_x_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_){
_start:
{
lean_object* v___x_2158_; lean_object* v___x_2159_; 
v___x_2158_ = lean_array_push(v_fvars_2144_, v_x_2151_);
v___x_2159_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_2145_, v_post_2146_, v_usedLetOnly_2147_, v_skipConstInApp_2148_, v_skipInstances_2149_, v___x_2158_, v_body_2150_, v___y_2152_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed(lean_object* v_fvars_2160_, lean_object* v_pre_2161_, lean_object* v_post_2162_, lean_object* v_usedLetOnly_2163_, lean_object* v_skipConstInApp_2164_, lean_object* v_skipInstances_2165_, lean_object* v_body_2166_, lean_object* v_x_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
uint8_t v_usedLetOnly_boxed_2174_; uint8_t v_skipConstInApp_boxed_2175_; uint8_t v_skipInstances_boxed_2176_; lean_object* v_res_2177_; 
v_usedLetOnly_boxed_2174_ = lean_unbox(v_usedLetOnly_2163_);
v_skipConstInApp_boxed_2175_ = lean_unbox(v_skipConstInApp_2164_);
v_skipInstances_boxed_2176_ = lean_unbox(v_skipInstances_2165_);
v_res_2177_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0(v_fvars_2160_, v_pre_2161_, v_post_2162_, v_usedLetOnly_boxed_2174_, v_skipConstInApp_boxed_2175_, v_skipInstances_boxed_2176_, v_body_2166_, v_x_2167_, v___y_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_);
lean_dec(v___y_2172_);
lean_dec_ref(v___y_2171_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
lean_dec(v___y_2168_);
return v_res_2177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(lean_object* v_pre_2178_, lean_object* v_post_2179_, uint8_t v_usedLetOnly_2180_, uint8_t v_skipConstInApp_2181_, uint8_t v_skipInstances_2182_, lean_object* v_e_2183_, lean_object* v_a_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
lean_object* v___x_2190_; 
lean_inc_ref(v_post_2179_);
lean_inc(v___y_2188_);
lean_inc_ref(v___y_2187_);
lean_inc(v___y_2186_);
lean_inc_ref(v___y_2185_);
lean_inc_ref(v_e_2183_);
v___x_2190_ = lean_apply_6(v_post_2179_, v_e_2183_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, lean_box(0));
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2209_; 
v_a_2191_ = lean_ctor_get(v___x_2190_, 0);
v_isSharedCheck_2209_ = !lean_is_exclusive(v___x_2190_);
if (v_isSharedCheck_2209_ == 0)
{
v___x_2193_ = v___x_2190_;
v_isShared_2194_ = v_isSharedCheck_2209_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_dec(v___x_2190_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2209_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
switch(lean_obj_tag(v_a_2191_))
{
case 0:
{
lean_object* v_e_2195_; lean_object* v___x_2197_; 
lean_dec_ref(v_e_2183_);
lean_dec_ref(v_post_2179_);
lean_dec_ref(v_pre_2178_);
v_e_2195_ = lean_ctor_get(v_a_2191_, 0);
lean_inc_ref(v_e_2195_);
lean_dec_ref(v_a_2191_);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 0, v_e_2195_);
v___x_2197_ = v___x_2193_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v_e_2195_);
v___x_2197_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
return v___x_2197_;
}
}
case 1:
{
lean_object* v_e_2199_; lean_object* v___x_2200_; 
lean_del_object(v___x_2193_);
lean_dec_ref(v_e_2183_);
v_e_2199_ = lean_ctor_get(v_a_2191_, 0);
lean_inc_ref(v_e_2199_);
lean_dec_ref(v_a_2191_);
v___x_2200_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2178_, v_post_2179_, v_usedLetOnly_2180_, v_skipConstInApp_2181_, v_skipInstances_2182_, v_e_2199_, v_a_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_);
return v___x_2200_;
}
default: 
{
lean_object* v_e_x3f_2201_; 
lean_dec_ref(v_post_2179_);
lean_dec_ref(v_pre_2178_);
v_e_x3f_2201_ = lean_ctor_get(v_a_2191_, 0);
lean_inc(v_e_x3f_2201_);
lean_dec_ref(v_a_2191_);
if (lean_obj_tag(v_e_x3f_2201_) == 0)
{
lean_object* v___x_2203_; 
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 0, v_e_2183_);
v___x_2203_ = v___x_2193_;
goto v_reusejp_2202_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v_e_2183_);
v___x_2203_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2202_;
}
v_reusejp_2202_:
{
return v___x_2203_;
}
}
else
{
lean_object* v_val_2205_; lean_object* v___x_2207_; 
lean_dec_ref(v_e_2183_);
v_val_2205_ = lean_ctor_get(v_e_x3f_2201_, 0);
lean_inc(v_val_2205_);
lean_dec_ref(v_e_x3f_2201_);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 0, v_val_2205_);
v___x_2207_ = v___x_2193_;
goto v_reusejp_2206_;
}
else
{
lean_object* v_reuseFailAlloc_2208_; 
v_reuseFailAlloc_2208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2208_, 0, v_val_2205_);
v___x_2207_ = v_reuseFailAlloc_2208_;
goto v_reusejp_2206_;
}
v_reusejp_2206_:
{
return v___x_2207_;
}
}
}
}
}
}
else
{
lean_object* v_a_2210_; lean_object* v___x_2212_; uint8_t v_isShared_2213_; uint8_t v_isSharedCheck_2217_; 
lean_dec_ref(v_e_2183_);
lean_dec_ref(v_post_2179_);
lean_dec_ref(v_pre_2178_);
v_a_2210_ = lean_ctor_get(v___x_2190_, 0);
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2190_);
if (v_isSharedCheck_2217_ == 0)
{
v___x_2212_ = v___x_2190_;
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
else
{
lean_inc(v_a_2210_);
lean_dec(v___x_2190_);
v___x_2212_ = lean_box(0);
v_isShared_2213_ = v_isSharedCheck_2217_;
goto v_resetjp_2211_;
}
v_resetjp_2211_:
{
lean_object* v___x_2215_; 
if (v_isShared_2213_ == 0)
{
v___x_2215_ = v___x_2212_;
goto v_reusejp_2214_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v_a_2210_);
v___x_2215_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2214_;
}
v_reusejp_2214_:
{
return v___x_2215_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(lean_object* v_pre_2218_, lean_object* v_post_2219_, uint8_t v_usedLetOnly_2220_, uint8_t v_skipConstInApp_2221_, uint8_t v_skipInstances_2222_, lean_object* v_fvars_2223_, lean_object* v_e_2224_, lean_object* v_a_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_){
_start:
{
if (lean_obj_tag(v_e_2224_) == 6)
{
lean_object* v_binderName_2231_; lean_object* v_binderType_2232_; lean_object* v_body_2233_; uint8_t v_binderInfo_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v_binderName_2231_ = lean_ctor_get(v_e_2224_, 0);
lean_inc(v_binderName_2231_);
v_binderType_2232_ = lean_ctor_get(v_e_2224_, 1);
lean_inc_ref(v_binderType_2232_);
v_body_2233_ = lean_ctor_get(v_e_2224_, 2);
lean_inc_ref(v_body_2233_);
v_binderInfo_2234_ = lean_ctor_get_uint8(v_e_2224_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2224_);
v___x_2235_ = lean_expr_instantiate_rev(v_binderType_2232_, v_fvars_2223_);
lean_dec_ref(v_binderType_2232_);
lean_inc_ref(v_post_2219_);
lean_inc_ref(v_pre_2218_);
v___x_2236_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2218_, v_post_2219_, v_usedLetOnly_2220_, v_skipConstInApp_2221_, v_skipInstances_2222_, v___x_2235_, v_a_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_);
if (lean_obj_tag(v___x_2236_) == 0)
{
lean_object* v_a_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___f_2241_; uint8_t v___x_2242_; lean_object* v___x_2243_; 
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
lean_inc(v_a_2237_);
lean_dec_ref(v___x_2236_);
v___x_2238_ = lean_box(v_usedLetOnly_2220_);
v___x_2239_ = lean_box(v_skipConstInApp_2221_);
v___x_2240_ = lean_box(v_skipInstances_2222_);
v___f_2241_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2241_, 0, v_fvars_2223_);
lean_closure_set(v___f_2241_, 1, v_pre_2218_);
lean_closure_set(v___f_2241_, 2, v_post_2219_);
lean_closure_set(v___f_2241_, 3, v___x_2238_);
lean_closure_set(v___f_2241_, 4, v___x_2239_);
lean_closure_set(v___f_2241_, 5, v___x_2240_);
lean_closure_set(v___f_2241_, 6, v_body_2233_);
v___x_2242_ = 0;
v___x_2243_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_2231_, v_binderInfo_2234_, v_a_2237_, v___f_2241_, v___x_2242_, v_a_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_);
return v___x_2243_;
}
else
{
lean_dec_ref(v_body_2233_);
lean_dec(v_binderName_2231_);
lean_dec_ref(v_fvars_2223_);
lean_dec_ref(v_post_2219_);
lean_dec_ref(v_pre_2218_);
return v___x_2236_;
}
}
else
{
lean_object* v___x_2244_; lean_object* v___x_2245_; 
v___x_2244_ = lean_expr_instantiate_rev(v_e_2224_, v_fvars_2223_);
lean_dec_ref(v_e_2224_);
lean_inc_ref(v_post_2219_);
lean_inc_ref(v_pre_2218_);
v___x_2245_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2218_, v_post_2219_, v_usedLetOnly_2220_, v_skipConstInApp_2221_, v_skipInstances_2222_, v___x_2244_, v_a_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_);
if (lean_obj_tag(v___x_2245_) == 0)
{
lean_object* v_a_2246_; uint8_t v___x_2247_; uint8_t v___x_2248_; uint8_t v___x_2249_; lean_object* v___x_2250_; 
v_a_2246_ = lean_ctor_get(v___x_2245_, 0);
lean_inc(v_a_2246_);
lean_dec_ref(v___x_2245_);
v___x_2247_ = 0;
v___x_2248_ = 1;
v___x_2249_ = 1;
v___x_2250_ = l_Lean_Meta_mkLambdaFVars(v_fvars_2223_, v_a_2246_, v___x_2247_, v_usedLetOnly_2220_, v___x_2247_, v___x_2248_, v___x_2249_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_);
lean_dec_ref(v_fvars_2223_);
if (lean_obj_tag(v___x_2250_) == 0)
{
lean_object* v_a_2251_; lean_object* v___x_2252_; 
v_a_2251_ = lean_ctor_get(v___x_2250_, 0);
lean_inc(v_a_2251_);
lean_dec_ref(v___x_2250_);
v___x_2252_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2218_, v_post_2219_, v_usedLetOnly_2220_, v_skipConstInApp_2221_, v_skipInstances_2222_, v_a_2251_, v_a_2225_, v___y_2226_, v___y_2227_, v___y_2228_, v___y_2229_);
return v___x_2252_;
}
else
{
lean_dec_ref(v_post_2219_);
lean_dec_ref(v_pre_2218_);
return v___x_2250_;
}
}
else
{
lean_dec_ref(v_fvars_2223_);
lean_dec_ref(v_post_2219_);
lean_dec_ref(v_pre_2218_);
return v___x_2245_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(lean_object* v_fvars_2253_, lean_object* v_pre_2254_, lean_object* v_post_2255_, uint8_t v_usedLetOnly_2256_, uint8_t v_skipConstInApp_2257_, uint8_t v_skipInstances_2258_, lean_object* v_body_2259_, lean_object* v_x_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = lean_array_push(v_fvars_2253_, v_x_2260_);
v___x_2268_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_2254_, v_post_2255_, v_usedLetOnly_2256_, v_skipConstInApp_2257_, v_skipInstances_2258_, v___x_2267_, v_body_2259_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed(lean_object* v_fvars_2269_, lean_object* v_pre_2270_, lean_object* v_post_2271_, lean_object* v_usedLetOnly_2272_, lean_object* v_skipConstInApp_2273_, lean_object* v_skipInstances_2274_, lean_object* v_body_2275_, lean_object* v_x_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_){
_start:
{
uint8_t v_usedLetOnly_boxed_2283_; uint8_t v_skipConstInApp_boxed_2284_; uint8_t v_skipInstances_boxed_2285_; lean_object* v_res_2286_; 
v_usedLetOnly_boxed_2283_ = lean_unbox(v_usedLetOnly_2272_);
v_skipConstInApp_boxed_2284_ = lean_unbox(v_skipConstInApp_2273_);
v_skipInstances_boxed_2285_ = lean_unbox(v_skipInstances_2274_);
v_res_2286_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0(v_fvars_2269_, v_pre_2270_, v_post_2271_, v_usedLetOnly_boxed_2283_, v_skipConstInApp_boxed_2284_, v_skipInstances_boxed_2285_, v_body_2275_, v_x_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
lean_dec(v___y_2281_);
lean_dec_ref(v___y_2280_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(lean_object* v_pre_2287_, lean_object* v_post_2288_, uint8_t v_usedLetOnly_2289_, uint8_t v_skipConstInApp_2290_, uint8_t v_skipInstances_2291_, lean_object* v_fvars_2292_, lean_object* v_e_2293_, lean_object* v_a_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_){
_start:
{
if (lean_obj_tag(v_e_2293_) == 8)
{
lean_object* v_declName_2300_; lean_object* v_type_2301_; lean_object* v_value_2302_; lean_object* v_body_2303_; uint8_t v_nondep_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; 
v_declName_2300_ = lean_ctor_get(v_e_2293_, 0);
lean_inc(v_declName_2300_);
v_type_2301_ = lean_ctor_get(v_e_2293_, 1);
lean_inc_ref(v_type_2301_);
v_value_2302_ = lean_ctor_get(v_e_2293_, 2);
lean_inc_ref(v_value_2302_);
v_body_2303_ = lean_ctor_get(v_e_2293_, 3);
lean_inc_ref(v_body_2303_);
v_nondep_2304_ = lean_ctor_get_uint8(v_e_2293_, sizeof(void*)*4 + 8);
lean_dec_ref(v_e_2293_);
v___x_2305_ = lean_expr_instantiate_rev(v_type_2301_, v_fvars_2292_);
lean_dec_ref(v_type_2301_);
lean_inc_ref(v_post_2288_);
lean_inc_ref(v_pre_2287_);
v___x_2306_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2287_, v_post_2288_, v_usedLetOnly_2289_, v_skipConstInApp_2290_, v_skipInstances_2291_, v___x_2305_, v_a_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v_a_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; 
v_a_2307_ = lean_ctor_get(v___x_2306_, 0);
lean_inc(v_a_2307_);
lean_dec_ref(v___x_2306_);
v___x_2308_ = lean_expr_instantiate_rev(v_value_2302_, v_fvars_2292_);
lean_dec_ref(v_value_2302_);
lean_inc_ref(v_post_2288_);
lean_inc_ref(v_pre_2287_);
v___x_2309_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2287_, v_post_2288_, v_usedLetOnly_2289_, v_skipConstInApp_2290_, v_skipInstances_2291_, v___x_2308_, v_a_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
if (lean_obj_tag(v___x_2309_) == 0)
{
lean_object* v_a_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___f_2314_; uint8_t v___x_2315_; lean_object* v___x_2316_; 
v_a_2310_ = lean_ctor_get(v___x_2309_, 0);
lean_inc(v_a_2310_);
lean_dec_ref(v___x_2309_);
v___x_2311_ = lean_box(v_usedLetOnly_2289_);
v___x_2312_ = lean_box(v_skipConstInApp_2290_);
v___x_2313_ = lean_box(v_skipInstances_2291_);
v___f_2314_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2314_, 0, v_fvars_2292_);
lean_closure_set(v___f_2314_, 1, v_pre_2287_);
lean_closure_set(v___f_2314_, 2, v_post_2288_);
lean_closure_set(v___f_2314_, 3, v___x_2311_);
lean_closure_set(v___f_2314_, 4, v___x_2312_);
lean_closure_set(v___f_2314_, 5, v___x_2313_);
lean_closure_set(v___f_2314_, 6, v_body_2303_);
v___x_2315_ = 0;
v___x_2316_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_declName_2300_, v_a_2307_, v_a_2310_, v___f_2314_, v_nondep_2304_, v___x_2315_, v_a_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
return v___x_2316_;
}
else
{
lean_dec(v_a_2307_);
lean_dec_ref(v_body_2303_);
lean_dec(v_declName_2300_);
lean_dec_ref(v_fvars_2292_);
lean_dec_ref(v_post_2288_);
lean_dec_ref(v_pre_2287_);
return v___x_2309_;
}
}
else
{
lean_dec_ref(v_body_2303_);
lean_dec_ref(v_value_2302_);
lean_dec(v_declName_2300_);
lean_dec_ref(v_fvars_2292_);
lean_dec_ref(v_post_2288_);
lean_dec_ref(v_pre_2287_);
return v___x_2306_;
}
}
else
{
lean_object* v___x_2317_; lean_object* v___x_2318_; 
v___x_2317_ = lean_expr_instantiate_rev(v_e_2293_, v_fvars_2292_);
lean_dec_ref(v_e_2293_);
lean_inc_ref(v_post_2288_);
lean_inc_ref(v_pre_2287_);
v___x_2318_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2287_, v_post_2288_, v_usedLetOnly_2289_, v_skipConstInApp_2290_, v_skipInstances_2291_, v___x_2317_, v_a_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
if (lean_obj_tag(v___x_2318_) == 0)
{
lean_object* v_a_2319_; uint8_t v___x_2320_; uint8_t v___x_2321_; lean_object* v___x_2322_; 
v_a_2319_ = lean_ctor_get(v___x_2318_, 0);
lean_inc(v_a_2319_);
lean_dec_ref(v___x_2318_);
v___x_2320_ = 0;
v___x_2321_ = 1;
v___x_2322_ = l_Lean_Meta_mkLetFVars(v_fvars_2292_, v_a_2319_, v_usedLetOnly_2289_, v___x_2320_, v___x_2321_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
lean_dec_ref(v_fvars_2292_);
if (lean_obj_tag(v___x_2322_) == 0)
{
lean_object* v_a_2323_; lean_object* v___x_2324_; 
v_a_2323_ = lean_ctor_get(v___x_2322_, 0);
lean_inc(v_a_2323_);
lean_dec_ref(v___x_2322_);
v___x_2324_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2287_, v_post_2288_, v_usedLetOnly_2289_, v_skipConstInApp_2290_, v_skipInstances_2291_, v_a_2323_, v_a_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_);
return v___x_2324_;
}
else
{
lean_dec_ref(v_post_2288_);
lean_dec_ref(v_pre_2287_);
return v___x_2322_;
}
}
else
{
lean_dec_ref(v_fvars_2292_);
lean_dec_ref(v_post_2288_);
lean_dec_ref(v_pre_2287_);
return v___x_2318_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(lean_object* v_pre_2325_, lean_object* v_post_2326_, uint8_t v_usedLetOnly_2327_, uint8_t v_skipConstInApp_2328_, uint8_t v_skipInstances_2329_, size_t v_sz_2330_, size_t v_i_2331_, lean_object* v_bs_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_){
_start:
{
uint8_t v___x_2339_; 
v___x_2339_ = lean_usize_dec_lt(v_i_2331_, v_sz_2330_);
if (v___x_2339_ == 0)
{
lean_object* v___x_2340_; 
lean_dec_ref(v_post_2326_);
lean_dec_ref(v_pre_2325_);
v___x_2340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2340_, 0, v_bs_2332_);
return v___x_2340_;
}
else
{
lean_object* v_v_2341_; lean_object* v___x_2342_; 
v_v_2341_ = lean_array_uget_borrowed(v_bs_2332_, v_i_2331_);
lean_inc(v_v_2341_);
lean_inc_ref(v_post_2326_);
lean_inc_ref(v_pre_2325_);
v___x_2342_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2325_, v_post_2326_, v_usedLetOnly_2327_, v_skipConstInApp_2328_, v_skipInstances_2329_, v_v_2341_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_);
if (lean_obj_tag(v___x_2342_) == 0)
{
lean_object* v_a_2343_; lean_object* v___x_2344_; lean_object* v_bs_x27_2345_; size_t v___x_2346_; size_t v___x_2347_; lean_object* v___x_2348_; 
v_a_2343_ = lean_ctor_get(v___x_2342_, 0);
lean_inc(v_a_2343_);
lean_dec_ref(v___x_2342_);
v___x_2344_ = lean_unsigned_to_nat(0u);
v_bs_x27_2345_ = lean_array_uset(v_bs_2332_, v_i_2331_, v___x_2344_);
v___x_2346_ = ((size_t)1ULL);
v___x_2347_ = lean_usize_add(v_i_2331_, v___x_2346_);
v___x_2348_ = lean_array_uset(v_bs_x27_2345_, v_i_2331_, v_a_2343_);
v_i_2331_ = v___x_2347_;
v_bs_2332_ = v___x_2348_;
goto _start;
}
else
{
lean_object* v_a_2350_; lean_object* v___x_2352_; uint8_t v_isShared_2353_; uint8_t v_isSharedCheck_2357_; 
lean_dec_ref(v_bs_2332_);
lean_dec_ref(v_post_2326_);
lean_dec_ref(v_pre_2325_);
v_a_2350_ = lean_ctor_get(v___x_2342_, 0);
v_isSharedCheck_2357_ = !lean_is_exclusive(v___x_2342_);
if (v_isSharedCheck_2357_ == 0)
{
v___x_2352_ = v___x_2342_;
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
else
{
lean_inc(v_a_2350_);
lean_dec(v___x_2342_);
v___x_2352_ = lean_box(0);
v_isShared_2353_ = v_isSharedCheck_2357_;
goto v_resetjp_2351_;
}
v_resetjp_2351_:
{
lean_object* v___x_2355_; 
if (v_isShared_2353_ == 0)
{
v___x_2355_ = v___x_2352_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v_a_2350_);
v___x_2355_ = v_reuseFailAlloc_2356_;
goto v_reusejp_2354_;
}
v_reusejp_2354_:
{
return v___x_2355_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(lean_object* v_pre_2358_, lean_object* v_post_2359_, uint8_t v_usedLetOnly_2360_, uint8_t v_skipConstInApp_2361_, uint8_t v_skipInstances_2362_, lean_object* v___x_2363_, lean_object* v___y_2364_, lean_object* v_b_2365_, lean_object* v_a_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
lean_object* v___x_2372_; 
v___x_2372_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2358_, v_post_2359_, v_usedLetOnly_2360_, v_skipConstInApp_2361_, v_skipInstances_2362_, v___x_2363_, v___y_2364_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v_a_2373_; lean_object* v___x_2375_; uint8_t v_isShared_2376_; uint8_t v_isSharedCheck_2382_; 
v_a_2373_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2375_ = v___x_2372_;
v_isShared_2376_ = v_isSharedCheck_2382_;
goto v_resetjp_2374_;
}
else
{
lean_inc(v_a_2373_);
lean_dec(v___x_2372_);
v___x_2375_ = lean_box(0);
v_isShared_2376_ = v_isSharedCheck_2382_;
goto v_resetjp_2374_;
}
v_resetjp_2374_:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2380_; 
v___x_2377_ = lean_array_fset(v_b_2365_, v_a_2366_, v_a_2373_);
v___x_2378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2377_);
if (v_isShared_2376_ == 0)
{
lean_ctor_set(v___x_2375_, 0, v___x_2378_);
v___x_2380_ = v___x_2375_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2381_; 
v_reuseFailAlloc_2381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2381_, 0, v___x_2378_);
v___x_2380_ = v_reuseFailAlloc_2381_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
return v___x_2380_;
}
}
}
else
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
lean_dec_ref(v_b_2365_);
v_a_2383_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v___x_2372_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2372_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed(lean_object* v_pre_2391_, lean_object* v_post_2392_, lean_object* v_usedLetOnly_2393_, lean_object* v_skipConstInApp_2394_, lean_object* v_skipInstances_2395_, lean_object* v___x_2396_, lean_object* v___y_2397_, lean_object* v_b_2398_, lean_object* v_a_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_){
_start:
{
uint8_t v_usedLetOnly_boxed_2405_; uint8_t v_skipConstInApp_boxed_2406_; uint8_t v_skipInstances_boxed_2407_; lean_object* v_res_2408_; 
v_usedLetOnly_boxed_2405_ = lean_unbox(v_usedLetOnly_2393_);
v_skipConstInApp_boxed_2406_ = lean_unbox(v_skipConstInApp_2394_);
v_skipInstances_boxed_2407_ = lean_unbox(v_skipInstances_2395_);
v_res_2408_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0(v_pre_2391_, v_post_2392_, v_usedLetOnly_boxed_2405_, v_skipConstInApp_boxed_2406_, v_skipInstances_boxed_2407_, v___x_2396_, v___y_2397_, v_b_2398_, v_a_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_);
lean_dec(v___y_2403_);
lean_dec_ref(v___y_2402_);
lean_dec(v___y_2401_);
lean_dec_ref(v___y_2400_);
lean_dec(v_a_2399_);
lean_dec(v___y_2397_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(lean_object* v_upperBound_2409_, lean_object* v___x_2410_, lean_object* v_pre_2411_, lean_object* v_post_2412_, uint8_t v_usedLetOnly_2413_, uint8_t v_skipConstInApp_2414_, uint8_t v_skipInstances_2415_, lean_object* v_a_2416_, lean_object* v_b_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
lean_object* v___y_2425_; uint8_t v___x_2448_; 
v___x_2448_ = lean_nat_dec_lt(v_a_2416_, v_upperBound_2409_);
if (v___x_2448_ == 0)
{
lean_object* v___x_2449_; 
lean_dec(v_a_2416_);
lean_dec_ref(v_post_2412_);
lean_dec_ref(v_pre_2411_);
v___x_2449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2449_, 0, v_b_2417_);
return v___x_2449_;
}
else
{
lean_object* v___x_2450_; lean_object* v___x_2451_; uint8_t v___x_2452_; 
v___x_2450_ = lean_array_fget_borrowed(v_b_2417_, v_a_2416_);
v___x_2451_ = lean_array_get_size(v___x_2410_);
v___x_2452_ = lean_nat_dec_lt(v_a_2416_, v___x_2451_);
if (v___x_2452_ == 0)
{
lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___f_2456_; 
lean_inc(v___x_2450_);
v___x_2453_ = lean_box(v_usedLetOnly_2413_);
v___x_2454_ = lean_box(v_skipConstInApp_2414_);
v___x_2455_ = lean_box(v_skipInstances_2415_);
lean_inc(v_a_2416_);
lean_inc(v___y_2418_);
lean_inc_ref(v_post_2412_);
lean_inc_ref(v_pre_2411_);
v___f_2456_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_2456_, 0, v_pre_2411_);
lean_closure_set(v___f_2456_, 1, v_post_2412_);
lean_closure_set(v___f_2456_, 2, v___x_2453_);
lean_closure_set(v___f_2456_, 3, v___x_2454_);
lean_closure_set(v___f_2456_, 4, v___x_2455_);
lean_closure_set(v___f_2456_, 5, v___x_2450_);
lean_closure_set(v___f_2456_, 6, v___y_2418_);
lean_closure_set(v___f_2456_, 7, v_b_2417_);
lean_closure_set(v___f_2456_, 8, v_a_2416_);
v___y_2425_ = v___f_2456_;
goto v___jp_2424_;
}
else
{
lean_object* v___x_2457_; uint8_t v_isInstance_2458_; 
v___x_2457_ = lean_array_fget_borrowed(v___x_2410_, v_a_2416_);
v_isInstance_2458_ = lean_ctor_get_uint8(v___x_2457_, sizeof(void*)*1 + 4);
if (v_isInstance_2458_ == 0)
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___f_2462_; 
lean_inc(v___x_2450_);
v___x_2459_ = lean_box(v_usedLetOnly_2413_);
v___x_2460_ = lean_box(v_skipConstInApp_2414_);
v___x_2461_ = lean_box(v_skipInstances_2415_);
lean_inc(v_a_2416_);
lean_inc(v___y_2418_);
lean_inc_ref(v_post_2412_);
lean_inc_ref(v_pre_2411_);
v___f_2462_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__0___boxed), 14, 9);
lean_closure_set(v___f_2462_, 0, v_pre_2411_);
lean_closure_set(v___f_2462_, 1, v_post_2412_);
lean_closure_set(v___f_2462_, 2, v___x_2459_);
lean_closure_set(v___f_2462_, 3, v___x_2460_);
lean_closure_set(v___f_2462_, 4, v___x_2461_);
lean_closure_set(v___f_2462_, 5, v___x_2450_);
lean_closure_set(v___f_2462_, 6, v___y_2418_);
lean_closure_set(v___f_2462_, 7, v_b_2417_);
lean_closure_set(v___f_2462_, 8, v_a_2416_);
v___y_2425_ = v___f_2462_;
goto v___jp_2424_;
}
else
{
lean_object* v___x_2463_; lean_object* v___f_2464_; 
v___x_2463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2463_, 0, v_b_2417_);
v___f_2464_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___lam__2___boxed), 6, 1);
lean_closure_set(v___f_2464_, 0, v___x_2463_);
v___y_2425_ = v___f_2464_;
goto v___jp_2424_;
}
}
}
v___jp_2424_:
{
lean_object* v___x_2426_; 
lean_inc(v___y_2422_);
lean_inc_ref(v___y_2421_);
lean_inc(v___y_2420_);
lean_inc_ref(v___y_2419_);
v___x_2426_ = lean_apply_5(v___y_2425_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, lean_box(0));
if (lean_obj_tag(v___x_2426_) == 0)
{
lean_object* v_a_2427_; lean_object* v___x_2429_; uint8_t v_isShared_2430_; uint8_t v_isSharedCheck_2439_; 
v_a_2427_ = lean_ctor_get(v___x_2426_, 0);
v_isSharedCheck_2439_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2429_ = v___x_2426_;
v_isShared_2430_ = v_isSharedCheck_2439_;
goto v_resetjp_2428_;
}
else
{
lean_inc(v_a_2427_);
lean_dec(v___x_2426_);
v___x_2429_ = lean_box(0);
v_isShared_2430_ = v_isSharedCheck_2439_;
goto v_resetjp_2428_;
}
v_resetjp_2428_:
{
if (lean_obj_tag(v_a_2427_) == 0)
{
lean_object* v_a_2431_; lean_object* v___x_2433_; 
lean_dec(v_a_2416_);
lean_dec_ref(v_post_2412_);
lean_dec_ref(v_pre_2411_);
v_a_2431_ = lean_ctor_get(v_a_2427_, 0);
lean_inc(v_a_2431_);
lean_dec_ref(v_a_2427_);
if (v_isShared_2430_ == 0)
{
lean_ctor_set(v___x_2429_, 0, v_a_2431_);
v___x_2433_ = v___x_2429_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2431_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
}
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
lean_del_object(v___x_2429_);
v_a_2435_ = lean_ctor_get(v_a_2427_, 0);
lean_inc(v_a_2435_);
lean_dec_ref(v_a_2427_);
v___x_2436_ = lean_unsigned_to_nat(1u);
v___x_2437_ = lean_nat_add(v_a_2416_, v___x_2436_);
lean_dec(v_a_2416_);
v_a_2416_ = v___x_2437_;
v_b_2417_ = v_a_2435_;
goto _start;
}
}
}
else
{
lean_object* v_a_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2447_; 
lean_dec(v_a_2416_);
lean_dec_ref(v_post_2412_);
lean_dec_ref(v_pre_2411_);
v_a_2440_ = lean_ctor_get(v___x_2426_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2426_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2442_ = v___x_2426_;
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_a_2440_);
lean_dec(v___x_2426_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2447_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2445_; 
if (v_isShared_2443_ == 0)
{
v___x_2445_ = v___x_2442_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v_a_2440_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(uint8_t v_skipInstances_2465_, lean_object* v_pre_2466_, lean_object* v_post_2467_, uint8_t v_usedLetOnly_2468_, uint8_t v_skipConstInApp_2469_, lean_object* v_x_2470_, lean_object* v_x_2471_, lean_object* v_x_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_){
_start:
{
lean_object* v_f_2480_; lean_object* v___y_2481_; lean_object* v___y_2482_; lean_object* v___y_2483_; lean_object* v___y_2484_; lean_object* v___y_2485_; 
if (lean_obj_tag(v_x_2470_) == 5)
{
lean_object* v_fn_2528_; lean_object* v_arg_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v_fn_2528_ = lean_ctor_get(v_x_2470_, 0);
lean_inc_ref(v_fn_2528_);
v_arg_2529_ = lean_ctor_get(v_x_2470_, 1);
lean_inc_ref(v_arg_2529_);
lean_dec_ref(v_x_2470_);
v___x_2530_ = lean_array_set(v_x_2471_, v_x_2472_, v_arg_2529_);
v___x_2531_ = lean_unsigned_to_nat(1u);
v___x_2532_ = lean_nat_sub(v_x_2472_, v___x_2531_);
lean_dec(v_x_2472_);
v_x_2470_ = v_fn_2528_;
v_x_2471_ = v___x_2530_;
v_x_2472_ = v___x_2532_;
goto _start;
}
else
{
lean_dec(v_x_2472_);
if (v_skipConstInApp_2469_ == 0)
{
goto v___jp_2525_;
}
else
{
uint8_t v___x_2534_; 
v___x_2534_ = l_Lean_Expr_isConst(v_x_2470_);
if (v___x_2534_ == 0)
{
goto v___jp_2525_;
}
else
{
v_f_2480_ = v_x_2470_;
v___y_2481_ = v___y_2473_;
v___y_2482_ = v___y_2474_;
v___y_2483_ = v___y_2475_;
v___y_2484_ = v___y_2476_;
v___y_2485_ = v___y_2477_;
goto v___jp_2479_;
}
}
}
v___jp_2479_:
{
if (v_skipInstances_2465_ == 0)
{
size_t v_sz_2486_; size_t v___x_2487_; lean_object* v___x_2488_; 
v_sz_2486_ = lean_array_size(v_x_2471_);
v___x_2487_ = ((size_t)0ULL);
lean_inc_ref(v_post_2467_);
lean_inc_ref(v_pre_2466_);
v___x_2488_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(v_pre_2466_, v_post_2467_, v_usedLetOnly_2468_, v_skipConstInApp_2469_, v_skipInstances_2465_, v_sz_2486_, v___x_2487_, v_x_2471_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v_a_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; 
v_a_2489_ = lean_ctor_get(v___x_2488_, 0);
lean_inc(v_a_2489_);
lean_dec_ref(v___x_2488_);
v___x_2490_ = l_Lean_mkAppN(v_f_2480_, v_a_2489_);
lean_dec(v_a_2489_);
v___x_2491_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2466_, v_post_2467_, v_usedLetOnly_2468_, v_skipConstInApp_2469_, v_skipInstances_2465_, v___x_2490_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2491_;
}
else
{
lean_object* v_a_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2499_; 
lean_dec_ref(v_f_2480_);
lean_dec_ref(v_post_2467_);
lean_dec_ref(v_pre_2466_);
v_a_2492_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2499_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2499_ == 0)
{
v___x_2494_ = v___x_2488_;
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_a_2492_);
lean_dec(v___x_2488_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2499_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2497_; 
if (v_isShared_2495_ == 0)
{
v___x_2497_ = v___x_2494_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2498_; 
v_reuseFailAlloc_2498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2498_, 0, v_a_2492_);
v___x_2497_ = v_reuseFailAlloc_2498_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
return v___x_2497_;
}
}
}
}
else
{
lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2500_ = lean_array_get_size(v_x_2471_);
lean_inc_ref(v_f_2480_);
v___x_2501_ = l_Lean_Meta_getFunInfoNArgs(v_f_2480_, v___x_2500_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; lean_object* v_paramInfo_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; 
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
lean_inc(v_a_2502_);
lean_dec_ref(v___x_2501_);
v_paramInfo_2503_ = lean_ctor_get(v_a_2502_, 0);
lean_inc_ref(v_paramInfo_2503_);
lean_dec(v_a_2502_);
v___x_2504_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_post_2467_);
lean_inc_ref(v_pre_2466_);
v___x_2505_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v___x_2500_, v_paramInfo_2503_, v_pre_2466_, v_post_2467_, v_usedLetOnly_2468_, v_skipConstInApp_2469_, v_skipInstances_2465_, v___x_2504_, v_x_2471_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
lean_dec_ref(v_paramInfo_2503_);
if (lean_obj_tag(v___x_2505_) == 0)
{
lean_object* v_a_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v_a_2506_ = lean_ctor_get(v___x_2505_, 0);
lean_inc(v_a_2506_);
lean_dec_ref(v___x_2505_);
v___x_2507_ = l_Lean_mkAppN(v_f_2480_, v_a_2506_);
lean_dec(v_a_2506_);
v___x_2508_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2466_, v_post_2467_, v_usedLetOnly_2468_, v_skipConstInApp_2469_, v_skipInstances_2465_, v___x_2507_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_);
return v___x_2508_;
}
else
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2516_; 
lean_dec_ref(v_f_2480_);
lean_dec_ref(v_post_2467_);
lean_dec_ref(v_pre_2466_);
v_a_2509_ = lean_ctor_get(v___x_2505_, 0);
v_isSharedCheck_2516_ = !lean_is_exclusive(v___x_2505_);
if (v_isSharedCheck_2516_ == 0)
{
v___x_2511_ = v___x_2505_;
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2505_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2516_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2514_; 
if (v_isShared_2512_ == 0)
{
v___x_2514_ = v___x_2511_;
goto v_reusejp_2513_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_a_2509_);
v___x_2514_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2513_;
}
v_reusejp_2513_:
{
return v___x_2514_;
}
}
}
}
else
{
lean_object* v_a_2517_; lean_object* v___x_2519_; uint8_t v_isShared_2520_; uint8_t v_isSharedCheck_2524_; 
lean_dec_ref(v_f_2480_);
lean_dec_ref(v_x_2471_);
lean_dec_ref(v_post_2467_);
lean_dec_ref(v_pre_2466_);
v_a_2517_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2524_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2524_ == 0)
{
v___x_2519_ = v___x_2501_;
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
else
{
lean_inc(v_a_2517_);
lean_dec(v___x_2501_);
v___x_2519_ = lean_box(0);
v_isShared_2520_ = v_isSharedCheck_2524_;
goto v_resetjp_2518_;
}
v_resetjp_2518_:
{
lean_object* v___x_2522_; 
if (v_isShared_2520_ == 0)
{
v___x_2522_ = v___x_2519_;
goto v_reusejp_2521_;
}
else
{
lean_object* v_reuseFailAlloc_2523_; 
v_reuseFailAlloc_2523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2523_, 0, v_a_2517_);
v___x_2522_ = v_reuseFailAlloc_2523_;
goto v_reusejp_2521_;
}
v_reusejp_2521_:
{
return v___x_2522_;
}
}
}
}
}
v___jp_2525_:
{
lean_object* v___x_2526_; 
lean_inc_ref(v_post_2467_);
lean_inc_ref(v_pre_2466_);
v___x_2526_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2466_, v_post_2467_, v_usedLetOnly_2468_, v_skipConstInApp_2469_, v_skipInstances_2465_, v_x_2470_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_object* v_a_2527_; 
v_a_2527_ = lean_ctor_get(v___x_2526_, 0);
lean_inc(v_a_2527_);
lean_dec_ref(v___x_2526_);
v_f_2480_ = v_a_2527_;
v___y_2481_ = v___y_2473_;
v___y_2482_ = v___y_2474_;
v___y_2483_ = v___y_2475_;
v___y_2484_ = v___y_2476_;
v___y_2485_ = v___y_2477_;
goto v___jp_2479_;
}
else
{
lean_dec_ref(v_x_2471_);
lean_dec_ref(v_post_2467_);
lean_dec_ref(v_pre_2466_);
return v___x_2526_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(lean_object* v___x_2535_, lean_object* v_pre_2536_, lean_object* v_e_2537_, lean_object* v_post_2538_, uint8_t v_usedLetOnly_2539_, uint8_t v_skipConstInApp_2540_, uint8_t v_skipInstances_2541_, lean_object* v___y_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_){
_start:
{
lean_object* v___x_2548_; 
v___x_2548_ = l_Lean_Core_checkSystem(v___x_2535_, v___y_2545_, v___y_2546_);
if (lean_obj_tag(v___x_2548_) == 0)
{
lean_object* v___x_2549_; 
lean_dec_ref(v___x_2548_);
lean_inc_ref(v_pre_2536_);
lean_inc(v___y_2546_);
lean_inc_ref(v___y_2545_);
lean_inc(v___y_2544_);
lean_inc_ref(v___y_2543_);
lean_inc_ref(v_e_2537_);
v___x_2549_ = lean_apply_6(v_pre_2536_, v_e_2537_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_, lean_box(0));
if (lean_obj_tag(v___x_2549_) == 0)
{
lean_object* v_a_2550_; lean_object* v___x_2552_; uint8_t v_isShared_2553_; uint8_t v_isSharedCheck_2598_; 
v_a_2550_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2552_ = v___x_2549_;
v_isShared_2553_ = v_isSharedCheck_2598_;
goto v_resetjp_2551_;
}
else
{
lean_inc(v_a_2550_);
lean_dec(v___x_2549_);
v___x_2552_ = lean_box(0);
v_isShared_2553_ = v_isSharedCheck_2598_;
goto v_resetjp_2551_;
}
v_resetjp_2551_:
{
lean_object* v___y_2555_; 
switch(lean_obj_tag(v_a_2550_))
{
case 0:
{
lean_object* v_e_2590_; lean_object* v___x_2592_; 
lean_dec_ref(v_post_2538_);
lean_dec_ref(v_e_2537_);
lean_dec_ref(v_pre_2536_);
v_e_2590_ = lean_ctor_get(v_a_2550_, 0);
lean_inc_ref(v_e_2590_);
lean_dec_ref(v_a_2550_);
if (v_isShared_2553_ == 0)
{
lean_ctor_set(v___x_2552_, 0, v_e_2590_);
v___x_2592_ = v___x_2552_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_e_2590_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
case 1:
{
lean_object* v_e_2594_; lean_object* v___x_2595_; 
lean_del_object(v___x_2552_);
lean_dec_ref(v_e_2537_);
v_e_2594_ = lean_ctor_get(v_a_2550_, 0);
lean_inc_ref(v_e_2594_);
lean_dec_ref(v_a_2550_);
v___x_2595_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v_e_2594_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v___x_2595_;
}
default: 
{
lean_object* v_e_x3f_2596_; 
lean_del_object(v___x_2552_);
v_e_x3f_2596_ = lean_ctor_get(v_a_2550_, 0);
lean_inc(v_e_x3f_2596_);
lean_dec_ref(v_a_2550_);
if (lean_obj_tag(v_e_x3f_2596_) == 0)
{
v___y_2555_ = v_e_2537_;
goto v___jp_2554_;
}
else
{
lean_object* v_val_2597_; 
lean_dec_ref(v_e_2537_);
v_val_2597_ = lean_ctor_get(v_e_x3f_2596_, 0);
lean_inc(v_val_2597_);
lean_dec_ref(v_e_x3f_2596_);
v___y_2555_ = v_val_2597_;
goto v___jp_2554_;
}
}
}
v___jp_2554_:
{
switch(lean_obj_tag(v___y_2555_))
{
case 7:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0);
v___x_2557_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v___x_2556_, v___y_2555_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v___x_2557_;
}
case 6:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; 
v___x_2558_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0);
v___x_2559_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v___x_2558_, v___y_2555_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v___x_2559_;
}
case 8:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; 
v___x_2560_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___closed__0);
v___x_2561_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v___x_2560_, v___y_2555_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v___x_2561_;
}
case 5:
{
lean_object* v_dummy_2562_; lean_object* v_nargs_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; 
v_dummy_2562_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___closed__0);
v_nargs_2563_ = l_Lean_Expr_getAppNumArgs(v___y_2555_);
lean_inc(v_nargs_2563_);
v___x_2564_ = lean_mk_array(v_nargs_2563_, v_dummy_2562_);
v___x_2565_ = lean_unsigned_to_nat(1u);
v___x_2566_ = lean_nat_sub(v_nargs_2563_, v___x_2565_);
lean_dec(v_nargs_2563_);
v___x_2567_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_2541_, v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v___y_2555_, v___x_2564_, v___x_2566_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v___x_2567_;
}
case 10:
{
lean_object* v_data_2568_; lean_object* v_expr_2569_; lean_object* v___x_2570_; 
v_data_2568_ = lean_ctor_get(v___y_2555_, 0);
v_expr_2569_ = lean_ctor_get(v___y_2555_, 1);
lean_inc_ref(v_expr_2569_);
lean_inc_ref(v_post_2538_);
lean_inc_ref(v_pre_2536_);
v___x_2570_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v_expr_2569_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; size_t v___x_2572_; size_t v___x_2573_; uint8_t v___x_2574_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2571_);
lean_dec_ref(v___x_2570_);
v___x_2572_ = lean_ptr_addr(v_expr_2569_);
v___x_2573_ = lean_ptr_addr(v_a_2571_);
v___x_2574_ = lean_usize_dec_eq(v___x_2572_, v___x_2573_);
if (v___x_2574_ == 0)
{
lean_object* v___x_2575_; lean_object* v___x_2576_; 
lean_inc(v_data_2568_);
lean_dec_ref(v___y_2555_);
v___x_2575_ = l_Lean_Expr_mdata___override(v_data_2568_, v_a_2571_);
v___x_2576_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v___x_2575_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v___x_2576_;
}
else
{
lean_object* v___x_2577_; 
lean_dec(v_a_2571_);
v___x_2577_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v___y_2555_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v___x_2577_;
}
}
else
{
lean_dec_ref(v___y_2555_);
lean_dec_ref(v_post_2538_);
lean_dec_ref(v_pre_2536_);
return v___x_2570_;
}
}
case 11:
{
lean_object* v_typeName_2578_; lean_object* v_idx_2579_; lean_object* v_struct_2580_; lean_object* v___x_2581_; 
v_typeName_2578_ = lean_ctor_get(v___y_2555_, 0);
v_idx_2579_ = lean_ctor_get(v___y_2555_, 1);
v_struct_2580_ = lean_ctor_get(v___y_2555_, 2);
lean_inc_ref(v_struct_2580_);
lean_inc_ref(v_post_2538_);
lean_inc_ref(v_pre_2536_);
v___x_2581_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v_struct_2580_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
if (lean_obj_tag(v___x_2581_) == 0)
{
lean_object* v_a_2582_; size_t v___x_2583_; size_t v___x_2584_; uint8_t v___x_2585_; 
v_a_2582_ = lean_ctor_get(v___x_2581_, 0);
lean_inc(v_a_2582_);
lean_dec_ref(v___x_2581_);
v___x_2583_ = lean_ptr_addr(v_struct_2580_);
v___x_2584_ = lean_ptr_addr(v_a_2582_);
v___x_2585_ = lean_usize_dec_eq(v___x_2583_, v___x_2584_);
if (v___x_2585_ == 0)
{
lean_object* v___x_2586_; lean_object* v___x_2587_; 
lean_inc(v_idx_2579_);
lean_inc(v_typeName_2578_);
lean_dec_ref(v___y_2555_);
v___x_2586_ = l_Lean_Expr_proj___override(v_typeName_2578_, v_idx_2579_, v_a_2582_);
v___x_2587_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v___x_2586_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v___x_2587_;
}
else
{
lean_object* v___x_2588_; 
lean_dec(v_a_2582_);
v___x_2588_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v___y_2555_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v___x_2588_;
}
}
else
{
lean_dec_ref(v___y_2555_);
lean_dec_ref(v_post_2538_);
lean_dec_ref(v_pre_2536_);
return v___x_2581_;
}
}
default: 
{
lean_object* v___x_2589_; 
v___x_2589_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2536_, v_post_2538_, v_usedLetOnly_2539_, v_skipConstInApp_2540_, v_skipInstances_2541_, v___y_2555_, v___y_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
return v___x_2589_;
}
}
}
}
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
lean_dec_ref(v_post_2538_);
lean_dec_ref(v_e_2537_);
lean_dec_ref(v_pre_2536_);
v_a_2599_ = lean_ctor_get(v___x_2549_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___x_2549_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___x_2549_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2549_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2604_; 
if (v_isShared_2602_ == 0)
{
v___x_2604_ = v___x_2601_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2599_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
else
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2614_; 
lean_dec_ref(v_post_2538_);
lean_dec_ref(v_e_2537_);
lean_dec_ref(v_pre_2536_);
v_a_2607_ = lean_ctor_get(v___x_2548_, 0);
v_isSharedCheck_2614_ = !lean_is_exclusive(v___x_2548_);
if (v_isSharedCheck_2614_ == 0)
{
v___x_2609_ = v___x_2548_;
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2548_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2614_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___x_2612_; 
if (v_isShared_2610_ == 0)
{
v___x_2612_ = v___x_2609_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v_a_2607_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed(lean_object* v___x_2615_, lean_object* v_pre_2616_, lean_object* v_e_2617_, lean_object* v_post_2618_, lean_object* v_usedLetOnly_2619_, lean_object* v_skipConstInApp_2620_, lean_object* v_skipInstances_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_, lean_object* v___y_2627_){
_start:
{
uint8_t v_usedLetOnly_boxed_2628_; uint8_t v_skipConstInApp_boxed_2629_; uint8_t v_skipInstances_boxed_2630_; lean_object* v_res_2631_; 
v_usedLetOnly_boxed_2628_ = lean_unbox(v_usedLetOnly_2619_);
v_skipConstInApp_boxed_2629_ = lean_unbox(v_skipConstInApp_2620_);
v_skipInstances_boxed_2630_ = lean_unbox(v_skipInstances_2621_);
v_res_2631_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1(v___x_2615_, v_pre_2616_, v_e_2617_, v_post_2618_, v_usedLetOnly_boxed_2628_, v_skipConstInApp_boxed_2629_, v_skipInstances_boxed_2630_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_);
lean_dec(v___y_2626_);
lean_dec_ref(v___y_2625_);
lean_dec(v___y_2624_);
lean_dec_ref(v___y_2623_);
lean_dec(v___y_2622_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(lean_object* v_pre_2632_, lean_object* v_post_2633_, uint8_t v_usedLetOnly_2634_, uint8_t v_skipConstInApp_2635_, uint8_t v_skipInstances_2636_, lean_object* v_e_2637_, lean_object* v_a_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v___x_2644_; lean_object* v___x_2645_; 
lean_inc(v_a_2638_);
v___x_2644_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2644_, 0, lean_box(0));
lean_closure_set(v___x_2644_, 1, lean_box(0));
lean_closure_set(v___x_2644_, 2, v_a_2638_);
v___x_2645_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___x_2644_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_);
if (lean_obj_tag(v___x_2645_) == 0)
{
lean_object* v_a_2646_; lean_object* v___x_2648_; uint8_t v_isShared_2649_; uint8_t v_isSharedCheck_2680_; 
v_a_2646_ = lean_ctor_get(v___x_2645_, 0);
v_isSharedCheck_2680_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2680_ == 0)
{
v___x_2648_ = v___x_2645_;
v_isShared_2649_ = v_isSharedCheck_2680_;
goto v_resetjp_2647_;
}
else
{
lean_inc(v_a_2646_);
lean_dec(v___x_2645_);
v___x_2648_ = lean_box(0);
v_isShared_2649_ = v_isSharedCheck_2680_;
goto v_resetjp_2647_;
}
v_resetjp_2647_:
{
lean_object* v___x_2650_; 
v___x_2650_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_a_2646_, v_e_2637_);
lean_dec(v_a_2646_);
if (lean_obj_tag(v___x_2650_) == 0)
{
lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___f_2655_; lean_object* v___x_2656_; 
lean_del_object(v___x_2648_);
v___x_2651_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___closed__0);
v___x_2652_ = lean_box(v_usedLetOnly_2634_);
v___x_2653_ = lean_box(v_skipConstInApp_2635_);
v___x_2654_ = lean_box(v_skipInstances_2636_);
lean_inc_ref(v_e_2637_);
v___f_2655_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__1___boxed), 13, 7);
lean_closure_set(v___f_2655_, 0, v___x_2651_);
lean_closure_set(v___f_2655_, 1, v_pre_2632_);
lean_closure_set(v___f_2655_, 2, v_e_2637_);
lean_closure_set(v___f_2655_, 3, v_post_2633_);
lean_closure_set(v___f_2655_, 4, v___x_2652_);
lean_closure_set(v___f_2655_, 5, v___x_2653_);
lean_closure_set(v___f_2655_, 6, v___x_2654_);
v___x_2656_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v___f_2655_, v_a_2638_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_);
if (lean_obj_tag(v___x_2656_) == 0)
{
lean_object* v_a_2657_; lean_object* v___f_2658_; lean_object* v___x_2659_; 
v_a_2657_ = lean_ctor_get(v___x_2656_, 0);
lean_inc_n(v_a_2657_, 2);
lean_dec_ref(v___x_2656_);
lean_inc(v_a_2638_);
v___f_2658_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__2___boxed), 4, 3);
lean_closure_set(v___f_2658_, 0, v_a_2638_);
lean_closure_set(v___f_2658_, 1, v_e_2637_);
lean_closure_set(v___f_2658_, 2, v_a_2657_);
v___x_2659_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___lam__0(lean_box(0), v___f_2658_, v___y_2639_, v___y_2640_, v___y_2641_, v___y_2642_);
if (lean_obj_tag(v___x_2659_) == 0)
{
lean_object* v___x_2661_; uint8_t v_isShared_2662_; uint8_t v_isSharedCheck_2666_; 
v_isSharedCheck_2666_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2666_ == 0)
{
lean_object* v_unused_2667_; 
v_unused_2667_ = lean_ctor_get(v___x_2659_, 0);
lean_dec(v_unused_2667_);
v___x_2661_ = v___x_2659_;
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
else
{
lean_dec(v___x_2659_);
v___x_2661_ = lean_box(0);
v_isShared_2662_ = v_isSharedCheck_2666_;
goto v_resetjp_2660_;
}
v_resetjp_2660_:
{
lean_object* v___x_2664_; 
if (v_isShared_2662_ == 0)
{
lean_ctor_set(v___x_2661_, 0, v_a_2657_);
v___x_2664_ = v___x_2661_;
goto v_reusejp_2663_;
}
else
{
lean_object* v_reuseFailAlloc_2665_; 
v_reuseFailAlloc_2665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2665_, 0, v_a_2657_);
v___x_2664_ = v_reuseFailAlloc_2665_;
goto v_reusejp_2663_;
}
v_reusejp_2663_:
{
return v___x_2664_;
}
}
}
else
{
lean_object* v_a_2668_; lean_object* v___x_2670_; uint8_t v_isShared_2671_; uint8_t v_isSharedCheck_2675_; 
lean_dec(v_a_2657_);
v_a_2668_ = lean_ctor_get(v___x_2659_, 0);
v_isSharedCheck_2675_ = !lean_is_exclusive(v___x_2659_);
if (v_isSharedCheck_2675_ == 0)
{
v___x_2670_ = v___x_2659_;
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
else
{
lean_inc(v_a_2668_);
lean_dec(v___x_2659_);
v___x_2670_ = lean_box(0);
v_isShared_2671_ = v_isSharedCheck_2675_;
goto v_resetjp_2669_;
}
v_resetjp_2669_:
{
lean_object* v___x_2673_; 
if (v_isShared_2671_ == 0)
{
v___x_2673_ = v___x_2670_;
goto v_reusejp_2672_;
}
else
{
lean_object* v_reuseFailAlloc_2674_; 
v_reuseFailAlloc_2674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2674_, 0, v_a_2668_);
v___x_2673_ = v_reuseFailAlloc_2674_;
goto v_reusejp_2672_;
}
v_reusejp_2672_:
{
return v___x_2673_;
}
}
}
}
else
{
lean_dec_ref(v_e_2637_);
return v___x_2656_;
}
}
else
{
lean_object* v_val_2676_; lean_object* v___x_2678_; 
lean_dec_ref(v_e_2637_);
lean_dec_ref(v_post_2633_);
lean_dec_ref(v_pre_2632_);
v_val_2676_ = lean_ctor_get(v___x_2650_, 0);
lean_inc(v_val_2676_);
lean_dec_ref(v___x_2650_);
if (v_isShared_2649_ == 0)
{
lean_ctor_set(v___x_2648_, 0, v_val_2676_);
v___x_2678_ = v___x_2648_;
goto v_reusejp_2677_;
}
else
{
lean_object* v_reuseFailAlloc_2679_; 
v_reuseFailAlloc_2679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2679_, 0, v_val_2676_);
v___x_2678_ = v_reuseFailAlloc_2679_;
goto v_reusejp_2677_;
}
v_reusejp_2677_:
{
return v___x_2678_;
}
}
}
}
else
{
lean_object* v_a_2681_; lean_object* v___x_2683_; uint8_t v_isShared_2684_; uint8_t v_isSharedCheck_2688_; 
lean_dec_ref(v_e_2637_);
lean_dec_ref(v_post_2633_);
lean_dec_ref(v_pre_2632_);
v_a_2681_ = lean_ctor_get(v___x_2645_, 0);
v_isSharedCheck_2688_ = !lean_is_exclusive(v___x_2645_);
if (v_isSharedCheck_2688_ == 0)
{
v___x_2683_ = v___x_2645_;
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
else
{
lean_inc(v_a_2681_);
lean_dec(v___x_2645_);
v___x_2683_ = lean_box(0);
v_isShared_2684_ = v_isSharedCheck_2688_;
goto v_resetjp_2682_;
}
v_resetjp_2682_:
{
lean_object* v___x_2686_; 
if (v_isShared_2684_ == 0)
{
v___x_2686_ = v___x_2683_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2687_; 
v_reuseFailAlloc_2687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2687_, 0, v_a_2681_);
v___x_2686_ = v_reuseFailAlloc_2687_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
return v___x_2686_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed(lean_object* v_fvars_2689_, lean_object* v_pre_2690_, lean_object* v_post_2691_, lean_object* v_usedLetOnly_2692_, lean_object* v_skipConstInApp_2693_, lean_object* v_skipInstances_2694_, lean_object* v_body_2695_, lean_object* v_x_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
uint8_t v_usedLetOnly_boxed_2703_; uint8_t v_skipConstInApp_boxed_2704_; uint8_t v_skipInstances_boxed_2705_; lean_object* v_res_2706_; 
v_usedLetOnly_boxed_2703_ = lean_unbox(v_usedLetOnly_2692_);
v_skipConstInApp_boxed_2704_ = lean_unbox(v_skipConstInApp_2693_);
v_skipInstances_boxed_2705_ = lean_unbox(v_skipInstances_2694_);
v_res_2706_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(v_fvars_2689_, v_pre_2690_, v_post_2691_, v_usedLetOnly_boxed_2703_, v_skipConstInApp_boxed_2704_, v_skipInstances_boxed_2705_, v_body_2695_, v_x_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec(v___y_2699_);
lean_dec_ref(v___y_2698_);
lean_dec(v___y_2697_);
return v_res_2706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(lean_object* v_pre_2707_, lean_object* v_post_2708_, uint8_t v_usedLetOnly_2709_, uint8_t v_skipConstInApp_2710_, uint8_t v_skipInstances_2711_, lean_object* v_fvars_2712_, lean_object* v_e_2713_, lean_object* v_a_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_){
_start:
{
if (lean_obj_tag(v_e_2713_) == 7)
{
lean_object* v_binderName_2720_; lean_object* v_binderType_2721_; lean_object* v_body_2722_; uint8_t v_binderInfo_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v_binderName_2720_ = lean_ctor_get(v_e_2713_, 0);
lean_inc(v_binderName_2720_);
v_binderType_2721_ = lean_ctor_get(v_e_2713_, 1);
lean_inc_ref(v_binderType_2721_);
v_body_2722_ = lean_ctor_get(v_e_2713_, 2);
lean_inc_ref(v_body_2722_);
v_binderInfo_2723_ = lean_ctor_get_uint8(v_e_2713_, sizeof(void*)*3 + 8);
lean_dec_ref(v_e_2713_);
v___x_2724_ = lean_expr_instantiate_rev(v_binderType_2721_, v_fvars_2712_);
lean_dec_ref(v_binderType_2721_);
lean_inc_ref(v_post_2708_);
lean_inc_ref(v_pre_2707_);
v___x_2725_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2707_, v_post_2708_, v_usedLetOnly_2709_, v_skipConstInApp_2710_, v_skipInstances_2711_, v___x_2724_, v_a_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2725_) == 0)
{
lean_object* v_a_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___f_2730_; uint8_t v___x_2731_; lean_object* v___x_2732_; 
v_a_2726_ = lean_ctor_get(v___x_2725_, 0);
lean_inc(v_a_2726_);
lean_dec_ref(v___x_2725_);
v___x_2727_ = lean_box(v_usedLetOnly_2709_);
v___x_2728_ = lean_box(v_skipConstInApp_2710_);
v___x_2729_ = lean_box(v_skipInstances_2711_);
v___f_2730_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0___boxed), 14, 7);
lean_closure_set(v___f_2730_, 0, v_fvars_2712_);
lean_closure_set(v___f_2730_, 1, v_pre_2707_);
lean_closure_set(v___f_2730_, 2, v_post_2708_);
lean_closure_set(v___f_2730_, 3, v___x_2727_);
lean_closure_set(v___f_2730_, 4, v___x_2728_);
lean_closure_set(v___f_2730_, 5, v___x_2729_);
lean_closure_set(v___f_2730_, 6, v_body_2722_);
v___x_2731_ = 0;
v___x_2732_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_binderName_2720_, v_binderInfo_2723_, v_a_2726_, v___f_2730_, v___x_2731_, v_a_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
return v___x_2732_;
}
else
{
lean_dec_ref(v_body_2722_);
lean_dec(v_binderName_2720_);
lean_dec_ref(v_fvars_2712_);
lean_dec_ref(v_post_2708_);
lean_dec_ref(v_pre_2707_);
return v___x_2725_;
}
}
else
{
lean_object* v___x_2733_; lean_object* v___x_2734_; 
v___x_2733_ = lean_expr_instantiate_rev(v_e_2713_, v_fvars_2712_);
lean_dec_ref(v_e_2713_);
lean_inc_ref(v_post_2708_);
lean_inc_ref(v_pre_2707_);
v___x_2734_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2707_, v_post_2708_, v_usedLetOnly_2709_, v_skipConstInApp_2710_, v_skipInstances_2711_, v___x_2733_, v_a_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
if (lean_obj_tag(v___x_2734_) == 0)
{
lean_object* v_a_2735_; uint8_t v___x_2736_; uint8_t v___x_2737_; uint8_t v___x_2738_; lean_object* v___x_2739_; 
v_a_2735_ = lean_ctor_get(v___x_2734_, 0);
lean_inc(v_a_2735_);
lean_dec_ref(v___x_2734_);
v___x_2736_ = 0;
v___x_2737_ = 1;
v___x_2738_ = 1;
v___x_2739_ = l_Lean_Meta_mkForallFVars(v_fvars_2712_, v_a_2735_, v___x_2736_, v_usedLetOnly_2709_, v___x_2737_, v___x_2738_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
lean_dec_ref(v_fvars_2712_);
if (lean_obj_tag(v___x_2739_) == 0)
{
lean_object* v_a_2740_; lean_object* v___x_2741_; 
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc(v_a_2740_);
lean_dec_ref(v___x_2739_);
v___x_2741_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2707_, v_post_2708_, v_usedLetOnly_2709_, v_skipConstInApp_2710_, v_skipInstances_2711_, v_a_2740_, v_a_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_);
return v___x_2741_;
}
else
{
lean_dec_ref(v_post_2708_);
lean_dec_ref(v_pre_2707_);
return v___x_2739_;
}
}
else
{
lean_dec_ref(v_fvars_2712_);
lean_dec_ref(v_post_2708_);
lean_dec_ref(v_pre_2707_);
return v___x_2734_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___lam__0(lean_object* v_fvars_2742_, lean_object* v_pre_2743_, lean_object* v_post_2744_, uint8_t v_usedLetOnly_2745_, uint8_t v_skipConstInApp_2746_, uint8_t v_skipInstances_2747_, lean_object* v_body_2748_, lean_object* v_x_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_){
_start:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2756_ = lean_array_push(v_fvars_2742_, v_x_2749_);
v___x_2757_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2743_, v_post_2744_, v_usedLetOnly_2745_, v_skipConstInApp_2746_, v_skipInstances_2747_, v___x_2756_, v_body_2748_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11___boxed(lean_object* v_pre_2758_, lean_object* v_post_2759_, lean_object* v_usedLetOnly_2760_, lean_object* v_skipConstInApp_2761_, lean_object* v_skipInstances_2762_, lean_object* v_e_2763_, lean_object* v_a_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_){
_start:
{
uint8_t v_usedLetOnly_boxed_2770_; uint8_t v_skipConstInApp_boxed_2771_; uint8_t v_skipInstances_boxed_2772_; lean_object* v_res_2773_; 
v_usedLetOnly_boxed_2770_ = lean_unbox(v_usedLetOnly_2760_);
v_skipConstInApp_boxed_2771_ = lean_unbox(v_skipConstInApp_2761_);
v_skipInstances_boxed_2772_ = lean_unbox(v_skipInstances_2762_);
v_res_2773_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__11(v_pre_2758_, v_post_2759_, v_usedLetOnly_boxed_2770_, v_skipConstInApp_boxed_2771_, v_skipInstances_boxed_2772_, v_e_2763_, v_a_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
lean_dec(v___y_2768_);
lean_dec_ref(v___y_2767_);
lean_dec(v___y_2766_);
lean_dec_ref(v___y_2765_);
lean_dec(v_a_2764_);
return v_res_2773_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10___boxed(lean_object* v_pre_2774_, lean_object* v_post_2775_, lean_object* v_usedLetOnly_2776_, lean_object* v_skipConstInApp_2777_, lean_object* v_skipInstances_2778_, lean_object* v_sz_2779_, lean_object* v_i_2780_, lean_object* v_bs_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_){
_start:
{
uint8_t v_usedLetOnly_boxed_2788_; uint8_t v_skipConstInApp_boxed_2789_; uint8_t v_skipInstances_boxed_2790_; size_t v_sz_boxed_2791_; size_t v_i_boxed_2792_; lean_object* v_res_2793_; 
v_usedLetOnly_boxed_2788_ = lean_unbox(v_usedLetOnly_2776_);
v_skipConstInApp_boxed_2789_ = lean_unbox(v_skipConstInApp_2777_);
v_skipInstances_boxed_2790_ = lean_unbox(v_skipInstances_2778_);
v_sz_boxed_2791_ = lean_unbox_usize(v_sz_2779_);
lean_dec(v_sz_2779_);
v_i_boxed_2792_ = lean_unbox_usize(v_i_2780_);
lean_dec(v_i_2780_);
v_res_2793_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__10(v_pre_2774_, v_post_2775_, v_usedLetOnly_boxed_2788_, v_skipConstInApp_boxed_2789_, v_skipInstances_boxed_2790_, v_sz_boxed_2791_, v_i_boxed_2792_, v_bs_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_);
lean_dec(v___y_2786_);
lean_dec_ref(v___y_2785_);
lean_dec(v___y_2784_);
lean_dec_ref(v___y_2783_);
lean_dec(v___y_2782_);
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9___boxed(lean_object* v_pre_2794_, lean_object* v_post_2795_, lean_object* v_usedLetOnly_2796_, lean_object* v_skipConstInApp_2797_, lean_object* v_skipInstances_2798_, lean_object* v_e_2799_, lean_object* v_a_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_, lean_object* v___y_2803_, lean_object* v___y_2804_, lean_object* v___y_2805_){
_start:
{
uint8_t v_usedLetOnly_boxed_2806_; uint8_t v_skipConstInApp_boxed_2807_; uint8_t v_skipInstances_boxed_2808_; lean_object* v_res_2809_; 
v_usedLetOnly_boxed_2806_ = lean_unbox(v_usedLetOnly_2796_);
v_skipConstInApp_boxed_2807_ = lean_unbox(v_skipConstInApp_2797_);
v_skipInstances_boxed_2808_ = lean_unbox(v_skipInstances_2798_);
v_res_2809_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2794_, v_post_2795_, v_usedLetOnly_boxed_2806_, v_skipConstInApp_boxed_2807_, v_skipInstances_boxed_2808_, v_e_2799_, v_a_2800_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
lean_dec(v___y_2804_);
lean_dec_ref(v___y_2803_);
lean_dec(v___y_2802_);
lean_dec_ref(v___y_2801_);
lean_dec(v_a_2800_);
return v_res_2809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14___boxed(lean_object* v_pre_2810_, lean_object* v_post_2811_, lean_object* v_usedLetOnly_2812_, lean_object* v_skipConstInApp_2813_, lean_object* v_skipInstances_2814_, lean_object* v_fvars_2815_, lean_object* v_e_2816_, lean_object* v_a_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_){
_start:
{
uint8_t v_usedLetOnly_boxed_2823_; uint8_t v_skipConstInApp_boxed_2824_; uint8_t v_skipInstances_boxed_2825_; lean_object* v_res_2826_; 
v_usedLetOnly_boxed_2823_ = lean_unbox(v_usedLetOnly_2812_);
v_skipConstInApp_boxed_2824_ = lean_unbox(v_skipConstInApp_2813_);
v_skipInstances_boxed_2825_ = lean_unbox(v_skipInstances_2814_);
v_res_2826_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14(v_pre_2810_, v_post_2811_, v_usedLetOnly_boxed_2823_, v_skipConstInApp_boxed_2824_, v_skipInstances_boxed_2825_, v_fvars_2815_, v_e_2816_, v_a_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_);
lean_dec(v___y_2821_);
lean_dec_ref(v___y_2820_);
lean_dec(v___y_2819_);
lean_dec_ref(v___y_2818_);
lean_dec(v_a_2817_);
return v_res_2826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15___boxed(lean_object* v_pre_2827_, lean_object* v_post_2828_, lean_object* v_usedLetOnly_2829_, lean_object* v_skipConstInApp_2830_, lean_object* v_skipInstances_2831_, lean_object* v_fvars_2832_, lean_object* v_e_2833_, lean_object* v_a_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_){
_start:
{
uint8_t v_usedLetOnly_boxed_2840_; uint8_t v_skipConstInApp_boxed_2841_; uint8_t v_skipInstances_boxed_2842_; lean_object* v_res_2843_; 
v_usedLetOnly_boxed_2840_ = lean_unbox(v_usedLetOnly_2829_);
v_skipConstInApp_boxed_2841_ = lean_unbox(v_skipConstInApp_2830_);
v_skipInstances_boxed_2842_ = lean_unbox(v_skipInstances_2831_);
v_res_2843_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLambda___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__15(v_pre_2827_, v_post_2828_, v_usedLetOnly_boxed_2840_, v_skipConstInApp_boxed_2841_, v_skipInstances_boxed_2842_, v_fvars_2832_, v_e_2833_, v_a_2834_, v___y_2835_, v___y_2836_, v___y_2837_, v___y_2838_);
lean_dec(v___y_2838_);
lean_dec_ref(v___y_2837_);
lean_dec(v___y_2836_);
lean_dec_ref(v___y_2835_);
lean_dec(v_a_2834_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16___boxed(lean_object* v_pre_2844_, lean_object* v_post_2845_, lean_object* v_usedLetOnly_2846_, lean_object* v_skipConstInApp_2847_, lean_object* v_skipInstances_2848_, lean_object* v_fvars_2849_, lean_object* v_e_2850_, lean_object* v_a_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
uint8_t v_usedLetOnly_boxed_2857_; uint8_t v_skipConstInApp_boxed_2858_; uint8_t v_skipInstances_boxed_2859_; lean_object* v_res_2860_; 
v_usedLetOnly_boxed_2857_ = lean_unbox(v_usedLetOnly_2846_);
v_skipConstInApp_boxed_2858_ = lean_unbox(v_skipConstInApp_2847_);
v_skipInstances_boxed_2859_ = lean_unbox(v_skipInstances_2848_);
v_res_2860_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16(v_pre_2844_, v_post_2845_, v_usedLetOnly_boxed_2857_, v_skipConstInApp_boxed_2858_, v_skipInstances_boxed_2859_, v_fvars_2849_, v_e_2850_, v_a_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec(v_a_2851_);
return v_res_2860_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg___boxed(lean_object* v_upperBound_2861_, lean_object* v___x_2862_, lean_object* v_pre_2863_, lean_object* v_post_2864_, lean_object* v_usedLetOnly_2865_, lean_object* v_skipConstInApp_2866_, lean_object* v_skipInstances_2867_, lean_object* v_a_2868_, lean_object* v_b_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_){
_start:
{
uint8_t v_usedLetOnly_boxed_2876_; uint8_t v_skipConstInApp_boxed_2877_; uint8_t v_skipInstances_boxed_2878_; lean_object* v_res_2879_; 
v_usedLetOnly_boxed_2876_ = lean_unbox(v_usedLetOnly_2865_);
v_skipConstInApp_boxed_2877_ = lean_unbox(v_skipConstInApp_2866_);
v_skipInstances_boxed_2878_ = lean_unbox(v_skipInstances_2867_);
v_res_2879_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v_upperBound_2861_, v___x_2862_, v_pre_2863_, v_post_2864_, v_usedLetOnly_boxed_2876_, v_skipConstInApp_boxed_2877_, v_skipInstances_boxed_2878_, v_a_2868_, v_b_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_);
lean_dec(v___y_2874_);
lean_dec_ref(v___y_2873_);
lean_dec(v___y_2872_);
lean_dec_ref(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec_ref(v___x_2862_);
lean_dec(v_upperBound_2861_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17___boxed(lean_object* v_skipInstances_2880_, lean_object* v_pre_2881_, lean_object* v_post_2882_, lean_object* v_usedLetOnly_2883_, lean_object* v_skipConstInApp_2884_, lean_object* v_x_2885_, lean_object* v_x_2886_, lean_object* v_x_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_){
_start:
{
uint8_t v_skipInstances_boxed_2894_; uint8_t v_usedLetOnly_boxed_2895_; uint8_t v_skipConstInApp_boxed_2896_; lean_object* v_res_2897_; 
v_skipInstances_boxed_2894_ = lean_unbox(v_skipInstances_2880_);
v_usedLetOnly_boxed_2895_ = lean_unbox(v_usedLetOnly_2883_);
v_skipConstInApp_boxed_2896_ = lean_unbox(v_skipConstInApp_2884_);
v_res_2897_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__17(v_skipInstances_boxed_2894_, v_pre_2881_, v_post_2882_, v_usedLetOnly_boxed_2895_, v_skipConstInApp_boxed_2896_, v_x_2885_, v_x_2886_, v_x_2887_, v___y_2888_, v___y_2889_, v___y_2890_, v___y_2891_, v___y_2892_);
lean_dec(v___y_2892_);
lean_dec_ref(v___y_2891_);
lean_dec(v___y_2890_);
lean_dec_ref(v___y_2889_);
lean_dec(v___y_2888_);
return v_res_2897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_object* v_00_u03b1_2898_, lean_object* v_x_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_){
_start:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; 
v___x_2905_ = lean_st_ref_get(v___y_2903_);
lean_dec(v___x_2905_);
v___x_2906_ = lean_apply_1(v_x_2899_, lean_box(0));
v___x_2907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2907_, 0, v___x_2906_);
return v___x_2907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0___boxed(lean_object* v_00_u03b1_2908_, lean_object* v_x_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_){
_start:
{
lean_object* v_res_2915_; 
v_res_2915_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(v_00_u03b1_2908_, v_x_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_);
lean_dec(v___y_2913_);
lean_dec_ref(v___y_2912_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
return v_res_2915_;
}
}
static lean_object* _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0(void){
_start:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; 
v___x_2916_ = lean_obj_once(&l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2, &l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2_once, _init_l_Lean_exprDependsOn___at___00Lean_Elab_getParamRevDeps_spec__0___redArg___closed__2);
v___x_2917_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_2917_, 0, lean_box(0));
lean_closure_set(v___x_2917_, 1, lean_box(0));
lean_closure_set(v___x_2917_, 2, v___x_2916_);
return v___x_2917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(lean_object* v_input_2918_, lean_object* v_pre_2919_, lean_object* v_post_2920_, uint8_t v_usedLetOnly_2921_, uint8_t v_skipConstInApp_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_){
_start:
{
lean_object* v___x_2928_; lean_object* v___x_2929_; lean_object* v_a_2930_; uint8_t v___x_2931_; lean_object* v___x_2932_; 
v___x_2928_ = lean_obj_once(&l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0, &l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0_once, _init_l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___closed__0);
v___x_2929_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2928_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
v_a_2930_ = lean_ctor_get(v___x_2929_, 0);
lean_inc(v_a_2930_);
lean_dec_ref(v___x_2929_);
v___x_2931_ = 0;
v___x_2932_ = l___private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9(v_pre_2919_, v_post_2920_, v_usedLetOnly_2921_, v_skipConstInApp_2922_, v___x_2931_, v_input_2918_, v_a_2930_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
if (lean_obj_tag(v___x_2932_) == 0)
{
lean_object* v_a_2933_; lean_object* v___x_2934_; lean_object* v___x_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2942_; 
v_a_2933_ = lean_ctor_get(v___x_2932_, 0);
lean_inc(v_a_2933_);
lean_dec_ref(v___x_2932_);
v___x_2934_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_2934_, 0, lean_box(0));
lean_closure_set(v___x_2934_, 1, lean_box(0));
lean_closure_set(v___x_2934_, 2, v_a_2930_);
v___x_2935_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___lam__0(lean_box(0), v___x_2934_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
v_isSharedCheck_2942_ = !lean_is_exclusive(v___x_2935_);
if (v_isSharedCheck_2942_ == 0)
{
lean_object* v_unused_2943_; 
v_unused_2943_ = lean_ctor_get(v___x_2935_, 0);
lean_dec(v_unused_2943_);
v___x_2937_ = v___x_2935_;
v_isShared_2938_ = v_isSharedCheck_2942_;
goto v_resetjp_2936_;
}
else
{
lean_dec(v___x_2935_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2942_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2940_; 
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 0, v_a_2933_);
v___x_2940_ = v___x_2937_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2941_; 
v_reuseFailAlloc_2941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2941_, 0, v_a_2933_);
v___x_2940_ = v_reuseFailAlloc_2941_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
return v___x_2940_;
}
}
}
else
{
lean_dec(v_a_2930_);
return v___x_2932_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8___boxed(lean_object* v_input_2944_, lean_object* v_pre_2945_, lean_object* v_post_2946_, lean_object* v_usedLetOnly_2947_, lean_object* v_skipConstInApp_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_){
_start:
{
uint8_t v_usedLetOnly_boxed_2954_; uint8_t v_skipConstInApp_boxed_2955_; lean_object* v_res_2956_; 
v_usedLetOnly_boxed_2954_ = lean_unbox(v_usedLetOnly_2947_);
v_skipConstInApp_boxed_2955_ = lean_unbox(v_skipConstInApp_2948_);
v_res_2956_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_input_2944_, v_pre_2945_, v_post_2946_, v_usedLetOnly_boxed_2954_, v_skipConstInApp_boxed_2955_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
lean_dec(v___y_2950_);
lean_dec_ref(v___y_2949_);
return v_res_2956_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0(void){
_start:
{
lean_object* v___x_2957_; 
v___x_2957_ = lean_mk_string_unchecked("Lean.Elab.PreDefinition.FixedParams", 35, 35);
return v___x_2957_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1(void){
_start:
{
lean_object* v___x_2958_; 
v___x_2958_ = lean_mk_string_unchecked("Lean.Elab.getFixedParamsInfo", 28, 28);
return v___x_2958_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2(void){
_start:
{
lean_object* v___x_2959_; 
v___x_2959_ = lean_mk_string_unchecked("assertion violation: params.size = arities[callerIdx]!\n\n      -- TODO: transform is overkill, a simple visit-all-subexpression that takes applications\n      -- as whole suffices\n      ", 184, 184);
return v___x_2959_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3(void){
_start:
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
v___x_2960_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__2);
v___x_2961_ = lean_unsigned_to_nat(6u);
v___x_2962_ = lean_unsigned_to_nat(201u);
v___x_2963_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__1);
v___x_2964_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_2965_ = l_mkPanicMessageWithDecl(v___x_2964_, v___x_2963_, v___x_2962_, v___x_2961_, v___x_2960_);
return v___x_2965_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(lean_object* v___x_2966_, lean_object* v___x_2967_, lean_object* v_a_2968_, lean_object* v_preDefs_2969_, lean_object* v_val_2970_, lean_object* v___f_2971_, lean_object* v___x_2972_, lean_object* v_params_2973_, lean_object* v_body_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_){
_start:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; uint8_t v___x_2982_; 
v___x_2980_ = lean_array_get_size(v_params_2973_);
v___x_2981_ = lean_array_get_borrowed(v___x_2966_, v___x_2967_, v_a_2968_);
v___x_2982_ = lean_nat_dec_eq(v___x_2980_, v___x_2981_);
if (v___x_2982_ == 0)
{
lean_object* v___x_2983_; lean_object* v___x_2984_; 
lean_dec_ref(v_body_2974_);
lean_dec_ref(v_params_2973_);
lean_dec_ref(v___f_2971_);
lean_dec(v_val_2970_);
lean_dec_ref(v_preDefs_2969_);
lean_dec(v_a_2968_);
lean_dec_ref(v___x_2967_);
v___x_2983_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__3);
v___x_2984_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_2983_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_);
return v___x_2984_;
}
else
{
lean_object* v___f_2985_; uint8_t v___x_2986_; lean_object* v___x_2987_; 
v___f_2985_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__1___boxed), 12, 6);
lean_closure_set(v___f_2985_, 0, v_preDefs_2969_);
lean_closure_set(v___f_2985_, 1, v___x_2967_);
lean_closure_set(v___f_2985_, 2, v_val_2970_);
lean_closure_set(v___f_2985_, 3, v_a_2968_);
lean_closure_set(v___f_2985_, 4, v_params_2973_);
lean_closure_set(v___f_2985_, 5, v___x_2980_);
v___x_2986_ = 0;
v___x_2987_ = l_Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8(v_body_2974_, v___f_2985_, v___f_2971_, v___x_2986_, v___x_2982_, v___y_2975_, v___y_2976_, v___y_2977_, v___y_2978_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v___x_2989_; uint8_t v_isShared_2990_; uint8_t v_isSharedCheck_2994_; 
v_isSharedCheck_2994_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_2994_ == 0)
{
lean_object* v_unused_2995_; 
v_unused_2995_ = lean_ctor_get(v___x_2987_, 0);
lean_dec(v_unused_2995_);
v___x_2989_ = v___x_2987_;
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
else
{
lean_dec(v___x_2987_);
v___x_2989_ = lean_box(0);
v_isShared_2990_ = v_isSharedCheck_2994_;
goto v_resetjp_2988_;
}
v_resetjp_2988_:
{
lean_object* v___x_2992_; 
if (v_isShared_2990_ == 0)
{
lean_ctor_set(v___x_2989_, 0, v___x_2972_);
v___x_2992_ = v___x_2989_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v___x_2972_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
return v___x_2992_;
}
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
v_a_2996_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2987_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2987_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
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
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed(lean_object* v___x_3004_, lean_object* v___x_3005_, lean_object* v_a_3006_, lean_object* v_preDefs_3007_, lean_object* v_val_3008_, lean_object* v___f_3009_, lean_object* v___x_3010_, lean_object* v_params_3011_, lean_object* v_body_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_){
_start:
{
lean_object* v_res_3018_; 
v_res_3018_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2(v___x_3004_, v___x_3005_, v_a_3006_, v_preDefs_3007_, v_val_3008_, v___f_3009_, v___x_3010_, v_params_3011_, v_body_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_);
lean_dec(v___y_3016_);
lean_dec_ref(v___y_3015_);
lean_dec(v___y_3014_);
lean_dec_ref(v___y_3013_);
lean_dec(v___x_3004_);
return v_res_3018_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(lean_object* v_e_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_){
_start:
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3025_, 0, v_e_3019_);
v___x_3026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3026_, 0, v___x_3025_);
return v___x_3026_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed(lean_object* v_e_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_){
_start:
{
lean_object* v_res_3033_; 
v_res_3033_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0(v_e_3027_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_);
lean_dec(v___y_3031_);
lean_dec_ref(v___y_3030_);
lean_dec(v___y_3029_);
lean_dec_ref(v___y_3028_);
return v_res_3033_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0(void){
_start:
{
lean_object* v___f_3034_; 
v___f_3034_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__0___boxed), 6, 0);
return v___f_3034_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(lean_object* v_preDefs_3035_, lean_object* v___x_3036_, lean_object* v_val_3037_, lean_object* v_upperBound_3038_, lean_object* v_a_3039_, lean_object* v_b_3040_, lean_object* v___y_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_){
_start:
{
uint8_t v___x_3046_; 
v___x_3046_ = lean_nat_dec_lt(v_a_3039_, v_upperBound_3038_);
if (v___x_3046_ == 0)
{
lean_object* v___x_3047_; 
lean_dec(v_a_3039_);
lean_dec(v_val_3037_);
lean_dec_ref(v___x_3036_);
lean_dec_ref(v_preDefs_3035_);
v___x_3047_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3047_, 0, v_b_3040_);
return v___x_3047_;
}
else
{
lean_object* v___x_3048_; lean_object* v_value_3049_; lean_object* v___f_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___f_3053_; uint8_t v___x_3054_; lean_object* v___x_3055_; 
v___x_3048_ = lean_array_fget_borrowed(v_preDefs_3035_, v_a_3039_);
v_value_3049_ = lean_ctor_get(v___x_3048_, 7);
v___f_3050_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___closed__0);
v___x_3051_ = lean_unsigned_to_nat(0u);
v___x_3052_ = lean_box(0);
lean_inc(v_val_3037_);
lean_inc_ref(v_preDefs_3035_);
lean_inc(v_a_3039_);
lean_inc_ref(v___x_3036_);
v___f_3053_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___boxed), 14, 7);
lean_closure_set(v___f_3053_, 0, v___x_3051_);
lean_closure_set(v___f_3053_, 1, v___x_3036_);
lean_closure_set(v___f_3053_, 2, v_a_3039_);
lean_closure_set(v___f_3053_, 3, v_preDefs_3035_);
lean_closure_set(v___f_3053_, 4, v_val_3037_);
lean_closure_set(v___f_3053_, 5, v___f_3050_);
lean_closure_set(v___f_3053_, 6, v___x_3052_);
v___x_3054_ = 0;
lean_inc_ref(v_value_3049_);
v___x_3055_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_3049_, v___f_3053_, v___x_3054_, v___y_3041_, v___y_3042_, v___y_3043_, v___y_3044_);
if (lean_obj_tag(v___x_3055_) == 0)
{
lean_object* v___x_3056_; lean_object* v___x_3057_; 
lean_dec_ref(v___x_3055_);
v___x_3056_ = lean_unsigned_to_nat(1u);
v___x_3057_ = lean_nat_add(v_a_3039_, v___x_3056_);
lean_dec(v_a_3039_);
v_a_3039_ = v___x_3057_;
v_b_3040_ = v___x_3052_;
goto _start;
}
else
{
lean_dec(v_a_3039_);
lean_dec(v_val_3037_);
lean_dec_ref(v___x_3036_);
lean_dec_ref(v_preDefs_3035_);
return v___x_3055_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___boxed(lean_object* v_preDefs_3059_, lean_object* v___x_3060_, lean_object* v_val_3061_, lean_object* v_upperBound_3062_, lean_object* v_a_3063_, lean_object* v_b_3064_, lean_object* v___y_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_){
_start:
{
lean_object* v_res_3070_; 
v_res_3070_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v_preDefs_3059_, v___x_3060_, v_val_3061_, v_upperBound_3062_, v_a_3063_, v_b_3064_, v___y_3065_, v___y_3066_, v___y_3067_, v___y_3068_);
lean_dec(v___y_3068_);
lean_dec_ref(v___y_3067_);
lean_dec(v___y_3066_);
lean_dec_ref(v___y_3065_);
lean_dec(v_upperBound_3062_);
return v_res_3070_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamsInfo___closed__0(void){
_start:
{
lean_object* v___x_3071_; 
v___x_3071_ = lean_mk_string_unchecked("getFixedParams:", 15, 15);
return v___x_3071_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamsInfo___closed__1(void){
_start:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3072_ = lean_obj_once(&l_Lean_Elab_getFixedParamsInfo___closed__0, &l_Lean_Elab_getFixedParamsInfo___closed__0_once, _init_l_Lean_Elab_getFixedParamsInfo___closed__0);
v___x_3073_ = l_Lean_stringToMessageData(v___x_3072_);
return v___x_3073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo(lean_object* v_preDefs_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_){
_start:
{
size_t v_sz_3080_; size_t v___x_3081_; lean_object* v___x_3082_; 
v_sz_3080_ = lean_array_size(v_preDefs_3074_);
v___x_3081_ = ((size_t)0ULL);
lean_inc_ref(v_preDefs_3074_);
v___x_3082_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__0(v_sz_3080_, v___x_3081_, v_preDefs_3074_, v_a_3075_, v_a_3076_, v_a_3077_, v_a_3078_);
if (lean_obj_tag(v___x_3082_) == 0)
{
lean_object* v_a_3083_; lean_object* v___x_3084_; size_t v_sz_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; 
v_a_3083_ = lean_ctor_get(v___x_3082_, 0);
lean_inc_n(v_a_3083_, 2);
lean_dec_ref(v___x_3082_);
v___x_3084_ = lean_st_ref_get(v_a_3078_);
lean_dec(v___x_3084_);
v_sz_3085_ = lean_array_size(v_a_3083_);
v___x_3086_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_getFixedParamsInfo_spec__1(v_sz_3085_, v___x_3081_, v_a_3083_);
v___x_3087_ = l_Lean_Elab_FixedParams_Info_init(v_a_3083_);
v___x_3088_ = lean_st_mk_ref(v___x_3087_);
v___x_3089_ = lean_st_ref_get(v_a_3078_);
lean_dec(v___x_3089_);
v___x_3090_ = lean_st_ref_take(v___x_3088_);
v___x_3091_ = l_Lean_Elab_FixedParams_Info_addSelfCalls(v___x_3090_);
v___x_3092_ = lean_st_ref_set(v___x_3088_, v___x_3091_);
v___x_3093_ = lean_array_get_size(v_preDefs_3074_);
v___x_3094_ = lean_unsigned_to_nat(0u);
v___x_3095_ = lean_box(0);
lean_inc(v___x_3088_);
v___x_3096_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v_preDefs_3074_, v___x_3086_, v___x_3088_, v___x_3093_, v___x_3094_, v___x_3095_, v_a_3075_, v_a_3076_, v_a_3077_, v_a_3078_);
if (lean_obj_tag(v___x_3096_) == 0)
{
lean_object* v___x_3098_; uint8_t v_isShared_3099_; uint8_t v_isSharedCheck_3136_; 
v_isSharedCheck_3136_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3136_ == 0)
{
lean_object* v_unused_3137_; 
v_unused_3137_ = lean_ctor_get(v___x_3096_, 0);
lean_dec(v_unused_3137_);
v___x_3098_ = v___x_3096_;
v_isShared_3099_ = v_isSharedCheck_3136_;
goto v_resetjp_3097_;
}
else
{
lean_dec(v___x_3096_);
v___x_3098_ = lean_box(0);
v_isShared_3099_ = v_isSharedCheck_3136_;
goto v_resetjp_3097_;
}
v_resetjp_3097_:
{
lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v_options_3102_; uint8_t v_hasTrace_3103_; 
v___x_3100_ = lean_st_ref_get(v_a_3078_);
lean_dec(v___x_3100_);
v___x_3101_ = lean_st_ref_get(v___x_3088_);
lean_dec(v___x_3088_);
v_options_3102_ = lean_ctor_get(v_a_3077_, 2);
v_hasTrace_3103_ = lean_ctor_get_uint8(v_options_3102_, sizeof(void*)*1);
if (v_hasTrace_3103_ == 0)
{
lean_object* v___x_3105_; 
if (v_isShared_3099_ == 0)
{
lean_ctor_set(v___x_3098_, 0, v___x_3101_);
v___x_3105_ = v___x_3098_;
goto v_reusejp_3104_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v___x_3101_);
v___x_3105_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3104_;
}
v_reusejp_3104_:
{
return v___x_3105_;
}
}
else
{
lean_object* v_inheritedTraceOptions_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; uint8_t v___x_3110_; 
v_inheritedTraceOptions_3107_ = lean_ctor_get(v_a_3077_, 13);
v___x_3108_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3);
v___x_3109_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__6);
v___x_3110_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3107_, v_options_3102_, v___x_3109_);
if (v___x_3110_ == 0)
{
lean_object* v___x_3112_; 
if (v_isShared_3099_ == 0)
{
lean_ctor_set(v___x_3098_, 0, v___x_3101_);
v___x_3112_ = v___x_3098_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v___x_3101_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
else
{
lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; 
lean_del_object(v___x_3098_);
v___x_3114_ = lean_obj_once(&l_Lean_Elab_getFixedParamsInfo___closed__1, &l_Lean_Elab_getFixedParamsInfo___closed__1_once, _init_l_Lean_Elab_getFixedParamsInfo___closed__1);
lean_inc(v___x_3101_);
v___x_3115_ = l_Lean_Elab_FixedParams_Info_format(v___x_3101_);
v___x_3116_ = l_Std_Format_indentD(v___x_3115_);
v___x_3117_ = l_Lean_MessageData_ofFormat(v___x_3116_);
v___x_3118_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3114_);
lean_ctor_set(v___x_3118_, 1, v___x_3117_);
v___x_3119_ = l_Lean_addTrace___at___00Lean_Elab_getFixedParamsInfo_spec__2(v___x_3108_, v___x_3118_, v_a_3075_, v_a_3076_, v_a_3077_, v_a_3078_);
if (lean_obj_tag(v___x_3119_) == 0)
{
lean_object* v___x_3121_; uint8_t v_isShared_3122_; uint8_t v_isSharedCheck_3126_; 
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3126_ == 0)
{
lean_object* v_unused_3127_; 
v_unused_3127_ = lean_ctor_get(v___x_3119_, 0);
lean_dec(v_unused_3127_);
v___x_3121_ = v___x_3119_;
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
else
{
lean_dec(v___x_3119_);
v___x_3121_ = lean_box(0);
v_isShared_3122_ = v_isSharedCheck_3126_;
goto v_resetjp_3120_;
}
v_resetjp_3120_:
{
lean_object* v___x_3124_; 
if (v_isShared_3122_ == 0)
{
lean_ctor_set(v___x_3121_, 0, v___x_3101_);
v___x_3124_ = v___x_3121_;
goto v_reusejp_3123_;
}
else
{
lean_object* v_reuseFailAlloc_3125_; 
v_reuseFailAlloc_3125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3125_, 0, v___x_3101_);
v___x_3124_ = v_reuseFailAlloc_3125_;
goto v_reusejp_3123_;
}
v_reusejp_3123_:
{
return v___x_3124_;
}
}
}
else
{
lean_object* v_a_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3135_; 
lean_dec(v___x_3101_);
v_a_3128_ = lean_ctor_get(v___x_3119_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3119_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3130_ = v___x_3119_;
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_a_3128_);
lean_dec(v___x_3119_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3135_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3133_; 
if (v_isShared_3131_ == 0)
{
v___x_3133_ = v___x_3130_;
goto v_reusejp_3132_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_a_3128_);
v___x_3133_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3132_;
}
v_reusejp_3132_:
{
return v___x_3133_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3138_; lean_object* v___x_3140_; uint8_t v_isShared_3141_; uint8_t v_isSharedCheck_3145_; 
lean_dec(v___x_3088_);
v_a_3138_ = lean_ctor_get(v___x_3096_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v___x_3096_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3140_ = v___x_3096_;
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
else
{
lean_inc(v_a_3138_);
lean_dec(v___x_3096_);
v___x_3140_ = lean_box(0);
v_isShared_3141_ = v_isSharedCheck_3145_;
goto v_resetjp_3139_;
}
v_resetjp_3139_:
{
lean_object* v___x_3143_; 
if (v_isShared_3141_ == 0)
{
v___x_3143_ = v___x_3140_;
goto v_reusejp_3142_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v_a_3138_);
v___x_3143_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3142_;
}
v_reusejp_3142_:
{
return v___x_3143_;
}
}
}
}
else
{
lean_object* v_a_3146_; lean_object* v___x_3148_; uint8_t v_isShared_3149_; uint8_t v_isSharedCheck_3153_; 
lean_dec_ref(v_preDefs_3074_);
v_a_3146_ = lean_ctor_get(v___x_3082_, 0);
v_isSharedCheck_3153_ = !lean_is_exclusive(v___x_3082_);
if (v_isSharedCheck_3153_ == 0)
{
v___x_3148_ = v___x_3082_;
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
else
{
lean_inc(v_a_3146_);
lean_dec(v___x_3082_);
v___x_3148_ = lean_box(0);
v_isShared_3149_ = v_isSharedCheck_3153_;
goto v_resetjp_3147_;
}
v_resetjp_3147_:
{
lean_object* v___x_3151_; 
if (v_isShared_3149_ == 0)
{
v___x_3151_ = v___x_3148_;
goto v_reusejp_3150_;
}
else
{
lean_object* v_reuseFailAlloc_3152_; 
v_reuseFailAlloc_3152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3152_, 0, v_a_3146_);
v___x_3151_ = v_reuseFailAlloc_3152_;
goto v_reusejp_3150_;
}
v_reusejp_3150_:
{
return v___x_3151_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamsInfo___boxed(lean_object* v_preDefs_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_, lean_object* v_a_3159_){
_start:
{
lean_object* v_res_3160_; 
v_res_3160_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_3154_, v_a_3155_, v_a_3156_, v_a_3157_, v_a_3158_);
lean_dec(v_a_3158_);
lean_dec_ref(v_a_3157_);
lean_dec(v_a_3156_);
lean_dec_ref(v_a_3155_);
return v_res_3160_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(lean_object* v_upperBound_3161_, lean_object* v_val_3162_, lean_object* v_next_3163_, lean_object* v_params_3164_, lean_object* v___x_3165_, lean_object* v_val_3166_, lean_object* v_next_3167_, uint8_t v___x_3168_, lean_object* v_inst_3169_, lean_object* v_R_3170_, lean_object* v_a_3171_, uint8_t v_b_3172_, lean_object* v_c_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_){
_start:
{
lean_object* v___x_3179_; 
v___x_3179_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___redArg(v_upperBound_3161_, v_val_3162_, v_next_3163_, v_params_3164_, v___x_3165_, v_val_3166_, v_next_3167_, v___x_3168_, v_a_3171_, v_b_3172_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_3180_ = _args[0];
lean_object* v_val_3181_ = _args[1];
lean_object* v_next_3182_ = _args[2];
lean_object* v_params_3183_ = _args[3];
lean_object* v___x_3184_ = _args[4];
lean_object* v_val_3185_ = _args[5];
lean_object* v_next_3186_ = _args[6];
lean_object* v___x_3187_ = _args[7];
lean_object* v_inst_3188_ = _args[8];
lean_object* v_R_3189_ = _args[9];
lean_object* v_a_3190_ = _args[10];
lean_object* v_b_3191_ = _args[11];
lean_object* v_c_3192_ = _args[12];
lean_object* v___y_3193_ = _args[13];
lean_object* v___y_3194_ = _args[14];
lean_object* v___y_3195_ = _args[15];
lean_object* v___y_3196_ = _args[16];
lean_object* v___y_3197_ = _args[17];
_start:
{
uint8_t v___x_47410__boxed_3198_; uint8_t v_b_boxed_3199_; lean_object* v_res_3200_; 
v___x_47410__boxed_3198_ = lean_unbox(v___x_3187_);
v_b_boxed_3199_ = lean_unbox(v_b_3191_);
v_res_3200_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__4(v_upperBound_3180_, v_val_3181_, v_next_3182_, v_params_3183_, v___x_3184_, v_val_3185_, v_next_3186_, v___x_47410__boxed_3198_, v_inst_3188_, v_R_3189_, v_a_3190_, v_b_boxed_3199_, v_c_3192_, v___y_3193_, v___y_3194_, v___y_3195_, v___y_3196_);
lean_dec(v___y_3196_);
lean_dec_ref(v___y_3195_);
lean_dec(v___y_3194_);
lean_dec_ref(v___y_3193_);
lean_dec(v_val_3185_);
lean_dec_ref(v_params_3183_);
lean_dec(v_next_3182_);
lean_dec(v_val_3181_);
lean_dec(v_upperBound_3180_);
return v_res_3200_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(lean_object* v_val_3201_, lean_object* v_val_3202_, lean_object* v_upperBound_3203_, lean_object* v_args_3204_, lean_object* v_e_3205_, lean_object* v_next_3206_, lean_object* v_params_3207_, lean_object* v___x_3208_, uint8_t v___x_3209_, lean_object* v_inst_3210_, lean_object* v_R_3211_, lean_object* v_a_3212_, lean_object* v_b_3213_, lean_object* v_c_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v___x_3220_; 
v___x_3220_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg(v_val_3201_, v_val_3202_, v_upperBound_3203_, v_args_3204_, v_e_3205_, v_next_3206_, v_params_3207_, v___x_3208_, v___x_3209_, v_a_3212_, v_b_3213_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
return v___x_3220_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___boxed(lean_object** _args){
lean_object* v_val_3221_ = _args[0];
lean_object* v_val_3222_ = _args[1];
lean_object* v_upperBound_3223_ = _args[2];
lean_object* v_args_3224_ = _args[3];
lean_object* v_e_3225_ = _args[4];
lean_object* v_next_3226_ = _args[5];
lean_object* v_params_3227_ = _args[6];
lean_object* v___x_3228_ = _args[7];
lean_object* v___x_3229_ = _args[8];
lean_object* v_inst_3230_ = _args[9];
lean_object* v_R_3231_ = _args[10];
lean_object* v_a_3232_ = _args[11];
lean_object* v_b_3233_ = _args[12];
lean_object* v_c_3234_ = _args[13];
lean_object* v___y_3235_ = _args[14];
lean_object* v___y_3236_ = _args[15];
lean_object* v___y_3237_ = _args[16];
lean_object* v___y_3238_ = _args[17];
lean_object* v___y_3239_ = _args[18];
_start:
{
uint8_t v___x_47445__boxed_3240_; lean_object* v_res_3241_; 
v___x_47445__boxed_3240_ = lean_unbox(v___x_3229_);
v_res_3241_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5(v_val_3221_, v_val_3222_, v_upperBound_3223_, v_args_3224_, v_e_3225_, v_next_3226_, v_params_3227_, v___x_3228_, v___x_47445__boxed_3240_, v_inst_3230_, v_R_3231_, v_a_3232_, v_b_3233_, v_c_3234_, v___y_3235_, v___y_3236_, v___y_3237_, v___y_3238_);
lean_dec(v___y_3238_);
lean_dec_ref(v___y_3237_);
lean_dec(v___y_3236_);
lean_dec_ref(v___y_3235_);
lean_dec(v___x_3228_);
lean_dec_ref(v_params_3227_);
lean_dec(v_next_3226_);
lean_dec_ref(v_args_3224_);
lean_dec(v_upperBound_3223_);
lean_dec(v_val_3221_);
return v_res_3241_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(lean_object* v_preDefs_3242_, lean_object* v___x_3243_, lean_object* v_val_3244_, lean_object* v_upperBound_3245_, lean_object* v_inst_3246_, lean_object* v_R_3247_, lean_object* v_a_3248_, lean_object* v_b_3249_, lean_object* v_c_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_, lean_object* v___y_3254_){
_start:
{
lean_object* v___x_3256_; 
v___x_3256_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg(v_preDefs_3242_, v___x_3243_, v_val_3244_, v_upperBound_3245_, v_a_3248_, v_b_3249_, v___y_3251_, v___y_3252_, v___y_3253_, v___y_3254_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___boxed(lean_object* v_preDefs_3257_, lean_object* v___x_3258_, lean_object* v_val_3259_, lean_object* v_upperBound_3260_, lean_object* v_inst_3261_, lean_object* v_R_3262_, lean_object* v_a_3263_, lean_object* v_b_3264_, lean_object* v_c_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_, lean_object* v___y_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9(v_preDefs_3257_, v___x_3258_, v_val_3259_, v_upperBound_3260_, v_inst_3261_, v_R_3262_, v_a_3263_, v_b_3264_, v_c_3265_, v___y_3266_, v___y_3267_, v___y_3268_, v___y_3269_);
lean_dec(v___y_3269_);
lean_dec_ref(v___y_3268_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec(v_upperBound_3260_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(lean_object* v_upperBound_3272_, lean_object* v___x_3273_, lean_object* v_pre_3274_, lean_object* v_post_3275_, uint8_t v_usedLetOnly_3276_, uint8_t v_skipConstInApp_3277_, uint8_t v_skipInstances_3278_, lean_object* v___x_3279_, lean_object* v_inst_3280_, lean_object* v_R_3281_, lean_object* v_a_3282_, lean_object* v_b_3283_, lean_object* v_c_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_){
_start:
{
lean_object* v___x_3291_; 
v___x_3291_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___redArg(v_upperBound_3272_, v___x_3273_, v_pre_3274_, v_post_3275_, v_usedLetOnly_3276_, v_skipConstInApp_3277_, v_skipInstances_3278_, v_a_3282_, v_b_3283_, v___y_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
return v___x_3291_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12___boxed(lean_object** _args){
lean_object* v_upperBound_3292_ = _args[0];
lean_object* v___x_3293_ = _args[1];
lean_object* v_pre_3294_ = _args[2];
lean_object* v_post_3295_ = _args[3];
lean_object* v_usedLetOnly_3296_ = _args[4];
lean_object* v_skipConstInApp_3297_ = _args[5];
lean_object* v_skipInstances_3298_ = _args[6];
lean_object* v___x_3299_ = _args[7];
lean_object* v_inst_3300_ = _args[8];
lean_object* v_R_3301_ = _args[9];
lean_object* v_a_3302_ = _args[10];
lean_object* v_b_3303_ = _args[11];
lean_object* v_c_3304_ = _args[12];
lean_object* v___y_3305_ = _args[13];
lean_object* v___y_3306_ = _args[14];
lean_object* v___y_3307_ = _args[15];
lean_object* v___y_3308_ = _args[16];
lean_object* v___y_3309_ = _args[17];
lean_object* v___y_3310_ = _args[18];
_start:
{
uint8_t v_usedLetOnly_boxed_3311_; uint8_t v_skipConstInApp_boxed_3312_; uint8_t v_skipInstances_boxed_3313_; lean_object* v_res_3314_; 
v_usedLetOnly_boxed_3311_ = lean_unbox(v_usedLetOnly_3296_);
v_skipConstInApp_boxed_3312_ = lean_unbox(v_skipConstInApp_3297_);
v_skipInstances_boxed_3313_ = lean_unbox(v_skipInstances_3298_);
v_res_3314_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__12(v_upperBound_3292_, v___x_3293_, v_pre_3294_, v_post_3295_, v_usedLetOnly_boxed_3311_, v_skipConstInApp_boxed_3312_, v_skipInstances_boxed_3313_, v___x_3299_, v_inst_3300_, v_R_3301_, v_a_3302_, v_b_3303_, v_c_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_);
lean_dec(v___y_3309_);
lean_dec_ref(v___y_3308_);
lean_dec(v___y_3307_);
lean_dec_ref(v___y_3306_);
lean_dec(v___y_3305_);
lean_dec(v___x_3299_);
lean_dec_ref(v___x_3293_);
lean_dec(v_upperBound_3292_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(lean_object* v_00_u03b2_3315_, lean_object* v_m_3316_, lean_object* v_a_3317_){
_start:
{
lean_object* v___x_3318_; 
v___x_3318_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___redArg(v_m_3316_, v_a_3317_);
return v___x_3318_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13___boxed(lean_object* v_00_u03b2_3319_, lean_object* v_m_3320_, lean_object* v_a_3321_){
_start:
{
lean_object* v_res_3322_; 
v_res_3322_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13(v_00_u03b2_3319_, v_m_3320_, v_a_3321_);
lean_dec_ref(v_a_3321_);
lean_dec_ref(v_m_3320_);
return v_res_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(lean_object* v_00_u03b1_3323_, lean_object* v_name_3324_, uint8_t v_bi_3325_, lean_object* v_type_3326_, lean_object* v_k_3327_, uint8_t v_kind_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_, lean_object* v___y_3333_){
_start:
{
lean_object* v___x_3335_; 
v___x_3335_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___redArg(v_name_3324_, v_bi_3325_, v_type_3326_, v_k_3327_, v_kind_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, v___y_3333_);
return v___x_3335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17___boxed(lean_object* v_00_u03b1_3336_, lean_object* v_name_3337_, lean_object* v_bi_3338_, lean_object* v_type_3339_, lean_object* v_k_3340_, lean_object* v_kind_3341_, lean_object* v___y_3342_, lean_object* v___y_3343_, lean_object* v___y_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_){
_start:
{
uint8_t v_bi_boxed_3348_; uint8_t v_kind_boxed_3349_; lean_object* v_res_3350_; 
v_bi_boxed_3348_ = lean_unbox(v_bi_3338_);
v_kind_boxed_3349_ = lean_unbox(v_kind_3341_);
v_res_3350_ = l_Lean_Meta_withLocalDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitForall___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__14_spec__17(v_00_u03b1_3336_, v_name_3337_, v_bi_boxed_3348_, v_type_3339_, v_k_3340_, v_kind_boxed_3349_, v___y_3342_, v___y_3343_, v___y_3344_, v___y_3345_, v___y_3346_);
lean_dec(v___y_3346_);
lean_dec_ref(v___y_3345_);
lean_dec(v___y_3344_);
lean_dec_ref(v___y_3343_);
lean_dec(v___y_3342_);
return v_res_3350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(lean_object* v_00_u03b1_3351_, lean_object* v_name_3352_, lean_object* v_type_3353_, lean_object* v_val_3354_, lean_object* v_k_3355_, uint8_t v_nondep_3356_, uint8_t v_kind_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_){
_start:
{
lean_object* v___x_3364_; 
v___x_3364_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___redArg(v_name_3352_, v_type_3353_, v_val_3354_, v_k_3355_, v_nondep_3356_, v_kind_3357_, v___y_3358_, v___y_3359_, v___y_3360_, v___y_3361_, v___y_3362_);
return v___x_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20___boxed(lean_object* v_00_u03b1_3365_, lean_object* v_name_3366_, lean_object* v_type_3367_, lean_object* v_val_3368_, lean_object* v_k_3369_, lean_object* v_nondep_3370_, lean_object* v_kind_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_, lean_object* v___y_3374_, lean_object* v___y_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_){
_start:
{
uint8_t v_nondep_boxed_3378_; uint8_t v_kind_boxed_3379_; lean_object* v_res_3380_; 
v_nondep_boxed_3378_ = lean_unbox(v_nondep_3370_);
v_kind_boxed_3379_ = lean_unbox(v_kind_3371_);
v_res_3380_ = l_Lean_Meta_withLetDecl___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit_visitLet___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__16_spec__20(v_00_u03b1_3365_, v_name_3366_, v_type_3367_, v_val_3368_, v_k_3369_, v_nondep_boxed_3378_, v_kind_boxed_3379_, v___y_3372_, v___y_3373_, v___y_3374_, v___y_3375_, v___y_3376_);
lean_dec(v___y_3376_);
lean_dec_ref(v___y_3375_);
lean_dec(v___y_3374_);
lean_dec_ref(v___y_3373_);
lean_dec(v___y_3372_);
return v_res_3380_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(lean_object* v_00_u03b1_3381_, lean_object* v_ref_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_){
_start:
{
lean_object* v___x_3388_; 
v___x_3388_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___redArg(v_ref_3382_);
return v___x_3388_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23___boxed(lean_object* v_00_u03b1_3389_, lean_object* v_ref_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_){
_start:
{
lean_object* v_res_3396_; 
v_res_3396_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18_spec__23(v_00_u03b1_3389_, v_ref_3390_, v___y_3391_, v___y_3392_, v___y_3393_, v___y_3394_);
lean_dec(v___y_3394_);
lean_dec_ref(v___y_3393_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
return v_res_3396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(lean_object* v_00_u03b1_3397_, lean_object* v_x_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
lean_object* v___x_3405_; 
v___x_3405_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___redArg(v_x_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_);
return v___x_3405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18___boxed(lean_object* v_00_u03b1_3406_, lean_object* v_x_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_){
_start:
{
lean_object* v_res_3414_; 
v_res_3414_ = l_Lean_Meta_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__18(v_00_u03b1_3406_, v_x_3407_, v___y_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_);
lean_dec(v___y_3412_);
lean_dec_ref(v___y_3411_);
lean_dec(v___y_3410_);
lean_dec_ref(v___y_3409_);
lean_dec(v___y_3408_);
return v_res_3414_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19(lean_object* v_00_u03b2_3415_, lean_object* v_m_3416_, lean_object* v_a_3417_, lean_object* v_b_3418_){
_start:
{
lean_object* v___x_3419_; 
v___x_3419_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19___redArg(v_m_3416_, v_a_3417_, v_b_3418_);
return v___x_3419_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(lean_object* v_00_u03b2_3420_, lean_object* v_a_3421_, lean_object* v_x_3422_){
_start:
{
lean_object* v___x_3423_; 
v___x_3423_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___redArg(v_a_3421_, v_x_3422_);
return v___x_3423_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15___boxed(lean_object* v_00_u03b2_3424_, lean_object* v_a_3425_, lean_object* v_x_3426_){
_start:
{
lean_object* v_res_3427_; 
v_res_3427_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__13_spec__15(v_00_u03b2_3424_, v_a_3425_, v_x_3426_);
lean_dec(v_x_3426_);
lean_dec_ref(v_a_3425_);
return v_res_3427_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(lean_object* v_00_u03b2_3428_, lean_object* v_a_3429_, lean_object* v_x_3430_){
_start:
{
uint8_t v___x_3431_; 
v___x_3431_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___redArg(v_a_3429_, v_x_3430_);
return v___x_3431_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25___boxed(lean_object* v_00_u03b2_3432_, lean_object* v_a_3433_, lean_object* v_x_3434_){
_start:
{
uint8_t v_res_3435_; lean_object* v_r_3436_; 
v_res_3435_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__25(v_00_u03b2_3432_, v_a_3433_, v_x_3434_);
lean_dec(v_x_3434_);
lean_dec_ref(v_a_3433_);
v_r_3436_ = lean_box(v_res_3435_);
return v_r_3436_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26(lean_object* v_00_u03b2_3437_, lean_object* v_data_3438_){
_start:
{
lean_object* v___x_3439_; 
v___x_3439_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26___redArg(v_data_3438_);
return v___x_3439_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27(lean_object* v_00_u03b2_3440_, lean_object* v_a_3441_, lean_object* v_b_3442_, lean_object* v_x_3443_){
_start:
{
lean_object* v___x_3444_; 
v___x_3444_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__27___redArg(v_a_3441_, v_b_3442_, v_x_3443_);
return v___x_3444_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27(lean_object* v_00_u03b2_3445_, lean_object* v_i_3446_, lean_object* v_source_3447_, lean_object* v_target_3448_){
_start:
{
lean_object* v___x_3449_; 
v___x_3449_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27___redArg(v_i_3446_, v_source_3447_, v_target_3448_);
return v___x_3449_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28(lean_object* v_00_u03b2_3450_, lean_object* v_x_3451_, lean_object* v_x_3452_){
_start:
{
lean_object* v___x_3453_; 
v___x_3453_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Meta_transformWithCache_visit___at___00Lean_Meta_transform___at___00Lean_Elab_getFixedParamsInfo_spec__8_spec__9_spec__19_spec__26_spec__27_spec__28___redArg(v_x_3451_, v_x_3452_);
return v___x_3453_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0(void){
_start:
{
lean_object* v___x_3454_; lean_object* v___x_3455_; 
v___x_3454_ = lean_unsigned_to_nat(0u);
v___x_3455_ = lean_mk_empty_array_with_capacity(v___x_3454_);
return v___x_3455_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1(void){
_start:
{
lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
v___x_3456_ = lean_obj_once(&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0, &l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0_once, _init_l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__0);
v___x_3457_ = lean_unsigned_to_nat(0u);
v___x_3458_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3458_, 0, v___x_3457_);
lean_ctor_set(v___x_3458_, 1, v___x_3456_);
lean_ctor_set(v___x_3458_, 2, v___x_3456_);
return v___x_3458_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedFixedParamPerms_default(void){
_start:
{
lean_object* v___x_3459_; 
v___x_3459_ = lean_obj_once(&l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1, &l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1_once, _init_l_Lean_Elab_instInhabitedFixedParamPerms_default___closed__1);
return v___x_3459_;
}
}
static lean_object* _init_l_Lean_Elab_instInhabitedFixedParamPerms(void){
_start:
{
lean_object* v___x_3460_; 
v___x_3460_ = l_Lean_Elab_instInhabitedFixedParamPerms_default;
return v___x_3460_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(lean_object* v___y_3461_){
_start:
{
lean_object* v___x_3462_; lean_object* v___x_3463_; 
v___x_3462_ = l_Nat_reprFast(v___y_3461_);
v___x_3463_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3463_, 0, v___x_3462_);
return v___x_3463_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(lean_object* v_x_3464_, lean_object* v_x_3465_, lean_object* v_x_3466_){
_start:
{
if (lean_obj_tag(v_x_3466_) == 0)
{
lean_dec(v_x_3464_);
return v_x_3465_;
}
else
{
lean_object* v_head_3467_; lean_object* v_tail_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3479_; 
v_head_3467_ = lean_ctor_get(v_x_3466_, 0);
v_tail_3468_ = lean_ctor_get(v_x_3466_, 1);
v_isSharedCheck_3479_ = !lean_is_exclusive(v_x_3466_);
if (v_isSharedCheck_3479_ == 0)
{
v___x_3470_ = v_x_3466_;
v_isShared_3471_ = v_isSharedCheck_3479_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_tail_3468_);
lean_inc(v_head_3467_);
lean_dec(v_x_3466_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3479_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3473_; 
lean_inc(v_x_3464_);
if (v_isShared_3471_ == 0)
{
lean_ctor_set_tag(v___x_3470_, 5);
lean_ctor_set(v___x_3470_, 1, v_x_3464_);
lean_ctor_set(v___x_3470_, 0, v_x_3465_);
v___x_3473_ = v___x_3470_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3478_; 
v_reuseFailAlloc_3478_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3478_, 0, v_x_3465_);
lean_ctor_set(v_reuseFailAlloc_3478_, 1, v_x_3464_);
v___x_3473_ = v_reuseFailAlloc_3478_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
lean_object* v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
v___x_3474_ = l_Nat_reprFast(v_head_3467_);
v___x_3475_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3475_, 0, v___x_3474_);
v___x_3476_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3476_, 0, v___x_3473_);
lean_ctor_set(v___x_3476_, 1, v___x_3475_);
v_x_3465_ = v___x_3476_;
v_x_3466_ = v_tail_3468_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(lean_object* v_x_3480_, lean_object* v_x_3481_, lean_object* v_x_3482_){
_start:
{
if (lean_obj_tag(v_x_3482_) == 0)
{
lean_dec(v_x_3480_);
return v_x_3481_;
}
else
{
lean_object* v_head_3483_; lean_object* v_tail_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3495_; 
v_head_3483_ = lean_ctor_get(v_x_3482_, 0);
v_tail_3484_ = lean_ctor_get(v_x_3482_, 1);
v_isSharedCheck_3495_ = !lean_is_exclusive(v_x_3482_);
if (v_isSharedCheck_3495_ == 0)
{
v___x_3486_ = v_x_3482_;
v_isShared_3487_ = v_isSharedCheck_3495_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_tail_3484_);
lean_inc(v_head_3483_);
lean_dec(v_x_3482_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3495_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3489_; 
lean_inc(v_x_3480_);
if (v_isShared_3487_ == 0)
{
lean_ctor_set_tag(v___x_3486_, 5);
lean_ctor_set(v___x_3486_, 1, v_x_3480_);
lean_ctor_set(v___x_3486_, 0, v_x_3481_);
v___x_3489_ = v___x_3486_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_x_3481_);
lean_ctor_set(v_reuseFailAlloc_3494_, 1, v_x_3480_);
v___x_3489_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3490_ = l_Nat_reprFast(v_head_3483_);
v___x_3491_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3490_);
v___x_3492_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3492_, 0, v___x_3489_);
lean_ctor_set(v___x_3492_, 1, v___x_3491_);
v___x_3493_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12_spec__15(v_x_3480_, v___x_3492_, v_tail_3484_);
return v___x_3493_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(lean_object* v_x_3496_, lean_object* v_x_3497_){
_start:
{
if (lean_obj_tag(v_x_3496_) == 0)
{
lean_object* v___x_3498_; 
lean_dec(v_x_3497_);
v___x_3498_ = lean_box(0);
return v___x_3498_;
}
else
{
lean_object* v_tail_3499_; 
v_tail_3499_ = lean_ctor_get(v_x_3496_, 1);
if (lean_obj_tag(v_tail_3499_) == 0)
{
lean_object* v_head_3500_; lean_object* v___x_3501_; 
lean_dec(v_x_3497_);
v_head_3500_ = lean_ctor_get(v_x_3496_, 0);
lean_inc(v_head_3500_);
lean_dec_ref(v_x_3496_);
v___x_3501_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3500_);
return v___x_3501_;
}
else
{
lean_object* v_head_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; 
lean_inc(v_tail_3499_);
v_head_3502_ = lean_ctor_get(v_x_3496_, 0);
lean_inc(v_head_3502_);
lean_dec_ref(v_x_3496_);
v___x_3503_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9___lam__0(v_head_3502_);
v___x_3504_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9_spec__12(v_x_3497_, v___x_3503_, v_tail_3499_);
return v___x_3504_;
}
}
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__0(void){
_start:
{
lean_object* v___x_3505_; 
v___x_3505_ = lean_mk_string_unchecked("#[", 2, 2);
return v___x_3505_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__1(void){
_start:
{
lean_object* v___x_3506_; 
v___x_3506_ = lean_mk_string_unchecked(",", 1, 1);
return v___x_3506_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__2(void){
_start:
{
lean_object* v___x_3507_; lean_object* v___x_3508_; 
v___x_3507_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__1, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__1_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__1);
v___x_3508_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3508_, 0, v___x_3507_);
return v___x_3508_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3(void){
_start:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; 
v___x_3509_ = lean_box(1);
v___x_3510_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__2, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__2_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__2);
v___x_3511_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3511_, 0, v___x_3510_);
lean_ctor_set(v___x_3511_, 1, v___x_3509_);
return v___x_3511_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__4(void){
_start:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; 
v___x_3512_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__0, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__0_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__0);
v___x_3513_ = lean_string_length(v___x_3512_);
return v___x_3513_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5(void){
_start:
{
lean_object* v___x_3514_; lean_object* v___x_3515_; 
v___x_3514_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__4, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__4_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__4);
v___x_3515_ = lean_nat_to_int(v___x_3514_);
return v___x_3515_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6(void){
_start:
{
lean_object* v___x_3516_; lean_object* v___x_3517_; 
v___x_3516_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__0, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__0_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__0);
v___x_3517_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3517_, 0, v___x_3516_);
return v___x_3517_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__7(void){
_start:
{
lean_object* v___x_3518_; 
v___x_3518_ = lean_mk_string_unchecked("#[]", 3, 3);
return v___x_3518_;
}
}
static lean_object* _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8(void){
_start:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3519_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__7, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__7_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__7);
v___x_3520_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3520_, 0, v___x_3519_);
return v___x_3520_;
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(lean_object* v_xs_3521_){
_start:
{
lean_object* v___x_3522_; lean_object* v___x_3523_; uint8_t v___x_3524_; 
v___x_3522_ = lean_array_get_size(v_xs_3521_);
v___x_3523_ = lean_unsigned_to_nat(0u);
v___x_3524_ = lean_nat_dec_eq(v___x_3522_, v___x_3523_);
if (v___x_3524_ == 0)
{
lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; 
v___x_3525_ = lean_array_to_list(v_xs_3521_);
v___x_3526_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3);
v___x_3527_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7_spec__9(v___x_3525_, v___x_3526_);
v___x_3528_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5);
v___x_3529_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6);
v___x_3530_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3529_);
lean_ctor_set(v___x_3530_, 1, v___x_3527_);
v___x_3531_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9);
v___x_3532_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3532_, 0, v___x_3530_);
lean_ctor_set(v___x_3532_, 1, v___x_3531_);
v___x_3533_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3528_);
lean_ctor_set(v___x_3533_, 1, v___x_3532_);
v___x_3534_ = l_Std_Format_fill(v___x_3533_);
return v___x_3534_;
}
else
{
lean_object* v___x_3535_; 
lean_dec_ref(v_xs_3521_);
v___x_3535_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8);
return v___x_3535_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(lean_object* v_x_3536_, lean_object* v_x_3537_, lean_object* v_x_3538_){
_start:
{
if (lean_obj_tag(v_x_3538_) == 0)
{
lean_dec(v_x_3536_);
return v_x_3537_;
}
else
{
lean_object* v_head_3539_; lean_object* v_tail_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3550_; 
v_head_3539_ = lean_ctor_get(v_x_3538_, 0);
v_tail_3540_ = lean_ctor_get(v_x_3538_, 1);
v_isSharedCheck_3550_ = !lean_is_exclusive(v_x_3538_);
if (v_isSharedCheck_3550_ == 0)
{
v___x_3542_ = v_x_3538_;
v_isShared_3543_ = v_isSharedCheck_3550_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_tail_3540_);
lean_inc(v_head_3539_);
lean_dec(v_x_3538_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3550_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v___x_3545_; 
lean_inc(v_x_3536_);
if (v_isShared_3543_ == 0)
{
lean_ctor_set_tag(v___x_3542_, 5);
lean_ctor_set(v___x_3542_, 1, v_x_3536_);
lean_ctor_set(v___x_3542_, 0, v_x_3537_);
v___x_3545_ = v___x_3542_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3549_; 
v_reuseFailAlloc_3549_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3549_, 0, v_x_3537_);
lean_ctor_set(v_reuseFailAlloc_3549_, 1, v_x_3536_);
v___x_3545_ = v_reuseFailAlloc_3549_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
v___x_3546_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3539_);
v___x_3547_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3547_, 0, v___x_3545_);
lean_ctor_set(v___x_3547_, 1, v___x_3546_);
v_x_3537_ = v___x_3547_;
v_x_3538_ = v_tail_3540_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(lean_object* v_x_3551_, lean_object* v_x_3552_){
_start:
{
if (lean_obj_tag(v_x_3551_) == 0)
{
lean_object* v___x_3553_; 
lean_dec(v_x_3552_);
v___x_3553_ = lean_box(0);
return v___x_3553_;
}
else
{
lean_object* v_tail_3554_; 
v_tail_3554_ = lean_ctor_get(v_x_3551_, 1);
if (lean_obj_tag(v_tail_3554_) == 0)
{
lean_object* v_head_3555_; lean_object* v___x_3556_; 
lean_dec(v_x_3552_);
v_head_3555_ = lean_ctor_get(v_x_3551_, 0);
lean_inc(v_head_3555_);
lean_dec_ref(v_x_3551_);
v___x_3556_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3555_);
return v___x_3556_;
}
else
{
lean_object* v_head_3557_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
lean_inc(v_tail_3554_);
v_head_3557_ = lean_ctor_get(v_x_3551_, 0);
lean_inc(v_head_3557_);
lean_dec_ref(v_x_3551_);
v___x_3558_ = l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7(v_head_3557_);
v___x_3559_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8_spec__11(v_x_3552_, v___x_3558_, v_tail_3554_);
return v___x_3559_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(lean_object* v_xs_3560_){
_start:
{
lean_object* v___x_3561_; lean_object* v___x_3562_; uint8_t v___x_3563_; 
v___x_3561_ = lean_array_get_size(v_xs_3560_);
v___x_3562_ = lean_unsigned_to_nat(0u);
v___x_3563_ = lean_nat_dec_eq(v___x_3561_, v___x_3562_);
if (v___x_3563_ == 0)
{
lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; 
v___x_3564_ = lean_array_to_list(v_xs_3560_);
v___x_3565_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3);
v___x_3566_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__8(v___x_3564_, v___x_3565_);
v___x_3567_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5);
v___x_3568_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6);
v___x_3569_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3569_, 0, v___x_3568_);
lean_ctor_set(v___x_3569_, 1, v___x_3566_);
v___x_3570_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9);
v___x_3571_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3571_, 0, v___x_3569_);
lean_ctor_set(v___x_3571_, 1, v___x_3570_);
v___x_3572_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3572_, 0, v___x_3567_);
lean_ctor_set(v___x_3572_, 1, v___x_3571_);
v___x_3573_ = l_Std_Format_fill(v___x_3572_);
return v___x_3573_;
}
else
{
lean_object* v___x_3574_; 
lean_dec_ref(v_xs_3560_);
v___x_3574_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8);
return v___x_3574_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(lean_object* v_x_3575_, lean_object* v_x_3576_, lean_object* v_x_3577_){
_start:
{
if (lean_obj_tag(v_x_3577_) == 0)
{
lean_dec(v_x_3575_);
return v_x_3576_;
}
else
{
lean_object* v_head_3578_; lean_object* v_tail_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3589_; 
v_head_3578_ = lean_ctor_get(v_x_3577_, 0);
v_tail_3579_ = lean_ctor_get(v_x_3577_, 1);
v_isSharedCheck_3589_ = !lean_is_exclusive(v_x_3577_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3581_ = v_x_3577_;
v_isShared_3582_ = v_isSharedCheck_3589_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_tail_3579_);
lean_inc(v_head_3578_);
lean_dec(v_x_3577_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3589_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v___x_3584_; 
lean_inc(v_x_3575_);
if (v_isShared_3582_ == 0)
{
lean_ctor_set_tag(v___x_3581_, 5);
lean_ctor_set(v___x_3581_, 1, v_x_3575_);
lean_ctor_set(v___x_3581_, 0, v_x_3576_);
v___x_3584_ = v___x_3581_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v_x_3576_);
lean_ctor_set(v_reuseFailAlloc_3588_, 1, v_x_3575_);
v___x_3584_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
lean_object* v___x_3585_; lean_object* v___x_3586_; 
v___x_3585_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3578_);
v___x_3586_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3586_, 0, v___x_3584_);
lean_ctor_set(v___x_3586_, 1, v___x_3585_);
v_x_3576_ = v___x_3586_;
v_x_3577_ = v_tail_3579_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(lean_object* v_x_3590_, lean_object* v_x_3591_){
_start:
{
if (lean_obj_tag(v_x_3590_) == 0)
{
lean_object* v___x_3592_; 
lean_dec(v_x_3591_);
v___x_3592_ = lean_box(0);
return v___x_3592_;
}
else
{
lean_object* v_tail_3593_; 
v_tail_3593_ = lean_ctor_get(v_x_3590_, 1);
if (lean_obj_tag(v_tail_3593_) == 0)
{
lean_object* v_head_3594_; lean_object* v___x_3595_; 
lean_dec(v_x_3591_);
v_head_3594_ = lean_ctor_get(v_x_3590_, 0);
lean_inc(v_head_3594_);
lean_dec_ref(v_x_3590_);
v___x_3595_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3594_);
return v___x_3595_;
}
else
{
lean_object* v_head_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; 
lean_inc(v_tail_3593_);
v_head_3596_ = lean_ctor_get(v_x_3590_, 0);
lean_inc(v_head_3596_);
lean_dec_ref(v_x_3590_);
v___x_3597_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3(v_head_3596_);
v___x_3598_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4_spec__10(v_x_3591_, v___x_3597_, v_tail_3593_);
return v___x_3598_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(lean_object* v_xs_3599_){
_start:
{
lean_object* v___x_3600_; lean_object* v___x_3601_; uint8_t v___x_3602_; 
v___x_3600_ = lean_array_get_size(v_xs_3599_);
v___x_3601_ = lean_unsigned_to_nat(0u);
v___x_3602_ = lean_nat_dec_eq(v___x_3600_, v___x_3601_);
if (v___x_3602_ == 0)
{
lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; 
v___x_3603_ = lean_array_to_list(v_xs_3599_);
v___x_3604_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3);
v___x_3605_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__4(v___x_3603_, v___x_3604_);
v___x_3606_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5);
v___x_3607_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6);
v___x_3608_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3608_, 0, v___x_3607_);
lean_ctor_set(v___x_3608_, 1, v___x_3605_);
v___x_3609_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9);
v___x_3610_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3608_);
lean_ctor_set(v___x_3610_, 1, v___x_3609_);
v___x_3611_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3611_, 0, v___x_3606_);
lean_ctor_set(v___x_3611_, 1, v___x_3610_);
v___x_3612_ = l_Std_Format_fill(v___x_3611_);
return v___x_3612_;
}
else
{
lean_object* v___x_3613_; 
lean_dec_ref(v_xs_3599_);
v___x_3613_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8);
return v___x_3613_;
}
}
}
static lean_object* _init_l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_3614_; 
v___x_3614_ = lean_mk_string_unchecked("none", 4, 4);
return v___x_3614_;
}
}
static lean_object* _init_l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1(void){
_start:
{
lean_object* v___x_3615_; lean_object* v___x_3616_; 
v___x_3615_ = lean_obj_once(&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0, &l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0_once, _init_l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__0);
v___x_3616_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3616_, 0, v___x_3615_);
return v___x_3616_;
}
}
static lean_object* _init_l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2(void){
_start:
{
lean_object* v___x_3617_; 
v___x_3617_ = lean_mk_string_unchecked("some ", 5, 5);
return v___x_3617_;
}
}
static lean_object* _init_l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3(void){
_start:
{
lean_object* v___x_3618_; lean_object* v___x_3619_; 
v___x_3618_ = lean_obj_once(&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2, &l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2_once, _init_l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__2);
v___x_3619_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3618_);
return v___x_3619_;
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(lean_object* v_x_3620_, lean_object* v_x_3621_){
_start:
{
if (lean_obj_tag(v_x_3620_) == 0)
{
lean_object* v___x_3622_; 
v___x_3622_ = lean_obj_once(&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1, &l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1_once, _init_l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__1);
return v___x_3622_;
}
else
{
lean_object* v_val_3623_; lean_object* v___x_3625_; uint8_t v_isShared_3626_; uint8_t v_isSharedCheck_3634_; 
v_val_3623_ = lean_ctor_get(v_x_3620_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v_x_3620_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3625_ = v_x_3620_;
v_isShared_3626_ = v_isSharedCheck_3634_;
goto v_resetjp_3624_;
}
else
{
lean_inc(v_val_3623_);
lean_dec(v_x_3620_);
v___x_3625_ = lean_box(0);
v_isShared_3626_ = v_isSharedCheck_3634_;
goto v_resetjp_3624_;
}
v_resetjp_3624_:
{
lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3630_; 
v___x_3627_ = lean_obj_once(&l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3, &l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3_once, _init_l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___closed__3);
v___x_3628_ = l_Nat_reprFast(v_val_3623_);
if (v_isShared_3626_ == 0)
{
lean_ctor_set_tag(v___x_3625_, 3);
lean_ctor_set(v___x_3625_, 0, v___x_3628_);
v___x_3630_ = v___x_3625_;
goto v_reusejp_3629_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v___x_3628_);
v___x_3630_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3629_;
}
v_reusejp_3629_:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; 
v___x_3631_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3631_, 0, v___x_3627_);
lean_ctor_set(v___x_3631_, 1, v___x_3630_);
v___x_3632_ = l_Repr_addAppParen(v___x_3631_, v_x_3621_);
return v___x_3632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1___boxed(lean_object* v_x_3635_, lean_object* v_x_3636_){
_start:
{
lean_object* v_res_3637_; 
v_res_3637_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_x_3635_, v_x_3636_);
lean_dec(v_x_3636_);
return v_res_3637_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_x_3638_, lean_object* v_x_3639_, lean_object* v_x_3640_){
_start:
{
if (lean_obj_tag(v_x_3640_) == 0)
{
lean_dec(v_x_3638_);
return v_x_3639_;
}
else
{
lean_object* v_head_3641_; lean_object* v_tail_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3653_; 
v_head_3641_ = lean_ctor_get(v_x_3640_, 0);
v_tail_3642_ = lean_ctor_get(v_x_3640_, 1);
v_isSharedCheck_3653_ = !lean_is_exclusive(v_x_3640_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3644_ = v_x_3640_;
v_isShared_3645_ = v_isSharedCheck_3653_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_tail_3642_);
lean_inc(v_head_3641_);
lean_dec(v_x_3640_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3653_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3647_; 
lean_inc(v_x_3638_);
if (v_isShared_3645_ == 0)
{
lean_ctor_set_tag(v___x_3644_, 5);
lean_ctor_set(v___x_3644_, 1, v_x_3638_);
lean_ctor_set(v___x_3644_, 0, v_x_3639_);
v___x_3647_ = v___x_3644_;
goto v_reusejp_3646_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_x_3639_);
lean_ctor_set(v_reuseFailAlloc_3652_, 1, v_x_3638_);
v___x_3647_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3646_;
}
v_reusejp_3646_:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; 
v___x_3648_ = lean_unsigned_to_nat(0u);
v___x_3649_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3641_, v___x_3648_);
v___x_3650_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3650_, 0, v___x_3647_);
lean_ctor_set(v___x_3650_, 1, v___x_3649_);
v_x_3639_ = v___x_3650_;
v_x_3640_ = v_tail_3642_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_3654_, lean_object* v_x_3655_, lean_object* v_x_3656_){
_start:
{
if (lean_obj_tag(v_x_3656_) == 0)
{
lean_dec(v_x_3654_);
return v_x_3655_;
}
else
{
lean_object* v_head_3657_; lean_object* v_tail_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3669_; 
v_head_3657_ = lean_ctor_get(v_x_3656_, 0);
v_tail_3658_ = lean_ctor_get(v_x_3656_, 1);
v_isSharedCheck_3669_ = !lean_is_exclusive(v_x_3656_);
if (v_isSharedCheck_3669_ == 0)
{
v___x_3660_ = v_x_3656_;
v_isShared_3661_ = v_isSharedCheck_3669_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_tail_3658_);
lean_inc(v_head_3657_);
lean_dec(v_x_3656_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3669_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3663_; 
lean_inc(v_x_3654_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set_tag(v___x_3660_, 5);
lean_ctor_set(v___x_3660_, 1, v_x_3654_);
lean_ctor_set(v___x_3660_, 0, v_x_3655_);
v___x_3663_ = v___x_3660_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3668_; 
v_reuseFailAlloc_3668_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3668_, 0, v_x_3655_);
lean_ctor_set(v_reuseFailAlloc_3668_, 1, v_x_3654_);
v___x_3663_ = v_reuseFailAlloc_3668_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3664_ = lean_unsigned_to_nat(0u);
v___x_3665_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v_head_3657_, v___x_3664_);
v___x_3666_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3666_, 0, v___x_3663_);
lean_ctor_set(v___x_3666_, 1, v___x_3665_);
v___x_3667_ = l_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4_spec__8(v_x_3654_, v___x_3666_, v_tail_3658_);
return v___x_3667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(lean_object* v___y_3670_){
_start:
{
lean_object* v___x_3671_; lean_object* v___x_3672_; 
v___x_3671_ = lean_unsigned_to_nat(0u);
v___x_3672_ = l_Option_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__1(v___y_3670_, v___x_3671_);
return v___x_3672_;
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(lean_object* v_x_3673_, lean_object* v_x_3674_){
_start:
{
if (lean_obj_tag(v_x_3673_) == 0)
{
lean_object* v___x_3675_; 
lean_dec(v_x_3674_);
v___x_3675_ = lean_box(0);
return v___x_3675_;
}
else
{
lean_object* v_tail_3676_; 
v_tail_3676_ = lean_ctor_get(v_x_3673_, 1);
if (lean_obj_tag(v_tail_3676_) == 0)
{
lean_object* v_head_3677_; lean_object* v___x_3678_; 
lean_dec(v_x_3674_);
v_head_3677_ = lean_ctor_get(v_x_3673_, 0);
lean_inc(v_head_3677_);
lean_dec_ref(v_x_3673_);
v___x_3678_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3677_);
return v___x_3678_;
}
else
{
lean_object* v_head_3679_; lean_object* v___x_3680_; lean_object* v___x_3681_; 
lean_inc(v_tail_3676_);
v_head_3679_ = lean_ctor_get(v_x_3673_, 0);
lean_inc(v_head_3679_);
lean_dec_ref(v_x_3673_);
v___x_3680_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2___lam__0(v_head_3679_);
v___x_3681_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2_spec__4(v_x_3674_, v___x_3680_, v_tail_3676_);
return v___x_3681_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(lean_object* v_xs_3682_){
_start:
{
lean_object* v___x_3683_; lean_object* v___x_3684_; uint8_t v___x_3685_; 
v___x_3683_ = lean_array_get_size(v_xs_3682_);
v___x_3684_ = lean_unsigned_to_nat(0u);
v___x_3685_ = lean_nat_dec_eq(v___x_3683_, v___x_3684_);
if (v___x_3685_ == 0)
{
lean_object* v___x_3686_; lean_object* v___x_3687_; lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; lean_object* v___x_3692_; lean_object* v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3686_ = lean_array_to_list(v_xs_3682_);
v___x_3687_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3);
v___x_3688_ = l_Std_Format_joinSep___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0_spec__2(v___x_3686_, v___x_3687_);
v___x_3689_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5);
v___x_3690_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6);
v___x_3691_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3690_);
lean_ctor_set(v___x_3691_, 1, v___x_3688_);
v___x_3692_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9);
v___x_3693_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3693_, 0, v___x_3691_);
lean_ctor_set(v___x_3693_, 1, v___x_3692_);
v___x_3694_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3694_, 0, v___x_3689_);
lean_ctor_set(v___x_3694_, 1, v___x_3693_);
v___x_3695_ = l_Std_Format_fill(v___x_3694_);
return v___x_3695_;
}
else
{
lean_object* v___x_3696_; 
lean_dec_ref(v_xs_3682_);
v___x_3696_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8);
return v___x_3696_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(lean_object* v_x_3697_, lean_object* v_x_3698_, lean_object* v_x_3699_){
_start:
{
if (lean_obj_tag(v_x_3699_) == 0)
{
lean_dec(v_x_3697_);
return v_x_3698_;
}
else
{
lean_object* v_head_3700_; lean_object* v_tail_3701_; lean_object* v___x_3703_; uint8_t v_isShared_3704_; uint8_t v_isSharedCheck_3711_; 
v_head_3700_ = lean_ctor_get(v_x_3699_, 0);
v_tail_3701_ = lean_ctor_get(v_x_3699_, 1);
v_isSharedCheck_3711_ = !lean_is_exclusive(v_x_3699_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3703_ = v_x_3699_;
v_isShared_3704_ = v_isSharedCheck_3711_;
goto v_resetjp_3702_;
}
else
{
lean_inc(v_tail_3701_);
lean_inc(v_head_3700_);
lean_dec(v_x_3699_);
v___x_3703_ = lean_box(0);
v_isShared_3704_ = v_isSharedCheck_3711_;
goto v_resetjp_3702_;
}
v_resetjp_3702_:
{
lean_object* v___x_3706_; 
lean_inc(v_x_3697_);
if (v_isShared_3704_ == 0)
{
lean_ctor_set_tag(v___x_3703_, 5);
lean_ctor_set(v___x_3703_, 1, v_x_3697_);
lean_ctor_set(v___x_3703_, 0, v_x_3698_);
v___x_3706_ = v___x_3703_;
goto v_reusejp_3705_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v_x_3698_);
lean_ctor_set(v_reuseFailAlloc_3710_, 1, v_x_3697_);
v___x_3706_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3705_;
}
v_reusejp_3705_:
{
lean_object* v___x_3707_; lean_object* v___x_3708_; 
v___x_3707_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3700_);
v___x_3708_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3708_, 0, v___x_3706_);
lean_ctor_set(v___x_3708_, 1, v___x_3707_);
v_x_3698_ = v___x_3708_;
v_x_3699_ = v_tail_3701_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(lean_object* v_x_3712_, lean_object* v_x_3713_){
_start:
{
if (lean_obj_tag(v_x_3712_) == 0)
{
lean_object* v___x_3714_; 
lean_dec(v_x_3713_);
v___x_3714_ = lean_box(0);
return v___x_3714_;
}
else
{
lean_object* v_tail_3715_; 
v_tail_3715_ = lean_ctor_get(v_x_3712_, 1);
if (lean_obj_tag(v_tail_3715_) == 0)
{
lean_object* v_head_3716_; lean_object* v___x_3717_; 
lean_dec(v_x_3713_);
v_head_3716_ = lean_ctor_get(v_x_3712_, 0);
lean_inc(v_head_3716_);
lean_dec_ref(v_x_3712_);
v___x_3717_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3716_);
return v___x_3717_;
}
else
{
lean_object* v_head_3718_; lean_object* v___x_3719_; lean_object* v___x_3720_; 
lean_inc(v_tail_3715_);
v_head_3718_ = lean_ctor_get(v_x_3712_, 0);
lean_inc(v_head_3718_);
lean_dec_ref(v_x_3712_);
v___x_3719_ = l_Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__0(v_head_3718_);
v___x_3720_ = l_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1_spec__4(v_x_3713_, v___x_3719_, v_tail_3715_);
return v___x_3720_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(lean_object* v_xs_3721_){
_start:
{
lean_object* v___x_3722_; lean_object* v___x_3723_; uint8_t v___x_3724_; 
v___x_3722_ = lean_array_get_size(v_xs_3721_);
v___x_3723_ = lean_unsigned_to_nat(0u);
v___x_3724_ = lean_nat_dec_eq(v___x_3722_, v___x_3723_);
if (v___x_3724_ == 0)
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3729_; lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3733_; lean_object* v___x_3734_; 
v___x_3725_ = lean_array_to_list(v_xs_3721_);
v___x_3726_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__3);
v___x_3727_ = l_Std_Format_joinSep___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0_spec__1(v___x_3725_, v___x_3726_);
v___x_3728_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__5);
v___x_3729_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__6);
v___x_3730_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3730_, 0, v___x_3729_);
lean_ctor_set(v___x_3730_, 1, v___x_3727_);
v___x_3731_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9, &l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9_once, _init_l_List_mapTR_loop___at___00Lean_Elab_FixedParams_Info_format_spec__3___closed__9);
v___x_3732_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3730_);
lean_ctor_set(v___x_3732_, 1, v___x_3731_);
v___x_3733_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3733_, 0, v___x_3728_);
lean_ctor_set(v___x_3733_, 1, v___x_3732_);
v___x_3734_ = l_Std_Format_fill(v___x_3733_);
return v___x_3734_;
}
else
{
lean_object* v___x_3735_; 
lean_dec_ref(v_xs_3721_);
v___x_3735_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__8);
return v___x_3735_;
}
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0(void){
_start:
{
lean_object* v___x_3736_; 
v___x_3736_ = lean_mk_string_unchecked("{ ", 2, 2);
return v___x_3736_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1(void){
_start:
{
lean_object* v___x_3737_; 
v___x_3737_ = lean_mk_string_unchecked("numFixed", 8, 8);
return v___x_3737_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2(void){
_start:
{
lean_object* v___x_3738_; lean_object* v___x_3739_; 
v___x_3738_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__1);
v___x_3739_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3739_, 0, v___x_3738_);
return v___x_3739_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3(void){
_start:
{
lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; 
v___x_3740_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__2);
v___x_3741_ = lean_box(0);
v___x_3742_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3741_);
lean_ctor_set(v___x_3742_, 1, v___x_3740_);
return v___x_3742_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4(void){
_start:
{
lean_object* v___x_3743_; 
v___x_3743_ = lean_mk_string_unchecked(" := ", 4, 4);
return v___x_3743_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5(void){
_start:
{
lean_object* v___x_3744_; lean_object* v___x_3745_; 
v___x_3744_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__4);
v___x_3745_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3745_, 0, v___x_3744_);
return v___x_3745_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6(void){
_start:
{
lean_object* v___x_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; 
v___x_3746_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5);
v___x_3747_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__3);
v___x_3748_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3747_);
lean_ctor_set(v___x_3748_, 1, v___x_3746_);
return v___x_3748_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_3749_; lean_object* v___x_3750_; 
v___x_3749_ = lean_unsigned_to_nat(12u);
v___x_3750_ = lean_nat_to_int(v___x_3749_);
return v___x_3750_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8(void){
_start:
{
lean_object* v___x_3751_; 
v___x_3751_ = lean_mk_string_unchecked("perms", 5, 5);
return v___x_3751_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_3752_; lean_object* v___x_3753_; 
v___x_3752_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__8);
v___x_3753_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3752_);
return v___x_3753_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_3754_; lean_object* v___x_3755_; 
v___x_3754_ = lean_unsigned_to_nat(9u);
v___x_3755_ = lean_nat_to_int(v___x_3754_);
return v___x_3755_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11(void){
_start:
{
lean_object* v___x_3756_; 
v___x_3756_ = lean_mk_string_unchecked("revDeps", 7, 7);
return v___x_3756_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12(void){
_start:
{
lean_object* v___x_3757_; lean_object* v___x_3758_; 
v___x_3757_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__11);
v___x_3758_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3757_);
return v___x_3758_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13(void){
_start:
{
lean_object* v___x_3759_; lean_object* v___x_3760_; 
v___x_3759_ = lean_unsigned_to_nat(11u);
v___x_3760_ = lean_nat_to_int(v___x_3759_);
return v___x_3760_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14(void){
_start:
{
lean_object* v___x_3761_; 
v___x_3761_ = lean_mk_string_unchecked(" }", 2, 2);
return v___x_3761_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15(void){
_start:
{
lean_object* v___x_3762_; lean_object* v___x_3763_; 
v___x_3762_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0);
v___x_3763_ = lean_string_length(v___x_3762_);
return v___x_3763_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3764_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__15);
v___x_3765_ = lean_nat_to_int(v___x_3764_);
return v___x_3765_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_3766_; lean_object* v___x_3767_; 
v___x_3766_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__0);
v___x_3767_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3767_, 0, v___x_3766_);
return v___x_3767_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; 
v___x_3768_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__14);
v___x_3769_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3769_, 0, v___x_3768_);
return v___x_3769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___redArg(lean_object* v_x_3770_){
_start:
{
lean_object* v_numFixed_3771_; lean_object* v_perms_3772_; lean_object* v_revDeps_3773_; lean_object* v___x_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; uint8_t v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; lean_object* v___x_3805_; lean_object* v___x_3806_; lean_object* v___x_3807_; lean_object* v___x_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; lean_object* v___x_3811_; 
v_numFixed_3771_ = lean_ctor_get(v_x_3770_, 0);
lean_inc(v_numFixed_3771_);
v_perms_3772_ = lean_ctor_get(v_x_3770_, 1);
lean_inc_ref(v_perms_3772_);
v_revDeps_3773_ = lean_ctor_get(v_x_3770_, 2);
lean_inc_ref(v_revDeps_3773_);
lean_dec_ref(v_x_3770_);
v___x_3774_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__5);
v___x_3775_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__6);
v___x_3776_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__7);
v___x_3777_ = l_Nat_reprFast(v_numFixed_3771_);
v___x_3778_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3778_, 0, v___x_3777_);
v___x_3779_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3779_, 0, v___x_3776_);
lean_ctor_set(v___x_3779_, 1, v___x_3778_);
v___x_3780_ = 0;
v___x_3781_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3781_, 0, v___x_3779_);
lean_ctor_set_uint8(v___x_3781_, sizeof(void*)*1, v___x_3780_);
v___x_3782_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3775_);
lean_ctor_set(v___x_3782_, 1, v___x_3781_);
v___x_3783_ = lean_obj_once(&l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__2, &l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__2_once, _init_l_Array_repr___at___00Array_repr___at___00Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1_spec__3_spec__7___closed__2);
v___x_3784_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3784_, 0, v___x_3782_);
lean_ctor_set(v___x_3784_, 1, v___x_3783_);
v___x_3785_ = lean_box(1);
v___x_3786_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3784_);
lean_ctor_set(v___x_3786_, 1, v___x_3785_);
v___x_3787_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__9);
v___x_3788_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3786_);
lean_ctor_set(v___x_3788_, 1, v___x_3787_);
v___x_3789_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3789_, 0, v___x_3788_);
lean_ctor_set(v___x_3789_, 1, v___x_3774_);
v___x_3790_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__10);
v___x_3791_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__0(v_perms_3772_);
v___x_3792_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3792_, 0, v___x_3790_);
lean_ctor_set(v___x_3792_, 1, v___x_3791_);
v___x_3793_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3793_, 0, v___x_3792_);
lean_ctor_set_uint8(v___x_3793_, sizeof(void*)*1, v___x_3780_);
v___x_3794_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___x_3789_);
lean_ctor_set(v___x_3794_, 1, v___x_3793_);
v___x_3795_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___x_3794_);
lean_ctor_set(v___x_3795_, 1, v___x_3783_);
v___x_3796_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3796_, 0, v___x_3795_);
lean_ctor_set(v___x_3796_, 1, v___x_3785_);
v___x_3797_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__12);
v___x_3798_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3798_, 0, v___x_3796_);
lean_ctor_set(v___x_3798_, 1, v___x_3797_);
v___x_3799_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3799_, 0, v___x_3798_);
lean_ctor_set(v___x_3799_, 1, v___x_3774_);
v___x_3800_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__13);
v___x_3801_ = l_Array_repr___at___00Lean_Elab_instReprFixedParamPerms_repr_spec__1(v_revDeps_3773_);
v___x_3802_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3802_, 0, v___x_3800_);
lean_ctor_set(v___x_3802_, 1, v___x_3801_);
v___x_3803_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3803_, 0, v___x_3802_);
lean_ctor_set_uint8(v___x_3803_, sizeof(void*)*1, v___x_3780_);
v___x_3804_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3804_, 0, v___x_3799_);
lean_ctor_set(v___x_3804_, 1, v___x_3803_);
v___x_3805_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__16);
v___x_3806_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__17);
v___x_3807_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3807_, 0, v___x_3806_);
lean_ctor_set(v___x_3807_, 1, v___x_3804_);
v___x_3808_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18, &l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18_once, _init_l_Lean_Elab_instReprFixedParamPerms_repr___redArg___closed__18);
v___x_3809_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_3809_, 0, v___x_3807_);
lean_ctor_set(v___x_3809_, 1, v___x_3808_);
v___x_3810_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3805_);
lean_ctor_set(v___x_3810_, 1, v___x_3809_);
v___x_3811_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_3811_, 0, v___x_3810_);
lean_ctor_set_uint8(v___x_3811_, sizeof(void*)*1, v___x_3780_);
return v___x_3811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr(lean_object* v_x_3812_, lean_object* v_prec_3813_){
_start:
{
lean_object* v___x_3814_; 
v___x_3814_ = l_Lean_Elab_instReprFixedParamPerms_repr___redArg(v_x_3812_);
return v___x_3814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_instReprFixedParamPerms_repr___boxed(lean_object* v_x_3815_, lean_object* v_prec_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Lean_Elab_instReprFixedParamPerms_repr(v_x_3815_, v_prec_3816_);
lean_dec(v_prec_3816_);
return v_res_3817_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms___closed__0(void){
_start:
{
lean_object* v___x_3818_; 
v___x_3818_ = lean_alloc_closure((void*)(l_Lean_Elab_instReprFixedParamPerms_repr___boxed), 2, 0);
return v___x_3818_;
}
}
static lean_object* _init_l_Lean_Elab_instReprFixedParamPerms(void){
_start:
{
lean_object* v___x_3819_; 
v___x_3819_ = lean_obj_once(&l_Lean_Elab_instReprFixedParamPerms___closed__0, &l_Lean_Elab_instReprFixedParamPerms___closed__0_once, _init_l_Lean_Elab_instReprFixedParamPerms___closed__0);
return v___x_3819_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(lean_object* v_msg_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_){
_start:
{
lean_object* v___f_3826_; lean_object* v___x_5797__overap_3827_; lean_object* v___x_3828_; 
v___f_3826_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_5797__overap_3827_ = lean_panic_fn_borrowed(v___f_3826_, v_msg_3820_);
lean_inc(v___y_3824_);
lean_inc_ref(v___y_3823_);
lean_inc(v___y_3822_);
lean_inc_ref(v___y_3821_);
v___x_3828_ = lean_apply_5(v___x_5797__overap_3827_, v___y_3821_, v___y_3822_, v___y_3823_, v___y_3824_, lean_box(0));
return v___x_3828_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0___boxed(lean_object* v_msg_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_){
_start:
{
lean_object* v_res_3835_; 
v_res_3835_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v_msg_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_);
lean_dec(v___y_3833_);
lean_dec_ref(v___y_3832_);
lean_dec(v___y_3831_);
lean_dec_ref(v___y_3830_);
return v_res_3835_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(lean_object* v_msg_3836_, lean_object* v___y_3837_, lean_object* v___y_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_){
_start:
{
lean_object* v___f_3842_; lean_object* v___x_5807__overap_3843_; lean_object* v___x_3844_; 
v___f_3842_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_5807__overap_3843_ = lean_panic_fn_borrowed(v___f_3842_, v_msg_3836_);
lean_inc(v___y_3840_);
lean_inc_ref(v___y_3839_);
lean_inc(v___y_3838_);
lean_inc_ref(v___y_3837_);
v___x_3844_ = lean_apply_5(v___x_5807__overap_3843_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, lean_box(0));
return v___x_3844_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1___boxed(lean_object* v_msg_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_, lean_object* v___y_3850_){
_start:
{
lean_object* v_res_3851_; 
v_res_3851_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v_msg_3845_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_);
lean_dec(v___y_3849_);
lean_dec_ref(v___y_3848_);
lean_dec(v___y_3847_);
lean_dec_ref(v___y_3846_);
return v_res_3851_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(lean_object* v_msg_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_){
_start:
{
lean_object* v___f_3858_; lean_object* v___x_5817__overap_3859_; lean_object* v___x_3860_; 
v___f_3858_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_5817__overap_3859_ = lean_panic_fn_borrowed(v___f_3858_, v_msg_3852_);
lean_inc(v___y_3856_);
lean_inc_ref(v___y_3855_);
lean_inc(v___y_3854_);
lean_inc_ref(v___y_3853_);
v___x_3860_ = lean_apply_5(v___x_5817__overap_3859_, v___y_3853_, v___y_3854_, v___y_3855_, v___y_3856_, lean_box(0));
return v___x_3860_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2___boxed(lean_object* v_msg_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_){
_start:
{
lean_object* v_res_3867_; 
v_res_3867_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v_msg_3861_, v___y_3862_, v___y_3863_, v___y_3864_, v___y_3865_);
lean_dec(v___y_3865_);
lean_dec_ref(v___y_3864_);
lean_dec(v___y_3863_);
lean_dec_ref(v___y_3862_);
return v_res_3867_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0(void){
_start:
{
lean_object* v___x_3868_; 
v___x_3868_ = lean_mk_string_unchecked("Lean.Elab.getFixedParamPerms", 28, 28);
return v___x_3868_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1(void){
_start:
{
lean_object* v___x_3869_; 
v___x_3869_ = lean_mk_string_unchecked("assertion violation: firstPerm[firstParamIdx]!.isSome\n            ", 66, 66);
return v___x_3869_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2(void){
_start:
{
lean_object* v___x_3870_; lean_object* v___x_3871_; lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; 
v___x_3870_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__1);
v___x_3871_ = lean_unsigned_to_nat(12u);
v___x_3872_ = lean_unsigned_to_nat(294u);
v___x_3873_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0);
v___x_3874_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_3875_ = l_mkPanicMessageWithDecl(v___x_3874_, v___x_3873_, v___x_3872_, v___x_3871_, v___x_3870_);
return v___x_3875_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3(void){
_start:
{
lean_object* v___x_3876_; 
v___x_3876_ = lean_mk_string_unchecked("Incomplete paramInfo", 20, 20);
return v___x_3876_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4(void){
_start:
{
lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; 
v___x_3877_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__3);
v___x_3878_ = lean_unsigned_to_nat(12u);
v___x_3879_ = lean_unsigned_to_nat(297u);
v___x_3880_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0);
v___x_3881_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_3882_ = l_mkPanicMessageWithDecl(v___x_3881_, v___x_3880_, v___x_3879_, v___x_3878_, v___x_3877_);
return v___x_3882_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(lean_object* v___x_3883_, lean_object* v_as_3884_, size_t v_sz_3885_, size_t v_i_3886_, lean_object* v_b_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_){
_start:
{
lean_object* v_a_3894_; uint8_t v___x_3898_; 
v___x_3898_ = lean_usize_dec_lt(v_i_3886_, v_sz_3885_);
if (v___x_3898_ == 0)
{
lean_object* v___x_3899_; 
v___x_3899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3899_, 0, v_b_3887_);
return v___x_3899_;
}
else
{
lean_object* v_a_3900_; 
v_a_3900_ = lean_array_uget_borrowed(v_as_3884_, v_i_3886_);
if (lean_obj_tag(v_a_3900_) == 1)
{
lean_object* v_val_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; lean_object* v___x_3904_; 
v_val_3901_ = lean_ctor_get(v_a_3900_, 0);
v___x_3902_ = lean_unsigned_to_nat(0u);
v___x_3903_ = lean_box(0);
v___x_3904_ = lean_array_get_borrowed(v___x_3903_, v_val_3901_, v___x_3902_);
if (lean_obj_tag(v___x_3904_) == 1)
{
lean_object* v_val_3905_; lean_object* v___x_3906_; 
v_val_3905_ = lean_ctor_get(v___x_3904_, 0);
v___x_3906_ = lean_array_get_borrowed(v___x_3903_, v___x_3883_, v_val_3905_);
if (lean_obj_tag(v___x_3906_) == 0)
{
lean_object* v___x_3907_; lean_object* v___x_3908_; 
lean_dec_ref(v_b_3887_);
v___x_3907_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__2);
v___x_3908_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__2(v___x_3907_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
if (lean_obj_tag(v___x_3908_) == 0)
{
lean_object* v_a_3909_; lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_3918_; 
v_a_3909_ = lean_ctor_get(v___x_3908_, 0);
v_isSharedCheck_3918_ = !lean_is_exclusive(v___x_3908_);
if (v_isSharedCheck_3918_ == 0)
{
v___x_3911_ = v___x_3908_;
v_isShared_3912_ = v_isSharedCheck_3918_;
goto v_resetjp_3910_;
}
else
{
lean_inc(v_a_3909_);
lean_dec(v___x_3908_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_3918_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
if (lean_obj_tag(v_a_3909_) == 0)
{
lean_object* v_a_3913_; lean_object* v___x_3915_; 
v_a_3913_ = lean_ctor_get(v_a_3909_, 0);
lean_inc(v_a_3913_);
lean_dec_ref(v_a_3909_);
if (v_isShared_3912_ == 0)
{
lean_ctor_set(v___x_3911_, 0, v_a_3913_);
v___x_3915_ = v___x_3911_;
goto v_reusejp_3914_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v_a_3913_);
v___x_3915_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3914_;
}
v_reusejp_3914_:
{
return v___x_3915_;
}
}
else
{
lean_object* v_a_3917_; 
lean_del_object(v___x_3911_);
v_a_3917_ = lean_ctor_get(v_a_3909_, 0);
lean_inc(v_a_3917_);
lean_dec_ref(v_a_3909_);
v_a_3894_ = v_a_3917_;
goto v___jp_3893_;
}
}
}
else
{
lean_object* v_a_3919_; lean_object* v___x_3921_; uint8_t v_isShared_3922_; uint8_t v_isSharedCheck_3926_; 
v_a_3919_ = lean_ctor_get(v___x_3908_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v___x_3908_);
if (v_isSharedCheck_3926_ == 0)
{
v___x_3921_ = v___x_3908_;
v_isShared_3922_ = v_isSharedCheck_3926_;
goto v_resetjp_3920_;
}
else
{
lean_inc(v_a_3919_);
lean_dec(v___x_3908_);
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
else
{
lean_object* v___x_3927_; 
lean_inc_ref(v___x_3906_);
v___x_3927_ = lean_array_push(v_b_3887_, v___x_3906_);
v_a_3894_ = v___x_3927_;
goto v___jp_3893_;
}
}
else
{
lean_object* v___x_3928_; lean_object* v___x_3929_; 
v___x_3928_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__4);
v___x_3929_ = l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7(v___x_3928_, v___y_3888_, v___y_3889_, v___y_3890_, v___y_3891_);
if (lean_obj_tag(v___x_3929_) == 0)
{
lean_dec_ref(v___x_3929_);
v_a_3894_ = v_b_3887_;
goto v___jp_3893_;
}
else
{
lean_object* v_a_3930_; lean_object* v___x_3932_; uint8_t v_isShared_3933_; uint8_t v_isSharedCheck_3937_; 
lean_dec_ref(v_b_3887_);
v_a_3930_ = lean_ctor_get(v___x_3929_, 0);
v_isSharedCheck_3937_ = !lean_is_exclusive(v___x_3929_);
if (v_isSharedCheck_3937_ == 0)
{
v___x_3932_ = v___x_3929_;
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
else
{
lean_inc(v_a_3930_);
lean_dec(v___x_3929_);
v___x_3932_ = lean_box(0);
v_isShared_3933_ = v_isSharedCheck_3937_;
goto v_resetjp_3931_;
}
v_resetjp_3931_:
{
lean_object* v___x_3935_; 
if (v_isShared_3933_ == 0)
{
v___x_3935_ = v___x_3932_;
goto v_reusejp_3934_;
}
else
{
lean_object* v_reuseFailAlloc_3936_; 
v_reuseFailAlloc_3936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3936_, 0, v_a_3930_);
v___x_3935_ = v_reuseFailAlloc_3936_;
goto v_reusejp_3934_;
}
v_reusejp_3934_:
{
return v___x_3935_;
}
}
}
}
}
else
{
lean_object* v___x_3938_; lean_object* v___x_3939_; 
v___x_3938_ = lean_box(0);
v___x_3939_ = lean_array_push(v_b_3887_, v___x_3938_);
v_a_3894_ = v___x_3939_;
goto v___jp_3893_;
}
}
v___jp_3893_:
{
size_t v___x_3895_; size_t v___x_3896_; 
v___x_3895_ = ((size_t)1ULL);
v___x_3896_ = lean_usize_add(v_i_3886_, v___x_3895_);
v_i_3886_ = v___x_3896_;
v_b_3887_ = v_a_3894_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___boxed(lean_object* v___x_3940_, lean_object* v_as_3941_, lean_object* v_sz_3942_, lean_object* v_i_3943_, lean_object* v_b_3944_, lean_object* v___y_3945_, lean_object* v___y_3946_, lean_object* v___y_3947_, lean_object* v___y_3948_, lean_object* v___y_3949_){
_start:
{
size_t v_sz_boxed_3950_; size_t v_i_boxed_3951_; lean_object* v_res_3952_; 
v_sz_boxed_3950_ = lean_unbox_usize(v_sz_3942_);
lean_dec(v_sz_3942_);
v_i_boxed_3951_ = lean_unbox_usize(v_i_3943_);
lean_dec(v_i_3943_);
v_res_3952_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3940_, v_as_3941_, v_sz_boxed_3950_, v_i_boxed_3951_, v_b_3944_, v___y_3945_, v___y_3946_, v___y_3947_, v___y_3948_);
lean_dec(v___y_3948_);
lean_dec_ref(v___y_3947_);
lean_dec(v___y_3946_);
lean_dec_ref(v___y_3945_);
lean_dec_ref(v_as_3941_);
lean_dec_ref(v___x_3940_);
return v_res_3952_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3953_; lean_object* v___x_3954_; 
v___x_3953_ = lean_unsigned_to_nat(0u);
v___x_3954_ = lean_mk_empty_array_with_capacity(v___x_3953_);
return v___x_3954_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(lean_object* v_upperBound_3955_, lean_object* v___x_3956_, lean_object* v___x_3957_, lean_object* v_a_3958_, lean_object* v_b_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_){
_start:
{
uint8_t v___x_3965_; 
v___x_3965_ = lean_nat_dec_lt(v_a_3958_, v_upperBound_3955_);
if (v___x_3965_ == 0)
{
lean_object* v___x_3966_; 
lean_dec(v_a_3958_);
v___x_3966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3966_, 0, v_b_3959_);
return v___x_3966_;
}
else
{
lean_object* v___x_3967_; lean_object* v___x_3968_; size_t v_sz_3969_; size_t v___x_3970_; lean_object* v___x_3971_; 
v___x_3967_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0);
v___x_3968_ = lean_array_fget_borrowed(v___x_3956_, v_a_3958_);
v_sz_3969_ = lean_array_size(v___x_3968_);
v___x_3970_ = ((size_t)0ULL);
v___x_3971_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3(v___x_3957_, v___x_3968_, v_sz_3969_, v___x_3970_, v___x_3967_, v___y_3960_, v___y_3961_, v___y_3962_, v___y_3963_);
if (lean_obj_tag(v___x_3971_) == 0)
{
lean_object* v_a_3972_; lean_object* v___x_3973_; lean_object* v___x_3974_; lean_object* v___x_3975_; 
v_a_3972_ = lean_ctor_get(v___x_3971_, 0);
lean_inc(v_a_3972_);
lean_dec_ref(v___x_3971_);
v___x_3973_ = lean_array_push(v_b_3959_, v_a_3972_);
v___x_3974_ = lean_unsigned_to_nat(1u);
v___x_3975_ = lean_nat_add(v_a_3958_, v___x_3974_);
lean_dec(v_a_3958_);
v_a_3958_ = v___x_3975_;
v_b_3959_ = v___x_3973_;
goto _start;
}
else
{
lean_object* v_a_3977_; lean_object* v___x_3979_; uint8_t v_isShared_3980_; uint8_t v_isSharedCheck_3984_; 
lean_dec_ref(v_b_3959_);
lean_dec(v_a_3958_);
v_a_3977_ = lean_ctor_get(v___x_3971_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3971_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3979_ = v___x_3971_;
v_isShared_3980_ = v_isSharedCheck_3984_;
goto v_resetjp_3978_;
}
else
{
lean_inc(v_a_3977_);
lean_dec(v___x_3971_);
v___x_3979_ = lean_box(0);
v_isShared_3980_ = v_isSharedCheck_3984_;
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
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3977_);
v___x_3982_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3981_;
}
v_reusejp_3981_:
{
return v___x_3982_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___boxed(lean_object* v_upperBound_3985_, lean_object* v___x_3986_, lean_object* v___x_3987_, lean_object* v_a_3988_, lean_object* v_b_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_){
_start:
{
lean_object* v_res_3995_; 
v_res_3995_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_3985_, v___x_3986_, v___x_3987_, v_a_3988_, v_b_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_);
lean_dec(v___y_3993_);
lean_dec_ref(v___y_3992_);
lean_dec(v___y_3991_);
lean_dec_ref(v___y_3990_);
lean_dec_ref(v___x_3987_);
lean_dec_ref(v___x_3986_);
lean_dec(v_upperBound_3985_);
return v_res_3995_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_3996_; 
v___x_3996_ = lean_mk_string_unchecked("assertion violation: paramInfo[0]! = some paramIdx\n        ", 59, 59);
return v___x_3996_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v___x_4001_; lean_object* v___x_4002_; 
v___x_3997_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__0);
v___x_3998_ = lean_unsigned_to_nat(8u);
v___x_3999_ = lean_unsigned_to_nat(281u);
v___x_4000_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0);
v___x_4001_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4002_ = l_mkPanicMessageWithDecl(v___x_4001_, v___x_4000_, v___x_3999_, v___x_3998_, v___x_3997_);
return v___x_4002_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(lean_object* v_upperBound_4003_, lean_object* v_a_4004_, lean_object* v_b_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_){
_start:
{
lean_object* v_a_4012_; uint8_t v___x_4016_; 
v___x_4016_ = lean_nat_dec_lt(v_a_4004_, v_upperBound_4003_);
if (v___x_4016_ == 0)
{
lean_object* v___x_4017_; 
lean_dec(v_a_4004_);
v___x_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4017_, 0, v_b_4005_);
return v___x_4017_;
}
else
{
lean_object* v_snd_4018_; lean_object* v_snd_4019_; lean_object* v_snd_4020_; lean_object* v_fst_4021_; lean_object* v___x_4023_; uint8_t v_isShared_4024_; uint8_t v_isSharedCheck_4145_; 
v_snd_4018_ = lean_ctor_get(v_b_4005_, 1);
lean_inc(v_snd_4018_);
v_snd_4019_ = lean_ctor_get(v_snd_4018_, 1);
lean_inc(v_snd_4019_);
v_snd_4020_ = lean_ctor_get(v_snd_4019_, 1);
lean_inc(v_snd_4020_);
v_fst_4021_ = lean_ctor_get(v_b_4005_, 0);
v_isSharedCheck_4145_ = !lean_is_exclusive(v_b_4005_);
if (v_isSharedCheck_4145_ == 0)
{
lean_object* v_unused_4146_; 
v_unused_4146_ = lean_ctor_get(v_b_4005_, 1);
lean_dec(v_unused_4146_);
v___x_4023_ = v_b_4005_;
v_isShared_4024_ = v_isSharedCheck_4145_;
goto v_resetjp_4022_;
}
else
{
lean_inc(v_fst_4021_);
lean_dec(v_b_4005_);
v___x_4023_ = lean_box(0);
v_isShared_4024_ = v_isSharedCheck_4145_;
goto v_resetjp_4022_;
}
v_resetjp_4022_:
{
lean_object* v_fst_4025_; lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4143_; 
v_fst_4025_ = lean_ctor_get(v_snd_4018_, 0);
v_isSharedCheck_4143_ = !lean_is_exclusive(v_snd_4018_);
if (v_isSharedCheck_4143_ == 0)
{
lean_object* v_unused_4144_; 
v_unused_4144_ = lean_ctor_get(v_snd_4018_, 1);
lean_dec(v_unused_4144_);
v___x_4027_ = v_snd_4018_;
v_isShared_4028_ = v_isSharedCheck_4143_;
goto v_resetjp_4026_;
}
else
{
lean_inc(v_fst_4025_);
lean_dec(v_snd_4018_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4143_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v_fst_4029_; lean_object* v___x_4031_; uint8_t v_isShared_4032_; uint8_t v_isSharedCheck_4141_; 
v_fst_4029_ = lean_ctor_get(v_snd_4019_, 0);
v_isSharedCheck_4141_ = !lean_is_exclusive(v_snd_4019_);
if (v_isSharedCheck_4141_ == 0)
{
lean_object* v_unused_4142_; 
v_unused_4142_ = lean_ctor_get(v_snd_4019_, 1);
lean_dec(v_unused_4142_);
v___x_4031_ = v_snd_4019_;
v_isShared_4032_ = v_isSharedCheck_4141_;
goto v_resetjp_4030_;
}
else
{
lean_inc(v_fst_4029_);
lean_dec(v_snd_4019_);
v___x_4031_ = lean_box(0);
v_isShared_4032_ = v_isSharedCheck_4141_;
goto v_resetjp_4030_;
}
v_resetjp_4030_:
{
lean_object* v_array_4033_; lean_object* v_start_4034_; lean_object* v_stop_4035_; uint8_t v___x_4036_; 
v_array_4033_ = lean_ctor_get(v_snd_4020_, 0);
v_start_4034_ = lean_ctor_get(v_snd_4020_, 1);
v_stop_4035_ = lean_ctor_get(v_snd_4020_, 2);
v___x_4036_ = lean_nat_dec_lt(v_start_4034_, v_stop_4035_);
if (v___x_4036_ == 0)
{
lean_object* v___x_4038_; 
lean_dec(v_a_4004_);
if (v_isShared_4032_ == 0)
{
v___x_4038_ = v___x_4031_;
goto v_reusejp_4037_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_fst_4029_);
lean_ctor_set(v_reuseFailAlloc_4046_, 1, v_snd_4020_);
v___x_4038_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4037_;
}
v_reusejp_4037_:
{
lean_object* v___x_4040_; 
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 1, v___x_4038_);
v___x_4040_ = v___x_4027_;
goto v_reusejp_4039_;
}
else
{
lean_object* v_reuseFailAlloc_4045_; 
v_reuseFailAlloc_4045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4045_, 0, v_fst_4025_);
lean_ctor_set(v_reuseFailAlloc_4045_, 1, v___x_4038_);
v___x_4040_ = v_reuseFailAlloc_4045_;
goto v_reusejp_4039_;
}
v_reusejp_4039_:
{
lean_object* v___x_4042_; 
if (v_isShared_4024_ == 0)
{
lean_ctor_set(v___x_4023_, 1, v___x_4040_);
v___x_4042_ = v___x_4023_;
goto v_reusejp_4041_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v_fst_4021_);
lean_ctor_set(v_reuseFailAlloc_4044_, 1, v___x_4040_);
v___x_4042_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4041_;
}
v_reusejp_4041_:
{
lean_object* v___x_4043_; 
v___x_4043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4043_, 0, v___x_4042_);
return v___x_4043_;
}
}
}
}
else
{
lean_object* v___x_4048_; uint8_t v_isShared_4049_; uint8_t v_isSharedCheck_4137_; 
lean_inc(v_stop_4035_);
lean_inc(v_start_4034_);
lean_inc_ref(v_array_4033_);
v_isSharedCheck_4137_ = !lean_is_exclusive(v_snd_4020_);
if (v_isSharedCheck_4137_ == 0)
{
lean_object* v_unused_4138_; lean_object* v_unused_4139_; lean_object* v_unused_4140_; 
v_unused_4138_ = lean_ctor_get(v_snd_4020_, 2);
lean_dec(v_unused_4138_);
v_unused_4139_ = lean_ctor_get(v_snd_4020_, 1);
lean_dec(v_unused_4139_);
v_unused_4140_ = lean_ctor_get(v_snd_4020_, 0);
lean_dec(v_unused_4140_);
v___x_4048_ = v_snd_4020_;
v_isShared_4049_ = v_isSharedCheck_4137_;
goto v_resetjp_4047_;
}
else
{
lean_dec(v_snd_4020_);
v___x_4048_ = lean_box(0);
v_isShared_4049_ = v_isSharedCheck_4137_;
goto v_resetjp_4047_;
}
v_resetjp_4047_:
{
lean_object* v_array_4050_; lean_object* v_start_4051_; lean_object* v_stop_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; lean_object* v___x_4055_; lean_object* v___x_4057_; 
v_array_4050_ = lean_ctor_get(v_fst_4029_, 0);
v_start_4051_ = lean_ctor_get(v_fst_4029_, 1);
v_stop_4052_ = lean_ctor_get(v_fst_4029_, 2);
v___x_4053_ = lean_array_fget(v_array_4033_, v_start_4034_);
v___x_4054_ = lean_unsigned_to_nat(1u);
v___x_4055_ = lean_nat_add(v_start_4034_, v___x_4054_);
lean_dec(v_start_4034_);
if (v_isShared_4049_ == 0)
{
lean_ctor_set(v___x_4048_, 1, v___x_4055_);
v___x_4057_ = v___x_4048_;
goto v_reusejp_4056_;
}
else
{
lean_object* v_reuseFailAlloc_4136_; 
v_reuseFailAlloc_4136_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4136_, 0, v_array_4033_);
lean_ctor_set(v_reuseFailAlloc_4136_, 1, v___x_4055_);
lean_ctor_set(v_reuseFailAlloc_4136_, 2, v_stop_4035_);
v___x_4057_ = v_reuseFailAlloc_4136_;
goto v_reusejp_4056_;
}
v_reusejp_4056_:
{
uint8_t v___x_4058_; 
v___x_4058_ = lean_nat_dec_lt(v_start_4051_, v_stop_4052_);
if (v___x_4058_ == 0)
{
lean_object* v___x_4060_; 
lean_dec(v___x_4053_);
lean_dec(v_a_4004_);
if (v_isShared_4032_ == 0)
{
lean_ctor_set(v___x_4031_, 1, v___x_4057_);
v___x_4060_ = v___x_4031_;
goto v_reusejp_4059_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v_fst_4029_);
lean_ctor_set(v_reuseFailAlloc_4068_, 1, v___x_4057_);
v___x_4060_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4059_;
}
v_reusejp_4059_:
{
lean_object* v___x_4062_; 
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 1, v___x_4060_);
v___x_4062_ = v___x_4027_;
goto v_reusejp_4061_;
}
else
{
lean_object* v_reuseFailAlloc_4067_; 
v_reuseFailAlloc_4067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4067_, 0, v_fst_4025_);
lean_ctor_set(v_reuseFailAlloc_4067_, 1, v___x_4060_);
v___x_4062_ = v_reuseFailAlloc_4067_;
goto v_reusejp_4061_;
}
v_reusejp_4061_:
{
lean_object* v___x_4064_; 
if (v_isShared_4024_ == 0)
{
lean_ctor_set(v___x_4023_, 1, v___x_4062_);
v___x_4064_ = v___x_4023_;
goto v_reusejp_4063_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v_fst_4021_);
lean_ctor_set(v_reuseFailAlloc_4066_, 1, v___x_4062_);
v___x_4064_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4063_;
}
v_reusejp_4063_:
{
lean_object* v___x_4065_; 
v___x_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
return v___x_4065_;
}
}
}
}
else
{
lean_object* v___x_4070_; uint8_t v_isShared_4071_; uint8_t v_isSharedCheck_4132_; 
lean_inc(v_stop_4052_);
lean_inc(v_start_4051_);
lean_inc_ref(v_array_4050_);
v_isSharedCheck_4132_ = !lean_is_exclusive(v_fst_4029_);
if (v_isSharedCheck_4132_ == 0)
{
lean_object* v_unused_4133_; lean_object* v_unused_4134_; lean_object* v_unused_4135_; 
v_unused_4133_ = lean_ctor_get(v_fst_4029_, 2);
lean_dec(v_unused_4133_);
v_unused_4134_ = lean_ctor_get(v_fst_4029_, 1);
lean_dec(v_unused_4134_);
v_unused_4135_ = lean_ctor_get(v_fst_4029_, 0);
lean_dec(v_unused_4135_);
v___x_4070_ = v_fst_4029_;
v_isShared_4071_ = v_isSharedCheck_4132_;
goto v_resetjp_4069_;
}
else
{
lean_dec(v_fst_4029_);
v___x_4070_ = lean_box(0);
v_isShared_4071_ = v_isSharedCheck_4132_;
goto v_resetjp_4069_;
}
v_resetjp_4069_:
{
lean_object* v___x_4072_; lean_object* v___x_4074_; 
v___x_4072_ = lean_nat_add(v_start_4051_, v___x_4054_);
lean_dec(v_start_4051_);
if (v_isShared_4071_ == 0)
{
lean_ctor_set(v___x_4070_, 1, v___x_4072_);
v___x_4074_ = v___x_4070_;
goto v_reusejp_4073_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v_array_4050_);
lean_ctor_set(v_reuseFailAlloc_4131_, 1, v___x_4072_);
lean_ctor_set(v_reuseFailAlloc_4131_, 2, v_stop_4052_);
v___x_4074_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4073_;
}
v_reusejp_4073_:
{
if (lean_obj_tag(v___x_4053_) == 1)
{
lean_object* v_val_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4119_; 
v_val_4075_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4119_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4119_ == 0)
{
v___x_4077_ = v___x_4053_;
v_isShared_4078_ = v_isSharedCheck_4119_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_val_4075_);
lean_dec(v___x_4053_);
v___x_4077_ = lean_box(0);
v_isShared_4078_ = v_isSharedCheck_4119_;
goto v_resetjp_4076_;
}
v_resetjp_4076_:
{
lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4084_; 
v___x_4079_ = lean_unsigned_to_nat(0u);
v___x_4080_ = lean_alloc_closure((void*)(l_instDecidableEqNat___boxed), 2, 0);
v___x_4081_ = lean_box(0);
v___x_4082_ = lean_array_get(v___x_4081_, v_val_4075_, v___x_4079_);
lean_dec(v_val_4075_);
lean_inc(v_a_4004_);
if (v_isShared_4078_ == 0)
{
lean_ctor_set(v___x_4077_, 0, v_a_4004_);
v___x_4084_ = v___x_4077_;
goto v_reusejp_4083_;
}
else
{
lean_object* v_reuseFailAlloc_4118_; 
v_reuseFailAlloc_4118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4118_, 0, v_a_4004_);
v___x_4084_ = v_reuseFailAlloc_4118_;
goto v_reusejp_4083_;
}
v_reusejp_4083_:
{
uint8_t v___x_4085_; 
v___x_4085_ = l_Option_instDecidableEq___redArg(v___x_4080_, v___x_4082_, v___x_4084_);
if (v___x_4085_ == 0)
{
lean_object* v___x_4086_; lean_object* v___x_4087_; 
lean_dec_ref(v___x_4074_);
lean_dec_ref(v___x_4057_);
lean_del_object(v___x_4031_);
lean_del_object(v___x_4027_);
lean_dec(v_fst_4025_);
lean_del_object(v___x_4023_);
lean_dec(v_fst_4021_);
v___x_4086_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___closed__1);
v___x_4087_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__1(v___x_4086_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_);
if (lean_obj_tag(v___x_4087_) == 0)
{
lean_object* v_a_4088_; lean_object* v___x_4090_; uint8_t v_isShared_4091_; uint8_t v_isSharedCheck_4097_; 
v_a_4088_ = lean_ctor_get(v___x_4087_, 0);
v_isSharedCheck_4097_ = !lean_is_exclusive(v___x_4087_);
if (v_isSharedCheck_4097_ == 0)
{
v___x_4090_ = v___x_4087_;
v_isShared_4091_ = v_isSharedCheck_4097_;
goto v_resetjp_4089_;
}
else
{
lean_inc(v_a_4088_);
lean_dec(v___x_4087_);
v___x_4090_ = lean_box(0);
v_isShared_4091_ = v_isSharedCheck_4097_;
goto v_resetjp_4089_;
}
v_resetjp_4089_:
{
if (lean_obj_tag(v_a_4088_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4094_; 
lean_dec(v_a_4004_);
v_a_4092_ = lean_ctor_get(v_a_4088_, 0);
lean_inc(v_a_4092_);
lean_dec_ref(v_a_4088_);
if (v_isShared_4091_ == 0)
{
lean_ctor_set(v___x_4090_, 0, v_a_4092_);
v___x_4094_ = v___x_4090_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v_a_4092_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
return v___x_4094_;
}
}
else
{
lean_object* v_a_4096_; 
lean_del_object(v___x_4090_);
v_a_4096_ = lean_ctor_get(v_a_4088_, 0);
lean_inc(v_a_4096_);
lean_dec_ref(v_a_4088_);
v_a_4012_ = v_a_4096_;
goto v___jp_4011_;
}
}
}
else
{
lean_object* v_a_4098_; lean_object* v___x_4100_; uint8_t v_isShared_4101_; uint8_t v_isSharedCheck_4105_; 
lean_dec(v_a_4004_);
v_a_4098_ = lean_ctor_get(v___x_4087_, 0);
v_isSharedCheck_4105_ = !lean_is_exclusive(v___x_4087_);
if (v_isSharedCheck_4105_ == 0)
{
v___x_4100_ = v___x_4087_;
v_isShared_4101_ = v_isSharedCheck_4105_;
goto v_resetjp_4099_;
}
else
{
lean_inc(v_a_4098_);
lean_dec(v___x_4087_);
v___x_4100_ = lean_box(0);
v_isShared_4101_ = v_isSharedCheck_4105_;
goto v_resetjp_4099_;
}
v_resetjp_4099_:
{
lean_object* v___x_4103_; 
if (v_isShared_4101_ == 0)
{
v___x_4103_ = v___x_4100_;
goto v_reusejp_4102_;
}
else
{
lean_object* v_reuseFailAlloc_4104_; 
v_reuseFailAlloc_4104_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4104_, 0, v_a_4098_);
v___x_4103_ = v_reuseFailAlloc_4104_;
goto v_reusejp_4102_;
}
v_reusejp_4102_:
{
return v___x_4103_;
}
}
}
}
else
{
lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4110_; 
lean_inc(v_fst_4025_);
v___x_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4106_, 0, v_fst_4025_);
v___x_4107_ = lean_array_push(v_fst_4021_, v___x_4106_);
v___x_4108_ = lean_nat_add(v_fst_4025_, v___x_4054_);
lean_dec(v_fst_4025_);
if (v_isShared_4032_ == 0)
{
lean_ctor_set(v___x_4031_, 1, v___x_4057_);
lean_ctor_set(v___x_4031_, 0, v___x_4074_);
v___x_4110_ = v___x_4031_;
goto v_reusejp_4109_;
}
else
{
lean_object* v_reuseFailAlloc_4117_; 
v_reuseFailAlloc_4117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4117_, 0, v___x_4074_);
lean_ctor_set(v_reuseFailAlloc_4117_, 1, v___x_4057_);
v___x_4110_ = v_reuseFailAlloc_4117_;
goto v_reusejp_4109_;
}
v_reusejp_4109_:
{
lean_object* v___x_4112_; 
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 1, v___x_4110_);
lean_ctor_set(v___x_4027_, 0, v___x_4108_);
v___x_4112_ = v___x_4027_;
goto v_reusejp_4111_;
}
else
{
lean_object* v_reuseFailAlloc_4116_; 
v_reuseFailAlloc_4116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4116_, 0, v___x_4108_);
lean_ctor_set(v_reuseFailAlloc_4116_, 1, v___x_4110_);
v___x_4112_ = v_reuseFailAlloc_4116_;
goto v_reusejp_4111_;
}
v_reusejp_4111_:
{
lean_object* v___x_4114_; 
if (v_isShared_4024_ == 0)
{
lean_ctor_set(v___x_4023_, 1, v___x_4112_);
lean_ctor_set(v___x_4023_, 0, v___x_4107_);
v___x_4114_ = v___x_4023_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v___x_4107_);
lean_ctor_set(v_reuseFailAlloc_4115_, 1, v___x_4112_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
v_a_4012_ = v___x_4114_;
goto v___jp_4011_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4123_; 
lean_dec(v___x_4053_);
v___x_4120_ = lean_box(0);
v___x_4121_ = lean_array_push(v_fst_4021_, v___x_4120_);
if (v_isShared_4032_ == 0)
{
lean_ctor_set(v___x_4031_, 1, v___x_4057_);
lean_ctor_set(v___x_4031_, 0, v___x_4074_);
v___x_4123_ = v___x_4031_;
goto v_reusejp_4122_;
}
else
{
lean_object* v_reuseFailAlloc_4130_; 
v_reuseFailAlloc_4130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4130_, 0, v___x_4074_);
lean_ctor_set(v_reuseFailAlloc_4130_, 1, v___x_4057_);
v___x_4123_ = v_reuseFailAlloc_4130_;
goto v_reusejp_4122_;
}
v_reusejp_4122_:
{
lean_object* v___x_4125_; 
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 1, v___x_4123_);
v___x_4125_ = v___x_4027_;
goto v_reusejp_4124_;
}
else
{
lean_object* v_reuseFailAlloc_4129_; 
v_reuseFailAlloc_4129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4129_, 0, v_fst_4025_);
lean_ctor_set(v_reuseFailAlloc_4129_, 1, v___x_4123_);
v___x_4125_ = v_reuseFailAlloc_4129_;
goto v_reusejp_4124_;
}
v_reusejp_4124_:
{
lean_object* v___x_4127_; 
if (v_isShared_4024_ == 0)
{
lean_ctor_set(v___x_4023_, 1, v___x_4125_);
lean_ctor_set(v___x_4023_, 0, v___x_4121_);
v___x_4127_ = v___x_4023_;
goto v_reusejp_4126_;
}
else
{
lean_object* v_reuseFailAlloc_4128_; 
v_reuseFailAlloc_4128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4128_, 0, v___x_4121_);
lean_ctor_set(v_reuseFailAlloc_4128_, 1, v___x_4125_);
v___x_4127_ = v_reuseFailAlloc_4128_;
goto v_reusejp_4126_;
}
v_reusejp_4126_:
{
v_a_4012_ = v___x_4127_;
goto v___jp_4011_;
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
v___jp_4011_:
{
lean_object* v___x_4013_; lean_object* v___x_4014_; 
v___x_4013_ = lean_unsigned_to_nat(1u);
v___x_4014_ = lean_nat_add(v_a_4004_, v___x_4013_);
lean_dec(v_a_4004_);
v_a_4004_ = v___x_4014_;
v_b_4005_ = v_a_4012_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg___boxed(lean_object* v_upperBound_4147_, lean_object* v_a_4148_, lean_object* v_b_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_){
_start:
{
lean_object* v_res_4155_; 
v_res_4155_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4147_, v_a_4148_, v_b_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_);
lean_dec(v___y_4153_);
lean_dec_ref(v___y_4152_);
lean_dec(v___y_4151_);
lean_dec_ref(v___y_4150_);
lean_dec(v_upperBound_4147_);
return v_res_4155_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4156_; 
v___x_4156_ = lean_mk_string_unchecked("assertion violation: xs.size = paramInfos.size\n\n    ", 52, 52);
return v___x_4156_;
}
}
static lean_object* _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; 
v___x_4157_ = lean_obj_once(&l_Lean_Elab_getFixedParamPerms___lam__0___closed__0, &l_Lean_Elab_getFixedParamPerms___lam__0___closed__0_once, _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__0);
v___x_4158_ = lean_unsigned_to_nat(4u);
v___x_4159_ = lean_unsigned_to_nat(275u);
v___x_4160_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_getFixedParamPerms_spec__3___closed__0);
v___x_4161_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4162_ = l_mkPanicMessageWithDecl(v___x_4161_, v___x_4160_, v___x_4159_, v___x_4158_, v___x_4157_);
return v___x_4162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0(lean_object* v_a_4163_, lean_object* v___x_4164_, lean_object* v___x_4165_, lean_object* v_xs_4166_, lean_object* v_x_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_){
_start:
{
lean_object* v_graph_4173_; lean_object* v_revDeps_4174_; lean_object* v___x_4176_; uint8_t v_isShared_4177_; uint8_t v_isSharedCheck_4227_; 
v_graph_4173_ = lean_ctor_get(v_a_4163_, 0);
v_revDeps_4174_ = lean_ctor_get(v_a_4163_, 1);
v_isSharedCheck_4227_ = !lean_is_exclusive(v_a_4163_);
if (v_isSharedCheck_4227_ == 0)
{
v___x_4176_ = v_a_4163_;
v_isShared_4177_ = v_isSharedCheck_4227_;
goto v_resetjp_4175_;
}
else
{
lean_inc(v_revDeps_4174_);
lean_inc(v_graph_4173_);
lean_dec(v_a_4163_);
v___x_4176_ = lean_box(0);
v_isShared_4177_ = v_isSharedCheck_4227_;
goto v_resetjp_4175_;
}
v_resetjp_4175_:
{
lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; uint8_t v___x_4181_; 
v___x_4178_ = lean_array_get_borrowed(v___x_4164_, v_graph_4173_, v___x_4165_);
v___x_4179_ = lean_array_get_size(v_xs_4166_);
v___x_4180_ = lean_array_get_size(v___x_4178_);
v___x_4181_ = lean_nat_dec_eq(v___x_4179_, v___x_4180_);
if (v___x_4181_ == 0)
{
lean_object* v___x_4182_; lean_object* v___x_4183_; 
lean_del_object(v___x_4176_);
lean_dec_ref(v_revDeps_4174_);
lean_dec_ref(v_graph_4173_);
lean_dec_ref(v_xs_4166_);
lean_dec(v___x_4165_);
v___x_4182_ = lean_obj_once(&l_Lean_Elab_getFixedParamPerms___lam__0___closed__1, &l_Lean_Elab_getFixedParamPerms___lam__0___closed__1_once, _init_l_Lean_Elab_getFixedParamPerms___lam__0___closed__1);
v___x_4183_ = l_panic___at___00Lean_Elab_getFixedParamPerms_spec__0(v___x_4182_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_);
return v___x_4183_;
}
else
{
lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4188_; 
v___x_4184_ = lean_mk_empty_array_with_capacity(v___x_4165_);
lean_inc_n(v___x_4165_, 2);
v___x_4185_ = l_Array_toSubarray___redArg(v_xs_4166_, v___x_4165_, v___x_4179_);
lean_inc(v___x_4178_);
v___x_4186_ = l_Array_toSubarray___redArg(v___x_4178_, v___x_4165_, v___x_4180_);
if (v_isShared_4177_ == 0)
{
lean_ctor_set(v___x_4176_, 1, v___x_4186_);
lean_ctor_set(v___x_4176_, 0, v___x_4185_);
v___x_4188_ = v___x_4176_;
goto v_reusejp_4187_;
}
else
{
lean_object* v_reuseFailAlloc_4226_; 
v_reuseFailAlloc_4226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4226_, 0, v___x_4185_);
lean_ctor_set(v_reuseFailAlloc_4226_, 1, v___x_4186_);
v___x_4188_ = v_reuseFailAlloc_4226_;
goto v_reusejp_4187_;
}
v_reusejp_4187_:
{
lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; 
lean_inc(v___x_4165_);
v___x_4189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4165_);
lean_ctor_set(v___x_4189_, 1, v___x_4188_);
v___x_4190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4190_, 0, v___x_4184_);
lean_ctor_set(v___x_4190_, 1, v___x_4189_);
v___x_4191_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v___x_4179_, v___x_4165_, v___x_4190_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_);
if (lean_obj_tag(v___x_4191_) == 0)
{
lean_object* v_a_4192_; lean_object* v_snd_4193_; lean_object* v_fst_4194_; lean_object* v_fst_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; 
v_a_4192_ = lean_ctor_get(v___x_4191_, 0);
lean_inc(v_a_4192_);
lean_dec_ref(v___x_4191_);
v_snd_4193_ = lean_ctor_get(v_a_4192_, 1);
lean_inc(v_snd_4193_);
v_fst_4194_ = lean_ctor_get(v_a_4192_, 0);
lean_inc_n(v_fst_4194_, 2);
lean_dec(v_a_4192_);
v_fst_4195_ = lean_ctor_get(v_snd_4193_, 0);
lean_inc(v_fst_4195_);
lean_dec(v_snd_4193_);
v___x_4196_ = lean_unsigned_to_nat(1u);
v___x_4197_ = lean_array_get_size(v_graph_4173_);
v___x_4198_ = lean_mk_empty_array_with_capacity(v___x_4196_);
v___x_4199_ = lean_array_push(v___x_4198_, v_fst_4194_);
v___x_4200_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v___x_4197_, v_graph_4173_, v_fst_4194_, v___x_4196_, v___x_4199_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_);
lean_dec(v_fst_4194_);
lean_dec_ref(v_graph_4173_);
if (lean_obj_tag(v___x_4200_) == 0)
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4209_; 
v_a_4201_ = lean_ctor_get(v___x_4200_, 0);
v_isSharedCheck_4209_ = !lean_is_exclusive(v___x_4200_);
if (v_isSharedCheck_4209_ == 0)
{
v___x_4203_ = v___x_4200_;
v_isShared_4204_ = v_isSharedCheck_4209_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_4200_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4209_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
lean_object* v___x_4205_; lean_object* v___x_4207_; 
v___x_4205_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4205_, 0, v_fst_4195_);
lean_ctor_set(v___x_4205_, 1, v_a_4201_);
lean_ctor_set(v___x_4205_, 2, v_revDeps_4174_);
if (v_isShared_4204_ == 0)
{
lean_ctor_set(v___x_4203_, 0, v___x_4205_);
v___x_4207_ = v___x_4203_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v___x_4205_);
v___x_4207_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
return v___x_4207_;
}
}
}
else
{
lean_object* v_a_4210_; lean_object* v___x_4212_; uint8_t v_isShared_4213_; uint8_t v_isSharedCheck_4217_; 
lean_dec(v_fst_4195_);
lean_dec_ref(v_revDeps_4174_);
v_a_4210_ = lean_ctor_get(v___x_4200_, 0);
v_isSharedCheck_4217_ = !lean_is_exclusive(v___x_4200_);
if (v_isSharedCheck_4217_ == 0)
{
v___x_4212_ = v___x_4200_;
v_isShared_4213_ = v_isSharedCheck_4217_;
goto v_resetjp_4211_;
}
else
{
lean_inc(v_a_4210_);
lean_dec(v___x_4200_);
v___x_4212_ = lean_box(0);
v_isShared_4213_ = v_isSharedCheck_4217_;
goto v_resetjp_4211_;
}
v_resetjp_4211_:
{
lean_object* v___x_4215_; 
if (v_isShared_4213_ == 0)
{
v___x_4215_ = v___x_4212_;
goto v_reusejp_4214_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v_a_4210_);
v___x_4215_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4214_;
}
v_reusejp_4214_:
{
return v___x_4215_;
}
}
}
}
else
{
lean_object* v_a_4218_; lean_object* v___x_4220_; uint8_t v_isShared_4221_; uint8_t v_isSharedCheck_4225_; 
lean_dec_ref(v_revDeps_4174_);
lean_dec_ref(v_graph_4173_);
v_a_4218_ = lean_ctor_get(v___x_4191_, 0);
v_isSharedCheck_4225_ = !lean_is_exclusive(v___x_4191_);
if (v_isSharedCheck_4225_ == 0)
{
v___x_4220_ = v___x_4191_;
v_isShared_4221_ = v_isSharedCheck_4225_;
goto v_resetjp_4219_;
}
else
{
lean_inc(v_a_4218_);
lean_dec(v___x_4191_);
v___x_4220_ = lean_box(0);
v_isShared_4221_ = v_isSharedCheck_4225_;
goto v_resetjp_4219_;
}
v_resetjp_4219_:
{
lean_object* v___x_4223_; 
if (v_isShared_4221_ == 0)
{
v___x_4223_ = v___x_4220_;
goto v_reusejp_4222_;
}
else
{
lean_object* v_reuseFailAlloc_4224_; 
v_reuseFailAlloc_4224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4224_, 0, v_a_4218_);
v___x_4223_ = v_reuseFailAlloc_4224_;
goto v_reusejp_4222_;
}
v_reusejp_4222_:
{
return v___x_4223_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___lam__0___boxed(lean_object* v_a_4228_, lean_object* v___x_4229_, lean_object* v___x_4230_, lean_object* v_xs_4231_, lean_object* v_x_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_){
_start:
{
lean_object* v_res_4238_; 
v_res_4238_ = l_Lean_Elab_getFixedParamPerms___lam__0(v_a_4228_, v___x_4229_, v___x_4230_, v_xs_4231_, v_x_4232_, v___y_4233_, v___y_4234_, v___y_4235_, v___y_4236_);
lean_dec(v___y_4236_);
lean_dec_ref(v___y_4235_);
lean_dec(v___y_4234_);
lean_dec_ref(v___y_4233_);
lean_dec_ref(v_x_4232_);
lean_dec_ref(v___x_4229_);
return v_res_4238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms(lean_object* v_preDefs_4239_, lean_object* v_a_4240_, lean_object* v_a_4241_, lean_object* v_a_4242_, lean_object* v_a_4243_){
_start:
{
lean_object* v___x_4245_; 
lean_inc_ref(v_preDefs_4239_);
v___x_4245_ = l_Lean_Elab_getFixedParamsInfo(v_preDefs_4239_, v_a_4240_, v_a_4241_, v_a_4242_, v_a_4243_);
if (lean_obj_tag(v___x_4245_) == 0)
{
lean_object* v_a_4246_; lean_object* v___x_4247_; lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v_value_4250_; lean_object* v___x_4251_; lean_object* v___f_4252_; uint8_t v___x_4253_; lean_object* v___x_4254_; 
v_a_4246_ = lean_ctor_get(v___x_4245_, 0);
lean_inc(v_a_4246_);
lean_dec_ref(v___x_4245_);
v___x_4247_ = l_Lean_Elab_instInhabitedPreDefinition_default;
v___x_4248_ = lean_unsigned_to_nat(0u);
v___x_4249_ = lean_array_get(v___x_4247_, v_preDefs_4239_, v___x_4248_);
lean_dec_ref(v_preDefs_4239_);
v_value_4250_ = lean_ctor_get(v___x_4249_, 7);
lean_inc_ref(v_value_4250_);
lean_dec(v___x_4249_);
v___x_4251_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0, &l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_mayBeFixed___closed__0);
v___f_4252_ = lean_alloc_closure((void*)(l_Lean_Elab_getFixedParamPerms___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4252_, 0, v_a_4246_);
lean_closure_set(v___f_4252_, 1, v___x_4251_);
lean_closure_set(v___f_4252_, 2, v___x_4248_);
v___x_4253_ = 0;
v___x_4254_ = l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg(v_value_4250_, v___f_4252_, v___x_4253_, v_a_4240_, v_a_4241_, v_a_4242_, v_a_4243_);
return v___x_4254_;
}
else
{
lean_object* v_a_4255_; lean_object* v___x_4257_; uint8_t v_isShared_4258_; uint8_t v_isSharedCheck_4262_; 
lean_dec_ref(v_preDefs_4239_);
v_a_4255_ = lean_ctor_get(v___x_4245_, 0);
v_isSharedCheck_4262_ = !lean_is_exclusive(v___x_4245_);
if (v_isSharedCheck_4262_ == 0)
{
v___x_4257_ = v___x_4245_;
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
else
{
lean_inc(v_a_4255_);
lean_dec(v___x_4245_);
v___x_4257_ = lean_box(0);
v_isShared_4258_ = v_isSharedCheck_4262_;
goto v_resetjp_4256_;
}
v_resetjp_4256_:
{
lean_object* v___x_4260_; 
if (v_isShared_4258_ == 0)
{
v___x_4260_ = v___x_4257_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4261_; 
v_reuseFailAlloc_4261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4261_, 0, v_a_4255_);
v___x_4260_ = v_reuseFailAlloc_4261_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
return v___x_4260_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getFixedParamPerms___boxed(lean_object* v_preDefs_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_, lean_object* v_a_4266_, lean_object* v_a_4267_, lean_object* v_a_4268_){
_start:
{
lean_object* v_res_4269_; 
v_res_4269_ = l_Lean_Elab_getFixedParamPerms(v_preDefs_4263_, v_a_4264_, v_a_4265_, v_a_4266_, v_a_4267_);
lean_dec(v_a_4267_);
lean_dec_ref(v_a_4266_);
lean_dec(v_a_4265_);
lean_dec_ref(v_a_4264_);
return v_res_4269_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(lean_object* v_upperBound_4270_, lean_object* v___x_4271_, lean_object* v___x_4272_, lean_object* v_inst_4273_, lean_object* v_R_4274_, lean_object* v_a_4275_, lean_object* v_b_4276_, lean_object* v_c_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_){
_start:
{
lean_object* v___x_4283_; 
v___x_4283_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg(v_upperBound_4270_, v___x_4271_, v___x_4272_, v_a_4275_, v_b_4276_, v___y_4278_, v___y_4279_, v___y_4280_, v___y_4281_);
return v___x_4283_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___boxed(lean_object* v_upperBound_4284_, lean_object* v___x_4285_, lean_object* v___x_4286_, lean_object* v_inst_4287_, lean_object* v_R_4288_, lean_object* v_a_4289_, lean_object* v_b_4290_, lean_object* v_c_4291_, lean_object* v___y_4292_, lean_object* v___y_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4(v_upperBound_4284_, v___x_4285_, v___x_4286_, v_inst_4287_, v_R_4288_, v_a_4289_, v_b_4290_, v_c_4291_, v___y_4292_, v___y_4293_, v___y_4294_, v___y_4295_);
lean_dec(v___y_4295_);
lean_dec_ref(v___y_4294_);
lean_dec(v___y_4293_);
lean_dec_ref(v___y_4292_);
lean_dec_ref(v___x_4286_);
lean_dec_ref(v___x_4285_);
lean_dec(v_upperBound_4284_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(lean_object* v_upperBound_4298_, lean_object* v_inst_4299_, lean_object* v_R_4300_, lean_object* v_a_4301_, lean_object* v_b_4302_, lean_object* v_c_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_){
_start:
{
lean_object* v___x_4309_; 
v___x_4309_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___redArg(v_upperBound_4298_, v_a_4301_, v_b_4302_, v___y_4304_, v___y_4305_, v___y_4306_, v___y_4307_);
return v___x_4309_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5___boxed(lean_object* v_upperBound_4310_, lean_object* v_inst_4311_, lean_object* v_R_4312_, lean_object* v_a_4313_, lean_object* v_b_4314_, lean_object* v_c_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_, lean_object* v___y_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_){
_start:
{
lean_object* v_res_4321_; 
v_res_4321_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__5(v_upperBound_4310_, v_inst_4311_, v_R_4312_, v_a_4313_, v_b_4314_, v_c_4315_, v___y_4316_, v___y_4317_, v___y_4318_, v___y_4319_);
lean_dec(v___y_4319_);
lean_dec_ref(v___y_4318_);
lean_dec(v___y_4317_);
lean_dec_ref(v___y_4316_);
lean_dec(v_upperBound_4310_);
return v_res_4321_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(lean_object* v_as_4322_, size_t v_i_4323_, size_t v_stop_4324_, lean_object* v_b_4325_){
_start:
{
uint8_t v___x_4326_; 
v___x_4326_ = lean_usize_dec_eq(v_i_4323_, v_stop_4324_);
if (v___x_4326_ == 0)
{
size_t v___x_4327_; size_t v___x_4328_; lean_object* v___x_4329_; 
v___x_4327_ = ((size_t)1ULL);
v___x_4328_ = lean_usize_sub(v_i_4323_, v___x_4327_);
v___x_4329_ = lean_array_uget_borrowed(v_as_4322_, v___x_4328_);
if (lean_obj_tag(v___x_4329_) == 0)
{
v_i_4323_ = v___x_4328_;
goto _start;
}
else
{
lean_object* v___x_4331_; lean_object* v___x_4332_; 
v___x_4331_ = lean_unsigned_to_nat(1u);
v___x_4332_ = lean_nat_add(v_b_4325_, v___x_4331_);
lean_dec(v_b_4325_);
v_i_4323_ = v___x_4328_;
v_b_4325_ = v___x_4332_;
goto _start;
}
}
else
{
return v_b_4325_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0___boxed(lean_object* v_as_4334_, lean_object* v_i_4335_, lean_object* v_stop_4336_, lean_object* v_b_4337_){
_start:
{
size_t v_i_boxed_4338_; size_t v_stop_boxed_4339_; lean_object* v_res_4340_; 
v_i_boxed_4338_ = lean_unbox_usize(v_i_4335_);
lean_dec(v_i_4335_);
v_stop_boxed_4339_ = lean_unbox_usize(v_stop_4336_);
lean_dec(v_stop_4336_);
v_res_4340_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_as_4334_, v_i_boxed_4338_, v_stop_boxed_4339_, v_b_4337_);
lean_dec_ref(v_as_4334_);
return v_res_4340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed(lean_object* v_perm_4341_){
_start:
{
lean_object* v___x_4342_; lean_object* v___x_4343_; uint8_t v___x_4344_; 
v___x_4342_ = lean_unsigned_to_nat(0u);
v___x_4343_ = lean_array_get_size(v_perm_4341_);
v___x_4344_ = lean_nat_dec_lt(v___x_4342_, v___x_4343_);
if (v___x_4344_ == 0)
{
return v___x_4342_;
}
else
{
size_t v___x_4345_; size_t v___x_4346_; lean_object* v___x_4347_; 
v___x_4345_ = lean_usize_of_nat(v___x_4343_);
v___x_4346_ = ((size_t)0ULL);
v___x_4347_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Elab_FixedParamPerm_numFixed_spec__0(v_perm_4341_, v___x_4345_, v___x_4346_, v___x_4342_);
return v___x_4347_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_numFixed___boxed(lean_object* v_perm_4348_){
_start:
{
lean_object* v_res_4349_; 
v_res_4349_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4348_);
lean_dec_ref(v_perm_4348_);
return v_res_4349_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerm_isFixed(lean_object* v_perm_4350_, lean_object* v_i_4351_){
_start:
{
lean_object* v___x_4352_; uint8_t v___x_4353_; 
v___x_4352_ = lean_array_get_size(v_perm_4350_);
v___x_4353_ = lean_nat_dec_lt(v_i_4351_, v___x_4352_);
if (v___x_4353_ == 0)
{
return v___x_4353_;
}
else
{
lean_object* v___x_4354_; 
v___x_4354_ = lean_array_fget_borrowed(v_perm_4350_, v_i_4351_);
if (lean_obj_tag(v___x_4354_) == 0)
{
uint8_t v___x_4355_; 
v___x_4355_ = 0;
return v___x_4355_;
}
else
{
return v___x_4353_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_isFixed___boxed(lean_object* v_perm_4356_, lean_object* v_i_4357_){
_start:
{
uint8_t v_res_4358_; lean_object* v_r_4359_; 
v_res_4358_ = l_Lean_Elab_FixedParamPerm_isFixed(v_perm_4356_, v_i_4357_);
lean_dec(v_i_4357_);
lean_dec_ref(v_perm_4356_);
v_r_4359_ = lean_box(v_res_4358_);
return v_r_4359_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(lean_object* v_msg_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_){
_start:
{
lean_object* v___f_4366_; lean_object* v___x_1076__overap_4367_; lean_object* v___x_4368_; 
v___f_4366_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_1076__overap_4367_ = lean_panic_fn_borrowed(v___f_4366_, v_msg_4360_);
lean_inc(v___y_4364_);
lean_inc_ref(v___y_4363_);
lean_inc(v___y_4362_);
lean_inc_ref(v___y_4361_);
v___x_4368_ = lean_apply_5(v___x_1076__overap_4367_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_, lean_box(0));
return v___x_4368_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg___boxed(lean_object* v_msg_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_){
_start:
{
lean_object* v_res_4375_; 
v_res_4375_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4369_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_);
lean_dec(v___y_4373_);
lean_dec_ref(v___y_4372_);
lean_dec(v___y_4371_);
lean_dec_ref(v___y_4370_);
return v_res_4375_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(lean_object* v_00_u03b1_4376_, lean_object* v_msg_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_){
_start:
{
lean_object* v___x_4383_; 
v___x_4383_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v_msg_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_);
return v___x_4383_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___boxed(lean_object* v_00_u03b1_4384_, lean_object* v_msg_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_){
_start:
{
lean_object* v_res_4391_; 
v_res_4391_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0(v_00_u03b1_4384_, v_msg_4385_, v___y_4386_, v___y_4387_, v___y_4388_, v___y_4389_);
lean_dec(v___y_4389_);
lean_dec_ref(v___y_4388_);
lean_dec(v___y_4387_);
lean_dec_ref(v___y_4386_);
return v_res_4391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(lean_object* v_type_4392_, lean_object* v_maxFVars_x3f_4393_, lean_object* v_k_4394_, uint8_t v_cleanupAnnotations_4395_, uint8_t v_whnfType_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_){
_start:
{
lean_object* v___f_4402_; lean_object* v___x_4403_; 
v___f_4402_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4402_, 0, v_k_4394_);
v___x_4403_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAux(lean_box(0), v_type_4392_, v_maxFVars_x3f_4393_, v___f_4402_, v_cleanupAnnotations_4395_, v_whnfType_4396_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_);
if (lean_obj_tag(v___x_4403_) == 0)
{
lean_object* v_a_4404_; lean_object* v___x_4406_; uint8_t v_isShared_4407_; uint8_t v_isSharedCheck_4411_; 
v_a_4404_ = lean_ctor_get(v___x_4403_, 0);
v_isSharedCheck_4411_ = !lean_is_exclusive(v___x_4403_);
if (v_isSharedCheck_4411_ == 0)
{
v___x_4406_ = v___x_4403_;
v_isShared_4407_ = v_isSharedCheck_4411_;
goto v_resetjp_4405_;
}
else
{
lean_inc(v_a_4404_);
lean_dec(v___x_4403_);
v___x_4406_ = lean_box(0);
v_isShared_4407_ = v_isSharedCheck_4411_;
goto v_resetjp_4405_;
}
v_resetjp_4405_:
{
lean_object* v___x_4409_; 
if (v_isShared_4407_ == 0)
{
v___x_4409_ = v___x_4406_;
goto v_reusejp_4408_;
}
else
{
lean_object* v_reuseFailAlloc_4410_; 
v_reuseFailAlloc_4410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4410_, 0, v_a_4404_);
v___x_4409_ = v_reuseFailAlloc_4410_;
goto v_reusejp_4408_;
}
v_reusejp_4408_:
{
return v___x_4409_;
}
}
}
else
{
lean_object* v_a_4412_; lean_object* v___x_4414_; uint8_t v_isShared_4415_; uint8_t v_isSharedCheck_4419_; 
v_a_4412_ = lean_ctor_get(v___x_4403_, 0);
v_isSharedCheck_4419_ = !lean_is_exclusive(v___x_4403_);
if (v_isSharedCheck_4419_ == 0)
{
v___x_4414_ = v___x_4403_;
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
else
{
lean_inc(v_a_4412_);
lean_dec(v___x_4403_);
v___x_4414_ = lean_box(0);
v_isShared_4415_ = v_isSharedCheck_4419_;
goto v_resetjp_4413_;
}
v_resetjp_4413_:
{
lean_object* v___x_4417_; 
if (v_isShared_4415_ == 0)
{
v___x_4417_ = v___x_4414_;
goto v_reusejp_4416_;
}
else
{
lean_object* v_reuseFailAlloc_4418_; 
v_reuseFailAlloc_4418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4418_, 0, v_a_4412_);
v___x_4417_ = v_reuseFailAlloc_4418_;
goto v_reusejp_4416_;
}
v_reusejp_4416_:
{
return v___x_4417_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg___boxed(lean_object* v_type_4420_, lean_object* v_maxFVars_x3f_4421_, lean_object* v_k_4422_, lean_object* v_cleanupAnnotations_4423_, lean_object* v_whnfType_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4430_; uint8_t v_whnfType_boxed_4431_; lean_object* v_res_4432_; 
v_cleanupAnnotations_boxed_4430_ = lean_unbox(v_cleanupAnnotations_4423_);
v_whnfType_boxed_4431_ = lean_unbox(v_whnfType_4424_);
v_res_4432_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4420_, v_maxFVars_x3f_4421_, v_k_4422_, v_cleanupAnnotations_boxed_4430_, v_whnfType_boxed_4431_, v___y_4425_, v___y_4426_, v___y_4427_, v___y_4428_);
lean_dec(v___y_4428_);
lean_dec_ref(v___y_4427_);
lean_dec(v___y_4426_);
lean_dec_ref(v___y_4425_);
return v_res_4432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(lean_object* v_00_u03b1_4433_, lean_object* v_type_4434_, lean_object* v_maxFVars_x3f_4435_, lean_object* v_k_4436_, uint8_t v_cleanupAnnotations_4437_, uint8_t v_whnfType_4438_, lean_object* v___y_4439_, lean_object* v___y_4440_, lean_object* v___y_4441_, lean_object* v___y_4442_){
_start:
{
lean_object* v___x_4444_; 
v___x_4444_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4434_, v_maxFVars_x3f_4435_, v_k_4436_, v_cleanupAnnotations_4437_, v_whnfType_4438_, v___y_4439_, v___y_4440_, v___y_4441_, v___y_4442_);
return v___x_4444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___boxed(lean_object* v_00_u03b1_4445_, lean_object* v_type_4446_, lean_object* v_maxFVars_x3f_4447_, lean_object* v_k_4448_, lean_object* v_cleanupAnnotations_4449_, lean_object* v_whnfType_4450_, lean_object* v___y_4451_, lean_object* v___y_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4456_; uint8_t v_whnfType_boxed_4457_; lean_object* v_res_4458_; 
v_cleanupAnnotations_boxed_4456_ = lean_unbox(v_cleanupAnnotations_4449_);
v_whnfType_boxed_4457_ = lean_unbox(v_whnfType_4450_);
v_res_4458_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1(v_00_u03b1_4445_, v_type_4446_, v_maxFVars_x3f_4447_, v_k_4448_, v_cleanupAnnotations_boxed_4456_, v_whnfType_boxed_4457_, v___y_4451_, v___y_4452_, v___y_4453_, v___y_4454_);
lean_dec(v___y_4454_);
lean_dec_ref(v___y_4453_);
lean_dec(v___y_4452_);
lean_dec_ref(v___y_4451_);
return v_res_4458_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_4459_; 
v___x_4459_ = lean_mk_string_unchecked("_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.forallTelescopeImpl.go", 94, 94);
return v___x_4459_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_4460_; 
v___x_4460_ = lean_mk_string_unchecked("assertion violation: type.isForall\n      ", 41, 41);
return v___x_4460_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v___x_4465_; lean_object* v___x_4466_; 
v___x_4461_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__1);
v___x_4462_ = lean_unsigned_to_nat(6u);
v___x_4463_ = lean_unsigned_to_nat(329u);
v___x_4464_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0);
v___x_4465_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4466_ = l_mkPanicMessageWithDecl(v___x_4465_, v___x_4464_, v___x_4463_, v___x_4462_, v___x_4461_);
return v___x_4466_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3(void){
_start:
{
lean_object* v___x_4467_; lean_object* v___x_4468_; 
v___x_4467_ = lean_unsigned_to_nat(1u);
v___x_4468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4468_, 0, v___x_4467_);
return v___x_4468_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4469_; 
v___x_4469_ = lean_mk_string_unchecked("assertion violation: xs'.size = 1\n        ", 42, 42);
return v___x_4469_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; 
v___x_4470_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__0);
v___x_4471_ = lean_unsigned_to_nat(8u);
v___x_4472_ = lean_unsigned_to_nat(322u);
v___x_4473_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0);
v___x_4474_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4475_ = l_mkPanicMessageWithDecl(v___x_4474_, v___x_4473_, v___x_4472_, v___x_4471_, v___x_4470_);
return v___x_4475_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4476_; 
v___x_4476_ = lean_mk_string_unchecked("assertion violation: fixedParamIdx < xs.size\n        ", 53, 53);
return v___x_4476_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; lean_object* v___x_4482_; 
v___x_4477_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2);
v___x_4478_ = lean_unsigned_to_nat(8u);
v___x_4479_ = lean_unsigned_to_nat(325u);
v___x_4480_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0);
v___x_4481_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4482_ = l_mkPanicMessageWithDecl(v___x_4481_, v___x_4480_, v___x_4479_, v___x_4478_, v___x_4477_);
return v___x_4482_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_4483_; 
v___x_4483_ = lean_mk_string_unchecked("assertion violation: !( __do_lift._@.Lean.Elab.PreDefinition.FixedParams.1957017664._hygCtx._hyg.102.0 ).hasLooseBVars\n        ", 127, 127);
return v___x_4483_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; 
v___x_4484_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__4);
v___x_4485_ = lean_unsigned_to_nat(8u);
v___x_4486_ = lean_unsigned_to_nat(324u);
v___x_4487_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__0);
v___x_4488_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4489_ = l_mkPanicMessageWithDecl(v___x_4488_, v___x_4487_, v___x_4486_, v___x_4485_, v___x_4484_);
return v___x_4489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(lean_object* v___x_4490_, lean_object* v_xs_4491_, lean_object* v_val_4492_, lean_object* v_i_4493_, lean_object* v_perm_4494_, lean_object* v_k_4495_, lean_object* v_xs_x27_4496_, lean_object* v_type_4497_, lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_){
_start:
{
lean_object* v___x_4503_; uint8_t v___x_4504_; 
v___x_4503_ = lean_array_get_size(v_xs_x27_4496_);
v___x_4504_ = lean_nat_dec_eq(v___x_4503_, v___x_4490_);
if (v___x_4504_ == 0)
{
lean_object* v___x_4505_; lean_object* v___x_4506_; 
lean_dec_ref(v_type_4497_);
lean_dec_ref(v_k_4495_);
lean_dec_ref(v_perm_4494_);
lean_dec_ref(v_xs_4491_);
v___x_4505_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__1);
v___x_4506_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4505_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
return v___x_4506_;
}
else
{
lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v_x_4509_; lean_object* v___x_4510_; 
v___x_4507_ = l_Lean_instInhabitedExpr;
v___x_4508_ = lean_unsigned_to_nat(0u);
v_x_4509_ = lean_array_get_borrowed(v___x_4507_, v_xs_x27_4496_, v___x_4508_);
lean_inc(v___y_4501_);
lean_inc_ref(v___y_4500_);
lean_inc(v___y_4499_);
lean_inc_ref(v___y_4498_);
lean_inc(v_x_4509_);
v___x_4510_ = lean_infer_type(v_x_4509_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
if (lean_obj_tag(v___x_4510_) == 0)
{
lean_object* v_a_4511_; uint8_t v___x_4512_; 
v_a_4511_ = lean_ctor_get(v___x_4510_, 0);
lean_inc(v_a_4511_);
lean_dec_ref(v___x_4510_);
v___x_4512_ = l_Lean_Expr_hasLooseBVars(v_a_4511_);
lean_dec(v_a_4511_);
if (v___x_4512_ == 0)
{
lean_object* v___x_4513_; uint8_t v___x_4514_; 
v___x_4513_ = lean_array_get_size(v_xs_4491_);
v___x_4514_ = lean_nat_dec_lt(v_val_4492_, v___x_4513_);
if (v___x_4514_ == 0)
{
lean_object* v___x_4515_; lean_object* v___x_4516_; 
lean_dec_ref(v_type_4497_);
lean_dec_ref(v_k_4495_);
lean_dec_ref(v_perm_4494_);
lean_dec_ref(v_xs_4491_);
v___x_4515_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__3);
v___x_4516_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4515_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
return v___x_4516_;
}
else
{
lean_object* v___x_4517_; lean_object* v___x_4518_; lean_object* v___x_4519_; 
v___x_4517_ = lean_nat_add(v_i_4493_, v___x_4490_);
lean_inc(v_x_4509_);
v___x_4518_ = lean_array_set(v_xs_4491_, v_val_4492_, v_x_4509_);
v___x_4519_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4494_, v_k_4495_, v___x_4517_, v_type_4497_, v___x_4518_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
return v___x_4519_;
}
}
else
{
lean_object* v___x_4520_; lean_object* v___x_4521_; 
lean_dec_ref(v_type_4497_);
lean_dec_ref(v_k_4495_);
lean_dec_ref(v_perm_4494_);
lean_dec_ref(v_xs_4491_);
v___x_4520_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__5);
v___x_4521_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4520_, v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
return v___x_4521_;
}
}
else
{
lean_object* v_a_4522_; lean_object* v___x_4524_; uint8_t v_isShared_4525_; uint8_t v_isSharedCheck_4529_; 
lean_dec_ref(v_type_4497_);
lean_dec_ref(v_k_4495_);
lean_dec_ref(v_perm_4494_);
lean_dec_ref(v_xs_4491_);
v_a_4522_ = lean_ctor_get(v___x_4510_, 0);
v_isSharedCheck_4529_ = !lean_is_exclusive(v___x_4510_);
if (v_isSharedCheck_4529_ == 0)
{
v___x_4524_ = v___x_4510_;
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
else
{
lean_inc(v_a_4522_);
lean_dec(v___x_4510_);
v___x_4524_ = lean_box(0);
v_isShared_4525_ = v_isSharedCheck_4529_;
goto v_resetjp_4523_;
}
v_resetjp_4523_:
{
lean_object* v___x_4527_; 
if (v_isShared_4525_ == 0)
{
v___x_4527_ = v___x_4524_;
goto v_reusejp_4526_;
}
else
{
lean_object* v_reuseFailAlloc_4528_; 
v_reuseFailAlloc_4528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4528_, 0, v_a_4522_);
v___x_4527_ = v_reuseFailAlloc_4528_;
goto v_reusejp_4526_;
}
v_reusejp_4526_:
{
return v___x_4527_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed(lean_object* v___x_4530_, lean_object* v_xs_4531_, lean_object* v_val_4532_, lean_object* v_i_4533_, lean_object* v_perm_4534_, lean_object* v_k_4535_, lean_object* v_xs_x27_4536_, lean_object* v_type_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_){
_start:
{
lean_object* v_res_4543_; 
v_res_4543_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0(v___x_4530_, v_xs_4531_, v_val_4532_, v_i_4533_, v_perm_4534_, v_k_4535_, v_xs_x27_4536_, v_type_4537_, v___y_4538_, v___y_4539_, v___y_4540_, v___y_4541_);
lean_dec(v___y_4541_);
lean_dec_ref(v___y_4540_);
lean_dec(v___y_4539_);
lean_dec_ref(v___y_4538_);
lean_dec_ref(v_xs_x27_4536_);
lean_dec(v_i_4533_);
lean_dec(v_val_4532_);
lean_dec(v___x_4530_);
return v_res_4543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(lean_object* v_perm_4544_, lean_object* v_k_4545_, lean_object* v_i_4546_, lean_object* v_type_4547_, lean_object* v_xs_4548_, lean_object* v_a_4549_, lean_object* v_a_4550_, lean_object* v_a_4551_, lean_object* v_a_4552_){
_start:
{
lean_object* v___x_4554_; uint8_t v___x_4555_; 
v___x_4554_ = lean_array_get_size(v_perm_4544_);
v___x_4555_ = lean_nat_dec_lt(v_i_4546_, v___x_4554_);
if (v___x_4555_ == 0)
{
lean_object* v___x_4556_; 
lean_dec_ref(v_type_4547_);
lean_dec(v_i_4546_);
lean_dec_ref(v_perm_4544_);
lean_inc(v_a_4552_);
lean_inc_ref(v_a_4551_);
lean_inc(v_a_4550_);
lean_inc_ref(v_a_4549_);
v___x_4556_ = lean_apply_6(v_k_4545_, v_xs_4548_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_, lean_box(0));
return v___x_4556_;
}
else
{
lean_object* v___x_4557_; 
v___x_4557_ = lean_array_fget_borrowed(v_perm_4544_, v_i_4546_);
if (lean_obj_tag(v___x_4557_) == 0)
{
lean_object* v___x_4558_; 
lean_inc(v_a_4552_);
lean_inc_ref(v_a_4551_);
lean_inc(v_a_4550_);
lean_inc_ref(v_a_4549_);
v___x_4558_ = lean_whnf(v_type_4547_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_);
if (lean_obj_tag(v___x_4558_) == 0)
{
lean_object* v_a_4559_; uint8_t v___x_4560_; 
v_a_4559_ = lean_ctor_get(v___x_4558_, 0);
lean_inc(v_a_4559_);
lean_dec_ref(v___x_4558_);
v___x_4560_ = l_Lean_Expr_isForall(v_a_4559_);
if (v___x_4560_ == 0)
{
lean_object* v___x_4561_; lean_object* v___x_4562_; 
lean_dec(v_a_4559_);
lean_dec_ref(v_xs_4548_);
lean_dec(v_i_4546_);
lean_dec_ref(v_k_4545_);
lean_dec_ref(v_perm_4544_);
v___x_4561_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__2);
v___x_4562_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__0___redArg(v___x_4561_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_);
return v___x_4562_;
}
else
{
lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v___x_4565_; 
v___x_4563_ = lean_unsigned_to_nat(1u);
v___x_4564_ = lean_nat_add(v_i_4546_, v___x_4563_);
lean_dec(v_i_4546_);
v___x_4565_ = l_Lean_Expr_bindingBody_x21(v_a_4559_);
lean_dec(v_a_4559_);
v_i_4546_ = v___x_4564_;
v_type_4547_ = v___x_4565_;
goto _start;
}
}
else
{
lean_object* v_a_4567_; lean_object* v___x_4569_; uint8_t v_isShared_4570_; uint8_t v_isSharedCheck_4574_; 
lean_dec_ref(v_xs_4548_);
lean_dec(v_i_4546_);
lean_dec_ref(v_k_4545_);
lean_dec_ref(v_perm_4544_);
v_a_4567_ = lean_ctor_get(v___x_4558_, 0);
v_isSharedCheck_4574_ = !lean_is_exclusive(v___x_4558_);
if (v_isSharedCheck_4574_ == 0)
{
v___x_4569_ = v___x_4558_;
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
else
{
lean_inc(v_a_4567_);
lean_dec(v___x_4558_);
v___x_4569_ = lean_box(0);
v_isShared_4570_ = v_isSharedCheck_4574_;
goto v_resetjp_4568_;
}
v_resetjp_4568_:
{
lean_object* v___x_4572_; 
if (v_isShared_4570_ == 0)
{
v___x_4572_ = v___x_4569_;
goto v_reusejp_4571_;
}
else
{
lean_object* v_reuseFailAlloc_4573_; 
v_reuseFailAlloc_4573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4573_, 0, v_a_4567_);
v___x_4572_ = v_reuseFailAlloc_4573_;
goto v_reusejp_4571_;
}
v_reusejp_4571_:
{
return v___x_4572_;
}
}
}
}
else
{
lean_object* v_val_4575_; lean_object* v___x_4576_; lean_object* v___f_4577_; lean_object* v___x_4578_; uint8_t v___x_4579_; lean_object* v___x_4580_; 
v_val_4575_ = lean_ctor_get(v___x_4557_, 0);
lean_inc(v_val_4575_);
v___x_4576_ = lean_unsigned_to_nat(1u);
v___f_4577_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___boxed), 13, 6);
lean_closure_set(v___f_4577_, 0, v___x_4576_);
lean_closure_set(v___f_4577_, 1, v_xs_4548_);
lean_closure_set(v___f_4577_, 2, v_val_4575_);
lean_closure_set(v___f_4577_, 3, v_i_4546_);
lean_closure_set(v___f_4577_, 4, v_perm_4544_);
lean_closure_set(v___f_4577_, 5, v_k_4545_);
v___x_4578_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3);
v___x_4579_ = 0;
v___x_4580_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_type_4547_, v___x_4578_, v___f_4577_, v___x_4555_, v___x_4579_, v_a_4549_, v_a_4550_, v_a_4551_, v_a_4552_);
return v___x_4580_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___boxed(lean_object* v_perm_4581_, lean_object* v_k_4582_, lean_object* v_i_4583_, lean_object* v_type_4584_, lean_object* v_xs_4585_, lean_object* v_a_4586_, lean_object* v_a_4587_, lean_object* v_a_4588_, lean_object* v_a_4589_, lean_object* v_a_4590_){
_start:
{
lean_object* v_res_4591_; 
v_res_4591_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4581_, v_k_4582_, v_i_4583_, v_type_4584_, v_xs_4585_, v_a_4586_, v_a_4587_, v_a_4588_, v_a_4589_);
lean_dec(v_a_4589_);
lean_dec_ref(v_a_4588_);
lean_dec(v_a_4587_);
lean_dec_ref(v_a_4586_);
return v_res_4591_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(lean_object* v_00_u03b1_4592_, lean_object* v_perm_4593_, lean_object* v_k_4594_, lean_object* v_i_4595_, lean_object* v_type_4596_, lean_object* v_xs_4597_, lean_object* v_a_4598_, lean_object* v_a_4599_, lean_object* v_a_4600_, lean_object* v_a_4601_){
_start:
{
lean_object* v___x_4603_; 
v___x_4603_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4593_, v_k_4594_, v_i_4595_, v_type_4596_, v_xs_4597_, v_a_4598_, v_a_4599_, v_a_4600_, v_a_4601_);
return v___x_4603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___boxed(lean_object* v_00_u03b1_4604_, lean_object* v_perm_4605_, lean_object* v_k_4606_, lean_object* v_i_4607_, lean_object* v_type_4608_, lean_object* v_xs_4609_, lean_object* v_a_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_){
_start:
{
lean_object* v_res_4615_; 
v_res_4615_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go(v_00_u03b1_4604_, v_perm_4605_, v_k_4606_, v_i_4607_, v_type_4608_, v_xs_4609_, v_a_4610_, v_a_4611_, v_a_4612_, v_a_4613_);
lean_dec(v_a_4613_);
lean_dec_ref(v_a_4612_);
lean_dec(v_a_4611_);
lean_dec_ref(v_a_4610_);
return v_res_4615_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0(void){
_start:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; 
v___x_4616_ = lean_unsigned_to_nat(0u);
v___x_4617_ = l_Lean_Level_ofNat(v___x_4616_);
return v___x_4617_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1(void){
_start:
{
lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___x_4618_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__0);
v___x_4619_ = l_Lean_mkSort(v___x_4618_);
return v___x_4619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(lean_object* v_perm_4620_, lean_object* v_type_4621_, lean_object* v_k_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_){
_start:
{
lean_object* v___x_4628_; lean_object* v___x_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; 
v___x_4628_ = lean_unsigned_to_nat(0u);
v___x_4629_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4620_);
v___x_4630_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___closed__1);
v___x_4631_ = lean_mk_array(v___x_4629_, v___x_4630_);
v___x_4632_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg(v_perm_4620_, v_k_4622_, v___x_4628_, v_type_4621_, v___x_4631_, v_a_4623_, v_a_4624_, v_a_4625_, v_a_4626_);
return v___x_4632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg___boxed(lean_object* v_perm_4633_, lean_object* v_type_4634_, lean_object* v_k_4635_, lean_object* v_a_4636_, lean_object* v_a_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_){
_start:
{
lean_object* v_res_4641_; 
v_res_4641_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4633_, v_type_4634_, v_k_4635_, v_a_4636_, v_a_4637_, v_a_4638_, v_a_4639_);
lean_dec(v_a_4639_);
lean_dec_ref(v_a_4638_);
lean_dec(v_a_4637_);
lean_dec_ref(v_a_4636_);
return v_res_4641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(lean_object* v_00_u03b1_4642_, lean_object* v_perm_4643_, lean_object* v_type_4644_, lean_object* v_k_4645_, lean_object* v_a_4646_, lean_object* v_a_4647_, lean_object* v_a_4648_, lean_object* v_a_4649_){
_start:
{
lean_object* v___x_4651_; 
v___x_4651_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4643_, v_type_4644_, v_k_4645_, v_a_4646_, v_a_4647_, v_a_4648_, v_a_4649_);
return v___x_4651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___boxed(lean_object* v_00_u03b1_4652_, lean_object* v_perm_4653_, lean_object* v_type_4654_, lean_object* v_k_4655_, lean_object* v_a_4656_, lean_object* v_a_4657_, lean_object* v_a_4658_, lean_object* v_a_4659_, lean_object* v_a_4660_){
_start:
{
lean_object* v_res_4661_; 
v_res_4661_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl(v_00_u03b1_4652_, v_perm_4653_, v_type_4654_, v_k_4655_, v_a_4656_, v_a_4657_, v_a_4658_, v_a_4659_);
lean_dec(v_a_4659_);
lean_dec_ref(v_a_4658_);
lean_dec(v_a_4657_);
lean_dec_ref(v_a_4656_);
return v_res_4661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(lean_object* v_k_4662_, lean_object* v_runInBase_4663_, lean_object* v_b_4664_, lean_object* v___y_4665_, lean_object* v___y_4666_, lean_object* v___y_4667_, lean_object* v___y_4668_){
_start:
{
lean_object* v___x_4670_; lean_object* v___x_4671_; 
v___x_4670_ = lean_apply_1(v_k_4662_, v_b_4664_);
lean_inc(v___y_4668_);
lean_inc_ref(v___y_4667_);
lean_inc(v___y_4666_);
lean_inc_ref(v___y_4665_);
v___x_4671_ = lean_apply_7(v_runInBase_4663_, lean_box(0), v___x_4670_, v___y_4665_, v___y_4666_, v___y_4667_, v___y_4668_, lean_box(0));
return v___x_4671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed(lean_object* v_k_4672_, lean_object* v_runInBase_4673_, lean_object* v_b_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_){
_start:
{
lean_object* v_res_4680_; 
v_res_4680_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0(v_k_4672_, v_runInBase_4673_, v_b_4674_, v___y_4675_, v___y_4676_, v___y_4677_, v___y_4678_);
lean_dec(v___y_4678_);
lean_dec_ref(v___y_4677_);
lean_dec(v___y_4676_);
lean_dec_ref(v___y_4675_);
return v_res_4680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(lean_object* v_k_4681_, lean_object* v_perm_4682_, lean_object* v_type_4683_, lean_object* v_runInBase_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_){
_start:
{
lean_object* v___f_4690_; lean_object* v___x_4691_; 
v___f_4690_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4690_, 0, v_k_4681_);
lean_closure_set(v___f_4690_, 1, v_runInBase_4684_);
v___x_4691_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl___redArg(v_perm_4682_, v_type_4683_, v___f_4690_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_);
return v___x_4691_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed(lean_object* v_k_4692_, lean_object* v_perm_4693_, lean_object* v_type_4694_, lean_object* v_runInBase_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_, lean_object* v___y_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_){
_start:
{
lean_object* v_res_4701_; 
v_res_4701_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1(v_k_4692_, v_perm_4693_, v_type_4694_, v_runInBase_4695_, v___y_4696_, v___y_4697_, v___y_4698_, v___y_4699_);
lean_dec(v___y_4699_);
lean_dec_ref(v___y_4698_);
lean_dec(v___y_4697_);
lean_dec_ref(v___y_4696_);
return v_res_4701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(lean_object* v_inst_4702_, lean_object* v_inst_4703_, lean_object* v_perm_4704_, lean_object* v_type_4705_, lean_object* v_k_4706_){
_start:
{
lean_object* v_toBind_4707_; lean_object* v_liftWith_4708_; lean_object* v_restoreM_4709_; lean_object* v___f_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; 
v_toBind_4707_ = lean_ctor_get(v_inst_4703_, 1);
lean_inc(v_toBind_4707_);
lean_dec_ref(v_inst_4703_);
v_liftWith_4708_ = lean_ctor_get(v_inst_4702_, 0);
lean_inc(v_liftWith_4708_);
v_restoreM_4709_ = lean_ctor_get(v_inst_4702_, 1);
lean_inc(v_restoreM_4709_);
lean_dec_ref(v_inst_4702_);
v___f_4710_ = lean_alloc_closure((void*)(l_Lean_Elab_FixedParamPerm_forallTelescope___redArg___lam__1___boxed), 9, 3);
lean_closure_set(v___f_4710_, 0, v_k_4706_);
lean_closure_set(v___f_4710_, 1, v_perm_4704_);
lean_closure_set(v___f_4710_, 2, v_type_4705_);
v___x_4711_ = lean_apply_2(v_liftWith_4708_, lean_box(0), v___f_4710_);
v___x_4712_ = lean_apply_1(v_restoreM_4709_, lean_box(0));
v___x_4713_ = lean_apply_4(v_toBind_4707_, lean_box(0), lean_box(0), v___x_4711_, v___x_4712_);
return v___x_4713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_forallTelescope(lean_object* v_n_4714_, lean_object* v_00_u03b1_4715_, lean_object* v_inst_4716_, lean_object* v_inst_4717_, lean_object* v_perm_4718_, lean_object* v_type_4719_, lean_object* v_k_4720_){
_start:
{
lean_object* v___x_4721_; 
v___x_4721_ = l_Lean_Elab_FixedParamPerm_forallTelescope___redArg(v_inst_4716_, v_inst_4717_, v_perm_4718_, v_type_4719_, v_k_4720_);
return v___x_4721_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(lean_object* v_msg_4722_, lean_object* v___y_4723_, lean_object* v___y_4724_, lean_object* v___y_4725_, lean_object* v___y_4726_){
_start:
{
lean_object* v___f_4728_; lean_object* v___x_603__overap_4729_; lean_object* v___x_4730_; 
v___f_4728_ = lean_obj_once(&l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0, &l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0_once, _init_l_panic___at___00Lean_Elab_getFixedParamsInfo_spec__7___closed__0);
v___x_603__overap_4729_ = lean_panic_fn_borrowed(v___f_4728_, v_msg_4722_);
lean_inc(v___y_4726_);
lean_inc_ref(v___y_4725_);
lean_inc(v___y_4724_);
lean_inc_ref(v___y_4723_);
v___x_4730_ = lean_apply_5(v___x_603__overap_4729_, v___y_4723_, v___y_4724_, v___y_4725_, v___y_4726_, lean_box(0));
return v___x_4730_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0___boxed(lean_object* v_msg_4731_, lean_object* v___y_4732_, lean_object* v___y_4733_, lean_object* v___y_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_){
_start:
{
lean_object* v_res_4737_; 
v_res_4737_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v_msg_4731_, v___y_4732_, v___y_4733_, v___y_4734_, v___y_4735_);
lean_dec(v___y_4735_);
lean_dec_ref(v___y_4734_);
lean_dec(v___y_4733_);
lean_dec_ref(v___y_4732_);
return v_res_4737_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4738_; 
v___x_4738_ = lean_mk_string_unchecked("_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateForall.go", 92, 92);
return v___x_4738_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4739_; 
v___x_4739_ = lean_mk_string_unchecked("assertion violation: ys.size = 1\n          ", 43, 43);
return v___x_4739_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; 
v___x_4740_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__1);
v___x_4741_ = lean_unsigned_to_nat(10u);
v___x_4742_ = lean_unsigned_to_nat(353u);
v___x_4743_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0);
v___x_4744_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4745_ = l_mkPanicMessageWithDecl(v___x_4744_, v___x_4743_, v___x_4742_, v___x_4741_, v___x_4740_);
return v___x_4745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed(lean_object* v___x_4746_, lean_object* v_xs_4747_, lean_object* v_tail_4748_, lean_object* v_ys_4749_, lean_object* v_type_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_){
_start:
{
lean_object* v_res_4756_; 
v_res_4756_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(v___x_4746_, v_xs_4747_, v_tail_4748_, v_ys_4749_, v_type_4750_, v___y_4751_, v___y_4752_, v___y_4753_, v___y_4754_);
lean_dec(v___y_4754_);
lean_dec_ref(v___y_4753_);
lean_dec(v___y_4752_);
lean_dec_ref(v___y_4751_);
lean_dec_ref(v_ys_4749_);
lean_dec(v___x_4746_);
return v_res_4756_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0(void){
_start:
{
lean_object* v___x_4757_; lean_object* v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; 
v___x_4757_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2);
v___x_4758_ = lean_unsigned_to_nat(8u);
v___x_4759_ = lean_unsigned_to_nat(349u);
v___x_4760_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__0);
v___x_4761_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4762_ = l_mkPanicMessageWithDecl(v___x_4761_, v___x_4760_, v___x_4759_, v___x_4758_, v___x_4757_);
return v___x_4762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(lean_object* v_xs_4763_, lean_object* v_x_4764_, lean_object* v_x_4765_, lean_object* v_a_4766_, lean_object* v_a_4767_, lean_object* v_a_4768_, lean_object* v_a_4769_){
_start:
{
if (lean_obj_tag(v_x_4764_) == 0)
{
lean_object* v___x_4771_; 
lean_dec_ref(v_xs_4763_);
v___x_4771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4771_, 0, v_x_4765_);
return v___x_4771_;
}
else
{
lean_object* v_head_4772_; 
v_head_4772_ = lean_ctor_get(v_x_4764_, 0);
if (lean_obj_tag(v_head_4772_) == 0)
{
lean_object* v_tail_4773_; lean_object* v___x_4774_; lean_object* v___f_4775_; lean_object* v___x_4776_; uint8_t v___x_4777_; lean_object* v___x_4778_; 
v_tail_4773_ = lean_ctor_get(v_x_4764_, 1);
lean_inc(v_tail_4773_);
lean_dec_ref(v_x_4764_);
v___x_4774_ = lean_unsigned_to_nat(1u);
v___f_4775_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___boxed), 10, 3);
lean_closure_set(v___f_4775_, 0, v___x_4774_);
lean_closure_set(v___f_4775_, 1, v_xs_4763_);
lean_closure_set(v___f_4775_, 2, v_tail_4773_);
v___x_4776_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___closed__3);
v___x_4777_ = 0;
v___x_4778_ = l_Lean_Meta_forallBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go_spec__1___redArg(v_x_4765_, v___x_4776_, v___f_4775_, v___x_4777_, v___x_4777_, v_a_4766_, v_a_4767_, v_a_4768_, v_a_4769_);
return v___x_4778_;
}
else
{
lean_object* v_tail_4779_; lean_object* v_val_4780_; lean_object* v___x_4781_; uint8_t v___x_4782_; 
lean_inc_ref(v_head_4772_);
v_tail_4779_ = lean_ctor_get(v_x_4764_, 1);
lean_inc(v_tail_4779_);
lean_dec_ref(v_x_4764_);
v_val_4780_ = lean_ctor_get(v_head_4772_, 0);
lean_inc(v_val_4780_);
lean_dec_ref(v_head_4772_);
v___x_4781_ = lean_array_get_size(v_xs_4763_);
v___x_4782_ = lean_nat_dec_lt(v_val_4780_, v___x_4781_);
if (v___x_4782_ == 0)
{
lean_object* v___x_4783_; lean_object* v___x_4784_; 
lean_dec(v_val_4780_);
lean_dec(v_tail_4779_);
lean_dec_ref(v_x_4765_);
lean_dec_ref(v_xs_4763_);
v___x_4783_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___closed__0);
v___x_4784_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4783_, v_a_4766_, v_a_4767_, v_a_4768_, v_a_4769_);
return v___x_4784_;
}
else
{
lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; 
v___x_4785_ = l_Lean_instInhabitedExpr;
v___x_4786_ = lean_array_get_borrowed(v___x_4785_, v_xs_4763_, v_val_4780_);
lean_dec(v_val_4780_);
v___x_4787_ = lean_unsigned_to_nat(1u);
v___x_4788_ = lean_mk_empty_array_with_capacity(v___x_4787_);
lean_inc(v___x_4786_);
v___x_4789_ = lean_array_push(v___x_4788_, v___x_4786_);
v___x_4790_ = l_Lean_Meta_instantiateForall(v_x_4765_, v___x_4789_, v_a_4766_, v_a_4767_, v_a_4768_, v_a_4769_);
lean_dec_ref(v___x_4789_);
if (lean_obj_tag(v___x_4790_) == 0)
{
lean_object* v_a_4791_; 
v_a_4791_ = lean_ctor_get(v___x_4790_, 0);
lean_inc(v_a_4791_);
lean_dec_ref(v___x_4790_);
v_x_4764_ = v_tail_4779_;
v_x_4765_ = v_a_4791_;
goto _start;
}
else
{
lean_dec(v_tail_4779_);
lean_dec_ref(v_xs_4763_);
return v___x_4790_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0(lean_object* v___x_4793_, lean_object* v_xs_4794_, lean_object* v_tail_4795_, lean_object* v_ys_4796_, lean_object* v_type_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_){
_start:
{
lean_object* v___x_4803_; uint8_t v___x_4804_; 
v___x_4803_ = lean_array_get_size(v_ys_4796_);
v___x_4804_ = lean_nat_dec_eq(v___x_4803_, v___x_4793_);
if (v___x_4804_ == 0)
{
lean_object* v___x_4805_; lean_object* v___x_4806_; 
lean_dec_ref(v_type_4797_);
lean_dec(v_tail_4795_);
lean_dec_ref(v_xs_4794_);
v___x_4805_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___lam__0___closed__2);
v___x_4806_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4805_, v___y_4798_, v___y_4799_, v___y_4800_, v___y_4801_);
return v___x_4806_;
}
else
{
lean_object* v___x_4807_; 
v___x_4807_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4794_, v_tail_4795_, v_type_4797_, v___y_4798_, v___y_4799_, v___y_4800_, v___y_4801_);
if (lean_obj_tag(v___x_4807_) == 0)
{
lean_object* v_a_4808_; uint8_t v___x_4809_; uint8_t v___x_4810_; lean_object* v___x_4811_; 
v_a_4808_ = lean_ctor_get(v___x_4807_, 0);
lean_inc(v_a_4808_);
lean_dec_ref(v___x_4807_);
v___x_4809_ = 0;
v___x_4810_ = 1;
v___x_4811_ = l_Lean_Meta_mkForallFVars(v_ys_4796_, v_a_4808_, v___x_4809_, v___x_4804_, v___x_4804_, v___x_4810_, v___y_4798_, v___y_4799_, v___y_4800_, v___y_4801_);
return v___x_4811_;
}
else
{
return v___x_4807_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go___boxed(lean_object* v_xs_4812_, lean_object* v_x_4813_, lean_object* v_x_4814_, lean_object* v_a_4815_, lean_object* v_a_4816_, lean_object* v_a_4817_, lean_object* v_a_4818_, lean_object* v_a_4819_){
_start:
{
lean_object* v_res_4820_; 
v_res_4820_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4812_, v_x_4813_, v_x_4814_, v_a_4815_, v_a_4816_, v_a_4817_, v_a_4818_);
lean_dec(v_a_4818_);
lean_dec_ref(v_a_4817_);
lean_dec(v_a_4816_);
lean_dec_ref(v_a_4815_);
return v_res_4820_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0(void){
_start:
{
lean_object* v___x_4821_; 
v___x_4821_ = lean_mk_string_unchecked("Lean.Elab.FixedParamPerm.instantiateForall", 42, 42);
return v___x_4821_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1(void){
_start:
{
lean_object* v___x_4822_; 
v___x_4822_ = lean_mk_string_unchecked("assertion violation: xs.size = perm.numFixed\n  ", 47, 47);
return v___x_4822_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2(void){
_start:
{
lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; lean_object* v___x_4827_; lean_object* v___x_4828_; 
v___x_4823_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1, &l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1);
v___x_4824_ = lean_unsigned_to_nat(2u);
v___x_4825_ = lean_unsigned_to_nat(343u);
v___x_4826_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0, &l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0_once, _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__0);
v___x_4827_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4828_ = l_mkPanicMessageWithDecl(v___x_4827_, v___x_4826_, v___x_4825_, v___x_4824_, v___x_4823_);
return v___x_4828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall(lean_object* v_perm_4829_, lean_object* v_type_u2080_4830_, lean_object* v_xs_4831_, lean_object* v_a_4832_, lean_object* v_a_4833_, lean_object* v_a_4834_, lean_object* v_a_4835_){
_start:
{
lean_object* v___x_4837_; lean_object* v___x_4838_; uint8_t v___x_4839_; 
v___x_4837_ = lean_array_get_size(v_xs_4831_);
v___x_4838_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_4829_);
v___x_4839_ = lean_nat_dec_eq(v___x_4837_, v___x_4838_);
lean_dec(v___x_4838_);
if (v___x_4839_ == 0)
{
lean_object* v___x_4840_; lean_object* v___x_4841_; 
lean_dec_ref(v_xs_4831_);
lean_dec_ref(v_type_u2080_4830_);
lean_dec_ref(v_perm_4829_);
v___x_4840_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2, &l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__2);
v___x_4841_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4840_, v_a_4832_, v_a_4833_, v_a_4834_, v_a_4835_);
return v___x_4841_;
}
else
{
lean_object* v_mask_4842_; lean_object* v___x_4843_; 
v_mask_4842_ = lean_array_to_list(v_perm_4829_);
v___x_4843_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go(v_xs_4831_, v_mask_4842_, v_type_u2080_4830_, v_a_4832_, v_a_4833_, v_a_4834_, v_a_4835_);
return v___x_4843_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateForall___boxed(lean_object* v_perm_4844_, lean_object* v_type_u2080_4845_, lean_object* v_xs_4846_, lean_object* v_a_4847_, lean_object* v_a_4848_, lean_object* v_a_4849_, lean_object* v_a_4850_, lean_object* v_a_4851_){
_start:
{
lean_object* v_res_4852_; 
v_res_4852_ = l_Lean_Elab_FixedParamPerm_instantiateForall(v_perm_4844_, v_type_u2080_4845_, v_xs_4846_, v_a_4847_, v_a_4848_, v_a_4849_, v_a_4850_);
lean_dec(v_a_4850_);
lean_dec_ref(v_a_4849_);
lean_dec(v_a_4848_);
lean_dec_ref(v_a_4847_);
return v_res_4852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(lean_object* v_e_4853_, lean_object* v_maxFVars_4854_, lean_object* v_k_4855_, uint8_t v_cleanupAnnotations_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_, lean_object* v___y_4860_){
_start:
{
lean_object* v___f_4862_; uint8_t v___x_4863_; uint8_t v___x_4864_; lean_object* v___x_4865_; lean_object* v___x_4866_; 
v___f_4862_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaTelescope___at___00Lean_Elab_getParamRevDeps_spec__3___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_4862_, 0, v_k_4855_);
v___x_4863_ = 1;
v___x_4864_ = 0;
v___x_4865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4865_, 0, v_maxFVars_4854_);
v___x_4866_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_4853_, v___x_4863_, v___x_4864_, v___x_4863_, v___x_4864_, v___x_4865_, v___f_4862_, v_cleanupAnnotations_4856_, v___y_4857_, v___y_4858_, v___y_4859_, v___y_4860_);
lean_dec_ref(v___x_4865_);
if (lean_obj_tag(v___x_4866_) == 0)
{
lean_object* v_a_4867_; lean_object* v___x_4869_; uint8_t v_isShared_4870_; uint8_t v_isSharedCheck_4874_; 
v_a_4867_ = lean_ctor_get(v___x_4866_, 0);
v_isSharedCheck_4874_ = !lean_is_exclusive(v___x_4866_);
if (v_isSharedCheck_4874_ == 0)
{
v___x_4869_ = v___x_4866_;
v_isShared_4870_ = v_isSharedCheck_4874_;
goto v_resetjp_4868_;
}
else
{
lean_inc(v_a_4867_);
lean_dec(v___x_4866_);
v___x_4869_ = lean_box(0);
v_isShared_4870_ = v_isSharedCheck_4874_;
goto v_resetjp_4868_;
}
v_resetjp_4868_:
{
lean_object* v___x_4872_; 
if (v_isShared_4870_ == 0)
{
v___x_4872_ = v___x_4869_;
goto v_reusejp_4871_;
}
else
{
lean_object* v_reuseFailAlloc_4873_; 
v_reuseFailAlloc_4873_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4873_, 0, v_a_4867_);
v___x_4872_ = v_reuseFailAlloc_4873_;
goto v_reusejp_4871_;
}
v_reusejp_4871_:
{
return v___x_4872_;
}
}
}
else
{
lean_object* v_a_4875_; lean_object* v___x_4877_; uint8_t v_isShared_4878_; uint8_t v_isSharedCheck_4882_; 
v_a_4875_ = lean_ctor_get(v___x_4866_, 0);
v_isSharedCheck_4882_ = !lean_is_exclusive(v___x_4866_);
if (v_isSharedCheck_4882_ == 0)
{
v___x_4877_ = v___x_4866_;
v_isShared_4878_ = v_isSharedCheck_4882_;
goto v_resetjp_4876_;
}
else
{
lean_inc(v_a_4875_);
lean_dec(v___x_4866_);
v___x_4877_ = lean_box(0);
v_isShared_4878_ = v_isSharedCheck_4882_;
goto v_resetjp_4876_;
}
v_resetjp_4876_:
{
lean_object* v___x_4880_; 
if (v_isShared_4878_ == 0)
{
v___x_4880_ = v___x_4877_;
goto v_reusejp_4879_;
}
else
{
lean_object* v_reuseFailAlloc_4881_; 
v_reuseFailAlloc_4881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4881_, 0, v_a_4875_);
v___x_4880_ = v_reuseFailAlloc_4881_;
goto v_reusejp_4879_;
}
v_reusejp_4879_:
{
return v___x_4880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg___boxed(lean_object* v_e_4883_, lean_object* v_maxFVars_4884_, lean_object* v_k_4885_, lean_object* v_cleanupAnnotations_4886_, lean_object* v___y_4887_, lean_object* v___y_4888_, lean_object* v___y_4889_, lean_object* v___y_4890_, lean_object* v___y_4891_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4892_; lean_object* v_res_4893_; 
v_cleanupAnnotations_boxed_4892_ = lean_unbox(v_cleanupAnnotations_4886_);
v_res_4893_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4883_, v_maxFVars_4884_, v_k_4885_, v_cleanupAnnotations_boxed_4892_, v___y_4887_, v___y_4888_, v___y_4889_, v___y_4890_);
lean_dec(v___y_4890_);
lean_dec_ref(v___y_4889_);
lean_dec(v___y_4888_);
lean_dec_ref(v___y_4887_);
return v_res_4893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(lean_object* v_00_u03b1_4894_, lean_object* v_e_4895_, lean_object* v_maxFVars_4896_, lean_object* v_k_4897_, uint8_t v_cleanupAnnotations_4898_, lean_object* v___y_4899_, lean_object* v___y_4900_, lean_object* v___y_4901_, lean_object* v___y_4902_){
_start:
{
lean_object* v___x_4904_; 
v___x_4904_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_e_4895_, v_maxFVars_4896_, v_k_4897_, v_cleanupAnnotations_4898_, v___y_4899_, v___y_4900_, v___y_4901_, v___y_4902_);
return v___x_4904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___boxed(lean_object* v_00_u03b1_4905_, lean_object* v_e_4906_, lean_object* v_maxFVars_4907_, lean_object* v_k_4908_, lean_object* v_cleanupAnnotations_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_4915_; lean_object* v_res_4916_; 
v_cleanupAnnotations_boxed_4915_ = lean_unbox(v_cleanupAnnotations_4909_);
v_res_4916_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1(v_00_u03b1_4905_, v_e_4906_, v_maxFVars_4907_, v_k_4908_, v_cleanupAnnotations_boxed_4915_, v___y_4910_, v___y_4911_, v___y_4912_, v___y_4913_);
lean_dec(v___y_4913_);
lean_dec_ref(v___y_4912_);
lean_dec(v___y_4911_);
lean_dec_ref(v___y_4910_);
return v_res_4916_;
}
}
LEAN_EXPORT uint8_t l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(lean_object* v_x_4917_){
_start:
{
if (lean_obj_tag(v_x_4917_) == 0)
{
uint8_t v___x_4918_; 
v___x_4918_ = 1;
return v___x_4918_;
}
else
{
lean_object* v_head_4919_; 
v_head_4919_ = lean_ctor_get(v_x_4917_, 0);
if (lean_obj_tag(v_head_4919_) == 0)
{
lean_object* v_tail_4920_; 
v_tail_4920_ = lean_ctor_get(v_x_4917_, 1);
v_x_4917_ = v_tail_4920_;
goto _start;
}
else
{
uint8_t v___x_4922_; 
v___x_4922_ = 0;
return v___x_4922_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0___boxed(lean_object* v_x_4923_){
_start:
{
uint8_t v_res_4924_; lean_object* v_r_4925_; 
v_res_4924_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_x_4923_);
lean_dec(v_x_4923_);
v_r_4925_ = lean_box(v_res_4924_);
return v_r_4925_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4926_; 
v___x_4926_ = lean_mk_string_unchecked("_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.instantiateLambda.go", 92, 92);
return v___x_4926_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4927_; 
v___x_4927_ = lean_mk_string_unchecked("assertion violation: ys.size = 1\n            ", 45, 45);
return v___x_4927_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4928_; lean_object* v___x_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; 
v___x_4928_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__1);
v___x_4929_ = lean_unsigned_to_nat(12u);
v___x_4930_ = lean_unsigned_to_nat(376u);
v___x_4931_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0);
v___x_4932_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4933_ = l_mkPanicMessageWithDecl(v___x_4932_, v___x_4931_, v___x_4930_, v___x_4929_, v___x_4928_);
return v___x_4933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed(lean_object* v___x_4934_, lean_object* v_xs_4935_, lean_object* v_tail_4936_, lean_object* v___x_4937_, lean_object* v___x_4938_, lean_object* v_ys_4939_, lean_object* v_value_4940_, lean_object* v___y_4941_, lean_object* v___y_4942_, lean_object* v___y_4943_, lean_object* v___y_4944_, lean_object* v___y_4945_){
_start:
{
uint8_t v___x_1310__boxed_4946_; uint8_t v___x_1311__boxed_4947_; lean_object* v_res_4948_; 
v___x_1310__boxed_4946_ = lean_unbox(v___x_4937_);
v___x_1311__boxed_4947_ = lean_unbox(v___x_4938_);
v_res_4948_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(v___x_4934_, v_xs_4935_, v_tail_4936_, v___x_1310__boxed_4946_, v___x_1311__boxed_4947_, v_ys_4939_, v_value_4940_, v___y_4941_, v___y_4942_, v___y_4943_, v___y_4944_);
lean_dec(v___y_4944_);
lean_dec_ref(v___y_4943_);
lean_dec(v___y_4942_);
lean_dec_ref(v___y_4941_);
lean_dec_ref(v_ys_4939_);
lean_dec(v___x_4934_);
return v_res_4948_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0(void){
_start:
{
lean_object* v___x_4949_; lean_object* v___x_4950_; lean_object* v___x_4951_; lean_object* v___x_4952_; lean_object* v___x_4953_; lean_object* v___x_4954_; 
v___x_4949_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_forallTelescopeImpl_go___redArg___lam__0___closed__2);
v___x_4950_ = lean_unsigned_to_nat(8u);
v___x_4951_ = lean_unsigned_to_nat(368u);
v___x_4952_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__0);
v___x_4953_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_4954_ = l_mkPanicMessageWithDecl(v___x_4953_, v___x_4952_, v___x_4951_, v___x_4950_, v___x_4949_);
return v___x_4954_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(lean_object* v_xs_4955_, lean_object* v_x_4956_, lean_object* v_x_4957_, lean_object* v_a_4958_, lean_object* v_a_4959_, lean_object* v_a_4960_, lean_object* v_a_4961_){
_start:
{
if (lean_obj_tag(v_x_4956_) == 0)
{
lean_object* v___x_4963_; 
lean_dec_ref(v_xs_4955_);
v___x_4963_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4963_, 0, v_x_4957_);
return v___x_4963_;
}
else
{
lean_object* v_head_4964_; 
v_head_4964_ = lean_ctor_get(v_x_4956_, 0);
if (lean_obj_tag(v_head_4964_) == 0)
{
lean_object* v_tail_4965_; uint8_t v___x_4966_; 
v_tail_4965_ = lean_ctor_get(v_x_4956_, 1);
lean_inc(v_tail_4965_);
lean_dec_ref(v_x_4956_);
v___x_4966_ = l_List_all___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__0(v_tail_4965_);
if (v___x_4966_ == 0)
{
uint8_t v___x_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___f_4971_; lean_object* v___x_4972_; 
v___x_4967_ = 1;
v___x_4968_ = lean_unsigned_to_nat(1u);
v___x_4969_ = lean_box(v___x_4966_);
v___x_4970_ = lean_box(v___x_4967_);
v___f_4971_ = lean_alloc_closure((void*)(l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___boxed), 12, 5);
lean_closure_set(v___f_4971_, 0, v___x_4968_);
lean_closure_set(v___f_4971_, 1, v_xs_4955_);
lean_closure_set(v___f_4971_, 2, v_tail_4965_);
lean_closure_set(v___f_4971_, 3, v___x_4969_);
lean_closure_set(v___f_4971_, 4, v___x_4970_);
v___x_4972_ = l_Lean_Meta_lambdaBoundedTelescope___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go_spec__1___redArg(v_x_4957_, v___x_4968_, v___f_4971_, v___x_4966_, v_a_4958_, v_a_4959_, v_a_4960_, v_a_4961_);
return v___x_4972_;
}
else
{
lean_object* v___x_4973_; 
lean_dec(v_tail_4965_);
lean_dec_ref(v_xs_4955_);
v___x_4973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4973_, 0, v_x_4957_);
return v___x_4973_;
}
}
else
{
lean_object* v_tail_4974_; lean_object* v_val_4975_; lean_object* v___x_4976_; uint8_t v___x_4977_; 
lean_inc_ref(v_head_4964_);
v_tail_4974_ = lean_ctor_get(v_x_4956_, 1);
lean_inc(v_tail_4974_);
lean_dec_ref(v_x_4956_);
v_val_4975_ = lean_ctor_get(v_head_4964_, 0);
lean_inc(v_val_4975_);
lean_dec_ref(v_head_4964_);
v___x_4976_ = lean_array_get_size(v_xs_4955_);
v___x_4977_ = lean_nat_dec_lt(v_val_4975_, v___x_4976_);
if (v___x_4977_ == 0)
{
lean_object* v___x_4978_; lean_object* v___x_4979_; 
lean_dec(v_val_4975_);
lean_dec(v_tail_4974_);
lean_dec_ref(v_x_4957_);
lean_dec_ref(v_xs_4955_);
v___x_4978_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___closed__0);
v___x_4979_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_4978_, v_a_4958_, v_a_4959_, v_a_4960_, v_a_4961_);
return v___x_4979_;
}
else
{
lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; lean_object* v___x_4984_; lean_object* v___x_4985_; 
v___x_4980_ = l_Lean_instInhabitedExpr;
v___x_4981_ = lean_array_get_borrowed(v___x_4980_, v_xs_4955_, v_val_4975_);
lean_dec(v_val_4975_);
v___x_4982_ = lean_unsigned_to_nat(1u);
v___x_4983_ = lean_mk_empty_array_with_capacity(v___x_4982_);
lean_inc(v___x_4981_);
v___x_4984_ = lean_array_push(v___x_4983_, v___x_4981_);
v___x_4985_ = l_Lean_Meta_instantiateLambda(v_x_4957_, v___x_4984_, v_a_4958_, v_a_4959_, v_a_4960_, v_a_4961_);
lean_dec_ref(v___x_4984_);
if (lean_obj_tag(v___x_4985_) == 0)
{
lean_object* v_a_4986_; 
v_a_4986_ = lean_ctor_get(v___x_4985_, 0);
lean_inc(v_a_4986_);
lean_dec_ref(v___x_4985_);
v_x_4956_ = v_tail_4974_;
v_x_4957_ = v_a_4986_;
goto _start;
}
else
{
lean_dec(v_tail_4974_);
lean_dec_ref(v_xs_4955_);
return v___x_4985_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0(lean_object* v___x_4988_, lean_object* v_xs_4989_, lean_object* v_tail_4990_, uint8_t v___x_4991_, uint8_t v___x_4992_, lean_object* v_ys_4993_, lean_object* v_value_4994_, lean_object* v___y_4995_, lean_object* v___y_4996_, lean_object* v___y_4997_, lean_object* v___y_4998_){
_start:
{
lean_object* v___x_5000_; uint8_t v___x_5001_; 
v___x_5000_ = lean_array_get_size(v_ys_4993_);
v___x_5001_ = lean_nat_dec_eq(v___x_5000_, v___x_4988_);
if (v___x_5001_ == 0)
{
lean_object* v___x_5002_; lean_object* v___x_5003_; 
lean_dec_ref(v_value_4994_);
lean_dec(v_tail_4990_);
lean_dec_ref(v_xs_4989_);
v___x_5002_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___lam__0___closed__2);
v___x_5003_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_5002_, v___y_4995_, v___y_4996_, v___y_4997_, v___y_4998_);
return v___x_5003_;
}
else
{
lean_object* v___x_5004_; 
v___x_5004_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_4989_, v_tail_4990_, v_value_4994_, v___y_4995_, v___y_4996_, v___y_4997_, v___y_4998_);
if (lean_obj_tag(v___x_5004_) == 0)
{
lean_object* v_a_5005_; uint8_t v___x_5006_; lean_object* v___x_5007_; 
v_a_5005_ = lean_ctor_get(v___x_5004_, 0);
lean_inc(v_a_5005_);
lean_dec_ref(v___x_5004_);
v___x_5006_ = 1;
v___x_5007_ = l_Lean_Meta_mkLambdaFVars(v_ys_4993_, v_a_5005_, v___x_4991_, v___x_4992_, v___x_4991_, v___x_4992_, v___x_5006_, v___y_4995_, v___y_4996_, v___y_4997_, v___y_4998_);
return v___x_5007_;
}
else
{
return v___x_5004_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go___boxed(lean_object* v_xs_5008_, lean_object* v_x_5009_, lean_object* v_x_5010_, lean_object* v_a_5011_, lean_object* v_a_5012_, lean_object* v_a_5013_, lean_object* v_a_5014_, lean_object* v_a_5015_){
_start:
{
lean_object* v_res_5016_; 
v_res_5016_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_5008_, v_x_5009_, v_x_5010_, v_a_5011_, v_a_5012_, v_a_5013_, v_a_5014_);
lean_dec(v_a_5014_);
lean_dec_ref(v_a_5013_);
lean_dec(v_a_5012_);
lean_dec_ref(v_a_5011_);
return v_res_5016_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0(void){
_start:
{
lean_object* v___x_5017_; 
v___x_5017_ = lean_mk_string_unchecked("Lean.Elab.FixedParamPerm.instantiateLambda", 42, 42);
return v___x_5017_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1(void){
_start:
{
lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; 
v___x_5018_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1, &l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_instantiateForall___closed__1);
v___x_5019_ = lean_unsigned_to_nat(2u);
v___x_5020_ = lean_unsigned_to_nat(362u);
v___x_5021_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0, &l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0_once, _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__0);
v___x_5022_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_5023_ = l_mkPanicMessageWithDecl(v___x_5022_, v___x_5021_, v___x_5020_, v___x_5019_, v___x_5018_);
return v___x_5023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda(lean_object* v_perm_5024_, lean_object* v_value_u2080_5025_, lean_object* v_xs_5026_, lean_object* v_a_5027_, lean_object* v_a_5028_, lean_object* v_a_5029_, lean_object* v_a_5030_){
_start:
{
lean_object* v___x_5032_; lean_object* v___x_5033_; uint8_t v___x_5034_; 
v___x_5032_ = lean_array_get_size(v_xs_5026_);
v___x_5033_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5024_);
v___x_5034_ = lean_nat_dec_eq(v___x_5032_, v___x_5033_);
lean_dec(v___x_5033_);
if (v___x_5034_ == 0)
{
lean_object* v___x_5035_; lean_object* v___x_5036_; 
lean_dec_ref(v_xs_5026_);
lean_dec_ref(v_value_u2080_5025_);
lean_dec_ref(v_perm_5024_);
v___x_5035_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1, &l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_instantiateLambda___closed__1);
v___x_5036_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateForall_go_spec__0(v___x_5035_, v_a_5027_, v_a_5028_, v_a_5029_, v_a_5030_);
return v___x_5036_;
}
else
{
lean_object* v_mask_5037_; lean_object* v___x_5038_; 
v_mask_5037_ = lean_array_to_list(v_perm_5024_);
v___x_5038_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_instantiateLambda_go(v_xs_5026_, v_mask_5037_, v_value_u2080_5025_, v_a_5027_, v_a_5028_, v_a_5029_, v_a_5030_);
return v___x_5038_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_instantiateLambda___boxed(lean_object* v_perm_5039_, lean_object* v_value_u2080_5040_, lean_object* v_xs_5041_, lean_object* v_a_5042_, lean_object* v_a_5043_, lean_object* v_a_5044_, lean_object* v_a_5045_, lean_object* v_a_5046_){
_start:
{
lean_object* v_res_5047_; 
v_res_5047_ = l_Lean_Elab_FixedParamPerm_instantiateLambda(v_perm_5039_, v_value_u2080_5040_, v_xs_5041_, v_a_5042_, v_a_5043_, v_a_5044_, v_a_5045_);
lean_dec(v_a_5045_);
lean_dec_ref(v_a_5044_);
lean_dec(v_a_5043_);
lean_dec_ref(v_a_5042_);
return v_res_5047_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___f_5048_; 
v___f_5048_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__0), 4, 0);
return v___f_5048_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___f_5049_; 
v___f_5049_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__1___boxed), 4, 0);
return v___f_5049_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___f_5050_; 
v___f_5050_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__2___boxed), 2, 0);
return v___f_5050_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___f_5051_; 
v___f_5051_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__3), 4, 0);
return v___f_5051_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___f_5052_; 
v___f_5052_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__4___boxed), 4, 0);
return v___f_5052_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___f_5053_; 
v___f_5053_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__5___boxed), 4, 0);
return v___f_5053_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6(void){
_start:
{
lean_object* v___f_5054_; 
v___f_5054_ = lean_alloc_closure((void*)(l_Id_instMonad___lam__6), 4, 0);
return v___f_5054_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7(void){
_start:
{
lean_object* v___x_5055_; 
v___x_5055_ = l_Array_instInhabited(lean_box(0));
return v___x_5055_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(lean_object* v_msg_5056_){
_start:
{
lean_object* v___f_5057_; lean_object* v___f_5058_; lean_object* v___f_5059_; lean_object* v___f_5060_; lean_object* v___f_5061_; lean_object* v___f_5062_; lean_object* v___f_5063_; lean_object* v___x_5064_; lean_object* v___x_5065_; lean_object* v___x_5066_; lean_object* v___x_5067_; lean_object* v___x_5068_; lean_object* v___x_5069_; 
v___f_5057_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0);
v___f_5058_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1);
v___f_5059_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2);
v___f_5060_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3);
v___f_5061_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4);
v___f_5062_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5);
v___f_5063_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6);
v___x_5064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5064_, 0, v___f_5057_);
lean_ctor_set(v___x_5064_, 1, v___f_5058_);
v___x_5065_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5065_, 0, v___x_5064_);
lean_ctor_set(v___x_5065_, 1, v___f_5059_);
lean_ctor_set(v___x_5065_, 2, v___f_5060_);
lean_ctor_set(v___x_5065_, 3, v___f_5061_);
lean_ctor_set(v___x_5065_, 4, v___f_5062_);
v___x_5066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5066_, 0, v___x_5065_);
lean_ctor_set(v___x_5066_, 1, v___f_5063_);
v___x_5067_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7);
v___x_5068_ = l_instInhabitedOfMonad___redArg(v___x_5066_, v___x_5067_);
v___x_5069_ = lean_panic_fn_borrowed(v___x_5068_, v_msg_5056_);
lean_dec(v___x_5068_);
return v___x_5069_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0(lean_object* v_00_u03b1_5070_, lean_object* v_msg_5071_){
_start:
{
lean_object* v___x_5072_; 
v___x_5072_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v_msg_5071_);
return v___x_5072_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_5073_; 
v___x_5073_ = lean_mk_string_unchecked("_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.pickFixed.go", 84, 84);
return v___x_5073_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_5074_; 
v___x_5074_ = lean_mk_string_unchecked("assertion violation: fixedParamIdx < ys.size\n        ", 53, 53);
return v___x_5074_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; 
v___x_5075_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__1);
v___x_5076_ = lean_unsigned_to_nat(8u);
v___x_5077_ = lean_unsigned_to_nat(394u);
v___x_5078_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__0);
v___x_5079_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_5080_ = l_mkPanicMessageWithDecl(v___x_5079_, v___x_5078_, v___x_5077_, v___x_5076_, v___x_5075_);
return v___x_5080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(lean_object* v_x_5081_, lean_object* v_x_5082_){
_start:
{
if (lean_obj_tag(v_x_5081_) == 0)
{
return v_x_5082_;
}
else
{
lean_object* v_head_5083_; lean_object* v_fst_5084_; 
v_head_5083_ = lean_ctor_get(v_x_5081_, 0);
v_fst_5084_ = lean_ctor_get(v_head_5083_, 0);
if (lean_obj_tag(v_fst_5084_) == 0)
{
lean_object* v_tail_5085_; 
v_tail_5085_ = lean_ctor_get(v_x_5081_, 1);
lean_inc(v_tail_5085_);
lean_dec_ref(v_x_5081_);
v_x_5081_ = v_tail_5085_;
goto _start;
}
else
{
lean_object* v_tail_5087_; lean_object* v_snd_5088_; lean_object* v_val_5089_; lean_object* v___x_5090_; uint8_t v___x_5091_; 
lean_inc_ref(v_fst_5084_);
lean_inc(v_head_5083_);
v_tail_5087_ = lean_ctor_get(v_x_5081_, 1);
lean_inc(v_tail_5087_);
lean_dec_ref(v_x_5081_);
v_snd_5088_ = lean_ctor_get(v_head_5083_, 1);
lean_inc(v_snd_5088_);
lean_dec(v_head_5083_);
v_val_5089_ = lean_ctor_get(v_fst_5084_, 0);
lean_inc(v_val_5089_);
lean_dec_ref(v_fst_5084_);
v___x_5090_ = lean_array_get_size(v_x_5082_);
v___x_5091_ = lean_nat_dec_lt(v_val_5089_, v___x_5090_);
if (v___x_5091_ == 0)
{
lean_object* v___x_5092_; lean_object* v___x_5093_; 
lean_dec(v_val_5089_);
lean_dec(v_snd_5088_);
lean_dec(v_tail_5087_);
lean_dec_ref(v_x_5082_);
v___x_5092_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg___closed__2);
v___x_5093_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5092_);
return v___x_5093_;
}
else
{
lean_object* v___x_5094_; 
v___x_5094_ = lean_array_set(v_x_5082_, v_val_5089_, v_snd_5088_);
lean_dec(v_val_5089_);
v_x_5081_ = v_tail_5087_;
v_x_5082_ = v___x_5094_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go(lean_object* v_00_u03b1_5096_, lean_object* v_x_5097_, lean_object* v_x_5098_){
_start:
{
lean_object* v___x_5099_; 
v___x_5099_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v_x_5097_, v_x_5098_);
return v___x_5099_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0(void){
_start:
{
lean_object* v___x_5100_; 
v___x_5100_ = lean_mk_string_unchecked("Lean.Elab.FixedParamPerm.pickFixed", 34, 34);
return v___x_5100_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1(void){
_start:
{
lean_object* v___x_5101_; 
v___x_5101_ = lean_mk_string_unchecked("assertion violation: xs.size = perm.size\n  ", 43, 43);
return v___x_5101_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2(void){
_start:
{
lean_object* v___x_5102_; lean_object* v___x_5103_; lean_object* v___x_5104_; lean_object* v___x_5105_; lean_object* v___x_5106_; lean_object* v___x_5107_; 
v___x_5102_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__1);
v___x_5103_ = lean_unsigned_to_nat(2u);
v___x_5104_ = lean_unsigned_to_nat(384u);
v___x_5105_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__0);
v___x_5106_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_5107_ = l_mkPanicMessageWithDecl(v___x_5106_, v___x_5105_, v___x_5104_, v___x_5103_, v___x_5102_);
return v___x_5107_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3(void){
_start:
{
lean_object* v___x_5108_; lean_object* v___x_5109_; 
v___x_5108_ = lean_unsigned_to_nat(0u);
v___x_5109_ = lean_mk_empty_array_with_capacity(v___x_5108_);
return v___x_5109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg(lean_object* v_perm_5110_, lean_object* v_xs_5111_){
_start:
{
lean_object* v___x_5112_; lean_object* v___x_5113_; uint8_t v___x_5114_; 
v___x_5112_ = lean_array_get_size(v_xs_5111_);
v___x_5113_ = lean_array_get_size(v_perm_5110_);
v___x_5114_ = lean_nat_dec_eq(v___x_5112_, v___x_5113_);
if (v___x_5114_ == 0)
{
lean_object* v___x_5115_; lean_object* v___x_5116_; 
v___x_5115_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__2);
v___x_5116_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg(v___x_5115_);
return v___x_5116_;
}
else
{
lean_object* v___x_5117_; uint8_t v___x_5118_; 
v___x_5117_ = lean_unsigned_to_nat(0u);
v___x_5118_ = lean_nat_dec_eq(v___x_5112_, v___x_5117_);
if (v___x_5118_ == 0)
{
lean_object* v_dummy_5119_; lean_object* v___x_5120_; lean_object* v_ys_5121_; lean_object* v___x_5122_; lean_object* v___x_5123_; lean_object* v___x_5124_; 
v_dummy_5119_ = lean_array_fget_borrowed(v_xs_5111_, v___x_5117_);
v___x_5120_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5110_);
lean_inc(v_dummy_5119_);
v_ys_5121_ = lean_mk_array(v___x_5120_, v_dummy_5119_);
v___x_5122_ = l_Array_zip___redArg(v_perm_5110_, v_xs_5111_);
v___x_5123_ = lean_array_to_list(v___x_5122_);
v___x_5124_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go___redArg(v___x_5123_, v_ys_5121_);
return v___x_5124_;
}
else
{
lean_object* v___x_5125_; 
v___x_5125_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3);
return v___x_5125_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___redArg___boxed(lean_object* v_perm_5126_, lean_object* v_xs_5127_){
_start:
{
lean_object* v_res_5128_; 
v_res_5128_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5126_, v_xs_5127_);
lean_dec_ref(v_xs_5127_);
lean_dec_ref(v_perm_5126_);
return v_res_5128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed(lean_object* v_00_u03b1_5129_, lean_object* v_perm_5130_, lean_object* v_xs_5131_){
_start:
{
lean_object* v___x_5132_; 
v___x_5132_ = l_Lean_Elab_FixedParamPerm_pickFixed___redArg(v_perm_5130_, v_xs_5131_);
return v___x_5132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickFixed___boxed(lean_object* v_00_u03b1_5133_, lean_object* v_perm_5134_, lean_object* v_xs_5135_){
_start:
{
lean_object* v_res_5136_; 
v_res_5136_ = l_Lean_Elab_FixedParamPerm_pickFixed(v_00_u03b1_5133_, v_perm_5134_, v_xs_5135_);
lean_dec_ref(v_xs_5135_);
lean_dec_ref(v_perm_5134_);
return v_res_5136_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(lean_object* v_xs_5137_, lean_object* v_upperBound_5138_, lean_object* v_perm_5139_, lean_object* v_a_5140_, lean_object* v_b_5141_){
_start:
{
lean_object* v_a_5143_; uint8_t v___x_5150_; 
v___x_5150_ = lean_nat_dec_lt(v_a_5140_, v_upperBound_5138_);
if (v___x_5150_ == 0)
{
lean_dec(v_a_5140_);
return v_b_5141_;
}
else
{
lean_object* v___x_5151_; uint8_t v___x_5152_; 
v___x_5151_ = lean_array_get_size(v_perm_5139_);
v___x_5152_ = lean_nat_dec_lt(v_a_5140_, v___x_5151_);
if (v___x_5152_ == 0)
{
goto v___jp_5147_;
}
else
{
lean_object* v___x_5153_; 
v___x_5153_ = lean_array_fget_borrowed(v_perm_5139_, v_a_5140_);
if (lean_obj_tag(v___x_5153_) == 0)
{
goto v___jp_5147_;
}
else
{
v_a_5143_ = v_b_5141_;
goto v___jp_5142_;
}
}
}
v___jp_5142_:
{
lean_object* v___x_5144_; lean_object* v___x_5145_; 
v___x_5144_ = lean_unsigned_to_nat(1u);
v___x_5145_ = lean_nat_add(v_a_5140_, v___x_5144_);
lean_dec(v_a_5140_);
v_a_5140_ = v___x_5145_;
v_b_5141_ = v_a_5143_;
goto _start;
}
v___jp_5147_:
{
lean_object* v___x_5148_; lean_object* v___x_5149_; 
v___x_5148_ = lean_array_fget_borrowed(v_xs_5137_, v_a_5140_);
lean_inc(v___x_5148_);
v___x_5149_ = lean_array_push(v_b_5141_, v___x_5148_);
v_a_5143_ = v___x_5149_;
goto v___jp_5142_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg___boxed(lean_object* v_xs_5154_, lean_object* v_upperBound_5155_, lean_object* v_perm_5156_, lean_object* v_a_5157_, lean_object* v_b_5158_){
_start:
{
lean_object* v_res_5159_; 
v_res_5159_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5154_, v_upperBound_5155_, v_perm_5156_, v_a_5157_, v_b_5158_);
lean_dec_ref(v_perm_5156_);
lean_dec(v_upperBound_5155_);
lean_dec_ref(v_xs_5154_);
return v_res_5159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg(lean_object* v_perm_5160_, lean_object* v_xs_5161_){
_start:
{
lean_object* v___x_5162_; lean_object* v___x_5163_; lean_object* v_ys_5164_; lean_object* v___x_5165_; 
v___x_5162_ = lean_array_get_size(v_xs_5161_);
v___x_5163_ = lean_unsigned_to_nat(0u);
v_ys_5164_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3);
v___x_5165_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5161_, v___x_5162_, v_perm_5160_, v___x_5163_, v_ys_5164_);
return v___x_5165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___redArg___boxed(lean_object* v_perm_5166_, lean_object* v_xs_5167_){
_start:
{
lean_object* v_res_5168_; 
v_res_5168_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5166_, v_xs_5167_);
lean_dec_ref(v_xs_5167_);
lean_dec_ref(v_perm_5166_);
return v_res_5168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying(lean_object* v_00_u03b1_5169_, lean_object* v_perm_5170_, lean_object* v_xs_5171_){
_start:
{
lean_object* v___x_5172_; 
v___x_5172_ = l_Lean_Elab_FixedParamPerm_pickVarying___redArg(v_perm_5170_, v_xs_5171_);
return v___x_5172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_pickVarying___boxed(lean_object* v_00_u03b1_5173_, lean_object* v_perm_5174_, lean_object* v_xs_5175_){
_start:
{
lean_object* v_res_5176_; 
v_res_5176_ = l_Lean_Elab_FixedParamPerm_pickVarying(v_00_u03b1_5173_, v_perm_5174_, v_xs_5175_);
lean_dec_ref(v_xs_5175_);
lean_dec_ref(v_perm_5174_);
return v_res_5176_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(lean_object* v_00_u03b1_5177_, lean_object* v_xs_5178_, lean_object* v_upperBound_5179_, lean_object* v_perm_5180_, lean_object* v_inst_5181_, lean_object* v_R_5182_, lean_object* v_a_5183_, lean_object* v_b_5184_, lean_object* v_c_5185_){
_start:
{
lean_object* v___x_5186_; 
v___x_5186_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___redArg(v_xs_5178_, v_upperBound_5179_, v_perm_5180_, v_a_5183_, v_b_5184_);
return v___x_5186_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0___boxed(lean_object* v_00_u03b1_5187_, lean_object* v_xs_5188_, lean_object* v_upperBound_5189_, lean_object* v_perm_5190_, lean_object* v_inst_5191_, lean_object* v_R_5192_, lean_object* v_a_5193_, lean_object* v_b_5194_, lean_object* v_c_5195_){
_start:
{
lean_object* v_res_5196_; 
v_res_5196_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerm_pickVarying_spec__0(v_00_u03b1_5187_, v_xs_5188_, v_upperBound_5189_, v_perm_5190_, v_inst_5191_, v_R_5192_, v_a_5193_, v_b_5194_, v_c_5195_);
lean_dec_ref(v_perm_5190_);
lean_dec(v_upperBound_5189_);
lean_dec_ref(v_xs_5188_);
return v_res_5196_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(lean_object* v_msg_5197_){
_start:
{
lean_object* v___x_5198_; lean_object* v___x_5199_; 
v___x_5198_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__7);
v___x_5199_ = lean_panic_fn_borrowed(v___x_5198_, v_msg_5197_);
return v___x_5199_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1(lean_object* v_00_u03b1_5200_, lean_object* v_msg_5201_){
_start:
{
lean_object* v___x_5202_; 
v___x_5202_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(v_msg_5201_);
return v___x_5202_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(lean_object* v_as_5203_, size_t v_i_5204_, size_t v_stop_5205_){
_start:
{
uint8_t v___x_5206_; 
v___x_5206_ = lean_usize_dec_eq(v_i_5204_, v_stop_5205_);
if (v___x_5206_ == 0)
{
uint8_t v___x_5207_; lean_object* v___x_5208_; 
v___x_5207_ = 1;
v___x_5208_ = lean_array_uget_borrowed(v_as_5203_, v_i_5204_);
if (lean_obj_tag(v___x_5208_) == 0)
{
if (v___x_5206_ == 0)
{
size_t v___x_5209_; size_t v___x_5210_; 
v___x_5209_ = ((size_t)1ULL);
v___x_5210_ = lean_usize_add(v_i_5204_, v___x_5209_);
v_i_5204_ = v___x_5210_;
goto _start;
}
else
{
return v___x_5207_;
}
}
else
{
return v___x_5207_;
}
}
else
{
uint8_t v___x_5212_; 
v___x_5212_ = 0;
return v___x_5212_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0___boxed(lean_object* v_as_5213_, lean_object* v_i_5214_, lean_object* v_stop_5215_){
_start:
{
size_t v_i_boxed_5216_; size_t v_stop_boxed_5217_; uint8_t v_res_5218_; lean_object* v_r_5219_; 
v_i_boxed_5216_ = lean_unbox_usize(v_i_5214_);
lean_dec(v_i_5214_);
v_stop_boxed_5217_ = lean_unbox_usize(v_stop_5215_);
lean_dec(v_stop_5215_);
v_res_5218_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(v_as_5213_, v_i_boxed_5216_, v_stop_boxed_5217_);
lean_dec_ref(v_as_5213_);
v_r_5219_ = lean_box(v_res_5218_);
return v_r_5219_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0(void){
_start:
{
lean_object* v___x_5220_; 
v___x_5220_ = lean_mk_string_unchecked("_private.Lean.Elab.PreDefinition.FixedParams.0.Lean.Elab.FixedParamPerm.buildArgs.go", 84, 84);
return v___x_5220_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1(void){
_start:
{
lean_object* v___x_5221_; 
v___x_5221_ = lean_mk_string_unchecked("FixedParams.buildArgs: too few varying args", 43, 43);
return v___x_5221_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2(void){
_start:
{
lean_object* v___x_5222_; lean_object* v___x_5223_; lean_object* v___x_5224_; lean_object* v___x_5225_; lean_object* v___x_5226_; lean_object* v___x_5227_; 
v___x_5222_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__1);
v___x_5223_ = lean_unsigned_to_nat(12u);
v___x_5224_ = lean_unsigned_to_nat(433u);
v___x_5225_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0);
v___x_5226_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_5227_ = l_mkPanicMessageWithDecl(v___x_5226_, v___x_5225_, v___x_5224_, v___x_5223_, v___x_5222_);
return v___x_5227_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3(void){
_start:
{
lean_object* v___x_5228_; 
v___x_5228_ = lean_mk_string_unchecked("FixedParams.buildArgs: too few fixed args", 41, 41);
return v___x_5228_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4(void){
_start:
{
lean_object* v___x_5229_; lean_object* v___x_5230_; lean_object* v___x_5231_; lean_object* v___x_5232_; lean_object* v___x_5233_; lean_object* v___x_5234_; 
v___x_5229_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__3);
v___x_5230_ = lean_unsigned_to_nat(10u);
v___x_5231_ = lean_unsigned_to_nat(425u);
v___x_5232_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__0);
v___x_5233_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_5234_ = l_mkPanicMessageWithDecl(v___x_5233_, v___x_5232_, v___x_5231_, v___x_5230_, v___x_5229_);
return v___x_5234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(lean_object* v_perm_5235_, lean_object* v_fixedArgs_5236_, lean_object* v_varyingArgs_5237_, lean_object* v_i_5238_, lean_object* v_j_5239_, lean_object* v_xs_5240_){
_start:
{
lean_object* v_lower_5242_; lean_object* v_upper_5243_; lean_object* v___y_5248_; lean_object* v___y_5249_; lean_object* v___y_5250_; lean_object* v_lower_5258_; lean_object* v_upper_5259_; lean_object* v___x_5267_; uint8_t v___x_5268_; 
v___x_5267_ = lean_array_get_size(v_perm_5235_);
v___x_5268_ = lean_nat_dec_lt(v_i_5238_, v___x_5267_);
if (v___x_5268_ == 0)
{
lean_object* v___x_5269_; lean_object* v___x_5270_; uint8_t v___x_5271_; 
lean_dec(v_i_5238_);
lean_dec_ref(v_perm_5235_);
v___x_5269_ = lean_unsigned_to_nat(0u);
v___x_5270_ = lean_array_get_size(v_varyingArgs_5237_);
v___x_5271_ = lean_nat_dec_le(v_j_5239_, v___x_5269_);
if (v___x_5271_ == 0)
{
v_lower_5242_ = v_j_5239_;
v_upper_5243_ = v___x_5270_;
goto v___jp_5241_;
}
else
{
lean_dec(v_j_5239_);
v_lower_5242_ = v___x_5269_;
v_upper_5243_ = v___x_5270_;
goto v___jp_5241_;
}
}
else
{
lean_object* v___x_5272_; 
v___x_5272_ = lean_array_fget_borrowed(v_perm_5235_, v_i_5238_);
if (lean_obj_tag(v___x_5272_) == 1)
{
lean_object* v_val_5273_; lean_object* v___x_5274_; uint8_t v___x_5275_; 
v_val_5273_ = lean_ctor_get(v___x_5272_, 0);
v___x_5274_ = lean_array_get_size(v_fixedArgs_5236_);
v___x_5275_ = lean_nat_dec_lt(v_val_5273_, v___x_5274_);
if (v___x_5275_ == 0)
{
lean_object* v___x_5276_; lean_object* v___x_5277_; 
lean_dec_ref(v_xs_5240_);
lean_dec(v_j_5239_);
lean_dec(v_i_5238_);
lean_dec_ref(v_varyingArgs_5237_);
lean_dec_ref(v_perm_5235_);
v___x_5276_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__4);
v___x_5277_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(v___x_5276_);
return v___x_5277_;
}
else
{
lean_object* v___x_5278_; lean_object* v___x_5279_; lean_object* v___x_5280_; lean_object* v___x_5281_; 
v___x_5278_ = lean_unsigned_to_nat(1u);
v___x_5279_ = lean_nat_add(v_i_5238_, v___x_5278_);
lean_dec(v_i_5238_);
v___x_5280_ = lean_array_fget_borrowed(v_fixedArgs_5236_, v_val_5273_);
lean_inc(v___x_5280_);
v___x_5281_ = lean_array_push(v_xs_5240_, v___x_5280_);
v_i_5238_ = v___x_5279_;
v_xs_5240_ = v___x_5281_;
goto _start;
}
}
else
{
lean_object* v___x_5283_; uint8_t v___x_5284_; 
v___x_5283_ = lean_array_get_size(v_varyingArgs_5237_);
v___x_5284_ = lean_nat_dec_lt(v_j_5239_, v___x_5283_);
if (v___x_5284_ == 0)
{
lean_object* v___x_5285_; uint8_t v___x_5286_; 
lean_dec(v_j_5239_);
lean_dec_ref(v_varyingArgs_5237_);
v___x_5285_ = lean_unsigned_to_nat(0u);
v___x_5286_ = lean_nat_dec_le(v_i_5238_, v___x_5285_);
if (v___x_5286_ == 0)
{
v_lower_5258_ = v_i_5238_;
v_upper_5259_ = v___x_5267_;
goto v___jp_5257_;
}
else
{
lean_dec(v_i_5238_);
v_lower_5258_ = v___x_5285_;
v_upper_5259_ = v___x_5267_;
goto v___jp_5257_;
}
}
else
{
lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; lean_object* v___x_5291_; 
v___x_5287_ = lean_unsigned_to_nat(1u);
v___x_5288_ = lean_nat_add(v_i_5238_, v___x_5287_);
lean_dec(v_i_5238_);
v___x_5289_ = lean_nat_add(v_j_5239_, v___x_5287_);
v___x_5290_ = lean_array_fget_borrowed(v_varyingArgs_5237_, v_j_5239_);
lean_dec(v_j_5239_);
lean_inc(v___x_5290_);
v___x_5291_ = lean_array_push(v_xs_5240_, v___x_5290_);
v_i_5238_ = v___x_5288_;
v_j_5239_ = v___x_5289_;
v_xs_5240_ = v___x_5291_;
goto _start;
}
}
}
v___jp_5241_:
{
lean_object* v___x_5244_; lean_object* v___x_5245_; lean_object* v___x_5246_; 
v___x_5244_ = l_Array_toSubarray___redArg(v_varyingArgs_5237_, v_lower_5242_, v_upper_5243_);
v___x_5245_ = l_Subarray_copy___redArg(v___x_5244_);
v___x_5246_ = l_Array_append___redArg(v_xs_5240_, v___x_5245_);
lean_dec_ref(v___x_5245_);
return v___x_5246_;
}
v___jp_5247_:
{
uint8_t v___x_5251_; 
v___x_5251_ = lean_nat_dec_lt(v___y_5248_, v___y_5250_);
if (v___x_5251_ == 0)
{
lean_dec(v___y_5250_);
lean_dec_ref(v___y_5249_);
lean_dec(v___y_5248_);
return v_xs_5240_;
}
else
{
size_t v___x_5252_; size_t v___x_5253_; uint8_t v___x_5254_; 
v___x_5252_ = lean_usize_of_nat(v___y_5248_);
lean_dec(v___y_5248_);
v___x_5253_ = lean_usize_of_nat(v___y_5250_);
lean_dec(v___y_5250_);
v___x_5254_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__0(v___y_5249_, v___x_5252_, v___x_5253_);
lean_dec_ref(v___y_5249_);
if (v___x_5254_ == 0)
{
return v_xs_5240_;
}
else
{
lean_object* v___x_5255_; lean_object* v___x_5256_; 
lean_dec_ref(v_xs_5240_);
v___x_5255_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2, &l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2_once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___closed__2);
v___x_5256_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(v___x_5255_);
return v___x_5256_;
}
}
}
v___jp_5257_:
{
lean_object* v___x_5260_; lean_object* v_array_5261_; lean_object* v_start_5262_; lean_object* v_stop_5263_; uint8_t v___x_5264_; 
v___x_5260_ = l_Array_toSubarray___redArg(v_perm_5235_, v_lower_5258_, v_upper_5259_);
v_array_5261_ = lean_ctor_get(v___x_5260_, 0);
lean_inc_ref(v_array_5261_);
v_start_5262_ = lean_ctor_get(v___x_5260_, 1);
lean_inc(v_start_5262_);
v_stop_5263_ = lean_ctor_get(v___x_5260_, 2);
lean_inc(v_stop_5263_);
lean_dec_ref(v___x_5260_);
v___x_5264_ = lean_nat_dec_lt(v_start_5262_, v_stop_5263_);
if (v___x_5264_ == 0)
{
lean_dec(v_stop_5263_);
lean_dec(v_start_5262_);
lean_dec_ref(v_array_5261_);
return v_xs_5240_;
}
else
{
lean_object* v___x_5265_; uint8_t v___x_5266_; 
v___x_5265_ = lean_array_get_size(v_array_5261_);
v___x_5266_ = lean_nat_dec_le(v_stop_5263_, v___x_5265_);
if (v___x_5266_ == 0)
{
lean_dec(v_stop_5263_);
v___y_5248_ = v_start_5262_;
v___y_5249_ = v_array_5261_;
v___y_5250_ = v___x_5265_;
goto v___jp_5247_;
}
else
{
v___y_5248_ = v_start_5262_;
v___y_5249_ = v_array_5261_;
v___y_5250_ = v_stop_5263_;
goto v___jp_5247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg___boxed(lean_object* v_perm_5293_, lean_object* v_fixedArgs_5294_, lean_object* v_varyingArgs_5295_, lean_object* v_i_5296_, lean_object* v_j_5297_, lean_object* v_xs_5298_){
_start:
{
lean_object* v_res_5299_; 
v_res_5299_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5293_, v_fixedArgs_5294_, v_varyingArgs_5295_, v_i_5296_, v_j_5297_, v_xs_5298_);
lean_dec_ref(v_fixedArgs_5294_);
return v_res_5299_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(lean_object* v_00_u03b1_5300_, lean_object* v_perm_5301_, lean_object* v_fixedArgs_5302_, lean_object* v_varyingArgs_5303_, lean_object* v_i_5304_, lean_object* v_j_5305_, lean_object* v_xs_5306_){
_start:
{
lean_object* v___x_5307_; 
v___x_5307_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5301_, v_fixedArgs_5302_, v_varyingArgs_5303_, v_i_5304_, v_j_5305_, v_xs_5306_);
return v___x_5307_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___boxed(lean_object* v_00_u03b1_5308_, lean_object* v_perm_5309_, lean_object* v_fixedArgs_5310_, lean_object* v_varyingArgs_5311_, lean_object* v_i_5312_, lean_object* v_j_5313_, lean_object* v_xs_5314_){
_start:
{
lean_object* v_res_5315_; 
v_res_5315_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go(v_00_u03b1_5308_, v_perm_5309_, v_fixedArgs_5310_, v_varyingArgs_5311_, v_i_5312_, v_j_5313_, v_xs_5314_);
lean_dec_ref(v_fixedArgs_5310_);
return v_res_5315_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0(void){
_start:
{
lean_object* v___x_5316_; 
v___x_5316_ = lean_mk_string_unchecked("Lean.Elab.FixedParamPerm.buildArgs", 34, 34);
return v___x_5316_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1(void){
_start:
{
lean_object* v___x_5317_; 
v___x_5317_ = lean_mk_string_unchecked("assertion violation: fixedArgs.size = perm.numFixed\n  ", 54, 54);
return v___x_5317_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2(void){
_start:
{
lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; 
v___x_5318_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1, &l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1_once, _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__1);
v___x_5319_ = lean_unsigned_to_nat(2u);
v___x_5320_ = lean_unsigned_to_nat(416u);
v___x_5321_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0, &l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0_once, _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__0);
v___x_5322_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_5323_ = l_mkPanicMessageWithDecl(v___x_5322_, v___x_5321_, v___x_5320_, v___x_5319_, v___x_5318_);
return v___x_5323_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg(lean_object* v_perm_5324_, lean_object* v_fixedArgs_5325_, lean_object* v_varyingArgs_5326_){
_start:
{
lean_object* v___x_5327_; lean_object* v___x_5328_; uint8_t v___x_5329_; 
v___x_5327_ = lean_array_get_size(v_fixedArgs_5325_);
v___x_5328_ = l_Lean_Elab_FixedParamPerm_numFixed(v_perm_5324_);
v___x_5329_ = lean_nat_dec_eq(v___x_5327_, v___x_5328_);
lean_dec(v___x_5328_);
if (v___x_5329_ == 0)
{
lean_object* v___x_5330_; lean_object* v___x_5331_; 
lean_dec_ref(v_varyingArgs_5326_);
lean_dec_ref(v_perm_5324_);
v___x_5330_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2, &l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2_once, _init_l_Lean_Elab_FixedParamPerm_buildArgs___redArg___closed__2);
v___x_5331_ = l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go_spec__1___redArg(v___x_5330_);
return v___x_5331_;
}
else
{
lean_object* v___x_5332_; lean_object* v___x_5333_; lean_object* v___x_5334_; 
v___x_5332_ = lean_unsigned_to_nat(0u);
v___x_5333_ = lean_obj_once(&l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3, &l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3_once, _init_l_Lean_Elab_FixedParamPerm_pickFixed___redArg___closed__3);
v___x_5334_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_buildArgs_go___redArg(v_perm_5324_, v_fixedArgs_5325_, v_varyingArgs_5326_, v___x_5332_, v___x_5332_, v___x_5333_);
return v___x_5334_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___redArg___boxed(lean_object* v_perm_5335_, lean_object* v_fixedArgs_5336_, lean_object* v_varyingArgs_5337_){
_start:
{
lean_object* v_res_5338_; 
v_res_5338_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5335_, v_fixedArgs_5336_, v_varyingArgs_5337_);
lean_dec_ref(v_fixedArgs_5336_);
return v_res_5338_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs(lean_object* v_00_u03b1_5339_, lean_object* v_perm_5340_, lean_object* v_fixedArgs_5341_, lean_object* v_varyingArgs_5342_){
_start:
{
lean_object* v___x_5343_; 
v___x_5343_ = l_Lean_Elab_FixedParamPerm_buildArgs___redArg(v_perm_5340_, v_fixedArgs_5341_, v_varyingArgs_5342_);
return v___x_5343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerm_buildArgs___boxed(lean_object* v_00_u03b1_5344_, lean_object* v_perm_5345_, lean_object* v_fixedArgs_5346_, lean_object* v_varyingArgs_5347_){
_start:
{
lean_object* v_res_5348_; 
v_res_5348_ = l_Lean_Elab_FixedParamPerm_buildArgs(v_00_u03b1_5344_, v_perm_5345_, v_fixedArgs_5346_, v_varyingArgs_5347_);
lean_dec_ref(v_fixedArgs_5346_);
return v_res_5348_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(lean_object* v_x_5349_, lean_object* v_x_5350_){
_start:
{
if (lean_obj_tag(v_x_5349_) == 0)
{
if (lean_obj_tag(v_x_5350_) == 0)
{
uint8_t v___x_5351_; 
v___x_5351_ = 1;
return v___x_5351_;
}
else
{
uint8_t v___x_5352_; 
v___x_5352_ = 0;
return v___x_5352_;
}
}
else
{
if (lean_obj_tag(v_x_5350_) == 0)
{
uint8_t v___x_5353_; 
v___x_5353_ = 0;
return v___x_5353_;
}
else
{
lean_object* v_val_5354_; lean_object* v_val_5355_; uint8_t v___x_5356_; 
v_val_5354_ = lean_ctor_get(v_x_5349_, 0);
v_val_5355_ = lean_ctor_get(v_x_5350_, 0);
v___x_5356_ = lean_nat_dec_eq(v_val_5354_, v_val_5355_);
return v___x_5356_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1___boxed(lean_object* v_x_5357_, lean_object* v_x_5358_){
_start:
{
uint8_t v_res_5359_; lean_object* v_r_5360_; 
v_res_5359_ = l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v_x_5357_, v_x_5358_);
lean_dec(v_x_5358_);
lean_dec(v_x_5357_);
v_r_5360_ = lean_box(v_res_5359_);
return v_r_5360_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(lean_object* v_xs_5361_, lean_object* v_ys_5362_, lean_object* v_x_5363_){
_start:
{
lean_object* v_zero_5364_; uint8_t v_isZero_5365_; 
v_zero_5364_ = lean_unsigned_to_nat(0u);
v_isZero_5365_ = lean_nat_dec_eq(v_x_5363_, v_zero_5364_);
if (v_isZero_5365_ == 1)
{
lean_dec(v_x_5363_);
return v_isZero_5365_;
}
else
{
lean_object* v_one_5366_; lean_object* v_n_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; uint8_t v___x_5370_; 
v_one_5366_ = lean_unsigned_to_nat(1u);
v_n_5367_ = lean_nat_sub(v_x_5363_, v_one_5366_);
lean_dec(v_x_5363_);
v___x_5368_ = lean_array_fget_borrowed(v_xs_5361_, v_n_5367_);
v___x_5369_ = lean_array_fget_borrowed(v_ys_5362_, v_n_5367_);
v___x_5370_ = l_Option_instBEq_beq___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__1(v___x_5368_, v___x_5369_);
if (v___x_5370_ == 0)
{
lean_dec(v_n_5367_);
return v___x_5370_;
}
else
{
v_x_5363_ = v_n_5367_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg___boxed(lean_object* v_xs_5372_, lean_object* v_ys_5373_, lean_object* v_x_5374_){
_start:
{
uint8_t v_res_5375_; lean_object* v_r_5376_; 
v_res_5375_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5372_, v_ys_5373_, v_x_5374_);
lean_dec_ref(v_ys_5373_);
lean_dec_ref(v_xs_5372_);
v_r_5376_ = lean_box(v_res_5375_);
return v_r_5376_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(size_t v_sz_5377_, size_t v_i_5378_, lean_object* v_bs_5379_){
_start:
{
uint8_t v___x_5380_; 
v___x_5380_ = lean_usize_dec_lt(v_i_5378_, v_sz_5377_);
if (v___x_5380_ == 0)
{
return v_bs_5379_;
}
else
{
lean_object* v_v_5381_; lean_object* v___x_5382_; lean_object* v_bs_x27_5383_; lean_object* v___x_5384_; size_t v___x_5385_; size_t v___x_5386_; lean_object* v___x_5387_; 
v_v_5381_ = lean_array_uget(v_bs_5379_, v_i_5378_);
v___x_5382_ = lean_unsigned_to_nat(0u);
v_bs_x27_5383_ = lean_array_uset(v_bs_5379_, v_i_5378_, v___x_5382_);
v___x_5384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5384_, 0, v_v_5381_);
v___x_5385_ = ((size_t)1ULL);
v___x_5386_ = lean_usize_add(v_i_5378_, v___x_5385_);
v___x_5387_ = lean_array_uset(v_bs_x27_5383_, v_i_5378_, v___x_5384_);
v_i_5378_ = v___x_5386_;
v_bs_5379_ = v___x_5387_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0___boxed(lean_object* v_sz_5389_, lean_object* v_i_5390_, lean_object* v_bs_5391_){
_start:
{
size_t v_sz_boxed_5392_; size_t v_i_boxed_5393_; lean_object* v_res_5394_; 
v_sz_boxed_5392_ = lean_unbox_usize(v_sz_5389_);
lean_dec(v_sz_5389_);
v_i_boxed_5393_ = lean_unbox_usize(v_i_5390_);
lean_dec(v_i_5390_);
v_res_5394_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_boxed_5392_, v_i_boxed_5393_, v_bs_5391_);
return v_res_5394_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(lean_object* v_fixedParamPerms_5395_, lean_object* v_as_5396_, size_t v_i_5397_, size_t v_stop_5398_){
_start:
{
uint8_t v___x_5399_; 
v___x_5399_ = lean_usize_dec_eq(v_i_5397_, v_stop_5398_);
if (v___x_5399_ == 0)
{
lean_object* v_numFixed_5400_; uint8_t v___x_5401_; lean_object* v___x_5402_; lean_object* v___x_5403_; size_t v_sz_5404_; size_t v___x_5405_; lean_object* v___x_5406_; lean_object* v___x_5407_; lean_object* v___x_5408_; lean_object* v___x_5409_; lean_object* v___x_5410_; lean_object* v___x_5411_; lean_object* v___x_5412_; uint8_t v___x_5413_; 
v_numFixed_5400_ = lean_ctor_get(v_fixedParamPerms_5395_, 0);
v___x_5401_ = 1;
v___x_5402_ = lean_array_uget_borrowed(v_as_5396_, v_i_5397_);
lean_inc(v_numFixed_5400_);
v___x_5403_ = l_Array_range(v_numFixed_5400_);
v_sz_5404_ = lean_array_size(v___x_5403_);
v___x_5405_ = ((size_t)0ULL);
v___x_5406_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__0(v_sz_5404_, v___x_5405_, v___x_5403_);
v___x_5407_ = lean_array_get_size(v___x_5402_);
v___x_5408_ = lean_nat_sub(v___x_5407_, v_numFixed_5400_);
v___x_5409_ = lean_box(0);
v___x_5410_ = lean_mk_array(v___x_5408_, v___x_5409_);
v___x_5411_ = l_Array_append___redArg(v___x_5406_, v___x_5410_);
lean_dec_ref(v___x_5410_);
v___x_5412_ = lean_array_get_size(v___x_5411_);
v___x_5413_ = lean_nat_dec_eq(v___x_5407_, v___x_5412_);
if (v___x_5413_ == 0)
{
lean_dec_ref(v___x_5411_);
lean_dec_ref(v_fixedParamPerms_5395_);
return v___x_5401_;
}
else
{
uint8_t v___x_5414_; 
v___x_5414_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v___x_5402_, v___x_5411_, v___x_5407_);
lean_dec_ref(v___x_5411_);
if (v___x_5414_ == 0)
{
lean_dec_ref(v_fixedParamPerms_5395_);
return v___x_5401_;
}
else
{
if (v___x_5399_ == 0)
{
size_t v___x_5415_; size_t v___x_5416_; 
v___x_5415_ = ((size_t)1ULL);
v___x_5416_ = lean_usize_add(v_i_5397_, v___x_5415_);
v_i_5397_ = v___x_5416_;
goto _start;
}
else
{
lean_dec_ref(v_fixedParamPerms_5395_);
return v___x_5401_;
}
}
}
}
else
{
uint8_t v___x_5418_; 
lean_dec_ref(v_fixedParamPerms_5395_);
v___x_5418_ = 0;
return v___x_5418_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3___boxed(lean_object* v_fixedParamPerms_5419_, lean_object* v_as_5420_, lean_object* v_i_5421_, lean_object* v_stop_5422_){
_start:
{
size_t v_i_boxed_5423_; size_t v_stop_boxed_5424_; uint8_t v_res_5425_; lean_object* v_r_5426_; 
v_i_boxed_5423_ = lean_unbox_usize(v_i_5421_);
lean_dec(v_i_5421_);
v_stop_boxed_5424_ = lean_unbox_usize(v_stop_5422_);
lean_dec(v_stop_5422_);
v_res_5425_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5419_, v_as_5420_, v_i_boxed_5423_, v_stop_boxed_5424_);
lean_dec_ref(v_as_5420_);
v_r_5426_ = lean_box(v_res_5425_);
return v_r_5426_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_FixedParamPerms_fixedArePrefix(lean_object* v_fixedParamPerms_5427_){
_start:
{
lean_object* v_perms_5428_; lean_object* v___x_5429_; lean_object* v___x_5430_; uint8_t v___x_5431_; 
v_perms_5428_ = lean_ctor_get(v_fixedParamPerms_5427_, 1);
lean_inc_ref(v_perms_5428_);
v___x_5429_ = lean_unsigned_to_nat(0u);
v___x_5430_ = lean_array_get_size(v_perms_5428_);
v___x_5431_ = lean_nat_dec_lt(v___x_5429_, v___x_5430_);
if (v___x_5431_ == 0)
{
uint8_t v___x_5432_; 
lean_dec_ref(v_perms_5428_);
lean_dec_ref(v_fixedParamPerms_5427_);
v___x_5432_ = 1;
return v___x_5432_;
}
else
{
if (v___x_5431_ == 0)
{
lean_dec_ref(v_perms_5428_);
lean_dec_ref(v_fixedParamPerms_5427_);
return v___x_5431_;
}
else
{
size_t v___x_5433_; size_t v___x_5434_; uint8_t v___x_5435_; 
v___x_5433_ = ((size_t)0ULL);
v___x_5434_ = lean_usize_of_nat(v___x_5430_);
v___x_5435_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__3(v_fixedParamPerms_5427_, v_perms_5428_, v___x_5433_, v___x_5434_);
lean_dec_ref(v_perms_5428_);
if (v___x_5435_ == 0)
{
return v___x_5431_;
}
else
{
uint8_t v___x_5436_; 
v___x_5436_ = 0;
return v___x_5436_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_fixedArePrefix___boxed(lean_object* v_fixedParamPerms_5437_){
_start:
{
uint8_t v_res_5438_; lean_object* v_r_5439_; 
v_res_5438_ = l_Lean_Elab_FixedParamPerms_fixedArePrefix(v_fixedParamPerms_5437_);
v_r_5439_ = lean_box(v_res_5438_);
return v_r_5439_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(lean_object* v_xs_5440_, lean_object* v_ys_5441_, lean_object* v_hsz_5442_, lean_object* v_x_5443_, lean_object* v_x_5444_){
_start:
{
uint8_t v___x_5445_; 
v___x_5445_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___redArg(v_xs_5440_, v_ys_5441_, v_x_5443_);
return v___x_5445_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2___boxed(lean_object* v_xs_5446_, lean_object* v_ys_5447_, lean_object* v_hsz_5448_, lean_object* v_x_5449_, lean_object* v_x_5450_){
_start:
{
uint8_t v_res_5451_; lean_object* v_r_5452_; 
v_res_5451_ = l_Array_isEqvAux___at___00Lean_Elab_FixedParamPerms_fixedArePrefix_spec__2(v_xs_5446_, v_ys_5447_, v_hsz_5448_, v_x_5449_, v_x_5450_);
lean_dec_ref(v_ys_5447_);
lean_dec_ref(v_xs_5446_);
v_r_5452_ = lean_box(v_res_5451_);
return v_r_5452_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0(void){
_start:
{
lean_object* v___x_5453_; 
v___x_5453_ = l_Array_instInhabited(lean_box(0));
return v___x_5453_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(lean_object* v_msg_5454_){
_start:
{
lean_object* v___f_5455_; lean_object* v___f_5456_; lean_object* v___f_5457_; lean_object* v___f_5458_; lean_object* v___f_5459_; lean_object* v___f_5460_; lean_object* v___f_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; lean_object* v___x_5468_; lean_object* v___x_5469_; lean_object* v___x_5470_; 
v___f_5455_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0);
v___f_5456_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1);
v___f_5457_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2);
v___f_5458_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3);
v___f_5459_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4);
v___f_5460_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5);
v___f_5461_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6);
v___x_5462_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5462_, 0, v___f_5455_);
lean_ctor_set(v___x_5462_, 1, v___f_5456_);
v___x_5463_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5463_, 0, v___x_5462_);
lean_ctor_set(v___x_5463_, 1, v___f_5457_);
lean_ctor_set(v___x_5463_, 2, v___f_5458_);
lean_ctor_set(v___x_5463_, 3, v___f_5459_);
lean_ctor_set(v___x_5463_, 4, v___f_5460_);
v___x_5464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5464_, 0, v___x_5463_);
lean_ctor_set(v___x_5464_, 1, v___f_5461_);
v___x_5465_ = l_Lean_Elab_instInhabitedFixedParamPerms_default;
v___x_5466_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0___closed__0);
v___x_5467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5467_, 0, v___x_5466_);
lean_ctor_set(v___x_5467_, 1, v___x_5466_);
v___x_5468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5468_, 0, v___x_5465_);
lean_ctor_set(v___x_5468_, 1, v___x_5467_);
v___x_5469_ = l_instInhabitedOfMonad___redArg(v___x_5464_, v___x_5468_);
v___x_5470_ = lean_panic_fn_borrowed(v___x_5469_, v_msg_5454_);
lean_dec(v___x_5469_);
return v___x_5470_;
}
}
static lean_object* _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0(void){
_start:
{
lean_object* v___x_5471_; 
v___x_5471_ = l_Array_instInhabited(lean_box(0));
return v___x_5471_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(lean_object* v_msg_5472_){
_start:
{
lean_object* v___f_5473_; lean_object* v___f_5474_; lean_object* v___f_5475_; lean_object* v___f_5476_; lean_object* v___f_5477_; lean_object* v___f_5478_; lean_object* v___f_5479_; lean_object* v___x_5480_; lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; 
v___f_5473_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__0);
v___f_5474_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__1);
v___f_5475_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__2);
v___f_5476_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__3);
v___f_5477_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__4);
v___f_5478_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__5);
v___f_5479_ = lean_obj_once(&l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6, &l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6_once, _init_l_panic___at___00__private_Lean_Elab_PreDefinition_FixedParams_0__Lean_Elab_FixedParamPerm_pickFixed_go_spec__0___redArg___closed__6);
v___x_5480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5480_, 0, v___f_5473_);
lean_ctor_set(v___x_5480_, 1, v___f_5474_);
v___x_5481_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5481_, 0, v___x_5480_);
lean_ctor_set(v___x_5481_, 1, v___f_5475_);
lean_ctor_set(v___x_5481_, 2, v___f_5476_);
lean_ctor_set(v___x_5481_, 3, v___f_5477_);
lean_ctor_set(v___x_5481_, 4, v___f_5478_);
v___x_5482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5482_, 0, v___x_5481_);
lean_ctor_set(v___x_5482_, 1, v___f_5479_);
v___x_5483_ = lean_obj_once(&l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0, &l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0_once, _init_l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3___closed__0);
v___x_5484_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5484_, 0, v___x_5483_);
v___x_5485_ = l_instInhabitedOfMonad___redArg(v___x_5482_, v___x_5484_);
v___x_5486_ = lean_panic_fn_borrowed(v___x_5485_, v_msg_5472_);
lean_dec(v___x_5485_);
return v___x_5486_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(lean_object* v_as_5487_, size_t v_i_5488_, size_t v_stop_5489_){
_start:
{
uint8_t v___x_5490_; 
v___x_5490_ = lean_usize_dec_eq(v_i_5488_, v_stop_5489_);
if (v___x_5490_ == 0)
{
uint8_t v___x_5491_; lean_object* v___x_5492_; uint8_t v___x_5493_; 
v___x_5491_ = 1;
v___x_5492_ = lean_array_uget_borrowed(v_as_5487_, v_i_5488_);
v___x_5493_ = l_Lean_Expr_isFVar(v___x_5492_);
if (v___x_5493_ == 0)
{
return v___x_5491_;
}
else
{
if (v___x_5490_ == 0)
{
size_t v___x_5494_; size_t v___x_5495_; 
v___x_5494_ = ((size_t)1ULL);
v___x_5495_ = lean_usize_add(v_i_5488_, v___x_5494_);
v_i_5488_ = v___x_5495_;
goto _start;
}
else
{
return v___x_5491_;
}
}
}
else
{
uint8_t v___x_5497_; 
v___x_5497_ = 0;
return v___x_5497_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11___boxed(lean_object* v_as_5498_, lean_object* v_i_5499_, lean_object* v_stop_5500_){
_start:
{
size_t v_i_boxed_5501_; size_t v_stop_boxed_5502_; uint8_t v_res_5503_; lean_object* v_r_5504_; 
v_i_boxed_5501_ = lean_unbox_usize(v_i_5499_);
lean_dec(v_i_5499_);
v_stop_boxed_5502_ = lean_unbox_usize(v_stop_5500_);
lean_dec(v_stop_5500_);
v_res_5503_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_as_5498_, v_i_boxed_5501_, v_stop_boxed_5502_);
lean_dec_ref(v_as_5498_);
v_r_5504_ = lean_box(v_res_5503_);
return v_r_5504_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(lean_object* v_upperBound_5505_, lean_object* v_a_5506_, lean_object* v_b_5507_){
_start:
{
lean_object* v_a_5509_; uint8_t v___x_5513_; 
v___x_5513_ = lean_nat_dec_lt(v_a_5506_, v_upperBound_5505_);
if (v___x_5513_ == 0)
{
lean_dec(v_a_5506_);
return v_b_5507_;
}
else
{
lean_object* v_snd_5514_; lean_object* v_snd_5515_; lean_object* v_snd_5516_; lean_object* v_snd_5517_; lean_object* v_fst_5518_; lean_object* v___x_5520_; uint8_t v_isShared_5521_; uint8_t v_isSharedCheck_5630_; 
v_snd_5514_ = lean_ctor_get(v_b_5507_, 1);
lean_inc(v_snd_5514_);
v_snd_5515_ = lean_ctor_get(v_snd_5514_, 1);
lean_inc(v_snd_5515_);
v_snd_5516_ = lean_ctor_get(v_snd_5515_, 1);
lean_inc(v_snd_5516_);
v_snd_5517_ = lean_ctor_get(v_snd_5516_, 1);
lean_inc(v_snd_5517_);
v_fst_5518_ = lean_ctor_get(v_b_5507_, 0);
v_isSharedCheck_5630_ = !lean_is_exclusive(v_b_5507_);
if (v_isSharedCheck_5630_ == 0)
{
lean_object* v_unused_5631_; 
v_unused_5631_ = lean_ctor_get(v_b_5507_, 1);
lean_dec(v_unused_5631_);
v___x_5520_ = v_b_5507_;
v_isShared_5521_ = v_isSharedCheck_5630_;
goto v_resetjp_5519_;
}
else
{
lean_inc(v_fst_5518_);
lean_dec(v_b_5507_);
v___x_5520_ = lean_box(0);
v_isShared_5521_ = v_isSharedCheck_5630_;
goto v_resetjp_5519_;
}
v_resetjp_5519_:
{
lean_object* v_fst_5522_; lean_object* v___x_5524_; uint8_t v_isShared_5525_; uint8_t v_isSharedCheck_5628_; 
v_fst_5522_ = lean_ctor_get(v_snd_5514_, 0);
v_isSharedCheck_5628_ = !lean_is_exclusive(v_snd_5514_);
if (v_isSharedCheck_5628_ == 0)
{
lean_object* v_unused_5629_; 
v_unused_5629_ = lean_ctor_get(v_snd_5514_, 1);
lean_dec(v_unused_5629_);
v___x_5524_ = v_snd_5514_;
v_isShared_5525_ = v_isSharedCheck_5628_;
goto v_resetjp_5523_;
}
else
{
lean_inc(v_fst_5522_);
lean_dec(v_snd_5514_);
v___x_5524_ = lean_box(0);
v_isShared_5525_ = v_isSharedCheck_5628_;
goto v_resetjp_5523_;
}
v_resetjp_5523_:
{
lean_object* v_fst_5526_; lean_object* v___x_5528_; uint8_t v_isShared_5529_; uint8_t v_isSharedCheck_5626_; 
v_fst_5526_ = lean_ctor_get(v_snd_5515_, 0);
v_isSharedCheck_5626_ = !lean_is_exclusive(v_snd_5515_);
if (v_isSharedCheck_5626_ == 0)
{
lean_object* v_unused_5627_; 
v_unused_5627_ = lean_ctor_get(v_snd_5515_, 1);
lean_dec(v_unused_5627_);
v___x_5528_ = v_snd_5515_;
v_isShared_5529_ = v_isSharedCheck_5626_;
goto v_resetjp_5527_;
}
else
{
lean_inc(v_fst_5526_);
lean_dec(v_snd_5515_);
v___x_5528_ = lean_box(0);
v_isShared_5529_ = v_isSharedCheck_5626_;
goto v_resetjp_5527_;
}
v_resetjp_5527_:
{
lean_object* v_fst_5530_; lean_object* v___x_5532_; uint8_t v_isShared_5533_; uint8_t v_isSharedCheck_5624_; 
v_fst_5530_ = lean_ctor_get(v_snd_5516_, 0);
v_isSharedCheck_5624_ = !lean_is_exclusive(v_snd_5516_);
if (v_isSharedCheck_5624_ == 0)
{
lean_object* v_unused_5625_; 
v_unused_5625_ = lean_ctor_get(v_snd_5516_, 1);
lean_dec(v_unused_5625_);
v___x_5532_ = v_snd_5516_;
v_isShared_5533_ = v_isSharedCheck_5624_;
goto v_resetjp_5531_;
}
else
{
lean_inc(v_fst_5530_);
lean_dec(v_snd_5516_);
v___x_5532_ = lean_box(0);
v_isShared_5533_ = v_isSharedCheck_5624_;
goto v_resetjp_5531_;
}
v_resetjp_5531_:
{
lean_object* v_array_5534_; lean_object* v_start_5535_; lean_object* v_stop_5536_; uint8_t v___x_5537_; 
v_array_5534_ = lean_ctor_get(v_snd_5517_, 0);
v_start_5535_ = lean_ctor_get(v_snd_5517_, 1);
v_stop_5536_ = lean_ctor_get(v_snd_5517_, 2);
v___x_5537_ = lean_nat_dec_lt(v_start_5535_, v_stop_5536_);
if (v___x_5537_ == 0)
{
lean_object* v___x_5539_; 
lean_dec(v_a_5506_);
if (v_isShared_5533_ == 0)
{
v___x_5539_ = v___x_5532_;
goto v_reusejp_5538_;
}
else
{
lean_object* v_reuseFailAlloc_5549_; 
v_reuseFailAlloc_5549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5549_, 0, v_fst_5530_);
lean_ctor_set(v_reuseFailAlloc_5549_, 1, v_snd_5517_);
v___x_5539_ = v_reuseFailAlloc_5549_;
goto v_reusejp_5538_;
}
v_reusejp_5538_:
{
lean_object* v___x_5541_; 
if (v_isShared_5529_ == 0)
{
lean_ctor_set(v___x_5528_, 1, v___x_5539_);
v___x_5541_ = v___x_5528_;
goto v_reusejp_5540_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v_fst_5526_);
lean_ctor_set(v_reuseFailAlloc_5548_, 1, v___x_5539_);
v___x_5541_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5540_;
}
v_reusejp_5540_:
{
lean_object* v___x_5543_; 
if (v_isShared_5525_ == 0)
{
lean_ctor_set(v___x_5524_, 1, v___x_5541_);
v___x_5543_ = v___x_5524_;
goto v_reusejp_5542_;
}
else
{
lean_object* v_reuseFailAlloc_5547_; 
v_reuseFailAlloc_5547_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5547_, 0, v_fst_5522_);
lean_ctor_set(v_reuseFailAlloc_5547_, 1, v___x_5541_);
v___x_5543_ = v_reuseFailAlloc_5547_;
goto v_reusejp_5542_;
}
v_reusejp_5542_:
{
lean_object* v___x_5545_; 
if (v_isShared_5521_ == 0)
{
lean_ctor_set(v___x_5520_, 1, v___x_5543_);
v___x_5545_ = v___x_5520_;
goto v_reusejp_5544_;
}
else
{
lean_object* v_reuseFailAlloc_5546_; 
v_reuseFailAlloc_5546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5546_, 0, v_fst_5518_);
lean_ctor_set(v_reuseFailAlloc_5546_, 1, v___x_5543_);
v___x_5545_ = v_reuseFailAlloc_5546_;
goto v_reusejp_5544_;
}
v_reusejp_5544_:
{
return v___x_5545_;
}
}
}
}
}
else
{
lean_object* v___x_5551_; uint8_t v_isShared_5552_; uint8_t v_isSharedCheck_5620_; 
lean_inc(v_stop_5536_);
lean_inc(v_start_5535_);
lean_inc_ref(v_array_5534_);
v_isSharedCheck_5620_ = !lean_is_exclusive(v_snd_5517_);
if (v_isSharedCheck_5620_ == 0)
{
lean_object* v_unused_5621_; lean_object* v_unused_5622_; lean_object* v_unused_5623_; 
v_unused_5621_ = lean_ctor_get(v_snd_5517_, 2);
lean_dec(v_unused_5621_);
v_unused_5622_ = lean_ctor_get(v_snd_5517_, 1);
lean_dec(v_unused_5622_);
v_unused_5623_ = lean_ctor_get(v_snd_5517_, 0);
lean_dec(v_unused_5623_);
v___x_5551_ = v_snd_5517_;
v_isShared_5552_ = v_isSharedCheck_5620_;
goto v_resetjp_5550_;
}
else
{
lean_dec(v_snd_5517_);
v___x_5551_ = lean_box(0);
v_isShared_5552_ = v_isSharedCheck_5620_;
goto v_resetjp_5550_;
}
v_resetjp_5550_:
{
lean_object* v_array_5553_; lean_object* v_start_5554_; lean_object* v_stop_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5560_; 
v_array_5553_ = lean_ctor_get(v_fst_5530_, 0);
v_start_5554_ = lean_ctor_get(v_fst_5530_, 1);
v_stop_5555_ = lean_ctor_get(v_fst_5530_, 2);
v___x_5556_ = lean_array_fget(v_array_5534_, v_start_5535_);
v___x_5557_ = lean_unsigned_to_nat(1u);
v___x_5558_ = lean_nat_add(v_start_5535_, v___x_5557_);
lean_dec(v_start_5535_);
if (v_isShared_5552_ == 0)
{
lean_ctor_set(v___x_5551_, 1, v___x_5558_);
v___x_5560_ = v___x_5551_;
goto v_reusejp_5559_;
}
else
{
lean_object* v_reuseFailAlloc_5619_; 
v_reuseFailAlloc_5619_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5619_, 0, v_array_5534_);
lean_ctor_set(v_reuseFailAlloc_5619_, 1, v___x_5558_);
lean_ctor_set(v_reuseFailAlloc_5619_, 2, v_stop_5536_);
v___x_5560_ = v_reuseFailAlloc_5619_;
goto v_reusejp_5559_;
}
v_reusejp_5559_:
{
uint8_t v___x_5561_; 
v___x_5561_ = lean_nat_dec_lt(v_start_5554_, v_stop_5555_);
if (v___x_5561_ == 0)
{
lean_object* v___x_5563_; 
lean_dec(v___x_5556_);
lean_dec(v_a_5506_);
if (v_isShared_5533_ == 0)
{
lean_ctor_set(v___x_5532_, 1, v___x_5560_);
v___x_5563_ = v___x_5532_;
goto v_reusejp_5562_;
}
else
{
lean_object* v_reuseFailAlloc_5573_; 
v_reuseFailAlloc_5573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5573_, 0, v_fst_5530_);
lean_ctor_set(v_reuseFailAlloc_5573_, 1, v___x_5560_);
v___x_5563_ = v_reuseFailAlloc_5573_;
goto v_reusejp_5562_;
}
v_reusejp_5562_:
{
lean_object* v___x_5565_; 
if (v_isShared_5529_ == 0)
{
lean_ctor_set(v___x_5528_, 1, v___x_5563_);
v___x_5565_ = v___x_5528_;
goto v_reusejp_5564_;
}
else
{
lean_object* v_reuseFailAlloc_5572_; 
v_reuseFailAlloc_5572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5572_, 0, v_fst_5526_);
lean_ctor_set(v_reuseFailAlloc_5572_, 1, v___x_5563_);
v___x_5565_ = v_reuseFailAlloc_5572_;
goto v_reusejp_5564_;
}
v_reusejp_5564_:
{
lean_object* v___x_5567_; 
if (v_isShared_5525_ == 0)
{
lean_ctor_set(v___x_5524_, 1, v___x_5565_);
v___x_5567_ = v___x_5524_;
goto v_reusejp_5566_;
}
else
{
lean_object* v_reuseFailAlloc_5571_; 
v_reuseFailAlloc_5571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5571_, 0, v_fst_5522_);
lean_ctor_set(v_reuseFailAlloc_5571_, 1, v___x_5565_);
v___x_5567_ = v_reuseFailAlloc_5571_;
goto v_reusejp_5566_;
}
v_reusejp_5566_:
{
lean_object* v___x_5569_; 
if (v_isShared_5521_ == 0)
{
lean_ctor_set(v___x_5520_, 1, v___x_5567_);
v___x_5569_ = v___x_5520_;
goto v_reusejp_5568_;
}
else
{
lean_object* v_reuseFailAlloc_5570_; 
v_reuseFailAlloc_5570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5570_, 0, v_fst_5518_);
lean_ctor_set(v_reuseFailAlloc_5570_, 1, v___x_5567_);
v___x_5569_ = v_reuseFailAlloc_5570_;
goto v_reusejp_5568_;
}
v_reusejp_5568_:
{
return v___x_5569_;
}
}
}
}
}
else
{
lean_object* v___x_5575_; uint8_t v_isShared_5576_; uint8_t v_isSharedCheck_5615_; 
lean_inc(v_stop_5555_);
lean_inc(v_start_5554_);
lean_inc_ref(v_array_5553_);
v_isSharedCheck_5615_ = !lean_is_exclusive(v_fst_5530_);
if (v_isSharedCheck_5615_ == 0)
{
lean_object* v_unused_5616_; lean_object* v_unused_5617_; lean_object* v_unused_5618_; 
v_unused_5616_ = lean_ctor_get(v_fst_5530_, 2);
lean_dec(v_unused_5616_);
v_unused_5617_ = lean_ctor_get(v_fst_5530_, 1);
lean_dec(v_unused_5617_);
v_unused_5618_ = lean_ctor_get(v_fst_5530_, 0);
lean_dec(v_unused_5618_);
v___x_5575_ = v_fst_5530_;
v_isShared_5576_ = v_isSharedCheck_5615_;
goto v_resetjp_5574_;
}
else
{
lean_dec(v_fst_5530_);
v___x_5575_ = lean_box(0);
v_isShared_5576_ = v_isSharedCheck_5615_;
goto v_resetjp_5574_;
}
v_resetjp_5574_:
{
lean_object* v___x_5577_; lean_object* v___x_5578_; lean_object* v___x_5580_; 
v___x_5577_ = lean_array_fget(v_array_5553_, v_start_5554_);
v___x_5578_ = lean_nat_add(v_start_5554_, v___x_5557_);
lean_dec(v_start_5554_);
if (v_isShared_5576_ == 0)
{
lean_ctor_set(v___x_5575_, 1, v___x_5578_);
v___x_5580_ = v___x_5575_;
goto v_reusejp_5579_;
}
else
{
lean_object* v_reuseFailAlloc_5614_; 
v_reuseFailAlloc_5614_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5614_, 0, v_array_5553_);
lean_ctor_set(v_reuseFailAlloc_5614_, 1, v___x_5578_);
lean_ctor_set(v_reuseFailAlloc_5614_, 2, v_stop_5555_);
v___x_5580_ = v_reuseFailAlloc_5614_;
goto v_reusejp_5579_;
}
v_reusejp_5579_:
{
uint8_t v___x_5581_; 
v___x_5581_ = lean_unbox(v___x_5577_);
lean_dec(v___x_5577_);
if (v___x_5581_ == 0)
{
lean_object* v___x_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; lean_object* v___x_5585_; lean_object* v___x_5587_; 
v___x_5582_ = lean_array_get_size(v_fst_5526_);
v___x_5583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5583_, 0, v___x_5582_);
v___x_5584_ = lean_array_push(v_fst_5518_, v___x_5583_);
v___x_5585_ = lean_array_push(v_fst_5526_, v___x_5556_);
if (v_isShared_5533_ == 0)
{
lean_ctor_set(v___x_5532_, 1, v___x_5560_);
lean_ctor_set(v___x_5532_, 0, v___x_5580_);
v___x_5587_ = v___x_5532_;
goto v_reusejp_5586_;
}
else
{
lean_object* v_reuseFailAlloc_5597_; 
v_reuseFailAlloc_5597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5597_, 0, v___x_5580_);
lean_ctor_set(v_reuseFailAlloc_5597_, 1, v___x_5560_);
v___x_5587_ = v_reuseFailAlloc_5597_;
goto v_reusejp_5586_;
}
v_reusejp_5586_:
{
lean_object* v___x_5589_; 
if (v_isShared_5529_ == 0)
{
lean_ctor_set(v___x_5528_, 1, v___x_5587_);
lean_ctor_set(v___x_5528_, 0, v___x_5585_);
v___x_5589_ = v___x_5528_;
goto v_reusejp_5588_;
}
else
{
lean_object* v_reuseFailAlloc_5596_; 
v_reuseFailAlloc_5596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5596_, 0, v___x_5585_);
lean_ctor_set(v_reuseFailAlloc_5596_, 1, v___x_5587_);
v___x_5589_ = v_reuseFailAlloc_5596_;
goto v_reusejp_5588_;
}
v_reusejp_5588_:
{
lean_object* v___x_5591_; 
if (v_isShared_5525_ == 0)
{
lean_ctor_set(v___x_5524_, 1, v___x_5589_);
v___x_5591_ = v___x_5524_;
goto v_reusejp_5590_;
}
else
{
lean_object* v_reuseFailAlloc_5595_; 
v_reuseFailAlloc_5595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5595_, 0, v_fst_5522_);
lean_ctor_set(v_reuseFailAlloc_5595_, 1, v___x_5589_);
v___x_5591_ = v_reuseFailAlloc_5595_;
goto v_reusejp_5590_;
}
v_reusejp_5590_:
{
lean_object* v___x_5593_; 
if (v_isShared_5521_ == 0)
{
lean_ctor_set(v___x_5520_, 1, v___x_5591_);
lean_ctor_set(v___x_5520_, 0, v___x_5584_);
v___x_5593_ = v___x_5520_;
goto v_reusejp_5592_;
}
else
{
lean_object* v_reuseFailAlloc_5594_; 
v_reuseFailAlloc_5594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5594_, 0, v___x_5584_);
lean_ctor_set(v_reuseFailAlloc_5594_, 1, v___x_5591_);
v___x_5593_ = v_reuseFailAlloc_5594_;
goto v_reusejp_5592_;
}
v_reusejp_5592_:
{
v_a_5509_ = v___x_5593_;
goto v___jp_5508_;
}
}
}
}
}
else
{
lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5603_; 
v___x_5598_ = lean_box(0);
v___x_5599_ = lean_array_push(v_fst_5518_, v___x_5598_);
v___x_5600_ = l_Lean_Expr_fvarId_x21(v___x_5556_);
lean_dec(v___x_5556_);
v___x_5601_ = lean_array_push(v_fst_5522_, v___x_5600_);
if (v_isShared_5533_ == 0)
{
lean_ctor_set(v___x_5532_, 1, v___x_5560_);
lean_ctor_set(v___x_5532_, 0, v___x_5580_);
v___x_5603_ = v___x_5532_;
goto v_reusejp_5602_;
}
else
{
lean_object* v_reuseFailAlloc_5613_; 
v_reuseFailAlloc_5613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5613_, 0, v___x_5580_);
lean_ctor_set(v_reuseFailAlloc_5613_, 1, v___x_5560_);
v___x_5603_ = v_reuseFailAlloc_5613_;
goto v_reusejp_5602_;
}
v_reusejp_5602_:
{
lean_object* v___x_5605_; 
if (v_isShared_5529_ == 0)
{
lean_ctor_set(v___x_5528_, 1, v___x_5603_);
v___x_5605_ = v___x_5528_;
goto v_reusejp_5604_;
}
else
{
lean_object* v_reuseFailAlloc_5612_; 
v_reuseFailAlloc_5612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5612_, 0, v_fst_5526_);
lean_ctor_set(v_reuseFailAlloc_5612_, 1, v___x_5603_);
v___x_5605_ = v_reuseFailAlloc_5612_;
goto v_reusejp_5604_;
}
v_reusejp_5604_:
{
lean_object* v___x_5607_; 
if (v_isShared_5525_ == 0)
{
lean_ctor_set(v___x_5524_, 1, v___x_5605_);
lean_ctor_set(v___x_5524_, 0, v___x_5601_);
v___x_5607_ = v___x_5524_;
goto v_reusejp_5606_;
}
else
{
lean_object* v_reuseFailAlloc_5611_; 
v_reuseFailAlloc_5611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5611_, 0, v___x_5601_);
lean_ctor_set(v_reuseFailAlloc_5611_, 1, v___x_5605_);
v___x_5607_ = v_reuseFailAlloc_5611_;
goto v_reusejp_5606_;
}
v_reusejp_5606_:
{
lean_object* v___x_5609_; 
if (v_isShared_5521_ == 0)
{
lean_ctor_set(v___x_5520_, 1, v___x_5607_);
lean_ctor_set(v___x_5520_, 0, v___x_5599_);
v___x_5609_ = v___x_5520_;
goto v_reusejp_5608_;
}
else
{
lean_object* v_reuseFailAlloc_5610_; 
v_reuseFailAlloc_5610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5610_, 0, v___x_5599_);
lean_ctor_set(v_reuseFailAlloc_5610_, 1, v___x_5607_);
v___x_5609_ = v_reuseFailAlloc_5610_;
goto v_reusejp_5608_;
}
v_reusejp_5608_:
{
v_a_5509_ = v___x_5609_;
goto v___jp_5508_;
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
v___jp_5508_:
{
lean_object* v___x_5510_; lean_object* v___x_5511_; 
v___x_5510_ = lean_unsigned_to_nat(1u);
v___x_5511_ = lean_nat_add(v_a_5506_, v___x_5510_);
lean_dec(v_a_5506_);
v_a_5506_ = v___x_5511_;
v_b_5507_ = v_a_5509_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg___boxed(lean_object* v_upperBound_5632_, lean_object* v_a_5633_, lean_object* v_b_5634_){
_start:
{
lean_object* v_res_5635_; 
v_res_5635_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_5632_, v_a_5633_, v_b_5634_);
lean_dec(v_upperBound_5632_);
return v_res_5635_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(lean_object* v___x_5636_, size_t v_sz_5637_, size_t v_i_5638_, lean_object* v_bs_5639_){
_start:
{
uint8_t v___x_5640_; 
v___x_5640_ = lean_usize_dec_lt(v_i_5638_, v_sz_5637_);
if (v___x_5640_ == 0)
{
return v_bs_5639_;
}
else
{
lean_object* v_v_5641_; lean_object* v___x_5642_; lean_object* v_bs_x27_5643_; lean_object* v___y_5645_; 
v_v_5641_ = lean_array_uget(v_bs_5639_, v_i_5638_);
v___x_5642_ = lean_unsigned_to_nat(0u);
v_bs_x27_5643_ = lean_array_uset(v_bs_5639_, v_i_5638_, v___x_5642_);
if (lean_obj_tag(v_v_5641_) == 0)
{
v___y_5645_ = v_v_5641_;
goto v___jp_5644_;
}
else
{
lean_object* v_val_5650_; lean_object* v___x_5651_; lean_object* v___x_5652_; 
v_val_5650_ = lean_ctor_get(v_v_5641_, 0);
lean_inc(v_val_5650_);
lean_dec_ref(v_v_5641_);
v___x_5651_ = lean_box(0);
v___x_5652_ = lean_array_get_borrowed(v___x_5651_, v___x_5636_, v_val_5650_);
lean_dec(v_val_5650_);
lean_inc(v___x_5652_);
v___y_5645_ = v___x_5652_;
goto v___jp_5644_;
}
v___jp_5644_:
{
size_t v___x_5646_; size_t v___x_5647_; lean_object* v___x_5648_; 
v___x_5646_ = ((size_t)1ULL);
v___x_5647_ = lean_usize_add(v_i_5638_, v___x_5646_);
v___x_5648_ = lean_array_uset(v_bs_x27_5643_, v_i_5638_, v___y_5645_);
v_i_5638_ = v___x_5647_;
v_bs_5639_ = v___x_5648_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1___boxed(lean_object* v___x_5653_, lean_object* v_sz_5654_, lean_object* v_i_5655_, lean_object* v_bs_5656_){
_start:
{
size_t v_sz_boxed_5657_; size_t v_i_boxed_5658_; lean_object* v_res_5659_; 
v_sz_boxed_5657_ = lean_unbox_usize(v_sz_5654_);
lean_dec(v_sz_5654_);
v_i_boxed_5658_ = lean_unbox_usize(v_i_5655_);
lean_dec(v_i_5655_);
v_res_5659_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5653_, v_sz_boxed_5657_, v_i_boxed_5658_, v_bs_5656_);
lean_dec_ref(v___x_5653_);
return v_res_5659_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(lean_object* v___x_5660_, size_t v_sz_5661_, size_t v_i_5662_, lean_object* v_bs_5663_){
_start:
{
uint8_t v___x_5664_; 
v___x_5664_ = lean_usize_dec_lt(v_i_5662_, v_sz_5661_);
if (v___x_5664_ == 0)
{
return v_bs_5663_;
}
else
{
lean_object* v_v_5665_; lean_object* v___x_5666_; lean_object* v_bs_x27_5667_; size_t v_sz_5668_; size_t v___x_5669_; lean_object* v___x_5670_; size_t v___x_5671_; size_t v___x_5672_; lean_object* v___x_5673_; 
v_v_5665_ = lean_array_uget(v_bs_5663_, v_i_5662_);
v___x_5666_ = lean_unsigned_to_nat(0u);
v_bs_x27_5667_ = lean_array_uset(v_bs_5663_, v_i_5662_, v___x_5666_);
v_sz_5668_ = lean_array_size(v_v_5665_);
v___x_5669_ = ((size_t)0ULL);
v___x_5670_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__1(v___x_5660_, v_sz_5668_, v___x_5669_, v_v_5665_);
v___x_5671_ = ((size_t)1ULL);
v___x_5672_ = lean_usize_add(v_i_5662_, v___x_5671_);
v___x_5673_ = lean_array_uset(v_bs_x27_5667_, v_i_5662_, v___x_5670_);
v_i_5662_ = v___x_5672_;
v_bs_5663_ = v___x_5673_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2___boxed(lean_object* v___x_5675_, lean_object* v_sz_5676_, lean_object* v_i_5677_, lean_object* v_bs_5678_){
_start:
{
size_t v_sz_boxed_5679_; size_t v_i_boxed_5680_; lean_object* v_res_5681_; 
v_sz_boxed_5679_ = lean_unbox_usize(v_sz_5676_);
lean_dec(v_sz_5676_);
v_i_boxed_5680_ = lean_unbox_usize(v_i_5677_);
lean_dec(v_i_5677_);
v_res_5681_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v___x_5675_, v_sz_boxed_5679_, v_i_boxed_5680_, v_bs_5678_);
lean_dec_ref(v___x_5675_);
return v_res_5681_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(lean_object* v___x_5682_, uint8_t v___x_5683_, lean_object* v_as_5684_, size_t v_sz_5685_, size_t v_i_5686_, lean_object* v_b_5687_){
_start:
{
lean_object* v_a_5689_; uint8_t v___x_5693_; 
v___x_5693_ = lean_usize_dec_lt(v_i_5686_, v_sz_5685_);
if (v___x_5693_ == 0)
{
return v_b_5687_;
}
else
{
lean_object* v_fst_5694_; lean_object* v_snd_5695_; lean_object* v___x_5697_; uint8_t v_isShared_5698_; uint8_t v_isSharedCheck_5716_; 
v_fst_5694_ = lean_ctor_get(v_b_5687_, 0);
v_snd_5695_ = lean_ctor_get(v_b_5687_, 1);
v_isSharedCheck_5716_ = !lean_is_exclusive(v_b_5687_);
if (v_isSharedCheck_5716_ == 0)
{
v___x_5697_ = v_b_5687_;
v_isShared_5698_ = v_isSharedCheck_5716_;
goto v_resetjp_5696_;
}
else
{
lean_inc(v_snd_5695_);
lean_inc(v_fst_5694_);
lean_dec(v_b_5687_);
v___x_5697_ = lean_box(0);
v_isShared_5698_ = v_isSharedCheck_5716_;
goto v_resetjp_5696_;
}
v_resetjp_5696_:
{
lean_object* v_a_5703_; lean_object* v___x_5704_; lean_object* v___x_5705_; 
v_a_5703_ = lean_array_uget_borrowed(v_as_5684_, v_i_5686_);
v___x_5704_ = lean_box(0);
v___x_5705_ = lean_array_get_borrowed(v___x_5704_, v___x_5682_, v_a_5703_);
if (lean_obj_tag(v___x_5705_) == 1)
{
lean_object* v_val_5706_; uint8_t v___x_5707_; lean_object* v___x_5708_; lean_object* v___x_5709_; uint8_t v___x_5710_; 
v_val_5706_ = lean_ctor_get(v___x_5705_, 0);
v___x_5707_ = 0;
v___x_5708_ = lean_box(v___x_5707_);
v___x_5709_ = lean_array_get(v___x_5708_, v_fst_5694_, v_val_5706_);
lean_dec(v___x_5708_);
v___x_5710_ = lean_unbox(v___x_5709_);
lean_dec(v___x_5709_);
if (v___x_5710_ == 0)
{
if (v___x_5683_ == 0)
{
goto v___jp_5699_;
}
else
{
lean_object* v___x_5711_; lean_object* v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; 
lean_del_object(v___x_5697_);
lean_dec(v_snd_5695_);
v___x_5711_ = lean_box(v___x_5683_);
v___x_5712_ = lean_array_set(v_fst_5694_, v_val_5706_, v___x_5711_);
v___x_5713_ = lean_box(v___x_5683_);
v___x_5714_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5714_, 0, v___x_5712_);
lean_ctor_set(v___x_5714_, 1, v___x_5713_);
v_a_5689_ = v___x_5714_;
goto v___jp_5688_;
}
}
else
{
goto v___jp_5699_;
}
}
else
{
lean_object* v___x_5715_; 
lean_del_object(v___x_5697_);
v___x_5715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5715_, 0, v_fst_5694_);
lean_ctor_set(v___x_5715_, 1, v_snd_5695_);
v_a_5689_ = v___x_5715_;
goto v___jp_5688_;
}
v___jp_5699_:
{
lean_object* v___x_5701_; 
if (v_isShared_5698_ == 0)
{
v___x_5701_ = v___x_5697_;
goto v_reusejp_5700_;
}
else
{
lean_object* v_reuseFailAlloc_5702_; 
v_reuseFailAlloc_5702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5702_, 0, v_fst_5694_);
lean_ctor_set(v_reuseFailAlloc_5702_, 1, v_snd_5695_);
v___x_5701_ = v_reuseFailAlloc_5702_;
goto v_reusejp_5700_;
}
v_reusejp_5700_:
{
v_a_5689_ = v___x_5701_;
goto v___jp_5688_;
}
}
}
}
v___jp_5688_:
{
size_t v___x_5690_; size_t v___x_5691_; 
v___x_5690_ = ((size_t)1ULL);
v___x_5691_ = lean_usize_add(v_i_5686_, v___x_5690_);
v_i_5686_ = v___x_5691_;
v_b_5687_ = v_a_5689_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5___boxed(lean_object* v___x_5717_, lean_object* v___x_5718_, lean_object* v_as_5719_, lean_object* v_sz_5720_, lean_object* v_i_5721_, lean_object* v_b_5722_){
_start:
{
uint8_t v___x_8288__boxed_5723_; size_t v_sz_boxed_5724_; size_t v_i_boxed_5725_; lean_object* v_res_5726_; 
v___x_8288__boxed_5723_ = lean_unbox(v___x_5718_);
v_sz_boxed_5724_ = lean_unbox_usize(v_sz_5720_);
lean_dec(v_sz_5720_);
v_i_boxed_5725_ = lean_unbox_usize(v_i_5721_);
lean_dec(v_i_5721_);
v_res_5726_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5717_, v___x_8288__boxed_5723_, v_as_5719_, v_sz_boxed_5724_, v_i_boxed_5725_, v_b_5722_);
lean_dec_ref(v_as_5719_);
lean_dec_ref(v___x_5717_);
return v_res_5726_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(lean_object* v_upperBound_5727_, lean_object* v___x_5728_, lean_object* v_fixedParamPerms_5729_, lean_object* v_next_5730_, lean_object* v_a_5731_, lean_object* v_b_5732_){
_start:
{
lean_object* v_a_5734_; uint8_t v___x_5738_; 
v___x_5738_ = lean_nat_dec_lt(v_a_5731_, v_upperBound_5727_);
if (v___x_5738_ == 0)
{
lean_dec(v_a_5731_);
return v_b_5732_;
}
else
{
lean_object* v_fst_5739_; lean_object* v_snd_5740_; lean_object* v___x_5742_; uint8_t v_isShared_5743_; uint8_t v_isSharedCheck_5776_; 
v_fst_5739_ = lean_ctor_get(v_b_5732_, 0);
v_snd_5740_ = lean_ctor_get(v_b_5732_, 1);
v_isSharedCheck_5776_ = !lean_is_exclusive(v_b_5732_);
if (v_isSharedCheck_5776_ == 0)
{
v___x_5742_ = v_b_5732_;
v_isShared_5743_ = v_isSharedCheck_5776_;
goto v_resetjp_5741_;
}
else
{
lean_inc(v_snd_5740_);
lean_inc(v_fst_5739_);
lean_dec(v_b_5732_);
v___x_5742_ = lean_box(0);
v_isShared_5743_ = v_isSharedCheck_5776_;
goto v_resetjp_5741_;
}
v_resetjp_5741_:
{
lean_object* v___x_5744_; 
v___x_5744_ = lean_array_fget_borrowed(v___x_5728_, v_a_5731_);
if (lean_obj_tag(v___x_5744_) == 1)
{
lean_object* v_val_5745_; uint8_t v___x_5746_; lean_object* v___x_5747_; lean_object* v___x_5748_; uint8_t v___x_5749_; 
v_val_5745_ = lean_ctor_get(v___x_5744_, 0);
v___x_5746_ = 0;
v___x_5747_ = lean_box(v___x_5746_);
v___x_5748_ = lean_array_get(v___x_5747_, v_fst_5739_, v_val_5745_);
lean_dec(v___x_5747_);
v___x_5749_ = lean_unbox(v___x_5748_);
if (v___x_5749_ == 0)
{
lean_object* v___x_5751_; 
lean_dec(v___x_5748_);
if (v_isShared_5743_ == 0)
{
v___x_5751_ = v___x_5742_;
goto v_reusejp_5750_;
}
else
{
lean_object* v_reuseFailAlloc_5752_; 
v_reuseFailAlloc_5752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5752_, 0, v_fst_5739_);
lean_ctor_set(v_reuseFailAlloc_5752_, 1, v_snd_5740_);
v___x_5751_ = v_reuseFailAlloc_5752_;
goto v_reusejp_5750_;
}
v_reusejp_5750_:
{
v_a_5734_ = v___x_5751_;
goto v___jp_5733_;
}
}
else
{
lean_object* v_revDeps_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5758_; 
v_revDeps_5753_ = lean_ctor_get(v_fixedParamPerms_5729_, 2);
v___x_5754_ = lean_obj_once(&l_Lean_Elab_FixedParams_Info_setVarying___closed__0, &l_Lean_Elab_FixedParams_Info_setVarying___closed__0_once, _init_l_Lean_Elab_FixedParams_Info_setVarying___closed__0);
v___x_5755_ = lean_array_get_borrowed(v___x_5754_, v_revDeps_5753_, v_next_5730_);
v___x_5756_ = lean_array_get_borrowed(v___x_5754_, v___x_5755_, v_a_5731_);
if (v_isShared_5743_ == 0)
{
v___x_5758_ = v___x_5742_;
goto v_reusejp_5757_;
}
else
{
lean_object* v_reuseFailAlloc_5772_; 
v_reuseFailAlloc_5772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5772_, 0, v_fst_5739_);
lean_ctor_set(v_reuseFailAlloc_5772_, 1, v_snd_5740_);
v___x_5758_ = v_reuseFailAlloc_5772_;
goto v_reusejp_5757_;
}
v_reusejp_5757_:
{
size_t v_sz_5759_; size_t v___x_5760_; uint8_t v___x_5761_; lean_object* v___x_5762_; lean_object* v_fst_5763_; lean_object* v_snd_5764_; lean_object* v___x_5766_; uint8_t v_isShared_5767_; uint8_t v_isSharedCheck_5771_; 
v_sz_5759_ = lean_array_size(v___x_5756_);
v___x_5760_ = ((size_t)0ULL);
v___x_5761_ = lean_unbox(v___x_5748_);
lean_dec(v___x_5748_);
v___x_5762_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__5(v___x_5728_, v___x_5761_, v___x_5756_, v_sz_5759_, v___x_5760_, v___x_5758_);
v_fst_5763_ = lean_ctor_get(v___x_5762_, 0);
v_snd_5764_ = lean_ctor_get(v___x_5762_, 1);
v_isSharedCheck_5771_ = !lean_is_exclusive(v___x_5762_);
if (v_isSharedCheck_5771_ == 0)
{
v___x_5766_ = v___x_5762_;
v_isShared_5767_ = v_isSharedCheck_5771_;
goto v_resetjp_5765_;
}
else
{
lean_inc(v_snd_5764_);
lean_inc(v_fst_5763_);
lean_dec(v___x_5762_);
v___x_5766_ = lean_box(0);
v_isShared_5767_ = v_isSharedCheck_5771_;
goto v_resetjp_5765_;
}
v_resetjp_5765_:
{
lean_object* v___x_5769_; 
if (v_isShared_5767_ == 0)
{
v___x_5769_ = v___x_5766_;
goto v_reusejp_5768_;
}
else
{
lean_object* v_reuseFailAlloc_5770_; 
v_reuseFailAlloc_5770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5770_, 0, v_fst_5763_);
lean_ctor_set(v_reuseFailAlloc_5770_, 1, v_snd_5764_);
v___x_5769_ = v_reuseFailAlloc_5770_;
goto v_reusejp_5768_;
}
v_reusejp_5768_:
{
v_a_5734_ = v___x_5769_;
goto v___jp_5733_;
}
}
}
}
}
else
{
lean_object* v___x_5774_; 
if (v_isShared_5743_ == 0)
{
v___x_5774_ = v___x_5742_;
goto v_reusejp_5773_;
}
else
{
lean_object* v_reuseFailAlloc_5775_; 
v_reuseFailAlloc_5775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5775_, 0, v_fst_5739_);
lean_ctor_set(v_reuseFailAlloc_5775_, 1, v_snd_5740_);
v___x_5774_ = v_reuseFailAlloc_5775_;
goto v_reusejp_5773_;
}
v_reusejp_5773_:
{
v_a_5734_ = v___x_5774_;
goto v___jp_5733_;
}
}
}
}
v___jp_5733_:
{
lean_object* v___x_5735_; lean_object* v___x_5736_; 
v___x_5735_ = lean_unsigned_to_nat(1u);
v___x_5736_ = lean_nat_add(v_a_5731_, v___x_5735_);
lean_dec(v_a_5731_);
v_a_5731_ = v___x_5736_;
v_b_5732_ = v_a_5734_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg___boxed(lean_object* v_upperBound_5777_, lean_object* v___x_5778_, lean_object* v_fixedParamPerms_5779_, lean_object* v_next_5780_, lean_object* v_a_5781_, lean_object* v_b_5782_){
_start:
{
lean_object* v_res_5783_; 
v_res_5783_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_5777_, v___x_5778_, v_fixedParamPerms_5779_, v_next_5780_, v_a_5781_, v_b_5782_);
lean_dec(v_next_5780_);
lean_dec_ref(v_fixedParamPerms_5779_);
lean_dec_ref(v___x_5778_);
lean_dec(v_upperBound_5777_);
return v_res_5783_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(lean_object* v_upperBound_5784_, lean_object* v___x_5785_, lean_object* v_fixedParamPerms_5786_, lean_object* v_a_5787_, lean_object* v_b_5788_){
_start:
{
uint8_t v___x_5789_; 
v___x_5789_ = lean_nat_dec_lt(v_a_5787_, v_upperBound_5784_);
if (v___x_5789_ == 0)
{
lean_dec(v_a_5787_);
return v_b_5788_;
}
else
{
lean_object* v_fst_5790_; lean_object* v_snd_5791_; lean_object* v___x_5793_; uint8_t v_isShared_5794_; uint8_t v_isSharedCheck_5814_; 
v_fst_5790_ = lean_ctor_get(v_b_5788_, 0);
v_snd_5791_ = lean_ctor_get(v_b_5788_, 1);
v_isSharedCheck_5814_ = !lean_is_exclusive(v_b_5788_);
if (v_isSharedCheck_5814_ == 0)
{
v___x_5793_ = v_b_5788_;
v_isShared_5794_ = v_isSharedCheck_5814_;
goto v_resetjp_5792_;
}
else
{
lean_inc(v_snd_5791_);
lean_inc(v_fst_5790_);
lean_dec(v_b_5788_);
v___x_5793_ = lean_box(0);
v_isShared_5794_ = v_isSharedCheck_5814_;
goto v_resetjp_5792_;
}
v_resetjp_5792_:
{
lean_object* v___x_5795_; lean_object* v___x_5796_; lean_object* v___x_5797_; lean_object* v___x_5799_; 
v___x_5795_ = lean_array_fget_borrowed(v___x_5785_, v_a_5787_);
v___x_5796_ = lean_array_get_size(v___x_5795_);
v___x_5797_ = lean_unsigned_to_nat(0u);
if (v_isShared_5794_ == 0)
{
v___x_5799_ = v___x_5793_;
goto v_reusejp_5798_;
}
else
{
lean_object* v_reuseFailAlloc_5813_; 
v_reuseFailAlloc_5813_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5813_, 0, v_fst_5790_);
lean_ctor_set(v_reuseFailAlloc_5813_, 1, v_snd_5791_);
v___x_5799_ = v_reuseFailAlloc_5813_;
goto v_reusejp_5798_;
}
v_reusejp_5798_:
{
lean_object* v___x_5800_; lean_object* v_fst_5801_; lean_object* v_snd_5802_; lean_object* v___x_5804_; uint8_t v_isShared_5805_; uint8_t v_isSharedCheck_5812_; 
v___x_5800_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v___x_5796_, v___x_5795_, v_fixedParamPerms_5786_, v_a_5787_, v___x_5797_, v___x_5799_);
v_fst_5801_ = lean_ctor_get(v___x_5800_, 0);
v_snd_5802_ = lean_ctor_get(v___x_5800_, 1);
v_isSharedCheck_5812_ = !lean_is_exclusive(v___x_5800_);
if (v_isSharedCheck_5812_ == 0)
{
v___x_5804_ = v___x_5800_;
v_isShared_5805_ = v_isSharedCheck_5812_;
goto v_resetjp_5803_;
}
else
{
lean_inc(v_snd_5802_);
lean_inc(v_fst_5801_);
lean_dec(v___x_5800_);
v___x_5804_ = lean_box(0);
v_isShared_5805_ = v_isSharedCheck_5812_;
goto v_resetjp_5803_;
}
v_resetjp_5803_:
{
lean_object* v___x_5807_; 
if (v_isShared_5805_ == 0)
{
v___x_5807_ = v___x_5804_;
goto v_reusejp_5806_;
}
else
{
lean_object* v_reuseFailAlloc_5811_; 
v_reuseFailAlloc_5811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5811_, 0, v_fst_5801_);
lean_ctor_set(v_reuseFailAlloc_5811_, 1, v_snd_5802_);
v___x_5807_ = v_reuseFailAlloc_5811_;
goto v_reusejp_5806_;
}
v_reusejp_5806_:
{
lean_object* v___x_5808_; lean_object* v___x_5809_; 
v___x_5808_ = lean_unsigned_to_nat(1u);
v___x_5809_ = lean_nat_add(v_a_5787_, v___x_5808_);
lean_dec(v_a_5787_);
v_a_5787_ = v___x_5809_;
v_b_5788_ = v___x_5807_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg___boxed(lean_object* v_upperBound_5815_, lean_object* v___x_5816_, lean_object* v_fixedParamPerms_5817_, lean_object* v_a_5818_, lean_object* v_b_5819_){
_start:
{
lean_object* v_res_5820_; 
v_res_5820_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_5815_, v___x_5816_, v_fixedParamPerms_5817_, v_a_5818_, v_b_5819_);
lean_dec_ref(v_fixedParamPerms_5817_);
lean_dec_ref(v___x_5816_);
lean_dec(v_upperBound_5815_);
return v_res_5820_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8(lean_object* v___x_5821_, lean_object* v___x_5822_, lean_object* v_fixedParamPerms_5823_, lean_object* v_b_5824_){
_start:
{
lean_object* v_snd_5825_; uint8_t v___x_5826_; 
v_snd_5825_ = lean_ctor_get(v_b_5824_, 1);
v___x_5826_ = lean_unbox(v_snd_5825_);
if (v___x_5826_ == 0)
{
lean_object* v_fst_5827_; lean_object* v___x_5829_; uint8_t v_isShared_5830_; uint8_t v_isSharedCheck_5834_; 
lean_inc(v_snd_5825_);
v_fst_5827_ = lean_ctor_get(v_b_5824_, 0);
v_isSharedCheck_5834_ = !lean_is_exclusive(v_b_5824_);
if (v_isSharedCheck_5834_ == 0)
{
lean_object* v_unused_5835_; 
v_unused_5835_ = lean_ctor_get(v_b_5824_, 1);
lean_dec(v_unused_5835_);
v___x_5829_ = v_b_5824_;
v_isShared_5830_ = v_isSharedCheck_5834_;
goto v_resetjp_5828_;
}
else
{
lean_inc(v_fst_5827_);
lean_dec(v_b_5824_);
v___x_5829_ = lean_box(0);
v_isShared_5830_ = v_isSharedCheck_5834_;
goto v_resetjp_5828_;
}
v_resetjp_5828_:
{
lean_object* v___x_5832_; 
if (v_isShared_5830_ == 0)
{
v___x_5832_ = v___x_5829_;
goto v_reusejp_5831_;
}
else
{
lean_object* v_reuseFailAlloc_5833_; 
v_reuseFailAlloc_5833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5833_, 0, v_fst_5827_);
lean_ctor_set(v_reuseFailAlloc_5833_, 1, v_snd_5825_);
v___x_5832_ = v_reuseFailAlloc_5833_;
goto v_reusejp_5831_;
}
v_reusejp_5831_:
{
return v___x_5832_;
}
}
}
else
{
lean_object* v_fst_5836_; lean_object* v___x_5838_; uint8_t v_isShared_5839_; uint8_t v_isSharedCheck_5857_; 
v_fst_5836_ = lean_ctor_get(v_b_5824_, 0);
v_isSharedCheck_5857_ = !lean_is_exclusive(v_b_5824_);
if (v_isSharedCheck_5857_ == 0)
{
lean_object* v_unused_5858_; 
v_unused_5858_ = lean_ctor_get(v_b_5824_, 1);
lean_dec(v_unused_5858_);
v___x_5838_ = v_b_5824_;
v_isShared_5839_ = v_isSharedCheck_5857_;
goto v_resetjp_5837_;
}
else
{
lean_inc(v_fst_5836_);
lean_dec(v_b_5824_);
v___x_5838_ = lean_box(0);
v_isShared_5839_ = v_isSharedCheck_5857_;
goto v_resetjp_5837_;
}
v_resetjp_5837_:
{
uint8_t v_changed_5840_; lean_object* v___x_5841_; lean_object* v___x_5842_; lean_object* v___x_5844_; 
v_changed_5840_ = 0;
v___x_5841_ = lean_unsigned_to_nat(0u);
v___x_5842_ = lean_box(v_changed_5840_);
if (v_isShared_5839_ == 0)
{
lean_ctor_set(v___x_5838_, 1, v___x_5842_);
v___x_5844_ = v___x_5838_;
goto v_reusejp_5843_;
}
else
{
lean_object* v_reuseFailAlloc_5856_; 
v_reuseFailAlloc_5856_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5856_, 0, v_fst_5836_);
lean_ctor_set(v_reuseFailAlloc_5856_, 1, v___x_5842_);
v___x_5844_ = v_reuseFailAlloc_5856_;
goto v_reusejp_5843_;
}
v_reusejp_5843_:
{
lean_object* v___x_5845_; lean_object* v_fst_5846_; lean_object* v_snd_5847_; lean_object* v___x_5849_; uint8_t v_isShared_5850_; uint8_t v_isSharedCheck_5855_; 
v___x_5845_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v___x_5821_, v___x_5822_, v_fixedParamPerms_5823_, v___x_5841_, v___x_5844_);
v_fst_5846_ = lean_ctor_get(v___x_5845_, 0);
v_snd_5847_ = lean_ctor_get(v___x_5845_, 1);
v_isSharedCheck_5855_ = !lean_is_exclusive(v___x_5845_);
if (v_isSharedCheck_5855_ == 0)
{
v___x_5849_ = v___x_5845_;
v_isShared_5850_ = v_isSharedCheck_5855_;
goto v_resetjp_5848_;
}
else
{
lean_inc(v_snd_5847_);
lean_inc(v_fst_5846_);
lean_dec(v___x_5845_);
v___x_5849_ = lean_box(0);
v_isShared_5850_ = v_isSharedCheck_5855_;
goto v_resetjp_5848_;
}
v_resetjp_5848_:
{
lean_object* v___x_5852_; 
if (v_isShared_5850_ == 0)
{
v___x_5852_ = v___x_5849_;
goto v_reusejp_5851_;
}
else
{
lean_object* v_reuseFailAlloc_5854_; 
v_reuseFailAlloc_5854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5854_, 0, v_fst_5846_);
lean_ctor_set(v_reuseFailAlloc_5854_, 1, v_snd_5847_);
v___x_5852_ = v_reuseFailAlloc_5854_;
goto v_reusejp_5851_;
}
v_reusejp_5851_:
{
v_b_5824_ = v___x_5852_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8___boxed(lean_object* v___x_5859_, lean_object* v___x_5860_, lean_object* v_fixedParamPerms_5861_, lean_object* v_b_5862_){
_start:
{
lean_object* v_res_5863_; 
v_res_5863_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8(v___x_5859_, v___x_5860_, v_fixedParamPerms_5861_, v_b_5862_);
lean_dec_ref(v_fixedParamPerms_5861_);
lean_dec_ref(v___x_5860_);
lean_dec(v___x_5859_);
return v_res_5863_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0(void){
_start:
{
lean_object* v___x_5864_; 
v___x_5864_ = lean_mk_string_unchecked("Lean.Elab.FixedParamPerms.erase", 31, 31);
return v___x_5864_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1(void){
_start:
{
lean_object* v___x_5865_; 
v___x_5865_ = lean_mk_string_unchecked("assertion violation: paramIdx < mapping.size\n      ", 51, 51);
return v___x_5865_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2(void){
_start:
{
lean_object* v___x_5866_; lean_object* v___x_5867_; lean_object* v___x_5868_; lean_object* v___x_5869_; lean_object* v___x_5870_; lean_object* v___x_5871_; 
v___x_5866_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__1);
v___x_5867_ = lean_unsigned_to_nat(6u);
v___x_5868_ = lean_unsigned_to_nat(463u);
v___x_5869_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0);
v___x_5870_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_5871_ = l_mkPanicMessageWithDecl(v___x_5870_, v___x_5869_, v___x_5868_, v___x_5867_, v___x_5866_);
return v___x_5871_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(lean_object* v___x_5872_, lean_object* v_as_5873_, size_t v_sz_5874_, size_t v_i_5875_, lean_object* v_b_5876_){
_start:
{
lean_object* v_a_5878_; uint8_t v___x_5882_; 
v___x_5882_ = lean_usize_dec_lt(v_i_5875_, v_sz_5874_);
if (v___x_5882_ == 0)
{
return v_b_5876_;
}
else
{
lean_object* v_a_5883_; lean_object* v___x_5884_; uint8_t v_changed_5885_; 
v_a_5883_ = lean_array_uget_borrowed(v_as_5873_, v_i_5875_);
v___x_5884_ = lean_array_get_size(v___x_5872_);
v_changed_5885_ = lean_nat_dec_lt(v_a_5883_, v___x_5884_);
if (v_changed_5885_ == 0)
{
lean_object* v___x_5886_; lean_object* v___x_5887_; 
lean_dec_ref(v_b_5876_);
v___x_5886_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__2);
v___x_5887_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__3(v___x_5886_);
if (lean_obj_tag(v___x_5887_) == 0)
{
lean_object* v_a_5888_; 
v_a_5888_ = lean_ctor_get(v___x_5887_, 0);
lean_inc(v_a_5888_);
lean_dec_ref(v___x_5887_);
return v_a_5888_;
}
else
{
lean_object* v_a_5889_; 
v_a_5889_ = lean_ctor_get(v___x_5887_, 0);
lean_inc(v_a_5889_);
lean_dec_ref(v___x_5887_);
v_a_5878_ = v_a_5889_;
goto v___jp_5877_;
}
}
else
{
lean_object* v___x_5890_; lean_object* v___x_5891_; 
v___x_5890_ = lean_box(0);
v___x_5891_ = lean_array_get_borrowed(v___x_5890_, v___x_5872_, v_a_5883_);
if (lean_obj_tag(v___x_5891_) == 1)
{
lean_object* v_val_5892_; lean_object* v___x_5893_; lean_object* v___x_5894_; 
v_val_5892_ = lean_ctor_get(v___x_5891_, 0);
v___x_5893_ = lean_box(v_changed_5885_);
v___x_5894_ = lean_array_set(v_b_5876_, v_val_5892_, v___x_5893_);
v_a_5878_ = v___x_5894_;
goto v___jp_5877_;
}
else
{
v_a_5878_ = v_b_5876_;
goto v___jp_5877_;
}
}
}
v___jp_5877_:
{
size_t v___x_5879_; size_t v___x_5880_; 
v___x_5879_ = ((size_t)1ULL);
v___x_5880_ = lean_usize_add(v_i_5875_, v___x_5879_);
v_i_5875_ = v___x_5880_;
v_b_5876_ = v_a_5878_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___boxed(lean_object* v___x_5895_, lean_object* v_as_5896_, lean_object* v_sz_5897_, lean_object* v_i_5898_, lean_object* v_b_5899_){
_start:
{
size_t v_sz_boxed_5900_; size_t v_i_boxed_5901_; lean_object* v_res_5902_; 
v_sz_boxed_5900_ = lean_unbox_usize(v_sz_5897_);
lean_dec(v_sz_5897_);
v_i_boxed_5901_ = lean_unbox_usize(v_i_5898_);
lean_dec(v_i_5898_);
v_res_5902_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5895_, v_as_5896_, v_sz_boxed_5900_, v_i_boxed_5901_, v_b_5899_);
lean_dec_ref(v_as_5896_);
lean_dec_ref(v___x_5895_);
return v_res_5902_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(lean_object* v_upperBound_5903_, lean_object* v_a_5904_, lean_object* v_b_5905_){
_start:
{
uint8_t v___x_5906_; 
v___x_5906_ = lean_nat_dec_lt(v_a_5904_, v_upperBound_5903_);
if (v___x_5906_ == 0)
{
lean_dec(v_a_5904_);
return v_b_5905_;
}
else
{
lean_object* v_snd_5907_; lean_object* v_snd_5908_; lean_object* v_fst_5909_; lean_object* v___x_5911_; uint8_t v_isShared_5912_; uint8_t v_isSharedCheck_5975_; 
v_snd_5907_ = lean_ctor_get(v_b_5905_, 1);
lean_inc(v_snd_5907_);
v_snd_5908_ = lean_ctor_get(v_snd_5907_, 1);
lean_inc(v_snd_5908_);
v_fst_5909_ = lean_ctor_get(v_b_5905_, 0);
v_isSharedCheck_5975_ = !lean_is_exclusive(v_b_5905_);
if (v_isSharedCheck_5975_ == 0)
{
lean_object* v_unused_5976_; 
v_unused_5976_ = lean_ctor_get(v_b_5905_, 1);
lean_dec(v_unused_5976_);
v___x_5911_ = v_b_5905_;
v_isShared_5912_ = v_isSharedCheck_5975_;
goto v_resetjp_5910_;
}
else
{
lean_inc(v_fst_5909_);
lean_dec(v_b_5905_);
v___x_5911_ = lean_box(0);
v_isShared_5912_ = v_isSharedCheck_5975_;
goto v_resetjp_5910_;
}
v_resetjp_5910_:
{
lean_object* v_fst_5913_; lean_object* v___x_5915_; uint8_t v_isShared_5916_; uint8_t v_isSharedCheck_5973_; 
v_fst_5913_ = lean_ctor_get(v_snd_5907_, 0);
v_isSharedCheck_5973_ = !lean_is_exclusive(v_snd_5907_);
if (v_isSharedCheck_5973_ == 0)
{
lean_object* v_unused_5974_; 
v_unused_5974_ = lean_ctor_get(v_snd_5907_, 1);
lean_dec(v_unused_5974_);
v___x_5915_ = v_snd_5907_;
v_isShared_5916_ = v_isSharedCheck_5973_;
goto v_resetjp_5914_;
}
else
{
lean_inc(v_fst_5913_);
lean_dec(v_snd_5907_);
v___x_5915_ = lean_box(0);
v_isShared_5916_ = v_isSharedCheck_5973_;
goto v_resetjp_5914_;
}
v_resetjp_5914_:
{
lean_object* v_array_5917_; lean_object* v_start_5918_; lean_object* v_stop_5919_; uint8_t v___x_5920_; 
v_array_5917_ = lean_ctor_get(v_snd_5908_, 0);
v_start_5918_ = lean_ctor_get(v_snd_5908_, 1);
v_stop_5919_ = lean_ctor_get(v_snd_5908_, 2);
v___x_5920_ = lean_nat_dec_lt(v_start_5918_, v_stop_5919_);
if (v___x_5920_ == 0)
{
lean_object* v___x_5922_; 
lean_dec(v_a_5904_);
if (v_isShared_5916_ == 0)
{
v___x_5922_ = v___x_5915_;
goto v_reusejp_5921_;
}
else
{
lean_object* v_reuseFailAlloc_5926_; 
v_reuseFailAlloc_5926_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5926_, 0, v_fst_5913_);
lean_ctor_set(v_reuseFailAlloc_5926_, 1, v_snd_5908_);
v___x_5922_ = v_reuseFailAlloc_5926_;
goto v_reusejp_5921_;
}
v_reusejp_5921_:
{
lean_object* v___x_5924_; 
if (v_isShared_5912_ == 0)
{
lean_ctor_set(v___x_5911_, 1, v___x_5922_);
v___x_5924_ = v___x_5911_;
goto v_reusejp_5923_;
}
else
{
lean_object* v_reuseFailAlloc_5925_; 
v_reuseFailAlloc_5925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5925_, 0, v_fst_5909_);
lean_ctor_set(v_reuseFailAlloc_5925_, 1, v___x_5922_);
v___x_5924_ = v_reuseFailAlloc_5925_;
goto v_reusejp_5923_;
}
v_reusejp_5923_:
{
return v___x_5924_;
}
}
}
else
{
lean_object* v___x_5928_; uint8_t v_isShared_5929_; uint8_t v_isSharedCheck_5969_; 
lean_inc(v_stop_5919_);
lean_inc(v_start_5918_);
lean_inc_ref(v_array_5917_);
v_isSharedCheck_5969_ = !lean_is_exclusive(v_snd_5908_);
if (v_isSharedCheck_5969_ == 0)
{
lean_object* v_unused_5970_; lean_object* v_unused_5971_; lean_object* v_unused_5972_; 
v_unused_5970_ = lean_ctor_get(v_snd_5908_, 2);
lean_dec(v_unused_5970_);
v_unused_5971_ = lean_ctor_get(v_snd_5908_, 1);
lean_dec(v_unused_5971_);
v_unused_5972_ = lean_ctor_get(v_snd_5908_, 0);
lean_dec(v_unused_5972_);
v___x_5928_ = v_snd_5908_;
v_isShared_5929_ = v_isSharedCheck_5969_;
goto v_resetjp_5927_;
}
else
{
lean_dec(v_snd_5908_);
v___x_5928_ = lean_box(0);
v_isShared_5929_ = v_isSharedCheck_5969_;
goto v_resetjp_5927_;
}
v_resetjp_5927_:
{
lean_object* v_array_5930_; lean_object* v_start_5931_; lean_object* v_stop_5932_; lean_object* v___x_5933_; lean_object* v___x_5934_; lean_object* v___x_5935_; lean_object* v___x_5937_; 
v_array_5930_ = lean_ctor_get(v_fst_5913_, 0);
v_start_5931_ = lean_ctor_get(v_fst_5913_, 1);
v_stop_5932_ = lean_ctor_get(v_fst_5913_, 2);
v___x_5933_ = lean_array_fget(v_array_5917_, v_start_5918_);
v___x_5934_ = lean_unsigned_to_nat(1u);
v___x_5935_ = lean_nat_add(v_start_5918_, v___x_5934_);
lean_dec(v_start_5918_);
if (v_isShared_5929_ == 0)
{
lean_ctor_set(v___x_5928_, 1, v___x_5935_);
v___x_5937_ = v___x_5928_;
goto v_reusejp_5936_;
}
else
{
lean_object* v_reuseFailAlloc_5968_; 
v_reuseFailAlloc_5968_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5968_, 0, v_array_5917_);
lean_ctor_set(v_reuseFailAlloc_5968_, 1, v___x_5935_);
lean_ctor_set(v_reuseFailAlloc_5968_, 2, v_stop_5919_);
v___x_5937_ = v_reuseFailAlloc_5968_;
goto v_reusejp_5936_;
}
v_reusejp_5936_:
{
uint8_t v___x_5938_; 
v___x_5938_ = lean_nat_dec_lt(v_start_5931_, v_stop_5932_);
if (v___x_5938_ == 0)
{
lean_object* v___x_5940_; 
lean_dec(v___x_5933_);
lean_dec(v_a_5904_);
if (v_isShared_5916_ == 0)
{
lean_ctor_set(v___x_5915_, 1, v___x_5937_);
v___x_5940_ = v___x_5915_;
goto v_reusejp_5939_;
}
else
{
lean_object* v_reuseFailAlloc_5944_; 
v_reuseFailAlloc_5944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5944_, 0, v_fst_5913_);
lean_ctor_set(v_reuseFailAlloc_5944_, 1, v___x_5937_);
v___x_5940_ = v_reuseFailAlloc_5944_;
goto v_reusejp_5939_;
}
v_reusejp_5939_:
{
lean_object* v___x_5942_; 
if (v_isShared_5912_ == 0)
{
lean_ctor_set(v___x_5911_, 1, v___x_5940_);
v___x_5942_ = v___x_5911_;
goto v_reusejp_5941_;
}
else
{
lean_object* v_reuseFailAlloc_5943_; 
v_reuseFailAlloc_5943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5943_, 0, v_fst_5909_);
lean_ctor_set(v_reuseFailAlloc_5943_, 1, v___x_5940_);
v___x_5942_ = v_reuseFailAlloc_5943_;
goto v_reusejp_5941_;
}
v_reusejp_5941_:
{
return v___x_5942_;
}
}
}
else
{
lean_object* v___x_5946_; uint8_t v_isShared_5947_; uint8_t v_isSharedCheck_5964_; 
lean_inc(v_stop_5932_);
lean_inc(v_start_5931_);
lean_inc_ref(v_array_5930_);
v_isSharedCheck_5964_ = !lean_is_exclusive(v_fst_5913_);
if (v_isSharedCheck_5964_ == 0)
{
lean_object* v_unused_5965_; lean_object* v_unused_5966_; lean_object* v_unused_5967_; 
v_unused_5965_ = lean_ctor_get(v_fst_5913_, 2);
lean_dec(v_unused_5965_);
v_unused_5966_ = lean_ctor_get(v_fst_5913_, 1);
lean_dec(v_unused_5966_);
v_unused_5967_ = lean_ctor_get(v_fst_5913_, 0);
lean_dec(v_unused_5967_);
v___x_5946_ = v_fst_5913_;
v_isShared_5947_ = v_isSharedCheck_5964_;
goto v_resetjp_5945_;
}
else
{
lean_dec(v_fst_5913_);
v___x_5946_ = lean_box(0);
v_isShared_5947_ = v_isSharedCheck_5964_;
goto v_resetjp_5945_;
}
v_resetjp_5945_:
{
lean_object* v___x_5948_; lean_object* v___x_5949_; lean_object* v___x_5951_; 
v___x_5948_ = lean_array_fget(v_array_5930_, v_start_5931_);
v___x_5949_ = lean_nat_add(v_start_5931_, v___x_5934_);
lean_dec(v_start_5931_);
if (v_isShared_5947_ == 0)
{
lean_ctor_set(v___x_5946_, 1, v___x_5949_);
v___x_5951_ = v___x_5946_;
goto v_reusejp_5950_;
}
else
{
lean_object* v_reuseFailAlloc_5963_; 
v_reuseFailAlloc_5963_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5963_, 0, v_array_5930_);
lean_ctor_set(v_reuseFailAlloc_5963_, 1, v___x_5949_);
lean_ctor_set(v_reuseFailAlloc_5963_, 2, v_stop_5932_);
v___x_5951_ = v_reuseFailAlloc_5963_;
goto v_reusejp_5950_;
}
v_reusejp_5950_:
{
size_t v_sz_5952_; size_t v___x_5953_; lean_object* v___x_5954_; lean_object* v___x_5956_; 
v_sz_5952_ = lean_array_size(v___x_5948_);
v___x_5953_ = ((size_t)0ULL);
v___x_5954_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4(v___x_5933_, v___x_5948_, v_sz_5952_, v___x_5953_, v_fst_5909_);
lean_dec(v___x_5948_);
lean_dec(v___x_5933_);
if (v_isShared_5916_ == 0)
{
lean_ctor_set(v___x_5915_, 1, v___x_5937_);
lean_ctor_set(v___x_5915_, 0, v___x_5951_);
v___x_5956_ = v___x_5915_;
goto v_reusejp_5955_;
}
else
{
lean_object* v_reuseFailAlloc_5962_; 
v_reuseFailAlloc_5962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5962_, 0, v___x_5951_);
lean_ctor_set(v_reuseFailAlloc_5962_, 1, v___x_5937_);
v___x_5956_ = v_reuseFailAlloc_5962_;
goto v_reusejp_5955_;
}
v_reusejp_5955_:
{
lean_object* v___x_5958_; 
if (v_isShared_5912_ == 0)
{
lean_ctor_set(v___x_5911_, 1, v___x_5956_);
lean_ctor_set(v___x_5911_, 0, v___x_5954_);
v___x_5958_ = v___x_5911_;
goto v_reusejp_5957_;
}
else
{
lean_object* v_reuseFailAlloc_5961_; 
v_reuseFailAlloc_5961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5961_, 0, v___x_5954_);
lean_ctor_set(v_reuseFailAlloc_5961_, 1, v___x_5956_);
v___x_5958_ = v_reuseFailAlloc_5961_;
goto v_reusejp_5957_;
}
v_reusejp_5957_:
{
lean_object* v___x_5959_; 
v___x_5959_ = lean_nat_add(v_a_5904_, v___x_5934_);
lean_dec(v_a_5904_);
v_a_5904_ = v___x_5959_;
v_b_5905_ = v___x_5958_;
goto _start;
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg___boxed(lean_object* v_upperBound_5977_, lean_object* v_a_5978_, lean_object* v_b_5979_){
_start:
{
lean_object* v_res_5980_; 
v_res_5980_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_5977_, v_a_5978_, v_b_5979_);
lean_dec(v_upperBound_5977_);
return v_res_5980_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__0(void){
_start:
{
lean_object* v___x_5981_; 
v___x_5981_ = lean_mk_string_unchecked("assertion violation: fixedParamPerms.numFixed  = xs.size\n  ", 59, 59);
return v___x_5981_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__1(void){
_start:
{
lean_object* v___x_5982_; lean_object* v___x_5983_; lean_object* v___x_5984_; lean_object* v___x_5985_; lean_object* v___x_5986_; lean_object* v___x_5987_; 
v___x_5982_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__0, &l_Lean_Elab_FixedParamPerms_erase___closed__0_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__0);
v___x_5983_ = lean_unsigned_to_nat(2u);
v___x_5984_ = lean_unsigned_to_nat(457u);
v___x_5985_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0);
v___x_5986_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_5987_ = l_mkPanicMessageWithDecl(v___x_5986_, v___x_5985_, v___x_5984_, v___x_5983_, v___x_5982_);
return v___x_5987_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__2(void){
_start:
{
lean_object* v___x_5988_; 
v___x_5988_ = lean_mk_string_unchecked("assertion violation: toErase.size = fixedParamPerms.perms.size\n  -- Calculate a mask on the fixed parameters of variables to erase\n  ", 133, 133);
return v___x_5988_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__3(void){
_start:
{
lean_object* v___x_5989_; lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___x_5994_; 
v___x_5989_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__2, &l_Lean_Elab_FixedParamPerms_erase___closed__2_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__2);
v___x_5990_ = lean_unsigned_to_nat(2u);
v___x_5991_ = lean_unsigned_to_nat(458u);
v___x_5992_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0);
v___x_5993_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_5994_ = l_mkPanicMessageWithDecl(v___x_5993_, v___x_5992_, v___x_5991_, v___x_5990_, v___x_5989_);
return v___x_5994_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__4(void){
_start:
{
lean_object* v___x_5995_; 
v___x_5995_ = lean_mk_string_unchecked("assertion violation: xs.all (·.isFVar)\n  ", 42, 41);
return v___x_5995_;
}
}
static lean_object* _init_l_Lean_Elab_FixedParamPerms_erase___closed__5(void){
_start:
{
lean_object* v___x_5996_; lean_object* v___x_5997_; lean_object* v___x_5998_; lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; 
v___x_5996_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__4, &l_Lean_Elab_FixedParamPerms_erase___closed__4_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__4);
v___x_5997_ = lean_unsigned_to_nat(2u);
v___x_5998_ = lean_unsigned_to_nat(456u);
v___x_5999_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__4___closed__0);
v___x_6000_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__9___redArg___lam__2___closed__0);
v___x_6001_ = l_mkPanicMessageWithDecl(v___x_6000_, v___x_5999_, v___x_5998_, v___x_5997_, v___x_5996_);
return v___x_6001_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_FixedParamPerms_erase(lean_object* v_fixedParamPerms_6002_, lean_object* v_xs_6003_, lean_object* v_toErase_6004_){
_start:
{
lean_object* v___x_6005_; lean_object* v___x_6006_; uint8_t v___x_6090_; 
v___x_6005_ = lean_unsigned_to_nat(0u);
v___x_6006_ = lean_array_get_size(v_xs_6003_);
v___x_6090_ = lean_nat_dec_lt(v___x_6005_, v___x_6006_);
if (v___x_6090_ == 0)
{
goto v___jp_6007_;
}
else
{
if (v___x_6090_ == 0)
{
goto v___jp_6007_;
}
else
{
size_t v___x_6091_; size_t v___x_6092_; uint8_t v___x_6093_; 
v___x_6091_ = ((size_t)0ULL);
v___x_6092_ = lean_usize_of_nat(v___x_6006_);
v___x_6093_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Elab_FixedParamPerms_erase_spec__11(v_xs_6003_, v___x_6091_, v___x_6092_);
if (v___x_6093_ == 0)
{
goto v___jp_6007_;
}
else
{
lean_object* v___x_6094_; lean_object* v___x_6095_; 
lean_dec_ref(v_toErase_6004_);
lean_dec_ref(v_xs_6003_);
lean_dec_ref(v_fixedParamPerms_6002_);
v___x_6094_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__5, &l_Lean_Elab_FixedParamPerms_erase___closed__5_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__5);
v___x_6095_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6094_);
return v___x_6095_;
}
}
}
v___jp_6007_:
{
lean_object* v_numFixed_6008_; lean_object* v_perms_6009_; lean_object* v_revDeps_6010_; uint8_t v___x_6011_; 
v_numFixed_6008_ = lean_ctor_get(v_fixedParamPerms_6002_, 0);
v_perms_6009_ = lean_ctor_get(v_fixedParamPerms_6002_, 1);
lean_inc_ref(v_perms_6009_);
v_revDeps_6010_ = lean_ctor_get(v_fixedParamPerms_6002_, 2);
lean_inc_ref(v_revDeps_6010_);
v___x_6011_ = lean_nat_dec_eq(v_numFixed_6008_, v___x_6006_);
if (v___x_6011_ == 0)
{
lean_object* v___x_6012_; lean_object* v___x_6013_; 
lean_dec_ref(v_revDeps_6010_);
lean_dec_ref(v_perms_6009_);
lean_dec_ref(v_toErase_6004_);
lean_dec_ref(v_xs_6003_);
lean_dec_ref(v_fixedParamPerms_6002_);
v___x_6012_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__1, &l_Lean_Elab_FixedParamPerms_erase___closed__1_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__1);
v___x_6013_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6012_);
return v___x_6013_;
}
else
{
lean_object* v___x_6014_; lean_object* v___x_6015_; uint8_t v_changed_6016_; 
v___x_6014_ = lean_array_get_size(v_toErase_6004_);
v___x_6015_ = lean_array_get_size(v_perms_6009_);
v_changed_6016_ = lean_nat_dec_eq(v___x_6014_, v___x_6015_);
if (v_changed_6016_ == 0)
{
lean_object* v___x_6017_; lean_object* v___x_6018_; 
lean_dec_ref(v_revDeps_6010_);
lean_dec_ref(v_perms_6009_);
lean_dec_ref(v_toErase_6004_);
lean_dec_ref(v_xs_6003_);
lean_dec_ref(v_fixedParamPerms_6002_);
v___x_6017_ = lean_obj_once(&l_Lean_Elab_FixedParamPerms_erase___closed__3, &l_Lean_Elab_FixedParamPerms_erase___closed__3_once, _init_l_Lean_Elab_FixedParamPerms_erase___closed__3);
v___x_6018_ = l_panic___at___00Lean_Elab_FixedParamPerms_erase_spec__0(v___x_6017_);
return v___x_6018_;
}
else
{
uint8_t v_changed_6019_; lean_object* v___x_6020_; lean_object* v_mask_6021_; lean_object* v___x_6022_; lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6025_; lean_object* v___x_6026_; lean_object* v_fst_6027_; lean_object* v___x_6029_; uint8_t v_isShared_6030_; uint8_t v_isSharedCheck_6088_; 
v_changed_6019_ = 0;
v___x_6020_ = lean_box(v_changed_6019_);
lean_inc(v_numFixed_6008_);
v_mask_6021_ = lean_mk_array(v_numFixed_6008_, v___x_6020_);
v___x_6022_ = l_Array_toSubarray___redArg(v_toErase_6004_, v___x_6005_, v___x_6014_);
lean_inc_ref(v_perms_6009_);
v___x_6023_ = l_Array_toSubarray___redArg(v_perms_6009_, v___x_6005_, v___x_6015_);
v___x_6024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6024_, 0, v___x_6022_);
lean_ctor_set(v___x_6024_, 1, v___x_6023_);
v___x_6025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6025_, 0, v_mask_6021_);
lean_ctor_set(v___x_6025_, 1, v___x_6024_);
v___x_6026_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v___x_6014_, v___x_6005_, v___x_6025_);
v_fst_6027_ = lean_ctor_get(v___x_6026_, 0);
v_isSharedCheck_6088_ = !lean_is_exclusive(v___x_6026_);
if (v_isSharedCheck_6088_ == 0)
{
lean_object* v_unused_6089_; 
v_unused_6089_ = lean_ctor_get(v___x_6026_, 1);
lean_dec(v_unused_6089_);
v___x_6029_ = v___x_6026_;
v_isShared_6030_ = v_isSharedCheck_6088_;
goto v_resetjp_6028_;
}
else
{
lean_inc(v_fst_6027_);
lean_dec(v___x_6026_);
v___x_6029_ = lean_box(0);
v_isShared_6030_ = v_isSharedCheck_6088_;
goto v_resetjp_6028_;
}
v_resetjp_6028_:
{
lean_object* v___x_6031_; lean_object* v___x_6033_; 
v___x_6031_ = lean_box(v_changed_6016_);
if (v_isShared_6030_ == 0)
{
lean_ctor_set(v___x_6029_, 1, v___x_6031_);
v___x_6033_ = v___x_6029_;
goto v_reusejp_6032_;
}
else
{
lean_object* v_reuseFailAlloc_6087_; 
v_reuseFailAlloc_6087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6087_, 0, v_fst_6027_);
lean_ctor_set(v_reuseFailAlloc_6087_, 1, v___x_6031_);
v___x_6033_ = v_reuseFailAlloc_6087_;
goto v_reusejp_6032_;
}
v_reusejp_6032_:
{
lean_object* v___x_6034_; lean_object* v___x_6036_; uint8_t v_isShared_6037_; uint8_t v_isSharedCheck_6083_; 
v___x_6034_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Elab_FixedParamPerms_erase_spec__8(v___x_6015_, v_perms_6009_, v_fixedParamPerms_6002_, v___x_6033_);
v_isSharedCheck_6083_ = !lean_is_exclusive(v_fixedParamPerms_6002_);
if (v_isSharedCheck_6083_ == 0)
{
lean_object* v_unused_6084_; lean_object* v_unused_6085_; lean_object* v_unused_6086_; 
v_unused_6084_ = lean_ctor_get(v_fixedParamPerms_6002_, 2);
lean_dec(v_unused_6084_);
v_unused_6085_ = lean_ctor_get(v_fixedParamPerms_6002_, 1);
lean_dec(v_unused_6085_);
v_unused_6086_ = lean_ctor_get(v_fixedParamPerms_6002_, 0);
lean_dec(v_unused_6086_);
v___x_6036_ = v_fixedParamPerms_6002_;
v_isShared_6037_ = v_isSharedCheck_6083_;
goto v_resetjp_6035_;
}
else
{
lean_dec(v_fixedParamPerms_6002_);
v___x_6036_ = lean_box(0);
v_isShared_6037_ = v_isSharedCheck_6083_;
goto v_resetjp_6035_;
}
v_resetjp_6035_:
{
lean_object* v_fst_6038_; lean_object* v___x_6040_; uint8_t v_isShared_6041_; uint8_t v_isSharedCheck_6081_; 
v_fst_6038_ = lean_ctor_get(v___x_6034_, 0);
v_isSharedCheck_6081_ = !lean_is_exclusive(v___x_6034_);
if (v_isSharedCheck_6081_ == 0)
{
lean_object* v_unused_6082_; 
v_unused_6082_ = lean_ctor_get(v___x_6034_, 1);
lean_dec(v_unused_6082_);
v___x_6040_ = v___x_6034_;
v_isShared_6041_ = v_isSharedCheck_6081_;
goto v_resetjp_6039_;
}
else
{
lean_inc(v_fst_6038_);
lean_dec(v___x_6034_);
v___x_6040_ = lean_box(0);
v_isShared_6041_ = v_isSharedCheck_6081_;
goto v_resetjp_6039_;
}
v_resetjp_6039_:
{
lean_object* v___x_6042_; lean_object* v___x_6043_; lean_object* v___x_6044_; lean_object* v___x_6045_; lean_object* v___x_6047_; 
v___x_6042_ = lean_array_get_size(v_fst_6038_);
v___x_6043_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamPerms_spec__4___redArg___closed__0);
v___x_6044_ = l_Array_toSubarray___redArg(v_fst_6038_, v___x_6005_, v___x_6042_);
v___x_6045_ = l_Array_toSubarray___redArg(v_xs_6003_, v___x_6005_, v___x_6006_);
if (v_isShared_6041_ == 0)
{
lean_ctor_set(v___x_6040_, 1, v___x_6045_);
lean_ctor_set(v___x_6040_, 0, v___x_6044_);
v___x_6047_ = v___x_6040_;
goto v_reusejp_6046_;
}
else
{
lean_object* v_reuseFailAlloc_6080_; 
v_reuseFailAlloc_6080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6080_, 0, v___x_6044_);
lean_ctor_set(v_reuseFailAlloc_6080_, 1, v___x_6045_);
v___x_6047_ = v_reuseFailAlloc_6080_;
goto v_reusejp_6046_;
}
v_reusejp_6046_:
{
lean_object* v___x_6048_; lean_object* v___x_6049_; lean_object* v___x_6050_; lean_object* v___x_6051_; lean_object* v_snd_6052_; lean_object* v_snd_6053_; lean_object* v_fst_6054_; lean_object* v_fst_6055_; lean_object* v___x_6057_; uint8_t v_isShared_6058_; uint8_t v_isSharedCheck_6078_; 
v___x_6048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6048_, 0, v___x_6043_);
lean_ctor_set(v___x_6048_, 1, v___x_6047_);
v___x_6049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6049_, 0, v___x_6043_);
lean_ctor_set(v___x_6049_, 1, v___x_6048_);
v___x_6050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6050_, 0, v___x_6043_);
lean_ctor_set(v___x_6050_, 1, v___x_6049_);
v___x_6051_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v___x_6042_, v___x_6005_, v___x_6050_);
v_snd_6052_ = lean_ctor_get(v___x_6051_, 1);
lean_inc(v_snd_6052_);
v_snd_6053_ = lean_ctor_get(v_snd_6052_, 1);
lean_inc(v_snd_6053_);
v_fst_6054_ = lean_ctor_get(v___x_6051_, 0);
lean_inc(v_fst_6054_);
lean_dec_ref(v___x_6051_);
v_fst_6055_ = lean_ctor_get(v_snd_6052_, 0);
v_isSharedCheck_6078_ = !lean_is_exclusive(v_snd_6052_);
if (v_isSharedCheck_6078_ == 0)
{
lean_object* v_unused_6079_; 
v_unused_6079_ = lean_ctor_get(v_snd_6052_, 1);
lean_dec(v_unused_6079_);
v___x_6057_ = v_snd_6052_;
v_isShared_6058_ = v_isSharedCheck_6078_;
goto v_resetjp_6056_;
}
else
{
lean_inc(v_fst_6055_);
lean_dec(v_snd_6052_);
v___x_6057_ = lean_box(0);
v_isShared_6058_ = v_isSharedCheck_6078_;
goto v_resetjp_6056_;
}
v_resetjp_6056_:
{
lean_object* v_fst_6059_; lean_object* v___x_6061_; uint8_t v_isShared_6062_; uint8_t v_isSharedCheck_6076_; 
v_fst_6059_ = lean_ctor_get(v_snd_6053_, 0);
v_isSharedCheck_6076_ = !lean_is_exclusive(v_snd_6053_);
if (v_isSharedCheck_6076_ == 0)
{
lean_object* v_unused_6077_; 
v_unused_6077_ = lean_ctor_get(v_snd_6053_, 1);
lean_dec(v_unused_6077_);
v___x_6061_ = v_snd_6053_;
v_isShared_6062_ = v_isSharedCheck_6076_;
goto v_resetjp_6060_;
}
else
{
lean_inc(v_fst_6059_);
lean_dec(v_snd_6053_);
v___x_6061_ = lean_box(0);
v_isShared_6062_ = v_isSharedCheck_6076_;
goto v_resetjp_6060_;
}
v_resetjp_6060_:
{
lean_object* v___x_6063_; size_t v_sz_6064_; size_t v___x_6065_; lean_object* v___x_6066_; lean_object* v___x_6068_; 
v___x_6063_ = lean_array_get_size(v_fst_6059_);
v_sz_6064_ = lean_array_size(v_perms_6009_);
v___x_6065_ = ((size_t)0ULL);
v___x_6066_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_FixedParamPerms_erase_spec__2(v_fst_6054_, v_sz_6064_, v___x_6065_, v_perms_6009_);
lean_dec(v_fst_6054_);
if (v_isShared_6037_ == 0)
{
lean_ctor_set(v___x_6036_, 1, v___x_6066_);
lean_ctor_set(v___x_6036_, 0, v___x_6063_);
v___x_6068_ = v___x_6036_;
goto v_reusejp_6067_;
}
else
{
lean_object* v_reuseFailAlloc_6075_; 
v_reuseFailAlloc_6075_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_6075_, 0, v___x_6063_);
lean_ctor_set(v_reuseFailAlloc_6075_, 1, v___x_6066_);
lean_ctor_set(v_reuseFailAlloc_6075_, 2, v_revDeps_6010_);
v___x_6068_ = v_reuseFailAlloc_6075_;
goto v_reusejp_6067_;
}
v_reusejp_6067_:
{
lean_object* v___x_6070_; 
if (v_isShared_6062_ == 0)
{
lean_ctor_set(v___x_6061_, 1, v_fst_6055_);
v___x_6070_ = v___x_6061_;
goto v_reusejp_6069_;
}
else
{
lean_object* v_reuseFailAlloc_6074_; 
v_reuseFailAlloc_6074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6074_, 0, v_fst_6059_);
lean_ctor_set(v_reuseFailAlloc_6074_, 1, v_fst_6055_);
v___x_6070_ = v_reuseFailAlloc_6074_;
goto v_reusejp_6069_;
}
v_reusejp_6069_:
{
lean_object* v___x_6072_; 
if (v_isShared_6058_ == 0)
{
lean_ctor_set(v___x_6057_, 1, v___x_6070_);
lean_ctor_set(v___x_6057_, 0, v___x_6068_);
v___x_6072_ = v___x_6057_;
goto v_reusejp_6071_;
}
else
{
lean_object* v_reuseFailAlloc_6073_; 
v_reuseFailAlloc_6073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6073_, 0, v___x_6068_);
lean_ctor_set(v_reuseFailAlloc_6073_, 1, v___x_6070_);
v___x_6072_ = v_reuseFailAlloc_6073_;
goto v_reusejp_6071_;
}
v_reusejp_6071_:
{
return v___x_6072_;
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
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(lean_object* v_upperBound_6096_, lean_object* v___x_6097_, lean_object* v_fixedParamPerms_6098_, lean_object* v_next_6099_, lean_object* v_inst_6100_, lean_object* v_R_6101_, lean_object* v_a_6102_, lean_object* v_b_6103_, lean_object* v_c_6104_){
_start:
{
lean_object* v___x_6105_; 
v___x_6105_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___redArg(v_upperBound_6096_, v___x_6097_, v_fixedParamPerms_6098_, v_next_6099_, v_a_6102_, v_b_6103_);
return v___x_6105_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6___boxed(lean_object* v_upperBound_6106_, lean_object* v___x_6107_, lean_object* v_fixedParamPerms_6108_, lean_object* v_next_6109_, lean_object* v_inst_6110_, lean_object* v_R_6111_, lean_object* v_a_6112_, lean_object* v_b_6113_, lean_object* v_c_6114_){
_start:
{
lean_object* v_res_6115_; 
v_res_6115_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__6(v_upperBound_6106_, v___x_6107_, v_fixedParamPerms_6108_, v_next_6109_, v_inst_6110_, v_R_6111_, v_a_6112_, v_b_6113_, v_c_6114_);
lean_dec(v_next_6109_);
lean_dec_ref(v_fixedParamPerms_6108_);
lean_dec_ref(v___x_6107_);
lean_dec(v_upperBound_6106_);
return v_res_6115_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(lean_object* v_upperBound_6116_, lean_object* v___x_6117_, lean_object* v_fixedParamPerms_6118_, lean_object* v_inst_6119_, lean_object* v_R_6120_, lean_object* v_a_6121_, lean_object* v_b_6122_, lean_object* v_c_6123_){
_start:
{
lean_object* v___x_6124_; 
v___x_6124_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___redArg(v_upperBound_6116_, v___x_6117_, v_fixedParamPerms_6118_, v_a_6121_, v_b_6122_);
return v___x_6124_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7___boxed(lean_object* v_upperBound_6125_, lean_object* v___x_6126_, lean_object* v_fixedParamPerms_6127_, lean_object* v_inst_6128_, lean_object* v_R_6129_, lean_object* v_a_6130_, lean_object* v_b_6131_, lean_object* v_c_6132_){
_start:
{
lean_object* v_res_6133_; 
v_res_6133_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__7(v_upperBound_6125_, v___x_6126_, v_fixedParamPerms_6127_, v_inst_6128_, v_R_6129_, v_a_6130_, v_b_6131_, v_c_6132_);
lean_dec_ref(v_fixedParamPerms_6127_);
lean_dec_ref(v___x_6126_);
lean_dec(v_upperBound_6125_);
return v_res_6133_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(lean_object* v_upperBound_6134_, lean_object* v_inst_6135_, lean_object* v_R_6136_, lean_object* v_a_6137_, lean_object* v_b_6138_, lean_object* v_c_6139_){
_start:
{
lean_object* v___x_6140_; 
v___x_6140_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___redArg(v_upperBound_6134_, v_a_6137_, v_b_6138_);
return v___x_6140_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9___boxed(lean_object* v_upperBound_6141_, lean_object* v_inst_6142_, lean_object* v_R_6143_, lean_object* v_a_6144_, lean_object* v_b_6145_, lean_object* v_c_6146_){
_start:
{
lean_object* v_res_6147_; 
v_res_6147_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__9(v_upperBound_6141_, v_inst_6142_, v_R_6143_, v_a_6144_, v_b_6145_, v_c_6146_);
lean_dec(v_upperBound_6141_);
return v_res_6147_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(lean_object* v_upperBound_6148_, lean_object* v_inst_6149_, lean_object* v_R_6150_, lean_object* v_a_6151_, lean_object* v_b_6152_, lean_object* v_c_6153_){
_start:
{
lean_object* v___x_6154_; 
v___x_6154_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___redArg(v_upperBound_6148_, v_a_6151_, v_b_6152_);
return v___x_6154_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10___boxed(lean_object* v_upperBound_6155_, lean_object* v_inst_6156_, lean_object* v_R_6157_, lean_object* v_a_6158_, lean_object* v_b_6159_, lean_object* v_c_6160_){
_start:
{
lean_object* v_res_6161_; 
v_res_6161_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_FixedParamPerms_erase_spec__10(v_upperBound_6155_, v_inst_6156_, v_R_6157_, v_a_6158_, v_b_6159_, v_c_6160_);
lean_dec(v_upperBound_6155_);
return v_res_6161_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6162_; 
v___x_6162_ = lean_mk_string_unchecked("_private", 8, 8);
return v___x_6162_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6163_; lean_object* v___x_6164_; lean_object* v___x_6165_; 
v___x_6163_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__0_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6164_ = lean_box(0);
v___x_6165_ = l_Lean_Name_str___override(v___x_6164_, v___x_6163_);
return v___x_6165_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6166_; 
v___x_6166_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_6166_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6167_; lean_object* v___x_6168_; lean_object* v___x_6169_; 
v___x_6167_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6168_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__1_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6169_ = l_Lean_Name_str___override(v___x_6168_, v___x_6167_);
return v___x_6169_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6170_; lean_object* v___x_6171_; lean_object* v___x_6172_; 
v___x_6170_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0);
v___x_6171_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__3_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6172_ = l_Lean_Name_str___override(v___x_6171_, v___x_6170_);
return v___x_6172_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6173_; 
v___x_6173_ = lean_mk_string_unchecked("PreDefinition", 13, 13);
return v___x_6173_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6174_; lean_object* v___x_6175_; lean_object* v___x_6176_; 
v___x_6174_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6175_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__4_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6176_ = l_Lean_Name_str___override(v___x_6175_, v___x_6174_);
return v___x_6176_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6177_; 
v___x_6177_ = lean_mk_string_unchecked("FixedParams", 11, 11);
return v___x_6177_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6178_; lean_object* v___x_6179_; lean_object* v___x_6180_; 
v___x_6178_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6179_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__6_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6180_ = l_Lean_Name_str___override(v___x_6179_, v___x_6178_);
return v___x_6180_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6181_; lean_object* v___x_6182_; lean_object* v___x_6183_; 
v___x_6181_ = lean_unsigned_to_nat(0u);
v___x_6182_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__8_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6183_ = l_Lean_Name_num___override(v___x_6182_, v___x_6181_);
return v___x_6183_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6184_; 
v___x_6184_ = lean_mk_string_unchecked("initFn", 6, 6);
return v___x_6184_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6185_; lean_object* v___x_6186_; lean_object* v___x_6187_; 
v___x_6185_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__10_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6186_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__9_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6187_ = l_Lean_Name_str___override(v___x_6186_, v___x_6185_);
return v___x_6187_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6188_; 
v___x_6188_ = lean_mk_string_unchecked("_@", 2, 2);
return v___x_6188_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6189_; lean_object* v___x_6190_; lean_object* v___x_6191_; 
v___x_6189_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__12_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6190_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__11_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6191_ = l_Lean_Name_str___override(v___x_6190_, v___x_6189_);
return v___x_6191_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6192_; lean_object* v___x_6193_; lean_object* v___x_6194_; 
v___x_6192_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__2_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6193_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__13_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6194_ = l_Lean_Name_str___override(v___x_6193_, v___x_6192_);
return v___x_6194_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6195_; lean_object* v___x_6196_; lean_object* v___x_6197_; 
v___x_6195_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__0);
v___x_6196_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__14_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6197_ = l_Lean_Name_str___override(v___x_6196_, v___x_6195_);
return v___x_6197_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6198_; lean_object* v___x_6199_; lean_object* v___x_6200_; 
v___x_6198_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__5_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6199_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__15_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6200_ = l_Lean_Name_str___override(v___x_6199_, v___x_6198_);
return v___x_6200_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6201_; lean_object* v___x_6202_; lean_object* v___x_6203_; 
v___x_6201_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__7_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6202_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__16_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6203_ = l_Lean_Name_str___override(v___x_6202_, v___x_6201_);
return v___x_6203_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6204_; lean_object* v___x_6205_; lean_object* v___x_6206_; 
v___x_6204_ = lean_unsigned_to_nat(1547768203u);
v___x_6205_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__17_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6206_ = l_Lean_Name_num___override(v___x_6205_, v___x_6204_);
return v___x_6206_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6207_; 
v___x_6207_ = lean_mk_string_unchecked("_hygCtx", 7, 7);
return v___x_6207_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6208_; lean_object* v___x_6209_; lean_object* v___x_6210_; 
v___x_6208_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__19_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6209_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__18_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6210_ = l_Lean_Name_str___override(v___x_6209_, v___x_6208_);
return v___x_6210_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6211_; 
v___x_6211_ = lean_mk_string_unchecked("_hyg", 4, 4);
return v___x_6211_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6212_; lean_object* v___x_6213_; lean_object* v___x_6214_; 
v___x_6212_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__21_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6213_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__20_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6214_ = l_Lean_Name_str___override(v___x_6213_, v___x_6212_);
return v___x_6214_;
}
}
static lean_object* _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6215_; lean_object* v___x_6216_; lean_object* v___x_6217_; 
v___x_6215_ = lean_unsigned_to_nat(2u);
v___x_6216_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__22_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6217_ = l_Lean_Name_num___override(v___x_6216_, v___x_6215_);
return v___x_6217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6219_; uint8_t v___x_6220_; lean_object* v___x_6221_; lean_object* v___x_6222_; 
v___x_6219_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3, &l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Elab_getFixedParamsInfo_spec__5___redArg___closed__3);
v___x_6220_ = 0;
v___x_6221_ = lean_obj_once(&l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_, &l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2__once, _init_l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn___closed__23_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_);
v___x_6222_ = l_Lean_registerTraceClass(v___x_6219_, v___x_6220_, v___x_6221_);
return v___x_6222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2____boxed(lean_object* v_a_6223_){
_start:
{
lean_object* v_res_6224_; 
v_res_6224_ = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_();
return v_res_6224_;
}
}
lean_object* runtime_initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_FixedParams_instToFormatInfo = _init_l_Lean_Elab_FixedParams_instToFormatInfo();
lean_mark_persistent(l_Lean_Elab_FixedParams_instToFormatInfo);
l_Lean_Elab_instInhabitedFixedParamPerms_default = _init_l_Lean_Elab_instInhabitedFixedParamPerms_default();
lean_mark_persistent(l_Lean_Elab_instInhabitedFixedParamPerms_default);
l_Lean_Elab_instInhabitedFixedParamPerms = _init_l_Lean_Elab_instInhabitedFixedParamPerms();
lean_mark_persistent(l_Lean_Elab_instInhabitedFixedParamPerms);
l_Lean_Elab_instReprFixedParamPerms = _init_l_Lean_Elab_instReprFixedParamPerms();
lean_mark_persistent(l_Lean_Elab_instReprFixedParamPerms);
res = l___private_Lean_Elab_PreDefinition_FixedParams_0__initFn_00___x40_Lean_Elab_PreDefinition_FixedParams_1547768203____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_PreDefinition_Basic(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_PreDefinition_FixedParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_PreDefinition_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_PreDefinition_FixedParams(builtin);
}
#ifdef __cplusplus
}
#endif
