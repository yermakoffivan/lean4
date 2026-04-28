// Lean compiler output
// Module: Lean.Meta.Sym.Simp.Rewrite
// Imports: public import Lean.Meta.Sym.Simp.Simproc public import Lean.Meta.Sym.Simp.Theorems public import Lean.Meta.Sym.Simp.App public import Lean.Meta.Sym.Simp.Discharger import Lean.Meta.ACLt import Lean.Meta.Sym.InstantiateS import Lean.Meta.Sym.InstantiateMVarsS import Init.Data.Range.Polymorphic.Iterators
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
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Pattern_match_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_instantiate_level_mvars(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkRflResultCD(uint8_t);
lean_object* l_Lean_Meta_Sym_instantiateMVarsS(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevBetaS___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_acLt(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpOverApplied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_getMatchWithExtra(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_mkValue(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_mkValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_Theorem_rewrite_checkPerm(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_Theorem_rewrite_checkPerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorem_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorem_rewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Simp_Theorems_rewrite___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_mkValue(lean_object* v_expr_1_, lean_object* v_pattern_2_, lean_object* v_us_3_, lean_object* v_args_4_){
_start:
{
if (lean_obj_tag(v_expr_1_) == 4)
{
lean_object* v_us_9_; 
v_us_9_ = lean_ctor_get(v_expr_1_, 1);
if (lean_obj_tag(v_us_9_) == 0)
{
lean_object* v_declName_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
lean_dec_ref(v_pattern_2_);
v_declName_10_ = lean_ctor_get(v_expr_1_, 0);
lean_inc(v_declName_10_);
lean_dec_ref(v_expr_1_);
v___x_11_ = l_Lean_mkConst(v_declName_10_, v_us_3_);
v___x_12_ = l_Lean_mkAppN(v___x_11_, v_args_4_);
return v___x_12_;
}
else
{
goto v___jp_5_;
}
}
else
{
goto v___jp_5_;
}
v___jp_5_:
{
lean_object* v_levelParams_6_; lean_object* v___x_7_; lean_object* v___x_8_; 
v_levelParams_6_ = lean_ctor_get(v_pattern_2_, 0);
lean_inc(v_levelParams_6_);
lean_dec_ref(v_pattern_2_);
v___x_7_ = l_Lean_Expr_instantiateLevelParams(v_expr_1_, v_levelParams_6_, v_us_3_);
lean_dec_ref(v_expr_1_);
v___x_8_ = l_Lean_mkAppN(v___x_7_, v_args_4_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_mkValue___boxed(lean_object* v_expr_13_, lean_object* v_pattern_14_, lean_object* v_us_15_, lean_object* v_args_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_mkValue(v_expr_13_, v_pattern_14_, v_us_15_, v_args_16_);
lean_dec_ref(v_args_16_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_Theorem_rewrite_checkPerm(uint8_t v_perm_18_, lean_object* v_e_19_, lean_object* v_result_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_){
_start:
{
if (v_perm_18_ == 0)
{
uint8_t v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
lean_dec_ref(v_result_20_);
lean_dec_ref(v_e_19_);
v___x_26_ = 1;
v___x_27_ = lean_box(v___x_26_);
v___x_28_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_28_, 0, v___x_27_);
return v___x_28_;
}
else
{
uint8_t v___x_29_; lean_object* v___x_30_; 
v___x_29_ = 2;
v___x_30_ = l_Lean_Meta_acLt(v_result_20_, v_e_19_, v___x_29_, v_a_21_, v_a_22_, v_a_23_, v_a_24_);
return v___x_30_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_Theorem_rewrite_checkPerm___boxed(lean_object* v_perm_31_, lean_object* v_e_32_, lean_object* v_result_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_){
_start:
{
uint8_t v_perm_boxed_39_; lean_object* v_res_40_; 
v_perm_boxed_39_ = lean_unbox(v_perm_31_);
v_res_40_ = l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_Theorem_rewrite_checkPerm(v_perm_boxed_39_, v_e_32_, v_result_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
lean_dec(v_a_35_);
lean_dec_ref(v_a_34_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0___redArg(lean_object* v_l_41_, lean_object* v___y_42_, lean_object* v___y_43_){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v_mctx_47_; lean_object* v___x_48_; lean_object* v_fst_49_; lean_object* v_snd_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v_cache_53_; lean_object* v_zetaDeltaFVarIds_54_; lean_object* v_postponed_55_; lean_object* v_diag_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_65_; 
v___x_45_ = lean_st_ref_get(v___y_43_);
lean_dec(v___x_45_);
v___x_46_ = lean_st_ref_get(v___y_42_);
v_mctx_47_ = lean_ctor_get(v___x_46_, 0);
lean_inc_ref(v_mctx_47_);
lean_dec(v___x_46_);
v___x_48_ = lean_instantiate_level_mvars(v_mctx_47_, v_l_41_);
v_fst_49_ = lean_ctor_get(v___x_48_, 0);
lean_inc(v_fst_49_);
v_snd_50_ = lean_ctor_get(v___x_48_, 1);
lean_inc(v_snd_50_);
lean_dec_ref(v___x_48_);
v___x_51_ = lean_st_ref_get(v___y_43_);
lean_dec(v___x_51_);
v___x_52_ = lean_st_ref_take(v___y_42_);
v_cache_53_ = lean_ctor_get(v___x_52_, 1);
v_zetaDeltaFVarIds_54_ = lean_ctor_get(v___x_52_, 2);
v_postponed_55_ = lean_ctor_get(v___x_52_, 3);
v_diag_56_ = lean_ctor_get(v___x_52_, 4);
v_isSharedCheck_65_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_65_ == 0)
{
lean_object* v_unused_66_; 
v_unused_66_ = lean_ctor_get(v___x_52_, 0);
lean_dec(v_unused_66_);
v___x_58_ = v___x_52_;
v_isShared_59_ = v_isSharedCheck_65_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_diag_56_);
lean_inc(v_postponed_55_);
lean_inc(v_zetaDeltaFVarIds_54_);
lean_inc(v_cache_53_);
lean_dec(v___x_52_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_65_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v___x_61_; 
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v_fst_49_);
v___x_61_ = v___x_58_;
goto v_reusejp_60_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_fst_49_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_cache_53_);
lean_ctor_set(v_reuseFailAlloc_64_, 2, v_zetaDeltaFVarIds_54_);
lean_ctor_set(v_reuseFailAlloc_64_, 3, v_postponed_55_);
lean_ctor_set(v_reuseFailAlloc_64_, 4, v_diag_56_);
v___x_61_ = v_reuseFailAlloc_64_;
goto v_reusejp_60_;
}
v_reusejp_60_:
{
lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_62_ = lean_st_ref_set(v___y_42_, v___x_61_);
v___x_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_63_, 0, v_snd_50_);
return v___x_63_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0___redArg___boxed(lean_object* v_l_67_, lean_object* v___y_68_, lean_object* v___y_69_, lean_object* v___y_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0___redArg(v_l_67_, v___y_68_, v___y_69_);
lean_dec(v___y_69_);
lean_dec(v___y_68_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0(lean_object* v_l_72_, lean_object* v___y_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_){
_start:
{
lean_object* v___x_83_; 
v___x_83_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0___redArg(v_l_72_, v___y_79_, v___y_81_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0___boxed(lean_object* v_l_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0(v_l_84_, v___y_85_, v___y_86_, v___y_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_);
lean_dec(v___y_93_);
lean_dec_ref(v___y_92_);
lean_dec(v___y_91_);
lean_dec_ref(v___y_90_);
lean_dec(v___y_89_);
lean_dec_ref(v___y_88_);
lean_dec(v___y_87_);
lean_dec_ref(v___y_86_);
lean_dec(v___y_85_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg___lam__0(lean_object* v_k_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_, lean_object* v___y_103_, lean_object* v___y_104_, lean_object* v___y_105_){
_start:
{
lean_object* v___x_107_; 
lean_inc(v___y_101_);
lean_inc_ref(v___y_100_);
lean_inc(v___y_99_);
lean_inc_ref(v___y_98_);
lean_inc(v___y_97_);
v___x_107_ = lean_apply_10(v_k_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, v___y_103_, v___y_104_, v___y_105_, lean_box(0));
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg___lam__0___boxed(lean_object* v_k_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg___lam__0(v_k_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec(v___y_109_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg(lean_object* v_k_120_, uint8_t v_allowLevelAssignments_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v___f_132_; lean_object* v___x_133_; 
lean_inc(v___y_126_);
lean_inc_ref(v___y_125_);
lean_inc(v___y_124_);
lean_inc_ref(v___y_123_);
lean_inc(v___y_122_);
v___f_132_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_132_, 0, v_k_120_);
lean_closure_set(v___f_132_, 1, v___y_122_);
lean_closure_set(v___f_132_, 2, v___y_123_);
lean_closure_set(v___f_132_, 3, v___y_124_);
lean_closure_set(v___f_132_, 4, v___y_125_);
lean_closure_set(v___f_132_, 5, v___y_126_);
v___x_133_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_121_, v___f_132_, v___y_127_, v___y_128_, v___y_129_, v___y_130_);
if (lean_obj_tag(v___x_133_) == 0)
{
return v___x_133_;
}
else
{
lean_object* v_a_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_141_; 
v_a_134_ = lean_ctor_get(v___x_133_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_133_);
if (v_isSharedCheck_141_ == 0)
{
v___x_136_ = v___x_133_;
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_a_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_141_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_139_; 
if (v_isShared_137_ == 0)
{
v___x_139_ = v___x_136_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_134_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg___boxed(lean_object* v_k_142_, lean_object* v_allowLevelAssignments_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_154_; lean_object* v_res_155_; 
v_allowLevelAssignments_boxed_154_ = lean_unbox(v_allowLevelAssignments_143_);
v_res_155_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg(v_k_142_, v_allowLevelAssignments_boxed_154_, v___y_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
lean_dec(v___y_150_);
lean_dec_ref(v___y_149_);
lean_dec(v___y_148_);
lean_dec_ref(v___y_147_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5(lean_object* v_00_u03b1_156_, lean_object* v_k_157_, uint8_t v_allowLevelAssignments_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v___x_169_; 
v___x_169_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg(v_k_157_, v_allowLevelAssignments_158_, v___y_159_, v___y_160_, v___y_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_, v___y_167_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___boxed(lean_object* v_00_u03b1_170_, lean_object* v_k_171_, lean_object* v_allowLevelAssignments_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_183_; lean_object* v_res_184_; 
v_allowLevelAssignments_boxed_183_ = lean_unbox(v_allowLevelAssignments_172_);
v_res_184_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5(v_00_u03b1_170_, v_k_171_, v_allowLevelAssignments_boxed_183_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
return v_res_184_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__1(lean_object* v_x_185_, lean_object* v_x_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
if (lean_obj_tag(v_x_185_) == 0)
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = l_List_reverse___redArg(v_x_186_);
v___x_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_198_, 0, v___x_197_);
return v___x_198_;
}
else
{
lean_object* v_head_199_; lean_object* v_tail_200_; lean_object* v___x_202_; uint8_t v_isShared_203_; uint8_t v_isSharedCheck_210_; 
v_head_199_ = lean_ctor_get(v_x_185_, 0);
v_tail_200_ = lean_ctor_get(v_x_185_, 1);
v_isSharedCheck_210_ = !lean_is_exclusive(v_x_185_);
if (v_isSharedCheck_210_ == 0)
{
v___x_202_ = v_x_185_;
v_isShared_203_ = v_isSharedCheck_210_;
goto v_resetjp_201_;
}
else
{
lean_inc(v_tail_200_);
lean_inc(v_head_199_);
lean_dec(v_x_185_);
v___x_202_ = lean_box(0);
v_isShared_203_ = v_isSharedCheck_210_;
goto v_resetjp_201_;
}
v_resetjp_201_:
{
lean_object* v___x_204_; lean_object* v_a_205_; lean_object* v___x_207_; 
v___x_204_ = l_Lean_instantiateLevelMVars___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__0___redArg(v_head_199_, v___y_193_, v___y_195_);
v_a_205_ = lean_ctor_get(v___x_204_, 0);
lean_inc(v_a_205_);
lean_dec_ref(v___x_204_);
if (v_isShared_203_ == 0)
{
lean_ctor_set(v___x_202_, 1, v_x_186_);
lean_ctor_set(v___x_202_, 0, v_a_205_);
v___x_207_ = v___x_202_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_a_205_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v_x_186_);
v___x_207_ = v_reuseFailAlloc_209_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
v_x_185_ = v_tail_200_;
v_x_186_ = v___x_207_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__1___boxed(lean_object* v_x_211_, lean_object* v_x_212_, lean_object* v___y_213_, lean_object* v___y_214_, lean_object* v___y_215_, lean_object* v___y_216_, lean_object* v___y_217_, lean_object* v___y_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v_res_223_; 
v_res_223_ = l_List_mapM_loop___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__1(v_x_211_, v_x_212_, v___y_213_, v___y_214_, v___y_215_, v___y_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_, v___y_221_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v___y_219_);
lean_dec_ref(v___y_218_);
lean_dec(v___y_217_);
lean_dec_ref(v___y_216_);
lean_dec(v___y_215_);
lean_dec_ref(v___y_214_);
lean_dec(v___y_213_);
return v_res_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10_spec__11___redArg(lean_object* v_x_224_, lean_object* v_x_225_, lean_object* v_x_226_, lean_object* v_x_227_){
_start:
{
lean_object* v_ks_228_; lean_object* v_vs_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_253_; 
v_ks_228_ = lean_ctor_get(v_x_224_, 0);
v_vs_229_ = lean_ctor_get(v_x_224_, 1);
v_isSharedCheck_253_ = !lean_is_exclusive(v_x_224_);
if (v_isSharedCheck_253_ == 0)
{
v___x_231_ = v_x_224_;
v_isShared_232_ = v_isSharedCheck_253_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_vs_229_);
lean_inc(v_ks_228_);
lean_dec(v_x_224_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_253_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_233_; uint8_t v___x_234_; 
v___x_233_ = lean_array_get_size(v_ks_228_);
v___x_234_ = lean_nat_dec_lt(v_x_225_, v___x_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_238_; 
lean_dec(v_x_225_);
v___x_235_ = lean_array_push(v_ks_228_, v_x_226_);
v___x_236_ = lean_array_push(v_vs_229_, v_x_227_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 1, v___x_236_);
lean_ctor_set(v___x_231_, 0, v___x_235_);
v___x_238_ = v___x_231_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_235_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___x_236_);
v___x_238_ = v_reuseFailAlloc_239_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
return v___x_238_;
}
}
else
{
lean_object* v_k_x27_240_; uint8_t v___x_241_; 
v_k_x27_240_ = lean_array_fget_borrowed(v_ks_228_, v_x_225_);
v___x_241_ = l_Lean_instBEqMVarId_beq(v_x_226_, v_k_x27_240_);
if (v___x_241_ == 0)
{
lean_object* v___x_243_; 
if (v_isShared_232_ == 0)
{
v___x_243_ = v___x_231_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_247_; 
v_reuseFailAlloc_247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_247_, 0, v_ks_228_);
lean_ctor_set(v_reuseFailAlloc_247_, 1, v_vs_229_);
v___x_243_ = v_reuseFailAlloc_247_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = lean_unsigned_to_nat(1u);
v___x_245_ = lean_nat_add(v_x_225_, v___x_244_);
lean_dec(v_x_225_);
v_x_224_ = v___x_243_;
v_x_225_ = v___x_245_;
goto _start;
}
}
else
{
lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_251_; 
v___x_248_ = lean_array_fset(v_ks_228_, v_x_225_, v_x_226_);
v___x_249_ = lean_array_fset(v_vs_229_, v_x_225_, v_x_227_);
lean_dec(v_x_225_);
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 1, v___x_249_);
lean_ctor_set(v___x_231_, 0, v___x_248_);
v___x_251_ = v___x_231_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_252_; 
v_reuseFailAlloc_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_252_, 0, v___x_248_);
lean_ctor_set(v_reuseFailAlloc_252_, 1, v___x_249_);
v___x_251_ = v_reuseFailAlloc_252_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
return v___x_251_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10___redArg(lean_object* v_n_254_, lean_object* v_k_255_, lean_object* v_v_256_){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; 
v___x_257_ = lean_unsigned_to_nat(0u);
v___x_258_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10_spec__11___redArg(v_n_254_, v___x_257_, v_k_255_, v_v_256_);
return v___x_258_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__0(void){
_start:
{
size_t v___x_259_; size_t v___x_260_; size_t v___x_261_; 
v___x_259_ = ((size_t)5ULL);
v___x_260_ = ((size_t)1ULL);
v___x_261_ = lean_usize_shift_left(v___x_260_, v___x_259_);
return v___x_261_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__1(void){
_start:
{
size_t v___x_262_; size_t v___x_263_; size_t v___x_264_; 
v___x_262_ = ((size_t)1ULL);
v___x_263_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__0);
v___x_264_ = lean_usize_sub(v___x_263_, v___x_262_);
return v___x_264_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__2(void){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_265_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg(lean_object* v_x_266_, size_t v_x_267_, size_t v_x_268_, lean_object* v_x_269_, lean_object* v_x_270_){
_start:
{
if (lean_obj_tag(v_x_266_) == 0)
{
lean_object* v_es_271_; size_t v___x_272_; size_t v___x_273_; size_t v___x_274_; size_t v___x_275_; lean_object* v_j_276_; lean_object* v___x_277_; uint8_t v___x_278_; 
v_es_271_ = lean_ctor_get(v_x_266_, 0);
v___x_272_ = ((size_t)5ULL);
v___x_273_ = ((size_t)1ULL);
v___x_274_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__1);
v___x_275_ = lean_usize_land(v_x_267_, v___x_274_);
v_j_276_ = lean_usize_to_nat(v___x_275_);
v___x_277_ = lean_array_get_size(v_es_271_);
v___x_278_ = lean_nat_dec_lt(v_j_276_, v___x_277_);
if (v___x_278_ == 0)
{
lean_dec(v_j_276_);
lean_dec(v_x_270_);
lean_dec(v_x_269_);
return v_x_266_;
}
else
{
lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_315_; 
lean_inc_ref(v_es_271_);
v_isSharedCheck_315_ = !lean_is_exclusive(v_x_266_);
if (v_isSharedCheck_315_ == 0)
{
lean_object* v_unused_316_; 
v_unused_316_ = lean_ctor_get(v_x_266_, 0);
lean_dec(v_unused_316_);
v___x_280_ = v_x_266_;
v_isShared_281_ = v_isSharedCheck_315_;
goto v_resetjp_279_;
}
else
{
lean_dec(v_x_266_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_315_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v_v_282_; lean_object* v___x_283_; lean_object* v_xs_x27_284_; lean_object* v___y_286_; 
v_v_282_ = lean_array_fget(v_es_271_, v_j_276_);
v___x_283_ = lean_box(0);
v_xs_x27_284_ = lean_array_fset(v_es_271_, v_j_276_, v___x_283_);
switch(lean_obj_tag(v_v_282_))
{
case 0:
{
lean_object* v_key_291_; lean_object* v_val_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_302_; 
v_key_291_ = lean_ctor_get(v_v_282_, 0);
v_val_292_ = lean_ctor_get(v_v_282_, 1);
v_isSharedCheck_302_ = !lean_is_exclusive(v_v_282_);
if (v_isSharedCheck_302_ == 0)
{
v___x_294_ = v_v_282_;
v_isShared_295_ = v_isSharedCheck_302_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_val_292_);
lean_inc(v_key_291_);
lean_dec(v_v_282_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_302_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
uint8_t v___x_296_; 
v___x_296_ = l_Lean_instBEqMVarId_beq(v_x_269_, v_key_291_);
if (v___x_296_ == 0)
{
lean_object* v___x_297_; lean_object* v___x_298_; 
lean_del_object(v___x_294_);
v___x_297_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_291_, v_val_292_, v_x_269_, v_x_270_);
v___x_298_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
v___y_286_ = v___x_298_;
goto v___jp_285_;
}
else
{
lean_object* v___x_300_; 
lean_dec(v_val_292_);
lean_dec(v_key_291_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 1, v_x_270_);
lean_ctor_set(v___x_294_, 0, v_x_269_);
v___x_300_ = v___x_294_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v_x_269_);
lean_ctor_set(v_reuseFailAlloc_301_, 1, v_x_270_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
v___y_286_ = v___x_300_;
goto v___jp_285_;
}
}
}
}
case 1:
{
lean_object* v_node_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_313_; 
v_node_303_ = lean_ctor_get(v_v_282_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v_v_282_);
if (v_isSharedCheck_313_ == 0)
{
v___x_305_ = v_v_282_;
v_isShared_306_ = v_isSharedCheck_313_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_node_303_);
lean_dec(v_v_282_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_313_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
size_t v___x_307_; size_t v___x_308_; lean_object* v___x_309_; lean_object* v___x_311_; 
v___x_307_ = lean_usize_shift_right(v_x_267_, v___x_272_);
v___x_308_ = lean_usize_add(v_x_268_, v___x_273_);
v___x_309_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg(v_node_303_, v___x_307_, v___x_308_, v_x_269_, v_x_270_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 0, v___x_309_);
v___x_311_ = v___x_305_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_309_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
v___y_286_ = v___x_311_;
goto v___jp_285_;
}
}
}
default: 
{
lean_object* v___x_314_; 
v___x_314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_314_, 0, v_x_269_);
lean_ctor_set(v___x_314_, 1, v_x_270_);
v___y_286_ = v___x_314_;
goto v___jp_285_;
}
}
v___jp_285_:
{
lean_object* v___x_287_; lean_object* v___x_289_; 
v___x_287_ = lean_array_fset(v_xs_x27_284_, v_j_276_, v___y_286_);
lean_dec(v_j_276_);
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v___x_287_);
v___x_289_ = v___x_280_;
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
}
}
else
{
lean_object* v_ks_317_; lean_object* v_vs_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_338_; 
v_ks_317_ = lean_ctor_get(v_x_266_, 0);
v_vs_318_ = lean_ctor_get(v_x_266_, 1);
v_isSharedCheck_338_ = !lean_is_exclusive(v_x_266_);
if (v_isSharedCheck_338_ == 0)
{
v___x_320_ = v_x_266_;
v_isShared_321_ = v_isSharedCheck_338_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_vs_318_);
lean_inc(v_ks_317_);
lean_dec(v_x_266_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_338_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_ks_317_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_vs_318_);
v___x_323_ = v_reuseFailAlloc_337_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v_newNode_324_; uint8_t v___y_326_; size_t v___x_332_; uint8_t v___x_333_; 
v_newNode_324_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10___redArg(v___x_323_, v_x_269_, v_x_270_);
v___x_332_ = ((size_t)7ULL);
v___x_333_ = lean_usize_dec_le(v___x_332_, v_x_268_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_334_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_324_);
v___x_335_ = lean_unsigned_to_nat(4u);
v___x_336_ = lean_nat_dec_lt(v___x_334_, v___x_335_);
lean_dec(v___x_334_);
v___y_326_ = v___x_336_;
goto v___jp_325_;
}
else
{
v___y_326_ = v___x_333_;
goto v___jp_325_;
}
v___jp_325_:
{
if (v___y_326_ == 0)
{
lean_object* v_ks_327_; lean_object* v_vs_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v_ks_327_ = lean_ctor_get(v_newNode_324_, 0);
lean_inc_ref(v_ks_327_);
v_vs_328_ = lean_ctor_get(v_newNode_324_, 1);
lean_inc_ref(v_vs_328_);
lean_dec_ref(v_newNode_324_);
v___x_329_ = lean_unsigned_to_nat(0u);
v___x_330_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__2);
v___x_331_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11___redArg(v_x_268_, v_ks_327_, v_vs_328_, v___x_329_, v___x_330_);
lean_dec_ref(v_vs_328_);
lean_dec_ref(v_ks_327_);
return v___x_331_;
}
else
{
return v_newNode_324_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11___redArg(size_t v_depth_339_, lean_object* v_keys_340_, lean_object* v_vals_341_, lean_object* v_i_342_, lean_object* v_entries_343_){
_start:
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = lean_array_get_size(v_keys_340_);
v___x_345_ = lean_nat_dec_lt(v_i_342_, v___x_344_);
if (v___x_345_ == 0)
{
lean_dec(v_i_342_);
return v_entries_343_;
}
else
{
lean_object* v_k_346_; lean_object* v_v_347_; uint64_t v___x_348_; size_t v_h_349_; size_t v___x_350_; lean_object* v___x_351_; size_t v___x_352_; size_t v___x_353_; size_t v___x_354_; size_t v_h_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v_k_346_ = lean_array_fget_borrowed(v_keys_340_, v_i_342_);
v_v_347_ = lean_array_fget_borrowed(v_vals_341_, v_i_342_);
v___x_348_ = l_Lean_instHashableMVarId_hash(v_k_346_);
v_h_349_ = lean_uint64_to_usize(v___x_348_);
v___x_350_ = ((size_t)5ULL);
v___x_351_ = lean_unsigned_to_nat(1u);
v___x_352_ = ((size_t)1ULL);
v___x_353_ = lean_usize_sub(v_depth_339_, v___x_352_);
v___x_354_ = lean_usize_mul(v___x_350_, v___x_353_);
v_h_355_ = lean_usize_shift_right(v_h_349_, v___x_354_);
v___x_356_ = lean_nat_add(v_i_342_, v___x_351_);
lean_dec(v_i_342_);
lean_inc(v_v_347_);
lean_inc(v_k_346_);
v___x_357_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg(v_entries_343_, v_h_355_, v_depth_339_, v_k_346_, v_v_347_);
v_i_342_ = v___x_356_;
v_entries_343_ = v___x_357_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11___redArg___boxed(lean_object* v_depth_359_, lean_object* v_keys_360_, lean_object* v_vals_361_, lean_object* v_i_362_, lean_object* v_entries_363_){
_start:
{
size_t v_depth_boxed_364_; lean_object* v_res_365_; 
v_depth_boxed_364_ = lean_unbox_usize(v_depth_359_);
lean_dec(v_depth_359_);
v_res_365_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11___redArg(v_depth_boxed_364_, v_keys_360_, v_vals_361_, v_i_362_, v_entries_363_);
lean_dec_ref(v_vals_361_);
lean_dec_ref(v_keys_360_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___boxed(lean_object* v_x_366_, lean_object* v_x_367_, lean_object* v_x_368_, lean_object* v_x_369_, lean_object* v_x_370_){
_start:
{
size_t v_x_34222__boxed_371_; size_t v_x_34223__boxed_372_; lean_object* v_res_373_; 
v_x_34222__boxed_371_ = lean_unbox_usize(v_x_367_);
lean_dec(v_x_367_);
v_x_34223__boxed_372_ = lean_unbox_usize(v_x_368_);
lean_dec(v_x_368_);
v_res_373_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg(v_x_366_, v_x_34222__boxed_371_, v_x_34223__boxed_372_, v_x_369_, v_x_370_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4___redArg(lean_object* v_x_374_, lean_object* v_x_375_, lean_object* v_x_376_){
_start:
{
uint64_t v___x_377_; size_t v___x_378_; size_t v___x_379_; lean_object* v___x_380_; 
v___x_377_ = l_Lean_instHashableMVarId_hash(v_x_375_);
v___x_378_ = lean_uint64_to_usize(v___x_377_);
v___x_379_ = ((size_t)1ULL);
v___x_380_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg(v_x_374_, v___x_378_, v___x_379_, v_x_375_, v_x_376_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3___redArg(lean_object* v_mvarId_381_, lean_object* v_val_382_, lean_object* v___y_383_, lean_object* v___y_384_){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v_mctx_388_; lean_object* v_cache_389_; lean_object* v_zetaDeltaFVarIds_390_; lean_object* v_postponed_391_; lean_object* v_diag_392_; lean_object* v___x_394_; uint8_t v_isShared_395_; uint8_t v_isSharedCheck_420_; 
v___x_386_ = lean_st_ref_get(v___y_384_);
lean_dec(v___x_386_);
v___x_387_ = lean_st_ref_take(v___y_383_);
v_mctx_388_ = lean_ctor_get(v___x_387_, 0);
v_cache_389_ = lean_ctor_get(v___x_387_, 1);
v_zetaDeltaFVarIds_390_ = lean_ctor_get(v___x_387_, 2);
v_postponed_391_ = lean_ctor_get(v___x_387_, 3);
v_diag_392_ = lean_ctor_get(v___x_387_, 4);
v_isSharedCheck_420_ = !lean_is_exclusive(v___x_387_);
if (v_isSharedCheck_420_ == 0)
{
v___x_394_ = v___x_387_;
v_isShared_395_ = v_isSharedCheck_420_;
goto v_resetjp_393_;
}
else
{
lean_inc(v_diag_392_);
lean_inc(v_postponed_391_);
lean_inc(v_zetaDeltaFVarIds_390_);
lean_inc(v_cache_389_);
lean_inc(v_mctx_388_);
lean_dec(v___x_387_);
v___x_394_ = lean_box(0);
v_isShared_395_ = v_isSharedCheck_420_;
goto v_resetjp_393_;
}
v_resetjp_393_:
{
lean_object* v_depth_396_; lean_object* v_levelAssignDepth_397_; lean_object* v_lmvarCounter_398_; lean_object* v_mvarCounter_399_; lean_object* v_lDecls_400_; lean_object* v_decls_401_; lean_object* v_userNames_402_; lean_object* v_lAssignment_403_; lean_object* v_eAssignment_404_; lean_object* v_dAssignment_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_419_; 
v_depth_396_ = lean_ctor_get(v_mctx_388_, 0);
v_levelAssignDepth_397_ = lean_ctor_get(v_mctx_388_, 1);
v_lmvarCounter_398_ = lean_ctor_get(v_mctx_388_, 2);
v_mvarCounter_399_ = lean_ctor_get(v_mctx_388_, 3);
v_lDecls_400_ = lean_ctor_get(v_mctx_388_, 4);
v_decls_401_ = lean_ctor_get(v_mctx_388_, 5);
v_userNames_402_ = lean_ctor_get(v_mctx_388_, 6);
v_lAssignment_403_ = lean_ctor_get(v_mctx_388_, 7);
v_eAssignment_404_ = lean_ctor_get(v_mctx_388_, 8);
v_dAssignment_405_ = lean_ctor_get(v_mctx_388_, 9);
v_isSharedCheck_419_ = !lean_is_exclusive(v_mctx_388_);
if (v_isSharedCheck_419_ == 0)
{
v___x_407_ = v_mctx_388_;
v_isShared_408_ = v_isSharedCheck_419_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_dAssignment_405_);
lean_inc(v_eAssignment_404_);
lean_inc(v_lAssignment_403_);
lean_inc(v_userNames_402_);
lean_inc(v_decls_401_);
lean_inc(v_lDecls_400_);
lean_inc(v_mvarCounter_399_);
lean_inc(v_lmvarCounter_398_);
lean_inc(v_levelAssignDepth_397_);
lean_inc(v_depth_396_);
lean_dec(v_mctx_388_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_419_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_411_; 
v___x_409_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4___redArg(v_eAssignment_404_, v_mvarId_381_, v_val_382_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 8, v___x_409_);
v___x_411_ = v___x_407_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_depth_396_);
lean_ctor_set(v_reuseFailAlloc_418_, 1, v_levelAssignDepth_397_);
lean_ctor_set(v_reuseFailAlloc_418_, 2, v_lmvarCounter_398_);
lean_ctor_set(v_reuseFailAlloc_418_, 3, v_mvarCounter_399_);
lean_ctor_set(v_reuseFailAlloc_418_, 4, v_lDecls_400_);
lean_ctor_set(v_reuseFailAlloc_418_, 5, v_decls_401_);
lean_ctor_set(v_reuseFailAlloc_418_, 6, v_userNames_402_);
lean_ctor_set(v_reuseFailAlloc_418_, 7, v_lAssignment_403_);
lean_ctor_set(v_reuseFailAlloc_418_, 8, v___x_409_);
lean_ctor_set(v_reuseFailAlloc_418_, 9, v_dAssignment_405_);
v___x_411_ = v_reuseFailAlloc_418_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
lean_object* v___x_413_; 
if (v_isShared_395_ == 0)
{
lean_ctor_set(v___x_394_, 0, v___x_411_);
v___x_413_ = v___x_394_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_417_; 
v_reuseFailAlloc_417_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_417_, 0, v___x_411_);
lean_ctor_set(v_reuseFailAlloc_417_, 1, v_cache_389_);
lean_ctor_set(v_reuseFailAlloc_417_, 2, v_zetaDeltaFVarIds_390_);
lean_ctor_set(v_reuseFailAlloc_417_, 3, v_postponed_391_);
lean_ctor_set(v_reuseFailAlloc_417_, 4, v_diag_392_);
v___x_413_ = v_reuseFailAlloc_417_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; 
v___x_414_ = lean_st_ref_set(v___y_383_, v___x_413_);
v___x_415_ = lean_box(0);
v___x_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_416_, 0, v___x_415_);
return v___x_416_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3___redArg___boxed(lean_object* v_mvarId_421_, lean_object* v_val_422_, lean_object* v___y_423_, lean_object* v___y_424_, lean_object* v___y_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3___redArg(v_mvarId_421_, v_val_422_, v___y_423_, v___y_424_);
lean_dec(v___y_424_);
lean_dec(v___y_423_);
return v_res_426_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7___redArg(lean_object* v_keys_427_, lean_object* v_i_428_, lean_object* v_k_429_){
_start:
{
lean_object* v___x_430_; uint8_t v___x_431_; 
v___x_430_ = lean_array_get_size(v_keys_427_);
v___x_431_ = lean_nat_dec_lt(v_i_428_, v___x_430_);
if (v___x_431_ == 0)
{
lean_dec(v_i_428_);
return v___x_431_;
}
else
{
lean_object* v_k_x27_432_; uint8_t v___x_433_; 
v_k_x27_432_ = lean_array_fget_borrowed(v_keys_427_, v_i_428_);
v___x_433_ = l_Lean_instBEqMVarId_beq(v_k_429_, v_k_x27_432_);
if (v___x_433_ == 0)
{
lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_434_ = lean_unsigned_to_nat(1u);
v___x_435_ = lean_nat_add(v_i_428_, v___x_434_);
lean_dec(v_i_428_);
v_i_428_ = v___x_435_;
goto _start;
}
else
{
lean_dec(v_i_428_);
return v___x_433_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7___redArg___boxed(lean_object* v_keys_437_, lean_object* v_i_438_, lean_object* v_k_439_){
_start:
{
uint8_t v_res_440_; lean_object* v_r_441_; 
v_res_440_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7___redArg(v_keys_437_, v_i_438_, v_k_439_);
lean_dec(v_k_439_);
lean_dec_ref(v_keys_437_);
v_r_441_ = lean_box(v_res_440_);
return v_r_441_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4___redArg(lean_object* v_x_442_, size_t v_x_443_, lean_object* v_x_444_){
_start:
{
if (lean_obj_tag(v_x_442_) == 0)
{
lean_object* v_es_445_; lean_object* v___x_446_; size_t v___x_447_; size_t v___x_448_; size_t v___x_449_; lean_object* v_j_450_; lean_object* v___x_451_; 
v_es_445_ = lean_ctor_get(v_x_442_, 0);
v___x_446_ = lean_box(2);
v___x_447_ = ((size_t)5ULL);
v___x_448_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg___closed__1);
v___x_449_ = lean_usize_land(v_x_443_, v___x_448_);
v_j_450_ = lean_usize_to_nat(v___x_449_);
v___x_451_ = lean_array_get_borrowed(v___x_446_, v_es_445_, v_j_450_);
lean_dec(v_j_450_);
switch(lean_obj_tag(v___x_451_))
{
case 0:
{
lean_object* v_key_452_; uint8_t v___x_453_; 
v_key_452_ = lean_ctor_get(v___x_451_, 0);
v___x_453_ = l_Lean_instBEqMVarId_beq(v_x_444_, v_key_452_);
return v___x_453_;
}
case 1:
{
lean_object* v_node_454_; size_t v___x_455_; 
v_node_454_ = lean_ctor_get(v___x_451_, 0);
v___x_455_ = lean_usize_shift_right(v_x_443_, v___x_447_);
v_x_442_ = v_node_454_;
v_x_443_ = v___x_455_;
goto _start;
}
default: 
{
uint8_t v___x_457_; 
v___x_457_ = 0;
return v___x_457_;
}
}
}
else
{
lean_object* v_ks_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v_ks_458_ = lean_ctor_get(v_x_442_, 0);
v___x_459_ = lean_unsigned_to_nat(0u);
v___x_460_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7___redArg(v_ks_458_, v___x_459_, v_x_444_);
return v___x_460_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v_x_461_, lean_object* v_x_462_, lean_object* v_x_463_){
_start:
{
size_t v_x_34465__boxed_464_; uint8_t v_res_465_; lean_object* v_r_466_; 
v_x_34465__boxed_464_ = lean_unbox_usize(v_x_462_);
lean_dec(v_x_462_);
v_res_465_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4___redArg(v_x_461_, v_x_34465__boxed_464_, v_x_463_);
lean_dec(v_x_463_);
lean_dec_ref(v_x_461_);
v_r_466_ = lean_box(v_res_465_);
return v_r_466_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2___redArg(lean_object* v_x_467_, lean_object* v_x_468_){
_start:
{
uint64_t v___x_469_; size_t v___x_470_; uint8_t v___x_471_; 
v___x_469_ = l_Lean_instHashableMVarId_hash(v_x_468_);
v___x_470_ = lean_uint64_to_usize(v___x_469_);
v___x_471_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4___redArg(v_x_467_, v___x_470_, v_x_468_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2___redArg___boxed(lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
uint8_t v_res_474_; lean_object* v_r_475_; 
v_res_474_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2___redArg(v_x_472_, v_x_473_);
lean_dec(v_x_473_);
lean_dec_ref(v_x_472_);
v_r_475_ = lean_box(v_res_474_);
return v_r_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2___redArg(lean_object* v_mvarId_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v_mctx_482_; lean_object* v_eAssignment_483_; uint8_t v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; 
v___x_480_ = lean_st_ref_get(v___y_478_);
lean_dec(v___x_480_);
v___x_481_ = lean_st_ref_get(v___y_477_);
v_mctx_482_ = lean_ctor_get(v___x_481_, 0);
lean_inc_ref(v_mctx_482_);
lean_dec(v___x_481_);
v_eAssignment_483_ = lean_ctor_get(v_mctx_482_, 8);
lean_inc_ref(v_eAssignment_483_);
lean_dec_ref(v_mctx_482_);
v___x_484_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2___redArg(v_eAssignment_483_, v_mvarId_476_);
lean_dec_ref(v_eAssignment_483_);
v___x_485_ = lean_box(v___x_484_);
v___x_486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_486_, 0, v___x_485_);
return v___x_486_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2___redArg___boxed(lean_object* v_mvarId_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2___redArg(v_mvarId_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec(v___y_488_);
lean_dec(v_mvarId_487_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4___redArg(lean_object* v_upperBound_492_, lean_object* v_d_493_, lean_object* v_a_494_, lean_object* v_b_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_){
_start:
{
lean_object* v_a_507_; uint8_t v___x_511_; 
v___x_511_ = lean_nat_dec_lt(v_a_494_, v_upperBound_492_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; 
lean_dec(v_a_494_);
lean_dec_ref(v_d_493_);
v___x_512_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_512_, 0, v_b_495_);
return v___x_512_;
}
else
{
lean_object* v_snd_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_647_; 
v_snd_513_ = lean_ctor_get(v_b_495_, 1);
v_isSharedCheck_647_ = !lean_is_exclusive(v_b_495_);
if (v_isSharedCheck_647_ == 0)
{
lean_object* v_unused_648_; 
v_unused_648_ = lean_ctor_get(v_b_495_, 0);
lean_dec(v_unused_648_);
v___x_515_ = v_b_495_;
v_isShared_516_ = v_isSharedCheck_647_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_snd_513_);
lean_dec(v_b_495_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_647_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v_fst_517_; lean_object* v_snd_518_; lean_object* v___x_520_; uint8_t v_isShared_521_; uint8_t v_isSharedCheck_646_; 
v_fst_517_ = lean_ctor_get(v_snd_513_, 0);
v_snd_518_ = lean_ctor_get(v_snd_513_, 1);
v_isSharedCheck_646_ = !lean_is_exclusive(v_snd_513_);
if (v_isSharedCheck_646_ == 0)
{
v___x_520_ = v_snd_513_;
v_isShared_521_ = v_isSharedCheck_646_;
goto v_resetjp_519_;
}
else
{
lean_inc(v_snd_518_);
lean_inc(v_fst_517_);
lean_dec(v_snd_513_);
v___x_520_ = lean_box(0);
v_isShared_521_ = v_isSharedCheck_646_;
goto v_resetjp_519_;
}
v_resetjp_519_:
{
lean_object* v___x_522_; lean_object* v___x_523_; 
v___x_522_ = lean_box(0);
v___x_523_ = lean_array_fget_borrowed(v_fst_517_, v_a_494_);
if (lean_obj_tag(v___x_523_) == 2)
{
lean_object* v_mvarId_524_; lean_object* v___x_525_; 
v_mvarId_524_ = lean_ctor_get(v___x_523_, 0);
v___x_525_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2___redArg(v_mvarId_524_, v___y_502_, v___y_504_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; uint8_t v___x_527_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_526_);
lean_dec_ref(v___x_525_);
v___x_527_ = lean_unbox(v_a_526_);
lean_dec(v_a_526_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; 
lean_inc(v_mvarId_524_);
v___x_528_ = l_Lean_MVarId_getDecl(v_mvarId_524_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v_type_530_; lean_object* v___x_531_; 
v_a_529_ = lean_ctor_get(v___x_528_, 0);
lean_inc(v_a_529_);
lean_dec_ref(v___x_528_);
v_type_530_ = lean_ctor_get(v_a_529_, 2);
lean_inc_ref(v_type_530_);
lean_dec(v_a_529_);
lean_inc_ref(v_d_493_);
lean_inc(v___y_504_);
lean_inc_ref(v___y_503_);
lean_inc(v___y_502_);
lean_inc_ref(v___y_501_);
lean_inc(v___y_500_);
lean_inc_ref(v___y_499_);
lean_inc(v___y_498_);
lean_inc_ref(v___y_497_);
lean_inc(v___y_496_);
v___x_531_ = lean_apply_11(v_d_493_, v_type_530_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_, lean_box(0));
if (lean_obj_tag(v___x_531_) == 0)
{
lean_object* v_a_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_580_; 
v_a_532_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_580_ == 0)
{
v___x_534_ = v___x_531_;
v_isShared_535_ = v_isSharedCheck_580_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_a_532_);
lean_dec(v___x_531_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_580_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
uint8_t v___y_537_; 
if (lean_obj_tag(v_a_532_) == 0)
{
uint8_t v___x_550_; 
lean_dec(v_a_494_);
lean_dec_ref(v_d_493_);
v___x_550_ = lean_unbox(v_snd_518_);
lean_dec(v_snd_518_);
if (v___x_550_ == 0)
{
uint8_t v_contextDependent_551_; 
v_contextDependent_551_ = lean_ctor_get_uint8(v_a_532_, 0);
lean_dec_ref(v_a_532_);
v___y_537_ = v_contextDependent_551_;
goto v___jp_536_;
}
else
{
lean_dec_ref(v_a_532_);
v___y_537_ = v___x_511_;
goto v___jp_536_;
}
}
else
{
lean_object* v_proof_552_; uint8_t v_contextDependent_553_; uint8_t v___y_555_; uint8_t v___x_579_; 
lean_del_object(v___x_534_);
lean_del_object(v___x_520_);
lean_del_object(v___x_515_);
v_proof_552_ = lean_ctor_get(v_a_532_, 0);
lean_inc_ref(v_proof_552_);
v_contextDependent_553_ = lean_ctor_get_uint8(v_a_532_, sizeof(void*)*1);
lean_dec_ref(v_a_532_);
v___x_579_ = lean_unbox(v_snd_518_);
lean_dec(v_snd_518_);
if (v___x_579_ == 0)
{
v___y_555_ = v_contextDependent_553_;
goto v___jp_554_;
}
else
{
v___y_555_ = v___x_511_;
goto v___jp_554_;
}
v___jp_554_:
{
lean_object* v___x_556_; 
v___x_556_ = l_Lean_Meta_Sym_instantiateMVarsS(v_proof_552_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_556_) == 0)
{
lean_object* v_a_557_; lean_object* v___x_558_; 
v_a_557_ = lean_ctor_get(v___x_556_, 0);
lean_inc_n(v_a_557_, 2);
lean_dec_ref(v___x_556_);
lean_inc(v_mvarId_524_);
v___x_558_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3___redArg(v_mvarId_524_, v_a_557_, v___y_502_, v___y_504_);
if (lean_obj_tag(v___x_558_) == 0)
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; 
lean_dec_ref(v___x_558_);
v___x_559_ = lean_array_fset(v_fst_517_, v_a_494_, v_a_557_);
v___x_560_ = lean_box(v___y_555_);
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_559_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
v___x_562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_522_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
v_a_507_ = v___x_562_;
goto v___jp_506_;
}
else
{
lean_object* v_a_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_570_; 
lean_dec(v_a_557_);
lean_dec(v_fst_517_);
lean_dec(v_a_494_);
lean_dec_ref(v_d_493_);
v_a_563_ = lean_ctor_get(v___x_558_, 0);
v_isSharedCheck_570_ = !lean_is_exclusive(v___x_558_);
if (v_isSharedCheck_570_ == 0)
{
v___x_565_ = v___x_558_;
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_a_563_);
lean_dec(v___x_558_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_570_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v___x_568_; 
if (v_isShared_566_ == 0)
{
v___x_568_ = v___x_565_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_569_; 
v_reuseFailAlloc_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_569_, 0, v_a_563_);
v___x_568_ = v_reuseFailAlloc_569_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
return v___x_568_;
}
}
}
}
else
{
lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
lean_dec(v_fst_517_);
lean_dec(v_a_494_);
lean_dec_ref(v_d_493_);
v_a_571_ = lean_ctor_get(v___x_556_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_556_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_556_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_556_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_a_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
}
}
v___jp_536_:
{
lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_542_; 
v___x_538_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___y_537_);
v___x_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_539_, 0, v___x_538_);
v___x_540_ = lean_box(v___y_537_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 1, v___x_540_);
v___x_542_ = v___x_520_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_fst_517_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v___x_540_);
v___x_542_ = v_reuseFailAlloc_549_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
lean_object* v___x_544_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_542_);
lean_ctor_set(v___x_515_, 0, v___x_539_);
v___x_544_ = v___x_515_;
goto v_reusejp_543_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v___x_539_);
lean_ctor_set(v_reuseFailAlloc_548_, 1, v___x_542_);
v___x_544_ = v_reuseFailAlloc_548_;
goto v_reusejp_543_;
}
v_reusejp_543_:
{
lean_object* v___x_546_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set(v___x_534_, 0, v___x_544_);
v___x_546_ = v___x_534_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
}
}
else
{
lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_588_; 
lean_del_object(v___x_520_);
lean_dec(v_snd_518_);
lean_dec(v_fst_517_);
lean_del_object(v___x_515_);
lean_dec(v_a_494_);
lean_dec_ref(v_d_493_);
v_a_581_ = lean_ctor_get(v___x_531_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_531_);
if (v_isSharedCheck_588_ == 0)
{
v___x_583_ = v___x_531_;
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v___x_531_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_586_; 
if (v_isShared_584_ == 0)
{
v___x_586_ = v___x_583_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_581_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
}
}
}
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
lean_del_object(v___x_520_);
lean_dec(v_snd_518_);
lean_dec(v_fst_517_);
lean_del_object(v___x_515_);
lean_dec(v_a_494_);
lean_dec_ref(v_d_493_);
v_a_589_ = lean_ctor_get(v___x_528_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_528_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_528_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_528_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
else
{
lean_object* v___x_597_; 
lean_inc_ref(v___x_523_);
v___x_597_ = l_Lean_Meta_Sym_instantiateMVarsS(v___x_523_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_597_) == 0)
{
lean_object* v_a_598_; lean_object* v___x_599_; lean_object* v___x_601_; 
v_a_598_ = lean_ctor_get(v___x_597_, 0);
lean_inc(v_a_598_);
lean_dec_ref(v___x_597_);
v___x_599_ = lean_array_fset(v_fst_517_, v_a_494_, v_a_598_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 0, v___x_599_);
v___x_601_ = v___x_520_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_599_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_snd_518_);
v___x_601_ = v_reuseFailAlloc_605_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
lean_object* v___x_603_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_601_);
lean_ctor_set(v___x_515_, 0, v___x_522_);
v___x_603_ = v___x_515_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_604_; 
v_reuseFailAlloc_604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_604_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_604_, 1, v___x_601_);
v___x_603_ = v_reuseFailAlloc_604_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
v_a_507_ = v___x_603_;
goto v___jp_506_;
}
}
}
else
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
lean_del_object(v___x_520_);
lean_dec(v_snd_518_);
lean_dec(v_fst_517_);
lean_del_object(v___x_515_);
lean_dec(v_a_494_);
lean_dec_ref(v_d_493_);
v_a_606_ = lean_ctor_get(v___x_597_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_597_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_597_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_606_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
}
}
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
lean_del_object(v___x_520_);
lean_dec(v_snd_518_);
lean_dec(v_fst_517_);
lean_del_object(v___x_515_);
lean_dec(v_a_494_);
lean_dec_ref(v_d_493_);
v_a_614_ = lean_ctor_get(v___x_525_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_525_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_525_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_525_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
else
{
uint8_t v___x_622_; 
v___x_622_ = l_Lean_Expr_hasMVar(v___x_523_);
if (v___x_622_ == 0)
{
lean_object* v___x_624_; 
if (v_isShared_521_ == 0)
{
v___x_624_ = v___x_520_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_628_; 
v_reuseFailAlloc_628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_628_, 0, v_fst_517_);
lean_ctor_set(v_reuseFailAlloc_628_, 1, v_snd_518_);
v___x_624_ = v_reuseFailAlloc_628_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
lean_object* v___x_626_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_624_);
lean_ctor_set(v___x_515_, 0, v___x_522_);
v___x_626_ = v___x_515_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_627_, 1, v___x_624_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
v_a_507_ = v___x_626_;
goto v___jp_506_;
}
}
}
else
{
lean_object* v___x_629_; 
lean_inc(v___x_523_);
v___x_629_ = l_Lean_Meta_Sym_instantiateMVarsS(v___x_523_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_object* v_a_630_; lean_object* v___x_631_; lean_object* v___x_633_; 
v_a_630_ = lean_ctor_get(v___x_629_, 0);
lean_inc(v_a_630_);
lean_dec_ref(v___x_629_);
v___x_631_ = lean_array_fset(v_fst_517_, v_a_494_, v_a_630_);
if (v_isShared_521_ == 0)
{
lean_ctor_set(v___x_520_, 0, v___x_631_);
v___x_633_ = v___x_520_;
goto v_reusejp_632_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v___x_631_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_snd_518_);
v___x_633_ = v_reuseFailAlloc_637_;
goto v_reusejp_632_;
}
v_reusejp_632_:
{
lean_object* v___x_635_; 
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_633_);
lean_ctor_set(v___x_515_, 0, v___x_522_);
v___x_635_ = v___x_515_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_636_, 1, v___x_633_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
v_a_507_ = v___x_635_;
goto v___jp_506_;
}
}
}
else
{
lean_object* v_a_638_; lean_object* v___x_640_; uint8_t v_isShared_641_; uint8_t v_isSharedCheck_645_; 
lean_del_object(v___x_520_);
lean_dec(v_snd_518_);
lean_dec(v_fst_517_);
lean_del_object(v___x_515_);
lean_dec(v_a_494_);
lean_dec_ref(v_d_493_);
v_a_638_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_645_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_645_ == 0)
{
v___x_640_ = v___x_629_;
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
else
{
lean_inc(v_a_638_);
lean_dec(v___x_629_);
v___x_640_ = lean_box(0);
v_isShared_641_ = v_isSharedCheck_645_;
goto v_resetjp_639_;
}
v_resetjp_639_:
{
lean_object* v___x_643_; 
if (v_isShared_641_ == 0)
{
v___x_643_ = v___x_640_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v_a_638_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
}
}
}
}
}
v___jp_506_:
{
lean_object* v___x_508_; lean_object* v___x_509_; 
v___x_508_ = lean_unsigned_to_nat(1u);
v___x_509_ = lean_nat_add(v_a_494_, v___x_508_);
lean_dec(v_a_494_);
v_a_494_ = v___x_509_;
v_b_495_ = v_a_507_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4___redArg___boxed(lean_object* v_upperBound_649_, lean_object* v_d_650_, lean_object* v_a_651_, lean_object* v_b_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_, lean_object* v___y_662_){
_start:
{
lean_object* v_res_663_; 
v_res_663_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4___redArg(v_upperBound_649_, v_d_650_, v_a_651_, v_b_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
lean_dec(v___y_661_);
lean_dec_ref(v___y_660_);
lean_dec(v___y_659_);
lean_dec_ref(v___y_658_);
lean_dec(v___y_657_);
lean_dec_ref(v___y_656_);
lean_dec(v___y_655_);
lean_dec_ref(v___y_654_);
lean_dec(v___y_653_);
lean_dec(v_upperBound_649_);
return v_res_663_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0___closed__0(void){
_start:
{
uint8_t v___x_664_; lean_object* v___x_665_; 
v___x_664_ = 0;
v___x_665_ = lean_alloc_ctor(0, 0, 2);
lean_ctor_set_uint8(v___x_665_, 0, v___x_664_);
lean_ctor_set_uint8(v___x_665_, 1, v___x_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0(lean_object* v_pattern_666_, lean_object* v_e_667_, uint8_t v___x_668_, lean_object* v_d_669_, lean_object* v_expr_670_, lean_object* v_rhs_671_, uint8_t v_perm_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
lean_object* v___x_683_; 
lean_inc_ref(v_e_667_);
lean_inc_ref(v_pattern_666_);
v___x_683_ = l_Lean_Meta_Sym_Pattern_match_x3f(v_pattern_666_, v_e_667_, v___x_668_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_683_) == 0)
{
lean_object* v_a_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_800_; 
v_a_684_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_800_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_800_ == 0)
{
v___x_686_ = v___x_683_;
v_isShared_687_ = v_isSharedCheck_800_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_a_684_);
lean_dec(v___x_683_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_800_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
if (lean_obj_tag(v_a_684_) == 1)
{
lean_object* v_val_688_; lean_object* v_us_689_; lean_object* v_args_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_795_; 
lean_del_object(v___x_686_);
v_val_688_ = lean_ctor_get(v_a_684_, 0);
lean_inc(v_val_688_);
lean_dec_ref(v_a_684_);
v_us_689_ = lean_ctor_get(v_val_688_, 0);
v_args_690_ = lean_ctor_get(v_val_688_, 1);
v_isSharedCheck_795_ = !lean_is_exclusive(v_val_688_);
if (v_isSharedCheck_795_ == 0)
{
v___x_692_ = v_val_688_;
v_isShared_693_ = v_isSharedCheck_795_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_args_690_);
lean_inc(v_us_689_);
lean_dec(v_val_688_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_795_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_694_ = lean_box(0);
v___x_695_ = l_List_mapM_loop___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__1(v_us_689_, v___x_694_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_695_) == 0)
{
lean_object* v_a_696_; lean_object* v___x_697_; lean_object* v___x_698_; uint8_t v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_703_; 
v_a_696_ = lean_ctor_get(v___x_695_, 0);
lean_inc(v_a_696_);
lean_dec_ref(v___x_695_);
v___x_697_ = lean_array_get_size(v_args_690_);
v___x_698_ = lean_unsigned_to_nat(0u);
v___x_699_ = 0;
v___x_700_ = lean_box(0);
v___x_701_ = lean_box(v___x_699_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 1, v___x_701_);
lean_ctor_set(v___x_692_, 0, v_args_690_);
v___x_703_ = v___x_692_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_786_; 
v_reuseFailAlloc_786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_786_, 0, v_args_690_);
lean_ctor_set(v_reuseFailAlloc_786_, 1, v___x_701_);
v___x_703_ = v_reuseFailAlloc_786_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_704_, 0, v___x_700_);
lean_ctor_set(v___x_704_, 1, v___x_703_);
v___x_705_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4___redArg(v___x_697_, v_d_669_, v___x_698_, v___x_704_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_705_) == 0)
{
lean_object* v_a_706_; lean_object* v___x_708_; uint8_t v_isShared_709_; uint8_t v_isSharedCheck_777_; 
v_a_706_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_777_ == 0)
{
v___x_708_ = v___x_705_;
v_isShared_709_ = v_isSharedCheck_777_;
goto v_resetjp_707_;
}
else
{
lean_inc(v_a_706_);
lean_dec(v___x_705_);
v___x_708_ = lean_box(0);
v_isShared_709_ = v_isSharedCheck_777_;
goto v_resetjp_707_;
}
v_resetjp_707_:
{
lean_object* v_fst_710_; 
v_fst_710_ = lean_ctor_get(v_a_706_, 0);
if (lean_obj_tag(v_fst_710_) == 0)
{
lean_object* v_snd_711_; lean_object* v_fst_712_; lean_object* v_snd_713_; lean_object* v_levelParams_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; 
lean_del_object(v___x_708_);
v_snd_711_ = lean_ctor_get(v_a_706_, 1);
lean_inc(v_snd_711_);
lean_dec(v_a_706_);
v_fst_712_ = lean_ctor_get(v_snd_711_, 0);
lean_inc(v_fst_712_);
v_snd_713_ = lean_ctor_get(v_snd_711_, 1);
lean_inc(v_snd_713_);
lean_dec(v_snd_711_);
v_levelParams_714_ = lean_ctor_get(v_pattern_666_, 0);
lean_inc(v_levelParams_714_);
lean_inc(v_a_696_);
v___x_715_ = l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_mkValue(v_expr_670_, v_pattern_666_, v_a_696_, v_fst_712_);
v___x_716_ = l_Lean_Expr_instantiateLevelParams(v_rhs_671_, v_levelParams_714_, v_a_696_);
v___x_717_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_716_, v___y_677_, v___y_681_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_object* v_a_718_; lean_object* v___x_719_; 
v_a_718_ = lean_ctor_get(v___x_717_, 0);
lean_inc(v_a_718_);
lean_dec_ref(v___x_717_);
v___x_719_ = l_Lean_Meta_Sym_instantiateRevBetaS___redArg(v_a_718_, v_fst_712_, v___y_677_, v___y_681_);
lean_dec(v_fst_712_);
if (lean_obj_tag(v___x_719_) == 0)
{
lean_object* v_a_720_; lean_object* v___x_722_; uint8_t v_isShared_723_; uint8_t v_isSharedCheck_756_; 
v_a_720_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_756_ == 0)
{
v___x_722_ = v___x_719_;
v_isShared_723_ = v_isSharedCheck_756_;
goto v_resetjp_721_;
}
else
{
lean_inc(v_a_720_);
lean_dec(v___x_719_);
v___x_722_ = lean_box(0);
v_isShared_723_ = v_isSharedCheck_756_;
goto v_resetjp_721_;
}
v_resetjp_721_:
{
uint8_t v___x_724_; 
v___x_724_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_e_667_, v_a_720_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; 
lean_inc(v_a_720_);
v___x_725_ = l___private_Lean_Meta_Sym_Simp_Rewrite_0__Lean_Meta_Sym_Simp_Theorem_rewrite_checkPerm(v_perm_672_, v_e_667_, v_a_720_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_725_) == 0)
{
lean_object* v_a_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_742_; 
v_a_726_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_742_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_742_ == 0)
{
v___x_728_ = v___x_725_;
v_isShared_729_ = v_isSharedCheck_742_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_a_726_);
lean_dec(v___x_725_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_742_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
uint8_t v___x_736_; 
v___x_736_ = lean_unbox(v_a_726_);
lean_dec(v_a_726_);
if (v___x_736_ == 0)
{
lean_del_object(v___x_722_);
lean_dec(v_a_720_);
lean_dec_ref(v___x_715_);
goto v___jp_730_;
}
else
{
if (v___x_724_ == 0)
{
lean_object* v___x_737_; uint8_t v___x_738_; lean_object* v___x_740_; 
lean_del_object(v___x_728_);
v___x_737_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_737_, 0, v_a_720_);
lean_ctor_set(v___x_737_, 1, v___x_715_);
lean_ctor_set_uint8(v___x_737_, sizeof(void*)*2, v___x_699_);
v___x_738_ = lean_unbox(v_snd_713_);
lean_dec(v_snd_713_);
lean_ctor_set_uint8(v___x_737_, sizeof(void*)*2 + 1, v___x_738_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 0, v___x_737_);
v___x_740_ = v___x_722_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v___x_737_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
else
{
lean_del_object(v___x_722_);
lean_dec(v_a_720_);
lean_dec_ref(v___x_715_);
goto v___jp_730_;
}
}
v___jp_730_:
{
uint8_t v___x_731_; lean_object* v___x_732_; lean_object* v___x_734_; 
v___x_731_ = lean_unbox(v_snd_713_);
lean_dec(v_snd_713_);
v___x_732_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___x_731_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 0, v___x_732_);
v___x_734_ = v___x_728_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v___x_732_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
else
{
lean_object* v_a_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_750_; 
lean_del_object(v___x_722_);
lean_dec(v_a_720_);
lean_dec_ref(v___x_715_);
lean_dec(v_snd_713_);
v_a_743_ = lean_ctor_get(v___x_725_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v___x_725_);
if (v_isSharedCheck_750_ == 0)
{
v___x_745_ = v___x_725_;
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_a_743_);
lean_dec(v___x_725_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_750_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_748_; 
if (v_isShared_746_ == 0)
{
v___x_748_ = v___x_745_;
goto v_reusejp_747_;
}
else
{
lean_object* v_reuseFailAlloc_749_; 
v_reuseFailAlloc_749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_749_, 0, v_a_743_);
v___x_748_ = v_reuseFailAlloc_749_;
goto v_reusejp_747_;
}
v_reusejp_747_:
{
return v___x_748_;
}
}
}
}
else
{
uint8_t v___x_751_; lean_object* v___x_752_; lean_object* v___x_754_; 
lean_dec(v_a_720_);
lean_dec_ref(v___x_715_);
lean_dec_ref(v_e_667_);
v___x_751_ = lean_unbox(v_snd_713_);
lean_dec(v_snd_713_);
v___x_752_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___x_751_);
if (v_isShared_723_ == 0)
{
lean_ctor_set(v___x_722_, 0, v___x_752_);
v___x_754_ = v___x_722_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v___x_752_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
else
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
lean_dec_ref(v___x_715_);
lean_dec(v_snd_713_);
lean_dec_ref(v_e_667_);
v_a_757_ = lean_ctor_get(v___x_719_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_719_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_719_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_719_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
else
{
lean_object* v_a_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_772_; 
lean_dec_ref(v___x_715_);
lean_dec(v_snd_713_);
lean_dec(v_fst_712_);
lean_dec_ref(v_e_667_);
v_a_765_ = lean_ctor_get(v___x_717_, 0);
v_isSharedCheck_772_ = !lean_is_exclusive(v___x_717_);
if (v_isSharedCheck_772_ == 0)
{
v___x_767_ = v___x_717_;
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_a_765_);
lean_dec(v___x_717_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_772_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v___x_770_; 
if (v_isShared_768_ == 0)
{
v___x_770_ = v___x_767_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v_a_765_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
else
{
lean_object* v_val_773_; lean_object* v___x_775_; 
lean_inc_ref(v_fst_710_);
lean_dec(v_a_706_);
lean_dec(v_a_696_);
lean_dec_ref(v_expr_670_);
lean_dec_ref(v_e_667_);
lean_dec_ref(v_pattern_666_);
v_val_773_ = lean_ctor_get(v_fst_710_, 0);
lean_inc(v_val_773_);
lean_dec_ref(v_fst_710_);
if (v_isShared_709_ == 0)
{
lean_ctor_set(v___x_708_, 0, v_val_773_);
v___x_775_ = v___x_708_;
goto v_reusejp_774_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_val_773_);
v___x_775_ = v_reuseFailAlloc_776_;
goto v_reusejp_774_;
}
v_reusejp_774_:
{
return v___x_775_;
}
}
}
}
else
{
lean_object* v_a_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_785_; 
lean_dec(v_a_696_);
lean_dec_ref(v_expr_670_);
lean_dec_ref(v_e_667_);
lean_dec_ref(v_pattern_666_);
v_a_778_ = lean_ctor_get(v___x_705_, 0);
v_isSharedCheck_785_ = !lean_is_exclusive(v___x_705_);
if (v_isSharedCheck_785_ == 0)
{
v___x_780_ = v___x_705_;
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_a_778_);
lean_dec(v___x_705_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_785_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_783_; 
if (v_isShared_781_ == 0)
{
v___x_783_ = v___x_780_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v_a_778_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
}
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_794_; 
lean_del_object(v___x_692_);
lean_dec_ref(v_args_690_);
lean_dec_ref(v_expr_670_);
lean_dec_ref(v_d_669_);
lean_dec_ref(v_e_667_);
lean_dec_ref(v_pattern_666_);
v_a_787_ = lean_ctor_get(v___x_695_, 0);
v_isSharedCheck_794_ = !lean_is_exclusive(v___x_695_);
if (v_isSharedCheck_794_ == 0)
{
v___x_789_ = v___x_695_;
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_a_787_);
lean_dec(v___x_695_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_794_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_792_; 
if (v_isShared_790_ == 0)
{
v___x_792_ = v___x_789_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_a_787_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
}
else
{
lean_object* v___x_796_; lean_object* v___x_798_; 
lean_dec(v_a_684_);
lean_dec_ref(v_expr_670_);
lean_dec_ref(v_d_669_);
lean_dec_ref(v_e_667_);
lean_dec_ref(v_pattern_666_);
v___x_796_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0___closed__0, &l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0___closed__0_once, _init_l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0___closed__0);
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 0, v___x_796_);
v___x_798_ = v___x_686_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_796_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
else
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
lean_dec_ref(v_expr_670_);
lean_dec_ref(v_d_669_);
lean_dec_ref(v_e_667_);
lean_dec_ref(v_pattern_666_);
v_a_801_ = lean_ctor_get(v___x_683_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_683_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_683_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0___boxed(lean_object** _args){
lean_object* v_pattern_809_ = _args[0];
lean_object* v_e_810_ = _args[1];
lean_object* v___x_811_ = _args[2];
lean_object* v_d_812_ = _args[3];
lean_object* v_expr_813_ = _args[4];
lean_object* v_rhs_814_ = _args[5];
lean_object* v_perm_815_ = _args[6];
lean_object* v___y_816_ = _args[7];
lean_object* v___y_817_ = _args[8];
lean_object* v___y_818_ = _args[9];
lean_object* v___y_819_ = _args[10];
lean_object* v___y_820_ = _args[11];
lean_object* v___y_821_ = _args[12];
lean_object* v___y_822_ = _args[13];
lean_object* v___y_823_ = _args[14];
lean_object* v___y_824_ = _args[15];
lean_object* v___y_825_ = _args[16];
_start:
{
uint8_t v___x_34856__boxed_826_; uint8_t v_perm_boxed_827_; lean_object* v_res_828_; 
v___x_34856__boxed_826_ = lean_unbox(v___x_811_);
v_perm_boxed_827_ = lean_unbox(v_perm_815_);
v_res_828_ = l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0(v_pattern_809_, v_e_810_, v___x_34856__boxed_826_, v_d_812_, v_expr_813_, v_rhs_814_, v_perm_boxed_827_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v_rhs_814_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorem_rewrite(lean_object* v_thm_829_, lean_object* v_e_830_, lean_object* v_d_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_){
_start:
{
lean_object* v_expr_842_; lean_object* v_pattern_843_; lean_object* v_rhs_844_; uint8_t v_perm_845_; uint8_t v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___f_849_; uint8_t v___x_850_; lean_object* v___x_851_; 
v_expr_842_ = lean_ctor_get(v_thm_829_, 0);
lean_inc_ref(v_expr_842_);
v_pattern_843_ = lean_ctor_get(v_thm_829_, 1);
lean_inc_ref(v_pattern_843_);
v_rhs_844_ = lean_ctor_get(v_thm_829_, 2);
lean_inc_ref(v_rhs_844_);
v_perm_845_ = lean_ctor_get_uint8(v_thm_829_, sizeof(void*)*3);
lean_dec_ref(v_thm_829_);
v___x_846_ = 1;
v___x_847_ = lean_box(v___x_846_);
v___x_848_ = lean_box(v_perm_845_);
v___f_849_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_Theorem_rewrite___lam__0___boxed), 17, 7);
lean_closure_set(v___f_849_, 0, v_pattern_843_);
lean_closure_set(v___f_849_, 1, v_e_830_);
lean_closure_set(v___f_849_, 2, v___x_847_);
lean_closure_set(v___f_849_, 3, v_d_831_);
lean_closure_set(v___f_849_, 4, v_expr_842_);
lean_closure_set(v___f_849_, 5, v_rhs_844_);
lean_closure_set(v___f_849_, 6, v___x_848_);
v___x_850_ = 0;
v___x_851_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__5___redArg(v___f_849_, v___x_850_, v_a_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorem_rewrite___boxed(lean_object* v_thm_852_, lean_object* v_e_853_, lean_object* v_d_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_Lean_Meta_Sym_Simp_Theorem_rewrite(v_thm_852_, v_e_853_, v_d_854_, v_a_855_, v_a_856_, v_a_857_, v_a_858_, v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_);
lean_dec(v_a_863_);
lean_dec_ref(v_a_862_);
lean_dec(v_a_861_);
lean_dec_ref(v_a_860_);
lean_dec(v_a_859_);
lean_dec_ref(v_a_858_);
lean_dec(v_a_857_);
lean_dec_ref(v_a_856_);
lean_dec(v_a_855_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2(lean_object* v_mvarId_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2___redArg(v_mvarId_866_, v___y_873_, v___y_875_);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2___boxed(lean_object* v_mvarId_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2(v_mvarId_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec(v_mvarId_878_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3(lean_object* v_mvarId_890_, lean_object* v_val_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3___redArg(v_mvarId_890_, v_val_891_, v___y_898_, v___y_900_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3___boxed(lean_object* v_mvarId_903_, lean_object* v_val_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_){
_start:
{
lean_object* v_res_915_; 
v_res_915_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3(v_mvarId_903_, v_val_904_, v___y_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
lean_dec(v___y_907_);
lean_dec_ref(v___y_906_);
lean_dec(v___y_905_);
return v_res_915_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4(lean_object* v_upperBound_916_, lean_object* v_d_917_, lean_object* v___x_918_, lean_object* v_inst_919_, lean_object* v_R_920_, lean_object* v_a_921_, lean_object* v_b_922_, lean_object* v_c_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4___redArg(v_upperBound_916_, v_d_917_, v_a_921_, v_b_922_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4___boxed(lean_object** _args){
lean_object* v_upperBound_935_ = _args[0];
lean_object* v_d_936_ = _args[1];
lean_object* v___x_937_ = _args[2];
lean_object* v_inst_938_ = _args[3];
lean_object* v_R_939_ = _args[4];
lean_object* v_a_940_ = _args[5];
lean_object* v_b_941_ = _args[6];
lean_object* v_c_942_ = _args[7];
lean_object* v___y_943_ = _args[8];
lean_object* v___y_944_ = _args[9];
lean_object* v___y_945_ = _args[10];
lean_object* v___y_946_ = _args[11];
lean_object* v___y_947_ = _args[12];
lean_object* v___y_948_ = _args[13];
lean_object* v___y_949_ = _args[14];
lean_object* v___y_950_ = _args[15];
lean_object* v___y_951_ = _args[16];
lean_object* v___y_952_ = _args[17];
_start:
{
lean_object* v_res_953_; 
v_res_953_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__4(v_upperBound_935_, v_d_936_, v___x_937_, v_inst_938_, v_R_939_, v_a_940_, v_b_941_, v_c_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
lean_dec(v___y_943_);
lean_dec(v___x_937_);
lean_dec(v_upperBound_935_);
return v_res_953_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2(lean_object* v_00_u03b2_954_, lean_object* v_x_955_, lean_object* v_x_956_){
_start:
{
uint8_t v___x_957_; 
v___x_957_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2___redArg(v_x_955_, v_x_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2___boxed(lean_object* v_00_u03b2_958_, lean_object* v_x_959_, lean_object* v_x_960_){
_start:
{
uint8_t v_res_961_; lean_object* v_r_962_; 
v_res_961_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2(v_00_u03b2_958_, v_x_959_, v_x_960_);
lean_dec(v_x_960_);
lean_dec_ref(v_x_959_);
v_r_962_ = lean_box(v_res_961_);
return v_r_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4(lean_object* v_00_u03b2_963_, lean_object* v_x_964_, lean_object* v_x_965_, lean_object* v_x_966_){
_start:
{
lean_object* v___x_967_; 
v___x_967_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4___redArg(v_x_964_, v_x_965_, v_x_966_);
return v___x_967_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4(lean_object* v_00_u03b2_968_, lean_object* v_x_969_, size_t v_x_970_, lean_object* v_x_971_){
_start:
{
uint8_t v___x_972_; 
v___x_972_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4___redArg(v_x_969_, v_x_970_, v_x_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4___boxed(lean_object* v_00_u03b2_973_, lean_object* v_x_974_, lean_object* v_x_975_, lean_object* v_x_976_){
_start:
{
size_t v_x_35266__boxed_977_; uint8_t v_res_978_; lean_object* v_r_979_; 
v_x_35266__boxed_977_ = lean_unbox_usize(v_x_975_);
lean_dec(v_x_975_);
v_res_978_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4(v_00_u03b2_973_, v_x_974_, v_x_35266__boxed_977_, v_x_976_);
lean_dec(v_x_976_);
lean_dec_ref(v_x_974_);
v_r_979_ = lean_box(v_res_978_);
return v_r_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7(lean_object* v_00_u03b2_980_, lean_object* v_x_981_, size_t v_x_982_, size_t v_x_983_, lean_object* v_x_984_, lean_object* v_x_985_){
_start:
{
lean_object* v___x_986_; 
v___x_986_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___redArg(v_x_981_, v_x_982_, v_x_983_, v_x_984_, v_x_985_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7___boxed(lean_object* v_00_u03b2_987_, lean_object* v_x_988_, lean_object* v_x_989_, lean_object* v_x_990_, lean_object* v_x_991_, lean_object* v_x_992_){
_start:
{
size_t v_x_35277__boxed_993_; size_t v_x_35278__boxed_994_; lean_object* v_res_995_; 
v_x_35277__boxed_993_ = lean_unbox_usize(v_x_989_);
lean_dec(v_x_989_);
v_x_35278__boxed_994_ = lean_unbox_usize(v_x_990_);
lean_dec(v_x_990_);
v_res_995_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7(v_00_u03b2_987_, v_x_988_, v_x_35277__boxed_993_, v_x_35278__boxed_994_, v_x_991_, v_x_992_);
return v_res_995_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7(lean_object* v_00_u03b2_996_, lean_object* v_keys_997_, lean_object* v_vals_998_, lean_object* v_heq_999_, lean_object* v_i_1000_, lean_object* v_k_1001_){
_start:
{
uint8_t v___x_1002_; 
v___x_1002_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7___redArg(v_keys_997_, v_i_1000_, v_k_1001_);
return v___x_1002_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7___boxed(lean_object* v_00_u03b2_1003_, lean_object* v_keys_1004_, lean_object* v_vals_1005_, lean_object* v_heq_1006_, lean_object* v_i_1007_, lean_object* v_k_1008_){
_start:
{
uint8_t v_res_1009_; lean_object* v_r_1010_; 
v_res_1009_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__2_spec__2_spec__4_spec__7(v_00_u03b2_1003_, v_keys_1004_, v_vals_1005_, v_heq_1006_, v_i_1007_, v_k_1008_);
lean_dec(v_k_1008_);
lean_dec_ref(v_vals_1005_);
lean_dec_ref(v_keys_1004_);
v_r_1010_ = lean_box(v_res_1009_);
return v_r_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10(lean_object* v_00_u03b2_1011_, lean_object* v_n_1012_, lean_object* v_k_1013_, lean_object* v_v_1014_){
_start:
{
lean_object* v___x_1015_; 
v___x_1015_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10___redArg(v_n_1012_, v_k_1013_, v_v_1014_);
return v___x_1015_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11(lean_object* v_00_u03b2_1016_, size_t v_depth_1017_, lean_object* v_keys_1018_, lean_object* v_vals_1019_, lean_object* v_heq_1020_, lean_object* v_i_1021_, lean_object* v_entries_1022_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11___redArg(v_depth_1017_, v_keys_1018_, v_vals_1019_, v_i_1021_, v_entries_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11___boxed(lean_object* v_00_u03b2_1024_, lean_object* v_depth_1025_, lean_object* v_keys_1026_, lean_object* v_vals_1027_, lean_object* v_heq_1028_, lean_object* v_i_1029_, lean_object* v_entries_1030_){
_start:
{
size_t v_depth_boxed_1031_; lean_object* v_res_1032_; 
v_depth_boxed_1031_ = lean_unbox_usize(v_depth_1025_);
lean_dec(v_depth_1025_);
v_res_1032_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__11(v_00_u03b2_1024_, v_depth_boxed_1031_, v_keys_1026_, v_vals_1027_, v_heq_1028_, v_i_1029_, v_entries_1030_);
lean_dec_ref(v_vals_1027_);
lean_dec_ref(v_keys_1026_);
return v_res_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10_spec__11(lean_object* v_00_u03b2_1033_, lean_object* v_x_1034_, lean_object* v_x_1035_, lean_object* v_x_1036_, lean_object* v_x_1037_){
_start:
{
lean_object* v___x_1038_; 
v___x_1038_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_Simp_Theorem_rewrite_spec__3_spec__4_spec__7_spec__10_spec__11___redArg(v_x_1034_, v_x_1035_, v_x_1036_, v_x_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0___lam__0(lean_object* v_fst_1039_, lean_object* v_d_1040_, lean_object* v_x_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_, lean_object* v___y_1050_){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Lean_Meta_Sym_Simp_Theorem_rewrite(v_fst_1039_, v_x_1041_, v_d_1040_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0___lam__0___boxed(lean_object* v_fst_1053_, lean_object* v_d_1054_, lean_object* v_x_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v_res_1066_; 
v_res_1066_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0___lam__0(v_fst_1053_, v_d_1054_, v_x_1055_, v___y_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_);
lean_dec(v___y_1064_);
lean_dec_ref(v___y_1063_);
lean_dec(v___y_1062_);
lean_dec_ref(v___y_1061_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v___y_1056_);
return v_res_1066_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0(lean_object* v_d_1067_, lean_object* v_e_1068_, lean_object* v_as_1069_, size_t v_sz_1070_, size_t v_i_1071_, lean_object* v_b_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
uint8_t v___y_1084_; lean_object* v___y_1085_; lean_object* v___y_1091_; uint8_t v___y_1092_; uint8_t v___y_1093_; lean_object* v___y_1096_; uint8_t v___y_1097_; uint8_t v___y_1098_; uint8_t v___y_1099_; lean_object* v___y_1101_; uint8_t v___y_1102_; uint8_t v___y_1103_; lean_object* v___y_1107_; uint8_t v___y_1108_; uint8_t v___x_1110_; 
v___x_1110_ = lean_usize_dec_lt(v_i_1071_, v_sz_1070_);
if (v___x_1110_ == 0)
{
lean_object* v___x_1111_; 
lean_dec_ref(v_e_1068_);
lean_dec_ref(v_d_1067_);
v___x_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1111_, 0, v_b_1072_);
return v___x_1111_;
}
else
{
lean_object* v_a_1112_; lean_object* v_fst_1113_; lean_object* v_snd_1114_; lean_object* v_snd_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1164_; 
v_a_1112_ = lean_array_uget_borrowed(v_as_1069_, v_i_1071_);
v_fst_1113_ = lean_ctor_get(v_a_1112_, 0);
v_snd_1114_ = lean_ctor_get(v_a_1112_, 1);
v_snd_1115_ = lean_ctor_get(v_b_1072_, 1);
v_isSharedCheck_1164_ = !lean_is_exclusive(v_b_1072_);
if (v_isSharedCheck_1164_ == 0)
{
lean_object* v_unused_1165_; 
v_unused_1165_ = lean_ctor_get(v_b_1072_, 0);
lean_dec(v_unused_1165_);
v___x_1117_ = v_b_1072_;
v_isShared_1118_ = v_isSharedCheck_1164_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_snd_1115_);
lean_dec(v_b_1072_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1164_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
lean_object* v___x_1119_; lean_object* v___y_1121_; uint8_t v_done_1122_; uint8_t v___y_1123_; lean_object* v_result_1133_; lean_object* v___x_1141_; uint8_t v___x_1142_; 
v___x_1119_ = lean_box(0);
v___x_1141_ = lean_unsigned_to_nat(0u);
v___x_1142_ = lean_nat_dec_eq(v_snd_1114_, v___x_1141_);
if (v___x_1142_ == 0)
{
lean_object* v___f_1143_; lean_object* v___x_1144_; 
lean_inc_ref(v_d_1067_);
lean_inc(v_fst_1113_);
v___f_1143_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0___lam__0___boxed), 13, 2);
lean_closure_set(v___f_1143_, 0, v_fst_1113_);
lean_closure_set(v___f_1143_, 1, v_d_1067_);
lean_inc_ref(v_e_1068_);
v___x_1144_ = l_Lean_Meta_Sym_Simp_simpOverApplied(v_e_1068_, v_snd_1114_, v___f_1143_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref(v___x_1144_);
v_result_1133_ = v_a_1145_;
goto v___jp_1132_;
}
else
{
lean_object* v_a_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1153_; 
lean_del_object(v___x_1117_);
lean_dec(v_snd_1115_);
lean_dec_ref(v_e_1068_);
lean_dec_ref(v_d_1067_);
v_a_1146_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1153_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1153_ == 0)
{
v___x_1148_ = v___x_1144_;
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_a_1146_);
lean_dec(v___x_1144_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1153_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1149_ == 0)
{
v___x_1151_ = v___x_1148_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1152_; 
v_reuseFailAlloc_1152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1152_, 0, v_a_1146_);
v___x_1151_ = v_reuseFailAlloc_1152_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
return v___x_1151_;
}
}
}
}
else
{
lean_object* v___x_1154_; 
lean_inc_ref(v_d_1067_);
lean_inc_ref(v_e_1068_);
lean_inc(v_fst_1113_);
v___x_1154_ = l_Lean_Meta_Sym_Simp_Theorem_rewrite(v_fst_1113_, v_e_1068_, v_d_1067_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v_a_1155_; 
v_a_1155_ = lean_ctor_get(v___x_1154_, 0);
lean_inc(v_a_1155_);
lean_dec_ref(v___x_1154_);
v_result_1133_ = v_a_1155_;
goto v___jp_1132_;
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
lean_del_object(v___x_1117_);
lean_dec(v_snd_1115_);
lean_dec_ref(v_e_1068_);
lean_dec_ref(v_d_1067_);
v_a_1156_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1154_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1154_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
v___jp_1120_:
{
if (v_done_1122_ == 0)
{
lean_object* v___x_1124_; lean_object* v___x_1126_; 
lean_dec_ref(v___y_1121_);
v___x_1124_ = lean_box(v___y_1123_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 1, v___x_1124_);
lean_ctor_set(v___x_1117_, 0, v___x_1119_);
v___x_1126_ = v___x_1117_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v___x_1119_);
lean_ctor_set(v_reuseFailAlloc_1130_, 1, v___x_1124_);
v___x_1126_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
size_t v___x_1127_; size_t v___x_1128_; 
v___x_1127_ = ((size_t)1ULL);
v___x_1128_ = lean_usize_add(v_i_1071_, v___x_1127_);
v_i_1071_ = v___x_1128_;
v_b_1072_ = v___x_1126_;
goto _start;
}
}
else
{
uint8_t v___x_1131_; 
lean_del_object(v___x_1117_);
lean_dec_ref(v_e_1068_);
lean_dec_ref(v_d_1067_);
v___x_1131_ = 0;
v___y_1101_ = v___y_1121_;
v___y_1102_ = v___y_1123_;
v___y_1103_ = v___x_1131_;
goto v___jp_1100_;
}
}
v___jp_1132_:
{
uint8_t v___x_1134_; 
v___x_1134_ = lean_unbox(v_snd_1115_);
if (v___x_1134_ == 0)
{
lean_dec(v_snd_1115_);
if (lean_obj_tag(v_result_1133_) == 0)
{
uint8_t v_done_1135_; uint8_t v_contextDependent_1136_; 
v_done_1135_ = lean_ctor_get_uint8(v_result_1133_, 0);
v_contextDependent_1136_ = lean_ctor_get_uint8(v_result_1133_, 1);
v___y_1121_ = v_result_1133_;
v_done_1122_ = v_done_1135_;
v___y_1123_ = v_contextDependent_1136_;
goto v___jp_1120_;
}
else
{
uint8_t v_contextDependent_1137_; 
lean_del_object(v___x_1117_);
lean_dec_ref(v_e_1068_);
lean_dec_ref(v_d_1067_);
v_contextDependent_1137_ = lean_ctor_get_uint8(v_result_1133_, sizeof(void*)*2 + 1);
v___y_1107_ = v_result_1133_;
v___y_1108_ = v_contextDependent_1137_;
goto v___jp_1106_;
}
}
else
{
if (lean_obj_tag(v_result_1133_) == 0)
{
uint8_t v_done_1138_; uint8_t v___x_1139_; 
v_done_1138_ = lean_ctor_get_uint8(v_result_1133_, 0);
v___x_1139_ = lean_unbox(v_snd_1115_);
lean_dec(v_snd_1115_);
v___y_1121_ = v_result_1133_;
v_done_1122_ = v_done_1138_;
v___y_1123_ = v___x_1139_;
goto v___jp_1120_;
}
else
{
uint8_t v___x_1140_; 
lean_del_object(v___x_1117_);
lean_dec_ref(v_e_1068_);
lean_dec_ref(v_d_1067_);
v___x_1140_ = lean_unbox(v_snd_1115_);
lean_dec(v_snd_1115_);
v___y_1107_ = v_result_1133_;
v___y_1108_ = v___x_1140_;
goto v___jp_1106_;
}
}
}
}
}
v___jp_1083_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1086_, 0, v___y_1085_);
v___x_1087_ = lean_box(v___y_1084_);
v___x_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1086_);
lean_ctor_set(v___x_1088_, 1, v___x_1087_);
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
return v___x_1089_;
}
v___jp_1090_:
{
if (v___y_1093_ == 0)
{
v___y_1084_ = v___y_1092_;
v___y_1085_ = v___y_1091_;
goto v___jp_1083_;
}
else
{
lean_object* v___x_1094_; 
v___x_1094_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_1091_);
v___y_1084_ = v___y_1092_;
v___y_1085_ = v___x_1094_;
goto v___jp_1083_;
}
}
v___jp_1095_:
{
if (v___y_1099_ == 0)
{
v___y_1091_ = v___y_1096_;
v___y_1092_ = v___y_1098_;
v___y_1093_ = v___y_1098_;
goto v___jp_1090_;
}
else
{
v___y_1091_ = v___y_1096_;
v___y_1092_ = v___y_1098_;
v___y_1093_ = v___y_1097_;
goto v___jp_1090_;
}
}
v___jp_1100_:
{
if (v___y_1102_ == 0)
{
v___y_1084_ = v___y_1102_;
v___y_1085_ = v___y_1101_;
goto v___jp_1083_;
}
else
{
if (lean_obj_tag(v___y_1101_) == 0)
{
uint8_t v_contextDependent_1104_; 
v_contextDependent_1104_ = lean_ctor_get_uint8(v___y_1101_, 1);
v___y_1096_ = v___y_1101_;
v___y_1097_ = v___y_1103_;
v___y_1098_ = v___y_1102_;
v___y_1099_ = v_contextDependent_1104_;
goto v___jp_1095_;
}
else
{
uint8_t v_contextDependent_1105_; 
v_contextDependent_1105_ = lean_ctor_get_uint8(v___y_1101_, sizeof(void*)*2 + 1);
v___y_1096_ = v___y_1101_;
v___y_1097_ = v___y_1103_;
v___y_1098_ = v___y_1102_;
v___y_1099_ = v_contextDependent_1105_;
goto v___jp_1095_;
}
}
}
v___jp_1106_:
{
uint8_t v___x_1109_; 
v___x_1109_ = 0;
v___y_1101_ = v___y_1107_;
v___y_1102_ = v___y_1108_;
v___y_1103_ = v___x_1109_;
goto v___jp_1100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0___boxed(lean_object* v_d_1166_, lean_object* v_e_1167_, lean_object* v_as_1168_, lean_object* v_sz_1169_, lean_object* v_i_1170_, lean_object* v_b_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_){
_start:
{
size_t v_sz_boxed_1182_; size_t v_i_boxed_1183_; lean_object* v_res_1184_; 
v_sz_boxed_1182_ = lean_unbox_usize(v_sz_1169_);
lean_dec(v_sz_1169_);
v_i_boxed_1183_ = lean_unbox_usize(v_i_1170_);
lean_dec(v_i_1170_);
v_res_1184_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0(v_d_1166_, v_e_1167_, v_as_1168_, v_sz_boxed_1182_, v_i_boxed_1183_, v_b_1171_, v___y_1172_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_, v___y_1180_);
lean_dec(v___y_1180_);
lean_dec_ref(v___y_1179_);
lean_dec(v___y_1178_);
lean_dec_ref(v___y_1177_);
lean_dec(v___y_1176_);
lean_dec_ref(v___y_1175_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec_ref(v_as_1168_);
return v_res_1184_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Simp_Theorems_rewrite___closed__0(void){
_start:
{
uint8_t v_anyCD_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v_anyCD_1185_ = 0;
v___x_1186_ = lean_box(0);
v___x_1187_ = lean_box(v_anyCD_1185_);
v___x_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1188_, 0, v___x_1186_);
lean_ctor_set(v___x_1188_, 1, v___x_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object* v_thms_1189_, lean_object* v_d_1190_, lean_object* v_e_1191_, lean_object* v_a_1192_, lean_object* v_a_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; size_t v_sz_1204_; size_t v___x_1205_; lean_object* v___x_1206_; 
v___x_1202_ = l_Lean_Meta_Sym_Simp_Theorems_getMatchWithExtra(v_thms_1189_, v_e_1191_);
v___x_1203_ = lean_obj_once(&l_Lean_Meta_Sym_Simp_Theorems_rewrite___closed__0, &l_Lean_Meta_Sym_Simp_Theorems_rewrite___closed__0_once, _init_l_Lean_Meta_Sym_Simp_Theorems_rewrite___closed__0);
v_sz_1204_ = lean_array_size(v___x_1202_);
v___x_1205_ = ((size_t)0ULL);
v___x_1206_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Sym_Simp_Theorems_rewrite_spec__0(v_d_1190_, v_e_1191_, v___x_1202_, v_sz_1204_, v___x_1205_, v___x_1203_, v_a_1192_, v_a_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_, v_a_1198_, v_a_1199_, v_a_1200_);
lean_dec_ref(v___x_1202_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1222_; 
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1222_ == 0)
{
v___x_1209_ = v___x_1206_;
v_isShared_1210_ = v_isSharedCheck_1222_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_a_1207_);
lean_dec(v___x_1206_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1222_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v_fst_1211_; 
v_fst_1211_ = lean_ctor_get(v_a_1207_, 0);
if (lean_obj_tag(v_fst_1211_) == 0)
{
lean_object* v_snd_1212_; uint8_t v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1216_; 
v_snd_1212_ = lean_ctor_get(v_a_1207_, 1);
lean_inc(v_snd_1212_);
lean_dec(v_a_1207_);
v___x_1213_ = lean_unbox(v_snd_1212_);
lean_dec(v_snd_1212_);
v___x_1214_ = l_Lean_Meta_Sym_Simp_mkRflResultCD(v___x_1213_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 0, v___x_1214_);
v___x_1216_ = v___x_1209_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1214_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
else
{
lean_object* v_val_1218_; lean_object* v___x_1220_; 
lean_inc_ref(v_fst_1211_);
lean_dec(v_a_1207_);
v_val_1218_ = lean_ctor_get(v_fst_1211_, 0);
lean_inc(v_val_1218_);
lean_dec_ref(v_fst_1211_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 0, v_val_1218_);
v___x_1220_ = v___x_1209_;
goto v_reusejp_1219_;
}
else
{
lean_object* v_reuseFailAlloc_1221_; 
v_reuseFailAlloc_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1221_, 0, v_val_1218_);
v___x_1220_ = v_reuseFailAlloc_1221_;
goto v_reusejp_1219_;
}
v_reusejp_1219_:
{
return v___x_1220_;
}
}
}
}
else
{
lean_object* v_a_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1230_; 
v_a_1223_ = lean_ctor_get(v___x_1206_, 0);
v_isSharedCheck_1230_ = !lean_is_exclusive(v___x_1206_);
if (v_isSharedCheck_1230_ == 0)
{
v___x_1225_ = v___x_1206_;
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_a_1223_);
lean_dec(v___x_1206_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1230_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
lean_object* v___x_1228_; 
if (v_isShared_1226_ == 0)
{
v___x_1228_ = v___x_1225_;
goto v_reusejp_1227_;
}
else
{
lean_object* v_reuseFailAlloc_1229_; 
v_reuseFailAlloc_1229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1229_, 0, v_a_1223_);
v___x_1228_ = v_reuseFailAlloc_1229_;
goto v_reusejp_1227_;
}
v_reusejp_1227_:
{
return v___x_1228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite___boxed(lean_object* v_thms_1231_, lean_object* v_d_1232_, lean_object* v_e_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_){
_start:
{
lean_object* v_res_1244_; 
v_res_1244_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_thms_1231_, v_d_1232_, v_e_1233_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_);
lean_dec(v_a_1242_);
lean_dec_ref(v_a_1241_);
lean_dec(v_a_1240_);
lean_dec_ref(v_a_1239_);
lean_dec(v_a_1238_);
lean_dec_ref(v_a_1237_);
lean_dec(v_a_1236_);
lean_dec_ref(v_a_1235_);
lean_dec(v_a_1234_);
lean_dec_ref(v_thms_1231_);
return v_res_1244_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_ACLt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_ACLt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Theorems(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_App(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Discharger(uint8_t builtin);
lean_object* initialize_Lean_Meta_ACLt(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateMVarsS(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Theorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_App(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Discharger(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_ACLt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateMVarsS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
}
#ifdef __cplusplus
}
#endif
