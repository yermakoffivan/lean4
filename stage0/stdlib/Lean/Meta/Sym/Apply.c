// Lean compiler output
// Module: Lean.Meta.Sym.Apply
// Imports: public import Lean.Meta.Sym.Pattern import Lean.Util.CollectFVars import Init.Data.Range.Polymorphic.Iterators
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Pattern_unify_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
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
lean_object* l_List_reverse___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_mkPatternFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_Sym_mkPatternFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__0;
static lean_once_cell_t l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3;
static lean_once_cell_t l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_mkBackwardRuleFromExpr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(size_t v_sz_1_, size_t v_i_2_, lean_object* v_bs_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_usize_dec_lt(v_i_2_, v_sz_1_);
if (v___x_4_ == 0)
{
return v_bs_3_;
}
else
{
lean_object* v_v_5_; uint8_t v_isInstance_6_; lean_object* v___x_7_; lean_object* v_bs_x27_8_; size_t v___x_9_; size_t v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v_v_5_ = lean_array_uget_borrowed(v_bs_3_, v_i_2_);
v_isInstance_6_ = lean_ctor_get_uint8(v_v_5_, 1);
v___x_7_ = lean_unsigned_to_nat(0u);
v_bs_x27_8_ = lean_array_uset(v_bs_3_, v_i_2_, v___x_7_);
v___x_9_ = ((size_t)1ULL);
v___x_10_ = lean_usize_add(v_i_2_, v___x_9_);
v___x_11_ = lean_box(v_isInstance_6_);
v___x_12_ = lean_array_uset(v_bs_x27_8_, v_i_2_, v___x_11_);
v_i_2_ = v___x_10_;
v_bs_3_ = v___x_12_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5___boxed(lean_object* v_sz_14_, lean_object* v_i_15_, lean_object* v_bs_16_){
_start:
{
size_t v_sz_boxed_17_; size_t v_i_boxed_18_; lean_object* v_res_19_; 
v_sz_boxed_17_ = lean_unbox_usize(v_sz_14_);
lean_dec(v_sz_14_);
v_i_boxed_18_ = lean_unbox_usize(v_i_15_);
lean_dec(v_i_15_);
v_res_19_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(v_sz_boxed_17_, v_i_boxed_18_, v_bs_16_);
return v_res_19_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_mk_string_unchecked("_sym_pre", 8, 8);
return v___x_20_;
}
}
static lean_object* _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_21_; lean_object* v_auxPrefix_22_; 
v___x_21_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__0, &l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__0_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__0);
v_auxPrefix_22_ = l_Lean_Name_mkStr1(v___x_21_);
return v_auxPrefix_22_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(lean_object* v_i_23_, lean_object* v_j_24_, lean_object* v_bs_25_){
_start:
{
lean_object* v_zero_26_; uint8_t v_isZero_27_; 
v_zero_26_ = lean_unsigned_to_nat(0u);
v_isZero_27_ = lean_nat_dec_eq(v_i_23_, v_zero_26_);
if (v_isZero_27_ == 1)
{
lean_dec(v_j_24_);
lean_dec(v_i_23_);
return v_bs_25_;
}
else
{
lean_object* v_auxPrefix_28_; lean_object* v_one_29_; lean_object* v_n_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v_auxPrefix_28_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__1, &l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__1);
v_one_29_ = lean_unsigned_to_nat(1u);
v_n_30_ = lean_nat_sub(v_i_23_, v_one_29_);
lean_dec(v_i_23_);
lean_inc(v_j_24_);
v___x_31_ = l_Lean_Name_num___override(v_auxPrefix_28_, v_j_24_);
v___x_32_ = l_Lean_mkFVar(v___x_31_);
v___x_33_ = lean_nat_add(v_j_24_, v_one_29_);
lean_dec(v_j_24_);
v___x_34_ = lean_array_push(v_bs_25_, v___x_32_);
v_i_23_ = v_n_30_;
v_j_24_ = v___x_33_;
v_bs_25_ = v___x_34_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(lean_object* v_upperBound_36_, lean_object* v___x_37_, lean_object* v___x_38_, lean_object* v___x_39_, lean_object* v_a_40_, uint8_t v_b_41_){
_start:
{
uint8_t v_a_43_; uint8_t v___x_47_; 
v___x_47_ = lean_nat_dec_lt(v_a_40_, v_upperBound_36_);
if (v___x_47_ == 0)
{
lean_dec(v_a_40_);
return v_b_41_;
}
else
{
uint8_t v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; uint8_t v___x_51_; 
v___x_48_ = 0;
v___x_49_ = lean_box(v___x_48_);
v___x_50_ = lean_array_get(v___x_49_, v___x_37_, v_a_40_);
lean_dec(v___x_49_);
v___x_51_ = lean_unbox(v___x_50_);
lean_dec(v___x_50_);
if (v___x_51_ == 0)
{
lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; uint8_t v___x_55_; 
v___x_52_ = l_Lean_instInhabitedExpr;
v___x_53_ = lean_array_get_borrowed(v___x_52_, v___x_38_, v_a_40_);
v___x_54_ = l_Lean_Expr_fvarId_x21(v___x_39_);
v___x_55_ = l_Lean_Expr_containsFVar(v___x_53_, v___x_54_);
lean_dec(v___x_54_);
if (v___x_55_ == 0)
{
v_a_43_ = v_b_41_;
goto v___jp_42_;
}
else
{
lean_dec(v_a_40_);
return v___x_55_;
}
}
else
{
v_a_43_ = v_b_41_;
goto v___jp_42_;
}
}
v___jp_42_:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_unsigned_to_nat(1u);
v___x_45_ = lean_nat_add(v_a_40_, v___x_44_);
lean_dec(v_a_40_);
v_a_40_ = v___x_45_;
v_b_41_ = v_a_43_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg___boxed(lean_object* v_upperBound_56_, lean_object* v___x_57_, lean_object* v___x_58_, lean_object* v___x_59_, lean_object* v_a_60_, lean_object* v_b_61_){
_start:
{
uint8_t v_b_boxed_62_; uint8_t v_res_63_; lean_object* v_r_64_; 
v_b_boxed_62_ = lean_unbox(v_b_61_);
v_res_63_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(v_upperBound_56_, v___x_57_, v___x_58_, v___x_59_, v_a_60_, v_b_boxed_62_);
lean_dec_ref(v___x_59_);
lean_dec_ref(v___x_58_);
lean_dec_ref(v___x_57_);
lean_dec(v_upperBound_56_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(lean_object* v_upperBound_65_, lean_object* v___x_66_, lean_object* v_numArgs_67_, lean_object* v_auxVars_68_, lean_object* v___x_69_, lean_object* v_a_70_, lean_object* v_b_71_){
_start:
{
lean_object* v_a_73_; uint8_t v___x_77_; 
v___x_77_ = lean_nat_dec_lt(v_a_70_, v_upperBound_65_);
if (v___x_77_ == 0)
{
lean_dec(v_a_70_);
return v_b_71_;
}
else
{
lean_object* v_fst_78_; lean_object* v_snd_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_104_; 
v_fst_78_ = lean_ctor_get(v_b_71_, 0);
v_snd_79_ = lean_ctor_get(v_b_71_, 1);
v_isSharedCheck_104_ = !lean_is_exclusive(v_b_71_);
if (v_isSharedCheck_104_ == 0)
{
v___x_81_ = v_b_71_;
v_isShared_82_ = v_isSharedCheck_104_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_snd_79_);
lean_inc(v_fst_78_);
lean_dec(v_b_71_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_104_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
uint8_t v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; uint8_t v___x_86_; 
v___x_83_ = 0;
v___x_84_ = lean_box(v___x_83_);
v___x_85_ = lean_array_get(v___x_84_, v___x_66_, v_a_70_);
lean_dec(v___x_84_);
v___x_86_ = lean_unbox(v___x_85_);
if (v___x_86_ == 0)
{
lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; uint8_t v___x_92_; 
v___x_87_ = l_Lean_instInhabitedExpr;
v___x_88_ = lean_unsigned_to_nat(1u);
v___x_89_ = lean_nat_add(v_a_70_, v___x_88_);
v___x_90_ = lean_array_get_borrowed(v___x_87_, v_auxVars_68_, v_a_70_);
v___x_91_ = lean_unbox(v___x_85_);
lean_dec(v___x_85_);
v___x_92_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(v_numArgs_67_, v___x_66_, v___x_69_, v___x_90_, v___x_89_, v___x_91_);
if (v___x_92_ == 0)
{
lean_object* v___x_93_; lean_object* v___x_95_; 
lean_inc(v_a_70_);
v___x_93_ = lean_array_push(v_snd_79_, v_a_70_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 1, v___x_93_);
v___x_95_ = v___x_81_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_96_; 
v_reuseFailAlloc_96_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_96_, 0, v_fst_78_);
lean_ctor_set(v_reuseFailAlloc_96_, 1, v___x_93_);
v___x_95_ = v_reuseFailAlloc_96_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
v_a_73_ = v___x_95_;
goto v___jp_72_;
}
}
else
{
lean_object* v___x_97_; lean_object* v___x_99_; 
lean_inc(v_a_70_);
v___x_97_ = lean_array_push(v_fst_78_, v_a_70_);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 0, v___x_97_);
v___x_99_ = v___x_81_;
goto v_reusejp_98_;
}
else
{
lean_object* v_reuseFailAlloc_100_; 
v_reuseFailAlloc_100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_100_, 0, v___x_97_);
lean_ctor_set(v_reuseFailAlloc_100_, 1, v_snd_79_);
v___x_99_ = v_reuseFailAlloc_100_;
goto v_reusejp_98_;
}
v_reusejp_98_:
{
v_a_73_ = v___x_99_;
goto v___jp_72_;
}
}
}
else
{
lean_object* v___x_102_; 
lean_dec(v___x_85_);
if (v_isShared_82_ == 0)
{
v___x_102_ = v___x_81_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v_fst_78_);
lean_ctor_set(v_reuseFailAlloc_103_, 1, v_snd_79_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
v_a_73_ = v___x_102_;
goto v___jp_72_;
}
}
}
}
v___jp_72_:
{
lean_object* v___x_74_; lean_object* v___x_75_; 
v___x_74_ = lean_unsigned_to_nat(1u);
v___x_75_ = lean_nat_add(v_a_70_, v___x_74_);
lean_dec(v_a_70_);
v_a_70_ = v___x_75_;
v_b_71_ = v_a_73_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg___boxed(lean_object* v_upperBound_105_, lean_object* v___x_106_, lean_object* v_numArgs_107_, lean_object* v_auxVars_108_, lean_object* v___x_109_, lean_object* v_a_110_, lean_object* v_b_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(v_upperBound_105_, v___x_106_, v_numArgs_107_, v_auxVars_108_, v___x_109_, v_a_110_, v_b_111_);
lean_dec_ref(v___x_109_);
lean_dec_ref(v_auxVars_108_);
lean_dec(v_numArgs_107_);
lean_dec_ref(v___x_106_);
lean_dec(v_upperBound_105_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(lean_object* v_auxVars_113_, lean_object* v_as_114_, lean_object* v_i_115_, lean_object* v_j_116_, lean_object* v_bs_117_){
_start:
{
lean_object* v_zero_118_; uint8_t v_isZero_119_; 
v_zero_118_ = lean_unsigned_to_nat(0u);
v_isZero_119_ = lean_nat_dec_eq(v_i_115_, v_zero_118_);
if (v_isZero_119_ == 1)
{
lean_dec(v_j_116_);
lean_dec(v_i_115_);
return v_bs_117_;
}
else
{
lean_object* v_one_120_; lean_object* v_n_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v_one_120_ = lean_unsigned_to_nat(1u);
v_n_121_ = lean_nat_sub(v_i_115_, v_one_120_);
lean_dec(v_i_115_);
v___x_122_ = lean_array_fget_borrowed(v_as_114_, v_j_116_);
v___x_123_ = lean_expr_instantiate_rev_range(v___x_122_, v_zero_118_, v_j_116_, v_auxVars_113_);
v___x_124_ = lean_nat_add(v_j_116_, v_one_120_);
lean_dec(v_j_116_);
v___x_125_ = lean_array_push(v_bs_117_, v___x_123_);
v_i_115_ = v_n_121_;
v_j_116_ = v___x_124_;
v_bs_117_ = v___x_125_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg___boxed(lean_object* v_auxVars_127_, lean_object* v_as_128_, lean_object* v_i_129_, lean_object* v_j_130_, lean_object* v_bs_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(v_auxVars_127_, v_as_128_, v_i_129_, v_j_130_, v_bs_131_);
lean_dec_ref(v_as_128_);
lean_dec_ref(v_auxVars_127_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(lean_object* v_as_133_, size_t v_sz_134_, size_t v_i_135_, lean_object* v_b_136_){
_start:
{
lean_object* v_a_138_; uint8_t v___x_142_; 
v___x_142_ = lean_usize_dec_lt(v_i_135_, v_sz_134_);
if (v___x_142_ == 0)
{
return v_b_136_;
}
else
{
lean_object* v_a_143_; 
v_a_143_ = lean_array_uget_borrowed(v_as_133_, v_i_135_);
if (lean_obj_tag(v_a_143_) == 2)
{
lean_object* v_pre_144_; lean_object* v_i_145_; lean_object* v_auxPrefix_146_; uint8_t v___x_147_; 
v_pre_144_ = lean_ctor_get(v_a_143_, 0);
v_i_145_ = lean_ctor_get(v_a_143_, 1);
v_auxPrefix_146_ = lean_obj_once(&l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__1, &l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__1_once, _init_l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___closed__1);
v___x_147_ = lean_name_eq(v_pre_144_, v_auxPrefix_146_);
if (v___x_147_ == 0)
{
v_a_138_ = v_b_136_;
goto v___jp_137_;
}
else
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_box(v___x_147_);
v___x_149_ = lean_array_set(v_b_136_, v_i_145_, v___x_148_);
v_a_138_ = v___x_149_;
goto v___jp_137_;
}
}
else
{
v_a_138_ = v_b_136_;
goto v___jp_137_;
}
}
v___jp_137_:
{
size_t v___x_139_; size_t v___x_140_; 
v___x_139_ = ((size_t)1ULL);
v___x_140_ = lean_usize_add(v_i_135_, v___x_139_);
v_i_135_ = v___x_140_;
v_b_136_ = v_a_138_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___boxed(lean_object* v_as_150_, lean_object* v_sz_151_, lean_object* v_i_152_, lean_object* v_b_153_){
_start:
{
size_t v_sz_boxed_154_; size_t v_i_boxed_155_; lean_object* v_res_156_; 
v_sz_boxed_154_ = lean_unbox_usize(v_sz_151_);
lean_dec(v_sz_151_);
v_i_boxed_155_ = lean_unbox_usize(v_i_152_);
lean_dec(v_i_152_);
v_res_156_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(v_as_150_, v_sz_boxed_154_, v_i_boxed_155_, v_b_153_);
lean_dec_ref(v_as_150_);
return v_res_156_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_157_ = lean_box(0);
v___x_158_ = lean_unsigned_to_nat(16u);
v___x_159_ = lean_mk_array(v___x_158_, v___x_157_);
return v___x_159_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1(void){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = lean_obj_once(&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0, &l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0_once, _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0);
v___x_161_ = lean_unsigned_to_nat(0u);
v___x_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
lean_ctor_set(v___x_162_, 1, v___x_160_);
return v___x_162_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(0u);
v___x_164_ = lean_mk_empty_array_with_capacity(v___x_163_);
return v___x_164_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3(void){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_165_ = lean_obj_once(&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2, &l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2_once, _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2);
v___x_166_ = lean_box(1);
v___x_167_ = lean_obj_once(&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1, &l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1_once, _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1);
v___x_168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
lean_ctor_set(v___x_168_, 1, v___x_166_);
lean_ctor_set(v___x_168_, 2, v___x_165_);
return v___x_168_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__4(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_obj_once(&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2, &l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2_once, _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2);
v___x_170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
lean_ctor_set(v___x_170_, 1, v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(lean_object* v_pattern_171_){
_start:
{
lean_object* v_varTypes_172_; lean_object* v_varInfos_x3f_173_; lean_object* v_pattern_174_; lean_object* v_numArgs_175_; lean_object* v___y_177_; 
v_varTypes_172_ = lean_ctor_get(v_pattern_171_, 1);
lean_inc_ref(v_varTypes_172_);
v_varInfos_x3f_173_ = lean_ctor_get(v_pattern_171_, 2);
lean_inc(v_varInfos_x3f_173_);
v_pattern_174_ = lean_ctor_get(v_pattern_171_, 3);
lean_inc_ref(v_pattern_174_);
lean_dec_ref(v_pattern_171_);
v_numArgs_175_ = lean_array_get_size(v_varTypes_172_);
if (lean_obj_tag(v_varInfos_x3f_173_) == 1)
{
lean_object* v_val_195_; size_t v_sz_196_; size_t v___x_197_; lean_object* v___x_198_; 
v_val_195_ = lean_ctor_get(v_varInfos_x3f_173_, 0);
lean_inc(v_val_195_);
lean_dec_ref(v_varInfos_x3f_173_);
v_sz_196_ = lean_array_size(v_val_195_);
v___x_197_ = ((size_t)0ULL);
v___x_198_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(v_sz_196_, v___x_197_, v_val_195_);
v___y_177_ = v___x_198_;
goto v___jp_176_;
}
else
{
uint8_t v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; 
lean_dec(v_varInfos_x3f_173_);
v___x_199_ = 0;
v___x_200_ = lean_box(v___x_199_);
v___x_201_ = lean_mk_array(v_numArgs_175_, v___x_200_);
v___y_177_ = v___x_201_;
goto v___jp_176_;
}
v___jp_176_:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v_auxVars_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v_fvarIds_184_; size_t v_sz_185_; lean_object* v___x_186_; size_t v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v_fst_191_; lean_object* v_snd_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_178_ = lean_unsigned_to_nat(0u);
v___x_179_ = lean_mk_empty_array_with_capacity(v_numArgs_175_);
lean_inc_ref(v___x_179_);
v_auxVars_180_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(v_numArgs_175_, v___x_178_, v___x_179_);
v___x_181_ = lean_obj_once(&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3, &l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3_once, _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__3);
v___x_182_ = lean_expr_instantiate_rev(v_pattern_174_, v_auxVars_180_);
lean_dec_ref(v_pattern_174_);
v___x_183_ = l_Lean_collectFVars(v___x_181_, v___x_182_);
v_fvarIds_184_ = lean_ctor_get(v___x_183_, 2);
lean_inc_ref(v_fvarIds_184_);
lean_dec_ref(v___x_183_);
v_sz_185_ = lean_array_size(v_fvarIds_184_);
v___x_186_ = lean_obj_once(&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__4, &l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__4_once, _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__4);
v___x_187_ = ((size_t)0ULL);
v___x_188_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(v_fvarIds_184_, v_sz_185_, v___x_187_, v___y_177_);
lean_dec_ref(v_fvarIds_184_);
v___x_189_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(v_auxVars_180_, v_varTypes_172_, v_numArgs_175_, v___x_178_, v___x_179_);
lean_dec_ref(v_varTypes_172_);
v___x_190_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(v_numArgs_175_, v___x_188_, v_numArgs_175_, v_auxVars_180_, v___x_189_, v___x_178_, v___x_186_);
lean_dec_ref(v___x_189_);
lean_dec_ref(v_auxVars_180_);
lean_dec_ref(v___x_188_);
v_fst_191_ = lean_ctor_get(v___x_190_, 0);
lean_inc(v_fst_191_);
v_snd_192_ = lean_ctor_get(v___x_190_, 1);
lean_inc(v_snd_192_);
lean_dec_ref(v___x_190_);
v___x_193_ = l_Array_append___redArg(v_snd_192_, v_fst_191_);
lean_dec(v_fst_191_);
v___x_194_ = lean_array_to_list(v___x_193_);
return v___x_194_;
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0(lean_object* v_as_202_, lean_object* v_i_203_, lean_object* v_j_204_, lean_object* v_inv_205_, lean_object* v_bs_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(v_i_203_, v_j_204_, v_bs_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___boxed(lean_object* v_as_208_, lean_object* v_i_209_, lean_object* v_j_210_, lean_object* v_inv_211_, lean_object* v_bs_212_){
_start:
{
lean_object* v_res_213_; 
v_res_213_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0(v_as_208_, v_i_209_, v_j_210_, v_inv_211_, v_bs_212_);
lean_dec_ref(v_as_208_);
return v_res_213_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2(lean_object* v_auxVars_214_, lean_object* v_as_215_, lean_object* v_i_216_, lean_object* v_j_217_, lean_object* v_inv_218_, lean_object* v_bs_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(v_auxVars_214_, v_as_215_, v_i_216_, v_j_217_, v_bs_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___boxed(lean_object* v_auxVars_221_, lean_object* v_as_222_, lean_object* v_i_223_, lean_object* v_j_224_, lean_object* v_inv_225_, lean_object* v_bs_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Array_mapFinIdxM_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2(v_auxVars_221_, v_as_222_, v_i_223_, v_j_224_, v_inv_225_, v_bs_226_);
lean_dec_ref(v_as_222_);
lean_dec_ref(v_auxVars_221_);
return v_res_227_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3(lean_object* v_upperBound_228_, lean_object* v___x_229_, lean_object* v___x_230_, lean_object* v___x_231_, lean_object* v_inst_232_, lean_object* v_R_233_, lean_object* v_a_234_, uint8_t v_b_235_, lean_object* v_c_236_){
_start:
{
uint8_t v___x_237_; 
v___x_237_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(v_upperBound_228_, v___x_229_, v___x_230_, v___x_231_, v_a_234_, v_b_235_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___boxed(lean_object* v_upperBound_238_, lean_object* v___x_239_, lean_object* v___x_240_, lean_object* v___x_241_, lean_object* v_inst_242_, lean_object* v_R_243_, lean_object* v_a_244_, lean_object* v_b_245_, lean_object* v_c_246_){
_start:
{
uint8_t v_b_boxed_247_; uint8_t v_res_248_; lean_object* v_r_249_; 
v_b_boxed_247_ = lean_unbox(v_b_245_);
v_res_248_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3(v_upperBound_238_, v___x_239_, v___x_240_, v___x_241_, v_inst_242_, v_R_243_, v_a_244_, v_b_boxed_247_, v_c_246_);
lean_dec_ref(v___x_241_);
lean_dec_ref(v___x_240_);
lean_dec_ref(v___x_239_);
lean_dec(v_upperBound_238_);
v_r_249_ = lean_box(v_res_248_);
return v_r_249_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4(lean_object* v_upperBound_250_, lean_object* v___x_251_, lean_object* v_numArgs_252_, lean_object* v_auxVars_253_, lean_object* v___x_254_, lean_object* v_inst_255_, lean_object* v_R_256_, lean_object* v_a_257_, lean_object* v_b_258_, lean_object* v_c_259_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(v_upperBound_250_, v___x_251_, v_numArgs_252_, v_auxVars_253_, v___x_254_, v_a_257_, v_b_258_);
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___boxed(lean_object* v_upperBound_261_, lean_object* v___x_262_, lean_object* v_numArgs_263_, lean_object* v_auxVars_264_, lean_object* v___x_265_, lean_object* v_inst_266_, lean_object* v_R_267_, lean_object* v_a_268_, lean_object* v_b_269_, lean_object* v_c_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4(v_upperBound_261_, v___x_262_, v_numArgs_263_, v_auxVars_264_, v___x_265_, v_inst_266_, v_R_267_, v_a_268_, v_b_269_, v_c_270_);
lean_dec_ref(v___x_265_);
lean_dec_ref(v_auxVars_264_);
lean_dec(v_numArgs_263_);
lean_dec_ref(v___x_262_);
lean_dec(v_upperBound_261_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object* v_declName_272_, lean_object* v_num_x3f_273_, lean_object* v_a_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_){
_start:
{
lean_object* v___x_279_; 
lean_inc(v_declName_272_);
v___x_279_ = l_Lean_Meta_Sym_mkPatternFromDecl(v_declName_272_, v_num_x3f_273_, v_a_274_, v_a_275_, v_a_276_, v_a_277_);
if (lean_obj_tag(v___x_279_) == 0)
{
lean_object* v_a_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_291_; 
v_a_280_ = lean_ctor_get(v___x_279_, 0);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_291_ == 0)
{
v___x_282_ = v___x_279_;
v_isShared_283_ = v_isSharedCheck_291_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_a_280_);
lean_dec(v___x_279_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_291_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_289_; 
lean_inc(v_a_280_);
v___x_284_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(v_a_280_);
v___x_285_ = lean_box(0);
v___x_286_ = l_Lean_mkConst(v_declName_272_, v___x_285_);
v___x_287_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v_a_280_);
lean_ctor_set(v___x_287_, 2, v___x_284_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 0, v___x_287_);
v___x_289_ = v___x_282_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_287_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
else
{
lean_object* v_a_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_299_; 
lean_dec(v_declName_272_);
v_a_292_ = lean_ctor_get(v___x_279_, 0);
v_isSharedCheck_299_ = !lean_is_exclusive(v___x_279_);
if (v_isSharedCheck_299_ == 0)
{
v___x_294_ = v___x_279_;
v_isShared_295_ = v_isSharedCheck_299_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_a_292_);
lean_dec(v___x_279_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl___boxed(lean_object* v_declName_300_, lean_object* v_num_x3f_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v_declName_300_, v_num_x3f_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
lean_dec(v_num_x3f_301_);
return v_res_307_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_mkBackwardRuleFromExpr_spec__0(lean_object* v_a_308_, lean_object* v_a_309_){
_start:
{
if (lean_obj_tag(v_a_308_) == 0)
{
lean_object* v___x_310_; 
v___x_310_ = l_List_reverse___redArg(v_a_309_);
return v___x_310_;
}
else
{
lean_object* v_head_311_; lean_object* v_tail_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_321_; 
v_head_311_ = lean_ctor_get(v_a_308_, 0);
v_tail_312_ = lean_ctor_get(v_a_308_, 1);
v_isSharedCheck_321_ = !lean_is_exclusive(v_a_308_);
if (v_isSharedCheck_321_ == 0)
{
v___x_314_ = v_a_308_;
v_isShared_315_ = v_isSharedCheck_321_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_tail_312_);
lean_inc(v_head_311_);
lean_dec(v_a_308_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_321_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_316_; lean_object* v___x_318_; 
v___x_316_ = l_Lean_mkLevelParam(v_head_311_);
if (v_isShared_315_ == 0)
{
lean_ctor_set(v___x_314_, 1, v_a_309_);
lean_ctor_set(v___x_314_, 0, v___x_316_);
v___x_318_ = v___x_314_;
goto v_reusejp_317_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v___x_316_);
lean_ctor_set(v_reuseFailAlloc_320_, 1, v_a_309_);
v___x_318_ = v_reuseFailAlloc_320_;
goto v_reusejp_317_;
}
v_reusejp_317_:
{
v_a_308_ = v_tail_312_;
v_a_309_ = v___x_318_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr(lean_object* v_e_322_, lean_object* v_levelParams_323_, lean_object* v_num_x3f_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_){
_start:
{
lean_object* v___x_330_; 
lean_inc(v_levelParams_323_);
lean_inc_ref(v_e_322_);
v___x_330_ = l_Lean_Meta_Sym_mkPatternFromExpr(v_e_322_, v_levelParams_323_, v_num_x3f_324_, v_a_325_, v_a_326_, v_a_327_, v_a_328_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_344_; 
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_344_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_344_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_344_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_344_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v_levelParams_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_342_; 
v_levelParams_335_ = lean_ctor_get(v_a_331_, 0);
lean_inc(v_a_331_);
v___x_336_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(v_a_331_);
v___x_337_ = lean_box(0);
lean_inc(v_levelParams_335_);
v___x_338_ = l_List_mapTR_loop___at___00Lean_Meta_Sym_mkBackwardRuleFromExpr_spec__0(v_levelParams_335_, v___x_337_);
v___x_339_ = l_Lean_Expr_instantiateLevelParams(v_e_322_, v_levelParams_323_, v___x_338_);
lean_dec_ref(v_e_322_);
v___x_340_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_340_, 0, v___x_339_);
lean_ctor_set(v___x_340_, 1, v_a_331_);
lean_ctor_set(v___x_340_, 2, v___x_336_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_340_);
v___x_342_ = v___x_333_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_343_; 
v_reuseFailAlloc_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_343_, 0, v___x_340_);
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
lean_dec(v_levelParams_323_);
lean_dec_ref(v_e_322_);
v_a_345_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_352_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_352_ == 0)
{
v___x_347_ = v___x_330_;
v_isShared_348_ = v_isSharedCheck_352_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_a_345_);
lean_dec(v___x_330_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr___boxed(lean_object* v_e_353_, lean_object* v_levelParams_354_, lean_object* v_num_x3f_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_Meta_Sym_mkBackwardRuleFromExpr(v_e_353_, v_levelParams_354_, v_num_x3f_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_);
lean_dec(v_a_359_);
lean_dec_ref(v_a_358_);
lean_dec(v_a_357_);
lean_dec_ref(v_a_356_);
lean_dec(v_num_x3f_355_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue(lean_object* v_expr_362_, lean_object* v_pattern_363_, lean_object* v_result_364_){
_start:
{
if (lean_obj_tag(v_expr_362_) == 4)
{
lean_object* v_us_371_; 
v_us_371_ = lean_ctor_get(v_expr_362_, 1);
if (lean_obj_tag(v_us_371_) == 0)
{
lean_object* v_declName_372_; lean_object* v_us_373_; lean_object* v_args_374_; lean_object* v___x_375_; lean_object* v___x_376_; 
lean_dec_ref(v_pattern_363_);
v_declName_372_ = lean_ctor_get(v_expr_362_, 0);
lean_inc(v_declName_372_);
lean_dec_ref(v_expr_362_);
v_us_373_ = lean_ctor_get(v_result_364_, 0);
lean_inc(v_us_373_);
v_args_374_ = lean_ctor_get(v_result_364_, 1);
lean_inc_ref(v_args_374_);
lean_dec_ref(v_result_364_);
v___x_375_ = l_Lean_mkConst(v_declName_372_, v_us_373_);
v___x_376_ = l_Lean_mkAppN(v___x_375_, v_args_374_);
lean_dec_ref(v_args_374_);
return v___x_376_;
}
else
{
goto v___jp_365_;
}
}
else
{
goto v___jp_365_;
}
v___jp_365_:
{
lean_object* v_levelParams_366_; lean_object* v_us_367_; lean_object* v_args_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_levelParams_366_ = lean_ctor_get(v_pattern_363_, 0);
lean_inc(v_levelParams_366_);
lean_dec_ref(v_pattern_363_);
v_us_367_ = lean_ctor_get(v_result_364_, 0);
lean_inc(v_us_367_);
v_args_368_ = lean_ctor_get(v_result_364_, 1);
lean_inc_ref(v_args_368_);
lean_dec_ref(v_result_364_);
v___x_369_ = l_Lean_Expr_instantiateLevelParams(v_expr_362_, v_levelParams_366_, v_us_367_);
lean_dec_ref(v_expr_362_);
v___x_370_ = l_Lean_mkAppN(v___x_369_, v_args_368_);
lean_dec_ref(v_args_368_);
return v___x_370_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx(lean_object* v_x_377_){
_start:
{
if (lean_obj_tag(v_x_377_) == 0)
{
lean_object* v___x_378_; 
v___x_378_ = lean_unsigned_to_nat(0u);
return v___x_378_;
}
else
{
lean_object* v___x_379_; 
v___x_379_ = lean_unsigned_to_nat(1u);
return v___x_379_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx___boxed(lean_object* v_x_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_Meta_Sym_ApplyResult_ctorIdx(v_x_380_);
lean_dec(v_x_380_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(lean_object* v_t_382_, lean_object* v_k_383_){
_start:
{
if (lean_obj_tag(v_t_382_) == 0)
{
return v_k_383_;
}
else
{
lean_object* v_mvarIds_384_; lean_object* v___x_385_; 
v_mvarIds_384_ = lean_ctor_get(v_t_382_, 0);
lean_inc(v_mvarIds_384_);
lean_dec_ref(v_t_382_);
v___x_385_ = lean_apply_1(v_k_383_, v_mvarIds_384_);
return v___x_385_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim(lean_object* v_motive_386_, lean_object* v_ctorIdx_387_, lean_object* v_t_388_, lean_object* v_h_389_, lean_object* v_k_390_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_388_, v_k_390_);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___boxed(lean_object* v_motive_392_, lean_object* v_ctorIdx_393_, lean_object* v_t_394_, lean_object* v_h_395_, lean_object* v_k_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_Meta_Sym_ApplyResult_ctorElim(v_motive_392_, v_ctorIdx_393_, v_t_394_, v_h_395_, v_k_396_);
lean_dec(v_ctorIdx_393_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim___redArg(lean_object* v_t_398_, lean_object* v_failed_399_){
_start:
{
lean_object* v___x_400_; 
v___x_400_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_398_, v_failed_399_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim(lean_object* v_motive_401_, lean_object* v_t_402_, lean_object* v_h_403_, lean_object* v_failed_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_402_, v_failed_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim___redArg(lean_object* v_t_406_, lean_object* v_goals_407_){
_start:
{
lean_object* v___x_408_; 
v___x_408_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_406_, v_goals_407_);
return v___x_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim(lean_object* v_motive_409_, lean_object* v_t_410_, lean_object* v_h_411_, lean_object* v_goals_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_410_, v_goals_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0(lean_object* v_x_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_){
_start:
{
lean_object* v___x_422_; 
lean_inc(v___y_416_);
lean_inc_ref(v___y_415_);
v___x_422_ = lean_apply_7(v_x_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, lean_box(0));
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0___boxed(lean_object* v_x_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
lean_object* v_res_431_; 
v_res_431_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0(v_x_423_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_);
lean_dec(v___y_425_);
lean_dec_ref(v___y_424_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(lean_object* v_mvarId_432_, lean_object* v_x_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_){
_start:
{
lean_object* v___f_441_; lean_object* v___x_442_; 
lean_inc(v___y_435_);
lean_inc_ref(v___y_434_);
v___f_441_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_441_, 0, v_x_433_);
lean_closure_set(v___f_441_, 1, v___y_434_);
lean_closure_set(v___f_441_, 2, v___y_435_);
v___x_442_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_432_, v___f_441_, v___y_436_, v___y_437_, v___y_438_, v___y_439_);
if (lean_obj_tag(v___x_442_) == 0)
{
return v___x_442_;
}
else
{
lean_object* v_a_443_; lean_object* v___x_445_; uint8_t v_isShared_446_; uint8_t v_isSharedCheck_450_; 
v_a_443_ = lean_ctor_get(v___x_442_, 0);
v_isSharedCheck_450_ = !lean_is_exclusive(v___x_442_);
if (v_isSharedCheck_450_ == 0)
{
v___x_445_ = v___x_442_;
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
else
{
lean_inc(v_a_443_);
lean_dec(v___x_442_);
v___x_445_ = lean_box(0);
v_isShared_446_ = v_isSharedCheck_450_;
goto v_resetjp_444_;
}
v_resetjp_444_:
{
lean_object* v___x_448_; 
if (v_isShared_446_ == 0)
{
v___x_448_ = v___x_445_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_a_443_);
v___x_448_ = v_reuseFailAlloc_449_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
return v___x_448_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___boxed(lean_object* v_mvarId_451_, lean_object* v_x_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(v_mvarId_451_, v_x_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2(lean_object* v_00_u03b1_461_, lean_object* v_mvarId_462_, lean_object* v_x_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v___x_471_; 
v___x_471_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(v_mvarId_462_, v_x_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___boxed(lean_object* v_00_u03b1_472_, lean_object* v_mvarId_473_, lean_object* v_x_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_){
_start:
{
lean_object* v_res_482_; 
v_res_482_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2(v_00_u03b1_472_, v_mvarId_473_, v_x_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
return v_res_482_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(lean_object* v_val_483_, lean_object* v_a_484_, lean_object* v_a_485_){
_start:
{
if (lean_obj_tag(v_a_484_) == 0)
{
lean_object* v___x_486_; 
v___x_486_ = l_List_reverse___redArg(v_a_485_);
return v___x_486_;
}
else
{
lean_object* v_head_487_; lean_object* v_tail_488_; lean_object* v___x_490_; uint8_t v_isShared_491_; uint8_t v_isSharedCheck_500_; 
v_head_487_ = lean_ctor_get(v_a_484_, 0);
v_tail_488_ = lean_ctor_get(v_a_484_, 1);
v_isSharedCheck_500_ = !lean_is_exclusive(v_a_484_);
if (v_isSharedCheck_500_ == 0)
{
v___x_490_ = v_a_484_;
v_isShared_491_ = v_isSharedCheck_500_;
goto v_resetjp_489_;
}
else
{
lean_inc(v_tail_488_);
lean_inc(v_head_487_);
lean_dec(v_a_484_);
v___x_490_ = lean_box(0);
v_isShared_491_ = v_isSharedCheck_500_;
goto v_resetjp_489_;
}
v_resetjp_489_:
{
lean_object* v_args_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_497_; 
v_args_492_ = lean_ctor_get(v_val_483_, 1);
v___x_493_ = l_Lean_instInhabitedExpr;
v___x_494_ = lean_array_get_borrowed(v___x_493_, v_args_492_, v_head_487_);
lean_dec(v_head_487_);
v___x_495_ = l_Lean_Expr_mvarId_x21(v___x_494_);
if (v_isShared_491_ == 0)
{
lean_ctor_set(v___x_490_, 1, v_a_485_);
lean_ctor_set(v___x_490_, 0, v___x_495_);
v___x_497_ = v___x_490_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_495_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_a_485_);
v___x_497_ = v_reuseFailAlloc_499_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
v_a_484_ = v_tail_488_;
v_a_485_ = v___x_497_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1___boxed(lean_object* v_val_501_, lean_object* v_a_502_, lean_object* v_a_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(v_val_501_, v_a_502_, v_a_503_);
lean_dec_ref(v_val_501_);
return v_res_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object* v_x_505_, lean_object* v_x_506_, lean_object* v_x_507_, lean_object* v_x_508_){
_start:
{
lean_object* v_ks_509_; lean_object* v_vs_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_534_; 
v_ks_509_ = lean_ctor_get(v_x_505_, 0);
v_vs_510_ = lean_ctor_get(v_x_505_, 1);
v_isSharedCheck_534_ = !lean_is_exclusive(v_x_505_);
if (v_isSharedCheck_534_ == 0)
{
v___x_512_ = v_x_505_;
v_isShared_513_ = v_isSharedCheck_534_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_vs_510_);
lean_inc(v_ks_509_);
lean_dec(v_x_505_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_534_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_514_ = lean_array_get_size(v_ks_509_);
v___x_515_ = lean_nat_dec_lt(v_x_506_, v___x_514_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_519_; 
lean_dec(v_x_506_);
v___x_516_ = lean_array_push(v_ks_509_, v_x_507_);
v___x_517_ = lean_array_push(v_vs_510_, v_x_508_);
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 1, v___x_517_);
lean_ctor_set(v___x_512_, 0, v___x_516_);
v___x_519_ = v___x_512_;
goto v_reusejp_518_;
}
else
{
lean_object* v_reuseFailAlloc_520_; 
v_reuseFailAlloc_520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_520_, 0, v___x_516_);
lean_ctor_set(v_reuseFailAlloc_520_, 1, v___x_517_);
v___x_519_ = v_reuseFailAlloc_520_;
goto v_reusejp_518_;
}
v_reusejp_518_:
{
return v___x_519_;
}
}
else
{
lean_object* v_k_x27_521_; uint8_t v___x_522_; 
v_k_x27_521_ = lean_array_fget_borrowed(v_ks_509_, v_x_506_);
v___x_522_ = l_Lean_instBEqMVarId_beq(v_x_507_, v_k_x27_521_);
if (v___x_522_ == 0)
{
lean_object* v___x_524_; 
if (v_isShared_513_ == 0)
{
v___x_524_ = v___x_512_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_ks_509_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v_vs_510_);
v___x_524_ = v_reuseFailAlloc_528_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_525_ = lean_unsigned_to_nat(1u);
v___x_526_ = lean_nat_add(v_x_506_, v___x_525_);
lean_dec(v_x_506_);
v_x_505_ = v___x_524_;
v_x_506_ = v___x_526_;
goto _start;
}
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_532_; 
v___x_529_ = lean_array_fset(v_ks_509_, v_x_506_, v_x_507_);
v___x_530_ = lean_array_fset(v_vs_510_, v_x_506_, v_x_508_);
lean_dec(v_x_506_);
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 1, v___x_530_);
lean_ctor_set(v___x_512_, 0, v___x_529_);
v___x_532_ = v___x_512_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_529_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_n_535_, lean_object* v_k_536_, lean_object* v_v_537_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = lean_unsigned_to_nat(0u);
v___x_539_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_n_535_, v___x_538_, v_k_536_, v_v_537_);
return v___x_539_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
size_t v___x_540_; size_t v___x_541_; size_t v___x_542_; 
v___x_540_ = ((size_t)5ULL);
v___x_541_ = ((size_t)1ULL);
v___x_542_ = lean_usize_shift_left(v___x_541_, v___x_540_);
return v___x_542_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
size_t v___x_543_; size_t v___x_544_; size_t v___x_545_; 
v___x_543_ = ((size_t)1ULL);
v___x_544_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_545_ = lean_usize_sub(v___x_544_, v___x_543_);
return v___x_545_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(lean_object* v_x_547_, size_t v_x_548_, size_t v_x_549_, lean_object* v_x_550_, lean_object* v_x_551_){
_start:
{
if (lean_obj_tag(v_x_547_) == 0)
{
lean_object* v_es_552_; size_t v___x_553_; size_t v___x_554_; size_t v___x_555_; size_t v___x_556_; lean_object* v_j_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v_es_552_ = lean_ctor_get(v_x_547_, 0);
v___x_553_ = ((size_t)5ULL);
v___x_554_ = ((size_t)1ULL);
v___x_555_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_556_ = lean_usize_land(v_x_548_, v___x_555_);
v_j_557_ = lean_usize_to_nat(v___x_556_);
v___x_558_ = lean_array_get_size(v_es_552_);
v___x_559_ = lean_nat_dec_lt(v_j_557_, v___x_558_);
if (v___x_559_ == 0)
{
lean_dec(v_j_557_);
lean_dec(v_x_551_);
lean_dec(v_x_550_);
return v_x_547_;
}
else
{
lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_596_; 
lean_inc_ref(v_es_552_);
v_isSharedCheck_596_ = !lean_is_exclusive(v_x_547_);
if (v_isSharedCheck_596_ == 0)
{
lean_object* v_unused_597_; 
v_unused_597_ = lean_ctor_get(v_x_547_, 0);
lean_dec(v_unused_597_);
v___x_561_ = v_x_547_;
v_isShared_562_ = v_isSharedCheck_596_;
goto v_resetjp_560_;
}
else
{
lean_dec(v_x_547_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_596_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v_v_563_; lean_object* v___x_564_; lean_object* v_xs_x27_565_; lean_object* v___y_567_; 
v_v_563_ = lean_array_fget(v_es_552_, v_j_557_);
v___x_564_ = lean_box(0);
v_xs_x27_565_ = lean_array_fset(v_es_552_, v_j_557_, v___x_564_);
switch(lean_obj_tag(v_v_563_))
{
case 0:
{
lean_object* v_key_572_; lean_object* v_val_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_583_; 
v_key_572_ = lean_ctor_get(v_v_563_, 0);
v_val_573_ = lean_ctor_get(v_v_563_, 1);
v_isSharedCheck_583_ = !lean_is_exclusive(v_v_563_);
if (v_isSharedCheck_583_ == 0)
{
v___x_575_ = v_v_563_;
v_isShared_576_ = v_isSharedCheck_583_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_val_573_);
lean_inc(v_key_572_);
lean_dec(v_v_563_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_583_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
uint8_t v___x_577_; 
v___x_577_ = l_Lean_instBEqMVarId_beq(v_x_550_, v_key_572_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; lean_object* v___x_579_; 
lean_del_object(v___x_575_);
v___x_578_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_572_, v_val_573_, v_x_550_, v_x_551_);
v___x_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_579_, 0, v___x_578_);
v___y_567_ = v___x_579_;
goto v___jp_566_;
}
else
{
lean_object* v___x_581_; 
lean_dec(v_val_573_);
lean_dec(v_key_572_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 1, v_x_551_);
lean_ctor_set(v___x_575_, 0, v_x_550_);
v___x_581_ = v___x_575_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_x_550_);
lean_ctor_set(v_reuseFailAlloc_582_, 1, v_x_551_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
v___y_567_ = v___x_581_;
goto v___jp_566_;
}
}
}
}
case 1:
{
lean_object* v_node_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_594_; 
v_node_584_ = lean_ctor_get(v_v_563_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v_v_563_);
if (v_isSharedCheck_594_ == 0)
{
v___x_586_ = v_v_563_;
v_isShared_587_ = v_isSharedCheck_594_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_node_584_);
lean_dec(v_v_563_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_594_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
size_t v___x_588_; size_t v___x_589_; lean_object* v___x_590_; lean_object* v___x_592_; 
v___x_588_ = lean_usize_shift_right(v_x_548_, v___x_553_);
v___x_589_ = lean_usize_add(v_x_549_, v___x_554_);
v___x_590_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_node_584_, v___x_588_, v___x_589_, v_x_550_, v_x_551_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_590_);
v___x_592_ = v___x_586_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_593_; 
v_reuseFailAlloc_593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_593_, 0, v___x_590_);
v___x_592_ = v_reuseFailAlloc_593_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
v___y_567_ = v___x_592_;
goto v___jp_566_;
}
}
}
default: 
{
lean_object* v___x_595_; 
v___x_595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_595_, 0, v_x_550_);
lean_ctor_set(v___x_595_, 1, v_x_551_);
v___y_567_ = v___x_595_;
goto v___jp_566_;
}
}
v___jp_566_:
{
lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_568_ = lean_array_fset(v_xs_x27_565_, v_j_557_, v___y_567_);
lean_dec(v_j_557_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 0, v___x_568_);
v___x_570_ = v___x_561_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_568_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
else
{
lean_object* v_ks_598_; lean_object* v_vs_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_619_; 
v_ks_598_ = lean_ctor_get(v_x_547_, 0);
v_vs_599_ = lean_ctor_get(v_x_547_, 1);
v_isSharedCheck_619_ = !lean_is_exclusive(v_x_547_);
if (v_isSharedCheck_619_ == 0)
{
v___x_601_ = v_x_547_;
v_isShared_602_ = v_isSharedCheck_619_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_vs_599_);
lean_inc(v_ks_598_);
lean_dec(v_x_547_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_619_;
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
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_ks_598_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_vs_599_);
v___x_604_ = v_reuseFailAlloc_618_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v_newNode_605_; uint8_t v___y_607_; size_t v___x_613_; uint8_t v___x_614_; 
v_newNode_605_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(v___x_604_, v_x_550_, v_x_551_);
v___x_613_ = ((size_t)7ULL);
v___x_614_ = lean_usize_dec_le(v___x_613_, v_x_549_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; lean_object* v___x_616_; uint8_t v___x_617_; 
v___x_615_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_605_);
v___x_616_ = lean_unsigned_to_nat(4u);
v___x_617_ = lean_nat_dec_lt(v___x_615_, v___x_616_);
lean_dec(v___x_615_);
v___y_607_ = v___x_617_;
goto v___jp_606_;
}
else
{
v___y_607_ = v___x_614_;
goto v___jp_606_;
}
v___jp_606_:
{
if (v___y_607_ == 0)
{
lean_object* v_ks_608_; lean_object* v_vs_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; 
v_ks_608_ = lean_ctor_get(v_newNode_605_, 0);
lean_inc_ref(v_ks_608_);
v_vs_609_ = lean_ctor_get(v_newNode_605_, 1);
lean_inc_ref(v_vs_609_);
lean_dec_ref(v_newNode_605_);
v___x_610_ = lean_unsigned_to_nat(0u);
v___x_611_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__2);
v___x_612_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(v_x_549_, v_ks_608_, v_vs_609_, v___x_610_, v___x_611_);
lean_dec_ref(v_vs_609_);
lean_dec_ref(v_ks_608_);
return v___x_612_;
}
else
{
return v_newNode_605_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(size_t v_depth_620_, lean_object* v_keys_621_, lean_object* v_vals_622_, lean_object* v_i_623_, lean_object* v_entries_624_){
_start:
{
lean_object* v___x_625_; uint8_t v___x_626_; 
v___x_625_ = lean_array_get_size(v_keys_621_);
v___x_626_ = lean_nat_dec_lt(v_i_623_, v___x_625_);
if (v___x_626_ == 0)
{
lean_dec(v_i_623_);
return v_entries_624_;
}
else
{
lean_object* v_k_627_; lean_object* v_v_628_; uint64_t v___x_629_; size_t v_h_630_; size_t v___x_631_; lean_object* v___x_632_; size_t v___x_633_; size_t v___x_634_; size_t v___x_635_; size_t v_h_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v_k_627_ = lean_array_fget_borrowed(v_keys_621_, v_i_623_);
v_v_628_ = lean_array_fget_borrowed(v_vals_622_, v_i_623_);
v___x_629_ = l_Lean_instHashableMVarId_hash(v_k_627_);
v_h_630_ = lean_uint64_to_usize(v___x_629_);
v___x_631_ = ((size_t)5ULL);
v___x_632_ = lean_unsigned_to_nat(1u);
v___x_633_ = ((size_t)1ULL);
v___x_634_ = lean_usize_sub(v_depth_620_, v___x_633_);
v___x_635_ = lean_usize_mul(v___x_631_, v___x_634_);
v_h_636_ = lean_usize_shift_right(v_h_630_, v___x_635_);
v___x_637_ = lean_nat_add(v_i_623_, v___x_632_);
lean_dec(v_i_623_);
lean_inc(v_v_628_);
lean_inc(v_k_627_);
v___x_638_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_entries_624_, v_h_636_, v_depth_620_, v_k_627_, v_v_628_);
v_i_623_ = v___x_637_;
v_entries_624_ = v___x_638_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_depth_640_, lean_object* v_keys_641_, lean_object* v_vals_642_, lean_object* v_i_643_, lean_object* v_entries_644_){
_start:
{
size_t v_depth_boxed_645_; lean_object* v_res_646_; 
v_depth_boxed_645_ = lean_unbox_usize(v_depth_640_);
lean_dec(v_depth_640_);
v_res_646_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_boxed_645_, v_keys_641_, v_vals_642_, v_i_643_, v_entries_644_);
lean_dec_ref(v_vals_642_);
lean_dec_ref(v_keys_641_);
return v_res_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_647_, lean_object* v_x_648_, lean_object* v_x_649_, lean_object* v_x_650_, lean_object* v_x_651_){
_start:
{
size_t v_x_2837__boxed_652_; size_t v_x_2838__boxed_653_; lean_object* v_res_654_; 
v_x_2837__boxed_652_ = lean_unbox_usize(v_x_648_);
lean_dec(v_x_648_);
v_x_2838__boxed_653_ = lean_unbox_usize(v_x_649_);
lean_dec(v_x_649_);
v_res_654_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_x_647_, v_x_2837__boxed_652_, v_x_2838__boxed_653_, v_x_650_, v_x_651_);
return v_res_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(lean_object* v_x_655_, lean_object* v_x_656_, lean_object* v_x_657_){
_start:
{
uint64_t v___x_658_; size_t v___x_659_; size_t v___x_660_; lean_object* v___x_661_; 
v___x_658_ = l_Lean_instHashableMVarId_hash(v_x_656_);
v___x_659_ = lean_uint64_to_usize(v___x_658_);
v___x_660_ = ((size_t)1ULL);
v___x_661_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_x_655_, v___x_659_, v___x_660_, v_x_656_, v_x_657_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(lean_object* v_mvarId_662_, lean_object* v_val_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v_mctx_669_; lean_object* v_cache_670_; lean_object* v_zetaDeltaFVarIds_671_; lean_object* v_postponed_672_; lean_object* v_diag_673_; lean_object* v___x_675_; uint8_t v_isShared_676_; uint8_t v_isSharedCheck_701_; 
v___x_667_ = lean_st_ref_get(v___y_665_);
lean_dec(v___x_667_);
v___x_668_ = lean_st_ref_take(v___y_664_);
v_mctx_669_ = lean_ctor_get(v___x_668_, 0);
v_cache_670_ = lean_ctor_get(v___x_668_, 1);
v_zetaDeltaFVarIds_671_ = lean_ctor_get(v___x_668_, 2);
v_postponed_672_ = lean_ctor_get(v___x_668_, 3);
v_diag_673_ = lean_ctor_get(v___x_668_, 4);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_701_ == 0)
{
v___x_675_ = v___x_668_;
v_isShared_676_ = v_isSharedCheck_701_;
goto v_resetjp_674_;
}
else
{
lean_inc(v_diag_673_);
lean_inc(v_postponed_672_);
lean_inc(v_zetaDeltaFVarIds_671_);
lean_inc(v_cache_670_);
lean_inc(v_mctx_669_);
lean_dec(v___x_668_);
v___x_675_ = lean_box(0);
v_isShared_676_ = v_isSharedCheck_701_;
goto v_resetjp_674_;
}
v_resetjp_674_:
{
lean_object* v_depth_677_; lean_object* v_levelAssignDepth_678_; lean_object* v_lmvarCounter_679_; lean_object* v_mvarCounter_680_; lean_object* v_lDecls_681_; lean_object* v_decls_682_; lean_object* v_userNames_683_; lean_object* v_lAssignment_684_; lean_object* v_eAssignment_685_; lean_object* v_dAssignment_686_; lean_object* v___x_688_; uint8_t v_isShared_689_; uint8_t v_isSharedCheck_700_; 
v_depth_677_ = lean_ctor_get(v_mctx_669_, 0);
v_levelAssignDepth_678_ = lean_ctor_get(v_mctx_669_, 1);
v_lmvarCounter_679_ = lean_ctor_get(v_mctx_669_, 2);
v_mvarCounter_680_ = lean_ctor_get(v_mctx_669_, 3);
v_lDecls_681_ = lean_ctor_get(v_mctx_669_, 4);
v_decls_682_ = lean_ctor_get(v_mctx_669_, 5);
v_userNames_683_ = lean_ctor_get(v_mctx_669_, 6);
v_lAssignment_684_ = lean_ctor_get(v_mctx_669_, 7);
v_eAssignment_685_ = lean_ctor_get(v_mctx_669_, 8);
v_dAssignment_686_ = lean_ctor_get(v_mctx_669_, 9);
v_isSharedCheck_700_ = !lean_is_exclusive(v_mctx_669_);
if (v_isSharedCheck_700_ == 0)
{
v___x_688_ = v_mctx_669_;
v_isShared_689_ = v_isSharedCheck_700_;
goto v_resetjp_687_;
}
else
{
lean_inc(v_dAssignment_686_);
lean_inc(v_eAssignment_685_);
lean_inc(v_lAssignment_684_);
lean_inc(v_userNames_683_);
lean_inc(v_decls_682_);
lean_inc(v_lDecls_681_);
lean_inc(v_mvarCounter_680_);
lean_inc(v_lmvarCounter_679_);
lean_inc(v_levelAssignDepth_678_);
lean_inc(v_depth_677_);
lean_dec(v_mctx_669_);
v___x_688_ = lean_box(0);
v_isShared_689_ = v_isSharedCheck_700_;
goto v_resetjp_687_;
}
v_resetjp_687_:
{
lean_object* v___x_690_; lean_object* v___x_692_; 
v___x_690_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(v_eAssignment_685_, v_mvarId_662_, v_val_663_);
if (v_isShared_689_ == 0)
{
lean_ctor_set(v___x_688_, 8, v___x_690_);
v___x_692_ = v___x_688_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_depth_677_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_levelAssignDepth_678_);
lean_ctor_set(v_reuseFailAlloc_699_, 2, v_lmvarCounter_679_);
lean_ctor_set(v_reuseFailAlloc_699_, 3, v_mvarCounter_680_);
lean_ctor_set(v_reuseFailAlloc_699_, 4, v_lDecls_681_);
lean_ctor_set(v_reuseFailAlloc_699_, 5, v_decls_682_);
lean_ctor_set(v_reuseFailAlloc_699_, 6, v_userNames_683_);
lean_ctor_set(v_reuseFailAlloc_699_, 7, v_lAssignment_684_);
lean_ctor_set(v_reuseFailAlloc_699_, 8, v___x_690_);
lean_ctor_set(v_reuseFailAlloc_699_, 9, v_dAssignment_686_);
v___x_692_ = v_reuseFailAlloc_699_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
lean_object* v___x_694_; 
if (v_isShared_676_ == 0)
{
lean_ctor_set(v___x_675_, 0, v___x_692_);
v___x_694_ = v___x_675_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_692_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v_cache_670_);
lean_ctor_set(v_reuseFailAlloc_698_, 2, v_zetaDeltaFVarIds_671_);
lean_ctor_set(v_reuseFailAlloc_698_, 3, v_postponed_672_);
lean_ctor_set(v_reuseFailAlloc_698_, 4, v_diag_673_);
v___x_694_ = v_reuseFailAlloc_698_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
lean_object* v___x_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v___x_695_ = lean_st_ref_set(v___y_664_, v___x_694_);
v___x_696_ = lean_box(0);
v___x_697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_697_, 0, v___x_696_);
return v___x_697_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg___boxed(lean_object* v_mvarId_702_, lean_object* v_val_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(v_mvarId_702_, v_val_703_, v___y_704_, v___y_705_);
lean_dec(v___y_705_);
lean_dec(v___y_704_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0(lean_object* v_mvarId_708_, lean_object* v_rule_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
lean_object* v___x_717_; 
lean_inc(v_mvarId_708_);
v___x_717_ = l_Lean_MVarId_getDecl(v_mvarId_708_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v_a_718_; lean_object* v_expr_719_; lean_object* v_pattern_720_; lean_object* v_resultPos_721_; lean_object* v_type_722_; uint8_t v___x_723_; lean_object* v___x_724_; 
v_a_718_ = lean_ctor_get(v___x_717_, 0);
lean_inc(v_a_718_);
lean_dec_ref(v___x_717_);
v_expr_719_ = lean_ctor_get(v_rule_709_, 0);
lean_inc_ref(v_expr_719_);
v_pattern_720_ = lean_ctor_get(v_rule_709_, 1);
lean_inc_ref_n(v_pattern_720_, 2);
v_resultPos_721_ = lean_ctor_get(v_rule_709_, 2);
lean_inc(v_resultPos_721_);
lean_dec_ref(v_rule_709_);
v_type_722_ = lean_ctor_get(v_a_718_, 2);
lean_inc_ref(v_type_722_);
lean_dec(v_a_718_);
v___x_723_ = 1;
v___x_724_ = l_Lean_Meta_Sym_Pattern_unify_x3f(v_pattern_720_, v_type_722_, v___x_723_, v___y_710_, v___y_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_753_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_753_ == 0)
{
v___x_727_ = v___x_724_;
v_isShared_728_ = v_isSharedCheck_753_;
goto v_resetjp_726_;
}
else
{
lean_inc(v_a_725_);
lean_dec(v___x_724_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_753_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
if (lean_obj_tag(v_a_725_) == 1)
{
lean_object* v_val_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_748_; 
lean_del_object(v___x_727_);
v_val_729_ = lean_ctor_get(v_a_725_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v_a_725_);
if (v_isSharedCheck_748_ == 0)
{
v___x_731_ = v_a_725_;
v_isShared_732_ = v_isSharedCheck_748_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_val_729_);
lean_dec(v_a_725_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_748_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_746_; 
lean_inc(v_val_729_);
v___x_733_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue(v_expr_719_, v_pattern_720_, v_val_729_);
v___x_734_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(v_mvarId_708_, v___x_733_, v___y_713_, v___y_715_);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_734_);
if (v_isSharedCheck_746_ == 0)
{
lean_object* v_unused_747_; 
v_unused_747_ = lean_ctor_get(v___x_734_, 0);
lean_dec(v_unused_747_);
v___x_736_ = v___x_734_;
v_isShared_737_ = v_isSharedCheck_746_;
goto v_resetjp_735_;
}
else
{
lean_dec(v___x_734_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_746_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_741_; 
v___x_738_ = lean_box(0);
v___x_739_ = l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(v_val_729_, v_resultPos_721_, v___x_738_);
lean_dec(v_val_729_);
if (v_isShared_732_ == 0)
{
lean_ctor_set(v___x_731_, 0, v___x_739_);
v___x_741_ = v___x_731_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v___x_739_);
v___x_741_ = v_reuseFailAlloc_745_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_743_; 
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 0, v___x_741_);
v___x_743_ = v___x_736_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
else
{
lean_object* v___x_749_; lean_object* v___x_751_; 
lean_dec(v_a_725_);
lean_dec(v_resultPos_721_);
lean_dec_ref(v_pattern_720_);
lean_dec_ref(v_expr_719_);
lean_dec(v_mvarId_708_);
v___x_749_ = lean_box(0);
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 0, v___x_749_);
v___x_751_ = v___x_727_;
goto v_reusejp_750_;
}
else
{
lean_object* v_reuseFailAlloc_752_; 
v_reuseFailAlloc_752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_752_, 0, v___x_749_);
v___x_751_ = v_reuseFailAlloc_752_;
goto v_reusejp_750_;
}
v_reusejp_750_:
{
return v___x_751_;
}
}
}
}
else
{
lean_object* v_a_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_761_; 
lean_dec(v_resultPos_721_);
lean_dec_ref(v_pattern_720_);
lean_dec_ref(v_expr_719_);
lean_dec(v_mvarId_708_);
v_a_754_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_761_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_761_ == 0)
{
v___x_756_ = v___x_724_;
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_a_754_);
lean_dec(v___x_724_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_761_;
goto v_resetjp_755_;
}
v_resetjp_755_:
{
lean_object* v___x_759_; 
if (v_isShared_757_ == 0)
{
v___x_759_ = v___x_756_;
goto v_reusejp_758_;
}
else
{
lean_object* v_reuseFailAlloc_760_; 
v_reuseFailAlloc_760_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_760_, 0, v_a_754_);
v___x_759_ = v_reuseFailAlloc_760_;
goto v_reusejp_758_;
}
v_reusejp_758_:
{
return v___x_759_;
}
}
}
}
else
{
lean_object* v_a_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_769_; 
lean_dec_ref(v_rule_709_);
lean_dec(v_mvarId_708_);
v_a_762_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_769_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_769_ == 0)
{
v___x_764_ = v___x_717_;
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_a_762_);
lean_dec(v___x_717_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_769_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_767_; 
if (v_isShared_765_ == 0)
{
v___x_767_ = v___x_764_;
goto v_reusejp_766_;
}
else
{
lean_object* v_reuseFailAlloc_768_; 
v_reuseFailAlloc_768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_768_, 0, v_a_762_);
v___x_767_ = v_reuseFailAlloc_768_;
goto v_reusejp_766_;
}
v_reusejp_766_:
{
return v___x_767_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0___boxed(lean_object* v_mvarId_770_, lean_object* v_rule_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
lean_object* v_res_779_; 
v_res_779_ = l_Lean_Meta_Sym_BackwardRule_apply___lam__0(v_mvarId_770_, v_rule_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
lean_dec(v___y_773_);
lean_dec_ref(v___y_772_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply(lean_object* v_mvarId_780_, lean_object* v_rule_781_, lean_object* v_a_782_, lean_object* v_a_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_){
_start:
{
lean_object* v___f_789_; lean_object* v___x_790_; 
lean_inc(v_mvarId_780_);
v___f_789_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_BackwardRule_apply___lam__0___boxed), 9, 2);
lean_closure_set(v___f_789_, 0, v_mvarId_780_);
lean_closure_set(v___f_789_, 1, v_rule_781_);
v___x_790_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(v_mvarId_780_, v___f_789_, v_a_782_, v_a_783_, v_a_784_, v_a_785_, v_a_786_, v_a_787_);
return v___x_790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___boxed(lean_object* v_mvarId_791_, lean_object* v_rule_792_, lean_object* v_a_793_, lean_object* v_a_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_Meta_Sym_BackwardRule_apply(v_mvarId_791_, v_rule_792_, v_a_793_, v_a_794_, v_a_795_, v_a_796_, v_a_797_, v_a_798_);
lean_dec(v_a_798_);
lean_dec_ref(v_a_797_);
lean_dec(v_a_796_);
lean_dec_ref(v_a_795_);
lean_dec(v_a_794_);
lean_dec_ref(v_a_793_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0(lean_object* v_mvarId_801_, lean_object* v_val_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(v_mvarId_801_, v_val_802_, v___y_806_, v___y_808_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___boxed(lean_object* v_mvarId_811_, lean_object* v_val_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0(v_mvarId_811_, v_val_812_, v___y_813_, v___y_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0(lean_object* v_00_u03b2_821_, lean_object* v_x_822_, lean_object* v_x_823_, lean_object* v_x_824_){
_start:
{
lean_object* v___x_825_; 
v___x_825_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(v_x_822_, v_x_823_, v_x_824_);
return v___x_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_826_, lean_object* v_x_827_, size_t v_x_828_, size_t v_x_829_, lean_object* v_x_830_, lean_object* v_x_831_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_x_827_, v_x_828_, v_x_829_, v_x_830_, v_x_831_);
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_833_, lean_object* v_x_834_, lean_object* v_x_835_, lean_object* v_x_836_, lean_object* v_x_837_, lean_object* v_x_838_){
_start:
{
size_t v_x_3221__boxed_839_; size_t v_x_3222__boxed_840_; lean_object* v_res_841_; 
v_x_3221__boxed_839_ = lean_unbox_usize(v_x_835_);
lean_dec(v_x_835_);
v_x_3222__boxed_840_ = lean_unbox_usize(v_x_836_);
lean_dec(v_x_836_);
v_res_841_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2(v_00_u03b2_833_, v_x_834_, v_x_3221__boxed_839_, v_x_3222__boxed_840_, v_x_837_, v_x_838_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_842_, lean_object* v_n_843_, lean_object* v_k_844_, lean_object* v_v_845_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(v_n_843_, v_k_844_, v_v_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_847_, size_t v_depth_848_, lean_object* v_keys_849_, lean_object* v_vals_850_, lean_object* v_heq_851_, lean_object* v_i_852_, lean_object* v_entries_853_){
_start:
{
lean_object* v___x_854_; 
v___x_854_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_848_, v_keys_849_, v_vals_850_, v_i_852_, v_entries_853_);
return v___x_854_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_855_, lean_object* v_depth_856_, lean_object* v_keys_857_, lean_object* v_vals_858_, lean_object* v_heq_859_, lean_object* v_i_860_, lean_object* v_entries_861_){
_start:
{
size_t v_depth_boxed_862_; lean_object* v_res_863_; 
v_depth_boxed_862_ = lean_unbox_usize(v_depth_856_);
lean_dec(v_depth_856_);
v_res_863_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_855_, v_depth_boxed_862_, v_keys_857_, v_vals_858_, v_heq_859_, v_i_860_, v_entries_861_);
lean_dec_ref(v_vals_858_);
lean_dec_ref(v_keys_857_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_864_, lean_object* v_x_865_, lean_object* v_x_866_, lean_object* v_x_867_, lean_object* v_x_868_){
_start:
{
lean_object* v___x_869_; 
v___x_869_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_x_865_, v_x_866_, v_x_867_, v_x_868_);
return v___x_869_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(lean_object* v_msgData_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_){
_start:
{
lean_object* v___x_876_; lean_object* v_env_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v_mctx_880_; lean_object* v_lctx_881_; lean_object* v_options_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_876_ = lean_st_ref_get(v___y_874_);
v_env_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc_ref(v_env_877_);
lean_dec(v___x_876_);
v___x_878_ = lean_st_ref_get(v___y_874_);
lean_dec(v___x_878_);
v___x_879_ = lean_st_ref_get(v___y_872_);
v_mctx_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc_ref(v_mctx_880_);
lean_dec(v___x_879_);
v_lctx_881_ = lean_ctor_get(v___y_871_, 2);
v_options_882_ = lean_ctor_get(v___y_873_, 2);
lean_inc_ref(v_options_882_);
lean_inc_ref(v_lctx_881_);
v___x_883_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_883_, 0, v_env_877_);
lean_ctor_set(v___x_883_, 1, v_mctx_880_);
lean_ctor_set(v___x_883_, 2, v_lctx_881_);
lean_ctor_set(v___x_883_, 3, v_options_882_);
v___x_884_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_884_, 0, v___x_883_);
lean_ctor_set(v___x_884_, 1, v_msgData_870_);
v___x_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_885_, 0, v___x_884_);
return v___x_885_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0___boxed(lean_object* v_msgData_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(v_msgData_886_, v___y_887_, v___y_888_, v___y_889_, v___y_890_);
lean_dec(v___y_890_);
lean_dec_ref(v___y_889_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(lean_object* v_msg_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v_ref_899_; lean_object* v___x_900_; lean_object* v_a_901_; lean_object* v___x_903_; uint8_t v_isShared_904_; uint8_t v_isSharedCheck_909_; 
v_ref_899_ = lean_ctor_get(v___y_896_, 5);
v___x_900_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(v_msg_893_, v___y_894_, v___y_895_, v___y_896_, v___y_897_);
v_a_901_ = lean_ctor_get(v___x_900_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_900_);
if (v_isSharedCheck_909_ == 0)
{
v___x_903_ = v___x_900_;
v_isShared_904_ = v_isSharedCheck_909_;
goto v_resetjp_902_;
}
else
{
lean_inc(v_a_901_);
lean_dec(v___x_900_);
v___x_903_ = lean_box(0);
v_isShared_904_ = v_isSharedCheck_909_;
goto v_resetjp_902_;
}
v_resetjp_902_:
{
lean_object* v___x_905_; lean_object* v___x_907_; 
lean_inc(v_ref_899_);
v___x_905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_905_, 0, v_ref_899_);
lean_ctor_set(v___x_905_, 1, v_a_901_);
if (v_isShared_904_ == 0)
{
lean_ctor_set_tag(v___x_903_, 1);
lean_ctor_set(v___x_903_, 0, v___x_905_);
v___x_907_ = v___x_903_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v___x_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg___boxed(lean_object* v_msg_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v_res_916_; 
v_res_916_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(v_msg_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_);
lean_dec(v___y_914_);
lean_dec_ref(v___y_913_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
return v_res_916_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0(void){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = lean_mk_string_unchecked("rule is not applicable to goal", 30, 30);
return v___x_917_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_918_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0, &l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0_once, _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0);
v___x_919_ = l_Lean_stringToMessageData(v___x_918_);
return v___x_919_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2(void){
_start:
{
lean_object* v___x_920_; 
v___x_920_ = lean_mk_string_unchecked("rule:", 5, 5);
return v___x_920_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3(void){
_start:
{
lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_921_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2, &l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2_once, _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2);
v___x_922_ = l_Lean_stringToMessageData(v___x_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27(lean_object* v_mvarId_923_, lean_object* v_rule_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_){
_start:
{
lean_object* v___x_932_; 
lean_inc_ref(v_rule_924_);
lean_inc(v_mvarId_923_);
v___x_932_ = l_Lean_Meta_Sym_BackwardRule_apply(v_mvarId_923_, v_rule_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
if (lean_obj_tag(v___x_932_) == 0)
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_950_; 
v_a_933_ = lean_ctor_get(v___x_932_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_932_);
if (v_isSharedCheck_950_ == 0)
{
v___x_935_ = v___x_932_;
v_isShared_936_ = v_isSharedCheck_950_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_932_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_950_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
if (lean_obj_tag(v_a_933_) == 1)
{
lean_object* v_mvarIds_937_; lean_object* v___x_939_; 
lean_dec_ref(v_rule_924_);
lean_dec(v_mvarId_923_);
v_mvarIds_937_ = lean_ctor_get(v_a_933_, 0);
lean_inc(v_mvarIds_937_);
lean_dec_ref(v_a_933_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 0, v_mvarIds_937_);
v___x_939_ = v___x_935_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v_mvarIds_937_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
else
{
lean_object* v_expr_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; 
lean_del_object(v___x_935_);
lean_dec(v_a_933_);
v_expr_941_ = lean_ctor_get(v_rule_924_, 0);
lean_inc_ref(v_expr_941_);
lean_dec_ref(v_rule_924_);
v___x_942_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1, &l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1_once, _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1);
v___x_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_943_, 0, v_mvarId_923_);
v___x_944_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_944_, 0, v___x_942_);
lean_ctor_set(v___x_944_, 1, v___x_943_);
v___x_945_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3, &l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3_once, _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3);
v___x_946_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_946_, 0, v___x_944_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
v___x_947_ = l_Lean_indentExpr(v_expr_941_);
v___x_948_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(v___x_948_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
return v___x_949_;
}
}
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_dec_ref(v_rule_924_);
lean_dec(v_mvarId_923_);
v_a_951_ = lean_ctor_get(v___x_932_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_932_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_932_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_932_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___boxed(lean_object* v_mvarId_959_, lean_object* v_rule_960_, lean_object* v_a_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_Meta_Sym_BackwardRule_apply_x27(v_mvarId_959_, v_rule_960_, v_a_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_, v_a_966_);
lean_dec(v_a_966_);
lean_dec_ref(v_a_965_);
lean_dec(v_a_964_);
lean_dec_ref(v_a_963_);
lean_dec(v_a_962_);
lean_dec_ref(v_a_961_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0(lean_object* v_00_u03b1_969_, lean_object* v_msg_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(v_msg_970_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___boxed(lean_object* v_00_u03b1_979_, lean_object* v_msg_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
lean_object* v_res_988_; 
v_res_988_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0(v_00_u03b1_979_, v_msg_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
return v_res_988_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Apply(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Apply(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Apply(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Apply(builtin);
}
#ifdef __cplusplus
}
#endif
