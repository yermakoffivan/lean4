// Lean compiler output
// Module: Lean.Meta.Tactic.Delta
// Imports: public import Lean.Meta.Tactic.Replace import Lean.Meta.Transform
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
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_ST_Prim_Ref_get___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_IO_CancelToken_isSet(lean_object*);
extern lean_object* l_Lean_interruptExceptionId;
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
uint8_t l_Lean_ConstantInfo_hasValue(lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_levelParams(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Core_instantiateValueLevelParams(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_ST_Prim_mkRef___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_change(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_changeLocalDecl(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_delta_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_delta_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg();
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__2;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__0;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__1;
static lean_once_cell_t l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_deltaExpand___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_deltaExpand___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaTarget___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaTarget___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_deltaTarget___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_deltaTarget___closed__0;
static lean_once_cell_t l_Lean_MVarId_deltaTarget___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_deltaTarget___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaTarget(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaTarget___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaLocalDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaLocalDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaLocalDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_delta_x3f(lean_object* v_e_1_, lean_object* v_p_2_, uint8_t v_allowOpaque_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lean_Expr_getAppFn(v_e_1_);
if (lean_obj_tag(v___x_10_) == 4)
{
lean_object* v_declName_11_; lean_object* v_us_12_; lean_object* v___x_13_; lean_object* v_env_17_; uint8_t v___x_18_; lean_object* v___x_19_; 
v_declName_11_ = lean_ctor_get(v___x_10_, 0);
lean_inc(v_declName_11_);
v_us_12_ = lean_ctor_get(v___x_10_, 1);
lean_inc(v_us_12_);
lean_dec_ref(v___x_10_);
v___x_13_ = lean_st_ref_get(v_a_5_);
v_env_17_ = lean_ctor_get(v___x_13_, 0);
lean_inc_ref(v_env_17_);
lean_dec(v___x_13_);
v___x_18_ = 0;
v___x_19_ = l_Lean_Environment_find_x3f(v_env_17_, v_declName_11_, v___x_18_);
if (lean_obj_tag(v___x_19_) == 0)
{
lean_dec(v_us_12_);
lean_dec_ref(v_p_2_);
lean_dec_ref(v_e_1_);
goto v___jp_7_;
}
else
{
lean_object* v_val_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_56_; 
v_val_20_ = lean_ctor_get(v___x_19_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_19_);
if (v_isSharedCheck_56_ == 0)
{
v___x_22_ = v___x_19_;
v_isShared_23_ = v_isSharedCheck_56_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_val_20_);
lean_dec(v___x_19_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_56_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
lean_object* v___x_24_; lean_object* v___x_25_; uint8_t v___x_26_; 
v___x_24_ = l_Lean_ConstantInfo_name(v_val_20_);
v___x_25_ = lean_apply_1(v_p_2_, v___x_24_);
v___x_26_ = lean_unbox(v___x_25_);
if (v___x_26_ == 0)
{
lean_del_object(v___x_22_);
lean_dec(v_val_20_);
lean_dec(v_us_12_);
lean_dec_ref(v_e_1_);
goto v___jp_14_;
}
else
{
uint8_t v___x_27_; 
v___x_27_ = l_Lean_ConstantInfo_hasValue(v_val_20_, v_allowOpaque_3_);
if (v___x_27_ == 0)
{
lean_del_object(v___x_22_);
lean_dec(v_val_20_);
lean_dec(v_us_12_);
lean_dec_ref(v_e_1_);
goto v___jp_14_;
}
else
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_28_ = l_Lean_ConstantInfo_levelParams(v_val_20_);
v___x_29_ = l_List_lengthTR___redArg(v___x_28_);
lean_dec(v___x_28_);
v___x_30_ = l_List_lengthTR___redArg(v_us_12_);
v___x_31_ = lean_nat_dec_eq(v___x_29_, v___x_30_);
lean_dec(v___x_30_);
lean_dec(v___x_29_);
if (v___x_31_ == 0)
{
lean_del_object(v___x_22_);
lean_dec(v_val_20_);
lean_dec(v_us_12_);
lean_dec_ref(v_e_1_);
goto v___jp_14_;
}
else
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Core_instantiateValueLevelParams(v_val_20_, v_us_12_, v_allowOpaque_3_, v_a_4_, v_a_5_);
lean_dec(v_val_20_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_a_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_47_; 
v_a_33_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_47_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_47_ == 0)
{
v___x_35_ = v___x_32_;
v_isShared_36_ = v_isSharedCheck_47_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_a_33_);
lean_dec(v___x_32_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_47_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_42_; 
v___x_37_ = l_Lean_Expr_getAppNumArgs(v_e_1_);
v___x_38_ = lean_mk_empty_array_with_capacity(v___x_37_);
lean_dec(v___x_37_);
v___x_39_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_1_, v___x_38_);
v___x_40_ = l_Lean_Expr_betaRev(v_a_33_, v___x_39_, v___x_27_, v___x_18_);
lean_dec_ref(v___x_39_);
if (v_isShared_23_ == 0)
{
lean_ctor_set(v___x_22_, 0, v___x_40_);
v___x_42_ = v___x_22_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_46_; 
v_reuseFailAlloc_46_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_46_, 0, v___x_40_);
v___x_42_ = v_reuseFailAlloc_46_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
lean_object* v___x_44_; 
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 0, v___x_42_);
v___x_44_ = v___x_35_;
goto v_reusejp_43_;
}
else
{
lean_object* v_reuseFailAlloc_45_; 
v_reuseFailAlloc_45_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_45_, 0, v___x_42_);
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
else
{
lean_object* v_a_48_; lean_object* v___x_50_; uint8_t v_isShared_51_; uint8_t v_isSharedCheck_55_; 
lean_del_object(v___x_22_);
lean_dec_ref(v_e_1_);
v_a_48_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_55_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_55_ == 0)
{
v___x_50_ = v___x_32_;
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
else
{
lean_inc(v_a_48_);
lean_dec(v___x_32_);
v___x_50_ = lean_box(0);
v_isShared_51_ = v_isSharedCheck_55_;
goto v_resetjp_49_;
}
v_resetjp_49_:
{
lean_object* v___x_53_; 
if (v_isShared_51_ == 0)
{
v___x_53_ = v___x_50_;
goto v_reusejp_52_;
}
else
{
lean_object* v_reuseFailAlloc_54_; 
v_reuseFailAlloc_54_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_54_, 0, v_a_48_);
v___x_53_ = v_reuseFailAlloc_54_;
goto v_reusejp_52_;
}
v_reusejp_52_:
{
return v___x_53_;
}
}
}
}
}
}
}
}
v___jp_14_:
{
lean_object* v___x_15_; lean_object* v___x_16_; 
v___x_15_ = lean_box(0);
v___x_16_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_16_, 0, v___x_15_);
return v___x_16_;
}
}
else
{
lean_dec_ref(v___x_10_);
lean_dec_ref(v_p_2_);
lean_dec_ref(v_e_1_);
goto v___jp_7_;
}
v___jp_7_:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = lean_box(0);
v___x_9_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_delta_x3f___boxed(lean_object* v_e_57_, lean_object* v_p_58_, lean_object* v_allowOpaque_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_){
_start:
{
uint8_t v_allowOpaque_boxed_63_; lean_object* v_res_64_; 
v_allowOpaque_boxed_63_ = lean_unbox(v_allowOpaque_59_);
v_res_64_ = l_Lean_Meta_delta_x3f(v_e_57_, v_p_58_, v_allowOpaque_boxed_63_, v_a_60_, v_a_61_);
lean_dec(v_a_61_);
lean_dec_ref(v_a_60_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand___lam__0(lean_object* v_p_65_, uint8_t v_allowOpaque_66_, lean_object* v_e_67_, lean_object* v___y_68_, lean_object* v___y_69_){
_start:
{
lean_object* v___x_71_; 
v___x_71_ = l_Lean_Meta_delta_x3f(v_e_67_, v_p_65_, v_allowOpaque_66_, v___y_68_, v___y_69_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; lean_object* v___x_74_; uint8_t v_isShared_75_; uint8_t v_isSharedCheck_91_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_91_ == 0)
{
v___x_74_ = v___x_71_;
v_isShared_75_ = v_isSharedCheck_91_;
goto v_resetjp_73_;
}
else
{
lean_inc(v_a_72_);
lean_dec(v___x_71_);
v___x_74_ = lean_box(0);
v_isShared_75_ = v_isSharedCheck_91_;
goto v_resetjp_73_;
}
v_resetjp_73_:
{
if (lean_obj_tag(v_a_72_) == 0)
{
lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_76_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_76_, 0, v_a_72_);
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 0, v___x_76_);
v___x_78_ = v___x_74_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_76_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
else
{
lean_object* v_val_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_90_; 
v_val_80_ = lean_ctor_get(v_a_72_, 0);
v_isSharedCheck_90_ = !lean_is_exclusive(v_a_72_);
if (v_isSharedCheck_90_ == 0)
{
v___x_82_ = v_a_72_;
v_isShared_83_ = v_isSharedCheck_90_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_val_80_);
lean_dec(v_a_72_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_90_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___x_85_; 
if (v_isShared_83_ == 0)
{
v___x_85_ = v___x_82_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_val_80_);
v___x_85_ = v_reuseFailAlloc_89_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
lean_object* v___x_87_; 
if (v_isShared_75_ == 0)
{
lean_ctor_set(v___x_74_, 0, v___x_85_);
v___x_87_ = v___x_74_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v___x_85_);
v___x_87_ = v_reuseFailAlloc_88_;
goto v_reusejp_86_;
}
v_reusejp_86_:
{
return v___x_87_;
}
}
}
}
}
}
else
{
lean_object* v_a_92_; lean_object* v___x_94_; uint8_t v_isShared_95_; uint8_t v_isSharedCheck_99_; 
v_a_92_ = lean_ctor_get(v___x_71_, 0);
v_isSharedCheck_99_ = !lean_is_exclusive(v___x_71_);
if (v_isSharedCheck_99_ == 0)
{
v___x_94_ = v___x_71_;
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
else
{
lean_inc(v_a_92_);
lean_dec(v___x_71_);
v___x_94_ = lean_box(0);
v_isShared_95_ = v_isSharedCheck_99_;
goto v_resetjp_93_;
}
v_resetjp_93_:
{
lean_object* v___x_97_; 
if (v_isShared_95_ == 0)
{
v___x_97_ = v___x_94_;
goto v_reusejp_96_;
}
else
{
lean_object* v_reuseFailAlloc_98_; 
v_reuseFailAlloc_98_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_98_, 0, v_a_92_);
v___x_97_ = v_reuseFailAlloc_98_;
goto v_reusejp_96_;
}
v_reusejp_96_:
{
return v___x_97_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand___lam__0___boxed(lean_object* v_p_100_, lean_object* v_allowOpaque_101_, lean_object* v_e_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
uint8_t v_allowOpaque_boxed_106_; lean_object* v_res_107_; 
v_allowOpaque_boxed_106_ = lean_unbox(v_allowOpaque_101_);
v_res_107_ = l_Lean_Meta_deltaExpand___lam__0(v_p_100_, v_allowOpaque_boxed_106_, v_e_102_, v___y_103_, v___y_104_);
lean_dec(v___y_104_);
lean_dec_ref(v___y_103_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand___lam__1(lean_object* v_e_108_, lean_object* v___y_109_, lean_object* v___y_110_){
_start:
{
lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_112_, 0, v_e_108_);
v___x_113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_113_, 0, v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand___lam__1___boxed(lean_object* v_e_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l_Lean_Meta_deltaExpand___lam__1(v_e_114_, v___y_115_, v___y_116_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__12___redArg(lean_object* v_a_119_, lean_object* v_b_120_, lean_object* v_x_121_){
_start:
{
if (lean_obj_tag(v_x_121_) == 0)
{
lean_dec(v_b_120_);
lean_dec_ref(v_a_119_);
return v_x_121_;
}
else
{
lean_object* v_key_122_; lean_object* v_value_123_; lean_object* v_tail_124_; lean_object* v___x_126_; uint8_t v_isShared_127_; uint8_t v_isSharedCheck_136_; 
v_key_122_ = lean_ctor_get(v_x_121_, 0);
v_value_123_ = lean_ctor_get(v_x_121_, 1);
v_tail_124_ = lean_ctor_get(v_x_121_, 2);
v_isSharedCheck_136_ = !lean_is_exclusive(v_x_121_);
if (v_isSharedCheck_136_ == 0)
{
v___x_126_ = v_x_121_;
v_isShared_127_ = v_isSharedCheck_136_;
goto v_resetjp_125_;
}
else
{
lean_inc(v_tail_124_);
lean_inc(v_value_123_);
lean_inc(v_key_122_);
lean_dec(v_x_121_);
v___x_126_ = lean_box(0);
v_isShared_127_ = v_isSharedCheck_136_;
goto v_resetjp_125_;
}
v_resetjp_125_:
{
uint8_t v___x_128_; 
v___x_128_ = l_Lean_ExprStructEq_beq(v_key_122_, v_a_119_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_131_; 
v___x_129_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__12___redArg(v_a_119_, v_b_120_, v_tail_124_);
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 2, v___x_129_);
v___x_131_ = v___x_126_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v_key_122_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v_value_123_);
lean_ctor_set(v_reuseFailAlloc_132_, 2, v___x_129_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
return v___x_131_;
}
}
else
{
lean_object* v___x_134_; 
lean_dec(v_value_123_);
lean_dec(v_key_122_);
if (v_isShared_127_ == 0)
{
lean_ctor_set(v___x_126_, 1, v_b_120_);
lean_ctor_set(v___x_126_, 0, v_a_119_);
v___x_134_ = v___x_126_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_a_119_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v_b_120_);
lean_ctor_set(v_reuseFailAlloc_135_, 2, v_tail_124_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
return v___x_134_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(lean_object* v_x_137_, lean_object* v_x_138_){
_start:
{
if (lean_obj_tag(v_x_138_) == 0)
{
return v_x_137_;
}
else
{
lean_object* v_key_139_; lean_object* v_value_140_; lean_object* v_tail_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_164_; 
v_key_139_ = lean_ctor_get(v_x_138_, 0);
v_value_140_ = lean_ctor_get(v_x_138_, 1);
v_tail_141_ = lean_ctor_get(v_x_138_, 2);
v_isSharedCheck_164_ = !lean_is_exclusive(v_x_138_);
if (v_isSharedCheck_164_ == 0)
{
v___x_143_ = v_x_138_;
v_isShared_144_ = v_isSharedCheck_164_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_tail_141_);
lean_inc(v_value_140_);
lean_inc(v_key_139_);
lean_dec(v_x_138_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_164_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_145_; uint64_t v___x_146_; uint64_t v___x_147_; uint64_t v___x_148_; uint64_t v_fold_149_; uint64_t v___x_150_; uint64_t v___x_151_; uint64_t v___x_152_; size_t v___x_153_; size_t v___x_154_; size_t v___x_155_; size_t v___x_156_; size_t v___x_157_; lean_object* v___x_158_; lean_object* v___x_160_; 
v___x_145_ = lean_array_get_size(v_x_137_);
v___x_146_ = l_Lean_ExprStructEq_hash(v_key_139_);
v___x_147_ = 32ULL;
v___x_148_ = lean_uint64_shift_right(v___x_146_, v___x_147_);
v_fold_149_ = lean_uint64_xor(v___x_146_, v___x_148_);
v___x_150_ = 16ULL;
v___x_151_ = lean_uint64_shift_right(v_fold_149_, v___x_150_);
v___x_152_ = lean_uint64_xor(v_fold_149_, v___x_151_);
v___x_153_ = lean_uint64_to_usize(v___x_152_);
v___x_154_ = lean_usize_of_nat(v___x_145_);
v___x_155_ = ((size_t)1ULL);
v___x_156_ = lean_usize_sub(v___x_154_, v___x_155_);
v___x_157_ = lean_usize_land(v___x_153_, v___x_156_);
v___x_158_ = lean_array_uget_borrowed(v_x_137_, v___x_157_);
lean_inc(v___x_158_);
if (v_isShared_144_ == 0)
{
lean_ctor_set(v___x_143_, 2, v___x_158_);
v___x_160_ = v___x_143_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_key_139_);
lean_ctor_set(v_reuseFailAlloc_163_, 1, v_value_140_);
lean_ctor_set(v_reuseFailAlloc_163_, 2, v___x_158_);
v___x_160_ = v_reuseFailAlloc_163_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
lean_object* v___x_161_; 
v___x_161_ = lean_array_uset(v_x_137_, v___x_157_, v___x_160_);
v_x_137_ = v___x_161_;
v_x_138_ = v_tail_141_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(lean_object* v_i_165_, lean_object* v_source_166_, lean_object* v_target_167_){
_start:
{
lean_object* v___x_168_; uint8_t v___x_169_; 
v___x_168_ = lean_array_get_size(v_source_166_);
v___x_169_ = lean_nat_dec_lt(v_i_165_, v___x_168_);
if (v___x_169_ == 0)
{
lean_dec_ref(v_source_166_);
lean_dec(v_i_165_);
return v_target_167_;
}
else
{
lean_object* v_es_170_; lean_object* v___x_171_; lean_object* v_source_172_; lean_object* v_target_173_; lean_object* v___x_174_; lean_object* v___x_175_; 
v_es_170_ = lean_array_fget(v_source_166_, v_i_165_);
v___x_171_ = lean_box(0);
v_source_172_ = lean_array_fset(v_source_166_, v_i_165_, v___x_171_);
v_target_173_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_target_167_, v_es_170_);
v___x_174_ = lean_unsigned_to_nat(1u);
v___x_175_ = lean_nat_add(v_i_165_, v___x_174_);
lean_dec(v_i_165_);
v_i_165_ = v___x_175_;
v_source_166_ = v_source_172_;
v_target_167_ = v_target_173_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11___redArg(lean_object* v_data_177_){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v_nbuckets_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_178_ = lean_array_get_size(v_data_177_);
v___x_179_ = lean_unsigned_to_nat(2u);
v_nbuckets_180_ = lean_nat_mul(v___x_178_, v___x_179_);
v___x_181_ = lean_unsigned_to_nat(0u);
v___x_182_ = lean_box(0);
v___x_183_ = lean_mk_array(v_nbuckets_180_, v___x_182_);
v___x_184_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v___x_181_, v_data_177_, v___x_183_);
return v___x_184_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10___redArg(lean_object* v_a_185_, lean_object* v_x_186_){
_start:
{
if (lean_obj_tag(v_x_186_) == 0)
{
uint8_t v___x_187_; 
v___x_187_ = 0;
return v___x_187_;
}
else
{
lean_object* v_key_188_; lean_object* v_tail_189_; uint8_t v___x_190_; 
v_key_188_ = lean_ctor_get(v_x_186_, 0);
v_tail_189_ = lean_ctor_get(v_x_186_, 2);
v___x_190_ = l_Lean_ExprStructEq_beq(v_key_188_, v_a_185_);
if (v___x_190_ == 0)
{
v_x_186_ = v_tail_189_;
goto _start;
}
else
{
return v___x_190_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10___redArg___boxed(lean_object* v_a_192_, lean_object* v_x_193_){
_start:
{
uint8_t v_res_194_; lean_object* v_r_195_; 
v_res_194_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10___redArg(v_a_192_, v_x_193_);
lean_dec(v_x_193_);
lean_dec_ref(v_a_192_);
v_r_195_ = lean_box(v_res_194_);
return v_r_195_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6___redArg(lean_object* v_m_196_, lean_object* v_a_197_, lean_object* v_b_198_){
_start:
{
lean_object* v_size_199_; lean_object* v_buckets_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_243_; 
v_size_199_ = lean_ctor_get(v_m_196_, 0);
v_buckets_200_ = lean_ctor_get(v_m_196_, 1);
v_isSharedCheck_243_ = !lean_is_exclusive(v_m_196_);
if (v_isSharedCheck_243_ == 0)
{
v___x_202_ = v_m_196_;
v_isShared_203_ = v_isSharedCheck_243_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_buckets_200_);
lean_inc(v_size_199_);
lean_dec(v_m_196_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_243_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_204_; uint64_t v___x_205_; uint64_t v___x_206_; uint64_t v___x_207_; uint64_t v_fold_208_; uint64_t v___x_209_; uint64_t v___x_210_; uint64_t v___x_211_; size_t v___x_212_; size_t v___x_213_; size_t v___x_214_; size_t v___x_215_; size_t v___x_216_; lean_object* v_bkt_217_; uint8_t v___x_218_; 
v___x_204_ = lean_array_get_size(v_buckets_200_);
v___x_205_ = l_Lean_ExprStructEq_hash(v_a_197_);
v___x_206_ = 32ULL;
v___x_207_ = lean_uint64_shift_right(v___x_205_, v___x_206_);
v_fold_208_ = lean_uint64_xor(v___x_205_, v___x_207_);
v___x_209_ = 16ULL;
v___x_210_ = lean_uint64_shift_right(v_fold_208_, v___x_209_);
v___x_211_ = lean_uint64_xor(v_fold_208_, v___x_210_);
v___x_212_ = lean_uint64_to_usize(v___x_211_);
v___x_213_ = lean_usize_of_nat(v___x_204_);
v___x_214_ = ((size_t)1ULL);
v___x_215_ = lean_usize_sub(v___x_213_, v___x_214_);
v___x_216_ = lean_usize_land(v___x_212_, v___x_215_);
v_bkt_217_ = lean_array_uget_borrowed(v_buckets_200_, v___x_216_);
v___x_218_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10___redArg(v_a_197_, v_bkt_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; lean_object* v_size_x27_220_; lean_object* v___x_221_; lean_object* v_buckets_x27_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
v___x_219_ = lean_unsigned_to_nat(1u);
v_size_x27_220_ = lean_nat_add(v_size_199_, v___x_219_);
lean_dec(v_size_199_);
lean_inc(v_bkt_217_);
v___x_221_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_221_, 0, v_a_197_);
lean_ctor_set(v___x_221_, 1, v_b_198_);
lean_ctor_set(v___x_221_, 2, v_bkt_217_);
v_buckets_x27_222_ = lean_array_uset(v_buckets_200_, v___x_216_, v___x_221_);
v___x_223_ = lean_unsigned_to_nat(4u);
v___x_224_ = lean_nat_mul(v_size_x27_220_, v___x_223_);
v___x_225_ = lean_unsigned_to_nat(3u);
v___x_226_ = lean_nat_div(v___x_224_, v___x_225_);
lean_dec(v___x_224_);
v___x_227_ = lean_array_get_size(v_buckets_x27_222_);
v___x_228_ = lean_nat_dec_le(v___x_226_, v___x_227_);
lean_dec(v___x_226_);
if (v___x_228_ == 0)
{
lean_object* v_val_229_; lean_object* v___x_231_; 
v_val_229_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11___redArg(v_buckets_x27_222_);
if (v_isShared_203_ == 0)
{
lean_ctor_set(v___x_202_, 1, v_val_229_);
lean_ctor_set(v___x_202_, 0, v_size_x27_220_);
v___x_231_ = v___x_202_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_size_x27_220_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v_val_229_);
v___x_231_ = v_reuseFailAlloc_232_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
return v___x_231_;
}
}
else
{
lean_object* v___x_234_; 
if (v_isShared_203_ == 0)
{
lean_ctor_set(v___x_202_, 1, v_buckets_x27_222_);
lean_ctor_set(v___x_202_, 0, v_size_x27_220_);
v___x_234_ = v___x_202_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_size_x27_220_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v_buckets_x27_222_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
else
{
lean_object* v___x_236_; lean_object* v_buckets_x27_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_241_; 
lean_inc(v_bkt_217_);
v___x_236_ = lean_box(0);
v_buckets_x27_237_ = lean_array_uset(v_buckets_200_, v___x_216_, v___x_236_);
v___x_238_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__12___redArg(v_a_197_, v_b_198_, v_bkt_217_);
v___x_239_ = lean_array_uset(v_buckets_x27_237_, v___x_216_, v___x_238_);
if (v_isShared_203_ == 0)
{
lean_ctor_set(v___x_202_, 1, v___x_239_);
v___x_241_ = v___x_202_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_size_199_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v___x_239_);
v___x_241_ = v_reuseFailAlloc_242_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
return v___x_241_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__2(lean_object* v_a_244_, lean_object* v_e_245_, lean_object* v_a_246_){
_start:
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_248_ = lean_st_ref_take(v_a_244_);
v___x_249_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6___redArg(v___x_248_, v_e_245_, v_a_246_);
v___x_250_ = lean_st_ref_set(v_a_244_, v___x_249_);
v___x_251_ = lean_box(0);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__2___boxed(lean_object* v_a_252_, lean_object* v_e_253_, lean_object* v_a_254_, lean_object* v___y_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__2(v_a_252_, v_e_253_, v_a_254_);
lean_dec(v_a_252_);
return v_res_256_;
}
}
static lean_object* _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg___closed__0(void){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_257_ = lean_box(0);
v___x_258_ = l_Lean_interruptExceptionId;
v___x_259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_259_, 0, v___x_258_);
lean_ctor_set(v___x_259_, 1, v___x_257_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg(){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; 
v___x_261_ = lean_obj_once(&l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg___closed__0, &l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg___closed__0_once, _init_l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg___closed__0);
v___x_262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
return v___x_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg___boxed(lean_object* v___y_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg();
return v_res_264_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lean_mk_string_unchecked("runtime", 7, 7);
return v___x_265_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__1(void){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = lean_mk_string_unchecked("maxRecDepth", 11, 11);
return v___x_266_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_267_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__1, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__1_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__1);
v___x_268_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__0, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__0_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__0);
v___x_269_ = l_Lean_Name_mkStr2(v___x_268_, v___x_267_);
return v___x_269_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__3(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; 
v___x_270_ = l_Lean_maxRecDepthErrorMessage;
v___x_271_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_271_, 0, v___x_270_);
return v___x_271_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__4(void){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; 
v___x_272_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__3);
v___x_273_ = l_Lean_MessageData_ofFormat(v___x_272_);
return v___x_273_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__5(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_274_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__4);
v___x_275_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__2, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__2_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__2);
v___x_276_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
lean_ctor_set(v___x_276_, 1, v___x_274_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg(lean_object* v_ref_277_){
_start:
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; 
v___x_279_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___closed__5);
v___x_280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_280_, 0, v_ref_277_);
lean_ctor_set(v___x_280_, 1, v___x_279_);
v___x_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_281_, 0, v___x_280_);
return v___x_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg___boxed(lean_object* v_ref_282_, lean_object* v___y_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_282_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5___redArg(lean_object* v_x_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v___y_291_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; uint8_t v___y_304_; lean_object* v___y_305_; lean_object* v___y_306_; lean_object* v___y_307_; lean_object* v___y_308_; lean_object* v___y_309_; lean_object* v___y_310_; lean_object* v___y_311_; lean_object* v___y_312_; lean_object* v___y_313_; lean_object* v___y_314_; uint8_t v___y_315_; lean_object* v___y_316_; lean_object* v_fileName_321_; lean_object* v_fileMap_322_; lean_object* v_options_323_; lean_object* v_currRecDepth_324_; lean_object* v_maxRecDepth_325_; lean_object* v_ref_326_; lean_object* v_currNamespace_327_; lean_object* v_openDecls_328_; lean_object* v_initHeartbeats_329_; lean_object* v_maxHeartbeats_330_; lean_object* v_quotContext_331_; lean_object* v_currMacroScope_332_; uint8_t v_diag_333_; lean_object* v_cancelTk_x3f_334_; uint8_t v_suppressElabErrors_335_; lean_object* v_inheritedTraceOptions_336_; 
v_fileName_321_ = lean_ctor_get(v___y_287_, 0);
v_fileMap_322_ = lean_ctor_get(v___y_287_, 1);
v_options_323_ = lean_ctor_get(v___y_287_, 2);
v_currRecDepth_324_ = lean_ctor_get(v___y_287_, 3);
v_maxRecDepth_325_ = lean_ctor_get(v___y_287_, 4);
v_ref_326_ = lean_ctor_get(v___y_287_, 5);
v_currNamespace_327_ = lean_ctor_get(v___y_287_, 6);
v_openDecls_328_ = lean_ctor_get(v___y_287_, 7);
v_initHeartbeats_329_ = lean_ctor_get(v___y_287_, 8);
v_maxHeartbeats_330_ = lean_ctor_get(v___y_287_, 9);
v_quotContext_331_ = lean_ctor_get(v___y_287_, 10);
v_currMacroScope_332_ = lean_ctor_get(v___y_287_, 11);
v_diag_333_ = lean_ctor_get_uint8(v___y_287_, sizeof(void*)*14);
v_cancelTk_x3f_334_ = lean_ctor_get(v___y_287_, 12);
v_suppressElabErrors_335_ = lean_ctor_get_uint8(v___y_287_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_336_ = lean_ctor_get(v___y_287_, 13);
if (lean_obj_tag(v_cancelTk_x3f_334_) == 1)
{
lean_object* v_val_342_; uint8_t v___x_343_; 
v_val_342_ = lean_ctor_get(v_cancelTk_x3f_334_, 0);
v___x_343_ = l_IO_CancelToken_isSet(v_val_342_);
if (v___x_343_ == 0)
{
goto v___jp_337_;
}
else
{
lean_object* v___x_344_; lean_object* v_a_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_352_; 
lean_dec_ref(v_x_285_);
v___x_344_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg();
v_a_345_ = lean_ctor_get(v___x_344_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_344_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_344_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_344_);
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
else
{
goto v___jp_337_;
}
v___jp_290_:
{
if (lean_obj_tag(v___y_291_) == 0)
{
return v___y_291_;
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
v_a_292_ = lean_ctor_get(v___y_291_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___y_291_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___y_291_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___y_291_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_297_; 
if (v_isShared_295_ == 0)
{
v___x_297_ = v___x_294_;
goto v_reusejp_296_;
}
else
{
lean_object* v_reuseFailAlloc_298_; 
v_reuseFailAlloc_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_298_, 0, v_a_292_);
v___x_297_ = v_reuseFailAlloc_298_;
goto v_reusejp_296_;
}
v_reusejp_296_:
{
return v___x_297_;
}
}
}
}
v___jp_300_:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_317_ = lean_unsigned_to_nat(1u);
v___x_318_ = lean_nat_add(v___y_310_, v___x_317_);
lean_inc_ref(v___y_313_);
lean_inc(v___y_314_);
lean_inc(v___y_311_);
lean_inc(v___y_308_);
lean_inc(v___y_312_);
lean_inc(v___y_303_);
lean_inc(v___y_307_);
lean_inc(v___y_302_);
lean_inc(v___y_306_);
lean_inc_ref(v___y_305_);
lean_inc_ref(v___y_309_);
lean_inc_ref(v___y_301_);
v___x_319_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_319_, 0, v___y_301_);
lean_ctor_set(v___x_319_, 1, v___y_309_);
lean_ctor_set(v___x_319_, 2, v___y_305_);
lean_ctor_set(v___x_319_, 3, v___x_318_);
lean_ctor_set(v___x_319_, 4, v___y_306_);
lean_ctor_set(v___x_319_, 5, v___y_316_);
lean_ctor_set(v___x_319_, 6, v___y_302_);
lean_ctor_set(v___x_319_, 7, v___y_307_);
lean_ctor_set(v___x_319_, 8, v___y_303_);
lean_ctor_set(v___x_319_, 9, v___y_312_);
lean_ctor_set(v___x_319_, 10, v___y_308_);
lean_ctor_set(v___x_319_, 11, v___y_311_);
lean_ctor_set(v___x_319_, 12, v___y_314_);
lean_ctor_set(v___x_319_, 13, v___y_313_);
lean_ctor_set_uint8(v___x_319_, sizeof(void*)*14, v___y_315_);
lean_ctor_set_uint8(v___x_319_, sizeof(void*)*14 + 1, v___y_304_);
lean_inc(v___y_288_);
lean_inc(v___y_286_);
v___x_320_ = lean_apply_4(v_x_285_, v___y_286_, v___x_319_, v___y_288_, lean_box(0));
v___y_291_ = v___x_320_;
goto v___jp_290_;
}
v___jp_337_:
{
lean_object* v___x_338_; uint8_t v___x_339_; 
v___x_338_ = lean_unsigned_to_nat(0u);
v___x_339_ = lean_nat_dec_eq(v_maxRecDepth_325_, v___x_338_);
if (v___x_339_ == 0)
{
uint8_t v___x_340_; 
v___x_340_ = lean_nat_dec_eq(v_currRecDepth_324_, v_maxRecDepth_325_);
if (v___x_340_ == 0)
{
lean_inc(v_ref_326_);
v___y_301_ = v_fileName_321_;
v___y_302_ = v_currNamespace_327_;
v___y_303_ = v_initHeartbeats_329_;
v___y_304_ = v_suppressElabErrors_335_;
v___y_305_ = v_options_323_;
v___y_306_ = v_maxRecDepth_325_;
v___y_307_ = v_openDecls_328_;
v___y_308_ = v_quotContext_331_;
v___y_309_ = v_fileMap_322_;
v___y_310_ = v_currRecDepth_324_;
v___y_311_ = v_currMacroScope_332_;
v___y_312_ = v_maxHeartbeats_330_;
v___y_313_ = v_inheritedTraceOptions_336_;
v___y_314_ = v_cancelTk_x3f_334_;
v___y_315_ = v_diag_333_;
v___y_316_ = v_ref_326_;
goto v___jp_300_;
}
else
{
lean_object* v___x_341_; 
lean_dec_ref(v_x_285_);
lean_inc(v_ref_326_);
v___x_341_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_326_);
v___y_291_ = v___x_341_;
goto v___jp_290_;
}
}
else
{
lean_inc(v_ref_326_);
v___y_301_ = v_fileName_321_;
v___y_302_ = v_currNamespace_327_;
v___y_303_ = v_initHeartbeats_329_;
v___y_304_ = v_suppressElabErrors_335_;
v___y_305_ = v_options_323_;
v___y_306_ = v_maxRecDepth_325_;
v___y_307_ = v_openDecls_328_;
v___y_308_ = v_quotContext_331_;
v___y_309_ = v_fileMap_322_;
v___y_310_ = v_currRecDepth_324_;
v___y_311_ = v_currMacroScope_332_;
v___y_312_ = v_maxHeartbeats_330_;
v___y_313_ = v_inheritedTraceOptions_336_;
v___y_314_ = v_cancelTk_x3f_334_;
v___y_315_ = v_diag_333_;
v___y_316_ = v_ref_326_;
goto v___jp_300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_x_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5___redArg(v_x_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_a_359_, lean_object* v_x_360_){
_start:
{
if (lean_obj_tag(v_x_360_) == 0)
{
lean_object* v___x_361_; 
v___x_361_ = lean_box(0);
return v___x_361_;
}
else
{
lean_object* v_key_362_; lean_object* v_value_363_; lean_object* v_tail_364_; uint8_t v___x_365_; 
v_key_362_ = lean_ctor_get(v_x_360_, 0);
v_value_363_ = lean_ctor_get(v_x_360_, 1);
v_tail_364_ = lean_ctor_get(v_x_360_, 2);
v___x_365_ = l_Lean_ExprStructEq_beq(v_key_362_, v_a_359_);
if (v___x_365_ == 0)
{
v_x_360_ = v_tail_364_;
goto _start;
}
else
{
lean_object* v___x_367_; 
lean_inc(v_value_363_);
v___x_367_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_367_, 0, v_value_363_);
return v___x_367_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4___redArg___boxed(lean_object* v_a_368_, lean_object* v_x_369_){
_start:
{
lean_object* v_res_370_; 
v_res_370_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4___redArg(v_a_368_, v_x_369_);
lean_dec(v_x_369_);
lean_dec_ref(v_a_368_);
return v_res_370_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3___redArg(lean_object* v_m_371_, lean_object* v_a_372_){
_start:
{
lean_object* v_buckets_373_; lean_object* v___x_374_; uint64_t v___x_375_; uint64_t v___x_376_; uint64_t v___x_377_; uint64_t v_fold_378_; uint64_t v___x_379_; uint64_t v___x_380_; uint64_t v___x_381_; size_t v___x_382_; size_t v___x_383_; size_t v___x_384_; size_t v___x_385_; size_t v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v_buckets_373_ = lean_ctor_get(v_m_371_, 1);
v___x_374_ = lean_array_get_size(v_buckets_373_);
v___x_375_ = l_Lean_ExprStructEq_hash(v_a_372_);
v___x_376_ = 32ULL;
v___x_377_ = lean_uint64_shift_right(v___x_375_, v___x_376_);
v_fold_378_ = lean_uint64_xor(v___x_375_, v___x_377_);
v___x_379_ = 16ULL;
v___x_380_ = lean_uint64_shift_right(v_fold_378_, v___x_379_);
v___x_381_ = lean_uint64_xor(v_fold_378_, v___x_380_);
v___x_382_ = lean_uint64_to_usize(v___x_381_);
v___x_383_ = lean_usize_of_nat(v___x_374_);
v___x_384_ = ((size_t)1ULL);
v___x_385_ = lean_usize_sub(v___x_383_, v___x_384_);
v___x_386_ = lean_usize_land(v___x_382_, v___x_385_);
v___x_387_ = lean_array_uget_borrowed(v_buckets_373_, v___x_386_);
v___x_388_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4___redArg(v_a_372_, v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_m_389_, lean_object* v_a_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3___redArg(v_m_389_, v_a_390_);
lean_dec_ref(v_a_390_);
lean_dec_ref(v_m_389_);
return v_res_391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__0(lean_object* v_00_u03b1_392_, lean_object* v_x_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_397_ = lean_st_ref_get(v___y_395_);
lean_dec(v___x_397_);
v___x_398_ = lean_apply_1(v_x_393_, lean_box(0));
v___x_399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__0___boxed(lean_object* v_00_u03b1_400_, lean_object* v_x_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__0(v_00_u03b1_400_, v_x_401_, v___y_402_, v___y_403_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
return v_res_405_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_406_; 
v___x_406_ = lean_mk_string_unchecked("transform", 9, 9);
return v___x_406_;
}
}
static lean_object* _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1___closed__0(void){
_start:
{
lean_object* v___x_407_; lean_object* v_dummy_408_; 
v___x_407_ = lean_box(0);
v_dummy_408_ = l_Lean_Expr_sort___override(v___x_407_);
return v_dummy_408_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__1(lean_object* v_pre_409_, lean_object* v_post_410_, size_t v_sz_411_, size_t v_i_412_, lean_object* v_bs_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_){
_start:
{
uint8_t v___x_418_; 
v___x_418_ = lean_usize_dec_lt(v_i_412_, v_sz_411_);
if (v___x_418_ == 0)
{
lean_object* v___x_419_; 
lean_dec_ref(v_post_410_);
lean_dec_ref(v_pre_409_);
v___x_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_419_, 0, v_bs_413_);
return v___x_419_;
}
else
{
lean_object* v_v_420_; lean_object* v___x_421_; 
v_v_420_ = lean_array_uget_borrowed(v_bs_413_, v_i_412_);
lean_inc(v_v_420_);
lean_inc_ref(v_post_410_);
lean_inc_ref(v_pre_409_);
v___x_421_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_409_, v_post_410_, v_v_420_, v___y_414_, v___y_415_, v___y_416_);
if (lean_obj_tag(v___x_421_) == 0)
{
lean_object* v_a_422_; lean_object* v___x_423_; lean_object* v_bs_x27_424_; size_t v___x_425_; size_t v___x_426_; lean_object* v___x_427_; 
v_a_422_ = lean_ctor_get(v___x_421_, 0);
lean_inc(v_a_422_);
lean_dec_ref(v___x_421_);
v___x_423_ = lean_unsigned_to_nat(0u);
v_bs_x27_424_ = lean_array_uset(v_bs_413_, v_i_412_, v___x_423_);
v___x_425_ = ((size_t)1ULL);
v___x_426_ = lean_usize_add(v_i_412_, v___x_425_);
v___x_427_ = lean_array_uset(v_bs_x27_424_, v_i_412_, v_a_422_);
v_i_412_ = v___x_426_;
v_bs_413_ = v___x_427_;
goto _start;
}
else
{
lean_object* v_a_429_; lean_object* v___x_431_; uint8_t v_isShared_432_; uint8_t v_isSharedCheck_436_; 
lean_dec_ref(v_bs_413_);
lean_dec_ref(v_post_410_);
lean_dec_ref(v_pre_409_);
v_a_429_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_436_ == 0)
{
v___x_431_ = v___x_421_;
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
else
{
lean_inc(v_a_429_);
lean_dec(v___x_421_);
v___x_431_ = lean_box(0);
v_isShared_432_ = v_isSharedCheck_436_;
goto v_resetjp_430_;
}
v_resetjp_430_:
{
lean_object* v___x_434_; 
if (v_isShared_432_ == 0)
{
v___x_434_ = v___x_431_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_429_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__4(lean_object* v_pre_437_, lean_object* v_post_438_, lean_object* v_x_439_, lean_object* v_x_440_, lean_object* v_x_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
if (lean_obj_tag(v_x_439_) == 5)
{
lean_object* v_fn_446_; lean_object* v_arg_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_fn_446_ = lean_ctor_get(v_x_439_, 0);
lean_inc_ref(v_fn_446_);
v_arg_447_ = lean_ctor_get(v_x_439_, 1);
lean_inc_ref(v_arg_447_);
lean_dec_ref(v_x_439_);
v___x_448_ = lean_array_set(v_x_440_, v_x_441_, v_arg_447_);
v___x_449_ = lean_unsigned_to_nat(1u);
v___x_450_ = lean_nat_sub(v_x_441_, v___x_449_);
lean_dec(v_x_441_);
v_x_439_ = v_fn_446_;
v_x_440_ = v___x_448_;
v_x_441_ = v___x_450_;
goto _start;
}
else
{
lean_object* v___x_452_; 
lean_dec(v_x_441_);
lean_inc_ref(v_post_438_);
lean_inc_ref(v_pre_437_);
v___x_452_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_437_, v_post_438_, v_x_439_, v___y_442_, v___y_443_, v___y_444_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_object* v_a_453_; size_t v_sz_454_; size_t v___x_455_; lean_object* v___x_456_; 
v_a_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_a_453_);
lean_dec_ref(v___x_452_);
v_sz_454_ = lean_array_size(v_x_440_);
v___x_455_ = ((size_t)0ULL);
lean_inc_ref(v_post_438_);
lean_inc_ref(v_pre_437_);
v___x_456_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__1(v_pre_437_, v_post_438_, v_sz_454_, v___x_455_, v_x_440_, v___y_442_, v___y_443_, v___y_444_);
if (lean_obj_tag(v___x_456_) == 0)
{
lean_object* v_a_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v_a_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_a_457_);
lean_dec_ref(v___x_456_);
v___x_458_ = l_Lean_mkAppN(v_a_453_, v_a_457_);
lean_dec(v_a_457_);
v___x_459_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_437_, v_post_438_, v___x_458_, v___y_442_, v___y_443_, v___y_444_);
return v___x_459_;
}
else
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_467_; 
lean_dec(v_a_453_);
lean_dec_ref(v_post_438_);
lean_dec_ref(v_pre_437_);
v_a_460_ = lean_ctor_get(v___x_456_, 0);
v_isSharedCheck_467_ = !lean_is_exclusive(v___x_456_);
if (v_isSharedCheck_467_ == 0)
{
v___x_462_ = v___x_456_;
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_456_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_467_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v___x_465_; 
if (v_isShared_463_ == 0)
{
v___x_465_ = v___x_462_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_a_460_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
}
}
else
{
lean_dec_ref(v_x_440_);
lean_dec_ref(v_post_438_);
lean_dec_ref(v_pre_437_);
return v___x_452_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1(lean_object* v___x_468_, lean_object* v_pre_469_, lean_object* v_e_470_, lean_object* v_post_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_){
_start:
{
lean_object* v___y_477_; lean_object* v___y_478_; uint8_t v___y_479_; lean_object* v___y_480_; lean_object* v___y_481_; lean_object* v___y_482_; lean_object* v___y_483_; uint8_t v___y_484_; lean_object* v___y_494_; lean_object* v___y_495_; lean_object* v___y_496_; lean_object* v___y_497_; uint8_t v___y_498_; uint8_t v___y_499_; lean_object* v___y_507_; uint8_t v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; uint8_t v___y_512_; lean_object* v___x_519_; 
v___x_519_ = l_Lean_Core_checkSystem(v___x_468_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v___x_520_; 
lean_dec_ref(v___x_519_);
lean_inc_ref(v_pre_469_);
lean_inc(v___y_474_);
lean_inc_ref(v___y_473_);
lean_inc_ref(v_e_470_);
v___x_520_ = lean_apply_4(v_pre_469_, v_e_470_, v___y_473_, v___y_474_, lean_box(0));
if (lean_obj_tag(v___x_520_) == 0)
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_610_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_610_ == 0)
{
v___x_523_ = v___x_520_;
v_isShared_524_ = v_isSharedCheck_610_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_610_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___y_526_; 
switch(lean_obj_tag(v_a_521_))
{
case 0:
{
lean_object* v_e_600_; lean_object* v___x_602_; 
lean_dec_ref(v_post_471_);
lean_dec_ref(v_e_470_);
lean_dec_ref(v_pre_469_);
v_e_600_ = lean_ctor_get(v_a_521_, 0);
lean_inc_ref(v_e_600_);
lean_dec_ref(v_a_521_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v_e_600_);
v___x_602_ = v___x_523_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_e_600_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
case 1:
{
lean_object* v_e_604_; lean_object* v___x_605_; 
lean_del_object(v___x_523_);
lean_dec_ref(v_e_470_);
v_e_604_ = lean_ctor_get(v_a_521_, 0);
lean_inc_ref(v_e_604_);
lean_dec_ref(v_a_521_);
lean_inc_ref(v_post_471_);
lean_inc_ref(v_pre_469_);
v___x_605_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_469_, v_post_471_, v_e_604_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v_a_606_; lean_object* v___x_607_; 
v_a_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_a_606_);
lean_dec_ref(v___x_605_);
v___x_607_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v_a_606_, v___y_472_, v___y_473_, v___y_474_);
return v___x_607_;
}
else
{
lean_dec_ref(v_post_471_);
lean_dec_ref(v_pre_469_);
return v___x_605_;
}
}
default: 
{
lean_object* v_e_x3f_608_; 
lean_del_object(v___x_523_);
v_e_x3f_608_ = lean_ctor_get(v_a_521_, 0);
lean_inc(v_e_x3f_608_);
lean_dec_ref(v_a_521_);
if (lean_obj_tag(v_e_x3f_608_) == 0)
{
v___y_526_ = v_e_470_;
goto v___jp_525_;
}
else
{
lean_object* v_val_609_; 
lean_dec_ref(v_e_470_);
v_val_609_ = lean_ctor_get(v_e_x3f_608_, 0);
lean_inc(v_val_609_);
lean_dec_ref(v_e_x3f_608_);
v___y_526_ = v_val_609_;
goto v___jp_525_;
}
}
}
v___jp_525_:
{
switch(lean_obj_tag(v___y_526_))
{
case 7:
{
lean_object* v_binderName_527_; lean_object* v_binderType_528_; lean_object* v_body_529_; uint8_t v_binderInfo_530_; lean_object* v___x_531_; 
v_binderName_527_ = lean_ctor_get(v___y_526_, 0);
lean_inc(v_binderName_527_);
v_binderType_528_ = lean_ctor_get(v___y_526_, 1);
v_body_529_ = lean_ctor_get(v___y_526_, 2);
v_binderInfo_530_ = lean_ctor_get_uint8(v___y_526_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_528_);
lean_inc_ref(v_post_471_);
lean_inc_ref(v_pre_469_);
v___x_531_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_469_, v_post_471_, v_binderType_528_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_533_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_a_532_);
lean_dec_ref(v___x_531_);
lean_inc_ref(v_body_529_);
lean_inc_ref(v_post_471_);
lean_inc_ref(v_pre_469_);
v___x_533_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_469_, v_post_471_, v_body_529_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_533_) == 0)
{
lean_object* v_a_534_; size_t v___x_535_; size_t v___x_536_; uint8_t v___x_537_; 
v_a_534_ = lean_ctor_get(v___x_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref(v___x_533_);
v___x_535_ = lean_ptr_addr(v_binderType_528_);
v___x_536_ = lean_ptr_addr(v_a_532_);
v___x_537_ = lean_usize_dec_eq(v___x_535_, v___x_536_);
if (v___x_537_ == 0)
{
v___y_507_ = v___y_526_;
v___y_508_ = v_binderInfo_530_;
v___y_509_ = v_a_534_;
v___y_510_ = v_a_532_;
v___y_511_ = v_binderName_527_;
v___y_512_ = v___x_537_;
goto v___jp_506_;
}
else
{
size_t v___x_538_; size_t v___x_539_; uint8_t v___x_540_; 
v___x_538_ = lean_ptr_addr(v_body_529_);
v___x_539_ = lean_ptr_addr(v_a_534_);
v___x_540_ = lean_usize_dec_eq(v___x_538_, v___x_539_);
v___y_507_ = v___y_526_;
v___y_508_ = v_binderInfo_530_;
v___y_509_ = v_a_534_;
v___y_510_ = v_a_532_;
v___y_511_ = v_binderName_527_;
v___y_512_ = v___x_540_;
goto v___jp_506_;
}
}
else
{
lean_dec(v_a_532_);
lean_dec_ref(v___y_526_);
lean_dec(v_binderName_527_);
lean_dec_ref(v_post_471_);
lean_dec_ref(v_pre_469_);
return v___x_533_;
}
}
else
{
lean_dec_ref(v___y_526_);
lean_dec(v_binderName_527_);
lean_dec_ref(v_post_471_);
lean_dec_ref(v_pre_469_);
return v___x_531_;
}
}
case 6:
{
lean_object* v_binderName_541_; lean_object* v_binderType_542_; lean_object* v_body_543_; uint8_t v_binderInfo_544_; lean_object* v___x_545_; 
v_binderName_541_ = lean_ctor_get(v___y_526_, 0);
lean_inc(v_binderName_541_);
v_binderType_542_ = lean_ctor_get(v___y_526_, 1);
v_body_543_ = lean_ctor_get(v___y_526_, 2);
v_binderInfo_544_ = lean_ctor_get_uint8(v___y_526_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_542_);
lean_inc_ref(v_post_471_);
lean_inc_ref(v_pre_469_);
v___x_545_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_469_, v_post_471_, v_binderType_542_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v_a_546_; lean_object* v___x_547_; 
v_a_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc(v_a_546_);
lean_dec_ref(v___x_545_);
lean_inc_ref(v_body_543_);
lean_inc_ref(v_post_471_);
lean_inc_ref(v_pre_469_);
v___x_547_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_469_, v_post_471_, v_body_543_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_547_) == 0)
{
lean_object* v_a_548_; size_t v___x_549_; size_t v___x_550_; uint8_t v___x_551_; 
v_a_548_ = lean_ctor_get(v___x_547_, 0);
lean_inc(v_a_548_);
lean_dec_ref(v___x_547_);
v___x_549_ = lean_ptr_addr(v_binderType_542_);
v___x_550_ = lean_ptr_addr(v_a_546_);
v___x_551_ = lean_usize_dec_eq(v___x_549_, v___x_550_);
if (v___x_551_ == 0)
{
v___y_494_ = v___y_526_;
v___y_495_ = v_a_546_;
v___y_496_ = v_binderName_541_;
v___y_497_ = v_a_548_;
v___y_498_ = v_binderInfo_544_;
v___y_499_ = v___x_551_;
goto v___jp_493_;
}
else
{
size_t v___x_552_; size_t v___x_553_; uint8_t v___x_554_; 
v___x_552_ = lean_ptr_addr(v_body_543_);
v___x_553_ = lean_ptr_addr(v_a_548_);
v___x_554_ = lean_usize_dec_eq(v___x_552_, v___x_553_);
v___y_494_ = v___y_526_;
v___y_495_ = v_a_546_;
v___y_496_ = v_binderName_541_;
v___y_497_ = v_a_548_;
v___y_498_ = v_binderInfo_544_;
v___y_499_ = v___x_554_;
goto v___jp_493_;
}
}
else
{
lean_dec(v_a_546_);
lean_dec(v_binderName_541_);
lean_dec_ref(v___y_526_);
lean_dec_ref(v_post_471_);
lean_dec_ref(v_pre_469_);
return v___x_547_;
}
}
else
{
lean_dec_ref(v___y_526_);
lean_dec(v_binderName_541_);
lean_dec_ref(v_post_471_);
lean_dec_ref(v_pre_469_);
return v___x_545_;
}
}
case 8:
{
lean_object* v_declName_555_; lean_object* v_type_556_; lean_object* v_value_557_; lean_object* v_body_558_; uint8_t v_nondep_559_; lean_object* v___x_560_; 
v_declName_555_ = lean_ctor_get(v___y_526_, 0);
lean_inc(v_declName_555_);
v_type_556_ = lean_ctor_get(v___y_526_, 1);
v_value_557_ = lean_ctor_get(v___y_526_, 2);
v_body_558_ = lean_ctor_get(v___y_526_, 3);
lean_inc_ref(v_body_558_);
v_nondep_559_ = lean_ctor_get_uint8(v___y_526_, sizeof(void*)*4 + 8);
lean_inc_ref(v_type_556_);
lean_inc_ref(v_post_471_);
lean_inc_ref(v_pre_469_);
v___x_560_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_469_, v_post_471_, v_type_556_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_562_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc(v_a_561_);
lean_dec_ref(v___x_560_);
lean_inc_ref(v_value_557_);
lean_inc_ref(v_post_471_);
lean_inc_ref(v_pre_469_);
v___x_562_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_469_, v_post_471_, v_value_557_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_562_) == 0)
{
lean_object* v_a_563_; lean_object* v___x_564_; 
v_a_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_a_563_);
lean_dec_ref(v___x_562_);
lean_inc_ref(v_body_558_);
lean_inc_ref(v_post_471_);
lean_inc_ref(v_pre_469_);
v___x_564_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_469_, v_post_471_, v_body_558_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_564_) == 0)
{
lean_object* v_a_565_; size_t v___x_566_; size_t v___x_567_; uint8_t v___x_568_; 
v_a_565_ = lean_ctor_get(v___x_564_, 0);
lean_inc(v_a_565_);
lean_dec_ref(v___x_564_);
v___x_566_ = lean_ptr_addr(v_type_556_);
v___x_567_ = lean_ptr_addr(v_a_561_);
v___x_568_ = lean_usize_dec_eq(v___x_566_, v___x_567_);
if (v___x_568_ == 0)
{
v___y_477_ = v___y_526_;
v___y_478_ = v_a_561_;
v___y_479_ = v_nondep_559_;
v___y_480_ = v_declName_555_;
v___y_481_ = v_a_565_;
v___y_482_ = v_body_558_;
v___y_483_ = v_a_563_;
v___y_484_ = v___x_568_;
goto v___jp_476_;
}
else
{
size_t v___x_569_; size_t v___x_570_; uint8_t v___x_571_; 
v___x_569_ = lean_ptr_addr(v_value_557_);
v___x_570_ = lean_ptr_addr(v_a_563_);
v___x_571_ = lean_usize_dec_eq(v___x_569_, v___x_570_);
v___y_477_ = v___y_526_;
v___y_478_ = v_a_561_;
v___y_479_ = v_nondep_559_;
v___y_480_ = v_declName_555_;
v___y_481_ = v_a_565_;
v___y_482_ = v_body_558_;
v___y_483_ = v_a_563_;
v___y_484_ = v___x_571_;
goto v___jp_476_;
}
}
else
{
lean_dec(v_a_563_);
lean_dec(v_a_561_);
lean_dec_ref(v_body_558_);
lean_dec(v_declName_555_);
lean_dec_ref(v___y_526_);
lean_dec_ref(v_post_471_);
lean_dec_ref(v_pre_469_);
return v___x_564_;
}
}
else
{
lean_dec(v_a_561_);
lean_dec_ref(v_body_558_);
lean_dec(v_declName_555_);
lean_dec_ref(v___y_526_);
lean_dec_ref(v_post_471_);
lean_dec_ref(v_pre_469_);
return v___x_562_;
}
}
else
{
lean_dec_ref(v_body_558_);
lean_dec_ref(v___y_526_);
lean_dec(v_declName_555_);
lean_dec_ref(v_post_471_);
lean_dec_ref(v_pre_469_);
return v___x_560_;
}
}
case 5:
{
lean_object* v_dummy_572_; lean_object* v_nargs_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; 
v_dummy_572_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1___closed__0);
v_nargs_573_ = l_Lean_Expr_getAppNumArgs(v___y_526_);
lean_inc(v_nargs_573_);
v___x_574_ = lean_mk_array(v_nargs_573_, v_dummy_572_);
v___x_575_ = lean_unsigned_to_nat(1u);
v___x_576_ = lean_nat_sub(v_nargs_573_, v___x_575_);
lean_dec(v_nargs_573_);
v___x_577_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__4(v_pre_469_, v_post_471_, v___y_526_, v___x_574_, v___x_576_, v___y_472_, v___y_473_, v___y_474_);
return v___x_577_;
}
case 10:
{
lean_object* v_data_578_; lean_object* v_expr_579_; lean_object* v___x_580_; 
v_data_578_ = lean_ctor_get(v___y_526_, 0);
v_expr_579_ = lean_ctor_get(v___y_526_, 1);
lean_inc_ref(v_expr_579_);
lean_inc_ref(v_post_471_);
lean_inc_ref(v_pre_469_);
v___x_580_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_469_, v_post_471_, v_expr_579_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_580_) == 0)
{
lean_object* v_a_581_; size_t v___x_582_; size_t v___x_583_; uint8_t v___x_584_; 
v_a_581_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_a_581_);
lean_dec_ref(v___x_580_);
v___x_582_ = lean_ptr_addr(v_expr_579_);
v___x_583_ = lean_ptr_addr(v_a_581_);
v___x_584_ = lean_usize_dec_eq(v___x_582_, v___x_583_);
if (v___x_584_ == 0)
{
lean_object* v___x_585_; lean_object* v___x_586_; 
lean_inc(v_data_578_);
lean_dec_ref(v___y_526_);
v___x_585_ = l_Lean_Expr_mdata___override(v_data_578_, v_a_581_);
v___x_586_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___x_585_, v___y_472_, v___y_473_, v___y_474_);
return v___x_586_;
}
else
{
lean_object* v___x_587_; 
lean_dec(v_a_581_);
v___x_587_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___y_526_, v___y_472_, v___y_473_, v___y_474_);
return v___x_587_;
}
}
else
{
lean_dec_ref(v___y_526_);
lean_dec_ref(v_post_471_);
lean_dec_ref(v_pre_469_);
return v___x_580_;
}
}
case 11:
{
lean_object* v_typeName_588_; lean_object* v_idx_589_; lean_object* v_struct_590_; lean_object* v___x_591_; 
v_typeName_588_ = lean_ctor_get(v___y_526_, 0);
v_idx_589_ = lean_ctor_get(v___y_526_, 1);
v_struct_590_ = lean_ctor_get(v___y_526_, 2);
lean_inc_ref(v_struct_590_);
lean_inc_ref(v_post_471_);
lean_inc_ref(v_pre_469_);
v___x_591_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_469_, v_post_471_, v_struct_590_, v___y_472_, v___y_473_, v___y_474_);
if (lean_obj_tag(v___x_591_) == 0)
{
lean_object* v_a_592_; size_t v___x_593_; size_t v___x_594_; uint8_t v___x_595_; 
v_a_592_ = lean_ctor_get(v___x_591_, 0);
lean_inc(v_a_592_);
lean_dec_ref(v___x_591_);
v___x_593_ = lean_ptr_addr(v_struct_590_);
v___x_594_ = lean_ptr_addr(v_a_592_);
v___x_595_ = lean_usize_dec_eq(v___x_593_, v___x_594_);
if (v___x_595_ == 0)
{
lean_object* v___x_596_; lean_object* v___x_597_; 
lean_inc(v_idx_589_);
lean_inc(v_typeName_588_);
lean_dec_ref(v___y_526_);
v___x_596_ = l_Lean_Expr_proj___override(v_typeName_588_, v_idx_589_, v_a_592_);
v___x_597_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___x_596_, v___y_472_, v___y_473_, v___y_474_);
return v___x_597_;
}
else
{
lean_object* v___x_598_; 
lean_dec(v_a_592_);
v___x_598_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___y_526_, v___y_472_, v___y_473_, v___y_474_);
return v___x_598_;
}
}
else
{
lean_dec_ref(v___y_526_);
lean_dec_ref(v_post_471_);
lean_dec_ref(v_pre_469_);
return v___x_591_;
}
}
default: 
{
lean_object* v___x_599_; 
v___x_599_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___y_526_, v___y_472_, v___y_473_, v___y_474_);
return v___x_599_;
}
}
}
}
}
else
{
lean_object* v_a_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_618_; 
lean_dec_ref(v_post_471_);
lean_dec_ref(v_e_470_);
lean_dec_ref(v_pre_469_);
v_a_611_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_618_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_618_ == 0)
{
v___x_613_ = v___x_520_;
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_a_611_);
lean_dec(v___x_520_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_618_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_617_; 
v_reuseFailAlloc_617_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_617_, 0, v_a_611_);
v___x_616_ = v_reuseFailAlloc_617_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
return v___x_616_;
}
}
}
}
else
{
lean_object* v_a_619_; lean_object* v___x_621_; uint8_t v_isShared_622_; uint8_t v_isSharedCheck_626_; 
lean_dec_ref(v_post_471_);
lean_dec_ref(v_e_470_);
lean_dec_ref(v_pre_469_);
v_a_619_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_626_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_626_ == 0)
{
v___x_621_ = v___x_519_;
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
else
{
lean_inc(v_a_619_);
lean_dec(v___x_519_);
v___x_621_ = lean_box(0);
v_isShared_622_ = v_isSharedCheck_626_;
goto v_resetjp_620_;
}
v_resetjp_620_:
{
lean_object* v___x_624_; 
if (v_isShared_622_ == 0)
{
v___x_624_ = v___x_621_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v_a_619_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
}
v___jp_476_:
{
if (v___y_484_ == 0)
{
lean_object* v___x_485_; lean_object* v___x_486_; 
lean_dec_ref(v___y_482_);
lean_dec_ref(v___y_477_);
v___x_485_ = l_Lean_Expr_letE___override(v___y_480_, v___y_478_, v___y_483_, v___y_481_, v___y_479_);
v___x_486_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___x_485_, v___y_472_, v___y_473_, v___y_474_);
return v___x_486_;
}
else
{
size_t v___x_487_; size_t v___x_488_; uint8_t v___x_489_; 
v___x_487_ = lean_ptr_addr(v___y_482_);
lean_dec_ref(v___y_482_);
v___x_488_ = lean_ptr_addr(v___y_481_);
v___x_489_ = lean_usize_dec_eq(v___x_487_, v___x_488_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; lean_object* v___x_491_; 
lean_dec_ref(v___y_477_);
v___x_490_ = l_Lean_Expr_letE___override(v___y_480_, v___y_478_, v___y_483_, v___y_481_, v___y_479_);
v___x_491_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___x_490_, v___y_472_, v___y_473_, v___y_474_);
return v___x_491_;
}
else
{
lean_object* v___x_492_; 
lean_dec_ref(v___y_483_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_478_);
v___x_492_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___y_477_, v___y_472_, v___y_473_, v___y_474_);
return v___x_492_;
}
}
}
v___jp_493_:
{
if (v___y_499_ == 0)
{
lean_object* v___x_500_; lean_object* v___x_501_; 
lean_dec_ref(v___y_494_);
v___x_500_ = l_Lean_Expr_lam___override(v___y_496_, v___y_495_, v___y_497_, v___y_498_);
v___x_501_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___x_500_, v___y_472_, v___y_473_, v___y_474_);
return v___x_501_;
}
else
{
uint8_t v___x_502_; 
v___x_502_ = l_Lean_instBEqBinderInfo_beq(v___y_498_, v___y_498_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_504_; 
lean_dec_ref(v___y_494_);
v___x_503_ = l_Lean_Expr_lam___override(v___y_496_, v___y_495_, v___y_497_, v___y_498_);
v___x_504_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___x_503_, v___y_472_, v___y_473_, v___y_474_);
return v___x_504_;
}
else
{
lean_object* v___x_505_; 
lean_dec_ref(v___y_497_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
v___x_505_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___y_494_, v___y_472_, v___y_473_, v___y_474_);
return v___x_505_;
}
}
}
v___jp_506_:
{
if (v___y_512_ == 0)
{
lean_object* v___x_513_; lean_object* v___x_514_; 
lean_dec_ref(v___y_507_);
v___x_513_ = l_Lean_Expr_forallE___override(v___y_511_, v___y_510_, v___y_509_, v___y_508_);
v___x_514_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___x_513_, v___y_472_, v___y_473_, v___y_474_);
return v___x_514_;
}
else
{
uint8_t v___x_515_; 
v___x_515_ = l_Lean_instBEqBinderInfo_beq(v___y_508_, v___y_508_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; 
lean_dec_ref(v___y_507_);
v___x_516_ = l_Lean_Expr_forallE___override(v___y_511_, v___y_510_, v___y_509_, v___y_508_);
v___x_517_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___x_516_, v___y_472_, v___y_473_, v___y_474_);
return v___x_517_;
}
else
{
lean_object* v___x_518_; 
lean_dec(v___y_511_);
lean_dec_ref(v___y_510_);
lean_dec_ref(v___y_509_);
v___x_518_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_469_, v_post_471_, v___y_507_, v___y_472_, v___y_473_, v___y_474_);
return v___x_518_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1___boxed(lean_object* v___x_627_, lean_object* v_pre_628_, lean_object* v_e_629_, lean_object* v_post_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1(v___x_627_, v_pre_628_, v_e_629_, v_post_630_, v___y_631_, v___y_632_, v___y_633_);
lean_dec(v___y_633_);
lean_dec_ref(v___y_632_);
lean_dec(v___y_631_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(lean_object* v_pre_636_, lean_object* v_post_637_, lean_object* v_e_638_, lean_object* v_a_639_, lean_object* v___y_640_, lean_object* v___y_641_){
_start:
{
lean_object* v___x_643_; lean_object* v___x_644_; 
lean_inc(v_a_639_);
v___x_643_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_643_, 0, lean_box(0));
lean_closure_set(v___x_643_, 1, lean_box(0));
lean_closure_set(v___x_643_, 2, v_a_639_);
v___x_644_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__0(lean_box(0), v___x_643_, v___y_640_, v___y_641_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_676_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_676_ == 0)
{
v___x_647_ = v___x_644_;
v_isShared_648_ = v_isSharedCheck_676_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_644_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_676_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_649_; 
v___x_649_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3___redArg(v_a_645_, v_e_638_);
lean_dec(v_a_645_);
if (lean_obj_tag(v___x_649_) == 0)
{
lean_object* v___x_650_; lean_object* v___f_651_; lean_object* v___x_652_; 
lean_del_object(v___x_647_);
v___x_650_ = lean_obj_once(&l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___closed__0, &l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___closed__0);
lean_inc_ref(v_e_638_);
v___f_651_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__1___boxed), 8, 4);
lean_closure_set(v___f_651_, 0, v___x_650_);
lean_closure_set(v___f_651_, 1, v_pre_636_);
lean_closure_set(v___f_651_, 2, v_e_638_);
lean_closure_set(v___f_651_, 3, v_post_637_);
v___x_652_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5___redArg(v___f_651_, v_a_639_, v___y_640_, v___y_641_);
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v_a_653_; lean_object* v___f_654_; lean_object* v___x_655_; 
v_a_653_ = lean_ctor_get(v___x_652_, 0);
lean_inc_n(v_a_653_, 2);
lean_dec_ref(v___x_652_);
lean_inc(v_a_639_);
v___f_654_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__2___boxed), 4, 3);
lean_closure_set(v___f_654_, 0, v_a_639_);
lean_closure_set(v___f_654_, 1, v_e_638_);
lean_closure_set(v___f_654_, 2, v_a_653_);
v___x_655_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___lam__0(lean_box(0), v___f_654_, v___y_640_, v___y_641_);
if (lean_obj_tag(v___x_655_) == 0)
{
lean_object* v___x_657_; uint8_t v_isShared_658_; uint8_t v_isSharedCheck_662_; 
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_662_ == 0)
{
lean_object* v_unused_663_; 
v_unused_663_ = lean_ctor_get(v___x_655_, 0);
lean_dec(v_unused_663_);
v___x_657_ = v___x_655_;
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
else
{
lean_dec(v___x_655_);
v___x_657_ = lean_box(0);
v_isShared_658_ = v_isSharedCheck_662_;
goto v_resetjp_656_;
}
v_resetjp_656_:
{
lean_object* v___x_660_; 
if (v_isShared_658_ == 0)
{
lean_ctor_set(v___x_657_, 0, v_a_653_);
v___x_660_ = v___x_657_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_a_653_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
else
{
lean_object* v_a_664_; lean_object* v___x_666_; uint8_t v_isShared_667_; uint8_t v_isSharedCheck_671_; 
lean_dec(v_a_653_);
v_a_664_ = lean_ctor_get(v___x_655_, 0);
v_isSharedCheck_671_ = !lean_is_exclusive(v___x_655_);
if (v_isSharedCheck_671_ == 0)
{
v___x_666_ = v___x_655_;
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
else
{
lean_inc(v_a_664_);
lean_dec(v___x_655_);
v___x_666_ = lean_box(0);
v_isShared_667_ = v_isSharedCheck_671_;
goto v_resetjp_665_;
}
v_resetjp_665_:
{
lean_object* v___x_669_; 
if (v_isShared_667_ == 0)
{
v___x_669_ = v___x_666_;
goto v_reusejp_668_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v_a_664_);
v___x_669_ = v_reuseFailAlloc_670_;
goto v_reusejp_668_;
}
v_reusejp_668_:
{
return v___x_669_;
}
}
}
}
else
{
lean_dec_ref(v_e_638_);
return v___x_652_;
}
}
else
{
lean_object* v_val_672_; lean_object* v___x_674_; 
lean_dec_ref(v_e_638_);
lean_dec_ref(v_post_637_);
lean_dec_ref(v_pre_636_);
v_val_672_ = lean_ctor_get(v___x_649_, 0);
lean_inc(v_val_672_);
lean_dec_ref(v___x_649_);
if (v_isShared_648_ == 0)
{
lean_ctor_set(v___x_647_, 0, v_val_672_);
v___x_674_ = v___x_647_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_val_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
else
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_684_; 
lean_dec_ref(v_e_638_);
lean_dec_ref(v_post_637_);
lean_dec_ref(v_pre_636_);
v_a_677_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_684_ == 0)
{
v___x_679_ = v___x_644_;
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_644_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_677_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(lean_object* v_pre_685_, lean_object* v_post_686_, lean_object* v_e_687_, lean_object* v_a_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
lean_object* v___x_692_; 
lean_inc_ref(v_post_686_);
lean_inc(v___y_690_);
lean_inc_ref(v___y_689_);
lean_inc_ref(v_e_687_);
v___x_692_ = lean_apply_4(v_post_686_, v_e_687_, v___y_689_, v___y_690_, lean_box(0));
if (lean_obj_tag(v___x_692_) == 0)
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_711_; 
v_a_693_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_711_ == 0)
{
v___x_695_ = v___x_692_;
v_isShared_696_ = v_isSharedCheck_711_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_692_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_711_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
switch(lean_obj_tag(v_a_693_))
{
case 0:
{
lean_object* v_e_697_; lean_object* v___x_699_; 
lean_dec_ref(v_e_687_);
lean_dec_ref(v_post_686_);
lean_dec_ref(v_pre_685_);
v_e_697_ = lean_ctor_get(v_a_693_, 0);
lean_inc_ref(v_e_697_);
lean_dec_ref(v_a_693_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v_e_697_);
v___x_699_ = v___x_695_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_e_697_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
case 1:
{
lean_object* v_e_701_; lean_object* v___x_702_; 
lean_del_object(v___x_695_);
lean_dec_ref(v_e_687_);
v_e_701_ = lean_ctor_get(v_a_693_, 0);
lean_inc_ref(v_e_701_);
lean_dec_ref(v_a_693_);
v___x_702_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_685_, v_post_686_, v_e_701_, v_a_688_, v___y_689_, v___y_690_);
return v___x_702_;
}
default: 
{
lean_object* v_e_x3f_703_; 
lean_dec_ref(v_post_686_);
lean_dec_ref(v_pre_685_);
v_e_x3f_703_ = lean_ctor_get(v_a_693_, 0);
lean_inc(v_e_x3f_703_);
lean_dec_ref(v_a_693_);
if (lean_obj_tag(v_e_x3f_703_) == 0)
{
lean_object* v___x_705_; 
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v_e_687_);
v___x_705_ = v___x_695_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_e_687_);
v___x_705_ = v_reuseFailAlloc_706_;
goto v_reusejp_704_;
}
v_reusejp_704_:
{
return v___x_705_;
}
}
else
{
lean_object* v_val_707_; lean_object* v___x_709_; 
lean_dec_ref(v_e_687_);
v_val_707_ = lean_ctor_get(v_e_x3f_703_, 0);
lean_inc(v_val_707_);
lean_dec_ref(v_e_x3f_703_);
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 0, v_val_707_);
v___x_709_ = v___x_695_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v_val_707_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec_ref(v_e_687_);
lean_dec_ref(v_post_686_);
lean_dec_ref(v_pre_685_);
v_a_712_ = lean_ctor_get(v___x_692_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_692_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_692_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_692_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2___boxed(lean_object* v_pre_720_, lean_object* v_post_721_, lean_object* v_e_722_, lean_object* v_a_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit_visitPost___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__2(v_pre_720_, v_post_721_, v_e_722_, v_a_723_, v___y_724_, v___y_725_);
lean_dec(v___y_725_);
lean_dec_ref(v___y_724_);
lean_dec(v_a_723_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__1___boxed(lean_object* v_pre_728_, lean_object* v_post_729_, lean_object* v_sz_730_, lean_object* v_i_731_, lean_object* v_bs_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
size_t v_sz_boxed_737_; size_t v_i_boxed_738_; lean_object* v_res_739_; 
v_sz_boxed_737_ = lean_unbox_usize(v_sz_730_);
lean_dec(v_sz_730_);
v_i_boxed_738_ = lean_unbox_usize(v_i_731_);
lean_dec(v_i_731_);
v_res_739_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__1(v_pre_728_, v_post_729_, v_sz_boxed_737_, v_i_boxed_738_, v_bs_732_, v___y_733_, v___y_734_, v___y_735_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v___y_733_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__4___boxed(lean_object* v_pre_740_, lean_object* v_post_741_, lean_object* v_x_742_, lean_object* v_x_743_, lean_object* v_x_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__4(v_pre_740_, v_post_741_, v_x_742_, v_x_743_, v_x_744_, v___y_745_, v___y_746_, v___y_747_);
lean_dec(v___y_747_);
lean_dec_ref(v___y_746_);
lean_dec(v___y_745_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0___boxed(lean_object* v_pre_750_, lean_object* v_post_751_, lean_object* v_e_752_, lean_object* v_a_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_){
_start:
{
lean_object* v_res_757_; 
v_res_757_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_750_, v_post_751_, v_e_752_, v_a_753_, v___y_754_, v___y_755_);
lean_dec(v___y_755_);
lean_dec_ref(v___y_754_);
lean_dec(v_a_753_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___lam__0(lean_object* v_00_u03b1_758_, lean_object* v_x_759_, lean_object* v___y_760_, lean_object* v___y_761_){
_start:
{
lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_763_ = lean_st_ref_get(v___y_761_);
lean_dec(v___x_763_);
v___x_764_ = lean_apply_1(v_x_759_, lean_box(0));
v___x_765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_765_, 0, v___x_764_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___lam__0___boxed(lean_object* v_00_u03b1_766_, lean_object* v_x_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___lam__0(v_00_u03b1_766_, v_x_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
return v_res_771_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__0(void){
_start:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_772_ = lean_box(0);
v___x_773_ = lean_unsigned_to_nat(16u);
v___x_774_ = lean_mk_array(v___x_773_, v___x_772_);
return v___x_774_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__1(void){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_775_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__0, &l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__0_once, _init_l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__0);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_776_);
lean_ctor_set(v___x_777_, 1, v___x_775_);
return v___x_777_;
}
}
static lean_object* _init_l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__2(void){
_start:
{
lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_778_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__1, &l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__1_once, _init_l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__1);
v___x_779_ = lean_alloc_closure((void*)(l_ST_Prim_mkRef___boxed), 4, 3);
lean_closure_set(v___x_779_, 0, lean_box(0));
lean_closure_set(v___x_779_, 1, lean_box(0));
lean_closure_set(v___x_779_, 2, v___x_778_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0(lean_object* v_input_780_, lean_object* v_pre_781_, lean_object* v_post_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v_a_788_; lean_object* v___x_789_; 
v___x_786_ = lean_obj_once(&l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__2, &l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__2_once, _init_l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___closed__2);
v___x_787_ = l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___lam__0(lean_box(0), v___x_786_, v___y_783_, v___y_784_);
v_a_788_ = lean_ctor_get(v___x_787_, 0);
lean_inc(v_a_788_);
lean_dec_ref(v___x_787_);
v___x_789_ = l___private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0(v_pre_781_, v_post_782_, v_input_780_, v_a_788_, v___y_783_, v___y_784_);
if (lean_obj_tag(v___x_789_) == 0)
{
lean_object* v_a_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_799_; 
v_a_790_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_a_790_);
lean_dec_ref(v___x_789_);
v___x_791_ = lean_alloc_closure((void*)(l_ST_Prim_Ref_get___boxed), 4, 3);
lean_closure_set(v___x_791_, 0, lean_box(0));
lean_closure_set(v___x_791_, 1, lean_box(0));
lean_closure_set(v___x_791_, 2, v_a_788_);
v___x_792_ = l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___lam__0(lean_box(0), v___x_791_, v___y_783_, v___y_784_);
v_isSharedCheck_799_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_799_ == 0)
{
lean_object* v_unused_800_; 
v_unused_800_ = lean_ctor_get(v___x_792_, 0);
lean_dec(v_unused_800_);
v___x_794_ = v___x_792_;
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
else
{
lean_dec(v___x_792_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_799_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_797_; 
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v_a_790_);
v___x_797_ = v___x_794_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v_a_790_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
return v___x_797_;
}
}
}
else
{
lean_dec(v_a_788_);
return v___x_789_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0___boxed(lean_object* v_input_801_, lean_object* v_pre_802_, lean_object* v_post_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0(v_input_801_, v_pre_802_, v_post_803_, v___y_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
return v_res_807_;
}
}
static lean_object* _init_l_Lean_Meta_deltaExpand___closed__0(void){
_start:
{
lean_object* v___f_808_; 
v___f_808_ = lean_alloc_closure((void*)(l_Lean_Meta_deltaExpand___lam__1___boxed), 4, 0);
return v___f_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand(lean_object* v_e_809_, lean_object* v_p_810_, uint8_t v_allowOpaque_811_, lean_object* v_a_812_, lean_object* v_a_813_){
_start:
{
lean_object* v___x_815_; lean_object* v___f_816_; lean_object* v___f_817_; lean_object* v___x_818_; 
v___x_815_ = lean_box(v_allowOpaque_811_);
v___f_816_ = lean_alloc_closure((void*)(l_Lean_Meta_deltaExpand___lam__0___boxed), 6, 2);
lean_closure_set(v___f_816_, 0, v_p_810_);
lean_closure_set(v___f_816_, 1, v___x_815_);
v___f_817_ = lean_obj_once(&l_Lean_Meta_deltaExpand___closed__0, &l_Lean_Meta_deltaExpand___closed__0_once, _init_l_Lean_Meta_deltaExpand___closed__0);
v___x_818_ = l_Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0(v_e_809_, v___f_816_, v___f_817_, v_a_812_, v_a_813_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_deltaExpand___boxed(lean_object* v_e_819_, lean_object* v_p_820_, lean_object* v_allowOpaque_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_){
_start:
{
uint8_t v_allowOpaque_boxed_825_; lean_object* v_res_826_; 
v_allowOpaque_boxed_825_ = lean_unbox(v_allowOpaque_821_);
v_res_826_ = l_Lean_Meta_deltaExpand(v_e_819_, v_p_820_, v_allowOpaque_boxed_825_, v_a_822_, v_a_823_);
lean_dec(v_a_823_);
lean_dec_ref(v_a_822_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_827_, lean_object* v_m_828_, lean_object* v_a_829_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3___redArg(v_m_828_, v_a_829_);
return v___x_830_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_831_, lean_object* v_m_832_, lean_object* v_a_833_){
_start:
{
lean_object* v_res_834_; 
v_res_834_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3(v_00_u03b2_831_, v_m_832_, v_a_833_);
lean_dec_ref(v_a_833_);
lean_dec_ref(v_m_832_);
return v_res_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7(lean_object* v_00_u03b1_835_, lean_object* v_ref_836_, lean_object* v___y_837_, lean_object* v___y_838_){
_start:
{
lean_object* v___x_840_; 
v___x_840_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___redArg(v_ref_836_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7___boxed(lean_object* v_00_u03b1_841_, lean_object* v_ref_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__7(v_00_u03b1_841_, v_ref_842_, v___y_843_, v___y_844_);
lean_dec(v___y_844_);
lean_dec_ref(v___y_843_);
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8(lean_object* v_00_u03b1_847_, lean_object* v___y_848_, lean_object* v___y_849_){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___redArg();
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8___boxed(lean_object* v_00_u03b1_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_){
_start:
{
lean_object* v_res_856_; 
v_res_856_ = l_Lean_throwInterruptException___at___00Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5_spec__8(v_00_u03b1_852_, v___y_853_, v___y_854_);
lean_dec(v___y_854_);
lean_dec_ref(v___y_853_);
return v_res_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5(lean_object* v_00_u03b1_857_, lean_object* v_x_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
lean_object* v___x_863_; 
v___x_863_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5___redArg(v_x_858_, v___y_859_, v___y_860_, v___y_861_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b1_864_, lean_object* v_x_865_, lean_object* v___y_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v_res_870_; 
v_res_870_ = l_Lean_Core_withIncRecDepth___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__5(v_00_u03b1_864_, v_x_865_, v___y_866_, v___y_867_, v___y_868_);
lean_dec(v___y_868_);
lean_dec_ref(v___y_867_);
lean_dec(v___y_866_);
return v_res_870_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6(lean_object* v_00_u03b2_871_, lean_object* v_m_872_, lean_object* v_a_873_, lean_object* v_b_874_){
_start:
{
lean_object* v___x_875_; 
v___x_875_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6___redArg(v_m_872_, v_a_873_, v_b_874_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_876_, lean_object* v_a_877_, lean_object* v_x_878_){
_start:
{
lean_object* v___x_879_; 
v___x_879_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4___redArg(v_a_877_, v_x_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4___boxed(lean_object* v_00_u03b2_880_, lean_object* v_a_881_, lean_object* v_x_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__3_spec__4(v_00_u03b2_880_, v_a_881_, v_x_882_);
lean_dec(v_x_882_);
lean_dec_ref(v_a_881_);
return v_res_883_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10(lean_object* v_00_u03b2_884_, lean_object* v_a_885_, lean_object* v_x_886_){
_start:
{
uint8_t v___x_887_; 
v___x_887_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10___redArg(v_a_885_, v_x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10___boxed(lean_object* v_00_u03b2_888_, lean_object* v_a_889_, lean_object* v_x_890_){
_start:
{
uint8_t v_res_891_; lean_object* v_r_892_; 
v_res_891_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__10(v_00_u03b2_888_, v_a_889_, v_x_890_);
lean_dec(v_x_890_);
lean_dec_ref(v_a_889_);
v_r_892_ = lean_box(v_res_891_);
return v_r_892_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11(lean_object* v_00_u03b2_893_, lean_object* v_data_894_){
_start:
{
lean_object* v___x_895_; 
v___x_895_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11___redArg(v_data_894_);
return v___x_895_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__12(lean_object* v_00_u03b2_896_, lean_object* v_a_897_, lean_object* v_b_898_, lean_object* v_x_899_){
_start:
{
lean_object* v___x_900_; 
v___x_900_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__12___redArg(v_a_897_, v_b_898_, v_x_899_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12(lean_object* v_00_u03b2_901_, lean_object* v_i_902_, lean_object* v_source_903_, lean_object* v_target_904_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12___redArg(v_i_902_, v_source_903_, v_target_904_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13(lean_object* v_00_u03b2_906_, lean_object* v_x_907_, lean_object* v_x_908_){
_start:
{
lean_object* v___x_909_; 
v___x_909_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Transform_0__Lean_Core_transform_visit___at___00Lean_Core_transform___at___00Lean_Meta_deltaExpand_spec__0_spec__0_spec__6_spec__11_spec__12_spec__13___redArg(v_x_907_, v_x_908_);
return v___x_909_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0___redArg(lean_object* v_mvarId_910_, lean_object* v_x_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_910_, v_x_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
if (lean_obj_tag(v___x_917_) == 0)
{
lean_object* v_a_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_925_; 
v_a_918_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_925_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_925_ == 0)
{
v___x_920_ = v___x_917_;
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_a_918_);
lean_dec(v___x_917_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_925_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_923_; 
if (v_isShared_921_ == 0)
{
v___x_923_ = v___x_920_;
goto v_reusejp_922_;
}
else
{
lean_object* v_reuseFailAlloc_924_; 
v_reuseFailAlloc_924_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_924_, 0, v_a_918_);
v___x_923_ = v_reuseFailAlloc_924_;
goto v_reusejp_922_;
}
v_reusejp_922_:
{
return v___x_923_;
}
}
}
else
{
lean_object* v_a_926_; lean_object* v___x_928_; uint8_t v_isShared_929_; uint8_t v_isSharedCheck_933_; 
v_a_926_ = lean_ctor_get(v___x_917_, 0);
v_isSharedCheck_933_ = !lean_is_exclusive(v___x_917_);
if (v_isSharedCheck_933_ == 0)
{
v___x_928_ = v___x_917_;
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
else
{
lean_inc(v_a_926_);
lean_dec(v___x_917_);
v___x_928_ = lean_box(0);
v_isShared_929_ = v_isSharedCheck_933_;
goto v_resetjp_927_;
}
v_resetjp_927_:
{
lean_object* v___x_931_; 
if (v_isShared_929_ == 0)
{
v___x_931_ = v___x_928_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v_a_926_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0___redArg___boxed(lean_object* v_mvarId_934_, lean_object* v_x_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0___redArg(v_mvarId_934_, v_x_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
lean_dec(v___y_939_);
lean_dec_ref(v___y_938_);
lean_dec(v___y_937_);
lean_dec_ref(v___y_936_);
return v_res_941_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0(lean_object* v_00_u03b1_942_, lean_object* v_mvarId_943_, lean_object* v_x_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
lean_object* v___x_950_; 
v___x_950_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0___redArg(v_mvarId_943_, v_x_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
return v___x_950_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0___boxed(lean_object* v_00_u03b1_951_, lean_object* v_mvarId_952_, lean_object* v_x_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0(v_00_u03b1_951_, v_mvarId_952_, v_x_953_, v___y_954_, v___y_955_, v___y_956_, v___y_957_);
lean_dec(v___y_957_);
lean_dec_ref(v___y_956_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaTarget___lam__0(lean_object* v_mvarId_960_, lean_object* v___x_961_, lean_object* v_p_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_){
_start:
{
lean_object* v___x_968_; 
lean_inc(v_mvarId_960_);
v___x_968_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_960_, v___x_961_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v___x_969_; 
lean_dec_ref(v___x_968_);
lean_inc(v_mvarId_960_);
v___x_969_ = l_Lean_MVarId_getType(v_mvarId_960_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; uint8_t v___x_971_; lean_object* v___x_972_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref(v___x_969_);
v___x_971_ = 0;
v___x_972_ = l_Lean_Meta_deltaExpand(v_a_970_, v_p_962_, v___x_971_, v___y_965_, v___y_966_);
if (lean_obj_tag(v___x_972_) == 0)
{
lean_object* v_a_973_; lean_object* v___x_974_; 
v_a_973_ = lean_ctor_get(v___x_972_, 0);
lean_inc(v_a_973_);
lean_dec_ref(v___x_972_);
v___x_974_ = l_Lean_MVarId_change(v_mvarId_960_, v_a_973_, v___x_971_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
return v___x_974_;
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
lean_dec(v_mvarId_960_);
v_a_975_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_972_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_972_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec_ref(v_p_962_);
lean_dec(v_mvarId_960_);
v_a_983_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_969_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_969_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec_ref(v_p_962_);
lean_dec(v_mvarId_960_);
v_a_991_ = lean_ctor_get(v___x_968_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_968_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_968_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_968_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaTarget___lam__0___boxed(lean_object* v_mvarId_999_, lean_object* v___x_1000_, lean_object* v_p_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_){
_start:
{
lean_object* v_res_1007_; 
v_res_1007_ = l_Lean_MVarId_deltaTarget___lam__0(v_mvarId_999_, v___x_1000_, v_p_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
return v_res_1007_;
}
}
static lean_object* _init_l_Lean_MVarId_deltaTarget___closed__0(void){
_start:
{
lean_object* v___x_1008_; 
v___x_1008_ = lean_mk_string_unchecked("delta", 5, 5);
return v___x_1008_;
}
}
static lean_object* _init_l_Lean_MVarId_deltaTarget___closed__1(void){
_start:
{
lean_object* v___x_1009_; lean_object* v___x_1010_; 
v___x_1009_ = lean_obj_once(&l_Lean_MVarId_deltaTarget___closed__0, &l_Lean_MVarId_deltaTarget___closed__0_once, _init_l_Lean_MVarId_deltaTarget___closed__0);
v___x_1010_ = l_Lean_Name_mkStr1(v___x_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaTarget(lean_object* v_mvarId_1011_, lean_object* v_p_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
lean_object* v___x_1018_; lean_object* v___f_1019_; lean_object* v___x_1020_; 
v___x_1018_ = lean_obj_once(&l_Lean_MVarId_deltaTarget___closed__1, &l_Lean_MVarId_deltaTarget___closed__1_once, _init_l_Lean_MVarId_deltaTarget___closed__1);
lean_inc(v_mvarId_1011_);
v___f_1019_ = lean_alloc_closure((void*)(l_Lean_MVarId_deltaTarget___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1019_, 0, v_mvarId_1011_);
lean_closure_set(v___f_1019_, 1, v___x_1018_);
lean_closure_set(v___f_1019_, 2, v_p_1012_);
v___x_1020_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0___redArg(v_mvarId_1011_, v___f_1019_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_);
return v___x_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaTarget___boxed(lean_object* v_mvarId_1021_, lean_object* v_p_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_){
_start:
{
lean_object* v_res_1028_; 
v_res_1028_ = l_Lean_MVarId_deltaTarget(v_mvarId_1021_, v_p_1022_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_);
lean_dec(v_a_1026_);
lean_dec_ref(v_a_1025_);
lean_dec(v_a_1024_);
lean_dec_ref(v_a_1023_);
return v_res_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaLocalDecl___lam__0(lean_object* v_mvarId_1029_, lean_object* v___x_1030_, lean_object* v_fvarId_1031_, lean_object* v_p_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v___x_1038_; 
lean_inc(v_mvarId_1029_);
v___x_1038_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1029_, v___x_1030_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
if (lean_obj_tag(v___x_1038_) == 0)
{
lean_object* v___x_1039_; 
lean_dec_ref(v___x_1038_);
lean_inc(v_fvarId_1031_);
v___x_1039_ = l_Lean_FVarId_getType___redArg(v_fvarId_1031_, v___y_1033_, v___y_1035_, v___y_1036_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; uint8_t v___x_1041_; lean_object* v___x_1042_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
lean_inc(v_a_1040_);
lean_dec_ref(v___x_1039_);
v___x_1041_ = 0;
v___x_1042_ = l_Lean_Meta_deltaExpand(v_a_1040_, v_p_1032_, v___x_1041_, v___y_1035_, v___y_1036_);
if (lean_obj_tag(v___x_1042_) == 0)
{
lean_object* v_a_1043_; lean_object* v___x_1044_; 
v_a_1043_ = lean_ctor_get(v___x_1042_, 0);
lean_inc(v_a_1043_);
lean_dec_ref(v___x_1042_);
v___x_1044_ = l_Lean_MVarId_changeLocalDecl(v_mvarId_1029_, v_fvarId_1031_, v_a_1043_, v___x_1041_, v___y_1033_, v___y_1034_, v___y_1035_, v___y_1036_);
return v___x_1044_;
}
else
{
lean_object* v_a_1045_; lean_object* v___x_1047_; uint8_t v_isShared_1048_; uint8_t v_isSharedCheck_1052_; 
lean_dec(v_fvarId_1031_);
lean_dec(v_mvarId_1029_);
v_a_1045_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1052_ == 0)
{
v___x_1047_ = v___x_1042_;
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
else
{
lean_inc(v_a_1045_);
lean_dec(v___x_1042_);
v___x_1047_ = lean_box(0);
v_isShared_1048_ = v_isSharedCheck_1052_;
goto v_resetjp_1046_;
}
v_resetjp_1046_:
{
lean_object* v___x_1050_; 
if (v_isShared_1048_ == 0)
{
v___x_1050_ = v___x_1047_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v_a_1045_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
}
else
{
lean_object* v_a_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1060_; 
lean_dec_ref(v_p_1032_);
lean_dec(v_fvarId_1031_);
lean_dec(v_mvarId_1029_);
v_a_1053_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1060_ == 0)
{
v___x_1055_ = v___x_1039_;
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_a_1053_);
lean_dec(v___x_1039_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1060_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v___x_1058_; 
if (v_isShared_1056_ == 0)
{
v___x_1058_ = v___x_1055_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v_a_1053_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
else
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
lean_dec_ref(v_p_1032_);
lean_dec(v_fvarId_1031_);
lean_dec(v_mvarId_1029_);
v_a_1061_ = lean_ctor_get(v___x_1038_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1038_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1038_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1038_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaLocalDecl___lam__0___boxed(lean_object* v_mvarId_1069_, lean_object* v___x_1070_, lean_object* v_fvarId_1071_, lean_object* v_p_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lean_MVarId_deltaLocalDecl___lam__0(v_mvarId_1069_, v___x_1070_, v_fvarId_1071_, v_p_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaLocalDecl(lean_object* v_mvarId_1079_, lean_object* v_fvarId_1080_, lean_object* v_p_1081_, lean_object* v_a_1082_, lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_){
_start:
{
lean_object* v___x_1087_; lean_object* v___f_1088_; lean_object* v___x_1089_; 
v___x_1087_ = lean_obj_once(&l_Lean_MVarId_deltaTarget___closed__1, &l_Lean_MVarId_deltaTarget___closed__1_once, _init_l_Lean_MVarId_deltaTarget___closed__1);
lean_inc(v_mvarId_1079_);
v___f_1088_ = lean_alloc_closure((void*)(l_Lean_MVarId_deltaLocalDecl___lam__0___boxed), 9, 4);
lean_closure_set(v___f_1088_, 0, v_mvarId_1079_);
lean_closure_set(v___f_1088_, 1, v___x_1087_);
lean_closure_set(v___f_1088_, 2, v_fvarId_1080_);
lean_closure_set(v___f_1088_, 3, v_p_1081_);
v___x_1089_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_deltaTarget_spec__0___redArg(v_mvarId_1079_, v___f_1088_, v_a_1082_, v_a_1083_, v_a_1084_, v_a_1085_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_deltaLocalDecl___boxed(lean_object* v_mvarId_1090_, lean_object* v_fvarId_1091_, lean_object* v_p_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_, lean_object* v_a_1097_){
_start:
{
lean_object* v_res_1098_; 
v_res_1098_ = l_Lean_MVarId_deltaLocalDecl(v_mvarId_1090_, v_fvarId_1091_, v_p_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
lean_dec(v_a_1096_);
lean_dec_ref(v_a_1095_);
lean_dec(v_a_1094_);
lean_dec_ref(v_a_1093_);
return v_res_1098_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Delta(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Replace(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Delta(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Replace(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Delta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Delta(builtin);
}
#ifdef __cplusplus
}
#endif
