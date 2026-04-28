// Lean compiler output
// Module: Lean.Meta.Tactic.Apply
// Imports: public import Lean.Meta.Tactic.Util public import Lean.PrettyPrinter import Lean.Meta.AppBuilder import Init.Omega
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
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_headBetaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_appendTag(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_main(lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkUnfoldAxiomsNote(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofLazyM(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_forallMetaBoundedTelescope(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_getExpectedNumArgsAux___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getExpectedNumArgsAux___closed__0;
static lean_once_cell_t l_Lean_Meta_getExpectedNumArgsAux___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Meta_getExpectedNumArgsAux___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_MVarId_apply_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_MVarId_apply_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_applyConst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyConst___closed__0;
static lean_once_cell_t l_Lean_MVarId_applyConst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyConst___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__1;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__3;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__4;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__5;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__6;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__7;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__8;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__9;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__10;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__11;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_splitAndCore___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_splitAndCore___closed__0;
static lean_once_cell_t l_Lean_MVarId_splitAndCore___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_splitAndCore___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_exfalso___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_exfalso___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_exfalso___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_exfalso___lam__0___closed__1;
static lean_once_cell_t l_Lean_MVarId_exfalso___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_exfalso___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_exfalso___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_exfalso___lam__0___closed__3;
static lean_once_cell_t l_Lean_MVarId_exfalso___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_exfalso___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_exfalso___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_exfalso___closed__0;
static lean_once_cell_t l_Lean_MVarId_exfalso___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_exfalso___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__1;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__3;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__4;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__5;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__6;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__7;
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_iffOfEq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_iffOfEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_iffOfEq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___closed__0;
static lean_once_cell_t l_Lean_MVarId_iffOfEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___closed__1;
static lean_once_cell_t l_Lean_MVarId_iffOfEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___closed__2;
static lean_once_cell_t l_Lean_MVarId_iffOfEq___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_propext___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_propext___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_propext___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_propext___lam__0___closed__1;
static lean_once_cell_t l_Lean_MVarId_propext___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_propext___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_propext___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_propext___lam__0___closed__3;
static lean_once_cell_t l_Lean_MVarId_propext___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_propext___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1;
static lean_once_cell_t l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3;
static lean_once_cell_t l_Lean_MVarId_proofIrrelHeq___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_proofIrrelHeq___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_proofIrrelHeq___closed__0;
static lean_once_cell_t l_Lean_MVarId_proofIrrelHeq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_proofIrrelHeq___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_subsingletonElim___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_subsingletonElim___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_subsingletonElim___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_subsingletonElim___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_subsingletonElim___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_subsingletonElim___closed__0;
static lean_once_cell_t l_Lean_MVarId_subsingletonElim___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_subsingletonElim___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, uint8_t v_whnfType_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___f_28_; lean_object* v___x_29_; 
v___f_28_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_28_, 0, v_k_20_);
v___x_29_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_19_, v___f_28_, v_cleanupAnnotations_21_, v_whnfType_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
if (lean_obj_tag(v___x_29_) == 0)
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_37_; 
v_a_30_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_37_ == 0)
{
v___x_32_ = v___x_29_;
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_29_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_30_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
v_a_38_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_29_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_29_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
v___x_43_ = v_reuseFailAlloc_44_;
goto v_reusejp_42_;
}
v_reusejp_42_:
{
return v___x_43_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___boxed(lean_object* v_type_46_, lean_object* v_k_47_, lean_object* v_cleanupAnnotations_48_, lean_object* v_whnfType_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; uint8_t v_whnfType_boxed_56_; lean_object* v_res_57_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_48_);
v_whnfType_boxed_56_ = lean_unbox(v_whnfType_49_);
v_res_57_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_type_46_, v_k_47_, v_cleanupAnnotations_boxed_55_, v_whnfType_boxed_56_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(lean_object* v_00_u03b1_58_, lean_object* v_type_59_, lean_object* v_k_60_, uint8_t v_cleanupAnnotations_61_, uint8_t v_whnfType_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_type_59_, v_k_60_, v_cleanupAnnotations_61_, v_whnfType_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___boxed(lean_object* v_00_u03b1_69_, lean_object* v_type_70_, lean_object* v_k_71_, lean_object* v_cleanupAnnotations_72_, lean_object* v_whnfType_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_79_; uint8_t v_whnfType_boxed_80_; lean_object* v_res_81_; 
v_cleanupAnnotations_boxed_79_ = lean_unbox(v_cleanupAnnotations_72_);
v_whnfType_boxed_80_ = lean_unbox(v_whnfType_73_);
v_res_81_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(v_00_u03b1_69_, v_type_70_, v_k_71_, v_cleanupAnnotations_boxed_79_, v_whnfType_boxed_80_, v___y_74_, v___y_75_, v___y_76_, v___y_77_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0(lean_object* v_xs_82_, lean_object* v_body_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_89_ = lean_array_get_size(v_xs_82_);
v___x_90_ = l_Lean_Expr_getAppFn(v_body_83_);
v___x_91_ = l_Lean_Expr_isMVar(v___x_90_);
lean_dec_ref(v___x_90_);
v___x_92_ = lean_box(v___x_91_);
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_89_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed(lean_object* v_xs_95_, lean_object* v_body_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Meta_getExpectedNumArgsAux___lam__0(v_xs_95_, v_body_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec_ref(v_body_96_);
lean_dec_ref(v_xs_95_);
return v_res_102_;
}
}
static lean_object* _init_l_Lean_Meta_getExpectedNumArgsAux___closed__0(void){
_start:
{
lean_object* v___f_103_; 
v___f_103_ = lean_alloc_closure((void*)(l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed), 7, 0);
return v___f_103_;
}
}
static uint64_t _init_l_Lean_Meta_getExpectedNumArgsAux___closed__1(void){
_start:
{
uint8_t v___x_104_; uint64_t v___x_105_; 
v___x_104_ = 1;
v___x_105_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_104_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux(lean_object* v_e_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_){
_start:
{
lean_object* v___x_112_; uint8_t v_foApprox_113_; uint8_t v_ctxApprox_114_; uint8_t v_quasiPatternApprox_115_; uint8_t v_constApprox_116_; uint8_t v_isDefEqStuckEx_117_; uint8_t v_unificationHints_118_; uint8_t v_proofIrrelevance_119_; uint8_t v_assignSyntheticOpaque_120_; uint8_t v_offsetCnstrs_121_; uint8_t v_etaStruct_122_; uint8_t v_univApprox_123_; uint8_t v_iota_124_; uint8_t v_beta_125_; uint8_t v_proj_126_; uint8_t v_zeta_127_; uint8_t v_zetaDelta_128_; uint8_t v_zetaUnused_129_; uint8_t v_zetaHave_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_159_; 
v___x_112_ = l_Lean_Meta_Context_config(v_a_107_);
v_foApprox_113_ = lean_ctor_get_uint8(v___x_112_, 0);
v_ctxApprox_114_ = lean_ctor_get_uint8(v___x_112_, 1);
v_quasiPatternApprox_115_ = lean_ctor_get_uint8(v___x_112_, 2);
v_constApprox_116_ = lean_ctor_get_uint8(v___x_112_, 3);
v_isDefEqStuckEx_117_ = lean_ctor_get_uint8(v___x_112_, 4);
v_unificationHints_118_ = lean_ctor_get_uint8(v___x_112_, 5);
v_proofIrrelevance_119_ = lean_ctor_get_uint8(v___x_112_, 6);
v_assignSyntheticOpaque_120_ = lean_ctor_get_uint8(v___x_112_, 7);
v_offsetCnstrs_121_ = lean_ctor_get_uint8(v___x_112_, 8);
v_etaStruct_122_ = lean_ctor_get_uint8(v___x_112_, 10);
v_univApprox_123_ = lean_ctor_get_uint8(v___x_112_, 11);
v_iota_124_ = lean_ctor_get_uint8(v___x_112_, 12);
v_beta_125_ = lean_ctor_get_uint8(v___x_112_, 13);
v_proj_126_ = lean_ctor_get_uint8(v___x_112_, 14);
v_zeta_127_ = lean_ctor_get_uint8(v___x_112_, 15);
v_zetaDelta_128_ = lean_ctor_get_uint8(v___x_112_, 16);
v_zetaUnused_129_ = lean_ctor_get_uint8(v___x_112_, 17);
v_zetaHave_130_ = lean_ctor_get_uint8(v___x_112_, 18);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_112_);
if (v_isSharedCheck_159_ == 0)
{
v___x_132_ = v___x_112_;
v_isShared_133_ = v_isSharedCheck_159_;
goto v_resetjp_131_;
}
else
{
lean_dec(v___x_112_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_159_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
uint8_t v_trackZetaDelta_134_; lean_object* v_zetaDeltaSet_135_; lean_object* v_lctx_136_; lean_object* v_localInstances_137_; lean_object* v_defEqCtx_x3f_138_; lean_object* v_synthPendingDepth_139_; lean_object* v_canUnfold_x3f_140_; uint8_t v_univApprox_141_; uint8_t v_inTypeClassResolution_142_; uint8_t v_cacheInferType_143_; uint8_t v___x_144_; lean_object* v_config_146_; 
v_trackZetaDelta_134_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7);
v_zetaDeltaSet_135_ = lean_ctor_get(v_a_107_, 1);
v_lctx_136_ = lean_ctor_get(v_a_107_, 2);
v_localInstances_137_ = lean_ctor_get(v_a_107_, 3);
v_defEqCtx_x3f_138_ = lean_ctor_get(v_a_107_, 4);
v_synthPendingDepth_139_ = lean_ctor_get(v_a_107_, 5);
v_canUnfold_x3f_140_ = lean_ctor_get(v_a_107_, 6);
v_univApprox_141_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_142_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7 + 2);
v_cacheInferType_143_ = lean_ctor_get_uint8(v_a_107_, sizeof(void*)*7 + 3);
v___x_144_ = 1;
if (v_isShared_133_ == 0)
{
v_config_146_ = v___x_132_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 0, v_foApprox_113_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 1, v_ctxApprox_114_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 2, v_quasiPatternApprox_115_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 3, v_constApprox_116_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 4, v_isDefEqStuckEx_117_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 5, v_unificationHints_118_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 6, v_proofIrrelevance_119_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 7, v_assignSyntheticOpaque_120_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 8, v_offsetCnstrs_121_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 10, v_etaStruct_122_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 11, v_univApprox_123_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 12, v_iota_124_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 13, v_beta_125_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 14, v_proj_126_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 15, v_zeta_127_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 16, v_zetaDelta_128_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 17, v_zetaUnused_129_);
lean_ctor_set_uint8(v_reuseFailAlloc_158_, 18, v_zetaHave_130_);
v_config_146_ = v_reuseFailAlloc_158_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
uint64_t v___x_147_; uint64_t v___x_148_; uint64_t v___x_149_; lean_object* v___f_150_; uint8_t v___x_151_; uint64_t v___x_152_; uint64_t v___x_153_; uint64_t v_key_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
lean_ctor_set_uint8(v_config_146_, 9, v___x_144_);
v___x_147_ = l_Lean_Meta_Context_configKey(v_a_107_);
v___x_148_ = 2ULL;
v___x_149_ = lean_uint64_shift_right(v___x_147_, v___x_148_);
v___f_150_ = lean_obj_once(&l_Lean_Meta_getExpectedNumArgsAux___closed__0, &l_Lean_Meta_getExpectedNumArgsAux___closed__0_once, _init_l_Lean_Meta_getExpectedNumArgsAux___closed__0);
v___x_151_ = 0;
v___x_152_ = lean_uint64_shift_left(v___x_149_, v___x_148_);
v___x_153_ = lean_uint64_once(&l_Lean_Meta_getExpectedNumArgsAux___closed__1, &l_Lean_Meta_getExpectedNumArgsAux___closed__1_once, _init_l_Lean_Meta_getExpectedNumArgsAux___closed__1);
v_key_154_ = lean_uint64_lor(v___x_152_, v___x_153_);
v___x_155_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_155_, 0, v_config_146_);
lean_ctor_set_uint64(v___x_155_, sizeof(void*)*1, v_key_154_);
lean_inc(v_canUnfold_x3f_140_);
lean_inc(v_synthPendingDepth_139_);
lean_inc(v_defEqCtx_x3f_138_);
lean_inc_ref(v_localInstances_137_);
lean_inc_ref(v_lctx_136_);
lean_inc(v_zetaDeltaSet_135_);
v___x_156_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_156_, 0, v___x_155_);
lean_ctor_set(v___x_156_, 1, v_zetaDeltaSet_135_);
lean_ctor_set(v___x_156_, 2, v_lctx_136_);
lean_ctor_set(v___x_156_, 3, v_localInstances_137_);
lean_ctor_set(v___x_156_, 4, v_defEqCtx_x3f_138_);
lean_ctor_set(v___x_156_, 5, v_synthPendingDepth_139_);
lean_ctor_set(v___x_156_, 6, v_canUnfold_x3f_140_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*7, v_trackZetaDelta_134_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*7 + 1, v_univApprox_141_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*7 + 2, v_inTypeClassResolution_142_);
lean_ctor_set_uint8(v___x_156_, sizeof(void*)*7 + 3, v_cacheInferType_143_);
v___x_157_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_e_106_, v___f_150_, v___x_151_, v___x_151_, v___x_156_, v_a_108_, v_a_109_, v_a_110_);
lean_dec_ref(v___x_156_);
return v___x_157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___boxed(lean_object* v_e_160_, lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_Meta_getExpectedNumArgsAux(v_e_160_, v_a_161_, v_a_162_, v_a_163_, v_a_164_);
lean_dec(v_a_164_);
lean_dec_ref(v_a_163_);
lean_dec(v_a_162_);
lean_dec_ref(v_a_161_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs(lean_object* v_e_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___x_173_; 
v___x_173_ = l_Lean_Meta_getExpectedNumArgsAux(v_e_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_);
if (lean_obj_tag(v___x_173_) == 0)
{
lean_object* v_a_174_; lean_object* v___x_176_; uint8_t v_isShared_177_; uint8_t v_isSharedCheck_182_; 
v_a_174_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_182_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_182_ == 0)
{
v___x_176_ = v___x_173_;
v_isShared_177_ = v_isSharedCheck_182_;
goto v_resetjp_175_;
}
else
{
lean_inc(v_a_174_);
lean_dec(v___x_173_);
v___x_176_ = lean_box(0);
v_isShared_177_ = v_isSharedCheck_182_;
goto v_resetjp_175_;
}
v_resetjp_175_:
{
lean_object* v_fst_178_; lean_object* v___x_180_; 
v_fst_178_ = lean_ctor_get(v_a_174_, 0);
lean_inc(v_fst_178_);
lean_dec(v_a_174_);
if (v_isShared_177_ == 0)
{
lean_ctor_set(v___x_176_, 0, v_fst_178_);
v___x_180_ = v___x_176_;
goto v_reusejp_179_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_fst_178_);
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
v_a_183_ = lean_ctor_get(v___x_173_, 0);
v_isSharedCheck_190_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_190_ == 0)
{
v___x_185_ = v___x_173_;
v_isShared_186_ = v_isSharedCheck_190_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_173_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs___boxed(lean_object* v_e_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_Meta_getExpectedNumArgs(v_e_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_);
lean_dec(v_a_195_);
lean_dec_ref(v_a_194_);
lean_dec(v_a_193_);
lean_dec_ref(v_a_192_);
return v_res_197_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_198_; 
v___x_198_ = lean_mk_string_unchecked("\nwith the goal", 14, 14);
return v___x_198_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0);
v___x_200_ = l_Lean_stringToMessageData(v___x_199_);
return v___x_200_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_201_; 
v___x_201_ = lean_mk_string_unchecked("could not unify the ", 20, 20);
return v___x_201_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_202_; lean_object* v___x_203_; 
v___x_202_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2);
v___x_203_ = l_Lean_stringToMessageData(v___x_202_);
return v___x_203_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_204_; 
v___x_204_ = lean_mk_string_unchecked(" of ", 4, 4);
return v___x_204_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_205_; lean_object* v___x_206_; 
v___x_205_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4);
v___x_206_ = l_Lean_stringToMessageData(v___x_205_);
return v___x_206_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = lean_mk_string_unchecked("the term", 8, 8);
return v___x_207_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6);
v___x_209_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_209_, 0, v___x_208_);
return v___x_209_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7);
v___x_211_ = l_Lean_MessageData_ofFormat(v___x_210_);
return v___x_211_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9(void){
_start:
{
lean_object* v___x_212_; 
v___x_212_ = lean_mk_string_unchecked("type", 4, 4);
return v___x_212_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10(void){
_start:
{
lean_object* v___x_213_; 
v___x_213_ = lean_mk_string_unchecked("conclusion", 10, 10);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(lean_object* v___y_214_, lean_object* v_targetType_215_, lean_object* v___y_216_, lean_object* v_term_x3f_217_, lean_object* v_conclusionType_x3f_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = l_Lean_Meta_addPPExplicitToExposeDiff(v___y_214_, v_targetType_215_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
if (lean_obj_tag(v___x_224_) == 0)
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_266_; 
v_a_225_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_266_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_266_ == 0)
{
v___x_227_ = v___x_224_;
v_isShared_228_ = v_isSharedCheck_266_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_224_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_266_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v_fst_229_; lean_object* v_snd_230_; lean_object* v___x_232_; uint8_t v_isShared_233_; uint8_t v_isSharedCheck_265_; 
v_fst_229_ = lean_ctor_get(v_a_225_, 0);
v_snd_230_ = lean_ctor_get(v_a_225_, 1);
v_isSharedCheck_265_ = !lean_is_exclusive(v_a_225_);
if (v_isSharedCheck_265_ == 0)
{
v___x_232_ = v_a_225_;
v_isShared_233_ = v_isSharedCheck_265_;
goto v_resetjp_231_;
}
else
{
lean_inc(v_snd_230_);
lean_inc(v_fst_229_);
lean_dec(v_a_225_);
v___x_232_ = lean_box(0);
v_isShared_233_ = v_isSharedCheck_265_;
goto v_resetjp_231_;
}
v_resetjp_231_:
{
lean_object* v___y_235_; lean_object* v___y_236_; lean_object* v___y_237_; lean_object* v___y_253_; 
if (lean_obj_tag(v_conclusionType_x3f_218_) == 0)
{
lean_object* v___x_263_; 
v___x_263_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9);
v___y_253_ = v___x_263_;
goto v___jp_252_;
}
else
{
lean_object* v___x_264_; 
v___x_264_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10);
v___y_253_ = v___x_264_;
goto v___jp_252_;
}
v___jp_234_:
{
lean_object* v___x_239_; 
if (v_isShared_233_ == 0)
{
lean_ctor_set_tag(v___x_232_, 7);
lean_ctor_set(v___x_232_, 1, v___y_237_);
lean_ctor_set(v___x_232_, 0, v___y_236_);
v___x_239_ = v___x_232_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_251_; 
v_reuseFailAlloc_251_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_251_, 0, v___y_236_);
lean_ctor_set(v_reuseFailAlloc_251_, 1, v___y_237_);
v___x_239_ = v_reuseFailAlloc_251_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_240_ = l_Lean_indentExpr(v_fst_229_);
v___x_241_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_239_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1);
v___x_243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_243_, 0, v___x_241_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = l_Lean_indentExpr(v_snd_230_);
v___x_245_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_245_, 0, v___x_243_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_246_, 0, v___x_245_);
lean_ctor_set(v___x_246_, 1, v___y_216_);
v___x_247_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_247_, 0, v___x_246_);
lean_ctor_set(v___x_247_, 1, v___y_235_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 0, v___x_247_);
v___x_249_ = v___x_227_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
v___jp_252_:
{
lean_object* v___x_254_; 
lean_inc(v_snd_230_);
lean_inc(v_fst_229_);
v___x_254_ = l_Lean_Meta_mkUnfoldAxiomsNote(v_fst_229_, v_snd_230_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
if (lean_obj_tag(v___x_254_) == 0)
{
lean_object* v_a_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; 
v_a_255_ = lean_ctor_get(v___x_254_, 0);
lean_inc(v_a_255_);
lean_dec_ref(v___x_254_);
v___x_256_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3);
lean_inc_ref(v___y_253_);
v___x_257_ = l_Lean_stringToMessageData(v___y_253_);
v___x_258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_256_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5);
v___x_260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_260_, 0, v___x_258_);
lean_ctor_set(v___x_260_, 1, v___x_259_);
if (lean_obj_tag(v_term_x3f_217_) == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8);
v___y_235_ = v_a_255_;
v___y_236_ = v___x_260_;
v___y_237_ = v___x_261_;
goto v___jp_234_;
}
else
{
lean_object* v_val_262_; 
v_val_262_ = lean_ctor_get(v_term_x3f_217_, 0);
lean_inc(v_val_262_);
lean_dec_ref(v_term_x3f_217_);
v___y_235_ = v_a_255_;
v___y_236_ = v___x_260_;
v___y_237_ = v_val_262_;
goto v___jp_234_;
}
}
else
{
lean_del_object(v___x_232_);
lean_dec(v_snd_230_);
lean_dec(v_fst_229_);
lean_del_object(v___x_227_);
lean_dec(v_term_x3f_217_);
lean_dec_ref(v___y_216_);
return v___x_254_;
}
}
}
}
}
else
{
lean_object* v_a_267_; lean_object* v___x_269_; uint8_t v_isShared_270_; uint8_t v_isSharedCheck_274_; 
lean_dec(v_term_x3f_217_);
lean_dec_ref(v___y_216_);
v_a_267_ = lean_ctor_get(v___x_224_, 0);
v_isSharedCheck_274_ = !lean_is_exclusive(v___x_224_);
if (v_isSharedCheck_274_ == 0)
{
v___x_269_ = v___x_224_;
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
else
{
lean_inc(v_a_267_);
lean_dec(v___x_224_);
v___x_269_ = lean_box(0);
v_isShared_270_ = v_isSharedCheck_274_;
goto v_resetjp_268_;
}
v_resetjp_268_:
{
lean_object* v___x_272_; 
if (v_isShared_270_ == 0)
{
v___x_272_ = v___x_269_;
goto v_reusejp_271_;
}
else
{
lean_object* v_reuseFailAlloc_273_; 
v_reuseFailAlloc_273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_273_, 0, v_a_267_);
v___x_272_ = v_reuseFailAlloc_273_;
goto v_reusejp_271_;
}
v_reusejp_271_:
{
return v___x_272_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed(lean_object* v___y_275_, lean_object* v_targetType_276_, lean_object* v___y_277_, lean_object* v_term_x3f_278_, lean_object* v_conclusionType_x3f_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(v___y_275_, v_targetType_276_, v___y_277_, v_term_x3f_278_, v_conclusionType_x3f_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
lean_dec(v_conclusionType_x3f_279_);
return v_res_285_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0(void){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = lean_mk_string_unchecked("apply", 5, 5);
return v___x_286_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; 
v___x_287_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0);
v___x_288_ = l_Lean_Name_mkStr1(v___x_287_);
return v___x_288_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2(void){
_start:
{
lean_object* v___x_289_; 
v___x_289_ = lean_mk_string_unchecked(" is", 3, 3);
return v___x_289_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; 
v___x_290_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2);
v___x_291_ = l_Lean_stringToMessageData(v___x_290_);
return v___x_291_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4(void){
_start:
{
lean_object* v___x_292_; 
v___x_292_ = lean_mk_string_unchecked("", 0, 0);
return v___x_292_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4);
v___x_294_ = l_Lean_stringToMessageData(v___x_293_);
return v___x_294_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6(void){
_start:
{
lean_object* v___x_295_; 
v___x_295_ = lean_mk_string_unchecked("The full type of ", 17, 17);
return v___x_295_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6);
v___x_297_ = l_Lean_stringToMessageData(v___x_296_);
return v___x_297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(lean_object* v_mvarId_298_, lean_object* v_eType_299_, lean_object* v_conclusionType_x3f_300_, lean_object* v_targetType_301_, lean_object* v_term_x3f_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v___x_308_; lean_object* v___y_310_; lean_object* v___y_311_; lean_object* v___y_321_; lean_object* v___y_322_; lean_object* v___y_323_; lean_object* v___y_331_; 
v___x_308_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1);
if (lean_obj_tag(v_conclusionType_x3f_300_) == 0)
{
lean_inc_ref(v_eType_299_);
v___y_331_ = v_eType_299_;
goto v___jp_330_;
}
else
{
lean_object* v_val_336_; 
v_val_336_ = lean_ctor_get(v_conclusionType_x3f_300_, 0);
lean_inc(v_val_336_);
v___y_331_ = v_val_336_;
goto v___jp_330_;
}
v___jp_309_:
{
lean_object* v___f_312_; lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
lean_inc_ref(v_targetType_301_);
v___f_312_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed), 10, 5);
lean_closure_set(v___f_312_, 0, v___y_310_);
lean_closure_set(v___f_312_, 1, v_targetType_301_);
lean_closure_set(v___f_312_, 2, v___y_311_);
lean_closure_set(v___f_312_, 3, v_term_x3f_302_);
lean_closure_set(v___f_312_, 4, v_conclusionType_x3f_300_);
v___x_313_ = lean_unsigned_to_nat(2u);
v___x_314_ = lean_mk_empty_array_with_capacity(v___x_313_);
v___x_315_ = lean_array_push(v___x_314_, v_eType_299_);
v___x_316_ = lean_array_push(v___x_315_, v_targetType_301_);
v___x_317_ = l_Lean_MessageData_ofLazyM(v___f_312_, v___x_316_);
v___x_318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_318_, 0, v___x_317_);
v___x_319_ = l_Lean_Meta_throwTacticEx___redArg(v___x_308_, v_mvarId_298_, v___x_318_, v_a_303_, v_a_304_, v_a_305_, v_a_306_);
return v___x_319_;
}
v___jp_320_:
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
lean_inc_ref(v___y_322_);
v___x_324_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_324_, 0, v___y_322_);
lean_ctor_set(v___x_324_, 1, v___y_323_);
v___x_325_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3);
v___x_326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_326_, 0, v___x_324_);
lean_ctor_set(v___x_326_, 1, v___x_325_);
lean_inc_ref(v_eType_299_);
v___x_327_ = l_Lean_indentExpr(v_eType_299_);
v___x_328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_328_, 0, v___x_326_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
v___x_329_ = l_Lean_MessageData_note(v___x_328_);
v___y_310_ = v___y_321_;
v___y_311_ = v___x_329_;
goto v___jp_309_;
}
v___jp_330_:
{
if (lean_obj_tag(v_conclusionType_x3f_300_) == 0)
{
lean_object* v___x_332_; 
v___x_332_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5);
v___y_310_ = v___y_331_;
v___y_311_ = v___x_332_;
goto v___jp_309_;
}
else
{
lean_object* v___x_333_; 
v___x_333_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7);
if (lean_obj_tag(v_term_x3f_302_) == 0)
{
lean_object* v___x_334_; 
v___x_334_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8);
v___y_321_ = v___y_331_;
v___y_322_ = v___x_333_;
v___y_323_ = v___x_334_;
goto v___jp_320_;
}
else
{
lean_object* v_val_335_; 
v_val_335_ = lean_ctor_get(v_term_x3f_302_, 0);
lean_inc(v_val_335_);
v___y_321_ = v___y_331_;
v___y_322_ = v___x_333_;
v___y_323_ = v_val_335_;
goto v___jp_320_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___boxed(lean_object* v_mvarId_337_, lean_object* v_eType_338_, lean_object* v_conclusionType_x3f_339_, lean_object* v_targetType_340_, lean_object* v_term_x3f_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_){
_start:
{
lean_object* v_res_347_; 
v_res_347_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_337_, v_eType_338_, v_conclusionType_x3f_339_, v_targetType_340_, v_term_x3f_341_, v_a_342_, v_a_343_, v_a_344_, v_a_345_);
lean_dec(v_a_345_);
lean_dec_ref(v_a_344_);
lean_dec(v_a_343_);
lean_dec_ref(v_a_342_);
return v_res_347_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(lean_object* v_00_u03b1_348_, lean_object* v_mvarId_349_, lean_object* v_eType_350_, lean_object* v_conclusionType_x3f_351_, lean_object* v_targetType_352_, lean_object* v_term_x3f_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_349_, v_eType_350_, v_conclusionType_x3f_351_, v_targetType_352_, v_term_x3f_353_, v_a_354_, v_a_355_, v_a_356_, v_a_357_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___boxed(lean_object* v_00_u03b1_360_, lean_object* v_mvarId_361_, lean_object* v_eType_362_, lean_object* v_conclusionType_x3f_363_, lean_object* v_targetType_364_, lean_object* v_term_x3f_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_){
_start:
{
lean_object* v_res_371_; 
v_res_371_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(v_00_u03b1_360_, v_mvarId_361_, v_eType_362_, v_conclusionType_x3f_363_, v_targetType_364_, v_term_x3f_365_, v_a_366_, v_a_367_, v_a_368_, v_a_369_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
lean_dec(v_a_367_);
lean_dec_ref(v_a_366_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(lean_object* v_a_372_, lean_object* v_snd_373_, lean_object* v_fst_374_, lean_object* v_____r_375_, uint8_t v_progressAfterEx_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_382_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_382_, 0, v_a_372_);
v___x_383_ = lean_box(v_progressAfterEx_376_);
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v_snd_373_);
v___x_385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_385_, 0, v_fst_374_);
lean_ctor_set(v___x_385_, 1, v___x_384_);
v___x_386_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_382_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0___boxed(lean_object* v_a_388_, lean_object* v_snd_389_, lean_object* v_fst_390_, lean_object* v_____r_391_, lean_object* v_progressAfterEx_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
uint8_t v_progressAfterEx_boxed_398_; lean_object* v_res_399_; 
v_progressAfterEx_boxed_398_ = lean_unbox(v_progressAfterEx_392_);
v_res_399_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_388_, v_snd_389_, v_fst_390_, v_____r_391_, v_progressAfterEx_boxed_398_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
return v_res_399_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0(void){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = lean_mk_string_unchecked("failed to assign synthesized instance", 37, 37);
return v___x_400_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1(void){
_start:
{
lean_object* v___x_401_; lean_object* v___x_402_; 
v___x_401_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0);
v___x_402_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_402_, 0, v___x_401_);
return v___x_402_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2(void){
_start:
{
lean_object* v___x_403_; lean_object* v___x_404_; 
v___x_403_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1);
v___x_404_ = l_Lean_MessageData_ofFormat(v___x_403_);
return v___x_404_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3(void){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_405_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2);
v___x_406_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_406_, 0, v___x_405_);
return v___x_406_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(uint8_t v_allowSynthFailures_407_, lean_object* v_tacticName_408_, lean_object* v_mvarId_409_, lean_object* v_as_410_, size_t v_sz_411_, size_t v_i_412_, lean_object* v_b_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_){
_start:
{
lean_object* v_a_420_; lean_object* v_fst_425_; lean_object* v_fst_426_; lean_object* v_snd_427_; uint8_t v___x_430_; 
v___x_430_ = lean_usize_dec_lt(v_i_412_, v_sz_411_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; 
lean_dec(v_mvarId_409_);
lean_dec(v_tacticName_408_);
v___x_431_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_431_, 0, v_b_413_);
return v___x_431_;
}
else
{
lean_object* v_a_432_; lean_object* v___x_433_; 
v_a_432_ = lean_array_uget_borrowed(v_as_410_, v_i_412_);
lean_inc(v___y_417_);
lean_inc_ref(v___y_416_);
lean_inc(v___y_415_);
lean_inc_ref(v___y_414_);
lean_inc(v_a_432_);
v___x_433_ = lean_infer_type(v_a_432_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
if (lean_obj_tag(v___x_433_) == 0)
{
lean_object* v_snd_434_; lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_528_; 
v_snd_434_ = lean_ctor_get(v_b_413_, 1);
lean_inc(v_snd_434_);
v_a_435_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_528_ == 0)
{
v___x_437_ = v___x_433_;
v_isShared_438_ = v_isSharedCheck_528_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_dec(v___x_433_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_528_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v_fst_439_; lean_object* v_fst_440_; lean_object* v_snd_441_; lean_object* v___y_443_; uint8_t v___y_444_; lean_object* v_a_451_; lean_object* v___y_455_; lean_object* v___x_516_; lean_object* v___x_517_; 
v_fst_439_ = lean_ctor_get(v_b_413_, 0);
lean_inc(v_fst_439_);
lean_dec_ref(v_b_413_);
v_fst_440_ = lean_ctor_get(v_snd_434_, 0);
lean_inc(v_fst_440_);
v_snd_441_ = lean_ctor_get(v_snd_434_, 1);
lean_inc(v_snd_441_);
lean_dec(v_snd_434_);
v___x_516_ = lean_box(0);
v___x_517_ = l_Lean_Meta_synthInstance(v_a_435_, v___x_516_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
if (lean_obj_tag(v___x_517_) == 0)
{
lean_object* v_a_518_; lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; 
v_a_518_ = lean_ctor_get(v___x_517_, 0);
lean_inc(v_a_518_);
lean_dec_ref(v___x_517_);
v___x_519_ = lean_array_get_size(v_snd_441_);
v___x_520_ = lean_unsigned_to_nat(0u);
v___x_521_ = lean_nat_dec_eq(v___x_519_, v___x_520_);
if (v___x_521_ == 0)
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = lean_box(0);
lean_inc(v_snd_441_);
v___x_523_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_518_, v_snd_441_, v_fst_439_, v___x_522_, v___x_430_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
v___y_455_ = v___x_523_;
goto v___jp_454_;
}
else
{
lean_object* v___x_524_; uint8_t v___x_525_; lean_object* v___x_526_; 
v___x_524_ = lean_box(0);
v___x_525_ = lean_unbox(v_fst_440_);
lean_inc(v_snd_441_);
v___x_526_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_518_, v_snd_441_, v_fst_439_, v___x_524_, v___x_525_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
v___y_455_ = v___x_526_;
goto v___jp_454_;
}
}
else
{
lean_object* v_a_527_; 
lean_dec(v_fst_439_);
v_a_527_ = lean_ctor_get(v___x_517_, 0);
lean_inc(v_a_527_);
lean_dec_ref(v___x_517_);
v_a_451_ = v_a_527_;
goto v___jp_450_;
}
v___jp_442_:
{
if (v___y_444_ == 0)
{
lean_object* v___x_445_; lean_object* v___x_446_; 
lean_del_object(v___x_437_);
v___x_445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_445_, 0, v___y_443_);
lean_inc(v_a_432_);
v___x_446_ = lean_array_push(v_snd_441_, v_a_432_);
v_fst_425_ = v___x_445_;
v_fst_426_ = v_fst_440_;
v_snd_427_ = v___x_446_;
goto v___jp_424_;
}
else
{
lean_object* v___x_448_; 
lean_dec(v_snd_441_);
lean_dec(v_fst_440_);
lean_dec(v_mvarId_409_);
lean_dec(v_tacticName_408_);
if (v_isShared_438_ == 0)
{
lean_ctor_set_tag(v___x_437_, 1);
lean_ctor_set(v___x_437_, 0, v___y_443_);
v___x_448_ = v___x_437_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v___y_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
v___jp_450_:
{
uint8_t v___x_452_; 
v___x_452_ = l_Lean_Exception_isInterrupt(v_a_451_);
if (v___x_452_ == 0)
{
uint8_t v___x_453_; 
lean_inc_ref(v_a_451_);
v___x_453_ = l_Lean_Exception_isRuntime(v_a_451_);
v___y_443_ = v_a_451_;
v___y_444_ = v___x_453_;
goto v___jp_442_;
}
else
{
v___y_443_ = v_a_451_;
v___y_444_ = v___x_452_;
goto v___jp_442_;
}
}
v___jp_454_:
{
if (lean_obj_tag(v___y_455_) == 0)
{
lean_object* v_a_456_; lean_object* v_snd_457_; lean_object* v_snd_458_; lean_object* v_fst_459_; 
lean_dec(v_snd_441_);
lean_dec(v_fst_440_);
lean_del_object(v___x_437_);
v_a_456_ = lean_ctor_get(v___y_455_, 0);
lean_inc(v_a_456_);
lean_dec_ref(v___y_455_);
v_snd_457_ = lean_ctor_get(v_a_456_, 1);
lean_inc(v_snd_457_);
v_snd_458_ = lean_ctor_get(v_snd_457_, 1);
lean_inc(v_snd_458_);
v_fst_459_ = lean_ctor_get(v_a_456_, 0);
lean_inc(v_fst_459_);
lean_dec(v_a_456_);
if (lean_obj_tag(v_fst_459_) == 1)
{
lean_object* v_fst_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_510_; 
v_fst_460_ = lean_ctor_get(v_snd_457_, 0);
v_isSharedCheck_510_ = !lean_is_exclusive(v_snd_457_);
if (v_isSharedCheck_510_ == 0)
{
lean_object* v_unused_511_; 
v_unused_511_ = lean_ctor_get(v_snd_457_, 1);
lean_dec(v_unused_511_);
v___x_462_ = v_snd_457_;
v_isShared_463_ = v_isSharedCheck_510_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_fst_460_);
lean_dec(v_snd_457_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_510_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v_fst_464_; lean_object* v_snd_465_; lean_object* v___x_467_; uint8_t v_isShared_468_; uint8_t v_isSharedCheck_509_; 
v_fst_464_ = lean_ctor_get(v_snd_458_, 0);
v_snd_465_ = lean_ctor_get(v_snd_458_, 1);
v_isSharedCheck_509_ = !lean_is_exclusive(v_snd_458_);
if (v_isSharedCheck_509_ == 0)
{
v___x_467_ = v_snd_458_;
v_isShared_468_ = v_isSharedCheck_509_;
goto v_resetjp_466_;
}
else
{
lean_inc(v_snd_465_);
lean_inc(v_fst_464_);
lean_dec(v_snd_458_);
v___x_467_ = lean_box(0);
v_isShared_468_ = v_isSharedCheck_509_;
goto v_resetjp_466_;
}
v_resetjp_466_:
{
lean_object* v_val_469_; lean_object* v___x_470_; 
v_val_469_ = lean_ctor_get(v_fst_459_, 0);
lean_inc(v_val_469_);
lean_dec_ref(v_fst_459_);
lean_inc(v_a_432_);
v___x_470_ = l_Lean_Meta_isExprDefEq(v_a_432_, v_val_469_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
if (lean_obj_tag(v___x_470_) == 0)
{
lean_object* v_a_471_; uint8_t v___x_472_; 
v_a_471_ = lean_ctor_get(v___x_470_, 0);
lean_inc(v_a_471_);
lean_dec_ref(v___x_470_);
v___x_472_ = lean_unbox(v_a_471_);
lean_dec(v_a_471_);
if (v___x_472_ == 0)
{
if (v_allowSynthFailures_407_ == 0)
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3);
lean_inc(v_mvarId_409_);
lean_inc(v_tacticName_408_);
v___x_474_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_408_, v_mvarId_409_, v___x_473_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v___x_476_; 
lean_dec_ref(v___x_474_);
if (v_isShared_468_ == 0)
{
v___x_476_ = v___x_467_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_fst_464_);
lean_ctor_set(v_reuseFailAlloc_480_, 1, v_snd_465_);
v___x_476_ = v_reuseFailAlloc_480_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
lean_object* v___x_478_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 1, v___x_476_);
v___x_478_ = v___x_462_;
goto v_reusejp_477_;
}
else
{
lean_object* v_reuseFailAlloc_479_; 
v_reuseFailAlloc_479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_479_, 0, v_fst_460_);
lean_ctor_set(v_reuseFailAlloc_479_, 1, v___x_476_);
v___x_478_ = v_reuseFailAlloc_479_;
goto v_reusejp_477_;
}
v_reusejp_477_:
{
v_a_420_ = v___x_478_;
goto v___jp_419_;
}
}
}
else
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_488_; 
lean_del_object(v___x_467_);
lean_dec(v_snd_465_);
lean_dec(v_fst_464_);
lean_del_object(v___x_462_);
lean_dec(v_fst_460_);
lean_dec(v_mvarId_409_);
lean_dec(v_tacticName_408_);
v_a_481_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_488_ == 0)
{
v___x_483_ = v___x_474_;
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_474_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_488_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v___x_486_; 
if (v_isShared_484_ == 0)
{
v___x_486_ = v___x_483_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_481_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
}
else
{
lean_object* v___x_490_; 
if (v_isShared_468_ == 0)
{
v___x_490_ = v___x_467_;
goto v_reusejp_489_;
}
else
{
lean_object* v_reuseFailAlloc_494_; 
v_reuseFailAlloc_494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_494_, 0, v_fst_464_);
lean_ctor_set(v_reuseFailAlloc_494_, 1, v_snd_465_);
v___x_490_ = v_reuseFailAlloc_494_;
goto v_reusejp_489_;
}
v_reusejp_489_:
{
lean_object* v___x_492_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 1, v___x_490_);
v___x_492_ = v___x_462_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_fst_460_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v___x_490_);
v___x_492_ = v_reuseFailAlloc_493_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
v_a_420_ = v___x_492_;
goto v___jp_419_;
}
}
}
}
else
{
lean_object* v___x_496_; 
if (v_isShared_468_ == 0)
{
v___x_496_ = v___x_467_;
goto v_reusejp_495_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_fst_464_);
lean_ctor_set(v_reuseFailAlloc_500_, 1, v_snd_465_);
v___x_496_ = v_reuseFailAlloc_500_;
goto v_reusejp_495_;
}
v_reusejp_495_:
{
lean_object* v___x_498_; 
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 1, v___x_496_);
v___x_498_ = v___x_462_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v_fst_460_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
v_a_420_ = v___x_498_;
goto v___jp_419_;
}
}
}
}
else
{
lean_object* v_a_501_; lean_object* v___x_503_; uint8_t v_isShared_504_; uint8_t v_isSharedCheck_508_; 
lean_del_object(v___x_467_);
lean_dec(v_snd_465_);
lean_dec(v_fst_464_);
lean_del_object(v___x_462_);
lean_dec(v_fst_460_);
lean_dec(v_mvarId_409_);
lean_dec(v_tacticName_408_);
v_a_501_ = lean_ctor_get(v___x_470_, 0);
v_isSharedCheck_508_ = !lean_is_exclusive(v___x_470_);
if (v_isSharedCheck_508_ == 0)
{
v___x_503_ = v___x_470_;
v_isShared_504_ = v_isSharedCheck_508_;
goto v_resetjp_502_;
}
else
{
lean_inc(v_a_501_);
lean_dec(v___x_470_);
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
}
else
{
lean_object* v_fst_512_; lean_object* v_fst_513_; lean_object* v_snd_514_; 
lean_dec(v_fst_459_);
v_fst_512_ = lean_ctor_get(v_snd_457_, 0);
lean_inc(v_fst_512_);
lean_dec(v_snd_457_);
v_fst_513_ = lean_ctor_get(v_snd_458_, 0);
lean_inc(v_fst_513_);
v_snd_514_ = lean_ctor_get(v_snd_458_, 1);
lean_inc(v_snd_514_);
lean_dec(v_snd_458_);
v_fst_425_ = v_fst_512_;
v_fst_426_ = v_fst_513_;
v_snd_427_ = v_snd_514_;
goto v___jp_424_;
}
}
else
{
lean_object* v_a_515_; 
v_a_515_ = lean_ctor_get(v___y_455_, 0);
lean_inc(v_a_515_);
lean_dec_ref(v___y_455_);
v_a_451_ = v_a_515_;
goto v___jp_450_;
}
}
}
}
else
{
lean_object* v_a_529_; lean_object* v___x_531_; uint8_t v_isShared_532_; uint8_t v_isSharedCheck_536_; 
lean_dec_ref(v_b_413_);
lean_dec(v_mvarId_409_);
lean_dec(v_tacticName_408_);
v_a_529_ = lean_ctor_get(v___x_433_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_433_);
if (v_isSharedCheck_536_ == 0)
{
v___x_531_ = v___x_433_;
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
else
{
lean_inc(v_a_529_);
lean_dec(v___x_433_);
v___x_531_ = lean_box(0);
v_isShared_532_ = v_isSharedCheck_536_;
goto v_resetjp_530_;
}
v_resetjp_530_:
{
lean_object* v___x_534_; 
if (v_isShared_532_ == 0)
{
v___x_534_ = v___x_531_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_a_529_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
}
v___jp_419_:
{
size_t v___x_421_; size_t v___x_422_; 
v___x_421_ = ((size_t)1ULL);
v___x_422_ = lean_usize_add(v_i_412_, v___x_421_);
v_i_412_ = v___x_422_;
v_b_413_ = v_a_420_;
goto _start;
}
v___jp_424_:
{
lean_object* v___x_428_; lean_object* v___x_429_; 
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v_fst_426_);
lean_ctor_set(v___x_428_, 1, v_snd_427_);
v___x_429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_429_, 0, v_fst_425_);
lean_ctor_set(v___x_429_, 1, v___x_428_);
v_a_420_ = v___x_429_;
goto v___jp_419_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___boxed(lean_object* v_allowSynthFailures_537_, lean_object* v_tacticName_538_, lean_object* v_mvarId_539_, lean_object* v_as_540_, lean_object* v_sz_541_, lean_object* v_i_542_, lean_object* v_b_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
uint8_t v_allowSynthFailures_boxed_549_; size_t v_sz_boxed_550_; size_t v_i_boxed_551_; lean_object* v_res_552_; 
v_allowSynthFailures_boxed_549_ = lean_unbox(v_allowSynthFailures_537_);
v_sz_boxed_550_ = lean_unbox_usize(v_sz_541_);
lean_dec(v_sz_541_);
v_i_boxed_551_ = lean_unbox_usize(v_i_542_);
lean_dec(v_i_542_);
v_res_552_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(v_allowSynthFailures_boxed_549_, v_tacticName_538_, v_mvarId_539_, v_as_540_, v_sz_boxed_550_, v_i_boxed_551_, v_b_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_);
lean_dec(v___y_547_);
lean_dec_ref(v___y_546_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec_ref(v_as_540_);
return v_res_552_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0(void){
_start:
{
lean_object* v___x_553_; lean_object* v_postponed_554_; 
v___x_553_ = lean_unsigned_to_nat(0u);
v_postponed_554_ = lean_mk_empty_array_with_capacity(v___x_553_);
return v_postponed_554_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1(void){
_start:
{
lean_object* v_postponed_555_; uint8_t v_progressAfterEx_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v_postponed_555_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0);
v_progressAfterEx_556_ = 0;
v___x_557_ = lean_box(v_progressAfterEx_556_);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v_postponed_555_);
return v___x_558_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2(void){
_start:
{
lean_object* v___x_559_; lean_object* v_ex_x3f_560_; lean_object* v___x_561_; 
v___x_559_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1);
v_ex_x3f_560_ = lean_box(0);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v_ex_x3f_560_);
lean_ctor_set(v___x_561_, 1, v___x_559_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(lean_object* v_tacticName_562_, lean_object* v_mvarId_563_, uint8_t v_allowSynthFailures_564_, lean_object* v_mvars_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
lean_object* v_postponed_571_; lean_object* v___x_572_; size_t v_sz_573_; size_t v___x_574_; lean_object* v___x_575_; 
v_postponed_571_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0);
v___x_572_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2);
v_sz_573_ = lean_array_size(v_mvars_565_);
v___x_574_ = ((size_t)0ULL);
v___x_575_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(v_allowSynthFailures_564_, v_tacticName_562_, v_mvarId_563_, v_mvars_565_, v_sz_573_, v___x_574_, v___x_572_, v_a_566_, v_a_567_, v_a_568_, v_a_569_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_598_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_598_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_598_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_598_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_598_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v_fst_580_; 
v_fst_580_ = lean_ctor_get(v_a_576_, 0);
lean_inc(v_fst_580_);
if (lean_obj_tag(v_fst_580_) == 1)
{
lean_object* v_snd_581_; lean_object* v_fst_582_; uint8_t v___x_583_; 
v_snd_581_ = lean_ctor_get(v_a_576_, 1);
lean_inc(v_snd_581_);
lean_dec(v_a_576_);
v_fst_582_ = lean_ctor_get(v_snd_581_, 0);
v___x_583_ = lean_unbox(v_fst_582_);
if (v___x_583_ == 0)
{
lean_dec(v_snd_581_);
if (v_allowSynthFailures_564_ == 0)
{
lean_object* v_val_584_; lean_object* v___x_586_; 
v_val_584_ = lean_ctor_get(v_fst_580_, 0);
lean_inc(v_val_584_);
lean_dec_ref(v_fst_580_);
if (v_isShared_579_ == 0)
{
lean_ctor_set_tag(v___x_578_, 1);
lean_ctor_set(v___x_578_, 0, v_val_584_);
v___x_586_ = v___x_578_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_val_584_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
else
{
lean_object* v___x_589_; 
lean_dec_ref(v_fst_580_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v_postponed_571_);
v___x_589_ = v___x_578_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_postponed_571_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
else
{
lean_object* v_snd_591_; lean_object* v___x_593_; 
lean_dec_ref(v_fst_580_);
v_snd_591_ = lean_ctor_get(v_snd_581_, 1);
lean_inc(v_snd_591_);
lean_dec(v_snd_581_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v_snd_591_);
v___x_593_ = v___x_578_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v_snd_591_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
else
{
lean_object* v___x_596_; 
lean_dec(v_fst_580_);
lean_dec(v_a_576_);
if (v_isShared_579_ == 0)
{
lean_ctor_set(v___x_578_, 0, v_postponed_571_);
v___x_596_ = v___x_578_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v_postponed_571_);
v___x_596_ = v_reuseFailAlloc_597_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
return v___x_596_;
}
}
}
}
else
{
lean_object* v_a_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_606_; 
v_a_599_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_606_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_606_ == 0)
{
v___x_601_ = v___x_575_;
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_a_599_);
lean_dec(v___x_575_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_606_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_604_; 
if (v_isShared_602_ == 0)
{
v___x_604_ = v___x_601_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_a_599_);
v___x_604_ = v_reuseFailAlloc_605_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
return v___x_604_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___boxed(lean_object* v_tacticName_607_, lean_object* v_mvarId_608_, lean_object* v_allowSynthFailures_609_, lean_object* v_mvars_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_){
_start:
{
uint8_t v_allowSynthFailures_boxed_616_; lean_object* v_res_617_; 
v_allowSynthFailures_boxed_616_ = lean_unbox(v_allowSynthFailures_609_);
v_res_617_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(v_tacticName_607_, v_mvarId_608_, v_allowSynthFailures_boxed_616_, v_mvars_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_);
lean_dec(v_a_614_);
lean_dec_ref(v_a_613_);
lean_dec(v_a_612_);
lean_dec_ref(v_a_611_);
lean_dec_ref(v_mvars_610_);
return v_res_617_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_keys_618_, lean_object* v_i_619_, lean_object* v_k_620_){
_start:
{
lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_621_ = lean_array_get_size(v_keys_618_);
v___x_622_ = lean_nat_dec_lt(v_i_619_, v___x_621_);
if (v___x_622_ == 0)
{
lean_dec(v_i_619_);
return v___x_622_;
}
else
{
lean_object* v_k_x27_623_; uint8_t v___x_624_; 
v_k_x27_623_ = lean_array_fget_borrowed(v_keys_618_, v_i_619_);
v___x_624_ = l_Lean_instBEqMVarId_beq(v_k_620_, v_k_x27_623_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_unsigned_to_nat(1u);
v___x_626_ = lean_nat_add(v_i_619_, v___x_625_);
lean_dec(v_i_619_);
v_i_619_ = v___x_626_;
goto _start;
}
else
{
lean_dec(v_i_619_);
return v___x_624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_keys_628_, lean_object* v_i_629_, lean_object* v_k_630_){
_start:
{
uint8_t v_res_631_; lean_object* v_r_632_; 
v_res_631_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_628_, v_i_629_, v_k_630_);
lean_dec(v_k_630_);
lean_dec_ref(v_keys_628_);
v_r_632_ = lean_box(v_res_631_);
return v_r_632_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_633_; size_t v___x_634_; size_t v___x_635_; 
v___x_633_ = ((size_t)5ULL);
v___x_634_ = ((size_t)1ULL);
v___x_635_ = lean_usize_shift_left(v___x_634_, v___x_633_);
return v___x_635_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_636_; size_t v___x_637_; size_t v___x_638_; 
v___x_636_ = ((size_t)1ULL);
v___x_637_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_638_ = lean_usize_sub(v___x_637_, v___x_636_);
return v___x_638_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(lean_object* v_x_639_, size_t v_x_640_, lean_object* v_x_641_){
_start:
{
if (lean_obj_tag(v_x_639_) == 0)
{
lean_object* v_es_642_; lean_object* v___x_643_; size_t v___x_644_; size_t v___x_645_; size_t v___x_646_; lean_object* v_j_647_; lean_object* v___x_648_; 
v_es_642_ = lean_ctor_get(v_x_639_, 0);
v___x_643_ = lean_box(2);
v___x_644_ = ((size_t)5ULL);
v___x_645_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_646_ = lean_usize_land(v_x_640_, v___x_645_);
v_j_647_ = lean_usize_to_nat(v___x_646_);
v___x_648_ = lean_array_get_borrowed(v___x_643_, v_es_642_, v_j_647_);
lean_dec(v_j_647_);
switch(lean_obj_tag(v___x_648_))
{
case 0:
{
lean_object* v_key_649_; uint8_t v___x_650_; 
v_key_649_ = lean_ctor_get(v___x_648_, 0);
v___x_650_ = l_Lean_instBEqMVarId_beq(v_x_641_, v_key_649_);
return v___x_650_;
}
case 1:
{
lean_object* v_node_651_; size_t v___x_652_; 
v_node_651_ = lean_ctor_get(v___x_648_, 0);
v___x_652_ = lean_usize_shift_right(v_x_640_, v___x_644_);
v_x_639_ = v_node_651_;
v_x_640_ = v___x_652_;
goto _start;
}
default: 
{
uint8_t v___x_654_; 
v___x_654_ = 0;
return v___x_654_;
}
}
}
else
{
lean_object* v_ks_655_; lean_object* v___x_656_; uint8_t v___x_657_; 
v_ks_655_ = lean_ctor_get(v_x_639_, 0);
v___x_656_ = lean_unsigned_to_nat(0u);
v___x_657_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_ks_655_, v___x_656_, v_x_641_);
return v___x_657_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_658_, lean_object* v_x_659_, lean_object* v_x_660_){
_start:
{
size_t v_x_2690__boxed_661_; uint8_t v_res_662_; lean_object* v_r_663_; 
v_x_2690__boxed_661_ = lean_unbox_usize(v_x_659_);
lean_dec(v_x_659_);
v_res_662_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_658_, v_x_2690__boxed_661_, v_x_660_);
lean_dec(v_x_660_);
lean_dec_ref(v_x_658_);
v_r_663_ = lean_box(v_res_662_);
return v_r_663_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(lean_object* v_x_664_, lean_object* v_x_665_){
_start:
{
uint64_t v___x_666_; size_t v___x_667_; uint8_t v___x_668_; 
v___x_666_ = l_Lean_instHashableMVarId_hash(v_x_665_);
v___x_667_ = lean_uint64_to_usize(v___x_666_);
v___x_668_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_664_, v___x_667_, v_x_665_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg___boxed(lean_object* v_x_669_, lean_object* v_x_670_){
_start:
{
uint8_t v_res_671_; lean_object* v_r_672_; 
v_res_671_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_x_669_, v_x_670_);
lean_dec(v_x_670_);
lean_dec_ref(v_x_669_);
v_r_672_ = lean_box(v_res_671_);
return v_r_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(lean_object* v_mvarId_673_, lean_object* v___y_674_, lean_object* v___y_675_){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v_mctx_679_; lean_object* v_eAssignment_680_; uint8_t v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_677_ = lean_st_ref_get(v___y_675_);
lean_dec(v___x_677_);
v___x_678_ = lean_st_ref_get(v___y_674_);
v_mctx_679_ = lean_ctor_get(v___x_678_, 0);
lean_inc_ref(v_mctx_679_);
lean_dec(v___x_678_);
v_eAssignment_680_ = lean_ctor_get(v_mctx_679_, 8);
lean_inc_ref(v_eAssignment_680_);
lean_dec_ref(v_mctx_679_);
v___x_681_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_eAssignment_680_, v_mvarId_673_);
lean_dec_ref(v_eAssignment_680_);
v___x_682_ = lean_box(v___x_681_);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg___boxed(lean_object* v_mvarId_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v_mvarId_684_, v___y_685_, v___y_686_);
lean_dec(v___y_686_);
lean_dec(v___y_685_);
lean_dec(v_mvarId_684_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(uint8_t v_synthAssignedInstances_689_, lean_object* v_as_690_, size_t v_sz_691_, size_t v_i_692_, lean_object* v_b_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_){
_start:
{
lean_object* v_a_700_; uint8_t v___x_704_; 
v___x_704_ = lean_usize_dec_lt(v_i_692_, v_sz_691_);
if (v___x_704_ == 0)
{
lean_object* v___x_705_; 
v___x_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_705_, 0, v_b_693_);
return v___x_705_;
}
else
{
lean_object* v_snd_706_; lean_object* v_fst_707_; lean_object* v___x_709_; uint8_t v_isShared_710_; uint8_t v_isSharedCheck_757_; 
v_snd_706_ = lean_ctor_get(v_b_693_, 1);
v_fst_707_ = lean_ctor_get(v_b_693_, 0);
v_isSharedCheck_757_ = !lean_is_exclusive(v_b_693_);
if (v_isSharedCheck_757_ == 0)
{
v___x_709_ = v_b_693_;
v_isShared_710_ = v_isSharedCheck_757_;
goto v_resetjp_708_;
}
else
{
lean_inc(v_snd_706_);
lean_inc(v_fst_707_);
lean_dec(v_b_693_);
v___x_709_ = lean_box(0);
v_isShared_710_ = v_isSharedCheck_757_;
goto v_resetjp_708_;
}
v_resetjp_708_:
{
lean_object* v_array_711_; lean_object* v_start_712_; lean_object* v_stop_713_; uint8_t v___x_714_; 
v_array_711_ = lean_ctor_get(v_snd_706_, 0);
v_start_712_ = lean_ctor_get(v_snd_706_, 1);
v_stop_713_ = lean_ctor_get(v_snd_706_, 2);
v___x_714_ = lean_nat_dec_lt(v_start_712_, v_stop_713_);
if (v___x_714_ == 0)
{
lean_object* v___x_716_; 
if (v_isShared_710_ == 0)
{
v___x_716_ = v___x_709_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_fst_707_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v_snd_706_);
v___x_716_ = v_reuseFailAlloc_718_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_717_; 
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v___x_716_);
return v___x_717_;
}
}
else
{
lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_753_; 
lean_inc(v_stop_713_);
lean_inc(v_start_712_);
lean_inc_ref(v_array_711_);
v_isSharedCheck_753_ = !lean_is_exclusive(v_snd_706_);
if (v_isSharedCheck_753_ == 0)
{
lean_object* v_unused_754_; lean_object* v_unused_755_; lean_object* v_unused_756_; 
v_unused_754_ = lean_ctor_get(v_snd_706_, 2);
lean_dec(v_unused_754_);
v_unused_755_ = lean_ctor_get(v_snd_706_, 1);
lean_dec(v_unused_755_);
v_unused_756_ = lean_ctor_get(v_snd_706_, 0);
lean_dec(v_unused_756_);
v___x_720_ = v_snd_706_;
v_isShared_721_ = v_isSharedCheck_753_;
goto v_resetjp_719_;
}
else
{
lean_dec(v_snd_706_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_753_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_726_; 
v___x_722_ = lean_array_fget(v_array_711_, v_start_712_);
v___x_723_ = lean_unsigned_to_nat(1u);
v___x_724_ = lean_nat_add(v_start_712_, v___x_723_);
lean_dec(v_start_712_);
if (v_isShared_721_ == 0)
{
lean_ctor_set(v___x_720_, 1, v___x_724_);
v___x_726_ = v___x_720_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v_array_711_);
lean_ctor_set(v_reuseFailAlloc_752_, 1, v___x_724_);
lean_ctor_set(v_reuseFailAlloc_752_, 2, v_stop_713_);
v___x_726_ = v_reuseFailAlloc_752_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
uint8_t v___x_727_; uint8_t v___x_728_; 
v___x_727_ = lean_unbox(v___x_722_);
lean_dec(v___x_722_);
v___x_728_ = l_Lean_BinderInfo_isInstImplicit(v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_730_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 1, v___x_726_);
v___x_730_ = v___x_709_;
goto v_reusejp_729_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v_fst_707_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v___x_726_);
v___x_730_ = v_reuseFailAlloc_731_;
goto v_reusejp_729_;
}
v_reusejp_729_:
{
v_a_700_ = v___x_730_;
goto v___jp_699_;
}
}
else
{
lean_object* v_a_732_; lean_object* v___x_733_; lean_object* v___x_734_; 
v_a_732_ = lean_array_uget_borrowed(v_as_690_, v_i_692_);
v___x_733_ = l_Lean_Expr_mvarId_x21(v_a_732_);
v___x_734_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_733_, v___y_695_, v___y_697_);
lean_dec(v___x_733_);
if (lean_obj_tag(v___x_734_) == 0)
{
lean_object* v_a_735_; 
v_a_735_ = lean_ctor_get(v___x_734_, 0);
lean_inc(v_a_735_);
lean_dec_ref(v___x_734_);
if (v_synthAssignedInstances_689_ == 0)
{
uint8_t v___x_743_; 
v___x_743_ = lean_unbox(v_a_735_);
lean_dec(v_a_735_);
if (v___x_743_ == 0)
{
if (v___x_728_ == 0)
{
goto v___jp_736_;
}
else
{
lean_del_object(v___x_709_);
goto v___jp_740_;
}
}
else
{
goto v___jp_736_;
}
}
else
{
lean_dec(v_a_735_);
lean_del_object(v___x_709_);
goto v___jp_740_;
}
v___jp_736_:
{
lean_object* v___x_738_; 
if (v_isShared_710_ == 0)
{
lean_ctor_set(v___x_709_, 1, v___x_726_);
v___x_738_ = v___x_709_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_fst_707_);
lean_ctor_set(v_reuseFailAlloc_739_, 1, v___x_726_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
v_a_700_ = v___x_738_;
goto v___jp_699_;
}
}
v___jp_740_:
{
lean_object* v___x_741_; lean_object* v___x_742_; 
lean_inc(v_a_732_);
v___x_741_ = lean_array_push(v_fst_707_, v_a_732_);
v___x_742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
lean_ctor_set(v___x_742_, 1, v___x_726_);
v_a_700_ = v___x_742_;
goto v___jp_699_;
}
}
else
{
lean_object* v_a_744_; lean_object* v___x_746_; uint8_t v_isShared_747_; uint8_t v_isSharedCheck_751_; 
lean_dec_ref(v___x_726_);
lean_del_object(v___x_709_);
lean_dec(v_fst_707_);
v_a_744_ = lean_ctor_get(v___x_734_, 0);
v_isSharedCheck_751_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_751_ == 0)
{
v___x_746_ = v___x_734_;
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
else
{
lean_inc(v_a_744_);
lean_dec(v___x_734_);
v___x_746_ = lean_box(0);
v_isShared_747_ = v_isSharedCheck_751_;
goto v_resetjp_745_;
}
v_resetjp_745_:
{
lean_object* v___x_749_; 
if (v_isShared_747_ == 0)
{
v___x_749_ = v___x_746_;
goto v_reusejp_748_;
}
else
{
lean_object* v_reuseFailAlloc_750_; 
v_reuseFailAlloc_750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_750_, 0, v_a_744_);
v___x_749_ = v_reuseFailAlloc_750_;
goto v_reusejp_748_;
}
v_reusejp_748_:
{
return v___x_749_;
}
}
}
}
}
}
}
}
}
v___jp_699_:
{
size_t v___x_701_; size_t v___x_702_; 
v___x_701_ = ((size_t)1ULL);
v___x_702_ = lean_usize_add(v_i_692_, v___x_701_);
v_i_692_ = v___x_702_;
v_b_693_ = v_a_700_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1___boxed(lean_object* v_synthAssignedInstances_758_, lean_object* v_as_759_, lean_object* v_sz_760_, lean_object* v_i_761_, lean_object* v_b_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_768_; size_t v_sz_boxed_769_; size_t v_i_boxed_770_; lean_object* v_res_771_; 
v_synthAssignedInstances_boxed_768_ = lean_unbox(v_synthAssignedInstances_758_);
v_sz_boxed_769_ = lean_unbox_usize(v_sz_760_);
lean_dec(v_sz_760_);
v_i_boxed_770_ = lean_unbox_usize(v_i_761_);
lean_dec(v_i_761_);
v_res_771_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(v_synthAssignedInstances_boxed_768_, v_as_759_, v_sz_boxed_769_, v_i_boxed_770_, v_b_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec_ref(v_as_759_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2(lean_object* v_tacticName_772_, lean_object* v_mvarId_773_, uint8_t v_allowSynthFailures_774_, lean_object* v_b_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v___x_781_; lean_object* v___x_782_; uint8_t v___x_783_; 
v___x_781_ = lean_array_get_size(v_b_775_);
v___x_782_ = lean_unsigned_to_nat(0u);
v___x_783_ = lean_nat_dec_eq(v___x_781_, v___x_782_);
if (v___x_783_ == 0)
{
lean_object* v___x_784_; 
lean_inc(v_mvarId_773_);
lean_inc(v_tacticName_772_);
v___x_784_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(v_tacticName_772_, v_mvarId_773_, v_allowSynthFailures_774_, v_b_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
lean_dec_ref(v_b_775_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
lean_inc(v_a_785_);
lean_dec_ref(v___x_784_);
v_b_775_ = v_a_785_;
goto _start;
}
else
{
lean_dec(v_mvarId_773_);
lean_dec(v_tacticName_772_);
return v___x_784_;
}
}
else
{
lean_object* v___x_787_; 
lean_dec(v_mvarId_773_);
lean_dec(v_tacticName_772_);
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v_b_775_);
return v___x_787_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2___boxed(lean_object* v_tacticName_788_, lean_object* v_mvarId_789_, lean_object* v_allowSynthFailures_790_, lean_object* v_b_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
uint8_t v_allowSynthFailures_boxed_797_; lean_object* v_res_798_; 
v_allowSynthFailures_boxed_797_ = lean_unbox(v_allowSynthFailures_790_);
v_res_798_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2(v_tacticName_788_, v_mvarId_789_, v_allowSynthFailures_boxed_797_, v_b_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances(lean_object* v_tacticName_799_, lean_object* v_mvarId_800_, lean_object* v_mvarsNew_801_, lean_object* v_binderInfos_802_, uint8_t v_synthAssignedInstances_803_, uint8_t v_allowSynthFailures_804_, lean_object* v_a_805_, lean_object* v_a_806_, lean_object* v_a_807_, lean_object* v_a_808_){
_start:
{
lean_object* v___x_810_; lean_object* v_todo_811_; lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; size_t v_sz_815_; size_t v___x_816_; lean_object* v___x_817_; 
v___x_810_ = lean_unsigned_to_nat(0u);
v_todo_811_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0);
v___x_812_ = lean_array_get_size(v_binderInfos_802_);
v___x_813_ = l_Array_toSubarray___redArg(v_binderInfos_802_, v___x_810_, v___x_812_);
v___x_814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_814_, 0, v_todo_811_);
lean_ctor_set(v___x_814_, 1, v___x_813_);
v_sz_815_ = lean_array_size(v_mvarsNew_801_);
v___x_816_ = ((size_t)0ULL);
v___x_817_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(v_synthAssignedInstances_803_, v_mvarsNew_801_, v_sz_815_, v___x_816_, v___x_814_, v_a_805_, v_a_806_, v_a_807_, v_a_808_);
if (lean_obj_tag(v___x_817_) == 0)
{
lean_object* v_a_818_; lean_object* v_fst_819_; lean_object* v___x_820_; 
v_a_818_ = lean_ctor_get(v___x_817_, 0);
lean_inc(v_a_818_);
lean_dec_ref(v___x_817_);
v_fst_819_ = lean_ctor_get(v_a_818_, 0);
lean_inc(v_fst_819_);
lean_dec(v_a_818_);
v___x_820_ = l___private_Init_While_0__Lean_Loop_forIn_loop___at___00Lean_Meta_synthAppInstances_spec__2(v_tacticName_799_, v_mvarId_800_, v_allowSynthFailures_804_, v_fst_819_, v_a_805_, v_a_806_, v_a_807_, v_a_808_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_828_; 
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_828_ == 0)
{
lean_object* v_unused_829_; 
v_unused_829_ = lean_ctor_get(v___x_820_, 0);
lean_dec(v_unused_829_);
v___x_822_ = v___x_820_;
v_isShared_823_ = v_isSharedCheck_828_;
goto v_resetjp_821_;
}
else
{
lean_dec(v___x_820_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_828_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_824_ = lean_box(0);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v___x_824_);
v___x_826_ = v___x_822_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
else
{
lean_object* v_a_830_; lean_object* v___x_832_; uint8_t v_isShared_833_; uint8_t v_isSharedCheck_837_; 
v_a_830_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_837_ == 0)
{
v___x_832_ = v___x_820_;
v_isShared_833_ = v_isSharedCheck_837_;
goto v_resetjp_831_;
}
else
{
lean_inc(v_a_830_);
lean_dec(v___x_820_);
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
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
lean_dec(v_mvarId_800_);
lean_dec(v_tacticName_799_);
v_a_838_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_845_ == 0)
{
v___x_840_ = v___x_817_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_817_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_a_838_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances___boxed(lean_object* v_tacticName_846_, lean_object* v_mvarId_847_, lean_object* v_mvarsNew_848_, lean_object* v_binderInfos_849_, lean_object* v_synthAssignedInstances_850_, lean_object* v_allowSynthFailures_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_857_; uint8_t v_allowSynthFailures_boxed_858_; lean_object* v_res_859_; 
v_synthAssignedInstances_boxed_857_ = lean_unbox(v_synthAssignedInstances_850_);
v_allowSynthFailures_boxed_858_ = lean_unbox(v_allowSynthFailures_851_);
v_res_859_ = l_Lean_Meta_synthAppInstances(v_tacticName_846_, v_mvarId_847_, v_mvarsNew_848_, v_binderInfos_849_, v_synthAssignedInstances_boxed_857_, v_allowSynthFailures_boxed_858_, v_a_852_, v_a_853_, v_a_854_, v_a_855_);
lean_dec(v_a_855_);
lean_dec_ref(v_a_854_);
lean_dec(v_a_853_);
lean_dec_ref(v_a_852_);
lean_dec_ref(v_mvarsNew_848_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(lean_object* v_mvarId_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_866_; 
v___x_866_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v_mvarId_860_, v___y_862_, v___y_864_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___boxed(lean_object* v_mvarId_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(v_mvarId_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec(v___y_869_);
lean_dec_ref(v___y_868_);
lean_dec(v_mvarId_867_);
return v_res_873_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(lean_object* v_00_u03b2_874_, lean_object* v_x_875_, lean_object* v_x_876_){
_start:
{
uint8_t v___x_877_; 
v___x_877_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_x_875_, v_x_876_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___boxed(lean_object* v_00_u03b2_878_, lean_object* v_x_879_, lean_object* v_x_880_){
_start:
{
uint8_t v_res_881_; lean_object* v_r_882_; 
v_res_881_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(v_00_u03b2_878_, v_x_879_, v_x_880_);
lean_dec(v_x_880_);
lean_dec_ref(v_x_879_);
v_r_882_ = lean_box(v_res_881_);
return v_r_882_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_883_, lean_object* v_x_884_, size_t v_x_885_, lean_object* v_x_886_){
_start:
{
uint8_t v___x_887_; 
v___x_887_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_884_, v_x_885_, v_x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_888_, lean_object* v_x_889_, lean_object* v_x_890_, lean_object* v_x_891_){
_start:
{
size_t v_x_3015__boxed_892_; uint8_t v_res_893_; lean_object* v_r_894_; 
v_x_3015__boxed_892_ = lean_unbox_usize(v_x_890_);
lean_dec(v_x_890_);
v_res_893_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(v_00_u03b2_888_, v_x_889_, v_x_3015__boxed_892_, v_x_891_);
lean_dec(v_x_891_);
lean_dec_ref(v_x_889_);
v_r_894_ = lean_box(v_res_893_);
return v_r_894_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_895_, lean_object* v_keys_896_, lean_object* v_vals_897_, lean_object* v_heq_898_, lean_object* v_i_899_, lean_object* v_k_900_){
_start:
{
uint8_t v___x_901_; 
v___x_901_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_896_, v_i_899_, v_k_900_);
return v___x_901_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_902_, lean_object* v_keys_903_, lean_object* v_vals_904_, lean_object* v_heq_905_, lean_object* v_i_906_, lean_object* v_k_907_){
_start:
{
uint8_t v_res_908_; lean_object* v_r_909_; 
v_res_908_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_902_, v_keys_903_, v_vals_904_, v_heq_905_, v_i_906_, v_k_907_);
lean_dec(v_k_907_);
lean_dec_ref(v_vals_904_);
lean_dec_ref(v_keys_903_);
v_r_909_ = lean_box(v_res_908_);
return v_r_909_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(lean_object* v_newMVars_910_, lean_object* v_binderInfos_911_, lean_object* v_a_912_, lean_object* v_n_913_, lean_object* v_i_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
lean_object* v_zero_920_; uint8_t v_isZero_921_; 
v_zero_920_ = lean_unsigned_to_nat(0u);
v_isZero_921_ = lean_nat_dec_eq(v_i_914_, v_zero_920_);
if (v_isZero_921_ == 1)
{
lean_object* v___x_922_; lean_object* v___x_923_; 
lean_dec(v_i_914_);
lean_dec(v_a_912_);
v___x_922_ = lean_box(0);
v___x_923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
return v___x_923_;
}
else
{
lean_object* v_one_924_; lean_object* v_n_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v_a_931_; uint8_t v___x_932_; 
v_one_924_ = lean_unsigned_to_nat(1u);
v_n_925_ = lean_nat_sub(v_i_914_, v_one_924_);
lean_dec(v_i_914_);
v___x_926_ = lean_nat_sub(v_n_913_, v_n_925_);
v___x_927_ = lean_nat_sub(v___x_926_, v_one_924_);
lean_dec(v___x_926_);
v___x_928_ = lean_array_fget_borrowed(v_newMVars_910_, v___x_927_);
v___x_929_ = l_Lean_Expr_mvarId_x21(v___x_928_);
v___x_930_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_929_, v___y_916_, v___y_918_);
v_a_931_ = lean_ctor_get(v___x_930_, 0);
lean_inc(v_a_931_);
lean_dec_ref(v___x_930_);
v___x_932_ = lean_unbox(v_a_931_);
lean_dec(v_a_931_);
if (v___x_932_ == 0)
{
uint8_t v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; uint8_t v___x_936_; uint8_t v___x_937_; 
v___x_933_ = 0;
v___x_934_ = lean_box(v___x_933_);
v___x_935_ = lean_array_get(v___x_934_, v_binderInfos_911_, v___x_927_);
lean_dec(v___x_927_);
lean_dec(v___x_934_);
v___x_936_ = lean_unbox(v___x_935_);
lean_dec(v___x_935_);
v___x_937_ = l_Lean_BinderInfo_isInstImplicit(v___x_936_);
if (v___x_937_ == 0)
{
lean_object* v___x_938_; 
lean_inc(v___x_929_);
v___x_938_ = l_Lean_MVarId_getTag(v___x_929_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
if (lean_obj_tag(v___x_938_) == 0)
{
lean_object* v_a_939_; lean_object* v___x_940_; lean_object* v___x_941_; 
v_a_939_ = lean_ctor_get(v___x_938_, 0);
lean_inc(v_a_939_);
lean_dec_ref(v___x_938_);
lean_inc(v_a_912_);
v___x_940_ = l_Lean_Meta_appendTag(v_a_912_, v_a_939_);
v___x_941_ = l_Lean_MVarId_setTag___redArg(v___x_929_, v___x_940_, v___y_916_, v___y_918_);
if (lean_obj_tag(v___x_941_) == 0)
{
lean_dec_ref(v___x_941_);
v_i_914_ = v_n_925_;
goto _start;
}
else
{
lean_dec(v_n_925_);
lean_dec(v_a_912_);
return v___x_941_;
}
}
else
{
lean_object* v_a_943_; lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
lean_dec(v___x_929_);
lean_dec(v_n_925_);
lean_dec(v_a_912_);
v_a_943_ = lean_ctor_get(v___x_938_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_938_);
if (v_isSharedCheck_950_ == 0)
{
v___x_945_ = v___x_938_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_inc(v_a_943_);
lean_dec(v___x_938_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_a_943_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
}
else
{
lean_dec(v___x_929_);
v_i_914_ = v_n_925_;
goto _start;
}
}
else
{
lean_dec(v___x_929_);
lean_dec(v___x_927_);
v_i_914_ = v_n_925_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___boxed(lean_object* v_newMVars_953_, lean_object* v_binderInfos_954_, lean_object* v_a_955_, lean_object* v_n_956_, lean_object* v_i_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_, lean_object* v___y_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_953_, v_binderInfos_954_, v_a_955_, v_n_956_, v_i_957_, v___y_958_, v___y_959_, v___y_960_, v___y_961_);
lean_dec(v___y_961_);
lean_dec_ref(v___y_960_);
lean_dec(v___y_959_);
lean_dec_ref(v___y_958_);
lean_dec(v_n_956_);
lean_dec_ref(v_binderInfos_954_);
lean_dec_ref(v_newMVars_953_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag(lean_object* v_mvarId_964_, lean_object* v_newMVars_965_, lean_object* v_binderInfos_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_){
_start:
{
lean_object* v___x_972_; 
v___x_972_ = l_Lean_MVarId_getTag(v_mvarId_964_, v_a_967_, v_a_968_, v_a_969_, v_a_970_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_991_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_991_ == 0)
{
v___x_975_ = v___x_972_;
v_isShared_976_ = v_isSharedCheck_991_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_dec(v___x_972_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_991_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_977_; lean_object* v___x_978_; uint8_t v___x_979_; 
v___x_977_ = lean_array_get_size(v_newMVars_965_);
v___x_978_ = lean_unsigned_to_nat(1u);
v___x_979_ = lean_nat_dec_eq(v___x_977_, v___x_978_);
if (v___x_979_ == 0)
{
uint8_t v___x_980_; 
v___x_980_ = l_Lean_Name_isAnonymous(v_a_973_);
if (v___x_980_ == 0)
{
lean_object* v___x_981_; 
lean_del_object(v___x_975_);
v___x_981_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_965_, v_binderInfos_966_, v_a_973_, v___x_977_, v___x_977_, v_a_967_, v_a_968_, v_a_969_, v_a_970_);
return v___x_981_;
}
else
{
lean_object* v___x_982_; lean_object* v___x_984_; 
lean_dec(v_a_973_);
v___x_982_ = lean_box(0);
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 0, v___x_982_);
v___x_984_ = v___x_975_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v___x_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
}
else
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; 
lean_del_object(v___x_975_);
v___x_986_ = l_Lean_instInhabitedExpr;
v___x_987_ = lean_unsigned_to_nat(0u);
v___x_988_ = lean_array_get_borrowed(v___x_986_, v_newMVars_965_, v___x_987_);
v___x_989_ = l_Lean_Expr_mvarId_x21(v___x_988_);
v___x_990_ = l_Lean_MVarId_setTag___redArg(v___x_989_, v_a_973_, v_a_968_, v_a_970_);
return v___x_990_;
}
}
}
else
{
lean_object* v_a_992_; lean_object* v___x_994_; uint8_t v_isShared_995_; uint8_t v_isSharedCheck_999_; 
v_a_992_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_999_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_999_ == 0)
{
v___x_994_ = v___x_972_;
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
else
{
lean_inc(v_a_992_);
lean_dec(v___x_972_);
v___x_994_ = lean_box(0);
v_isShared_995_ = v_isSharedCheck_999_;
goto v_resetjp_993_;
}
v_resetjp_993_:
{
lean_object* v___x_997_; 
if (v_isShared_995_ == 0)
{
v___x_997_ = v___x_994_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_a_992_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
return v___x_997_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag___boxed(lean_object* v_mvarId_1000_, lean_object* v_newMVars_1001_, lean_object* v_binderInfos_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_Lean_Meta_appendParentTag(v_mvarId_1000_, v_newMVars_1001_, v_binderInfos_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
lean_dec(v_a_1006_);
lean_dec_ref(v_a_1005_);
lean_dec(v_a_1004_);
lean_dec_ref(v_a_1003_);
lean_dec_ref(v_binderInfos_1002_);
lean_dec_ref(v_newMVars_1001_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(lean_object* v_newMVars_1009_, lean_object* v_binderInfos_1010_, lean_object* v_a_1011_, lean_object* v_n_1012_, lean_object* v_i_1013_, lean_object* v_a_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_1009_, v_binderInfos_1010_, v_a_1011_, v_n_1012_, v_i_1013_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___boxed(lean_object* v_newMVars_1021_, lean_object* v_binderInfos_1022_, lean_object* v_a_1023_, lean_object* v_n_1024_, lean_object* v_i_1025_, lean_object* v_a_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_){
_start:
{
lean_object* v_res_1032_; 
v_res_1032_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(v_newMVars_1021_, v_binderInfos_1022_, v_a_1023_, v_n_1024_, v_i_1025_, v_a_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
lean_dec(v___y_1030_);
lean_dec_ref(v___y_1029_);
lean_dec(v___y_1028_);
lean_dec_ref(v___y_1027_);
lean_dec(v_n_1024_);
lean_dec_ref(v_binderInfos_1022_);
lean_dec_ref(v_newMVars_1021_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars(lean_object* v_tacticName_1033_, lean_object* v_mvarId_1034_, lean_object* v_newMVars_1035_, lean_object* v_binderInfos_1036_, uint8_t v_synthAssignedInstances_1037_, uint8_t v_allowSynthFailures_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_){
_start:
{
lean_object* v___x_1044_; 
v___x_1044_ = l_Lean_Meta_synthAppInstances(v_tacticName_1033_, v_mvarId_1034_, v_newMVars_1035_, v_binderInfos_1036_, v_synthAssignedInstances_1037_, v_allowSynthFailures_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars___boxed(lean_object* v_tacticName_1045_, lean_object* v_mvarId_1046_, lean_object* v_newMVars_1047_, lean_object* v_binderInfos_1048_, lean_object* v_synthAssignedInstances_1049_, lean_object* v_allowSynthFailures_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_1056_; uint8_t v_allowSynthFailures_boxed_1057_; lean_object* v_res_1058_; 
v_synthAssignedInstances_boxed_1056_ = lean_unbox(v_synthAssignedInstances_1049_);
v_allowSynthFailures_boxed_1057_ = lean_unbox(v_allowSynthFailures_1050_);
v_res_1058_ = l_Lean_Meta_postprocessAppMVars(v_tacticName_1045_, v_mvarId_1046_, v_newMVars_1047_, v_binderInfos_1048_, v_synthAssignedInstances_boxed_1056_, v_allowSynthFailures_boxed_1057_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_);
lean_dec(v_a_1054_);
lean_dec_ref(v_a_1053_);
lean_dec(v_a_1052_);
lean_dec_ref(v_a_1051_);
lean_dec_ref(v_newMVars_1047_);
return v_res_1058_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(lean_object* v_mvar_1059_, lean_object* v_mvarId_1060_){
_start:
{
lean_object* v___x_1061_; uint8_t v___x_1062_; 
v___x_1061_ = l_Lean_Expr_mvarId_x21(v_mvar_1059_);
v___x_1062_ = l_Lean_instBEqMVarId_beq(v_mvarId_1060_, v___x_1061_);
lean_dec(v___x_1061_);
return v___x_1062_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed(lean_object* v_mvar_1063_, lean_object* v_mvarId_1064_){
_start:
{
uint8_t v_res_1065_; lean_object* v_r_1066_; 
v_res_1065_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(v_mvar_1063_, v_mvarId_1064_);
lean_dec(v_mvarId_1064_);
lean_dec_ref(v_mvar_1063_);
v_r_1066_ = lean_box(v_res_1065_);
return v_r_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(lean_object* v_mvar_1067_, lean_object* v_as_1068_, size_t v_i_1069_, size_t v_stop_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
uint8_t v___x_1076_; 
v___x_1076_ = lean_usize_dec_eq(v_i_1069_, v_stop_1070_);
if (v___x_1076_ == 0)
{
uint8_t v___x_1077_; uint8_t v_a_1079_; lean_object* v___x_1085_; uint8_t v___x_1086_; 
v___x_1077_ = 1;
v___x_1085_ = lean_array_uget_borrowed(v_as_1068_, v_i_1069_);
v___x_1086_ = lean_expr_eqv(v_mvar_1067_, v___x_1085_);
if (v___x_1086_ == 0)
{
lean_object* v___x_1087_; 
lean_inc(v___y_1074_);
lean_inc_ref(v___y_1073_);
lean_inc(v___y_1072_);
lean_inc_ref(v___y_1071_);
lean_inc(v___x_1085_);
v___x_1087_ = lean_infer_type(v___x_1085_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
if (lean_obj_tag(v___x_1087_) == 0)
{
lean_object* v_a_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1099_; 
v_a_1088_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1099_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1099_ == 0)
{
v___x_1090_ = v___x_1087_;
v_isShared_1091_ = v_isSharedCheck_1099_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_a_1088_);
lean_dec(v___x_1087_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1099_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___f_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
lean_inc_ref(v_mvar_1067_);
v___f_1092_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1092_, 0, v_mvar_1067_);
v___x_1093_ = lean_box(0);
v___x_1094_ = l_Lean_FindMVar_main(v___f_1092_, v_a_1088_, v___x_1093_);
if (lean_obj_tag(v___x_1094_) == 0)
{
lean_del_object(v___x_1090_);
v_a_1079_ = v___x_1086_;
goto v___jp_1078_;
}
else
{
lean_object* v___x_1095_; lean_object* v___x_1097_; 
lean_dec_ref(v___x_1094_);
lean_dec_ref(v_mvar_1067_);
v___x_1095_ = lean_box(v___x_1077_);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 0, v___x_1095_);
v___x_1097_ = v___x_1090_;
goto v_reusejp_1096_;
}
else
{
lean_object* v_reuseFailAlloc_1098_; 
v_reuseFailAlloc_1098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1098_, 0, v___x_1095_);
v___x_1097_ = v_reuseFailAlloc_1098_;
goto v_reusejp_1096_;
}
v_reusejp_1096_:
{
return v___x_1097_;
}
}
}
}
else
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1107_; 
lean_dec_ref(v_mvar_1067_);
v_a_1100_ = lean_ctor_get(v___x_1087_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1087_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1102_ = v___x_1087_;
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1087_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1107_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1105_; 
if (v_isShared_1103_ == 0)
{
v___x_1105_ = v___x_1102_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v_a_1100_);
v___x_1105_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
return v___x_1105_;
}
}
}
}
else
{
v_a_1079_ = v___x_1076_;
goto v___jp_1078_;
}
v___jp_1078_:
{
if (v_a_1079_ == 0)
{
size_t v___x_1080_; size_t v___x_1081_; 
v___x_1080_ = ((size_t)1ULL);
v___x_1081_ = lean_usize_add(v_i_1069_, v___x_1080_);
v_i_1069_ = v___x_1081_;
goto _start;
}
else
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_dec_ref(v_mvar_1067_);
v___x_1083_ = lean_box(v___x_1077_);
v___x_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
return v___x_1084_;
}
}
}
else
{
uint8_t v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; 
lean_dec_ref(v_mvar_1067_);
v___x_1108_ = 0;
v___x_1109_ = lean_box(v___x_1108_);
v___x_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1110_, 0, v___x_1109_);
return v___x_1110_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___boxed(lean_object* v_mvar_1111_, lean_object* v_as_1112_, lean_object* v_i_1113_, lean_object* v_stop_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
size_t v_i_boxed_1120_; size_t v_stop_boxed_1121_; lean_object* v_res_1122_; 
v_i_boxed_1120_ = lean_unbox_usize(v_i_1113_);
lean_dec(v_i_1113_);
v_stop_boxed_1121_ = lean_unbox_usize(v_stop_1114_);
lean_dec(v_stop_1114_);
v_res_1122_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(v_mvar_1111_, v_as_1112_, v_i_boxed_1120_, v_stop_boxed_1121_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec_ref(v_as_1112_);
return v_res_1122_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(lean_object* v_mvar_1123_, lean_object* v_otherMVars_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_){
_start:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; uint8_t v___x_1132_; 
v___x_1130_ = lean_unsigned_to_nat(0u);
v___x_1131_ = lean_array_get_size(v_otherMVars_1124_);
v___x_1132_ = lean_nat_dec_lt(v___x_1130_, v___x_1131_);
if (v___x_1132_ == 0)
{
lean_object* v___x_1133_; lean_object* v___x_1134_; 
lean_dec_ref(v_mvar_1123_);
v___x_1133_ = lean_box(v___x_1132_);
v___x_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1134_, 0, v___x_1133_);
return v___x_1134_;
}
else
{
if (v___x_1132_ == 0)
{
lean_object* v___x_1135_; lean_object* v___x_1136_; 
lean_dec_ref(v_mvar_1123_);
v___x_1135_ = lean_box(v___x_1132_);
v___x_1136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1136_, 0, v___x_1135_);
return v___x_1136_;
}
else
{
size_t v___x_1137_; size_t v___x_1138_; lean_object* v___x_1139_; 
v___x_1137_ = ((size_t)0ULL);
v___x_1138_ = lean_usize_of_nat(v___x_1131_);
v___x_1139_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(v_mvar_1123_, v_otherMVars_1124_, v___x_1137_, v___x_1138_, v_a_1125_, v_a_1126_, v_a_1127_, v_a_1128_);
return v___x_1139_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___boxed(lean_object* v_mvar_1140_, lean_object* v_otherMVars_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v_a_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(v_mvar_1140_, v_otherMVars_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_);
lean_dec(v_a_1145_);
lean_dec_ref(v_a_1144_);
lean_dec(v_a_1143_);
lean_dec_ref(v_a_1142_);
lean_dec_ref(v_otherMVars_1141_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(lean_object* v_mvars_1148_, lean_object* v_as_1149_, size_t v_i_1150_, size_t v_stop_1151_, lean_object* v_b_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
uint8_t v___x_1158_; 
v___x_1158_ = lean_usize_dec_eq(v_i_1150_, v_stop_1151_);
if (v___x_1158_ == 0)
{
lean_object* v_fst_1159_; lean_object* v_snd_1160_; lean_object* v___x_1162_; uint8_t v_isShared_1163_; uint8_t v_isSharedCheck_1190_; 
v_fst_1159_ = lean_ctor_get(v_b_1152_, 0);
v_snd_1160_ = lean_ctor_get(v_b_1152_, 1);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_b_1152_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1162_ = v_b_1152_;
v_isShared_1163_ = v_isSharedCheck_1190_;
goto v_resetjp_1161_;
}
else
{
lean_inc(v_snd_1160_);
lean_inc(v_fst_1159_);
lean_dec(v_b_1152_);
v___x_1162_ = lean_box(0);
v_isShared_1163_ = v_isSharedCheck_1190_;
goto v_resetjp_1161_;
}
v_resetjp_1161_:
{
lean_object* v___x_1164_; lean_object* v_currMVarId_1165_; lean_object* v___x_1166_; 
v___x_1164_ = lean_array_uget_borrowed(v_as_1149_, v_i_1150_);
v_currMVarId_1165_ = l_Lean_Expr_mvarId_x21(v___x_1164_);
lean_inc(v___x_1164_);
v___x_1166_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(v___x_1164_, v_mvars_1148_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
if (lean_obj_tag(v___x_1166_) == 0)
{
lean_object* v_a_1167_; lean_object* v_a_1169_; uint8_t v___x_1173_; 
v_a_1167_ = lean_ctor_get(v___x_1166_, 0);
lean_inc(v_a_1167_);
lean_dec_ref(v___x_1166_);
v___x_1173_ = lean_unbox(v_a_1167_);
lean_dec(v_a_1167_);
if (v___x_1173_ == 0)
{
lean_object* v___x_1174_; lean_object* v___x_1176_; 
v___x_1174_ = lean_array_push(v_fst_1159_, v_currMVarId_1165_);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 0, v___x_1174_);
v___x_1176_ = v___x_1162_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1174_);
lean_ctor_set(v_reuseFailAlloc_1177_, 1, v_snd_1160_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
v_a_1169_ = v___x_1176_;
goto v___jp_1168_;
}
}
else
{
lean_object* v___x_1178_; lean_object* v___x_1180_; 
v___x_1178_ = lean_array_push(v_snd_1160_, v_currMVarId_1165_);
if (v_isShared_1163_ == 0)
{
lean_ctor_set(v___x_1162_, 1, v___x_1178_);
v___x_1180_ = v___x_1162_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1181_; 
v_reuseFailAlloc_1181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1181_, 0, v_fst_1159_);
lean_ctor_set(v_reuseFailAlloc_1181_, 1, v___x_1178_);
v___x_1180_ = v_reuseFailAlloc_1181_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
v_a_1169_ = v___x_1180_;
goto v___jp_1168_;
}
}
v___jp_1168_:
{
size_t v___x_1170_; size_t v___x_1171_; 
v___x_1170_ = ((size_t)1ULL);
v___x_1171_ = lean_usize_add(v_i_1150_, v___x_1170_);
v_i_1150_ = v___x_1171_;
v_b_1152_ = v_a_1169_;
goto _start;
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
lean_dec(v_currMVarId_1165_);
lean_del_object(v___x_1162_);
lean_dec(v_snd_1160_);
lean_dec(v_fst_1159_);
v_a_1182_ = lean_ctor_get(v___x_1166_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1166_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1166_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1166_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
}
else
{
lean_object* v___x_1191_; 
v___x_1191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1191_, 0, v_b_1152_);
return v___x_1191_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0___boxed(lean_object* v_mvars_1192_, lean_object* v_as_1193_, lean_object* v_i_1194_, lean_object* v_stop_1195_, lean_object* v_b_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_){
_start:
{
size_t v_i_boxed_1202_; size_t v_stop_boxed_1203_; lean_object* v_res_1204_; 
v_i_boxed_1202_ = lean_unbox_usize(v_i_1194_);
lean_dec(v_i_1194_);
v_stop_boxed_1203_ = lean_unbox_usize(v_stop_1195_);
lean_dec(v_stop_1195_);
v_res_1204_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(v_mvars_1192_, v_as_1193_, v_i_boxed_1202_, v_stop_boxed_1203_, v_b_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1199_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec_ref(v_as_1193_);
lean_dec_ref(v_mvars_1192_);
return v_res_1204_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0(void){
_start:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = lean_unsigned_to_nat(0u);
v___x_1206_ = lean_mk_empty_array_with_capacity(v___x_1205_);
return v___x_1206_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1(void){
_start:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1207_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0);
v___x_1208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1208_, 0, v___x_1207_);
lean_ctor_set(v___x_1208_, 1, v___x_1207_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(lean_object* v_mvars_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; uint8_t v___x_1218_; 
v___x_1215_ = lean_unsigned_to_nat(0u);
v___x_1216_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1);
v___x_1217_ = lean_array_get_size(v_mvars_1209_);
v___x_1218_ = lean_nat_dec_lt(v___x_1215_, v___x_1217_);
if (v___x_1218_ == 0)
{
lean_object* v___x_1219_; 
v___x_1219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1216_);
return v___x_1219_;
}
else
{
uint8_t v___x_1220_; 
v___x_1220_ = lean_nat_dec_le(v___x_1217_, v___x_1217_);
if (v___x_1220_ == 0)
{
if (v___x_1218_ == 0)
{
lean_object* v___x_1221_; 
v___x_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1216_);
return v___x_1221_;
}
else
{
size_t v___x_1222_; size_t v___x_1223_; lean_object* v___x_1224_; 
v___x_1222_ = ((size_t)0ULL);
v___x_1223_ = lean_usize_of_nat(v___x_1217_);
v___x_1224_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(v_mvars_1209_, v_mvars_1209_, v___x_1222_, v___x_1223_, v___x_1216_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_);
return v___x_1224_;
}
}
else
{
size_t v___x_1225_; size_t v___x_1226_; lean_object* v___x_1227_; 
v___x_1225_ = ((size_t)0ULL);
v___x_1226_ = lean_usize_of_nat(v___x_1217_);
v___x_1227_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(v_mvars_1209_, v_mvars_1209_, v___x_1225_, v___x_1226_, v___x_1216_, v_a_1210_, v_a_1211_, v_a_1212_, v_a_1213_);
return v___x_1227_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___boxed(lean_object* v_mvars_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_){
_start:
{
lean_object* v_res_1234_; 
v_res_1234_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1228_, v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_);
lean_dec(v_a_1232_);
lean_dec_ref(v_a_1231_);
lean_dec(v_a_1230_);
lean_dec_ref(v_a_1229_);
lean_dec_ref(v_mvars_1228_);
return v_res_1234_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(lean_object* v_a_1235_, lean_object* v_a_1236_){
_start:
{
if (lean_obj_tag(v_a_1235_) == 0)
{
lean_object* v___x_1237_; 
v___x_1237_ = l_List_reverse___redArg(v_a_1236_);
return v___x_1237_;
}
else
{
lean_object* v_head_1238_; lean_object* v_tail_1239_; lean_object* v___x_1241_; uint8_t v_isShared_1242_; uint8_t v_isSharedCheck_1248_; 
v_head_1238_ = lean_ctor_get(v_a_1235_, 0);
v_tail_1239_ = lean_ctor_get(v_a_1235_, 1);
v_isSharedCheck_1248_ = !lean_is_exclusive(v_a_1235_);
if (v_isSharedCheck_1248_ == 0)
{
v___x_1241_ = v_a_1235_;
v_isShared_1242_ = v_isSharedCheck_1248_;
goto v_resetjp_1240_;
}
else
{
lean_inc(v_tail_1239_);
lean_inc(v_head_1238_);
lean_dec(v_a_1235_);
v___x_1241_ = lean_box(0);
v_isShared_1242_ = v_isSharedCheck_1248_;
goto v_resetjp_1240_;
}
v_resetjp_1240_:
{
lean_object* v___x_1243_; lean_object* v___x_1245_; 
v___x_1243_ = l_Lean_Expr_mvarId_x21(v_head_1238_);
lean_dec(v_head_1238_);
if (v_isShared_1242_ == 0)
{
lean_ctor_set(v___x_1241_, 1, v_a_1236_);
lean_ctor_set(v___x_1241_, 0, v___x_1243_);
v___x_1245_ = v___x_1241_;
goto v_reusejp_1244_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v___x_1243_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v_a_1236_);
v___x_1245_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1244_;
}
v_reusejp_1244_:
{
v_a_1235_ = v_tail_1239_;
v_a_1236_ = v___x_1245_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(lean_object* v_mvars_1249_, uint8_t v_x_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_, lean_object* v_a_1254_){
_start:
{
switch(v_x_1250_)
{
case 0:
{
lean_object* v___x_1256_; 
v___x_1256_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1249_, v_a_1251_, v_a_1252_, v_a_1253_, v_a_1254_);
lean_dec_ref(v_mvars_1249_);
if (lean_obj_tag(v___x_1256_) == 0)
{
lean_object* v_a_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1269_; 
v_a_1257_ = lean_ctor_get(v___x_1256_, 0);
v_isSharedCheck_1269_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1269_ == 0)
{
v___x_1259_ = v___x_1256_;
v_isShared_1260_ = v_isSharedCheck_1269_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_a_1257_);
lean_dec(v___x_1256_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1269_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v_fst_1261_; lean_object* v_snd_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1267_; 
v_fst_1261_ = lean_ctor_get(v_a_1257_, 0);
lean_inc(v_fst_1261_);
v_snd_1262_ = lean_ctor_get(v_a_1257_, 1);
lean_inc(v_snd_1262_);
lean_dec(v_a_1257_);
v___x_1263_ = lean_array_to_list(v_fst_1261_);
v___x_1264_ = lean_array_to_list(v_snd_1262_);
v___x_1265_ = l_List_appendTR___redArg(v___x_1263_, v___x_1264_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v___x_1265_);
v___x_1267_ = v___x_1259_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1268_; 
v_reuseFailAlloc_1268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1268_, 0, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1268_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
return v___x_1267_;
}
}
}
else
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1277_; 
v_a_1270_ = lean_ctor_get(v___x_1256_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1256_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1272_ = v___x_1256_;
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1256_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1277_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v___x_1275_; 
if (v_isShared_1273_ == 0)
{
v___x_1275_ = v___x_1272_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v_a_1270_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
case 1:
{
lean_object* v___x_1278_; 
v___x_1278_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1249_, v_a_1251_, v_a_1252_, v_a_1253_, v_a_1254_);
lean_dec_ref(v_mvars_1249_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_object* v_a_1279_; lean_object* v___x_1281_; uint8_t v_isShared_1282_; uint8_t v_isSharedCheck_1288_; 
v_a_1279_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1281_ = v___x_1278_;
v_isShared_1282_ = v_isSharedCheck_1288_;
goto v_resetjp_1280_;
}
else
{
lean_inc(v_a_1279_);
lean_dec(v___x_1278_);
v___x_1281_ = lean_box(0);
v_isShared_1282_ = v_isSharedCheck_1288_;
goto v_resetjp_1280_;
}
v_resetjp_1280_:
{
lean_object* v_fst_1283_; lean_object* v___x_1284_; lean_object* v___x_1286_; 
v_fst_1283_ = lean_ctor_get(v_a_1279_, 0);
lean_inc(v_fst_1283_);
lean_dec(v_a_1279_);
v___x_1284_ = lean_array_to_list(v_fst_1283_);
if (v_isShared_1282_ == 0)
{
lean_ctor_set(v___x_1281_, 0, v___x_1284_);
v___x_1286_ = v___x_1281_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v___x_1284_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
v_a_1289_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1278_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1278_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
default: 
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; 
v___x_1297_ = lean_array_to_list(v_mvars_1249_);
v___x_1298_ = lean_box(0);
v___x_1299_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(v___x_1297_, v___x_1298_);
v___x_1300_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1299_);
return v___x_1300_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals___boxed(lean_object* v_mvars_1301_, lean_object* v_x_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_){
_start:
{
uint8_t v_x_820__boxed_1308_; lean_object* v_res_1309_; 
v_x_820__boxed_1308_ = lean_unbox(v_x_1302_);
v_res_1309_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(v_mvars_1301_, v_x_820__boxed_1308_, v_a_1303_, v_a_1304_, v_a_1305_, v_a_1306_);
lean_dec(v_a_1306_);
lean_dec_ref(v_a_1305_);
lean_dec(v_a_1304_);
lean_dec_ref(v_a_1303_);
return v_res_1309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(uint8_t v_approx_1310_, lean_object* v_a_1311_, lean_object* v_b_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_){
_start:
{
if (v_approx_1310_ == 0)
{
lean_object* v___x_1318_; 
v___x_1318_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1311_, v_b_1312_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_);
return v___x_1318_;
}
else
{
lean_object* v___x_1319_; uint8_t v_constApprox_1320_; uint8_t v_isDefEqStuckEx_1321_; uint8_t v_unificationHints_1322_; uint8_t v_proofIrrelevance_1323_; uint8_t v_assignSyntheticOpaque_1324_; uint8_t v_offsetCnstrs_1325_; uint8_t v_transparency_1326_; uint8_t v_etaStruct_1327_; uint8_t v_univApprox_1328_; uint8_t v_iota_1329_; uint8_t v_beta_1330_; uint8_t v_proj_1331_; uint8_t v_zeta_1332_; uint8_t v_zetaDelta_1333_; uint8_t v_zetaUnused_1334_; uint8_t v_zetaHave_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1356_; 
v___x_1319_ = l_Lean_Meta_Context_config(v_a_1313_);
v_constApprox_1320_ = lean_ctor_get_uint8(v___x_1319_, 3);
v_isDefEqStuckEx_1321_ = lean_ctor_get_uint8(v___x_1319_, 4);
v_unificationHints_1322_ = lean_ctor_get_uint8(v___x_1319_, 5);
v_proofIrrelevance_1323_ = lean_ctor_get_uint8(v___x_1319_, 6);
v_assignSyntheticOpaque_1324_ = lean_ctor_get_uint8(v___x_1319_, 7);
v_offsetCnstrs_1325_ = lean_ctor_get_uint8(v___x_1319_, 8);
v_transparency_1326_ = lean_ctor_get_uint8(v___x_1319_, 9);
v_etaStruct_1327_ = lean_ctor_get_uint8(v___x_1319_, 10);
v_univApprox_1328_ = lean_ctor_get_uint8(v___x_1319_, 11);
v_iota_1329_ = lean_ctor_get_uint8(v___x_1319_, 12);
v_beta_1330_ = lean_ctor_get_uint8(v___x_1319_, 13);
v_proj_1331_ = lean_ctor_get_uint8(v___x_1319_, 14);
v_zeta_1332_ = lean_ctor_get_uint8(v___x_1319_, 15);
v_zetaDelta_1333_ = lean_ctor_get_uint8(v___x_1319_, 16);
v_zetaUnused_1334_ = lean_ctor_get_uint8(v___x_1319_, 17);
v_zetaHave_1335_ = lean_ctor_get_uint8(v___x_1319_, 18);
v_isSharedCheck_1356_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1356_ == 0)
{
v___x_1337_ = v___x_1319_;
v_isShared_1338_ = v_isSharedCheck_1356_;
goto v_resetjp_1336_;
}
else
{
lean_dec(v___x_1319_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1356_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 3, v_constApprox_1320_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 4, v_isDefEqStuckEx_1321_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 5, v_unificationHints_1322_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 6, v_proofIrrelevance_1323_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 7, v_assignSyntheticOpaque_1324_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 8, v_offsetCnstrs_1325_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 9, v_transparency_1326_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 10, v_etaStruct_1327_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 11, v_univApprox_1328_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 12, v_iota_1329_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 13, v_beta_1330_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 14, v_proj_1331_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 15, v_zeta_1332_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 16, v_zetaDelta_1333_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 17, v_zetaUnused_1334_);
lean_ctor_set_uint8(v_reuseFailAlloc_1355_, 18, v_zetaHave_1335_);
v___x_1340_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
uint8_t v_trackZetaDelta_1341_; lean_object* v_zetaDeltaSet_1342_; lean_object* v_lctx_1343_; lean_object* v_localInstances_1344_; lean_object* v_defEqCtx_x3f_1345_; lean_object* v_synthPendingDepth_1346_; lean_object* v_canUnfold_x3f_1347_; uint8_t v_univApprox_1348_; uint8_t v_inTypeClassResolution_1349_; uint8_t v_cacheInferType_1350_; uint64_t v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; 
lean_ctor_set_uint8(v___x_1340_, 0, v_approx_1310_);
lean_ctor_set_uint8(v___x_1340_, 1, v_approx_1310_);
lean_ctor_set_uint8(v___x_1340_, 2, v_approx_1310_);
v_trackZetaDelta_1341_ = lean_ctor_get_uint8(v_a_1313_, sizeof(void*)*7);
v_zetaDeltaSet_1342_ = lean_ctor_get(v_a_1313_, 1);
v_lctx_1343_ = lean_ctor_get(v_a_1313_, 2);
v_localInstances_1344_ = lean_ctor_get(v_a_1313_, 3);
v_defEqCtx_x3f_1345_ = lean_ctor_get(v_a_1313_, 4);
v_synthPendingDepth_1346_ = lean_ctor_get(v_a_1313_, 5);
v_canUnfold_x3f_1347_ = lean_ctor_get(v_a_1313_, 6);
v_univApprox_1348_ = lean_ctor_get_uint8(v_a_1313_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1349_ = lean_ctor_get_uint8(v_a_1313_, sizeof(void*)*7 + 2);
v_cacheInferType_1350_ = lean_ctor_get_uint8(v_a_1313_, sizeof(void*)*7 + 3);
v___x_1351_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1340_);
v___x_1352_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1352_, 0, v___x_1340_);
lean_ctor_set_uint64(v___x_1352_, sizeof(void*)*1, v___x_1351_);
lean_inc(v_canUnfold_x3f_1347_);
lean_inc(v_synthPendingDepth_1346_);
lean_inc(v_defEqCtx_x3f_1345_);
lean_inc_ref(v_localInstances_1344_);
lean_inc_ref(v_lctx_1343_);
lean_inc(v_zetaDeltaSet_1342_);
v___x_1353_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
lean_ctor_set(v___x_1353_, 1, v_zetaDeltaSet_1342_);
lean_ctor_set(v___x_1353_, 2, v_lctx_1343_);
lean_ctor_set(v___x_1353_, 3, v_localInstances_1344_);
lean_ctor_set(v___x_1353_, 4, v_defEqCtx_x3f_1345_);
lean_ctor_set(v___x_1353_, 5, v_synthPendingDepth_1346_);
lean_ctor_set(v___x_1353_, 6, v_canUnfold_x3f_1347_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*7, v_trackZetaDelta_1341_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*7 + 1, v_univApprox_1348_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1349_);
lean_ctor_set_uint8(v___x_1353_, sizeof(void*)*7 + 3, v_cacheInferType_1350_);
v___x_1354_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1311_, v_b_1312_, v___x_1353_, v_a_1314_, v_a_1315_, v_a_1316_);
lean_dec_ref(v___x_1353_);
return v___x_1354_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply___boxed(lean_object* v_approx_1357_, lean_object* v_a_1358_, lean_object* v_b_1359_, lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_){
_start:
{
uint8_t v_approx_boxed_1365_; lean_object* v_res_1366_; 
v_approx_boxed_1365_ = lean_unbox(v_approx_1357_);
v_res_1366_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_approx_boxed_1365_, v_a_1358_, v_b_1359_, v_a_1360_, v_a_1361_, v_a_1362_, v_a_1363_);
lean_dec(v_a_1363_);
lean_dec_ref(v_a_1362_);
lean_dec(v_a_1361_);
lean_dec_ref(v_a_1360_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(lean_object* v_mvarId_1367_, lean_object* v_cfg_1368_, lean_object* v_term_x3f_1369_, lean_object* v_targetType_1370_, lean_object* v_eType_1371_, lean_object* v_rangeNumArgs_1372_, lean_object* v_i_1373_, lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_){
_start:
{
lean_object* v_lower_1379_; lean_object* v_upper_1380_; uint8_t v___x_1381_; 
v_lower_1379_ = lean_ctor_get(v_rangeNumArgs_1372_, 0);
v_upper_1380_ = lean_ctor_get(v_rangeNumArgs_1372_, 1);
v___x_1381_ = lean_nat_dec_lt(v_i_1373_, v_upper_1380_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; uint8_t v___x_1383_; 
lean_dec(v_i_1373_);
v___x_1382_ = lean_unsigned_to_nat(0u);
v___x_1383_ = lean_nat_dec_eq(v_lower_1379_, v___x_1382_);
if (v___x_1383_ == 0)
{
lean_object* v___x_1384_; uint8_t v___x_1385_; lean_object* v___x_1386_; 
lean_inc(v_lower_1379_);
v___x_1384_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1384_, 0, v_lower_1379_);
v___x_1385_ = 0;
lean_inc_ref(v_eType_1371_);
v___x_1386_ = l_Lean_Meta_forallMetaTelescopeReducing(v_eType_1371_, v___x_1384_, v___x_1385_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v_a_1387_; lean_object* v_snd_1388_; lean_object* v_snd_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v_a_1387_ = lean_ctor_get(v___x_1386_, 0);
lean_inc(v_a_1387_);
lean_dec_ref(v___x_1386_);
v_snd_1388_ = lean_ctor_get(v_a_1387_, 1);
lean_inc(v_snd_1388_);
lean_dec(v_a_1387_);
v_snd_1389_ = lean_ctor_get(v_snd_1388_, 1);
lean_inc(v_snd_1389_);
lean_dec(v_snd_1388_);
v___x_1390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1390_, 0, v_snd_1389_);
v___x_1391_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_1367_, v_eType_1371_, v___x_1390_, v_targetType_1370_, v_term_x3f_1369_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_);
return v___x_1391_;
}
else
{
lean_object* v_a_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1399_; 
lean_dec_ref(v_eType_1371_);
lean_dec_ref(v_targetType_1370_);
lean_dec(v_term_x3f_1369_);
lean_dec(v_mvarId_1367_);
v_a_1392_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1399_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1399_ == 0)
{
v___x_1394_ = v___x_1386_;
v_isShared_1395_ = v_isSharedCheck_1399_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_a_1392_);
lean_dec(v___x_1386_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1399_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1397_; 
if (v_isShared_1395_ == 0)
{
v___x_1397_ = v___x_1394_;
goto v_reusejp_1396_;
}
else
{
lean_object* v_reuseFailAlloc_1398_; 
v_reuseFailAlloc_1398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1398_, 0, v_a_1392_);
v___x_1397_ = v_reuseFailAlloc_1398_;
goto v_reusejp_1396_;
}
v_reusejp_1396_:
{
return v___x_1397_;
}
}
}
}
else
{
lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1400_ = lean_box(0);
v___x_1401_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_1367_, v_eType_1371_, v___x_1400_, v_targetType_1370_, v_term_x3f_1369_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_);
return v___x_1401_;
}
}
else
{
lean_object* v___x_1402_; 
v___x_1402_ = l_Lean_Meta_saveState___redArg(v_a_1375_, v_a_1377_);
if (lean_obj_tag(v___x_1402_) == 0)
{
lean_object* v_a_1403_; lean_object* v___x_1404_; uint8_t v___x_1405_; lean_object* v___x_1406_; 
v_a_1403_ = lean_ctor_get(v___x_1402_, 0);
lean_inc(v_a_1403_);
lean_dec_ref(v___x_1402_);
lean_inc(v_i_1373_);
v___x_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1404_, 0, v_i_1373_);
v___x_1405_ = 0;
lean_inc_ref(v_eType_1371_);
v___x_1406_ = l_Lean_Meta_forallMetaTelescopeReducing(v_eType_1371_, v___x_1404_, v___x_1405_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_);
if (lean_obj_tag(v___x_1406_) == 0)
{
lean_object* v_a_1407_; lean_object* v_snd_1408_; lean_object* v_fst_1409_; lean_object* v_fst_1410_; lean_object* v_snd_1411_; lean_object* v___x_1413_; uint8_t v_isShared_1414_; uint8_t v_isSharedCheck_1449_; 
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
lean_inc(v_a_1407_);
lean_dec_ref(v___x_1406_);
v_snd_1408_ = lean_ctor_get(v_a_1407_, 1);
lean_inc(v_snd_1408_);
v_fst_1409_ = lean_ctor_get(v_a_1407_, 0);
lean_inc(v_fst_1409_);
lean_dec(v_a_1407_);
v_fst_1410_ = lean_ctor_get(v_snd_1408_, 0);
v_snd_1411_ = lean_ctor_get(v_snd_1408_, 1);
v_isSharedCheck_1449_ = !lean_is_exclusive(v_snd_1408_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1413_ = v_snd_1408_;
v_isShared_1414_ = v_isSharedCheck_1449_;
goto v_resetjp_1412_;
}
else
{
lean_inc(v_snd_1411_);
lean_inc(v_fst_1410_);
lean_dec(v_snd_1408_);
v___x_1413_ = lean_box(0);
v_isShared_1414_ = v_isSharedCheck_1449_;
goto v_resetjp_1412_;
}
v_resetjp_1412_:
{
uint8_t v_approx_1415_; lean_object* v___x_1416_; 
v_approx_1415_ = lean_ctor_get_uint8(v_cfg_1368_, 3);
lean_inc_ref(v_targetType_1370_);
v___x_1416_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_approx_1415_, v_snd_1411_, v_targetType_1370_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_);
if (lean_obj_tag(v___x_1416_) == 0)
{
lean_object* v_a_1417_; lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1440_; 
v_a_1417_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1419_ = v___x_1416_;
v_isShared_1420_ = v_isSharedCheck_1440_;
goto v_resetjp_1418_;
}
else
{
lean_inc(v_a_1417_);
lean_dec(v___x_1416_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1440_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
uint8_t v___x_1421_; 
v___x_1421_ = lean_unbox(v_a_1417_);
lean_dec(v_a_1417_);
if (v___x_1421_ == 0)
{
lean_object* v___x_1422_; 
lean_del_object(v___x_1419_);
lean_del_object(v___x_1413_);
lean_dec(v_fst_1410_);
lean_dec(v_fst_1409_);
v___x_1422_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1403_, v_a_1375_, v_a_1377_);
lean_dec(v_a_1403_);
if (lean_obj_tag(v___x_1422_) == 0)
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_dec_ref(v___x_1422_);
v___x_1423_ = lean_unsigned_to_nat(1u);
v___x_1424_ = lean_nat_add(v_i_1373_, v___x_1423_);
lean_dec(v_i_1373_);
v_i_1373_ = v___x_1424_;
goto _start;
}
else
{
lean_object* v_a_1426_; lean_object* v___x_1428_; uint8_t v_isShared_1429_; uint8_t v_isSharedCheck_1433_; 
lean_dec(v_i_1373_);
lean_dec_ref(v_eType_1371_);
lean_dec_ref(v_targetType_1370_);
lean_dec(v_term_x3f_1369_);
lean_dec(v_mvarId_1367_);
v_a_1426_ = lean_ctor_get(v___x_1422_, 0);
v_isSharedCheck_1433_ = !lean_is_exclusive(v___x_1422_);
if (v_isSharedCheck_1433_ == 0)
{
v___x_1428_ = v___x_1422_;
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
else
{
lean_inc(v_a_1426_);
lean_dec(v___x_1422_);
v___x_1428_ = lean_box(0);
v_isShared_1429_ = v_isSharedCheck_1433_;
goto v_resetjp_1427_;
}
v_resetjp_1427_:
{
lean_object* v___x_1431_; 
if (v_isShared_1429_ == 0)
{
v___x_1431_ = v___x_1428_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_a_1426_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
}
}
else
{
lean_object* v___x_1435_; 
lean_dec(v_a_1403_);
lean_dec(v_i_1373_);
lean_dec_ref(v_eType_1371_);
lean_dec_ref(v_targetType_1370_);
lean_dec(v_term_x3f_1369_);
lean_dec(v_mvarId_1367_);
if (v_isShared_1414_ == 0)
{
lean_ctor_set(v___x_1413_, 1, v_fst_1410_);
lean_ctor_set(v___x_1413_, 0, v_fst_1409_);
v___x_1435_ = v___x_1413_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_fst_1409_);
lean_ctor_set(v_reuseFailAlloc_1439_, 1, v_fst_1410_);
v___x_1435_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
lean_object* v___x_1437_; 
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 0, v___x_1435_);
v___x_1437_ = v___x_1419_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
return v___x_1437_;
}
}
}
}
}
else
{
lean_object* v_a_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1448_; 
lean_del_object(v___x_1413_);
lean_dec(v_fst_1410_);
lean_dec(v_fst_1409_);
lean_dec(v_a_1403_);
lean_dec(v_i_1373_);
lean_dec_ref(v_eType_1371_);
lean_dec_ref(v_targetType_1370_);
lean_dec(v_term_x3f_1369_);
lean_dec(v_mvarId_1367_);
v_a_1441_ = lean_ctor_get(v___x_1416_, 0);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1416_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1443_ = v___x_1416_;
v_isShared_1444_ = v_isSharedCheck_1448_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_a_1441_);
lean_dec(v___x_1416_);
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
lean_object* v_a_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1457_; 
lean_dec(v_a_1403_);
lean_dec(v_i_1373_);
lean_dec_ref(v_eType_1371_);
lean_dec_ref(v_targetType_1370_);
lean_dec(v_term_x3f_1369_);
lean_dec(v_mvarId_1367_);
v_a_1450_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1457_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1457_ == 0)
{
v___x_1452_ = v___x_1406_;
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_a_1450_);
lean_dec(v___x_1406_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1457_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1455_; 
if (v_isShared_1453_ == 0)
{
v___x_1455_ = v___x_1452_;
goto v_reusejp_1454_;
}
else
{
lean_object* v_reuseFailAlloc_1456_; 
v_reuseFailAlloc_1456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1456_, 0, v_a_1450_);
v___x_1455_ = v_reuseFailAlloc_1456_;
goto v_reusejp_1454_;
}
v_reusejp_1454_:
{
return v___x_1455_;
}
}
}
}
else
{
lean_object* v_a_1458_; lean_object* v___x_1460_; uint8_t v_isShared_1461_; uint8_t v_isSharedCheck_1465_; 
lean_dec(v_i_1373_);
lean_dec_ref(v_eType_1371_);
lean_dec_ref(v_targetType_1370_);
lean_dec(v_term_x3f_1369_);
lean_dec(v_mvarId_1367_);
v_a_1458_ = lean_ctor_get(v___x_1402_, 0);
v_isSharedCheck_1465_ = !lean_is_exclusive(v___x_1402_);
if (v_isSharedCheck_1465_ == 0)
{
v___x_1460_ = v___x_1402_;
v_isShared_1461_ = v_isSharedCheck_1465_;
goto v_resetjp_1459_;
}
else
{
lean_inc(v_a_1458_);
lean_dec(v___x_1402_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go___boxed(lean_object* v_mvarId_1466_, lean_object* v_cfg_1467_, lean_object* v_term_x3f_1468_, lean_object* v_targetType_1469_, lean_object* v_eType_1470_, lean_object* v_rangeNumArgs_1471_, lean_object* v_i_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_){
_start:
{
lean_object* v_res_1478_; 
v_res_1478_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(v_mvarId_1466_, v_cfg_1467_, v_term_x3f_1468_, v_targetType_1469_, v_eType_1470_, v_rangeNumArgs_1471_, v_i_1472_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_);
lean_dec(v_a_1476_);
lean_dec_ref(v_a_1475_);
lean_dec(v_a_1474_);
lean_dec_ref(v_a_1473_);
lean_dec_ref(v_rangeNumArgs_1471_);
lean_dec_ref(v_cfg_1467_);
return v_res_1478_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter___redArg(lean_object* v_x_1479_, lean_object* v_h__1_1480_){
_start:
{
lean_object* v_snd_1481_; lean_object* v_fst_1482_; lean_object* v_fst_1483_; lean_object* v_snd_1484_; lean_object* v___x_1485_; 
v_snd_1481_ = lean_ctor_get(v_x_1479_, 1);
lean_inc(v_snd_1481_);
v_fst_1482_ = lean_ctor_get(v_x_1479_, 0);
lean_inc(v_fst_1482_);
lean_dec_ref(v_x_1479_);
v_fst_1483_ = lean_ctor_get(v_snd_1481_, 0);
lean_inc(v_fst_1483_);
v_snd_1484_ = lean_ctor_get(v_snd_1481_, 1);
lean_inc(v_snd_1484_);
lean_dec(v_snd_1481_);
v___x_1485_ = lean_apply_3(v_h__1_1480_, v_fst_1482_, v_fst_1483_, v_snd_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter(lean_object* v_motive_1486_, lean_object* v_x_1487_, lean_object* v_h__1_1488_){
_start:
{
lean_object* v_snd_1489_; lean_object* v_fst_1490_; lean_object* v_fst_1491_; lean_object* v_snd_1492_; lean_object* v___x_1493_; 
v_snd_1489_ = lean_ctor_get(v_x_1487_, 1);
lean_inc(v_snd_1489_);
v_fst_1490_ = lean_ctor_get(v_x_1487_, 0);
lean_inc(v_fst_1490_);
lean_dec_ref(v_x_1487_);
v_fst_1491_ = lean_ctor_get(v_snd_1489_, 0);
lean_inc(v_fst_1491_);
v_snd_1492_ = lean_ctor_get(v_snd_1489_, 1);
lean_inc(v_snd_1492_);
lean_dec(v_snd_1489_);
v___x_1493_ = lean_apply_3(v_h__1_1488_, v_fst_1490_, v_fst_1491_, v_snd_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(lean_object* v_e_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_){
_start:
{
uint8_t v___x_1498_; 
v___x_1498_ = l_Lean_Expr_hasMVar(v_e_1494_);
if (v___x_1498_ == 0)
{
lean_object* v___x_1499_; 
v___x_1499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1499_, 0, v_e_1494_);
return v___x_1499_;
}
else
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v_mctx_1502_; lean_object* v___x_1503_; lean_object* v_fst_1504_; lean_object* v_snd_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v_cache_1508_; lean_object* v_zetaDeltaFVarIds_1509_; lean_object* v_postponed_1510_; lean_object* v_diag_1511_; lean_object* v___x_1513_; uint8_t v_isShared_1514_; uint8_t v_isSharedCheck_1520_; 
v___x_1500_ = lean_st_ref_get(v___y_1496_);
lean_dec(v___x_1500_);
v___x_1501_ = lean_st_ref_get(v___y_1495_);
v_mctx_1502_ = lean_ctor_get(v___x_1501_, 0);
lean_inc_ref(v_mctx_1502_);
lean_dec(v___x_1501_);
v___x_1503_ = l_Lean_instantiateMVarsCore(v_mctx_1502_, v_e_1494_);
v_fst_1504_ = lean_ctor_get(v___x_1503_, 0);
lean_inc(v_fst_1504_);
v_snd_1505_ = lean_ctor_get(v___x_1503_, 1);
lean_inc(v_snd_1505_);
lean_dec_ref(v___x_1503_);
v___x_1506_ = lean_st_ref_get(v___y_1496_);
lean_dec(v___x_1506_);
v___x_1507_ = lean_st_ref_take(v___y_1495_);
v_cache_1508_ = lean_ctor_get(v___x_1507_, 1);
v_zetaDeltaFVarIds_1509_ = lean_ctor_get(v___x_1507_, 2);
v_postponed_1510_ = lean_ctor_get(v___x_1507_, 3);
v_diag_1511_ = lean_ctor_get(v___x_1507_, 4);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1507_);
if (v_isSharedCheck_1520_ == 0)
{
lean_object* v_unused_1521_; 
v_unused_1521_ = lean_ctor_get(v___x_1507_, 0);
lean_dec(v_unused_1521_);
v___x_1513_ = v___x_1507_;
v_isShared_1514_ = v_isSharedCheck_1520_;
goto v_resetjp_1512_;
}
else
{
lean_inc(v_diag_1511_);
lean_inc(v_postponed_1510_);
lean_inc(v_zetaDeltaFVarIds_1509_);
lean_inc(v_cache_1508_);
lean_dec(v___x_1507_);
v___x_1513_ = lean_box(0);
v_isShared_1514_ = v_isSharedCheck_1520_;
goto v_resetjp_1512_;
}
v_resetjp_1512_:
{
lean_object* v___x_1516_; 
if (v_isShared_1514_ == 0)
{
lean_ctor_set(v___x_1513_, 0, v_snd_1505_);
v___x_1516_ = v___x_1513_;
goto v_reusejp_1515_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_snd_1505_);
lean_ctor_set(v_reuseFailAlloc_1519_, 1, v_cache_1508_);
lean_ctor_set(v_reuseFailAlloc_1519_, 2, v_zetaDeltaFVarIds_1509_);
lean_ctor_set(v_reuseFailAlloc_1519_, 3, v_postponed_1510_);
lean_ctor_set(v_reuseFailAlloc_1519_, 4, v_diag_1511_);
v___x_1516_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1515_;
}
v_reusejp_1515_:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1517_ = lean_st_ref_set(v___y_1495_, v___x_1516_);
v___x_1518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1518_, 0, v_fst_1504_);
return v___x_1518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg___boxed(lean_object* v_e_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1522_, v___y_1523_, v___y_1524_);
lean_dec(v___y_1524_);
lean_dec(v___y_1523_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(lean_object* v_e_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_){
_start:
{
lean_object* v___x_1533_; 
v___x_1533_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1527_, v___y_1529_, v___y_1531_);
return v___x_1533_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___boxed(lean_object* v_e_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(v_e_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_);
lean_dec(v___y_1538_);
lean_dec_ref(v___y_1537_);
lean_dec(v___y_1536_);
lean_dec_ref(v___y_1535_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(lean_object* v_mvarId_1541_, lean_object* v_x_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_){
_start:
{
lean_object* v___x_1548_; 
v___x_1548_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1541_, v_x_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_);
if (lean_obj_tag(v___x_1548_) == 0)
{
lean_object* v_a_1549_; lean_object* v___x_1551_; uint8_t v_isShared_1552_; uint8_t v_isSharedCheck_1556_; 
v_a_1549_ = lean_ctor_get(v___x_1548_, 0);
v_isSharedCheck_1556_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1551_ = v___x_1548_;
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
else
{
lean_inc(v_a_1549_);
lean_dec(v___x_1548_);
v___x_1551_ = lean_box(0);
v_isShared_1552_ = v_isSharedCheck_1556_;
goto v_resetjp_1550_;
}
v_resetjp_1550_:
{
lean_object* v___x_1554_; 
if (v_isShared_1552_ == 0)
{
v___x_1554_ = v___x_1551_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_a_1549_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
v_a_1557_ = lean_ctor_get(v___x_1548_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1548_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1548_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1548_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v___x_1562_; 
if (v_isShared_1560_ == 0)
{
v___x_1562_ = v___x_1559_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v_a_1557_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
return v___x_1562_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg___boxed(lean_object* v_mvarId_1565_, lean_object* v_x_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_1565_, v_x_1566_, v___y_1567_, v___y_1568_, v___y_1569_, v___y_1570_);
lean_dec(v___y_1570_);
lean_dec_ref(v___y_1569_);
lean_dec(v___y_1568_);
lean_dec_ref(v___y_1567_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(lean_object* v_00_u03b1_1573_, lean_object* v_mvarId_1574_, lean_object* v_x_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_1574_, v_x_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___boxed(lean_object* v_00_u03b1_1582_, lean_object* v_mvarId_1583_, lean_object* v_x_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(v_00_u03b1_1582_, v_mvarId_1583_, v_x_1584_, v___y_1585_, v___y_1586_, v___y_1587_, v___y_1588_);
lean_dec(v___y_1588_);
lean_dec_ref(v___y_1587_);
lean_dec(v___y_1586_);
lean_dec_ref(v___y_1585_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(lean_object* v_x_1591_, lean_object* v_x_1592_, lean_object* v_x_1593_, lean_object* v_x_1594_){
_start:
{
lean_object* v_ks_1595_; lean_object* v_vs_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1620_; 
v_ks_1595_ = lean_ctor_get(v_x_1591_, 0);
v_vs_1596_ = lean_ctor_get(v_x_1591_, 1);
v_isSharedCheck_1620_ = !lean_is_exclusive(v_x_1591_);
if (v_isSharedCheck_1620_ == 0)
{
v___x_1598_ = v_x_1591_;
v_isShared_1599_ = v_isSharedCheck_1620_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_vs_1596_);
lean_inc(v_ks_1595_);
lean_dec(v_x_1591_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1620_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1600_; uint8_t v___x_1601_; 
v___x_1600_ = lean_array_get_size(v_ks_1595_);
v___x_1601_ = lean_nat_dec_lt(v_x_1592_, v___x_1600_);
if (v___x_1601_ == 0)
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1605_; 
lean_dec(v_x_1592_);
v___x_1602_ = lean_array_push(v_ks_1595_, v_x_1593_);
v___x_1603_ = lean_array_push(v_vs_1596_, v_x_1594_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 1, v___x_1603_);
lean_ctor_set(v___x_1598_, 0, v___x_1602_);
v___x_1605_ = v___x_1598_;
goto v_reusejp_1604_;
}
else
{
lean_object* v_reuseFailAlloc_1606_; 
v_reuseFailAlloc_1606_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1606_, 0, v___x_1602_);
lean_ctor_set(v_reuseFailAlloc_1606_, 1, v___x_1603_);
v___x_1605_ = v_reuseFailAlloc_1606_;
goto v_reusejp_1604_;
}
v_reusejp_1604_:
{
return v___x_1605_;
}
}
else
{
lean_object* v_k_x27_1607_; uint8_t v___x_1608_; 
v_k_x27_1607_ = lean_array_fget_borrowed(v_ks_1595_, v_x_1592_);
v___x_1608_ = l_Lean_instBEqMVarId_beq(v_x_1593_, v_k_x27_1607_);
if (v___x_1608_ == 0)
{
lean_object* v___x_1610_; 
if (v_isShared_1599_ == 0)
{
v___x_1610_ = v___x_1598_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_ks_1595_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v_vs_1596_);
v___x_1610_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = lean_unsigned_to_nat(1u);
v___x_1612_ = lean_nat_add(v_x_1592_, v___x_1611_);
lean_dec(v_x_1592_);
v_x_1591_ = v___x_1610_;
v_x_1592_ = v___x_1612_;
goto _start;
}
}
else
{
lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1618_; 
v___x_1615_ = lean_array_fset(v_ks_1595_, v_x_1592_, v_x_1593_);
v___x_1616_ = lean_array_fset(v_vs_1596_, v_x_1592_, v_x_1594_);
lean_dec(v_x_1592_);
if (v_isShared_1599_ == 0)
{
lean_ctor_set(v___x_1598_, 1, v___x_1616_);
lean_ctor_set(v___x_1598_, 0, v___x_1615_);
v___x_1618_ = v___x_1598_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v___x_1615_);
lean_ctor_set(v_reuseFailAlloc_1619_, 1, v___x_1616_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
return v___x_1618_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(lean_object* v_n_1621_, lean_object* v_k_1622_, lean_object* v_v_1623_){
_start:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1624_ = lean_unsigned_to_nat(0u);
v___x_1625_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(v_n_1621_, v___x_1624_, v_k_1622_, v_v_1623_);
return v___x_1625_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1626_; 
v___x_1626_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1626_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(lean_object* v_x_1627_, size_t v_x_1628_, size_t v_x_1629_, lean_object* v_x_1630_, lean_object* v_x_1631_){
_start:
{
if (lean_obj_tag(v_x_1627_) == 0)
{
lean_object* v_es_1632_; size_t v___x_1633_; size_t v___x_1634_; size_t v___x_1635_; size_t v___x_1636_; lean_object* v_j_1637_; lean_object* v___x_1638_; uint8_t v___x_1639_; 
v_es_1632_ = lean_ctor_get(v_x_1627_, 0);
v___x_1633_ = ((size_t)5ULL);
v___x_1634_ = ((size_t)1ULL);
v___x_1635_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1636_ = lean_usize_land(v_x_1628_, v___x_1635_);
v_j_1637_ = lean_usize_to_nat(v___x_1636_);
v___x_1638_ = lean_array_get_size(v_es_1632_);
v___x_1639_ = lean_nat_dec_lt(v_j_1637_, v___x_1638_);
if (v___x_1639_ == 0)
{
lean_dec(v_j_1637_);
lean_dec(v_x_1631_);
lean_dec(v_x_1630_);
return v_x_1627_;
}
else
{
lean_object* v___x_1641_; uint8_t v_isShared_1642_; uint8_t v_isSharedCheck_1676_; 
lean_inc_ref(v_es_1632_);
v_isSharedCheck_1676_ = !lean_is_exclusive(v_x_1627_);
if (v_isSharedCheck_1676_ == 0)
{
lean_object* v_unused_1677_; 
v_unused_1677_ = lean_ctor_get(v_x_1627_, 0);
lean_dec(v_unused_1677_);
v___x_1641_ = v_x_1627_;
v_isShared_1642_ = v_isSharedCheck_1676_;
goto v_resetjp_1640_;
}
else
{
lean_dec(v_x_1627_);
v___x_1641_ = lean_box(0);
v_isShared_1642_ = v_isSharedCheck_1676_;
goto v_resetjp_1640_;
}
v_resetjp_1640_:
{
lean_object* v_v_1643_; lean_object* v___x_1644_; lean_object* v_xs_x27_1645_; lean_object* v___y_1647_; 
v_v_1643_ = lean_array_fget(v_es_1632_, v_j_1637_);
v___x_1644_ = lean_box(0);
v_xs_x27_1645_ = lean_array_fset(v_es_1632_, v_j_1637_, v___x_1644_);
switch(lean_obj_tag(v_v_1643_))
{
case 0:
{
lean_object* v_key_1652_; lean_object* v_val_1653_; lean_object* v___x_1655_; uint8_t v_isShared_1656_; uint8_t v_isSharedCheck_1663_; 
v_key_1652_ = lean_ctor_get(v_v_1643_, 0);
v_val_1653_ = lean_ctor_get(v_v_1643_, 1);
v_isSharedCheck_1663_ = !lean_is_exclusive(v_v_1643_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1655_ = v_v_1643_;
v_isShared_1656_ = v_isSharedCheck_1663_;
goto v_resetjp_1654_;
}
else
{
lean_inc(v_val_1653_);
lean_inc(v_key_1652_);
lean_dec(v_v_1643_);
v___x_1655_ = lean_box(0);
v_isShared_1656_ = v_isSharedCheck_1663_;
goto v_resetjp_1654_;
}
v_resetjp_1654_:
{
uint8_t v___x_1657_; 
v___x_1657_ = l_Lean_instBEqMVarId_beq(v_x_1630_, v_key_1652_);
if (v___x_1657_ == 0)
{
lean_object* v___x_1658_; lean_object* v___x_1659_; 
lean_del_object(v___x_1655_);
v___x_1658_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1652_, v_val_1653_, v_x_1630_, v_x_1631_);
v___x_1659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1658_);
v___y_1647_ = v___x_1659_;
goto v___jp_1646_;
}
else
{
lean_object* v___x_1661_; 
lean_dec(v_val_1653_);
lean_dec(v_key_1652_);
if (v_isShared_1656_ == 0)
{
lean_ctor_set(v___x_1655_, 1, v_x_1631_);
lean_ctor_set(v___x_1655_, 0, v_x_1630_);
v___x_1661_ = v___x_1655_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_x_1630_);
lean_ctor_set(v_reuseFailAlloc_1662_, 1, v_x_1631_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
v___y_1647_ = v___x_1661_;
goto v___jp_1646_;
}
}
}
}
case 1:
{
lean_object* v_node_1664_; lean_object* v___x_1666_; uint8_t v_isShared_1667_; uint8_t v_isSharedCheck_1674_; 
v_node_1664_ = lean_ctor_get(v_v_1643_, 0);
v_isSharedCheck_1674_ = !lean_is_exclusive(v_v_1643_);
if (v_isSharedCheck_1674_ == 0)
{
v___x_1666_ = v_v_1643_;
v_isShared_1667_ = v_isSharedCheck_1674_;
goto v_resetjp_1665_;
}
else
{
lean_inc(v_node_1664_);
lean_dec(v_v_1643_);
v___x_1666_ = lean_box(0);
v_isShared_1667_ = v_isSharedCheck_1674_;
goto v_resetjp_1665_;
}
v_resetjp_1665_:
{
size_t v___x_1668_; size_t v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1672_; 
v___x_1668_ = lean_usize_shift_right(v_x_1628_, v___x_1633_);
v___x_1669_ = lean_usize_add(v_x_1629_, v___x_1634_);
v___x_1670_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_node_1664_, v___x_1668_, v___x_1669_, v_x_1630_, v_x_1631_);
if (v_isShared_1667_ == 0)
{
lean_ctor_set(v___x_1666_, 0, v___x_1670_);
v___x_1672_ = v___x_1666_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1673_; 
v_reuseFailAlloc_1673_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1673_, 0, v___x_1670_);
v___x_1672_ = v_reuseFailAlloc_1673_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
v___y_1647_ = v___x_1672_;
goto v___jp_1646_;
}
}
}
default: 
{
lean_object* v___x_1675_; 
v___x_1675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1675_, 0, v_x_1630_);
lean_ctor_set(v___x_1675_, 1, v_x_1631_);
v___y_1647_ = v___x_1675_;
goto v___jp_1646_;
}
}
v___jp_1646_:
{
lean_object* v___x_1648_; lean_object* v___x_1650_; 
v___x_1648_ = lean_array_fset(v_xs_x27_1645_, v_j_1637_, v___y_1647_);
lean_dec(v_j_1637_);
if (v_isShared_1642_ == 0)
{
lean_ctor_set(v___x_1641_, 0, v___x_1648_);
v___x_1650_ = v___x_1641_;
goto v_reusejp_1649_;
}
else
{
lean_object* v_reuseFailAlloc_1651_; 
v_reuseFailAlloc_1651_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1651_, 0, v___x_1648_);
v___x_1650_ = v_reuseFailAlloc_1651_;
goto v_reusejp_1649_;
}
v_reusejp_1649_:
{
return v___x_1650_;
}
}
}
}
}
else
{
lean_object* v_ks_1678_; lean_object* v_vs_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1699_; 
v_ks_1678_ = lean_ctor_get(v_x_1627_, 0);
v_vs_1679_ = lean_ctor_get(v_x_1627_, 1);
v_isSharedCheck_1699_ = !lean_is_exclusive(v_x_1627_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1681_ = v_x_1627_;
v_isShared_1682_ = v_isSharedCheck_1699_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_vs_1679_);
lean_inc(v_ks_1678_);
lean_dec(v_x_1627_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1699_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1698_; 
v_reuseFailAlloc_1698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1698_, 0, v_ks_1678_);
lean_ctor_set(v_reuseFailAlloc_1698_, 1, v_vs_1679_);
v___x_1684_ = v_reuseFailAlloc_1698_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
lean_object* v_newNode_1685_; uint8_t v___y_1687_; size_t v___x_1693_; uint8_t v___x_1694_; 
v_newNode_1685_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(v___x_1684_, v_x_1630_, v_x_1631_);
v___x_1693_ = ((size_t)7ULL);
v___x_1694_ = lean_usize_dec_le(v___x_1693_, v_x_1629_);
if (v___x_1694_ == 0)
{
lean_object* v___x_1695_; lean_object* v___x_1696_; uint8_t v___x_1697_; 
v___x_1695_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1685_);
v___x_1696_ = lean_unsigned_to_nat(4u);
v___x_1697_ = lean_nat_dec_lt(v___x_1695_, v___x_1696_);
lean_dec(v___x_1695_);
v___y_1687_ = v___x_1697_;
goto v___jp_1686_;
}
else
{
v___y_1687_ = v___x_1694_;
goto v___jp_1686_;
}
v___jp_1686_:
{
if (v___y_1687_ == 0)
{
lean_object* v_ks_1688_; lean_object* v_vs_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v_ks_1688_ = lean_ctor_get(v_newNode_1685_, 0);
lean_inc_ref(v_ks_1688_);
v_vs_1689_ = lean_ctor_get(v_newNode_1685_, 1);
lean_inc_ref(v_vs_1689_);
lean_dec_ref(v_newNode_1685_);
v___x_1690_ = lean_unsigned_to_nat(0u);
v___x_1691_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_1692_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_x_1629_, v_ks_1688_, v_vs_1689_, v___x_1690_, v___x_1691_);
lean_dec_ref(v_vs_1689_);
lean_dec_ref(v_ks_1688_);
return v___x_1692_;
}
else
{
return v_newNode_1685_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(size_t v_depth_1700_, lean_object* v_keys_1701_, lean_object* v_vals_1702_, lean_object* v_i_1703_, lean_object* v_entries_1704_){
_start:
{
lean_object* v___x_1705_; uint8_t v___x_1706_; 
v___x_1705_ = lean_array_get_size(v_keys_1701_);
v___x_1706_ = lean_nat_dec_lt(v_i_1703_, v___x_1705_);
if (v___x_1706_ == 0)
{
lean_dec(v_i_1703_);
return v_entries_1704_;
}
else
{
lean_object* v_k_1707_; lean_object* v_v_1708_; uint64_t v___x_1709_; size_t v_h_1710_; size_t v___x_1711_; lean_object* v___x_1712_; size_t v___x_1713_; size_t v___x_1714_; size_t v___x_1715_; size_t v_h_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v_k_1707_ = lean_array_fget_borrowed(v_keys_1701_, v_i_1703_);
v_v_1708_ = lean_array_fget_borrowed(v_vals_1702_, v_i_1703_);
v___x_1709_ = l_Lean_instHashableMVarId_hash(v_k_1707_);
v_h_1710_ = lean_uint64_to_usize(v___x_1709_);
v___x_1711_ = ((size_t)5ULL);
v___x_1712_ = lean_unsigned_to_nat(1u);
v___x_1713_ = ((size_t)1ULL);
v___x_1714_ = lean_usize_sub(v_depth_1700_, v___x_1713_);
v___x_1715_ = lean_usize_mul(v___x_1711_, v___x_1714_);
v_h_1716_ = lean_usize_shift_right(v_h_1710_, v___x_1715_);
v___x_1717_ = lean_nat_add(v_i_1703_, v___x_1712_);
lean_dec(v_i_1703_);
lean_inc(v_v_1708_);
lean_inc(v_k_1707_);
v___x_1718_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_entries_1704_, v_h_1716_, v_depth_1700_, v_k_1707_, v_v_1708_);
v_i_1703_ = v___x_1717_;
v_entries_1704_ = v___x_1718_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg___boxed(lean_object* v_depth_1720_, lean_object* v_keys_1721_, lean_object* v_vals_1722_, lean_object* v_i_1723_, lean_object* v_entries_1724_){
_start:
{
size_t v_depth_boxed_1725_; lean_object* v_res_1726_; 
v_depth_boxed_1725_ = lean_unbox_usize(v_depth_1720_);
lean_dec(v_depth_1720_);
v_res_1726_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_depth_boxed_1725_, v_keys_1721_, v_vals_1722_, v_i_1723_, v_entries_1724_);
lean_dec_ref(v_vals_1722_);
lean_dec_ref(v_keys_1721_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_1727_, lean_object* v_x_1728_, lean_object* v_x_1729_, lean_object* v_x_1730_, lean_object* v_x_1731_){
_start:
{
size_t v_x_7211__boxed_1732_; size_t v_x_7212__boxed_1733_; lean_object* v_res_1734_; 
v_x_7211__boxed_1732_ = lean_unbox_usize(v_x_1728_);
lean_dec(v_x_1728_);
v_x_7212__boxed_1733_ = lean_unbox_usize(v_x_1729_);
lean_dec(v_x_1729_);
v_res_1734_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_1727_, v_x_7211__boxed_1732_, v_x_7212__boxed_1733_, v_x_1730_, v_x_1731_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(lean_object* v_x_1735_, lean_object* v_x_1736_, lean_object* v_x_1737_){
_start:
{
uint64_t v___x_1738_; size_t v___x_1739_; size_t v___x_1740_; lean_object* v___x_1741_; 
v___x_1738_ = l_Lean_instHashableMVarId_hash(v_x_1736_);
v___x_1739_ = lean_uint64_to_usize(v___x_1738_);
v___x_1740_ = ((size_t)1ULL);
v___x_1741_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_1735_, v___x_1739_, v___x_1740_, v_x_1736_, v_x_1737_);
return v___x_1741_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(lean_object* v_mvarId_1742_, lean_object* v_val_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v_mctx_1749_; lean_object* v_cache_1750_; lean_object* v_zetaDeltaFVarIds_1751_; lean_object* v_postponed_1752_; lean_object* v_diag_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1781_; 
v___x_1747_ = lean_st_ref_get(v___y_1745_);
lean_dec(v___x_1747_);
v___x_1748_ = lean_st_ref_take(v___y_1744_);
v_mctx_1749_ = lean_ctor_get(v___x_1748_, 0);
v_cache_1750_ = lean_ctor_get(v___x_1748_, 1);
v_zetaDeltaFVarIds_1751_ = lean_ctor_get(v___x_1748_, 2);
v_postponed_1752_ = lean_ctor_get(v___x_1748_, 3);
v_diag_1753_ = lean_ctor_get(v___x_1748_, 4);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1748_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1755_ = v___x_1748_;
v_isShared_1756_ = v_isSharedCheck_1781_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_diag_1753_);
lean_inc(v_postponed_1752_);
lean_inc(v_zetaDeltaFVarIds_1751_);
lean_inc(v_cache_1750_);
lean_inc(v_mctx_1749_);
lean_dec(v___x_1748_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1781_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v_depth_1757_; lean_object* v_levelAssignDepth_1758_; lean_object* v_lmvarCounter_1759_; lean_object* v_mvarCounter_1760_; lean_object* v_lDecls_1761_; lean_object* v_decls_1762_; lean_object* v_userNames_1763_; lean_object* v_lAssignment_1764_; lean_object* v_eAssignment_1765_; lean_object* v_dAssignment_1766_; lean_object* v___x_1768_; uint8_t v_isShared_1769_; uint8_t v_isSharedCheck_1780_; 
v_depth_1757_ = lean_ctor_get(v_mctx_1749_, 0);
v_levelAssignDepth_1758_ = lean_ctor_get(v_mctx_1749_, 1);
v_lmvarCounter_1759_ = lean_ctor_get(v_mctx_1749_, 2);
v_mvarCounter_1760_ = lean_ctor_get(v_mctx_1749_, 3);
v_lDecls_1761_ = lean_ctor_get(v_mctx_1749_, 4);
v_decls_1762_ = lean_ctor_get(v_mctx_1749_, 5);
v_userNames_1763_ = lean_ctor_get(v_mctx_1749_, 6);
v_lAssignment_1764_ = lean_ctor_get(v_mctx_1749_, 7);
v_eAssignment_1765_ = lean_ctor_get(v_mctx_1749_, 8);
v_dAssignment_1766_ = lean_ctor_get(v_mctx_1749_, 9);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_mctx_1749_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1768_ = v_mctx_1749_;
v_isShared_1769_ = v_isSharedCheck_1780_;
goto v_resetjp_1767_;
}
else
{
lean_inc(v_dAssignment_1766_);
lean_inc(v_eAssignment_1765_);
lean_inc(v_lAssignment_1764_);
lean_inc(v_userNames_1763_);
lean_inc(v_decls_1762_);
lean_inc(v_lDecls_1761_);
lean_inc(v_mvarCounter_1760_);
lean_inc(v_lmvarCounter_1759_);
lean_inc(v_levelAssignDepth_1758_);
lean_inc(v_depth_1757_);
lean_dec(v_mctx_1749_);
v___x_1768_ = lean_box(0);
v_isShared_1769_ = v_isSharedCheck_1780_;
goto v_resetjp_1767_;
}
v_resetjp_1767_:
{
lean_object* v___x_1770_; lean_object* v___x_1772_; 
v___x_1770_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(v_eAssignment_1765_, v_mvarId_1742_, v_val_1743_);
if (v_isShared_1769_ == 0)
{
lean_ctor_set(v___x_1768_, 8, v___x_1770_);
v___x_1772_ = v___x_1768_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v_depth_1757_);
lean_ctor_set(v_reuseFailAlloc_1779_, 1, v_levelAssignDepth_1758_);
lean_ctor_set(v_reuseFailAlloc_1779_, 2, v_lmvarCounter_1759_);
lean_ctor_set(v_reuseFailAlloc_1779_, 3, v_mvarCounter_1760_);
lean_ctor_set(v_reuseFailAlloc_1779_, 4, v_lDecls_1761_);
lean_ctor_set(v_reuseFailAlloc_1779_, 5, v_decls_1762_);
lean_ctor_set(v_reuseFailAlloc_1779_, 6, v_userNames_1763_);
lean_ctor_set(v_reuseFailAlloc_1779_, 7, v_lAssignment_1764_);
lean_ctor_set(v_reuseFailAlloc_1779_, 8, v___x_1770_);
lean_ctor_set(v_reuseFailAlloc_1779_, 9, v_dAssignment_1766_);
v___x_1772_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
lean_object* v___x_1774_; 
if (v_isShared_1756_ == 0)
{
lean_ctor_set(v___x_1755_, 0, v___x_1772_);
v___x_1774_ = v___x_1755_;
goto v_reusejp_1773_;
}
else
{
lean_object* v_reuseFailAlloc_1778_; 
v_reuseFailAlloc_1778_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1778_, 0, v___x_1772_);
lean_ctor_set(v_reuseFailAlloc_1778_, 1, v_cache_1750_);
lean_ctor_set(v_reuseFailAlloc_1778_, 2, v_zetaDeltaFVarIds_1751_);
lean_ctor_set(v_reuseFailAlloc_1778_, 3, v_postponed_1752_);
lean_ctor_set(v_reuseFailAlloc_1778_, 4, v_diag_1753_);
v___x_1774_ = v_reuseFailAlloc_1778_;
goto v_reusejp_1773_;
}
v_reusejp_1773_:
{
lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; 
v___x_1775_ = lean_st_ref_set(v___y_1744_, v___x_1774_);
v___x_1776_ = lean_box(0);
v___x_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1777_, 0, v___x_1776_);
return v___x_1777_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg___boxed(lean_object* v_mvarId_1782_, lean_object* v_val_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_1782_, v_val_1783_, v___y_1784_, v___y_1785_);
lean_dec(v___y_1785_);
lean_dec(v___y_1784_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(lean_object* v_as_1788_, size_t v_i_1789_, size_t v_stop_1790_, lean_object* v_b_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_){
_start:
{
lean_object* v_a_1796_; uint8_t v___x_1800_; 
v___x_1800_ = lean_usize_dec_eq(v_i_1789_, v_stop_1790_);
if (v___x_1800_ == 0)
{
lean_object* v___x_1801_; lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1801_ = lean_array_uget_borrowed(v_as_1788_, v_i_1789_);
v___x_1804_ = l_Lean_Expr_mvarId_x21(v___x_1801_);
v___x_1805_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_1804_, v___y_1792_, v___y_1793_);
lean_dec(v___x_1804_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; uint8_t v___x_1807_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1806_);
lean_dec_ref(v___x_1805_);
v___x_1807_ = lean_unbox(v_a_1806_);
lean_dec(v_a_1806_);
if (v___x_1807_ == 0)
{
goto v___jp_1802_;
}
else
{
v_a_1796_ = v_b_1791_;
goto v___jp_1795_;
}
}
else
{
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1808_; uint8_t v___x_1809_; 
v_a_1808_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1808_);
lean_dec_ref(v___x_1805_);
v___x_1809_ = lean_unbox(v_a_1808_);
lean_dec(v_a_1808_);
if (v___x_1809_ == 0)
{
v_a_1796_ = v_b_1791_;
goto v___jp_1795_;
}
else
{
goto v___jp_1802_;
}
}
else
{
lean_object* v_a_1810_; lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1817_; 
lean_dec_ref(v_b_1791_);
v_a_1810_ = lean_ctor_get(v___x_1805_, 0);
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1805_);
if (v_isSharedCheck_1817_ == 0)
{
v___x_1812_ = v___x_1805_;
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
else
{
lean_inc(v_a_1810_);
lean_dec(v___x_1805_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1817_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1815_; 
if (v_isShared_1813_ == 0)
{
v___x_1815_ = v___x_1812_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1816_; 
v_reuseFailAlloc_1816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1816_, 0, v_a_1810_);
v___x_1815_ = v_reuseFailAlloc_1816_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
return v___x_1815_;
}
}
}
}
v___jp_1802_:
{
lean_object* v___x_1803_; 
lean_inc(v___x_1801_);
v___x_1803_ = lean_array_push(v_b_1791_, v___x_1801_);
v_a_1796_ = v___x_1803_;
goto v___jp_1795_;
}
}
else
{
lean_object* v___x_1818_; 
v___x_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1818_, 0, v_b_1791_);
return v___x_1818_;
}
v___jp_1795_:
{
size_t v___x_1797_; size_t v___x_1798_; 
v___x_1797_ = ((size_t)1ULL);
v___x_1798_ = lean_usize_add(v_i_1789_, v___x_1797_);
v_i_1789_ = v___x_1798_;
v_b_1791_ = v_a_1796_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg___boxed(lean_object* v_as_1819_, lean_object* v_i_1820_, lean_object* v_stop_1821_, lean_object* v_b_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_){
_start:
{
size_t v_i_boxed_1826_; size_t v_stop_boxed_1827_; lean_object* v_res_1828_; 
v_i_boxed_1826_ = lean_unbox_usize(v_i_1820_);
lean_dec(v_i_1820_);
v_stop_boxed_1827_ = lean_unbox_usize(v_stop_1821_);
lean_dec(v_stop_1821_);
v_res_1828_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_as_1819_, v_i_boxed_1826_, v_stop_boxed_1827_, v_b_1822_, v___y_1823_, v___y_1824_);
lean_dec(v___y_1824_);
lean_dec(v___y_1823_);
lean_dec_ref(v_as_1819_);
return v_res_1828_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_MVarId_apply_spec__2(lean_object* v_a_1829_, lean_object* v_x_1830_){
_start:
{
if (lean_obj_tag(v_x_1830_) == 0)
{
uint8_t v___x_1831_; 
v___x_1831_ = 0;
return v___x_1831_;
}
else
{
lean_object* v_head_1832_; lean_object* v_tail_1833_; uint8_t v___x_1834_; 
v_head_1832_ = lean_ctor_get(v_x_1830_, 0);
v_tail_1833_ = lean_ctor_get(v_x_1830_, 1);
v___x_1834_ = l_Lean_instBEqMVarId_beq(v_a_1829_, v_head_1832_);
if (v___x_1834_ == 0)
{
v_x_1830_ = v_tail_1833_;
goto _start;
}
else
{
return v___x_1834_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_MVarId_apply_spec__2___boxed(lean_object* v_a_1836_, lean_object* v_x_1837_){
_start:
{
uint8_t v_res_1838_; lean_object* v_r_1839_; 
v_res_1838_ = l_List_elem___at___00Lean_MVarId_apply_spec__2(v_a_1836_, v_x_1837_);
lean_dec(v_x_1837_);
lean_dec(v_a_1836_);
v_r_1839_ = lean_box(v_res_1838_);
return v_r_1839_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(lean_object* v_a_1840_, lean_object* v_as_1841_, size_t v_i_1842_, size_t v_stop_1843_, lean_object* v_b_1844_){
_start:
{
lean_object* v___y_1846_; uint8_t v___x_1850_; 
v___x_1850_ = lean_usize_dec_eq(v_i_1842_, v_stop_1843_);
if (v___x_1850_ == 0)
{
lean_object* v___x_1851_; uint8_t v___x_1852_; 
v___x_1851_ = lean_array_uget_borrowed(v_as_1841_, v_i_1842_);
v___x_1852_ = l_List_elem___at___00Lean_MVarId_apply_spec__2(v___x_1851_, v_a_1840_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1853_; 
lean_inc(v___x_1851_);
v___x_1853_ = lean_array_push(v_b_1844_, v___x_1851_);
v___y_1846_ = v___x_1853_;
goto v___jp_1845_;
}
else
{
v___y_1846_ = v_b_1844_;
goto v___jp_1845_;
}
}
else
{
return v_b_1844_;
}
v___jp_1845_:
{
size_t v___x_1847_; size_t v___x_1848_; 
v___x_1847_ = ((size_t)1ULL);
v___x_1848_ = lean_usize_add(v_i_1842_, v___x_1847_);
v_i_1842_ = v___x_1848_;
v_b_1844_ = v___y_1846_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4___boxed(lean_object* v_a_1854_, lean_object* v_as_1855_, lean_object* v_i_1856_, lean_object* v_stop_1857_, lean_object* v_b_1858_){
_start:
{
size_t v_i_boxed_1859_; size_t v_stop_boxed_1860_; lean_object* v_res_1861_; 
v_i_boxed_1859_ = lean_unbox_usize(v_i_1856_);
lean_dec(v_i_1856_);
v_stop_boxed_1860_ = lean_unbox_usize(v_stop_1857_);
lean_dec(v_stop_1857_);
v_res_1861_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(v_a_1854_, v_as_1855_, v_i_boxed_1859_, v_stop_boxed_1860_, v_b_1858_);
lean_dec_ref(v_as_1855_);
lean_dec(v_a_1854_);
return v_res_1861_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3(lean_object* v_as_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_){
_start:
{
if (lean_obj_tag(v_as_1862_) == 0)
{
lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1868_ = lean_box(0);
v___x_1869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1869_, 0, v___x_1868_);
return v___x_1869_;
}
else
{
lean_object* v_head_1870_; lean_object* v_tail_1871_; lean_object* v___x_1872_; 
v_head_1870_ = lean_ctor_get(v_as_1862_, 0);
lean_inc(v_head_1870_);
v_tail_1871_ = lean_ctor_get(v_as_1862_, 1);
lean_inc(v_tail_1871_);
lean_dec_ref(v_as_1862_);
v___x_1872_ = l_Lean_MVarId_headBetaType(v_head_1870_, v___y_1863_, v___y_1864_, v___y_1865_, v___y_1866_);
if (lean_obj_tag(v___x_1872_) == 0)
{
lean_dec_ref(v___x_1872_);
v_as_1862_ = v_tail_1871_;
goto _start;
}
else
{
lean_dec(v_tail_1871_);
return v___x_1872_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3___boxed(lean_object* v_as_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l_List_forM___at___00Lean_MVarId_apply_spec__3(v_as_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_);
lean_dec(v___y_1878_);
lean_dec_ref(v___y_1877_);
lean_dec(v___y_1876_);
lean_dec_ref(v___y_1875_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0(lean_object* v_mvarId_1881_, lean_object* v___x_1882_, lean_object* v_e_1883_, lean_object* v_cfg_1884_, lean_object* v_term_x3f_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_){
_start:
{
lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; lean_object* v___y_1896_; lean_object* v___y_1897_; lean_object* v___y_1918_; lean_object* v___y_1919_; lean_object* v___y_1920_; uint8_t v___y_1921_; lean_object* v___y_1922_; lean_object* v___y_1923_; lean_object* v___y_1924_; lean_object* v___y_1925_; lean_object* v_a_1926_; lean_object* v___y_1959_; lean_object* v___y_1960_; lean_object* v___y_1961_; uint8_t v___y_1962_; lean_object* v___y_1963_; lean_object* v___y_1964_; lean_object* v___y_1965_; lean_object* v___y_1966_; lean_object* v___y_1967_; lean_object* v___x_1977_; 
lean_inc(v___x_1882_);
lean_inc(v_mvarId_1881_);
v___x_1977_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1881_, v___x_1882_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
if (lean_obj_tag(v___x_1977_) == 0)
{
lean_object* v___x_1978_; 
lean_dec_ref(v___x_1977_);
lean_inc(v_mvarId_1881_);
v___x_1978_ = l_Lean_MVarId_getType(v_mvarId_1881_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_a_1979_; lean_object* v___x_1980_; 
v_a_1979_ = lean_ctor_get(v___x_1978_, 0);
lean_inc(v_a_1979_);
lean_dec_ref(v___x_1978_);
lean_inc(v___y_1889_);
lean_inc_ref(v___y_1888_);
lean_inc(v___y_1887_);
lean_inc_ref(v___y_1886_);
lean_inc_ref(v_e_1883_);
v___x_1980_ = lean_infer_type(v_e_1883_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
if (lean_obj_tag(v___x_1980_) == 0)
{
lean_object* v_a_1981_; lean_object* v_rangeNumArgs_1983_; lean_object* v_lower_1984_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_1988_; lean_object* v___x_2028_; 
v_a_1981_ = lean_ctor_get(v___x_1980_, 0);
lean_inc_n(v_a_1981_, 2);
lean_dec_ref(v___x_1980_);
v___x_2028_ = l_Lean_Meta_getExpectedNumArgsAux(v_a_1981_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
if (lean_obj_tag(v___x_2028_) == 0)
{
lean_object* v_a_2029_; lean_object* v_snd_2030_; uint8_t v___x_2031_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_a_2029_);
lean_dec_ref(v___x_2028_);
v_snd_2030_ = lean_ctor_get(v_a_2029_, 1);
v___x_2031_ = lean_unbox(v_snd_2030_);
if (v___x_2031_ == 0)
{
lean_object* v_fst_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2052_; 
v_fst_2032_ = lean_ctor_get(v_a_2029_, 0);
v_isSharedCheck_2052_ = !lean_is_exclusive(v_a_2029_);
if (v_isSharedCheck_2052_ == 0)
{
lean_object* v_unused_2053_; 
v_unused_2053_ = lean_ctor_get(v_a_2029_, 1);
lean_dec(v_unused_2053_);
v___x_2034_ = v_a_2029_;
v_isShared_2035_ = v_isSharedCheck_2052_;
goto v_resetjp_2033_;
}
else
{
lean_inc(v_fst_2032_);
lean_dec(v_a_2029_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2052_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
lean_object* v___x_2036_; 
lean_inc(v_a_1979_);
v___x_2036_ = l_Lean_Meta_getExpectedNumArgs(v_a_1979_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2042_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2037_);
lean_dec_ref(v___x_2036_);
v___x_2038_ = lean_nat_sub(v_fst_2032_, v_a_2037_);
lean_dec(v_a_2037_);
v___x_2039_ = lean_unsigned_to_nat(1u);
v___x_2040_ = lean_nat_add(v_fst_2032_, v___x_2039_);
lean_dec(v_fst_2032_);
lean_inc(v___x_2038_);
if (v_isShared_2035_ == 0)
{
lean_ctor_set(v___x_2034_, 1, v___x_2040_);
lean_ctor_set(v___x_2034_, 0, v___x_2038_);
v___x_2042_ = v___x_2034_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v___x_2038_);
lean_ctor_set(v_reuseFailAlloc_2043_, 1, v___x_2040_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
v_rangeNumArgs_1983_ = v___x_2042_;
v_lower_1984_ = v___x_2038_;
v___y_1985_ = v___y_1886_;
v___y_1986_ = v___y_1887_;
v___y_1987_ = v___y_1888_;
v___y_1988_ = v___y_1889_;
goto v___jp_1982_;
}
}
else
{
lean_object* v_a_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2051_; 
lean_del_object(v___x_2034_);
lean_dec(v_fst_2032_);
lean_dec(v_a_1981_);
lean_dec(v_a_1979_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v_term_x3f_1885_);
lean_dec_ref(v_e_1883_);
lean_dec(v___x_1882_);
lean_dec(v_mvarId_1881_);
v_a_2044_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2051_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2046_ = v___x_2036_;
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_a_2044_);
lean_dec(v___x_2036_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2051_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v___x_2049_; 
if (v_isShared_2047_ == 0)
{
v___x_2049_ = v___x_2046_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2050_; 
v_reuseFailAlloc_2050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2050_, 0, v_a_2044_);
v___x_2049_ = v_reuseFailAlloc_2050_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
return v___x_2049_;
}
}
}
}
}
else
{
lean_object* v_fst_2054_; lean_object* v___x_2056_; uint8_t v_isShared_2057_; uint8_t v_isSharedCheck_2063_; 
v_fst_2054_ = lean_ctor_get(v_a_2029_, 0);
v_isSharedCheck_2063_ = !lean_is_exclusive(v_a_2029_);
if (v_isSharedCheck_2063_ == 0)
{
lean_object* v_unused_2064_; 
v_unused_2064_ = lean_ctor_get(v_a_2029_, 1);
lean_dec(v_unused_2064_);
v___x_2056_ = v_a_2029_;
v_isShared_2057_ = v_isSharedCheck_2063_;
goto v_resetjp_2055_;
}
else
{
lean_inc(v_fst_2054_);
lean_dec(v_a_2029_);
v___x_2056_ = lean_box(0);
v_isShared_2057_ = v_isSharedCheck_2063_;
goto v_resetjp_2055_;
}
v_resetjp_2055_:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2061_; 
v___x_2058_ = lean_unsigned_to_nat(1u);
v___x_2059_ = lean_nat_add(v_fst_2054_, v___x_2058_);
lean_inc(v_fst_2054_);
if (v_isShared_2057_ == 0)
{
lean_ctor_set(v___x_2056_, 1, v___x_2059_);
v___x_2061_ = v___x_2056_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_fst_2054_);
lean_ctor_set(v_reuseFailAlloc_2062_, 1, v___x_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
v_rangeNumArgs_1983_ = v___x_2061_;
v_lower_1984_ = v_fst_2054_;
v___y_1985_ = v___y_1886_;
v___y_1986_ = v___y_1887_;
v___y_1987_ = v___y_1888_;
v___y_1988_ = v___y_1889_;
goto v___jp_1982_;
}
}
}
}
else
{
lean_object* v_a_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2072_; 
lean_dec(v_a_1981_);
lean_dec(v_a_1979_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v_term_x3f_1885_);
lean_dec_ref(v_e_1883_);
lean_dec(v___x_1882_);
lean_dec(v_mvarId_1881_);
v_a_2065_ = lean_ctor_get(v___x_2028_, 0);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2028_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2067_ = v___x_2028_;
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_a_2065_);
lean_dec(v___x_2028_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2072_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v___x_2070_; 
if (v_isShared_2068_ == 0)
{
v___x_2070_ = v___x_2067_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_a_2065_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
}
}
}
v___jp_1982_:
{
lean_object* v___x_1989_; 
lean_inc(v_mvarId_1881_);
v___x_1989_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(v_mvarId_1881_, v_cfg_1884_, v_term_x3f_1885_, v_a_1979_, v_a_1981_, v_rangeNumArgs_1983_, v_lower_1984_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_);
lean_dec_ref(v_rangeNumArgs_1983_);
if (lean_obj_tag(v___x_1989_) == 0)
{
lean_object* v_a_1990_; lean_object* v_fst_1991_; lean_object* v_snd_1992_; uint8_t v_newGoals_1993_; uint8_t v_synthAssignedInstances_1994_; uint8_t v_allowSynthFailures_1995_; lean_object* v___x_1996_; 
v_a_1990_ = lean_ctor_get(v___x_1989_, 0);
lean_inc(v_a_1990_);
lean_dec_ref(v___x_1989_);
v_fst_1991_ = lean_ctor_get(v_a_1990_, 0);
lean_inc(v_fst_1991_);
v_snd_1992_ = lean_ctor_get(v_a_1990_, 1);
lean_inc_n(v_snd_1992_, 2);
lean_dec(v_a_1990_);
v_newGoals_1993_ = lean_ctor_get_uint8(v_cfg_1884_, 0);
v_synthAssignedInstances_1994_ = lean_ctor_get_uint8(v_cfg_1884_, 1);
v_allowSynthFailures_1995_ = lean_ctor_get_uint8(v_cfg_1884_, 2);
lean_inc(v_mvarId_1881_);
v___x_1996_ = l_Lean_Meta_synthAppInstances(v___x_1882_, v_mvarId_1881_, v_fst_1991_, v_snd_1992_, v_synthAssignedInstances_1994_, v_allowSynthFailures_1995_, v___y_1985_, v___y_1986_, v___y_1987_, v___y_1988_);
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v___x_1997_; lean_object* v_a_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; 
lean_dec_ref(v___x_1996_);
v___x_1997_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1883_, v___y_1986_, v___y_1988_);
v_a_1998_ = lean_ctor_get(v___x_1997_, 0);
lean_inc_n(v_a_1998_, 2);
lean_dec_ref(v___x_1997_);
v___x_1999_ = l_Lean_mkAppN(v_a_1998_, v_fst_1991_);
lean_inc(v_mvarId_1881_);
v___x_2000_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_1881_, v___x_1999_, v___y_1986_, v___y_1988_);
lean_dec_ref(v___x_2000_);
v___x_2001_ = lean_unsigned_to_nat(0u);
v___x_2002_ = lean_array_get_size(v_fst_1991_);
v___x_2003_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0);
v___x_2004_ = lean_nat_dec_lt(v___x_2001_, v___x_2002_);
if (v___x_2004_ == 0)
{
lean_dec(v_fst_1991_);
v___y_1918_ = v___y_1987_;
v___y_1919_ = v___x_2001_;
v___y_1920_ = v_snd_1992_;
v___y_1921_ = v_newGoals_1993_;
v___y_1922_ = v___y_1985_;
v___y_1923_ = v___y_1988_;
v___y_1924_ = v___y_1986_;
v___y_1925_ = v_a_1998_;
v_a_1926_ = v___x_2003_;
goto v___jp_1917_;
}
else
{
uint8_t v___x_2005_; 
v___x_2005_ = lean_nat_dec_le(v___x_2002_, v___x_2002_);
if (v___x_2005_ == 0)
{
if (v___x_2004_ == 0)
{
lean_dec(v_fst_1991_);
v___y_1918_ = v___y_1987_;
v___y_1919_ = v___x_2001_;
v___y_1920_ = v_snd_1992_;
v___y_1921_ = v_newGoals_1993_;
v___y_1922_ = v___y_1985_;
v___y_1923_ = v___y_1988_;
v___y_1924_ = v___y_1986_;
v___y_1925_ = v_a_1998_;
v_a_1926_ = v___x_2003_;
goto v___jp_1917_;
}
else
{
size_t v___x_2006_; size_t v___x_2007_; lean_object* v___x_2008_; 
v___x_2006_ = ((size_t)0ULL);
v___x_2007_ = lean_usize_of_nat(v___x_2002_);
v___x_2008_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_fst_1991_, v___x_2006_, v___x_2007_, v___x_2003_, v___y_1986_, v___y_1988_);
lean_dec(v_fst_1991_);
v___y_1959_ = v___y_1987_;
v___y_1960_ = v_snd_1992_;
v___y_1961_ = v___x_2001_;
v___y_1962_ = v_newGoals_1993_;
v___y_1963_ = v___y_1985_;
v___y_1964_ = v___y_1988_;
v___y_1965_ = v___y_1986_;
v___y_1966_ = v_a_1998_;
v___y_1967_ = v___x_2008_;
goto v___jp_1958_;
}
}
else
{
size_t v___x_2009_; size_t v___x_2010_; lean_object* v___x_2011_; 
v___x_2009_ = ((size_t)0ULL);
v___x_2010_ = lean_usize_of_nat(v___x_2002_);
v___x_2011_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_fst_1991_, v___x_2009_, v___x_2010_, v___x_2003_, v___y_1986_, v___y_1988_);
lean_dec(v_fst_1991_);
v___y_1959_ = v___y_1987_;
v___y_1960_ = v_snd_1992_;
v___y_1961_ = v___x_2001_;
v___y_1962_ = v_newGoals_1993_;
v___y_1963_ = v___y_1985_;
v___y_1964_ = v___y_1988_;
v___y_1965_ = v___y_1986_;
v___y_1966_ = v_a_1998_;
v___y_1967_ = v___x_2011_;
goto v___jp_1958_;
}
}
}
else
{
lean_object* v_a_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2019_; 
lean_dec(v_snd_1992_);
lean_dec(v_fst_1991_);
lean_dec(v___y_1988_);
lean_dec_ref(v___y_1987_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec_ref(v_e_1883_);
lean_dec(v_mvarId_1881_);
v_a_2012_ = lean_ctor_get(v___x_1996_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_1996_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2014_ = v___x_1996_;
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_a_2012_);
lean_dec(v___x_1996_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2019_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v_a_2012_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
}
else
{
lean_object* v_a_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2027_; 
lean_dec(v___y_1988_);
lean_dec_ref(v___y_1987_);
lean_dec(v___y_1986_);
lean_dec_ref(v___y_1985_);
lean_dec_ref(v_e_1883_);
lean_dec(v___x_1882_);
lean_dec(v_mvarId_1881_);
v_a_2020_ = lean_ctor_get(v___x_1989_, 0);
v_isSharedCheck_2027_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2022_ = v___x_1989_;
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_a_2020_);
lean_dec(v___x_1989_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2027_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2025_; 
if (v_isShared_2023_ == 0)
{
v___x_2025_ = v___x_2022_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_a_2020_);
v___x_2025_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
return v___x_2025_;
}
}
}
}
}
else
{
lean_object* v_a_2073_; lean_object* v___x_2075_; uint8_t v_isShared_2076_; uint8_t v_isSharedCheck_2080_; 
lean_dec(v_a_1979_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v_term_x3f_1885_);
lean_dec_ref(v_e_1883_);
lean_dec(v___x_1882_);
lean_dec(v_mvarId_1881_);
v_a_2073_ = lean_ctor_get(v___x_1980_, 0);
v_isSharedCheck_2080_ = !lean_is_exclusive(v___x_1980_);
if (v_isSharedCheck_2080_ == 0)
{
v___x_2075_ = v___x_1980_;
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
else
{
lean_inc(v_a_2073_);
lean_dec(v___x_1980_);
v___x_2075_ = lean_box(0);
v_isShared_2076_ = v_isSharedCheck_2080_;
goto v_resetjp_2074_;
}
v_resetjp_2074_:
{
lean_object* v___x_2078_; 
if (v_isShared_2076_ == 0)
{
v___x_2078_ = v___x_2075_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v_a_2073_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
else
{
lean_object* v_a_2081_; lean_object* v___x_2083_; uint8_t v_isShared_2084_; uint8_t v_isSharedCheck_2088_; 
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v_term_x3f_1885_);
lean_dec_ref(v_e_1883_);
lean_dec(v___x_1882_);
lean_dec(v_mvarId_1881_);
v_a_2081_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_2088_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2088_ == 0)
{
v___x_2083_ = v___x_1978_;
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
else
{
lean_inc(v_a_2081_);
lean_dec(v___x_1978_);
v___x_2083_ = lean_box(0);
v_isShared_2084_ = v_isSharedCheck_2088_;
goto v_resetjp_2082_;
}
v_resetjp_2082_:
{
lean_object* v___x_2086_; 
if (v_isShared_2084_ == 0)
{
v___x_2086_ = v___x_2083_;
goto v_reusejp_2085_;
}
else
{
lean_object* v_reuseFailAlloc_2087_; 
v_reuseFailAlloc_2087_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2087_, 0, v_a_2081_);
v___x_2086_ = v_reuseFailAlloc_2087_;
goto v_reusejp_2085_;
}
v_reusejp_2085_:
{
return v___x_2086_;
}
}
}
}
else
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2096_; 
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec(v_term_x3f_1885_);
lean_dec_ref(v_e_1883_);
lean_dec(v___x_1882_);
lean_dec(v_mvarId_1881_);
v_a_2089_ = lean_ctor_get(v___x_1977_, 0);
v_isSharedCheck_2096_ = !lean_is_exclusive(v___x_1977_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2091_ = v___x_1977_;
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_1977_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2096_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
lean_object* v___x_2094_; 
if (v_isShared_2092_ == 0)
{
v___x_2094_ = v___x_2091_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_a_2089_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
v___jp_1891_:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1898_ = lean_array_to_list(v___y_1897_);
v___x_1899_ = l_List_appendTR___redArg(v___y_1893_, v___x_1898_);
lean_inc(v___x_1899_);
v___x_1900_ = l_List_forM___at___00Lean_MVarId_apply_spec__3(v___x_1899_, v___y_1894_, v___y_1896_, v___y_1892_, v___y_1895_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1892_);
lean_dec(v___y_1896_);
lean_dec_ref(v___y_1894_);
if (lean_obj_tag(v___x_1900_) == 0)
{
lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1907_; 
v_isSharedCheck_1907_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1907_ == 0)
{
lean_object* v_unused_1908_; 
v_unused_1908_ = lean_ctor_get(v___x_1900_, 0);
lean_dec(v_unused_1908_);
v___x_1902_ = v___x_1900_;
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
else
{
lean_dec(v___x_1900_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1907_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
lean_object* v___x_1905_; 
if (v_isShared_1903_ == 0)
{
lean_ctor_set(v___x_1902_, 0, v___x_1899_);
v___x_1905_ = v___x_1902_;
goto v_reusejp_1904_;
}
else
{
lean_object* v_reuseFailAlloc_1906_; 
v_reuseFailAlloc_1906_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1906_, 0, v___x_1899_);
v___x_1905_ = v_reuseFailAlloc_1906_;
goto v_reusejp_1904_;
}
v_reusejp_1904_:
{
return v___x_1905_;
}
}
}
else
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1916_; 
lean_dec(v___x_1899_);
v_a_1909_ = lean_ctor_get(v___x_1900_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1900_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1911_ = v___x_1900_;
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1900_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1916_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
lean_object* v___x_1914_; 
if (v_isShared_1912_ == 0)
{
v___x_1914_ = v___x_1911_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1915_; 
v_reuseFailAlloc_1915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1915_, 0, v_a_1909_);
v___x_1914_ = v_reuseFailAlloc_1915_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
return v___x_1914_;
}
}
}
}
v___jp_1917_:
{
lean_object* v___x_1927_; 
v___x_1927_ = l_Lean_Meta_appendParentTag(v_mvarId_1881_, v_a_1926_, v___y_1920_, v___y_1922_, v___y_1924_, v___y_1918_, v___y_1923_);
lean_dec_ref(v___y_1920_);
if (lean_obj_tag(v___x_1927_) == 0)
{
lean_object* v___x_1928_; 
lean_dec_ref(v___x_1927_);
v___x_1928_ = l_Lean_Meta_getMVarsNoDelayed(v___y_1925_, v___y_1922_, v___y_1924_, v___y_1918_, v___y_1923_);
if (lean_obj_tag(v___x_1928_) == 0)
{
lean_object* v_a_1929_; lean_object* v___x_1930_; 
v_a_1929_ = lean_ctor_get(v___x_1928_, 0);
lean_inc(v_a_1929_);
lean_dec_ref(v___x_1928_);
v___x_1930_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(v_a_1926_, v___y_1921_, v___y_1922_, v___y_1924_, v___y_1918_, v___y_1923_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; uint8_t v___x_1934_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref(v___x_1930_);
v___x_1932_ = lean_array_get_size(v_a_1929_);
v___x_1933_ = lean_mk_empty_array_with_capacity(v___y_1919_);
v___x_1934_ = lean_nat_dec_lt(v___y_1919_, v___x_1932_);
if (v___x_1934_ == 0)
{
lean_dec(v_a_1929_);
v___y_1892_ = v___y_1918_;
v___y_1893_ = v_a_1931_;
v___y_1894_ = v___y_1922_;
v___y_1895_ = v___y_1923_;
v___y_1896_ = v___y_1924_;
v___y_1897_ = v___x_1933_;
goto v___jp_1891_;
}
else
{
uint8_t v___x_1935_; 
v___x_1935_ = lean_nat_dec_le(v___x_1932_, v___x_1932_);
if (v___x_1935_ == 0)
{
if (v___x_1934_ == 0)
{
lean_dec(v_a_1929_);
v___y_1892_ = v___y_1918_;
v___y_1893_ = v_a_1931_;
v___y_1894_ = v___y_1922_;
v___y_1895_ = v___y_1923_;
v___y_1896_ = v___y_1924_;
v___y_1897_ = v___x_1933_;
goto v___jp_1891_;
}
else
{
size_t v___x_1936_; size_t v___x_1937_; lean_object* v___x_1938_; 
v___x_1936_ = ((size_t)0ULL);
v___x_1937_ = lean_usize_of_nat(v___x_1932_);
v___x_1938_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(v_a_1931_, v_a_1929_, v___x_1936_, v___x_1937_, v___x_1933_);
lean_dec(v_a_1929_);
v___y_1892_ = v___y_1918_;
v___y_1893_ = v_a_1931_;
v___y_1894_ = v___y_1922_;
v___y_1895_ = v___y_1923_;
v___y_1896_ = v___y_1924_;
v___y_1897_ = v___x_1938_;
goto v___jp_1891_;
}
}
else
{
size_t v___x_1939_; size_t v___x_1940_; lean_object* v___x_1941_; 
v___x_1939_ = ((size_t)0ULL);
v___x_1940_ = lean_usize_of_nat(v___x_1932_);
v___x_1941_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(v_a_1931_, v_a_1929_, v___x_1939_, v___x_1940_, v___x_1933_);
lean_dec(v_a_1929_);
v___y_1892_ = v___y_1918_;
v___y_1893_ = v_a_1931_;
v___y_1894_ = v___y_1922_;
v___y_1895_ = v___y_1923_;
v___y_1896_ = v___y_1924_;
v___y_1897_ = v___x_1941_;
goto v___jp_1891_;
}
}
}
else
{
lean_dec(v_a_1929_);
lean_dec(v___y_1924_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec_ref(v___y_1918_);
return v___x_1930_;
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
lean_dec_ref(v_a_1926_);
lean_dec(v___y_1924_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec_ref(v___y_1918_);
v_a_1942_ = lean_ctor_get(v___x_1928_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1928_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1928_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1928_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_dec_ref(v_a_1926_);
lean_dec_ref(v___y_1925_);
lean_dec(v___y_1924_);
lean_dec(v___y_1923_);
lean_dec_ref(v___y_1922_);
lean_dec_ref(v___y_1918_);
v_a_1950_ = lean_ctor_get(v___x_1927_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1927_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1927_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1927_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
v___jp_1958_:
{
if (lean_obj_tag(v___y_1967_) == 0)
{
lean_object* v_a_1968_; 
v_a_1968_ = lean_ctor_get(v___y_1967_, 0);
lean_inc(v_a_1968_);
lean_dec_ref(v___y_1967_);
v___y_1918_ = v___y_1959_;
v___y_1919_ = v___y_1961_;
v___y_1920_ = v___y_1960_;
v___y_1921_ = v___y_1962_;
v___y_1922_ = v___y_1963_;
v___y_1923_ = v___y_1964_;
v___y_1924_ = v___y_1965_;
v___y_1925_ = v___y_1966_;
v_a_1926_ = v_a_1968_;
goto v___jp_1917_;
}
else
{
lean_object* v_a_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1976_; 
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec(v___y_1964_);
lean_dec_ref(v___y_1963_);
lean_dec_ref(v___y_1960_);
lean_dec_ref(v___y_1959_);
lean_dec(v_mvarId_1881_);
v_a_1969_ = lean_ctor_get(v___y_1967_, 0);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___y_1967_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1971_ = v___y_1967_;
v_isShared_1972_ = v_isSharedCheck_1976_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_a_1969_);
lean_dec(v___y_1967_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0___boxed(lean_object* v_mvarId_2097_, lean_object* v___x_2098_, lean_object* v_e_2099_, lean_object* v_cfg_2100_, lean_object* v_term_x3f_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lean_MVarId_apply___lam__0(v_mvarId_2097_, v___x_2098_, v_e_2099_, v_cfg_2100_, v_term_x3f_2101_, v___y_2102_, v___y_2103_, v___y_2104_, v___y_2105_);
lean_dec_ref(v_cfg_2100_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply(lean_object* v_mvarId_2108_, lean_object* v_e_2109_, lean_object* v_cfg_2110_, lean_object* v_term_x3f_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v___x_2117_; lean_object* v___f_2118_; lean_object* v___x_2119_; 
v___x_2117_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1);
lean_inc(v_mvarId_2108_);
v___f_2118_ = lean_alloc_closure((void*)(l_Lean_MVarId_apply___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2118_, 0, v_mvarId_2108_);
lean_closure_set(v___f_2118_, 1, v___x_2117_);
lean_closure_set(v___f_2118_, 2, v_e_2109_);
lean_closure_set(v___f_2118_, 3, v_cfg_2110_);
lean_closure_set(v___f_2118_, 4, v_term_x3f_2111_);
v___x_2119_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2108_, v___f_2118_, v_a_2112_, v_a_2113_, v_a_2114_, v_a_2115_);
return v___x_2119_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___boxed(lean_object* v_mvarId_2120_, lean_object* v_e_2121_, lean_object* v_cfg_2122_, lean_object* v_term_x3f_2123_, lean_object* v_a_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l_Lean_MVarId_apply(v_mvarId_2120_, v_e_2121_, v_cfg_2122_, v_term_x3f_2123_, v_a_2124_, v_a_2125_, v_a_2126_, v_a_2127_);
lean_dec(v_a_2127_);
lean_dec_ref(v_a_2126_);
lean_dec(v_a_2125_);
lean_dec_ref(v_a_2124_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(lean_object* v_mvarId_2130_, lean_object* v_val_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2130_, v_val_2131_, v___y_2133_, v___y_2135_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___boxed(lean_object* v_mvarId_2138_, lean_object* v_val_2139_, lean_object* v___y_2140_, lean_object* v___y_2141_, lean_object* v___y_2142_, lean_object* v___y_2143_, lean_object* v___y_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(v_mvarId_2138_, v_val_2139_, v___y_2140_, v___y_2141_, v___y_2142_, v___y_2143_);
lean_dec(v___y_2143_);
lean_dec_ref(v___y_2142_);
lean_dec(v___y_2141_);
lean_dec_ref(v___y_2140_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(lean_object* v_as_2146_, size_t v_i_2147_, size_t v_stop_2148_, lean_object* v_b_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v___x_2155_; 
v___x_2155_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_as_2146_, v_i_2147_, v_stop_2148_, v_b_2149_, v___y_2151_, v___y_2153_);
return v___x_2155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___boxed(lean_object* v_as_2156_, lean_object* v_i_2157_, lean_object* v_stop_2158_, lean_object* v_b_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_){
_start:
{
size_t v_i_boxed_2165_; size_t v_stop_boxed_2166_; lean_object* v_res_2167_; 
v_i_boxed_2165_ = lean_unbox_usize(v_i_2157_);
lean_dec(v_i_2157_);
v_stop_boxed_2166_ = lean_unbox_usize(v_stop_2158_);
lean_dec(v_stop_2158_);
v_res_2167_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(v_as_2156_, v_i_boxed_2165_, v_stop_boxed_2166_, v_b_2159_, v___y_2160_, v___y_2161_, v___y_2162_, v___y_2163_);
lean_dec(v___y_2163_);
lean_dec_ref(v___y_2162_);
lean_dec(v___y_2161_);
lean_dec_ref(v___y_2160_);
lean_dec_ref(v_as_2156_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1(lean_object* v_00_u03b2_2168_, lean_object* v_x_2169_, lean_object* v_x_2170_, lean_object* v_x_2171_){
_start:
{
lean_object* v___x_2172_; 
v___x_2172_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(v_x_2169_, v_x_2170_, v_x_2171_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_2173_, lean_object* v_x_2174_, size_t v_x_2175_, size_t v_x_2176_, lean_object* v_x_2177_, lean_object* v_x_2178_){
_start:
{
lean_object* v___x_2179_; 
v___x_2179_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_2174_, v_x_2175_, v_x_2176_, v_x_2177_, v_x_2178_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2180_, lean_object* v_x_2181_, lean_object* v_x_2182_, lean_object* v_x_2183_, lean_object* v_x_2184_, lean_object* v_x_2185_){
_start:
{
size_t v_x_8035__boxed_2186_; size_t v_x_8036__boxed_2187_; lean_object* v_res_2188_; 
v_x_8035__boxed_2186_ = lean_unbox_usize(v_x_2182_);
lean_dec(v_x_2182_);
v_x_8036__boxed_2187_ = lean_unbox_usize(v_x_2183_);
lean_dec(v_x_2183_);
v_res_2188_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(v_00_u03b2_2180_, v_x_2181_, v_x_8035__boxed_2186_, v_x_8036__boxed_2187_, v_x_2184_, v_x_2185_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_2189_, lean_object* v_n_2190_, lean_object* v_k_2191_, lean_object* v_v_2192_){
_start:
{
lean_object* v___x_2193_; 
v___x_2193_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(v_n_2190_, v_k_2191_, v_v_2192_);
return v___x_2193_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(lean_object* v_00_u03b2_2194_, size_t v_depth_2195_, lean_object* v_keys_2196_, lean_object* v_vals_2197_, lean_object* v_heq_2198_, lean_object* v_i_2199_, lean_object* v_entries_2200_){
_start:
{
lean_object* v___x_2201_; 
v___x_2201_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_depth_2195_, v_keys_2196_, v_vals_2197_, v_i_2199_, v_entries_2200_);
return v___x_2201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___boxed(lean_object* v_00_u03b2_2202_, lean_object* v_depth_2203_, lean_object* v_keys_2204_, lean_object* v_vals_2205_, lean_object* v_heq_2206_, lean_object* v_i_2207_, lean_object* v_entries_2208_){
_start:
{
size_t v_depth_boxed_2209_; lean_object* v_res_2210_; 
v_depth_boxed_2209_ = lean_unbox_usize(v_depth_2203_);
lean_dec(v_depth_2203_);
v_res_2210_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(v_00_u03b2_2202_, v_depth_boxed_2209_, v_keys_2204_, v_vals_2205_, v_heq_2206_, v_i_2207_, v_entries_2208_);
lean_dec_ref(v_vals_2205_);
lean_dec_ref(v_keys_2204_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9(lean_object* v_00_u03b2_2211_, lean_object* v_x_2212_, lean_object* v_x_2213_, lean_object* v_x_2214_, lean_object* v_x_2215_){
_start:
{
lean_object* v___x_2216_; 
v___x_2216_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(v_x_2212_, v_x_2213_, v_x_2214_, v_x_2215_);
return v___x_2216_;
}
}
static lean_object* _init_l_Lean_MVarId_applyConst___closed__0(void){
_start:
{
lean_object* v___x_2217_; 
v___x_2217_ = lean_mk_string_unchecked("'", 1, 1);
return v___x_2217_;
}
}
static lean_object* _init_l_Lean_MVarId_applyConst___closed__1(void){
_start:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2218_ = lean_obj_once(&l_Lean_MVarId_applyConst___closed__0, &l_Lean_MVarId_applyConst___closed__0_once, _init_l_Lean_MVarId_applyConst___closed__0);
v___x_2219_ = l_Lean_stringToMessageData(v___x_2218_);
return v___x_2219_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst(lean_object* v_mvar_2220_, lean_object* v_c_2221_, lean_object* v_cfg_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v___x_2228_; 
lean_inc(v_c_2221_);
v___x_2228_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_c_2221_, v_a_2223_, v_a_2224_, v_a_2225_, v_a_2226_);
if (lean_obj_tag(v___x_2228_) == 0)
{
lean_object* v_a_2229_; lean_object* v___x_2230_; uint8_t v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v_a_2229_ = lean_ctor_get(v___x_2228_, 0);
lean_inc(v_a_2229_);
lean_dec_ref(v___x_2228_);
v___x_2230_ = lean_obj_once(&l_Lean_MVarId_applyConst___closed__1, &l_Lean_MVarId_applyConst___closed__1_once, _init_l_Lean_MVarId_applyConst___closed__1);
v___x_2231_ = 0;
v___x_2232_ = l_Lean_MessageData_ofConstName(v_c_2221_, v___x_2231_);
v___x_2233_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2230_);
lean_ctor_set(v___x_2233_, 1, v___x_2232_);
v___x_2234_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2234_, 0, v___x_2233_);
lean_ctor_set(v___x_2234_, 1, v___x_2230_);
v___x_2235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2235_, 0, v___x_2234_);
v___x_2236_ = l_Lean_MVarId_apply(v_mvar_2220_, v_a_2229_, v_cfg_2222_, v___x_2235_, v_a_2223_, v_a_2224_, v_a_2225_, v_a_2226_);
return v___x_2236_;
}
else
{
lean_object* v_a_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2244_; 
lean_dec_ref(v_cfg_2222_);
lean_dec(v_c_2221_);
lean_dec(v_mvar_2220_);
v_a_2237_ = lean_ctor_get(v___x_2228_, 0);
v_isSharedCheck_2244_ = !lean_is_exclusive(v___x_2228_);
if (v_isSharedCheck_2244_ == 0)
{
v___x_2239_ = v___x_2228_;
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_a_2237_);
lean_dec(v___x_2228_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2244_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2242_; 
if (v_isShared_2240_ == 0)
{
v___x_2242_ = v___x_2239_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2243_; 
v_reuseFailAlloc_2243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2243_, 0, v_a_2237_);
v___x_2242_ = v_reuseFailAlloc_2243_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
return v___x_2242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst___boxed(lean_object* v_mvar_2245_, lean_object* v_c_2246_, lean_object* v_cfg_2247_, lean_object* v_a_2248_, lean_object* v_a_2249_, lean_object* v_a_2250_, lean_object* v_a_2251_, lean_object* v_a_2252_){
_start:
{
lean_object* v_res_2253_; 
v_res_2253_ = l_Lean_MVarId_applyConst(v_mvar_2245_, v_c_2246_, v_cfg_2247_, v_a_2248_, v_a_2249_, v_a_2250_, v_a_2251_);
lean_dec(v_a_2251_);
lean_dec_ref(v_a_2250_);
lean_dec(v_a_2249_);
lean_dec_ref(v_a_2248_);
return v_res_2253_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(size_t v_sz_2254_, size_t v_i_2255_, lean_object* v_bs_2256_){
_start:
{
uint8_t v___x_2257_; 
v___x_2257_ = lean_usize_dec_lt(v_i_2255_, v_sz_2254_);
if (v___x_2257_ == 0)
{
return v_bs_2256_;
}
else
{
lean_object* v_v_2258_; lean_object* v___x_2259_; lean_object* v_bs_x27_2260_; lean_object* v___x_2261_; size_t v___x_2262_; size_t v___x_2263_; lean_object* v___x_2264_; 
v_v_2258_ = lean_array_uget(v_bs_2256_, v_i_2255_);
v___x_2259_ = lean_unsigned_to_nat(0u);
v_bs_x27_2260_ = lean_array_uset(v_bs_2256_, v_i_2255_, v___x_2259_);
v___x_2261_ = l_Lean_Expr_mvarId_x21(v_v_2258_);
lean_dec(v_v_2258_);
v___x_2262_ = ((size_t)1ULL);
v___x_2263_ = lean_usize_add(v_i_2255_, v___x_2262_);
v___x_2264_ = lean_array_uset(v_bs_x27_2260_, v_i_2255_, v___x_2261_);
v_i_2255_ = v___x_2263_;
v_bs_2256_ = v___x_2264_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0___boxed(lean_object* v_sz_2266_, lean_object* v_i_2267_, lean_object* v_bs_2268_){
_start:
{
size_t v_sz_boxed_2269_; size_t v_i_boxed_2270_; lean_object* v_res_2271_; 
v_sz_boxed_2269_ = lean_unbox_usize(v_sz_2266_);
lean_dec(v_sz_2266_);
v_i_boxed_2270_ = lean_unbox_usize(v_i_2267_);
lean_dec(v_i_2267_);
v_res_2271_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(v_sz_boxed_2269_, v_i_boxed_2270_, v_bs_2268_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(lean_object* v_msgData_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_){
_start:
{
lean_object* v___x_2278_; lean_object* v_env_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v_mctx_2282_; lean_object* v_lctx_2283_; lean_object* v_options_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2278_ = lean_st_ref_get(v___y_2276_);
v_env_2279_ = lean_ctor_get(v___x_2278_, 0);
lean_inc_ref(v_env_2279_);
lean_dec(v___x_2278_);
v___x_2280_ = lean_st_ref_get(v___y_2276_);
lean_dec(v___x_2280_);
v___x_2281_ = lean_st_ref_get(v___y_2274_);
v_mctx_2282_ = lean_ctor_get(v___x_2281_, 0);
lean_inc_ref(v_mctx_2282_);
lean_dec(v___x_2281_);
v_lctx_2283_ = lean_ctor_get(v___y_2273_, 2);
v_options_2284_ = lean_ctor_get(v___y_2275_, 2);
lean_inc_ref(v_options_2284_);
lean_inc_ref(v_lctx_2283_);
v___x_2285_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2285_, 0, v_env_2279_);
lean_ctor_set(v___x_2285_, 1, v_mctx_2282_);
lean_ctor_set(v___x_2285_, 2, v_lctx_2283_);
lean_ctor_set(v___x_2285_, 3, v_options_2284_);
v___x_2286_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2285_);
lean_ctor_set(v___x_2286_, 1, v_msgData_2272_);
v___x_2287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2287_, 0, v___x_2286_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1___boxed(lean_object* v_msgData_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_){
_start:
{
lean_object* v_res_2294_; 
v_res_2294_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(v_msgData_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_);
lean_dec(v___y_2292_);
lean_dec_ref(v___y_2291_);
lean_dec(v___y_2290_);
lean_dec_ref(v___y_2289_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(lean_object* v_msg_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v_ref_2301_; lean_object* v___x_2302_; lean_object* v_a_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2311_; 
v_ref_2301_ = lean_ctor_get(v___y_2298_, 5);
v___x_2302_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(v_msg_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_);
v_a_2303_ = lean_ctor_get(v___x_2302_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2302_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2305_ = v___x_2302_;
v_isShared_2306_ = v_isSharedCheck_2311_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_a_2303_);
lean_dec(v___x_2302_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2311_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2307_; lean_object* v___x_2309_; 
lean_inc(v_ref_2301_);
v___x_2307_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2307_, 0, v_ref_2301_);
lean_ctor_set(v___x_2307_, 1, v_a_2303_);
if (v_isShared_2306_ == 0)
{
lean_ctor_set_tag(v___x_2305_, 1);
lean_ctor_set(v___x_2305_, 0, v___x_2307_);
v___x_2309_ = v___x_2305_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2307_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg___boxed(lean_object* v_msg_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_){
_start:
{
lean_object* v_res_2318_; 
v_res_2318_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v_msg_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_);
lean_dec(v___y_2316_);
lean_dec_ref(v___y_2315_);
lean_dec(v___y_2314_);
lean_dec_ref(v___y_2313_);
return v_res_2318_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2319_; 
v___x_2319_ = lean_mk_string_unchecked("Type mismatch: target is", 24, 24);
return v___x_2319_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2320_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__0, &l_Lean_MVarId_applyN___lam__0___closed__0_once, _init_l_Lean_MVarId_applyN___lam__0___closed__0);
v___x_2321_ = l_Lean_stringToMessageData(v___x_2320_);
return v___x_2321_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2322_; 
v___x_2322_ = lean_mk_string_unchecked("\nbut applied expression has type", 32, 32);
return v___x_2322_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2323_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__2, &l_Lean_MVarId_applyN___lam__0___closed__2_once, _init_l_Lean_MVarId_applyN___lam__0___closed__2);
v___x_2324_ = l_Lean_stringToMessageData(v___x_2323_);
return v___x_2324_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2325_; 
v___x_2325_ = lean_mk_string_unchecked("\nafter applying ", 16, 16);
return v___x_2325_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2326_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__4, &l_Lean_MVarId_applyN___lam__0___closed__4_once, _init_l_Lean_MVarId_applyN___lam__0___closed__4);
v___x_2327_ = l_Lean_stringToMessageData(v___x_2326_);
return v___x_2327_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__6(void){
_start:
{
lean_object* v___x_2328_; 
v___x_2328_ = lean_mk_string_unchecked(" arguments.", 11, 11);
return v___x_2328_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2329_; lean_object* v___x_2330_; 
v___x_2329_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__6, &l_Lean_MVarId_applyN___lam__0___closed__6_once, _init_l_Lean_MVarId_applyN___lam__0___closed__6);
v___x_2330_ = l_Lean_stringToMessageData(v___x_2329_);
return v___x_2330_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__8(void){
_start:
{
lean_object* v___x_2331_; 
v___x_2331_ = lean_mk_string_unchecked("Applied type takes fewer than ", 30, 30);
return v___x_2331_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2332_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__8, &l_Lean_MVarId_applyN___lam__0___closed__8_once, _init_l_Lean_MVarId_applyN___lam__0___closed__8);
v___x_2333_ = l_Lean_stringToMessageData(v___x_2332_);
return v___x_2333_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__10(void){
_start:
{
lean_object* v___x_2334_; 
v___x_2334_ = lean_mk_string_unchecked(" arguments:\n", 12, 12);
return v___x_2334_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__11(void){
_start:
{
lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2335_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__10, &l_Lean_MVarId_applyN___lam__0___closed__10_once, _init_l_Lean_MVarId_applyN___lam__0___closed__10);
v___x_2336_ = l_Lean_stringToMessageData(v___x_2335_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0(lean_object* v_mvarId_2337_, lean_object* v___x_2338_, lean_object* v_e_2339_, lean_object* v_n_2340_, uint8_t v_useApproxDefEq_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_){
_start:
{
lean_object* v___x_2347_; 
lean_inc(v_mvarId_2337_);
v___x_2347_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2337_, v___x_2338_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
if (lean_obj_tag(v___x_2347_) == 0)
{
lean_object* v___x_2348_; 
lean_dec_ref(v___x_2347_);
lean_inc(v_mvarId_2337_);
v___x_2348_ = l_Lean_MVarId_getType(v_mvarId_2337_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
if (lean_obj_tag(v___x_2348_) == 0)
{
lean_object* v_a_2349_; lean_object* v___x_2350_; 
v_a_2349_ = lean_ctor_get(v___x_2348_, 0);
lean_inc(v_a_2349_);
lean_dec_ref(v___x_2348_);
lean_inc(v___y_2345_);
lean_inc_ref(v___y_2344_);
lean_inc(v___y_2343_);
lean_inc_ref(v___y_2342_);
lean_inc_ref(v_e_2339_);
v___x_2350_ = lean_infer_type(v_e_2339_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v_a_2351_; uint8_t v___x_2352_; lean_object* v___x_2353_; 
v_a_2351_ = lean_ctor_get(v___x_2350_, 0);
lean_inc(v_a_2351_);
lean_dec_ref(v___x_2350_);
v___x_2352_ = 0;
lean_inc(v_n_2340_);
v___x_2353_ = l_Lean_Meta_forallMetaBoundedTelescope(v_a_2351_, v_n_2340_, v___x_2352_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; lean_object* v_fst_2355_; lean_object* v_snd_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2447_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2354_);
lean_dec_ref(v___x_2353_);
v_fst_2355_ = lean_ctor_get(v_a_2354_, 0);
v_snd_2356_ = lean_ctor_get(v_a_2354_, 1);
v_isSharedCheck_2447_ = !lean_is_exclusive(v_a_2354_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2358_ = v_a_2354_;
v_isShared_2359_ = v_isSharedCheck_2447_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_snd_2356_);
lean_inc(v_fst_2355_);
lean_dec(v_a_2354_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2447_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___y_2361_; lean_object* v___y_2362_; lean_object* v_snd_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2445_; 
v_snd_2377_ = lean_ctor_get(v_snd_2356_, 1);
v_isSharedCheck_2445_ = !lean_is_exclusive(v_snd_2356_);
if (v_isSharedCheck_2445_ == 0)
{
lean_object* v_unused_2446_; 
v_unused_2446_ = lean_ctor_get(v_snd_2356_, 0);
lean_dec(v_unused_2446_);
v___x_2379_ = v_snd_2356_;
v_isShared_2380_ = v_isSharedCheck_2445_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_snd_2377_);
lean_dec(v_snd_2356_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2445_;
goto v_resetjp_2378_;
}
v___jp_2360_:
{
lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2375_; 
lean_inc(v_fst_2355_);
v___x_2363_ = l_Lean_Expr_beta(v_e_2339_, v_fst_2355_);
v___x_2364_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2337_, v___x_2363_, v___y_2361_, v___y_2362_);
lean_dec(v___y_2362_);
lean_dec(v___y_2361_);
v_isSharedCheck_2375_ = !lean_is_exclusive(v___x_2364_);
if (v_isSharedCheck_2375_ == 0)
{
lean_object* v_unused_2376_; 
v_unused_2376_ = lean_ctor_get(v___x_2364_, 0);
lean_dec(v_unused_2376_);
v___x_2366_ = v___x_2364_;
v_isShared_2367_ = v_isSharedCheck_2375_;
goto v_resetjp_2365_;
}
else
{
lean_dec(v___x_2364_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2375_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
size_t v_sz_2368_; size_t v___x_2369_; lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2373_; 
v_sz_2368_ = lean_array_size(v_fst_2355_);
v___x_2369_ = ((size_t)0ULL);
v___x_2370_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(v_sz_2368_, v___x_2369_, v_fst_2355_);
v___x_2371_ = lean_array_to_list(v___x_2370_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 0, v___x_2371_);
v___x_2373_ = v___x_2366_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2374_; 
v_reuseFailAlloc_2374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2374_, 0, v___x_2371_);
v___x_2373_ = v_reuseFailAlloc_2374_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
return v___x_2373_;
}
}
}
v_resetjp_2378_:
{
lean_object* v___y_2382_; lean_object* v___y_2383_; lean_object* v___y_2384_; lean_object* v___y_2385_; lean_object* v___x_2425_; uint8_t v___x_2426_; 
v___x_2425_ = lean_array_get_size(v_fst_2355_);
v___x_2426_ = lean_nat_dec_eq(v___x_2425_, v_n_2340_);
if (v___x_2426_ == 0)
{
lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2444_; 
lean_del_object(v___x_2379_);
lean_del_object(v___x_2358_);
lean_dec(v_fst_2355_);
lean_dec(v_a_2349_);
lean_dec_ref(v_e_2339_);
lean_dec(v_mvarId_2337_);
v___x_2427_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__9, &l_Lean_MVarId_applyN___lam__0___closed__9_once, _init_l_Lean_MVarId_applyN___lam__0___closed__9);
v___x_2428_ = l_Nat_reprFast(v_n_2340_);
v___x_2429_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2428_);
v___x_2430_ = l_Lean_MessageData_ofFormat(v___x_2429_);
v___x_2431_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2427_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
v___x_2432_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__11, &l_Lean_MVarId_applyN___lam__0___closed__11_once, _init_l_Lean_MVarId_applyN___lam__0___closed__11);
v___x_2433_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2431_);
lean_ctor_set(v___x_2433_, 1, v___x_2432_);
v___x_2434_ = l_Lean_indentExpr(v_snd_2377_);
v___x_2435_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2433_);
lean_ctor_set(v___x_2435_, 1, v___x_2434_);
v___x_2436_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_2435_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
v_a_2437_ = lean_ctor_get(v___x_2436_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v___x_2436_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2439_ = v___x_2436_;
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___x_2436_);
v___x_2439_ = lean_box(0);
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
v_resetjp_2438_:
{
lean_object* v___x_2442_; 
if (v_isShared_2440_ == 0)
{
v___x_2442_ = v___x_2439_;
goto v_reusejp_2441_;
}
else
{
lean_object* v_reuseFailAlloc_2443_; 
v_reuseFailAlloc_2443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2443_, 0, v_a_2437_);
v___x_2442_ = v_reuseFailAlloc_2443_;
goto v_reusejp_2441_;
}
v_reusejp_2441_:
{
return v___x_2442_;
}
}
}
else
{
v___y_2382_ = v___y_2342_;
v___y_2383_ = v___y_2343_;
v___y_2384_ = v___y_2344_;
v___y_2385_ = v___y_2345_;
goto v___jp_2381_;
}
v___jp_2381_:
{
lean_object* v___x_2386_; 
lean_inc(v_a_2349_);
lean_inc(v_snd_2377_);
v___x_2386_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_useApproxDefEq_2341_, v_snd_2377_, v_a_2349_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; uint8_t v___x_2388_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2387_);
lean_dec_ref(v___x_2386_);
v___x_2388_ = lean_unbox(v_a_2387_);
lean_dec(v_a_2387_);
if (v___x_2388_ == 0)
{
lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2392_; 
lean_dec(v_fst_2355_);
lean_dec_ref(v_e_2339_);
lean_dec(v_mvarId_2337_);
v___x_2389_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__1, &l_Lean_MVarId_applyN___lam__0___closed__1_once, _init_l_Lean_MVarId_applyN___lam__0___closed__1);
v___x_2390_ = l_Lean_indentExpr(v_a_2349_);
if (v_isShared_2380_ == 0)
{
lean_ctor_set_tag(v___x_2379_, 7);
lean_ctor_set(v___x_2379_, 1, v___x_2390_);
lean_ctor_set(v___x_2379_, 0, v___x_2389_);
v___x_2392_ = v___x_2379_;
goto v_reusejp_2391_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v___x_2389_);
lean_ctor_set(v_reuseFailAlloc_2416_, 1, v___x_2390_);
v___x_2392_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2391_;
}
v_reusejp_2391_:
{
lean_object* v___x_2393_; lean_object* v___x_2395_; 
v___x_2393_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__3, &l_Lean_MVarId_applyN___lam__0___closed__3_once, _init_l_Lean_MVarId_applyN___lam__0___closed__3);
if (v_isShared_2359_ == 0)
{
lean_ctor_set_tag(v___x_2358_, 7);
lean_ctor_set(v___x_2358_, 1, v___x_2393_);
lean_ctor_set(v___x_2358_, 0, v___x_2392_);
v___x_2395_ = v___x_2358_;
goto v_reusejp_2394_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2392_);
lean_ctor_set(v_reuseFailAlloc_2415_, 1, v___x_2393_);
v___x_2395_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2394_;
}
v_reusejp_2394_:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; lean_object* v___x_2406_; lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
v___x_2396_ = l_Lean_indentExpr(v_snd_2377_);
v___x_2397_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2397_, 0, v___x_2395_);
lean_ctor_set(v___x_2397_, 1, v___x_2396_);
v___x_2398_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__5, &l_Lean_MVarId_applyN___lam__0___closed__5_once, _init_l_Lean_MVarId_applyN___lam__0___closed__5);
v___x_2399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2399_, 0, v___x_2397_);
lean_ctor_set(v___x_2399_, 1, v___x_2398_);
v___x_2400_ = l_Nat_reprFast(v_n_2340_);
v___x_2401_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2401_, 0, v___x_2400_);
v___x_2402_ = l_Lean_MessageData_ofFormat(v___x_2401_);
v___x_2403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2403_, 0, v___x_2399_);
lean_ctor_set(v___x_2403_, 1, v___x_2402_);
v___x_2404_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__7, &l_Lean_MVarId_applyN___lam__0___closed__7_once, _init_l_Lean_MVarId_applyN___lam__0___closed__7);
v___x_2405_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2405_, 0, v___x_2403_);
lean_ctor_set(v___x_2405_, 1, v___x_2404_);
v___x_2406_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_2405_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
v_a_2407_ = lean_ctor_get(v___x_2406_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2406_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2406_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2406_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
}
}
else
{
lean_dec_ref(v___y_2384_);
lean_dec_ref(v___y_2382_);
lean_del_object(v___x_2379_);
lean_dec(v_snd_2377_);
lean_del_object(v___x_2358_);
lean_dec(v_a_2349_);
lean_dec(v_n_2340_);
v___y_2361_ = v___y_2383_;
v___y_2362_ = v___y_2385_;
goto v___jp_2360_;
}
}
else
{
lean_object* v_a_2417_; lean_object* v___x_2419_; uint8_t v_isShared_2420_; uint8_t v_isSharedCheck_2424_; 
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec(v___y_2383_);
lean_dec_ref(v___y_2382_);
lean_del_object(v___x_2379_);
lean_dec(v_snd_2377_);
lean_del_object(v___x_2358_);
lean_dec(v_fst_2355_);
lean_dec(v_a_2349_);
lean_dec(v_n_2340_);
lean_dec_ref(v_e_2339_);
lean_dec(v_mvarId_2337_);
v_a_2417_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2424_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2424_ == 0)
{
v___x_2419_ = v___x_2386_;
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
else
{
lean_inc(v_a_2417_);
lean_dec(v___x_2386_);
v___x_2419_ = lean_box(0);
v_isShared_2420_ = v_isSharedCheck_2424_;
goto v_resetjp_2418_;
}
v_resetjp_2418_:
{
lean_object* v___x_2422_; 
if (v_isShared_2420_ == 0)
{
v___x_2422_ = v___x_2419_;
goto v_reusejp_2421_;
}
else
{
lean_object* v_reuseFailAlloc_2423_; 
v_reuseFailAlloc_2423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2423_, 0, v_a_2417_);
v___x_2422_ = v_reuseFailAlloc_2423_;
goto v_reusejp_2421_;
}
v_reusejp_2421_:
{
return v___x_2422_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2455_; 
lean_dec(v_a_2349_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v_n_2340_);
lean_dec_ref(v_e_2339_);
lean_dec(v_mvarId_2337_);
v_a_2448_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2455_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2455_ == 0)
{
v___x_2450_ = v___x_2353_;
v_isShared_2451_ = v_isSharedCheck_2455_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_a_2448_);
lean_dec(v___x_2353_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2455_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v___x_2453_; 
if (v_isShared_2451_ == 0)
{
v___x_2453_ = v___x_2450_;
goto v_reusejp_2452_;
}
else
{
lean_object* v_reuseFailAlloc_2454_; 
v_reuseFailAlloc_2454_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2454_, 0, v_a_2448_);
v___x_2453_ = v_reuseFailAlloc_2454_;
goto v_reusejp_2452_;
}
v_reusejp_2452_:
{
return v___x_2453_;
}
}
}
}
else
{
lean_object* v_a_2456_; lean_object* v___x_2458_; uint8_t v_isShared_2459_; uint8_t v_isSharedCheck_2463_; 
lean_dec(v_a_2349_);
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v_n_2340_);
lean_dec_ref(v_e_2339_);
lean_dec(v_mvarId_2337_);
v_a_2456_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2463_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2463_ == 0)
{
v___x_2458_ = v___x_2350_;
v_isShared_2459_ = v_isSharedCheck_2463_;
goto v_resetjp_2457_;
}
else
{
lean_inc(v_a_2456_);
lean_dec(v___x_2350_);
v___x_2458_ = lean_box(0);
v_isShared_2459_ = v_isSharedCheck_2463_;
goto v_resetjp_2457_;
}
v_resetjp_2457_:
{
lean_object* v___x_2461_; 
if (v_isShared_2459_ == 0)
{
v___x_2461_ = v___x_2458_;
goto v_reusejp_2460_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v_a_2456_);
v___x_2461_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2460_;
}
v_reusejp_2460_:
{
return v___x_2461_;
}
}
}
}
else
{
lean_object* v_a_2464_; lean_object* v___x_2466_; uint8_t v_isShared_2467_; uint8_t v_isSharedCheck_2471_; 
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v_n_2340_);
lean_dec_ref(v_e_2339_);
lean_dec(v_mvarId_2337_);
v_a_2464_ = lean_ctor_get(v___x_2348_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2348_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2466_ = v___x_2348_;
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
else
{
lean_inc(v_a_2464_);
lean_dec(v___x_2348_);
v___x_2466_ = lean_box(0);
v_isShared_2467_ = v_isSharedCheck_2471_;
goto v_resetjp_2465_;
}
v_resetjp_2465_:
{
lean_object* v___x_2469_; 
if (v_isShared_2467_ == 0)
{
v___x_2469_ = v___x_2466_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v_a_2464_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
else
{
lean_object* v_a_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2479_; 
lean_dec(v___y_2345_);
lean_dec_ref(v___y_2344_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v_n_2340_);
lean_dec_ref(v_e_2339_);
lean_dec(v_mvarId_2337_);
v_a_2472_ = lean_ctor_get(v___x_2347_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2347_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2474_ = v___x_2347_;
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_a_2472_);
lean_dec(v___x_2347_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2479_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2477_; 
if (v_isShared_2475_ == 0)
{
v___x_2477_ = v___x_2474_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v_a_2472_);
v___x_2477_ = v_reuseFailAlloc_2478_;
goto v_reusejp_2476_;
}
v_reusejp_2476_:
{
return v___x_2477_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0___boxed(lean_object* v_mvarId_2480_, lean_object* v___x_2481_, lean_object* v_e_2482_, lean_object* v_n_2483_, lean_object* v_useApproxDefEq_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_, lean_object* v___y_2489_){
_start:
{
uint8_t v_useApproxDefEq_boxed_2490_; lean_object* v_res_2491_; 
v_useApproxDefEq_boxed_2490_ = lean_unbox(v_useApproxDefEq_2484_);
v_res_2491_ = l_Lean_MVarId_applyN___lam__0(v_mvarId_2480_, v___x_2481_, v_e_2482_, v_n_2483_, v_useApproxDefEq_boxed_2490_, v___y_2485_, v___y_2486_, v___y_2487_, v___y_2488_);
return v_res_2491_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN(lean_object* v_mvarId_2492_, lean_object* v_e_2493_, lean_object* v_n_2494_, uint8_t v_useApproxDefEq_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_){
_start:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___f_2503_; lean_object* v___x_2504_; 
v___x_2501_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1);
v___x_2502_ = lean_box(v_useApproxDefEq_2495_);
lean_inc(v_mvarId_2492_);
v___f_2503_ = lean_alloc_closure((void*)(l_Lean_MVarId_applyN___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2503_, 0, v_mvarId_2492_);
lean_closure_set(v___f_2503_, 1, v___x_2501_);
lean_closure_set(v___f_2503_, 2, v_e_2493_);
lean_closure_set(v___f_2503_, 3, v_n_2494_);
lean_closure_set(v___f_2503_, 4, v___x_2502_);
v___x_2504_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2492_, v___f_2503_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_);
return v___x_2504_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___boxed(lean_object* v_mvarId_2505_, lean_object* v_e_2506_, lean_object* v_n_2507_, lean_object* v_useApproxDefEq_2508_, lean_object* v_a_2509_, lean_object* v_a_2510_, lean_object* v_a_2511_, lean_object* v_a_2512_, lean_object* v_a_2513_){
_start:
{
uint8_t v_useApproxDefEq_boxed_2514_; lean_object* v_res_2515_; 
v_useApproxDefEq_boxed_2514_ = lean_unbox(v_useApproxDefEq_2508_);
v_res_2515_ = l_Lean_MVarId_applyN(v_mvarId_2505_, v_e_2506_, v_n_2507_, v_useApproxDefEq_boxed_2514_, v_a_2509_, v_a_2510_, v_a_2511_, v_a_2512_);
lean_dec(v_a_2512_);
lean_dec_ref(v_a_2511_);
lean_dec(v_a_2510_);
lean_dec_ref(v_a_2509_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(lean_object* v_00_u03b1_2516_, lean_object* v_msg_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_){
_start:
{
lean_object* v___x_2523_; 
v___x_2523_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v_msg_2517_, v___y_2518_, v___y_2519_, v___y_2520_, v___y_2521_);
return v___x_2523_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___boxed(lean_object* v_00_u03b1_2524_, lean_object* v_msg_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_, lean_object* v___y_2528_, lean_object* v___y_2529_, lean_object* v___y_2530_){
_start:
{
lean_object* v_res_2531_; 
v_res_2531_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(v_00_u03b1_2524_, v_msg_2525_, v___y_2526_, v___y_2527_, v___y_2528_, v___y_2529_);
lean_dec(v___y_2529_);
lean_dec_ref(v___y_2528_);
lean_dec(v___y_2527_);
lean_dec_ref(v___y_2526_);
return v_res_2531_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0(void){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = lean_mk_string_unchecked("And", 3, 3);
return v___x_2532_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2533_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0);
v___x_2534_ = l_Lean_Name_mkStr1(v___x_2533_);
return v___x_2534_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2(void){
_start:
{
lean_object* v___x_2535_; 
v___x_2535_ = lean_mk_string_unchecked("h", 1, 1);
return v___x_2535_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3(void){
_start:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
v___x_2536_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2);
v___x_2537_ = l_Lean_Name_mkStr1(v___x_2536_);
return v___x_2537_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4(void){
_start:
{
lean_object* v___x_2538_; 
v___x_2538_ = lean_mk_string_unchecked("intro", 5, 5);
return v___x_2538_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5(void){
_start:
{
lean_object* v___x_2539_; lean_object* v___x_2540_; lean_object* v___x_2541_; 
v___x_2539_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4);
v___x_2540_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0);
v___x_2541_ = l_Lean_Name_mkStr2(v___x_2540_, v___x_2539_);
return v___x_2541_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6(void){
_start:
{
lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2542_ = lean_box(0);
v___x_2543_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5);
v___x_2544_ = l_Lean_mkConst(v___x_2543_, v___x_2542_);
return v___x_2544_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(lean_object* v_tag_2545_, lean_object* v_type_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_){
_start:
{
lean_object* v___x_2553_; 
lean_inc(v_a_2551_);
lean_inc_ref(v_a_2550_);
lean_inc(v_a_2549_);
lean_inc_ref(v_a_2548_);
v___x_2553_ = lean_whnf(v_type_2546_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_);
if (lean_obj_tag(v___x_2553_) == 0)
{
lean_object* v_a_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; uint8_t v___x_2557_; 
v_a_2554_ = lean_ctor_get(v___x_2553_, 0);
lean_inc(v_a_2554_);
lean_dec_ref(v___x_2553_);
v___x_2555_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1);
v___x_2556_ = lean_unsigned_to_nat(2u);
v___x_2557_ = l_Lean_Expr_isAppOfArity(v_a_2554_, v___x_2555_, v___x_2556_);
if (v___x_2557_ == 0)
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2558_ = lean_st_ref_get(v_a_2551_);
lean_dec(v___x_2558_);
v___x_2559_ = lean_st_ref_get(v_a_2547_);
v___x_2560_ = lean_array_get_size(v___x_2559_);
lean_dec(v___x_2559_);
v___x_2561_ = lean_unsigned_to_nat(1u);
v___x_2562_ = lean_nat_add(v___x_2560_, v___x_2561_);
v___x_2563_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3);
v___x_2564_ = lean_name_append_index_after(v___x_2563_, v___x_2562_);
v___x_2565_ = l_Lean_Name_append(v_tag_2545_, v___x_2564_);
v___x_2566_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_2554_, v___x_2565_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_);
if (lean_obj_tag(v___x_2566_) == 0)
{
lean_object* v_a_2567_; lean_object* v___x_2569_; uint8_t v_isShared_2570_; uint8_t v_isSharedCheck_2579_; 
v_a_2567_ = lean_ctor_get(v___x_2566_, 0);
v_isSharedCheck_2579_ = !lean_is_exclusive(v___x_2566_);
if (v_isSharedCheck_2579_ == 0)
{
v___x_2569_ = v___x_2566_;
v_isShared_2570_ = v_isSharedCheck_2579_;
goto v_resetjp_2568_;
}
else
{
lean_inc(v_a_2567_);
lean_dec(v___x_2566_);
v___x_2569_ = lean_box(0);
v_isShared_2570_ = v_isSharedCheck_2579_;
goto v_resetjp_2568_;
}
v_resetjp_2568_:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2577_; 
v___x_2571_ = lean_st_ref_get(v_a_2551_);
lean_dec(v___x_2571_);
v___x_2572_ = lean_st_ref_take(v_a_2547_);
v___x_2573_ = l_Lean_Expr_mvarId_x21(v_a_2567_);
v___x_2574_ = lean_array_push(v___x_2572_, v___x_2573_);
v___x_2575_ = lean_st_ref_set(v_a_2547_, v___x_2574_);
if (v_isShared_2570_ == 0)
{
v___x_2577_ = v___x_2569_;
goto v_reusejp_2576_;
}
else
{
lean_object* v_reuseFailAlloc_2578_; 
v_reuseFailAlloc_2578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2578_, 0, v_a_2567_);
v___x_2577_ = v_reuseFailAlloc_2578_;
goto v_reusejp_2576_;
}
v_reusejp_2576_:
{
return v___x_2577_;
}
}
}
else
{
return v___x_2566_;
}
}
else
{
lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2580_ = l_Lean_Expr_appFn_x21(v_a_2554_);
v___x_2581_ = l_Lean_Expr_appArg_x21(v___x_2580_);
lean_dec_ref(v___x_2580_);
lean_inc_ref(v___x_2581_);
lean_inc(v_tag_2545_);
v___x_2582_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2545_, v___x_2581_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v_a_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; 
v_a_2583_ = lean_ctor_get(v___x_2582_, 0);
lean_inc(v_a_2583_);
lean_dec_ref(v___x_2582_);
v___x_2584_ = l_Lean_Expr_appArg_x21(v_a_2554_);
lean_dec(v_a_2554_);
lean_inc_ref(v___x_2584_);
v___x_2585_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2545_, v___x_2584_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_);
if (lean_obj_tag(v___x_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2595_; 
v_a_2586_ = lean_ctor_get(v___x_2585_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2585_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2588_ = v___x_2585_;
v_isShared_2589_ = v_isSharedCheck_2595_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v___x_2585_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2595_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2593_; 
v___x_2590_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6);
v___x_2591_ = l_Lean_mkApp4(v___x_2590_, v___x_2581_, v___x_2584_, v_a_2583_, v_a_2586_);
if (v_isShared_2589_ == 0)
{
lean_ctor_set(v___x_2588_, 0, v___x_2591_);
v___x_2593_ = v___x_2588_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v___x_2591_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
else
{
lean_dec_ref(v___x_2584_);
lean_dec(v_a_2583_);
lean_dec_ref(v___x_2581_);
return v___x_2585_;
}
}
else
{
lean_dec_ref(v___x_2581_);
lean_dec(v_a_2554_);
lean_dec(v_tag_2545_);
return v___x_2582_;
}
}
}
else
{
lean_dec(v_tag_2545_);
return v___x_2553_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___boxed(lean_object* v_tag_2596_, lean_object* v_type_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_){
_start:
{
lean_object* v_res_2604_; 
v_res_2604_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2596_, v_type_2597_, v_a_2598_, v_a_2599_, v_a_2600_, v_a_2601_, v_a_2602_);
lean_dec(v_a_2602_);
lean_dec_ref(v_a_2601_);
lean_dec(v_a_2600_);
lean_dec_ref(v_a_2599_);
lean_dec(v_a_2598_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0(lean_object* v_mvarId_2605_, lean_object* v___x_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_){
_start:
{
lean_object* v___x_2612_; 
lean_inc(v_mvarId_2605_);
v___x_2612_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2605_, v___x_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
if (lean_obj_tag(v___x_2612_) == 0)
{
lean_object* v___x_2613_; 
lean_dec_ref(v___x_2612_);
lean_inc(v_mvarId_2605_);
v___x_2613_ = l_Lean_MVarId_getType_x27(v_mvarId_2605_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
if (lean_obj_tag(v___x_2613_) == 0)
{
lean_object* v_a_2614_; lean_object* v___x_2616_; uint8_t v_isShared_2617_; uint8_t v_isSharedCheck_2661_; 
v_a_2614_ = lean_ctor_get(v___x_2613_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2616_ = v___x_2613_;
v_isShared_2617_ = v_isSharedCheck_2661_;
goto v_resetjp_2615_;
}
else
{
lean_inc(v_a_2614_);
lean_dec(v___x_2613_);
v___x_2616_ = lean_box(0);
v_isShared_2617_ = v_isSharedCheck_2661_;
goto v_resetjp_2615_;
}
v_resetjp_2615_:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; uint8_t v___x_2620_; 
v___x_2618_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1);
v___x_2619_ = lean_unsigned_to_nat(2u);
v___x_2620_ = l_Lean_Expr_isAppOfArity(v_a_2614_, v___x_2618_, v___x_2619_);
if (v___x_2620_ == 0)
{
lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2624_; 
lean_dec(v_a_2614_);
v___x_2621_ = lean_box(0);
v___x_2622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2622_, 0, v_mvarId_2605_);
lean_ctor_set(v___x_2622_, 1, v___x_2621_);
if (v_isShared_2617_ == 0)
{
lean_ctor_set(v___x_2616_, 0, v___x_2622_);
v___x_2624_ = v___x_2616_;
goto v_reusejp_2623_;
}
else
{
lean_object* v_reuseFailAlloc_2625_; 
v_reuseFailAlloc_2625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2625_, 0, v___x_2622_);
v___x_2624_ = v_reuseFailAlloc_2625_;
goto v_reusejp_2623_;
}
v_reusejp_2623_:
{
return v___x_2624_;
}
}
else
{
lean_object* v___x_2626_; 
lean_del_object(v___x_2616_);
lean_inc(v_mvarId_2605_);
v___x_2626_ = l_Lean_MVarId_getTag(v_mvarId_2605_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
if (lean_obj_tag(v___x_2626_) == 0)
{
lean_object* v_a_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; 
v_a_2627_ = lean_ctor_get(v___x_2626_, 0);
lean_inc(v_a_2627_);
lean_dec_ref(v___x_2626_);
v___x_2628_ = lean_st_ref_get(v___y_2610_);
lean_dec(v___x_2628_);
v___x_2629_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0);
v___x_2630_ = lean_st_mk_ref(v___x_2629_);
v___x_2631_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_a_2627_, v_a_2614_, v___x_2630_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
if (lean_obj_tag(v___x_2631_) == 0)
{
lean_object* v_a_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2637_; uint8_t v_isShared_2638_; uint8_t v_isSharedCheck_2643_; 
v_a_2632_ = lean_ctor_get(v___x_2631_, 0);
lean_inc(v_a_2632_);
lean_dec_ref(v___x_2631_);
v___x_2633_ = lean_st_ref_get(v___y_2610_);
lean_dec(v___x_2633_);
v___x_2634_ = lean_st_ref_get(v___x_2630_);
lean_dec(v___x_2630_);
v___x_2635_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2605_, v_a_2632_, v___y_2608_, v___y_2610_);
v_isSharedCheck_2643_ = !lean_is_exclusive(v___x_2635_);
if (v_isSharedCheck_2643_ == 0)
{
lean_object* v_unused_2644_; 
v_unused_2644_ = lean_ctor_get(v___x_2635_, 0);
lean_dec(v_unused_2644_);
v___x_2637_ = v___x_2635_;
v_isShared_2638_ = v_isSharedCheck_2643_;
goto v_resetjp_2636_;
}
else
{
lean_dec(v___x_2635_);
v___x_2637_ = lean_box(0);
v_isShared_2638_ = v_isSharedCheck_2643_;
goto v_resetjp_2636_;
}
v_resetjp_2636_:
{
lean_object* v___x_2639_; lean_object* v___x_2641_; 
v___x_2639_ = lean_array_to_list(v___x_2634_);
if (v_isShared_2638_ == 0)
{
lean_ctor_set(v___x_2637_, 0, v___x_2639_);
v___x_2641_ = v___x_2637_;
goto v_reusejp_2640_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v___x_2639_);
v___x_2641_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2640_;
}
v_reusejp_2640_:
{
return v___x_2641_;
}
}
}
else
{
lean_object* v_a_2645_; lean_object* v___x_2647_; uint8_t v_isShared_2648_; uint8_t v_isSharedCheck_2652_; 
lean_dec(v___x_2630_);
lean_dec(v_mvarId_2605_);
v_a_2645_ = lean_ctor_get(v___x_2631_, 0);
v_isSharedCheck_2652_ = !lean_is_exclusive(v___x_2631_);
if (v_isSharedCheck_2652_ == 0)
{
v___x_2647_ = v___x_2631_;
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
else
{
lean_inc(v_a_2645_);
lean_dec(v___x_2631_);
v___x_2647_ = lean_box(0);
v_isShared_2648_ = v_isSharedCheck_2652_;
goto v_resetjp_2646_;
}
v_resetjp_2646_:
{
lean_object* v___x_2650_; 
if (v_isShared_2648_ == 0)
{
v___x_2650_ = v___x_2647_;
goto v_reusejp_2649_;
}
else
{
lean_object* v_reuseFailAlloc_2651_; 
v_reuseFailAlloc_2651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2651_, 0, v_a_2645_);
v___x_2650_ = v_reuseFailAlloc_2651_;
goto v_reusejp_2649_;
}
v_reusejp_2649_:
{
return v___x_2650_;
}
}
}
}
else
{
lean_object* v_a_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2660_; 
lean_dec(v_a_2614_);
lean_dec(v_mvarId_2605_);
v_a_2653_ = lean_ctor_get(v___x_2626_, 0);
v_isSharedCheck_2660_ = !lean_is_exclusive(v___x_2626_);
if (v_isSharedCheck_2660_ == 0)
{
v___x_2655_ = v___x_2626_;
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_a_2653_);
lean_dec(v___x_2626_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2660_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
lean_object* v___x_2658_; 
if (v_isShared_2656_ == 0)
{
v___x_2658_ = v___x_2655_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2659_; 
v_reuseFailAlloc_2659_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2659_, 0, v_a_2653_);
v___x_2658_ = v_reuseFailAlloc_2659_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
return v___x_2658_;
}
}
}
}
}
}
else
{
lean_object* v_a_2662_; lean_object* v___x_2664_; uint8_t v_isShared_2665_; uint8_t v_isSharedCheck_2669_; 
lean_dec(v_mvarId_2605_);
v_a_2662_ = lean_ctor_get(v___x_2613_, 0);
v_isSharedCheck_2669_ = !lean_is_exclusive(v___x_2613_);
if (v_isSharedCheck_2669_ == 0)
{
v___x_2664_ = v___x_2613_;
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
else
{
lean_inc(v_a_2662_);
lean_dec(v___x_2613_);
v___x_2664_ = lean_box(0);
v_isShared_2665_ = v_isSharedCheck_2669_;
goto v_resetjp_2663_;
}
v_resetjp_2663_:
{
lean_object* v___x_2667_; 
if (v_isShared_2665_ == 0)
{
v___x_2667_ = v___x_2664_;
goto v_reusejp_2666_;
}
else
{
lean_object* v_reuseFailAlloc_2668_; 
v_reuseFailAlloc_2668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2668_, 0, v_a_2662_);
v___x_2667_ = v_reuseFailAlloc_2668_;
goto v_reusejp_2666_;
}
v_reusejp_2666_:
{
return v___x_2667_;
}
}
}
}
else
{
lean_object* v_a_2670_; lean_object* v___x_2672_; uint8_t v_isShared_2673_; uint8_t v_isSharedCheck_2677_; 
lean_dec(v_mvarId_2605_);
v_a_2670_ = lean_ctor_get(v___x_2612_, 0);
v_isSharedCheck_2677_ = !lean_is_exclusive(v___x_2612_);
if (v_isSharedCheck_2677_ == 0)
{
v___x_2672_ = v___x_2612_;
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
else
{
lean_inc(v_a_2670_);
lean_dec(v___x_2612_);
v___x_2672_ = lean_box(0);
v_isShared_2673_ = v_isSharedCheck_2677_;
goto v_resetjp_2671_;
}
v_resetjp_2671_:
{
lean_object* v___x_2675_; 
if (v_isShared_2673_ == 0)
{
v___x_2675_ = v___x_2672_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2676_; 
v_reuseFailAlloc_2676_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2676_, 0, v_a_2670_);
v___x_2675_ = v_reuseFailAlloc_2676_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
return v___x_2675_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0___boxed(lean_object* v_mvarId_2678_, lean_object* v___x_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = l_Lean_MVarId_splitAndCore___lam__0(v_mvarId_2678_, v___x_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
lean_dec(v___y_2683_);
lean_dec_ref(v___y_2682_);
lean_dec(v___y_2681_);
lean_dec_ref(v___y_2680_);
return v_res_2685_;
}
}
static lean_object* _init_l_Lean_MVarId_splitAndCore___closed__0(void){
_start:
{
lean_object* v___x_2686_; 
v___x_2686_ = lean_mk_string_unchecked("splitAnd", 8, 8);
return v___x_2686_;
}
}
static lean_object* _init_l_Lean_MVarId_splitAndCore___closed__1(void){
_start:
{
lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2687_ = lean_obj_once(&l_Lean_MVarId_splitAndCore___closed__0, &l_Lean_MVarId_splitAndCore___closed__0_once, _init_l_Lean_MVarId_splitAndCore___closed__0);
v___x_2688_ = l_Lean_Name_mkStr1(v___x_2687_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore(lean_object* v_mvarId_2689_, lean_object* v_a_2690_, lean_object* v_a_2691_, lean_object* v_a_2692_, lean_object* v_a_2693_){
_start:
{
lean_object* v___x_2695_; lean_object* v___f_2696_; lean_object* v___x_2697_; 
v___x_2695_ = lean_obj_once(&l_Lean_MVarId_splitAndCore___closed__1, &l_Lean_MVarId_splitAndCore___closed__1_once, _init_l_Lean_MVarId_splitAndCore___closed__1);
lean_inc(v_mvarId_2689_);
v___f_2696_ = lean_alloc_closure((void*)(l_Lean_MVarId_splitAndCore___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2696_, 0, v_mvarId_2689_);
lean_closure_set(v___f_2696_, 1, v___x_2695_);
v___x_2697_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2689_, v___f_2696_, v_a_2690_, v_a_2691_, v_a_2692_, v_a_2693_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___boxed(lean_object* v_mvarId_2698_, lean_object* v_a_2699_, lean_object* v_a_2700_, lean_object* v_a_2701_, lean_object* v_a_2702_, lean_object* v_a_2703_){
_start:
{
lean_object* v_res_2704_; 
v_res_2704_ = l_Lean_MVarId_splitAndCore(v_mvarId_2698_, v_a_2699_, v_a_2700_, v_a_2701_, v_a_2702_);
lean_dec(v_a_2702_);
lean_dec_ref(v_a_2701_);
lean_dec(v_a_2700_);
lean_dec_ref(v_a_2699_);
return v_res_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd(lean_object* v_mvarId_2705_, lean_object* v_a_2706_, lean_object* v_a_2707_, lean_object* v_a_2708_, lean_object* v_a_2709_){
_start:
{
lean_object* v___x_2711_; 
v___x_2711_ = l_Lean_MVarId_splitAndCore(v_mvarId_2705_, v_a_2706_, v_a_2707_, v_a_2708_, v_a_2709_);
return v___x_2711_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd___boxed(lean_object* v_mvarId_2712_, lean_object* v_a_2713_, lean_object* v_a_2714_, lean_object* v_a_2715_, lean_object* v_a_2716_, lean_object* v_a_2717_){
_start:
{
lean_object* v_res_2718_; 
v_res_2718_ = l_Lean_MVarId_splitAnd(v_mvarId_2712_, v_a_2713_, v_a_2714_, v_a_2715_, v_a_2716_);
lean_dec(v_a_2716_);
lean_dec_ref(v_a_2715_);
lean_dec(v_a_2714_);
lean_dec_ref(v_a_2713_);
return v_res_2718_;
}
}
static lean_object* _init_l_Lean_MVarId_exfalso___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = lean_mk_string_unchecked("False", 5, 5);
return v___x_2719_;
}
}
static lean_object* _init_l_Lean_MVarId_exfalso___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2720_ = lean_obj_once(&l_Lean_MVarId_exfalso___lam__0___closed__0, &l_Lean_MVarId_exfalso___lam__0___closed__0_once, _init_l_Lean_MVarId_exfalso___lam__0___closed__0);
v___x_2721_ = l_Lean_Name_mkStr1(v___x_2720_);
return v___x_2721_;
}
}
static lean_object* _init_l_Lean_MVarId_exfalso___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
v___x_2722_ = lean_box(0);
v___x_2723_ = lean_obj_once(&l_Lean_MVarId_exfalso___lam__0___closed__1, &l_Lean_MVarId_exfalso___lam__0___closed__1_once, _init_l_Lean_MVarId_exfalso___lam__0___closed__1);
v___x_2724_ = l_Lean_mkConst(v___x_2723_, v___x_2722_);
return v___x_2724_;
}
}
static lean_object* _init_l_Lean_MVarId_exfalso___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2725_; 
v___x_2725_ = lean_mk_string_unchecked("elim", 4, 4);
return v___x_2725_;
}
}
static lean_object* _init_l_Lean_MVarId_exfalso___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2726_ = lean_obj_once(&l_Lean_MVarId_exfalso___lam__0___closed__3, &l_Lean_MVarId_exfalso___lam__0___closed__3_once, _init_l_Lean_MVarId_exfalso___lam__0___closed__3);
v___x_2727_ = lean_obj_once(&l_Lean_MVarId_exfalso___lam__0___closed__0, &l_Lean_MVarId_exfalso___lam__0___closed__0_once, _init_l_Lean_MVarId_exfalso___lam__0___closed__0);
v___x_2728_ = l_Lean_Name_mkStr2(v___x_2727_, v___x_2726_);
return v___x_2728_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0(lean_object* v_mvarId_2729_, lean_object* v___x_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_){
_start:
{
lean_object* v___x_2736_; 
lean_inc(v_mvarId_2729_);
v___x_2736_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2729_, v___x_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v___x_2737_; 
lean_dec_ref(v___x_2736_);
lean_inc(v_mvarId_2729_);
v___x_2737_ = l_Lean_MVarId_getType(v_mvarId_2729_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2738_; lean_object* v___x_2739_; lean_object* v_a_2740_; lean_object* v___x_2741_; 
v_a_2738_ = lean_ctor_get(v___x_2737_, 0);
lean_inc(v_a_2738_);
lean_dec_ref(v___x_2737_);
v___x_2739_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_a_2738_, v___y_2732_, v___y_2734_);
v_a_2740_ = lean_ctor_get(v___x_2739_, 0);
lean_inc_n(v_a_2740_, 2);
lean_dec_ref(v___x_2739_);
v___x_2741_ = l_Lean_Meta_getLevel(v_a_2740_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
if (lean_obj_tag(v___x_2741_) == 0)
{
lean_object* v_a_2742_; lean_object* v___x_2743_; 
v_a_2742_ = lean_ctor_get(v___x_2741_, 0);
lean_inc(v_a_2742_);
lean_dec_ref(v___x_2741_);
lean_inc(v_mvarId_2729_);
v___x_2743_ = l_Lean_MVarId_getTag(v_mvarId_2729_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
if (lean_obj_tag(v___x_2743_) == 0)
{
lean_object* v_a_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; 
v_a_2744_ = lean_ctor_get(v___x_2743_, 0);
lean_inc(v_a_2744_);
lean_dec_ref(v___x_2743_);
v___x_2745_ = lean_box(0);
v___x_2746_ = lean_obj_once(&l_Lean_MVarId_exfalso___lam__0___closed__2, &l_Lean_MVarId_exfalso___lam__0___closed__2_once, _init_l_Lean_MVarId_exfalso___lam__0___closed__2);
v___x_2747_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2746_, v_a_2744_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_);
if (lean_obj_tag(v___x_2747_) == 0)
{
lean_object* v_a_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2755_; uint8_t v_isShared_2756_; uint8_t v_isSharedCheck_2761_; 
v_a_2748_ = lean_ctor_get(v___x_2747_, 0);
lean_inc_n(v_a_2748_, 2);
lean_dec_ref(v___x_2747_);
v___x_2749_ = lean_obj_once(&l_Lean_MVarId_exfalso___lam__0___closed__4, &l_Lean_MVarId_exfalso___lam__0___closed__4_once, _init_l_Lean_MVarId_exfalso___lam__0___closed__4);
v___x_2750_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2750_, 0, v_a_2742_);
lean_ctor_set(v___x_2750_, 1, v___x_2745_);
v___x_2751_ = l_Lean_mkConst(v___x_2749_, v___x_2750_);
v___x_2752_ = l_Lean_mkAppB(v___x_2751_, v_a_2740_, v_a_2748_);
v___x_2753_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2729_, v___x_2752_, v___y_2732_, v___y_2734_);
v_isSharedCheck_2761_ = !lean_is_exclusive(v___x_2753_);
if (v_isSharedCheck_2761_ == 0)
{
lean_object* v_unused_2762_; 
v_unused_2762_ = lean_ctor_get(v___x_2753_, 0);
lean_dec(v_unused_2762_);
v___x_2755_ = v___x_2753_;
v_isShared_2756_ = v_isSharedCheck_2761_;
goto v_resetjp_2754_;
}
else
{
lean_dec(v___x_2753_);
v___x_2755_ = lean_box(0);
v_isShared_2756_ = v_isSharedCheck_2761_;
goto v_resetjp_2754_;
}
v_resetjp_2754_:
{
lean_object* v___x_2757_; lean_object* v___x_2759_; 
v___x_2757_ = l_Lean_Expr_mvarId_x21(v_a_2748_);
lean_dec(v_a_2748_);
if (v_isShared_2756_ == 0)
{
lean_ctor_set(v___x_2755_, 0, v___x_2757_);
v___x_2759_ = v___x_2755_;
goto v_reusejp_2758_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v___x_2757_);
v___x_2759_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2758_;
}
v_reusejp_2758_:
{
return v___x_2759_;
}
}
}
else
{
lean_object* v_a_2763_; lean_object* v___x_2765_; uint8_t v_isShared_2766_; uint8_t v_isSharedCheck_2770_; 
lean_dec(v_a_2742_);
lean_dec(v_a_2740_);
lean_dec(v_mvarId_2729_);
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
lean_dec(v_a_2742_);
lean_dec(v_a_2740_);
lean_dec(v_mvarId_2729_);
v_a_2771_ = lean_ctor_get(v___x_2743_, 0);
v_isSharedCheck_2778_ = !lean_is_exclusive(v___x_2743_);
if (v_isSharedCheck_2778_ == 0)
{
v___x_2773_ = v___x_2743_;
v_isShared_2774_ = v_isSharedCheck_2778_;
goto v_resetjp_2772_;
}
else
{
lean_inc(v_a_2771_);
lean_dec(v___x_2743_);
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
else
{
lean_object* v_a_2779_; lean_object* v___x_2781_; uint8_t v_isShared_2782_; uint8_t v_isSharedCheck_2786_; 
lean_dec(v_a_2740_);
lean_dec(v_mvarId_2729_);
v_a_2779_ = lean_ctor_get(v___x_2741_, 0);
v_isSharedCheck_2786_ = !lean_is_exclusive(v___x_2741_);
if (v_isSharedCheck_2786_ == 0)
{
v___x_2781_ = v___x_2741_;
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
else
{
lean_inc(v_a_2779_);
lean_dec(v___x_2741_);
v___x_2781_ = lean_box(0);
v_isShared_2782_ = v_isSharedCheck_2786_;
goto v_resetjp_2780_;
}
v_resetjp_2780_:
{
lean_object* v___x_2784_; 
if (v_isShared_2782_ == 0)
{
v___x_2784_ = v___x_2781_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_a_2779_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
}
}
else
{
lean_object* v_a_2787_; lean_object* v___x_2789_; uint8_t v_isShared_2790_; uint8_t v_isSharedCheck_2794_; 
lean_dec(v_mvarId_2729_);
v_a_2787_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2794_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2794_ == 0)
{
v___x_2789_ = v___x_2737_;
v_isShared_2790_ = v_isSharedCheck_2794_;
goto v_resetjp_2788_;
}
else
{
lean_inc(v_a_2787_);
lean_dec(v___x_2737_);
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
lean_dec(v_mvarId_2729_);
v_a_2795_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2797_ = v___x_2736_;
v_isShared_2798_ = v_isSharedCheck_2802_;
goto v_resetjp_2796_;
}
else
{
lean_inc(v_a_2795_);
lean_dec(v___x_2736_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0___boxed(lean_object* v_mvarId_2803_, lean_object* v___x_2804_, lean_object* v___y_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_){
_start:
{
lean_object* v_res_2810_; 
v_res_2810_ = l_Lean_MVarId_exfalso___lam__0(v_mvarId_2803_, v___x_2804_, v___y_2805_, v___y_2806_, v___y_2807_, v___y_2808_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec(v___y_2806_);
lean_dec_ref(v___y_2805_);
return v_res_2810_;
}
}
static lean_object* _init_l_Lean_MVarId_exfalso___closed__0(void){
_start:
{
lean_object* v___x_2811_; 
v___x_2811_ = lean_mk_string_unchecked("exfalso", 7, 7);
return v___x_2811_;
}
}
static lean_object* _init_l_Lean_MVarId_exfalso___closed__1(void){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; 
v___x_2812_ = lean_obj_once(&l_Lean_MVarId_exfalso___closed__0, &l_Lean_MVarId_exfalso___closed__0_once, _init_l_Lean_MVarId_exfalso___closed__0);
v___x_2813_ = l_Lean_Name_mkStr1(v___x_2812_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso(lean_object* v_mvarId_2814_, lean_object* v_a_2815_, lean_object* v_a_2816_, lean_object* v_a_2817_, lean_object* v_a_2818_){
_start:
{
lean_object* v___x_2820_; lean_object* v___f_2821_; lean_object* v___x_2822_; 
v___x_2820_ = lean_obj_once(&l_Lean_MVarId_exfalso___closed__1, &l_Lean_MVarId_exfalso___closed__1_once, _init_l_Lean_MVarId_exfalso___closed__1);
lean_inc(v_mvarId_2814_);
v___f_2821_ = lean_alloc_closure((void*)(l_Lean_MVarId_exfalso___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2821_, 0, v_mvarId_2814_);
lean_closure_set(v___f_2821_, 1, v___x_2820_);
v___x_2822_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2814_, v___f_2821_, v_a_2815_, v_a_2816_, v_a_2817_, v_a_2818_);
return v___x_2822_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___boxed(lean_object* v_mvarId_2823_, lean_object* v_a_2824_, lean_object* v_a_2825_, lean_object* v_a_2826_, lean_object* v_a_2827_, lean_object* v_a_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l_Lean_MVarId_exfalso(v_mvarId_2823_, v_a_2824_, v_a_2825_, v_a_2826_, v_a_2827_);
lean_dec(v_a_2827_);
lean_dec_ref(v_a_2826_);
lean_dec(v_a_2825_);
lean_dec_ref(v_a_2824_);
return v_res_2829_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2830_; 
v___x_2830_ = lean_mk_string_unchecked("target is not an inductive datatype", 35, 35);
return v___x_2830_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; 
v___x_2831_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__0, &l_Lean_MVarId_nthConstructor___lam__0___closed__0_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__0);
v___x_2832_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2832_, 0, v___x_2831_);
return v___x_2832_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; 
v___x_2833_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__1, &l_Lean_MVarId_nthConstructor___lam__0___closed__1_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__1);
v___x_2834_ = l_Lean_MessageData_ofFormat(v___x_2833_);
return v___x_2834_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; 
v___x_2835_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__2, &l_Lean_MVarId_nthConstructor___lam__0___closed__2_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__2);
v___x_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2836_, 0, v___x_2835_);
return v___x_2836_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__4(void){
_start:
{
lean_object* v___x_2837_; 
v___x_2837_ = lean_mk_string_unchecked("index ", 6, 6);
return v___x_2837_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2838_; 
v___x_2838_ = lean_mk_string_unchecked(" out of bounds, only ", 21, 21);
return v___x_2838_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__6(void){
_start:
{
lean_object* v___x_2839_; 
v___x_2839_ = lean_mk_string_unchecked(" constructors", 13, 13);
return v___x_2839_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2840_; 
v___x_2840_ = lean_mk_string_unchecked(" tactic works for inductive types with exactly ", 47, 47);
return v___x_2840_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0(lean_object* v_goal_2841_, lean_object* v_name_2842_, lean_object* v_idx_2843_, lean_object* v_expected_x3f_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_){
_start:
{
lean_object* v___y_2851_; lean_object* v___y_2852_; lean_object* v___y_2853_; lean_object* v___y_2854_; lean_object* v___x_2857_; 
lean_inc(v_name_2842_);
lean_inc(v_goal_2841_);
v___x_2857_ = l_Lean_MVarId_checkNotAssigned(v_goal_2841_, v_name_2842_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2857_) == 0)
{
lean_object* v___x_2858_; 
lean_dec_ref(v___x_2857_);
lean_inc(v_goal_2841_);
v___x_2858_ = l_Lean_MVarId_getType_x27(v_goal_2841_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v_a_2859_; lean_object* v___x_2860_; 
v_a_2859_ = lean_ctor_get(v___x_2858_, 0);
lean_inc(v_a_2859_);
lean_dec_ref(v___x_2858_);
v___x_2860_ = l_Lean_Expr_getAppFn(v_a_2859_);
lean_dec(v_a_2859_);
if (lean_obj_tag(v___x_2860_) == 4)
{
lean_object* v_declName_2861_; lean_object* v_us_2862_; lean_object* v___x_2863_; lean_object* v_env_2864_; uint8_t v___x_2865_; lean_object* v___x_2866_; 
v_declName_2861_ = lean_ctor_get(v___x_2860_, 0);
lean_inc(v_declName_2861_);
v_us_2862_ = lean_ctor_get(v___x_2860_, 1);
lean_inc(v_us_2862_);
lean_dec_ref(v___x_2860_);
v___x_2863_ = lean_st_ref_get(v___y_2848_);
v_env_2864_ = lean_ctor_get(v___x_2863_, 0);
lean_inc_ref(v_env_2864_);
lean_dec(v___x_2863_);
v___x_2865_ = 0;
v___x_2866_ = l_Lean_Environment_find_x3f(v_env_2864_, v_declName_2861_, v___x_2865_);
if (lean_obj_tag(v___x_2866_) == 0)
{
lean_dec(v_us_2862_);
lean_dec(v_expected_x3f_2844_);
lean_dec(v_idx_2843_);
v___y_2851_ = v___y_2845_;
v___y_2852_ = v___y_2846_;
v___y_2853_ = v___y_2847_;
v___y_2854_ = v___y_2848_;
goto v___jp_2850_;
}
else
{
lean_object* v_val_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2937_; 
v_val_2867_ = lean_ctor_get(v___x_2866_, 0);
v_isSharedCheck_2937_ = !lean_is_exclusive(v___x_2866_);
if (v_isSharedCheck_2937_ == 0)
{
v___x_2869_ = v___x_2866_;
v_isShared_2870_ = v_isSharedCheck_2937_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_val_2867_);
lean_dec(v___x_2866_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2937_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
if (lean_obj_tag(v_val_2867_) == 5)
{
lean_object* v_val_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2936_; 
v_val_2871_ = lean_ctor_get(v_val_2867_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v_val_2867_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2873_ = v_val_2867_;
v_isShared_2874_ = v_isSharedCheck_2936_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_val_2871_);
lean_dec(v_val_2867_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2936_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; 
if (lean_obj_tag(v_expected_x3f_2844_) == 1)
{
lean_object* v_val_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2935_; 
v_val_2906_ = lean_ctor_get(v_expected_x3f_2844_, 0);
v_isSharedCheck_2935_ = !lean_is_exclusive(v_expected_x3f_2844_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2908_ = v_expected_x3f_2844_;
v_isShared_2909_ = v_isSharedCheck_2935_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_val_2906_);
lean_dec(v_expected_x3f_2844_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2935_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v_ctors_2910_; lean_object* v___x_2911_; uint8_t v___x_2912_; 
v_ctors_2910_ = lean_ctor_get(v_val_2871_, 4);
v___x_2911_ = l_List_lengthTR___redArg(v_ctors_2910_);
v___x_2912_ = lean_nat_dec_eq(v___x_2911_, v_val_2906_);
lean_dec(v___x_2911_);
if (v___x_2912_ == 0)
{
uint8_t v___x_2913_; lean_object* v___x_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2922_; lean_object* v___x_2924_; 
v___x_2913_ = 1;
lean_inc(v_name_2842_);
v___x_2914_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2842_, v___x_2913_);
v___x_2915_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__7, &l_Lean_MVarId_nthConstructor___lam__0___closed__7_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__7);
v___x_2916_ = lean_string_append(v___x_2914_, v___x_2915_);
v___x_2917_ = l_Nat_reprFast(v_val_2906_);
v___x_2918_ = lean_string_append(v___x_2916_, v___x_2917_);
lean_dec_ref(v___x_2917_);
v___x_2919_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__6, &l_Lean_MVarId_nthConstructor___lam__0___closed__6_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__6);
v___x_2920_ = lean_string_append(v___x_2918_, v___x_2919_);
v___x_2921_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
v___x_2922_ = l_Lean_MessageData_ofFormat(v___x_2921_);
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 0, v___x_2922_);
v___x_2924_ = v___x_2908_;
goto v_reusejp_2923_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v___x_2922_);
v___x_2924_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2923_;
}
v_reusejp_2923_:
{
lean_object* v___x_2925_; 
lean_inc(v_goal_2841_);
lean_inc(v_name_2842_);
v___x_2925_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2842_, v_goal_2841_, v___x_2924_, v___y_2845_, v___y_2846_, v___y_2847_, v___y_2848_);
if (lean_obj_tag(v___x_2925_) == 0)
{
lean_dec_ref(v___x_2925_);
v___y_2876_ = v___y_2845_;
v___y_2877_ = v___y_2846_;
v___y_2878_ = v___y_2847_;
v___y_2879_ = v___y_2848_;
goto v___jp_2875_;
}
else
{
lean_object* v_a_2926_; lean_object* v___x_2928_; uint8_t v_isShared_2929_; uint8_t v_isSharedCheck_2933_; 
lean_del_object(v___x_2873_);
lean_dec_ref(v_val_2871_);
lean_del_object(v___x_2869_);
lean_dec(v_us_2862_);
lean_dec(v_idx_2843_);
lean_dec(v_name_2842_);
lean_dec(v_goal_2841_);
v_a_2926_ = lean_ctor_get(v___x_2925_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___x_2925_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2928_ = v___x_2925_;
v_isShared_2929_ = v_isSharedCheck_2933_;
goto v_resetjp_2927_;
}
else
{
lean_inc(v_a_2926_);
lean_dec(v___x_2925_);
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
else
{
lean_del_object(v___x_2908_);
lean_dec(v_val_2906_);
v___y_2876_ = v___y_2845_;
v___y_2877_ = v___y_2846_;
v___y_2878_ = v___y_2847_;
v___y_2879_ = v___y_2848_;
goto v___jp_2875_;
}
}
}
else
{
lean_dec(v_expected_x3f_2844_);
v___y_2876_ = v___y_2845_;
v___y_2877_ = v___y_2846_;
v___y_2878_ = v___y_2847_;
v___y_2879_ = v___y_2848_;
goto v___jp_2875_;
}
v___jp_2875_:
{
lean_object* v_ctors_2880_; lean_object* v___x_2881_; uint8_t v___x_2882_; 
v_ctors_2880_ = lean_ctor_get(v_val_2871_, 4);
lean_inc(v_ctors_2880_);
lean_dec_ref(v_val_2871_);
v___x_2881_ = l_List_lengthTR___redArg(v_ctors_2880_);
v___x_2882_ = lean_nat_dec_lt(v_idx_2843_, v___x_2881_);
if (v___x_2882_ == 0)
{
lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2893_; 
lean_dec(v_ctors_2880_);
lean_dec(v_us_2862_);
v___x_2883_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__4, &l_Lean_MVarId_nthConstructor___lam__0___closed__4_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__4);
v___x_2884_ = l_Nat_reprFast(v_idx_2843_);
v___x_2885_ = lean_string_append(v___x_2883_, v___x_2884_);
lean_dec_ref(v___x_2884_);
v___x_2886_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__5, &l_Lean_MVarId_nthConstructor___lam__0___closed__5_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__5);
v___x_2887_ = lean_string_append(v___x_2885_, v___x_2886_);
v___x_2888_ = l_Nat_reprFast(v___x_2881_);
v___x_2889_ = lean_string_append(v___x_2887_, v___x_2888_);
lean_dec_ref(v___x_2888_);
v___x_2890_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__6, &l_Lean_MVarId_nthConstructor___lam__0___closed__6_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__6);
v___x_2891_ = lean_string_append(v___x_2889_, v___x_2890_);
if (v_isShared_2874_ == 0)
{
lean_ctor_set_tag(v___x_2873_, 3);
lean_ctor_set(v___x_2873_, 0, v___x_2891_);
v___x_2893_ = v___x_2873_;
goto v_reusejp_2892_;
}
else
{
lean_object* v_reuseFailAlloc_2899_; 
v_reuseFailAlloc_2899_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2899_, 0, v___x_2891_);
v___x_2893_ = v_reuseFailAlloc_2899_;
goto v_reusejp_2892_;
}
v_reusejp_2892_:
{
lean_object* v___x_2894_; lean_object* v___x_2896_; 
v___x_2894_ = l_Lean_MessageData_ofFormat(v___x_2893_);
if (v_isShared_2870_ == 0)
{
lean_ctor_set(v___x_2869_, 0, v___x_2894_);
v___x_2896_ = v___x_2869_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2898_; 
v_reuseFailAlloc_2898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2898_, 0, v___x_2894_);
v___x_2896_ = v_reuseFailAlloc_2898_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
lean_object* v___x_2897_; 
v___x_2897_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2842_, v_goal_2841_, v___x_2896_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_);
return v___x_2897_;
}
}
}
else
{
lean_object* v___x_2900_; lean_object* v___x_2901_; uint8_t v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; 
lean_dec(v___x_2881_);
lean_del_object(v___x_2873_);
lean_del_object(v___x_2869_);
lean_dec(v_name_2842_);
v___x_2900_ = l_List_get___redArg(v_ctors_2880_, v_idx_2843_);
lean_dec(v_ctors_2880_);
v___x_2901_ = l_Lean_mkConst(v___x_2900_, v_us_2862_);
v___x_2902_ = 0;
v___x_2903_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_2903_, 0, v___x_2902_);
lean_ctor_set_uint8(v___x_2903_, 1, v___x_2882_);
lean_ctor_set_uint8(v___x_2903_, 2, v___x_2865_);
lean_ctor_set_uint8(v___x_2903_, 3, v___x_2882_);
v___x_2904_ = lean_box(0);
v___x_2905_ = l_Lean_MVarId_apply(v_goal_2841_, v___x_2901_, v___x_2903_, v___x_2904_, v___y_2876_, v___y_2877_, v___y_2878_, v___y_2879_);
return v___x_2905_;
}
}
}
}
else
{
lean_del_object(v___x_2869_);
lean_dec(v_val_2867_);
lean_dec(v_us_2862_);
lean_dec(v_expected_x3f_2844_);
lean_dec(v_idx_2843_);
v___y_2851_ = v___y_2845_;
v___y_2852_ = v___y_2846_;
v___y_2853_ = v___y_2847_;
v___y_2854_ = v___y_2848_;
goto v___jp_2850_;
}
}
}
}
else
{
lean_dec_ref(v___x_2860_);
lean_dec(v_expected_x3f_2844_);
lean_dec(v_idx_2843_);
v___y_2851_ = v___y_2845_;
v___y_2852_ = v___y_2846_;
v___y_2853_ = v___y_2847_;
v___y_2854_ = v___y_2848_;
goto v___jp_2850_;
}
}
else
{
lean_object* v_a_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2945_; 
lean_dec(v_expected_x3f_2844_);
lean_dec(v_idx_2843_);
lean_dec(v_name_2842_);
lean_dec(v_goal_2841_);
v_a_2938_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2940_ = v___x_2858_;
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_a_2938_);
lean_dec(v___x_2858_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2943_; 
if (v_isShared_2941_ == 0)
{
v___x_2943_ = v___x_2940_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_a_2938_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
return v___x_2943_;
}
}
}
}
else
{
lean_object* v_a_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_2953_; 
lean_dec(v_expected_x3f_2844_);
lean_dec(v_idx_2843_);
lean_dec(v_name_2842_);
lean_dec(v_goal_2841_);
v_a_2946_ = lean_ctor_get(v___x_2857_, 0);
v_isSharedCheck_2953_ = !lean_is_exclusive(v___x_2857_);
if (v_isSharedCheck_2953_ == 0)
{
v___x_2948_ = v___x_2857_;
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_a_2946_);
lean_dec(v___x_2857_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_2953_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2951_; 
if (v_isShared_2949_ == 0)
{
v___x_2951_ = v___x_2948_;
goto v_reusejp_2950_;
}
else
{
lean_object* v_reuseFailAlloc_2952_; 
v_reuseFailAlloc_2952_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2952_, 0, v_a_2946_);
v___x_2951_ = v_reuseFailAlloc_2952_;
goto v_reusejp_2950_;
}
v_reusejp_2950_:
{
return v___x_2951_;
}
}
}
v___jp_2850_:
{
lean_object* v___x_2855_; lean_object* v___x_2856_; 
v___x_2855_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__3, &l_Lean_MVarId_nthConstructor___lam__0___closed__3_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__3);
v___x_2856_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2842_, v_goal_2841_, v___x_2855_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_);
return v___x_2856_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0___boxed(lean_object* v_goal_2954_, lean_object* v_name_2955_, lean_object* v_idx_2956_, lean_object* v_expected_x3f_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_){
_start:
{
lean_object* v_res_2963_; 
v_res_2963_ = l_Lean_MVarId_nthConstructor___lam__0(v_goal_2954_, v_name_2955_, v_idx_2956_, v_expected_x3f_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_);
lean_dec(v___y_2961_);
lean_dec_ref(v___y_2960_);
lean_dec(v___y_2959_);
lean_dec_ref(v___y_2958_);
return v_res_2963_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor(lean_object* v_name_2964_, lean_object* v_idx_2965_, lean_object* v_expected_x3f_2966_, lean_object* v_goal_2967_, lean_object* v_a_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_){
_start:
{
lean_object* v___f_2973_; lean_object* v___x_2974_; 
lean_inc(v_goal_2967_);
v___f_2973_ = lean_alloc_closure((void*)(l_Lean_MVarId_nthConstructor___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2973_, 0, v_goal_2967_);
lean_closure_set(v___f_2973_, 1, v_name_2964_);
lean_closure_set(v___f_2973_, 2, v_idx_2965_);
lean_closure_set(v___f_2973_, 3, v_expected_x3f_2966_);
v___x_2974_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_goal_2967_, v___f_2973_, v_a_2968_, v_a_2969_, v_a_2970_, v_a_2971_);
return v___x_2974_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___boxed(lean_object* v_name_2975_, lean_object* v_idx_2976_, lean_object* v_expected_x3f_2977_, lean_object* v_goal_2978_, lean_object* v_a_2979_, lean_object* v_a_2980_, lean_object* v_a_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_){
_start:
{
lean_object* v_res_2984_; 
v_res_2984_ = l_Lean_MVarId_nthConstructor(v_name_2975_, v_idx_2976_, v_expected_x3f_2977_, v_goal_2978_, v_a_2979_, v_a_2980_, v_a_2981_, v_a_2982_);
lean_dec(v_a_2982_);
lean_dec_ref(v_a_2981_);
lean_dec(v_a_2980_);
lean_dec_ref(v_a_2979_);
return v_res_2984_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(lean_object* v_x_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_){
_start:
{
lean_object* v___x_2991_; 
v___x_2991_ = l_Lean_Meta_saveState___redArg(v___y_2987_, v___y_2989_);
if (lean_obj_tag(v___x_2991_) == 0)
{
lean_object* v_a_2992_; lean_object* v___x_2993_; 
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
lean_inc(v_a_2992_);
lean_dec_ref(v___x_2991_);
lean_inc(v___y_2989_);
lean_inc_ref(v___y_2988_);
lean_inc(v___y_2987_);
lean_inc_ref(v___y_2986_);
v___x_2993_ = lean_apply_5(v_x_2985_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_, lean_box(0));
if (lean_obj_tag(v___x_2993_) == 0)
{
lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3002_; 
lean_dec(v_a_2992_);
v_a_2994_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3002_ == 0)
{
v___x_2996_ = v___x_2993_;
v_isShared_2997_ = v_isSharedCheck_3002_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v___x_2993_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3002_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v___x_2998_; lean_object* v___x_3000_; 
v___x_2998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2998_, 0, v_a_2994_);
if (v_isShared_2997_ == 0)
{
lean_ctor_set(v___x_2996_, 0, v___x_2998_);
v___x_3000_ = v___x_2996_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v___x_2998_);
v___x_3000_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
return v___x_3000_;
}
}
}
else
{
lean_object* v_a_3003_; lean_object* v___x_3005_; uint8_t v_isShared_3006_; uint8_t v_isSharedCheck_3032_; 
v_a_3003_ = lean_ctor_get(v___x_2993_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_2993_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3005_ = v___x_2993_;
v_isShared_3006_ = v_isSharedCheck_3032_;
goto v_resetjp_3004_;
}
else
{
lean_inc(v_a_3003_);
lean_dec(v___x_2993_);
v___x_3005_ = lean_box(0);
v_isShared_3006_ = v_isSharedCheck_3032_;
goto v_resetjp_3004_;
}
v_resetjp_3004_:
{
uint8_t v___y_3008_; uint8_t v___x_3030_; 
v___x_3030_ = l_Lean_Exception_isInterrupt(v_a_3003_);
if (v___x_3030_ == 0)
{
uint8_t v___x_3031_; 
lean_inc(v_a_3003_);
v___x_3031_ = l_Lean_Exception_isRuntime(v_a_3003_);
v___y_3008_ = v___x_3031_;
goto v___jp_3007_;
}
else
{
v___y_3008_ = v___x_3030_;
goto v___jp_3007_;
}
v___jp_3007_:
{
if (v___y_3008_ == 0)
{
lean_object* v___x_3009_; 
lean_del_object(v___x_3005_);
lean_dec(v_a_3003_);
v___x_3009_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2992_, v___y_2987_, v___y_2989_);
lean_dec(v_a_2992_);
if (lean_obj_tag(v___x_3009_) == 0)
{
lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3017_; 
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3017_ == 0)
{
lean_object* v_unused_3018_; 
v_unused_3018_ = lean_ctor_get(v___x_3009_, 0);
lean_dec(v_unused_3018_);
v___x_3011_ = v___x_3009_;
v_isShared_3012_ = v_isSharedCheck_3017_;
goto v_resetjp_3010_;
}
else
{
lean_dec(v___x_3009_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3017_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3013_; lean_object* v___x_3015_; 
v___x_3013_ = lean_box(0);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v___x_3013_);
v___x_3015_ = v___x_3011_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v___x_3013_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
else
{
lean_object* v_a_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3026_; 
v_a_3019_ = lean_ctor_get(v___x_3009_, 0);
v_isSharedCheck_3026_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3026_ == 0)
{
v___x_3021_ = v___x_3009_;
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_a_3019_);
lean_dec(v___x_3009_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3026_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___x_3024_; 
if (v_isShared_3022_ == 0)
{
v___x_3024_ = v___x_3021_;
goto v_reusejp_3023_;
}
else
{
lean_object* v_reuseFailAlloc_3025_; 
v_reuseFailAlloc_3025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3025_, 0, v_a_3019_);
v___x_3024_ = v_reuseFailAlloc_3025_;
goto v_reusejp_3023_;
}
v_reusejp_3023_:
{
return v___x_3024_;
}
}
}
}
else
{
lean_object* v___x_3028_; 
lean_dec(v_a_2992_);
if (v_isShared_3006_ == 0)
{
v___x_3028_ = v___x_3005_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3029_; 
v_reuseFailAlloc_3029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3029_, 0, v_a_3003_);
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
}
else
{
lean_object* v_a_3033_; lean_object* v___x_3035_; uint8_t v_isShared_3036_; uint8_t v_isSharedCheck_3040_; 
lean_dec_ref(v_x_2985_);
v_a_3033_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_3040_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_3040_ == 0)
{
v___x_3035_ = v___x_2991_;
v_isShared_3036_ = v_isSharedCheck_3040_;
goto v_resetjp_3034_;
}
else
{
lean_inc(v_a_3033_);
lean_dec(v___x_2991_);
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
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg___boxed(lean_object* v_x_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_){
_start:
{
lean_object* v_res_3047_; 
v_res_3047_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v_x_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_);
lean_dec(v___y_3045_);
lean_dec_ref(v___y_3044_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
return v_res_3047_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(lean_object* v_00_u03b1_3048_, lean_object* v_x_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_){
_start:
{
lean_object* v___x_3055_; 
v___x_3055_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v_x_3049_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_);
return v___x_3055_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___boxed(lean_object* v_00_u03b1_3056_, lean_object* v_x_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_, lean_object* v___y_3062_){
_start:
{
lean_object* v_res_3063_; 
v_res_3063_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(v_00_u03b1_3056_, v_x_3057_, v___y_3058_, v___y_3059_, v___y_3060_, v___y_3061_);
lean_dec(v___y_3061_);
lean_dec_ref(v___y_3060_);
lean_dec(v___y_3059_);
lean_dec_ref(v___y_3058_);
return v_res_3063_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3064_; 
v___x_3064_ = lean_mk_string_unchecked("failed", 6, 6);
return v___x_3064_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3065_; lean_object* v___x_3066_; 
v___x_3065_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__0, &l_Lean_MVarId_iffOfEq___lam__0___closed__0_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__0);
v___x_3066_ = l_Lean_stringToMessageData(v___x_3065_);
return v___x_3066_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0(lean_object* v_mvarId_3067_, lean_object* v___x_3068_, lean_object* v___x_3069_, lean_object* v___x_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_, lean_object* v___y_3074_){
_start:
{
lean_object* v___x_3076_; 
v___x_3076_ = l_Lean_MVarId_apply(v_mvarId_3067_, v___x_3068_, v___x_3069_, v___x_3070_, v___y_3071_, v___y_3072_, v___y_3073_, v___y_3074_);
if (lean_obj_tag(v___x_3076_) == 0)
{
lean_object* v_a_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3093_; 
v_a_3077_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3079_ = v___x_3076_;
v_isShared_3080_ = v_isSharedCheck_3093_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_a_3077_);
lean_dec(v___x_3076_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3093_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3085_; 
if (lean_obj_tag(v_a_3077_) == 1)
{
lean_object* v_tail_3088_; 
v_tail_3088_ = lean_ctor_get(v_a_3077_, 1);
if (lean_obj_tag(v_tail_3088_) == 0)
{
lean_object* v_head_3089_; lean_object* v___x_3091_; 
v_head_3089_ = lean_ctor_get(v_a_3077_, 0);
lean_inc(v_head_3089_);
lean_dec_ref(v_a_3077_);
if (v_isShared_3080_ == 0)
{
lean_ctor_set(v___x_3079_, 0, v_head_3089_);
v___x_3091_ = v___x_3079_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_head_3089_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
else
{
lean_dec_ref(v_a_3077_);
lean_del_object(v___x_3079_);
v___y_3082_ = v___y_3071_;
v___y_3083_ = v___y_3072_;
v___y_3084_ = v___y_3073_;
v___y_3085_ = v___y_3074_;
goto v___jp_3081_;
}
}
else
{
lean_del_object(v___x_3079_);
lean_dec(v_a_3077_);
v___y_3082_ = v___y_3071_;
v___y_3083_ = v___y_3072_;
v___y_3084_ = v___y_3073_;
v___y_3085_ = v___y_3074_;
goto v___jp_3081_;
}
v___jp_3081_:
{
lean_object* v___x_3086_; lean_object* v___x_3087_; 
v___x_3086_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3087_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3086_, v___y_3082_, v___y_3083_, v___y_3084_, v___y_3085_);
return v___x_3087_;
}
}
}
else
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
v_a_3094_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3096_ = v___x_3076_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3076_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0___boxed(lean_object* v_mvarId_3102_, lean_object* v___x_3103_, lean_object* v___x_3104_, lean_object* v___x_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_){
_start:
{
lean_object* v_res_3111_; 
v_res_3111_ = l_Lean_MVarId_iffOfEq___lam__0(v_mvarId_3102_, v___x_3103_, v___x_3104_, v___x_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_);
lean_dec(v___y_3109_);
lean_dec_ref(v___y_3108_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
return v_res_3111_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___closed__0(void){
_start:
{
lean_object* v___x_3112_; 
v___x_3112_ = lean_mk_string_unchecked("iff_of_eq", 9, 9);
return v___x_3112_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___closed__1(void){
_start:
{
lean_object* v___x_3113_; lean_object* v___x_3114_; 
v___x_3113_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___closed__0, &l_Lean_MVarId_iffOfEq___closed__0_once, _init_l_Lean_MVarId_iffOfEq___closed__0);
v___x_3114_ = l_Lean_Name_mkStr1(v___x_3113_);
return v___x_3114_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___closed__2(void){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; 
v___x_3115_ = lean_box(0);
v___x_3116_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___closed__1, &l_Lean_MVarId_iffOfEq___closed__1_once, _init_l_Lean_MVarId_iffOfEq___closed__1);
v___x_3117_ = l_Lean_mkConst(v___x_3116_, v___x_3115_);
return v___x_3117_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___closed__3(void){
_start:
{
uint8_t v___x_3118_; uint8_t v___x_3119_; uint8_t v___x_3120_; lean_object* v___x_3121_; 
v___x_3118_ = 0;
v___x_3119_ = 1;
v___x_3120_ = 0;
v___x_3121_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3121_, 0, v___x_3120_);
lean_ctor_set_uint8(v___x_3121_, 1, v___x_3119_);
lean_ctor_set_uint8(v___x_3121_, 2, v___x_3118_);
lean_ctor_set_uint8(v___x_3121_, 3, v___x_3119_);
return v___x_3121_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq(lean_object* v_mvarId_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_){
_start:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___f_3131_; lean_object* v___x_3132_; 
v___x_3128_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___closed__2, &l_Lean_MVarId_iffOfEq___closed__2_once, _init_l_Lean_MVarId_iffOfEq___closed__2);
v___x_3129_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___closed__3, &l_Lean_MVarId_iffOfEq___closed__3_once, _init_l_Lean_MVarId_iffOfEq___closed__3);
v___x_3130_ = lean_box(0);
lean_inc(v_mvarId_3122_);
v___f_3131_ = lean_alloc_closure((void*)(l_Lean_MVarId_iffOfEq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_3131_, 0, v_mvarId_3122_);
lean_closure_set(v___f_3131_, 1, v___x_3128_);
lean_closure_set(v___f_3131_, 2, v___x_3129_);
lean_closure_set(v___f_3131_, 3, v___x_3130_);
v___x_3132_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3131_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
if (lean_obj_tag(v___x_3132_) == 0)
{
lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3144_; 
v_a_3133_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3144_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3144_ == 0)
{
v___x_3135_ = v___x_3132_;
v_isShared_3136_ = v_isSharedCheck_3144_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3132_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3144_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
if (lean_obj_tag(v_a_3133_) == 0)
{
lean_object* v___x_3138_; 
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 0, v_mvarId_3122_);
v___x_3138_ = v___x_3135_;
goto v_reusejp_3137_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v_mvarId_3122_);
v___x_3138_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3137_;
}
v_reusejp_3137_:
{
return v___x_3138_;
}
}
else
{
lean_object* v_val_3140_; lean_object* v___x_3142_; 
lean_dec(v_mvarId_3122_);
v_val_3140_ = lean_ctor_get(v_a_3133_, 0);
lean_inc(v_val_3140_);
lean_dec_ref(v_a_3133_);
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 0, v_val_3140_);
v___x_3142_ = v___x_3135_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3143_; 
v_reuseFailAlloc_3143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3143_, 0, v_val_3140_);
v___x_3142_ = v_reuseFailAlloc_3143_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
return v___x_3142_;
}
}
}
}
else
{
lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_dec(v_mvarId_3122_);
v_a_3145_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3132_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3132_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3145_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___boxed(lean_object* v_mvarId_3153_, lean_object* v_a_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_){
_start:
{
lean_object* v_res_3159_; 
v_res_3159_ = l_Lean_MVarId_iffOfEq(v_mvarId_3153_, v_a_3154_, v_a_3155_, v_a_3156_, v_a_3157_);
lean_dec(v_a_3157_);
lean_dec_ref(v_a_3156_);
lean_dec(v_a_3155_);
lean_dec_ref(v_a_3154_);
return v_res_3159_;
}
}
static lean_object* _init_l_Lean_MVarId_propext___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3160_; 
v___x_3160_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_3160_;
}
}
static lean_object* _init_l_Lean_MVarId_propext___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3161_ = lean_obj_once(&l_Lean_MVarId_propext___lam__0___closed__0, &l_Lean_MVarId_propext___lam__0___closed__0_once, _init_l_Lean_MVarId_propext___lam__0___closed__0);
v___x_3162_ = l_Lean_Name_mkStr1(v___x_3161_);
return v___x_3162_;
}
}
static lean_object* _init_l_Lean_MVarId_propext___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3163_; 
v___x_3163_ = lean_mk_string_unchecked("propext", 7, 7);
return v___x_3163_;
}
}
static lean_object* _init_l_Lean_MVarId_propext___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3164_ = lean_obj_once(&l_Lean_MVarId_propext___lam__0___closed__2, &l_Lean_MVarId_propext___lam__0___closed__2_once, _init_l_Lean_MVarId_propext___lam__0___closed__2);
v___x_3165_ = l_Lean_Name_mkStr1(v___x_3164_);
return v___x_3165_;
}
}
static lean_object* _init_l_Lean_MVarId_propext___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3166_ = lean_box(0);
v___x_3167_ = lean_obj_once(&l_Lean_MVarId_propext___lam__0___closed__3, &l_Lean_MVarId_propext___lam__0___closed__3_once, _init_l_Lean_MVarId_propext___lam__0___closed__3);
v___x_3168_ = l_Lean_mkConst(v___x_3167_, v___x_3166_);
return v___x_3168_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0(uint8_t v___x_3169_, lean_object* v_mvarId_3170_, lean_object* v___y_3171_, lean_object* v___y_3172_, lean_object* v___y_3173_, lean_object* v___y_3174_){
_start:
{
lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3179_; lean_object* v___y_3180_; lean_object* v___x_3183_; uint8_t v_foApprox_3184_; uint8_t v_ctxApprox_3185_; uint8_t v_quasiPatternApprox_3186_; uint8_t v_constApprox_3187_; uint8_t v_isDefEqStuckEx_3188_; uint8_t v_unificationHints_3189_; uint8_t v_proofIrrelevance_3190_; uint8_t v_assignSyntheticOpaque_3191_; uint8_t v_offsetCnstrs_3192_; uint8_t v_etaStruct_3193_; uint8_t v_univApprox_3194_; uint8_t v_iota_3195_; uint8_t v_beta_3196_; uint8_t v_proj_3197_; uint8_t v_zeta_3198_; uint8_t v_zetaDelta_3199_; uint8_t v_zetaUnused_3200_; uint8_t v_zetaHave_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3289_; 
v___x_3183_ = l_Lean_Meta_Context_config(v___y_3171_);
v_foApprox_3184_ = lean_ctor_get_uint8(v___x_3183_, 0);
v_ctxApprox_3185_ = lean_ctor_get_uint8(v___x_3183_, 1);
v_quasiPatternApprox_3186_ = lean_ctor_get_uint8(v___x_3183_, 2);
v_constApprox_3187_ = lean_ctor_get_uint8(v___x_3183_, 3);
v_isDefEqStuckEx_3188_ = lean_ctor_get_uint8(v___x_3183_, 4);
v_unificationHints_3189_ = lean_ctor_get_uint8(v___x_3183_, 5);
v_proofIrrelevance_3190_ = lean_ctor_get_uint8(v___x_3183_, 6);
v_assignSyntheticOpaque_3191_ = lean_ctor_get_uint8(v___x_3183_, 7);
v_offsetCnstrs_3192_ = lean_ctor_get_uint8(v___x_3183_, 8);
v_etaStruct_3193_ = lean_ctor_get_uint8(v___x_3183_, 10);
v_univApprox_3194_ = lean_ctor_get_uint8(v___x_3183_, 11);
v_iota_3195_ = lean_ctor_get_uint8(v___x_3183_, 12);
v_beta_3196_ = lean_ctor_get_uint8(v___x_3183_, 13);
v_proj_3197_ = lean_ctor_get_uint8(v___x_3183_, 14);
v_zeta_3198_ = lean_ctor_get_uint8(v___x_3183_, 15);
v_zetaDelta_3199_ = lean_ctor_get_uint8(v___x_3183_, 16);
v_zetaUnused_3200_ = lean_ctor_get_uint8(v___x_3183_, 17);
v_zetaHave_3201_ = lean_ctor_get_uint8(v___x_3183_, 18);
v_isSharedCheck_3289_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3289_ == 0)
{
v___x_3203_ = v___x_3183_;
v_isShared_3204_ = v_isSharedCheck_3289_;
goto v_resetjp_3202_;
}
else
{
lean_dec(v___x_3183_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3289_;
goto v_resetjp_3202_;
}
v___jp_3176_:
{
lean_object* v___x_3181_; lean_object* v___x_3182_; 
v___x_3181_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3182_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3181_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_);
return v___x_3182_;
}
v_resetjp_3202_:
{
uint8_t v_trackZetaDelta_3205_; lean_object* v_zetaDeltaSet_3206_; lean_object* v_lctx_3207_; lean_object* v_localInstances_3208_; lean_object* v_defEqCtx_x3f_3209_; lean_object* v_synthPendingDepth_3210_; lean_object* v_canUnfold_x3f_3211_; uint8_t v_univApprox_3212_; uint8_t v_inTypeClassResolution_3213_; uint8_t v_cacheInferType_3214_; lean_object* v_config_3216_; 
v_trackZetaDelta_3205_ = lean_ctor_get_uint8(v___y_3171_, sizeof(void*)*7);
v_zetaDeltaSet_3206_ = lean_ctor_get(v___y_3171_, 1);
v_lctx_3207_ = lean_ctor_get(v___y_3171_, 2);
v_localInstances_3208_ = lean_ctor_get(v___y_3171_, 3);
v_defEqCtx_x3f_3209_ = lean_ctor_get(v___y_3171_, 4);
v_synthPendingDepth_3210_ = lean_ctor_get(v___y_3171_, 5);
v_canUnfold_x3f_3211_ = lean_ctor_get(v___y_3171_, 6);
v_univApprox_3212_ = lean_ctor_get_uint8(v___y_3171_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3213_ = lean_ctor_get_uint8(v___y_3171_, sizeof(void*)*7 + 2);
v_cacheInferType_3214_ = lean_ctor_get_uint8(v___y_3171_, sizeof(void*)*7 + 3);
if (v_isShared_3204_ == 0)
{
v_config_3216_ = v___x_3203_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 0, v_foApprox_3184_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 1, v_ctxApprox_3185_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 2, v_quasiPatternApprox_3186_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 3, v_constApprox_3187_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 4, v_isDefEqStuckEx_3188_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 5, v_unificationHints_3189_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 6, v_proofIrrelevance_3190_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 7, v_assignSyntheticOpaque_3191_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 8, v_offsetCnstrs_3192_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 10, v_etaStruct_3193_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 11, v_univApprox_3194_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 12, v_iota_3195_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 13, v_beta_3196_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 14, v_proj_3197_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 15, v_zeta_3198_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 16, v_zetaDelta_3199_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 17, v_zetaUnused_3200_);
lean_ctor_set_uint8(v_reuseFailAlloc_3288_, 18, v_zetaHave_3201_);
v_config_3216_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
uint64_t v___x_3217_; uint64_t v___x_3218_; uint64_t v___x_3219_; uint64_t v___x_3220_; uint64_t v___x_3221_; uint64_t v_key_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
lean_ctor_set_uint8(v_config_3216_, 9, v___x_3169_);
v___x_3217_ = l_Lean_Meta_Context_configKey(v___y_3171_);
v___x_3218_ = 2ULL;
v___x_3219_ = lean_uint64_shift_right(v___x_3217_, v___x_3218_);
v___x_3220_ = lean_uint64_shift_left(v___x_3219_, v___x_3218_);
v___x_3221_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3169_);
v_key_3222_ = lean_uint64_lor(v___x_3220_, v___x_3221_);
v___x_3223_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3223_, 0, v_config_3216_);
lean_ctor_set_uint64(v___x_3223_, sizeof(void*)*1, v_key_3222_);
lean_inc(v_canUnfold_x3f_3211_);
lean_inc(v_synthPendingDepth_3210_);
lean_inc(v_defEqCtx_x3f_3209_);
lean_inc_ref(v_localInstances_3208_);
lean_inc_ref(v_lctx_3207_);
lean_inc(v_zetaDeltaSet_3206_);
v___x_3224_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3224_, 0, v___x_3223_);
lean_ctor_set(v___x_3224_, 1, v_zetaDeltaSet_3206_);
lean_ctor_set(v___x_3224_, 2, v_lctx_3207_);
lean_ctor_set(v___x_3224_, 3, v_localInstances_3208_);
lean_ctor_set(v___x_3224_, 4, v_defEqCtx_x3f_3209_);
lean_ctor_set(v___x_3224_, 5, v_synthPendingDepth_3210_);
lean_ctor_set(v___x_3224_, 6, v_canUnfold_x3f_3211_);
lean_ctor_set_uint8(v___x_3224_, sizeof(void*)*7, v_trackZetaDelta_3205_);
lean_ctor_set_uint8(v___x_3224_, sizeof(void*)*7 + 1, v_univApprox_3212_);
lean_ctor_set_uint8(v___x_3224_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3213_);
lean_ctor_set_uint8(v___x_3224_, sizeof(void*)*7 + 3, v_cacheInferType_3214_);
lean_inc(v_mvarId_3170_);
v___x_3225_ = l_Lean_MVarId_getType_x27(v_mvarId_3170_, v___x_3224_, v___y_3172_, v___y_3173_, v___y_3174_);
lean_dec_ref(v___x_3224_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; uint8_t v___x_3229_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3226_);
lean_dec_ref(v___x_3225_);
v___x_3227_ = lean_obj_once(&l_Lean_MVarId_propext___lam__0___closed__1, &l_Lean_MVarId_propext___lam__0___closed__1_once, _init_l_Lean_MVarId_propext___lam__0___closed__1);
v___x_3228_ = lean_unsigned_to_nat(3u);
v___x_3229_ = l_Lean_Expr_isAppOfArity(v_a_3226_, v___x_3227_, v___x_3228_);
if (v___x_3229_ == 0)
{
lean_object* v___x_3255_; lean_object* v___x_3256_; 
lean_dec(v_a_3226_);
lean_dec(v_mvarId_3170_);
v___x_3255_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3256_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3255_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_);
return v___x_3256_;
}
else
{
lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; 
v___x_3257_ = l_Lean_Expr_appFn_x21(v_a_3226_);
lean_dec(v_a_3226_);
v___x_3258_ = l_Lean_Expr_appArg_x21(v___x_3257_);
lean_dec_ref(v___x_3257_);
v___x_3259_ = l_Lean_Meta_isProp(v___x_3258_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_);
if (lean_obj_tag(v___x_3259_) == 0)
{
lean_object* v_a_3260_; uint8_t v___x_3261_; 
v_a_3260_ = lean_ctor_get(v___x_3259_, 0);
lean_inc(v_a_3260_);
lean_dec_ref(v___x_3259_);
v___x_3261_ = lean_unbox(v_a_3260_);
lean_dec(v_a_3260_);
if (v___x_3261_ == 0)
{
lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v_a_3264_; lean_object* v___x_3266_; uint8_t v_isShared_3267_; uint8_t v_isSharedCheck_3271_; 
lean_dec(v_mvarId_3170_);
v___x_3262_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3263_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3262_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_);
v_a_3264_ = lean_ctor_get(v___x_3263_, 0);
v_isSharedCheck_3271_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3271_ == 0)
{
v___x_3266_ = v___x_3263_;
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
else
{
lean_inc(v_a_3264_);
lean_dec(v___x_3263_);
v___x_3266_ = lean_box(0);
v_isShared_3267_ = v_isSharedCheck_3271_;
goto v_resetjp_3265_;
}
v_resetjp_3265_:
{
lean_object* v___x_3269_; 
if (v_isShared_3267_ == 0)
{
v___x_3269_ = v___x_3266_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v_a_3264_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
return v___x_3269_;
}
}
}
else
{
goto v___jp_3230_;
}
}
else
{
lean_object* v_a_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3279_; 
lean_dec(v_mvarId_3170_);
v_a_3272_ = lean_ctor_get(v___x_3259_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3259_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3274_ = v___x_3259_;
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_a_3272_);
lean_dec(v___x_3259_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3279_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3277_; 
if (v_isShared_3275_ == 0)
{
v___x_3277_ = v___x_3274_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3278_; 
v_reuseFailAlloc_3278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3278_, 0, v_a_3272_);
v___x_3277_ = v_reuseFailAlloc_3278_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
return v___x_3277_;
}
}
}
}
v___jp_3230_:
{
lean_object* v___x_3231_; uint8_t v___x_3232_; uint8_t v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v___x_3231_ = lean_obj_once(&l_Lean_MVarId_propext___lam__0___closed__4, &l_Lean_MVarId_propext___lam__0___closed__4_once, _init_l_Lean_MVarId_propext___lam__0___closed__4);
v___x_3232_ = 0;
v___x_3233_ = 0;
v___x_3234_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3234_, 0, v___x_3232_);
lean_ctor_set_uint8(v___x_3234_, 1, v___x_3229_);
lean_ctor_set_uint8(v___x_3234_, 2, v___x_3233_);
lean_ctor_set_uint8(v___x_3234_, 3, v___x_3229_);
v___x_3235_ = lean_box(0);
v___x_3236_ = l_Lean_MVarId_apply(v_mvarId_3170_, v___x_3231_, v___x_3234_, v___x_3235_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_);
if (lean_obj_tag(v___x_3236_) == 0)
{
lean_object* v_a_3237_; lean_object* v___x_3239_; uint8_t v_isShared_3240_; uint8_t v_isSharedCheck_3246_; 
v_a_3237_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3246_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3239_ = v___x_3236_;
v_isShared_3240_ = v_isSharedCheck_3246_;
goto v_resetjp_3238_;
}
else
{
lean_inc(v_a_3237_);
lean_dec(v___x_3236_);
v___x_3239_ = lean_box(0);
v_isShared_3240_ = v_isSharedCheck_3246_;
goto v_resetjp_3238_;
}
v_resetjp_3238_:
{
if (lean_obj_tag(v_a_3237_) == 1)
{
lean_object* v_tail_3241_; 
v_tail_3241_ = lean_ctor_get(v_a_3237_, 1);
if (lean_obj_tag(v_tail_3241_) == 0)
{
lean_object* v_head_3242_; lean_object* v___x_3244_; 
v_head_3242_ = lean_ctor_get(v_a_3237_, 0);
lean_inc(v_head_3242_);
lean_dec_ref(v_a_3237_);
if (v_isShared_3240_ == 0)
{
lean_ctor_set(v___x_3239_, 0, v_head_3242_);
v___x_3244_ = v___x_3239_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_head_3242_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
else
{
lean_dec_ref(v_a_3237_);
lean_del_object(v___x_3239_);
v___y_3177_ = v___y_3171_;
v___y_3178_ = v___y_3172_;
v___y_3179_ = v___y_3173_;
v___y_3180_ = v___y_3174_;
goto v___jp_3176_;
}
}
else
{
lean_del_object(v___x_3239_);
lean_dec(v_a_3237_);
v___y_3177_ = v___y_3171_;
v___y_3178_ = v___y_3172_;
v___y_3179_ = v___y_3173_;
v___y_3180_ = v___y_3174_;
goto v___jp_3176_;
}
}
}
else
{
lean_object* v_a_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3254_; 
v_a_3247_ = lean_ctor_get(v___x_3236_, 0);
v_isSharedCheck_3254_ = !lean_is_exclusive(v___x_3236_);
if (v_isSharedCheck_3254_ == 0)
{
v___x_3249_ = v___x_3236_;
v_isShared_3250_ = v_isSharedCheck_3254_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_a_3247_);
lean_dec(v___x_3236_);
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
else
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3287_; 
lean_dec(v_mvarId_3170_);
v_a_3280_ = lean_ctor_get(v___x_3225_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3225_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___x_3225_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3225_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3285_; 
if (v_isShared_3283_ == 0)
{
v___x_3285_ = v___x_3282_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3280_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0___boxed(lean_object* v___x_3290_, lean_object* v_mvarId_3291_, lean_object* v___y_3292_, lean_object* v___y_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_){
_start:
{
uint8_t v___x_2435__boxed_3297_; lean_object* v_res_3298_; 
v___x_2435__boxed_3297_ = lean_unbox(v___x_3290_);
v_res_3298_ = l_Lean_MVarId_propext___lam__0(v___x_2435__boxed_3297_, v_mvarId_3291_, v___y_3292_, v___y_3293_, v___y_3294_, v___y_3295_);
lean_dec(v___y_3295_);
lean_dec_ref(v___y_3294_);
lean_dec(v___y_3293_);
lean_dec_ref(v___y_3292_);
return v_res_3298_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext(lean_object* v_mvarId_3299_, lean_object* v_a_3300_, lean_object* v_a_3301_, lean_object* v_a_3302_, lean_object* v_a_3303_){
_start:
{
uint8_t v___x_3305_; lean_object* v___x_3306_; lean_object* v___f_3307_; lean_object* v___x_3308_; 
v___x_3305_ = 2;
v___x_3306_ = lean_box(v___x_3305_);
lean_inc(v_mvarId_3299_);
v___f_3307_ = lean_alloc_closure((void*)(l_Lean_MVarId_propext___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3307_, 0, v___x_3306_);
lean_closure_set(v___f_3307_, 1, v_mvarId_3299_);
v___x_3308_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3307_, v_a_3300_, v_a_3301_, v_a_3302_, v_a_3303_);
if (lean_obj_tag(v___x_3308_) == 0)
{
lean_object* v_a_3309_; lean_object* v___x_3311_; uint8_t v_isShared_3312_; uint8_t v_isSharedCheck_3320_; 
v_a_3309_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3311_ = v___x_3308_;
v_isShared_3312_ = v_isSharedCheck_3320_;
goto v_resetjp_3310_;
}
else
{
lean_inc(v_a_3309_);
lean_dec(v___x_3308_);
v___x_3311_ = lean_box(0);
v_isShared_3312_ = v_isSharedCheck_3320_;
goto v_resetjp_3310_;
}
v_resetjp_3310_:
{
if (lean_obj_tag(v_a_3309_) == 0)
{
lean_object* v___x_3314_; 
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 0, v_mvarId_3299_);
v___x_3314_ = v___x_3311_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_mvarId_3299_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
return v___x_3314_;
}
}
else
{
lean_object* v_val_3316_; lean_object* v___x_3318_; 
lean_dec(v_mvarId_3299_);
v_val_3316_ = lean_ctor_get(v_a_3309_, 0);
lean_inc(v_val_3316_);
lean_dec_ref(v_a_3309_);
if (v_isShared_3312_ == 0)
{
lean_ctor_set(v___x_3311_, 0, v_val_3316_);
v___x_3318_ = v___x_3311_;
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
lean_dec(v_mvarId_3299_);
v_a_3321_ = lean_ctor_get(v___x_3308_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3308_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3308_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3308_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___boxed(lean_object* v_mvarId_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_){
_start:
{
lean_object* v_res_3335_; 
v_res_3335_ = l_Lean_MVarId_propext(v_mvarId_3329_, v_a_3330_, v_a_3331_, v_a_3332_, v_a_3333_);
lean_dec(v_a_3333_);
lean_dec_ref(v_a_3332_);
lean_dec(v_a_3331_);
lean_dec_ref(v_a_3330_);
return v_res_3335_;
}
}
static uint64_t _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0(void){
_start:
{
uint8_t v___x_3336_; uint64_t v___x_3337_; 
v___x_3336_ = 2;
v___x_3337_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_3336_);
return v___x_3337_;
}
}
static lean_object* _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3338_; 
v___x_3338_ = lean_mk_string_unchecked("HEq", 3, 3);
return v___x_3338_;
}
}
static lean_object* _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3339_ = lean_obj_once(&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1, &l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1_once, _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1);
v___x_3340_ = l_Lean_Name_mkStr1(v___x_3339_);
return v___x_3340_;
}
}
static lean_object* _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3341_; 
v___x_3341_ = lean_mk_string_unchecked("proof_irrel_heq", 15, 15);
return v___x_3341_;
}
}
static lean_object* _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__4(void){
_start:
{
lean_object* v___x_3342_; lean_object* v___x_3343_; 
v___x_3342_ = lean_obj_once(&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3, &l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3_once, _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3);
v___x_3343_ = l_Lean_Name_mkStr1(v___x_3342_);
return v___x_3343_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0(lean_object* v_mvarId_3344_, lean_object* v___x_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_){
_start:
{
lean_object* v___x_3351_; 
lean_inc(v_mvarId_3344_);
v___x_3351_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3344_, v___x_3345_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
if (lean_obj_tag(v___x_3351_) == 0)
{
lean_object* v___x_3352_; uint8_t v_foApprox_3353_; uint8_t v_ctxApprox_3354_; uint8_t v_quasiPatternApprox_3355_; uint8_t v_constApprox_3356_; uint8_t v_isDefEqStuckEx_3357_; uint8_t v_unificationHints_3358_; uint8_t v_proofIrrelevance_3359_; uint8_t v_assignSyntheticOpaque_3360_; uint8_t v_offsetCnstrs_3361_; uint8_t v_etaStruct_3362_; uint8_t v_univApprox_3363_; uint8_t v_iota_3364_; uint8_t v_beta_3365_; uint8_t v_proj_3366_; uint8_t v_zeta_3367_; uint8_t v_zetaDelta_3368_; uint8_t v_zetaUnused_3369_; uint8_t v_zetaHave_3370_; lean_object* v___x_3372_; uint8_t v_isShared_3373_; uint8_t v_isSharedCheck_3440_; 
lean_dec_ref(v___x_3351_);
v___x_3352_ = l_Lean_Meta_Context_config(v___y_3346_);
v_foApprox_3353_ = lean_ctor_get_uint8(v___x_3352_, 0);
v_ctxApprox_3354_ = lean_ctor_get_uint8(v___x_3352_, 1);
v_quasiPatternApprox_3355_ = lean_ctor_get_uint8(v___x_3352_, 2);
v_constApprox_3356_ = lean_ctor_get_uint8(v___x_3352_, 3);
v_isDefEqStuckEx_3357_ = lean_ctor_get_uint8(v___x_3352_, 4);
v_unificationHints_3358_ = lean_ctor_get_uint8(v___x_3352_, 5);
v_proofIrrelevance_3359_ = lean_ctor_get_uint8(v___x_3352_, 6);
v_assignSyntheticOpaque_3360_ = lean_ctor_get_uint8(v___x_3352_, 7);
v_offsetCnstrs_3361_ = lean_ctor_get_uint8(v___x_3352_, 8);
v_etaStruct_3362_ = lean_ctor_get_uint8(v___x_3352_, 10);
v_univApprox_3363_ = lean_ctor_get_uint8(v___x_3352_, 11);
v_iota_3364_ = lean_ctor_get_uint8(v___x_3352_, 12);
v_beta_3365_ = lean_ctor_get_uint8(v___x_3352_, 13);
v_proj_3366_ = lean_ctor_get_uint8(v___x_3352_, 14);
v_zeta_3367_ = lean_ctor_get_uint8(v___x_3352_, 15);
v_zetaDelta_3368_ = lean_ctor_get_uint8(v___x_3352_, 16);
v_zetaUnused_3369_ = lean_ctor_get_uint8(v___x_3352_, 17);
v_zetaHave_3370_ = lean_ctor_get_uint8(v___x_3352_, 18);
v_isSharedCheck_3440_ = !lean_is_exclusive(v___x_3352_);
if (v_isSharedCheck_3440_ == 0)
{
v___x_3372_ = v___x_3352_;
v_isShared_3373_ = v_isSharedCheck_3440_;
goto v_resetjp_3371_;
}
else
{
lean_dec(v___x_3352_);
v___x_3372_ = lean_box(0);
v_isShared_3373_ = v_isSharedCheck_3440_;
goto v_resetjp_3371_;
}
v_resetjp_3371_:
{
uint8_t v_trackZetaDelta_3374_; lean_object* v_zetaDeltaSet_3375_; lean_object* v_lctx_3376_; lean_object* v_localInstances_3377_; lean_object* v_defEqCtx_x3f_3378_; lean_object* v_synthPendingDepth_3379_; lean_object* v_canUnfold_x3f_3380_; uint8_t v_univApprox_3381_; uint8_t v_inTypeClassResolution_3382_; uint8_t v_cacheInferType_3383_; uint8_t v___x_3384_; lean_object* v_config_3386_; 
v_trackZetaDelta_3374_ = lean_ctor_get_uint8(v___y_3346_, sizeof(void*)*7);
v_zetaDeltaSet_3375_ = lean_ctor_get(v___y_3346_, 1);
v_lctx_3376_ = lean_ctor_get(v___y_3346_, 2);
v_localInstances_3377_ = lean_ctor_get(v___y_3346_, 3);
v_defEqCtx_x3f_3378_ = lean_ctor_get(v___y_3346_, 4);
v_synthPendingDepth_3379_ = lean_ctor_get(v___y_3346_, 5);
v_canUnfold_x3f_3380_ = lean_ctor_get(v___y_3346_, 6);
v_univApprox_3381_ = lean_ctor_get_uint8(v___y_3346_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3382_ = lean_ctor_get_uint8(v___y_3346_, sizeof(void*)*7 + 2);
v_cacheInferType_3383_ = lean_ctor_get_uint8(v___y_3346_, sizeof(void*)*7 + 3);
v___x_3384_ = 2;
if (v_isShared_3373_ == 0)
{
v_config_3386_ = v___x_3372_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3439_; 
v_reuseFailAlloc_3439_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 0, v_foApprox_3353_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 1, v_ctxApprox_3354_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 2, v_quasiPatternApprox_3355_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 3, v_constApprox_3356_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 4, v_isDefEqStuckEx_3357_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 5, v_unificationHints_3358_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 6, v_proofIrrelevance_3359_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 7, v_assignSyntheticOpaque_3360_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 8, v_offsetCnstrs_3361_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 10, v_etaStruct_3362_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 11, v_univApprox_3363_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 12, v_iota_3364_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 13, v_beta_3365_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 14, v_proj_3366_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 15, v_zeta_3367_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 16, v_zetaDelta_3368_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 17, v_zetaUnused_3369_);
lean_ctor_set_uint8(v_reuseFailAlloc_3439_, 18, v_zetaHave_3370_);
v_config_3386_ = v_reuseFailAlloc_3439_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
uint64_t v___x_3387_; uint64_t v___x_3388_; uint64_t v___x_3389_; uint64_t v___x_3390_; uint64_t v___x_3391_; uint64_t v_key_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; 
lean_ctor_set_uint8(v_config_3386_, 9, v___x_3384_);
v___x_3387_ = l_Lean_Meta_Context_configKey(v___y_3346_);
v___x_3388_ = 2ULL;
v___x_3389_ = lean_uint64_shift_right(v___x_3387_, v___x_3388_);
v___x_3390_ = lean_uint64_shift_left(v___x_3389_, v___x_3388_);
v___x_3391_ = lean_uint64_once(&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0, &l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_once, _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0);
v_key_3392_ = lean_uint64_lor(v___x_3390_, v___x_3391_);
v___x_3393_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3393_, 0, v_config_3386_);
lean_ctor_set_uint64(v___x_3393_, sizeof(void*)*1, v_key_3392_);
lean_inc(v_canUnfold_x3f_3380_);
lean_inc(v_synthPendingDepth_3379_);
lean_inc(v_defEqCtx_x3f_3378_);
lean_inc_ref(v_localInstances_3377_);
lean_inc_ref(v_lctx_3376_);
lean_inc(v_zetaDeltaSet_3375_);
v___x_3394_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3394_, 0, v___x_3393_);
lean_ctor_set(v___x_3394_, 1, v_zetaDeltaSet_3375_);
lean_ctor_set(v___x_3394_, 2, v_lctx_3376_);
lean_ctor_set(v___x_3394_, 3, v_localInstances_3377_);
lean_ctor_set(v___x_3394_, 4, v_defEqCtx_x3f_3378_);
lean_ctor_set(v___x_3394_, 5, v_synthPendingDepth_3379_);
lean_ctor_set(v___x_3394_, 6, v_canUnfold_x3f_3380_);
lean_ctor_set_uint8(v___x_3394_, sizeof(void*)*7, v_trackZetaDelta_3374_);
lean_ctor_set_uint8(v___x_3394_, sizeof(void*)*7 + 1, v_univApprox_3381_);
lean_ctor_set_uint8(v___x_3394_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3382_);
lean_ctor_set_uint8(v___x_3394_, sizeof(void*)*7 + 3, v_cacheInferType_3383_);
lean_inc(v_mvarId_3344_);
v___x_3395_ = l_Lean_MVarId_getType_x27(v_mvarId_3344_, v___x_3394_, v___y_3347_, v___y_3348_, v___y_3349_);
lean_dec_ref(v___x_3394_);
if (lean_obj_tag(v___x_3395_) == 0)
{
lean_object* v_a_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; uint8_t v___x_3399_; 
v_a_3396_ = lean_ctor_get(v___x_3395_, 0);
lean_inc(v_a_3396_);
lean_dec_ref(v___x_3395_);
v___x_3397_ = lean_obj_once(&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2, &l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2_once, _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2);
v___x_3398_ = lean_unsigned_to_nat(4u);
v___x_3399_ = l_Lean_Expr_isAppOfArity(v_a_3396_, v___x_3397_, v___x_3398_);
if (v___x_3399_ == 0)
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
lean_dec(v_a_3396_);
lean_dec(v_mvarId_3344_);
v___x_3400_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3401_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3400_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
return v___x_3401_;
}
else
{
lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; lean_object* v___x_3407_; lean_object* v___x_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; 
v___x_3402_ = l_Lean_Expr_appFn_x21(v_a_3396_);
v___x_3403_ = l_Lean_Expr_appFn_x21(v___x_3402_);
lean_dec_ref(v___x_3402_);
v___x_3404_ = l_Lean_Expr_appArg_x21(v___x_3403_);
lean_dec_ref(v___x_3403_);
v___x_3405_ = l_Lean_Expr_appArg_x21(v_a_3396_);
lean_dec(v_a_3396_);
v___x_3406_ = lean_obj_once(&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__4, &l_Lean_MVarId_proofIrrelHeq___lam__0___closed__4_once, _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__4);
v___x_3407_ = lean_unsigned_to_nat(2u);
v___x_3408_ = lean_mk_empty_array_with_capacity(v___x_3407_);
v___x_3409_ = lean_array_push(v___x_3408_, v___x_3404_);
v___x_3410_ = lean_array_push(v___x_3409_, v___x_3405_);
v___x_3411_ = l_Lean_Meta_mkAppM(v___x_3406_, v___x_3410_, v___y_3346_, v___y_3347_, v___y_3348_, v___y_3349_);
if (lean_obj_tag(v___x_3411_) == 0)
{
lean_object* v_a_3412_; lean_object* v___x_3413_; lean_object* v___x_3415_; uint8_t v_isShared_3416_; uint8_t v_isSharedCheck_3421_; 
v_a_3412_ = lean_ctor_get(v___x_3411_, 0);
lean_inc(v_a_3412_);
lean_dec_ref(v___x_3411_);
v___x_3413_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_3344_, v_a_3412_, v___y_3347_, v___y_3349_);
v_isSharedCheck_3421_ = !lean_is_exclusive(v___x_3413_);
if (v_isSharedCheck_3421_ == 0)
{
lean_object* v_unused_3422_; 
v_unused_3422_ = lean_ctor_get(v___x_3413_, 0);
lean_dec(v_unused_3422_);
v___x_3415_ = v___x_3413_;
v_isShared_3416_ = v_isSharedCheck_3421_;
goto v_resetjp_3414_;
}
else
{
lean_dec(v___x_3413_);
v___x_3415_ = lean_box(0);
v_isShared_3416_ = v_isSharedCheck_3421_;
goto v_resetjp_3414_;
}
v_resetjp_3414_:
{
lean_object* v___x_3417_; lean_object* v___x_3419_; 
v___x_3417_ = lean_box(v___x_3399_);
if (v_isShared_3416_ == 0)
{
lean_ctor_set(v___x_3415_, 0, v___x_3417_);
v___x_3419_ = v___x_3415_;
goto v_reusejp_3418_;
}
else
{
lean_object* v_reuseFailAlloc_3420_; 
v_reuseFailAlloc_3420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3420_, 0, v___x_3417_);
v___x_3419_ = v_reuseFailAlloc_3420_;
goto v_reusejp_3418_;
}
v_reusejp_3418_:
{
return v___x_3419_;
}
}
}
else
{
lean_object* v_a_3423_; lean_object* v___x_3425_; uint8_t v_isShared_3426_; uint8_t v_isSharedCheck_3430_; 
lean_dec(v_mvarId_3344_);
v_a_3423_ = lean_ctor_get(v___x_3411_, 0);
v_isSharedCheck_3430_ = !lean_is_exclusive(v___x_3411_);
if (v_isSharedCheck_3430_ == 0)
{
v___x_3425_ = v___x_3411_;
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
else
{
lean_inc(v_a_3423_);
lean_dec(v___x_3411_);
v___x_3425_ = lean_box(0);
v_isShared_3426_ = v_isSharedCheck_3430_;
goto v_resetjp_3424_;
}
v_resetjp_3424_:
{
lean_object* v___x_3428_; 
if (v_isShared_3426_ == 0)
{
v___x_3428_ = v___x_3425_;
goto v_reusejp_3427_;
}
else
{
lean_object* v_reuseFailAlloc_3429_; 
v_reuseFailAlloc_3429_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3429_, 0, v_a_3423_);
v___x_3428_ = v_reuseFailAlloc_3429_;
goto v_reusejp_3427_;
}
v_reusejp_3427_:
{
return v___x_3428_;
}
}
}
}
}
else
{
lean_object* v_a_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3438_; 
lean_dec(v_mvarId_3344_);
v_a_3431_ = lean_ctor_get(v___x_3395_, 0);
v_isSharedCheck_3438_ = !lean_is_exclusive(v___x_3395_);
if (v_isSharedCheck_3438_ == 0)
{
v___x_3433_ = v___x_3395_;
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_a_3431_);
lean_dec(v___x_3395_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3438_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v___x_3436_; 
if (v_isShared_3434_ == 0)
{
v___x_3436_ = v___x_3433_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3437_; 
v_reuseFailAlloc_3437_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3437_, 0, v_a_3431_);
v___x_3436_ = v_reuseFailAlloc_3437_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
return v___x_3436_;
}
}
}
}
}
}
else
{
lean_object* v_a_3441_; lean_object* v___x_3443_; uint8_t v_isShared_3444_; uint8_t v_isSharedCheck_3448_; 
lean_dec(v_mvarId_3344_);
v_a_3441_ = lean_ctor_get(v___x_3351_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3351_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3443_ = v___x_3351_;
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
else
{
lean_inc(v_a_3441_);
lean_dec(v___x_3351_);
v___x_3443_ = lean_box(0);
v_isShared_3444_ = v_isSharedCheck_3448_;
goto v_resetjp_3442_;
}
v_resetjp_3442_:
{
lean_object* v___x_3446_; 
if (v_isShared_3444_ == 0)
{
v___x_3446_ = v___x_3443_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v_a_3441_);
v___x_3446_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
return v___x_3446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___boxed(lean_object* v_mvarId_3449_, lean_object* v___x_3450_, lean_object* v___y_3451_, lean_object* v___y_3452_, lean_object* v___y_3453_, lean_object* v___y_3454_, lean_object* v___y_3455_){
_start:
{
lean_object* v_res_3456_; 
v_res_3456_ = l_Lean_MVarId_proofIrrelHeq___lam__0(v_mvarId_3449_, v___x_3450_, v___y_3451_, v___y_3452_, v___y_3453_, v___y_3454_);
lean_dec(v___y_3454_);
lean_dec_ref(v___y_3453_);
lean_dec(v___y_3452_);
lean_dec_ref(v___y_3451_);
return v_res_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1(lean_object* v___f_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_){
_start:
{
lean_object* v___x_3463_; 
v___x_3463_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3457_, v___y_3458_, v___y_3459_, v___y_3460_, v___y_3461_);
if (lean_obj_tag(v___x_3463_) == 0)
{
lean_object* v_a_3464_; lean_object* v___x_3466_; uint8_t v_isShared_3467_; uint8_t v_isSharedCheck_3477_; 
v_a_3464_ = lean_ctor_get(v___x_3463_, 0);
v_isSharedCheck_3477_ = !lean_is_exclusive(v___x_3463_);
if (v_isSharedCheck_3477_ == 0)
{
v___x_3466_ = v___x_3463_;
v_isShared_3467_ = v_isSharedCheck_3477_;
goto v_resetjp_3465_;
}
else
{
lean_inc(v_a_3464_);
lean_dec(v___x_3463_);
v___x_3466_ = lean_box(0);
v_isShared_3467_ = v_isSharedCheck_3477_;
goto v_resetjp_3465_;
}
v_resetjp_3465_:
{
if (lean_obj_tag(v_a_3464_) == 0)
{
uint8_t v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3471_; 
v___x_3468_ = 0;
v___x_3469_ = lean_box(v___x_3468_);
if (v_isShared_3467_ == 0)
{
lean_ctor_set(v___x_3466_, 0, v___x_3469_);
v___x_3471_ = v___x_3466_;
goto v_reusejp_3470_;
}
else
{
lean_object* v_reuseFailAlloc_3472_; 
v_reuseFailAlloc_3472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3472_, 0, v___x_3469_);
v___x_3471_ = v_reuseFailAlloc_3472_;
goto v_reusejp_3470_;
}
v_reusejp_3470_:
{
return v___x_3471_;
}
}
else
{
lean_object* v_val_3473_; lean_object* v___x_3475_; 
v_val_3473_ = lean_ctor_get(v_a_3464_, 0);
lean_inc(v_val_3473_);
lean_dec_ref(v_a_3464_);
if (v_isShared_3467_ == 0)
{
lean_ctor_set(v___x_3466_, 0, v_val_3473_);
v___x_3475_ = v___x_3466_;
goto v_reusejp_3474_;
}
else
{
lean_object* v_reuseFailAlloc_3476_; 
v_reuseFailAlloc_3476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3476_, 0, v_val_3473_);
v___x_3475_ = v_reuseFailAlloc_3476_;
goto v_reusejp_3474_;
}
v_reusejp_3474_:
{
return v___x_3475_;
}
}
}
}
else
{
lean_object* v_a_3478_; lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3485_; 
v_a_3478_ = lean_ctor_get(v___x_3463_, 0);
v_isSharedCheck_3485_ = !lean_is_exclusive(v___x_3463_);
if (v_isSharedCheck_3485_ == 0)
{
v___x_3480_ = v___x_3463_;
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
else
{
lean_inc(v_a_3478_);
lean_dec(v___x_3463_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3485_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v___x_3483_; 
if (v_isShared_3481_ == 0)
{
v___x_3483_ = v___x_3480_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3484_; 
v_reuseFailAlloc_3484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3484_, 0, v_a_3478_);
v___x_3483_ = v_reuseFailAlloc_3484_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
return v___x_3483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1___boxed(lean_object* v___f_3486_, lean_object* v___y_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_){
_start:
{
lean_object* v_res_3492_; 
v_res_3492_ = l_Lean_MVarId_proofIrrelHeq___lam__1(v___f_3486_, v___y_3487_, v___y_3488_, v___y_3489_, v___y_3490_);
lean_dec(v___y_3490_);
lean_dec_ref(v___y_3489_);
lean_dec(v___y_3488_);
lean_dec_ref(v___y_3487_);
return v_res_3492_;
}
}
static lean_object* _init_l_Lean_MVarId_proofIrrelHeq___closed__0(void){
_start:
{
lean_object* v___x_3493_; 
v___x_3493_ = lean_mk_string_unchecked("proofIrrelHeq", 13, 13);
return v___x_3493_;
}
}
static lean_object* _init_l_Lean_MVarId_proofIrrelHeq___closed__1(void){
_start:
{
lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3494_ = lean_obj_once(&l_Lean_MVarId_proofIrrelHeq___closed__0, &l_Lean_MVarId_proofIrrelHeq___closed__0_once, _init_l_Lean_MVarId_proofIrrelHeq___closed__0);
v___x_3495_ = l_Lean_Name_mkStr1(v___x_3494_);
return v___x_3495_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq(lean_object* v_mvarId_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_, lean_object* v_a_3499_, lean_object* v_a_3500_){
_start:
{
lean_object* v___x_3502_; lean_object* v___f_3503_; lean_object* v___f_3504_; lean_object* v___x_3505_; 
v___x_3502_ = lean_obj_once(&l_Lean_MVarId_proofIrrelHeq___closed__1, &l_Lean_MVarId_proofIrrelHeq___closed__1_once, _init_l_Lean_MVarId_proofIrrelHeq___closed__1);
lean_inc(v_mvarId_3496_);
v___f_3503_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3503_, 0, v_mvarId_3496_);
lean_closure_set(v___f_3503_, 1, v___x_3502_);
v___f_3504_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3504_, 0, v___f_3503_);
v___x_3505_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_3496_, v___f_3504_, v_a_3497_, v_a_3498_, v_a_3499_, v_a_3500_);
return v___x_3505_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___boxed(lean_object* v_mvarId_3506_, lean_object* v_a_3507_, lean_object* v_a_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v_a_3511_){
_start:
{
lean_object* v_res_3512_; 
v_res_3512_ = l_Lean_MVarId_proofIrrelHeq(v_mvarId_3506_, v_a_3507_, v_a_3508_, v_a_3509_, v_a_3510_);
lean_dec(v_a_3510_);
lean_dec_ref(v_a_3509_);
lean_dec(v_a_3508_);
lean_dec_ref(v_a_3507_);
return v_res_3512_;
}
}
static lean_object* _init_l_Lean_MVarId_subsingletonElim___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3513_; 
v___x_3513_ = lean_mk_string_unchecked("Subsingleton", 12, 12);
return v___x_3513_;
}
}
static lean_object* _init_l_Lean_MVarId_subsingletonElim___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; 
v___x_3514_ = lean_obj_once(&l_Lean_MVarId_exfalso___lam__0___closed__3, &l_Lean_MVarId_exfalso___lam__0___closed__3_once, _init_l_Lean_MVarId_exfalso___lam__0___closed__3);
v___x_3515_ = lean_obj_once(&l_Lean_MVarId_subsingletonElim___lam__0___closed__0, &l_Lean_MVarId_subsingletonElim___lam__0___closed__0_once, _init_l_Lean_MVarId_subsingletonElim___lam__0___closed__0);
v___x_3516_ = l_Lean_Name_mkStr2(v___x_3515_, v___x_3514_);
return v___x_3516_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0(lean_object* v_mvarId_3517_, lean_object* v___x_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_){
_start:
{
lean_object* v___x_3524_; 
lean_inc(v_mvarId_3517_);
v___x_3524_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3517_, v___x_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v___x_3525_; uint8_t v_foApprox_3526_; uint8_t v_ctxApprox_3527_; uint8_t v_quasiPatternApprox_3528_; uint8_t v_constApprox_3529_; uint8_t v_isDefEqStuckEx_3530_; uint8_t v_unificationHints_3531_; uint8_t v_proofIrrelevance_3532_; uint8_t v_assignSyntheticOpaque_3533_; uint8_t v_offsetCnstrs_3534_; uint8_t v_etaStruct_3535_; uint8_t v_univApprox_3536_; uint8_t v_iota_3537_; uint8_t v_beta_3538_; uint8_t v_proj_3539_; uint8_t v_zeta_3540_; uint8_t v_zetaDelta_3541_; uint8_t v_zetaUnused_3542_; uint8_t v_zetaHave_3543_; lean_object* v___x_3545_; uint8_t v_isShared_3546_; uint8_t v_isSharedCheck_3612_; 
lean_dec_ref(v___x_3524_);
v___x_3525_ = l_Lean_Meta_Context_config(v___y_3519_);
v_foApprox_3526_ = lean_ctor_get_uint8(v___x_3525_, 0);
v_ctxApprox_3527_ = lean_ctor_get_uint8(v___x_3525_, 1);
v_quasiPatternApprox_3528_ = lean_ctor_get_uint8(v___x_3525_, 2);
v_constApprox_3529_ = lean_ctor_get_uint8(v___x_3525_, 3);
v_isDefEqStuckEx_3530_ = lean_ctor_get_uint8(v___x_3525_, 4);
v_unificationHints_3531_ = lean_ctor_get_uint8(v___x_3525_, 5);
v_proofIrrelevance_3532_ = lean_ctor_get_uint8(v___x_3525_, 6);
v_assignSyntheticOpaque_3533_ = lean_ctor_get_uint8(v___x_3525_, 7);
v_offsetCnstrs_3534_ = lean_ctor_get_uint8(v___x_3525_, 8);
v_etaStruct_3535_ = lean_ctor_get_uint8(v___x_3525_, 10);
v_univApprox_3536_ = lean_ctor_get_uint8(v___x_3525_, 11);
v_iota_3537_ = lean_ctor_get_uint8(v___x_3525_, 12);
v_beta_3538_ = lean_ctor_get_uint8(v___x_3525_, 13);
v_proj_3539_ = lean_ctor_get_uint8(v___x_3525_, 14);
v_zeta_3540_ = lean_ctor_get_uint8(v___x_3525_, 15);
v_zetaDelta_3541_ = lean_ctor_get_uint8(v___x_3525_, 16);
v_zetaUnused_3542_ = lean_ctor_get_uint8(v___x_3525_, 17);
v_zetaHave_3543_ = lean_ctor_get_uint8(v___x_3525_, 18);
v_isSharedCheck_3612_ = !lean_is_exclusive(v___x_3525_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3545_ = v___x_3525_;
v_isShared_3546_ = v_isSharedCheck_3612_;
goto v_resetjp_3544_;
}
else
{
lean_dec(v___x_3525_);
v___x_3545_ = lean_box(0);
v_isShared_3546_ = v_isSharedCheck_3612_;
goto v_resetjp_3544_;
}
v_resetjp_3544_:
{
uint8_t v_trackZetaDelta_3547_; lean_object* v_zetaDeltaSet_3548_; lean_object* v_lctx_3549_; lean_object* v_localInstances_3550_; lean_object* v_defEqCtx_x3f_3551_; lean_object* v_synthPendingDepth_3552_; lean_object* v_canUnfold_x3f_3553_; uint8_t v_univApprox_3554_; uint8_t v_inTypeClassResolution_3555_; uint8_t v_cacheInferType_3556_; uint8_t v___x_3557_; lean_object* v_config_3559_; 
v_trackZetaDelta_3547_ = lean_ctor_get_uint8(v___y_3519_, sizeof(void*)*7);
v_zetaDeltaSet_3548_ = lean_ctor_get(v___y_3519_, 1);
v_lctx_3549_ = lean_ctor_get(v___y_3519_, 2);
v_localInstances_3550_ = lean_ctor_get(v___y_3519_, 3);
v_defEqCtx_x3f_3551_ = lean_ctor_get(v___y_3519_, 4);
v_synthPendingDepth_3552_ = lean_ctor_get(v___y_3519_, 5);
v_canUnfold_x3f_3553_ = lean_ctor_get(v___y_3519_, 6);
v_univApprox_3554_ = lean_ctor_get_uint8(v___y_3519_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3555_ = lean_ctor_get_uint8(v___y_3519_, sizeof(void*)*7 + 2);
v_cacheInferType_3556_ = lean_ctor_get_uint8(v___y_3519_, sizeof(void*)*7 + 3);
v___x_3557_ = 2;
if (v_isShared_3546_ == 0)
{
v_config_3559_ = v___x_3545_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3611_; 
v_reuseFailAlloc_3611_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 0, v_foApprox_3526_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 1, v_ctxApprox_3527_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 2, v_quasiPatternApprox_3528_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 3, v_constApprox_3529_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 4, v_isDefEqStuckEx_3530_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 5, v_unificationHints_3531_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 6, v_proofIrrelevance_3532_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 7, v_assignSyntheticOpaque_3533_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 8, v_offsetCnstrs_3534_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 10, v_etaStruct_3535_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 11, v_univApprox_3536_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 12, v_iota_3537_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 13, v_beta_3538_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 14, v_proj_3539_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 15, v_zeta_3540_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 16, v_zetaDelta_3541_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 17, v_zetaUnused_3542_);
lean_ctor_set_uint8(v_reuseFailAlloc_3611_, 18, v_zetaHave_3543_);
v_config_3559_ = v_reuseFailAlloc_3611_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
uint64_t v___x_3560_; uint64_t v___x_3561_; uint64_t v___x_3562_; uint64_t v___x_3563_; uint64_t v___x_3564_; uint64_t v_key_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; 
lean_ctor_set_uint8(v_config_3559_, 9, v___x_3557_);
v___x_3560_ = l_Lean_Meta_Context_configKey(v___y_3519_);
v___x_3561_ = 2ULL;
v___x_3562_ = lean_uint64_shift_right(v___x_3560_, v___x_3561_);
v___x_3563_ = lean_uint64_shift_left(v___x_3562_, v___x_3561_);
v___x_3564_ = lean_uint64_once(&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0, &l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_once, _init_l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0);
v_key_3565_ = lean_uint64_lor(v___x_3563_, v___x_3564_);
v___x_3566_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_3566_, 0, v_config_3559_);
lean_ctor_set_uint64(v___x_3566_, sizeof(void*)*1, v_key_3565_);
lean_inc(v_canUnfold_x3f_3553_);
lean_inc(v_synthPendingDepth_3552_);
lean_inc(v_defEqCtx_x3f_3551_);
lean_inc_ref(v_localInstances_3550_);
lean_inc_ref(v_lctx_3549_);
lean_inc(v_zetaDeltaSet_3548_);
v___x_3567_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3567_, 0, v___x_3566_);
lean_ctor_set(v___x_3567_, 1, v_zetaDeltaSet_3548_);
lean_ctor_set(v___x_3567_, 2, v_lctx_3549_);
lean_ctor_set(v___x_3567_, 3, v_localInstances_3550_);
lean_ctor_set(v___x_3567_, 4, v_defEqCtx_x3f_3551_);
lean_ctor_set(v___x_3567_, 5, v_synthPendingDepth_3552_);
lean_ctor_set(v___x_3567_, 6, v_canUnfold_x3f_3553_);
lean_ctor_set_uint8(v___x_3567_, sizeof(void*)*7, v_trackZetaDelta_3547_);
lean_ctor_set_uint8(v___x_3567_, sizeof(void*)*7 + 1, v_univApprox_3554_);
lean_ctor_set_uint8(v___x_3567_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3555_);
lean_ctor_set_uint8(v___x_3567_, sizeof(void*)*7 + 3, v_cacheInferType_3556_);
lean_inc(v_mvarId_3517_);
v___x_3568_ = l_Lean_MVarId_getType_x27(v_mvarId_3517_, v___x_3567_, v___y_3520_, v___y_3521_, v___y_3522_);
lean_dec_ref(v___x_3567_);
if (lean_obj_tag(v___x_3568_) == 0)
{
lean_object* v_a_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; uint8_t v___x_3572_; 
v_a_3569_ = lean_ctor_get(v___x_3568_, 0);
lean_inc(v_a_3569_);
lean_dec_ref(v___x_3568_);
v___x_3570_ = lean_obj_once(&l_Lean_MVarId_propext___lam__0___closed__1, &l_Lean_MVarId_propext___lam__0___closed__1_once, _init_l_Lean_MVarId_propext___lam__0___closed__1);
v___x_3571_ = lean_unsigned_to_nat(3u);
v___x_3572_ = l_Lean_Expr_isAppOfArity(v_a_3569_, v___x_3570_, v___x_3571_);
if (v___x_3572_ == 0)
{
lean_object* v___x_3573_; lean_object* v___x_3574_; 
lean_dec(v_a_3569_);
lean_dec(v_mvarId_3517_);
v___x_3573_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3574_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3573_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_);
return v___x_3574_;
}
else
{
lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3582_; lean_object* v___x_3583_; 
v___x_3575_ = l_Lean_Expr_appFn_x21(v_a_3569_);
v___x_3576_ = l_Lean_Expr_appArg_x21(v___x_3575_);
lean_dec_ref(v___x_3575_);
v___x_3577_ = l_Lean_Expr_appArg_x21(v_a_3569_);
lean_dec(v_a_3569_);
v___x_3578_ = lean_obj_once(&l_Lean_MVarId_subsingletonElim___lam__0___closed__1, &l_Lean_MVarId_subsingletonElim___lam__0___closed__1_once, _init_l_Lean_MVarId_subsingletonElim___lam__0___closed__1);
v___x_3579_ = lean_unsigned_to_nat(2u);
v___x_3580_ = lean_mk_empty_array_with_capacity(v___x_3579_);
v___x_3581_ = lean_array_push(v___x_3580_, v___x_3576_);
v___x_3582_ = lean_array_push(v___x_3581_, v___x_3577_);
v___x_3583_ = l_Lean_Meta_mkAppM(v___x_3578_, v___x_3582_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_);
if (lean_obj_tag(v___x_3583_) == 0)
{
lean_object* v_a_3584_; lean_object* v___x_3585_; lean_object* v___x_3587_; uint8_t v_isShared_3588_; uint8_t v_isSharedCheck_3593_; 
v_a_3584_ = lean_ctor_get(v___x_3583_, 0);
lean_inc(v_a_3584_);
lean_dec_ref(v___x_3583_);
v___x_3585_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_3517_, v_a_3584_, v___y_3520_, v___y_3522_);
v_isSharedCheck_3593_ = !lean_is_exclusive(v___x_3585_);
if (v_isSharedCheck_3593_ == 0)
{
lean_object* v_unused_3594_; 
v_unused_3594_ = lean_ctor_get(v___x_3585_, 0);
lean_dec(v_unused_3594_);
v___x_3587_ = v___x_3585_;
v_isShared_3588_ = v_isSharedCheck_3593_;
goto v_resetjp_3586_;
}
else
{
lean_dec(v___x_3585_);
v___x_3587_ = lean_box(0);
v_isShared_3588_ = v_isSharedCheck_3593_;
goto v_resetjp_3586_;
}
v_resetjp_3586_:
{
lean_object* v___x_3589_; lean_object* v___x_3591_; 
v___x_3589_ = lean_box(v___x_3572_);
if (v_isShared_3588_ == 0)
{
lean_ctor_set(v___x_3587_, 0, v___x_3589_);
v___x_3591_ = v___x_3587_;
goto v_reusejp_3590_;
}
else
{
lean_object* v_reuseFailAlloc_3592_; 
v_reuseFailAlloc_3592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3592_, 0, v___x_3589_);
v___x_3591_ = v_reuseFailAlloc_3592_;
goto v_reusejp_3590_;
}
v_reusejp_3590_:
{
return v___x_3591_;
}
}
}
else
{
lean_object* v_a_3595_; lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3602_; 
lean_dec(v_mvarId_3517_);
v_a_3595_ = lean_ctor_get(v___x_3583_, 0);
v_isSharedCheck_3602_ = !lean_is_exclusive(v___x_3583_);
if (v_isSharedCheck_3602_ == 0)
{
v___x_3597_ = v___x_3583_;
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
else
{
lean_inc(v_a_3595_);
lean_dec(v___x_3583_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3602_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___x_3600_; 
if (v_isShared_3598_ == 0)
{
v___x_3600_ = v___x_3597_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3601_; 
v_reuseFailAlloc_3601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3601_, 0, v_a_3595_);
v___x_3600_ = v_reuseFailAlloc_3601_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
return v___x_3600_;
}
}
}
}
}
else
{
lean_object* v_a_3603_; lean_object* v___x_3605_; uint8_t v_isShared_3606_; uint8_t v_isSharedCheck_3610_; 
lean_dec(v_mvarId_3517_);
v_a_3603_ = lean_ctor_get(v___x_3568_, 0);
v_isSharedCheck_3610_ = !lean_is_exclusive(v___x_3568_);
if (v_isSharedCheck_3610_ == 0)
{
v___x_3605_ = v___x_3568_;
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
else
{
lean_inc(v_a_3603_);
lean_dec(v___x_3568_);
v___x_3605_ = lean_box(0);
v_isShared_3606_ = v_isSharedCheck_3610_;
goto v_resetjp_3604_;
}
v_resetjp_3604_:
{
lean_object* v___x_3608_; 
if (v_isShared_3606_ == 0)
{
v___x_3608_ = v___x_3605_;
goto v_reusejp_3607_;
}
else
{
lean_object* v_reuseFailAlloc_3609_; 
v_reuseFailAlloc_3609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3609_, 0, v_a_3603_);
v___x_3608_ = v_reuseFailAlloc_3609_;
goto v_reusejp_3607_;
}
v_reusejp_3607_:
{
return v___x_3608_;
}
}
}
}
}
}
else
{
lean_object* v_a_3613_; lean_object* v___x_3615_; uint8_t v_isShared_3616_; uint8_t v_isSharedCheck_3620_; 
lean_dec(v_mvarId_3517_);
v_a_3613_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3620_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3620_ == 0)
{
v___x_3615_ = v___x_3524_;
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
else
{
lean_inc(v_a_3613_);
lean_dec(v___x_3524_);
v___x_3615_ = lean_box(0);
v_isShared_3616_ = v_isSharedCheck_3620_;
goto v_resetjp_3614_;
}
v_resetjp_3614_:
{
lean_object* v___x_3618_; 
if (v_isShared_3616_ == 0)
{
v___x_3618_ = v___x_3615_;
goto v_reusejp_3617_;
}
else
{
lean_object* v_reuseFailAlloc_3619_; 
v_reuseFailAlloc_3619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3619_, 0, v_a_3613_);
v___x_3618_ = v_reuseFailAlloc_3619_;
goto v_reusejp_3617_;
}
v_reusejp_3617_:
{
return v___x_3618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0___boxed(lean_object* v_mvarId_3621_, lean_object* v___x_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_, lean_object* v___y_3625_, lean_object* v___y_3626_, lean_object* v___y_3627_){
_start:
{
lean_object* v_res_3628_; 
v_res_3628_ = l_Lean_MVarId_subsingletonElim___lam__0(v_mvarId_3621_, v___x_3622_, v___y_3623_, v___y_3624_, v___y_3625_, v___y_3626_);
lean_dec(v___y_3626_);
lean_dec_ref(v___y_3625_);
lean_dec(v___y_3624_);
lean_dec_ref(v___y_3623_);
return v_res_3628_;
}
}
static lean_object* _init_l_Lean_MVarId_subsingletonElim___closed__0(void){
_start:
{
lean_object* v___x_3629_; 
v___x_3629_ = lean_mk_string_unchecked("subsingletonElim", 16, 16);
return v___x_3629_;
}
}
static lean_object* _init_l_Lean_MVarId_subsingletonElim___closed__1(void){
_start:
{
lean_object* v___x_3630_; lean_object* v___x_3631_; 
v___x_3630_ = lean_obj_once(&l_Lean_MVarId_subsingletonElim___closed__0, &l_Lean_MVarId_subsingletonElim___closed__0_once, _init_l_Lean_MVarId_subsingletonElim___closed__0);
v___x_3631_ = l_Lean_Name_mkStr1(v___x_3630_);
return v___x_3631_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim(lean_object* v_mvarId_3632_, lean_object* v_a_3633_, lean_object* v_a_3634_, lean_object* v_a_3635_, lean_object* v_a_3636_){
_start:
{
lean_object* v___x_3638_; lean_object* v___f_3639_; lean_object* v___f_3640_; lean_object* v___x_3641_; 
v___x_3638_ = lean_obj_once(&l_Lean_MVarId_subsingletonElim___closed__1, &l_Lean_MVarId_subsingletonElim___closed__1_once, _init_l_Lean_MVarId_subsingletonElim___closed__1);
lean_inc(v_mvarId_3632_);
v___f_3639_ = lean_alloc_closure((void*)(l_Lean_MVarId_subsingletonElim___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3639_, 0, v_mvarId_3632_);
lean_closure_set(v___f_3639_, 1, v___x_3638_);
v___f_3640_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3640_, 0, v___f_3639_);
v___x_3641_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_3632_, v___f_3640_, v_a_3633_, v_a_3634_, v_a_3635_, v_a_3636_);
return v___x_3641_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___boxed(lean_object* v_mvarId_3642_, lean_object* v_a_3643_, lean_object* v_a_3644_, lean_object* v_a_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_){
_start:
{
lean_object* v_res_3648_; 
v_res_3648_ = l_Lean_MVarId_subsingletonElim(v_mvarId_3642_, v_a_3643_, v_a_3644_, v_a_3645_, v_a_3646_);
lean_dec(v_a_3646_);
lean_dec_ref(v_a_3645_);
lean_dec(v_a_3644_);
lean_dec_ref(v_a_3643_);
return v_res_3648_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Apply(builtin);
}
#ifdef __cplusplus
}
#endif
