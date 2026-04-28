// Lean compiler output
// Module: Lean.Meta.Tactic.Assert
// Imports: public import Lean.Meta.Tactic.FVarSubst public import Lean.Meta.Tactic.Intro public import Lean.Meta.Tactic.Revert public import Lean.Util.ForEachExpr import Lean.Meta.AppBuilder
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
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_setKind(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instDecidableEqLocalDeclKind(uint8_t, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkForall(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_MVarId_revertAfter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_MetavarContext_modifyExprMVarLCtx(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assert___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assert___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_assert___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_assert___closed__0;
static lean_once_cell_t l_Lean_MVarId_assert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_assert___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_note(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_note___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_define___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_define___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_define___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_define___closed__0;
static lean_once_cell_t l_Lean_MVarId_define___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_define___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_define(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_define___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_assertExt___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_assertExt___lam__0___closed__0;
static lean_once_cell_t l_Lean_MVarId_assertExt___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_assertExt___lam__0___closed__1;
static lean_once_cell_t l_Lean_MVarId_assertExt___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_assertExt___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MVarId_assertExt___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assertExt___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assertExt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assertExt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_assertAfter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_assertAfter___closed__0;
static lean_once_cell_t l_Lean_MVarId_assertAfter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_assertAfter___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_assertAfter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assertAfter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MVarId_assertHypotheses___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_assertHypotheses___closed__0;
static lean_once_cell_t l_Lean_MVarId_assertHypotheses___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_assertHypotheses___closed__1;
static lean_once_cell_t l_Lean_MVarId_assertHypotheses___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_assertHypotheses___closed__2;
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_replace___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_replace___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_replace___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_replace___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_replace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg(lean_object* v_mvarId_1_, lean_object* v_x_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_){
_start:
{
lean_object* v___x_8_; 
v___x_8_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1_, v_x_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_16_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_16_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_16_ == 0)
{
v___x_11_ = v___x_8_;
v_isShared_12_ = v_isSharedCheck_16_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_16_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_14_; 
if (v_isShared_12_ == 0)
{
v___x_14_ = v___x_11_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_15_; 
v_reuseFailAlloc_15_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_15_, 0, v_a_9_);
v___x_14_ = v_reuseFailAlloc_15_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
return v___x_14_;
}
}
}
else
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_24_; 
v_a_17_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_24_ == 0)
{
v___x_19_ = v___x_8_;
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v___x_8_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
if (v_isShared_20_ == 0)
{
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_a_17_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg___boxed(lean_object* v_mvarId_25_, lean_object* v_x_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg(v_mvarId_25_, v_x_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
lean_dec(v___y_30_);
lean_dec_ref(v___y_29_);
lean_dec(v___y_28_);
lean_dec_ref(v___y_27_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1(lean_object* v_00_u03b1_33_, lean_object* v_mvarId_34_, lean_object* v_x_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg(v_mvarId_34_, v_x_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_);
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___boxed(lean_object* v_00_u03b1_42_, lean_object* v_mvarId_43_, lean_object* v_x_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1(v_00_u03b1_42_, v_mvarId_43_, v_x_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_);
lean_dec(v___y_48_);
lean_dec_ref(v___y_47_);
lean_dec(v___y_46_);
lean_dec_ref(v___y_45_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(lean_object* v_x_51_, lean_object* v_x_52_, lean_object* v_x_53_, lean_object* v_x_54_){
_start:
{
lean_object* v_ks_55_; lean_object* v_vs_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_80_; 
v_ks_55_ = lean_ctor_get(v_x_51_, 0);
v_vs_56_ = lean_ctor_get(v_x_51_, 1);
v_isSharedCheck_80_ = !lean_is_exclusive(v_x_51_);
if (v_isSharedCheck_80_ == 0)
{
v___x_58_ = v_x_51_;
v_isShared_59_ = v_isSharedCheck_80_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_vs_56_);
lean_inc(v_ks_55_);
lean_dec(v_x_51_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_80_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_60_; uint8_t v___x_61_; 
v___x_60_ = lean_array_get_size(v_ks_55_);
v___x_61_ = lean_nat_dec_lt(v_x_52_, v___x_60_);
if (v___x_61_ == 0)
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_65_; 
lean_dec(v_x_52_);
v___x_62_ = lean_array_push(v_ks_55_, v_x_53_);
v___x_63_ = lean_array_push(v_vs_56_, v_x_54_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 1, v___x_63_);
lean_ctor_set(v___x_58_, 0, v___x_62_);
v___x_65_ = v___x_58_;
goto v_reusejp_64_;
}
else
{
lean_object* v_reuseFailAlloc_66_; 
v_reuseFailAlloc_66_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_66_, 0, v___x_62_);
lean_ctor_set(v_reuseFailAlloc_66_, 1, v___x_63_);
v___x_65_ = v_reuseFailAlloc_66_;
goto v_reusejp_64_;
}
v_reusejp_64_:
{
return v___x_65_;
}
}
else
{
lean_object* v_k_x27_67_; uint8_t v___x_68_; 
v_k_x27_67_ = lean_array_fget_borrowed(v_ks_55_, v_x_52_);
v___x_68_ = l_Lean_instBEqMVarId_beq(v_x_53_, v_k_x27_67_);
if (v___x_68_ == 0)
{
lean_object* v___x_70_; 
if (v_isShared_59_ == 0)
{
v___x_70_ = v___x_58_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_ks_55_);
lean_ctor_set(v_reuseFailAlloc_74_, 1, v_vs_56_);
v___x_70_ = v_reuseFailAlloc_74_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = lean_unsigned_to_nat(1u);
v___x_72_ = lean_nat_add(v_x_52_, v___x_71_);
lean_dec(v_x_52_);
v_x_51_ = v___x_70_;
v_x_52_ = v___x_72_;
goto _start;
}
}
else
{
lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_78_; 
v___x_75_ = lean_array_fset(v_ks_55_, v_x_52_, v_x_53_);
v___x_76_ = lean_array_fset(v_vs_56_, v_x_52_, v_x_54_);
lean_dec(v_x_52_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 1, v___x_76_);
lean_ctor_set(v___x_58_, 0, v___x_75_);
v___x_78_ = v___x_58_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_79_; 
v_reuseFailAlloc_79_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_79_, 0, v___x_75_);
lean_ctor_set(v_reuseFailAlloc_79_, 1, v___x_76_);
v___x_78_ = v_reuseFailAlloc_79_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
return v___x_78_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_n_81_, lean_object* v_k_82_, lean_object* v_v_83_){
_start:
{
lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_84_ = lean_unsigned_to_nat(0u);
v___x_85_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_n_81_, v___x_84_, v_k_82_, v_v_83_);
return v___x_85_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_86_; size_t v___x_87_; size_t v___x_88_; 
v___x_86_ = ((size_t)5ULL);
v___x_87_ = ((size_t)1ULL);
v___x_88_ = lean_usize_shift_left(v___x_87_, v___x_86_);
return v___x_88_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_89_; size_t v___x_90_; size_t v___x_91_; 
v___x_89_ = ((size_t)1ULL);
v___x_90_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_91_ = lean_usize_sub(v___x_90_, v___x_89_);
return v___x_91_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg(lean_object* v_x_93_, size_t v_x_94_, size_t v_x_95_, lean_object* v_x_96_, lean_object* v_x_97_){
_start:
{
if (lean_obj_tag(v_x_93_) == 0)
{
lean_object* v_es_98_; size_t v___x_99_; size_t v___x_100_; size_t v___x_101_; size_t v___x_102_; lean_object* v_j_103_; lean_object* v___x_104_; uint8_t v___x_105_; 
v_es_98_ = lean_ctor_get(v_x_93_, 0);
v___x_99_ = ((size_t)5ULL);
v___x_100_ = ((size_t)1ULL);
v___x_101_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_102_ = lean_usize_land(v_x_94_, v___x_101_);
v_j_103_ = lean_usize_to_nat(v___x_102_);
v___x_104_ = lean_array_get_size(v_es_98_);
v___x_105_ = lean_nat_dec_lt(v_j_103_, v___x_104_);
if (v___x_105_ == 0)
{
lean_dec(v_j_103_);
lean_dec(v_x_97_);
lean_dec(v_x_96_);
return v_x_93_;
}
else
{
lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_142_; 
lean_inc_ref(v_es_98_);
v_isSharedCheck_142_ = !lean_is_exclusive(v_x_93_);
if (v_isSharedCheck_142_ == 0)
{
lean_object* v_unused_143_; 
v_unused_143_ = lean_ctor_get(v_x_93_, 0);
lean_dec(v_unused_143_);
v___x_107_ = v_x_93_;
v_isShared_108_ = v_isSharedCheck_142_;
goto v_resetjp_106_;
}
else
{
lean_dec(v_x_93_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_142_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v_v_109_; lean_object* v___x_110_; lean_object* v_xs_x27_111_; lean_object* v___y_113_; 
v_v_109_ = lean_array_fget(v_es_98_, v_j_103_);
v___x_110_ = lean_box(0);
v_xs_x27_111_ = lean_array_fset(v_es_98_, v_j_103_, v___x_110_);
switch(lean_obj_tag(v_v_109_))
{
case 0:
{
lean_object* v_key_118_; lean_object* v_val_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_129_; 
v_key_118_ = lean_ctor_get(v_v_109_, 0);
v_val_119_ = lean_ctor_get(v_v_109_, 1);
v_isSharedCheck_129_ = !lean_is_exclusive(v_v_109_);
if (v_isSharedCheck_129_ == 0)
{
v___x_121_ = v_v_109_;
v_isShared_122_ = v_isSharedCheck_129_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_val_119_);
lean_inc(v_key_118_);
lean_dec(v_v_109_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_129_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
uint8_t v___x_123_; 
v___x_123_ = l_Lean_instBEqMVarId_beq(v_x_96_, v_key_118_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; lean_object* v___x_125_; 
lean_del_object(v___x_121_);
v___x_124_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_118_, v_val_119_, v_x_96_, v_x_97_);
v___x_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
v___y_113_ = v___x_125_;
goto v___jp_112_;
}
else
{
lean_object* v___x_127_; 
lean_dec(v_val_119_);
lean_dec(v_key_118_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 1, v_x_97_);
lean_ctor_set(v___x_121_, 0, v_x_96_);
v___x_127_ = v___x_121_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_x_96_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v_x_97_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
v___y_113_ = v___x_127_;
goto v___jp_112_;
}
}
}
}
case 1:
{
lean_object* v_node_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_140_; 
v_node_130_ = lean_ctor_get(v_v_109_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v_v_109_);
if (v_isSharedCheck_140_ == 0)
{
v___x_132_ = v_v_109_;
v_isShared_133_ = v_isSharedCheck_140_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_node_130_);
lean_dec(v_v_109_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_140_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
size_t v___x_134_; size_t v___x_135_; lean_object* v___x_136_; lean_object* v___x_138_; 
v___x_134_ = lean_usize_shift_right(v_x_94_, v___x_99_);
v___x_135_ = lean_usize_add(v_x_95_, v___x_100_);
v___x_136_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg(v_node_130_, v___x_134_, v___x_135_, v_x_96_, v_x_97_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 0, v___x_136_);
v___x_138_ = v___x_132_;
goto v_reusejp_137_;
}
else
{
lean_object* v_reuseFailAlloc_139_; 
v_reuseFailAlloc_139_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_139_, 0, v___x_136_);
v___x_138_ = v_reuseFailAlloc_139_;
goto v_reusejp_137_;
}
v_reusejp_137_:
{
v___y_113_ = v___x_138_;
goto v___jp_112_;
}
}
}
default: 
{
lean_object* v___x_141_; 
v___x_141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_141_, 0, v_x_96_);
lean_ctor_set(v___x_141_, 1, v_x_97_);
v___y_113_ = v___x_141_;
goto v___jp_112_;
}
}
v___jp_112_:
{
lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_114_ = lean_array_fset(v_xs_x27_111_, v_j_103_, v___y_113_);
lean_dec(v_j_103_);
if (v_isShared_108_ == 0)
{
lean_ctor_set(v___x_107_, 0, v___x_114_);
v___x_116_ = v___x_107_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_117_; 
v_reuseFailAlloc_117_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_117_, 0, v___x_114_);
v___x_116_ = v_reuseFailAlloc_117_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
return v___x_116_;
}
}
}
}
}
else
{
lean_object* v_ks_144_; lean_object* v_vs_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_165_; 
v_ks_144_ = lean_ctor_get(v_x_93_, 0);
v_vs_145_ = lean_ctor_get(v_x_93_, 1);
v_isSharedCheck_165_ = !lean_is_exclusive(v_x_93_);
if (v_isSharedCheck_165_ == 0)
{
v___x_147_ = v_x_93_;
v_isShared_148_ = v_isSharedCheck_165_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_vs_145_);
lean_inc(v_ks_144_);
lean_dec(v_x_93_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_165_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_164_; 
v_reuseFailAlloc_164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_164_, 0, v_ks_144_);
lean_ctor_set(v_reuseFailAlloc_164_, 1, v_vs_145_);
v___x_150_ = v_reuseFailAlloc_164_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
lean_object* v_newNode_151_; uint8_t v___y_153_; size_t v___x_159_; uint8_t v___x_160_; 
v_newNode_151_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3___redArg(v___x_150_, v_x_96_, v_x_97_);
v___x_159_ = ((size_t)7ULL);
v___x_160_ = lean_usize_dec_le(v___x_159_, v_x_95_);
if (v___x_160_ == 0)
{
lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_161_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_151_);
v___x_162_ = lean_unsigned_to_nat(4u);
v___x_163_ = lean_nat_dec_lt(v___x_161_, v___x_162_);
lean_dec(v___x_161_);
v___y_153_ = v___x_163_;
goto v___jp_152_;
}
else
{
v___y_153_ = v___x_160_;
goto v___jp_152_;
}
v___jp_152_:
{
if (v___y_153_ == 0)
{
lean_object* v_ks_154_; lean_object* v_vs_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; 
v_ks_154_ = lean_ctor_get(v_newNode_151_, 0);
lean_inc_ref(v_ks_154_);
v_vs_155_ = lean_ctor_get(v_newNode_151_, 1);
lean_inc_ref(v_vs_155_);
lean_dec_ref(v_newNode_151_);
v___x_156_ = lean_unsigned_to_nat(0u);
v___x_157_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___closed__2);
v___x_158_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4___redArg(v_x_95_, v_ks_154_, v_vs_155_, v___x_156_, v___x_157_);
lean_dec_ref(v_vs_155_);
lean_dec_ref(v_ks_154_);
return v___x_158_;
}
else
{
return v_newNode_151_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4___redArg(size_t v_depth_166_, lean_object* v_keys_167_, lean_object* v_vals_168_, lean_object* v_i_169_, lean_object* v_entries_170_){
_start:
{
lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_171_ = lean_array_get_size(v_keys_167_);
v___x_172_ = lean_nat_dec_lt(v_i_169_, v___x_171_);
if (v___x_172_ == 0)
{
lean_dec(v_i_169_);
return v_entries_170_;
}
else
{
lean_object* v_k_173_; lean_object* v_v_174_; uint64_t v___x_175_; size_t v_h_176_; size_t v___x_177_; lean_object* v___x_178_; size_t v___x_179_; size_t v___x_180_; size_t v___x_181_; size_t v_h_182_; lean_object* v___x_183_; lean_object* v___x_184_; 
v_k_173_ = lean_array_fget_borrowed(v_keys_167_, v_i_169_);
v_v_174_ = lean_array_fget_borrowed(v_vals_168_, v_i_169_);
v___x_175_ = l_Lean_instHashableMVarId_hash(v_k_173_);
v_h_176_ = lean_uint64_to_usize(v___x_175_);
v___x_177_ = ((size_t)5ULL);
v___x_178_ = lean_unsigned_to_nat(1u);
v___x_179_ = ((size_t)1ULL);
v___x_180_ = lean_usize_sub(v_depth_166_, v___x_179_);
v___x_181_ = lean_usize_mul(v___x_177_, v___x_180_);
v_h_182_ = lean_usize_shift_right(v_h_176_, v___x_181_);
v___x_183_ = lean_nat_add(v_i_169_, v___x_178_);
lean_dec(v_i_169_);
lean_inc(v_v_174_);
lean_inc(v_k_173_);
v___x_184_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg(v_entries_170_, v_h_182_, v_depth_166_, v_k_173_, v_v_174_);
v_i_169_ = v___x_183_;
v_entries_170_ = v___x_184_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4___redArg___boxed(lean_object* v_depth_186_, lean_object* v_keys_187_, lean_object* v_vals_188_, lean_object* v_i_189_, lean_object* v_entries_190_){
_start:
{
size_t v_depth_boxed_191_; lean_object* v_res_192_; 
v_depth_boxed_191_ = lean_unbox_usize(v_depth_186_);
lean_dec(v_depth_186_);
v_res_192_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4___redArg(v_depth_boxed_191_, v_keys_187_, v_vals_188_, v_i_189_, v_entries_190_);
lean_dec_ref(v_vals_188_);
lean_dec_ref(v_keys_187_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_193_, lean_object* v_x_194_, lean_object* v_x_195_, lean_object* v_x_196_, lean_object* v_x_197_){
_start:
{
size_t v_x_1335__boxed_198_; size_t v_x_1336__boxed_199_; lean_object* v_res_200_; 
v_x_1335__boxed_198_ = lean_unbox_usize(v_x_194_);
lean_dec(v_x_194_);
v_x_1336__boxed_199_ = lean_unbox_usize(v_x_195_);
lean_dec(v_x_195_);
v_res_200_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg(v_x_193_, v_x_1335__boxed_198_, v_x_1336__boxed_199_, v_x_196_, v_x_197_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0___redArg(lean_object* v_x_201_, lean_object* v_x_202_, lean_object* v_x_203_){
_start:
{
uint64_t v___x_204_; size_t v___x_205_; size_t v___x_206_; lean_object* v___x_207_; 
v___x_204_ = l_Lean_instHashableMVarId_hash(v_x_202_);
v___x_205_ = lean_uint64_to_usize(v___x_204_);
v___x_206_ = ((size_t)1ULL);
v___x_207_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg(v_x_201_, v___x_205_, v___x_206_, v_x_202_, v_x_203_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___redArg(lean_object* v_mvarId_208_, lean_object* v_val_209_, lean_object* v___y_210_, lean_object* v___y_211_){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v_mctx_215_; lean_object* v_cache_216_; lean_object* v_zetaDeltaFVarIds_217_; lean_object* v_postponed_218_; lean_object* v_diag_219_; lean_object* v___x_221_; uint8_t v_isShared_222_; uint8_t v_isSharedCheck_247_; 
v___x_213_ = lean_st_ref_get(v___y_211_);
lean_dec(v___x_213_);
v___x_214_ = lean_st_ref_take(v___y_210_);
v_mctx_215_ = lean_ctor_get(v___x_214_, 0);
v_cache_216_ = lean_ctor_get(v___x_214_, 1);
v_zetaDeltaFVarIds_217_ = lean_ctor_get(v___x_214_, 2);
v_postponed_218_ = lean_ctor_get(v___x_214_, 3);
v_diag_219_ = lean_ctor_get(v___x_214_, 4);
v_isSharedCheck_247_ = !lean_is_exclusive(v___x_214_);
if (v_isSharedCheck_247_ == 0)
{
v___x_221_ = v___x_214_;
v_isShared_222_ = v_isSharedCheck_247_;
goto v_resetjp_220_;
}
else
{
lean_inc(v_diag_219_);
lean_inc(v_postponed_218_);
lean_inc(v_zetaDeltaFVarIds_217_);
lean_inc(v_cache_216_);
lean_inc(v_mctx_215_);
lean_dec(v___x_214_);
v___x_221_ = lean_box(0);
v_isShared_222_ = v_isSharedCheck_247_;
goto v_resetjp_220_;
}
v_resetjp_220_:
{
lean_object* v_depth_223_; lean_object* v_levelAssignDepth_224_; lean_object* v_lmvarCounter_225_; lean_object* v_mvarCounter_226_; lean_object* v_lDecls_227_; lean_object* v_decls_228_; lean_object* v_userNames_229_; lean_object* v_lAssignment_230_; lean_object* v_eAssignment_231_; lean_object* v_dAssignment_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_246_; 
v_depth_223_ = lean_ctor_get(v_mctx_215_, 0);
v_levelAssignDepth_224_ = lean_ctor_get(v_mctx_215_, 1);
v_lmvarCounter_225_ = lean_ctor_get(v_mctx_215_, 2);
v_mvarCounter_226_ = lean_ctor_get(v_mctx_215_, 3);
v_lDecls_227_ = lean_ctor_get(v_mctx_215_, 4);
v_decls_228_ = lean_ctor_get(v_mctx_215_, 5);
v_userNames_229_ = lean_ctor_get(v_mctx_215_, 6);
v_lAssignment_230_ = lean_ctor_get(v_mctx_215_, 7);
v_eAssignment_231_ = lean_ctor_get(v_mctx_215_, 8);
v_dAssignment_232_ = lean_ctor_get(v_mctx_215_, 9);
v_isSharedCheck_246_ = !lean_is_exclusive(v_mctx_215_);
if (v_isSharedCheck_246_ == 0)
{
v___x_234_ = v_mctx_215_;
v_isShared_235_ = v_isSharedCheck_246_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_dAssignment_232_);
lean_inc(v_eAssignment_231_);
lean_inc(v_lAssignment_230_);
lean_inc(v_userNames_229_);
lean_inc(v_decls_228_);
lean_inc(v_lDecls_227_);
lean_inc(v_mvarCounter_226_);
lean_inc(v_lmvarCounter_225_);
lean_inc(v_levelAssignDepth_224_);
lean_inc(v_depth_223_);
lean_dec(v_mctx_215_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_246_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_236_; lean_object* v___x_238_; 
v___x_236_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0___redArg(v_eAssignment_231_, v_mvarId_208_, v_val_209_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 8, v___x_236_);
v___x_238_ = v___x_234_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_depth_223_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v_levelAssignDepth_224_);
lean_ctor_set(v_reuseFailAlloc_245_, 2, v_lmvarCounter_225_);
lean_ctor_set(v_reuseFailAlloc_245_, 3, v_mvarCounter_226_);
lean_ctor_set(v_reuseFailAlloc_245_, 4, v_lDecls_227_);
lean_ctor_set(v_reuseFailAlloc_245_, 5, v_decls_228_);
lean_ctor_set(v_reuseFailAlloc_245_, 6, v_userNames_229_);
lean_ctor_set(v_reuseFailAlloc_245_, 7, v_lAssignment_230_);
lean_ctor_set(v_reuseFailAlloc_245_, 8, v___x_236_);
lean_ctor_set(v_reuseFailAlloc_245_, 9, v_dAssignment_232_);
v___x_238_ = v_reuseFailAlloc_245_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_240_; 
if (v_isShared_222_ == 0)
{
lean_ctor_set(v___x_221_, 0, v___x_238_);
v___x_240_ = v___x_221_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_238_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_cache_216_);
lean_ctor_set(v_reuseFailAlloc_244_, 2, v_zetaDeltaFVarIds_217_);
lean_ctor_set(v_reuseFailAlloc_244_, 3, v_postponed_218_);
lean_ctor_set(v_reuseFailAlloc_244_, 4, v_diag_219_);
v___x_240_ = v_reuseFailAlloc_244_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_241_ = lean_st_ref_set(v___y_210_, v___x_240_);
v___x_242_ = lean_box(0);
v___x_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___redArg___boxed(lean_object* v_mvarId_248_, lean_object* v_val_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___redArg(v_mvarId_248_, v_val_249_, v___y_250_, v___y_251_);
lean_dec(v___y_251_);
lean_dec(v___y_250_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assert___lam__0(lean_object* v_mvarId_254_, lean_object* v___x_255_, lean_object* v_name_256_, lean_object* v_type_257_, lean_object* v_val_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_){
_start:
{
lean_object* v___x_264_; 
lean_inc(v_mvarId_254_);
v___x_264_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_254_, v___x_255_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_object* v___x_265_; 
lean_dec_ref(v___x_264_);
lean_inc(v_mvarId_254_);
v___x_265_ = l_Lean_MVarId_getTag(v_mvarId_254_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
if (lean_obj_tag(v___x_265_) == 0)
{
lean_object* v_a_266_; lean_object* v___x_267_; 
v_a_266_ = lean_ctor_get(v___x_265_, 0);
lean_inc(v_a_266_);
lean_dec_ref(v___x_265_);
lean_inc(v_mvarId_254_);
v___x_267_ = l_Lean_MVarId_getType(v_mvarId_254_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; uint8_t v___x_269_; lean_object* v___x_270_; lean_object* v___x_271_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_a_268_);
lean_dec_ref(v___x_267_);
v___x_269_ = 0;
v___x_270_ = l_Lean_mkForall(v_name_256_, v___x_269_, v_type_257_, v_a_268_);
v___x_271_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_270_, v_a_266_, v___y_259_, v___y_260_, v___y_261_, v___y_262_);
if (lean_obj_tag(v___x_271_) == 0)
{
lean_object* v_a_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_282_; 
v_a_272_ = lean_ctor_get(v___x_271_, 0);
lean_inc_n(v_a_272_, 2);
lean_dec_ref(v___x_271_);
v___x_273_ = l_Lean_Expr_app___override(v_a_272_, v_val_258_);
v___x_274_ = l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___redArg(v_mvarId_254_, v___x_273_, v___y_260_, v___y_262_);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_282_ == 0)
{
lean_object* v_unused_283_; 
v_unused_283_ = lean_ctor_get(v___x_274_, 0);
lean_dec(v_unused_283_);
v___x_276_ = v___x_274_;
v_isShared_277_ = v_isSharedCheck_282_;
goto v_resetjp_275_;
}
else
{
lean_dec(v___x_274_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_282_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_278_ = l_Lean_Expr_mvarId_x21(v_a_272_);
lean_dec(v_a_272_);
if (v_isShared_277_ == 0)
{
lean_ctor_set(v___x_276_, 0, v___x_278_);
v___x_280_ = v___x_276_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v___x_278_);
v___x_280_ = v_reuseFailAlloc_281_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
return v___x_280_;
}
}
}
else
{
lean_object* v_a_284_; lean_object* v___x_286_; uint8_t v_isShared_287_; uint8_t v_isSharedCheck_291_; 
lean_dec_ref(v_val_258_);
lean_dec(v_mvarId_254_);
v_a_284_ = lean_ctor_get(v___x_271_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_271_);
if (v_isSharedCheck_291_ == 0)
{
v___x_286_ = v___x_271_;
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
else
{
lean_inc(v_a_284_);
lean_dec(v___x_271_);
v___x_286_ = lean_box(0);
v_isShared_287_ = v_isSharedCheck_291_;
goto v_resetjp_285_;
}
v_resetjp_285_:
{
lean_object* v___x_289_; 
if (v_isShared_287_ == 0)
{
v___x_289_ = v___x_286_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v_a_284_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
lean_dec(v_a_266_);
lean_dec_ref(v_val_258_);
lean_dec_ref(v_type_257_);
lean_dec(v_name_256_);
lean_dec(v_mvarId_254_);
v_a_292_ = lean_ctor_get(v___x_267_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___x_267_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_267_);
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
else
{
lean_object* v_a_300_; lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_307_; 
lean_dec_ref(v_val_258_);
lean_dec_ref(v_type_257_);
lean_dec(v_name_256_);
lean_dec(v_mvarId_254_);
v_a_300_ = lean_ctor_get(v___x_265_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v___x_265_);
if (v_isSharedCheck_307_ == 0)
{
v___x_302_ = v___x_265_;
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
else
{
lean_inc(v_a_300_);
lean_dec(v___x_265_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_307_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_305_; 
if (v_isShared_303_ == 0)
{
v___x_305_ = v___x_302_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v_a_300_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
return v___x_305_;
}
}
}
}
else
{
lean_object* v_a_308_; lean_object* v___x_310_; uint8_t v_isShared_311_; uint8_t v_isSharedCheck_315_; 
lean_dec_ref(v_val_258_);
lean_dec_ref(v_type_257_);
lean_dec(v_name_256_);
lean_dec(v_mvarId_254_);
v_a_308_ = lean_ctor_get(v___x_264_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_264_);
if (v_isSharedCheck_315_ == 0)
{
v___x_310_ = v___x_264_;
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
else
{
lean_inc(v_a_308_);
lean_dec(v___x_264_);
v___x_310_ = lean_box(0);
v_isShared_311_ = v_isSharedCheck_315_;
goto v_resetjp_309_;
}
v_resetjp_309_:
{
lean_object* v___x_313_; 
if (v_isShared_311_ == 0)
{
v___x_313_ = v___x_310_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v_a_308_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assert___lam__0___boxed(lean_object* v_mvarId_316_, lean_object* v___x_317_, lean_object* v_name_318_, lean_object* v_type_319_, lean_object* v_val_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lean_MVarId_assert___lam__0(v_mvarId_316_, v___x_317_, v_name_318_, v_type_319_, v_val_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
lean_dec(v___y_324_);
lean_dec_ref(v___y_323_);
lean_dec(v___y_322_);
lean_dec_ref(v___y_321_);
return v_res_326_;
}
}
static lean_object* _init_l_Lean_MVarId_assert___closed__0(void){
_start:
{
lean_object* v___x_327_; 
v___x_327_ = lean_mk_string_unchecked("assert", 6, 6);
return v___x_327_;
}
}
static lean_object* _init_l_Lean_MVarId_assert___closed__1(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = lean_obj_once(&l_Lean_MVarId_assert___closed__0, &l_Lean_MVarId_assert___closed__0_once, _init_l_Lean_MVarId_assert___closed__0);
v___x_329_ = l_Lean_Name_mkStr1(v___x_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assert(lean_object* v_mvarId_330_, lean_object* v_name_331_, lean_object* v_type_332_, lean_object* v_val_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_, lean_object* v_a_337_){
_start:
{
lean_object* v___x_339_; lean_object* v___f_340_; lean_object* v___x_341_; 
v___x_339_ = lean_obj_once(&l_Lean_MVarId_assert___closed__1, &l_Lean_MVarId_assert___closed__1_once, _init_l_Lean_MVarId_assert___closed__1);
lean_inc(v_mvarId_330_);
v___f_340_ = lean_alloc_closure((void*)(l_Lean_MVarId_assert___lam__0___boxed), 10, 5);
lean_closure_set(v___f_340_, 0, v_mvarId_330_);
lean_closure_set(v___f_340_, 1, v___x_339_);
lean_closure_set(v___f_340_, 2, v_name_331_);
lean_closure_set(v___f_340_, 3, v_type_332_);
lean_closure_set(v___f_340_, 4, v_val_333_);
v___x_341_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg(v_mvarId_330_, v___f_340_, v_a_334_, v_a_335_, v_a_336_, v_a_337_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assert___boxed(lean_object* v_mvarId_342_, lean_object* v_name_343_, lean_object* v_type_344_, lean_object* v_val_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_MVarId_assert(v_mvarId_342_, v_name_343_, v_type_344_, v_val_345_, v_a_346_, v_a_347_, v_a_348_, v_a_349_);
lean_dec(v_a_349_);
lean_dec_ref(v_a_348_);
lean_dec(v_a_347_);
lean_dec_ref(v_a_346_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0(lean_object* v_mvarId_352_, lean_object* v_val_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___redArg(v_mvarId_352_, v_val_353_, v___y_355_, v___y_357_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___boxed(lean_object* v_mvarId_360_, lean_object* v_val_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0(v_mvarId_360_, v_val_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_);
lean_dec(v___y_365_);
lean_dec_ref(v___y_364_);
lean_dec(v___y_363_);
lean_dec_ref(v___y_362_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0(lean_object* v_00_u03b2_368_, lean_object* v_x_369_, lean_object* v_x_370_, lean_object* v_x_371_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0___redArg(v_x_369_, v_x_370_, v_x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_373_, lean_object* v_x_374_, size_t v_x_375_, size_t v_x_376_, lean_object* v_x_377_, lean_object* v_x_378_){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___redArg(v_x_374_, v_x_375_, v_x_376_, v_x_377_, v_x_378_);
return v___x_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_380_, lean_object* v_x_381_, lean_object* v_x_382_, lean_object* v_x_383_, lean_object* v_x_384_, lean_object* v_x_385_){
_start:
{
size_t v_x_1728__boxed_386_; size_t v_x_1729__boxed_387_; lean_object* v_res_388_; 
v_x_1728__boxed_386_ = lean_unbox_usize(v_x_382_);
lean_dec(v_x_382_);
v_x_1729__boxed_387_ = lean_unbox_usize(v_x_383_);
lean_dec(v_x_383_);
v_res_388_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2(v_00_u03b2_380_, v_x_381_, v_x_1728__boxed_386_, v_x_1729__boxed_387_, v_x_384_, v_x_385_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b2_389_, lean_object* v_n_390_, lean_object* v_k_391_, lean_object* v_v_392_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3___redArg(v_n_390_, v_k_391_, v_v_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_394_, size_t v_depth_395_, lean_object* v_keys_396_, lean_object* v_vals_397_, lean_object* v_heq_398_, lean_object* v_i_399_, lean_object* v_entries_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4___redArg(v_depth_395_, v_keys_396_, v_vals_397_, v_i_399_, v_entries_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_00_u03b2_402_, lean_object* v_depth_403_, lean_object* v_keys_404_, lean_object* v_vals_405_, lean_object* v_heq_406_, lean_object* v_i_407_, lean_object* v_entries_408_){
_start:
{
size_t v_depth_boxed_409_; lean_object* v_res_410_; 
v_depth_boxed_409_ = lean_unbox_usize(v_depth_403_);
lean_dec(v_depth_403_);
v_res_410_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__4(v_00_u03b2_402_, v_depth_boxed_409_, v_keys_404_, v_vals_405_, v_heq_406_, v_i_407_, v_entries_408_);
lean_dec_ref(v_vals_405_);
lean_dec_ref(v_keys_404_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_411_, lean_object* v_x_412_, lean_object* v_x_413_, lean_object* v_x_414_, lean_object* v_x_415_){
_start:
{
lean_object* v___x_416_; 
v___x_416_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0_spec__0_spec__2_spec__3_spec__4___redArg(v_x_412_, v_x_413_, v_x_414_, v_x_415_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_note(lean_object* v_g_417_, lean_object* v_h_418_, lean_object* v_v_419_, lean_object* v_t_x3f_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v_a_427_; 
if (lean_obj_tag(v_t_x3f_420_) == 0)
{
lean_object* v___x_440_; 
lean_inc(v_a_424_);
lean_inc_ref(v_a_423_);
lean_inc(v_a_422_);
lean_inc_ref(v_a_421_);
lean_inc_ref(v_v_419_);
v___x_440_ = lean_infer_type(v_v_419_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_object* v_a_441_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_a_441_);
lean_dec_ref(v___x_440_);
v_a_427_ = v_a_441_;
goto v___jp_426_;
}
else
{
lean_object* v_a_442_; lean_object* v___x_444_; uint8_t v_isShared_445_; uint8_t v_isSharedCheck_449_; 
lean_dec_ref(v_v_419_);
lean_dec(v_h_418_);
lean_dec(v_g_417_);
v_a_442_ = lean_ctor_get(v___x_440_, 0);
v_isSharedCheck_449_ = !lean_is_exclusive(v___x_440_);
if (v_isSharedCheck_449_ == 0)
{
v___x_444_ = v___x_440_;
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
else
{
lean_inc(v_a_442_);
lean_dec(v___x_440_);
v___x_444_ = lean_box(0);
v_isShared_445_ = v_isSharedCheck_449_;
goto v_resetjp_443_;
}
v_resetjp_443_:
{
lean_object* v___x_447_; 
if (v_isShared_445_ == 0)
{
v___x_447_ = v___x_444_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v_a_442_);
v___x_447_ = v_reuseFailAlloc_448_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
return v___x_447_;
}
}
}
}
else
{
lean_object* v_val_450_; 
v_val_450_ = lean_ctor_get(v_t_x3f_420_, 0);
lean_inc(v_val_450_);
lean_dec_ref(v_t_x3f_420_);
v_a_427_ = v_val_450_;
goto v___jp_426_;
}
v___jp_426_:
{
lean_object* v___x_428_; 
v___x_428_ = l_Lean_MVarId_assert(v_g_417_, v_h_418_, v_a_427_, v_v_419_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
if (lean_obj_tag(v___x_428_) == 0)
{
lean_object* v_a_429_; uint8_t v___x_430_; lean_object* v___x_431_; 
v_a_429_ = lean_ctor_get(v___x_428_, 0);
lean_inc(v_a_429_);
lean_dec_ref(v___x_428_);
v___x_430_ = 1;
v___x_431_ = l_Lean_Meta_intro1Core(v_a_429_, v___x_430_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
return v___x_431_;
}
else
{
lean_object* v_a_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_439_; 
v_a_432_ = lean_ctor_get(v___x_428_, 0);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_428_);
if (v_isSharedCheck_439_ == 0)
{
v___x_434_ = v___x_428_;
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_a_432_);
lean_dec(v___x_428_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_439_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v_a_432_);
v___x_437_ = v_reuseFailAlloc_438_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
return v___x_437_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_note___boxed(lean_object* v_g_451_, lean_object* v_h_452_, lean_object* v_v_453_, lean_object* v_t_x3f_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_MVarId_note(v_g_451_, v_h_452_, v_v_453_, v_t_x3f_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_);
lean_dec(v_a_458_);
lean_dec_ref(v_a_457_);
lean_dec(v_a_456_);
lean_dec_ref(v_a_455_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_define___lam__0(lean_object* v_mvarId_461_, lean_object* v___x_462_, lean_object* v_name_463_, lean_object* v_type_464_, lean_object* v_val_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v___x_471_; 
lean_inc(v_mvarId_461_);
v___x_471_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_461_, v___x_462_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v___x_472_; 
lean_dec_ref(v___x_471_);
lean_inc(v_mvarId_461_);
v___x_472_ = l_Lean_MVarId_getTag(v_mvarId_461_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
if (lean_obj_tag(v___x_472_) == 0)
{
lean_object* v_a_473_; lean_object* v___x_474_; 
v_a_473_ = lean_ctor_get(v___x_472_, 0);
lean_inc(v_a_473_);
lean_dec_ref(v___x_472_);
lean_inc(v_mvarId_461_);
v___x_474_ = l_Lean_MVarId_getType(v_mvarId_461_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
if (lean_obj_tag(v___x_474_) == 0)
{
lean_object* v_a_475_; uint8_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_a_475_ = lean_ctor_get(v___x_474_, 0);
lean_inc(v_a_475_);
lean_dec_ref(v___x_474_);
v___x_476_ = 0;
v___x_477_ = l_Lean_Expr_letE___override(v_name_463_, v_type_464_, v_val_465_, v_a_475_, v___x_476_);
v___x_478_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_477_, v_a_473_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
if (lean_obj_tag(v___x_478_) == 0)
{
lean_object* v_a_479_; lean_object* v___x_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_488_; 
v_a_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc_n(v_a_479_, 2);
lean_dec_ref(v___x_478_);
v___x_480_ = l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___redArg(v_mvarId_461_, v_a_479_, v___y_467_, v___y_469_);
v_isSharedCheck_488_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_488_ == 0)
{
lean_object* v_unused_489_; 
v_unused_489_ = lean_ctor_get(v___x_480_, 0);
lean_dec(v_unused_489_);
v___x_482_ = v___x_480_;
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
else
{
lean_dec(v___x_480_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_488_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_484_ = l_Lean_Expr_mvarId_x21(v_a_479_);
lean_dec(v_a_479_);
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 0, v___x_484_);
v___x_486_ = v___x_482_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
}
else
{
lean_object* v_a_490_; lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_497_; 
lean_dec(v_mvarId_461_);
v_a_490_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_497_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_497_ == 0)
{
v___x_492_ = v___x_478_;
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
else
{
lean_inc(v_a_490_);
lean_dec(v___x_478_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_497_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v___x_495_; 
if (v_isShared_493_ == 0)
{
v___x_495_ = v___x_492_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_a_490_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
}
}
else
{
lean_object* v_a_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_505_; 
lean_dec(v_a_473_);
lean_dec_ref(v_val_465_);
lean_dec_ref(v_type_464_);
lean_dec(v_name_463_);
lean_dec(v_mvarId_461_);
v_a_498_ = lean_ctor_get(v___x_474_, 0);
v_isSharedCheck_505_ = !lean_is_exclusive(v___x_474_);
if (v_isSharedCheck_505_ == 0)
{
v___x_500_ = v___x_474_;
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
else
{
lean_inc(v_a_498_);
lean_dec(v___x_474_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_505_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_503_; 
if (v_isShared_501_ == 0)
{
v___x_503_ = v___x_500_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v_a_498_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
}
else
{
lean_object* v_a_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_513_; 
lean_dec_ref(v_val_465_);
lean_dec_ref(v_type_464_);
lean_dec(v_name_463_);
lean_dec(v_mvarId_461_);
v_a_506_ = lean_ctor_get(v___x_472_, 0);
v_isSharedCheck_513_ = !lean_is_exclusive(v___x_472_);
if (v_isSharedCheck_513_ == 0)
{
v___x_508_ = v___x_472_;
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_a_506_);
lean_dec(v___x_472_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_513_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_511_; 
if (v_isShared_509_ == 0)
{
v___x_511_ = v___x_508_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v_a_506_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
return v___x_511_;
}
}
}
}
else
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_521_; 
lean_dec_ref(v_val_465_);
lean_dec_ref(v_type_464_);
lean_dec(v_name_463_);
lean_dec(v_mvarId_461_);
v_a_514_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_521_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_521_ == 0)
{
v___x_516_ = v___x_471_;
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_471_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_521_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_519_; 
if (v_isShared_517_ == 0)
{
v___x_519_ = v___x_516_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v_a_514_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_define___lam__0___boxed(lean_object* v_mvarId_522_, lean_object* v___x_523_, lean_object* v_name_524_, lean_object* v_type_525_, lean_object* v_val_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_){
_start:
{
lean_object* v_res_532_; 
v_res_532_ = l_Lean_MVarId_define___lam__0(v_mvarId_522_, v___x_523_, v_name_524_, v_type_525_, v_val_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
lean_dec(v___y_530_);
lean_dec_ref(v___y_529_);
lean_dec(v___y_528_);
lean_dec_ref(v___y_527_);
return v_res_532_;
}
}
static lean_object* _init_l_Lean_MVarId_define___closed__0(void){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = lean_mk_string_unchecked("define", 6, 6);
return v___x_533_;
}
}
static lean_object* _init_l_Lean_MVarId_define___closed__1(void){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = lean_obj_once(&l_Lean_MVarId_define___closed__0, &l_Lean_MVarId_define___closed__0_once, _init_l_Lean_MVarId_define___closed__0);
v___x_535_ = l_Lean_Name_mkStr1(v___x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_define(lean_object* v_mvarId_536_, lean_object* v_name_537_, lean_object* v_type_538_, lean_object* v_val_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_){
_start:
{
lean_object* v___x_545_; lean_object* v___f_546_; lean_object* v___x_547_; 
v___x_545_ = lean_obj_once(&l_Lean_MVarId_define___closed__1, &l_Lean_MVarId_define___closed__1_once, _init_l_Lean_MVarId_define___closed__1);
lean_inc(v_mvarId_536_);
v___f_546_ = lean_alloc_closure((void*)(l_Lean_MVarId_define___lam__0___boxed), 10, 5);
lean_closure_set(v___f_546_, 0, v_mvarId_536_);
lean_closure_set(v___f_546_, 1, v___x_545_);
lean_closure_set(v___f_546_, 2, v_name_537_);
lean_closure_set(v___f_546_, 3, v_type_538_);
lean_closure_set(v___f_546_, 4, v_val_539_);
v___x_547_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg(v_mvarId_536_, v___f_546_, v_a_540_, v_a_541_, v_a_542_, v_a_543_);
return v___x_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_define___boxed(lean_object* v_mvarId_548_, lean_object* v_name_549_, lean_object* v_type_550_, lean_object* v_val_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l_Lean_MVarId_define(v_mvarId_548_, v_name_549_, v_type_550_, v_val_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_);
lean_dec(v_a_555_);
lean_dec_ref(v_a_554_);
lean_dec(v_a_553_);
lean_dec_ref(v_a_552_);
return v_res_557_;
}
}
static lean_object* _init_l_Lean_MVarId_assertExt___lam__0___closed__0(void){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = lean_mk_string_unchecked("Eq", 2, 2);
return v___x_558_;
}
}
static lean_object* _init_l_Lean_MVarId_assertExt___lam__0___closed__1(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; 
v___x_559_ = lean_obj_once(&l_Lean_MVarId_assertExt___lam__0___closed__0, &l_Lean_MVarId_assertExt___lam__0___closed__0_once, _init_l_Lean_MVarId_assertExt___lam__0___closed__0);
v___x_560_ = l_Lean_Name_mkStr1(v___x_559_);
return v___x_560_;
}
}
static lean_object* _init_l_Lean_MVarId_assertExt___lam__0___closed__2(void){
_start:
{
lean_object* v___x_561_; lean_object* v___x_562_; 
v___x_561_ = lean_unsigned_to_nat(0u);
v___x_562_ = l_Lean_mkBVar(v___x_561_);
return v___x_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertExt___lam__0(lean_object* v_mvarId_563_, lean_object* v___x_564_, lean_object* v_type_565_, lean_object* v_val_566_, lean_object* v_hName_567_, lean_object* v_name_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_){
_start:
{
lean_object* v___x_574_; 
lean_inc(v_mvarId_563_);
v___x_574_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_563_, v___x_564_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
if (lean_obj_tag(v___x_574_) == 0)
{
lean_object* v___x_575_; 
lean_dec_ref(v___x_574_);
lean_inc(v_mvarId_563_);
v___x_575_ = l_Lean_MVarId_getTag(v_mvarId_563_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_577_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
lean_inc(v_a_576_);
lean_dec_ref(v___x_575_);
lean_inc(v_mvarId_563_);
v___x_577_ = l_Lean_MVarId_getType(v_mvarId_563_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v_a_578_; lean_object* v___x_579_; 
v_a_578_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_578_);
lean_dec_ref(v___x_577_);
lean_inc_ref(v_type_565_);
v___x_579_ = l_Lean_Meta_getLevel(v_type_565_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_a_580_);
lean_dec_ref(v___x_579_);
v___x_581_ = lean_obj_once(&l_Lean_MVarId_assertExt___lam__0___closed__1, &l_Lean_MVarId_assertExt___lam__0___closed__1_once, _init_l_Lean_MVarId_assertExt___lam__0___closed__1);
v___x_582_ = lean_box(0);
v___x_583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_583_, 0, v_a_580_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v___x_584_ = l_Lean_mkConst(v___x_581_, v___x_583_);
v___x_585_ = lean_obj_once(&l_Lean_MVarId_assertExt___lam__0___closed__2, &l_Lean_MVarId_assertExt___lam__0___closed__2_once, _init_l_Lean_MVarId_assertExt___lam__0___closed__2);
lean_inc_ref(v_val_566_);
lean_inc_ref(v_type_565_);
v___x_586_ = l_Lean_mkApp3(v___x_584_, v_type_565_, v___x_585_, v_val_566_);
v___x_587_ = 0;
v___x_588_ = l_Lean_mkForall(v_hName_567_, v___x_587_, v___x_586_, v_a_578_);
v___x_589_ = l_Lean_mkForall(v_name_568_, v___x_587_, v_type_565_, v___x_588_);
v___x_590_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_589_, v_a_576_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_592_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_591_);
lean_dec_ref(v___x_590_);
lean_inc_ref(v_val_566_);
v___x_592_ = l_Lean_Meta_mkEqRefl(v_val_566_, v___y_569_, v___y_570_, v___y_571_, v___y_572_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v_a_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_603_; 
v_a_593_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_593_);
lean_dec_ref(v___x_592_);
lean_inc(v_a_591_);
v___x_594_ = l_Lean_mkAppB(v_a_591_, v_val_566_, v_a_593_);
v___x_595_ = l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___redArg(v_mvarId_563_, v___x_594_, v___y_570_, v___y_572_);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_595_);
if (v_isSharedCheck_603_ == 0)
{
lean_object* v_unused_604_; 
v_unused_604_ = lean_ctor_get(v___x_595_, 0);
lean_dec(v_unused_604_);
v___x_597_ = v___x_595_;
v_isShared_598_ = v_isSharedCheck_603_;
goto v_resetjp_596_;
}
else
{
lean_dec(v___x_595_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_603_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_599_; lean_object* v___x_601_; 
v___x_599_ = l_Lean_Expr_mvarId_x21(v_a_591_);
lean_dec(v_a_591_);
if (v_isShared_598_ == 0)
{
lean_ctor_set(v___x_597_, 0, v___x_599_);
v___x_601_ = v___x_597_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v___x_599_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_612_; 
lean_dec(v_a_591_);
lean_dec_ref(v_val_566_);
lean_dec(v_mvarId_563_);
v_a_605_ = lean_ctor_get(v___x_592_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_592_);
if (v_isSharedCheck_612_ == 0)
{
v___x_607_ = v___x_592_;
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_a_605_);
lean_dec(v___x_592_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_612_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_610_; 
if (v_isShared_608_ == 0)
{
v___x_610_ = v___x_607_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_611_; 
v_reuseFailAlloc_611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_611_, 0, v_a_605_);
v___x_610_ = v_reuseFailAlloc_611_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
return v___x_610_;
}
}
}
}
else
{
lean_object* v_a_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_620_; 
lean_dec_ref(v_val_566_);
lean_dec(v_mvarId_563_);
v_a_613_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_620_ == 0)
{
v___x_615_ = v___x_590_;
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_a_613_);
lean_dec(v___x_590_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_620_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
lean_object* v___x_618_; 
if (v_isShared_616_ == 0)
{
v___x_618_ = v___x_615_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_a_613_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
}
else
{
lean_object* v_a_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
lean_dec(v_a_578_);
lean_dec(v_a_576_);
lean_dec(v_name_568_);
lean_dec(v_hName_567_);
lean_dec_ref(v_val_566_);
lean_dec_ref(v_type_565_);
lean_dec(v_mvarId_563_);
v_a_621_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_628_ == 0)
{
v___x_623_ = v___x_579_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_a_621_);
lean_dec(v___x_579_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_621_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
}
else
{
lean_object* v_a_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_636_; 
lean_dec(v_a_576_);
lean_dec(v_name_568_);
lean_dec(v_hName_567_);
lean_dec_ref(v_val_566_);
lean_dec_ref(v_type_565_);
lean_dec(v_mvarId_563_);
v_a_629_ = lean_ctor_get(v___x_577_, 0);
v_isSharedCheck_636_ = !lean_is_exclusive(v___x_577_);
if (v_isSharedCheck_636_ == 0)
{
v___x_631_ = v___x_577_;
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_a_629_);
lean_dec(v___x_577_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_636_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_634_; 
if (v_isShared_632_ == 0)
{
v___x_634_ = v___x_631_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_635_; 
v_reuseFailAlloc_635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_635_, 0, v_a_629_);
v___x_634_ = v_reuseFailAlloc_635_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
return v___x_634_;
}
}
}
}
else
{
lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_644_; 
lean_dec(v_name_568_);
lean_dec(v_hName_567_);
lean_dec_ref(v_val_566_);
lean_dec_ref(v_type_565_);
lean_dec(v_mvarId_563_);
v_a_637_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_644_ == 0)
{
v___x_639_ = v___x_575_;
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_dec(v___x_575_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_644_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
if (v_isShared_640_ == 0)
{
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v_a_637_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec(v_name_568_);
lean_dec(v_hName_567_);
lean_dec_ref(v_val_566_);
lean_dec_ref(v_type_565_);
lean_dec(v_mvarId_563_);
v_a_645_ = lean_ctor_get(v___x_574_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_574_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_574_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_574_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertExt___lam__0___boxed(lean_object* v_mvarId_653_, lean_object* v___x_654_, lean_object* v_type_655_, lean_object* v_val_656_, lean_object* v_hName_657_, lean_object* v_name_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_, lean_object* v___y_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = l_Lean_MVarId_assertExt___lam__0(v_mvarId_653_, v___x_654_, v_type_655_, v_val_656_, v_hName_657_, v_name_658_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
lean_dec(v___y_662_);
lean_dec_ref(v___y_661_);
lean_dec(v___y_660_);
lean_dec_ref(v___y_659_);
return v_res_664_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertExt(lean_object* v_mvarId_665_, lean_object* v_name_666_, lean_object* v_type_667_, lean_object* v_val_668_, lean_object* v_hName_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_){
_start:
{
lean_object* v___x_675_; lean_object* v___f_676_; lean_object* v___x_677_; 
v___x_675_ = lean_obj_once(&l_Lean_MVarId_assert___closed__1, &l_Lean_MVarId_assert___closed__1_once, _init_l_Lean_MVarId_assert___closed__1);
lean_inc(v_mvarId_665_);
v___f_676_ = lean_alloc_closure((void*)(l_Lean_MVarId_assertExt___lam__0___boxed), 11, 6);
lean_closure_set(v___f_676_, 0, v_mvarId_665_);
lean_closure_set(v___f_676_, 1, v___x_675_);
lean_closure_set(v___f_676_, 2, v_type_667_);
lean_closure_set(v___f_676_, 3, v_val_668_);
lean_closure_set(v___f_676_, 4, v_hName_669_);
lean_closure_set(v___f_676_, 5, v_name_666_);
v___x_677_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg(v_mvarId_665_, v___f_676_, v_a_670_, v_a_671_, v_a_672_, v_a_673_);
return v___x_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertExt___boxed(lean_object* v_mvarId_678_, lean_object* v_name_679_, lean_object* v_type_680_, lean_object* v_val_681_, lean_object* v_hName_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_){
_start:
{
lean_object* v_res_688_; 
v_res_688_ = l_Lean_MVarId_assertExt(v_mvarId_678_, v_name_679_, v_type_680_, v_val_681_, v_hName_682_, v_a_683_, v_a_684_, v_a_685_, v_a_686_);
lean_dec(v_a_686_);
lean_dec_ref(v_a_685_);
lean_dec(v_a_684_);
lean_dec_ref(v_a_683_);
return v_res_688_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0___redArg(lean_object* v_as_689_, size_t v_sz_690_, size_t v_i_691_, lean_object* v_b_692_){
_start:
{
uint8_t v___x_694_; 
v___x_694_ = lean_usize_dec_lt(v_i_691_, v_sz_690_);
if (v___x_694_ == 0)
{
lean_object* v___x_695_; 
v___x_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_695_, 0, v_b_692_);
return v___x_695_;
}
else
{
lean_object* v_snd_696_; lean_object* v_fst_697_; lean_object* v___x_699_; uint8_t v_isShared_700_; uint8_t v_isSharedCheck_731_; 
v_snd_696_ = lean_ctor_get(v_b_692_, 1);
v_fst_697_ = lean_ctor_get(v_b_692_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v_b_692_);
if (v_isSharedCheck_731_ == 0)
{
v___x_699_ = v_b_692_;
v_isShared_700_ = v_isSharedCheck_731_;
goto v_resetjp_698_;
}
else
{
lean_inc(v_snd_696_);
lean_inc(v_fst_697_);
lean_dec(v_b_692_);
v___x_699_ = lean_box(0);
v_isShared_700_ = v_isSharedCheck_731_;
goto v_resetjp_698_;
}
v_resetjp_698_:
{
lean_object* v_array_701_; lean_object* v_start_702_; lean_object* v_stop_703_; uint8_t v___x_704_; 
v_array_701_ = lean_ctor_get(v_snd_696_, 0);
v_start_702_ = lean_ctor_get(v_snd_696_, 1);
v_stop_703_ = lean_ctor_get(v_snd_696_, 2);
v___x_704_ = lean_nat_dec_lt(v_start_702_, v_stop_703_);
if (v___x_704_ == 0)
{
lean_object* v___x_706_; 
if (v_isShared_700_ == 0)
{
v___x_706_ = v___x_699_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_fst_697_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v_snd_696_);
v___x_706_ = v_reuseFailAlloc_708_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
lean_object* v___x_707_; 
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
return v___x_707_;
}
}
else
{
lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_727_; 
lean_inc(v_stop_703_);
lean_inc(v_start_702_);
lean_inc_ref(v_array_701_);
v_isSharedCheck_727_ = !lean_is_exclusive(v_snd_696_);
if (v_isSharedCheck_727_ == 0)
{
lean_object* v_unused_728_; lean_object* v_unused_729_; lean_object* v_unused_730_; 
v_unused_728_ = lean_ctor_get(v_snd_696_, 2);
lean_dec(v_unused_728_);
v_unused_729_ = lean_ctor_get(v_snd_696_, 1);
lean_dec(v_unused_729_);
v_unused_730_ = lean_ctor_get(v_snd_696_, 0);
lean_dec(v_unused_730_);
v___x_710_ = v_snd_696_;
v_isShared_711_ = v_isSharedCheck_727_;
goto v_resetjp_709_;
}
else
{
lean_dec(v_snd_696_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_727_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v_a_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_717_; 
v_a_712_ = lean_array_uget_borrowed(v_as_689_, v_i_691_);
v___x_713_ = lean_array_fget(v_array_701_, v_start_702_);
v___x_714_ = lean_unsigned_to_nat(1u);
v___x_715_ = lean_nat_add(v_start_702_, v___x_714_);
lean_dec(v_start_702_);
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 1, v___x_715_);
v___x_717_ = v___x_710_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_726_; 
v_reuseFailAlloc_726_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_726_, 0, v_array_701_);
lean_ctor_set(v_reuseFailAlloc_726_, 1, v___x_715_);
lean_ctor_set(v_reuseFailAlloc_726_, 2, v_stop_703_);
v___x_717_ = v_reuseFailAlloc_726_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_721_; 
v___x_718_ = l_Lean_mkFVar(v___x_713_);
lean_inc(v_a_712_);
v___x_719_ = l_Lean_Meta_FVarSubst_insert(v_fst_697_, v_a_712_, v___x_718_);
if (v_isShared_700_ == 0)
{
lean_ctor_set(v___x_699_, 1, v___x_717_);
lean_ctor_set(v___x_699_, 0, v___x_719_);
v___x_721_ = v___x_699_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_719_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v___x_717_);
v___x_721_ = v_reuseFailAlloc_725_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
size_t v___x_722_; size_t v___x_723_; 
v___x_722_ = ((size_t)1ULL);
v___x_723_ = lean_usize_add(v_i_691_, v___x_722_);
v_i_691_ = v___x_723_;
v_b_692_ = v___x_721_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0___redArg___boxed(lean_object* v_as_732_, lean_object* v_sz_733_, lean_object* v_i_734_, lean_object* v_b_735_, lean_object* v___y_736_){
_start:
{
size_t v_sz_boxed_737_; size_t v_i_boxed_738_; lean_object* v_res_739_; 
v_sz_boxed_737_ = lean_unbox_usize(v_sz_733_);
lean_dec(v_sz_733_);
v_i_boxed_738_ = lean_unbox_usize(v_i_734_);
lean_dec(v_i_734_);
v_res_739_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0___redArg(v_as_732_, v_sz_boxed_737_, v_i_boxed_738_, v_b_735_);
lean_dec_ref(v_as_732_);
return v_res_739_;
}
}
static lean_object* _init_l_Lean_MVarId_assertAfter___closed__0(void){
_start:
{
lean_object* v___x_740_; 
v___x_740_ = lean_mk_string_unchecked("assertAfter", 11, 11);
return v___x_740_;
}
}
static lean_object* _init_l_Lean_MVarId_assertAfter___closed__1(void){
_start:
{
lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_741_ = lean_obj_once(&l_Lean_MVarId_assertAfter___closed__0, &l_Lean_MVarId_assertAfter___closed__0_once, _init_l_Lean_MVarId_assertAfter___closed__0);
v___x_742_ = l_Lean_Name_mkStr1(v___x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertAfter(lean_object* v_mvarId_743_, lean_object* v_fvarId_744_, lean_object* v_userName_745_, lean_object* v_type_746_, lean_object* v_val_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = lean_obj_once(&l_Lean_MVarId_assertAfter___closed__1, &l_Lean_MVarId_assertAfter___closed__1_once, _init_l_Lean_MVarId_assertAfter___closed__1);
lean_inc(v_mvarId_743_);
v___x_754_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_743_, v___x_753_, v_a_748_, v_a_749_, v_a_750_, v_a_751_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v___x_755_; 
lean_dec_ref(v___x_754_);
v___x_755_ = l_Lean_MVarId_revertAfter(v_mvarId_743_, v_fvarId_744_, v_a_748_, v_a_749_, v_a_750_, v_a_751_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_object* v_a_756_; lean_object* v_fst_757_; lean_object* v_snd_758_; lean_object* v___x_759_; 
v_a_756_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_756_);
lean_dec_ref(v___x_755_);
v_fst_757_ = lean_ctor_get(v_a_756_, 0);
lean_inc(v_fst_757_);
v_snd_758_ = lean_ctor_get(v_a_756_, 1);
lean_inc(v_snd_758_);
lean_dec(v_a_756_);
v___x_759_ = l_Lean_MVarId_assert(v_snd_758_, v_userName_745_, v_type_746_, v_val_747_, v_a_748_, v_a_749_, v_a_750_, v_a_751_);
if (lean_obj_tag(v___x_759_) == 0)
{
lean_object* v_a_760_; uint8_t v___x_761_; lean_object* v___x_762_; 
v_a_760_ = lean_ctor_get(v___x_759_, 0);
lean_inc(v_a_760_);
lean_dec_ref(v___x_759_);
v___x_761_ = 1;
v___x_762_ = l_Lean_Meta_intro1Core(v_a_760_, v___x_761_, v_a_748_, v_a_749_, v_a_750_, v_a_751_);
if (lean_obj_tag(v___x_762_) == 0)
{
lean_object* v_a_763_; lean_object* v_fst_764_; lean_object* v_snd_765_; lean_object* v___x_766_; lean_object* v___x_767_; uint8_t v___x_768_; lean_object* v___x_769_; 
v_a_763_ = lean_ctor_get(v___x_762_, 0);
lean_inc(v_a_763_);
lean_dec_ref(v___x_762_);
v_fst_764_ = lean_ctor_get(v_a_763_, 0);
lean_inc(v_fst_764_);
v_snd_765_ = lean_ctor_get(v_a_763_, 1);
lean_inc(v_snd_765_);
lean_dec(v_a_763_);
v___x_766_ = lean_array_get_size(v_fst_757_);
v___x_767_ = lean_box(0);
v___x_768_ = 0;
v___x_769_ = l_Lean_Meta_introNCore(v_snd_765_, v___x_766_, v___x_767_, v___x_768_, v___x_761_, v_a_748_, v_a_749_, v_a_750_, v_a_751_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; lean_object* v_fst_771_; lean_object* v_snd_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_804_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref(v___x_769_);
v_fst_771_ = lean_ctor_get(v_a_770_, 0);
v_snd_772_ = lean_ctor_get(v_a_770_, 1);
v_isSharedCheck_804_ = !lean_is_exclusive(v_a_770_);
if (v_isSharedCheck_804_ == 0)
{
v___x_774_ = v_a_770_;
v_isShared_775_ = v_isSharedCheck_804_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_snd_772_);
lean_inc(v_fst_771_);
lean_dec(v_a_770_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_804_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_781_; 
v___x_776_ = lean_box(0);
v___x_777_ = lean_unsigned_to_nat(0u);
v___x_778_ = lean_array_get_size(v_fst_771_);
v___x_779_ = l_Array_toSubarray___redArg(v_fst_771_, v___x_777_, v___x_778_);
if (v_isShared_775_ == 0)
{
lean_ctor_set(v___x_774_, 1, v___x_779_);
lean_ctor_set(v___x_774_, 0, v___x_776_);
v___x_781_ = v___x_774_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_803_; 
v_reuseFailAlloc_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_803_, 0, v___x_776_);
lean_ctor_set(v_reuseFailAlloc_803_, 1, v___x_779_);
v___x_781_ = v_reuseFailAlloc_803_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
size_t v_sz_782_; size_t v___x_783_; lean_object* v___x_784_; 
v_sz_782_ = lean_array_size(v_fst_757_);
v___x_783_ = ((size_t)0ULL);
v___x_784_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0___redArg(v_fst_757_, v_sz_782_, v___x_783_, v___x_781_);
lean_dec(v_fst_757_);
if (lean_obj_tag(v___x_784_) == 0)
{
lean_object* v_a_785_; lean_object* v___x_787_; uint8_t v_isShared_788_; uint8_t v_isSharedCheck_794_; 
v_a_785_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_794_ == 0)
{
v___x_787_ = v___x_784_;
v_isShared_788_ = v_isSharedCheck_794_;
goto v_resetjp_786_;
}
else
{
lean_inc(v_a_785_);
lean_dec(v___x_784_);
v___x_787_ = lean_box(0);
v_isShared_788_ = v_isSharedCheck_794_;
goto v_resetjp_786_;
}
v_resetjp_786_:
{
lean_object* v_fst_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v_fst_789_ = lean_ctor_get(v_a_785_, 0);
lean_inc(v_fst_789_);
lean_dec(v_a_785_);
v___x_790_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_790_, 0, v_fst_764_);
lean_ctor_set(v___x_790_, 1, v_snd_772_);
lean_ctor_set(v___x_790_, 2, v_fst_789_);
if (v_isShared_788_ == 0)
{
lean_ctor_set(v___x_787_, 0, v___x_790_);
v___x_792_ = v___x_787_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v___x_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
else
{
lean_object* v_a_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_802_; 
lean_dec(v_snd_772_);
lean_dec(v_fst_764_);
v_a_795_ = lean_ctor_get(v___x_784_, 0);
v_isSharedCheck_802_ = !lean_is_exclusive(v___x_784_);
if (v_isSharedCheck_802_ == 0)
{
v___x_797_ = v___x_784_;
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_a_795_);
lean_dec(v___x_784_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_802_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
lean_object* v___x_800_; 
if (v_isShared_798_ == 0)
{
v___x_800_ = v___x_797_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_a_795_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
}
}
}
}
else
{
lean_object* v_a_805_; lean_object* v___x_807_; uint8_t v_isShared_808_; uint8_t v_isSharedCheck_812_; 
lean_dec(v_fst_764_);
lean_dec(v_fst_757_);
v_a_805_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_812_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_812_ == 0)
{
v___x_807_ = v___x_769_;
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
else
{
lean_inc(v_a_805_);
lean_dec(v___x_769_);
v___x_807_ = lean_box(0);
v_isShared_808_ = v_isSharedCheck_812_;
goto v_resetjp_806_;
}
v_resetjp_806_:
{
lean_object* v___x_810_; 
if (v_isShared_808_ == 0)
{
v___x_810_ = v___x_807_;
goto v_reusejp_809_;
}
else
{
lean_object* v_reuseFailAlloc_811_; 
v_reuseFailAlloc_811_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_811_, 0, v_a_805_);
v___x_810_ = v_reuseFailAlloc_811_;
goto v_reusejp_809_;
}
v_reusejp_809_:
{
return v___x_810_;
}
}
}
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_dec(v_fst_757_);
v_a_813_ = lean_ctor_get(v___x_762_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_762_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_762_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_762_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
else
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_828_; 
lean_dec(v_fst_757_);
v_a_821_ = lean_ctor_get(v___x_759_, 0);
v_isSharedCheck_828_ = !lean_is_exclusive(v___x_759_);
if (v_isSharedCheck_828_ == 0)
{
v___x_823_ = v___x_759_;
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_759_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_828_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v___x_826_; 
if (v_isShared_824_ == 0)
{
v___x_826_ = v___x_823_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v_a_821_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
else
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_836_; 
lean_dec_ref(v_val_747_);
lean_dec_ref(v_type_746_);
lean_dec(v_userName_745_);
v_a_829_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_836_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_836_ == 0)
{
v___x_831_ = v___x_755_;
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_755_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_836_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_a_829_);
v___x_834_ = v_reuseFailAlloc_835_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
return v___x_834_;
}
}
}
}
else
{
lean_object* v_a_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_844_; 
lean_dec_ref(v_val_747_);
lean_dec_ref(v_type_746_);
lean_dec(v_userName_745_);
lean_dec(v_fvarId_744_);
lean_dec(v_mvarId_743_);
v_a_837_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_844_ == 0)
{
v___x_839_ = v___x_754_;
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_a_837_);
lean_dec(v___x_754_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_844_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_842_; 
if (v_isShared_840_ == 0)
{
v___x_842_ = v___x_839_;
goto v_reusejp_841_;
}
else
{
lean_object* v_reuseFailAlloc_843_; 
v_reuseFailAlloc_843_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_843_, 0, v_a_837_);
v___x_842_ = v_reuseFailAlloc_843_;
goto v_reusejp_841_;
}
v_reusejp_841_:
{
return v___x_842_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertAfter___boxed(lean_object* v_mvarId_845_, lean_object* v_fvarId_846_, lean_object* v_userName_847_, lean_object* v_type_848_, lean_object* v_val_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_MVarId_assertAfter(v_mvarId_845_, v_fvarId_846_, v_userName_847_, v_type_848_, v_val_849_, v_a_850_, v_a_851_, v_a_852_, v_a_853_);
lean_dec(v_a_853_);
lean_dec_ref(v_a_852_);
lean_dec(v_a_851_);
lean_dec_ref(v_a_850_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0(lean_object* v_as_856_, size_t v_sz_857_, size_t v_i_858_, lean_object* v_b_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0___redArg(v_as_856_, v_sz_857_, v_i_858_, v_b_859_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0___boxed(lean_object* v_as_866_, lean_object* v_sz_867_, lean_object* v_i_868_, lean_object* v_b_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
size_t v_sz_boxed_875_; size_t v_i_boxed_876_; lean_object* v_res_877_; 
v_sz_boxed_875_ = lean_unbox_usize(v_sz_867_);
lean_dec(v_sz_867_);
v_i_boxed_876_ = lean_unbox_usize(v_i_868_);
lean_dec(v_i_868_);
v_res_877_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_MVarId_assertAfter_spec__0(v_as_866_, v_sz_boxed_875_, v_i_boxed_876_, v_b_869_, v___y_870_, v___y_871_, v___y_872_, v___y_873_);
lean_dec(v___y_873_);
lean_dec_ref(v___y_872_);
lean_dec(v___y_871_);
lean_dec_ref(v___y_870_);
lean_dec_ref(v_as_866_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1___redArg(lean_object* v_mvarId_878_, lean_object* v_f_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v_mctx_885_; lean_object* v_cache_886_; lean_object* v_zetaDeltaFVarIds_887_; lean_object* v_postponed_888_; lean_object* v_diag_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_900_; 
v___x_883_ = lean_st_ref_get(v___y_881_);
lean_dec(v___x_883_);
v___x_884_ = lean_st_ref_take(v___y_880_);
v_mctx_885_ = lean_ctor_get(v___x_884_, 0);
v_cache_886_ = lean_ctor_get(v___x_884_, 1);
v_zetaDeltaFVarIds_887_ = lean_ctor_get(v___x_884_, 2);
v_postponed_888_ = lean_ctor_get(v___x_884_, 3);
v_diag_889_ = lean_ctor_get(v___x_884_, 4);
v_isSharedCheck_900_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_900_ == 0)
{
v___x_891_ = v___x_884_;
v_isShared_892_ = v_isSharedCheck_900_;
goto v_resetjp_890_;
}
else
{
lean_inc(v_diag_889_);
lean_inc(v_postponed_888_);
lean_inc(v_zetaDeltaFVarIds_887_);
lean_inc(v_cache_886_);
lean_inc(v_mctx_885_);
lean_dec(v___x_884_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_900_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; lean_object* v___x_895_; 
v___x_893_ = l_Lean_MetavarContext_modifyExprMVarLCtx(v_mctx_885_, v_mvarId_878_, v_f_879_);
if (v_isShared_892_ == 0)
{
lean_ctor_set(v___x_891_, 0, v___x_893_);
v___x_895_ = v___x_891_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_899_; 
v_reuseFailAlloc_899_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_899_, 0, v___x_893_);
lean_ctor_set(v_reuseFailAlloc_899_, 1, v_cache_886_);
lean_ctor_set(v_reuseFailAlloc_899_, 2, v_zetaDeltaFVarIds_887_);
lean_ctor_set(v_reuseFailAlloc_899_, 3, v_postponed_888_);
lean_ctor_set(v_reuseFailAlloc_899_, 4, v_diag_889_);
v___x_895_ = v_reuseFailAlloc_899_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v___x_896_ = lean_st_ref_set(v___y_880_, v___x_895_);
v___x_897_ = lean_box(0);
v___x_898_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_898_, 0, v___x_897_);
return v___x_898_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1___redArg___boxed(lean_object* v_mvarId_901_, lean_object* v_f_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1___redArg(v_mvarId_901_, v_f_902_, v___y_903_, v___y_904_);
lean_dec(v___y_904_);
lean_dec(v___y_903_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1(lean_object* v_mvarId_907_, lean_object* v_f_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v___x_914_; 
v___x_914_ = l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1___redArg(v_mvarId_907_, v_f_908_, v___y_910_, v___y_912_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1___boxed(lean_object* v_mvarId_915_, lean_object* v_f_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1(v_mvarId_915_, v_f_916_, v___y_917_, v___y_918_, v___y_919_, v___y_920_);
lean_dec(v___y_920_);
lean_dec_ref(v___y_919_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0___redArg(lean_object* v_upperBound_923_, lean_object* v_hs_924_, lean_object* v_fst_925_, lean_object* v___x_926_, lean_object* v_a_927_, lean_object* v_b_928_){
_start:
{
lean_object* v_a_930_; uint8_t v___x_934_; 
v___x_934_ = lean_nat_dec_lt(v_a_927_, v_upperBound_923_);
if (v___x_934_ == 0)
{
lean_dec(v_a_927_);
return v_b_928_;
}
else
{
lean_object* v___x_935_; uint8_t v_kind_936_; uint8_t v___x_941_; uint8_t v___x_942_; 
v___x_935_ = lean_array_fget_borrowed(v_hs_924_, v_a_927_);
v_kind_936_ = lean_ctor_get_uint8(v___x_935_, sizeof(void*)*3 + 1);
v___x_941_ = 0;
v___x_942_ = l_Lean_instDecidableEqLocalDeclKind(v_kind_936_, v___x_941_);
if (v___x_942_ == 0)
{
goto v___jp_937_;
}
else
{
lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_943_ = lean_unsigned_to_nat(0u);
v___x_944_ = lean_nat_dec_eq(v___x_926_, v___x_943_);
if (v___x_944_ == 0)
{
v_a_930_ = v_b_928_;
goto v___jp_929_;
}
else
{
goto v___jp_937_;
}
}
v___jp_937_:
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_938_ = lean_box(0);
v___x_939_ = lean_array_get_borrowed(v___x_938_, v_fst_925_, v_a_927_);
lean_inc(v___x_939_);
v___x_940_ = l_Lean_LocalContext_setKind(v_b_928_, v___x_939_, v_kind_936_);
v_a_930_ = v___x_940_;
goto v___jp_929_;
}
}
v___jp_929_:
{
lean_object* v___x_931_; lean_object* v___x_932_; 
v___x_931_ = lean_unsigned_to_nat(1u);
v___x_932_ = lean_nat_add(v_a_927_, v___x_931_);
lean_dec(v_a_927_);
v_a_927_ = v___x_932_;
v_b_928_ = v_a_930_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0___redArg___boxed(lean_object* v_upperBound_945_, lean_object* v_hs_946_, lean_object* v_fst_947_, lean_object* v___x_948_, lean_object* v_a_949_, lean_object* v_b_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0___redArg(v_upperBound_945_, v_hs_946_, v_fst_947_, v___x_948_, v_a_949_, v_b_950_);
lean_dec(v___x_948_);
lean_dec_ref(v_fst_947_);
lean_dec_ref(v_hs_946_);
lean_dec(v_upperBound_945_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses___lam__0(lean_object* v___x_952_, lean_object* v_hs_953_, lean_object* v_fst_954_, lean_object* v___x_955_, lean_object* v_lctx_956_){
_start:
{
lean_object* v___x_957_; 
v___x_957_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0___redArg(v___x_952_, v_hs_953_, v_fst_954_, v___x_952_, v___x_955_, v_lctx_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses___lam__0___boxed(lean_object* v___x_958_, lean_object* v_hs_959_, lean_object* v_fst_960_, lean_object* v___x_961_, lean_object* v_lctx_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lean_MVarId_assertHypotheses___lam__0(v___x_958_, v_hs_959_, v_fst_960_, v___x_961_, v_lctx_962_);
lean_dec_ref(v_fst_960_);
lean_dec_ref(v_hs_959_);
lean_dec(v___x_958_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__2(lean_object* v_as_964_, size_t v_i_965_, size_t v_stop_966_, lean_object* v_b_967_){
_start:
{
uint8_t v___x_968_; 
v___x_968_ = lean_usize_dec_eq(v_i_965_, v_stop_966_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; lean_object* v_value_970_; lean_object* v___x_971_; size_t v___x_972_; size_t v___x_973_; 
v___x_969_ = lean_array_uget_borrowed(v_as_964_, v_i_965_);
v_value_970_ = lean_ctor_get(v___x_969_, 2);
lean_inc_ref(v_value_970_);
v___x_971_ = l_Lean_Expr_app___override(v_b_967_, v_value_970_);
v___x_972_ = ((size_t)1ULL);
v___x_973_ = lean_usize_add(v_i_965_, v___x_972_);
v_i_965_ = v___x_973_;
v_b_967_ = v___x_971_;
goto _start;
}
else
{
return v_b_967_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__2___boxed(lean_object* v_as_975_, lean_object* v_i_976_, lean_object* v_stop_977_, lean_object* v_b_978_){
_start:
{
size_t v_i_boxed_979_; size_t v_stop_boxed_980_; lean_object* v_res_981_; 
v_i_boxed_979_ = lean_unbox_usize(v_i_976_);
lean_dec(v_i_976_);
v_stop_boxed_980_ = lean_unbox_usize(v_stop_977_);
lean_dec(v_stop_977_);
v_res_981_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__2(v_as_975_, v_i_boxed_979_, v_stop_boxed_980_, v_b_978_);
lean_dec_ref(v_as_975_);
return v_res_981_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__3(lean_object* v_as_982_, size_t v_i_983_, size_t v_stop_984_, lean_object* v_b_985_){
_start:
{
uint8_t v___x_986_; 
v___x_986_ = lean_usize_dec_eq(v_i_983_, v_stop_984_);
if (v___x_986_ == 0)
{
size_t v___x_987_; size_t v___x_988_; lean_object* v___x_989_; lean_object* v_userName_990_; lean_object* v_type_991_; uint8_t v_binderInfo_992_; lean_object* v___x_993_; 
v___x_987_ = ((size_t)1ULL);
v___x_988_ = lean_usize_sub(v_i_983_, v___x_987_);
v___x_989_ = lean_array_uget_borrowed(v_as_982_, v___x_988_);
v_userName_990_ = lean_ctor_get(v___x_989_, 0);
v_type_991_ = lean_ctor_get(v___x_989_, 1);
v_binderInfo_992_ = lean_ctor_get_uint8(v___x_989_, sizeof(void*)*3);
lean_inc_ref(v_type_991_);
lean_inc(v_userName_990_);
v___x_993_ = l_Lean_Expr_forallE___override(v_userName_990_, v_type_991_, v_b_985_, v_binderInfo_992_);
v_i_983_ = v___x_988_;
v_b_985_ = v___x_993_;
goto _start;
}
else
{
return v_b_985_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__3___boxed(lean_object* v_as_995_, lean_object* v_i_996_, lean_object* v_stop_997_, lean_object* v_b_998_){
_start:
{
size_t v_i_boxed_999_; size_t v_stop_boxed_1000_; lean_object* v_res_1001_; 
v_i_boxed_999_ = lean_unbox_usize(v_i_996_);
lean_dec(v_i_996_);
v_stop_boxed_1000_ = lean_unbox_usize(v_stop_997_);
lean_dec(v_stop_997_);
v_res_1001_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__3(v_as_995_, v_i_boxed_999_, v_stop_boxed_1000_, v_b_998_);
lean_dec_ref(v_as_995_);
return v_res_1001_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses___lam__1(lean_object* v_mvarId_1002_, lean_object* v___x_1003_, lean_object* v___x_1004_, uint8_t v___x_1005_, lean_object* v_hs_1006_, lean_object* v___x_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_){
_start:
{
lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___x_1034_; 
lean_inc(v_mvarId_1002_);
v___x_1034_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1002_, v___x_1003_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1034_) == 0)
{
lean_object* v___x_1035_; 
lean_dec_ref(v___x_1034_);
lean_inc(v_mvarId_1002_);
v___x_1035_ = l_Lean_MVarId_getTag(v_mvarId_1002_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1037_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_a_1036_);
lean_dec_ref(v___x_1035_);
lean_inc(v_mvarId_1002_);
v___x_1037_ = l_Lean_MVarId_getType(v_mvarId_1002_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___y_1040_; uint8_t v___x_1059_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
lean_inc(v_a_1038_);
lean_dec_ref(v___x_1037_);
v___x_1059_ = lean_nat_dec_lt(v___x_1007_, v___x_1004_);
if (v___x_1059_ == 0)
{
v___y_1040_ = v_a_1038_;
goto v___jp_1039_;
}
else
{
size_t v___x_1060_; size_t v___x_1061_; lean_object* v___x_1062_; 
v___x_1060_ = lean_usize_of_nat(v___x_1004_);
v___x_1061_ = ((size_t)0ULL);
v___x_1062_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__3(v_hs_1006_, v___x_1060_, v___x_1061_, v_a_1038_);
v___y_1040_ = v___x_1062_;
goto v___jp_1039_;
}
v___jp_1039_:
{
lean_object* v___x_1041_; 
v___x_1041_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___y_1040_, v_a_1036_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v_a_1042_; uint8_t v___x_1043_; 
v_a_1042_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_a_1042_);
lean_dec_ref(v___x_1041_);
v___x_1043_ = lean_nat_dec_lt(v___x_1007_, v___x_1004_);
if (v___x_1043_ == 0)
{
lean_inc(v_a_1042_);
v___y_1014_ = v_a_1042_;
v___y_1015_ = v_a_1042_;
goto v___jp_1013_;
}
else
{
uint8_t v___x_1044_; 
v___x_1044_ = lean_nat_dec_le(v___x_1004_, v___x_1004_);
if (v___x_1044_ == 0)
{
if (v___x_1043_ == 0)
{
lean_inc(v_a_1042_);
v___y_1014_ = v_a_1042_;
v___y_1015_ = v_a_1042_;
goto v___jp_1013_;
}
else
{
size_t v___x_1045_; size_t v___x_1046_; lean_object* v___x_1047_; 
v___x_1045_ = ((size_t)0ULL);
v___x_1046_ = lean_usize_of_nat(v___x_1004_);
lean_inc(v_a_1042_);
v___x_1047_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__2(v_hs_1006_, v___x_1045_, v___x_1046_, v_a_1042_);
v___y_1014_ = v_a_1042_;
v___y_1015_ = v___x_1047_;
goto v___jp_1013_;
}
}
else
{
size_t v___x_1048_; size_t v___x_1049_; lean_object* v___x_1050_; 
v___x_1048_ = ((size_t)0ULL);
v___x_1049_ = lean_usize_of_nat(v___x_1004_);
lean_inc(v_a_1042_);
v___x_1050_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_assertHypotheses_spec__2(v_hs_1006_, v___x_1048_, v___x_1049_, v_a_1042_);
v___y_1014_ = v_a_1042_;
v___y_1015_ = v___x_1050_;
goto v___jp_1013_;
}
}
}
else
{
lean_object* v_a_1051_; lean_object* v___x_1053_; uint8_t v_isShared_1054_; uint8_t v_isSharedCheck_1058_; 
lean_dec(v___x_1007_);
lean_dec_ref(v_hs_1006_);
lean_dec(v___x_1004_);
lean_dec(v_mvarId_1002_);
v_a_1051_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1053_ = v___x_1041_;
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
else
{
lean_inc(v_a_1051_);
lean_dec(v___x_1041_);
v___x_1053_ = lean_box(0);
v_isShared_1054_ = v_isSharedCheck_1058_;
goto v_resetjp_1052_;
}
v_resetjp_1052_:
{
lean_object* v___x_1056_; 
if (v_isShared_1054_ == 0)
{
v___x_1056_ = v___x_1053_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v_a_1051_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
}
}
}
else
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1070_; 
lean_dec(v_a_1036_);
lean_dec(v___x_1007_);
lean_dec_ref(v_hs_1006_);
lean_dec(v___x_1004_);
lean_dec(v_mvarId_1002_);
v_a_1063_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1070_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1065_ = v___x_1037_;
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1037_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1070_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1068_; 
if (v_isShared_1066_ == 0)
{
v___x_1068_ = v___x_1065_;
goto v_reusejp_1067_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v_a_1063_);
v___x_1068_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1067_;
}
v_reusejp_1067_:
{
return v___x_1068_;
}
}
}
}
else
{
lean_object* v_a_1071_; lean_object* v___x_1073_; uint8_t v_isShared_1074_; uint8_t v_isSharedCheck_1078_; 
lean_dec(v___x_1007_);
lean_dec_ref(v_hs_1006_);
lean_dec(v___x_1004_);
lean_dec(v_mvarId_1002_);
v_a_1071_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1078_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1078_ == 0)
{
v___x_1073_ = v___x_1035_;
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
else
{
lean_inc(v_a_1071_);
lean_dec(v___x_1035_);
v___x_1073_ = lean_box(0);
v_isShared_1074_ = v_isSharedCheck_1078_;
goto v_resetjp_1072_;
}
v_resetjp_1072_:
{
lean_object* v___x_1076_; 
if (v_isShared_1074_ == 0)
{
v___x_1076_ = v___x_1073_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v_a_1071_);
v___x_1076_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
return v___x_1076_;
}
}
}
}
else
{
lean_object* v_a_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1086_; 
lean_dec(v___x_1007_);
lean_dec_ref(v_hs_1006_);
lean_dec(v___x_1004_);
lean_dec(v_mvarId_1002_);
v_a_1079_ = lean_ctor_get(v___x_1034_, 0);
v_isSharedCheck_1086_ = !lean_is_exclusive(v___x_1034_);
if (v_isSharedCheck_1086_ == 0)
{
v___x_1081_ = v___x_1034_;
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_a_1079_);
lean_dec(v___x_1034_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1086_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1084_; 
if (v_isShared_1082_ == 0)
{
v___x_1084_ = v___x_1081_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v_a_1079_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
v___jp_1013_:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; uint8_t v___x_1019_; lean_object* v___x_1020_; 
v___x_1016_ = l_Lean_MVarId_assign___at___00Lean_MVarId_assert_spec__0___redArg(v_mvarId_1002_, v___y_1015_, v___y_1009_, v___y_1011_);
lean_dec_ref(v___x_1016_);
v___x_1017_ = l_Lean_Expr_mvarId_x21(v___y_1014_);
lean_dec_ref(v___y_1014_);
v___x_1018_ = lean_box(0);
v___x_1019_ = 1;
lean_inc(v___x_1004_);
v___x_1020_ = l_Lean_Meta_introNCore(v___x_1017_, v___x_1004_, v___x_1018_, v___x_1005_, v___x_1019_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_);
if (lean_obj_tag(v___x_1020_) == 0)
{
lean_object* v_a_1021_; lean_object* v_fst_1022_; lean_object* v_snd_1023_; lean_object* v___f_1024_; lean_object* v___x_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_a_1021_);
lean_dec_ref(v___x_1020_);
v_fst_1022_ = lean_ctor_get(v_a_1021_, 0);
v_snd_1023_ = lean_ctor_get(v_a_1021_, 1);
lean_inc(v_fst_1022_);
v___f_1024_ = lean_alloc_closure((void*)(l_Lean_MVarId_assertHypotheses___lam__0___boxed), 5, 4);
lean_closure_set(v___f_1024_, 0, v___x_1004_);
lean_closure_set(v___f_1024_, 1, v_hs_1006_);
lean_closure_set(v___f_1024_, 2, v_fst_1022_);
lean_closure_set(v___f_1024_, 3, v___x_1007_);
lean_inc(v_snd_1023_);
v___x_1025_ = l_Lean_MVarId_modifyLCtx___at___00Lean_MVarId_assertHypotheses_spec__1___redArg(v_snd_1023_, v___f_1024_, v___y_1009_, v___y_1011_);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1025_);
if (v_isSharedCheck_1032_ == 0)
{
lean_object* v_unused_1033_; 
v_unused_1033_ = lean_ctor_get(v___x_1025_, 0);
lean_dec(v_unused_1033_);
v___x_1027_ = v___x_1025_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_dec(v___x_1025_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
lean_ctor_set(v___x_1027_, 0, v_a_1021_);
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1021_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
else
{
lean_dec(v___x_1007_);
lean_dec_ref(v_hs_1006_);
lean_dec(v___x_1004_);
return v___x_1020_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses___lam__1___boxed(lean_object* v_mvarId_1087_, lean_object* v___x_1088_, lean_object* v___x_1089_, lean_object* v___x_1090_, lean_object* v_hs_1091_, lean_object* v___x_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_){
_start:
{
uint8_t v___x_3376__boxed_1098_; lean_object* v_res_1099_; 
v___x_3376__boxed_1098_ = lean_unbox(v___x_1090_);
v_res_1099_ = l_Lean_MVarId_assertHypotheses___lam__1(v_mvarId_1087_, v___x_1088_, v___x_1089_, v___x_3376__boxed_1098_, v_hs_1091_, v___x_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_);
lean_dec(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1093_);
return v_res_1099_;
}
}
static lean_object* _init_l_Lean_MVarId_assertHypotheses___closed__0(void){
_start:
{
lean_object* v___x_1100_; 
v___x_1100_ = lean_mk_string_unchecked("assertHypotheses", 16, 16);
return v___x_1100_;
}
}
static lean_object* _init_l_Lean_MVarId_assertHypotheses___closed__1(void){
_start:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1101_ = lean_obj_once(&l_Lean_MVarId_assertHypotheses___closed__0, &l_Lean_MVarId_assertHypotheses___closed__0_once, _init_l_Lean_MVarId_assertHypotheses___closed__0);
v___x_1102_ = l_Lean_Name_mkStr1(v___x_1101_);
return v___x_1102_;
}
}
static lean_object* _init_l_Lean_MVarId_assertHypotheses___closed__2(void){
_start:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1103_ = lean_unsigned_to_nat(0u);
v___x_1104_ = lean_mk_empty_array_with_capacity(v___x_1103_);
return v___x_1104_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses(lean_object* v_mvarId_1105_, lean_object* v_hs_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; uint8_t v___x_1114_; 
v___x_1112_ = lean_array_get_size(v_hs_1106_);
v___x_1113_ = lean_unsigned_to_nat(0u);
v___x_1114_ = lean_nat_dec_eq(v___x_1112_, v___x_1113_);
if (v___x_1114_ == 0)
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___f_1117_; lean_object* v___x_1118_; 
v___x_1115_ = lean_obj_once(&l_Lean_MVarId_assertHypotheses___closed__1, &l_Lean_MVarId_assertHypotheses___closed__1_once, _init_l_Lean_MVarId_assertHypotheses___closed__1);
v___x_1116_ = lean_box(v___x_1114_);
lean_inc(v_mvarId_1105_);
v___f_1117_ = lean_alloc_closure((void*)(l_Lean_MVarId_assertHypotheses___lam__1___boxed), 11, 6);
lean_closure_set(v___f_1117_, 0, v_mvarId_1105_);
lean_closure_set(v___f_1117_, 1, v___x_1115_);
lean_closure_set(v___f_1117_, 2, v___x_1112_);
lean_closure_set(v___f_1117_, 3, v___x_1116_);
lean_closure_set(v___f_1117_, 4, v_hs_1106_);
lean_closure_set(v___f_1117_, 5, v___x_1113_);
v___x_1118_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg(v_mvarId_1105_, v___f_1117_, v_a_1107_, v_a_1108_, v_a_1109_, v_a_1110_);
return v___x_1118_;
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
lean_dec_ref(v_hs_1106_);
v___x_1119_ = lean_obj_once(&l_Lean_MVarId_assertHypotheses___closed__2, &l_Lean_MVarId_assertHypotheses___closed__2_once, _init_l_Lean_MVarId_assertHypotheses___closed__2);
v___x_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1120_, 0, v___x_1119_);
lean_ctor_set(v___x_1120_, 1, v_mvarId_1105_);
v___x_1121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1120_);
return v___x_1121_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assertHypotheses___boxed(lean_object* v_mvarId_1122_, lean_object* v_hs_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Lean_MVarId_assertHypotheses(v_mvarId_1122_, v_hs_1123_, v_a_1124_, v_a_1125_, v_a_1126_, v_a_1127_);
lean_dec(v_a_1127_);
lean_dec_ref(v_a_1126_);
lean_dec(v_a_1125_);
lean_dec_ref(v_a_1124_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0(lean_object* v_upperBound_1130_, lean_object* v_hs_1131_, lean_object* v_fst_1132_, lean_object* v___x_1133_, lean_object* v_inst_1134_, lean_object* v_R_1135_, lean_object* v_a_1136_, lean_object* v_b_1137_, lean_object* v_c_1138_){
_start:
{
lean_object* v___x_1139_; 
v___x_1139_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0___redArg(v_upperBound_1130_, v_hs_1131_, v_fst_1132_, v___x_1133_, v_a_1136_, v_b_1137_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0___boxed(lean_object* v_upperBound_1140_, lean_object* v_hs_1141_, lean_object* v_fst_1142_, lean_object* v___x_1143_, lean_object* v_inst_1144_, lean_object* v_R_1145_, lean_object* v_a_1146_, lean_object* v_b_1147_, lean_object* v_c_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_WellFounded_opaqueFix_u2083___at___00Lean_MVarId_assertHypotheses_spec__0(v_upperBound_1140_, v_hs_1141_, v_fst_1142_, v___x_1143_, v_inst_1144_, v_R_1145_, v_a_1146_, v_b_1147_, v_c_1148_);
lean_dec(v___x_1143_);
lean_dec_ref(v_fst_1142_);
lean_dec_ref(v_hs_1141_);
lean_dec(v_upperBound_1140_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___lam__0(lean_object* v_e_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
uint8_t v___x_1157_; 
v___x_1157_ = l_Lean_Expr_isFVar(v_e_1150_);
if (v___x_1157_ == 0)
{
uint8_t v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1158_ = l_Lean_Expr_hasFVar(v_e_1150_);
v___x_1159_ = lean_box(v___x_1158_);
v___x_1160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1159_);
return v___x_1160_;
}
else
{
lean_object* v___x_1161_; lean_object* v___x_1162_; 
v___x_1161_ = l_Lean_Expr_fvarId_x21(v_e_1150_);
v___x_1162_ = l_Lean_FVarId_getDecl___redArg(v___x_1161_, v___y_1152_, v___y_1154_, v___y_1155_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1180_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1180_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1180_ == 0)
{
v___x_1165_ = v___x_1162_;
v_isShared_1166_ = v_isSharedCheck_1180_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1162_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1180_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v_snd_1170_; lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; 
v___x_1167_ = lean_st_ref_get(v___y_1155_);
lean_dec(v___x_1167_);
v___x_1168_ = lean_st_ref_take(v___y_1151_);
v___x_1177_ = l_Lean_LocalDecl_index(v___x_1168_);
v___x_1178_ = l_Lean_LocalDecl_index(v_a_1163_);
v___x_1179_ = lean_nat_dec_lt(v___x_1177_, v___x_1178_);
lean_dec(v___x_1178_);
lean_dec(v___x_1177_);
if (v___x_1179_ == 0)
{
lean_dec(v_a_1163_);
v_snd_1170_ = v___x_1168_;
goto v___jp_1169_;
}
else
{
lean_dec(v___x_1168_);
v_snd_1170_ = v_a_1163_;
goto v___jp_1169_;
}
v___jp_1169_:
{
lean_object* v___x_1171_; uint8_t v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1175_; 
v___x_1171_ = lean_st_ref_set(v___y_1151_, v_snd_1170_);
v___x_1172_ = 0;
v___x_1173_ = lean_box(v___x_1172_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 0, v___x_1173_);
v___x_1175_ = v___x_1165_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v___x_1173_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
else
{
lean_object* v_a_1181_; lean_object* v___x_1183_; uint8_t v_isShared_1184_; uint8_t v_isSharedCheck_1188_; 
v_a_1181_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1188_ == 0)
{
v___x_1183_ = v___x_1162_;
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
else
{
lean_inc(v_a_1181_);
lean_dec(v___x_1162_);
v___x_1183_ = lean_box(0);
v_isShared_1184_ = v_isSharedCheck_1188_;
goto v_resetjp_1182_;
}
v_resetjp_1182_:
{
lean_object* v___x_1186_; 
if (v_isShared_1184_ == 0)
{
v___x_1186_ = v___x_1183_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v_a_1181_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___lam__0___boxed(lean_object* v_e_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___lam__0(v_e_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, v___y_1194_);
lean_dec(v___y_1194_);
lean_dec_ref(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec_ref(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec_ref(v_e_1189_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__5___redArg(lean_object* v_a_1197_, lean_object* v_b_1198_, lean_object* v_x_1199_){
_start:
{
if (lean_obj_tag(v_x_1199_) == 0)
{
lean_dec(v_b_1198_);
lean_dec_ref(v_a_1197_);
return v_x_1199_;
}
else
{
lean_object* v_key_1200_; lean_object* v_value_1201_; lean_object* v_tail_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1214_; 
v_key_1200_ = lean_ctor_get(v_x_1199_, 0);
v_value_1201_ = lean_ctor_get(v_x_1199_, 1);
v_tail_1202_ = lean_ctor_get(v_x_1199_, 2);
v_isSharedCheck_1214_ = !lean_is_exclusive(v_x_1199_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1204_ = v_x_1199_;
v_isShared_1205_ = v_isSharedCheck_1214_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_tail_1202_);
lean_inc(v_value_1201_);
lean_inc(v_key_1200_);
lean_dec(v_x_1199_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1214_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
uint8_t v___x_1206_; 
v___x_1206_ = lean_expr_eqv(v_key_1200_, v_a_1197_);
if (v___x_1206_ == 0)
{
lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1207_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__5___redArg(v_a_1197_, v_b_1198_, v_tail_1202_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 2, v___x_1207_);
v___x_1209_ = v___x_1204_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_key_1200_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v_value_1201_);
lean_ctor_set(v_reuseFailAlloc_1210_, 2, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
else
{
lean_object* v___x_1212_; 
lean_dec(v_value_1201_);
lean_dec(v_key_1200_);
if (v_isShared_1205_ == 0)
{
lean_ctor_set(v___x_1204_, 1, v_b_1198_);
lean_ctor_set(v___x_1204_, 0, v_a_1197_);
v___x_1212_ = v___x_1204_;
goto v_reusejp_1211_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_a_1197_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v_b_1198_);
lean_ctor_set(v_reuseFailAlloc_1213_, 2, v_tail_1202_);
v___x_1212_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1211_;
}
v_reusejp_1211_:
{
return v___x_1212_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(lean_object* v_x_1215_, lean_object* v_x_1216_){
_start:
{
if (lean_obj_tag(v_x_1216_) == 0)
{
return v_x_1215_;
}
else
{
lean_object* v_key_1217_; lean_object* v_value_1218_; lean_object* v_tail_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1242_; 
v_key_1217_ = lean_ctor_get(v_x_1216_, 0);
v_value_1218_ = lean_ctor_get(v_x_1216_, 1);
v_tail_1219_ = lean_ctor_get(v_x_1216_, 2);
v_isSharedCheck_1242_ = !lean_is_exclusive(v_x_1216_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1221_ = v_x_1216_;
v_isShared_1222_ = v_isSharedCheck_1242_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_tail_1219_);
lean_inc(v_value_1218_);
lean_inc(v_key_1217_);
lean_dec(v_x_1216_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1242_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1223_; uint64_t v___x_1224_; uint64_t v___x_1225_; uint64_t v___x_1226_; uint64_t v_fold_1227_; uint64_t v___x_1228_; uint64_t v___x_1229_; uint64_t v___x_1230_; size_t v___x_1231_; size_t v___x_1232_; size_t v___x_1233_; size_t v___x_1234_; size_t v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1238_; 
v___x_1223_ = lean_array_get_size(v_x_1215_);
v___x_1224_ = l_Lean_Expr_hash(v_key_1217_);
v___x_1225_ = 32ULL;
v___x_1226_ = lean_uint64_shift_right(v___x_1224_, v___x_1225_);
v_fold_1227_ = lean_uint64_xor(v___x_1224_, v___x_1226_);
v___x_1228_ = 16ULL;
v___x_1229_ = lean_uint64_shift_right(v_fold_1227_, v___x_1228_);
v___x_1230_ = lean_uint64_xor(v_fold_1227_, v___x_1229_);
v___x_1231_ = lean_uint64_to_usize(v___x_1230_);
v___x_1232_ = lean_usize_of_nat(v___x_1223_);
v___x_1233_ = ((size_t)1ULL);
v___x_1234_ = lean_usize_sub(v___x_1232_, v___x_1233_);
v___x_1235_ = lean_usize_land(v___x_1231_, v___x_1234_);
v___x_1236_ = lean_array_uget_borrowed(v_x_1215_, v___x_1235_);
lean_inc(v___x_1236_);
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 2, v___x_1236_);
v___x_1238_ = v___x_1221_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_key_1217_);
lean_ctor_set(v_reuseFailAlloc_1241_, 1, v_value_1218_);
lean_ctor_set(v_reuseFailAlloc_1241_, 2, v___x_1236_);
v___x_1238_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
lean_object* v___x_1239_; 
v___x_1239_ = lean_array_uset(v_x_1215_, v___x_1235_, v___x_1238_);
v_x_1215_ = v___x_1239_;
v_x_1216_ = v_tail_1219_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5___redArg(lean_object* v_i_1243_, lean_object* v_source_1244_, lean_object* v_target_1245_){
_start:
{
lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1246_ = lean_array_get_size(v_source_1244_);
v___x_1247_ = lean_nat_dec_lt(v_i_1243_, v___x_1246_);
if (v___x_1247_ == 0)
{
lean_dec_ref(v_source_1244_);
lean_dec(v_i_1243_);
return v_target_1245_;
}
else
{
lean_object* v_es_1248_; lean_object* v___x_1249_; lean_object* v_source_1250_; lean_object* v_target_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v_es_1248_ = lean_array_fget(v_source_1244_, v_i_1243_);
v___x_1249_ = lean_box(0);
v_source_1250_ = lean_array_fset(v_source_1244_, v_i_1243_, v___x_1249_);
v_target_1251_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_target_1245_, v_es_1248_);
v___x_1252_ = lean_unsigned_to_nat(1u);
v___x_1253_ = lean_nat_add(v_i_1243_, v___x_1252_);
lean_dec(v_i_1243_);
v_i_1243_ = v___x_1253_;
v_source_1244_ = v_source_1250_;
v_target_1245_ = v_target_1251_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4___redArg(lean_object* v_data_1255_){
_start:
{
lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v_nbuckets_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1256_ = lean_array_get_size(v_data_1255_);
v___x_1257_ = lean_unsigned_to_nat(2u);
v_nbuckets_1258_ = lean_nat_mul(v___x_1256_, v___x_1257_);
v___x_1259_ = lean_unsigned_to_nat(0u);
v___x_1260_ = lean_box(0);
v___x_1261_ = lean_mk_array(v_nbuckets_1258_, v___x_1260_);
v___x_1262_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5___redArg(v___x_1259_, v_data_1255_, v___x_1261_);
return v___x_1262_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3___redArg(lean_object* v_a_1263_, lean_object* v_x_1264_){
_start:
{
if (lean_obj_tag(v_x_1264_) == 0)
{
uint8_t v___x_1265_; 
v___x_1265_ = 0;
return v___x_1265_;
}
else
{
lean_object* v_key_1266_; lean_object* v_tail_1267_; uint8_t v___x_1268_; 
v_key_1266_ = lean_ctor_get(v_x_1264_, 0);
v_tail_1267_ = lean_ctor_get(v_x_1264_, 2);
v___x_1268_ = lean_expr_eqv(v_key_1266_, v_a_1263_);
if (v___x_1268_ == 0)
{
v_x_1264_ = v_tail_1267_;
goto _start;
}
else
{
return v___x_1268_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_a_1270_, lean_object* v_x_1271_){
_start:
{
uint8_t v_res_1272_; lean_object* v_r_1273_; 
v_res_1272_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3___redArg(v_a_1270_, v_x_1271_);
lean_dec(v_x_1271_);
lean_dec_ref(v_a_1270_);
v_r_1273_ = lean_box(v_res_1272_);
return v_r_1273_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1___redArg(lean_object* v_m_1274_, lean_object* v_a_1275_, lean_object* v_b_1276_){
_start:
{
lean_object* v_size_1277_; lean_object* v_buckets_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1321_; 
v_size_1277_ = lean_ctor_get(v_m_1274_, 0);
v_buckets_1278_ = lean_ctor_get(v_m_1274_, 1);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_m_1274_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1280_ = v_m_1274_;
v_isShared_1281_ = v_isSharedCheck_1321_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_buckets_1278_);
lean_inc(v_size_1277_);
lean_dec(v_m_1274_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1321_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1282_; uint64_t v___x_1283_; uint64_t v___x_1284_; uint64_t v___x_1285_; uint64_t v_fold_1286_; uint64_t v___x_1287_; uint64_t v___x_1288_; uint64_t v___x_1289_; size_t v___x_1290_; size_t v___x_1291_; size_t v___x_1292_; size_t v___x_1293_; size_t v___x_1294_; lean_object* v_bkt_1295_; uint8_t v___x_1296_; 
v___x_1282_ = lean_array_get_size(v_buckets_1278_);
v___x_1283_ = l_Lean_Expr_hash(v_a_1275_);
v___x_1284_ = 32ULL;
v___x_1285_ = lean_uint64_shift_right(v___x_1283_, v___x_1284_);
v_fold_1286_ = lean_uint64_xor(v___x_1283_, v___x_1285_);
v___x_1287_ = 16ULL;
v___x_1288_ = lean_uint64_shift_right(v_fold_1286_, v___x_1287_);
v___x_1289_ = lean_uint64_xor(v_fold_1286_, v___x_1288_);
v___x_1290_ = lean_uint64_to_usize(v___x_1289_);
v___x_1291_ = lean_usize_of_nat(v___x_1282_);
v___x_1292_ = ((size_t)1ULL);
v___x_1293_ = lean_usize_sub(v___x_1291_, v___x_1292_);
v___x_1294_ = lean_usize_land(v___x_1290_, v___x_1293_);
v_bkt_1295_ = lean_array_uget_borrowed(v_buckets_1278_, v___x_1294_);
v___x_1296_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3___redArg(v_a_1275_, v_bkt_1295_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1297_; lean_object* v_size_x27_1298_; lean_object* v___x_1299_; lean_object* v_buckets_x27_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; uint8_t v___x_1306_; 
v___x_1297_ = lean_unsigned_to_nat(1u);
v_size_x27_1298_ = lean_nat_add(v_size_1277_, v___x_1297_);
lean_dec(v_size_1277_);
lean_inc(v_bkt_1295_);
v___x_1299_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1299_, 0, v_a_1275_);
lean_ctor_set(v___x_1299_, 1, v_b_1276_);
lean_ctor_set(v___x_1299_, 2, v_bkt_1295_);
v_buckets_x27_1300_ = lean_array_uset(v_buckets_1278_, v___x_1294_, v___x_1299_);
v___x_1301_ = lean_unsigned_to_nat(4u);
v___x_1302_ = lean_nat_mul(v_size_x27_1298_, v___x_1301_);
v___x_1303_ = lean_unsigned_to_nat(3u);
v___x_1304_ = lean_nat_div(v___x_1302_, v___x_1303_);
lean_dec(v___x_1302_);
v___x_1305_ = lean_array_get_size(v_buckets_x27_1300_);
v___x_1306_ = lean_nat_dec_le(v___x_1304_, v___x_1305_);
lean_dec(v___x_1304_);
if (v___x_1306_ == 0)
{
lean_object* v_val_1307_; lean_object* v___x_1309_; 
v_val_1307_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4___redArg(v_buckets_x27_1300_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 1, v_val_1307_);
lean_ctor_set(v___x_1280_, 0, v_size_x27_1298_);
v___x_1309_ = v___x_1280_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v_size_x27_1298_);
lean_ctor_set(v_reuseFailAlloc_1310_, 1, v_val_1307_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
else
{
lean_object* v___x_1312_; 
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 1, v_buckets_x27_1300_);
lean_ctor_set(v___x_1280_, 0, v_size_x27_1298_);
v___x_1312_ = v___x_1280_;
goto v_reusejp_1311_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v_size_x27_1298_);
lean_ctor_set(v_reuseFailAlloc_1313_, 1, v_buckets_x27_1300_);
v___x_1312_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1311_;
}
v_reusejp_1311_:
{
return v___x_1312_;
}
}
}
else
{
lean_object* v___x_1314_; lean_object* v_buckets_x27_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1319_; 
lean_inc(v_bkt_1295_);
v___x_1314_ = lean_box(0);
v_buckets_x27_1315_ = lean_array_uset(v_buckets_1278_, v___x_1294_, v___x_1314_);
v___x_1316_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__5___redArg(v_a_1275_, v_b_1276_, v_bkt_1295_);
v___x_1317_ = lean_array_uset(v_buckets_x27_1315_, v___x_1294_, v___x_1316_);
if (v_isShared_1281_ == 0)
{
lean_ctor_set(v___x_1280_, 1, v___x_1317_);
v___x_1319_ = v___x_1280_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_size_1277_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1___redArg(lean_object* v_a_1322_, lean_object* v_x_1323_){
_start:
{
if (lean_obj_tag(v_x_1323_) == 0)
{
lean_object* v___x_1324_; 
v___x_1324_ = lean_box(0);
return v___x_1324_;
}
else
{
lean_object* v_key_1325_; lean_object* v_value_1326_; lean_object* v_tail_1327_; uint8_t v___x_1328_; 
v_key_1325_ = lean_ctor_get(v_x_1323_, 0);
v_value_1326_ = lean_ctor_get(v_x_1323_, 1);
v_tail_1327_ = lean_ctor_get(v_x_1323_, 2);
v___x_1328_ = lean_expr_eqv(v_key_1325_, v_a_1322_);
if (v___x_1328_ == 0)
{
v_x_1323_ = v_tail_1327_;
goto _start;
}
else
{
lean_object* v___x_1330_; 
lean_inc(v_value_1326_);
v___x_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1330_, 0, v_value_1326_);
return v___x_1330_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_a_1331_, lean_object* v_x_1332_){
_start:
{
lean_object* v_res_1333_; 
v_res_1333_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1___redArg(v_a_1331_, v_x_1332_);
lean_dec(v_x_1332_);
lean_dec_ref(v_a_1331_);
return v_res_1333_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0___redArg(lean_object* v_m_1334_, lean_object* v_a_1335_){
_start:
{
lean_object* v_buckets_1336_; lean_object* v___x_1337_; uint64_t v___x_1338_; uint64_t v___x_1339_; uint64_t v___x_1340_; uint64_t v_fold_1341_; uint64_t v___x_1342_; uint64_t v___x_1343_; uint64_t v___x_1344_; size_t v___x_1345_; size_t v___x_1346_; size_t v___x_1347_; size_t v___x_1348_; size_t v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
v_buckets_1336_ = lean_ctor_get(v_m_1334_, 1);
v___x_1337_ = lean_array_get_size(v_buckets_1336_);
v___x_1338_ = l_Lean_Expr_hash(v_a_1335_);
v___x_1339_ = 32ULL;
v___x_1340_ = lean_uint64_shift_right(v___x_1338_, v___x_1339_);
v_fold_1341_ = lean_uint64_xor(v___x_1338_, v___x_1340_);
v___x_1342_ = 16ULL;
v___x_1343_ = lean_uint64_shift_right(v_fold_1341_, v___x_1342_);
v___x_1344_ = lean_uint64_xor(v_fold_1341_, v___x_1343_);
v___x_1345_ = lean_uint64_to_usize(v___x_1344_);
v___x_1346_ = lean_usize_of_nat(v___x_1337_);
v___x_1347_ = ((size_t)1ULL);
v___x_1348_ = lean_usize_sub(v___x_1346_, v___x_1347_);
v___x_1349_ = lean_usize_land(v___x_1345_, v___x_1348_);
v___x_1350_ = lean_array_uget_borrowed(v_buckets_1336_, v___x_1349_);
v___x_1351_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1___redArg(v_a_1335_, v___x_1350_);
return v___x_1351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0___redArg___boxed(lean_object* v_m_1352_, lean_object* v_a_1353_){
_start:
{
lean_object* v_res_1354_; 
v_res_1354_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0___redArg(v_m_1352_, v_a_1353_);
lean_dec_ref(v_a_1353_);
lean_dec_ref(v_m_1352_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(lean_object* v_g_1355_, lean_object* v_e_1356_, lean_object* v_a_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_){
_start:
{
lean_object* v_a_1365_; lean_object* v___y_1372_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1374_ = lean_st_ref_get(v___y_1362_);
lean_dec(v___x_1374_);
v___x_1375_ = lean_st_ref_get(v_a_1357_);
v___x_1376_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0___redArg(v___x_1375_, v_e_1356_);
lean_dec(v___x_1375_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_object* v___x_1377_; 
lean_inc_ref(v_g_1355_);
lean_inc(v___y_1362_);
lean_inc_ref(v___y_1361_);
lean_inc(v___y_1360_);
lean_inc_ref(v___y_1359_);
lean_inc(v___y_1358_);
lean_inc_ref(v_e_1356_);
v___x_1377_ = lean_apply_7(v_g_1355_, v_e_1356_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_, lean_box(0));
if (lean_obj_tag(v___x_1377_) == 0)
{
lean_object* v_a_1378_; lean_object* v_d_1380_; lean_object* v_b_1381_; lean_object* v___y_1382_; uint8_t v___x_1385_; 
v_a_1378_ = lean_ctor_get(v___x_1377_, 0);
lean_inc(v_a_1378_);
lean_dec_ref(v___x_1377_);
v___x_1385_ = lean_unbox(v_a_1378_);
lean_dec(v_a_1378_);
if (v___x_1385_ == 0)
{
lean_object* v___x_1386_; 
lean_dec_ref(v_g_1355_);
v___x_1386_ = lean_box(0);
v_a_1365_ = v___x_1386_;
goto v___jp_1364_;
}
else
{
switch(lean_obj_tag(v_e_1356_))
{
case 7:
{
lean_object* v_binderType_1387_; lean_object* v_body_1388_; 
v_binderType_1387_ = lean_ctor_get(v_e_1356_, 1);
v_body_1388_ = lean_ctor_get(v_e_1356_, 2);
lean_inc_ref(v_body_1388_);
lean_inc_ref(v_binderType_1387_);
v_d_1380_ = v_binderType_1387_;
v_b_1381_ = v_body_1388_;
v___y_1382_ = v_a_1357_;
goto v___jp_1379_;
}
case 6:
{
lean_object* v_binderType_1389_; lean_object* v_body_1390_; 
v_binderType_1389_ = lean_ctor_get(v_e_1356_, 1);
v_body_1390_ = lean_ctor_get(v_e_1356_, 2);
lean_inc_ref(v_body_1390_);
lean_inc_ref(v_binderType_1389_);
v_d_1380_ = v_binderType_1389_;
v_b_1381_ = v_body_1390_;
v___y_1382_ = v_a_1357_;
goto v___jp_1379_;
}
case 8:
{
lean_object* v_type_1391_; lean_object* v_value_1392_; lean_object* v_body_1393_; lean_object* v___x_1394_; 
v_type_1391_ = lean_ctor_get(v_e_1356_, 1);
v_value_1392_ = lean_ctor_get(v_e_1356_, 2);
v_body_1393_ = lean_ctor_get(v_e_1356_, 3);
lean_inc_ref(v_type_1391_);
lean_inc_ref(v_g_1355_);
v___x_1394_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v_g_1355_, v_type_1391_, v_a_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
if (lean_obj_tag(v___x_1394_) == 0)
{
lean_object* v___x_1395_; 
lean_dec_ref(v___x_1394_);
lean_inc_ref(v_value_1392_);
lean_inc_ref(v_g_1355_);
v___x_1395_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v_g_1355_, v_value_1392_, v_a_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
if (lean_obj_tag(v___x_1395_) == 0)
{
lean_object* v___x_1396_; 
lean_dec_ref(v___x_1395_);
lean_inc_ref(v_body_1393_);
v___x_1396_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v_g_1355_, v_body_1393_, v_a_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
v___y_1372_ = v___x_1396_;
goto v___jp_1371_;
}
else
{
lean_dec_ref(v_g_1355_);
v___y_1372_ = v___x_1395_;
goto v___jp_1371_;
}
}
else
{
lean_dec_ref(v_g_1355_);
v___y_1372_ = v___x_1394_;
goto v___jp_1371_;
}
}
case 5:
{
lean_object* v_fn_1397_; lean_object* v_arg_1398_; lean_object* v___x_1399_; 
v_fn_1397_ = lean_ctor_get(v_e_1356_, 0);
v_arg_1398_ = lean_ctor_get(v_e_1356_, 1);
lean_inc_ref(v_fn_1397_);
lean_inc_ref(v_g_1355_);
v___x_1399_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v_g_1355_, v_fn_1397_, v_a_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
if (lean_obj_tag(v___x_1399_) == 0)
{
lean_object* v___x_1400_; 
lean_dec_ref(v___x_1399_);
lean_inc_ref(v_arg_1398_);
v___x_1400_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v_g_1355_, v_arg_1398_, v_a_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
v___y_1372_ = v___x_1400_;
goto v___jp_1371_;
}
else
{
lean_dec_ref(v_g_1355_);
v___y_1372_ = v___x_1399_;
goto v___jp_1371_;
}
}
case 10:
{
lean_object* v_expr_1401_; lean_object* v___x_1402_; 
v_expr_1401_ = lean_ctor_get(v_e_1356_, 1);
lean_inc_ref(v_expr_1401_);
v___x_1402_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v_g_1355_, v_expr_1401_, v_a_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
v___y_1372_ = v___x_1402_;
goto v___jp_1371_;
}
case 11:
{
lean_object* v_struct_1403_; lean_object* v___x_1404_; 
v_struct_1403_ = lean_ctor_get(v_e_1356_, 2);
lean_inc_ref(v_struct_1403_);
v___x_1404_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v_g_1355_, v_struct_1403_, v_a_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
v___y_1372_ = v___x_1404_;
goto v___jp_1371_;
}
default: 
{
lean_object* v___x_1405_; 
lean_dec_ref(v_g_1355_);
v___x_1405_ = lean_box(0);
v_a_1365_ = v___x_1405_;
goto v___jp_1364_;
}
}
}
v___jp_1379_:
{
lean_object* v___x_1383_; 
lean_inc_ref(v_g_1355_);
v___x_1383_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v_g_1355_, v_d_1380_, v___y_1382_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
if (lean_obj_tag(v___x_1383_) == 0)
{
lean_object* v___x_1384_; 
lean_dec_ref(v___x_1383_);
v___x_1384_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v_g_1355_, v_b_1381_, v___y_1382_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
v___y_1372_ = v___x_1384_;
goto v___jp_1371_;
}
else
{
lean_dec_ref(v_b_1381_);
lean_dec_ref(v_g_1355_);
v___y_1372_ = v___x_1383_;
goto v___jp_1371_;
}
}
}
else
{
lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1413_; 
lean_dec_ref(v_e_1356_);
lean_dec_ref(v_g_1355_);
v_a_1406_ = lean_ctor_get(v___x_1377_, 0);
v_isSharedCheck_1413_ = !lean_is_exclusive(v___x_1377_);
if (v_isSharedCheck_1413_ == 0)
{
v___x_1408_ = v___x_1377_;
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1377_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1413_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1411_; 
if (v_isShared_1409_ == 0)
{
v___x_1411_ = v___x_1408_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_a_1406_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
else
{
lean_object* v_val_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1421_; 
lean_dec_ref(v_e_1356_);
lean_dec_ref(v_g_1355_);
v_val_1414_ = lean_ctor_get(v___x_1376_, 0);
v_isSharedCheck_1421_ = !lean_is_exclusive(v___x_1376_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1416_ = v___x_1376_;
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_val_1414_);
lean_dec(v___x_1376_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1421_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1419_; 
if (v_isShared_1417_ == 0)
{
lean_ctor_set_tag(v___x_1416_, 0);
v___x_1419_ = v___x_1416_;
goto v_reusejp_1418_;
}
else
{
lean_object* v_reuseFailAlloc_1420_; 
v_reuseFailAlloc_1420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1420_, 0, v_val_1414_);
v___x_1419_ = v_reuseFailAlloc_1420_;
goto v_reusejp_1418_;
}
v_reusejp_1418_:
{
return v___x_1419_;
}
}
}
v___jp_1364_:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1366_ = lean_st_ref_get(v___y_1362_);
lean_dec(v___x_1366_);
v___x_1367_ = lean_st_ref_take(v_a_1357_);
v___x_1368_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1___redArg(v___x_1367_, v_e_1356_, v_a_1365_);
v___x_1369_ = lean_st_ref_set(v_a_1357_, v___x_1368_);
v___x_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1370_, 0, v_a_1365_);
return v___x_1370_;
}
v___jp_1371_:
{
if (lean_obj_tag(v___y_1372_) == 0)
{
lean_object* v_a_1373_; 
v_a_1373_ = lean_ctor_get(v___y_1372_, 0);
lean_inc(v_a_1373_);
lean_dec_ref(v___y_1372_);
v_a_1365_ = v_a_1373_;
goto v___jp_1364_;
}
else
{
lean_dec_ref(v_e_1356_);
return v___y_1372_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0___boxed(lean_object* v_g_1422_, lean_object* v_e_1423_, lean_object* v_a_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v_g_1422_, v_e_1423_, v_a_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_);
lean_dec(v___y_1429_);
lean_dec_ref(v___y_1428_);
lean_dec(v___y_1427_);
lean_dec_ref(v___y_1426_);
lean_dec(v___y_1425_);
lean_dec(v_a_1424_);
return v_res_1431_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__0(void){
_start:
{
lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1432_ = lean_box(0);
v___x_1433_ = lean_unsigned_to_nat(16u);
v___x_1434_ = lean_mk_array(v___x_1433_, v___x_1432_);
return v___x_1434_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__1(void){
_start:
{
lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1435_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__0, &l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__0_once, _init_l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__0);
v___x_1436_ = lean_unsigned_to_nat(0u);
v___x_1437_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1437_, 0, v___x_1436_);
lean_ctor_set(v___x_1437_, 1, v___x_1435_);
return v___x_1437_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__2(void){
_start:
{
lean_object* v___f_1438_; 
v___f_1438_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___lam__0___boxed), 7, 0);
return v___f_1438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar(lean_object* v_e_1439_, lean_object* v_a_1440_, lean_object* v_a_1441_, lean_object* v_a_1442_, lean_object* v_a_1443_, lean_object* v_a_1444_){
_start:
{
lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___f_1449_; lean_object* v___x_1450_; 
v___x_1446_ = lean_st_ref_get(v_a_1444_);
lean_dec(v___x_1446_);
v___x_1447_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__1, &l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__1_once, _init_l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__1);
v___x_1448_ = lean_st_mk_ref(v___x_1447_);
v___f_1449_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__2, &l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__2_once, _init_l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___closed__2);
v___x_1450_ = l_Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0(v___f_1449_, v_e_1439_, v___x_1448_, v_a_1440_, v_a_1441_, v_a_1442_, v_a_1443_, v_a_1444_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1460_; 
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1453_ = v___x_1450_;
v_isShared_1454_ = v_isSharedCheck_1460_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1450_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1460_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1458_; 
v___x_1455_ = lean_st_ref_get(v_a_1444_);
lean_dec(v___x_1455_);
v___x_1456_ = lean_st_ref_get(v___x_1448_);
lean_dec(v___x_1448_);
lean_dec(v___x_1456_);
if (v_isShared_1454_ == 0)
{
v___x_1458_ = v___x_1453_;
goto v_reusejp_1457_;
}
else
{
lean_object* v_reuseFailAlloc_1459_; 
v_reuseFailAlloc_1459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1459_, 0, v_a_1451_);
v___x_1458_ = v_reuseFailAlloc_1459_;
goto v_reusejp_1457_;
}
v_reusejp_1457_:
{
return v___x_1458_;
}
}
}
else
{
lean_dec(v___x_1448_);
return v___x_1450_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar___boxed(lean_object* v_e_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar(v_e_1461_, v_a_1462_, v_a_1463_, v_a_1464_, v_a_1465_, v_a_1466_);
lean_dec(v_a_1466_);
lean_dec_ref(v_a_1465_);
lean_dec(v_a_1464_);
lean_dec_ref(v_a_1463_);
lean_dec(v_a_1462_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0(lean_object* v_00_u03b2_1469_, lean_object* v_m_1470_, lean_object* v_a_1471_){
_start:
{
lean_object* v___x_1472_; 
v___x_1472_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0___redArg(v_m_1470_, v_a_1471_);
return v___x_1472_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1473_, lean_object* v_m_1474_, lean_object* v_a_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0(v_00_u03b2_1473_, v_m_1474_, v_a_1475_);
lean_dec_ref(v_a_1475_);
lean_dec_ref(v_m_1474_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1(lean_object* v_00_u03b2_1477_, lean_object* v_m_1478_, lean_object* v_a_1479_, lean_object* v_b_1480_){
_start:
{
lean_object* v___x_1481_; 
v___x_1481_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1___redArg(v_m_1478_, v_a_1479_, v_b_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1482_, lean_object* v_a_1483_, lean_object* v_x_1484_){
_start:
{
lean_object* v___x_1485_; 
v___x_1485_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1___redArg(v_a_1483_, v_x_1484_);
return v___x_1485_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1486_, lean_object* v_a_1487_, lean_object* v_x_1488_){
_start:
{
lean_object* v_res_1489_; 
v_res_1489_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__0_spec__1(v_00_u03b2_1486_, v_a_1487_, v_x_1488_);
lean_dec(v_x_1488_);
lean_dec_ref(v_a_1487_);
return v_res_1489_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1490_, lean_object* v_a_1491_, lean_object* v_x_1492_){
_start:
{
uint8_t v___x_1493_; 
v___x_1493_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3___redArg(v_a_1491_, v_x_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1494_, lean_object* v_a_1495_, lean_object* v_x_1496_){
_start:
{
uint8_t v_res_1497_; lean_object* v_r_1498_; 
v_res_1497_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__3(v_00_u03b2_1494_, v_a_1495_, v_x_1496_);
lean_dec(v_x_1496_);
lean_dec_ref(v_a_1495_);
v_r_1498_ = lean_box(v_res_1497_);
return v_r_1498_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_1499_, lean_object* v_data_1500_){
_start:
{
lean_object* v___x_1501_; 
v___x_1501_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4___redArg(v_data_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_1502_, lean_object* v_a_1503_, lean_object* v_b_1504_, lean_object* v_x_1505_){
_start:
{
lean_object* v___x_1506_; 
v___x_1506_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__5___redArg(v_a_1503_, v_b_1504_, v_x_1505_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5(lean_object* v_00_u03b2_1507_, lean_object* v_i_1508_, lean_object* v_source_1509_, lean_object* v_target_1510_){
_start:
{
lean_object* v___x_1511_; 
v___x_1511_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5___redArg(v_i_1508_, v_source_1509_, v_target_1510_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5_spec__6(lean_object* v_00_u03b2_1512_, lean_object* v_x_1513_, lean_object* v_x_1514_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_ForEachExpr_visit___at___00__private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar_spec__0_spec__1_spec__4_spec__5_spec__6___redArg(v_x_1513_, v_x_1514_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_replace___lam__0(lean_object* v_hyp_1516_, lean_object* v_g_1517_, lean_object* v_proof_1518_, lean_object* v_typeNew_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v___x_1525_; 
lean_inc(v_hyp_1516_);
v___x_1525_ = l_Lean_FVarId_getDecl___redArg(v_hyp_1516_, v___y_1520_, v___y_1522_, v___y_1523_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v_a_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; 
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc_n(v_a_1526_, 2);
lean_dec_ref(v___x_1525_);
v___x_1527_ = lean_st_ref_get(v___y_1523_);
lean_dec(v___x_1527_);
v___x_1528_ = lean_st_mk_ref(v_a_1526_);
lean_inc_ref(v_typeNew_1519_);
v___x_1529_ = l___private_Lean_Meta_Tactic_Assert_0__Lean_MVarId_replace_findMaxFVar(v_typeNew_1519_, v___x_1528_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
if (lean_obj_tag(v___x_1529_) == 0)
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; 
lean_dec_ref(v___x_1529_);
v___x_1530_ = lean_st_ref_get(v___y_1523_);
lean_dec(v___x_1530_);
v___x_1531_ = lean_st_ref_get(v___x_1528_);
lean_dec(v___x_1528_);
v___x_1532_ = l_Lean_LocalDecl_fvarId(v___x_1531_);
lean_dec(v___x_1531_);
v___x_1533_ = l_Lean_LocalDecl_userName(v_a_1526_);
lean_dec(v_a_1526_);
v___x_1534_ = l_Lean_MVarId_assertAfter(v_g_1517_, v___x_1532_, v___x_1533_, v_typeNew_1519_, v_proof_1518_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; lean_object* v___x_1536_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
lean_dec_ref(v___x_1534_);
v___x_1536_ = l_Lean_Meta_saveState___redArg(v___y_1521_, v___y_1523_);
if (lean_obj_tag(v___x_1536_) == 0)
{
lean_object* v_a_1537_; lean_object* v_fvarId_1538_; lean_object* v_mvarId_1539_; lean_object* v_subst_1540_; lean_object* v___x_1541_; 
v_a_1537_ = lean_ctor_get(v___x_1536_, 0);
lean_inc(v_a_1537_);
lean_dec_ref(v___x_1536_);
v_fvarId_1538_ = lean_ctor_get(v_a_1535_, 0);
v_mvarId_1539_ = lean_ctor_get(v_a_1535_, 1);
v_subst_1540_ = lean_ctor_get(v_a_1535_, 2);
lean_inc(v_mvarId_1539_);
v___x_1541_ = l_Lean_MVarId_clear(v_mvarId_1539_, v_hyp_1516_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1556_; 
lean_inc(v_subst_1540_);
lean_inc(v_fvarId_1538_);
lean_dec(v_a_1537_);
v_isSharedCheck_1556_ = !lean_is_exclusive(v_a_1535_);
if (v_isSharedCheck_1556_ == 0)
{
lean_object* v_unused_1557_; lean_object* v_unused_1558_; lean_object* v_unused_1559_; 
v_unused_1557_ = lean_ctor_get(v_a_1535_, 2);
lean_dec(v_unused_1557_);
v_unused_1558_ = lean_ctor_get(v_a_1535_, 1);
lean_dec(v_unused_1558_);
v_unused_1559_ = lean_ctor_get(v_a_1535_, 0);
lean_dec(v_unused_1559_);
v___x_1543_ = v_a_1535_;
v_isShared_1544_ = v_isSharedCheck_1556_;
goto v_resetjp_1542_;
}
else
{
lean_dec(v_a_1535_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1556_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1555_; 
v_a_1545_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1547_ = v___x_1541_;
v_isShared_1548_ = v_isSharedCheck_1555_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1541_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1555_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 1, v_a_1545_);
v___x_1550_ = v___x_1543_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1554_; 
v_reuseFailAlloc_1554_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1554_, 0, v_fvarId_1538_);
lean_ctor_set(v_reuseFailAlloc_1554_, 1, v_a_1545_);
lean_ctor_set(v_reuseFailAlloc_1554_, 2, v_subst_1540_);
v___x_1550_ = v_reuseFailAlloc_1554_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
lean_object* v___x_1552_; 
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 0, v___x_1550_);
v___x_1552_ = v___x_1547_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
}
else
{
lean_object* v_a_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1588_; 
v_a_1560_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1588_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1588_ == 0)
{
v___x_1562_ = v___x_1541_;
v_isShared_1563_ = v_isSharedCheck_1588_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_a_1560_);
lean_dec(v___x_1541_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1588_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1565_; 
lean_inc(v_a_1560_);
if (v_isShared_1563_ == 0)
{
v___x_1565_ = v___x_1562_;
goto v_reusejp_1564_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_a_1560_);
v___x_1565_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1564_;
}
v_reusejp_1564_:
{
uint8_t v___y_1567_; uint8_t v___x_1585_; 
v___x_1585_ = l_Lean_Exception_isInterrupt(v_a_1560_);
if (v___x_1585_ == 0)
{
uint8_t v___x_1586_; 
v___x_1586_ = l_Lean_Exception_isRuntime(v_a_1560_);
v___y_1567_ = v___x_1586_;
goto v___jp_1566_;
}
else
{
lean_dec(v_a_1560_);
v___y_1567_ = v___x_1585_;
goto v___jp_1566_;
}
v___jp_1566_:
{
if (v___y_1567_ == 0)
{
lean_object* v___x_1568_; 
lean_dec_ref(v___x_1565_);
v___x_1568_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1537_, v___y_1521_, v___y_1523_);
lean_dec(v_a_1537_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v___x_1570_; uint8_t v_isShared_1571_; uint8_t v_isSharedCheck_1575_; 
v_isSharedCheck_1575_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1575_ == 0)
{
lean_object* v_unused_1576_; 
v_unused_1576_ = lean_ctor_get(v___x_1568_, 0);
lean_dec(v_unused_1576_);
v___x_1570_ = v___x_1568_;
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
else
{
lean_dec(v___x_1568_);
v___x_1570_ = lean_box(0);
v_isShared_1571_ = v_isSharedCheck_1575_;
goto v_resetjp_1569_;
}
v_resetjp_1569_:
{
lean_object* v___x_1573_; 
if (v_isShared_1571_ == 0)
{
lean_ctor_set(v___x_1570_, 0, v_a_1535_);
v___x_1573_ = v___x_1570_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v_a_1535_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
return v___x_1573_;
}
}
}
else
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1584_; 
lean_dec(v_a_1535_);
v_a_1577_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1584_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1584_ == 0)
{
v___x_1579_ = v___x_1568_;
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___x_1568_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1584_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
lean_object* v___x_1582_; 
if (v_isShared_1580_ == 0)
{
v___x_1582_ = v___x_1579_;
goto v_reusejp_1581_;
}
else
{
lean_object* v_reuseFailAlloc_1583_; 
v_reuseFailAlloc_1583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1583_, 0, v_a_1577_);
v___x_1582_ = v_reuseFailAlloc_1583_;
goto v_reusejp_1581_;
}
v_reusejp_1581_:
{
return v___x_1582_;
}
}
}
}
else
{
lean_dec(v_a_1537_);
lean_dec(v_a_1535_);
return v___x_1565_;
}
}
}
}
}
}
else
{
lean_object* v_a_1589_; lean_object* v___x_1591_; uint8_t v_isShared_1592_; uint8_t v_isSharedCheck_1596_; 
lean_dec(v_a_1535_);
lean_dec(v_hyp_1516_);
v_a_1589_ = lean_ctor_get(v___x_1536_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v___x_1536_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1591_ = v___x_1536_;
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
else
{
lean_inc(v_a_1589_);
lean_dec(v___x_1536_);
v___x_1591_ = lean_box(0);
v_isShared_1592_ = v_isSharedCheck_1596_;
goto v_resetjp_1590_;
}
v_resetjp_1590_:
{
lean_object* v___x_1594_; 
if (v_isShared_1592_ == 0)
{
v___x_1594_ = v___x_1591_;
goto v_reusejp_1593_;
}
else
{
lean_object* v_reuseFailAlloc_1595_; 
v_reuseFailAlloc_1595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1595_, 0, v_a_1589_);
v___x_1594_ = v_reuseFailAlloc_1595_;
goto v_reusejp_1593_;
}
v_reusejp_1593_:
{
return v___x_1594_;
}
}
}
}
else
{
lean_dec(v_hyp_1516_);
return v___x_1534_;
}
}
else
{
lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1604_; 
lean_dec(v___x_1528_);
lean_dec(v_a_1526_);
lean_dec_ref(v_typeNew_1519_);
lean_dec_ref(v_proof_1518_);
lean_dec(v_g_1517_);
lean_dec(v_hyp_1516_);
v_a_1597_ = lean_ctor_get(v___x_1529_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v___x_1529_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1599_ = v___x_1529_;
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v___x_1529_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v___x_1602_; 
if (v_isShared_1600_ == 0)
{
v___x_1602_ = v___x_1599_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v_a_1597_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
}
}
else
{
lean_object* v_a_1605_; lean_object* v___x_1607_; uint8_t v_isShared_1608_; uint8_t v_isSharedCheck_1612_; 
lean_dec_ref(v_typeNew_1519_);
lean_dec_ref(v_proof_1518_);
lean_dec(v_g_1517_);
lean_dec(v_hyp_1516_);
v_a_1605_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1612_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1612_ == 0)
{
v___x_1607_ = v___x_1525_;
v_isShared_1608_ = v_isSharedCheck_1612_;
goto v_resetjp_1606_;
}
else
{
lean_inc(v_a_1605_);
lean_dec(v___x_1525_);
v___x_1607_ = lean_box(0);
v_isShared_1608_ = v_isSharedCheck_1612_;
goto v_resetjp_1606_;
}
v_resetjp_1606_:
{
lean_object* v___x_1610_; 
if (v_isShared_1608_ == 0)
{
v___x_1610_ = v___x_1607_;
goto v_reusejp_1609_;
}
else
{
lean_object* v_reuseFailAlloc_1611_; 
v_reuseFailAlloc_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1611_, 0, v_a_1605_);
v___x_1610_ = v_reuseFailAlloc_1611_;
goto v_reusejp_1609_;
}
v_reusejp_1609_:
{
return v___x_1610_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_replace___lam__0___boxed(lean_object* v_hyp_1613_, lean_object* v_g_1614_, lean_object* v_proof_1615_, lean_object* v_typeNew_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_){
_start:
{
lean_object* v_res_1622_; 
v_res_1622_ = l_Lean_MVarId_replace___lam__0(v_hyp_1613_, v_g_1614_, v_proof_1615_, v_typeNew_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
return v_res_1622_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_replace___lam__1(lean_object* v_typeNew_1623_, lean_object* v_proof_1624_, lean_object* v___f_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_){
_start:
{
if (lean_obj_tag(v_typeNew_1623_) == 0)
{
lean_object* v___x_1631_; 
lean_inc(v___y_1629_);
lean_inc_ref(v___y_1628_);
lean_inc(v___y_1627_);
lean_inc_ref(v___y_1626_);
v___x_1631_ = lean_infer_type(v_proof_1624_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1633_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc(v_a_1632_);
lean_dec_ref(v___x_1631_);
lean_inc(v___y_1629_);
lean_inc_ref(v___y_1628_);
lean_inc(v___y_1627_);
lean_inc_ref(v___y_1626_);
v___x_1633_ = lean_apply_6(v___f_1625_, v_a_1632_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, lean_box(0));
return v___x_1633_;
}
else
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1641_; 
lean_dec_ref(v___f_1625_);
v_a_1634_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1636_ = v___x_1631_;
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1631_);
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
else
{
lean_object* v_val_1642_; lean_object* v___x_1643_; 
lean_dec_ref(v_proof_1624_);
v_val_1642_ = lean_ctor_get(v_typeNew_1623_, 0);
lean_inc(v_val_1642_);
lean_dec_ref(v_typeNew_1623_);
lean_inc(v___y_1629_);
lean_inc_ref(v___y_1628_);
lean_inc(v___y_1627_);
lean_inc_ref(v___y_1626_);
v___x_1643_ = lean_apply_6(v___f_1625_, v_val_1642_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, lean_box(0));
return v___x_1643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_replace___lam__1___boxed(lean_object* v_typeNew_1644_, lean_object* v_proof_1645_, lean_object* v___f_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v_res_1652_; 
v_res_1652_ = l_Lean_MVarId_replace___lam__1(v_typeNew_1644_, v_proof_1645_, v___f_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_);
lean_dec(v___y_1650_);
lean_dec_ref(v___y_1649_);
lean_dec(v___y_1648_);
lean_dec_ref(v___y_1647_);
return v_res_1652_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_replace(lean_object* v_g_1653_, lean_object* v_hyp_1654_, lean_object* v_proof_1655_, lean_object* v_typeNew_1656_, lean_object* v_a_1657_, lean_object* v_a_1658_, lean_object* v_a_1659_, lean_object* v_a_1660_){
_start:
{
lean_object* v___f_1662_; lean_object* v___y_1663_; lean_object* v___x_1664_; 
lean_inc_ref(v_proof_1655_);
lean_inc(v_g_1653_);
v___f_1662_ = lean_alloc_closure((void*)(l_Lean_MVarId_replace___lam__0___boxed), 9, 3);
lean_closure_set(v___f_1662_, 0, v_hyp_1654_);
lean_closure_set(v___f_1662_, 1, v_g_1653_);
lean_closure_set(v___f_1662_, 2, v_proof_1655_);
v___y_1663_ = lean_alloc_closure((void*)(l_Lean_MVarId_replace___lam__1___boxed), 8, 3);
lean_closure_set(v___y_1663_, 0, v_typeNew_1656_);
lean_closure_set(v___y_1663_, 1, v_proof_1655_);
lean_closure_set(v___y_1663_, 2, v___f_1662_);
v___x_1664_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_assert_spec__1___redArg(v_g_1653_, v___y_1663_, v_a_1657_, v_a_1658_, v_a_1659_, v_a_1660_);
return v___x_1664_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_replace___boxed(lean_object* v_g_1665_, lean_object* v_hyp_1666_, lean_object* v_proof_1667_, lean_object* v_typeNew_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_, lean_object* v_a_1673_){
_start:
{
lean_object* v_res_1674_; 
v_res_1674_ = l_Lean_MVarId_replace(v_g_1665_, v_hyp_1666_, v_proof_1667_, v_typeNew_1668_, v_a_1669_, v_a_1670_, v_a_1671_, v_a_1672_);
lean_dec(v_a_1672_);
lean_dec_ref(v_a_1671_);
lean_dec(v_a_1670_);
lean_dec_ref(v_a_1669_);
return v_res_1674_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Assert(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Assert(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_FVarSubst(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Revert(uint8_t builtin);
lean_object* initialize_Lean_Util_ForEachExpr(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Assert(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_FVarSubst(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Revert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_ForEachExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Assert(builtin);
}
#ifdef __cplusplus
}
#endif
