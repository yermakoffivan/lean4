// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.CommRing.SemiringM
// Imports: public import Lean.Meta.Tactic.Grind.Arith.CommRing.RingM public import Lean.Meta.Tactic.Grind.Arith.CommRing.MonadSemiring import Lean.Meta.Tactic.Grind.Arith.CommRing.DenoteExpr public import Lean.Meta.Tactic.Grind.Arith.CommRing.Functions
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
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* l_Lean_mkRawNatLit(lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstanceMeta_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_CommRing_ringExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
extern lean_object* l_Lean_Nat_mkType;
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedGoalM(lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_hashPtrExpr_unsafe__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__7;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__6;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__1(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__5;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3___boxed(lean_object**);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__1;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__2;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_CommRing_Expr_denoteAsRingExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_CommRing_Expr_denoteAsRingExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___redArg(lean_object* v_semiringId_1_, lean_object* v_x_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_){
_start:
{
lean_object* v___x_14_; 
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc_ref(v_a_9_);
lean_inc(v_a_8_);
lean_inc_ref(v_a_7_);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
lean_inc(v_a_3_);
v___x_14_ = lean_apply_12(v_x_2_, v_semiringId_1_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, lean_box(0));
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___redArg___boxed(lean_object* v_semiringId_15_, lean_object* v_x_16_, lean_object* v_a_17_, lean_object* v_a_18_, lean_object* v_a_19_, lean_object* v_a_20_, lean_object* v_a_21_, lean_object* v_a_22_, lean_object* v_a_23_, lean_object* v_a_24_, lean_object* v_a_25_, lean_object* v_a_26_, lean_object* v_a_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___redArg(v_semiringId_15_, v_x_16_, v_a_17_, v_a_18_, v_a_19_, v_a_20_, v_a_21_, v_a_22_, v_a_23_, v_a_24_, v_a_25_, v_a_26_);
lean_dec(v_a_26_);
lean_dec_ref(v_a_25_);
lean_dec(v_a_24_);
lean_dec_ref(v_a_23_);
lean_dec(v_a_22_);
lean_dec_ref(v_a_21_);
lean_dec(v_a_20_);
lean_dec_ref(v_a_19_);
lean_dec(v_a_18_);
lean_dec(v_a_17_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run(lean_object* v_00_u03b1_29_, lean_object* v_semiringId_30_, lean_object* v_x_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_43_; 
lean_inc(v_a_41_);
lean_inc_ref(v_a_40_);
lean_inc(v_a_39_);
lean_inc_ref(v_a_38_);
lean_inc(v_a_37_);
lean_inc_ref(v_a_36_);
lean_inc(v_a_35_);
lean_inc_ref(v_a_34_);
lean_inc(v_a_33_);
lean_inc(v_a_32_);
v___x_43_ = lean_apply_12(v_x_31_, v_semiringId_30_, v_a_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_, lean_box(0));
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run___boxed(lean_object* v_00_u03b1_44_, lean_object* v_semiringId_45_, lean_object* v_x_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_run(v_00_u03b1_44_, v_semiringId_45_, v_x_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_);
lean_dec(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec(v_a_47_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___redArg(lean_object* v_a_59_){
_start:
{
lean_object* v___x_61_; 
lean_inc(v_a_59_);
v___x_61_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_61_, 0, v_a_59_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___redArg___boxed(lean_object* v_a_62_, lean_object* v_a_63_){
_start:
{
lean_object* v_res_64_; 
v_res_64_ = l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___redArg(v_a_62_);
lean_dec(v_a_62_);
return v_res_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId(lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___x_77_; 
lean_inc(v_a_65_);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v_a_65_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getSemiringId___boxed(lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Meta_Grind_Arith_CommRing_getSemiringId(v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
lean_dec(v_a_88_);
lean_dec_ref(v_a_87_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec(v_a_84_);
lean_dec_ref(v_a_83_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec(v_a_79_);
lean_dec(v_a_78_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0(lean_object* v_e_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = l_Lean_Meta_Sym_canon(v_e_91_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_, v___y_102_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v_a_105_; lean_object* v___x_106_; 
v_a_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_a_105_);
lean_dec_ref(v___x_104_);
v___x_106_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_105_, v___y_98_, v___y_102_);
return v___x_106_;
}
else
{
return v___x_104_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0___boxed(lean_object* v_e_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_res_120_; 
v_res_120_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0(v_e_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_, v___y_118_);
lean_dec(v___y_118_);
lean_dec_ref(v___y_117_);
lean_dec(v___y_116_);
lean_dec_ref(v___y_115_);
lean_dec(v___y_114_);
lean_dec_ref(v___y_113_);
lean_dec(v___y_112_);
lean_dec_ref(v___y_111_);
lean_dec(v___y_110_);
lean_dec(v___y_109_);
lean_dec(v___y_108_);
return v_res_120_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1(lean_object* v_e_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v_e_121_, v___y_129_, v___y_130_, v___y_131_, v___y_132_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1___boxed(lean_object* v_e_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_){
_start:
{
lean_object* v_res_148_; 
v_res_148_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1(v_e_135_, v___y_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_, v___y_143_, v___y_144_, v___y_145_, v___y_146_);
lean_dec(v___y_146_);
lean_dec_ref(v___y_145_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec(v___y_137_);
lean_dec(v___y_136_);
return v_res_148_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__0(void){
_start:
{
lean_object* v___f_149_; 
v___f_149_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__0___boxed), 13, 0);
return v___f_149_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__1(void){
_start:
{
lean_object* v___f_150_; 
v___f_150_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___lam__1___boxed), 13, 0);
return v___f_150_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__2(void){
_start:
{
lean_object* v___f_151_; lean_object* v___f_152_; lean_object* v___x_153_; 
v___f_151_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__1);
v___f_152_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__0);
v___x_153_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_153_, 0, v___f_152_);
lean_ctor_set(v___x_153_, 1, v___f_151_);
return v___x_153_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM(void){
_start:
{
lean_object* v___x_154_; 
v___x_154_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM___closed__2);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0(lean_object* v_msgData_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
lean_object* v___x_161_; lean_object* v_env_162_; lean_object* v___x_163_; lean_object* v___x_164_; lean_object* v_mctx_165_; lean_object* v_lctx_166_; lean_object* v_options_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_161_ = lean_st_ref_get(v___y_159_);
v_env_162_ = lean_ctor_get(v___x_161_, 0);
lean_inc_ref(v_env_162_);
lean_dec(v___x_161_);
v___x_163_ = lean_st_ref_get(v___y_159_);
lean_dec(v___x_163_);
v___x_164_ = lean_st_ref_get(v___y_157_);
v_mctx_165_ = lean_ctor_get(v___x_164_, 0);
lean_inc_ref(v_mctx_165_);
lean_dec(v___x_164_);
v_lctx_166_ = lean_ctor_get(v___y_156_, 2);
v_options_167_ = lean_ctor_get(v___y_158_, 2);
lean_inc_ref(v_options_167_);
lean_inc_ref(v_lctx_166_);
v___x_168_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_168_, 0, v_env_162_);
lean_ctor_set(v___x_168_, 1, v_mctx_165_);
lean_ctor_set(v___x_168_, 2, v_lctx_166_);
lean_ctor_set(v___x_168_, 3, v_options_167_);
v___x_169_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v_msgData_155_);
v___x_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0___boxed(lean_object* v_msgData_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0(v_msgData_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
lean_dec(v___y_175_);
lean_dec_ref(v___y_174_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(lean_object* v_msg_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
lean_object* v_ref_184_; lean_object* v___x_185_; lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_194_; 
v_ref_184_ = lean_ctor_get(v___y_181_, 5);
v___x_185_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0_spec__0(v_msg_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_);
v_a_186_ = lean_ctor_get(v___x_185_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_185_);
if (v_isSharedCheck_194_ == 0)
{
v___x_188_ = v___x_185_;
v_isShared_189_ = v_isSharedCheck_194_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_185_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_194_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_190_; lean_object* v___x_192_; 
lean_inc(v_ref_184_);
v___x_190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_190_, 0, v_ref_184_);
lean_ctor_set(v___x_190_, 1, v_a_186_);
if (v_isShared_189_ == 0)
{
lean_ctor_set_tag(v___x_188_, 1);
lean_ctor_set(v___x_188_, 0, v___x_190_);
v___x_192_ = v___x_188_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v___x_190_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg___boxed(lean_object* v_msg_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(v_msg_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
return v_res_201_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__0(void){
_start:
{
lean_object* v___x_202_; 
v___x_202_ = lean_mk_string_unchecked("`grind` internal error, invalid semiringId", 42, 42);
return v___x_202_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1(void){
_start:
{
lean_object* v___x_203_; lean_object* v___x_204_; 
v___x_203_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__0);
v___x_204_ = l_Lean_stringToMessageData(v___x_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_206_, v_a_214_, v_a_215_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_231_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_231_ == 0)
{
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_231_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_231_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v_semirings_222_; lean_object* v___x_223_; uint8_t v___x_224_; 
v_semirings_222_ = lean_ctor_get(v_a_218_, 3);
lean_inc_ref(v_semirings_222_);
lean_dec(v_a_218_);
v___x_223_ = lean_array_get_size(v_semirings_222_);
v___x_224_ = lean_nat_dec_lt(v_a_205_, v___x_223_);
if (v___x_224_ == 0)
{
lean_object* v___x_225_; lean_object* v___x_226_; 
lean_dec_ref(v_semirings_222_);
lean_del_object(v___x_220_);
v___x_225_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___closed__1);
v___x_226_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(v___x_225_, v_a_212_, v_a_213_, v_a_214_, v_a_215_);
return v___x_226_;
}
else
{
lean_object* v___x_227_; lean_object* v___x_229_; 
v___x_227_ = lean_array_fget(v_semirings_222_, v_a_205_);
lean_dec_ref(v_semirings_222_);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_227_);
v___x_229_ = v___x_220_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_227_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
}
else
{
lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_239_; 
v_a_232_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_239_ == 0)
{
v___x_234_ = v___x_217_;
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v___x_217_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_239_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_237_; 
if (v_isShared_235_ == 0)
{
v___x_237_ = v___x_234_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v_a_232_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___boxed(lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_, v_a_246_, v_a_247_, v_a_248_, v_a_249_, v_a_250_);
lean_dec(v_a_250_);
lean_dec_ref(v_a_249_);
lean_dec(v_a_248_);
lean_dec_ref(v_a_247_);
lean_dec(v_a_246_);
lean_dec_ref(v_a_245_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec(v_a_241_);
lean_dec(v_a_240_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0(lean_object* v_00_u03b1_253_, lean_object* v_msg_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(v_msg_254_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___boxed(lean_object* v_00_u03b1_268_, lean_object* v_msg_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0(v_00_u03b1_268_, v_msg_269_, v___y_270_, v___y_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
lean_dec(v___y_274_);
lean_dec_ref(v___y_273_);
lean_dec(v___y_272_);
lean_dec(v___y_271_);
lean_dec(v___y_270_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0(lean_object* v_a_283_, lean_object* v_f_284_, lean_object* v_s_285_){
_start:
{
lean_object* v_rings_286_; lean_object* v_typeIdOf_287_; lean_object* v_exprToRingId_288_; lean_object* v_semirings_289_; lean_object* v_stypeIdOf_290_; lean_object* v_exprToSemiringId_291_; lean_object* v_ncRings_292_; lean_object* v_exprToNCRingId_293_; lean_object* v_nctypeIdOf_294_; lean_object* v_ncSemirings_295_; lean_object* v_exprToNCSemiringId_296_; lean_object* v_ncstypeIdOf_297_; lean_object* v_steps_298_; lean_object* v___x_299_; uint8_t v___x_300_; 
v_rings_286_ = lean_ctor_get(v_s_285_, 0);
v_typeIdOf_287_ = lean_ctor_get(v_s_285_, 1);
v_exprToRingId_288_ = lean_ctor_get(v_s_285_, 2);
v_semirings_289_ = lean_ctor_get(v_s_285_, 3);
v_stypeIdOf_290_ = lean_ctor_get(v_s_285_, 4);
v_exprToSemiringId_291_ = lean_ctor_get(v_s_285_, 5);
v_ncRings_292_ = lean_ctor_get(v_s_285_, 6);
v_exprToNCRingId_293_ = lean_ctor_get(v_s_285_, 7);
v_nctypeIdOf_294_ = lean_ctor_get(v_s_285_, 8);
v_ncSemirings_295_ = lean_ctor_get(v_s_285_, 9);
v_exprToNCSemiringId_296_ = lean_ctor_get(v_s_285_, 10);
v_ncstypeIdOf_297_ = lean_ctor_get(v_s_285_, 11);
v_steps_298_ = lean_ctor_get(v_s_285_, 12);
v___x_299_ = lean_array_get_size(v_semirings_289_);
v___x_300_ = lean_nat_dec_lt(v_a_283_, v___x_299_);
if (v___x_300_ == 0)
{
lean_dec_ref(v_f_284_);
return v_s_285_;
}
else
{
lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_312_; 
lean_inc(v_steps_298_);
lean_inc_ref(v_ncstypeIdOf_297_);
lean_inc_ref(v_exprToNCSemiringId_296_);
lean_inc_ref(v_ncSemirings_295_);
lean_inc_ref(v_nctypeIdOf_294_);
lean_inc_ref(v_exprToNCRingId_293_);
lean_inc_ref(v_ncRings_292_);
lean_inc_ref(v_exprToSemiringId_291_);
lean_inc_ref(v_stypeIdOf_290_);
lean_inc_ref(v_semirings_289_);
lean_inc_ref(v_exprToRingId_288_);
lean_inc_ref(v_typeIdOf_287_);
lean_inc_ref(v_rings_286_);
v_isSharedCheck_312_ = !lean_is_exclusive(v_s_285_);
if (v_isSharedCheck_312_ == 0)
{
lean_object* v_unused_313_; lean_object* v_unused_314_; lean_object* v_unused_315_; lean_object* v_unused_316_; lean_object* v_unused_317_; lean_object* v_unused_318_; lean_object* v_unused_319_; lean_object* v_unused_320_; lean_object* v_unused_321_; lean_object* v_unused_322_; lean_object* v_unused_323_; lean_object* v_unused_324_; lean_object* v_unused_325_; 
v_unused_313_ = lean_ctor_get(v_s_285_, 12);
lean_dec(v_unused_313_);
v_unused_314_ = lean_ctor_get(v_s_285_, 11);
lean_dec(v_unused_314_);
v_unused_315_ = lean_ctor_get(v_s_285_, 10);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_s_285_, 9);
lean_dec(v_unused_316_);
v_unused_317_ = lean_ctor_get(v_s_285_, 8);
lean_dec(v_unused_317_);
v_unused_318_ = lean_ctor_get(v_s_285_, 7);
lean_dec(v_unused_318_);
v_unused_319_ = lean_ctor_get(v_s_285_, 6);
lean_dec(v_unused_319_);
v_unused_320_ = lean_ctor_get(v_s_285_, 5);
lean_dec(v_unused_320_);
v_unused_321_ = lean_ctor_get(v_s_285_, 4);
lean_dec(v_unused_321_);
v_unused_322_ = lean_ctor_get(v_s_285_, 3);
lean_dec(v_unused_322_);
v_unused_323_ = lean_ctor_get(v_s_285_, 2);
lean_dec(v_unused_323_);
v_unused_324_ = lean_ctor_get(v_s_285_, 1);
lean_dec(v_unused_324_);
v_unused_325_ = lean_ctor_get(v_s_285_, 0);
lean_dec(v_unused_325_);
v___x_302_ = v_s_285_;
v_isShared_303_ = v_isSharedCheck_312_;
goto v_resetjp_301_;
}
else
{
lean_dec(v_s_285_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_312_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v_v_304_; lean_object* v___x_305_; lean_object* v_xs_x27_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_310_; 
v_v_304_ = lean_array_fget(v_semirings_289_, v_a_283_);
v___x_305_ = lean_box(0);
v_xs_x27_306_ = lean_array_fset(v_semirings_289_, v_a_283_, v___x_305_);
v___x_307_ = lean_apply_1(v_f_284_, v_v_304_);
v___x_308_ = lean_array_fset(v_xs_x27_306_, v_a_283_, v___x_307_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 3, v___x_308_);
v___x_310_ = v___x_302_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_rings_286_);
lean_ctor_set(v_reuseFailAlloc_311_, 1, v_typeIdOf_287_);
lean_ctor_set(v_reuseFailAlloc_311_, 2, v_exprToRingId_288_);
lean_ctor_set(v_reuseFailAlloc_311_, 3, v___x_308_);
lean_ctor_set(v_reuseFailAlloc_311_, 4, v_stypeIdOf_290_);
lean_ctor_set(v_reuseFailAlloc_311_, 5, v_exprToSemiringId_291_);
lean_ctor_set(v_reuseFailAlloc_311_, 6, v_ncRings_292_);
lean_ctor_set(v_reuseFailAlloc_311_, 7, v_exprToNCRingId_293_);
lean_ctor_set(v_reuseFailAlloc_311_, 8, v_nctypeIdOf_294_);
lean_ctor_set(v_reuseFailAlloc_311_, 9, v_ncSemirings_295_);
lean_ctor_set(v_reuseFailAlloc_311_, 10, v_exprToNCSemiringId_296_);
lean_ctor_set(v_reuseFailAlloc_311_, 11, v_ncstypeIdOf_297_);
lean_ctor_set(v_reuseFailAlloc_311_, 12, v_steps_298_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___boxed(lean_object* v_a_326_, lean_object* v_f_327_, lean_object* v_s_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0(v_a_326_, v_f_327_, v_s_328_);
lean_dec(v_a_326_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg(lean_object* v_f_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_){
_start:
{
lean_object* v___f_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
lean_inc(v_a_331_);
v___f_335_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_335_, 0, v_a_331_);
lean_closure_set(v___f_335_, 1, v_f_330_);
v___x_336_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_337_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_336_, v___f_335_, v_a_332_, v_a_333_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___boxed(lean_object* v_f_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg(v_f_338_, v_a_339_, v_a_340_, v_a_341_);
lean_dec(v_a_341_);
lean_dec(v_a_340_);
lean_dec(v_a_339_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring(lean_object* v_f_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_, lean_object* v_a_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_){
_start:
{
lean_object* v___f_357_; lean_object* v___x_358_; lean_object* v___x_359_; 
lean_inc(v_a_345_);
v___f_357_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_357_, 0, v_a_345_);
lean_closure_set(v___f_357_, 1, v_f_344_);
v___x_358_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_359_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_358_, v___f_357_, v_a_346_, v_a_355_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___boxed(lean_object* v_f_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring(v_f_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_);
lean_dec(v_a_371_);
lean_dec_ref(v_a_370_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
lean_dec(v_a_367_);
lean_dec_ref(v_a_366_);
lean_dec(v_a_365_);
lean_dec_ref(v_a_364_);
lean_dec(v_a_363_);
lean_dec(v_a_362_);
lean_dec(v_a_361_);
return v_res_373_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__0(void){
_start:
{
lean_object* v___x_374_; 
v___x_374_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommSemiring___boxed), 13, 0);
return v___x_374_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1(void){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_375_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__0);
v___x_376_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring___boxed), 12, 0);
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v___x_376_);
lean_ctor_set(v___x_377_, 1, v___x_375_);
return v___x_377_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM(void){
_start:
{
lean_object* v___x_378_; 
v___x_378_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM___closed__1);
return v___x_378_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__0(void){
_start:
{
lean_object* v___x_379_; 
v___x_379_ = lean_mk_string_unchecked("`grind` internal error, invalid ringId", 38, 38);
return v___x_379_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1(void){
_start:
{
lean_object* v___x_380_; lean_object* v___x_381_; 
v___x_380_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__0);
v___x_381_ = l_Lean_stringToMessageData(v___x_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_){
_start:
{
lean_object* v___x_394_; 
v___x_394_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_383_, v_a_391_, v_a_392_);
if (lean_obj_tag(v___x_394_) == 0)
{
lean_object* v_a_395_; lean_object* v___x_396_; 
v_a_395_ = lean_ctor_get(v___x_394_, 0);
lean_inc(v_a_395_);
lean_dec_ref(v___x_394_);
v___x_396_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_, v_a_388_, v_a_389_, v_a_390_, v_a_391_, v_a_392_);
if (lean_obj_tag(v___x_396_) == 0)
{
lean_object* v_a_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_411_; 
v_a_397_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_411_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_411_ == 0)
{
v___x_399_ = v___x_396_;
v_isShared_400_ = v_isSharedCheck_411_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_a_397_);
lean_dec(v___x_396_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_411_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v_ringId_401_; lean_object* v_rings_402_; lean_object* v___x_403_; uint8_t v___x_404_; 
v_ringId_401_ = lean_ctor_get(v_a_397_, 1);
lean_inc(v_ringId_401_);
lean_dec(v_a_397_);
v_rings_402_ = lean_ctor_get(v_a_395_, 0);
lean_inc_ref(v_rings_402_);
lean_dec(v_a_395_);
v___x_403_ = lean_array_get_size(v_rings_402_);
v___x_404_ = lean_nat_dec_lt(v_ringId_401_, v___x_403_);
if (v___x_404_ == 0)
{
lean_object* v___x_405_; lean_object* v___x_406_; 
lean_dec_ref(v_rings_402_);
lean_dec(v_ringId_401_);
lean_del_object(v___x_399_);
v___x_405_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___closed__1);
v___x_406_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(v___x_405_, v_a_389_, v_a_390_, v_a_391_, v_a_392_);
return v___x_406_;
}
else
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = lean_array_fget(v_rings_402_, v_ringId_401_);
lean_dec(v_ringId_401_);
lean_dec_ref(v_rings_402_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 0, v___x_407_);
v___x_409_ = v___x_399_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
else
{
lean_object* v_a_412_; lean_object* v___x_414_; uint8_t v_isShared_415_; uint8_t v_isSharedCheck_419_; 
lean_dec(v_a_395_);
v_a_412_ = lean_ctor_get(v___x_396_, 0);
v_isSharedCheck_419_ = !lean_is_exclusive(v___x_396_);
if (v_isSharedCheck_419_ == 0)
{
v___x_414_ = v___x_396_;
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
else
{
lean_inc(v_a_412_);
lean_dec(v___x_396_);
v___x_414_ = lean_box(0);
v_isShared_415_ = v_isSharedCheck_419_;
goto v_resetjp_413_;
}
v_resetjp_413_:
{
lean_object* v___x_417_; 
if (v_isShared_415_ == 0)
{
v___x_417_ = v___x_414_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v_a_412_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
else
{
lean_object* v_a_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_427_; 
v_a_420_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_427_ == 0)
{
v___x_422_ = v___x_394_;
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_a_420_);
lean_dec(v___x_394_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_427_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_425_; 
if (v_isShared_423_ == 0)
{
v___x_425_ = v___x_422_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v_a_420_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___boxed(lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_){
_start:
{
lean_object* v_res_440_; 
v_res_440_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v_a_428_, v_a_429_, v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_);
lean_dec(v_a_438_);
lean_dec_ref(v_a_437_);
lean_dec(v_a_436_);
lean_dec_ref(v_a_435_);
lean_dec(v_a_434_);
lean_dec_ref(v_a_433_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
lean_dec(v_a_430_);
lean_dec(v_a_429_);
lean_dec(v_a_428_);
return v_res_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0(lean_object* v_ringId_441_, lean_object* v_f_442_, lean_object* v_s_443_){
_start:
{
lean_object* v_rings_444_; lean_object* v_typeIdOf_445_; lean_object* v_exprToRingId_446_; lean_object* v_semirings_447_; lean_object* v_stypeIdOf_448_; lean_object* v_exprToSemiringId_449_; lean_object* v_ncRings_450_; lean_object* v_exprToNCRingId_451_; lean_object* v_nctypeIdOf_452_; lean_object* v_ncSemirings_453_; lean_object* v_exprToNCSemiringId_454_; lean_object* v_ncstypeIdOf_455_; lean_object* v_steps_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v_rings_444_ = lean_ctor_get(v_s_443_, 0);
v_typeIdOf_445_ = lean_ctor_get(v_s_443_, 1);
v_exprToRingId_446_ = lean_ctor_get(v_s_443_, 2);
v_semirings_447_ = lean_ctor_get(v_s_443_, 3);
v_stypeIdOf_448_ = lean_ctor_get(v_s_443_, 4);
v_exprToSemiringId_449_ = lean_ctor_get(v_s_443_, 5);
v_ncRings_450_ = lean_ctor_get(v_s_443_, 6);
v_exprToNCRingId_451_ = lean_ctor_get(v_s_443_, 7);
v_nctypeIdOf_452_ = lean_ctor_get(v_s_443_, 8);
v_ncSemirings_453_ = lean_ctor_get(v_s_443_, 9);
v_exprToNCSemiringId_454_ = lean_ctor_get(v_s_443_, 10);
v_ncstypeIdOf_455_ = lean_ctor_get(v_s_443_, 11);
v_steps_456_ = lean_ctor_get(v_s_443_, 12);
v___x_457_ = lean_array_get_size(v_rings_444_);
v___x_458_ = lean_nat_dec_lt(v_ringId_441_, v___x_457_);
if (v___x_458_ == 0)
{
lean_dec_ref(v_f_442_);
return v_s_443_;
}
else
{
lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_470_; 
lean_inc(v_steps_456_);
lean_inc_ref(v_ncstypeIdOf_455_);
lean_inc_ref(v_exprToNCSemiringId_454_);
lean_inc_ref(v_ncSemirings_453_);
lean_inc_ref(v_nctypeIdOf_452_);
lean_inc_ref(v_exprToNCRingId_451_);
lean_inc_ref(v_ncRings_450_);
lean_inc_ref(v_exprToSemiringId_449_);
lean_inc_ref(v_stypeIdOf_448_);
lean_inc_ref(v_semirings_447_);
lean_inc_ref(v_exprToRingId_446_);
lean_inc_ref(v_typeIdOf_445_);
lean_inc_ref(v_rings_444_);
v_isSharedCheck_470_ = !lean_is_exclusive(v_s_443_);
if (v_isSharedCheck_470_ == 0)
{
lean_object* v_unused_471_; lean_object* v_unused_472_; lean_object* v_unused_473_; lean_object* v_unused_474_; lean_object* v_unused_475_; lean_object* v_unused_476_; lean_object* v_unused_477_; lean_object* v_unused_478_; lean_object* v_unused_479_; lean_object* v_unused_480_; lean_object* v_unused_481_; lean_object* v_unused_482_; lean_object* v_unused_483_; 
v_unused_471_ = lean_ctor_get(v_s_443_, 12);
lean_dec(v_unused_471_);
v_unused_472_ = lean_ctor_get(v_s_443_, 11);
lean_dec(v_unused_472_);
v_unused_473_ = lean_ctor_get(v_s_443_, 10);
lean_dec(v_unused_473_);
v_unused_474_ = lean_ctor_get(v_s_443_, 9);
lean_dec(v_unused_474_);
v_unused_475_ = lean_ctor_get(v_s_443_, 8);
lean_dec(v_unused_475_);
v_unused_476_ = lean_ctor_get(v_s_443_, 7);
lean_dec(v_unused_476_);
v_unused_477_ = lean_ctor_get(v_s_443_, 6);
lean_dec(v_unused_477_);
v_unused_478_ = lean_ctor_get(v_s_443_, 5);
lean_dec(v_unused_478_);
v_unused_479_ = lean_ctor_get(v_s_443_, 4);
lean_dec(v_unused_479_);
v_unused_480_ = lean_ctor_get(v_s_443_, 3);
lean_dec(v_unused_480_);
v_unused_481_ = lean_ctor_get(v_s_443_, 2);
lean_dec(v_unused_481_);
v_unused_482_ = lean_ctor_get(v_s_443_, 1);
lean_dec(v_unused_482_);
v_unused_483_ = lean_ctor_get(v_s_443_, 0);
lean_dec(v_unused_483_);
v___x_460_ = v_s_443_;
v_isShared_461_ = v_isSharedCheck_470_;
goto v_resetjp_459_;
}
else
{
lean_dec(v_s_443_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_470_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v_v_462_; lean_object* v___x_463_; lean_object* v_xs_x27_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_468_; 
v_v_462_ = lean_array_fget(v_rings_444_, v_ringId_441_);
v___x_463_ = lean_box(0);
v_xs_x27_464_ = lean_array_fset(v_rings_444_, v_ringId_441_, v___x_463_);
v___x_465_ = lean_apply_1(v_f_442_, v_v_462_);
v___x_466_ = lean_array_fset(v_xs_x27_464_, v_ringId_441_, v___x_465_);
if (v_isShared_461_ == 0)
{
lean_ctor_set(v___x_460_, 0, v___x_466_);
v___x_468_ = v___x_460_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_469_; 
v_reuseFailAlloc_469_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_469_, 0, v___x_466_);
lean_ctor_set(v_reuseFailAlloc_469_, 1, v_typeIdOf_445_);
lean_ctor_set(v_reuseFailAlloc_469_, 2, v_exprToRingId_446_);
lean_ctor_set(v_reuseFailAlloc_469_, 3, v_semirings_447_);
lean_ctor_set(v_reuseFailAlloc_469_, 4, v_stypeIdOf_448_);
lean_ctor_set(v_reuseFailAlloc_469_, 5, v_exprToSemiringId_449_);
lean_ctor_set(v_reuseFailAlloc_469_, 6, v_ncRings_450_);
lean_ctor_set(v_reuseFailAlloc_469_, 7, v_exprToNCRingId_451_);
lean_ctor_set(v_reuseFailAlloc_469_, 8, v_nctypeIdOf_452_);
lean_ctor_set(v_reuseFailAlloc_469_, 9, v_ncSemirings_453_);
lean_ctor_set(v_reuseFailAlloc_469_, 10, v_exprToNCSemiringId_454_);
lean_ctor_set(v_reuseFailAlloc_469_, 11, v_ncstypeIdOf_455_);
lean_ctor_set(v_reuseFailAlloc_469_, 12, v_steps_456_);
v___x_468_ = v_reuseFailAlloc_469_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
return v___x_468_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0___boxed(lean_object* v_ringId_484_, lean_object* v_f_485_, lean_object* v_s_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0(v_ringId_484_, v_f_485_, v_s_486_);
lean_dec(v_ringId_484_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(lean_object* v_f_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_489_, v_a_490_, v_a_491_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_, v_a_497_, v_a_498_, v_a_499_);
if (lean_obj_tag(v___x_501_) == 0)
{
lean_object* v_a_502_; lean_object* v_ringId_503_; lean_object* v___f_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_a_502_ = lean_ctor_get(v___x_501_, 0);
lean_inc(v_a_502_);
lean_dec_ref(v___x_501_);
v_ringId_503_ = lean_ctor_get(v_a_502_, 1);
lean_inc(v_ringId_503_);
lean_dec(v_a_502_);
v___f_504_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___lam__0___boxed), 3, 2);
lean_closure_set(v___f_504_, 0, v_ringId_503_);
lean_closure_set(v___f_504_, 1, v_f_488_);
v___x_505_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_506_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_505_, v___f_504_, v_a_490_, v_a_499_);
return v___x_506_;
}
else
{
lean_object* v_a_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_514_; 
lean_dec_ref(v_f_488_);
v_a_507_ = lean_ctor_get(v___x_501_, 0);
v_isSharedCheck_514_ = !lean_is_exclusive(v___x_501_);
if (v_isSharedCheck_514_ == 0)
{
v___x_509_ = v___x_501_;
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_a_507_);
lean_dec(v___x_501_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_514_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_510_ == 0)
{
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_a_507_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___boxed(lean_object* v_f_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_, lean_object* v_a_527_){
_start:
{
lean_object* v_res_528_; 
v_res_528_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(v_f_515_, v_a_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_);
lean_dec(v_a_526_);
lean_dec_ref(v_a_525_);
lean_dec(v_a_524_);
lean_dec_ref(v_a_523_);
lean_dec(v_a_522_);
lean_dec_ref(v_a_521_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
lean_dec(v_a_518_);
lean_dec(v_a_517_);
lean_dec(v_a_516_);
return v_res_528_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__0(void){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing___boxed), 13, 0);
return v___x_529_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1(void){
_start:
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_530_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__0);
v___x_531_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing___boxed), 12, 0);
v___x_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_531_);
lean_ctor_set(v___x_532_, 1, v___x_530_);
return v___x_532_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM(void){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM___closed__1);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0(lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_s_536_){
_start:
{
lean_object* v_rings_537_; lean_object* v_typeIdOf_538_; lean_object* v_exprToRingId_539_; lean_object* v_semirings_540_; lean_object* v_stypeIdOf_541_; lean_object* v_exprToSemiringId_542_; lean_object* v_ncRings_543_; lean_object* v_exprToNCRingId_544_; lean_object* v_nctypeIdOf_545_; lean_object* v_ncSemirings_546_; lean_object* v_exprToNCSemiringId_547_; lean_object* v_ncstypeIdOf_548_; lean_object* v_steps_549_; lean_object* v___x_550_; uint8_t v___x_551_; 
v_rings_537_ = lean_ctor_get(v_s_536_, 0);
v_typeIdOf_538_ = lean_ctor_get(v_s_536_, 1);
v_exprToRingId_539_ = lean_ctor_get(v_s_536_, 2);
v_semirings_540_ = lean_ctor_get(v_s_536_, 3);
v_stypeIdOf_541_ = lean_ctor_get(v_s_536_, 4);
v_exprToSemiringId_542_ = lean_ctor_get(v_s_536_, 5);
v_ncRings_543_ = lean_ctor_get(v_s_536_, 6);
v_exprToNCRingId_544_ = lean_ctor_get(v_s_536_, 7);
v_nctypeIdOf_545_ = lean_ctor_get(v_s_536_, 8);
v_ncSemirings_546_ = lean_ctor_get(v_s_536_, 9);
v_exprToNCSemiringId_547_ = lean_ctor_get(v_s_536_, 10);
v_ncstypeIdOf_548_ = lean_ctor_get(v_s_536_, 11);
v_steps_549_ = lean_ctor_get(v_s_536_, 12);
v___x_550_ = lean_array_get_size(v_semirings_540_);
v___x_551_ = lean_nat_dec_lt(v_a_534_, v___x_550_);
if (v___x_551_ == 0)
{
lean_dec_ref(v_a_535_);
return v_s_536_;
}
else
{
lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_575_; 
lean_inc(v_steps_549_);
lean_inc_ref(v_ncstypeIdOf_548_);
lean_inc_ref(v_exprToNCSemiringId_547_);
lean_inc_ref(v_ncSemirings_546_);
lean_inc_ref(v_nctypeIdOf_545_);
lean_inc_ref(v_exprToNCRingId_544_);
lean_inc_ref(v_ncRings_543_);
lean_inc_ref(v_exprToSemiringId_542_);
lean_inc_ref(v_stypeIdOf_541_);
lean_inc_ref(v_semirings_540_);
lean_inc_ref(v_exprToRingId_539_);
lean_inc_ref(v_typeIdOf_538_);
lean_inc_ref(v_rings_537_);
v_isSharedCheck_575_ = !lean_is_exclusive(v_s_536_);
if (v_isSharedCheck_575_ == 0)
{
lean_object* v_unused_576_; lean_object* v_unused_577_; lean_object* v_unused_578_; lean_object* v_unused_579_; lean_object* v_unused_580_; lean_object* v_unused_581_; lean_object* v_unused_582_; lean_object* v_unused_583_; lean_object* v_unused_584_; lean_object* v_unused_585_; lean_object* v_unused_586_; lean_object* v_unused_587_; lean_object* v_unused_588_; 
v_unused_576_ = lean_ctor_get(v_s_536_, 12);
lean_dec(v_unused_576_);
v_unused_577_ = lean_ctor_get(v_s_536_, 11);
lean_dec(v_unused_577_);
v_unused_578_ = lean_ctor_get(v_s_536_, 10);
lean_dec(v_unused_578_);
v_unused_579_ = lean_ctor_get(v_s_536_, 9);
lean_dec(v_unused_579_);
v_unused_580_ = lean_ctor_get(v_s_536_, 8);
lean_dec(v_unused_580_);
v_unused_581_ = lean_ctor_get(v_s_536_, 7);
lean_dec(v_unused_581_);
v_unused_582_ = lean_ctor_get(v_s_536_, 6);
lean_dec(v_unused_582_);
v_unused_583_ = lean_ctor_get(v_s_536_, 5);
lean_dec(v_unused_583_);
v_unused_584_ = lean_ctor_get(v_s_536_, 4);
lean_dec(v_unused_584_);
v_unused_585_ = lean_ctor_get(v_s_536_, 3);
lean_dec(v_unused_585_);
v_unused_586_ = lean_ctor_get(v_s_536_, 2);
lean_dec(v_unused_586_);
v_unused_587_ = lean_ctor_get(v_s_536_, 1);
lean_dec(v_unused_587_);
v_unused_588_ = lean_ctor_get(v_s_536_, 0);
lean_dec(v_unused_588_);
v___x_553_ = v_s_536_;
v_isShared_554_ = v_isSharedCheck_575_;
goto v_resetjp_552_;
}
else
{
lean_dec(v_s_536_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_575_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v_v_555_; lean_object* v_toSemiring_556_; lean_object* v_ringId_557_; lean_object* v_commSemiringInst_558_; lean_object* v_addRightCancelInst_x3f_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_573_; 
v_v_555_ = lean_array_fget(v_semirings_540_, v_a_534_);
v_toSemiring_556_ = lean_ctor_get(v_v_555_, 0);
v_ringId_557_ = lean_ctor_get(v_v_555_, 1);
v_commSemiringInst_558_ = lean_ctor_get(v_v_555_, 2);
v_addRightCancelInst_x3f_559_ = lean_ctor_get(v_v_555_, 3);
v_isSharedCheck_573_ = !lean_is_exclusive(v_v_555_);
if (v_isSharedCheck_573_ == 0)
{
lean_object* v_unused_574_; 
v_unused_574_ = lean_ctor_get(v_v_555_, 4);
lean_dec(v_unused_574_);
v___x_561_ = v_v_555_;
v_isShared_562_ = v_isSharedCheck_573_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_addRightCancelInst_x3f_559_);
lean_inc(v_commSemiringInst_558_);
lean_inc(v_ringId_557_);
lean_inc(v_toSemiring_556_);
lean_dec(v_v_555_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_573_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_563_; lean_object* v_xs_x27_564_; lean_object* v___x_565_; lean_object* v___x_567_; 
v___x_563_ = lean_box(0);
v_xs_x27_564_ = lean_array_fset(v_semirings_540_, v_a_534_, v___x_563_);
v___x_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_565_, 0, v_a_535_);
if (v_isShared_562_ == 0)
{
lean_ctor_set(v___x_561_, 4, v___x_565_);
v___x_567_ = v___x_561_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_toSemiring_556_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_ringId_557_);
lean_ctor_set(v_reuseFailAlloc_572_, 2, v_commSemiringInst_558_);
lean_ctor_set(v_reuseFailAlloc_572_, 3, v_addRightCancelInst_x3f_559_);
lean_ctor_set(v_reuseFailAlloc_572_, 4, v___x_565_);
v___x_567_ = v_reuseFailAlloc_572_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_568_ = lean_array_fset(v_xs_x27_564_, v_a_534_, v___x_567_);
if (v_isShared_554_ == 0)
{
lean_ctor_set(v___x_553_, 3, v___x_568_);
v___x_570_ = v___x_553_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v_rings_537_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v_typeIdOf_538_);
lean_ctor_set(v_reuseFailAlloc_571_, 2, v_exprToRingId_539_);
lean_ctor_set(v_reuseFailAlloc_571_, 3, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_571_, 4, v_stypeIdOf_541_);
lean_ctor_set(v_reuseFailAlloc_571_, 5, v_exprToSemiringId_542_);
lean_ctor_set(v_reuseFailAlloc_571_, 6, v_ncRings_543_);
lean_ctor_set(v_reuseFailAlloc_571_, 7, v_exprToNCRingId_544_);
lean_ctor_set(v_reuseFailAlloc_571_, 8, v_nctypeIdOf_545_);
lean_ctor_set(v_reuseFailAlloc_571_, 9, v_ncSemirings_546_);
lean_ctor_set(v_reuseFailAlloc_571_, 10, v_exprToNCSemiringId_547_);
lean_ctor_set(v_reuseFailAlloc_571_, 11, v_ncstypeIdOf_548_);
lean_ctor_set(v_reuseFailAlloc_571_, 12, v_steps_549_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0___boxed(lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_s_591_){
_start:
{
lean_object* v_res_592_; 
v_res_592_ = l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0(v_a_589_, v_a_590_, v_s_591_);
lean_dec(v_a_589_);
return v_res_592_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0(void){
_start:
{
lean_object* v___x_593_; 
v___x_593_ = lean_mk_string_unchecked("Lean", 4, 4);
return v___x_593_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1(void){
_start:
{
lean_object* v___x_594_; 
v___x_594_ = lean_mk_string_unchecked("Grind", 5, 5);
return v___x_594_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2(void){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = lean_mk_string_unchecked("Ring", 4, 4);
return v___x_595_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__3(void){
_start:
{
lean_object* v___x_596_; 
v___x_596_ = lean_mk_string_unchecked("OfSemiring", 10, 10);
return v___x_596_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__4(void){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = lean_mk_string_unchecked("toQ", 3, 3);
return v___x_597_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5(void){
_start:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_598_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__4);
v___x_599_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__3, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__3_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__3);
v___x_600_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2);
v___x_601_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1);
v___x_602_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0);
v___x_603_ = l_Lean_Name_mkStr5(v___x_602_, v___x_601_, v___x_600_, v___x_599_, v___x_598_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn(lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_){
_start:
{
lean_object* v___y_617_; lean_object* v___x_638_; 
v___x_638_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_660_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_660_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_660_ == 0)
{
v___x_641_ = v___x_638_;
v_isShared_642_ = v_isSharedCheck_660_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_638_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_660_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v_toQFn_x3f_643_; 
v_toQFn_x3f_643_ = lean_ctor_get(v_a_639_, 4);
if (lean_obj_tag(v_toQFn_x3f_643_) == 1)
{
lean_object* v_val_644_; lean_object* v___x_646_; 
lean_inc_ref(v_toQFn_x3f_643_);
lean_dec(v_a_639_);
v_val_644_ = lean_ctor_get(v_toQFn_x3f_643_, 0);
lean_inc(v_val_644_);
lean_dec_ref(v_toQFn_x3f_643_);
if (v_isShared_642_ == 0)
{
lean_ctor_set(v___x_641_, 0, v_val_644_);
v___x_646_ = v___x_641_;
goto v_reusejp_645_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v_val_644_);
v___x_646_ = v_reuseFailAlloc_647_;
goto v_reusejp_645_;
}
v_reusejp_645_:
{
return v___x_646_;
}
}
else
{
lean_object* v_toSemiring_648_; lean_object* v_type_649_; lean_object* v_u_650_; lean_object* v_semiringInst_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
lean_del_object(v___x_641_);
v_toSemiring_648_ = lean_ctor_get(v_a_639_, 0);
lean_inc_ref(v_toSemiring_648_);
lean_dec(v_a_639_);
v_type_649_ = lean_ctor_get(v_toSemiring_648_, 1);
lean_inc_ref(v_type_649_);
v_u_650_ = lean_ctor_get(v_toSemiring_648_, 2);
lean_inc(v_u_650_);
v_semiringInst_651_ = lean_ctor_get(v_toSemiring_648_, 3);
lean_inc_ref(v_semiringInst_651_);
lean_dec_ref(v_toSemiring_648_);
v___x_652_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__5);
v___x_653_ = lean_box(0);
v___x_654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_654_, 0, v_u_650_);
lean_ctor_set(v___x_654_, 1, v___x_653_);
v___x_655_ = l_Lean_mkConst(v___x_652_, v___x_654_);
v___x_656_ = l_Lean_mkAppB(v___x_655_, v_type_649_, v_semiringInst_651_);
v___x_657_ = l_Lean_Meta_Sym_canon(v___x_656_, v_a_609_, v_a_610_, v_a_611_, v_a_612_, v_a_613_, v_a_614_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; lean_object* v___x_659_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_a_658_);
lean_dec_ref(v___x_657_);
v___x_659_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_658_, v_a_610_, v_a_614_);
v___y_617_ = v___x_659_;
goto v___jp_616_;
}
else
{
v___y_617_ = v___x_657_;
goto v___jp_616_;
}
}
}
}
else
{
lean_object* v_a_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_668_; 
v_a_661_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_668_ == 0)
{
v___x_663_ = v___x_638_;
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_a_661_);
lean_dec(v___x_638_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_668_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v___x_666_; 
if (v_isShared_664_ == 0)
{
v___x_666_ = v___x_663_;
goto v_reusejp_665_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v_a_661_);
v___x_666_ = v_reuseFailAlloc_667_;
goto v_reusejp_665_;
}
v_reusejp_665_:
{
return v___x_666_;
}
}
}
v___jp_616_:
{
if (lean_obj_tag(v___y_617_) == 0)
{
lean_object* v_a_618_; lean_object* v___f_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v_a_618_ = lean_ctor_get(v___y_617_, 0);
lean_inc_n(v_a_618_, 2);
lean_dec_ref(v___y_617_);
lean_inc(v_a_604_);
v___f_619_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getToQFn___lam__0___boxed), 3, 2);
lean_closure_set(v___f_619_, 0, v_a_604_);
lean_closure_set(v___f_619_, 1, v_a_618_);
v___x_620_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_621_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_620_, v___f_619_, v_a_605_, v_a_614_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_628_; 
v_isSharedCheck_628_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_628_ == 0)
{
lean_object* v_unused_629_; 
v_unused_629_ = lean_ctor_get(v___x_621_, 0);
lean_dec(v_unused_629_);
v___x_623_ = v___x_621_;
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
else
{
lean_dec(v___x_621_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_628_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_626_; 
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 0, v_a_618_);
v___x_626_ = v___x_623_;
goto v_reusejp_625_;
}
else
{
lean_object* v_reuseFailAlloc_627_; 
v_reuseFailAlloc_627_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_627_, 0, v_a_618_);
v___x_626_ = v_reuseFailAlloc_627_;
goto v_reusejp_625_;
}
v_reusejp_625_:
{
return v___x_626_;
}
}
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
lean_dec(v_a_618_);
v_a_630_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_621_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_621_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
else
{
return v___y_617_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getToQFn___boxed(lean_object* v_a_669_, lean_object* v_a_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_){
_start:
{
lean_object* v_res_681_; 
v_res_681_ = l_Lean_Meta_Grind_Arith_CommRing_getToQFn(v_a_669_, v_a_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_, v_a_679_);
lean_dec(v_a_679_);
lean_dec_ref(v_a_678_);
lean_dec(v_a_677_);
lean_dec_ref(v_a_676_);
lean_dec(v_a_675_);
lean_dec_ref(v_a_674_);
lean_dec(v_a_673_);
lean_dec_ref(v_a_672_);
lean_dec(v_a_671_);
lean_dec(v_a_670_);
lean_dec(v_a_669_);
return v_res_681_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = lean_mk_string_unchecked("Add", 3, 3);
return v___x_682_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_683_; lean_object* v___x_684_; 
v___x_683_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__0);
v___x_684_ = l_Lean_Name_mkStr1(v___x_683_);
return v___x_684_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__2(void){
_start:
{
lean_object* v___x_685_; 
v___x_685_ = lean_mk_string_unchecked("AddRightCancel", 14, 14);
return v___x_685_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3(void){
_start:
{
lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_686_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__2);
v___x_687_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1);
v___x_688_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0);
v___x_689_ = l_Lean_Name_mkStr3(v___x_688_, v___x_687_, v___x_686_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg(lean_object* v_u_690_, lean_object* v_type_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v_add_701_; lean_object* v___x_702_; 
v___x_697_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__1);
v___x_698_ = lean_box(0);
v___x_699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_699_, 0, v_u_690_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
lean_inc_ref(v___x_699_);
v___x_700_ = l_Lean_mkConst(v___x_697_, v___x_699_);
lean_inc_ref(v_type_691_);
v_add_701_ = l_Lean_Expr_app___override(v___x_700_, v_type_691_);
v___x_702_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v_add_701_, v_a_692_, v_a_693_, v_a_694_, v_a_695_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_716_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_716_ == 0)
{
v___x_705_ = v___x_702_;
v_isShared_706_ = v_isSharedCheck_716_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_a_703_);
lean_dec(v___x_702_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_716_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
if (lean_obj_tag(v_a_703_) == 1)
{
lean_object* v_val_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
lean_del_object(v___x_705_);
v_val_707_ = lean_ctor_get(v_a_703_, 0);
lean_inc(v_val_707_);
lean_dec_ref(v_a_703_);
v___x_708_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___closed__3);
v___x_709_ = l_Lean_mkConst(v___x_708_, v___x_699_);
v___x_710_ = l_Lean_mkAppB(v___x_709_, v_type_691_, v_val_707_);
v___x_711_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_710_, v_a_692_, v_a_693_, v_a_694_, v_a_695_);
return v___x_711_;
}
else
{
lean_object* v___x_712_; lean_object* v___x_714_; 
lean_dec(v_a_703_);
lean_dec_ref(v___x_699_);
lean_dec_ref(v_type_691_);
v___x_712_ = lean_box(0);
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 0, v___x_712_);
v___x_714_ = v___x_705_;
goto v_reusejp_713_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v___x_712_);
v___x_714_ = v_reuseFailAlloc_715_;
goto v_reusejp_713_;
}
v_reusejp_713_:
{
return v___x_714_;
}
}
}
}
else
{
lean_dec_ref(v___x_699_);
lean_dec_ref(v_type_691_);
return v___x_702_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg___boxed(lean_object* v_u_717_, lean_object* v_type_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg(v_u_717_, v_type_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_);
lean_dec(v_a_722_);
lean_dec_ref(v_a_721_);
lean_dec(v_a_720_);
lean_dec_ref(v_a_719_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f(lean_object* v_u_725_, lean_object* v_type_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg(v_u_725_, v_type_726_, v_a_733_, v_a_734_, v_a_735_, v_a_736_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___boxed(lean_object* v_u_739_, lean_object* v_type_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_){
_start:
{
lean_object* v_res_752_; 
v_res_752_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f(v_u_739_, v_type_740_, v_a_741_, v_a_742_, v_a_743_, v_a_744_, v_a_745_, v_a_746_, v_a_747_, v_a_748_, v_a_749_, v_a_750_);
lean_dec(v_a_750_);
lean_dec_ref(v_a_749_);
lean_dec(v_a_748_);
lean_dec_ref(v_a_747_);
lean_dec(v_a_746_);
lean_dec_ref(v_a_745_);
lean_dec(v_a_744_);
lean_dec_ref(v_a_743_);
lean_dec(v_a_742_);
lean_dec(v_a_741_);
return v_res_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0(lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_s_755_){
_start:
{
lean_object* v_rings_756_; lean_object* v_typeIdOf_757_; lean_object* v_exprToRingId_758_; lean_object* v_semirings_759_; lean_object* v_stypeIdOf_760_; lean_object* v_exprToSemiringId_761_; lean_object* v_ncRings_762_; lean_object* v_exprToNCRingId_763_; lean_object* v_nctypeIdOf_764_; lean_object* v_ncSemirings_765_; lean_object* v_exprToNCSemiringId_766_; lean_object* v_ncstypeIdOf_767_; lean_object* v_steps_768_; lean_object* v___x_769_; uint8_t v___x_770_; 
v_rings_756_ = lean_ctor_get(v_s_755_, 0);
v_typeIdOf_757_ = lean_ctor_get(v_s_755_, 1);
v_exprToRingId_758_ = lean_ctor_get(v_s_755_, 2);
v_semirings_759_ = lean_ctor_get(v_s_755_, 3);
v_stypeIdOf_760_ = lean_ctor_get(v_s_755_, 4);
v_exprToSemiringId_761_ = lean_ctor_get(v_s_755_, 5);
v_ncRings_762_ = lean_ctor_get(v_s_755_, 6);
v_exprToNCRingId_763_ = lean_ctor_get(v_s_755_, 7);
v_nctypeIdOf_764_ = lean_ctor_get(v_s_755_, 8);
v_ncSemirings_765_ = lean_ctor_get(v_s_755_, 9);
v_exprToNCSemiringId_766_ = lean_ctor_get(v_s_755_, 10);
v_ncstypeIdOf_767_ = lean_ctor_get(v_s_755_, 11);
v_steps_768_ = lean_ctor_get(v_s_755_, 12);
v___x_769_ = lean_array_get_size(v_semirings_759_);
v___x_770_ = lean_nat_dec_lt(v_a_753_, v___x_769_);
if (v___x_770_ == 0)
{
lean_dec(v_a_754_);
return v_s_755_;
}
else
{
lean_object* v___x_772_; uint8_t v_isShared_773_; uint8_t v_isSharedCheck_794_; 
lean_inc(v_steps_768_);
lean_inc_ref(v_ncstypeIdOf_767_);
lean_inc_ref(v_exprToNCSemiringId_766_);
lean_inc_ref(v_ncSemirings_765_);
lean_inc_ref(v_nctypeIdOf_764_);
lean_inc_ref(v_exprToNCRingId_763_);
lean_inc_ref(v_ncRings_762_);
lean_inc_ref(v_exprToSemiringId_761_);
lean_inc_ref(v_stypeIdOf_760_);
lean_inc_ref(v_semirings_759_);
lean_inc_ref(v_exprToRingId_758_);
lean_inc_ref(v_typeIdOf_757_);
lean_inc_ref(v_rings_756_);
v_isSharedCheck_794_ = !lean_is_exclusive(v_s_755_);
if (v_isSharedCheck_794_ == 0)
{
lean_object* v_unused_795_; lean_object* v_unused_796_; lean_object* v_unused_797_; lean_object* v_unused_798_; lean_object* v_unused_799_; lean_object* v_unused_800_; lean_object* v_unused_801_; lean_object* v_unused_802_; lean_object* v_unused_803_; lean_object* v_unused_804_; lean_object* v_unused_805_; lean_object* v_unused_806_; lean_object* v_unused_807_; 
v_unused_795_ = lean_ctor_get(v_s_755_, 12);
lean_dec(v_unused_795_);
v_unused_796_ = lean_ctor_get(v_s_755_, 11);
lean_dec(v_unused_796_);
v_unused_797_ = lean_ctor_get(v_s_755_, 10);
lean_dec(v_unused_797_);
v_unused_798_ = lean_ctor_get(v_s_755_, 9);
lean_dec(v_unused_798_);
v_unused_799_ = lean_ctor_get(v_s_755_, 8);
lean_dec(v_unused_799_);
v_unused_800_ = lean_ctor_get(v_s_755_, 7);
lean_dec(v_unused_800_);
v_unused_801_ = lean_ctor_get(v_s_755_, 6);
lean_dec(v_unused_801_);
v_unused_802_ = lean_ctor_get(v_s_755_, 5);
lean_dec(v_unused_802_);
v_unused_803_ = lean_ctor_get(v_s_755_, 4);
lean_dec(v_unused_803_);
v_unused_804_ = lean_ctor_get(v_s_755_, 3);
lean_dec(v_unused_804_);
v_unused_805_ = lean_ctor_get(v_s_755_, 2);
lean_dec(v_unused_805_);
v_unused_806_ = lean_ctor_get(v_s_755_, 1);
lean_dec(v_unused_806_);
v_unused_807_ = lean_ctor_get(v_s_755_, 0);
lean_dec(v_unused_807_);
v___x_772_ = v_s_755_;
v_isShared_773_ = v_isSharedCheck_794_;
goto v_resetjp_771_;
}
else
{
lean_dec(v_s_755_);
v___x_772_ = lean_box(0);
v_isShared_773_ = v_isSharedCheck_794_;
goto v_resetjp_771_;
}
v_resetjp_771_:
{
lean_object* v_v_774_; lean_object* v_toSemiring_775_; lean_object* v_ringId_776_; lean_object* v_commSemiringInst_777_; lean_object* v_toQFn_x3f_778_; lean_object* v___x_780_; uint8_t v_isShared_781_; uint8_t v_isSharedCheck_792_; 
v_v_774_ = lean_array_fget(v_semirings_759_, v_a_753_);
v_toSemiring_775_ = lean_ctor_get(v_v_774_, 0);
v_ringId_776_ = lean_ctor_get(v_v_774_, 1);
v_commSemiringInst_777_ = lean_ctor_get(v_v_774_, 2);
v_toQFn_x3f_778_ = lean_ctor_get(v_v_774_, 4);
v_isSharedCheck_792_ = !lean_is_exclusive(v_v_774_);
if (v_isSharedCheck_792_ == 0)
{
lean_object* v_unused_793_; 
v_unused_793_ = lean_ctor_get(v_v_774_, 3);
lean_dec(v_unused_793_);
v___x_780_ = v_v_774_;
v_isShared_781_ = v_isSharedCheck_792_;
goto v_resetjp_779_;
}
else
{
lean_inc(v_toQFn_x3f_778_);
lean_inc(v_commSemiringInst_777_);
lean_inc(v_ringId_776_);
lean_inc(v_toSemiring_775_);
lean_dec(v_v_774_);
v___x_780_ = lean_box(0);
v_isShared_781_ = v_isSharedCheck_792_;
goto v_resetjp_779_;
}
v_resetjp_779_:
{
lean_object* v___x_782_; lean_object* v_xs_x27_783_; lean_object* v___x_784_; lean_object* v___x_786_; 
v___x_782_ = lean_box(0);
v_xs_x27_783_ = lean_array_fset(v_semirings_759_, v_a_753_, v___x_782_);
v___x_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_784_, 0, v_a_754_);
if (v_isShared_781_ == 0)
{
lean_ctor_set(v___x_780_, 3, v___x_784_);
v___x_786_ = v___x_780_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_791_; 
v_reuseFailAlloc_791_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_791_, 0, v_toSemiring_775_);
lean_ctor_set(v_reuseFailAlloc_791_, 1, v_ringId_776_);
lean_ctor_set(v_reuseFailAlloc_791_, 2, v_commSemiringInst_777_);
lean_ctor_set(v_reuseFailAlloc_791_, 3, v___x_784_);
lean_ctor_set(v_reuseFailAlloc_791_, 4, v_toQFn_x3f_778_);
v___x_786_ = v_reuseFailAlloc_791_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_787_; lean_object* v___x_789_; 
v___x_787_ = lean_array_fset(v_xs_x27_783_, v_a_753_, v___x_786_);
if (v_isShared_773_ == 0)
{
lean_ctor_set(v___x_772_, 3, v___x_787_);
v___x_789_ = v___x_772_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_rings_756_);
lean_ctor_set(v_reuseFailAlloc_790_, 1, v_typeIdOf_757_);
lean_ctor_set(v_reuseFailAlloc_790_, 2, v_exprToRingId_758_);
lean_ctor_set(v_reuseFailAlloc_790_, 3, v___x_787_);
lean_ctor_set(v_reuseFailAlloc_790_, 4, v_stypeIdOf_760_);
lean_ctor_set(v_reuseFailAlloc_790_, 5, v_exprToSemiringId_761_);
lean_ctor_set(v_reuseFailAlloc_790_, 6, v_ncRings_762_);
lean_ctor_set(v_reuseFailAlloc_790_, 7, v_exprToNCRingId_763_);
lean_ctor_set(v_reuseFailAlloc_790_, 8, v_nctypeIdOf_764_);
lean_ctor_set(v_reuseFailAlloc_790_, 9, v_ncSemirings_765_);
lean_ctor_set(v_reuseFailAlloc_790_, 10, v_exprToNCSemiringId_766_);
lean_ctor_set(v_reuseFailAlloc_790_, 11, v_ncstypeIdOf_767_);
lean_ctor_set(v_reuseFailAlloc_790_, 12, v_steps_768_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0___boxed(lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_s_810_){
_start:
{
lean_object* v_res_811_; 
v_res_811_ = l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0(v_a_808_, v_a_809_, v_s_810_);
lean_dec(v_a_808_);
return v_res_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f(lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_812_, v_a_813_, v_a_814_, v_a_815_, v_a_816_, v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_858_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_858_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_858_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_858_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v_addRightCancelInst_x3f_829_; 
v_addRightCancelInst_x3f_829_ = lean_ctor_get(v_a_825_, 3);
if (lean_obj_tag(v_addRightCancelInst_x3f_829_) == 1)
{
lean_object* v_val_830_; lean_object* v___x_832_; 
lean_inc_ref(v_addRightCancelInst_x3f_829_);
lean_dec(v_a_825_);
v_val_830_ = lean_ctor_get(v_addRightCancelInst_x3f_829_, 0);
lean_inc(v_val_830_);
lean_dec_ref(v_addRightCancelInst_x3f_829_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v_val_830_);
v___x_832_ = v___x_827_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_val_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
else
{
lean_object* v_toSemiring_834_; lean_object* v_type_835_; lean_object* v_u_836_; lean_object* v___x_837_; 
lean_del_object(v___x_827_);
v_toSemiring_834_ = lean_ctor_get(v_a_825_, 0);
lean_inc_ref(v_toSemiring_834_);
lean_dec(v_a_825_);
v_type_835_ = lean_ctor_get(v_toSemiring_834_, 1);
lean_inc_ref(v_type_835_);
v_u_836_ = lean_ctor_get(v_toSemiring_834_, 2);
lean_inc(v_u_836_);
lean_dec_ref(v_toSemiring_834_);
v___x_837_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Meta_Grind_Arith_CommRing_mkAddRightCancelInst_x3f___redArg(v_u_836_, v_type_835_, v_a_819_, v_a_820_, v_a_821_, v_a_822_);
if (lean_obj_tag(v___x_837_) == 0)
{
lean_object* v_a_838_; lean_object* v___f_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v_a_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc_n(v_a_838_, 2);
lean_dec_ref(v___x_837_);
lean_inc(v_a_812_);
v___f_839_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___lam__0___boxed), 3, 2);
lean_closure_set(v___f_839_, 0, v_a_812_);
lean_closure_set(v___f_839_, 1, v_a_838_);
v___x_840_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_841_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_840_, v___f_839_, v_a_813_, v_a_822_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v___x_843_; uint8_t v_isShared_844_; uint8_t v_isSharedCheck_848_; 
v_isSharedCheck_848_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_848_ == 0)
{
lean_object* v_unused_849_; 
v_unused_849_ = lean_ctor_get(v___x_841_, 0);
lean_dec(v_unused_849_);
v___x_843_ = v___x_841_;
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
else
{
lean_dec(v___x_841_);
v___x_843_ = lean_box(0);
v_isShared_844_ = v_isSharedCheck_848_;
goto v_resetjp_842_;
}
v_resetjp_842_:
{
lean_object* v___x_846_; 
if (v_isShared_844_ == 0)
{
lean_ctor_set(v___x_843_, 0, v_a_838_);
v___x_846_ = v___x_843_;
goto v_reusejp_845_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v_a_838_);
v___x_846_ = v_reuseFailAlloc_847_;
goto v_reusejp_845_;
}
v_reusejp_845_:
{
return v___x_846_;
}
}
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
lean_dec(v_a_838_);
v_a_850_ = lean_ctor_get(v___x_841_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_841_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_841_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
else
{
return v___x_837_;
}
}
}
}
else
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
v_a_859_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_824_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_824_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f___boxed(lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_, lean_object* v_a_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_, lean_object* v_a_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lean_Meta_Grind_Arith_CommRing_getAddRightCancelInst_x3f(v_a_867_, v_a_868_, v_a_869_, v_a_870_, v_a_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_, v_a_877_);
lean_dec(v_a_877_);
lean_dec_ref(v_a_876_);
lean_dec(v_a_875_);
lean_dec_ref(v_a_874_);
lean_dec(v_a_873_);
lean_dec_ref(v_a_872_);
lean_dec(v_a_871_);
lean_dec_ref(v_a_870_);
lean_dec(v_a_869_);
lean_dec(v_a_868_);
lean_dec(v_a_867_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__0(lean_object* v_addFn_880_, lean_object* v_s_881_){
_start:
{
lean_object* v_id_882_; lean_object* v_type_883_; lean_object* v_u_884_; lean_object* v_semiringInst_885_; lean_object* v_mulFn_x3f_886_; lean_object* v_powFn_x3f_887_; lean_object* v_natCastFn_x3f_888_; lean_object* v_denote_889_; lean_object* v_vars_890_; lean_object* v_varMap_891_; lean_object* v___x_893_; uint8_t v_isShared_894_; uint8_t v_isSharedCheck_899_; 
v_id_882_ = lean_ctor_get(v_s_881_, 0);
v_type_883_ = lean_ctor_get(v_s_881_, 1);
v_u_884_ = lean_ctor_get(v_s_881_, 2);
v_semiringInst_885_ = lean_ctor_get(v_s_881_, 3);
v_mulFn_x3f_886_ = lean_ctor_get(v_s_881_, 5);
v_powFn_x3f_887_ = lean_ctor_get(v_s_881_, 6);
v_natCastFn_x3f_888_ = lean_ctor_get(v_s_881_, 7);
v_denote_889_ = lean_ctor_get(v_s_881_, 8);
v_vars_890_ = lean_ctor_get(v_s_881_, 9);
v_varMap_891_ = lean_ctor_get(v_s_881_, 10);
v_isSharedCheck_899_ = !lean_is_exclusive(v_s_881_);
if (v_isSharedCheck_899_ == 0)
{
lean_object* v_unused_900_; 
v_unused_900_ = lean_ctor_get(v_s_881_, 4);
lean_dec(v_unused_900_);
v___x_893_ = v_s_881_;
v_isShared_894_ = v_isSharedCheck_899_;
goto v_resetjp_892_;
}
else
{
lean_inc(v_varMap_891_);
lean_inc(v_vars_890_);
lean_inc(v_denote_889_);
lean_inc(v_natCastFn_x3f_888_);
lean_inc(v_powFn_x3f_887_);
lean_inc(v_mulFn_x3f_886_);
lean_inc(v_semiringInst_885_);
lean_inc(v_u_884_);
lean_inc(v_type_883_);
lean_inc(v_id_882_);
lean_dec(v_s_881_);
v___x_893_ = lean_box(0);
v_isShared_894_ = v_isSharedCheck_899_;
goto v_resetjp_892_;
}
v_resetjp_892_:
{
lean_object* v___x_895_; lean_object* v___x_897_; 
v___x_895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_895_, 0, v_addFn_880_);
if (v_isShared_894_ == 0)
{
lean_ctor_set(v___x_893_, 4, v___x_895_);
v___x_897_ = v___x_893_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_id_882_);
lean_ctor_set(v_reuseFailAlloc_898_, 1, v_type_883_);
lean_ctor_set(v_reuseFailAlloc_898_, 2, v_u_884_);
lean_ctor_set(v_reuseFailAlloc_898_, 3, v_semiringInst_885_);
lean_ctor_set(v_reuseFailAlloc_898_, 4, v___x_895_);
lean_ctor_set(v_reuseFailAlloc_898_, 5, v_mulFn_x3f_886_);
lean_ctor_set(v_reuseFailAlloc_898_, 6, v_powFn_x3f_887_);
lean_ctor_set(v_reuseFailAlloc_898_, 7, v_natCastFn_x3f_888_);
lean_ctor_set(v_reuseFailAlloc_898_, 8, v_denote_889_);
lean_ctor_set(v_reuseFailAlloc_898_, 9, v_vars_890_);
lean_ctor_set(v_reuseFailAlloc_898_, 10, v_varMap_891_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__1(lean_object* v_toPure_901_, lean_object* v_addFn_902_, lean_object* v_____r_903_){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = lean_apply_2(v_toPure_901_, lean_box(0), v_addFn_902_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__2(lean_object* v_toPure_905_, lean_object* v_modifySemiring_906_, lean_object* v_toBind_907_, lean_object* v_addFn_908_){
_start:
{
lean_object* v___f_909_; lean_object* v___f_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
lean_inc_ref(v_addFn_908_);
v___f_909_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_909_, 0, v_addFn_908_);
v___f_910_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_910_, 0, v_toPure_905_);
lean_closure_set(v___f_910_, 1, v_addFn_908_);
v___x_911_ = lean_apply_1(v_modifySemiring_906_, v___f_909_);
v___x_912_ = lean_apply_4(v_toBind_907_, lean_box(0), lean_box(0), v___x_911_, v___f_910_);
return v___x_912_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_913_; 
v___x_913_ = lean_mk_string_unchecked("instHAdd", 8, 8);
return v___x_913_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_914_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__0);
v___x_915_ = l_Lean_Name_mkStr1(v___x_914_);
return v___x_915_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2(void){
_start:
{
lean_object* v___x_916_; 
v___x_916_ = lean_mk_string_unchecked("Semiring", 8, 8);
return v___x_916_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = lean_mk_string_unchecked("toAdd", 5, 5);
return v___x_917_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_918_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__3, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__3);
v___x_919_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2);
v___x_920_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1);
v___x_921_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0);
v___x_922_ = l_Lean_Name_mkStr4(v___x_921_, v___x_920_, v___x_919_, v___x_918_);
return v___x_922_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5(void){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = lean_mk_string_unchecked("HAdd", 4, 4);
return v___x_923_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; 
v___x_924_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5);
v___x_925_ = l_Lean_Name_mkStr1(v___x_924_);
return v___x_925_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__7(void){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = lean_mk_string_unchecked("hAdd", 4, 4);
return v___x_926_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_927_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__7, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__7_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__7);
v___x_928_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__5);
v___x_929_ = l_Lean_Name_mkStr2(v___x_928_, v___x_927_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3(lean_object* v_toPure_930_, lean_object* v_inst_931_, lean_object* v_inst_932_, lean_object* v_inst_933_, lean_object* v_inst_934_, lean_object* v_toBind_935_, lean_object* v___f_936_, lean_object* v_s_937_){
_start:
{
lean_object* v_addFn_x3f_938_; 
v_addFn_x3f_938_ = lean_ctor_get(v_s_937_, 4);
if (lean_obj_tag(v_addFn_x3f_938_) == 1)
{
lean_object* v_val_939_; lean_object* v___x_940_; 
lean_inc_ref(v_addFn_x3f_938_);
lean_dec_ref(v_s_937_);
lean_dec(v___f_936_);
lean_dec(v_toBind_935_);
lean_dec_ref(v_inst_934_);
lean_dec_ref(v_inst_933_);
lean_dec_ref(v_inst_932_);
lean_dec(v_inst_931_);
v_val_939_ = lean_ctor_get(v_addFn_x3f_938_, 0);
lean_inc(v_val_939_);
lean_dec_ref(v_addFn_x3f_938_);
v___x_940_ = lean_apply_2(v_toPure_930_, lean_box(0), v_val_939_);
return v___x_940_;
}
else
{
lean_object* v_type_941_; lean_object* v_u_942_; lean_object* v_semiringInst_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v_expectedInst_951_; lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; 
lean_dec(v_toPure_930_);
v_type_941_ = lean_ctor_get(v_s_937_, 1);
lean_inc_ref_n(v_type_941_, 3);
v_u_942_ = lean_ctor_get(v_s_937_, 2);
lean_inc_n(v_u_942_, 2);
v_semiringInst_943_ = lean_ctor_get(v_s_937_, 3);
lean_inc_ref(v_semiringInst_943_);
lean_dec_ref(v_s_937_);
v___x_944_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1);
v___x_945_ = lean_box(0);
v___x_946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_946_, 0, v_u_942_);
lean_ctor_set(v___x_946_, 1, v___x_945_);
lean_inc_ref(v___x_946_);
v___x_947_ = l_Lean_mkConst(v___x_944_, v___x_946_);
v___x_948_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4);
v___x_949_ = l_Lean_mkConst(v___x_948_, v___x_946_);
v___x_950_ = l_Lean_mkAppB(v___x_949_, v_type_941_, v_semiringInst_943_);
v_expectedInst_951_ = l_Lean_mkAppB(v___x_947_, v_type_941_, v___x_950_);
v___x_952_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6);
v___x_953_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8);
v___x_954_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___redArg(v_inst_931_, v_inst_932_, v_inst_933_, v_inst_934_, v_type_941_, v_u_942_, v___x_952_, v___x_953_, v_expectedInst_951_);
v___x_955_ = lean_apply_4(v_toBind_935_, lean_box(0), lean_box(0), v___x_954_, v___f_936_);
return v___x_955_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg(lean_object* v_inst_956_, lean_object* v_inst_957_, lean_object* v_inst_958_, lean_object* v_inst_959_, lean_object* v_inst_960_){
_start:
{
lean_object* v_toApplicative_961_; lean_object* v_toBind_962_; lean_object* v_getSemiring_963_; lean_object* v_modifySemiring_964_; lean_object* v_toPure_965_; lean_object* v___f_966_; lean_object* v___f_967_; lean_object* v___x_968_; 
v_toApplicative_961_ = lean_ctor_get(v_inst_958_, 0);
v_toBind_962_ = lean_ctor_get(v_inst_958_, 1);
lean_inc_n(v_toBind_962_, 3);
v_getSemiring_963_ = lean_ctor_get(v_inst_960_, 0);
lean_inc(v_getSemiring_963_);
v_modifySemiring_964_ = lean_ctor_get(v_inst_960_, 1);
lean_inc(v_modifySemiring_964_);
lean_dec_ref(v_inst_960_);
v_toPure_965_ = lean_ctor_get(v_toApplicative_961_, 1);
lean_inc_n(v_toPure_965_, 2);
v___f_966_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_966_, 0, v_toPure_965_);
lean_closure_set(v___f_966_, 1, v_modifySemiring_964_);
lean_closure_set(v___f_966_, 2, v_toBind_962_);
v___f_967_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3), 8, 7);
lean_closure_set(v___f_967_, 0, v_toPure_965_);
lean_closure_set(v___f_967_, 1, v_inst_956_);
lean_closure_set(v___f_967_, 2, v_inst_957_);
lean_closure_set(v___f_967_, 3, v_inst_958_);
lean_closure_set(v___f_967_, 4, v_inst_959_);
lean_closure_set(v___f_967_, 5, v_toBind_962_);
lean_closure_set(v___f_967_, 6, v___f_966_);
v___x_968_ = lean_apply_4(v_toBind_962_, lean_box(0), lean_box(0), v_getSemiring_963_, v___f_967_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27(lean_object* v_m_969_, lean_object* v_inst_970_, lean_object* v_inst_971_, lean_object* v_inst_972_, lean_object* v_inst_973_, lean_object* v_inst_974_){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg(v_inst_970_, v_inst_971_, v_inst_972_, v_inst_973_, v_inst_974_);
return v___x_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__0(lean_object* v_mulFn_976_, lean_object* v_s_977_){
_start:
{
lean_object* v_id_978_; lean_object* v_type_979_; lean_object* v_u_980_; lean_object* v_semiringInst_981_; lean_object* v_addFn_x3f_982_; lean_object* v_powFn_x3f_983_; lean_object* v_natCastFn_x3f_984_; lean_object* v_denote_985_; lean_object* v_vars_986_; lean_object* v_varMap_987_; lean_object* v___x_989_; uint8_t v_isShared_990_; uint8_t v_isSharedCheck_995_; 
v_id_978_ = lean_ctor_get(v_s_977_, 0);
v_type_979_ = lean_ctor_get(v_s_977_, 1);
v_u_980_ = lean_ctor_get(v_s_977_, 2);
v_semiringInst_981_ = lean_ctor_get(v_s_977_, 3);
v_addFn_x3f_982_ = lean_ctor_get(v_s_977_, 4);
v_powFn_x3f_983_ = lean_ctor_get(v_s_977_, 6);
v_natCastFn_x3f_984_ = lean_ctor_get(v_s_977_, 7);
v_denote_985_ = lean_ctor_get(v_s_977_, 8);
v_vars_986_ = lean_ctor_get(v_s_977_, 9);
v_varMap_987_ = lean_ctor_get(v_s_977_, 10);
v_isSharedCheck_995_ = !lean_is_exclusive(v_s_977_);
if (v_isSharedCheck_995_ == 0)
{
lean_object* v_unused_996_; 
v_unused_996_ = lean_ctor_get(v_s_977_, 5);
lean_dec(v_unused_996_);
v___x_989_ = v_s_977_;
v_isShared_990_ = v_isSharedCheck_995_;
goto v_resetjp_988_;
}
else
{
lean_inc(v_varMap_987_);
lean_inc(v_vars_986_);
lean_inc(v_denote_985_);
lean_inc(v_natCastFn_x3f_984_);
lean_inc(v_powFn_x3f_983_);
lean_inc(v_addFn_x3f_982_);
lean_inc(v_semiringInst_981_);
lean_inc(v_u_980_);
lean_inc(v_type_979_);
lean_inc(v_id_978_);
lean_dec(v_s_977_);
v___x_989_ = lean_box(0);
v_isShared_990_ = v_isSharedCheck_995_;
goto v_resetjp_988_;
}
v_resetjp_988_:
{
lean_object* v___x_991_; lean_object* v___x_993_; 
v___x_991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_991_, 0, v_mulFn_976_);
if (v_isShared_990_ == 0)
{
lean_ctor_set(v___x_989_, 5, v___x_991_);
v___x_993_ = v___x_989_;
goto v_reusejp_992_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v_id_978_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v_type_979_);
lean_ctor_set(v_reuseFailAlloc_994_, 2, v_u_980_);
lean_ctor_set(v_reuseFailAlloc_994_, 3, v_semiringInst_981_);
lean_ctor_set(v_reuseFailAlloc_994_, 4, v_addFn_x3f_982_);
lean_ctor_set(v_reuseFailAlloc_994_, 5, v___x_991_);
lean_ctor_set(v_reuseFailAlloc_994_, 6, v_powFn_x3f_983_);
lean_ctor_set(v_reuseFailAlloc_994_, 7, v_natCastFn_x3f_984_);
lean_ctor_set(v_reuseFailAlloc_994_, 8, v_denote_985_);
lean_ctor_set(v_reuseFailAlloc_994_, 9, v_vars_986_);
lean_ctor_set(v_reuseFailAlloc_994_, 10, v_varMap_987_);
v___x_993_ = v_reuseFailAlloc_994_;
goto v_reusejp_992_;
}
v_reusejp_992_:
{
return v___x_993_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__1(lean_object* v_toPure_997_, lean_object* v_mulFn_998_, lean_object* v_____r_999_){
_start:
{
lean_object* v___x_1000_; 
v___x_1000_ = lean_apply_2(v_toPure_997_, lean_box(0), v_mulFn_998_);
return v___x_1000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__2(lean_object* v_toPure_1001_, lean_object* v_modifySemiring_1002_, lean_object* v_toBind_1003_, lean_object* v_mulFn_1004_){
_start:
{
lean_object* v___f_1005_; lean_object* v___f_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_inc_ref(v_mulFn_1004_);
v___f_1005_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1005_, 0, v_mulFn_1004_);
v___f_1006_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1006_, 0, v_toPure_1001_);
lean_closure_set(v___f_1006_, 1, v_mulFn_1004_);
v___x_1007_ = lean_apply_1(v_modifySemiring_1002_, v___f_1005_);
v___x_1008_ = lean_apply_4(v_toBind_1003_, lean_box(0), lean_box(0), v___x_1007_, v___f_1006_);
return v___x_1008_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__0(void){
_start:
{
lean_object* v___x_1009_; 
v___x_1009_ = lean_mk_string_unchecked("instHMul", 8, 8);
return v___x_1009_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__0);
v___x_1011_ = l_Lean_Name_mkStr1(v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__2(void){
_start:
{
lean_object* v___x_1012_; 
v___x_1012_ = lean_mk_string_unchecked("toMul", 5, 5);
return v___x_1012_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1013_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__2);
v___x_1014_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2);
v___x_1015_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1);
v___x_1016_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0);
v___x_1017_ = l_Lean_Name_mkStr4(v___x_1016_, v___x_1015_, v___x_1014_, v___x_1013_);
return v___x_1017_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4(void){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = lean_mk_string_unchecked("HMul", 4, 4);
return v___x_1018_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4);
v___x_1020_ = l_Lean_Name_mkStr1(v___x_1019_);
return v___x_1020_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__6(void){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = lean_mk_string_unchecked("hMul", 4, 4);
return v___x_1021_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1022_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__6);
v___x_1023_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__4);
v___x_1024_ = l_Lean_Name_mkStr2(v___x_1023_, v___x_1022_);
return v___x_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3(lean_object* v_toPure_1025_, lean_object* v_inst_1026_, lean_object* v_inst_1027_, lean_object* v_inst_1028_, lean_object* v_inst_1029_, lean_object* v_toBind_1030_, lean_object* v___f_1031_, lean_object* v_s_1032_){
_start:
{
lean_object* v_mulFn_x3f_1033_; 
v_mulFn_x3f_1033_ = lean_ctor_get(v_s_1032_, 5);
if (lean_obj_tag(v_mulFn_x3f_1033_) == 1)
{
lean_object* v_val_1034_; lean_object* v___x_1035_; 
lean_inc_ref(v_mulFn_x3f_1033_);
lean_dec_ref(v_s_1032_);
lean_dec(v___f_1031_);
lean_dec(v_toBind_1030_);
lean_dec_ref(v_inst_1029_);
lean_dec_ref(v_inst_1028_);
lean_dec_ref(v_inst_1027_);
lean_dec(v_inst_1026_);
v_val_1034_ = lean_ctor_get(v_mulFn_x3f_1033_, 0);
lean_inc(v_val_1034_);
lean_dec_ref(v_mulFn_x3f_1033_);
v___x_1035_ = lean_apply_2(v_toPure_1025_, lean_box(0), v_val_1034_);
return v___x_1035_;
}
else
{
lean_object* v_type_1036_; lean_object* v_u_1037_; lean_object* v_semiringInst_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v_expectedInst_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; 
lean_dec(v_toPure_1025_);
v_type_1036_ = lean_ctor_get(v_s_1032_, 1);
lean_inc_ref_n(v_type_1036_, 3);
v_u_1037_ = lean_ctor_get(v_s_1032_, 2);
lean_inc_n(v_u_1037_, 2);
v_semiringInst_1038_ = lean_ctor_get(v_s_1032_, 3);
lean_inc_ref(v_semiringInst_1038_);
lean_dec_ref(v_s_1032_);
v___x_1039_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1);
v___x_1040_ = lean_box(0);
v___x_1041_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1041_, 0, v_u_1037_);
lean_ctor_set(v___x_1041_, 1, v___x_1040_);
lean_inc_ref(v___x_1041_);
v___x_1042_ = l_Lean_mkConst(v___x_1039_, v___x_1041_);
v___x_1043_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3);
v___x_1044_ = l_Lean_mkConst(v___x_1043_, v___x_1041_);
v___x_1045_ = l_Lean_mkAppB(v___x_1044_, v_type_1036_, v_semiringInst_1038_);
v_expectedInst_1046_ = l_Lean_mkAppB(v___x_1042_, v_type_1036_, v___x_1045_);
v___x_1047_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5);
v___x_1048_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7);
v___x_1049_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___redArg(v_inst_1026_, v_inst_1027_, v_inst_1028_, v_inst_1029_, v_type_1036_, v_u_1037_, v___x_1047_, v___x_1048_, v_expectedInst_1046_);
v___x_1050_ = lean_apply_4(v_toBind_1030_, lean_box(0), lean_box(0), v___x_1049_, v___f_1031_);
return v___x_1050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg(lean_object* v_inst_1051_, lean_object* v_inst_1052_, lean_object* v_inst_1053_, lean_object* v_inst_1054_, lean_object* v_inst_1055_){
_start:
{
lean_object* v_toApplicative_1056_; lean_object* v_toBind_1057_; lean_object* v_getSemiring_1058_; lean_object* v_modifySemiring_1059_; lean_object* v_toPure_1060_; lean_object* v___f_1061_; lean_object* v___f_1062_; lean_object* v___x_1063_; 
v_toApplicative_1056_ = lean_ctor_get(v_inst_1053_, 0);
v_toBind_1057_ = lean_ctor_get(v_inst_1053_, 1);
lean_inc_n(v_toBind_1057_, 3);
v_getSemiring_1058_ = lean_ctor_get(v_inst_1055_, 0);
lean_inc(v_getSemiring_1058_);
v_modifySemiring_1059_ = lean_ctor_get(v_inst_1055_, 1);
lean_inc(v_modifySemiring_1059_);
lean_dec_ref(v_inst_1055_);
v_toPure_1060_ = lean_ctor_get(v_toApplicative_1056_, 1);
lean_inc_n(v_toPure_1060_, 2);
v___f_1061_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1061_, 0, v_toPure_1060_);
lean_closure_set(v___f_1061_, 1, v_modifySemiring_1059_);
lean_closure_set(v___f_1061_, 2, v_toBind_1057_);
v___f_1062_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1062_, 0, v_toPure_1060_);
lean_closure_set(v___f_1062_, 1, v_inst_1051_);
lean_closure_set(v___f_1062_, 2, v_inst_1052_);
lean_closure_set(v___f_1062_, 3, v_inst_1053_);
lean_closure_set(v___f_1062_, 4, v_inst_1054_);
lean_closure_set(v___f_1062_, 5, v_toBind_1057_);
lean_closure_set(v___f_1062_, 6, v___f_1061_);
v___x_1063_ = lean_apply_4(v_toBind_1057_, lean_box(0), lean_box(0), v_getSemiring_1058_, v___f_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27(lean_object* v_m_1064_, lean_object* v_inst_1065_, lean_object* v_inst_1066_, lean_object* v_inst_1067_, lean_object* v_inst_1068_, lean_object* v_inst_1069_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg(v_inst_1065_, v_inst_1066_, v_inst_1067_, v_inst_1068_, v_inst_1069_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__0(lean_object* v_powFn_1071_, lean_object* v_s_1072_){
_start:
{
lean_object* v_id_1073_; lean_object* v_type_1074_; lean_object* v_u_1075_; lean_object* v_semiringInst_1076_; lean_object* v_addFn_x3f_1077_; lean_object* v_mulFn_x3f_1078_; lean_object* v_natCastFn_x3f_1079_; lean_object* v_denote_1080_; lean_object* v_vars_1081_; lean_object* v_varMap_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1090_; 
v_id_1073_ = lean_ctor_get(v_s_1072_, 0);
v_type_1074_ = lean_ctor_get(v_s_1072_, 1);
v_u_1075_ = lean_ctor_get(v_s_1072_, 2);
v_semiringInst_1076_ = lean_ctor_get(v_s_1072_, 3);
v_addFn_x3f_1077_ = lean_ctor_get(v_s_1072_, 4);
v_mulFn_x3f_1078_ = lean_ctor_get(v_s_1072_, 5);
v_natCastFn_x3f_1079_ = lean_ctor_get(v_s_1072_, 7);
v_denote_1080_ = lean_ctor_get(v_s_1072_, 8);
v_vars_1081_ = lean_ctor_get(v_s_1072_, 9);
v_varMap_1082_ = lean_ctor_get(v_s_1072_, 10);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_s_1072_);
if (v_isSharedCheck_1090_ == 0)
{
lean_object* v_unused_1091_; 
v_unused_1091_ = lean_ctor_get(v_s_1072_, 6);
lean_dec(v_unused_1091_);
v___x_1084_ = v_s_1072_;
v_isShared_1085_ = v_isSharedCheck_1090_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_varMap_1082_);
lean_inc(v_vars_1081_);
lean_inc(v_denote_1080_);
lean_inc(v_natCastFn_x3f_1079_);
lean_inc(v_mulFn_x3f_1078_);
lean_inc(v_addFn_x3f_1077_);
lean_inc(v_semiringInst_1076_);
lean_inc(v_u_1075_);
lean_inc(v_type_1074_);
lean_inc(v_id_1073_);
lean_dec(v_s_1072_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1090_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1086_; lean_object* v___x_1088_; 
v___x_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1086_, 0, v_powFn_1071_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 6, v___x_1086_);
v___x_1088_ = v___x_1084_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_id_1073_);
lean_ctor_set(v_reuseFailAlloc_1089_, 1, v_type_1074_);
lean_ctor_set(v_reuseFailAlloc_1089_, 2, v_u_1075_);
lean_ctor_set(v_reuseFailAlloc_1089_, 3, v_semiringInst_1076_);
lean_ctor_set(v_reuseFailAlloc_1089_, 4, v_addFn_x3f_1077_);
lean_ctor_set(v_reuseFailAlloc_1089_, 5, v_mulFn_x3f_1078_);
lean_ctor_set(v_reuseFailAlloc_1089_, 6, v___x_1086_);
lean_ctor_set(v_reuseFailAlloc_1089_, 7, v_natCastFn_x3f_1079_);
lean_ctor_set(v_reuseFailAlloc_1089_, 8, v_denote_1080_);
lean_ctor_set(v_reuseFailAlloc_1089_, 9, v_vars_1081_);
lean_ctor_set(v_reuseFailAlloc_1089_, 10, v_varMap_1082_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__1(lean_object* v_toPure_1092_, lean_object* v_powFn_1093_, lean_object* v_____r_1094_){
_start:
{
lean_object* v___x_1095_; 
v___x_1095_ = lean_apply_2(v_toPure_1092_, lean_box(0), v_powFn_1093_);
return v___x_1095_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__2(lean_object* v_toPure_1096_, lean_object* v_modifySemiring_1097_, lean_object* v_toBind_1098_, lean_object* v_powFn_1099_){
_start:
{
lean_object* v___f_1100_; lean_object* v___f_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
lean_inc_ref(v_powFn_1099_);
v___f_1100_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1100_, 0, v_powFn_1099_);
v___f_1101_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1101_, 0, v_toPure_1096_);
lean_closure_set(v___f_1101_, 1, v_powFn_1099_);
v___x_1102_ = lean_apply_1(v_modifySemiring_1097_, v___f_1100_);
v___x_1103_ = lean_apply_4(v_toBind_1098_, lean_box(0), lean_box(0), v___x_1102_, v___f_1101_);
return v___x_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__3(lean_object* v_toPure_1104_, lean_object* v_inst_1105_, lean_object* v_inst_1106_, lean_object* v_inst_1107_, lean_object* v_inst_1108_, lean_object* v_toBind_1109_, lean_object* v___f_1110_, lean_object* v_s_1111_){
_start:
{
lean_object* v_powFn_x3f_1112_; 
v_powFn_x3f_1112_ = lean_ctor_get(v_s_1111_, 6);
if (lean_obj_tag(v_powFn_x3f_1112_) == 1)
{
lean_object* v_val_1113_; lean_object* v___x_1114_; 
lean_inc_ref(v_powFn_x3f_1112_);
lean_dec_ref(v_s_1111_);
lean_dec(v___f_1110_);
lean_dec(v_toBind_1109_);
lean_dec_ref(v_inst_1108_);
lean_dec_ref(v_inst_1107_);
lean_dec_ref(v_inst_1106_);
lean_dec(v_inst_1105_);
v_val_1113_ = lean_ctor_get(v_powFn_x3f_1112_, 0);
lean_inc(v_val_1113_);
lean_dec_ref(v_powFn_x3f_1112_);
v___x_1114_ = lean_apply_2(v_toPure_1104_, lean_box(0), v_val_1113_);
return v___x_1114_;
}
else
{
lean_object* v_type_1115_; lean_object* v_u_1116_; lean_object* v_semiringInst_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; 
lean_dec(v_toPure_1104_);
v_type_1115_ = lean_ctor_get(v_s_1111_, 1);
lean_inc_ref(v_type_1115_);
v_u_1116_ = lean_ctor_get(v_s_1111_, 2);
lean_inc(v_u_1116_);
v_semiringInst_1117_ = lean_ctor_get(v_s_1111_, 3);
lean_inc_ref(v_semiringInst_1117_);
lean_dec_ref(v_s_1111_);
v___x_1118_ = l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___redArg(v_inst_1105_, v_inst_1106_, v_inst_1107_, v_inst_1108_, v_u_1116_, v_type_1115_, v_semiringInst_1117_);
v___x_1119_ = lean_apply_4(v_toBind_1109_, lean_box(0), lean_box(0), v___x_1118_, v___f_1110_);
return v___x_1119_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg(lean_object* v_inst_1120_, lean_object* v_inst_1121_, lean_object* v_inst_1122_, lean_object* v_inst_1123_, lean_object* v_inst_1124_){
_start:
{
lean_object* v_toApplicative_1125_; lean_object* v_toBind_1126_; lean_object* v_getSemiring_1127_; lean_object* v_modifySemiring_1128_; lean_object* v_toPure_1129_; lean_object* v___f_1130_; lean_object* v___f_1131_; lean_object* v___x_1132_; 
v_toApplicative_1125_ = lean_ctor_get(v_inst_1122_, 0);
v_toBind_1126_ = lean_ctor_get(v_inst_1122_, 1);
lean_inc_n(v_toBind_1126_, 3);
v_getSemiring_1127_ = lean_ctor_get(v_inst_1124_, 0);
lean_inc(v_getSemiring_1127_);
v_modifySemiring_1128_ = lean_ctor_get(v_inst_1124_, 1);
lean_inc(v_modifySemiring_1128_);
lean_dec_ref(v_inst_1124_);
v_toPure_1129_ = lean_ctor_get(v_toApplicative_1125_, 1);
lean_inc_n(v_toPure_1129_, 2);
v___f_1130_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1130_, 0, v_toPure_1129_);
lean_closure_set(v___f_1130_, 1, v_modifySemiring_1128_);
lean_closure_set(v___f_1130_, 2, v_toBind_1126_);
v___f_1131_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg___lam__3), 8, 7);
lean_closure_set(v___f_1131_, 0, v_toPure_1129_);
lean_closure_set(v___f_1131_, 1, v_inst_1120_);
lean_closure_set(v___f_1131_, 2, v_inst_1121_);
lean_closure_set(v___f_1131_, 3, v_inst_1122_);
lean_closure_set(v___f_1131_, 4, v_inst_1123_);
lean_closure_set(v___f_1131_, 5, v_toBind_1126_);
lean_closure_set(v___f_1131_, 6, v___f_1130_);
v___x_1132_ = lean_apply_4(v_toBind_1126_, lean_box(0), lean_box(0), v_getSemiring_1127_, v___f_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27(lean_object* v_m_1133_, lean_object* v_inst_1134_, lean_object* v_inst_1135_, lean_object* v_inst_1136_, lean_object* v_inst_1137_, lean_object* v_inst_1138_){
_start:
{
lean_object* v___x_1139_; 
v___x_1139_ = l_Lean_Meta_Grind_Arith_CommRing_getPowFn_x27___redArg(v_inst_1134_, v_inst_1135_, v_inst_1136_, v_inst_1137_, v_inst_1138_);
return v___x_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__0(lean_object* v_natCastFn_1140_, lean_object* v_s_1141_){
_start:
{
lean_object* v_id_1142_; lean_object* v_type_1143_; lean_object* v_u_1144_; lean_object* v_semiringInst_1145_; lean_object* v_addFn_x3f_1146_; lean_object* v_mulFn_x3f_1147_; lean_object* v_powFn_x3f_1148_; lean_object* v_denote_1149_; lean_object* v_vars_1150_; lean_object* v_varMap_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1159_; 
v_id_1142_ = lean_ctor_get(v_s_1141_, 0);
v_type_1143_ = lean_ctor_get(v_s_1141_, 1);
v_u_1144_ = lean_ctor_get(v_s_1141_, 2);
v_semiringInst_1145_ = lean_ctor_get(v_s_1141_, 3);
v_addFn_x3f_1146_ = lean_ctor_get(v_s_1141_, 4);
v_mulFn_x3f_1147_ = lean_ctor_get(v_s_1141_, 5);
v_powFn_x3f_1148_ = lean_ctor_get(v_s_1141_, 6);
v_denote_1149_ = lean_ctor_get(v_s_1141_, 8);
v_vars_1150_ = lean_ctor_get(v_s_1141_, 9);
v_varMap_1151_ = lean_ctor_get(v_s_1141_, 10);
v_isSharedCheck_1159_ = !lean_is_exclusive(v_s_1141_);
if (v_isSharedCheck_1159_ == 0)
{
lean_object* v_unused_1160_; 
v_unused_1160_ = lean_ctor_get(v_s_1141_, 7);
lean_dec(v_unused_1160_);
v___x_1153_ = v_s_1141_;
v_isShared_1154_ = v_isSharedCheck_1159_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_varMap_1151_);
lean_inc(v_vars_1150_);
lean_inc(v_denote_1149_);
lean_inc(v_powFn_x3f_1148_);
lean_inc(v_mulFn_x3f_1147_);
lean_inc(v_addFn_x3f_1146_);
lean_inc(v_semiringInst_1145_);
lean_inc(v_u_1144_);
lean_inc(v_type_1143_);
lean_inc(v_id_1142_);
lean_dec(v_s_1141_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1159_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1155_; lean_object* v___x_1157_; 
v___x_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1155_, 0, v_natCastFn_1140_);
if (v_isShared_1154_ == 0)
{
lean_ctor_set(v___x_1153_, 7, v___x_1155_);
v___x_1157_ = v___x_1153_;
goto v_reusejp_1156_;
}
else
{
lean_object* v_reuseFailAlloc_1158_; 
v_reuseFailAlloc_1158_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1158_, 0, v_id_1142_);
lean_ctor_set(v_reuseFailAlloc_1158_, 1, v_type_1143_);
lean_ctor_set(v_reuseFailAlloc_1158_, 2, v_u_1144_);
lean_ctor_set(v_reuseFailAlloc_1158_, 3, v_semiringInst_1145_);
lean_ctor_set(v_reuseFailAlloc_1158_, 4, v_addFn_x3f_1146_);
lean_ctor_set(v_reuseFailAlloc_1158_, 5, v_mulFn_x3f_1147_);
lean_ctor_set(v_reuseFailAlloc_1158_, 6, v_powFn_x3f_1148_);
lean_ctor_set(v_reuseFailAlloc_1158_, 7, v___x_1155_);
lean_ctor_set(v_reuseFailAlloc_1158_, 8, v_denote_1149_);
lean_ctor_set(v_reuseFailAlloc_1158_, 9, v_vars_1150_);
lean_ctor_set(v_reuseFailAlloc_1158_, 10, v_varMap_1151_);
v___x_1157_ = v_reuseFailAlloc_1158_;
goto v_reusejp_1156_;
}
v_reusejp_1156_:
{
return v___x_1157_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__1(lean_object* v_toPure_1161_, lean_object* v_natCastFn_1162_, lean_object* v_____r_1163_){
_start:
{
lean_object* v___x_1164_; 
v___x_1164_ = lean_apply_2(v_toPure_1161_, lean_box(0), v_natCastFn_1162_);
return v___x_1164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__2(lean_object* v_toPure_1165_, lean_object* v_modifySemiring_1166_, lean_object* v_toBind_1167_, lean_object* v_natCastFn_1168_){
_start:
{
lean_object* v___f_1169_; lean_object* v___f_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; 
lean_inc_ref(v_natCastFn_1168_);
v___f_1169_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1169_, 0, v_natCastFn_1168_);
v___f_1170_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1170_, 0, v_toPure_1165_);
lean_closure_set(v___f_1170_, 1, v_natCastFn_1168_);
v___x_1171_ = lean_apply_1(v_modifySemiring_1166_, v___f_1169_);
v___x_1172_ = lean_apply_4(v_toBind_1167_, lean_box(0), lean_box(0), v___x_1171_, v___f_1170_);
return v___x_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__3(lean_object* v_toPure_1173_, lean_object* v_inst_1174_, lean_object* v_inst_1175_, lean_object* v_inst_1176_, lean_object* v_toBind_1177_, lean_object* v___f_1178_, lean_object* v_s_1179_){
_start:
{
lean_object* v_natCastFn_x3f_1180_; 
v_natCastFn_x3f_1180_ = lean_ctor_get(v_s_1179_, 7);
if (lean_obj_tag(v_natCastFn_x3f_1180_) == 1)
{
lean_object* v_val_1181_; lean_object* v___x_1182_; 
lean_inc_ref(v_natCastFn_x3f_1180_);
lean_dec_ref(v_s_1179_);
lean_dec(v___f_1178_);
lean_dec(v_toBind_1177_);
lean_dec_ref(v_inst_1176_);
lean_dec_ref(v_inst_1175_);
lean_dec(v_inst_1174_);
v_val_1181_ = lean_ctor_get(v_natCastFn_x3f_1180_, 0);
lean_inc(v_val_1181_);
lean_dec_ref(v_natCastFn_x3f_1180_);
v___x_1182_ = lean_apply_2(v_toPure_1173_, lean_box(0), v_val_1181_);
return v___x_1182_;
}
else
{
lean_object* v_type_1183_; lean_object* v_u_1184_; lean_object* v_semiringInst_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; 
lean_dec(v_toPure_1173_);
v_type_1183_ = lean_ctor_get(v_s_1179_, 1);
lean_inc_ref(v_type_1183_);
v_u_1184_ = lean_ctor_get(v_s_1179_, 2);
lean_inc(v_u_1184_);
v_semiringInst_1185_ = lean_ctor_get(v_s_1179_, 3);
lean_inc_ref(v_semiringInst_1185_);
lean_dec_ref(v_s_1179_);
v___x_1186_ = l_Lean_Meta_Grind_Arith_CommRing_mkNatCastFn___redArg(v_inst_1174_, v_inst_1175_, v_inst_1176_, v_u_1184_, v_type_1183_, v_semiringInst_1185_);
v___x_1187_ = lean_apply_4(v_toBind_1177_, lean_box(0), lean_box(0), v___x_1186_, v___f_1178_);
return v___x_1187_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg(lean_object* v_inst_1188_, lean_object* v_inst_1189_, lean_object* v_inst_1190_, lean_object* v_inst_1191_){
_start:
{
lean_object* v_toApplicative_1192_; lean_object* v_toBind_1193_; lean_object* v_getSemiring_1194_; lean_object* v_modifySemiring_1195_; lean_object* v_toPure_1196_; lean_object* v___f_1197_; lean_object* v___f_1198_; lean_object* v___x_1199_; 
v_toApplicative_1192_ = lean_ctor_get(v_inst_1189_, 0);
v_toBind_1193_ = lean_ctor_get(v_inst_1189_, 1);
lean_inc_n(v_toBind_1193_, 3);
v_getSemiring_1194_ = lean_ctor_get(v_inst_1191_, 0);
lean_inc(v_getSemiring_1194_);
v_modifySemiring_1195_ = lean_ctor_get(v_inst_1191_, 1);
lean_inc(v_modifySemiring_1195_);
lean_dec_ref(v_inst_1191_);
v_toPure_1196_ = lean_ctor_get(v_toApplicative_1192_, 1);
lean_inc_n(v_toPure_1196_, 2);
v___f_1197_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__2), 4, 3);
lean_closure_set(v___f_1197_, 0, v_toPure_1196_);
lean_closure_set(v___f_1197_, 1, v_modifySemiring_1195_);
lean_closure_set(v___f_1197_, 2, v_toBind_1193_);
v___f_1198_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg___lam__3), 7, 6);
lean_closure_set(v___f_1198_, 0, v_toPure_1196_);
lean_closure_set(v___f_1198_, 1, v_inst_1188_);
lean_closure_set(v___f_1198_, 2, v_inst_1189_);
lean_closure_set(v___f_1198_, 3, v_inst_1190_);
lean_closure_set(v___f_1198_, 4, v_toBind_1193_);
lean_closure_set(v___f_1198_, 5, v___f_1197_);
v___x_1199_ = lean_apply_4(v_toBind_1193_, lean_box(0), lean_box(0), v_getSemiring_1194_, v___f_1198_);
return v___x_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27(lean_object* v_m_1200_, lean_object* v_inst_1201_, lean_object* v_inst_1202_, lean_object* v_inst_1203_, lean_object* v_inst_1204_){
_start:
{
lean_object* v___x_1205_; 
v___x_1205_ = l_Lean_Meta_Grind_Arith_CommRing_getNatCastFn_x27___redArg(v_inst_1201_, v_inst_1202_, v_inst_1203_, v_inst_1204_);
return v___x_1205_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1206_, lean_object* v_vals_1207_, lean_object* v_i_1208_, lean_object* v_k_1209_){
_start:
{
lean_object* v___x_1210_; uint8_t v___x_1211_; 
v___x_1210_ = lean_array_get_size(v_keys_1206_);
v___x_1211_ = lean_nat_dec_lt(v_i_1208_, v___x_1210_);
if (v___x_1211_ == 0)
{
lean_object* v___x_1212_; 
lean_dec(v_i_1208_);
v___x_1212_ = lean_box(0);
return v___x_1212_;
}
else
{
lean_object* v_k_x27_1213_; uint8_t v___x_1214_; 
v_k_x27_1213_ = lean_array_fget_borrowed(v_keys_1206_, v_i_1208_);
v___x_1214_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_1209_, v_k_x27_1213_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = lean_unsigned_to_nat(1u);
v___x_1216_ = lean_nat_add(v_i_1208_, v___x_1215_);
lean_dec(v_i_1208_);
v_i_1208_ = v___x_1216_;
goto _start;
}
else
{
lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1218_ = lean_array_fget_borrowed(v_vals_1207_, v_i_1208_);
lean_dec(v_i_1208_);
lean_inc(v___x_1218_);
v___x_1219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1219_, 0, v___x_1218_);
return v___x_1219_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1220_, lean_object* v_vals_1221_, lean_object* v_i_1222_, lean_object* v_k_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1220_, v_vals_1221_, v_i_1222_, v_k_1223_);
lean_dec_ref(v_k_1223_);
lean_dec_ref(v_vals_1221_);
lean_dec_ref(v_keys_1220_);
return v_res_1224_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_1225_; size_t v___x_1226_; size_t v___x_1227_; 
v___x_1225_ = ((size_t)5ULL);
v___x_1226_ = ((size_t)1ULL);
v___x_1227_ = lean_usize_shift_left(v___x_1226_, v___x_1225_);
return v___x_1227_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_1228_; size_t v___x_1229_; size_t v___x_1230_; 
v___x_1228_ = ((size_t)1ULL);
v___x_1229_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__0);
v___x_1230_ = lean_usize_sub(v___x_1229_, v___x_1228_);
return v___x_1230_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg(lean_object* v_x_1231_, size_t v_x_1232_, lean_object* v_x_1233_){
_start:
{
if (lean_obj_tag(v_x_1231_) == 0)
{
lean_object* v_es_1234_; lean_object* v___x_1235_; size_t v___x_1236_; size_t v___x_1237_; size_t v___x_1238_; lean_object* v_j_1239_; lean_object* v___x_1240_; 
v_es_1234_ = lean_ctor_get(v_x_1231_, 0);
v___x_1235_ = lean_box(2);
v___x_1236_ = ((size_t)5ULL);
v___x_1237_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__1);
v___x_1238_ = lean_usize_land(v_x_1232_, v___x_1237_);
v_j_1239_ = lean_usize_to_nat(v___x_1238_);
v___x_1240_ = lean_array_get_borrowed(v___x_1235_, v_es_1234_, v_j_1239_);
lean_dec(v_j_1239_);
switch(lean_obj_tag(v___x_1240_))
{
case 0:
{
lean_object* v_key_1241_; lean_object* v_val_1242_; uint8_t v___x_1243_; 
v_key_1241_ = lean_ctor_get(v___x_1240_, 0);
v_val_1242_ = lean_ctor_get(v___x_1240_, 1);
v___x_1243_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_1233_, v_key_1241_);
if (v___x_1243_ == 0)
{
lean_object* v___x_1244_; 
v___x_1244_ = lean_box(0);
return v___x_1244_;
}
else
{
lean_object* v___x_1245_; 
lean_inc(v_val_1242_);
v___x_1245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1245_, 0, v_val_1242_);
return v___x_1245_;
}
}
case 1:
{
lean_object* v_node_1246_; size_t v___x_1247_; 
v_node_1246_ = lean_ctor_get(v___x_1240_, 0);
v___x_1247_ = lean_usize_shift_right(v_x_1232_, v___x_1236_);
v_x_1231_ = v_node_1246_;
v_x_1232_ = v___x_1247_;
goto _start;
}
default: 
{
lean_object* v___x_1249_; 
v___x_1249_ = lean_box(0);
return v___x_1249_;
}
}
}
else
{
lean_object* v_ks_1250_; lean_object* v_vs_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v_ks_1250_ = lean_ctor_get(v_x_1231_, 0);
v_vs_1251_ = lean_ctor_get(v_x_1231_, 1);
v___x_1252_ = lean_unsigned_to_nat(0u);
v___x_1253_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_1250_, v_vs_1251_, v___x_1252_, v_x_1233_);
return v___x_1253_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_1254_, lean_object* v_x_1255_, lean_object* v_x_1256_){
_start:
{
size_t v_x_867__boxed_1257_; lean_object* v_res_1258_; 
v_x_867__boxed_1257_ = lean_unbox_usize(v_x_1255_);
lean_dec(v_x_1255_);
v_res_1258_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg(v_x_1254_, v_x_867__boxed_1257_, v_x_1256_);
lean_dec_ref(v_x_1256_);
lean_dec_ref(v_x_1254_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(lean_object* v_x_1259_, lean_object* v_x_1260_){
_start:
{
uint64_t v___x_1261_; size_t v___x_1262_; lean_object* v___x_1263_; 
v___x_1261_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_1260_);
v___x_1262_ = lean_uint64_to_usize(v___x_1261_);
v___x_1263_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg(v_x_1259_, v___x_1262_, v_x_1260_);
return v___x_1263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg___boxed(lean_object* v_x_1264_, lean_object* v_x_1265_){
_start:
{
lean_object* v_res_1266_; 
v_res_1266_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(v_x_1264_, v_x_1265_);
lean_dec_ref(v_x_1265_);
lean_dec_ref(v_x_1264_);
return v_res_1266_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg(lean_object* v_e_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_){
_start:
{
lean_object* v___x_1272_; 
v___x_1272_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_1268_, v_a_1269_, v_a_1270_);
if (lean_obj_tag(v___x_1272_) == 0)
{
lean_object* v_a_1273_; lean_object* v___x_1275_; uint8_t v_isShared_1276_; uint8_t v_isSharedCheck_1282_; 
v_a_1273_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1275_ = v___x_1272_;
v_isShared_1276_ = v_isSharedCheck_1282_;
goto v_resetjp_1274_;
}
else
{
lean_inc(v_a_1273_);
lean_dec(v___x_1272_);
v___x_1275_ = lean_box(0);
v_isShared_1276_ = v_isSharedCheck_1282_;
goto v_resetjp_1274_;
}
v_resetjp_1274_:
{
lean_object* v_exprToSemiringId_1277_; lean_object* v___x_1278_; lean_object* v___x_1280_; 
v_exprToSemiringId_1277_ = lean_ctor_get(v_a_1273_, 5);
lean_inc_ref(v_exprToSemiringId_1277_);
lean_dec(v_a_1273_);
v___x_1278_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(v_exprToSemiringId_1277_, v_e_1267_);
lean_dec_ref(v_exprToSemiringId_1277_);
if (v_isShared_1276_ == 0)
{
lean_ctor_set(v___x_1275_, 0, v___x_1278_);
v___x_1280_ = v___x_1275_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v___x_1278_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
v_a_1283_ = lean_ctor_get(v___x_1272_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1272_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1272_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1272_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg___boxed(lean_object* v_e_1291_, lean_object* v_a_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_, lean_object* v_a_1295_){
_start:
{
lean_object* v_res_1296_; 
v_res_1296_ = l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg(v_e_1291_, v_a_1292_, v_a_1293_, v_a_1294_);
lean_dec(v_a_1294_);
lean_dec_ref(v_a_1293_);
lean_dec(v_a_1292_);
lean_dec_ref(v_e_1291_);
return v_res_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f(lean_object* v_e_1297_, lean_object* v_a_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_, lean_object* v_a_1301_, lean_object* v_a_1302_, lean_object* v_a_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_){
_start:
{
lean_object* v___x_1309_; 
v___x_1309_ = l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg(v_e_1297_, v_a_1298_, v_a_1306_, v_a_1307_);
return v___x_1309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___boxed(lean_object* v_e_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f(v_e_1310_, v_a_1311_, v_a_1312_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_);
lean_dec(v_a_1320_);
lean_dec_ref(v_a_1319_);
lean_dec(v_a_1318_);
lean_dec_ref(v_a_1317_);
lean_dec(v_a_1316_);
lean_dec_ref(v_a_1315_);
lean_dec(v_a_1314_);
lean_dec_ref(v_a_1313_);
lean_dec(v_a_1312_);
lean_dec(v_a_1311_);
lean_dec_ref(v_e_1310_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0(lean_object* v_00_u03b2_1323_, lean_object* v_x_1324_, lean_object* v_x_1325_){
_start:
{
lean_object* v___x_1326_; 
v___x_1326_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(v_x_1324_, v_x_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___boxed(lean_object* v_00_u03b2_1327_, lean_object* v_x_1328_, lean_object* v_x_1329_){
_start:
{
lean_object* v_res_1330_; 
v_res_1330_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0(v_00_u03b2_1327_, v_x_1328_, v_x_1329_);
lean_dec_ref(v_x_1329_);
lean_dec_ref(v_x_1328_);
return v_res_1330_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1331_, lean_object* v_x_1332_, size_t v_x_1333_, lean_object* v_x_1334_){
_start:
{
lean_object* v___x_1335_; 
v___x_1335_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg(v_x_1332_, v_x_1333_, v_x_1334_);
return v___x_1335_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1336_, lean_object* v_x_1337_, lean_object* v_x_1338_, lean_object* v_x_1339_){
_start:
{
size_t v_x_984__boxed_1340_; lean_object* v_res_1341_; 
v_x_984__boxed_1340_ = lean_unbox_usize(v_x_1338_);
lean_dec(v_x_1338_);
v_res_1341_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0(v_00_u03b2_1336_, v_x_1337_, v_x_984__boxed_1340_, v_x_1339_);
lean_dec_ref(v_x_1339_);
lean_dec_ref(v_x_1337_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1342_, lean_object* v_keys_1343_, lean_object* v_vals_1344_, lean_object* v_heq_1345_, lean_object* v_i_1346_, lean_object* v_k_1347_){
_start:
{
lean_object* v___x_1348_; 
v___x_1348_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1343_, v_vals_1344_, v_i_1346_, v_k_1347_);
return v___x_1348_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1349_, lean_object* v_keys_1350_, lean_object* v_vals_1351_, lean_object* v_heq_1352_, lean_object* v_i_1353_, lean_object* v_k_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1349_, v_keys_1350_, v_vals_1351_, v_heq_1352_, v_i_1353_, v_k_1354_);
lean_dec_ref(v_k_1354_);
lean_dec_ref(v_vals_1351_);
lean_dec_ref(v_keys_1350_);
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_1356_, lean_object* v_x_1357_, lean_object* v_x_1358_, lean_object* v_x_1359_){
_start:
{
lean_object* v_ks_1360_; lean_object* v_vs_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1385_; 
v_ks_1360_ = lean_ctor_get(v_x_1356_, 0);
v_vs_1361_ = lean_ctor_get(v_x_1356_, 1);
v_isSharedCheck_1385_ = !lean_is_exclusive(v_x_1356_);
if (v_isSharedCheck_1385_ == 0)
{
v___x_1363_ = v_x_1356_;
v_isShared_1364_ = v_isSharedCheck_1385_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_vs_1361_);
lean_inc(v_ks_1360_);
lean_dec(v_x_1356_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1385_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
lean_object* v___x_1365_; uint8_t v___x_1366_; 
v___x_1365_ = lean_array_get_size(v_ks_1360_);
v___x_1366_ = lean_nat_dec_lt(v_x_1357_, v___x_1365_);
if (v___x_1366_ == 0)
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1370_; 
lean_dec(v_x_1357_);
v___x_1367_ = lean_array_push(v_ks_1360_, v_x_1358_);
v___x_1368_ = lean_array_push(v_vs_1361_, v_x_1359_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 1, v___x_1368_);
lean_ctor_set(v___x_1363_, 0, v___x_1367_);
v___x_1370_ = v___x_1363_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v___x_1367_);
lean_ctor_set(v_reuseFailAlloc_1371_, 1, v___x_1368_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
else
{
lean_object* v_k_x27_1372_; uint8_t v___x_1373_; 
v_k_x27_1372_ = lean_array_fget_borrowed(v_ks_1360_, v_x_1357_);
v___x_1373_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_1358_, v_k_x27_1372_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1375_; 
if (v_isShared_1364_ == 0)
{
v___x_1375_ = v___x_1363_;
goto v_reusejp_1374_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_ks_1360_);
lean_ctor_set(v_reuseFailAlloc_1379_, 1, v_vs_1361_);
v___x_1375_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1374_;
}
v_reusejp_1374_:
{
lean_object* v___x_1376_; lean_object* v___x_1377_; 
v___x_1376_ = lean_unsigned_to_nat(1u);
v___x_1377_ = lean_nat_add(v_x_1357_, v___x_1376_);
lean_dec(v_x_1357_);
v_x_1356_ = v___x_1375_;
v_x_1357_ = v___x_1377_;
goto _start;
}
}
else
{
lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1383_; 
v___x_1380_ = lean_array_fset(v_ks_1360_, v_x_1357_, v_x_1358_);
v___x_1381_ = lean_array_fset(v_vs_1361_, v_x_1357_, v_x_1359_);
lean_dec(v_x_1357_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set(v___x_1363_, 1, v___x_1381_);
lean_ctor_set(v___x_1363_, 0, v___x_1380_);
v___x_1383_ = v___x_1363_;
goto v_reusejp_1382_;
}
else
{
lean_object* v_reuseFailAlloc_1384_; 
v_reuseFailAlloc_1384_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1384_, 0, v___x_1380_);
lean_ctor_set(v_reuseFailAlloc_1384_, 1, v___x_1381_);
v___x_1383_ = v_reuseFailAlloc_1384_;
goto v_reusejp_1382_;
}
v_reusejp_1382_:
{
return v___x_1383_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1___redArg(lean_object* v_n_1386_, lean_object* v_k_1387_, lean_object* v_v_1388_){
_start:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1389_ = lean_unsigned_to_nat(0u);
v___x_1390_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1386_, v___x_1389_, v_k_1387_, v_v_1388_);
return v___x_1390_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1391_; 
v___x_1391_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(lean_object* v_x_1392_, size_t v_x_1393_, size_t v_x_1394_, lean_object* v_x_1395_, lean_object* v_x_1396_){
_start:
{
if (lean_obj_tag(v_x_1392_) == 0)
{
lean_object* v_es_1397_; size_t v___x_1398_; size_t v___x_1399_; size_t v___x_1400_; size_t v___x_1401_; lean_object* v_j_1402_; lean_object* v___x_1403_; uint8_t v___x_1404_; 
v_es_1397_ = lean_ctor_get(v_x_1392_, 0);
v___x_1398_ = ((size_t)5ULL);
v___x_1399_ = ((size_t)1ULL);
v___x_1400_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0_spec__0___redArg___closed__1);
v___x_1401_ = lean_usize_land(v_x_1393_, v___x_1400_);
v_j_1402_ = lean_usize_to_nat(v___x_1401_);
v___x_1403_ = lean_array_get_size(v_es_1397_);
v___x_1404_ = lean_nat_dec_lt(v_j_1402_, v___x_1403_);
if (v___x_1404_ == 0)
{
lean_dec(v_j_1402_);
lean_dec(v_x_1396_);
lean_dec_ref(v_x_1395_);
return v_x_1392_;
}
else
{
lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1441_; 
lean_inc_ref(v_es_1397_);
v_isSharedCheck_1441_ = !lean_is_exclusive(v_x_1392_);
if (v_isSharedCheck_1441_ == 0)
{
lean_object* v_unused_1442_; 
v_unused_1442_ = lean_ctor_get(v_x_1392_, 0);
lean_dec(v_unused_1442_);
v___x_1406_ = v_x_1392_;
v_isShared_1407_ = v_isSharedCheck_1441_;
goto v_resetjp_1405_;
}
else
{
lean_dec(v_x_1392_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1441_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v_v_1408_; lean_object* v___x_1409_; lean_object* v_xs_x27_1410_; lean_object* v___y_1412_; 
v_v_1408_ = lean_array_fget(v_es_1397_, v_j_1402_);
v___x_1409_ = lean_box(0);
v_xs_x27_1410_ = lean_array_fset(v_es_1397_, v_j_1402_, v___x_1409_);
switch(lean_obj_tag(v_v_1408_))
{
case 0:
{
lean_object* v_key_1417_; lean_object* v_val_1418_; lean_object* v___x_1420_; uint8_t v_isShared_1421_; uint8_t v_isSharedCheck_1428_; 
v_key_1417_ = lean_ctor_get(v_v_1408_, 0);
v_val_1418_ = lean_ctor_get(v_v_1408_, 1);
v_isSharedCheck_1428_ = !lean_is_exclusive(v_v_1408_);
if (v_isSharedCheck_1428_ == 0)
{
v___x_1420_ = v_v_1408_;
v_isShared_1421_ = v_isSharedCheck_1428_;
goto v_resetjp_1419_;
}
else
{
lean_inc(v_val_1418_);
lean_inc(v_key_1417_);
lean_dec(v_v_1408_);
v___x_1420_ = lean_box(0);
v_isShared_1421_ = v_isSharedCheck_1428_;
goto v_resetjp_1419_;
}
v_resetjp_1419_:
{
uint8_t v___x_1422_; 
v___x_1422_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_1395_, v_key_1417_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; lean_object* v___x_1424_; 
lean_del_object(v___x_1420_);
v___x_1423_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1417_, v_val_1418_, v_x_1395_, v_x_1396_);
v___x_1424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1423_);
v___y_1412_ = v___x_1424_;
goto v___jp_1411_;
}
else
{
lean_object* v___x_1426_; 
lean_dec(v_val_1418_);
lean_dec(v_key_1417_);
if (v_isShared_1421_ == 0)
{
lean_ctor_set(v___x_1420_, 1, v_x_1396_);
lean_ctor_set(v___x_1420_, 0, v_x_1395_);
v___x_1426_ = v___x_1420_;
goto v_reusejp_1425_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v_x_1395_);
lean_ctor_set(v_reuseFailAlloc_1427_, 1, v_x_1396_);
v___x_1426_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1425_;
}
v_reusejp_1425_:
{
v___y_1412_ = v___x_1426_;
goto v___jp_1411_;
}
}
}
}
case 1:
{
lean_object* v_node_1429_; lean_object* v___x_1431_; uint8_t v_isShared_1432_; uint8_t v_isSharedCheck_1439_; 
v_node_1429_ = lean_ctor_get(v_v_1408_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v_v_1408_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1431_ = v_v_1408_;
v_isShared_1432_ = v_isSharedCheck_1439_;
goto v_resetjp_1430_;
}
else
{
lean_inc(v_node_1429_);
lean_dec(v_v_1408_);
v___x_1431_ = lean_box(0);
v_isShared_1432_ = v_isSharedCheck_1439_;
goto v_resetjp_1430_;
}
v_resetjp_1430_:
{
size_t v___x_1433_; size_t v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1437_; 
v___x_1433_ = lean_usize_shift_right(v_x_1393_, v___x_1398_);
v___x_1434_ = lean_usize_add(v_x_1394_, v___x_1399_);
v___x_1435_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(v_node_1429_, v___x_1433_, v___x_1434_, v_x_1395_, v_x_1396_);
if (v_isShared_1432_ == 0)
{
lean_ctor_set(v___x_1431_, 0, v___x_1435_);
v___x_1437_ = v___x_1431_;
goto v_reusejp_1436_;
}
else
{
lean_object* v_reuseFailAlloc_1438_; 
v_reuseFailAlloc_1438_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1438_, 0, v___x_1435_);
v___x_1437_ = v_reuseFailAlloc_1438_;
goto v_reusejp_1436_;
}
v_reusejp_1436_:
{
v___y_1412_ = v___x_1437_;
goto v___jp_1411_;
}
}
}
default: 
{
lean_object* v___x_1440_; 
v___x_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1440_, 0, v_x_1395_);
lean_ctor_set(v___x_1440_, 1, v_x_1396_);
v___y_1412_ = v___x_1440_;
goto v___jp_1411_;
}
}
v___jp_1411_:
{
lean_object* v___x_1413_; lean_object* v___x_1415_; 
v___x_1413_ = lean_array_fset(v_xs_x27_1410_, v_j_1402_, v___y_1412_);
lean_dec(v_j_1402_);
if (v_isShared_1407_ == 0)
{
lean_ctor_set(v___x_1406_, 0, v___x_1413_);
v___x_1415_ = v___x_1406_;
goto v_reusejp_1414_;
}
else
{
lean_object* v_reuseFailAlloc_1416_; 
v_reuseFailAlloc_1416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1416_, 0, v___x_1413_);
v___x_1415_ = v_reuseFailAlloc_1416_;
goto v_reusejp_1414_;
}
v_reusejp_1414_:
{
return v___x_1415_;
}
}
}
}
}
else
{
lean_object* v_ks_1443_; lean_object* v_vs_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1464_; 
v_ks_1443_ = lean_ctor_get(v_x_1392_, 0);
v_vs_1444_ = lean_ctor_get(v_x_1392_, 1);
v_isSharedCheck_1464_ = !lean_is_exclusive(v_x_1392_);
if (v_isSharedCheck_1464_ == 0)
{
v___x_1446_ = v_x_1392_;
v_isShared_1447_ = v_isSharedCheck_1464_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_vs_1444_);
lean_inc(v_ks_1443_);
lean_dec(v_x_1392_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1464_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1463_; 
v_reuseFailAlloc_1463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1463_, 0, v_ks_1443_);
lean_ctor_set(v_reuseFailAlloc_1463_, 1, v_vs_1444_);
v___x_1449_ = v_reuseFailAlloc_1463_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
lean_object* v_newNode_1450_; uint8_t v___y_1452_; size_t v___x_1458_; uint8_t v___x_1459_; 
v_newNode_1450_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1___redArg(v___x_1449_, v_x_1395_, v_x_1396_);
v___x_1458_ = ((size_t)7ULL);
v___x_1459_ = lean_usize_dec_le(v___x_1458_, v_x_1394_);
if (v___x_1459_ == 0)
{
lean_object* v___x_1460_; lean_object* v___x_1461_; uint8_t v___x_1462_; 
v___x_1460_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1450_);
v___x_1461_ = lean_unsigned_to_nat(4u);
v___x_1462_ = lean_nat_dec_lt(v___x_1460_, v___x_1461_);
lean_dec(v___x_1460_);
v___y_1452_ = v___x_1462_;
goto v___jp_1451_;
}
else
{
v___y_1452_ = v___x_1459_;
goto v___jp_1451_;
}
v___jp_1451_:
{
if (v___y_1452_ == 0)
{
lean_object* v_ks_1453_; lean_object* v_vs_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; 
v_ks_1453_ = lean_ctor_get(v_newNode_1450_, 0);
lean_inc_ref(v_ks_1453_);
v_vs_1454_ = lean_ctor_get(v_newNode_1450_, 1);
lean_inc_ref(v_vs_1454_);
lean_dec_ref(v_newNode_1450_);
v___x_1455_ = lean_unsigned_to_nat(0u);
v___x_1456_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___closed__0);
v___x_1457_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg(v_x_1394_, v_ks_1453_, v_vs_1454_, v___x_1455_, v___x_1456_);
lean_dec_ref(v_vs_1454_);
lean_dec_ref(v_ks_1453_);
return v___x_1457_;
}
else
{
return v_newNode_1450_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg(size_t v_depth_1465_, lean_object* v_keys_1466_, lean_object* v_vals_1467_, lean_object* v_i_1468_, lean_object* v_entries_1469_){
_start:
{
lean_object* v___x_1470_; uint8_t v___x_1471_; 
v___x_1470_ = lean_array_get_size(v_keys_1466_);
v___x_1471_ = lean_nat_dec_lt(v_i_1468_, v___x_1470_);
if (v___x_1471_ == 0)
{
lean_dec(v_i_1468_);
return v_entries_1469_;
}
else
{
lean_object* v_k_1472_; lean_object* v_v_1473_; uint64_t v___x_1474_; size_t v_h_1475_; size_t v___x_1476_; lean_object* v___x_1477_; size_t v___x_1478_; size_t v___x_1479_; size_t v___x_1480_; size_t v_h_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; 
v_k_1472_ = lean_array_fget_borrowed(v_keys_1466_, v_i_1468_);
v_v_1473_ = lean_array_fget_borrowed(v_vals_1467_, v_i_1468_);
v___x_1474_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_k_1472_);
v_h_1475_ = lean_uint64_to_usize(v___x_1474_);
v___x_1476_ = ((size_t)5ULL);
v___x_1477_ = lean_unsigned_to_nat(1u);
v___x_1478_ = ((size_t)1ULL);
v___x_1479_ = lean_usize_sub(v_depth_1465_, v___x_1478_);
v___x_1480_ = lean_usize_mul(v___x_1476_, v___x_1479_);
v_h_1481_ = lean_usize_shift_right(v_h_1475_, v___x_1480_);
v___x_1482_ = lean_nat_add(v_i_1468_, v___x_1477_);
lean_dec(v_i_1468_);
lean_inc(v_v_1473_);
lean_inc(v_k_1472_);
v___x_1483_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(v_entries_1469_, v_h_1481_, v_depth_1465_, v_k_1472_, v_v_1473_);
v_i_1468_ = v___x_1482_;
v_entries_1469_ = v___x_1483_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_1485_, lean_object* v_keys_1486_, lean_object* v_vals_1487_, lean_object* v_i_1488_, lean_object* v_entries_1489_){
_start:
{
size_t v_depth_boxed_1490_; lean_object* v_res_1491_; 
v_depth_boxed_1490_ = lean_unbox_usize(v_depth_1485_);
lean_dec(v_depth_1485_);
v_res_1491_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg(v_depth_boxed_1490_, v_keys_1486_, v_vals_1487_, v_i_1488_, v_entries_1489_);
lean_dec_ref(v_vals_1487_);
lean_dec_ref(v_keys_1486_);
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg___boxed(lean_object* v_x_1492_, lean_object* v_x_1493_, lean_object* v_x_1494_, lean_object* v_x_1495_, lean_object* v_x_1496_){
_start:
{
size_t v_x_7187__boxed_1497_; size_t v_x_7188__boxed_1498_; lean_object* v_res_1499_; 
v_x_7187__boxed_1497_ = lean_unbox_usize(v_x_1493_);
lean_dec(v_x_1493_);
v_x_7188__boxed_1498_ = lean_unbox_usize(v_x_1494_);
lean_dec(v_x_1494_);
v_res_1499_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(v_x_1492_, v_x_7187__boxed_1497_, v_x_7188__boxed_1498_, v_x_1495_, v_x_1496_);
return v_res_1499_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0___redArg(lean_object* v_x_1500_, lean_object* v_x_1501_, lean_object* v_x_1502_){
_start:
{
uint64_t v___x_1503_; size_t v___x_1504_; size_t v___x_1505_; lean_object* v___x_1506_; 
v___x_1503_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_1501_);
v___x_1504_ = lean_uint64_to_usize(v___x_1503_);
v___x_1505_ = ((size_t)1ULL);
v___x_1506_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(v_x_1500_, v___x_1504_, v___x_1505_, v_x_1501_, v_x_1502_);
return v___x_1506_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0(lean_object* v_e_1507_, lean_object* v_a_1508_, lean_object* v_s_1509_){
_start:
{
lean_object* v_rings_1510_; lean_object* v_typeIdOf_1511_; lean_object* v_exprToRingId_1512_; lean_object* v_semirings_1513_; lean_object* v_stypeIdOf_1514_; lean_object* v_exprToSemiringId_1515_; lean_object* v_ncRings_1516_; lean_object* v_exprToNCRingId_1517_; lean_object* v_nctypeIdOf_1518_; lean_object* v_ncSemirings_1519_; lean_object* v_exprToNCSemiringId_1520_; lean_object* v_ncstypeIdOf_1521_; lean_object* v_steps_1522_; lean_object* v___x_1524_; uint8_t v_isShared_1525_; uint8_t v_isSharedCheck_1530_; 
v_rings_1510_ = lean_ctor_get(v_s_1509_, 0);
v_typeIdOf_1511_ = lean_ctor_get(v_s_1509_, 1);
v_exprToRingId_1512_ = lean_ctor_get(v_s_1509_, 2);
v_semirings_1513_ = lean_ctor_get(v_s_1509_, 3);
v_stypeIdOf_1514_ = lean_ctor_get(v_s_1509_, 4);
v_exprToSemiringId_1515_ = lean_ctor_get(v_s_1509_, 5);
v_ncRings_1516_ = lean_ctor_get(v_s_1509_, 6);
v_exprToNCRingId_1517_ = lean_ctor_get(v_s_1509_, 7);
v_nctypeIdOf_1518_ = lean_ctor_get(v_s_1509_, 8);
v_ncSemirings_1519_ = lean_ctor_get(v_s_1509_, 9);
v_exprToNCSemiringId_1520_ = lean_ctor_get(v_s_1509_, 10);
v_ncstypeIdOf_1521_ = lean_ctor_get(v_s_1509_, 11);
v_steps_1522_ = lean_ctor_get(v_s_1509_, 12);
v_isSharedCheck_1530_ = !lean_is_exclusive(v_s_1509_);
if (v_isSharedCheck_1530_ == 0)
{
v___x_1524_ = v_s_1509_;
v_isShared_1525_ = v_isSharedCheck_1530_;
goto v_resetjp_1523_;
}
else
{
lean_inc(v_steps_1522_);
lean_inc(v_ncstypeIdOf_1521_);
lean_inc(v_exprToNCSemiringId_1520_);
lean_inc(v_ncSemirings_1519_);
lean_inc(v_nctypeIdOf_1518_);
lean_inc(v_exprToNCRingId_1517_);
lean_inc(v_ncRings_1516_);
lean_inc(v_exprToSemiringId_1515_);
lean_inc(v_stypeIdOf_1514_);
lean_inc(v_semirings_1513_);
lean_inc(v_exprToRingId_1512_);
lean_inc(v_typeIdOf_1511_);
lean_inc(v_rings_1510_);
lean_dec(v_s_1509_);
v___x_1524_ = lean_box(0);
v_isShared_1525_ = v_isSharedCheck_1530_;
goto v_resetjp_1523_;
}
v_resetjp_1523_:
{
lean_object* v___x_1526_; lean_object* v___x_1528_; 
lean_inc(v_a_1508_);
v___x_1526_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0___redArg(v_exprToSemiringId_1515_, v_e_1507_, v_a_1508_);
if (v_isShared_1525_ == 0)
{
lean_ctor_set(v___x_1524_, 5, v___x_1526_);
v___x_1528_ = v___x_1524_;
goto v_reusejp_1527_;
}
else
{
lean_object* v_reuseFailAlloc_1529_; 
v_reuseFailAlloc_1529_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1529_, 0, v_rings_1510_);
lean_ctor_set(v_reuseFailAlloc_1529_, 1, v_typeIdOf_1511_);
lean_ctor_set(v_reuseFailAlloc_1529_, 2, v_exprToRingId_1512_);
lean_ctor_set(v_reuseFailAlloc_1529_, 3, v_semirings_1513_);
lean_ctor_set(v_reuseFailAlloc_1529_, 4, v_stypeIdOf_1514_);
lean_ctor_set(v_reuseFailAlloc_1529_, 5, v___x_1526_);
lean_ctor_set(v_reuseFailAlloc_1529_, 6, v_ncRings_1516_);
lean_ctor_set(v_reuseFailAlloc_1529_, 7, v_exprToNCRingId_1517_);
lean_ctor_set(v_reuseFailAlloc_1529_, 8, v_nctypeIdOf_1518_);
lean_ctor_set(v_reuseFailAlloc_1529_, 9, v_ncSemirings_1519_);
lean_ctor_set(v_reuseFailAlloc_1529_, 10, v_exprToNCSemiringId_1520_);
lean_ctor_set(v_reuseFailAlloc_1529_, 11, v_ncstypeIdOf_1521_);
lean_ctor_set(v_reuseFailAlloc_1529_, 12, v_steps_1522_);
v___x_1528_ = v_reuseFailAlloc_1529_;
goto v_reusejp_1527_;
}
v_reusejp_1527_:
{
return v___x_1528_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0___boxed(lean_object* v_e_1531_, lean_object* v_a_1532_, lean_object* v_s_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0(v_e_1531_, v_a_1532_, v_s_1533_);
lean_dec(v_a_1532_);
return v_res_1534_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__0(void){
_start:
{
lean_object* v___x_1535_; 
v___x_1535_ = lean_mk_string_unchecked("expression in two different semirings", 37, 37);
return v___x_1535_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1(void){
_start:
{
lean_object* v___x_1536_; lean_object* v___x_1537_; 
v___x_1536_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__0);
v___x_1537_ = l_Lean_stringToMessageData(v___x_1536_);
return v___x_1537_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(lean_object* v_e_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_, lean_object* v_a_1543_, lean_object* v_a_1544_, lean_object* v_a_1545_, lean_object* v_a_1546_){
_start:
{
lean_object* v___x_1551_; 
v___x_1551_ = l_Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f___redArg(v_e_1538_, v_a_1540_, v_a_1545_, v_a_1546_);
if (lean_obj_tag(v___x_1551_) == 0)
{
lean_object* v_a_1552_; 
v_a_1552_ = lean_ctor_get(v___x_1551_, 0);
lean_inc(v_a_1552_);
lean_dec_ref(v___x_1551_);
if (lean_obj_tag(v_a_1552_) == 1)
{
lean_object* v_val_1553_; uint8_t v___x_1554_; 
v_val_1553_ = lean_ctor_get(v_a_1552_, 0);
lean_inc(v_val_1553_);
lean_dec_ref(v_a_1552_);
v___x_1554_ = lean_nat_dec_eq(v_val_1553_, v_a_1539_);
lean_dec(v_val_1553_);
if (v___x_1554_ == 0)
{
lean_object* v___x_1555_; 
v___x_1555_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_1541_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; uint8_t v___x_1557_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
lean_inc(v_a_1556_);
lean_dec_ref(v___x_1555_);
v___x_1557_ = lean_unbox(v_a_1556_);
lean_dec(v_a_1556_);
if (v___x_1557_ == 0)
{
lean_dec_ref(v_e_1538_);
goto v___jp_1548_;
}
else
{
lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; 
v___x_1558_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___closed__1);
v___x_1559_ = l_Lean_indentExpr(v_e_1538_);
v___x_1560_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1560_, 0, v___x_1558_);
lean_ctor_set(v___x_1560_, 1, v___x_1559_);
v___x_1561_ = l_Lean_Meta_Sym_reportIssue(v___x_1560_, v_a_1541_, v_a_1542_, v_a_1543_, v_a_1544_, v_a_1545_, v_a_1546_);
if (lean_obj_tag(v___x_1561_) == 0)
{
lean_dec_ref(v___x_1561_);
goto v___jp_1548_;
}
else
{
return v___x_1561_;
}
}
}
else
{
lean_object* v_a_1562_; lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1569_; 
lean_dec_ref(v_e_1538_);
v_a_1562_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1564_ = v___x_1555_;
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
else
{
lean_inc(v_a_1562_);
lean_dec(v___x_1555_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1569_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v___x_1567_; 
if (v_isShared_1565_ == 0)
{
v___x_1567_ = v___x_1564_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v_a_1562_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
}
else
{
lean_dec_ref(v_e_1538_);
goto v___jp_1548_;
}
}
else
{
lean_object* v___f_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
lean_dec(v_a_1552_);
lean_inc(v_a_1539_);
v___f_1570_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1570_, 0, v_e_1538_);
lean_closure_set(v___f_1570_, 1, v_a_1539_);
v___x_1571_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_1572_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1571_, v___f_1570_, v_a_1540_, v_a_1546_);
return v___x_1572_;
}
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
lean_dec_ref(v_e_1538_);
v_a_1573_ = lean_ctor_get(v___x_1551_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1551_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1551_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1551_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
v___jp_1548_:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1549_ = lean_box(0);
v___x_1550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1550_, 0, v___x_1549_);
return v___x_1550_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg___boxed(lean_object* v_e_1581_, lean_object* v_a_1582_, lean_object* v_a_1583_, lean_object* v_a_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_, lean_object* v_a_1590_){
_start:
{
lean_object* v_res_1591_; 
v_res_1591_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(v_e_1581_, v_a_1582_, v_a_1583_, v_a_1584_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_, v_a_1589_);
lean_dec(v_a_1589_);
lean_dec_ref(v_a_1588_);
lean_dec(v_a_1587_);
lean_dec_ref(v_a_1586_);
lean_dec(v_a_1585_);
lean_dec_ref(v_a_1584_);
lean_dec(v_a_1583_);
lean_dec(v_a_1582_);
return v_res_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId(lean_object* v_e_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v_a_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_){
_start:
{
lean_object* v___x_1605_; 
v___x_1605_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(v_e_1592_, v_a_1593_, v_a_1594_, v_a_1598_, v_a_1599_, v_a_1600_, v_a_1601_, v_a_1602_, v_a_1603_);
return v___x_1605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___boxed(lean_object* v_e_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId(v_e_1606_, v_a_1607_, v_a_1608_, v_a_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_, v_a_1617_);
lean_dec(v_a_1617_);
lean_dec_ref(v_a_1616_);
lean_dec(v_a_1615_);
lean_dec_ref(v_a_1614_);
lean_dec(v_a_1613_);
lean_dec_ref(v_a_1612_);
lean_dec(v_a_1611_);
lean_dec_ref(v_a_1610_);
lean_dec(v_a_1609_);
lean_dec(v_a_1608_);
lean_dec(v_a_1607_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0(lean_object* v_00_u03b2_1620_, lean_object* v_x_1621_, lean_object* v_x_1622_, lean_object* v_x_1623_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0___redArg(v_x_1621_, v_x_1622_, v_x_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0(lean_object* v_00_u03b2_1625_, lean_object* v_x_1626_, size_t v_x_1627_, size_t v_x_1628_, lean_object* v_x_1629_, lean_object* v_x_1630_){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___redArg(v_x_1626_, v_x_1627_, v_x_1628_, v_x_1629_, v_x_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1632_, lean_object* v_x_1633_, lean_object* v_x_1634_, lean_object* v_x_1635_, lean_object* v_x_1636_, lean_object* v_x_1637_){
_start:
{
size_t v_x_7466__boxed_1638_; size_t v_x_7467__boxed_1639_; lean_object* v_res_1640_; 
v_x_7466__boxed_1638_ = lean_unbox_usize(v_x_1634_);
lean_dec(v_x_1634_);
v_x_7467__boxed_1639_ = lean_unbox_usize(v_x_1635_);
lean_dec(v_x_1635_);
v_res_1640_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0(v_00_u03b2_1632_, v_x_1633_, v_x_7466__boxed_1638_, v_x_7467__boxed_1639_, v_x_1636_, v_x_1637_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1641_, lean_object* v_n_1642_, lean_object* v_k_1643_, lean_object* v_v_1644_){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1___redArg(v_n_1642_, v_k_1643_, v_v_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_1646_, size_t v_depth_1647_, lean_object* v_keys_1648_, lean_object* v_vals_1649_, lean_object* v_heq_1650_, lean_object* v_i_1651_, lean_object* v_entries_1652_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___redArg(v_depth_1647_, v_keys_1648_, v_vals_1649_, v_i_1651_, v_entries_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_1654_, lean_object* v_depth_1655_, lean_object* v_keys_1656_, lean_object* v_vals_1657_, lean_object* v_heq_1658_, lean_object* v_i_1659_, lean_object* v_entries_1660_){
_start:
{
size_t v_depth_boxed_1661_; lean_object* v_res_1662_; 
v_depth_boxed_1661_ = lean_unbox_usize(v_depth_1655_);
lean_dec(v_depth_1655_);
v_res_1662_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__2(v_00_u03b2_1654_, v_depth_boxed_1661_, v_keys_1656_, v_vals_1657_, v_heq_1658_, v_i_1659_, v_entries_1660_);
lean_dec_ref(v_vals_1657_);
lean_dec_ref(v_keys_1656_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1663_, lean_object* v_x_1664_, lean_object* v_x_1665_, lean_object* v_x_1666_, lean_object* v_x_1667_){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0_spec__0_spec__1_spec__2___redArg(v_x_1664_, v_x_1665_, v_x_1666_, v_x_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0(lean_object* v_e_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_){
_start:
{
lean_object* v___x_1682_; 
v___x_1682_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(v_e_1669_, v___y_1670_, v___y_1671_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_);
return v___x_1682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0___boxed(lean_object* v_e_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_){
_start:
{
lean_object* v_res_1696_; 
v_res_1696_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0(v_e_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_, v___y_1694_);
lean_dec(v___y_1694_);
lean_dec_ref(v___y_1693_);
lean_dec(v___y_1692_);
lean_dec_ref(v___y_1691_);
lean_dec(v___y_1690_);
lean_dec_ref(v___y_1689_);
lean_dec(v___y_1688_);
lean_dec_ref(v___y_1687_);
lean_dec(v___y_1686_);
lean_dec(v___y_1685_);
lean_dec(v___y_1684_);
return v_res_1696_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___closed__0(void){
_start:
{
lean_object* v___f_1697_; 
v___f_1697_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___lam__0___boxed), 13, 0);
return v___f_1697_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM(void){
_start:
{
lean_object* v___f_1698_; 
v___f_1698_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM___closed__0);
return v___f_1698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__0(lean_object* v_e_1699_, lean_object* v___f_1700_, lean_object* v___f_1701_, lean_object* v_size_1702_, lean_object* v_s_1703_){
_start:
{
lean_object* v_id_1704_; lean_object* v_type_1705_; lean_object* v_u_1706_; lean_object* v_semiringInst_1707_; lean_object* v_addFn_x3f_1708_; lean_object* v_mulFn_x3f_1709_; lean_object* v_powFn_x3f_1710_; lean_object* v_natCastFn_x3f_1711_; lean_object* v_denote_1712_; lean_object* v_vars_1713_; lean_object* v_varMap_1714_; lean_object* v___x_1716_; uint8_t v_isShared_1717_; uint8_t v_isSharedCheck_1723_; 
v_id_1704_ = lean_ctor_get(v_s_1703_, 0);
v_type_1705_ = lean_ctor_get(v_s_1703_, 1);
v_u_1706_ = lean_ctor_get(v_s_1703_, 2);
v_semiringInst_1707_ = lean_ctor_get(v_s_1703_, 3);
v_addFn_x3f_1708_ = lean_ctor_get(v_s_1703_, 4);
v_mulFn_x3f_1709_ = lean_ctor_get(v_s_1703_, 5);
v_powFn_x3f_1710_ = lean_ctor_get(v_s_1703_, 6);
v_natCastFn_x3f_1711_ = lean_ctor_get(v_s_1703_, 7);
v_denote_1712_ = lean_ctor_get(v_s_1703_, 8);
v_vars_1713_ = lean_ctor_get(v_s_1703_, 9);
v_varMap_1714_ = lean_ctor_get(v_s_1703_, 10);
v_isSharedCheck_1723_ = !lean_is_exclusive(v_s_1703_);
if (v_isSharedCheck_1723_ == 0)
{
v___x_1716_ = v_s_1703_;
v_isShared_1717_ = v_isSharedCheck_1723_;
goto v_resetjp_1715_;
}
else
{
lean_inc(v_varMap_1714_);
lean_inc(v_vars_1713_);
lean_inc(v_denote_1712_);
lean_inc(v_natCastFn_x3f_1711_);
lean_inc(v_powFn_x3f_1710_);
lean_inc(v_mulFn_x3f_1709_);
lean_inc(v_addFn_x3f_1708_);
lean_inc(v_semiringInst_1707_);
lean_inc(v_u_1706_);
lean_inc(v_type_1705_);
lean_inc(v_id_1704_);
lean_dec(v_s_1703_);
v___x_1716_ = lean_box(0);
v_isShared_1717_ = v_isSharedCheck_1723_;
goto v_resetjp_1715_;
}
v_resetjp_1715_:
{
lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1721_; 
lean_inc_ref(v_e_1699_);
v___x_1718_ = l_Lean_PersistentArray_push___redArg(v_vars_1713_, v_e_1699_);
v___x_1719_ = l_Lean_PersistentHashMap_insert___redArg(v___f_1700_, v___f_1701_, v_varMap_1714_, v_e_1699_, v_size_1702_);
if (v_isShared_1717_ == 0)
{
lean_ctor_set(v___x_1716_, 10, v___x_1719_);
lean_ctor_set(v___x_1716_, 9, v___x_1718_);
v___x_1721_ = v___x_1716_;
goto v_reusejp_1720_;
}
else
{
lean_object* v_reuseFailAlloc_1722_; 
v_reuseFailAlloc_1722_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1722_, 0, v_id_1704_);
lean_ctor_set(v_reuseFailAlloc_1722_, 1, v_type_1705_);
lean_ctor_set(v_reuseFailAlloc_1722_, 2, v_u_1706_);
lean_ctor_set(v_reuseFailAlloc_1722_, 3, v_semiringInst_1707_);
lean_ctor_set(v_reuseFailAlloc_1722_, 4, v_addFn_x3f_1708_);
lean_ctor_set(v_reuseFailAlloc_1722_, 5, v_mulFn_x3f_1709_);
lean_ctor_set(v_reuseFailAlloc_1722_, 6, v_powFn_x3f_1710_);
lean_ctor_set(v_reuseFailAlloc_1722_, 7, v_natCastFn_x3f_1711_);
lean_ctor_set(v_reuseFailAlloc_1722_, 8, v_denote_1712_);
lean_ctor_set(v_reuseFailAlloc_1722_, 9, v___x_1718_);
lean_ctor_set(v_reuseFailAlloc_1722_, 10, v___x_1719_);
v___x_1721_ = v_reuseFailAlloc_1722_;
goto v_reusejp_1720_;
}
v_reusejp_1720_:
{
return v___x_1721_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__1(lean_object* v_toPure_1724_, lean_object* v_size_1725_, lean_object* v_____r_1726_){
_start:
{
lean_object* v___x_1727_; 
v___x_1727_ = lean_apply_2(v_toPure_1724_, lean_box(0), v_size_1725_);
return v___x_1727_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__2(lean_object* v_e_1728_, lean_object* v_inst_1729_, lean_object* v_toBind_1730_, lean_object* v___f_1731_, lean_object* v_____r_1732_){
_start:
{
lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1733_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_1734_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_SolverExtension_markTerm___boxed), 14, 3);
lean_closure_set(v___x_1734_, 0, lean_box(0));
lean_closure_set(v___x_1734_, 1, v___x_1733_);
lean_closure_set(v___x_1734_, 2, v_e_1728_);
v___x_1735_ = lean_apply_2(v_inst_1729_, lean_box(0), v___x_1734_);
v___x_1736_ = lean_apply_4(v_toBind_1730_, lean_box(0), lean_box(0), v___x_1735_, v___f_1731_);
return v___x_1736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__3(lean_object* v_inst_1737_, lean_object* v_e_1738_, lean_object* v_toBind_1739_, lean_object* v___f_1740_, lean_object* v_____r_1741_){
_start:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; 
v___x_1742_ = lean_apply_1(v_inst_1737_, v_e_1738_);
v___x_1743_ = lean_apply_4(v_toBind_1739_, lean_box(0), lean_box(0), v___x_1742_, v___f_1740_);
return v___x_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__4(lean_object* v___f_1744_, lean_object* v___f_1745_, lean_object* v_e_1746_, lean_object* v_toPure_1747_, lean_object* v_inst_1748_, lean_object* v_toBind_1749_, lean_object* v_inst_1750_, lean_object* v_modifySemiring_1751_, lean_object* v_s_1752_){
_start:
{
lean_object* v_vars_1753_; lean_object* v_varMap_1754_; lean_object* v___x_1755_; 
v_vars_1753_ = lean_ctor_get(v_s_1752_, 9);
lean_inc_ref(v_vars_1753_);
v_varMap_1754_ = lean_ctor_get(v_s_1752_, 10);
lean_inc_ref(v_varMap_1754_);
lean_dec_ref(v_s_1752_);
lean_inc_ref(v_e_1746_);
lean_inc_ref(v___f_1745_);
lean_inc_ref(v___f_1744_);
v___x_1755_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_1744_, v___f_1745_, v_varMap_1754_, v_e_1746_);
lean_dec_ref(v_varMap_1754_);
if (lean_obj_tag(v___x_1755_) == 1)
{
lean_object* v_val_1756_; lean_object* v___x_1757_; 
lean_dec_ref(v_vars_1753_);
lean_dec(v_modifySemiring_1751_);
lean_dec(v_inst_1750_);
lean_dec(v_toBind_1749_);
lean_dec(v_inst_1748_);
lean_dec_ref(v_e_1746_);
lean_dec_ref(v___f_1745_);
lean_dec_ref(v___f_1744_);
v_val_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc(v_val_1756_);
lean_dec_ref(v___x_1755_);
v___x_1757_ = lean_apply_2(v_toPure_1747_, lean_box(0), v_val_1756_);
return v___x_1757_;
}
else
{
lean_object* v_size_1758_; lean_object* v___f_1759_; lean_object* v___f_1760_; lean_object* v___f_1761_; lean_object* v___f_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
lean_dec(v___x_1755_);
v_size_1758_ = lean_ctor_get(v_vars_1753_, 2);
lean_inc_n(v_size_1758_, 2);
lean_dec_ref(v_vars_1753_);
lean_inc_ref_n(v_e_1746_, 2);
v___f_1759_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1759_, 0, v_e_1746_);
lean_closure_set(v___f_1759_, 1, v___f_1744_);
lean_closure_set(v___f_1759_, 2, v___f_1745_);
lean_closure_set(v___f_1759_, 3, v_size_1758_);
v___f_1760_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_1760_, 0, v_toPure_1747_);
lean_closure_set(v___f_1760_, 1, v_size_1758_);
lean_inc_n(v_toBind_1749_, 2);
v___f_1761_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__2), 5, 4);
lean_closure_set(v___f_1761_, 0, v_e_1746_);
lean_closure_set(v___f_1761_, 1, v_inst_1748_);
lean_closure_set(v___f_1761_, 2, v_toBind_1749_);
lean_closure_set(v___f_1761_, 3, v___f_1760_);
v___f_1762_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__3), 5, 4);
lean_closure_set(v___f_1762_, 0, v_inst_1750_);
lean_closure_set(v___f_1762_, 1, v_e_1746_);
lean_closure_set(v___f_1762_, 2, v_toBind_1749_);
lean_closure_set(v___f_1762_, 3, v___f_1761_);
v___x_1763_ = lean_apply_1(v_modifySemiring_1751_, v___f_1759_);
v___x_1764_ = lean_apply_4(v_toBind_1749_, lean_box(0), lean_box(0), v___x_1763_, v___f_1762_);
return v___x_1764_;
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__0(void){
_start:
{
lean_object* v___f_1765_; 
v___f_1765_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1___boxed), 2, 0);
return v___f_1765_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__1(void){
_start:
{
lean_object* v___f_1766_; 
v___f_1766_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_hashPtrExpr_unsafe__1___boxed), 1, 0);
return v___f_1766_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg(lean_object* v_inst_1767_, lean_object* v_inst_1768_, lean_object* v_inst_1769_, lean_object* v_inst_1770_, lean_object* v_e_1771_){
_start:
{
lean_object* v_toApplicative_1772_; lean_object* v_toBind_1773_; lean_object* v_getSemiring_1774_; lean_object* v_modifySemiring_1775_; lean_object* v_toPure_1776_; lean_object* v___f_1777_; lean_object* v___f_1778_; lean_object* v___f_1779_; lean_object* v___x_1780_; 
v_toApplicative_1772_ = lean_ctor_get(v_inst_1768_, 0);
lean_inc_ref(v_toApplicative_1772_);
v_toBind_1773_ = lean_ctor_get(v_inst_1768_, 1);
lean_inc_n(v_toBind_1773_, 2);
lean_dec_ref(v_inst_1768_);
v_getSemiring_1774_ = lean_ctor_get(v_inst_1769_, 0);
lean_inc(v_getSemiring_1774_);
v_modifySemiring_1775_ = lean_ctor_get(v_inst_1769_, 1);
lean_inc(v_modifySemiring_1775_);
lean_dec_ref(v_inst_1769_);
v_toPure_1776_ = lean_ctor_get(v_toApplicative_1772_, 1);
lean_inc(v_toPure_1776_);
lean_dec_ref(v_toApplicative_1772_);
v___f_1777_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__0);
v___f_1778_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___closed__1);
v___f_1779_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg___lam__4), 9, 8);
lean_closure_set(v___f_1779_, 0, v___f_1777_);
lean_closure_set(v___f_1779_, 1, v___f_1778_);
lean_closure_set(v___f_1779_, 2, v_e_1771_);
lean_closure_set(v___f_1779_, 3, v_toPure_1776_);
lean_closure_set(v___f_1779_, 4, v_inst_1767_);
lean_closure_set(v___f_1779_, 5, v_toBind_1773_);
lean_closure_set(v___f_1779_, 6, v_inst_1770_);
lean_closure_set(v___f_1779_, 7, v_modifySemiring_1775_);
v___x_1780_ = lean_apply_4(v_toBind_1773_, lean_box(0), lean_box(0), v_getSemiring_1774_, v___f_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore(lean_object* v_m_1781_, lean_object* v_inst_1782_, lean_object* v_inst_1783_, lean_object* v_inst_1784_, lean_object* v_inst_1785_, lean_object* v_e_1786_){
_start:
{
lean_object* v___x_1787_; 
v___x_1787_ = l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___redArg(v_inst_1782_, v_inst_1783_, v_inst_1784_, v_inst_1785_, v_e_1786_);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0(lean_object* v___y_1788_, lean_object* v_e_1789_, lean_object* v_size_1790_, lean_object* v_s_1791_){
_start:
{
lean_object* v_rings_1792_; lean_object* v_typeIdOf_1793_; lean_object* v_exprToRingId_1794_; lean_object* v_semirings_1795_; lean_object* v_stypeIdOf_1796_; lean_object* v_exprToSemiringId_1797_; lean_object* v_ncRings_1798_; lean_object* v_exprToNCRingId_1799_; lean_object* v_nctypeIdOf_1800_; lean_object* v_ncSemirings_1801_; lean_object* v_exprToNCSemiringId_1802_; lean_object* v_ncstypeIdOf_1803_; lean_object* v_steps_1804_; lean_object* v___x_1805_; uint8_t v___x_1806_; 
v_rings_1792_ = lean_ctor_get(v_s_1791_, 0);
v_typeIdOf_1793_ = lean_ctor_get(v_s_1791_, 1);
v_exprToRingId_1794_ = lean_ctor_get(v_s_1791_, 2);
v_semirings_1795_ = lean_ctor_get(v_s_1791_, 3);
v_stypeIdOf_1796_ = lean_ctor_get(v_s_1791_, 4);
v_exprToSemiringId_1797_ = lean_ctor_get(v_s_1791_, 5);
v_ncRings_1798_ = lean_ctor_get(v_s_1791_, 6);
v_exprToNCRingId_1799_ = lean_ctor_get(v_s_1791_, 7);
v_nctypeIdOf_1800_ = lean_ctor_get(v_s_1791_, 8);
v_ncSemirings_1801_ = lean_ctor_get(v_s_1791_, 9);
v_exprToNCSemiringId_1802_ = lean_ctor_get(v_s_1791_, 10);
v_ncstypeIdOf_1803_ = lean_ctor_get(v_s_1791_, 11);
v_steps_1804_ = lean_ctor_get(v_s_1791_, 12);
v___x_1805_ = lean_array_get_size(v_semirings_1795_);
v___x_1806_ = lean_nat_dec_lt(v___y_1788_, v___x_1805_);
if (v___x_1806_ == 0)
{
lean_dec(v_size_1790_);
lean_dec_ref(v_e_1789_);
return v_s_1791_;
}
else
{
lean_object* v___x_1808_; uint8_t v_isShared_1809_; uint8_t v_isSharedCheck_1849_; 
lean_inc(v_steps_1804_);
lean_inc_ref(v_ncstypeIdOf_1803_);
lean_inc_ref(v_exprToNCSemiringId_1802_);
lean_inc_ref(v_ncSemirings_1801_);
lean_inc_ref(v_nctypeIdOf_1800_);
lean_inc_ref(v_exprToNCRingId_1799_);
lean_inc_ref(v_ncRings_1798_);
lean_inc_ref(v_exprToSemiringId_1797_);
lean_inc_ref(v_stypeIdOf_1796_);
lean_inc_ref(v_semirings_1795_);
lean_inc_ref(v_exprToRingId_1794_);
lean_inc_ref(v_typeIdOf_1793_);
lean_inc_ref(v_rings_1792_);
v_isSharedCheck_1849_ = !lean_is_exclusive(v_s_1791_);
if (v_isSharedCheck_1849_ == 0)
{
lean_object* v_unused_1850_; lean_object* v_unused_1851_; lean_object* v_unused_1852_; lean_object* v_unused_1853_; lean_object* v_unused_1854_; lean_object* v_unused_1855_; lean_object* v_unused_1856_; lean_object* v_unused_1857_; lean_object* v_unused_1858_; lean_object* v_unused_1859_; lean_object* v_unused_1860_; lean_object* v_unused_1861_; lean_object* v_unused_1862_; 
v_unused_1850_ = lean_ctor_get(v_s_1791_, 12);
lean_dec(v_unused_1850_);
v_unused_1851_ = lean_ctor_get(v_s_1791_, 11);
lean_dec(v_unused_1851_);
v_unused_1852_ = lean_ctor_get(v_s_1791_, 10);
lean_dec(v_unused_1852_);
v_unused_1853_ = lean_ctor_get(v_s_1791_, 9);
lean_dec(v_unused_1853_);
v_unused_1854_ = lean_ctor_get(v_s_1791_, 8);
lean_dec(v_unused_1854_);
v_unused_1855_ = lean_ctor_get(v_s_1791_, 7);
lean_dec(v_unused_1855_);
v_unused_1856_ = lean_ctor_get(v_s_1791_, 6);
lean_dec(v_unused_1856_);
v_unused_1857_ = lean_ctor_get(v_s_1791_, 5);
lean_dec(v_unused_1857_);
v_unused_1858_ = lean_ctor_get(v_s_1791_, 4);
lean_dec(v_unused_1858_);
v_unused_1859_ = lean_ctor_get(v_s_1791_, 3);
lean_dec(v_unused_1859_);
v_unused_1860_ = lean_ctor_get(v_s_1791_, 2);
lean_dec(v_unused_1860_);
v_unused_1861_ = lean_ctor_get(v_s_1791_, 1);
lean_dec(v_unused_1861_);
v_unused_1862_ = lean_ctor_get(v_s_1791_, 0);
lean_dec(v_unused_1862_);
v___x_1808_ = v_s_1791_;
v_isShared_1809_ = v_isSharedCheck_1849_;
goto v_resetjp_1807_;
}
else
{
lean_dec(v_s_1791_);
v___x_1808_ = lean_box(0);
v_isShared_1809_ = v_isSharedCheck_1849_;
goto v_resetjp_1807_;
}
v_resetjp_1807_:
{
lean_object* v_v_1810_; lean_object* v_toSemiring_1811_; lean_object* v_ringId_1812_; lean_object* v_commSemiringInst_1813_; lean_object* v_addRightCancelInst_x3f_1814_; lean_object* v_toQFn_x3f_1815_; lean_object* v___x_1817_; uint8_t v_isShared_1818_; uint8_t v_isSharedCheck_1848_; 
v_v_1810_ = lean_array_fget(v_semirings_1795_, v___y_1788_);
v_toSemiring_1811_ = lean_ctor_get(v_v_1810_, 0);
v_ringId_1812_ = lean_ctor_get(v_v_1810_, 1);
v_commSemiringInst_1813_ = lean_ctor_get(v_v_1810_, 2);
v_addRightCancelInst_x3f_1814_ = lean_ctor_get(v_v_1810_, 3);
v_toQFn_x3f_1815_ = lean_ctor_get(v_v_1810_, 4);
v_isSharedCheck_1848_ = !lean_is_exclusive(v_v_1810_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1817_ = v_v_1810_;
v_isShared_1818_ = v_isSharedCheck_1848_;
goto v_resetjp_1816_;
}
else
{
lean_inc(v_toQFn_x3f_1815_);
lean_inc(v_addRightCancelInst_x3f_1814_);
lean_inc(v_commSemiringInst_1813_);
lean_inc(v_ringId_1812_);
lean_inc(v_toSemiring_1811_);
lean_dec(v_v_1810_);
v___x_1817_ = lean_box(0);
v_isShared_1818_ = v_isSharedCheck_1848_;
goto v_resetjp_1816_;
}
v_resetjp_1816_:
{
lean_object* v_id_1819_; lean_object* v_type_1820_; lean_object* v_u_1821_; lean_object* v_semiringInst_1822_; lean_object* v_addFn_x3f_1823_; lean_object* v_mulFn_x3f_1824_; lean_object* v_powFn_x3f_1825_; lean_object* v_natCastFn_x3f_1826_; lean_object* v_denote_1827_; lean_object* v_vars_1828_; lean_object* v_varMap_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1847_; 
v_id_1819_ = lean_ctor_get(v_toSemiring_1811_, 0);
v_type_1820_ = lean_ctor_get(v_toSemiring_1811_, 1);
v_u_1821_ = lean_ctor_get(v_toSemiring_1811_, 2);
v_semiringInst_1822_ = lean_ctor_get(v_toSemiring_1811_, 3);
v_addFn_x3f_1823_ = lean_ctor_get(v_toSemiring_1811_, 4);
v_mulFn_x3f_1824_ = lean_ctor_get(v_toSemiring_1811_, 5);
v_powFn_x3f_1825_ = lean_ctor_get(v_toSemiring_1811_, 6);
v_natCastFn_x3f_1826_ = lean_ctor_get(v_toSemiring_1811_, 7);
v_denote_1827_ = lean_ctor_get(v_toSemiring_1811_, 8);
v_vars_1828_ = lean_ctor_get(v_toSemiring_1811_, 9);
v_varMap_1829_ = lean_ctor_get(v_toSemiring_1811_, 10);
v_isSharedCheck_1847_ = !lean_is_exclusive(v_toSemiring_1811_);
if (v_isSharedCheck_1847_ == 0)
{
v___x_1831_ = v_toSemiring_1811_;
v_isShared_1832_ = v_isSharedCheck_1847_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_varMap_1829_);
lean_inc(v_vars_1828_);
lean_inc(v_denote_1827_);
lean_inc(v_natCastFn_x3f_1826_);
lean_inc(v_powFn_x3f_1825_);
lean_inc(v_mulFn_x3f_1824_);
lean_inc(v_addFn_x3f_1823_);
lean_inc(v_semiringInst_1822_);
lean_inc(v_u_1821_);
lean_inc(v_type_1820_);
lean_inc(v_id_1819_);
lean_dec(v_toSemiring_1811_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1847_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1833_; lean_object* v_xs_x27_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1833_ = lean_box(0);
v_xs_x27_1834_ = lean_array_fset(v_semirings_1795_, v___y_1788_, v___x_1833_);
lean_inc_ref(v_e_1789_);
v___x_1835_ = l_Lean_PersistentArray_push___redArg(v_vars_1828_, v_e_1789_);
v___x_1836_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermSemiringId_spec__0___redArg(v_varMap_1829_, v_e_1789_, v_size_1790_);
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 10, v___x_1836_);
lean_ctor_set(v___x_1831_, 9, v___x_1835_);
v___x_1838_ = v___x_1831_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1846_; 
v_reuseFailAlloc_1846_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1846_, 0, v_id_1819_);
lean_ctor_set(v_reuseFailAlloc_1846_, 1, v_type_1820_);
lean_ctor_set(v_reuseFailAlloc_1846_, 2, v_u_1821_);
lean_ctor_set(v_reuseFailAlloc_1846_, 3, v_semiringInst_1822_);
lean_ctor_set(v_reuseFailAlloc_1846_, 4, v_addFn_x3f_1823_);
lean_ctor_set(v_reuseFailAlloc_1846_, 5, v_mulFn_x3f_1824_);
lean_ctor_set(v_reuseFailAlloc_1846_, 6, v_powFn_x3f_1825_);
lean_ctor_set(v_reuseFailAlloc_1846_, 7, v_natCastFn_x3f_1826_);
lean_ctor_set(v_reuseFailAlloc_1846_, 8, v_denote_1827_);
lean_ctor_set(v_reuseFailAlloc_1846_, 9, v___x_1835_);
lean_ctor_set(v_reuseFailAlloc_1846_, 10, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1846_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
lean_object* v___x_1840_; 
if (v_isShared_1818_ == 0)
{
lean_ctor_set(v___x_1817_, 0, v___x_1838_);
v___x_1840_ = v___x_1817_;
goto v_reusejp_1839_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v___x_1838_);
lean_ctor_set(v_reuseFailAlloc_1845_, 1, v_ringId_1812_);
lean_ctor_set(v_reuseFailAlloc_1845_, 2, v_commSemiringInst_1813_);
lean_ctor_set(v_reuseFailAlloc_1845_, 3, v_addRightCancelInst_x3f_1814_);
lean_ctor_set(v_reuseFailAlloc_1845_, 4, v_toQFn_x3f_1815_);
v___x_1840_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1839_;
}
v_reusejp_1839_:
{
lean_object* v___x_1841_; lean_object* v___x_1843_; 
v___x_1841_ = lean_array_fset(v_xs_x27_1834_, v___y_1788_, v___x_1840_);
if (v_isShared_1809_ == 0)
{
lean_ctor_set(v___x_1808_, 3, v___x_1841_);
v___x_1843_ = v___x_1808_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_rings_1792_);
lean_ctor_set(v_reuseFailAlloc_1844_, 1, v_typeIdOf_1793_);
lean_ctor_set(v_reuseFailAlloc_1844_, 2, v_exprToRingId_1794_);
lean_ctor_set(v_reuseFailAlloc_1844_, 3, v___x_1841_);
lean_ctor_set(v_reuseFailAlloc_1844_, 4, v_stypeIdOf_1796_);
lean_ctor_set(v_reuseFailAlloc_1844_, 5, v_exprToSemiringId_1797_);
lean_ctor_set(v_reuseFailAlloc_1844_, 6, v_ncRings_1798_);
lean_ctor_set(v_reuseFailAlloc_1844_, 7, v_exprToNCRingId_1799_);
lean_ctor_set(v_reuseFailAlloc_1844_, 8, v_nctypeIdOf_1800_);
lean_ctor_set(v_reuseFailAlloc_1844_, 9, v_ncSemirings_1801_);
lean_ctor_set(v_reuseFailAlloc_1844_, 10, v_exprToNCSemiringId_1802_);
lean_ctor_set(v_reuseFailAlloc_1844_, 11, v_ncstypeIdOf_1803_);
lean_ctor_set(v_reuseFailAlloc_1844_, 12, v_steps_1804_);
v___x_1843_ = v_reuseFailAlloc_1844_;
goto v_reusejp_1842_;
}
v_reusejp_1842_:
{
return v___x_1843_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0___boxed(lean_object* v___y_1863_, lean_object* v_e_1864_, lean_object* v_size_1865_, lean_object* v_s_1866_){
_start:
{
lean_object* v_res_1867_; 
v_res_1867_ = l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0(v___y_1863_, v_e_1864_, v_size_1865_, v_s_1866_);
lean_dec(v___y_1863_);
return v_res_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0(lean_object* v_e_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_, lean_object* v___y_1872_, lean_object* v___y_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v___y_1869_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
if (lean_obj_tag(v___x_1881_) == 0)
{
lean_object* v_a_1882_; lean_object* v___x_1884_; uint8_t v_isShared_1885_; uint8_t v_isSharedCheck_1932_; 
v_a_1882_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1932_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1932_ == 0)
{
v___x_1884_ = v___x_1881_;
v_isShared_1885_ = v_isSharedCheck_1932_;
goto v_resetjp_1883_;
}
else
{
lean_inc(v_a_1882_);
lean_dec(v___x_1881_);
v___x_1884_ = lean_box(0);
v_isShared_1885_ = v_isSharedCheck_1932_;
goto v_resetjp_1883_;
}
v_resetjp_1883_:
{
lean_object* v_toSemiring_1886_; lean_object* v_vars_1887_; lean_object* v_varMap_1888_; lean_object* v___x_1889_; 
v_toSemiring_1886_ = lean_ctor_get(v_a_1882_, 0);
lean_inc_ref(v_toSemiring_1886_);
lean_dec(v_a_1882_);
v_vars_1887_ = lean_ctor_get(v_toSemiring_1886_, 9);
lean_inc_ref(v_vars_1887_);
v_varMap_1888_ = lean_ctor_get(v_toSemiring_1886_, 10);
lean_inc_ref(v_varMap_1888_);
lean_dec_ref(v_toSemiring_1886_);
v___x_1889_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermSemiringId_x3f_spec__0___redArg(v_varMap_1888_, v_e_1868_);
lean_dec_ref(v_varMap_1888_);
if (lean_obj_tag(v___x_1889_) == 1)
{
lean_object* v_val_1890_; lean_object* v___x_1892_; 
lean_dec_ref(v_vars_1887_);
lean_dec_ref(v_e_1868_);
v_val_1890_ = lean_ctor_get(v___x_1889_, 0);
lean_inc(v_val_1890_);
lean_dec_ref(v___x_1889_);
if (v_isShared_1885_ == 0)
{
lean_ctor_set(v___x_1884_, 0, v_val_1890_);
v___x_1892_ = v___x_1884_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v_val_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
else
{
lean_object* v_size_1894_; lean_object* v___f_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
lean_dec(v___x_1889_);
lean_del_object(v___x_1884_);
v_size_1894_ = lean_ctor_get(v_vars_1887_, 2);
lean_inc_n(v_size_1894_, 2);
lean_dec_ref(v_vars_1887_);
lean_inc_ref(v_e_1868_);
lean_inc(v___y_1869_);
v___f_1895_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1895_, 0, v___y_1869_);
lean_closure_set(v___f_1895_, 1, v_e_1868_);
lean_closure_set(v___f_1895_, 2, v_size_1894_);
v___x_1896_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_1897_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1896_, v___f_1895_, v___y_1870_, v___y_1879_);
if (lean_obj_tag(v___x_1897_) == 0)
{
lean_object* v___x_1898_; 
lean_dec_ref(v___x_1897_);
lean_inc_ref(v_e_1868_);
v___x_1898_ = l_Lean_Meta_Grind_Arith_CommRing_setTermSemiringId___redArg(v_e_1868_, v___y_1869_, v___y_1870_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
if (lean_obj_tag(v___x_1898_) == 0)
{
lean_object* v___x_1899_; 
lean_dec_ref(v___x_1898_);
v___x_1899_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_1896_, v_e_1868_, v___y_1870_, v___y_1871_, v___y_1872_, v___y_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_);
if (lean_obj_tag(v___x_1899_) == 0)
{
lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1906_; 
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1906_ == 0)
{
lean_object* v_unused_1907_; 
v_unused_1907_ = lean_ctor_get(v___x_1899_, 0);
lean_dec(v_unused_1907_);
v___x_1901_ = v___x_1899_;
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
else
{
lean_dec(v___x_1899_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1904_; 
if (v_isShared_1902_ == 0)
{
lean_ctor_set(v___x_1901_, 0, v_size_1894_);
v___x_1904_ = v___x_1901_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_size_1894_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
else
{
lean_object* v_a_1908_; lean_object* v___x_1910_; uint8_t v_isShared_1911_; uint8_t v_isSharedCheck_1915_; 
lean_dec(v_size_1894_);
v_a_1908_ = lean_ctor_get(v___x_1899_, 0);
v_isSharedCheck_1915_ = !lean_is_exclusive(v___x_1899_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1910_ = v___x_1899_;
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
else
{
lean_inc(v_a_1908_);
lean_dec(v___x_1899_);
v___x_1910_ = lean_box(0);
v_isShared_1911_ = v_isSharedCheck_1915_;
goto v_resetjp_1909_;
}
v_resetjp_1909_:
{
lean_object* v___x_1913_; 
if (v_isShared_1911_ == 0)
{
v___x_1913_ = v___x_1910_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1914_; 
v_reuseFailAlloc_1914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1914_, 0, v_a_1908_);
v___x_1913_ = v_reuseFailAlloc_1914_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
return v___x_1913_;
}
}
}
}
else
{
lean_object* v_a_1916_; lean_object* v___x_1918_; uint8_t v_isShared_1919_; uint8_t v_isSharedCheck_1923_; 
lean_dec(v_size_1894_);
lean_dec_ref(v_e_1868_);
v_a_1916_ = lean_ctor_get(v___x_1898_, 0);
v_isSharedCheck_1923_ = !lean_is_exclusive(v___x_1898_);
if (v_isSharedCheck_1923_ == 0)
{
v___x_1918_ = v___x_1898_;
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
else
{
lean_inc(v_a_1916_);
lean_dec(v___x_1898_);
v___x_1918_ = lean_box(0);
v_isShared_1919_ = v_isSharedCheck_1923_;
goto v_resetjp_1917_;
}
v_resetjp_1917_:
{
lean_object* v___x_1921_; 
if (v_isShared_1919_ == 0)
{
v___x_1921_ = v___x_1918_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1922_; 
v_reuseFailAlloc_1922_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1922_, 0, v_a_1916_);
v___x_1921_ = v_reuseFailAlloc_1922_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
return v___x_1921_;
}
}
}
}
else
{
lean_object* v_a_1924_; lean_object* v___x_1926_; uint8_t v_isShared_1927_; uint8_t v_isSharedCheck_1931_; 
lean_dec(v_size_1894_);
lean_dec_ref(v_e_1868_);
v_a_1924_ = lean_ctor_get(v___x_1897_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1897_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1926_ = v___x_1897_;
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
else
{
lean_inc(v_a_1924_);
lean_dec(v___x_1897_);
v___x_1926_ = lean_box(0);
v_isShared_1927_ = v_isSharedCheck_1931_;
goto v_resetjp_1925_;
}
v_resetjp_1925_:
{
lean_object* v___x_1929_; 
if (v_isShared_1927_ == 0)
{
v___x_1929_ = v___x_1926_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1924_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
}
}
else
{
lean_object* v_a_1933_; lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1940_; 
lean_dec_ref(v_e_1868_);
v_a_1933_ = lean_ctor_get(v___x_1881_, 0);
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1881_);
if (v_isSharedCheck_1940_ == 0)
{
v___x_1935_ = v___x_1881_;
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
else
{
lean_inc(v_a_1933_);
lean_dec(v___x_1881_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v_a_1933_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0___boxed(lean_object* v_e_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_){
_start:
{
lean_object* v_res_1954_; 
v_res_1954_ = l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0(v_e_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec(v___y_1944_);
lean_dec(v___y_1943_);
lean_dec(v___y_1942_);
return v_res_1954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVar(lean_object* v_e_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_){
_start:
{
lean_object* v___x_1968_; 
v___x_1968_ = l_Lean_Meta_Grind_Arith_CommRing_mkSVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkSVar_spec__0(v_e_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_, v_a_1965_, v_a_1966_);
return v___x_1968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkSVar___boxed(lean_object* v_e_1969_, lean_object* v_a_1970_, lean_object* v_a_1971_, lean_object* v_a_1972_, lean_object* v_a_1973_, lean_object* v_a_1974_, lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_, lean_object* v_a_1980_, lean_object* v_a_1981_){
_start:
{
lean_object* v_res_1982_; 
v_res_1982_ = l_Lean_Meta_Grind_Arith_CommRing_mkSVar(v_e_1969_, v_a_1970_, v_a_1971_, v_a_1972_, v_a_1973_, v_a_1974_, v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_, v_a_1979_, v_a_1980_);
lean_dec(v_a_1980_);
lean_dec_ref(v_a_1979_);
lean_dec(v_a_1978_);
lean_dec_ref(v_a_1977_);
lean_dec(v_a_1976_);
lean_dec_ref(v_a_1975_);
lean_dec(v_a_1974_);
lean_dec_ref(v_a_1973_);
lean_dec(v_a_1972_);
lean_dec(v_a_1971_);
lean_dec(v_a_1970_);
return v_res_1982_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__1(lean_object* v_a_1983_){
_start:
{
lean_object* v___x_1984_; 
v___x_1984_ = lean_nat_to_int(v_a_1983_);
return v___x_1984_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1985_; 
v___x_1985_ = l_Lean_Meta_Grind_instInhabitedGoalM(lean_box(0));
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5(lean_object* v_msg_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_){
_start:
{
lean_object* v___x_1999_; lean_object* v___f_2000_; lean_object* v___x_40218__overap_2001_; lean_object* v___x_2002_; 
v___x_1999_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___closed__0);
v___f_2000_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2000_, 0, v___x_1999_);
v___x_40218__overap_2001_ = lean_panic_fn_borrowed(v___f_2000_, v_msg_1986_);
lean_dec_ref(v___f_2000_);
lean_inc(v___y_1997_);
lean_inc_ref(v___y_1996_);
lean_inc(v___y_1995_);
lean_inc_ref(v___y_1994_);
lean_inc(v___y_1993_);
lean_inc_ref(v___y_1992_);
lean_inc(v___y_1991_);
lean_inc_ref(v___y_1990_);
lean_inc(v___y_1989_);
lean_inc(v___y_1988_);
lean_inc(v___y_1987_);
v___x_2002_ = lean_apply_12(v___x_40218__overap_2001_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_, lean_box(0));
return v___x_2002_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5___boxed(lean_object* v_msg_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_, lean_object* v___y_2014_, lean_object* v___y_2015_){
_start:
{
lean_object* v_res_2016_; 
v_res_2016_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5(v_msg_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_, v___y_2010_, v___y_2011_, v___y_2012_, v___y_2013_, v___y_2014_);
lean_dec(v___y_2014_);
lean_dec_ref(v___y_2013_);
lean_dec(v___y_2012_);
lean_dec_ref(v___y_2011_);
lean_dec(v___y_2010_);
lean_dec_ref(v___y_2009_);
lean_dec(v___y_2008_);
lean_dec_ref(v___y_2007_);
lean_dec(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec(v___y_2004_);
return v_res_2016_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_2017_; 
v___x_2017_ = lean_mk_string_unchecked("failed to find instance", 23, 23);
return v___x_2017_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; 
v___x_2018_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__0, &l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__0_once, _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__0);
v___x_2019_ = l_Lean_stringToMessageData(v___x_2018_);
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(lean_object* v_type_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_){
_start:
{
lean_object* v___x_2026_; 
lean_inc_ref(v_type_2020_);
v___x_2026_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v_type_2020_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_);
if (lean_obj_tag(v___x_2026_) == 0)
{
lean_object* v_a_2027_; lean_object* v___x_2029_; uint8_t v_isShared_2030_; uint8_t v_isSharedCheck_2039_; 
v_a_2027_ = lean_ctor_get(v___x_2026_, 0);
v_isSharedCheck_2039_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2039_ == 0)
{
v___x_2029_ = v___x_2026_;
v_isShared_2030_ = v_isSharedCheck_2039_;
goto v_resetjp_2028_;
}
else
{
lean_inc(v_a_2027_);
lean_dec(v___x_2026_);
v___x_2029_ = lean_box(0);
v_isShared_2030_ = v_isSharedCheck_2039_;
goto v_resetjp_2028_;
}
v_resetjp_2028_:
{
if (lean_obj_tag(v_a_2027_) == 1)
{
lean_object* v_val_2031_; lean_object* v___x_2033_; 
lean_dec_ref(v_type_2020_);
v_val_2031_ = lean_ctor_get(v_a_2027_, 0);
lean_inc(v_val_2031_);
lean_dec_ref(v_a_2027_);
if (v_isShared_2030_ == 0)
{
lean_ctor_set(v___x_2029_, 0, v_val_2031_);
v___x_2033_ = v___x_2029_;
goto v_reusejp_2032_;
}
else
{
lean_object* v_reuseFailAlloc_2034_; 
v_reuseFailAlloc_2034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2034_, 0, v_val_2031_);
v___x_2033_ = v_reuseFailAlloc_2034_;
goto v_reusejp_2032_;
}
v_reusejp_2032_:
{
return v___x_2033_;
}
}
else
{
lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; 
lean_del_object(v___x_2029_);
lean_dec(v_a_2027_);
v___x_2035_ = lean_obj_once(&l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1, &l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1_once, _init_l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___closed__1);
v___x_2036_ = l_Lean_indentExpr(v_type_2020_);
v___x_2037_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2035_);
lean_ctor_set(v___x_2037_, 1, v___x_2036_);
v___x_2038_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring_spec__0___redArg(v___x_2037_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_);
return v___x_2038_;
}
}
}
else
{
lean_object* v_a_2040_; lean_object* v___x_2042_; uint8_t v_isShared_2043_; uint8_t v_isSharedCheck_2047_; 
lean_dec_ref(v_type_2020_);
v_a_2040_ = lean_ctor_get(v___x_2026_, 0);
v_isSharedCheck_2047_ = !lean_is_exclusive(v___x_2026_);
if (v_isSharedCheck_2047_ == 0)
{
v___x_2042_ = v___x_2026_;
v_isShared_2043_ = v_isSharedCheck_2047_;
goto v_resetjp_2041_;
}
else
{
lean_inc(v_a_2040_);
lean_dec(v___x_2026_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg___boxed(lean_object* v_type_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
lean_object* v_res_2054_; 
v_res_2054_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(v_type_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
return v_res_2054_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0(void){
_start:
{
lean_object* v___x_2055_; 
v___x_2055_ = lean_mk_string_unchecked("HPow", 4, 4);
return v___x_2055_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__1(void){
_start:
{
lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2056_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0);
v___x_2057_ = l_Lean_Name_mkStr1(v___x_2056_);
return v___x_2057_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2(void){
_start:
{
lean_object* v___x_2058_; lean_object* v___x_2059_; 
v___x_2058_ = lean_unsigned_to_nat(0u);
v___x_2059_ = l_Lean_Level_ofNat(v___x_2058_);
return v___x_2059_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2060_; 
v___x_2060_ = lean_mk_string_unchecked("npow", 4, 4);
return v___x_2060_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4(void){
_start:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2061_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__3, &l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__3_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__3);
v___x_2062_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2);
v___x_2063_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1);
v___x_2064_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0);
v___x_2065_ = l_Lean_Name_mkStr4(v___x_2064_, v___x_2063_, v___x_2062_, v___x_2061_);
return v___x_2065_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__5(void){
_start:
{
lean_object* v___x_2066_; 
v___x_2066_ = lean_mk_string_unchecked("hPow", 4, 4);
return v___x_2066_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6(void){
_start:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2067_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__5, &l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__5_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__5);
v___x_2068_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__0);
v___x_2069_ = l_Lean_Name_mkStr2(v___x_2068_, v___x_2067_);
return v___x_2069_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6(lean_object* v_u_2070_, lean_object* v_type_2071_, lean_object* v_semiringInst_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; 
v___x_2085_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__1);
v___x_2086_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__2);
v___x_2087_ = lean_box(0);
lean_inc(v_u_2070_);
v___x_2088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2088_, 0, v_u_2070_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
lean_inc_ref(v___x_2088_);
v___x_2089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2089_, 0, v___x_2086_);
lean_ctor_set(v___x_2089_, 1, v___x_2088_);
v___x_2090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2090_, 0, v_u_2070_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
lean_inc_ref(v___x_2090_);
v___x_2091_ = l_Lean_mkConst(v___x_2085_, v___x_2090_);
v___x_2092_ = l_Lean_Nat_mkType;
lean_inc_ref_n(v_type_2071_, 2);
v___x_2093_ = l_Lean_mkApp3(v___x_2091_, v_type_2071_, v___x_2092_, v_type_2071_);
v___x_2094_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(v___x_2093_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_);
if (lean_obj_tag(v___x_2094_) == 0)
{
lean_object* v_a_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v_inst_x27_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v_a_2095_ = lean_ctor_get(v___x_2094_, 0);
lean_inc_n(v_a_2095_, 2);
lean_dec_ref(v___x_2094_);
v___x_2096_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__4);
v___x_2097_ = l_Lean_mkConst(v___x_2096_, v___x_2088_);
lean_inc_ref(v_type_2071_);
v_inst_x27_2098_ = l_Lean_mkAppB(v___x_2097_, v_type_2071_, v_semiringInst_2072_);
v___x_2099_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___closed__6);
v___x_2100_ = l_Lean_Meta_Grind_Arith_CommRing_checkInst(v___x_2099_, v_a_2095_, v_inst_x27_2098_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; 
lean_dec_ref(v___x_2100_);
v___x_2101_ = l_Lean_mkConst(v___x_2099_, v___x_2090_);
lean_inc_ref(v_type_2071_);
v___x_2102_ = l_Lean_mkApp4(v___x_2101_, v_type_2071_, v___x_2092_, v_type_2071_, v_a_2095_);
v___x_2103_ = l_Lean_Meta_Sym_canon(v___x_2102_, v___y_2078_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2105_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
lean_inc(v_a_2104_);
lean_dec_ref(v___x_2103_);
v___x_2105_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_2104_, v___y_2079_, v___y_2083_);
return v___x_2105_;
}
else
{
return v___x_2103_;
}
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_dec(v_a_2095_);
lean_dec_ref(v___x_2090_);
lean_dec_ref(v_type_2071_);
v_a_2106_ = lean_ctor_get(v___x_2100_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2100_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2100_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2100_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
else
{
lean_dec_ref(v___x_2090_);
lean_dec_ref(v___x_2088_);
lean_dec_ref(v_semiringInst_2072_);
lean_dec_ref(v_type_2071_);
return v___x_2094_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6___boxed(lean_object* v_u_2114_, lean_object* v_type_2115_, lean_object* v_semiringInst_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_){
_start:
{
lean_object* v_res_2129_; 
v_res_2129_ = l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6(v_u_2114_, v_type_2115_, v_semiringInst_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_, v___y_2126_, v___y_2127_);
lean_dec(v___y_2127_);
lean_dec_ref(v___y_2126_);
lean_dec(v___y_2125_);
lean_dec_ref(v___y_2124_);
lean_dec(v___y_2123_);
lean_dec_ref(v___y_2122_);
lean_dec(v___y_2121_);
lean_dec_ref(v___y_2120_);
lean_dec(v___y_2119_);
lean_dec(v___y_2118_);
lean_dec(v___y_2117_);
return v_res_2129_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4___lam__0(lean_object* v_a_2130_, lean_object* v_s_2131_){
_start:
{
lean_object* v_toRing_2132_; lean_object* v_invFn_x3f_2133_; lean_object* v_semiringId_x3f_2134_; lean_object* v_commSemiringInst_2135_; lean_object* v_commRingInst_2136_; lean_object* v_noZeroDivInst_x3f_2137_; lean_object* v_fieldInst_x3f_2138_; lean_object* v_powIdentityInst_x3f_2139_; lean_object* v_denoteEntries_2140_; lean_object* v_nextId_2141_; lean_object* v_steps_2142_; lean_object* v_queue_2143_; lean_object* v_basis_2144_; lean_object* v_diseqs_2145_; uint8_t v_recheck_2146_; lean_object* v_invSet_2147_; lean_object* v_powIdentityVarCount_2148_; lean_object* v_numEq0_x3f_2149_; uint8_t v_numEq0Updated_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2182_; 
v_toRing_2132_ = lean_ctor_get(v_s_2131_, 0);
v_invFn_x3f_2133_ = lean_ctor_get(v_s_2131_, 1);
v_semiringId_x3f_2134_ = lean_ctor_get(v_s_2131_, 2);
v_commSemiringInst_2135_ = lean_ctor_get(v_s_2131_, 3);
v_commRingInst_2136_ = lean_ctor_get(v_s_2131_, 4);
v_noZeroDivInst_x3f_2137_ = lean_ctor_get(v_s_2131_, 5);
v_fieldInst_x3f_2138_ = lean_ctor_get(v_s_2131_, 6);
v_powIdentityInst_x3f_2139_ = lean_ctor_get(v_s_2131_, 7);
v_denoteEntries_2140_ = lean_ctor_get(v_s_2131_, 8);
v_nextId_2141_ = lean_ctor_get(v_s_2131_, 9);
v_steps_2142_ = lean_ctor_get(v_s_2131_, 10);
v_queue_2143_ = lean_ctor_get(v_s_2131_, 11);
v_basis_2144_ = lean_ctor_get(v_s_2131_, 12);
v_diseqs_2145_ = lean_ctor_get(v_s_2131_, 13);
v_recheck_2146_ = lean_ctor_get_uint8(v_s_2131_, sizeof(void*)*17);
v_invSet_2147_ = lean_ctor_get(v_s_2131_, 14);
v_powIdentityVarCount_2148_ = lean_ctor_get(v_s_2131_, 15);
v_numEq0_x3f_2149_ = lean_ctor_get(v_s_2131_, 16);
v_numEq0Updated_2150_ = lean_ctor_get_uint8(v_s_2131_, sizeof(void*)*17 + 1);
v_isSharedCheck_2182_ = !lean_is_exclusive(v_s_2131_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2152_ = v_s_2131_;
v_isShared_2153_ = v_isSharedCheck_2182_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_numEq0_x3f_2149_);
lean_inc(v_powIdentityVarCount_2148_);
lean_inc(v_invSet_2147_);
lean_inc(v_diseqs_2145_);
lean_inc(v_basis_2144_);
lean_inc(v_queue_2143_);
lean_inc(v_steps_2142_);
lean_inc(v_nextId_2141_);
lean_inc(v_denoteEntries_2140_);
lean_inc(v_powIdentityInst_x3f_2139_);
lean_inc(v_fieldInst_x3f_2138_);
lean_inc(v_noZeroDivInst_x3f_2137_);
lean_inc(v_commRingInst_2136_);
lean_inc(v_commSemiringInst_2135_);
lean_inc(v_semiringId_x3f_2134_);
lean_inc(v_invFn_x3f_2133_);
lean_inc(v_toRing_2132_);
lean_dec(v_s_2131_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2182_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v_id_2154_; lean_object* v_type_2155_; lean_object* v_u_2156_; lean_object* v_ringInst_2157_; lean_object* v_semiringInst_2158_; lean_object* v_charInst_x3f_2159_; lean_object* v_addFn_x3f_2160_; lean_object* v_mulFn_x3f_2161_; lean_object* v_subFn_x3f_2162_; lean_object* v_negFn_x3f_2163_; lean_object* v_intCastFn_x3f_2164_; lean_object* v_natCastFn_x3f_2165_; lean_object* v_one_x3f_2166_; lean_object* v_vars_2167_; lean_object* v_varMap_2168_; lean_object* v_denote_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2180_; 
v_id_2154_ = lean_ctor_get(v_toRing_2132_, 0);
v_type_2155_ = lean_ctor_get(v_toRing_2132_, 1);
v_u_2156_ = lean_ctor_get(v_toRing_2132_, 2);
v_ringInst_2157_ = lean_ctor_get(v_toRing_2132_, 3);
v_semiringInst_2158_ = lean_ctor_get(v_toRing_2132_, 4);
v_charInst_x3f_2159_ = lean_ctor_get(v_toRing_2132_, 5);
v_addFn_x3f_2160_ = lean_ctor_get(v_toRing_2132_, 6);
v_mulFn_x3f_2161_ = lean_ctor_get(v_toRing_2132_, 7);
v_subFn_x3f_2162_ = lean_ctor_get(v_toRing_2132_, 8);
v_negFn_x3f_2163_ = lean_ctor_get(v_toRing_2132_, 9);
v_intCastFn_x3f_2164_ = lean_ctor_get(v_toRing_2132_, 11);
v_natCastFn_x3f_2165_ = lean_ctor_get(v_toRing_2132_, 12);
v_one_x3f_2166_ = lean_ctor_get(v_toRing_2132_, 13);
v_vars_2167_ = lean_ctor_get(v_toRing_2132_, 14);
v_varMap_2168_ = lean_ctor_get(v_toRing_2132_, 15);
v_denote_2169_ = lean_ctor_get(v_toRing_2132_, 16);
v_isSharedCheck_2180_ = !lean_is_exclusive(v_toRing_2132_);
if (v_isSharedCheck_2180_ == 0)
{
lean_object* v_unused_2181_; 
v_unused_2181_ = lean_ctor_get(v_toRing_2132_, 10);
lean_dec(v_unused_2181_);
v___x_2171_ = v_toRing_2132_;
v_isShared_2172_ = v_isSharedCheck_2180_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_denote_2169_);
lean_inc(v_varMap_2168_);
lean_inc(v_vars_2167_);
lean_inc(v_one_x3f_2166_);
lean_inc(v_natCastFn_x3f_2165_);
lean_inc(v_intCastFn_x3f_2164_);
lean_inc(v_negFn_x3f_2163_);
lean_inc(v_subFn_x3f_2162_);
lean_inc(v_mulFn_x3f_2161_);
lean_inc(v_addFn_x3f_2160_);
lean_inc(v_charInst_x3f_2159_);
lean_inc(v_semiringInst_2158_);
lean_inc(v_ringInst_2157_);
lean_inc(v_u_2156_);
lean_inc(v_type_2155_);
lean_inc(v_id_2154_);
lean_dec(v_toRing_2132_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2180_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
lean_object* v___x_2173_; lean_object* v___x_2175_; 
v___x_2173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2173_, 0, v_a_2130_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 10, v___x_2173_);
v___x_2175_ = v___x_2171_;
goto v_reusejp_2174_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_id_2154_);
lean_ctor_set(v_reuseFailAlloc_2179_, 1, v_type_2155_);
lean_ctor_set(v_reuseFailAlloc_2179_, 2, v_u_2156_);
lean_ctor_set(v_reuseFailAlloc_2179_, 3, v_ringInst_2157_);
lean_ctor_set(v_reuseFailAlloc_2179_, 4, v_semiringInst_2158_);
lean_ctor_set(v_reuseFailAlloc_2179_, 5, v_charInst_x3f_2159_);
lean_ctor_set(v_reuseFailAlloc_2179_, 6, v_addFn_x3f_2160_);
lean_ctor_set(v_reuseFailAlloc_2179_, 7, v_mulFn_x3f_2161_);
lean_ctor_set(v_reuseFailAlloc_2179_, 8, v_subFn_x3f_2162_);
lean_ctor_set(v_reuseFailAlloc_2179_, 9, v_negFn_x3f_2163_);
lean_ctor_set(v_reuseFailAlloc_2179_, 10, v___x_2173_);
lean_ctor_set(v_reuseFailAlloc_2179_, 11, v_intCastFn_x3f_2164_);
lean_ctor_set(v_reuseFailAlloc_2179_, 12, v_natCastFn_x3f_2165_);
lean_ctor_set(v_reuseFailAlloc_2179_, 13, v_one_x3f_2166_);
lean_ctor_set(v_reuseFailAlloc_2179_, 14, v_vars_2167_);
lean_ctor_set(v_reuseFailAlloc_2179_, 15, v_varMap_2168_);
lean_ctor_set(v_reuseFailAlloc_2179_, 16, v_denote_2169_);
v___x_2175_ = v_reuseFailAlloc_2179_;
goto v_reusejp_2174_;
}
v_reusejp_2174_:
{
lean_object* v___x_2177_; 
if (v_isShared_2153_ == 0)
{
lean_ctor_set(v___x_2152_, 0, v___x_2175_);
v___x_2177_ = v___x_2152_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v___x_2175_);
lean_ctor_set(v_reuseFailAlloc_2178_, 1, v_invFn_x3f_2133_);
lean_ctor_set(v_reuseFailAlloc_2178_, 2, v_semiringId_x3f_2134_);
lean_ctor_set(v_reuseFailAlloc_2178_, 3, v_commSemiringInst_2135_);
lean_ctor_set(v_reuseFailAlloc_2178_, 4, v_commRingInst_2136_);
lean_ctor_set(v_reuseFailAlloc_2178_, 5, v_noZeroDivInst_x3f_2137_);
lean_ctor_set(v_reuseFailAlloc_2178_, 6, v_fieldInst_x3f_2138_);
lean_ctor_set(v_reuseFailAlloc_2178_, 7, v_powIdentityInst_x3f_2139_);
lean_ctor_set(v_reuseFailAlloc_2178_, 8, v_denoteEntries_2140_);
lean_ctor_set(v_reuseFailAlloc_2178_, 9, v_nextId_2141_);
lean_ctor_set(v_reuseFailAlloc_2178_, 10, v_steps_2142_);
lean_ctor_set(v_reuseFailAlloc_2178_, 11, v_queue_2143_);
lean_ctor_set(v_reuseFailAlloc_2178_, 12, v_basis_2144_);
lean_ctor_set(v_reuseFailAlloc_2178_, 13, v_diseqs_2145_);
lean_ctor_set(v_reuseFailAlloc_2178_, 14, v_invSet_2147_);
lean_ctor_set(v_reuseFailAlloc_2178_, 15, v_powIdentityVarCount_2148_);
lean_ctor_set(v_reuseFailAlloc_2178_, 16, v_numEq0_x3f_2149_);
lean_ctor_set_uint8(v_reuseFailAlloc_2178_, sizeof(void*)*17, v_recheck_2146_);
lean_ctor_set_uint8(v_reuseFailAlloc_2178_, sizeof(void*)*17 + 1, v_numEq0Updated_2150_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4(lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_){
_start:
{
lean_object* v___x_2195_; 
v___x_2195_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
if (lean_obj_tag(v___x_2195_) == 0)
{
lean_object* v_a_2196_; lean_object* v___x_2198_; uint8_t v_isShared_2199_; uint8_t v_isSharedCheck_2229_; 
v_a_2196_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2198_ = v___x_2195_;
v_isShared_2199_ = v_isSharedCheck_2229_;
goto v_resetjp_2197_;
}
else
{
lean_inc(v_a_2196_);
lean_dec(v___x_2195_);
v___x_2198_ = lean_box(0);
v_isShared_2199_ = v_isSharedCheck_2229_;
goto v_resetjp_2197_;
}
v_resetjp_2197_:
{
lean_object* v_toRing_2200_; lean_object* v_powFn_x3f_2201_; 
v_toRing_2200_ = lean_ctor_get(v_a_2196_, 0);
lean_inc_ref(v_toRing_2200_);
lean_dec(v_a_2196_);
v_powFn_x3f_2201_ = lean_ctor_get(v_toRing_2200_, 10);
if (lean_obj_tag(v_powFn_x3f_2201_) == 1)
{
lean_object* v_val_2202_; lean_object* v___x_2204_; 
lean_inc_ref(v_powFn_x3f_2201_);
lean_dec_ref(v_toRing_2200_);
v_val_2202_ = lean_ctor_get(v_powFn_x3f_2201_, 0);
lean_inc(v_val_2202_);
lean_dec_ref(v_powFn_x3f_2201_);
if (v_isShared_2199_ == 0)
{
lean_ctor_set(v___x_2198_, 0, v_val_2202_);
v___x_2204_ = v___x_2198_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2205_; 
v_reuseFailAlloc_2205_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2205_, 0, v_val_2202_);
v___x_2204_ = v_reuseFailAlloc_2205_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
return v___x_2204_;
}
}
else
{
lean_object* v_type_2206_; lean_object* v_u_2207_; lean_object* v_semiringInst_2208_; lean_object* v___x_2209_; 
lean_del_object(v___x_2198_);
v_type_2206_ = lean_ctor_get(v_toRing_2200_, 1);
lean_inc_ref(v_type_2206_);
v_u_2207_ = lean_ctor_get(v_toRing_2200_, 2);
lean_inc(v_u_2207_);
v_semiringInst_2208_ = lean_ctor_get(v_toRing_2200_, 4);
lean_inc_ref(v_semiringInst_2208_);
lean_dec_ref(v_toRing_2200_);
v___x_2209_ = l_Lean_Meta_Grind_Arith_CommRing_mkPowFn___at___00Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4_spec__6(v_u_2207_, v_type_2206_, v_semiringInst_2208_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v___f_2211_; lean_object* v___x_2212_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc_n(v_a_2210_, 2);
lean_dec_ref(v___x_2209_);
v___f_2211_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4___lam__0), 2, 1);
lean_closure_set(v___f_2211_, 0, v_a_2210_);
v___x_2212_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(v___f_2211_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_);
if (lean_obj_tag(v___x_2212_) == 0)
{
lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2219_; 
v_isSharedCheck_2219_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2219_ == 0)
{
lean_object* v_unused_2220_; 
v_unused_2220_ = lean_ctor_get(v___x_2212_, 0);
lean_dec(v_unused_2220_);
v___x_2214_ = v___x_2212_;
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
else
{
lean_dec(v___x_2212_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2219_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2217_; 
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 0, v_a_2210_);
v___x_2217_ = v___x_2214_;
goto v_reusejp_2216_;
}
else
{
lean_object* v_reuseFailAlloc_2218_; 
v_reuseFailAlloc_2218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2218_, 0, v_a_2210_);
v___x_2217_ = v_reuseFailAlloc_2218_;
goto v_reusejp_2216_;
}
v_reusejp_2216_:
{
return v___x_2217_;
}
}
}
else
{
lean_object* v_a_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2228_; 
lean_dec(v_a_2210_);
v_a_2221_ = lean_ctor_get(v___x_2212_, 0);
v_isSharedCheck_2228_ = !lean_is_exclusive(v___x_2212_);
if (v_isSharedCheck_2228_ == 0)
{
v___x_2223_ = v___x_2212_;
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_a_2221_);
lean_dec(v___x_2212_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2228_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___x_2226_; 
if (v_isShared_2224_ == 0)
{
v___x_2226_ = v___x_2223_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2227_; 
v_reuseFailAlloc_2227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2227_, 0, v_a_2221_);
v___x_2226_ = v_reuseFailAlloc_2227_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
return v___x_2226_;
}
}
}
}
else
{
return v___x_2209_;
}
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
v_a_2230_ = lean_ctor_get(v___x_2195_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2195_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2195_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2195_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4___boxed(lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4(v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_, v___y_2246_, v___y_2247_, v___y_2248_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
lean_dec(v___y_2246_);
lean_dec_ref(v___y_2245_);
lean_dec(v___y_2244_);
lean_dec_ref(v___y_2243_);
lean_dec(v___y_2242_);
lean_dec_ref(v___y_2241_);
lean_dec(v___y_2240_);
lean_dec(v___y_2239_);
lean_dec(v___y_2238_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3(lean_object* v_type_2251_, lean_object* v_u_2252_, lean_object* v_instDeclName_2253_, lean_object* v_declName_2254_, lean_object* v_expectedInst_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_, lean_object* v___y_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2268_ = lean_box(0);
lean_inc_n(v_u_2252_, 2);
v___x_2269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2269_, 0, v_u_2252_);
lean_ctor_set(v___x_2269_, 1, v___x_2268_);
v___x_2270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2270_, 0, v_u_2252_);
lean_ctor_set(v___x_2270_, 1, v___x_2269_);
v___x_2271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2271_, 0, v_u_2252_);
lean_ctor_set(v___x_2271_, 1, v___x_2270_);
lean_inc_ref(v___x_2271_);
v___x_2272_ = l_Lean_mkConst(v_instDeclName_2253_, v___x_2271_);
lean_inc_ref_n(v_type_2251_, 3);
v___x_2273_ = l_Lean_mkApp3(v___x_2272_, v_type_2251_, v_type_2251_, v_type_2251_);
v___x_2274_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(v___x_2273_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_);
if (lean_obj_tag(v___x_2274_) == 0)
{
lean_object* v_a_2275_; lean_object* v___x_2276_; 
v_a_2275_ = lean_ctor_get(v___x_2274_, 0);
lean_inc_n(v_a_2275_, 2);
lean_dec_ref(v___x_2274_);
lean_inc(v_declName_2254_);
v___x_2276_ = l_Lean_Meta_Grind_Arith_CommRing_checkInst(v_declName_2254_, v_a_2275_, v_expectedInst_2255_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_);
if (lean_obj_tag(v___x_2276_) == 0)
{
lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
lean_dec_ref(v___x_2276_);
v___x_2277_ = l_Lean_mkConst(v_declName_2254_, v___x_2271_);
lean_inc_ref_n(v_type_2251_, 2);
v___x_2278_ = l_Lean_mkApp4(v___x_2277_, v_type_2251_, v_type_2251_, v_type_2251_, v_a_2275_);
v___x_2279_ = l_Lean_Meta_Sym_canon(v___x_2278_, v___y_2261_, v___y_2262_, v___y_2263_, v___y_2264_, v___y_2265_, v___y_2266_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2281_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc(v_a_2280_);
lean_dec_ref(v___x_2279_);
v___x_2281_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_2280_, v___y_2262_, v___y_2266_);
return v___x_2281_;
}
else
{
return v___x_2279_;
}
}
else
{
lean_object* v_a_2282_; lean_object* v___x_2284_; uint8_t v_isShared_2285_; uint8_t v_isSharedCheck_2289_; 
lean_dec(v_a_2275_);
lean_dec_ref(v___x_2271_);
lean_dec(v_declName_2254_);
lean_dec_ref(v_type_2251_);
v_a_2282_ = lean_ctor_get(v___x_2276_, 0);
v_isSharedCheck_2289_ = !lean_is_exclusive(v___x_2276_);
if (v_isSharedCheck_2289_ == 0)
{
v___x_2284_ = v___x_2276_;
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
else
{
lean_inc(v_a_2282_);
lean_dec(v___x_2276_);
v___x_2284_ = lean_box(0);
v_isShared_2285_ = v_isSharedCheck_2289_;
goto v_resetjp_2283_;
}
v_resetjp_2283_:
{
lean_object* v___x_2287_; 
if (v_isShared_2285_ == 0)
{
v___x_2287_ = v___x_2284_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2288_; 
v_reuseFailAlloc_2288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2288_, 0, v_a_2282_);
v___x_2287_ = v_reuseFailAlloc_2288_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
return v___x_2287_;
}
}
}
}
else
{
lean_dec_ref(v___x_2271_);
lean_dec_ref(v_expectedInst_2255_);
lean_dec(v_declName_2254_);
lean_dec_ref(v_type_2251_);
return v___x_2274_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3___boxed(lean_object** _args){
lean_object* v_type_2290_ = _args[0];
lean_object* v_u_2291_ = _args[1];
lean_object* v_instDeclName_2292_ = _args[2];
lean_object* v_declName_2293_ = _args[3];
lean_object* v_expectedInst_2294_ = _args[4];
lean_object* v___y_2295_ = _args[5];
lean_object* v___y_2296_ = _args[6];
lean_object* v___y_2297_ = _args[7];
lean_object* v___y_2298_ = _args[8];
lean_object* v___y_2299_ = _args[9];
lean_object* v___y_2300_ = _args[10];
lean_object* v___y_2301_ = _args[11];
lean_object* v___y_2302_ = _args[12];
lean_object* v___y_2303_ = _args[13];
lean_object* v___y_2304_ = _args[14];
lean_object* v___y_2305_ = _args[15];
lean_object* v___y_2306_ = _args[16];
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3(v_type_2290_, v_u_2291_, v_instDeclName_2292_, v_declName_2293_, v_expectedInst_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_);
lean_dec(v___y_2305_);
lean_dec_ref(v___y_2304_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
lean_dec(v___y_2297_);
lean_dec(v___y_2296_);
lean_dec(v___y_2295_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2___lam__0(lean_object* v_a_2308_, lean_object* v_s_2309_){
_start:
{
lean_object* v_toRing_2310_; lean_object* v_invFn_x3f_2311_; lean_object* v_semiringId_x3f_2312_; lean_object* v_commSemiringInst_2313_; lean_object* v_commRingInst_2314_; lean_object* v_noZeroDivInst_x3f_2315_; lean_object* v_fieldInst_x3f_2316_; lean_object* v_powIdentityInst_x3f_2317_; lean_object* v_denoteEntries_2318_; lean_object* v_nextId_2319_; lean_object* v_steps_2320_; lean_object* v_queue_2321_; lean_object* v_basis_2322_; lean_object* v_diseqs_2323_; uint8_t v_recheck_2324_; lean_object* v_invSet_2325_; lean_object* v_powIdentityVarCount_2326_; lean_object* v_numEq0_x3f_2327_; uint8_t v_numEq0Updated_2328_; lean_object* v___x_2330_; uint8_t v_isShared_2331_; uint8_t v_isSharedCheck_2360_; 
v_toRing_2310_ = lean_ctor_get(v_s_2309_, 0);
v_invFn_x3f_2311_ = lean_ctor_get(v_s_2309_, 1);
v_semiringId_x3f_2312_ = lean_ctor_get(v_s_2309_, 2);
v_commSemiringInst_2313_ = lean_ctor_get(v_s_2309_, 3);
v_commRingInst_2314_ = lean_ctor_get(v_s_2309_, 4);
v_noZeroDivInst_x3f_2315_ = lean_ctor_get(v_s_2309_, 5);
v_fieldInst_x3f_2316_ = lean_ctor_get(v_s_2309_, 6);
v_powIdentityInst_x3f_2317_ = lean_ctor_get(v_s_2309_, 7);
v_denoteEntries_2318_ = lean_ctor_get(v_s_2309_, 8);
v_nextId_2319_ = lean_ctor_get(v_s_2309_, 9);
v_steps_2320_ = lean_ctor_get(v_s_2309_, 10);
v_queue_2321_ = lean_ctor_get(v_s_2309_, 11);
v_basis_2322_ = lean_ctor_get(v_s_2309_, 12);
v_diseqs_2323_ = lean_ctor_get(v_s_2309_, 13);
v_recheck_2324_ = lean_ctor_get_uint8(v_s_2309_, sizeof(void*)*17);
v_invSet_2325_ = lean_ctor_get(v_s_2309_, 14);
v_powIdentityVarCount_2326_ = lean_ctor_get(v_s_2309_, 15);
v_numEq0_x3f_2327_ = lean_ctor_get(v_s_2309_, 16);
v_numEq0Updated_2328_ = lean_ctor_get_uint8(v_s_2309_, sizeof(void*)*17 + 1);
v_isSharedCheck_2360_ = !lean_is_exclusive(v_s_2309_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2330_ = v_s_2309_;
v_isShared_2331_ = v_isSharedCheck_2360_;
goto v_resetjp_2329_;
}
else
{
lean_inc(v_numEq0_x3f_2327_);
lean_inc(v_powIdentityVarCount_2326_);
lean_inc(v_invSet_2325_);
lean_inc(v_diseqs_2323_);
lean_inc(v_basis_2322_);
lean_inc(v_queue_2321_);
lean_inc(v_steps_2320_);
lean_inc(v_nextId_2319_);
lean_inc(v_denoteEntries_2318_);
lean_inc(v_powIdentityInst_x3f_2317_);
lean_inc(v_fieldInst_x3f_2316_);
lean_inc(v_noZeroDivInst_x3f_2315_);
lean_inc(v_commRingInst_2314_);
lean_inc(v_commSemiringInst_2313_);
lean_inc(v_semiringId_x3f_2312_);
lean_inc(v_invFn_x3f_2311_);
lean_inc(v_toRing_2310_);
lean_dec(v_s_2309_);
v___x_2330_ = lean_box(0);
v_isShared_2331_ = v_isSharedCheck_2360_;
goto v_resetjp_2329_;
}
v_resetjp_2329_:
{
lean_object* v_id_2332_; lean_object* v_type_2333_; lean_object* v_u_2334_; lean_object* v_ringInst_2335_; lean_object* v_semiringInst_2336_; lean_object* v_charInst_x3f_2337_; lean_object* v_mulFn_x3f_2338_; lean_object* v_subFn_x3f_2339_; lean_object* v_negFn_x3f_2340_; lean_object* v_powFn_x3f_2341_; lean_object* v_intCastFn_x3f_2342_; lean_object* v_natCastFn_x3f_2343_; lean_object* v_one_x3f_2344_; lean_object* v_vars_2345_; lean_object* v_varMap_2346_; lean_object* v_denote_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2358_; 
v_id_2332_ = lean_ctor_get(v_toRing_2310_, 0);
v_type_2333_ = lean_ctor_get(v_toRing_2310_, 1);
v_u_2334_ = lean_ctor_get(v_toRing_2310_, 2);
v_ringInst_2335_ = lean_ctor_get(v_toRing_2310_, 3);
v_semiringInst_2336_ = lean_ctor_get(v_toRing_2310_, 4);
v_charInst_x3f_2337_ = lean_ctor_get(v_toRing_2310_, 5);
v_mulFn_x3f_2338_ = lean_ctor_get(v_toRing_2310_, 7);
v_subFn_x3f_2339_ = lean_ctor_get(v_toRing_2310_, 8);
v_negFn_x3f_2340_ = lean_ctor_get(v_toRing_2310_, 9);
v_powFn_x3f_2341_ = lean_ctor_get(v_toRing_2310_, 10);
v_intCastFn_x3f_2342_ = lean_ctor_get(v_toRing_2310_, 11);
v_natCastFn_x3f_2343_ = lean_ctor_get(v_toRing_2310_, 12);
v_one_x3f_2344_ = lean_ctor_get(v_toRing_2310_, 13);
v_vars_2345_ = lean_ctor_get(v_toRing_2310_, 14);
v_varMap_2346_ = lean_ctor_get(v_toRing_2310_, 15);
v_denote_2347_ = lean_ctor_get(v_toRing_2310_, 16);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_toRing_2310_);
if (v_isSharedCheck_2358_ == 0)
{
lean_object* v_unused_2359_; 
v_unused_2359_ = lean_ctor_get(v_toRing_2310_, 6);
lean_dec(v_unused_2359_);
v___x_2349_ = v_toRing_2310_;
v_isShared_2350_ = v_isSharedCheck_2358_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_denote_2347_);
lean_inc(v_varMap_2346_);
lean_inc(v_vars_2345_);
lean_inc(v_one_x3f_2344_);
lean_inc(v_natCastFn_x3f_2343_);
lean_inc(v_intCastFn_x3f_2342_);
lean_inc(v_powFn_x3f_2341_);
lean_inc(v_negFn_x3f_2340_);
lean_inc(v_subFn_x3f_2339_);
lean_inc(v_mulFn_x3f_2338_);
lean_inc(v_charInst_x3f_2337_);
lean_inc(v_semiringInst_2336_);
lean_inc(v_ringInst_2335_);
lean_inc(v_u_2334_);
lean_inc(v_type_2333_);
lean_inc(v_id_2332_);
lean_dec(v_toRing_2310_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2358_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v___x_2351_; lean_object* v___x_2353_; 
v___x_2351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2351_, 0, v_a_2308_);
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 6, v___x_2351_);
v___x_2353_ = v___x_2349_;
goto v_reusejp_2352_;
}
else
{
lean_object* v_reuseFailAlloc_2357_; 
v_reuseFailAlloc_2357_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2357_, 0, v_id_2332_);
lean_ctor_set(v_reuseFailAlloc_2357_, 1, v_type_2333_);
lean_ctor_set(v_reuseFailAlloc_2357_, 2, v_u_2334_);
lean_ctor_set(v_reuseFailAlloc_2357_, 3, v_ringInst_2335_);
lean_ctor_set(v_reuseFailAlloc_2357_, 4, v_semiringInst_2336_);
lean_ctor_set(v_reuseFailAlloc_2357_, 5, v_charInst_x3f_2337_);
lean_ctor_set(v_reuseFailAlloc_2357_, 6, v___x_2351_);
lean_ctor_set(v_reuseFailAlloc_2357_, 7, v_mulFn_x3f_2338_);
lean_ctor_set(v_reuseFailAlloc_2357_, 8, v_subFn_x3f_2339_);
lean_ctor_set(v_reuseFailAlloc_2357_, 9, v_negFn_x3f_2340_);
lean_ctor_set(v_reuseFailAlloc_2357_, 10, v_powFn_x3f_2341_);
lean_ctor_set(v_reuseFailAlloc_2357_, 11, v_intCastFn_x3f_2342_);
lean_ctor_set(v_reuseFailAlloc_2357_, 12, v_natCastFn_x3f_2343_);
lean_ctor_set(v_reuseFailAlloc_2357_, 13, v_one_x3f_2344_);
lean_ctor_set(v_reuseFailAlloc_2357_, 14, v_vars_2345_);
lean_ctor_set(v_reuseFailAlloc_2357_, 15, v_varMap_2346_);
lean_ctor_set(v_reuseFailAlloc_2357_, 16, v_denote_2347_);
v___x_2353_ = v_reuseFailAlloc_2357_;
goto v_reusejp_2352_;
}
v_reusejp_2352_:
{
lean_object* v___x_2355_; 
if (v_isShared_2331_ == 0)
{
lean_ctor_set(v___x_2330_, 0, v___x_2353_);
v___x_2355_ = v___x_2330_;
goto v_reusejp_2354_;
}
else
{
lean_object* v_reuseFailAlloc_2356_; 
v_reuseFailAlloc_2356_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2356_, 0, v___x_2353_);
lean_ctor_set(v_reuseFailAlloc_2356_, 1, v_invFn_x3f_2311_);
lean_ctor_set(v_reuseFailAlloc_2356_, 2, v_semiringId_x3f_2312_);
lean_ctor_set(v_reuseFailAlloc_2356_, 3, v_commSemiringInst_2313_);
lean_ctor_set(v_reuseFailAlloc_2356_, 4, v_commRingInst_2314_);
lean_ctor_set(v_reuseFailAlloc_2356_, 5, v_noZeroDivInst_x3f_2315_);
lean_ctor_set(v_reuseFailAlloc_2356_, 6, v_fieldInst_x3f_2316_);
lean_ctor_set(v_reuseFailAlloc_2356_, 7, v_powIdentityInst_x3f_2317_);
lean_ctor_set(v_reuseFailAlloc_2356_, 8, v_denoteEntries_2318_);
lean_ctor_set(v_reuseFailAlloc_2356_, 9, v_nextId_2319_);
lean_ctor_set(v_reuseFailAlloc_2356_, 10, v_steps_2320_);
lean_ctor_set(v_reuseFailAlloc_2356_, 11, v_queue_2321_);
lean_ctor_set(v_reuseFailAlloc_2356_, 12, v_basis_2322_);
lean_ctor_set(v_reuseFailAlloc_2356_, 13, v_diseqs_2323_);
lean_ctor_set(v_reuseFailAlloc_2356_, 14, v_invSet_2325_);
lean_ctor_set(v_reuseFailAlloc_2356_, 15, v_powIdentityVarCount_2326_);
lean_ctor_set(v_reuseFailAlloc_2356_, 16, v_numEq0_x3f_2327_);
lean_ctor_set_uint8(v_reuseFailAlloc_2356_, sizeof(void*)*17, v_recheck_2324_);
lean_ctor_set_uint8(v_reuseFailAlloc_2356_, sizeof(void*)*17 + 1, v_numEq0Updated_2328_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2(lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_){
_start:
{
lean_object* v___x_2373_; 
v___x_2373_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
if (lean_obj_tag(v___x_2373_) == 0)
{
lean_object* v_a_2374_; lean_object* v___x_2376_; uint8_t v_isShared_2377_; uint8_t v_isSharedCheck_2417_; 
v_a_2374_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2376_ = v___x_2373_;
v_isShared_2377_ = v_isSharedCheck_2417_;
goto v_resetjp_2375_;
}
else
{
lean_inc(v_a_2374_);
lean_dec(v___x_2373_);
v___x_2376_ = lean_box(0);
v_isShared_2377_ = v_isSharedCheck_2417_;
goto v_resetjp_2375_;
}
v_resetjp_2375_:
{
lean_object* v_toRing_2378_; lean_object* v_addFn_x3f_2379_; 
v_toRing_2378_ = lean_ctor_get(v_a_2374_, 0);
lean_inc_ref(v_toRing_2378_);
lean_dec(v_a_2374_);
v_addFn_x3f_2379_ = lean_ctor_get(v_toRing_2378_, 6);
if (lean_obj_tag(v_addFn_x3f_2379_) == 1)
{
lean_object* v_val_2380_; lean_object* v___x_2382_; 
lean_inc_ref(v_addFn_x3f_2379_);
lean_dec_ref(v_toRing_2378_);
v_val_2380_ = lean_ctor_get(v_addFn_x3f_2379_, 0);
lean_inc(v_val_2380_);
lean_dec_ref(v_addFn_x3f_2379_);
if (v_isShared_2377_ == 0)
{
lean_ctor_set(v___x_2376_, 0, v_val_2380_);
v___x_2382_ = v___x_2376_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v_val_2380_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
else
{
lean_object* v_type_2384_; lean_object* v_u_2385_; lean_object* v_semiringInst_2386_; lean_object* v___x_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v_expectedInst_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
lean_del_object(v___x_2376_);
v_type_2384_ = lean_ctor_get(v_toRing_2378_, 1);
lean_inc_ref_n(v_type_2384_, 3);
v_u_2385_ = lean_ctor_get(v_toRing_2378_, 2);
lean_inc_n(v_u_2385_, 2);
v_semiringInst_2386_ = lean_ctor_get(v_toRing_2378_, 4);
lean_inc_ref(v_semiringInst_2386_);
lean_dec_ref(v_toRing_2378_);
v___x_2387_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__1);
v___x_2388_ = lean_box(0);
v___x_2389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2389_, 0, v_u_2385_);
lean_ctor_set(v___x_2389_, 1, v___x_2388_);
lean_inc_ref(v___x_2389_);
v___x_2390_ = l_Lean_mkConst(v___x_2387_, v___x_2389_);
v___x_2391_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__4);
v___x_2392_ = l_Lean_mkConst(v___x_2391_, v___x_2389_);
v___x_2393_ = l_Lean_mkAppB(v___x_2392_, v_type_2384_, v_semiringInst_2386_);
v_expectedInst_2394_ = l_Lean_mkAppB(v___x_2390_, v_type_2384_, v___x_2393_);
v___x_2395_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__6);
v___x_2396_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__8);
v___x_2397_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3(v_type_2384_, v_u_2385_, v___x_2395_, v___x_2396_, v_expectedInst_2394_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
if (lean_obj_tag(v___x_2397_) == 0)
{
lean_object* v_a_2398_; lean_object* v___f_2399_; lean_object* v___x_2400_; 
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
lean_inc_n(v_a_2398_, 2);
lean_dec_ref(v___x_2397_);
v___f_2399_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2___lam__0), 2, 1);
lean_closure_set(v___f_2399_, 0, v_a_2398_);
v___x_2400_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(v___f_2399_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_);
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2407_; 
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2400_);
if (v_isSharedCheck_2407_ == 0)
{
lean_object* v_unused_2408_; 
v_unused_2408_ = lean_ctor_get(v___x_2400_, 0);
lean_dec(v_unused_2408_);
v___x_2402_ = v___x_2400_;
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
else
{
lean_dec(v___x_2400_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2407_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2405_; 
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v_a_2398_);
v___x_2405_ = v___x_2402_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_a_2398_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
}
else
{
lean_object* v_a_2409_; lean_object* v___x_2411_; uint8_t v_isShared_2412_; uint8_t v_isSharedCheck_2416_; 
lean_dec(v_a_2398_);
v_a_2409_ = lean_ctor_get(v___x_2400_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v___x_2400_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2411_ = v___x_2400_;
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
else
{
lean_inc(v_a_2409_);
lean_dec(v___x_2400_);
v___x_2411_ = lean_box(0);
v_isShared_2412_ = v_isSharedCheck_2416_;
goto v_resetjp_2410_;
}
v_resetjp_2410_:
{
lean_object* v___x_2414_; 
if (v_isShared_2412_ == 0)
{
v___x_2414_ = v___x_2411_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_a_2409_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
}
else
{
return v___x_2397_;
}
}
}
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2425_; 
v_a_2418_ = lean_ctor_get(v___x_2373_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2373_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2420_ = v___x_2373_;
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2373_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2___boxed(lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
lean_object* v_res_2438_; 
v_res_2438_ = l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2(v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_, v___y_2435_, v___y_2436_);
lean_dec(v___y_2436_);
lean_dec_ref(v___y_2435_);
lean_dec(v___y_2434_);
lean_dec_ref(v___y_2433_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec(v___y_2430_);
lean_dec_ref(v___y_2429_);
lean_dec(v___y_2428_);
lean_dec(v___y_2427_);
lean_dec(v___y_2426_);
return v_res_2438_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3___lam__0(lean_object* v_a_2439_, lean_object* v_s_2440_){
_start:
{
lean_object* v_toRing_2441_; lean_object* v_invFn_x3f_2442_; lean_object* v_semiringId_x3f_2443_; lean_object* v_commSemiringInst_2444_; lean_object* v_commRingInst_2445_; lean_object* v_noZeroDivInst_x3f_2446_; lean_object* v_fieldInst_x3f_2447_; lean_object* v_powIdentityInst_x3f_2448_; lean_object* v_denoteEntries_2449_; lean_object* v_nextId_2450_; lean_object* v_steps_2451_; lean_object* v_queue_2452_; lean_object* v_basis_2453_; lean_object* v_diseqs_2454_; uint8_t v_recheck_2455_; lean_object* v_invSet_2456_; lean_object* v_powIdentityVarCount_2457_; lean_object* v_numEq0_x3f_2458_; uint8_t v_numEq0Updated_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2491_; 
v_toRing_2441_ = lean_ctor_get(v_s_2440_, 0);
v_invFn_x3f_2442_ = lean_ctor_get(v_s_2440_, 1);
v_semiringId_x3f_2443_ = lean_ctor_get(v_s_2440_, 2);
v_commSemiringInst_2444_ = lean_ctor_get(v_s_2440_, 3);
v_commRingInst_2445_ = lean_ctor_get(v_s_2440_, 4);
v_noZeroDivInst_x3f_2446_ = lean_ctor_get(v_s_2440_, 5);
v_fieldInst_x3f_2447_ = lean_ctor_get(v_s_2440_, 6);
v_powIdentityInst_x3f_2448_ = lean_ctor_get(v_s_2440_, 7);
v_denoteEntries_2449_ = lean_ctor_get(v_s_2440_, 8);
v_nextId_2450_ = lean_ctor_get(v_s_2440_, 9);
v_steps_2451_ = lean_ctor_get(v_s_2440_, 10);
v_queue_2452_ = lean_ctor_get(v_s_2440_, 11);
v_basis_2453_ = lean_ctor_get(v_s_2440_, 12);
v_diseqs_2454_ = lean_ctor_get(v_s_2440_, 13);
v_recheck_2455_ = lean_ctor_get_uint8(v_s_2440_, sizeof(void*)*17);
v_invSet_2456_ = lean_ctor_get(v_s_2440_, 14);
v_powIdentityVarCount_2457_ = lean_ctor_get(v_s_2440_, 15);
v_numEq0_x3f_2458_ = lean_ctor_get(v_s_2440_, 16);
v_numEq0Updated_2459_ = lean_ctor_get_uint8(v_s_2440_, sizeof(void*)*17 + 1);
v_isSharedCheck_2491_ = !lean_is_exclusive(v_s_2440_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2461_ = v_s_2440_;
v_isShared_2462_ = v_isSharedCheck_2491_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_numEq0_x3f_2458_);
lean_inc(v_powIdentityVarCount_2457_);
lean_inc(v_invSet_2456_);
lean_inc(v_diseqs_2454_);
lean_inc(v_basis_2453_);
lean_inc(v_queue_2452_);
lean_inc(v_steps_2451_);
lean_inc(v_nextId_2450_);
lean_inc(v_denoteEntries_2449_);
lean_inc(v_powIdentityInst_x3f_2448_);
lean_inc(v_fieldInst_x3f_2447_);
lean_inc(v_noZeroDivInst_x3f_2446_);
lean_inc(v_commRingInst_2445_);
lean_inc(v_commSemiringInst_2444_);
lean_inc(v_semiringId_x3f_2443_);
lean_inc(v_invFn_x3f_2442_);
lean_inc(v_toRing_2441_);
lean_dec(v_s_2440_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2491_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
lean_object* v_id_2463_; lean_object* v_type_2464_; lean_object* v_u_2465_; lean_object* v_ringInst_2466_; lean_object* v_semiringInst_2467_; lean_object* v_charInst_x3f_2468_; lean_object* v_addFn_x3f_2469_; lean_object* v_subFn_x3f_2470_; lean_object* v_negFn_x3f_2471_; lean_object* v_powFn_x3f_2472_; lean_object* v_intCastFn_x3f_2473_; lean_object* v_natCastFn_x3f_2474_; lean_object* v_one_x3f_2475_; lean_object* v_vars_2476_; lean_object* v_varMap_2477_; lean_object* v_denote_2478_; lean_object* v___x_2480_; uint8_t v_isShared_2481_; uint8_t v_isSharedCheck_2489_; 
v_id_2463_ = lean_ctor_get(v_toRing_2441_, 0);
v_type_2464_ = lean_ctor_get(v_toRing_2441_, 1);
v_u_2465_ = lean_ctor_get(v_toRing_2441_, 2);
v_ringInst_2466_ = lean_ctor_get(v_toRing_2441_, 3);
v_semiringInst_2467_ = lean_ctor_get(v_toRing_2441_, 4);
v_charInst_x3f_2468_ = lean_ctor_get(v_toRing_2441_, 5);
v_addFn_x3f_2469_ = lean_ctor_get(v_toRing_2441_, 6);
v_subFn_x3f_2470_ = lean_ctor_get(v_toRing_2441_, 8);
v_negFn_x3f_2471_ = lean_ctor_get(v_toRing_2441_, 9);
v_powFn_x3f_2472_ = lean_ctor_get(v_toRing_2441_, 10);
v_intCastFn_x3f_2473_ = lean_ctor_get(v_toRing_2441_, 11);
v_natCastFn_x3f_2474_ = lean_ctor_get(v_toRing_2441_, 12);
v_one_x3f_2475_ = lean_ctor_get(v_toRing_2441_, 13);
v_vars_2476_ = lean_ctor_get(v_toRing_2441_, 14);
v_varMap_2477_ = lean_ctor_get(v_toRing_2441_, 15);
v_denote_2478_ = lean_ctor_get(v_toRing_2441_, 16);
v_isSharedCheck_2489_ = !lean_is_exclusive(v_toRing_2441_);
if (v_isSharedCheck_2489_ == 0)
{
lean_object* v_unused_2490_; 
v_unused_2490_ = lean_ctor_get(v_toRing_2441_, 7);
lean_dec(v_unused_2490_);
v___x_2480_ = v_toRing_2441_;
v_isShared_2481_ = v_isSharedCheck_2489_;
goto v_resetjp_2479_;
}
else
{
lean_inc(v_denote_2478_);
lean_inc(v_varMap_2477_);
lean_inc(v_vars_2476_);
lean_inc(v_one_x3f_2475_);
lean_inc(v_natCastFn_x3f_2474_);
lean_inc(v_intCastFn_x3f_2473_);
lean_inc(v_powFn_x3f_2472_);
lean_inc(v_negFn_x3f_2471_);
lean_inc(v_subFn_x3f_2470_);
lean_inc(v_addFn_x3f_2469_);
lean_inc(v_charInst_x3f_2468_);
lean_inc(v_semiringInst_2467_);
lean_inc(v_ringInst_2466_);
lean_inc(v_u_2465_);
lean_inc(v_type_2464_);
lean_inc(v_id_2463_);
lean_dec(v_toRing_2441_);
v___x_2480_ = lean_box(0);
v_isShared_2481_ = v_isSharedCheck_2489_;
goto v_resetjp_2479_;
}
v_resetjp_2479_:
{
lean_object* v___x_2482_; lean_object* v___x_2484_; 
v___x_2482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2482_, 0, v_a_2439_);
if (v_isShared_2481_ == 0)
{
lean_ctor_set(v___x_2480_, 7, v___x_2482_);
v___x_2484_ = v___x_2480_;
goto v_reusejp_2483_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_id_2463_);
lean_ctor_set(v_reuseFailAlloc_2488_, 1, v_type_2464_);
lean_ctor_set(v_reuseFailAlloc_2488_, 2, v_u_2465_);
lean_ctor_set(v_reuseFailAlloc_2488_, 3, v_ringInst_2466_);
lean_ctor_set(v_reuseFailAlloc_2488_, 4, v_semiringInst_2467_);
lean_ctor_set(v_reuseFailAlloc_2488_, 5, v_charInst_x3f_2468_);
lean_ctor_set(v_reuseFailAlloc_2488_, 6, v_addFn_x3f_2469_);
lean_ctor_set(v_reuseFailAlloc_2488_, 7, v___x_2482_);
lean_ctor_set(v_reuseFailAlloc_2488_, 8, v_subFn_x3f_2470_);
lean_ctor_set(v_reuseFailAlloc_2488_, 9, v_negFn_x3f_2471_);
lean_ctor_set(v_reuseFailAlloc_2488_, 10, v_powFn_x3f_2472_);
lean_ctor_set(v_reuseFailAlloc_2488_, 11, v_intCastFn_x3f_2473_);
lean_ctor_set(v_reuseFailAlloc_2488_, 12, v_natCastFn_x3f_2474_);
lean_ctor_set(v_reuseFailAlloc_2488_, 13, v_one_x3f_2475_);
lean_ctor_set(v_reuseFailAlloc_2488_, 14, v_vars_2476_);
lean_ctor_set(v_reuseFailAlloc_2488_, 15, v_varMap_2477_);
lean_ctor_set(v_reuseFailAlloc_2488_, 16, v_denote_2478_);
v___x_2484_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2483_;
}
v_reusejp_2483_:
{
lean_object* v___x_2486_; 
if (v_isShared_2462_ == 0)
{
lean_ctor_set(v___x_2461_, 0, v___x_2484_);
v___x_2486_ = v___x_2461_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2487_; 
v_reuseFailAlloc_2487_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2487_, 0, v___x_2484_);
lean_ctor_set(v_reuseFailAlloc_2487_, 1, v_invFn_x3f_2442_);
lean_ctor_set(v_reuseFailAlloc_2487_, 2, v_semiringId_x3f_2443_);
lean_ctor_set(v_reuseFailAlloc_2487_, 3, v_commSemiringInst_2444_);
lean_ctor_set(v_reuseFailAlloc_2487_, 4, v_commRingInst_2445_);
lean_ctor_set(v_reuseFailAlloc_2487_, 5, v_noZeroDivInst_x3f_2446_);
lean_ctor_set(v_reuseFailAlloc_2487_, 6, v_fieldInst_x3f_2447_);
lean_ctor_set(v_reuseFailAlloc_2487_, 7, v_powIdentityInst_x3f_2448_);
lean_ctor_set(v_reuseFailAlloc_2487_, 8, v_denoteEntries_2449_);
lean_ctor_set(v_reuseFailAlloc_2487_, 9, v_nextId_2450_);
lean_ctor_set(v_reuseFailAlloc_2487_, 10, v_steps_2451_);
lean_ctor_set(v_reuseFailAlloc_2487_, 11, v_queue_2452_);
lean_ctor_set(v_reuseFailAlloc_2487_, 12, v_basis_2453_);
lean_ctor_set(v_reuseFailAlloc_2487_, 13, v_diseqs_2454_);
lean_ctor_set(v_reuseFailAlloc_2487_, 14, v_invSet_2456_);
lean_ctor_set(v_reuseFailAlloc_2487_, 15, v_powIdentityVarCount_2457_);
lean_ctor_set(v_reuseFailAlloc_2487_, 16, v_numEq0_x3f_2458_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, sizeof(void*)*17, v_recheck_2455_);
lean_ctor_set_uint8(v_reuseFailAlloc_2487_, sizeof(void*)*17 + 1, v_numEq0Updated_2459_);
v___x_2486_ = v_reuseFailAlloc_2487_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
return v___x_2486_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3(lean_object* v___y_2492_, lean_object* v___y_2493_, lean_object* v___y_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_){
_start:
{
lean_object* v___x_2504_; 
v___x_2504_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2548_; 
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2548_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2548_ == 0)
{
v___x_2507_ = v___x_2504_;
v_isShared_2508_ = v_isSharedCheck_2548_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2504_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2548_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
lean_object* v_toRing_2509_; lean_object* v_mulFn_x3f_2510_; 
v_toRing_2509_ = lean_ctor_get(v_a_2505_, 0);
lean_inc_ref(v_toRing_2509_);
lean_dec(v_a_2505_);
v_mulFn_x3f_2510_ = lean_ctor_get(v_toRing_2509_, 7);
if (lean_obj_tag(v_mulFn_x3f_2510_) == 1)
{
lean_object* v_val_2511_; lean_object* v___x_2513_; 
lean_inc_ref(v_mulFn_x3f_2510_);
lean_dec_ref(v_toRing_2509_);
v_val_2511_ = lean_ctor_get(v_mulFn_x3f_2510_, 0);
lean_inc(v_val_2511_);
lean_dec_ref(v_mulFn_x3f_2510_);
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 0, v_val_2511_);
v___x_2513_ = v___x_2507_;
goto v_reusejp_2512_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v_val_2511_);
v___x_2513_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2512_;
}
v_reusejp_2512_:
{
return v___x_2513_;
}
}
else
{
lean_object* v_type_2515_; lean_object* v_u_2516_; lean_object* v_semiringInst_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v_expectedInst_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
lean_del_object(v___x_2507_);
v_type_2515_ = lean_ctor_get(v_toRing_2509_, 1);
lean_inc_ref_n(v_type_2515_, 3);
v_u_2516_ = lean_ctor_get(v_toRing_2509_, 2);
lean_inc_n(v_u_2516_, 2);
v_semiringInst_2517_ = lean_ctor_get(v_toRing_2509_, 4);
lean_inc_ref(v_semiringInst_2517_);
lean_dec_ref(v_toRing_2509_);
v___x_2518_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__1);
v___x_2519_ = lean_box(0);
v___x_2520_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2520_, 0, v_u_2516_);
lean_ctor_set(v___x_2520_, 1, v___x_2519_);
lean_inc_ref(v___x_2520_);
v___x_2521_ = l_Lean_mkConst(v___x_2518_, v___x_2520_);
v___x_2522_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__3);
v___x_2523_ = l_Lean_mkConst(v___x_2522_, v___x_2520_);
v___x_2524_ = l_Lean_mkAppB(v___x_2523_, v_type_2515_, v_semiringInst_2517_);
v_expectedInst_2525_ = l_Lean_mkAppB(v___x_2521_, v_type_2515_, v___x_2524_);
v___x_2526_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__5);
v___x_2527_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7, &l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getMulFn_x27___redArg___lam__3___closed__7);
v___x_2528_ = l_Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3(v_type_2515_, v_u_2516_, v___x_2526_, v___x_2527_, v_expectedInst_2525_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
if (lean_obj_tag(v___x_2528_) == 0)
{
lean_object* v_a_2529_; lean_object* v___f_2530_; lean_object* v___x_2531_; 
v_a_2529_ = lean_ctor_get(v___x_2528_, 0);
lean_inc_n(v_a_2529_, 2);
lean_dec_ref(v___x_2528_);
v___f_2530_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3___lam__0), 2, 1);
lean_closure_set(v___f_2530_, 0, v_a_2529_);
v___x_2531_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(v___f_2530_, v___y_2492_, v___y_2493_, v___y_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_);
if (lean_obj_tag(v___x_2531_) == 0)
{
lean_object* v___x_2533_; uint8_t v_isShared_2534_; uint8_t v_isSharedCheck_2538_; 
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2538_ == 0)
{
lean_object* v_unused_2539_; 
v_unused_2539_ = lean_ctor_get(v___x_2531_, 0);
lean_dec(v_unused_2539_);
v___x_2533_ = v___x_2531_;
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
else
{
lean_dec(v___x_2531_);
v___x_2533_ = lean_box(0);
v_isShared_2534_ = v_isSharedCheck_2538_;
goto v_resetjp_2532_;
}
v_resetjp_2532_:
{
lean_object* v___x_2536_; 
if (v_isShared_2534_ == 0)
{
lean_ctor_set(v___x_2533_, 0, v_a_2529_);
v___x_2536_ = v___x_2533_;
goto v_reusejp_2535_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_a_2529_);
v___x_2536_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2535_;
}
v_reusejp_2535_:
{
return v___x_2536_;
}
}
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
lean_dec(v_a_2529_);
v_a_2540_ = lean_ctor_get(v___x_2531_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2531_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2531_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2531_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
else
{
return v___x_2528_;
}
}
}
}
else
{
lean_object* v_a_2549_; lean_object* v___x_2551_; uint8_t v_isShared_2552_; uint8_t v_isSharedCheck_2556_; 
v_a_2549_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2556_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2551_ = v___x_2504_;
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
else
{
lean_inc(v_a_2549_);
lean_dec(v___x_2504_);
v___x_2551_ = lean_box(0);
v_isShared_2552_ = v_isSharedCheck_2556_;
goto v_resetjp_2550_;
}
v_resetjp_2550_:
{
lean_object* v___x_2554_; 
if (v_isShared_2552_ == 0)
{
v___x_2554_ = v___x_2551_;
goto v_reusejp_2553_;
}
else
{
lean_object* v_reuseFailAlloc_2555_; 
v_reuseFailAlloc_2555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2555_, 0, v_a_2549_);
v___x_2554_ = v_reuseFailAlloc_2555_;
goto v_reusejp_2553_;
}
v_reusejp_2553_:
{
return v___x_2554_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3___boxed(lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_){
_start:
{
lean_object* v_res_2569_; 
v_res_2569_ = l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3(v___y_2557_, v___y_2558_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_);
lean_dec(v___y_2567_);
lean_dec_ref(v___y_2566_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec_ref(v___y_2560_);
lean_dec(v___y_2559_);
lean_dec(v___y_2558_);
lean_dec(v___y_2557_);
return v_res_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___lam__0(lean_object* v_a_2570_, lean_object* v_s_2571_){
_start:
{
lean_object* v_toRing_2572_; lean_object* v_invFn_x3f_2573_; lean_object* v_semiringId_x3f_2574_; lean_object* v_commSemiringInst_2575_; lean_object* v_commRingInst_2576_; lean_object* v_noZeroDivInst_x3f_2577_; lean_object* v_fieldInst_x3f_2578_; lean_object* v_powIdentityInst_x3f_2579_; lean_object* v_denoteEntries_2580_; lean_object* v_nextId_2581_; lean_object* v_steps_2582_; lean_object* v_queue_2583_; lean_object* v_basis_2584_; lean_object* v_diseqs_2585_; uint8_t v_recheck_2586_; lean_object* v_invSet_2587_; lean_object* v_powIdentityVarCount_2588_; lean_object* v_numEq0_x3f_2589_; uint8_t v_numEq0Updated_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2622_; 
v_toRing_2572_ = lean_ctor_get(v_s_2571_, 0);
v_invFn_x3f_2573_ = lean_ctor_get(v_s_2571_, 1);
v_semiringId_x3f_2574_ = lean_ctor_get(v_s_2571_, 2);
v_commSemiringInst_2575_ = lean_ctor_get(v_s_2571_, 3);
v_commRingInst_2576_ = lean_ctor_get(v_s_2571_, 4);
v_noZeroDivInst_x3f_2577_ = lean_ctor_get(v_s_2571_, 5);
v_fieldInst_x3f_2578_ = lean_ctor_get(v_s_2571_, 6);
v_powIdentityInst_x3f_2579_ = lean_ctor_get(v_s_2571_, 7);
v_denoteEntries_2580_ = lean_ctor_get(v_s_2571_, 8);
v_nextId_2581_ = lean_ctor_get(v_s_2571_, 9);
v_steps_2582_ = lean_ctor_get(v_s_2571_, 10);
v_queue_2583_ = lean_ctor_get(v_s_2571_, 11);
v_basis_2584_ = lean_ctor_get(v_s_2571_, 12);
v_diseqs_2585_ = lean_ctor_get(v_s_2571_, 13);
v_recheck_2586_ = lean_ctor_get_uint8(v_s_2571_, sizeof(void*)*17);
v_invSet_2587_ = lean_ctor_get(v_s_2571_, 14);
v_powIdentityVarCount_2588_ = lean_ctor_get(v_s_2571_, 15);
v_numEq0_x3f_2589_ = lean_ctor_get(v_s_2571_, 16);
v_numEq0Updated_2590_ = lean_ctor_get_uint8(v_s_2571_, sizeof(void*)*17 + 1);
v_isSharedCheck_2622_ = !lean_is_exclusive(v_s_2571_);
if (v_isSharedCheck_2622_ == 0)
{
v___x_2592_ = v_s_2571_;
v_isShared_2593_ = v_isSharedCheck_2622_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_numEq0_x3f_2589_);
lean_inc(v_powIdentityVarCount_2588_);
lean_inc(v_invSet_2587_);
lean_inc(v_diseqs_2585_);
lean_inc(v_basis_2584_);
lean_inc(v_queue_2583_);
lean_inc(v_steps_2582_);
lean_inc(v_nextId_2581_);
lean_inc(v_denoteEntries_2580_);
lean_inc(v_powIdentityInst_x3f_2579_);
lean_inc(v_fieldInst_x3f_2578_);
lean_inc(v_noZeroDivInst_x3f_2577_);
lean_inc(v_commRingInst_2576_);
lean_inc(v_commSemiringInst_2575_);
lean_inc(v_semiringId_x3f_2574_);
lean_inc(v_invFn_x3f_2573_);
lean_inc(v_toRing_2572_);
lean_dec(v_s_2571_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2622_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v_id_2594_; lean_object* v_type_2595_; lean_object* v_u_2596_; lean_object* v_ringInst_2597_; lean_object* v_semiringInst_2598_; lean_object* v_charInst_x3f_2599_; lean_object* v_addFn_x3f_2600_; lean_object* v_mulFn_x3f_2601_; lean_object* v_subFn_x3f_2602_; lean_object* v_powFn_x3f_2603_; lean_object* v_intCastFn_x3f_2604_; lean_object* v_natCastFn_x3f_2605_; lean_object* v_one_x3f_2606_; lean_object* v_vars_2607_; lean_object* v_varMap_2608_; lean_object* v_denote_2609_; lean_object* v___x_2611_; uint8_t v_isShared_2612_; uint8_t v_isSharedCheck_2620_; 
v_id_2594_ = lean_ctor_get(v_toRing_2572_, 0);
v_type_2595_ = lean_ctor_get(v_toRing_2572_, 1);
v_u_2596_ = lean_ctor_get(v_toRing_2572_, 2);
v_ringInst_2597_ = lean_ctor_get(v_toRing_2572_, 3);
v_semiringInst_2598_ = lean_ctor_get(v_toRing_2572_, 4);
v_charInst_x3f_2599_ = lean_ctor_get(v_toRing_2572_, 5);
v_addFn_x3f_2600_ = lean_ctor_get(v_toRing_2572_, 6);
v_mulFn_x3f_2601_ = lean_ctor_get(v_toRing_2572_, 7);
v_subFn_x3f_2602_ = lean_ctor_get(v_toRing_2572_, 8);
v_powFn_x3f_2603_ = lean_ctor_get(v_toRing_2572_, 10);
v_intCastFn_x3f_2604_ = lean_ctor_get(v_toRing_2572_, 11);
v_natCastFn_x3f_2605_ = lean_ctor_get(v_toRing_2572_, 12);
v_one_x3f_2606_ = lean_ctor_get(v_toRing_2572_, 13);
v_vars_2607_ = lean_ctor_get(v_toRing_2572_, 14);
v_varMap_2608_ = lean_ctor_get(v_toRing_2572_, 15);
v_denote_2609_ = lean_ctor_get(v_toRing_2572_, 16);
v_isSharedCheck_2620_ = !lean_is_exclusive(v_toRing_2572_);
if (v_isSharedCheck_2620_ == 0)
{
lean_object* v_unused_2621_; 
v_unused_2621_ = lean_ctor_get(v_toRing_2572_, 9);
lean_dec(v_unused_2621_);
v___x_2611_ = v_toRing_2572_;
v_isShared_2612_ = v_isSharedCheck_2620_;
goto v_resetjp_2610_;
}
else
{
lean_inc(v_denote_2609_);
lean_inc(v_varMap_2608_);
lean_inc(v_vars_2607_);
lean_inc(v_one_x3f_2606_);
lean_inc(v_natCastFn_x3f_2605_);
lean_inc(v_intCastFn_x3f_2604_);
lean_inc(v_powFn_x3f_2603_);
lean_inc(v_subFn_x3f_2602_);
lean_inc(v_mulFn_x3f_2601_);
lean_inc(v_addFn_x3f_2600_);
lean_inc(v_charInst_x3f_2599_);
lean_inc(v_semiringInst_2598_);
lean_inc(v_ringInst_2597_);
lean_inc(v_u_2596_);
lean_inc(v_type_2595_);
lean_inc(v_id_2594_);
lean_dec(v_toRing_2572_);
v___x_2611_ = lean_box(0);
v_isShared_2612_ = v_isSharedCheck_2620_;
goto v_resetjp_2610_;
}
v_resetjp_2610_:
{
lean_object* v___x_2613_; lean_object* v___x_2615_; 
v___x_2613_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2613_, 0, v_a_2570_);
if (v_isShared_2612_ == 0)
{
lean_ctor_set(v___x_2611_, 9, v___x_2613_);
v___x_2615_ = v___x_2611_;
goto v_reusejp_2614_;
}
else
{
lean_object* v_reuseFailAlloc_2619_; 
v_reuseFailAlloc_2619_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2619_, 0, v_id_2594_);
lean_ctor_set(v_reuseFailAlloc_2619_, 1, v_type_2595_);
lean_ctor_set(v_reuseFailAlloc_2619_, 2, v_u_2596_);
lean_ctor_set(v_reuseFailAlloc_2619_, 3, v_ringInst_2597_);
lean_ctor_set(v_reuseFailAlloc_2619_, 4, v_semiringInst_2598_);
lean_ctor_set(v_reuseFailAlloc_2619_, 5, v_charInst_x3f_2599_);
lean_ctor_set(v_reuseFailAlloc_2619_, 6, v_addFn_x3f_2600_);
lean_ctor_set(v_reuseFailAlloc_2619_, 7, v_mulFn_x3f_2601_);
lean_ctor_set(v_reuseFailAlloc_2619_, 8, v_subFn_x3f_2602_);
lean_ctor_set(v_reuseFailAlloc_2619_, 9, v___x_2613_);
lean_ctor_set(v_reuseFailAlloc_2619_, 10, v_powFn_x3f_2603_);
lean_ctor_set(v_reuseFailAlloc_2619_, 11, v_intCastFn_x3f_2604_);
lean_ctor_set(v_reuseFailAlloc_2619_, 12, v_natCastFn_x3f_2605_);
lean_ctor_set(v_reuseFailAlloc_2619_, 13, v_one_x3f_2606_);
lean_ctor_set(v_reuseFailAlloc_2619_, 14, v_vars_2607_);
lean_ctor_set(v_reuseFailAlloc_2619_, 15, v_varMap_2608_);
lean_ctor_set(v_reuseFailAlloc_2619_, 16, v_denote_2609_);
v___x_2615_ = v_reuseFailAlloc_2619_;
goto v_reusejp_2614_;
}
v_reusejp_2614_:
{
lean_object* v___x_2617_; 
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 0, v___x_2615_);
v___x_2617_ = v___x_2592_;
goto v_reusejp_2616_;
}
else
{
lean_object* v_reuseFailAlloc_2618_; 
v_reuseFailAlloc_2618_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2618_, 0, v___x_2615_);
lean_ctor_set(v_reuseFailAlloc_2618_, 1, v_invFn_x3f_2573_);
lean_ctor_set(v_reuseFailAlloc_2618_, 2, v_semiringId_x3f_2574_);
lean_ctor_set(v_reuseFailAlloc_2618_, 3, v_commSemiringInst_2575_);
lean_ctor_set(v_reuseFailAlloc_2618_, 4, v_commRingInst_2576_);
lean_ctor_set(v_reuseFailAlloc_2618_, 5, v_noZeroDivInst_x3f_2577_);
lean_ctor_set(v_reuseFailAlloc_2618_, 6, v_fieldInst_x3f_2578_);
lean_ctor_set(v_reuseFailAlloc_2618_, 7, v_powIdentityInst_x3f_2579_);
lean_ctor_set(v_reuseFailAlloc_2618_, 8, v_denoteEntries_2580_);
lean_ctor_set(v_reuseFailAlloc_2618_, 9, v_nextId_2581_);
lean_ctor_set(v_reuseFailAlloc_2618_, 10, v_steps_2582_);
lean_ctor_set(v_reuseFailAlloc_2618_, 11, v_queue_2583_);
lean_ctor_set(v_reuseFailAlloc_2618_, 12, v_basis_2584_);
lean_ctor_set(v_reuseFailAlloc_2618_, 13, v_diseqs_2585_);
lean_ctor_set(v_reuseFailAlloc_2618_, 14, v_invSet_2587_);
lean_ctor_set(v_reuseFailAlloc_2618_, 15, v_powIdentityVarCount_2588_);
lean_ctor_set(v_reuseFailAlloc_2618_, 16, v_numEq0_x3f_2589_);
lean_ctor_set_uint8(v_reuseFailAlloc_2618_, sizeof(void*)*17, v_recheck_2586_);
lean_ctor_set_uint8(v_reuseFailAlloc_2618_, sizeof(void*)*17 + 1, v_numEq0Updated_2590_);
v___x_2617_ = v_reuseFailAlloc_2618_;
goto v_reusejp_2616_;
}
v_reusejp_2616_:
{
return v___x_2617_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3(lean_object* v_type_2623_, lean_object* v_u_2624_, lean_object* v_instDeclName_2625_, lean_object* v_declName_2626_, lean_object* v_expectedInst_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; 
v___x_2640_ = lean_box(0);
v___x_2641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2641_, 0, v_u_2624_);
lean_ctor_set(v___x_2641_, 1, v___x_2640_);
lean_inc_ref(v___x_2641_);
v___x_2642_ = l_Lean_mkConst(v_instDeclName_2625_, v___x_2641_);
lean_inc_ref(v_type_2623_);
v___x_2643_ = l_Lean_Expr_app___override(v___x_2642_, v_type_2623_);
v___x_2644_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(v___x_2643_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2644_) == 0)
{
lean_object* v_a_2645_; lean_object* v___x_2646_; 
v_a_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc_n(v_a_2645_, 2);
lean_dec_ref(v___x_2644_);
lean_inc(v_declName_2626_);
v___x_2646_ = l_Lean_Meta_Grind_Arith_CommRing_checkInst(v_declName_2626_, v_a_2645_, v_expectedInst_2627_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2646_) == 0)
{
lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
lean_dec_ref(v___x_2646_);
v___x_2647_ = l_Lean_mkConst(v_declName_2626_, v___x_2641_);
v___x_2648_ = l_Lean_mkAppB(v___x_2647_, v_type_2623_, v_a_2645_);
v___x_2649_ = l_Lean_Meta_Sym_canon(v___x_2648_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v___x_2651_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2650_);
lean_dec_ref(v___x_2649_);
v___x_2651_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_2650_, v___y_2634_, v___y_2638_);
return v___x_2651_;
}
else
{
return v___x_2649_;
}
}
else
{
lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2659_; 
lean_dec(v_a_2645_);
lean_dec_ref(v___x_2641_);
lean_dec(v_declName_2626_);
lean_dec_ref(v_type_2623_);
v_a_2652_ = lean_ctor_get(v___x_2646_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2646_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2654_ = v___x_2646_;
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2652_);
lean_dec(v___x_2646_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2659_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2657_; 
if (v_isShared_2655_ == 0)
{
v___x_2657_ = v___x_2654_;
goto v_reusejp_2656_;
}
else
{
lean_object* v_reuseFailAlloc_2658_; 
v_reuseFailAlloc_2658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2658_, 0, v_a_2652_);
v___x_2657_ = v_reuseFailAlloc_2658_;
goto v_reusejp_2656_;
}
v_reusejp_2656_:
{
return v___x_2657_;
}
}
}
}
else
{
lean_dec_ref(v___x_2641_);
lean_dec_ref(v_expectedInst_2627_);
lean_dec(v_declName_2626_);
lean_dec_ref(v_type_2623_);
return v___x_2644_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3___boxed(lean_object** _args){
lean_object* v_type_2660_ = _args[0];
lean_object* v_u_2661_ = _args[1];
lean_object* v_instDeclName_2662_ = _args[2];
lean_object* v_declName_2663_ = _args[3];
lean_object* v_expectedInst_2664_ = _args[4];
lean_object* v___y_2665_ = _args[5];
lean_object* v___y_2666_ = _args[6];
lean_object* v___y_2667_ = _args[7];
lean_object* v___y_2668_ = _args[8];
lean_object* v___y_2669_ = _args[9];
lean_object* v___y_2670_ = _args[10];
lean_object* v___y_2671_ = _args[11];
lean_object* v___y_2672_ = _args[12];
lean_object* v___y_2673_ = _args[13];
lean_object* v___y_2674_ = _args[14];
lean_object* v___y_2675_ = _args[15];
lean_object* v___y_2676_ = _args[16];
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3(v_type_2660_, v_u_2661_, v_instDeclName_2662_, v_declName_2663_, v_expectedInst_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_);
lean_dec(v___y_2675_);
lean_dec_ref(v___y_2674_);
lean_dec(v___y_2673_);
lean_dec_ref(v___y_2672_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v___y_2667_);
lean_dec(v___y_2666_);
lean_dec(v___y_2665_);
return v_res_2677_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2678_; 
v___x_2678_ = lean_mk_string_unchecked("toNeg", 5, 5);
return v___x_2678_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2679_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__0);
v___x_2680_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__2);
v___x_2681_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1);
v___x_2682_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0);
v___x_2683_ = l_Lean_Name_mkStr4(v___x_2682_, v___x_2681_, v___x_2680_, v___x_2679_);
return v___x_2683_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2684_; 
v___x_2684_ = lean_mk_string_unchecked("Neg", 3, 3);
return v___x_2684_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2685_; lean_object* v___x_2686_; 
v___x_2685_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2);
v___x_2686_ = l_Lean_Name_mkStr1(v___x_2685_);
return v___x_2686_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2687_; 
v___x_2687_ = lean_mk_string_unchecked("neg", 3, 3);
return v___x_2687_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5(void){
_start:
{
lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; 
v___x_2688_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__4);
v___x_2689_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__2);
v___x_2690_ = l_Lean_Name_mkStr2(v___x_2689_, v___x_2688_);
return v___x_2690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0(lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_){
_start:
{
lean_object* v___x_2703_; 
v___x_2703_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_);
if (lean_obj_tag(v___x_2703_) == 0)
{
lean_object* v_a_2704_; lean_object* v___x_2706_; uint8_t v_isShared_2707_; uint8_t v_isSharedCheck_2744_; 
v_a_2704_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2706_ = v___x_2703_;
v_isShared_2707_ = v_isSharedCheck_2744_;
goto v_resetjp_2705_;
}
else
{
lean_inc(v_a_2704_);
lean_dec(v___x_2703_);
v___x_2706_ = lean_box(0);
v_isShared_2707_ = v_isSharedCheck_2744_;
goto v_resetjp_2705_;
}
v_resetjp_2705_:
{
lean_object* v_toRing_2708_; lean_object* v_negFn_x3f_2709_; 
v_toRing_2708_ = lean_ctor_get(v_a_2704_, 0);
lean_inc_ref(v_toRing_2708_);
lean_dec(v_a_2704_);
v_negFn_x3f_2709_ = lean_ctor_get(v_toRing_2708_, 9);
if (lean_obj_tag(v_negFn_x3f_2709_) == 1)
{
lean_object* v_val_2710_; lean_object* v___x_2712_; 
lean_inc_ref(v_negFn_x3f_2709_);
lean_dec_ref(v_toRing_2708_);
v_val_2710_ = lean_ctor_get(v_negFn_x3f_2709_, 0);
lean_inc(v_val_2710_);
lean_dec_ref(v_negFn_x3f_2709_);
if (v_isShared_2707_ == 0)
{
lean_ctor_set(v___x_2706_, 0, v_val_2710_);
v___x_2712_ = v___x_2706_;
goto v_reusejp_2711_;
}
else
{
lean_object* v_reuseFailAlloc_2713_; 
v_reuseFailAlloc_2713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2713_, 0, v_val_2710_);
v___x_2712_ = v_reuseFailAlloc_2713_;
goto v_reusejp_2711_;
}
v_reusejp_2711_:
{
return v___x_2712_;
}
}
else
{
lean_object* v_type_2714_; lean_object* v_u_2715_; lean_object* v_ringInst_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v_expectedInst_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; 
lean_del_object(v___x_2706_);
v_type_2714_ = lean_ctor_get(v_toRing_2708_, 1);
lean_inc_ref_n(v_type_2714_, 2);
v_u_2715_ = lean_ctor_get(v_toRing_2708_, 2);
lean_inc_n(v_u_2715_, 2);
v_ringInst_2716_ = lean_ctor_get(v_toRing_2708_, 3);
lean_inc_ref(v_ringInst_2716_);
lean_dec_ref(v_toRing_2708_);
v___x_2717_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__1);
v___x_2718_ = lean_box(0);
v___x_2719_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2719_, 0, v_u_2715_);
lean_ctor_set(v___x_2719_, 1, v___x_2718_);
v___x_2720_ = l_Lean_mkConst(v___x_2717_, v___x_2719_);
v_expectedInst_2721_ = l_Lean_mkAppB(v___x_2720_, v_type_2714_, v_ringInst_2716_);
v___x_2722_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__3, &l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__3_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__3);
v___x_2723_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5, &l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___closed__5);
v___x_2724_ = l_Lean_Meta_Grind_Arith_CommRing_mkUnaryFn___at___00Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0_spec__3(v_type_2714_, v_u_2715_, v___x_2722_, v___x_2723_, v_expectedInst_2721_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_);
if (lean_obj_tag(v___x_2724_) == 0)
{
lean_object* v_a_2725_; lean_object* v___f_2726_; lean_object* v___x_2727_; 
v_a_2725_ = lean_ctor_get(v___x_2724_, 0);
lean_inc_n(v_a_2725_, 2);
lean_dec_ref(v___x_2724_);
v___f_2726_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___lam__0), 2, 1);
lean_closure_set(v___f_2726_, 0, v_a_2725_);
v___x_2727_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_modifyCommRing(v___f_2726_, v___y_2691_, v___y_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2734_; 
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2734_ == 0)
{
lean_object* v_unused_2735_; 
v_unused_2735_ = lean_ctor_get(v___x_2727_, 0);
lean_dec(v_unused_2735_);
v___x_2729_ = v___x_2727_;
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
else
{
lean_dec(v___x_2727_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2732_; 
if (v_isShared_2730_ == 0)
{
lean_ctor_set(v___x_2729_, 0, v_a_2725_);
v___x_2732_ = v___x_2729_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v_a_2725_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
lean_dec(v_a_2725_);
v_a_2736_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2727_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2727_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
else
{
return v___x_2724_;
}
}
}
}
else
{
lean_object* v_a_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2752_; 
v_a_2745_ = lean_ctor_get(v___x_2703_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2703_);
if (v_isSharedCheck_2752_ == 0)
{
v___x_2747_ = v___x_2703_;
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_a_2745_);
lean_dec(v___x_2703_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2752_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2750_; 
if (v_isShared_2748_ == 0)
{
v___x_2750_ = v___x_2747_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2745_);
v___x_2750_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
return v___x_2750_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0___boxed(lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0(v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_, v___y_2761_, v___y_2762_, v___y_2763_);
lean_dec(v___y_2763_);
lean_dec_ref(v___y_2762_);
lean_dec(v___y_2761_);
lean_dec_ref(v___y_2760_);
lean_dec(v___y_2759_);
lean_dec_ref(v___y_2758_);
lean_dec(v___y_2757_);
lean_dec_ref(v___y_2756_);
lean_dec(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec(v___y_2753_);
return v_res_2765_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2766_; 
v___x_2766_ = lean_mk_string_unchecked("OfNat", 5, 5);
return v___x_2766_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2767_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0);
v___x_2768_ = l_Lean_Name_mkStr1(v___x_2767_);
return v___x_2768_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2769_; 
v___x_2769_ = lean_mk_string_unchecked("ofNat", 5, 5);
return v___x_2769_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; 
v___x_2770_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2);
v___x_2771_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__0);
v___x_2772_ = l_Lean_Name_mkStr2(v___x_2771_, v___x_2770_);
return v___x_2772_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; 
v___x_2773_ = lean_unsigned_to_nat(0u);
v___x_2774_ = lean_nat_to_int(v___x_2773_);
return v___x_2774_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5(void){
_start:
{
lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v___x_2775_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__2);
v___x_2776_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getAddFn_x27___redArg___lam__3___closed__2);
v___x_2777_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__1);
v___x_2778_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getToQFn___closed__0);
v___x_2779_ = l_Lean_Name_mkStr4(v___x_2778_, v___x_2777_, v___x_2776_, v___x_2775_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0(lean_object* v_k_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommRing(v___y_2781_, v___y_2782_, v___y_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_);
if (lean_obj_tag(v___x_2793_) == 0)
{
lean_object* v_a_2794_; lean_object* v_toRing_2795_; lean_object* v_type_2796_; lean_object* v_u_2797_; lean_object* v_semiringInst_2798_; lean_object* v___x_2799_; lean_object* v_n_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
v_a_2794_ = lean_ctor_get(v___x_2793_, 0);
lean_inc(v_a_2794_);
lean_dec_ref(v___x_2793_);
v_toRing_2795_ = lean_ctor_get(v_a_2794_, 0);
lean_inc_ref(v_toRing_2795_);
lean_dec(v_a_2794_);
v_type_2796_ = lean_ctor_get(v_toRing_2795_, 1);
lean_inc_ref_n(v_type_2796_, 2);
v_u_2797_ = lean_ctor_get(v_toRing_2795_, 2);
lean_inc(v_u_2797_);
v_semiringInst_2798_ = lean_ctor_get(v_toRing_2795_, 4);
lean_inc_ref(v_semiringInst_2798_);
lean_dec_ref(v_toRing_2795_);
v___x_2799_ = lean_nat_abs(v_k_2780_);
v_n_2800_ = l_Lean_mkRawNatLit(v___x_2799_);
v___x_2801_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__1);
v___x_2802_ = lean_box(0);
v___x_2803_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2803_, 0, v_u_2797_);
lean_ctor_set(v___x_2803_, 1, v___x_2802_);
lean_inc_ref(v___x_2803_);
v___x_2804_ = l_Lean_mkConst(v___x_2801_, v___x_2803_);
lean_inc_ref(v_n_2800_);
v___x_2805_ = l_Lean_mkAppB(v___x_2804_, v_type_2796_, v_n_2800_);
v___x_2806_ = lean_box(0);
v___x_2807_ = l_Lean_Meta_synthInstance_x3f(v___x_2805_, v___x_2806_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; lean_object* v___x_2810_; uint8_t v_isShared_2811_; uint8_t v_isSharedCheck_2847_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2847_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2847_ == 0)
{
v___x_2810_ = v___x_2807_;
v_isShared_2811_ = v_isSharedCheck_2847_;
goto v_resetjp_2809_;
}
else
{
lean_inc(v_a_2808_);
lean_dec(v___x_2807_);
v___x_2810_ = lean_box(0);
v_isShared_2811_ = v_isSharedCheck_2847_;
goto v_resetjp_2809_;
}
v_resetjp_2809_:
{
lean_object* v_ofNatInst_2813_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; lean_object* v___y_2817_; lean_object* v___y_2818_; lean_object* v___y_2819_; lean_object* v___y_2820_; lean_object* v___y_2821_; lean_object* v___y_2822_; lean_object* v___y_2823_; lean_object* v___y_2824_; 
if (lean_obj_tag(v_a_2808_) == 1)
{
lean_object* v_val_2843_; 
lean_dec_ref(v_semiringInst_2798_);
v_val_2843_ = lean_ctor_get(v_a_2808_, 0);
lean_inc(v_val_2843_);
lean_dec_ref(v_a_2808_);
v_ofNatInst_2813_ = v_val_2843_;
v___y_2814_ = v___y_2781_;
v___y_2815_ = v___y_2782_;
v___y_2816_ = v___y_2783_;
v___y_2817_ = v___y_2784_;
v___y_2818_ = v___y_2785_;
v___y_2819_ = v___y_2786_;
v___y_2820_ = v___y_2787_;
v___y_2821_ = v___y_2788_;
v___y_2822_ = v___y_2789_;
v___y_2823_ = v___y_2790_;
v___y_2824_ = v___y_2791_;
goto v___jp_2812_;
}
else
{
lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; 
lean_dec(v_a_2808_);
v___x_2844_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__5);
lean_inc_ref(v___x_2803_);
v___x_2845_ = l_Lean_mkConst(v___x_2844_, v___x_2803_);
lean_inc_ref(v_n_2800_);
lean_inc_ref(v_type_2796_);
v___x_2846_ = l_Lean_mkApp3(v___x_2845_, v_type_2796_, v_semiringInst_2798_, v_n_2800_);
v_ofNatInst_2813_ = v___x_2846_;
v___y_2814_ = v___y_2781_;
v___y_2815_ = v___y_2782_;
v___y_2816_ = v___y_2783_;
v___y_2817_ = v___y_2784_;
v___y_2818_ = v___y_2785_;
v___y_2819_ = v___y_2786_;
v___y_2820_ = v___y_2787_;
v___y_2821_ = v___y_2788_;
v___y_2822_ = v___y_2789_;
v___y_2823_ = v___y_2790_;
v___y_2824_ = v___y_2791_;
goto v___jp_2812_;
}
v___jp_2812_:
{
lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v_n_2827_; lean_object* v___x_2828_; uint8_t v___x_2829_; 
v___x_2825_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__3);
v___x_2826_ = l_Lean_mkConst(v___x_2825_, v___x_2803_);
v_n_2827_ = l_Lean_mkApp3(v___x_2826_, v_type_2796_, v_n_2800_, v_ofNatInst_2813_);
v___x_2828_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4, &l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4_once, _init_l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___closed__4);
v___x_2829_ = lean_int_dec_lt(v_k_2780_, v___x_2828_);
if (v___x_2829_ == 0)
{
lean_object* v___x_2831_; 
if (v_isShared_2811_ == 0)
{
lean_ctor_set(v___x_2810_, 0, v_n_2827_);
v___x_2831_ = v___x_2810_;
goto v_reusejp_2830_;
}
else
{
lean_object* v_reuseFailAlloc_2832_; 
v_reuseFailAlloc_2832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2832_, 0, v_n_2827_);
v___x_2831_ = v_reuseFailAlloc_2832_;
goto v_reusejp_2830_;
}
v_reusejp_2830_:
{
return v___x_2831_;
}
}
else
{
lean_object* v___x_2833_; 
lean_del_object(v___x_2810_);
v___x_2833_ = l_Lean_Meta_Grind_Arith_CommRing_getNegFn___at___00Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0_spec__0(v___y_2814_, v___y_2815_, v___y_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_, v___y_2824_);
if (lean_obj_tag(v___x_2833_) == 0)
{
lean_object* v_a_2834_; lean_object* v___x_2836_; uint8_t v_isShared_2837_; uint8_t v_isSharedCheck_2842_; 
v_a_2834_ = lean_ctor_get(v___x_2833_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2833_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2836_ = v___x_2833_;
v_isShared_2837_ = v_isSharedCheck_2842_;
goto v_resetjp_2835_;
}
else
{
lean_inc(v_a_2834_);
lean_dec(v___x_2833_);
v___x_2836_ = lean_box(0);
v_isShared_2837_ = v_isSharedCheck_2842_;
goto v_resetjp_2835_;
}
v_resetjp_2835_:
{
lean_object* v___x_2838_; lean_object* v___x_2840_; 
v___x_2838_ = l_Lean_Expr_app___override(v_a_2834_, v_n_2827_);
if (v_isShared_2837_ == 0)
{
lean_ctor_set(v___x_2836_, 0, v___x_2838_);
v___x_2840_ = v___x_2836_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v___x_2838_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
else
{
lean_dec_ref(v_n_2827_);
return v___x_2833_;
}
}
}
}
}
else
{
lean_object* v_a_2848_; lean_object* v___x_2850_; uint8_t v_isShared_2851_; uint8_t v_isSharedCheck_2855_; 
lean_dec_ref(v___x_2803_);
lean_dec_ref(v_n_2800_);
lean_dec_ref(v_semiringInst_2798_);
lean_dec_ref(v_type_2796_);
v_a_2848_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2855_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2855_ == 0)
{
v___x_2850_ = v___x_2807_;
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
else
{
lean_inc(v_a_2848_);
lean_dec(v___x_2807_);
v___x_2850_ = lean_box(0);
v_isShared_2851_ = v_isSharedCheck_2855_;
goto v_resetjp_2849_;
}
v_resetjp_2849_:
{
lean_object* v___x_2853_; 
if (v_isShared_2851_ == 0)
{
v___x_2853_ = v___x_2850_;
goto v_reusejp_2852_;
}
else
{
lean_object* v_reuseFailAlloc_2854_; 
v_reuseFailAlloc_2854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2854_, 0, v_a_2848_);
v___x_2853_ = v_reuseFailAlloc_2854_;
goto v_reusejp_2852_;
}
v_reusejp_2852_:
{
return v___x_2853_;
}
}
}
}
else
{
lean_object* v_a_2856_; lean_object* v___x_2858_; uint8_t v_isShared_2859_; uint8_t v_isSharedCheck_2863_; 
v_a_2856_ = lean_ctor_get(v___x_2793_, 0);
v_isSharedCheck_2863_ = !lean_is_exclusive(v___x_2793_);
if (v_isSharedCheck_2863_ == 0)
{
v___x_2858_ = v___x_2793_;
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
else
{
lean_inc(v_a_2856_);
lean_dec(v___x_2793_);
v___x_2858_ = lean_box(0);
v_isShared_2859_ = v_isSharedCheck_2863_;
goto v_resetjp_2857_;
}
v_resetjp_2857_:
{
lean_object* v___x_2861_; 
if (v_isShared_2859_ == 0)
{
v___x_2861_ = v___x_2858_;
goto v_reusejp_2860_;
}
else
{
lean_object* v_reuseFailAlloc_2862_; 
v_reuseFailAlloc_2862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2862_, 0, v_a_2856_);
v___x_2861_ = v_reuseFailAlloc_2862_;
goto v_reusejp_2860_;
}
v_reusejp_2860_:
{
return v___x_2861_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0___boxed(lean_object* v_k_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_, lean_object* v___y_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_){
_start:
{
lean_object* v_res_2877_; 
v_res_2877_ = l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0(v_k_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, v___y_2874_, v___y_2875_);
lean_dec(v___y_2875_);
lean_dec_ref(v___y_2874_);
lean_dec(v___y_2873_);
lean_dec_ref(v___y_2872_);
lean_dec(v___y_2871_);
lean_dec_ref(v___y_2870_);
lean_dec(v___y_2869_);
lean_dec_ref(v___y_2868_);
lean_dec(v___y_2867_);
lean_dec(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec(v_k_2864_);
return v_res_2877_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__0(void){
_start:
{
lean_object* v___x_2878_; 
v___x_2878_ = lean_mk_string_unchecked("Lean.Meta.Tactic.Grind.Arith.CommRing.SemiringM", 47, 47);
return v___x_2878_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__1(void){
_start:
{
lean_object* v___x_2879_; 
v___x_2879_ = lean_mk_string_unchecked("_private.Lean.Meta.Tactic.Grind.Arith.CommRing.SemiringM.0.Lean.Grind.CommRing.Expr.denoteAsRingExpr.go", 103, 103);
return v___x_2879_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__2(void){
_start:
{
lean_object* v___x_2880_; 
v___x_2880_ = lean_mk_string_unchecked("unreachable code has been reached", 33, 33);
return v___x_2880_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3(void){
_start:
{
lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; lean_object* v___x_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; 
v___x_2881_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__2, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__2);
v___x_2882_ = lean_unsigned_to_nat(39u);
v___x_2883_ = lean_unsigned_to_nat(159u);
v___x_2884_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__1);
v___x_2885_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__0);
v___x_2886_ = l_mkPanicMessageWithDecl(v___x_2885_, v___x_2884_, v___x_2883_, v___x_2882_, v___x_2881_);
return v___x_2886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_){
_start:
{
switch(lean_obj_tag(v_a_2887_))
{
case 0:
{
lean_object* v_k_2900_; lean_object* v___x_2901_; 
v_k_2900_ = lean_ctor_get(v_a_2887_, 0);
lean_inc(v_k_2900_);
lean_dec_ref(v_a_2887_);
v___x_2901_ = l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0(v_k_2900_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
lean_dec(v_k_2900_);
return v___x_2901_;
}
case 1:
{
lean_object* v_k_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; 
v_k_2902_ = lean_ctor_get(v_a_2887_, 0);
lean_inc(v_k_2902_);
lean_dec_ref(v_a_2887_);
v___x_2903_ = lean_nat_to_int(v_k_2902_);
v___x_2904_ = l_Lean_Meta_Grind_Arith_CommRing_denoteNum___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__0(v___x_2903_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
lean_dec(v___x_2903_);
return v___x_2904_;
}
case 3:
{
lean_object* v_i_2905_; lean_object* v___x_2906_; 
v_i_2905_ = lean_ctor_get(v_a_2887_, 0);
lean_inc(v_i_2905_);
lean_dec_ref(v_a_2887_);
v___x_2906_ = l_Lean_Meta_Grind_Arith_CommRing_getToQFn(v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
if (lean_obj_tag(v___x_2906_) == 0)
{
lean_object* v_a_2907_; lean_object* v___x_2908_; 
v_a_2907_ = lean_ctor_get(v___x_2906_, 0);
lean_inc(v_a_2907_);
lean_dec_ref(v___x_2906_);
v___x_2908_ = l_Lean_Meta_Grind_Arith_CommRing_SemiringM_getCommSemiring(v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
if (lean_obj_tag(v___x_2908_) == 0)
{
lean_object* v_a_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2926_; 
v_a_2909_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2926_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2911_ = v___x_2908_;
v_isShared_2912_ = v_isSharedCheck_2926_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_a_2909_);
lean_dec(v___x_2908_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2926_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v___y_2914_; lean_object* v_toSemiring_2919_; lean_object* v_vars_2920_; lean_object* v_size_2921_; lean_object* v___x_2922_; uint8_t v___x_2923_; 
v_toSemiring_2919_ = lean_ctor_get(v_a_2909_, 0);
lean_inc_ref(v_toSemiring_2919_);
lean_dec(v_a_2909_);
v_vars_2920_ = lean_ctor_get(v_toSemiring_2919_, 9);
lean_inc_ref(v_vars_2920_);
lean_dec_ref(v_toSemiring_2919_);
v_size_2921_ = lean_ctor_get(v_vars_2920_, 2);
v___x_2922_ = l_Lean_instInhabitedExpr;
v___x_2923_ = lean_nat_dec_lt(v_i_2905_, v_size_2921_);
if (v___x_2923_ == 0)
{
lean_object* v___x_2924_; 
lean_dec_ref(v_vars_2920_);
lean_dec(v_i_2905_);
v___x_2924_ = l_outOfBounds___redArg(v___x_2922_);
v___y_2914_ = v___x_2924_;
goto v___jp_2913_;
}
else
{
lean_object* v___x_2925_; 
v___x_2925_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2922_, v_vars_2920_, v_i_2905_);
lean_dec(v_i_2905_);
lean_dec_ref(v_vars_2920_);
v___y_2914_ = v___x_2925_;
goto v___jp_2913_;
}
v___jp_2913_:
{
lean_object* v___x_2915_; lean_object* v___x_2917_; 
v___x_2915_ = l_Lean_Expr_app___override(v_a_2907_, v___y_2914_);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 0, v___x_2915_);
v___x_2917_ = v___x_2911_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v___x_2915_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
else
{
lean_object* v_a_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2934_; 
lean_dec(v_a_2907_);
lean_dec(v_i_2905_);
v_a_2927_ = lean_ctor_get(v___x_2908_, 0);
v_isSharedCheck_2934_ = !lean_is_exclusive(v___x_2908_);
if (v_isSharedCheck_2934_ == 0)
{
v___x_2929_ = v___x_2908_;
v_isShared_2930_ = v_isSharedCheck_2934_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_a_2927_);
lean_dec(v___x_2908_);
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
else
{
lean_dec(v_i_2905_);
return v___x_2906_;
}
}
case 5:
{
lean_object* v_a_2935_; lean_object* v_b_2936_; lean_object* v___x_2937_; 
v_a_2935_ = lean_ctor_get(v_a_2887_, 0);
lean_inc_ref(v_a_2935_);
v_b_2936_ = lean_ctor_get(v_a_2887_, 1);
lean_inc_ref(v_b_2936_);
lean_dec_ref(v_a_2887_);
v___x_2937_ = l_Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2(v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
if (lean_obj_tag(v___x_2937_) == 0)
{
lean_object* v_a_2938_; lean_object* v___x_2939_; 
v_a_2938_ = lean_ctor_get(v___x_2937_, 0);
lean_inc(v_a_2938_);
lean_dec_ref(v___x_2937_);
v___x_2939_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_a_2935_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
if (lean_obj_tag(v___x_2939_) == 0)
{
lean_object* v_a_2940_; lean_object* v___x_2941_; 
v_a_2940_ = lean_ctor_get(v___x_2939_, 0);
lean_inc(v_a_2940_);
lean_dec_ref(v___x_2939_);
v___x_2941_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_b_2936_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
if (lean_obj_tag(v___x_2941_) == 0)
{
lean_object* v_a_2942_; lean_object* v___x_2944_; uint8_t v_isShared_2945_; uint8_t v_isSharedCheck_2950_; 
v_a_2942_ = lean_ctor_get(v___x_2941_, 0);
v_isSharedCheck_2950_ = !lean_is_exclusive(v___x_2941_);
if (v_isSharedCheck_2950_ == 0)
{
v___x_2944_ = v___x_2941_;
v_isShared_2945_ = v_isSharedCheck_2950_;
goto v_resetjp_2943_;
}
else
{
lean_inc(v_a_2942_);
lean_dec(v___x_2941_);
v___x_2944_ = lean_box(0);
v_isShared_2945_ = v_isSharedCheck_2950_;
goto v_resetjp_2943_;
}
v_resetjp_2943_:
{
lean_object* v___x_2946_; lean_object* v___x_2948_; 
v___x_2946_ = l_Lean_mkAppB(v_a_2938_, v_a_2940_, v_a_2942_);
if (v_isShared_2945_ == 0)
{
lean_ctor_set(v___x_2944_, 0, v___x_2946_);
v___x_2948_ = v___x_2944_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v___x_2946_);
v___x_2948_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
return v___x_2948_;
}
}
}
else
{
lean_dec(v_a_2940_);
lean_dec(v_a_2938_);
return v___x_2941_;
}
}
else
{
lean_dec(v_a_2938_);
lean_dec_ref(v_b_2936_);
return v___x_2939_;
}
}
else
{
lean_dec_ref(v_b_2936_);
lean_dec_ref(v_a_2935_);
return v___x_2937_;
}
}
case 7:
{
lean_object* v_a_2951_; lean_object* v_b_2952_; lean_object* v___x_2953_; 
v_a_2951_ = lean_ctor_get(v_a_2887_, 0);
lean_inc_ref(v_a_2951_);
v_b_2952_ = lean_ctor_get(v_a_2887_, 1);
lean_inc_ref(v_b_2952_);
lean_dec_ref(v_a_2887_);
v___x_2953_ = l_Lean_Meta_Grind_Arith_CommRing_getMulFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__3(v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
if (lean_obj_tag(v___x_2953_) == 0)
{
lean_object* v_a_2954_; lean_object* v___x_2955_; 
v_a_2954_ = lean_ctor_get(v___x_2953_, 0);
lean_inc(v_a_2954_);
lean_dec_ref(v___x_2953_);
v___x_2955_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_a_2951_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
if (lean_obj_tag(v___x_2955_) == 0)
{
lean_object* v_a_2956_; lean_object* v___x_2957_; 
v_a_2956_ = lean_ctor_get(v___x_2955_, 0);
lean_inc(v_a_2956_);
lean_dec_ref(v___x_2955_);
v___x_2957_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_b_2952_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
if (lean_obj_tag(v___x_2957_) == 0)
{
lean_object* v_a_2958_; lean_object* v___x_2960_; uint8_t v_isShared_2961_; uint8_t v_isSharedCheck_2966_; 
v_a_2958_ = lean_ctor_get(v___x_2957_, 0);
v_isSharedCheck_2966_ = !lean_is_exclusive(v___x_2957_);
if (v_isSharedCheck_2966_ == 0)
{
v___x_2960_ = v___x_2957_;
v_isShared_2961_ = v_isSharedCheck_2966_;
goto v_resetjp_2959_;
}
else
{
lean_inc(v_a_2958_);
lean_dec(v___x_2957_);
v___x_2960_ = lean_box(0);
v_isShared_2961_ = v_isSharedCheck_2966_;
goto v_resetjp_2959_;
}
v_resetjp_2959_:
{
lean_object* v___x_2962_; lean_object* v___x_2964_; 
v___x_2962_ = l_Lean_mkAppB(v_a_2954_, v_a_2956_, v_a_2958_);
if (v_isShared_2961_ == 0)
{
lean_ctor_set(v___x_2960_, 0, v___x_2962_);
v___x_2964_ = v___x_2960_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2965_; 
v_reuseFailAlloc_2965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2965_, 0, v___x_2962_);
v___x_2964_ = v_reuseFailAlloc_2965_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
return v___x_2964_;
}
}
}
else
{
lean_dec(v_a_2956_);
lean_dec(v_a_2954_);
return v___x_2957_;
}
}
else
{
lean_dec(v_a_2954_);
lean_dec_ref(v_b_2952_);
return v___x_2955_;
}
}
else
{
lean_dec_ref(v_b_2952_);
lean_dec_ref(v_a_2951_);
return v___x_2953_;
}
}
case 8:
{
lean_object* v_a_2967_; lean_object* v_k_2968_; lean_object* v___x_2969_; 
v_a_2967_ = lean_ctor_get(v_a_2887_, 0);
lean_inc_ref(v_a_2967_);
v_k_2968_ = lean_ctor_get(v_a_2887_, 1);
lean_inc(v_k_2968_);
lean_dec_ref(v_a_2887_);
v___x_2969_ = l_Lean_Meta_Grind_Arith_CommRing_getPowFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__4(v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
if (lean_obj_tag(v___x_2969_) == 0)
{
lean_object* v_a_2970_; lean_object* v___x_2971_; 
v_a_2970_ = lean_ctor_get(v___x_2969_, 0);
lean_inc(v_a_2970_);
lean_dec_ref(v___x_2969_);
v___x_2971_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_a_2967_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v_a_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2981_; 
v_a_2972_ = lean_ctor_get(v___x_2971_, 0);
v_isSharedCheck_2981_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2974_ = v___x_2971_;
v_isShared_2975_ = v_isSharedCheck_2981_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_a_2972_);
lean_dec(v___x_2971_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2981_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2979_; 
v___x_2976_ = l_Lean_mkNatLit(v_k_2968_);
v___x_2977_ = l_Lean_mkAppB(v_a_2970_, v_a_2972_, v___x_2976_);
if (v_isShared_2975_ == 0)
{
lean_ctor_set(v___x_2974_, 0, v___x_2977_);
v___x_2979_ = v___x_2974_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v___x_2977_);
v___x_2979_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
return v___x_2979_;
}
}
}
else
{
lean_dec(v_a_2970_);
lean_dec(v_k_2968_);
return v___x_2971_;
}
}
else
{
lean_dec(v_k_2968_);
lean_dec_ref(v_a_2967_);
return v___x_2969_;
}
}
default: 
{
lean_object* v___x_2982_; lean_object* v___x_2983_; 
lean_dec_ref(v_a_2887_);
v___x_2982_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3, &l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___closed__3);
v___x_2983_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__5(v___x_2982_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_, v_a_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
return v___x_2983_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go___boxed(lean_object* v_a_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_, lean_object* v_a_2993_, lean_object* v_a_2994_, lean_object* v_a_2995_, lean_object* v_a_2996_){
_start:
{
lean_object* v_res_2997_; 
v_res_2997_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_a_2984_, v_a_2985_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_, v_a_2992_, v_a_2993_, v_a_2994_, v_a_2995_);
lean_dec(v_a_2995_);
lean_dec_ref(v_a_2994_);
lean_dec(v_a_2993_);
lean_dec_ref(v_a_2992_);
lean_dec(v_a_2991_);
lean_dec_ref(v_a_2990_);
lean_dec(v_a_2989_);
lean_dec_ref(v_a_2988_);
lean_dec(v_a_2987_);
lean_dec(v_a_2986_);
lean_dec(v_a_2985_);
return v_res_2997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6(lean_object* v_type_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_){
_start:
{
lean_object* v___x_3011_; 
v___x_3011_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___redArg(v_type_2998_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_);
return v___x_3011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6___boxed(lean_object* v_type_3012_, lean_object* v___y_3013_, lean_object* v___y_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_, lean_object* v___y_3023_, lean_object* v___y_3024_){
_start:
{
lean_object* v_res_3025_; 
v_res_3025_ = l_Lean_Meta_Sym_Arith_MonadCanon_synthInstance___at___00Lean_Meta_Grind_Arith_CommRing_mkBinHomoFn___at___00Lean_Meta_Grind_Arith_CommRing_getAddFn___at___00__private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go_spec__2_spec__3_spec__6(v_type_3012_, v___y_3013_, v___y_3014_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_);
lean_dec(v___y_3023_);
lean_dec_ref(v___y_3022_);
lean_dec(v___y_3021_);
lean_dec_ref(v___y_3020_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
lean_dec(v___y_3017_);
lean_dec_ref(v___y_3016_);
lean_dec(v___y_3015_);
lean_dec(v___y_3014_);
lean_dec(v___y_3013_);
return v_res_3025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_CommRing_Expr_denoteAsRingExpr(lean_object* v_e_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_, lean_object* v_a_3032_, lean_object* v_a_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_){
_start:
{
lean_object* v___x_3039_; 
v___x_3039_ = l___private_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM_0__Lean_Grind_CommRing_Expr_denoteAsRingExpr_go(v_e_3026_, v_a_3027_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_, v_a_3032_, v_a_3033_, v_a_3034_, v_a_3035_, v_a_3036_, v_a_3037_);
if (lean_obj_tag(v___x_3039_) == 0)
{
lean_object* v_a_3040_; lean_object* v___x_3041_; 
v_a_3040_ = lean_ctor_get(v___x_3039_, 0);
lean_inc(v_a_3040_);
lean_dec_ref(v___x_3039_);
v___x_3041_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_3040_, v_a_3033_, v_a_3037_);
return v___x_3041_;
}
else
{
return v___x_3039_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_CommRing_Expr_denoteAsRingExpr___boxed(lean_object* v_e_3042_, lean_object* v_a_3043_, lean_object* v_a_3044_, lean_object* v_a_3045_, lean_object* v_a_3046_, lean_object* v_a_3047_, lean_object* v_a_3048_, lean_object* v_a_3049_, lean_object* v_a_3050_, lean_object* v_a_3051_, lean_object* v_a_3052_, lean_object* v_a_3053_, lean_object* v_a_3054_){
_start:
{
lean_object* v_res_3055_; 
v_res_3055_ = l_Lean_Grind_CommRing_Expr_denoteAsRingExpr(v_e_3042_, v_a_3043_, v_a_3044_, v_a_3045_, v_a_3046_, v_a_3047_, v_a_3048_, v_a_3049_, v_a_3050_, v_a_3051_, v_a_3052_, v_a_3053_);
lean_dec(v_a_3053_);
lean_dec_ref(v_a_3052_);
lean_dec(v_a_3051_);
lean_dec_ref(v_a_3050_);
lean_dec(v_a_3049_);
lean_dec_ref(v_a_3048_);
lean_dec(v_a_3047_);
lean_dec_ref(v_a_3046_);
lean_dec(v_a_3045_);
lean_dec(v_a_3044_);
lean_dec(v_a_3043_);
return v_res_3055_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadSemiring(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Functions(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadSemiring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Functions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonSemiringM);
l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadCommSemiringSemiringM);
l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingSemiringM);
l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdSemiringM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadSemiring(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Functions(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadSemiring(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_Functions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_SemiringM(builtin);
}
#ifdef __cplusplus
}
#endif
