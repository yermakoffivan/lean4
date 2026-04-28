// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.CommRing.RingM
// Imports: public import Lean.Meta.Tactic.Grind.SynthInstance public import Lean.Meta.Tactic.Grind.Arith.CommRing.MonadRing
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
lean_object* l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_CommRing_ringExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_CommRing_EqCnstr_compare(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_maxView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minView___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_minKey_x3f___redArg(lean_object*);
lean_object* l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_hashPtrExpr_unsafe__1___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_canon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstanceMeta_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__1;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__2;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisorsInst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisorsInst_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_hasChar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_hasChar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isField(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isField___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isQueueEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isQueueEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg(lean_object* v_a_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_1_, v_a_3_, v_a_4_);
if (lean_obj_tag(v___x_6_) == 0)
{
lean_object* v_a_7_; lean_object* v___x_8_; 
v_a_7_ = lean_ctor_get(v___x_6_, 0);
lean_inc(v_a_7_);
lean_dec_ref(v___x_6_);
v___x_8_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_2_);
if (lean_obj_tag(v___x_8_) == 0)
{
lean_object* v_a_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_20_; 
v_a_9_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_20_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_20_ == 0)
{
v___x_11_ = v___x_8_;
v_isShared_12_ = v_isSharedCheck_20_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_a_9_);
lean_dec(v___x_8_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_20_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v_ringSteps_13_; lean_object* v_steps_14_; uint8_t v___x_15_; lean_object* v___x_16_; lean_object* v___x_18_; 
v_ringSteps_13_ = lean_ctor_get(v_a_9_, 5);
lean_inc(v_ringSteps_13_);
lean_dec(v_a_9_);
v_steps_14_ = lean_ctor_get(v_a_7_, 12);
lean_inc(v_steps_14_);
lean_dec(v_a_7_);
v___x_15_ = lean_nat_dec_le(v_ringSteps_13_, v_steps_14_);
lean_dec(v_steps_14_);
lean_dec(v_ringSteps_13_);
v___x_16_ = lean_box(v___x_15_);
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 0, v___x_16_);
v___x_18_ = v___x_11_;
goto v_reusejp_17_;
}
else
{
lean_object* v_reuseFailAlloc_19_; 
v_reuseFailAlloc_19_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_19_, 0, v___x_16_);
v___x_18_ = v_reuseFailAlloc_19_;
goto v_reusejp_17_;
}
v_reusejp_17_:
{
return v___x_18_;
}
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_a_7_);
v_a_21_ = lean_ctor_get(v___x_8_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_8_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_8_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_8_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
else
{
lean_object* v_a_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_36_; 
v_a_29_ = lean_ctor_get(v___x_6_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_6_);
if (v_isSharedCheck_36_ == 0)
{
v___x_31_ = v___x_6_;
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_a_29_);
lean_dec(v___x_6_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_34_; 
if (v_isShared_32_ == 0)
{
v___x_34_ = v___x_31_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v_a_29_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg___boxed(lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v_res_42_; 
v_res_42_ = l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg(v_a_37_, v_a_38_, v_a_39_, v_a_40_);
lean_dec(v_a_40_);
lean_dec_ref(v_a_39_);
lean_dec_ref(v_a_38_);
lean_dec(v_a_37_);
return v_res_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps(lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___redArg(v_a_43_, v_a_45_, v_a_51_, v_a_52_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps___boxed(lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_Meta_Grind_Arith_CommRing_checkMaxSteps(v_a_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
lean_dec(v_a_60_);
lean_dec_ref(v_a_59_);
lean_dec(v_a_58_);
lean_dec_ref(v_a_57_);
lean_dec(v_a_56_);
lean_dec(v_a_55_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0(lean_object* v_n_67_, lean_object* v_s_68_){
_start:
{
lean_object* v_rings_69_; lean_object* v_typeIdOf_70_; lean_object* v_exprToRingId_71_; lean_object* v_semirings_72_; lean_object* v_stypeIdOf_73_; lean_object* v_exprToSemiringId_74_; lean_object* v_ncRings_75_; lean_object* v_exprToNCRingId_76_; lean_object* v_nctypeIdOf_77_; lean_object* v_ncSemirings_78_; lean_object* v_exprToNCSemiringId_79_; lean_object* v_ncstypeIdOf_80_; lean_object* v_steps_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_89_; 
v_rings_69_ = lean_ctor_get(v_s_68_, 0);
v_typeIdOf_70_ = lean_ctor_get(v_s_68_, 1);
v_exprToRingId_71_ = lean_ctor_get(v_s_68_, 2);
v_semirings_72_ = lean_ctor_get(v_s_68_, 3);
v_stypeIdOf_73_ = lean_ctor_get(v_s_68_, 4);
v_exprToSemiringId_74_ = lean_ctor_get(v_s_68_, 5);
v_ncRings_75_ = lean_ctor_get(v_s_68_, 6);
v_exprToNCRingId_76_ = lean_ctor_get(v_s_68_, 7);
v_nctypeIdOf_77_ = lean_ctor_get(v_s_68_, 8);
v_ncSemirings_78_ = lean_ctor_get(v_s_68_, 9);
v_exprToNCSemiringId_79_ = lean_ctor_get(v_s_68_, 10);
v_ncstypeIdOf_80_ = lean_ctor_get(v_s_68_, 11);
v_steps_81_ = lean_ctor_get(v_s_68_, 12);
v_isSharedCheck_89_ = !lean_is_exclusive(v_s_68_);
if (v_isSharedCheck_89_ == 0)
{
v___x_83_ = v_s_68_;
v_isShared_84_ = v_isSharedCheck_89_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_steps_81_);
lean_inc(v_ncstypeIdOf_80_);
lean_inc(v_exprToNCSemiringId_79_);
lean_inc(v_ncSemirings_78_);
lean_inc(v_nctypeIdOf_77_);
lean_inc(v_exprToNCRingId_76_);
lean_inc(v_ncRings_75_);
lean_inc(v_exprToSemiringId_74_);
lean_inc(v_stypeIdOf_73_);
lean_inc(v_semirings_72_);
lean_inc(v_exprToRingId_71_);
lean_inc(v_typeIdOf_70_);
lean_inc(v_rings_69_);
lean_dec(v_s_68_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_89_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_85_; lean_object* v___x_87_; 
v___x_85_ = lean_nat_add(v_steps_81_, v_n_67_);
lean_dec(v_steps_81_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 12, v___x_85_);
v___x_87_ = v___x_83_;
goto v_reusejp_86_;
}
else
{
lean_object* v_reuseFailAlloc_88_; 
v_reuseFailAlloc_88_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_88_, 0, v_rings_69_);
lean_ctor_set(v_reuseFailAlloc_88_, 1, v_typeIdOf_70_);
lean_ctor_set(v_reuseFailAlloc_88_, 2, v_exprToRingId_71_);
lean_ctor_set(v_reuseFailAlloc_88_, 3, v_semirings_72_);
lean_ctor_set(v_reuseFailAlloc_88_, 4, v_stypeIdOf_73_);
lean_ctor_set(v_reuseFailAlloc_88_, 5, v_exprToSemiringId_74_);
lean_ctor_set(v_reuseFailAlloc_88_, 6, v_ncRings_75_);
lean_ctor_set(v_reuseFailAlloc_88_, 7, v_exprToNCRingId_76_);
lean_ctor_set(v_reuseFailAlloc_88_, 8, v_nctypeIdOf_77_);
lean_ctor_set(v_reuseFailAlloc_88_, 9, v_ncSemirings_78_);
lean_ctor_set(v_reuseFailAlloc_88_, 10, v_exprToNCSemiringId_79_);
lean_ctor_set(v_reuseFailAlloc_88_, 11, v_ncstypeIdOf_80_);
lean_ctor_set(v_reuseFailAlloc_88_, 12, v___x_85_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0___boxed(lean_object* v_n_90_, lean_object* v_s_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0(v_n_90_, v_s_91_);
lean_dec(v_n_90_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg(lean_object* v_n_93_, lean_object* v_a_94_, lean_object* v_a_95_){
_start:
{
lean_object* v___f_97_; lean_object* v___x_98_; lean_object* v___x_99_; 
v___f_97_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_97_, 0, v_n_93_);
v___x_98_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_99_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_98_, v___f_97_, v_a_94_, v_a_95_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg___boxed(lean_object* v_n_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg(v_n_100_, v_a_101_, v_a_102_);
lean_dec(v_a_102_);
lean_dec(v_a_101_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps(lean_object* v_n_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_, lean_object* v_a_114_, lean_object* v_a_115_){
_start:
{
lean_object* v___x_117_; 
v___x_117_ = l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg(v_n_105_, v_a_106_, v_a_115_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_incSteps___boxed(lean_object* v_n_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lean_Meta_Grind_Arith_CommRing_incSteps(v_n_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_);
lean_dec(v_a_128_);
lean_dec_ref(v_a_127_);
lean_dec(v_a_126_);
lean_dec_ref(v_a_125_);
lean_dec(v_a_124_);
lean_dec_ref(v_a_123_);
lean_dec(v_a_122_);
lean_dec_ref(v_a_121_);
lean_dec(v_a_120_);
lean_dec(v_a_119_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___redArg(lean_object* v_ringId_131_, lean_object* v_x_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_){
_start:
{
uint8_t v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_144_ = 0;
v___x_145_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_145_, 0, v_ringId_131_);
lean_ctor_set_uint8(v___x_145_, sizeof(void*)*1, v___x_144_);
lean_inc(v_a_142_);
lean_inc_ref(v_a_141_);
lean_inc(v_a_140_);
lean_inc_ref(v_a_139_);
lean_inc(v_a_138_);
lean_inc_ref(v_a_137_);
lean_inc(v_a_136_);
lean_inc_ref(v_a_135_);
lean_inc(v_a_134_);
lean_inc(v_a_133_);
v___x_146_ = lean_apply_12(v_x_132_, v___x_145_, v_a_133_, v_a_134_, v_a_135_, v_a_136_, v_a_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, lean_box(0));
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___redArg___boxed(lean_object* v_ringId_147_, lean_object* v_x_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_){
_start:
{
lean_object* v_res_160_; 
v_res_160_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_run___redArg(v_ringId_147_, v_x_148_, v_a_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_, v_a_158_);
lean_dec(v_a_158_);
lean_dec_ref(v_a_157_);
lean_dec(v_a_156_);
lean_dec_ref(v_a_155_);
lean_dec(v_a_154_);
lean_dec_ref(v_a_153_);
lean_dec(v_a_152_);
lean_dec_ref(v_a_151_);
lean_dec(v_a_150_);
lean_dec(v_a_149_);
return v_res_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run(lean_object* v_00_u03b1_161_, lean_object* v_ringId_162_, lean_object* v_x_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_){
_start:
{
uint8_t v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_175_ = 0;
v___x_176_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_176_, 0, v_ringId_162_);
lean_ctor_set_uint8(v___x_176_, sizeof(void*)*1, v___x_175_);
lean_inc(v_a_173_);
lean_inc_ref(v_a_172_);
lean_inc(v_a_171_);
lean_inc_ref(v_a_170_);
lean_inc(v_a_169_);
lean_inc_ref(v_a_168_);
lean_inc(v_a_167_);
lean_inc_ref(v_a_166_);
lean_inc(v_a_165_);
lean_inc(v_a_164_);
v___x_177_ = lean_apply_12(v_x_163_, v___x_176_, v_a_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, lean_box(0));
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_run___boxed(lean_object* v_00_u03b1_178_, lean_object* v_ringId_179_, lean_object* v_x_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_run(v_00_u03b1_178_, v_ringId_179_, v_x_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_);
lean_dec(v_a_190_);
lean_dec_ref(v_a_189_);
lean_dec(v_a_188_);
lean_dec_ref(v_a_187_);
lean_dec(v_a_186_);
lean_dec_ref(v_a_185_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
lean_dec(v_a_182_);
lean_dec(v_a_181_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___redArg(lean_object* v_a_193_){
_start:
{
lean_object* v_ringId_195_; lean_object* v___x_196_; 
v_ringId_195_ = lean_ctor_get(v_a_193_, 0);
lean_inc(v_ringId_195_);
v___x_196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_196_, 0, v_ringId_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___redArg___boxed(lean_object* v_a_197_, lean_object* v_a_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lean_Meta_Grind_Arith_CommRing_getRingId___redArg(v_a_197_);
lean_dec_ref(v_a_197_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId(lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_, lean_object* v_a_209_, lean_object* v_a_210_){
_start:
{
lean_object* v_ringId_212_; lean_object* v___x_213_; 
v_ringId_212_ = lean_ctor_get(v_a_200_, 0);
lean_inc(v_ringId_212_);
v___x_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_213_, 0, v_ringId_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getRingId___boxed(lean_object* v_a_214_, lean_object* v_a_215_, lean_object* v_a_216_, lean_object* v_a_217_, lean_object* v_a_218_, lean_object* v_a_219_, lean_object* v_a_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lean_Meta_Grind_Arith_CommRing_getRingId(v_a_214_, v_a_215_, v_a_216_, v_a_217_, v_a_218_, v_a_219_, v_a_220_, v_a_221_, v_a_222_, v_a_223_, v_a_224_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
lean_dec_ref(v_a_221_);
lean_dec(v_a_220_);
lean_dec_ref(v_a_219_);
lean_dec(v_a_218_);
lean_dec_ref(v_a_217_);
lean_dec(v_a_216_);
lean_dec(v_a_215_);
lean_dec_ref(v_a_214_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0(lean_object* v_e_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v___x_240_; 
v___x_240_ = l_Lean_Meta_Sym_canon(v_e_227_, v___y_233_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_);
if (lean_obj_tag(v___x_240_) == 0)
{
lean_object* v_a_241_; lean_object* v___x_242_; 
v_a_241_ = lean_ctor_get(v___x_240_, 0);
lean_inc(v_a_241_);
lean_dec_ref(v___x_240_);
v___x_242_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_241_, v___y_234_, v___y_238_);
return v___x_242_;
}
else
{
return v___x_240_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0___boxed(lean_object* v_e_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0(v_e_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_, v___y_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_);
lean_dec(v___y_254_);
lean_dec_ref(v___y_253_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v___y_248_);
lean_dec_ref(v___y_247_);
lean_dec(v___y_246_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1(lean_object* v_e_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v_e_257_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1___boxed(lean_object* v_e_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1(v_e_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_);
lean_dec(v___y_282_);
lean_dec_ref(v___y_281_);
lean_dec(v___y_280_);
lean_dec_ref(v___y_279_);
lean_dec(v___y_278_);
lean_dec_ref(v___y_277_);
lean_dec(v___y_276_);
lean_dec_ref(v___y_275_);
lean_dec(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
return v_res_284_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__0(void){
_start:
{
lean_object* v___f_285_; 
v___f_285_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__0___boxed), 13, 0);
return v___f_285_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__1(void){
_start:
{
lean_object* v___f_286_; 
v___f_286_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___lam__1___boxed), 13, 0);
return v___f_286_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__2(void){
_start:
{
lean_object* v___f_287_; lean_object* v___f_288_; lean_object* v___x_289_; 
v___f_287_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__1);
v___f_288_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__0);
v___x_289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_289_, 0, v___f_288_);
lean_ctor_set(v___x_289_, 1, v___f_287_);
return v___x_289_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM(void){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__2, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__2_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM___closed__2);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0(lean_object* v_msgData_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
lean_object* v___x_297_; lean_object* v_env_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v_mctx_301_; lean_object* v_lctx_302_; lean_object* v_options_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_297_ = lean_st_ref_get(v___y_295_);
v_env_298_ = lean_ctor_get(v___x_297_, 0);
lean_inc_ref(v_env_298_);
lean_dec(v___x_297_);
v___x_299_ = lean_st_ref_get(v___y_295_);
lean_dec(v___x_299_);
v___x_300_ = lean_st_ref_get(v___y_293_);
v_mctx_301_ = lean_ctor_get(v___x_300_, 0);
lean_inc_ref(v_mctx_301_);
lean_dec(v___x_300_);
v_lctx_302_ = lean_ctor_get(v___y_292_, 2);
v_options_303_ = lean_ctor_get(v___y_294_, 2);
lean_inc_ref(v_options_303_);
lean_inc_ref(v_lctx_302_);
v___x_304_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_304_, 0, v_env_298_);
lean_ctor_set(v___x_304_, 1, v_mctx_301_);
lean_ctor_set(v___x_304_, 2, v_lctx_302_);
lean_ctor_set(v___x_304_, 3, v_options_303_);
v___x_305_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v_msgData_291_);
v___x_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0___boxed(lean_object* v_msgData_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0(v_msgData_307_, v___y_308_, v___y_309_, v___y_310_, v___y_311_);
lean_dec(v___y_311_);
lean_dec_ref(v___y_310_);
lean_dec(v___y_309_);
lean_dec_ref(v___y_308_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(lean_object* v_msg_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_){
_start:
{
lean_object* v_ref_320_; lean_object* v___x_321_; lean_object* v_a_322_; lean_object* v___x_324_; uint8_t v_isShared_325_; uint8_t v_isSharedCheck_330_; 
v_ref_320_ = lean_ctor_get(v___y_317_, 5);
v___x_321_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0_spec__0(v_msg_314_, v___y_315_, v___y_316_, v___y_317_, v___y_318_);
v_a_322_ = lean_ctor_get(v___x_321_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_321_);
if (v_isSharedCheck_330_ == 0)
{
v___x_324_ = v___x_321_;
v_isShared_325_ = v_isSharedCheck_330_;
goto v_resetjp_323_;
}
else
{
lean_inc(v_a_322_);
lean_dec(v___x_321_);
v___x_324_ = lean_box(0);
v_isShared_325_ = v_isSharedCheck_330_;
goto v_resetjp_323_;
}
v_resetjp_323_:
{
lean_object* v___x_326_; lean_object* v___x_328_; 
lean_inc(v_ref_320_);
v___x_326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_326_, 0, v_ref_320_);
lean_ctor_set(v___x_326_, 1, v_a_322_);
if (v_isShared_325_ == 0)
{
lean_ctor_set_tag(v___x_324_, 1);
lean_ctor_set(v___x_324_, 0, v___x_326_);
v___x_328_ = v___x_324_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v___x_326_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg___boxed(lean_object* v_msg_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(v_msg_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
return v_res_337_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__0(void){
_start:
{
lean_object* v___x_338_; 
v___x_338_ = lean_mk_string_unchecked("`grind` internal error, invalid ringId", 38, 38);
return v___x_338_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1(void){
_start:
{
lean_object* v___x_339_; lean_object* v___x_340_; 
v___x_339_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__0);
v___x_340_ = l_Lean_stringToMessageData(v___x_339_);
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_, lean_object* v_a_350_, lean_object* v_a_351_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_342_, v_a_350_, v_a_351_);
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_368_; 
v_a_354_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_368_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_368_ == 0)
{
v___x_356_ = v___x_353_;
v_isShared_357_ = v_isSharedCheck_368_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_353_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_368_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v_ringId_358_; lean_object* v_rings_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v_ringId_358_ = lean_ctor_get(v_a_341_, 0);
v_rings_359_ = lean_ctor_get(v_a_354_, 0);
lean_inc_ref(v_rings_359_);
lean_dec(v_a_354_);
v___x_360_ = lean_array_get_size(v_rings_359_);
v___x_361_ = lean_nat_dec_lt(v_ringId_358_, v___x_360_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; lean_object* v___x_363_; 
lean_dec_ref(v_rings_359_);
lean_del_object(v___x_356_);
v___x_362_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___closed__1);
v___x_363_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(v___x_362_, v_a_348_, v_a_349_, v_a_350_, v_a_351_);
return v___x_363_;
}
else
{
lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_364_ = lean_array_fget(v_rings_359_, v_ringId_358_);
lean_dec_ref(v_rings_359_);
if (v_isShared_357_ == 0)
{
lean_ctor_set(v___x_356_, 0, v___x_364_);
v___x_366_ = v___x_356_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
}
}
else
{
lean_object* v_a_369_; lean_object* v___x_371_; uint8_t v_isShared_372_; uint8_t v_isSharedCheck_376_; 
v_a_369_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_376_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_376_ == 0)
{
v___x_371_ = v___x_353_;
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
else
{
lean_inc(v_a_369_);
lean_dec(v___x_353_);
v___x_371_ = lean_box(0);
v_isShared_372_ = v_isSharedCheck_376_;
goto v_resetjp_370_;
}
v_resetjp_370_:
{
lean_object* v___x_374_; 
if (v_isShared_372_ == 0)
{
v___x_374_ = v___x_371_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_375_; 
v_reuseFailAlloc_375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_375_, 0, v_a_369_);
v___x_374_ = v_reuseFailAlloc_375_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
return v___x_374_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___boxed(lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_377_, v_a_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_, v_a_383_, v_a_384_, v_a_385_, v_a_386_, v_a_387_);
lean_dec(v_a_387_);
lean_dec_ref(v_a_386_);
lean_dec(v_a_385_);
lean_dec_ref(v_a_384_);
lean_dec(v_a_383_);
lean_dec_ref(v_a_382_);
lean_dec(v_a_381_);
lean_dec_ref(v_a_380_);
lean_dec(v_a_379_);
lean_dec(v_a_378_);
lean_dec_ref(v_a_377_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0(lean_object* v_00_u03b1_390_, lean_object* v_msg_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(v_msg_391_, v___y_399_, v___y_400_, v___y_401_, v___y_402_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___boxed(lean_object* v_00_u03b1_405_, lean_object* v_msg_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v_res_419_; 
v_res_419_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0(v_00_u03b1_405_, v_msg_406_, v___y_407_, v___y_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_);
lean_dec(v___y_417_);
lean_dec_ref(v___y_416_);
lean_dec(v___y_415_);
lean_dec_ref(v___y_414_);
lean_dec(v___y_413_);
lean_dec_ref(v___y_412_);
lean_dec(v___y_411_);
lean_dec_ref(v___y_410_);
lean_dec(v___y_409_);
lean_dec(v___y_408_);
lean_dec_ref(v___y_407_);
return v_res_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0(lean_object* v_ringId_420_, lean_object* v_f_421_, lean_object* v_s_422_){
_start:
{
lean_object* v_rings_423_; lean_object* v_typeIdOf_424_; lean_object* v_exprToRingId_425_; lean_object* v_semirings_426_; lean_object* v_stypeIdOf_427_; lean_object* v_exprToSemiringId_428_; lean_object* v_ncRings_429_; lean_object* v_exprToNCRingId_430_; lean_object* v_nctypeIdOf_431_; lean_object* v_ncSemirings_432_; lean_object* v_exprToNCSemiringId_433_; lean_object* v_ncstypeIdOf_434_; lean_object* v_steps_435_; lean_object* v___x_436_; uint8_t v___x_437_; 
v_rings_423_ = lean_ctor_get(v_s_422_, 0);
v_typeIdOf_424_ = lean_ctor_get(v_s_422_, 1);
v_exprToRingId_425_ = lean_ctor_get(v_s_422_, 2);
v_semirings_426_ = lean_ctor_get(v_s_422_, 3);
v_stypeIdOf_427_ = lean_ctor_get(v_s_422_, 4);
v_exprToSemiringId_428_ = lean_ctor_get(v_s_422_, 5);
v_ncRings_429_ = lean_ctor_get(v_s_422_, 6);
v_exprToNCRingId_430_ = lean_ctor_get(v_s_422_, 7);
v_nctypeIdOf_431_ = lean_ctor_get(v_s_422_, 8);
v_ncSemirings_432_ = lean_ctor_get(v_s_422_, 9);
v_exprToNCSemiringId_433_ = lean_ctor_get(v_s_422_, 10);
v_ncstypeIdOf_434_ = lean_ctor_get(v_s_422_, 11);
v_steps_435_ = lean_ctor_get(v_s_422_, 12);
v___x_436_ = lean_array_get_size(v_rings_423_);
v___x_437_ = lean_nat_dec_lt(v_ringId_420_, v___x_436_);
if (v___x_437_ == 0)
{
lean_dec_ref(v_f_421_);
return v_s_422_;
}
else
{
lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_449_; 
lean_inc(v_steps_435_);
lean_inc_ref(v_ncstypeIdOf_434_);
lean_inc_ref(v_exprToNCSemiringId_433_);
lean_inc_ref(v_ncSemirings_432_);
lean_inc_ref(v_nctypeIdOf_431_);
lean_inc_ref(v_exprToNCRingId_430_);
lean_inc_ref(v_ncRings_429_);
lean_inc_ref(v_exprToSemiringId_428_);
lean_inc_ref(v_stypeIdOf_427_);
lean_inc_ref(v_semirings_426_);
lean_inc_ref(v_exprToRingId_425_);
lean_inc_ref(v_typeIdOf_424_);
lean_inc_ref(v_rings_423_);
v_isSharedCheck_449_ = !lean_is_exclusive(v_s_422_);
if (v_isSharedCheck_449_ == 0)
{
lean_object* v_unused_450_; lean_object* v_unused_451_; lean_object* v_unused_452_; lean_object* v_unused_453_; lean_object* v_unused_454_; lean_object* v_unused_455_; lean_object* v_unused_456_; lean_object* v_unused_457_; lean_object* v_unused_458_; lean_object* v_unused_459_; lean_object* v_unused_460_; lean_object* v_unused_461_; lean_object* v_unused_462_; 
v_unused_450_ = lean_ctor_get(v_s_422_, 12);
lean_dec(v_unused_450_);
v_unused_451_ = lean_ctor_get(v_s_422_, 11);
lean_dec(v_unused_451_);
v_unused_452_ = lean_ctor_get(v_s_422_, 10);
lean_dec(v_unused_452_);
v_unused_453_ = lean_ctor_get(v_s_422_, 9);
lean_dec(v_unused_453_);
v_unused_454_ = lean_ctor_get(v_s_422_, 8);
lean_dec(v_unused_454_);
v_unused_455_ = lean_ctor_get(v_s_422_, 7);
lean_dec(v_unused_455_);
v_unused_456_ = lean_ctor_get(v_s_422_, 6);
lean_dec(v_unused_456_);
v_unused_457_ = lean_ctor_get(v_s_422_, 5);
lean_dec(v_unused_457_);
v_unused_458_ = lean_ctor_get(v_s_422_, 4);
lean_dec(v_unused_458_);
v_unused_459_ = lean_ctor_get(v_s_422_, 3);
lean_dec(v_unused_459_);
v_unused_460_ = lean_ctor_get(v_s_422_, 2);
lean_dec(v_unused_460_);
v_unused_461_ = lean_ctor_get(v_s_422_, 1);
lean_dec(v_unused_461_);
v_unused_462_ = lean_ctor_get(v_s_422_, 0);
lean_dec(v_unused_462_);
v___x_439_ = v_s_422_;
v_isShared_440_ = v_isSharedCheck_449_;
goto v_resetjp_438_;
}
else
{
lean_dec(v_s_422_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_449_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v_v_441_; lean_object* v___x_442_; lean_object* v_xs_x27_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_447_; 
v_v_441_ = lean_array_fget(v_rings_423_, v_ringId_420_);
v___x_442_ = lean_box(0);
v_xs_x27_443_ = lean_array_fset(v_rings_423_, v_ringId_420_, v___x_442_);
v___x_444_ = lean_apply_1(v_f_421_, v_v_441_);
v___x_445_ = lean_array_fset(v_xs_x27_443_, v_ringId_420_, v___x_444_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_445_);
v___x_447_ = v___x_439_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_445_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v_typeIdOf_424_);
lean_ctor_set(v_reuseFailAlloc_448_, 2, v_exprToRingId_425_);
lean_ctor_set(v_reuseFailAlloc_448_, 3, v_semirings_426_);
lean_ctor_set(v_reuseFailAlloc_448_, 4, v_stypeIdOf_427_);
lean_ctor_set(v_reuseFailAlloc_448_, 5, v_exprToSemiringId_428_);
lean_ctor_set(v_reuseFailAlloc_448_, 6, v_ncRings_429_);
lean_ctor_set(v_reuseFailAlloc_448_, 7, v_exprToNCRingId_430_);
lean_ctor_set(v_reuseFailAlloc_448_, 8, v_nctypeIdOf_431_);
lean_ctor_set(v_reuseFailAlloc_448_, 9, v_ncSemirings_432_);
lean_ctor_set(v_reuseFailAlloc_448_, 10, v_exprToNCSemiringId_433_);
lean_ctor_set(v_reuseFailAlloc_448_, 11, v_ncstypeIdOf_434_);
lean_ctor_set(v_reuseFailAlloc_448_, 12, v_steps_435_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___boxed(lean_object* v_ringId_463_, lean_object* v_f_464_, lean_object* v_s_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0(v_ringId_463_, v_f_464_, v_s_465_);
lean_dec(v_ringId_463_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(lean_object* v_f_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_ringId_472_; lean_object* v___f_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v_ringId_472_ = lean_ctor_get(v_a_468_, 0);
lean_inc(v_ringId_472_);
v___f_473_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_473_, 0, v_ringId_472_);
lean_closure_set(v___f_473_, 1, v_f_467_);
v___x_474_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_475_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_474_, v___f_473_, v_a_469_, v_a_470_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg___boxed(lean_object* v_f_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v_f_476_, v_a_477_, v_a_478_, v_a_479_);
lean_dec(v_a_479_);
lean_dec(v_a_478_);
lean_dec_ref(v_a_477_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing(lean_object* v_f_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_){
_start:
{
lean_object* v___x_495_; 
v___x_495_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v_f_482_, v_a_483_, v_a_484_, v_a_493_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___boxed(lean_object* v_f_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing(v_f_496_, v_a_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_);
lean_dec(v_a_507_);
lean_dec_ref(v_a_506_);
lean_dec(v_a_505_);
lean_dec_ref(v_a_504_);
lean_dec(v_a_503_);
lean_dec_ref(v_a_502_);
lean_dec(v_a_501_);
lean_dec_ref(v_a_500_);
lean_dec(v_a_499_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
return v_res_509_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__0(void){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___boxed), 13, 0);
return v___x_510_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
v___x_511_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__0);
v___x_512_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing___boxed), 12, 0);
v___x_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_512_);
lean_ctor_set(v___x_513_, 1, v___x_511_);
return v___x_513_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM(void){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM___closed__1);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___redArg(lean_object* v_x_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_, lean_object* v_a_525_, lean_object* v_a_526_){
_start:
{
lean_object* v_ringId_528_; uint8_t v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v_ringId_528_ = lean_ctor_get(v_a_516_, 0);
v___x_529_ = 1;
lean_inc(v_ringId_528_);
v___x_530_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_530_, 0, v_ringId_528_);
lean_ctor_set_uint8(v___x_530_, sizeof(void*)*1, v___x_529_);
lean_inc(v_a_526_);
lean_inc_ref(v_a_525_);
lean_inc(v_a_524_);
lean_inc_ref(v_a_523_);
lean_inc(v_a_522_);
lean_inc_ref(v_a_521_);
lean_inc(v_a_520_);
lean_inc_ref(v_a_519_);
lean_inc(v_a_518_);
lean_inc(v_a_517_);
v___x_531_ = lean_apply_12(v_x_515_, v___x_530_, v_a_517_, v_a_518_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_, v_a_524_, v_a_525_, v_a_526_, lean_box(0));
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___redArg___boxed(lean_object* v_x_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v_a_541_, lean_object* v_a_542_, lean_object* v_a_543_, lean_object* v_a_544_){
_start:
{
lean_object* v_res_545_; 
v_res_545_ = l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___redArg(v_x_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_, v_a_541_, v_a_542_, v_a_543_);
lean_dec(v_a_543_);
lean_dec_ref(v_a_542_);
lean_dec(v_a_541_);
lean_dec_ref(v_a_540_);
lean_dec(v_a_539_);
lean_dec_ref(v_a_538_);
lean_dec(v_a_537_);
lean_dec_ref(v_a_536_);
lean_dec(v_a_535_);
lean_dec(v_a_534_);
lean_dec_ref(v_a_533_);
return v_res_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd(lean_object* v_00_u03b1_546_, lean_object* v_x_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_, lean_object* v_a_558_){
_start:
{
lean_object* v_ringId_560_; uint8_t v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; 
v_ringId_560_ = lean_ctor_get(v_a_548_, 0);
v___x_561_ = 1;
lean_inc(v_ringId_560_);
v___x_562_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_562_, 0, v_ringId_560_);
lean_ctor_set_uint8(v___x_562_, sizeof(void*)*1, v___x_561_);
lean_inc(v_a_558_);
lean_inc_ref(v_a_557_);
lean_inc(v_a_556_);
lean_inc_ref(v_a_555_);
lean_inc(v_a_554_);
lean_inc_ref(v_a_553_);
lean_inc(v_a_552_);
lean_inc_ref(v_a_551_);
lean_inc(v_a_550_);
lean_inc(v_a_549_);
v___x_563_ = lean_apply_12(v_x_547_, v___x_562_, v_a_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_, v_a_558_, lean_box(0));
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd___boxed(lean_object* v_00_u03b1_564_, lean_object* v_x_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_, lean_object* v_a_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_){
_start:
{
lean_object* v_res_578_; 
v_res_578_ = l_Lean_Meta_Grind_Arith_CommRing_withCheckCoeffDvd(v_00_u03b1_564_, v_x_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_, v_a_570_, v_a_571_, v_a_572_, v_a_573_, v_a_574_, v_a_575_, v_a_576_);
lean_dec(v_a_576_);
lean_dec_ref(v_a_575_);
lean_dec(v_a_574_);
lean_dec_ref(v_a_573_);
lean_dec(v_a_572_);
lean_dec_ref(v_a_571_);
lean_dec(v_a_570_);
lean_dec_ref(v_a_569_);
lean_dec(v_a_568_);
lean_dec(v_a_567_);
lean_dec_ref(v_a_566_);
return v_res_578_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg(lean_object* v_a_579_){
_start:
{
uint8_t v_checkCoeffDvd_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v_checkCoeffDvd_581_ = lean_ctor_get_uint8(v_a_579_, sizeof(void*)*1);
v___x_582_ = lean_box(v_checkCoeffDvd_581_);
v___x_583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_583_, 0, v___x_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg___boxed(lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg(v_a_584_);
lean_dec_ref(v_a_584_);
return v_res_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd(lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___redArg(v_a_587_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd___boxed(lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_Meta_Grind_Arith_CommRing_checkCoeffDvd(v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_, v_a_609_, v_a_610_);
lean_dec(v_a_610_);
lean_dec_ref(v_a_609_);
lean_dec(v_a_608_);
lean_dec_ref(v_a_607_);
lean_dec(v_a_606_);
lean_dec_ref(v_a_605_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
lean_dec(v_a_602_);
lean_dec(v_a_601_);
lean_dec_ref(v_a_600_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_613_, lean_object* v_vals_614_, lean_object* v_i_615_, lean_object* v_k_616_){
_start:
{
lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_617_ = lean_array_get_size(v_keys_613_);
v___x_618_ = lean_nat_dec_lt(v_i_615_, v___x_617_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; 
lean_dec(v_i_615_);
v___x_619_ = lean_box(0);
return v___x_619_;
}
else
{
lean_object* v_k_x27_620_; uint8_t v___x_621_; 
v_k_x27_620_ = lean_array_fget_borrowed(v_keys_613_, v_i_615_);
v___x_621_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_616_, v_k_x27_620_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = lean_unsigned_to_nat(1u);
v___x_623_ = lean_nat_add(v_i_615_, v___x_622_);
lean_dec(v_i_615_);
v_i_615_ = v___x_623_;
goto _start;
}
else
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_array_fget_borrowed(v_vals_614_, v_i_615_);
lean_dec(v_i_615_);
lean_inc(v___x_625_);
v___x_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_626_, 0, v___x_625_);
return v___x_626_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_627_, lean_object* v_vals_628_, lean_object* v_i_629_, lean_object* v_k_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_627_, v_vals_628_, v_i_629_, v_k_630_);
lean_dec_ref(v_k_630_);
lean_dec_ref(v_vals_628_);
lean_dec_ref(v_keys_627_);
return v_res_631_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_632_; size_t v___x_633_; size_t v___x_634_; 
v___x_632_ = ((size_t)5ULL);
v___x_633_ = ((size_t)1ULL);
v___x_634_ = lean_usize_shift_left(v___x_633_, v___x_632_);
return v___x_634_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_635_; size_t v___x_636_; size_t v___x_637_; 
v___x_635_ = ((size_t)1ULL);
v___x_636_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__0);
v___x_637_ = lean_usize_sub(v___x_636_, v___x_635_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg(lean_object* v_x_638_, size_t v_x_639_, lean_object* v_x_640_){
_start:
{
if (lean_obj_tag(v_x_638_) == 0)
{
lean_object* v_es_641_; lean_object* v___x_642_; size_t v___x_643_; size_t v___x_644_; size_t v___x_645_; lean_object* v_j_646_; lean_object* v___x_647_; 
v_es_641_ = lean_ctor_get(v_x_638_, 0);
v___x_642_ = lean_box(2);
v___x_643_ = ((size_t)5ULL);
v___x_644_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__1);
v___x_645_ = lean_usize_land(v_x_639_, v___x_644_);
v_j_646_ = lean_usize_to_nat(v___x_645_);
v___x_647_ = lean_array_get_borrowed(v___x_642_, v_es_641_, v_j_646_);
lean_dec(v_j_646_);
switch(lean_obj_tag(v___x_647_))
{
case 0:
{
lean_object* v_key_648_; lean_object* v_val_649_; uint8_t v___x_650_; 
v_key_648_ = lean_ctor_get(v___x_647_, 0);
v_val_649_ = lean_ctor_get(v___x_647_, 1);
v___x_650_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_640_, v_key_648_);
if (v___x_650_ == 0)
{
lean_object* v___x_651_; 
v___x_651_ = lean_box(0);
return v___x_651_;
}
else
{
lean_object* v___x_652_; 
lean_inc(v_val_649_);
v___x_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_652_, 0, v_val_649_);
return v___x_652_;
}
}
case 1:
{
lean_object* v_node_653_; size_t v___x_654_; 
v_node_653_ = lean_ctor_get(v___x_647_, 0);
v___x_654_ = lean_usize_shift_right(v_x_639_, v___x_643_);
v_x_638_ = v_node_653_;
v_x_639_ = v___x_654_;
goto _start;
}
default: 
{
lean_object* v___x_656_; 
v___x_656_ = lean_box(0);
return v___x_656_;
}
}
}
else
{
lean_object* v_ks_657_; lean_object* v_vs_658_; lean_object* v___x_659_; lean_object* v___x_660_; 
v_ks_657_ = lean_ctor_get(v_x_638_, 0);
v_vs_658_ = lean_ctor_get(v_x_638_, 1);
v___x_659_ = lean_unsigned_to_nat(0u);
v___x_660_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_657_, v_vs_658_, v___x_659_, v_x_640_);
return v___x_660_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_661_, lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
size_t v_x_867__boxed_664_; lean_object* v_res_665_; 
v_x_867__boxed_664_ = lean_unbox_usize(v_x_662_);
lean_dec(v_x_662_);
v_res_665_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg(v_x_661_, v_x_867__boxed_664_, v_x_663_);
lean_dec_ref(v_x_663_);
lean_dec_ref(v_x_661_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(lean_object* v_x_666_, lean_object* v_x_667_){
_start:
{
uint64_t v___x_668_; size_t v___x_669_; lean_object* v___x_670_; 
v___x_668_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_667_);
v___x_669_ = lean_uint64_to_usize(v___x_668_);
v___x_670_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg(v_x_666_, v___x_669_, v_x_667_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg___boxed(lean_object* v_x_671_, lean_object* v_x_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(v_x_671_, v_x_672_);
lean_dec_ref(v_x_672_);
lean_dec_ref(v_x_671_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg(lean_object* v_e_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Lean_Meta_Grind_Arith_CommRing_get_x27___redArg(v_a_675_, v_a_676_, v_a_677_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_689_; 
v_a_680_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_689_ == 0)
{
v___x_682_ = v___x_679_;
v_isShared_683_ = v_isSharedCheck_689_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_679_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_689_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v_exprToRingId_684_; lean_object* v___x_685_; lean_object* v___x_687_; 
v_exprToRingId_684_ = lean_ctor_get(v_a_680_, 2);
lean_inc_ref(v_exprToRingId_684_);
lean_dec(v_a_680_);
v___x_685_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(v_exprToRingId_684_, v_e_674_);
lean_dec_ref(v_exprToRingId_684_);
if (v_isShared_683_ == 0)
{
lean_ctor_set(v___x_682_, 0, v___x_685_);
v___x_687_ = v___x_682_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_685_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
v_a_690_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_679_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_679_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg___boxed(lean_object* v_e_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_){
_start:
{
lean_object* v_res_703_; 
v_res_703_ = l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg(v_e_698_, v_a_699_, v_a_700_, v_a_701_);
lean_dec(v_a_701_);
lean_dec_ref(v_a_700_);
lean_dec(v_a_699_);
lean_dec_ref(v_e_698_);
return v_res_703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f(lean_object* v_e_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_){
_start:
{
lean_object* v___x_716_; 
v___x_716_ = l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg(v_e_704_, v_a_705_, v_a_713_, v_a_714_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___boxed(lean_object* v_e_717_, lean_object* v_a_718_, lean_object* v_a_719_, lean_object* v_a_720_, lean_object* v_a_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_){
_start:
{
lean_object* v_res_729_; 
v_res_729_ = l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f(v_e_717_, v_a_718_, v_a_719_, v_a_720_, v_a_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
lean_dec(v_a_723_);
lean_dec_ref(v_a_722_);
lean_dec(v_a_721_);
lean_dec_ref(v_a_720_);
lean_dec(v_a_719_);
lean_dec(v_a_718_);
lean_dec_ref(v_e_717_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0(lean_object* v_00_u03b2_730_, lean_object* v_x_731_, lean_object* v_x_732_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(v_x_731_, v_x_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___boxed(lean_object* v_00_u03b2_734_, lean_object* v_x_735_, lean_object* v_x_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0(v_00_u03b2_734_, v_x_735_, v_x_736_);
lean_dec_ref(v_x_736_);
lean_dec_ref(v_x_735_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_738_, lean_object* v_x_739_, size_t v_x_740_, lean_object* v_x_741_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg(v_x_739_, v_x_740_, v_x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_743_, lean_object* v_x_744_, lean_object* v_x_745_, lean_object* v_x_746_){
_start:
{
size_t v_x_984__boxed_747_; lean_object* v_res_748_; 
v_x_984__boxed_747_ = lean_unbox_usize(v_x_745_);
lean_dec(v_x_745_);
v_res_748_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0(v_00_u03b2_743_, v_x_744_, v_x_984__boxed_747_, v_x_746_);
lean_dec_ref(v_x_746_);
lean_dec_ref(v_x_744_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_749_, lean_object* v_keys_750_, lean_object* v_vals_751_, lean_object* v_heq_752_, lean_object* v_i_753_, lean_object* v_k_754_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_750_, v_vals_751_, v_i_753_, v_k_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_756_, lean_object* v_keys_757_, lean_object* v_vals_758_, lean_object* v_heq_759_, lean_object* v_i_760_, lean_object* v_k_761_){
_start:
{
lean_object* v_res_762_; 
v_res_762_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_756_, v_keys_757_, v_vals_758_, v_heq_759_, v_i_760_, v_k_761_);
lean_dec_ref(v_k_761_);
lean_dec_ref(v_vals_758_);
lean_dec_ref(v_keys_757_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg___lam__0(lean_object* v_toPure_763_, lean_object* v_____do__lift_764_){
_start:
{
lean_object* v_charInst_x3f_768_; 
v_charInst_x3f_768_ = lean_ctor_get(v_____do__lift_764_, 5);
lean_inc(v_charInst_x3f_768_);
lean_dec_ref(v_____do__lift_764_);
if (lean_obj_tag(v_charInst_x3f_768_) == 1)
{
lean_object* v_val_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_780_; 
v_val_769_ = lean_ctor_get(v_charInst_x3f_768_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v_charInst_x3f_768_);
if (v_isSharedCheck_780_ == 0)
{
v___x_771_ = v_charInst_x3f_768_;
v_isShared_772_ = v_isSharedCheck_780_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_val_769_);
lean_dec(v_charInst_x3f_768_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_780_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v_snd_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v_snd_773_ = lean_ctor_get(v_val_769_, 1);
lean_inc(v_snd_773_);
lean_dec(v_val_769_);
v___x_774_ = lean_unsigned_to_nat(0u);
v___x_775_ = lean_nat_dec_eq(v_snd_773_, v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_777_; 
if (v_isShared_772_ == 0)
{
lean_ctor_set(v___x_771_, 0, v_snd_773_);
v___x_777_ = v___x_771_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v_snd_773_);
v___x_777_ = v_reuseFailAlloc_779_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
lean_object* v___x_778_; 
v___x_778_ = lean_apply_2(v_toPure_763_, lean_box(0), v___x_777_);
return v___x_778_;
}
}
else
{
lean_dec(v_snd_773_);
lean_del_object(v___x_771_);
goto v___jp_765_;
}
}
}
else
{
lean_dec(v_charInst_x3f_768_);
goto v___jp_765_;
}
v___jp_765_:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = lean_box(0);
v___x_767_ = lean_apply_2(v_toPure_763_, lean_box(0), v___x_766_);
return v___x_767_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg(lean_object* v_inst_781_, lean_object* v_inst_782_){
_start:
{
lean_object* v_toApplicative_783_; lean_object* v_toBind_784_; lean_object* v_getRing_785_; lean_object* v_toPure_786_; lean_object* v___f_787_; lean_object* v___x_788_; 
v_toApplicative_783_ = lean_ctor_get(v_inst_781_, 0);
lean_inc_ref(v_toApplicative_783_);
v_toBind_784_ = lean_ctor_get(v_inst_781_, 1);
lean_inc(v_toBind_784_);
lean_dec_ref(v_inst_781_);
v_getRing_785_ = lean_ctor_get(v_inst_782_, 0);
lean_inc(v_getRing_785_);
lean_dec_ref(v_inst_782_);
v_toPure_786_ = lean_ctor_get(v_toApplicative_783_, 1);
lean_inc(v_toPure_786_);
lean_dec_ref(v_toApplicative_783_);
v___f_787_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_787_, 0, v_toPure_786_);
v___x_788_ = lean_apply_4(v_toBind_784_, lean_box(0), lean_box(0), v_getRing_785_, v___f_787_);
return v___x_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f(lean_object* v_m_789_, lean_object* v_inst_790_, lean_object* v_inst_791_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lean_Meta_Grind_Arith_CommRing_nonzeroChar_x3f___redArg(v_inst_790_, v_inst_791_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg___lam__0(lean_object* v_toPure_793_, lean_object* v_____do__lift_794_){
_start:
{
lean_object* v_charInst_x3f_798_; 
v_charInst_x3f_798_ = lean_ctor_get(v_____do__lift_794_, 5);
lean_inc(v_charInst_x3f_798_);
lean_dec_ref(v_____do__lift_794_);
if (lean_obj_tag(v_charInst_x3f_798_) == 1)
{
lean_object* v_val_799_; lean_object* v_snd_800_; lean_object* v___x_801_; uint8_t v___x_802_; 
v_val_799_ = lean_ctor_get(v_charInst_x3f_798_, 0);
v_snd_800_ = lean_ctor_get(v_val_799_, 1);
v___x_801_ = lean_unsigned_to_nat(0u);
v___x_802_ = lean_nat_dec_eq(v_snd_800_, v___x_801_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; 
v___x_803_ = lean_apply_2(v_toPure_793_, lean_box(0), v_charInst_x3f_798_);
return v___x_803_;
}
else
{
lean_dec_ref(v_charInst_x3f_798_);
goto v___jp_795_;
}
}
else
{
lean_dec(v_charInst_x3f_798_);
goto v___jp_795_;
}
v___jp_795_:
{
lean_object* v___x_796_; lean_object* v___x_797_; 
v___x_796_ = lean_box(0);
v___x_797_ = lean_apply_2(v_toPure_793_, lean_box(0), v___x_796_);
return v___x_797_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg(lean_object* v_inst_804_, lean_object* v_inst_805_){
_start:
{
lean_object* v_toApplicative_806_; lean_object* v_toBind_807_; lean_object* v_getRing_808_; lean_object* v_toPure_809_; lean_object* v___f_810_; lean_object* v___x_811_; 
v_toApplicative_806_ = lean_ctor_get(v_inst_804_, 0);
lean_inc_ref(v_toApplicative_806_);
v_toBind_807_ = lean_ctor_get(v_inst_804_, 1);
lean_inc(v_toBind_807_);
lean_dec_ref(v_inst_804_);
v_getRing_808_ = lean_ctor_get(v_inst_805_, 0);
lean_inc(v_getRing_808_);
lean_dec_ref(v_inst_805_);
v_toPure_809_ = lean_ctor_get(v_toApplicative_806_, 1);
lean_inc(v_toPure_809_);
lean_dec_ref(v_toApplicative_806_);
v___f_810_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_810_, 0, v_toPure_809_);
v___x_811_ = lean_apply_4(v_toBind_807_, lean_box(0), lean_box(0), v_getRing_808_, v___f_810_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f(lean_object* v_m_812_, lean_object* v_inst_813_, lean_object* v_inst_814_){
_start:
{
lean_object* v___x_815_; 
v___x_815_ = l_Lean_Meta_Grind_Arith_CommRing_nonzeroCharInst_x3f___redArg(v_inst_813_, v_inst_814_);
return v___x_815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisorsInst_x3f(lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_, lean_object* v_a_819_, lean_object* v_a_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_816_, v_a_817_, v_a_818_, v_a_819_, v_a_820_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v_a_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_837_; 
v_a_829_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_837_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_837_ == 0)
{
v___x_831_ = v___x_828_;
v_isShared_832_ = v_isSharedCheck_837_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_a_829_);
lean_dec(v___x_828_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_837_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v_noZeroDivInst_x3f_833_; lean_object* v___x_835_; 
v_noZeroDivInst_x3f_833_ = lean_ctor_get(v_a_829_, 5);
lean_inc(v_noZeroDivInst_x3f_833_);
lean_dec(v_a_829_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 0, v_noZeroDivInst_x3f_833_);
v___x_835_ = v___x_831_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_noZeroDivInst_x3f_833_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
else
{
lean_object* v_a_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
v_a_838_ = lean_ctor_get(v___x_828_, 0);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_845_ == 0)
{
v___x_840_ = v___x_828_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_a_838_);
lean_dec(v___x_828_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisorsInst_x3f___boxed(lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_, lean_object* v_a_857_){
_start:
{
lean_object* v_res_858_; 
v_res_858_ = l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisorsInst_x3f(v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_, v_a_851_, v_a_852_, v_a_853_, v_a_854_, v_a_855_, v_a_856_);
lean_dec(v_a_856_);
lean_dec_ref(v_a_855_);
lean_dec(v_a_854_);
lean_dec_ref(v_a_853_);
lean_dec(v_a_852_);
lean_dec_ref(v_a_851_);
lean_dec(v_a_850_);
lean_dec_ref(v_a_849_);
lean_dec(v_a_848_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
return v_res_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisors(lean_object* v_a_859_, lean_object* v_a_860_, lean_object* v_a_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_, lean_object* v_a_866_, lean_object* v_a_867_, lean_object* v_a_868_, lean_object* v_a_869_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_859_, v_a_860_, v_a_861_, v_a_862_, v_a_863_, v_a_864_, v_a_865_, v_a_866_, v_a_867_, v_a_868_, v_a_869_);
if (lean_obj_tag(v___x_871_) == 0)
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_887_; 
v_a_872_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_887_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_887_ == 0)
{
v___x_874_ = v___x_871_;
v_isShared_875_ = v_isSharedCheck_887_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_871_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_887_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v_noZeroDivInst_x3f_876_; 
v_noZeroDivInst_x3f_876_ = lean_ctor_get(v_a_872_, 5);
lean_inc(v_noZeroDivInst_x3f_876_);
lean_dec(v_a_872_);
if (lean_obj_tag(v_noZeroDivInst_x3f_876_) == 0)
{
uint8_t v___x_877_; lean_object* v___x_878_; lean_object* v___x_880_; 
v___x_877_ = 0;
v___x_878_ = lean_box(v___x_877_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 0, v___x_878_);
v___x_880_ = v___x_874_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v___x_878_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
else
{
uint8_t v___x_882_; lean_object* v___x_883_; lean_object* v___x_885_; 
lean_dec_ref(v_noZeroDivInst_x3f_876_);
v___x_882_ = 1;
v___x_883_ = lean_box(v___x_882_);
if (v_isShared_875_ == 0)
{
lean_ctor_set(v___x_874_, 0, v___x_883_);
v___x_885_ = v___x_874_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_886_; 
v_reuseFailAlloc_886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_886_, 0, v___x_883_);
v___x_885_ = v_reuseFailAlloc_886_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
return v___x_885_;
}
}
}
}
else
{
lean_object* v_a_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_895_; 
v_a_888_ = lean_ctor_get(v___x_871_, 0);
v_isSharedCheck_895_ = !lean_is_exclusive(v___x_871_);
if (v_isSharedCheck_895_ == 0)
{
v___x_890_ = v___x_871_;
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_a_888_);
lean_dec(v___x_871_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_895_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_893_; 
if (v_isShared_891_ == 0)
{
v___x_893_ = v___x_890_;
goto v_reusejp_892_;
}
else
{
lean_object* v_reuseFailAlloc_894_; 
v_reuseFailAlloc_894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_894_, 0, v_a_888_);
v___x_893_ = v_reuseFailAlloc_894_;
goto v_reusejp_892_;
}
v_reusejp_892_:
{
return v___x_893_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisors___boxed(lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_, lean_object* v_a_905_, lean_object* v_a_906_, lean_object* v_a_907_){
_start:
{
lean_object* v_res_908_; 
v_res_908_ = l_Lean_Meta_Grind_Arith_CommRing_noZeroDivisors(v_a_896_, v_a_897_, v_a_898_, v_a_899_, v_a_900_, v_a_901_, v_a_902_, v_a_903_, v_a_904_, v_a_905_, v_a_906_);
lean_dec(v_a_906_);
lean_dec_ref(v_a_905_);
lean_dec(v_a_904_);
lean_dec_ref(v_a_903_);
lean_dec(v_a_902_);
lean_dec_ref(v_a_901_);
lean_dec(v_a_900_);
lean_dec_ref(v_a_899_);
lean_dec(v_a_898_);
lean_dec(v_a_897_);
lean_dec_ref(v_a_896_);
return v_res_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_hasChar(lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_, lean_object* v_a_914_, lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_909_, v_a_910_, v_a_911_, v_a_912_, v_a_913_, v_a_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_);
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; lean_object* v___x_924_; uint8_t v_isShared_925_; uint8_t v_isSharedCheck_938_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_938_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_938_ == 0)
{
v___x_924_ = v___x_921_;
v_isShared_925_ = v_isSharedCheck_938_;
goto v_resetjp_923_;
}
else
{
lean_inc(v_a_922_);
lean_dec(v___x_921_);
v___x_924_ = lean_box(0);
v_isShared_925_ = v_isSharedCheck_938_;
goto v_resetjp_923_;
}
v_resetjp_923_:
{
lean_object* v_toRing_926_; lean_object* v_charInst_x3f_927_; 
v_toRing_926_ = lean_ctor_get(v_a_922_, 0);
lean_inc_ref(v_toRing_926_);
lean_dec(v_a_922_);
v_charInst_x3f_927_ = lean_ctor_get(v_toRing_926_, 5);
lean_inc(v_charInst_x3f_927_);
lean_dec_ref(v_toRing_926_);
if (lean_obj_tag(v_charInst_x3f_927_) == 0)
{
uint8_t v___x_928_; lean_object* v___x_929_; lean_object* v___x_931_; 
v___x_928_ = 0;
v___x_929_ = lean_box(v___x_928_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_929_);
v___x_931_ = v___x_924_;
goto v_reusejp_930_;
}
else
{
lean_object* v_reuseFailAlloc_932_; 
v_reuseFailAlloc_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_932_, 0, v___x_929_);
v___x_931_ = v_reuseFailAlloc_932_;
goto v_reusejp_930_;
}
v_reusejp_930_:
{
return v___x_931_;
}
}
else
{
uint8_t v___x_933_; lean_object* v___x_934_; lean_object* v___x_936_; 
lean_dec_ref(v_charInst_x3f_927_);
v___x_933_ = 1;
v___x_934_ = lean_box(v___x_933_);
if (v_isShared_925_ == 0)
{
lean_ctor_set(v___x_924_, 0, v___x_934_);
v___x_936_ = v___x_924_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_934_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
}
else
{
lean_object* v_a_939_; lean_object* v___x_941_; uint8_t v_isShared_942_; uint8_t v_isSharedCheck_946_; 
v_a_939_ = lean_ctor_get(v___x_921_, 0);
v_isSharedCheck_946_ = !lean_is_exclusive(v___x_921_);
if (v_isSharedCheck_946_ == 0)
{
v___x_941_ = v___x_921_;
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
else
{
lean_inc(v_a_939_);
lean_dec(v___x_921_);
v___x_941_ = lean_box(0);
v_isShared_942_ = v_isSharedCheck_946_;
goto v_resetjp_940_;
}
v_resetjp_940_:
{
lean_object* v___x_944_; 
if (v_isShared_942_ == 0)
{
v___x_944_ = v___x_941_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_a_939_);
v___x_944_ = v_reuseFailAlloc_945_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
return v___x_944_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_hasChar___boxed(lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_, lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = l_Lean_Meta_Grind_Arith_CommRing_hasChar(v_a_947_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_, v_a_955_, v_a_956_, v_a_957_);
lean_dec(v_a_957_);
lean_dec_ref(v_a_956_);
lean_dec(v_a_955_);
lean_dec_ref(v_a_954_);
lean_dec(v_a_953_);
lean_dec_ref(v_a_952_);
lean_dec(v_a_951_);
lean_dec_ref(v_a_950_);
lean_dec(v_a_949_);
lean_dec(v_a_948_);
lean_dec_ref(v_a_947_);
return v_res_959_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__0(void){
_start:
{
lean_object* v___x_960_; 
v___x_960_ = lean_mk_string_unchecked("`grind` internal error, ring does not have a characteristic", 59, 59);
return v___x_960_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1(void){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; 
v___x_961_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__0);
v___x_962_ = l_Lean_stringToMessageData(v___x_961_);
return v___x_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst(lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_){
_start:
{
lean_object* v___x_975_; 
v___x_975_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_963_, v_a_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_);
if (lean_obj_tag(v___x_975_) == 0)
{
lean_object* v_a_976_; lean_object* v___x_978_; uint8_t v_isShared_979_; uint8_t v_isSharedCheck_988_; 
v_a_976_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_988_ == 0)
{
v___x_978_ = v___x_975_;
v_isShared_979_ = v_isSharedCheck_988_;
goto v_resetjp_977_;
}
else
{
lean_inc(v_a_976_);
lean_dec(v___x_975_);
v___x_978_ = lean_box(0);
v_isShared_979_ = v_isSharedCheck_988_;
goto v_resetjp_977_;
}
v_resetjp_977_:
{
lean_object* v_toRing_980_; lean_object* v_charInst_x3f_981_; 
v_toRing_980_ = lean_ctor_get(v_a_976_, 0);
lean_inc_ref(v_toRing_980_);
lean_dec(v_a_976_);
v_charInst_x3f_981_ = lean_ctor_get(v_toRing_980_, 5);
lean_inc(v_charInst_x3f_981_);
lean_dec_ref(v_toRing_980_);
if (lean_obj_tag(v_charInst_x3f_981_) == 1)
{
lean_object* v_val_982_; lean_object* v___x_984_; 
v_val_982_ = lean_ctor_get(v_charInst_x3f_981_, 0);
lean_inc(v_val_982_);
lean_dec_ref(v_charInst_x3f_981_);
if (v_isShared_979_ == 0)
{
lean_ctor_set(v___x_978_, 0, v_val_982_);
v___x_984_ = v___x_978_;
goto v_reusejp_983_;
}
else
{
lean_object* v_reuseFailAlloc_985_; 
v_reuseFailAlloc_985_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_985_, 0, v_val_982_);
v___x_984_ = v_reuseFailAlloc_985_;
goto v_reusejp_983_;
}
v_reusejp_983_:
{
return v___x_984_;
}
}
else
{
lean_object* v___x_986_; lean_object* v___x_987_; 
lean_dec(v_charInst_x3f_981_);
lean_del_object(v___x_978_);
v___x_986_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_getCharInst___closed__1);
v___x_987_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing_spec__0___redArg(v___x_986_, v_a_970_, v_a_971_, v_a_972_, v_a_973_);
return v___x_987_;
}
}
}
else
{
lean_object* v_a_989_; lean_object* v___x_991_; uint8_t v_isShared_992_; uint8_t v_isSharedCheck_996_; 
v_a_989_ = lean_ctor_get(v___x_975_, 0);
v_isSharedCheck_996_ = !lean_is_exclusive(v___x_975_);
if (v_isSharedCheck_996_ == 0)
{
v___x_991_ = v___x_975_;
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
else
{
lean_inc(v_a_989_);
lean_dec(v___x_975_);
v___x_991_ = lean_box(0);
v_isShared_992_ = v_isSharedCheck_996_;
goto v_resetjp_990_;
}
v_resetjp_990_:
{
lean_object* v___x_994_; 
if (v_isShared_992_ == 0)
{
v___x_994_ = v___x_991_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_a_989_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getCharInst___boxed(lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_Lean_Meta_Grind_Arith_CommRing_getCharInst(v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_, v_a_1007_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
lean_dec(v_a_1005_);
lean_dec_ref(v_a_1004_);
lean_dec(v_a_1003_);
lean_dec_ref(v_a_1002_);
lean_dec(v_a_1001_);
lean_dec_ref(v_a_1000_);
lean_dec(v_a_999_);
lean_dec(v_a_998_);
lean_dec_ref(v_a_997_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isField(lean_object* v_a_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_, lean_object* v_a_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1010_, v_a_1011_, v_a_1012_, v_a_1013_, v_a_1014_, v_a_1015_, v_a_1016_, v_a_1017_, v_a_1018_, v_a_1019_, v_a_1020_);
if (lean_obj_tag(v___x_1022_) == 0)
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1038_; 
v_a_1023_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1025_ = v___x_1022_;
v_isShared_1026_ = v_isSharedCheck_1038_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1022_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1038_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v_fieldInst_x3f_1027_; 
v_fieldInst_x3f_1027_ = lean_ctor_get(v_a_1023_, 6);
lean_inc(v_fieldInst_x3f_1027_);
lean_dec(v_a_1023_);
if (lean_obj_tag(v_fieldInst_x3f_1027_) == 0)
{
uint8_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1031_; 
v___x_1028_ = 0;
v___x_1029_ = lean_box(v___x_1028_);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 0, v___x_1029_);
v___x_1031_ = v___x_1025_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v___x_1029_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
else
{
uint8_t v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1036_; 
lean_dec_ref(v_fieldInst_x3f_1027_);
v___x_1033_ = 1;
v___x_1034_ = lean_box(v___x_1033_);
if (v_isShared_1026_ == 0)
{
lean_ctor_set(v___x_1025_, 0, v___x_1034_);
v___x_1036_ = v___x_1025_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1034_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
v_a_1039_ = lean_ctor_get(v___x_1022_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1022_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1022_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1022_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isField___boxed(lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_){
_start:
{
lean_object* v_res_1059_; 
v_res_1059_ = l_Lean_Meta_Grind_Arith_CommRing_isField(v_a_1047_, v_a_1048_, v_a_1049_, v_a_1050_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_, v_a_1055_, v_a_1056_, v_a_1057_);
lean_dec(v_a_1057_);
lean_dec_ref(v_a_1056_);
lean_dec(v_a_1055_);
lean_dec_ref(v_a_1054_);
lean_dec(v_a_1053_);
lean_dec_ref(v_a_1052_);
lean_dec(v_a_1051_);
lean_dec_ref(v_a_1050_);
lean_dec(v_a_1049_);
lean_dec(v_a_1048_);
lean_dec_ref(v_a_1047_);
return v_res_1059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isQueueEmpty(lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_){
_start:
{
lean_object* v___x_1072_; 
v___x_1072_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1088_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1075_ = v___x_1072_;
v_isShared_1076_ = v_isSharedCheck_1088_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1072_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1088_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v_queue_1077_; 
v_queue_1077_ = lean_ctor_get(v_a_1073_, 11);
lean_inc(v_queue_1077_);
lean_dec(v_a_1073_);
if (lean_obj_tag(v_queue_1077_) == 0)
{
uint8_t v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1081_; 
lean_dec_ref(v_queue_1077_);
v___x_1078_ = 0;
v___x_1079_ = lean_box(v___x_1078_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1079_);
v___x_1081_ = v___x_1075_;
goto v_reusejp_1080_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v___x_1079_);
v___x_1081_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1080_;
}
v_reusejp_1080_:
{
return v___x_1081_;
}
}
else
{
uint8_t v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1086_; 
v___x_1083_ = 1;
v___x_1084_ = lean_box(v___x_1083_);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1084_);
v___x_1086_ = v___x_1075_;
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
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
v_a_1089_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1072_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1072_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_isQueueEmpty___boxed(lean_object* v_a_1097_, lean_object* v_a_1098_, lean_object* v_a_1099_, lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_, lean_object* v_a_1107_, lean_object* v_a_1108_){
_start:
{
lean_object* v_res_1109_; 
v_res_1109_ = l_Lean_Meta_Grind_Arith_CommRing_isQueueEmpty(v_a_1097_, v_a_1098_, v_a_1099_, v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_, v_a_1106_, v_a_1107_);
lean_dec(v_a_1107_);
lean_dec_ref(v_a_1106_);
lean_dec(v_a_1105_);
lean_dec_ref(v_a_1104_);
lean_dec(v_a_1103_);
lean_dec_ref(v_a_1102_);
lean_dec(v_a_1101_);
lean_dec_ref(v_a_1100_);
lean_dec(v_a_1099_);
lean_dec(v_a_1098_);
lean_dec_ref(v_a_1097_);
return v_res_1109_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(lean_object* v_k_1110_, lean_object* v_t_1111_){
_start:
{
if (lean_obj_tag(v_t_1111_) == 0)
{
lean_object* v_k_1112_; lean_object* v_v_1113_; lean_object* v_l_1114_; lean_object* v_r_1115_; lean_object* v___x_1117_; uint8_t v_isShared_1118_; uint8_t v_isSharedCheck_1769_; 
v_k_1112_ = lean_ctor_get(v_t_1111_, 1);
v_v_1113_ = lean_ctor_get(v_t_1111_, 2);
v_l_1114_ = lean_ctor_get(v_t_1111_, 3);
v_r_1115_ = lean_ctor_get(v_t_1111_, 4);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_t_1111_);
if (v_isSharedCheck_1769_ == 0)
{
lean_object* v_unused_1770_; 
v_unused_1770_ = lean_ctor_get(v_t_1111_, 0);
lean_dec(v_unused_1770_);
v___x_1117_ = v_t_1111_;
v_isShared_1118_ = v_isSharedCheck_1769_;
goto v_resetjp_1116_;
}
else
{
lean_inc(v_r_1115_);
lean_inc(v_l_1114_);
lean_inc(v_v_1113_);
lean_inc(v_k_1112_);
lean_dec(v_t_1111_);
v___x_1117_ = lean_box(0);
v_isShared_1118_ = v_isSharedCheck_1769_;
goto v_resetjp_1116_;
}
v_resetjp_1116_:
{
uint8_t v___x_1119_; 
v___x_1119_ = l_Lean_Meta_Grind_Arith_CommRing_EqCnstr_compare(v_k_1110_, v_k_1112_);
switch(v___x_1119_)
{
case 0:
{
lean_object* v_impl_1120_; lean_object* v___x_1121_; 
v_impl_1120_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(v_k_1110_, v_l_1114_);
v___x_1121_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1120_) == 0)
{
if (lean_obj_tag(v_r_1115_) == 0)
{
lean_object* v_size_1122_; lean_object* v_size_1123_; lean_object* v_k_1124_; lean_object* v_v_1125_; lean_object* v_l_1126_; lean_object* v_r_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; uint8_t v___x_1130_; 
v_size_1122_ = lean_ctor_get(v_impl_1120_, 0);
lean_inc(v_size_1122_);
v_size_1123_ = lean_ctor_get(v_r_1115_, 0);
v_k_1124_ = lean_ctor_get(v_r_1115_, 1);
v_v_1125_ = lean_ctor_get(v_r_1115_, 2);
v_l_1126_ = lean_ctor_get(v_r_1115_, 3);
lean_inc(v_l_1126_);
v_r_1127_ = lean_ctor_get(v_r_1115_, 4);
v___x_1128_ = lean_unsigned_to_nat(3u);
v___x_1129_ = lean_nat_mul(v___x_1128_, v_size_1122_);
v___x_1130_ = lean_nat_dec_lt(v___x_1129_, v_size_1123_);
lean_dec(v___x_1129_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1134_; 
lean_dec(v_l_1126_);
v___x_1131_ = lean_nat_add(v___x_1121_, v_size_1122_);
lean_dec(v_size_1122_);
v___x_1132_ = lean_nat_add(v___x_1131_, v_size_1123_);
lean_dec(v___x_1131_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 3, v_impl_1120_);
lean_ctor_set(v___x_1117_, 0, v___x_1132_);
v___x_1134_ = v___x_1117_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1132_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1135_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1135_, 3, v_impl_1120_);
lean_ctor_set(v_reuseFailAlloc_1135_, 4, v_r_1115_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
}
else
{
lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1199_; 
lean_inc(v_r_1127_);
lean_inc(v_v_1125_);
lean_inc(v_k_1124_);
lean_inc(v_size_1123_);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_r_1115_);
if (v_isSharedCheck_1199_ == 0)
{
lean_object* v_unused_1200_; lean_object* v_unused_1201_; lean_object* v_unused_1202_; lean_object* v_unused_1203_; lean_object* v_unused_1204_; 
v_unused_1200_ = lean_ctor_get(v_r_1115_, 4);
lean_dec(v_unused_1200_);
v_unused_1201_ = lean_ctor_get(v_r_1115_, 3);
lean_dec(v_unused_1201_);
v_unused_1202_ = lean_ctor_get(v_r_1115_, 2);
lean_dec(v_unused_1202_);
v_unused_1203_ = lean_ctor_get(v_r_1115_, 1);
lean_dec(v_unused_1203_);
v_unused_1204_ = lean_ctor_get(v_r_1115_, 0);
lean_dec(v_unused_1204_);
v___x_1137_ = v_r_1115_;
v_isShared_1138_ = v_isSharedCheck_1199_;
goto v_resetjp_1136_;
}
else
{
lean_dec(v_r_1115_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1199_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v_size_1139_; lean_object* v_k_1140_; lean_object* v_v_1141_; lean_object* v_l_1142_; lean_object* v_r_1143_; lean_object* v_size_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; 
v_size_1139_ = lean_ctor_get(v_l_1126_, 0);
v_k_1140_ = lean_ctor_get(v_l_1126_, 1);
v_v_1141_ = lean_ctor_get(v_l_1126_, 2);
v_l_1142_ = lean_ctor_get(v_l_1126_, 3);
v_r_1143_ = lean_ctor_get(v_l_1126_, 4);
v_size_1144_ = lean_ctor_get(v_r_1127_, 0);
v___x_1145_ = lean_unsigned_to_nat(2u);
v___x_1146_ = lean_nat_mul(v___x_1145_, v_size_1144_);
v___x_1147_ = lean_nat_dec_lt(v_size_1139_, v___x_1146_);
lean_dec(v___x_1146_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1149_; uint8_t v_isShared_1150_; uint8_t v_isSharedCheck_1175_; 
lean_inc(v_r_1143_);
lean_inc(v_l_1142_);
lean_inc(v_v_1141_);
lean_inc(v_k_1140_);
v_isSharedCheck_1175_ = !lean_is_exclusive(v_l_1126_);
if (v_isSharedCheck_1175_ == 0)
{
lean_object* v_unused_1176_; lean_object* v_unused_1177_; lean_object* v_unused_1178_; lean_object* v_unused_1179_; lean_object* v_unused_1180_; 
v_unused_1176_ = lean_ctor_get(v_l_1126_, 4);
lean_dec(v_unused_1176_);
v_unused_1177_ = lean_ctor_get(v_l_1126_, 3);
lean_dec(v_unused_1177_);
v_unused_1178_ = lean_ctor_get(v_l_1126_, 2);
lean_dec(v_unused_1178_);
v_unused_1179_ = lean_ctor_get(v_l_1126_, 1);
lean_dec(v_unused_1179_);
v_unused_1180_ = lean_ctor_get(v_l_1126_, 0);
lean_dec(v_unused_1180_);
v___x_1149_ = v_l_1126_;
v_isShared_1150_ = v_isSharedCheck_1175_;
goto v_resetjp_1148_;
}
else
{
lean_dec(v_l_1126_);
v___x_1149_ = lean_box(0);
v_isShared_1150_ = v_isSharedCheck_1175_;
goto v_resetjp_1148_;
}
v_resetjp_1148_:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1165_; 
v___x_1151_ = lean_nat_add(v___x_1121_, v_size_1122_);
lean_dec(v_size_1122_);
v___x_1152_ = lean_nat_add(v___x_1151_, v_size_1123_);
lean_dec(v_size_1123_);
if (lean_obj_tag(v_l_1142_) == 0)
{
lean_object* v_size_1173_; 
v_size_1173_ = lean_ctor_get(v_l_1142_, 0);
lean_inc(v_size_1173_);
v___y_1165_ = v_size_1173_;
goto v___jp_1164_;
}
else
{
lean_object* v___x_1174_; 
v___x_1174_ = lean_unsigned_to_nat(0u);
v___y_1165_ = v___x_1174_;
goto v___jp_1164_;
}
v___jp_1153_:
{
lean_object* v___x_1157_; lean_object* v___x_1159_; 
v___x_1157_ = lean_nat_add(v___y_1155_, v___y_1156_);
lean_dec(v___y_1156_);
lean_dec(v___y_1155_);
if (v_isShared_1150_ == 0)
{
lean_ctor_set(v___x_1149_, 4, v_r_1127_);
lean_ctor_set(v___x_1149_, 3, v_r_1143_);
lean_ctor_set(v___x_1149_, 2, v_v_1125_);
lean_ctor_set(v___x_1149_, 1, v_k_1124_);
lean_ctor_set(v___x_1149_, 0, v___x_1157_);
v___x_1159_ = v___x_1149_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1157_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v_k_1124_);
lean_ctor_set(v_reuseFailAlloc_1163_, 2, v_v_1125_);
lean_ctor_set(v_reuseFailAlloc_1163_, 3, v_r_1143_);
lean_ctor_set(v_reuseFailAlloc_1163_, 4, v_r_1127_);
v___x_1159_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
lean_object* v___x_1161_; 
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 4, v___x_1159_);
lean_ctor_set(v___x_1137_, 3, v___y_1154_);
lean_ctor_set(v___x_1137_, 2, v_v_1141_);
lean_ctor_set(v___x_1137_, 1, v_k_1140_);
lean_ctor_set(v___x_1137_, 0, v___x_1152_);
v___x_1161_ = v___x_1137_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v___x_1152_);
lean_ctor_set(v_reuseFailAlloc_1162_, 1, v_k_1140_);
lean_ctor_set(v_reuseFailAlloc_1162_, 2, v_v_1141_);
lean_ctor_set(v_reuseFailAlloc_1162_, 3, v___y_1154_);
lean_ctor_set(v_reuseFailAlloc_1162_, 4, v___x_1159_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
v___jp_1164_:
{
lean_object* v___x_1166_; lean_object* v___x_1168_; 
v___x_1166_ = lean_nat_add(v___x_1151_, v___y_1165_);
lean_dec(v___y_1165_);
lean_dec(v___x_1151_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v_l_1142_);
lean_ctor_set(v___x_1117_, 3, v_impl_1120_);
lean_ctor_set(v___x_1117_, 0, v___x_1166_);
v___x_1168_ = v___x_1117_;
goto v_reusejp_1167_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1166_);
lean_ctor_set(v_reuseFailAlloc_1172_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1172_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1172_, 3, v_impl_1120_);
lean_ctor_set(v_reuseFailAlloc_1172_, 4, v_l_1142_);
v___x_1168_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1167_;
}
v_reusejp_1167_:
{
lean_object* v___x_1169_; 
v___x_1169_ = lean_nat_add(v___x_1121_, v_size_1144_);
if (lean_obj_tag(v_r_1143_) == 0)
{
lean_object* v_size_1170_; 
v_size_1170_ = lean_ctor_get(v_r_1143_, 0);
lean_inc(v_size_1170_);
v___y_1154_ = v___x_1168_;
v___y_1155_ = v___x_1169_;
v___y_1156_ = v_size_1170_;
goto v___jp_1153_;
}
else
{
lean_object* v___x_1171_; 
v___x_1171_ = lean_unsigned_to_nat(0u);
v___y_1154_ = v___x_1168_;
v___y_1155_ = v___x_1169_;
v___y_1156_ = v___x_1171_;
goto v___jp_1153_;
}
}
}
}
}
else
{
lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1185_; 
lean_del_object(v___x_1117_);
v___x_1181_ = lean_nat_add(v___x_1121_, v_size_1122_);
lean_dec(v_size_1122_);
v___x_1182_ = lean_nat_add(v___x_1181_, v_size_1123_);
lean_dec(v_size_1123_);
v___x_1183_ = lean_nat_add(v___x_1181_, v_size_1139_);
lean_dec(v___x_1181_);
lean_inc_ref(v_impl_1120_);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 4, v_l_1126_);
lean_ctor_set(v___x_1137_, 3, v_impl_1120_);
lean_ctor_set(v___x_1137_, 2, v_v_1113_);
lean_ctor_set(v___x_1137_, 1, v_k_1112_);
lean_ctor_set(v___x_1137_, 0, v___x_1183_);
v___x_1185_ = v___x_1137_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v___x_1183_);
lean_ctor_set(v_reuseFailAlloc_1198_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1198_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1198_, 3, v_impl_1120_);
lean_ctor_set(v_reuseFailAlloc_1198_, 4, v_l_1126_);
v___x_1185_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1192_; 
v_isSharedCheck_1192_ = !lean_is_exclusive(v_impl_1120_);
if (v_isSharedCheck_1192_ == 0)
{
lean_object* v_unused_1193_; lean_object* v_unused_1194_; lean_object* v_unused_1195_; lean_object* v_unused_1196_; lean_object* v_unused_1197_; 
v_unused_1193_ = lean_ctor_get(v_impl_1120_, 4);
lean_dec(v_unused_1193_);
v_unused_1194_ = lean_ctor_get(v_impl_1120_, 3);
lean_dec(v_unused_1194_);
v_unused_1195_ = lean_ctor_get(v_impl_1120_, 2);
lean_dec(v_unused_1195_);
v_unused_1196_ = lean_ctor_get(v_impl_1120_, 1);
lean_dec(v_unused_1196_);
v_unused_1197_ = lean_ctor_get(v_impl_1120_, 0);
lean_dec(v_unused_1197_);
v___x_1187_ = v_impl_1120_;
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
else
{
lean_dec(v_impl_1120_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1192_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1190_; 
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 4, v_r_1127_);
lean_ctor_set(v___x_1187_, 3, v___x_1185_);
lean_ctor_set(v___x_1187_, 2, v_v_1125_);
lean_ctor_set(v___x_1187_, 1, v_k_1124_);
lean_ctor_set(v___x_1187_, 0, v___x_1182_);
v___x_1190_ = v___x_1187_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1182_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v_k_1124_);
lean_ctor_set(v_reuseFailAlloc_1191_, 2, v_v_1125_);
lean_ctor_set(v_reuseFailAlloc_1191_, 3, v___x_1185_);
lean_ctor_set(v_reuseFailAlloc_1191_, 4, v_r_1127_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1205_; lean_object* v___x_1206_; lean_object* v___x_1208_; 
v_size_1205_ = lean_ctor_get(v_impl_1120_, 0);
lean_inc(v_size_1205_);
v___x_1206_ = lean_nat_add(v___x_1121_, v_size_1205_);
lean_dec(v_size_1205_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 3, v_impl_1120_);
lean_ctor_set(v___x_1117_, 0, v___x_1206_);
v___x_1208_ = v___x_1117_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v___x_1206_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1209_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1209_, 3, v_impl_1120_);
lean_ctor_set(v_reuseFailAlloc_1209_, 4, v_r_1115_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
else
{
if (lean_obj_tag(v_r_1115_) == 0)
{
lean_object* v_l_1210_; 
v_l_1210_ = lean_ctor_get(v_r_1115_, 3);
lean_inc(v_l_1210_);
if (lean_obj_tag(v_l_1210_) == 0)
{
lean_object* v_r_1211_; 
v_r_1211_ = lean_ctor_get(v_r_1115_, 4);
lean_inc(v_r_1211_);
if (lean_obj_tag(v_r_1211_) == 0)
{
lean_object* v_size_1212_; lean_object* v_k_1213_; lean_object* v_v_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1227_; 
v_size_1212_ = lean_ctor_get(v_r_1115_, 0);
v_k_1213_ = lean_ctor_get(v_r_1115_, 1);
v_v_1214_ = lean_ctor_get(v_r_1115_, 2);
v_isSharedCheck_1227_ = !lean_is_exclusive(v_r_1115_);
if (v_isSharedCheck_1227_ == 0)
{
lean_object* v_unused_1228_; lean_object* v_unused_1229_; 
v_unused_1228_ = lean_ctor_get(v_r_1115_, 4);
lean_dec(v_unused_1228_);
v_unused_1229_ = lean_ctor_get(v_r_1115_, 3);
lean_dec(v_unused_1229_);
v___x_1216_ = v_r_1115_;
v_isShared_1217_ = v_isSharedCheck_1227_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_v_1214_);
lean_inc(v_k_1213_);
lean_inc(v_size_1212_);
lean_dec(v_r_1115_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1227_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v_size_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1222_; 
v_size_1218_ = lean_ctor_get(v_l_1210_, 0);
v___x_1219_ = lean_nat_add(v___x_1121_, v_size_1212_);
lean_dec(v_size_1212_);
v___x_1220_ = lean_nat_add(v___x_1121_, v_size_1218_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set(v___x_1216_, 4, v_l_1210_);
lean_ctor_set(v___x_1216_, 3, v_impl_1120_);
lean_ctor_set(v___x_1216_, 2, v_v_1113_);
lean_ctor_set(v___x_1216_, 1, v_k_1112_);
lean_ctor_set(v___x_1216_, 0, v___x_1220_);
v___x_1222_ = v___x_1216_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v___x_1220_);
lean_ctor_set(v_reuseFailAlloc_1226_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1226_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1226_, 3, v_impl_1120_);
lean_ctor_set(v_reuseFailAlloc_1226_, 4, v_l_1210_);
v___x_1222_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
lean_object* v___x_1224_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v_r_1211_);
lean_ctor_set(v___x_1117_, 3, v___x_1222_);
lean_ctor_set(v___x_1117_, 2, v_v_1214_);
lean_ctor_set(v___x_1117_, 1, v_k_1213_);
lean_ctor_set(v___x_1117_, 0, v___x_1219_);
v___x_1224_ = v___x_1117_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v___x_1219_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v_k_1213_);
lean_ctor_set(v_reuseFailAlloc_1225_, 2, v_v_1214_);
lean_ctor_set(v_reuseFailAlloc_1225_, 3, v___x_1222_);
lean_ctor_set(v_reuseFailAlloc_1225_, 4, v_r_1211_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
else
{
lean_object* v_k_1230_; lean_object* v_v_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1254_; 
v_k_1230_ = lean_ctor_get(v_r_1115_, 1);
v_v_1231_ = lean_ctor_get(v_r_1115_, 2);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_r_1115_);
if (v_isSharedCheck_1254_ == 0)
{
lean_object* v_unused_1255_; lean_object* v_unused_1256_; lean_object* v_unused_1257_; 
v_unused_1255_ = lean_ctor_get(v_r_1115_, 4);
lean_dec(v_unused_1255_);
v_unused_1256_ = lean_ctor_get(v_r_1115_, 3);
lean_dec(v_unused_1256_);
v_unused_1257_ = lean_ctor_get(v_r_1115_, 0);
lean_dec(v_unused_1257_);
v___x_1233_ = v_r_1115_;
v_isShared_1234_ = v_isSharedCheck_1254_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_v_1231_);
lean_inc(v_k_1230_);
lean_dec(v_r_1115_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1254_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v_k_1235_; lean_object* v_v_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1250_; 
v_k_1235_ = lean_ctor_get(v_l_1210_, 1);
v_v_1236_ = lean_ctor_get(v_l_1210_, 2);
v_isSharedCheck_1250_ = !lean_is_exclusive(v_l_1210_);
if (v_isSharedCheck_1250_ == 0)
{
lean_object* v_unused_1251_; lean_object* v_unused_1252_; lean_object* v_unused_1253_; 
v_unused_1251_ = lean_ctor_get(v_l_1210_, 4);
lean_dec(v_unused_1251_);
v_unused_1252_ = lean_ctor_get(v_l_1210_, 3);
lean_dec(v_unused_1252_);
v_unused_1253_ = lean_ctor_get(v_l_1210_, 0);
lean_dec(v_unused_1253_);
v___x_1238_ = v_l_1210_;
v_isShared_1239_ = v_isSharedCheck_1250_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_v_1236_);
lean_inc(v_k_1235_);
lean_dec(v_l_1210_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1250_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1240_; lean_object* v___x_1242_; 
v___x_1240_ = lean_unsigned_to_nat(3u);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 4, v_r_1211_);
lean_ctor_set(v___x_1238_, 3, v_r_1211_);
lean_ctor_set(v___x_1238_, 2, v_v_1113_);
lean_ctor_set(v___x_1238_, 1, v_k_1112_);
lean_ctor_set(v___x_1238_, 0, v___x_1121_);
v___x_1242_ = v___x_1238_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1249_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1249_, 3, v_r_1211_);
lean_ctor_set(v_reuseFailAlloc_1249_, 4, v_r_1211_);
v___x_1242_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v___x_1244_; 
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 3, v_r_1211_);
lean_ctor_set(v___x_1233_, 0, v___x_1121_);
v___x_1244_ = v___x_1233_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1248_, 1, v_k_1230_);
lean_ctor_set(v_reuseFailAlloc_1248_, 2, v_v_1231_);
lean_ctor_set(v_reuseFailAlloc_1248_, 3, v_r_1211_);
lean_ctor_set(v_reuseFailAlloc_1248_, 4, v_r_1211_);
v___x_1244_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1246_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v___x_1244_);
lean_ctor_set(v___x_1117_, 3, v___x_1242_);
lean_ctor_set(v___x_1117_, 2, v_v_1236_);
lean_ctor_set(v___x_1117_, 1, v_k_1235_);
lean_ctor_set(v___x_1117_, 0, v___x_1240_);
v___x_1246_ = v___x_1117_;
goto v_reusejp_1245_;
}
else
{
lean_object* v_reuseFailAlloc_1247_; 
v_reuseFailAlloc_1247_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1247_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1247_, 1, v_k_1235_);
lean_ctor_set(v_reuseFailAlloc_1247_, 2, v_v_1236_);
lean_ctor_set(v_reuseFailAlloc_1247_, 3, v___x_1242_);
lean_ctor_set(v_reuseFailAlloc_1247_, 4, v___x_1244_);
v___x_1246_ = v_reuseFailAlloc_1247_;
goto v_reusejp_1245_;
}
v_reusejp_1245_:
{
return v___x_1246_;
}
}
}
}
}
}
}
else
{
lean_object* v_r_1258_; 
v_r_1258_ = lean_ctor_get(v_r_1115_, 4);
lean_inc(v_r_1258_);
if (lean_obj_tag(v_r_1258_) == 0)
{
lean_object* v_k_1259_; lean_object* v_v_1260_; lean_object* v___x_1262_; uint8_t v_isShared_1263_; uint8_t v_isSharedCheck_1271_; 
v_k_1259_ = lean_ctor_get(v_r_1115_, 1);
v_v_1260_ = lean_ctor_get(v_r_1115_, 2);
v_isSharedCheck_1271_ = !lean_is_exclusive(v_r_1115_);
if (v_isSharedCheck_1271_ == 0)
{
lean_object* v_unused_1272_; lean_object* v_unused_1273_; lean_object* v_unused_1274_; 
v_unused_1272_ = lean_ctor_get(v_r_1115_, 4);
lean_dec(v_unused_1272_);
v_unused_1273_ = lean_ctor_get(v_r_1115_, 3);
lean_dec(v_unused_1273_);
v_unused_1274_ = lean_ctor_get(v_r_1115_, 0);
lean_dec(v_unused_1274_);
v___x_1262_ = v_r_1115_;
v_isShared_1263_ = v_isSharedCheck_1271_;
goto v_resetjp_1261_;
}
else
{
lean_inc(v_v_1260_);
lean_inc(v_k_1259_);
lean_dec(v_r_1115_);
v___x_1262_ = lean_box(0);
v_isShared_1263_ = v_isSharedCheck_1271_;
goto v_resetjp_1261_;
}
v_resetjp_1261_:
{
lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1264_ = lean_unsigned_to_nat(3u);
if (v_isShared_1263_ == 0)
{
lean_ctor_set(v___x_1262_, 4, v_l_1210_);
lean_ctor_set(v___x_1262_, 2, v_v_1113_);
lean_ctor_set(v___x_1262_, 1, v_k_1112_);
lean_ctor_set(v___x_1262_, 0, v___x_1121_);
v___x_1266_ = v___x_1262_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1270_; 
v_reuseFailAlloc_1270_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1270_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1270_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1270_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1270_, 3, v_l_1210_);
lean_ctor_set(v_reuseFailAlloc_1270_, 4, v_l_1210_);
v___x_1266_ = v_reuseFailAlloc_1270_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
lean_object* v___x_1268_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v_r_1258_);
lean_ctor_set(v___x_1117_, 3, v___x_1266_);
lean_ctor_set(v___x_1117_, 2, v_v_1260_);
lean_ctor_set(v___x_1117_, 1, v_k_1259_);
lean_ctor_set(v___x_1117_, 0, v___x_1264_);
v___x_1268_ = v___x_1117_;
goto v_reusejp_1267_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v___x_1264_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v_k_1259_);
lean_ctor_set(v_reuseFailAlloc_1269_, 2, v_v_1260_);
lean_ctor_set(v_reuseFailAlloc_1269_, 3, v___x_1266_);
lean_ctor_set(v_reuseFailAlloc_1269_, 4, v_r_1258_);
v___x_1268_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1267_;
}
v_reusejp_1267_:
{
return v___x_1268_;
}
}
}
}
else
{
lean_object* v_size_1275_; lean_object* v_k_1276_; lean_object* v_v_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1288_; 
v_size_1275_ = lean_ctor_get(v_r_1115_, 0);
v_k_1276_ = lean_ctor_get(v_r_1115_, 1);
v_v_1277_ = lean_ctor_get(v_r_1115_, 2);
v_isSharedCheck_1288_ = !lean_is_exclusive(v_r_1115_);
if (v_isSharedCheck_1288_ == 0)
{
lean_object* v_unused_1289_; lean_object* v_unused_1290_; 
v_unused_1289_ = lean_ctor_get(v_r_1115_, 4);
lean_dec(v_unused_1289_);
v_unused_1290_ = lean_ctor_get(v_r_1115_, 3);
lean_dec(v_unused_1290_);
v___x_1279_ = v_r_1115_;
v_isShared_1280_ = v_isSharedCheck_1288_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_v_1277_);
lean_inc(v_k_1276_);
lean_inc(v_size_1275_);
lean_dec(v_r_1115_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1288_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1282_; 
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 3, v_r_1258_);
v___x_1282_ = v___x_1279_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_size_1275_);
lean_ctor_set(v_reuseFailAlloc_1287_, 1, v_k_1276_);
lean_ctor_set(v_reuseFailAlloc_1287_, 2, v_v_1277_);
lean_ctor_set(v_reuseFailAlloc_1287_, 3, v_r_1258_);
lean_ctor_set(v_reuseFailAlloc_1287_, 4, v_r_1258_);
v___x_1282_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
lean_object* v___x_1283_; lean_object* v___x_1285_; 
v___x_1283_ = lean_unsigned_to_nat(2u);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v___x_1282_);
lean_ctor_set(v___x_1117_, 3, v_r_1258_);
lean_ctor_set(v___x_1117_, 0, v___x_1283_);
v___x_1285_ = v___x_1117_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1286_; 
v_reuseFailAlloc_1286_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1286_, 0, v___x_1283_);
lean_ctor_set(v_reuseFailAlloc_1286_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1286_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1286_, 3, v_r_1258_);
lean_ctor_set(v_reuseFailAlloc_1286_, 4, v___x_1282_);
v___x_1285_ = v_reuseFailAlloc_1286_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
return v___x_1285_;
}
}
}
}
}
}
else
{
lean_object* v___x_1292_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 3, v_r_1115_);
lean_ctor_set(v___x_1117_, 0, v___x_1121_);
v___x_1292_ = v___x_1117_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1121_);
lean_ctor_set(v_reuseFailAlloc_1293_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1293_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1293_, 3, v_r_1115_);
lean_ctor_set(v_reuseFailAlloc_1293_, 4, v_r_1115_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
case 1:
{
lean_del_object(v___x_1117_);
lean_dec(v_v_1113_);
lean_dec(v_k_1112_);
if (lean_obj_tag(v_l_1114_) == 0)
{
if (lean_obj_tag(v_r_1115_) == 0)
{
lean_object* v_size_1294_; lean_object* v_k_1295_; lean_object* v_v_1296_; lean_object* v_l_1297_; lean_object* v_r_1298_; lean_object* v_size_1299_; lean_object* v_k_1300_; lean_object* v_v_1301_; lean_object* v_l_1302_; lean_object* v_r_1303_; lean_object* v___x_1304_; uint8_t v___x_1305_; 
v_size_1294_ = lean_ctor_get(v_l_1114_, 0);
v_k_1295_ = lean_ctor_get(v_l_1114_, 1);
v_v_1296_ = lean_ctor_get(v_l_1114_, 2);
v_l_1297_ = lean_ctor_get(v_l_1114_, 3);
v_r_1298_ = lean_ctor_get(v_l_1114_, 4);
lean_inc(v_r_1298_);
v_size_1299_ = lean_ctor_get(v_r_1115_, 0);
v_k_1300_ = lean_ctor_get(v_r_1115_, 1);
v_v_1301_ = lean_ctor_get(v_r_1115_, 2);
v_l_1302_ = lean_ctor_get(v_r_1115_, 3);
lean_inc(v_l_1302_);
v_r_1303_ = lean_ctor_get(v_r_1115_, 4);
v___x_1304_ = lean_unsigned_to_nat(1u);
v___x_1305_ = lean_nat_dec_lt(v_size_1294_, v_size_1299_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1307_; uint8_t v_isShared_1308_; uint8_t v_isSharedCheck_1441_; 
lean_inc(v_l_1297_);
lean_inc(v_v_1296_);
lean_inc(v_k_1295_);
v_isSharedCheck_1441_ = !lean_is_exclusive(v_l_1114_);
if (v_isSharedCheck_1441_ == 0)
{
lean_object* v_unused_1442_; lean_object* v_unused_1443_; lean_object* v_unused_1444_; lean_object* v_unused_1445_; lean_object* v_unused_1446_; 
v_unused_1442_ = lean_ctor_get(v_l_1114_, 4);
lean_dec(v_unused_1442_);
v_unused_1443_ = lean_ctor_get(v_l_1114_, 3);
lean_dec(v_unused_1443_);
v_unused_1444_ = lean_ctor_get(v_l_1114_, 2);
lean_dec(v_unused_1444_);
v_unused_1445_ = lean_ctor_get(v_l_1114_, 1);
lean_dec(v_unused_1445_);
v_unused_1446_ = lean_ctor_get(v_l_1114_, 0);
lean_dec(v_unused_1446_);
v___x_1307_ = v_l_1114_;
v_isShared_1308_ = v_isSharedCheck_1441_;
goto v_resetjp_1306_;
}
else
{
lean_dec(v_l_1114_);
v___x_1307_ = lean_box(0);
v_isShared_1308_ = v_isSharedCheck_1441_;
goto v_resetjp_1306_;
}
v_resetjp_1306_:
{
lean_object* v___x_1309_; lean_object* v_tree_1310_; 
v___x_1309_ = l_Std_DTreeMap_Internal_Impl_maxView___redArg(v_k_1295_, v_v_1296_, v_l_1297_, v_r_1298_);
v_tree_1310_ = lean_ctor_get(v___x_1309_, 2);
lean_inc(v_tree_1310_);
if (lean_obj_tag(v_tree_1310_) == 0)
{
lean_object* v_k_1311_; lean_object* v_v_1312_; lean_object* v_size_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; 
v_k_1311_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_k_1311_);
v_v_1312_ = lean_ctor_get(v___x_1309_, 1);
lean_inc(v_v_1312_);
lean_dec_ref(v___x_1309_);
v_size_1313_ = lean_ctor_get(v_tree_1310_, 0);
v___x_1314_ = lean_unsigned_to_nat(3u);
v___x_1315_ = lean_nat_mul(v___x_1314_, v_size_1313_);
v___x_1316_ = lean_nat_dec_lt(v___x_1315_, v_size_1299_);
lean_dec(v___x_1315_);
if (v___x_1316_ == 0)
{
lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1320_; 
lean_dec(v_l_1302_);
v___x_1317_ = lean_nat_add(v___x_1304_, v_size_1313_);
v___x_1318_ = lean_nat_add(v___x_1317_, v_size_1299_);
lean_dec(v___x_1317_);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 4, v_r_1115_);
lean_ctor_set(v___x_1307_, 3, v_tree_1310_);
lean_ctor_set(v___x_1307_, 2, v_v_1312_);
lean_ctor_set(v___x_1307_, 1, v_k_1311_);
lean_ctor_set(v___x_1307_, 0, v___x_1318_);
v___x_1320_ = v___x_1307_;
goto v_reusejp_1319_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___x_1318_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v_k_1311_);
lean_ctor_set(v_reuseFailAlloc_1321_, 2, v_v_1312_);
lean_ctor_set(v_reuseFailAlloc_1321_, 3, v_tree_1310_);
lean_ctor_set(v_reuseFailAlloc_1321_, 4, v_r_1115_);
v___x_1320_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1319_;
}
v_reusejp_1319_:
{
return v___x_1320_;
}
}
else
{
lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1376_; 
lean_inc(v_r_1303_);
lean_inc(v_v_1301_);
lean_inc(v_k_1300_);
lean_inc(v_size_1299_);
v_isSharedCheck_1376_ = !lean_is_exclusive(v_r_1115_);
if (v_isSharedCheck_1376_ == 0)
{
lean_object* v_unused_1377_; lean_object* v_unused_1378_; lean_object* v_unused_1379_; lean_object* v_unused_1380_; lean_object* v_unused_1381_; 
v_unused_1377_ = lean_ctor_get(v_r_1115_, 4);
lean_dec(v_unused_1377_);
v_unused_1378_ = lean_ctor_get(v_r_1115_, 3);
lean_dec(v_unused_1378_);
v_unused_1379_ = lean_ctor_get(v_r_1115_, 2);
lean_dec(v_unused_1379_);
v_unused_1380_ = lean_ctor_get(v_r_1115_, 1);
lean_dec(v_unused_1380_);
v_unused_1381_ = lean_ctor_get(v_r_1115_, 0);
lean_dec(v_unused_1381_);
v___x_1323_ = v_r_1115_;
v_isShared_1324_ = v_isSharedCheck_1376_;
goto v_resetjp_1322_;
}
else
{
lean_dec(v_r_1115_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1376_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v_size_1325_; lean_object* v_k_1326_; lean_object* v_v_1327_; lean_object* v_l_1328_; lean_object* v_r_1329_; lean_object* v_size_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; uint8_t v___x_1333_; 
v_size_1325_ = lean_ctor_get(v_l_1302_, 0);
v_k_1326_ = lean_ctor_get(v_l_1302_, 1);
v_v_1327_ = lean_ctor_get(v_l_1302_, 2);
v_l_1328_ = lean_ctor_get(v_l_1302_, 3);
v_r_1329_ = lean_ctor_get(v_l_1302_, 4);
v_size_1330_ = lean_ctor_get(v_r_1303_, 0);
v___x_1331_ = lean_unsigned_to_nat(2u);
v___x_1332_ = lean_nat_mul(v___x_1331_, v_size_1330_);
v___x_1333_ = lean_nat_dec_lt(v_size_1325_, v___x_1332_);
lean_dec(v___x_1332_);
if (v___x_1333_ == 0)
{
lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1361_; 
lean_inc(v_r_1329_);
lean_inc(v_l_1328_);
lean_inc(v_v_1327_);
lean_inc(v_k_1326_);
v_isSharedCheck_1361_ = !lean_is_exclusive(v_l_1302_);
if (v_isSharedCheck_1361_ == 0)
{
lean_object* v_unused_1362_; lean_object* v_unused_1363_; lean_object* v_unused_1364_; lean_object* v_unused_1365_; lean_object* v_unused_1366_; 
v_unused_1362_ = lean_ctor_get(v_l_1302_, 4);
lean_dec(v_unused_1362_);
v_unused_1363_ = lean_ctor_get(v_l_1302_, 3);
lean_dec(v_unused_1363_);
v_unused_1364_ = lean_ctor_get(v_l_1302_, 2);
lean_dec(v_unused_1364_);
v_unused_1365_ = lean_ctor_get(v_l_1302_, 1);
lean_dec(v_unused_1365_);
v_unused_1366_ = lean_ctor_get(v_l_1302_, 0);
lean_dec(v_unused_1366_);
v___x_1335_ = v_l_1302_;
v_isShared_1336_ = v_isSharedCheck_1361_;
goto v_resetjp_1334_;
}
else
{
lean_dec(v_l_1302_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1361_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___y_1340_; lean_object* v___y_1341_; lean_object* v___y_1342_; lean_object* v___y_1351_; 
v___x_1337_ = lean_nat_add(v___x_1304_, v_size_1313_);
v___x_1338_ = lean_nat_add(v___x_1337_, v_size_1299_);
lean_dec(v_size_1299_);
if (lean_obj_tag(v_l_1328_) == 0)
{
lean_object* v_size_1359_; 
v_size_1359_ = lean_ctor_get(v_l_1328_, 0);
lean_inc(v_size_1359_);
v___y_1351_ = v_size_1359_;
goto v___jp_1350_;
}
else
{
lean_object* v___x_1360_; 
v___x_1360_ = lean_unsigned_to_nat(0u);
v___y_1351_ = v___x_1360_;
goto v___jp_1350_;
}
v___jp_1339_:
{
lean_object* v___x_1343_; lean_object* v___x_1345_; 
v___x_1343_ = lean_nat_add(v___y_1341_, v___y_1342_);
lean_dec(v___y_1342_);
lean_dec(v___y_1341_);
if (v_isShared_1336_ == 0)
{
lean_ctor_set(v___x_1335_, 4, v_r_1303_);
lean_ctor_set(v___x_1335_, 3, v_r_1329_);
lean_ctor_set(v___x_1335_, 2, v_v_1301_);
lean_ctor_set(v___x_1335_, 1, v_k_1300_);
lean_ctor_set(v___x_1335_, 0, v___x_1343_);
v___x_1345_ = v___x_1335_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1349_; 
v_reuseFailAlloc_1349_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1349_, 0, v___x_1343_);
lean_ctor_set(v_reuseFailAlloc_1349_, 1, v_k_1300_);
lean_ctor_set(v_reuseFailAlloc_1349_, 2, v_v_1301_);
lean_ctor_set(v_reuseFailAlloc_1349_, 3, v_r_1329_);
lean_ctor_set(v_reuseFailAlloc_1349_, 4, v_r_1303_);
v___x_1345_ = v_reuseFailAlloc_1349_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
lean_object* v___x_1347_; 
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 4, v___x_1345_);
lean_ctor_set(v___x_1323_, 3, v___y_1340_);
lean_ctor_set(v___x_1323_, 2, v_v_1327_);
lean_ctor_set(v___x_1323_, 1, v_k_1326_);
lean_ctor_set(v___x_1323_, 0, v___x_1338_);
v___x_1347_ = v___x_1323_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v___x_1338_);
lean_ctor_set(v_reuseFailAlloc_1348_, 1, v_k_1326_);
lean_ctor_set(v_reuseFailAlloc_1348_, 2, v_v_1327_);
lean_ctor_set(v_reuseFailAlloc_1348_, 3, v___y_1340_);
lean_ctor_set(v_reuseFailAlloc_1348_, 4, v___x_1345_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
}
v___jp_1350_:
{
lean_object* v___x_1352_; lean_object* v___x_1354_; 
v___x_1352_ = lean_nat_add(v___x_1337_, v___y_1351_);
lean_dec(v___y_1351_);
lean_dec(v___x_1337_);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 4, v_l_1328_);
lean_ctor_set(v___x_1307_, 3, v_tree_1310_);
lean_ctor_set(v___x_1307_, 2, v_v_1312_);
lean_ctor_set(v___x_1307_, 1, v_k_1311_);
lean_ctor_set(v___x_1307_, 0, v___x_1352_);
v___x_1354_ = v___x_1307_;
goto v_reusejp_1353_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v___x_1352_);
lean_ctor_set(v_reuseFailAlloc_1358_, 1, v_k_1311_);
lean_ctor_set(v_reuseFailAlloc_1358_, 2, v_v_1312_);
lean_ctor_set(v_reuseFailAlloc_1358_, 3, v_tree_1310_);
lean_ctor_set(v_reuseFailAlloc_1358_, 4, v_l_1328_);
v___x_1354_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1353_;
}
v_reusejp_1353_:
{
lean_object* v___x_1355_; 
v___x_1355_ = lean_nat_add(v___x_1304_, v_size_1330_);
if (lean_obj_tag(v_r_1329_) == 0)
{
lean_object* v_size_1356_; 
v_size_1356_ = lean_ctor_get(v_r_1329_, 0);
lean_inc(v_size_1356_);
v___y_1340_ = v___x_1354_;
v___y_1341_ = v___x_1355_;
v___y_1342_ = v_size_1356_;
goto v___jp_1339_;
}
else
{
lean_object* v___x_1357_; 
v___x_1357_ = lean_unsigned_to_nat(0u);
v___y_1340_ = v___x_1354_;
v___y_1341_ = v___x_1355_;
v___y_1342_ = v___x_1357_;
goto v___jp_1339_;
}
}
}
}
}
else
{
lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1371_; 
v___x_1367_ = lean_nat_add(v___x_1304_, v_size_1313_);
v___x_1368_ = lean_nat_add(v___x_1367_, v_size_1299_);
lean_dec(v_size_1299_);
v___x_1369_ = lean_nat_add(v___x_1367_, v_size_1325_);
lean_dec(v___x_1367_);
if (v_isShared_1324_ == 0)
{
lean_ctor_set(v___x_1323_, 4, v_l_1302_);
lean_ctor_set(v___x_1323_, 3, v_tree_1310_);
lean_ctor_set(v___x_1323_, 2, v_v_1312_);
lean_ctor_set(v___x_1323_, 1, v_k_1311_);
lean_ctor_set(v___x_1323_, 0, v___x_1369_);
v___x_1371_ = v___x_1323_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1375_; 
v_reuseFailAlloc_1375_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1375_, 0, v___x_1369_);
lean_ctor_set(v_reuseFailAlloc_1375_, 1, v_k_1311_);
lean_ctor_set(v_reuseFailAlloc_1375_, 2, v_v_1312_);
lean_ctor_set(v_reuseFailAlloc_1375_, 3, v_tree_1310_);
lean_ctor_set(v_reuseFailAlloc_1375_, 4, v_l_1302_);
v___x_1371_ = v_reuseFailAlloc_1375_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
lean_object* v___x_1373_; 
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 4, v_r_1303_);
lean_ctor_set(v___x_1307_, 3, v___x_1371_);
lean_ctor_set(v___x_1307_, 2, v_v_1301_);
lean_ctor_set(v___x_1307_, 1, v_k_1300_);
lean_ctor_set(v___x_1307_, 0, v___x_1368_);
v___x_1373_ = v___x_1307_;
goto v_reusejp_1372_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v___x_1368_);
lean_ctor_set(v_reuseFailAlloc_1374_, 1, v_k_1300_);
lean_ctor_set(v_reuseFailAlloc_1374_, 2, v_v_1301_);
lean_ctor_set(v_reuseFailAlloc_1374_, 3, v___x_1371_);
lean_ctor_set(v_reuseFailAlloc_1374_, 4, v_r_1303_);
v___x_1373_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1372_;
}
v_reusejp_1372_:
{
return v___x_1373_;
}
}
}
}
}
}
else
{
lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1435_; 
lean_inc(v_r_1303_);
lean_inc(v_v_1301_);
lean_inc(v_k_1300_);
lean_inc(v_size_1299_);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_r_1115_);
if (v_isSharedCheck_1435_ == 0)
{
lean_object* v_unused_1436_; lean_object* v_unused_1437_; lean_object* v_unused_1438_; lean_object* v_unused_1439_; lean_object* v_unused_1440_; 
v_unused_1436_ = lean_ctor_get(v_r_1115_, 4);
lean_dec(v_unused_1436_);
v_unused_1437_ = lean_ctor_get(v_r_1115_, 3);
lean_dec(v_unused_1437_);
v_unused_1438_ = lean_ctor_get(v_r_1115_, 2);
lean_dec(v_unused_1438_);
v_unused_1439_ = lean_ctor_get(v_r_1115_, 1);
lean_dec(v_unused_1439_);
v_unused_1440_ = lean_ctor_get(v_r_1115_, 0);
lean_dec(v_unused_1440_);
v___x_1383_ = v_r_1115_;
v_isShared_1384_ = v_isSharedCheck_1435_;
goto v_resetjp_1382_;
}
else
{
lean_dec(v_r_1115_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1435_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
if (lean_obj_tag(v_l_1302_) == 0)
{
if (lean_obj_tag(v_r_1303_) == 0)
{
lean_object* v_k_1385_; lean_object* v_v_1386_; lean_object* v_size_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1391_; 
v_k_1385_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_k_1385_);
v_v_1386_ = lean_ctor_get(v___x_1309_, 1);
lean_inc(v_v_1386_);
lean_dec_ref(v___x_1309_);
v_size_1387_ = lean_ctor_get(v_l_1302_, 0);
v___x_1388_ = lean_nat_add(v___x_1304_, v_size_1299_);
lean_dec(v_size_1299_);
v___x_1389_ = lean_nat_add(v___x_1304_, v_size_1387_);
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 4, v_l_1302_);
lean_ctor_set(v___x_1383_, 3, v_tree_1310_);
lean_ctor_set(v___x_1383_, 2, v_v_1386_);
lean_ctor_set(v___x_1383_, 1, v_k_1385_);
lean_ctor_set(v___x_1383_, 0, v___x_1389_);
v___x_1391_ = v___x_1383_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v___x_1389_);
lean_ctor_set(v_reuseFailAlloc_1395_, 1, v_k_1385_);
lean_ctor_set(v_reuseFailAlloc_1395_, 2, v_v_1386_);
lean_ctor_set(v_reuseFailAlloc_1395_, 3, v_tree_1310_);
lean_ctor_set(v_reuseFailAlloc_1395_, 4, v_l_1302_);
v___x_1391_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
lean_object* v___x_1393_; 
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 4, v_r_1303_);
lean_ctor_set(v___x_1307_, 3, v___x_1391_);
lean_ctor_set(v___x_1307_, 2, v_v_1301_);
lean_ctor_set(v___x_1307_, 1, v_k_1300_);
lean_ctor_set(v___x_1307_, 0, v___x_1388_);
v___x_1393_ = v___x_1307_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1388_);
lean_ctor_set(v_reuseFailAlloc_1394_, 1, v_k_1300_);
lean_ctor_set(v_reuseFailAlloc_1394_, 2, v_v_1301_);
lean_ctor_set(v_reuseFailAlloc_1394_, 3, v___x_1391_);
lean_ctor_set(v_reuseFailAlloc_1394_, 4, v_r_1303_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
}
else
{
lean_object* v_k_1396_; lean_object* v_v_1397_; lean_object* v_k_1398_; lean_object* v_v_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1413_; 
lean_dec(v_size_1299_);
v_k_1396_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_k_1396_);
v_v_1397_ = lean_ctor_get(v___x_1309_, 1);
lean_inc(v_v_1397_);
lean_dec_ref(v___x_1309_);
v_k_1398_ = lean_ctor_get(v_l_1302_, 1);
v_v_1399_ = lean_ctor_get(v_l_1302_, 2);
v_isSharedCheck_1413_ = !lean_is_exclusive(v_l_1302_);
if (v_isSharedCheck_1413_ == 0)
{
lean_object* v_unused_1414_; lean_object* v_unused_1415_; lean_object* v_unused_1416_; 
v_unused_1414_ = lean_ctor_get(v_l_1302_, 4);
lean_dec(v_unused_1414_);
v_unused_1415_ = lean_ctor_get(v_l_1302_, 3);
lean_dec(v_unused_1415_);
v_unused_1416_ = lean_ctor_get(v_l_1302_, 0);
lean_dec(v_unused_1416_);
v___x_1401_ = v_l_1302_;
v_isShared_1402_ = v_isSharedCheck_1413_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_v_1399_);
lean_inc(v_k_1398_);
lean_dec(v_l_1302_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1413_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1403_; lean_object* v___x_1405_; 
v___x_1403_ = lean_unsigned_to_nat(3u);
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 4, v_r_1303_);
lean_ctor_set(v___x_1401_, 3, v_r_1303_);
lean_ctor_set(v___x_1401_, 2, v_v_1397_);
lean_ctor_set(v___x_1401_, 1, v_k_1396_);
lean_ctor_set(v___x_1401_, 0, v___x_1304_);
v___x_1405_ = v___x_1401_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1304_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v_k_1396_);
lean_ctor_set(v_reuseFailAlloc_1412_, 2, v_v_1397_);
lean_ctor_set(v_reuseFailAlloc_1412_, 3, v_r_1303_);
lean_ctor_set(v_reuseFailAlloc_1412_, 4, v_r_1303_);
v___x_1405_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
lean_object* v___x_1407_; 
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 3, v_r_1303_);
lean_ctor_set(v___x_1383_, 0, v___x_1304_);
v___x_1407_ = v___x_1383_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1411_; 
v_reuseFailAlloc_1411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1411_, 0, v___x_1304_);
lean_ctor_set(v_reuseFailAlloc_1411_, 1, v_k_1300_);
lean_ctor_set(v_reuseFailAlloc_1411_, 2, v_v_1301_);
lean_ctor_set(v_reuseFailAlloc_1411_, 3, v_r_1303_);
lean_ctor_set(v_reuseFailAlloc_1411_, 4, v_r_1303_);
v___x_1407_ = v_reuseFailAlloc_1411_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
lean_object* v___x_1409_; 
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 4, v___x_1407_);
lean_ctor_set(v___x_1307_, 3, v___x_1405_);
lean_ctor_set(v___x_1307_, 2, v_v_1399_);
lean_ctor_set(v___x_1307_, 1, v_k_1398_);
lean_ctor_set(v___x_1307_, 0, v___x_1403_);
v___x_1409_ = v___x_1307_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1403_);
lean_ctor_set(v_reuseFailAlloc_1410_, 1, v_k_1398_);
lean_ctor_set(v_reuseFailAlloc_1410_, 2, v_v_1399_);
lean_ctor_set(v_reuseFailAlloc_1410_, 3, v___x_1405_);
lean_ctor_set(v_reuseFailAlloc_1410_, 4, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1303_) == 0)
{
lean_object* v_k_1417_; lean_object* v_v_1418_; lean_object* v___x_1419_; lean_object* v___x_1421_; 
lean_dec(v_size_1299_);
v_k_1417_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_k_1417_);
v_v_1418_ = lean_ctor_get(v___x_1309_, 1);
lean_inc(v_v_1418_);
lean_dec_ref(v___x_1309_);
v___x_1419_ = lean_unsigned_to_nat(3u);
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 4, v_l_1302_);
lean_ctor_set(v___x_1383_, 2, v_v_1418_);
lean_ctor_set(v___x_1383_, 1, v_k_1417_);
lean_ctor_set(v___x_1383_, 0, v___x_1304_);
v___x_1421_ = v___x_1383_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1425_; 
v_reuseFailAlloc_1425_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1425_, 0, v___x_1304_);
lean_ctor_set(v_reuseFailAlloc_1425_, 1, v_k_1417_);
lean_ctor_set(v_reuseFailAlloc_1425_, 2, v_v_1418_);
lean_ctor_set(v_reuseFailAlloc_1425_, 3, v_l_1302_);
lean_ctor_set(v_reuseFailAlloc_1425_, 4, v_l_1302_);
v___x_1421_ = v_reuseFailAlloc_1425_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
lean_object* v___x_1423_; 
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 4, v_r_1303_);
lean_ctor_set(v___x_1307_, 3, v___x_1421_);
lean_ctor_set(v___x_1307_, 2, v_v_1301_);
lean_ctor_set(v___x_1307_, 1, v_k_1300_);
lean_ctor_set(v___x_1307_, 0, v___x_1419_);
v___x_1423_ = v___x_1307_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1419_);
lean_ctor_set(v_reuseFailAlloc_1424_, 1, v_k_1300_);
lean_ctor_set(v_reuseFailAlloc_1424_, 2, v_v_1301_);
lean_ctor_set(v_reuseFailAlloc_1424_, 3, v___x_1421_);
lean_ctor_set(v_reuseFailAlloc_1424_, 4, v_r_1303_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
else
{
lean_object* v_k_1426_; lean_object* v_v_1427_; lean_object* v___x_1429_; 
v_k_1426_ = lean_ctor_get(v___x_1309_, 0);
lean_inc(v_k_1426_);
v_v_1427_ = lean_ctor_get(v___x_1309_, 1);
lean_inc(v_v_1427_);
lean_dec_ref(v___x_1309_);
if (v_isShared_1384_ == 0)
{
lean_ctor_set(v___x_1383_, 3, v_r_1303_);
v___x_1429_ = v___x_1383_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v_size_1299_);
lean_ctor_set(v_reuseFailAlloc_1434_, 1, v_k_1300_);
lean_ctor_set(v_reuseFailAlloc_1434_, 2, v_v_1301_);
lean_ctor_set(v_reuseFailAlloc_1434_, 3, v_r_1303_);
lean_ctor_set(v_reuseFailAlloc_1434_, 4, v_r_1303_);
v___x_1429_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
lean_object* v___x_1430_; lean_object* v___x_1432_; 
v___x_1430_ = lean_unsigned_to_nat(2u);
if (v_isShared_1308_ == 0)
{
lean_ctor_set(v___x_1307_, 4, v___x_1429_);
lean_ctor_set(v___x_1307_, 3, v_r_1303_);
lean_ctor_set(v___x_1307_, 2, v_v_1427_);
lean_ctor_set(v___x_1307_, 1, v_k_1426_);
lean_ctor_set(v___x_1307_, 0, v___x_1430_);
v___x_1432_ = v___x_1307_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1430_);
lean_ctor_set(v_reuseFailAlloc_1433_, 1, v_k_1426_);
lean_ctor_set(v_reuseFailAlloc_1433_, 2, v_v_1427_);
lean_ctor_set(v_reuseFailAlloc_1433_, 3, v_r_1303_);
lean_ctor_set(v_reuseFailAlloc_1433_, 4, v___x_1429_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
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
lean_object* v___x_1448_; uint8_t v_isShared_1449_; uint8_t v_isSharedCheck_1599_; 
lean_inc(v_r_1303_);
lean_inc(v_v_1301_);
lean_inc(v_k_1300_);
v_isSharedCheck_1599_ = !lean_is_exclusive(v_r_1115_);
if (v_isSharedCheck_1599_ == 0)
{
lean_object* v_unused_1600_; lean_object* v_unused_1601_; lean_object* v_unused_1602_; lean_object* v_unused_1603_; lean_object* v_unused_1604_; 
v_unused_1600_ = lean_ctor_get(v_r_1115_, 4);
lean_dec(v_unused_1600_);
v_unused_1601_ = lean_ctor_get(v_r_1115_, 3);
lean_dec(v_unused_1601_);
v_unused_1602_ = lean_ctor_get(v_r_1115_, 2);
lean_dec(v_unused_1602_);
v_unused_1603_ = lean_ctor_get(v_r_1115_, 1);
lean_dec(v_unused_1603_);
v_unused_1604_ = lean_ctor_get(v_r_1115_, 0);
lean_dec(v_unused_1604_);
v___x_1448_ = v_r_1115_;
v_isShared_1449_ = v_isSharedCheck_1599_;
goto v_resetjp_1447_;
}
else
{
lean_dec(v_r_1115_);
v___x_1448_ = lean_box(0);
v_isShared_1449_ = v_isSharedCheck_1599_;
goto v_resetjp_1447_;
}
v_resetjp_1447_:
{
lean_object* v___x_1450_; lean_object* v_tree_1451_; 
v___x_1450_ = l_Std_DTreeMap_Internal_Impl_minView___redArg(v_k_1300_, v_v_1301_, v_l_1302_, v_r_1303_);
v_tree_1451_ = lean_ctor_get(v___x_1450_, 2);
lean_inc(v_tree_1451_);
if (lean_obj_tag(v_tree_1451_) == 0)
{
lean_object* v_k_1452_; lean_object* v_v_1453_; lean_object* v_size_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; uint8_t v___x_1457_; 
v_k_1452_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_k_1452_);
v_v_1453_ = lean_ctor_get(v___x_1450_, 1);
lean_inc(v_v_1453_);
lean_dec_ref(v___x_1450_);
v_size_1454_ = lean_ctor_get(v_tree_1451_, 0);
v___x_1455_ = lean_unsigned_to_nat(3u);
v___x_1456_ = lean_nat_mul(v___x_1455_, v_size_1454_);
v___x_1457_ = lean_nat_dec_lt(v___x_1456_, v_size_1294_);
lean_dec(v___x_1456_);
if (v___x_1457_ == 0)
{
lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1461_; 
lean_dec(v_r_1298_);
v___x_1458_ = lean_nat_add(v___x_1304_, v_size_1294_);
v___x_1459_ = lean_nat_add(v___x_1458_, v_size_1454_);
lean_dec(v___x_1458_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 4, v_tree_1451_);
lean_ctor_set(v___x_1448_, 3, v_l_1114_);
lean_ctor_set(v___x_1448_, 2, v_v_1453_);
lean_ctor_set(v___x_1448_, 1, v_k_1452_);
lean_ctor_set(v___x_1448_, 0, v___x_1459_);
v___x_1461_ = v___x_1448_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1462_; 
v_reuseFailAlloc_1462_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1462_, 0, v___x_1459_);
lean_ctor_set(v_reuseFailAlloc_1462_, 1, v_k_1452_);
lean_ctor_set(v_reuseFailAlloc_1462_, 2, v_v_1453_);
lean_ctor_set(v_reuseFailAlloc_1462_, 3, v_l_1114_);
lean_ctor_set(v_reuseFailAlloc_1462_, 4, v_tree_1451_);
v___x_1461_ = v_reuseFailAlloc_1462_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
return v___x_1461_;
}
}
else
{
lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1528_; 
lean_inc(v_l_1297_);
lean_inc(v_v_1296_);
lean_inc(v_k_1295_);
lean_inc(v_size_1294_);
v_isSharedCheck_1528_ = !lean_is_exclusive(v_l_1114_);
if (v_isSharedCheck_1528_ == 0)
{
lean_object* v_unused_1529_; lean_object* v_unused_1530_; lean_object* v_unused_1531_; lean_object* v_unused_1532_; lean_object* v_unused_1533_; 
v_unused_1529_ = lean_ctor_get(v_l_1114_, 4);
lean_dec(v_unused_1529_);
v_unused_1530_ = lean_ctor_get(v_l_1114_, 3);
lean_dec(v_unused_1530_);
v_unused_1531_ = lean_ctor_get(v_l_1114_, 2);
lean_dec(v_unused_1531_);
v_unused_1532_ = lean_ctor_get(v_l_1114_, 1);
lean_dec(v_unused_1532_);
v_unused_1533_ = lean_ctor_get(v_l_1114_, 0);
lean_dec(v_unused_1533_);
v___x_1464_ = v_l_1114_;
v_isShared_1465_ = v_isSharedCheck_1528_;
goto v_resetjp_1463_;
}
else
{
lean_dec(v_l_1114_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1528_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v_size_1466_; lean_object* v_size_1467_; lean_object* v_k_1468_; lean_object* v_v_1469_; lean_object* v_l_1470_; lean_object* v_r_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; uint8_t v___x_1474_; 
v_size_1466_ = lean_ctor_get(v_l_1297_, 0);
v_size_1467_ = lean_ctor_get(v_r_1298_, 0);
v_k_1468_ = lean_ctor_get(v_r_1298_, 1);
v_v_1469_ = lean_ctor_get(v_r_1298_, 2);
v_l_1470_ = lean_ctor_get(v_r_1298_, 3);
v_r_1471_ = lean_ctor_get(v_r_1298_, 4);
v___x_1472_ = lean_unsigned_to_nat(2u);
v___x_1473_ = lean_nat_mul(v___x_1472_, v_size_1466_);
v___x_1474_ = lean_nat_dec_lt(v_size_1467_, v___x_1473_);
lean_dec(v___x_1473_);
if (v___x_1474_ == 0)
{
lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1512_; 
lean_inc(v_r_1471_);
lean_inc(v_l_1470_);
lean_inc(v_v_1469_);
lean_inc(v_k_1468_);
lean_del_object(v___x_1464_);
v_isSharedCheck_1512_ = !lean_is_exclusive(v_r_1298_);
if (v_isSharedCheck_1512_ == 0)
{
lean_object* v_unused_1513_; lean_object* v_unused_1514_; lean_object* v_unused_1515_; lean_object* v_unused_1516_; lean_object* v_unused_1517_; 
v_unused_1513_ = lean_ctor_get(v_r_1298_, 4);
lean_dec(v_unused_1513_);
v_unused_1514_ = lean_ctor_get(v_r_1298_, 3);
lean_dec(v_unused_1514_);
v_unused_1515_ = lean_ctor_get(v_r_1298_, 2);
lean_dec(v_unused_1515_);
v_unused_1516_ = lean_ctor_get(v_r_1298_, 1);
lean_dec(v_unused_1516_);
v_unused_1517_ = lean_ctor_get(v_r_1298_, 0);
lean_dec(v_unused_1517_);
v___x_1476_ = v_r_1298_;
v_isShared_1477_ = v_isSharedCheck_1512_;
goto v_resetjp_1475_;
}
else
{
lean_dec(v_r_1298_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1512_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___y_1481_; lean_object* v___y_1482_; lean_object* v___y_1483_; lean_object* v___x_1500_; lean_object* v___y_1502_; 
v___x_1478_ = lean_nat_add(v___x_1304_, v_size_1294_);
lean_dec(v_size_1294_);
v___x_1479_ = lean_nat_add(v___x_1478_, v_size_1454_);
lean_dec(v___x_1478_);
v___x_1500_ = lean_nat_add(v___x_1304_, v_size_1466_);
if (lean_obj_tag(v_l_1470_) == 0)
{
lean_object* v_size_1510_; 
v_size_1510_ = lean_ctor_get(v_l_1470_, 0);
lean_inc(v_size_1510_);
v___y_1502_ = v_size_1510_;
goto v___jp_1501_;
}
else
{
lean_object* v___x_1511_; 
v___x_1511_ = lean_unsigned_to_nat(0u);
v___y_1502_ = v___x_1511_;
goto v___jp_1501_;
}
v___jp_1480_:
{
lean_object* v___x_1484_; lean_object* v___x_1486_; 
v___x_1484_ = lean_nat_add(v___y_1482_, v___y_1483_);
lean_dec(v___y_1483_);
lean_dec(v___y_1482_);
lean_inc_ref(v_tree_1451_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 4, v_tree_1451_);
lean_ctor_set(v___x_1476_, 3, v_r_1471_);
lean_ctor_set(v___x_1476_, 2, v_v_1453_);
lean_ctor_set(v___x_1476_, 1, v_k_1452_);
lean_ctor_set(v___x_1476_, 0, v___x_1484_);
v___x_1486_ = v___x_1476_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1499_; 
v_reuseFailAlloc_1499_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1499_, 0, v___x_1484_);
lean_ctor_set(v_reuseFailAlloc_1499_, 1, v_k_1452_);
lean_ctor_set(v_reuseFailAlloc_1499_, 2, v_v_1453_);
lean_ctor_set(v_reuseFailAlloc_1499_, 3, v_r_1471_);
lean_ctor_set(v_reuseFailAlloc_1499_, 4, v_tree_1451_);
v___x_1486_ = v_reuseFailAlloc_1499_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1493_; 
v_isSharedCheck_1493_ = !lean_is_exclusive(v_tree_1451_);
if (v_isSharedCheck_1493_ == 0)
{
lean_object* v_unused_1494_; lean_object* v_unused_1495_; lean_object* v_unused_1496_; lean_object* v_unused_1497_; lean_object* v_unused_1498_; 
v_unused_1494_ = lean_ctor_get(v_tree_1451_, 4);
lean_dec(v_unused_1494_);
v_unused_1495_ = lean_ctor_get(v_tree_1451_, 3);
lean_dec(v_unused_1495_);
v_unused_1496_ = lean_ctor_get(v_tree_1451_, 2);
lean_dec(v_unused_1496_);
v_unused_1497_ = lean_ctor_get(v_tree_1451_, 1);
lean_dec(v_unused_1497_);
v_unused_1498_ = lean_ctor_get(v_tree_1451_, 0);
lean_dec(v_unused_1498_);
v___x_1488_ = v_tree_1451_;
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
else
{
lean_dec(v_tree_1451_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1493_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1491_; 
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 4, v___x_1486_);
lean_ctor_set(v___x_1488_, 3, v___y_1481_);
lean_ctor_set(v___x_1488_, 2, v_v_1469_);
lean_ctor_set(v___x_1488_, 1, v_k_1468_);
lean_ctor_set(v___x_1488_, 0, v___x_1479_);
v___x_1491_ = v___x_1488_;
goto v_reusejp_1490_;
}
else
{
lean_object* v_reuseFailAlloc_1492_; 
v_reuseFailAlloc_1492_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1492_, 0, v___x_1479_);
lean_ctor_set(v_reuseFailAlloc_1492_, 1, v_k_1468_);
lean_ctor_set(v_reuseFailAlloc_1492_, 2, v_v_1469_);
lean_ctor_set(v_reuseFailAlloc_1492_, 3, v___y_1481_);
lean_ctor_set(v_reuseFailAlloc_1492_, 4, v___x_1486_);
v___x_1491_ = v_reuseFailAlloc_1492_;
goto v_reusejp_1490_;
}
v_reusejp_1490_:
{
return v___x_1491_;
}
}
}
}
v___jp_1501_:
{
lean_object* v___x_1503_; lean_object* v___x_1505_; 
v___x_1503_ = lean_nat_add(v___x_1500_, v___y_1502_);
lean_dec(v___y_1502_);
lean_dec(v___x_1500_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 4, v_l_1470_);
lean_ctor_set(v___x_1448_, 3, v_l_1297_);
lean_ctor_set(v___x_1448_, 2, v_v_1296_);
lean_ctor_set(v___x_1448_, 1, v_k_1295_);
lean_ctor_set(v___x_1448_, 0, v___x_1503_);
v___x_1505_ = v___x_1448_;
goto v_reusejp_1504_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v___x_1503_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v_k_1295_);
lean_ctor_set(v_reuseFailAlloc_1509_, 2, v_v_1296_);
lean_ctor_set(v_reuseFailAlloc_1509_, 3, v_l_1297_);
lean_ctor_set(v_reuseFailAlloc_1509_, 4, v_l_1470_);
v___x_1505_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1504_;
}
v_reusejp_1504_:
{
lean_object* v___x_1506_; 
v___x_1506_ = lean_nat_add(v___x_1304_, v_size_1454_);
if (lean_obj_tag(v_r_1471_) == 0)
{
lean_object* v_size_1507_; 
v_size_1507_ = lean_ctor_get(v_r_1471_, 0);
lean_inc(v_size_1507_);
v___y_1481_ = v___x_1505_;
v___y_1482_ = v___x_1506_;
v___y_1483_ = v_size_1507_;
goto v___jp_1480_;
}
else
{
lean_object* v___x_1508_; 
v___x_1508_ = lean_unsigned_to_nat(0u);
v___y_1481_ = v___x_1505_;
v___y_1482_ = v___x_1506_;
v___y_1483_ = v___x_1508_;
goto v___jp_1480_;
}
}
}
}
}
else
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1523_; 
v___x_1518_ = lean_nat_add(v___x_1304_, v_size_1294_);
lean_dec(v_size_1294_);
v___x_1519_ = lean_nat_add(v___x_1518_, v_size_1454_);
lean_dec(v___x_1518_);
v___x_1520_ = lean_nat_add(v___x_1304_, v_size_1454_);
v___x_1521_ = lean_nat_add(v___x_1520_, v_size_1467_);
lean_dec(v___x_1520_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 4, v_tree_1451_);
lean_ctor_set(v___x_1448_, 3, v_r_1298_);
lean_ctor_set(v___x_1448_, 2, v_v_1453_);
lean_ctor_set(v___x_1448_, 1, v_k_1452_);
lean_ctor_set(v___x_1448_, 0, v___x_1521_);
v___x_1523_ = v___x_1448_;
goto v_reusejp_1522_;
}
else
{
lean_object* v_reuseFailAlloc_1527_; 
v_reuseFailAlloc_1527_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1527_, 0, v___x_1521_);
lean_ctor_set(v_reuseFailAlloc_1527_, 1, v_k_1452_);
lean_ctor_set(v_reuseFailAlloc_1527_, 2, v_v_1453_);
lean_ctor_set(v_reuseFailAlloc_1527_, 3, v_r_1298_);
lean_ctor_set(v_reuseFailAlloc_1527_, 4, v_tree_1451_);
v___x_1523_ = v_reuseFailAlloc_1527_;
goto v_reusejp_1522_;
}
v_reusejp_1522_:
{
lean_object* v___x_1525_; 
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 4, v___x_1523_);
lean_ctor_set(v___x_1464_, 0, v___x_1519_);
v___x_1525_ = v___x_1464_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___x_1519_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v_k_1295_);
lean_ctor_set(v_reuseFailAlloc_1526_, 2, v_v_1296_);
lean_ctor_set(v_reuseFailAlloc_1526_, 3, v_l_1297_);
lean_ctor_set(v_reuseFailAlloc_1526_, 4, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
}
}
}
}
else
{
if (lean_obj_tag(v_l_1297_) == 0)
{
lean_object* v___x_1535_; uint8_t v_isShared_1536_; uint8_t v_isSharedCheck_1557_; 
lean_inc_ref(v_l_1297_);
lean_inc(v_v_1296_);
lean_inc(v_k_1295_);
lean_inc(v_size_1294_);
v_isSharedCheck_1557_ = !lean_is_exclusive(v_l_1114_);
if (v_isSharedCheck_1557_ == 0)
{
lean_object* v_unused_1558_; lean_object* v_unused_1559_; lean_object* v_unused_1560_; lean_object* v_unused_1561_; lean_object* v_unused_1562_; 
v_unused_1558_ = lean_ctor_get(v_l_1114_, 4);
lean_dec(v_unused_1558_);
v_unused_1559_ = lean_ctor_get(v_l_1114_, 3);
lean_dec(v_unused_1559_);
v_unused_1560_ = lean_ctor_get(v_l_1114_, 2);
lean_dec(v_unused_1560_);
v_unused_1561_ = lean_ctor_get(v_l_1114_, 1);
lean_dec(v_unused_1561_);
v_unused_1562_ = lean_ctor_get(v_l_1114_, 0);
lean_dec(v_unused_1562_);
v___x_1535_ = v_l_1114_;
v_isShared_1536_ = v_isSharedCheck_1557_;
goto v_resetjp_1534_;
}
else
{
lean_dec(v_l_1114_);
v___x_1535_ = lean_box(0);
v_isShared_1536_ = v_isSharedCheck_1557_;
goto v_resetjp_1534_;
}
v_resetjp_1534_:
{
if (lean_obj_tag(v_r_1298_) == 0)
{
lean_object* v_k_1537_; lean_object* v_v_1538_; lean_object* v_size_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1543_; 
v_k_1537_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_k_1537_);
v_v_1538_ = lean_ctor_get(v___x_1450_, 1);
lean_inc(v_v_1538_);
lean_dec_ref(v___x_1450_);
v_size_1539_ = lean_ctor_get(v_r_1298_, 0);
v___x_1540_ = lean_nat_add(v___x_1304_, v_size_1294_);
lean_dec(v_size_1294_);
v___x_1541_ = lean_nat_add(v___x_1304_, v_size_1539_);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 4, v_tree_1451_);
lean_ctor_set(v___x_1448_, 3, v_r_1298_);
lean_ctor_set(v___x_1448_, 2, v_v_1538_);
lean_ctor_set(v___x_1448_, 1, v_k_1537_);
lean_ctor_set(v___x_1448_, 0, v___x_1541_);
v___x_1543_ = v___x_1448_;
goto v_reusejp_1542_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v___x_1541_);
lean_ctor_set(v_reuseFailAlloc_1547_, 1, v_k_1537_);
lean_ctor_set(v_reuseFailAlloc_1547_, 2, v_v_1538_);
lean_ctor_set(v_reuseFailAlloc_1547_, 3, v_r_1298_);
lean_ctor_set(v_reuseFailAlloc_1547_, 4, v_tree_1451_);
v___x_1543_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1542_;
}
v_reusejp_1542_:
{
lean_object* v___x_1545_; 
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 4, v___x_1543_);
lean_ctor_set(v___x_1535_, 0, v___x_1540_);
v___x_1545_ = v___x_1535_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v___x_1540_);
lean_ctor_set(v_reuseFailAlloc_1546_, 1, v_k_1295_);
lean_ctor_set(v_reuseFailAlloc_1546_, 2, v_v_1296_);
lean_ctor_set(v_reuseFailAlloc_1546_, 3, v_l_1297_);
lean_ctor_set(v_reuseFailAlloc_1546_, 4, v___x_1543_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
else
{
lean_object* v_k_1548_; lean_object* v_v_1549_; lean_object* v___x_1550_; lean_object* v___x_1552_; 
lean_dec(v_size_1294_);
v_k_1548_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_k_1548_);
v_v_1549_ = lean_ctor_get(v___x_1450_, 1);
lean_inc(v_v_1549_);
lean_dec_ref(v___x_1450_);
v___x_1550_ = lean_unsigned_to_nat(3u);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 4, v_r_1298_);
lean_ctor_set(v___x_1448_, 3, v_r_1298_);
lean_ctor_set(v___x_1448_, 2, v_v_1549_);
lean_ctor_set(v___x_1448_, 1, v_k_1548_);
lean_ctor_set(v___x_1448_, 0, v___x_1304_);
v___x_1552_ = v___x_1448_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1556_; 
v_reuseFailAlloc_1556_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1556_, 0, v___x_1304_);
lean_ctor_set(v_reuseFailAlloc_1556_, 1, v_k_1548_);
lean_ctor_set(v_reuseFailAlloc_1556_, 2, v_v_1549_);
lean_ctor_set(v_reuseFailAlloc_1556_, 3, v_r_1298_);
lean_ctor_set(v_reuseFailAlloc_1556_, 4, v_r_1298_);
v___x_1552_ = v_reuseFailAlloc_1556_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
lean_object* v___x_1554_; 
if (v_isShared_1536_ == 0)
{
lean_ctor_set(v___x_1535_, 4, v___x_1552_);
lean_ctor_set(v___x_1535_, 0, v___x_1550_);
v___x_1554_ = v___x_1535_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1550_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v_k_1295_);
lean_ctor_set(v_reuseFailAlloc_1555_, 2, v_v_1296_);
lean_ctor_set(v_reuseFailAlloc_1555_, 3, v_l_1297_);
lean_ctor_set(v_reuseFailAlloc_1555_, 4, v___x_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
}
else
{
if (lean_obj_tag(v_r_1298_) == 0)
{
lean_object* v___x_1564_; uint8_t v_isShared_1565_; uint8_t v_isSharedCheck_1587_; 
lean_inc(v_l_1297_);
lean_inc(v_v_1296_);
lean_inc(v_k_1295_);
v_isSharedCheck_1587_ = !lean_is_exclusive(v_l_1114_);
if (v_isSharedCheck_1587_ == 0)
{
lean_object* v_unused_1588_; lean_object* v_unused_1589_; lean_object* v_unused_1590_; lean_object* v_unused_1591_; lean_object* v_unused_1592_; 
v_unused_1588_ = lean_ctor_get(v_l_1114_, 4);
lean_dec(v_unused_1588_);
v_unused_1589_ = lean_ctor_get(v_l_1114_, 3);
lean_dec(v_unused_1589_);
v_unused_1590_ = lean_ctor_get(v_l_1114_, 2);
lean_dec(v_unused_1590_);
v_unused_1591_ = lean_ctor_get(v_l_1114_, 1);
lean_dec(v_unused_1591_);
v_unused_1592_ = lean_ctor_get(v_l_1114_, 0);
lean_dec(v_unused_1592_);
v___x_1564_ = v_l_1114_;
v_isShared_1565_ = v_isSharedCheck_1587_;
goto v_resetjp_1563_;
}
else
{
lean_dec(v_l_1114_);
v___x_1564_ = lean_box(0);
v_isShared_1565_ = v_isSharedCheck_1587_;
goto v_resetjp_1563_;
}
v_resetjp_1563_:
{
lean_object* v_k_1566_; lean_object* v_v_1567_; lean_object* v_k_1568_; lean_object* v_v_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1583_; 
v_k_1566_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_k_1566_);
v_v_1567_ = lean_ctor_get(v___x_1450_, 1);
lean_inc(v_v_1567_);
lean_dec_ref(v___x_1450_);
v_k_1568_ = lean_ctor_get(v_r_1298_, 1);
v_v_1569_ = lean_ctor_get(v_r_1298_, 2);
v_isSharedCheck_1583_ = !lean_is_exclusive(v_r_1298_);
if (v_isSharedCheck_1583_ == 0)
{
lean_object* v_unused_1584_; lean_object* v_unused_1585_; lean_object* v_unused_1586_; 
v_unused_1584_ = lean_ctor_get(v_r_1298_, 4);
lean_dec(v_unused_1584_);
v_unused_1585_ = lean_ctor_get(v_r_1298_, 3);
lean_dec(v_unused_1585_);
v_unused_1586_ = lean_ctor_get(v_r_1298_, 0);
lean_dec(v_unused_1586_);
v___x_1571_ = v_r_1298_;
v_isShared_1572_ = v_isSharedCheck_1583_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_v_1569_);
lean_inc(v_k_1568_);
lean_dec(v_r_1298_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1583_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1573_; lean_object* v___x_1575_; 
v___x_1573_ = lean_unsigned_to_nat(3u);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 4, v_l_1297_);
lean_ctor_set(v___x_1571_, 3, v_l_1297_);
lean_ctor_set(v___x_1571_, 2, v_v_1296_);
lean_ctor_set(v___x_1571_, 1, v_k_1295_);
lean_ctor_set(v___x_1571_, 0, v___x_1304_);
v___x_1575_ = v___x_1571_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1582_; 
v_reuseFailAlloc_1582_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1582_, 0, v___x_1304_);
lean_ctor_set(v_reuseFailAlloc_1582_, 1, v_k_1295_);
lean_ctor_set(v_reuseFailAlloc_1582_, 2, v_v_1296_);
lean_ctor_set(v_reuseFailAlloc_1582_, 3, v_l_1297_);
lean_ctor_set(v_reuseFailAlloc_1582_, 4, v_l_1297_);
v___x_1575_ = v_reuseFailAlloc_1582_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
lean_object* v___x_1577_; 
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 4, v_l_1297_);
lean_ctor_set(v___x_1448_, 3, v_l_1297_);
lean_ctor_set(v___x_1448_, 2, v_v_1567_);
lean_ctor_set(v___x_1448_, 1, v_k_1566_);
lean_ctor_set(v___x_1448_, 0, v___x_1304_);
v___x_1577_ = v___x_1448_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v___x_1304_);
lean_ctor_set(v_reuseFailAlloc_1581_, 1, v_k_1566_);
lean_ctor_set(v_reuseFailAlloc_1581_, 2, v_v_1567_);
lean_ctor_set(v_reuseFailAlloc_1581_, 3, v_l_1297_);
lean_ctor_set(v_reuseFailAlloc_1581_, 4, v_l_1297_);
v___x_1577_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
lean_object* v___x_1579_; 
if (v_isShared_1565_ == 0)
{
lean_ctor_set(v___x_1564_, 4, v___x_1577_);
lean_ctor_set(v___x_1564_, 3, v___x_1575_);
lean_ctor_set(v___x_1564_, 2, v_v_1569_);
lean_ctor_set(v___x_1564_, 1, v_k_1568_);
lean_ctor_set(v___x_1564_, 0, v___x_1573_);
v___x_1579_ = v___x_1564_;
goto v_reusejp_1578_;
}
else
{
lean_object* v_reuseFailAlloc_1580_; 
v_reuseFailAlloc_1580_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1580_, 0, v___x_1573_);
lean_ctor_set(v_reuseFailAlloc_1580_, 1, v_k_1568_);
lean_ctor_set(v_reuseFailAlloc_1580_, 2, v_v_1569_);
lean_ctor_set(v_reuseFailAlloc_1580_, 3, v___x_1575_);
lean_ctor_set(v_reuseFailAlloc_1580_, 4, v___x_1577_);
v___x_1579_ = v_reuseFailAlloc_1580_;
goto v_reusejp_1578_;
}
v_reusejp_1578_:
{
return v___x_1579_;
}
}
}
}
}
}
else
{
lean_object* v_k_1593_; lean_object* v_v_1594_; lean_object* v___x_1595_; lean_object* v___x_1597_; 
v_k_1593_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_k_1593_);
v_v_1594_ = lean_ctor_get(v___x_1450_, 1);
lean_inc(v_v_1594_);
lean_dec_ref(v___x_1450_);
v___x_1595_ = lean_unsigned_to_nat(2u);
if (v_isShared_1449_ == 0)
{
lean_ctor_set(v___x_1448_, 4, v_r_1298_);
lean_ctor_set(v___x_1448_, 3, v_l_1114_);
lean_ctor_set(v___x_1448_, 2, v_v_1594_);
lean_ctor_set(v___x_1448_, 1, v_k_1593_);
lean_ctor_set(v___x_1448_, 0, v___x_1595_);
v___x_1597_ = v___x_1448_;
goto v_reusejp_1596_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v___x_1595_);
lean_ctor_set(v_reuseFailAlloc_1598_, 1, v_k_1593_);
lean_ctor_set(v_reuseFailAlloc_1598_, 2, v_v_1594_);
lean_ctor_set(v_reuseFailAlloc_1598_, 3, v_l_1114_);
lean_ctor_set(v_reuseFailAlloc_1598_, 4, v_r_1298_);
v___x_1597_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1596_;
}
v_reusejp_1596_:
{
return v___x_1597_;
}
}
}
}
}
}
}
else
{
return v_l_1114_;
}
}
else
{
return v_r_1115_;
}
}
default: 
{
lean_object* v_impl_1605_; lean_object* v___x_1606_; 
v_impl_1605_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(v_k_1110_, v_r_1115_);
v___x_1606_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_impl_1605_) == 0)
{
if (lean_obj_tag(v_l_1114_) == 0)
{
lean_object* v_size_1607_; lean_object* v_size_1608_; lean_object* v_k_1609_; lean_object* v_v_1610_; lean_object* v_l_1611_; lean_object* v_r_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; uint8_t v___x_1615_; 
v_size_1607_ = lean_ctor_get(v_impl_1605_, 0);
lean_inc(v_size_1607_);
v_size_1608_ = lean_ctor_get(v_l_1114_, 0);
v_k_1609_ = lean_ctor_get(v_l_1114_, 1);
v_v_1610_ = lean_ctor_get(v_l_1114_, 2);
v_l_1611_ = lean_ctor_get(v_l_1114_, 3);
v_r_1612_ = lean_ctor_get(v_l_1114_, 4);
lean_inc(v_r_1612_);
v___x_1613_ = lean_unsigned_to_nat(3u);
v___x_1614_ = lean_nat_mul(v___x_1613_, v_size_1607_);
v___x_1615_ = lean_nat_dec_lt(v___x_1614_, v_size_1608_);
lean_dec(v___x_1614_);
if (v___x_1615_ == 0)
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1619_; 
lean_dec(v_r_1612_);
v___x_1616_ = lean_nat_add(v___x_1606_, v_size_1608_);
v___x_1617_ = lean_nat_add(v___x_1616_, v_size_1607_);
lean_dec(v_size_1607_);
lean_dec(v___x_1616_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v_impl_1605_);
lean_ctor_set(v___x_1117_, 0, v___x_1617_);
v___x_1619_ = v___x_1117_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1620_; 
v_reuseFailAlloc_1620_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1620_, 0, v___x_1617_);
lean_ctor_set(v_reuseFailAlloc_1620_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1620_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1620_, 3, v_l_1114_);
lean_ctor_set(v_reuseFailAlloc_1620_, 4, v_impl_1605_);
v___x_1619_ = v_reuseFailAlloc_1620_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
return v___x_1619_;
}
}
else
{
lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1686_; 
lean_inc(v_l_1611_);
lean_inc(v_v_1610_);
lean_inc(v_k_1609_);
lean_inc(v_size_1608_);
v_isSharedCheck_1686_ = !lean_is_exclusive(v_l_1114_);
if (v_isSharedCheck_1686_ == 0)
{
lean_object* v_unused_1687_; lean_object* v_unused_1688_; lean_object* v_unused_1689_; lean_object* v_unused_1690_; lean_object* v_unused_1691_; 
v_unused_1687_ = lean_ctor_get(v_l_1114_, 4);
lean_dec(v_unused_1687_);
v_unused_1688_ = lean_ctor_get(v_l_1114_, 3);
lean_dec(v_unused_1688_);
v_unused_1689_ = lean_ctor_get(v_l_1114_, 2);
lean_dec(v_unused_1689_);
v_unused_1690_ = lean_ctor_get(v_l_1114_, 1);
lean_dec(v_unused_1690_);
v_unused_1691_ = lean_ctor_get(v_l_1114_, 0);
lean_dec(v_unused_1691_);
v___x_1622_ = v_l_1114_;
v_isShared_1623_ = v_isSharedCheck_1686_;
goto v_resetjp_1621_;
}
else
{
lean_dec(v_l_1114_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1686_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v_size_1624_; lean_object* v_size_1625_; lean_object* v_k_1626_; lean_object* v_v_1627_; lean_object* v_l_1628_; lean_object* v_r_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; uint8_t v___x_1632_; 
v_size_1624_ = lean_ctor_get(v_l_1611_, 0);
v_size_1625_ = lean_ctor_get(v_r_1612_, 0);
v_k_1626_ = lean_ctor_get(v_r_1612_, 1);
v_v_1627_ = lean_ctor_get(v_r_1612_, 2);
v_l_1628_ = lean_ctor_get(v_r_1612_, 3);
v_r_1629_ = lean_ctor_get(v_r_1612_, 4);
v___x_1630_ = lean_unsigned_to_nat(2u);
v___x_1631_ = lean_nat_mul(v___x_1630_, v_size_1624_);
v___x_1632_ = lean_nat_dec_lt(v_size_1625_, v___x_1631_);
lean_dec(v___x_1631_);
if (v___x_1632_ == 0)
{
lean_object* v___x_1634_; uint8_t v_isShared_1635_; uint8_t v_isSharedCheck_1661_; 
lean_inc(v_r_1629_);
lean_inc(v_l_1628_);
lean_inc(v_v_1627_);
lean_inc(v_k_1626_);
v_isSharedCheck_1661_ = !lean_is_exclusive(v_r_1612_);
if (v_isSharedCheck_1661_ == 0)
{
lean_object* v_unused_1662_; lean_object* v_unused_1663_; lean_object* v_unused_1664_; lean_object* v_unused_1665_; lean_object* v_unused_1666_; 
v_unused_1662_ = lean_ctor_get(v_r_1612_, 4);
lean_dec(v_unused_1662_);
v_unused_1663_ = lean_ctor_get(v_r_1612_, 3);
lean_dec(v_unused_1663_);
v_unused_1664_ = lean_ctor_get(v_r_1612_, 2);
lean_dec(v_unused_1664_);
v_unused_1665_ = lean_ctor_get(v_r_1612_, 1);
lean_dec(v_unused_1665_);
v_unused_1666_ = lean_ctor_get(v_r_1612_, 0);
lean_dec(v_unused_1666_);
v___x_1634_ = v_r_1612_;
v_isShared_1635_ = v_isSharedCheck_1661_;
goto v_resetjp_1633_;
}
else
{
lean_dec(v_r_1612_);
v___x_1634_ = lean_box(0);
v_isShared_1635_ = v_isSharedCheck_1661_;
goto v_resetjp_1633_;
}
v_resetjp_1633_:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___y_1639_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___x_1649_; lean_object* v___y_1651_; 
v___x_1636_ = lean_nat_add(v___x_1606_, v_size_1608_);
lean_dec(v_size_1608_);
v___x_1637_ = lean_nat_add(v___x_1636_, v_size_1607_);
lean_dec(v___x_1636_);
v___x_1649_ = lean_nat_add(v___x_1606_, v_size_1624_);
if (lean_obj_tag(v_l_1628_) == 0)
{
lean_object* v_size_1659_; 
v_size_1659_ = lean_ctor_get(v_l_1628_, 0);
lean_inc(v_size_1659_);
v___y_1651_ = v_size_1659_;
goto v___jp_1650_;
}
else
{
lean_object* v___x_1660_; 
v___x_1660_ = lean_unsigned_to_nat(0u);
v___y_1651_ = v___x_1660_;
goto v___jp_1650_;
}
v___jp_1638_:
{
lean_object* v___x_1642_; lean_object* v___x_1644_; 
v___x_1642_ = lean_nat_add(v___y_1639_, v___y_1641_);
lean_dec(v___y_1641_);
lean_dec(v___y_1639_);
if (v_isShared_1635_ == 0)
{
lean_ctor_set(v___x_1634_, 4, v_impl_1605_);
lean_ctor_set(v___x_1634_, 3, v_r_1629_);
lean_ctor_set(v___x_1634_, 2, v_v_1113_);
lean_ctor_set(v___x_1634_, 1, v_k_1112_);
lean_ctor_set(v___x_1634_, 0, v___x_1642_);
v___x_1644_ = v___x_1634_;
goto v_reusejp_1643_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v___x_1642_);
lean_ctor_set(v_reuseFailAlloc_1648_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1648_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1648_, 3, v_r_1629_);
lean_ctor_set(v_reuseFailAlloc_1648_, 4, v_impl_1605_);
v___x_1644_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1643_;
}
v_reusejp_1643_:
{
lean_object* v___x_1646_; 
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 4, v___x_1644_);
lean_ctor_set(v___x_1622_, 3, v___y_1640_);
lean_ctor_set(v___x_1622_, 2, v_v_1627_);
lean_ctor_set(v___x_1622_, 1, v_k_1626_);
lean_ctor_set(v___x_1622_, 0, v___x_1637_);
v___x_1646_ = v___x_1622_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v___x_1637_);
lean_ctor_set(v_reuseFailAlloc_1647_, 1, v_k_1626_);
lean_ctor_set(v_reuseFailAlloc_1647_, 2, v_v_1627_);
lean_ctor_set(v_reuseFailAlloc_1647_, 3, v___y_1640_);
lean_ctor_set(v_reuseFailAlloc_1647_, 4, v___x_1644_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
v___jp_1650_:
{
lean_object* v___x_1652_; lean_object* v___x_1654_; 
v___x_1652_ = lean_nat_add(v___x_1649_, v___y_1651_);
lean_dec(v___y_1651_);
lean_dec(v___x_1649_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v_l_1628_);
lean_ctor_set(v___x_1117_, 3, v_l_1611_);
lean_ctor_set(v___x_1117_, 2, v_v_1610_);
lean_ctor_set(v___x_1117_, 1, v_k_1609_);
lean_ctor_set(v___x_1117_, 0, v___x_1652_);
v___x_1654_ = v___x_1117_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v___x_1652_);
lean_ctor_set(v_reuseFailAlloc_1658_, 1, v_k_1609_);
lean_ctor_set(v_reuseFailAlloc_1658_, 2, v_v_1610_);
lean_ctor_set(v_reuseFailAlloc_1658_, 3, v_l_1611_);
lean_ctor_set(v_reuseFailAlloc_1658_, 4, v_l_1628_);
v___x_1654_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
lean_object* v___x_1655_; 
v___x_1655_ = lean_nat_add(v___x_1606_, v_size_1607_);
lean_dec(v_size_1607_);
if (lean_obj_tag(v_r_1629_) == 0)
{
lean_object* v_size_1656_; 
v_size_1656_ = lean_ctor_get(v_r_1629_, 0);
lean_inc(v_size_1656_);
v___y_1639_ = v___x_1655_;
v___y_1640_ = v___x_1654_;
v___y_1641_ = v_size_1656_;
goto v___jp_1638_;
}
else
{
lean_object* v___x_1657_; 
v___x_1657_ = lean_unsigned_to_nat(0u);
v___y_1639_ = v___x_1655_;
v___y_1640_ = v___x_1654_;
v___y_1641_ = v___x_1657_;
goto v___jp_1638_;
}
}
}
}
}
else
{
lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1672_; 
lean_del_object(v___x_1117_);
v___x_1667_ = lean_nat_add(v___x_1606_, v_size_1608_);
lean_dec(v_size_1608_);
v___x_1668_ = lean_nat_add(v___x_1667_, v_size_1607_);
lean_dec(v___x_1667_);
v___x_1669_ = lean_nat_add(v___x_1606_, v_size_1607_);
lean_dec(v_size_1607_);
v___x_1670_ = lean_nat_add(v___x_1669_, v_size_1625_);
lean_dec(v___x_1669_);
lean_inc_ref(v_impl_1605_);
if (v_isShared_1623_ == 0)
{
lean_ctor_set(v___x_1622_, 4, v_impl_1605_);
lean_ctor_set(v___x_1622_, 3, v_r_1612_);
lean_ctor_set(v___x_1622_, 2, v_v_1113_);
lean_ctor_set(v___x_1622_, 1, v_k_1112_);
lean_ctor_set(v___x_1622_, 0, v___x_1670_);
v___x_1672_ = v___x_1622_;
goto v_reusejp_1671_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v___x_1670_);
lean_ctor_set(v_reuseFailAlloc_1685_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1685_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1685_, 3, v_r_1612_);
lean_ctor_set(v_reuseFailAlloc_1685_, 4, v_impl_1605_);
v___x_1672_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1671_;
}
v_reusejp_1671_:
{
lean_object* v___x_1674_; uint8_t v_isShared_1675_; uint8_t v_isSharedCheck_1679_; 
v_isSharedCheck_1679_ = !lean_is_exclusive(v_impl_1605_);
if (v_isSharedCheck_1679_ == 0)
{
lean_object* v_unused_1680_; lean_object* v_unused_1681_; lean_object* v_unused_1682_; lean_object* v_unused_1683_; lean_object* v_unused_1684_; 
v_unused_1680_ = lean_ctor_get(v_impl_1605_, 4);
lean_dec(v_unused_1680_);
v_unused_1681_ = lean_ctor_get(v_impl_1605_, 3);
lean_dec(v_unused_1681_);
v_unused_1682_ = lean_ctor_get(v_impl_1605_, 2);
lean_dec(v_unused_1682_);
v_unused_1683_ = lean_ctor_get(v_impl_1605_, 1);
lean_dec(v_unused_1683_);
v_unused_1684_ = lean_ctor_get(v_impl_1605_, 0);
lean_dec(v_unused_1684_);
v___x_1674_ = v_impl_1605_;
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
else
{
lean_dec(v_impl_1605_);
v___x_1674_ = lean_box(0);
v_isShared_1675_ = v_isSharedCheck_1679_;
goto v_resetjp_1673_;
}
v_resetjp_1673_:
{
lean_object* v___x_1677_; 
if (v_isShared_1675_ == 0)
{
lean_ctor_set(v___x_1674_, 4, v___x_1672_);
lean_ctor_set(v___x_1674_, 3, v_l_1611_);
lean_ctor_set(v___x_1674_, 2, v_v_1610_);
lean_ctor_set(v___x_1674_, 1, v_k_1609_);
lean_ctor_set(v___x_1674_, 0, v___x_1668_);
v___x_1677_ = v___x_1674_;
goto v_reusejp_1676_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v___x_1668_);
lean_ctor_set(v_reuseFailAlloc_1678_, 1, v_k_1609_);
lean_ctor_set(v_reuseFailAlloc_1678_, 2, v_v_1610_);
lean_ctor_set(v_reuseFailAlloc_1678_, 3, v_l_1611_);
lean_ctor_set(v_reuseFailAlloc_1678_, 4, v___x_1672_);
v___x_1677_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1676_;
}
v_reusejp_1676_:
{
return v___x_1677_;
}
}
}
}
}
}
}
else
{
lean_object* v_size_1692_; lean_object* v___x_1693_; lean_object* v___x_1695_; 
v_size_1692_ = lean_ctor_get(v_impl_1605_, 0);
lean_inc(v_size_1692_);
v___x_1693_ = lean_nat_add(v___x_1606_, v_size_1692_);
lean_dec(v_size_1692_);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v_impl_1605_);
lean_ctor_set(v___x_1117_, 0, v___x_1693_);
v___x_1695_ = v___x_1117_;
goto v_reusejp_1694_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1693_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1696_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1696_, 3, v_l_1114_);
lean_ctor_set(v_reuseFailAlloc_1696_, 4, v_impl_1605_);
v___x_1695_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1694_;
}
v_reusejp_1694_:
{
return v___x_1695_;
}
}
}
else
{
if (lean_obj_tag(v_l_1114_) == 0)
{
lean_object* v_l_1697_; 
v_l_1697_ = lean_ctor_get(v_l_1114_, 3);
if (lean_obj_tag(v_l_1697_) == 0)
{
lean_object* v_r_1698_; 
lean_inc_ref(v_l_1697_);
v_r_1698_ = lean_ctor_get(v_l_1114_, 4);
lean_inc(v_r_1698_);
if (lean_obj_tag(v_r_1698_) == 0)
{
lean_object* v_size_1699_; lean_object* v_k_1700_; lean_object* v_v_1701_; lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1714_; 
v_size_1699_ = lean_ctor_get(v_l_1114_, 0);
v_k_1700_ = lean_ctor_get(v_l_1114_, 1);
v_v_1701_ = lean_ctor_get(v_l_1114_, 2);
v_isSharedCheck_1714_ = !lean_is_exclusive(v_l_1114_);
if (v_isSharedCheck_1714_ == 0)
{
lean_object* v_unused_1715_; lean_object* v_unused_1716_; 
v_unused_1715_ = lean_ctor_get(v_l_1114_, 4);
lean_dec(v_unused_1715_);
v_unused_1716_ = lean_ctor_get(v_l_1114_, 3);
lean_dec(v_unused_1716_);
v___x_1703_ = v_l_1114_;
v_isShared_1704_ = v_isSharedCheck_1714_;
goto v_resetjp_1702_;
}
else
{
lean_inc(v_v_1701_);
lean_inc(v_k_1700_);
lean_inc(v_size_1699_);
lean_dec(v_l_1114_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1714_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
lean_object* v_size_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1709_; 
v_size_1705_ = lean_ctor_get(v_r_1698_, 0);
v___x_1706_ = lean_nat_add(v___x_1606_, v_size_1699_);
lean_dec(v_size_1699_);
v___x_1707_ = lean_nat_add(v___x_1606_, v_size_1705_);
if (v_isShared_1704_ == 0)
{
lean_ctor_set(v___x_1703_, 4, v_impl_1605_);
lean_ctor_set(v___x_1703_, 3, v_r_1698_);
lean_ctor_set(v___x_1703_, 2, v_v_1113_);
lean_ctor_set(v___x_1703_, 1, v_k_1112_);
lean_ctor_set(v___x_1703_, 0, v___x_1707_);
v___x_1709_ = v___x_1703_;
goto v_reusejp_1708_;
}
else
{
lean_object* v_reuseFailAlloc_1713_; 
v_reuseFailAlloc_1713_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1713_, 0, v___x_1707_);
lean_ctor_set(v_reuseFailAlloc_1713_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1713_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1713_, 3, v_r_1698_);
lean_ctor_set(v_reuseFailAlloc_1713_, 4, v_impl_1605_);
v___x_1709_ = v_reuseFailAlloc_1713_;
goto v_reusejp_1708_;
}
v_reusejp_1708_:
{
lean_object* v___x_1711_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v___x_1709_);
lean_ctor_set(v___x_1117_, 3, v_l_1697_);
lean_ctor_set(v___x_1117_, 2, v_v_1701_);
lean_ctor_set(v___x_1117_, 1, v_k_1700_);
lean_ctor_set(v___x_1117_, 0, v___x_1706_);
v___x_1711_ = v___x_1117_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1712_; 
v_reuseFailAlloc_1712_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1712_, 0, v___x_1706_);
lean_ctor_set(v_reuseFailAlloc_1712_, 1, v_k_1700_);
lean_ctor_set(v_reuseFailAlloc_1712_, 2, v_v_1701_);
lean_ctor_set(v_reuseFailAlloc_1712_, 3, v_l_1697_);
lean_ctor_set(v_reuseFailAlloc_1712_, 4, v___x_1709_);
v___x_1711_ = v_reuseFailAlloc_1712_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
return v___x_1711_;
}
}
}
}
else
{
lean_object* v_k_1717_; lean_object* v_v_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1729_; 
v_k_1717_ = lean_ctor_get(v_l_1114_, 1);
v_v_1718_ = lean_ctor_get(v_l_1114_, 2);
v_isSharedCheck_1729_ = !lean_is_exclusive(v_l_1114_);
if (v_isSharedCheck_1729_ == 0)
{
lean_object* v_unused_1730_; lean_object* v_unused_1731_; lean_object* v_unused_1732_; 
v_unused_1730_ = lean_ctor_get(v_l_1114_, 4);
lean_dec(v_unused_1730_);
v_unused_1731_ = lean_ctor_get(v_l_1114_, 3);
lean_dec(v_unused_1731_);
v_unused_1732_ = lean_ctor_get(v_l_1114_, 0);
lean_dec(v_unused_1732_);
v___x_1720_ = v_l_1114_;
v_isShared_1721_ = v_isSharedCheck_1729_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_v_1718_);
lean_inc(v_k_1717_);
lean_dec(v_l_1114_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1729_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1722_; lean_object* v___x_1724_; 
v___x_1722_ = lean_unsigned_to_nat(3u);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 3, v_r_1698_);
lean_ctor_set(v___x_1720_, 2, v_v_1113_);
lean_ctor_set(v___x_1720_, 1, v_k_1112_);
lean_ctor_set(v___x_1720_, 0, v___x_1606_);
v___x_1724_ = v___x_1720_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1728_; 
v_reuseFailAlloc_1728_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1728_, 0, v___x_1606_);
lean_ctor_set(v_reuseFailAlloc_1728_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1728_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1728_, 3, v_r_1698_);
lean_ctor_set(v_reuseFailAlloc_1728_, 4, v_r_1698_);
v___x_1724_ = v_reuseFailAlloc_1728_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
lean_object* v___x_1726_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v___x_1724_);
lean_ctor_set(v___x_1117_, 3, v_l_1697_);
lean_ctor_set(v___x_1117_, 2, v_v_1718_);
lean_ctor_set(v___x_1117_, 1, v_k_1717_);
lean_ctor_set(v___x_1117_, 0, v___x_1722_);
v___x_1726_ = v___x_1117_;
goto v_reusejp_1725_;
}
else
{
lean_object* v_reuseFailAlloc_1727_; 
v_reuseFailAlloc_1727_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1727_, 0, v___x_1722_);
lean_ctor_set(v_reuseFailAlloc_1727_, 1, v_k_1717_);
lean_ctor_set(v_reuseFailAlloc_1727_, 2, v_v_1718_);
lean_ctor_set(v_reuseFailAlloc_1727_, 3, v_l_1697_);
lean_ctor_set(v_reuseFailAlloc_1727_, 4, v___x_1724_);
v___x_1726_ = v_reuseFailAlloc_1727_;
goto v_reusejp_1725_;
}
v_reusejp_1725_:
{
return v___x_1726_;
}
}
}
}
}
else
{
lean_object* v_r_1733_; 
v_r_1733_ = lean_ctor_get(v_l_1114_, 4);
lean_inc(v_r_1733_);
if (lean_obj_tag(v_r_1733_) == 0)
{
lean_object* v_k_1734_; lean_object* v_v_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1758_; 
lean_inc(v_l_1697_);
v_k_1734_ = lean_ctor_get(v_l_1114_, 1);
v_v_1735_ = lean_ctor_get(v_l_1114_, 2);
v_isSharedCheck_1758_ = !lean_is_exclusive(v_l_1114_);
if (v_isSharedCheck_1758_ == 0)
{
lean_object* v_unused_1759_; lean_object* v_unused_1760_; lean_object* v_unused_1761_; 
v_unused_1759_ = lean_ctor_get(v_l_1114_, 4);
lean_dec(v_unused_1759_);
v_unused_1760_ = lean_ctor_get(v_l_1114_, 3);
lean_dec(v_unused_1760_);
v_unused_1761_ = lean_ctor_get(v_l_1114_, 0);
lean_dec(v_unused_1761_);
v___x_1737_ = v_l_1114_;
v_isShared_1738_ = v_isSharedCheck_1758_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_v_1735_);
lean_inc(v_k_1734_);
lean_dec(v_l_1114_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1758_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v_k_1739_; lean_object* v_v_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1754_; 
v_k_1739_ = lean_ctor_get(v_r_1733_, 1);
v_v_1740_ = lean_ctor_get(v_r_1733_, 2);
v_isSharedCheck_1754_ = !lean_is_exclusive(v_r_1733_);
if (v_isSharedCheck_1754_ == 0)
{
lean_object* v_unused_1755_; lean_object* v_unused_1756_; lean_object* v_unused_1757_; 
v_unused_1755_ = lean_ctor_get(v_r_1733_, 4);
lean_dec(v_unused_1755_);
v_unused_1756_ = lean_ctor_get(v_r_1733_, 3);
lean_dec(v_unused_1756_);
v_unused_1757_ = lean_ctor_get(v_r_1733_, 0);
lean_dec(v_unused_1757_);
v___x_1742_ = v_r_1733_;
v_isShared_1743_ = v_isSharedCheck_1754_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_v_1740_);
lean_inc(v_k_1739_);
lean_dec(v_r_1733_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1754_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1744_; lean_object* v___x_1746_; 
v___x_1744_ = lean_unsigned_to_nat(3u);
if (v_isShared_1743_ == 0)
{
lean_ctor_set(v___x_1742_, 4, v_l_1697_);
lean_ctor_set(v___x_1742_, 3, v_l_1697_);
lean_ctor_set(v___x_1742_, 2, v_v_1735_);
lean_ctor_set(v___x_1742_, 1, v_k_1734_);
lean_ctor_set(v___x_1742_, 0, v___x_1606_);
v___x_1746_ = v___x_1742_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1753_; 
v_reuseFailAlloc_1753_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1753_, 0, v___x_1606_);
lean_ctor_set(v_reuseFailAlloc_1753_, 1, v_k_1734_);
lean_ctor_set(v_reuseFailAlloc_1753_, 2, v_v_1735_);
lean_ctor_set(v_reuseFailAlloc_1753_, 3, v_l_1697_);
lean_ctor_set(v_reuseFailAlloc_1753_, 4, v_l_1697_);
v___x_1746_ = v_reuseFailAlloc_1753_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
lean_object* v___x_1748_; 
if (v_isShared_1738_ == 0)
{
lean_ctor_set(v___x_1737_, 4, v_l_1697_);
lean_ctor_set(v___x_1737_, 2, v_v_1113_);
lean_ctor_set(v___x_1737_, 1, v_k_1112_);
lean_ctor_set(v___x_1737_, 0, v___x_1606_);
v___x_1748_ = v___x_1737_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v___x_1606_);
lean_ctor_set(v_reuseFailAlloc_1752_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1752_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1752_, 3, v_l_1697_);
lean_ctor_set(v_reuseFailAlloc_1752_, 4, v_l_1697_);
v___x_1748_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
lean_object* v___x_1750_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v___x_1748_);
lean_ctor_set(v___x_1117_, 3, v___x_1746_);
lean_ctor_set(v___x_1117_, 2, v_v_1740_);
lean_ctor_set(v___x_1117_, 1, v_k_1739_);
lean_ctor_set(v___x_1117_, 0, v___x_1744_);
v___x_1750_ = v___x_1117_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1744_);
lean_ctor_set(v_reuseFailAlloc_1751_, 1, v_k_1739_);
lean_ctor_set(v_reuseFailAlloc_1751_, 2, v_v_1740_);
lean_ctor_set(v_reuseFailAlloc_1751_, 3, v___x_1746_);
lean_ctor_set(v_reuseFailAlloc_1751_, 4, v___x_1748_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
}
}
}
else
{
lean_object* v___x_1762_; lean_object* v___x_1764_; 
v___x_1762_ = lean_unsigned_to_nat(2u);
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v_r_1733_);
lean_ctor_set(v___x_1117_, 0, v___x_1762_);
v___x_1764_ = v___x_1117_;
goto v_reusejp_1763_;
}
else
{
lean_object* v_reuseFailAlloc_1765_; 
v_reuseFailAlloc_1765_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1765_, 0, v___x_1762_);
lean_ctor_set(v_reuseFailAlloc_1765_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1765_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1765_, 3, v_l_1114_);
lean_ctor_set(v_reuseFailAlloc_1765_, 4, v_r_1733_);
v___x_1764_ = v_reuseFailAlloc_1765_;
goto v_reusejp_1763_;
}
v_reusejp_1763_:
{
return v___x_1764_;
}
}
}
}
else
{
lean_object* v___x_1767_; 
if (v_isShared_1118_ == 0)
{
lean_ctor_set(v___x_1117_, 4, v_l_1114_);
lean_ctor_set(v___x_1117_, 0, v___x_1606_);
v___x_1767_ = v___x_1117_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v___x_1606_);
lean_ctor_set(v_reuseFailAlloc_1768_, 1, v_k_1112_);
lean_ctor_set(v_reuseFailAlloc_1768_, 2, v_v_1113_);
lean_ctor_set(v_reuseFailAlloc_1768_, 3, v_l_1114_);
lean_ctor_set(v_reuseFailAlloc_1768_, 4, v_l_1114_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
}
}
}
else
{
return v_t_1111_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg___boxed(lean_object* v_k_1771_, lean_object* v_t_1772_){
_start:
{
lean_object* v_res_1773_; 
v_res_1773_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(v_k_1771_, v_t_1772_);
lean_dec_ref(v_k_1771_);
return v_res_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0(lean_object* v_val_1774_, lean_object* v_s_1775_){
_start:
{
lean_object* v_toRing_1776_; lean_object* v_invFn_x3f_1777_; lean_object* v_semiringId_x3f_1778_; lean_object* v_commSemiringInst_1779_; lean_object* v_commRingInst_1780_; lean_object* v_noZeroDivInst_x3f_1781_; lean_object* v_fieldInst_x3f_1782_; lean_object* v_powIdentityInst_x3f_1783_; lean_object* v_denoteEntries_1784_; lean_object* v_nextId_1785_; lean_object* v_steps_1786_; lean_object* v_queue_1787_; lean_object* v_basis_1788_; lean_object* v_diseqs_1789_; uint8_t v_recheck_1790_; lean_object* v_invSet_1791_; lean_object* v_powIdentityVarCount_1792_; lean_object* v_numEq0_x3f_1793_; uint8_t v_numEq0Updated_1794_; lean_object* v___x_1796_; uint8_t v_isShared_1797_; uint8_t v_isSharedCheck_1802_; 
v_toRing_1776_ = lean_ctor_get(v_s_1775_, 0);
v_invFn_x3f_1777_ = lean_ctor_get(v_s_1775_, 1);
v_semiringId_x3f_1778_ = lean_ctor_get(v_s_1775_, 2);
v_commSemiringInst_1779_ = lean_ctor_get(v_s_1775_, 3);
v_commRingInst_1780_ = lean_ctor_get(v_s_1775_, 4);
v_noZeroDivInst_x3f_1781_ = lean_ctor_get(v_s_1775_, 5);
v_fieldInst_x3f_1782_ = lean_ctor_get(v_s_1775_, 6);
v_powIdentityInst_x3f_1783_ = lean_ctor_get(v_s_1775_, 7);
v_denoteEntries_1784_ = lean_ctor_get(v_s_1775_, 8);
v_nextId_1785_ = lean_ctor_get(v_s_1775_, 9);
v_steps_1786_ = lean_ctor_get(v_s_1775_, 10);
v_queue_1787_ = lean_ctor_get(v_s_1775_, 11);
v_basis_1788_ = lean_ctor_get(v_s_1775_, 12);
v_diseqs_1789_ = lean_ctor_get(v_s_1775_, 13);
v_recheck_1790_ = lean_ctor_get_uint8(v_s_1775_, sizeof(void*)*17);
v_invSet_1791_ = lean_ctor_get(v_s_1775_, 14);
v_powIdentityVarCount_1792_ = lean_ctor_get(v_s_1775_, 15);
v_numEq0_x3f_1793_ = lean_ctor_get(v_s_1775_, 16);
v_numEq0Updated_1794_ = lean_ctor_get_uint8(v_s_1775_, sizeof(void*)*17 + 1);
v_isSharedCheck_1802_ = !lean_is_exclusive(v_s_1775_);
if (v_isSharedCheck_1802_ == 0)
{
v___x_1796_ = v_s_1775_;
v_isShared_1797_ = v_isSharedCheck_1802_;
goto v_resetjp_1795_;
}
else
{
lean_inc(v_numEq0_x3f_1793_);
lean_inc(v_powIdentityVarCount_1792_);
lean_inc(v_invSet_1791_);
lean_inc(v_diseqs_1789_);
lean_inc(v_basis_1788_);
lean_inc(v_queue_1787_);
lean_inc(v_steps_1786_);
lean_inc(v_nextId_1785_);
lean_inc(v_denoteEntries_1784_);
lean_inc(v_powIdentityInst_x3f_1783_);
lean_inc(v_fieldInst_x3f_1782_);
lean_inc(v_noZeroDivInst_x3f_1781_);
lean_inc(v_commRingInst_1780_);
lean_inc(v_commSemiringInst_1779_);
lean_inc(v_semiringId_x3f_1778_);
lean_inc(v_invFn_x3f_1777_);
lean_inc(v_toRing_1776_);
lean_dec(v_s_1775_);
v___x_1796_ = lean_box(0);
v_isShared_1797_ = v_isSharedCheck_1802_;
goto v_resetjp_1795_;
}
v_resetjp_1795_:
{
lean_object* v___x_1798_; lean_object* v___x_1800_; 
v___x_1798_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(v_val_1774_, v_queue_1787_);
if (v_isShared_1797_ == 0)
{
lean_ctor_set(v___x_1796_, 11, v___x_1798_);
v___x_1800_ = v___x_1796_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1801_; 
v_reuseFailAlloc_1801_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_1801_, 0, v_toRing_1776_);
lean_ctor_set(v_reuseFailAlloc_1801_, 1, v_invFn_x3f_1777_);
lean_ctor_set(v_reuseFailAlloc_1801_, 2, v_semiringId_x3f_1778_);
lean_ctor_set(v_reuseFailAlloc_1801_, 3, v_commSemiringInst_1779_);
lean_ctor_set(v_reuseFailAlloc_1801_, 4, v_commRingInst_1780_);
lean_ctor_set(v_reuseFailAlloc_1801_, 5, v_noZeroDivInst_x3f_1781_);
lean_ctor_set(v_reuseFailAlloc_1801_, 6, v_fieldInst_x3f_1782_);
lean_ctor_set(v_reuseFailAlloc_1801_, 7, v_powIdentityInst_x3f_1783_);
lean_ctor_set(v_reuseFailAlloc_1801_, 8, v_denoteEntries_1784_);
lean_ctor_set(v_reuseFailAlloc_1801_, 9, v_nextId_1785_);
lean_ctor_set(v_reuseFailAlloc_1801_, 10, v_steps_1786_);
lean_ctor_set(v_reuseFailAlloc_1801_, 11, v___x_1798_);
lean_ctor_set(v_reuseFailAlloc_1801_, 12, v_basis_1788_);
lean_ctor_set(v_reuseFailAlloc_1801_, 13, v_diseqs_1789_);
lean_ctor_set(v_reuseFailAlloc_1801_, 14, v_invSet_1791_);
lean_ctor_set(v_reuseFailAlloc_1801_, 15, v_powIdentityVarCount_1792_);
lean_ctor_set(v_reuseFailAlloc_1801_, 16, v_numEq0_x3f_1793_);
lean_ctor_set_uint8(v_reuseFailAlloc_1801_, sizeof(void*)*17, v_recheck_1790_);
lean_ctor_set_uint8(v_reuseFailAlloc_1801_, sizeof(void*)*17 + 1, v_numEq0Updated_1794_);
v___x_1800_ = v_reuseFailAlloc_1801_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
return v___x_1800_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0___boxed(lean_object* v_val_1803_, lean_object* v_s_1804_){
_start:
{
lean_object* v_res_1805_; 
v_res_1805_ = l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0(v_val_1803_, v_s_1804_);
lean_dec_ref(v_val_1803_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f(lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_){
_start:
{
lean_object* v___x_1818_; 
v___x_1818_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1858_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1858_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1821_ = v___x_1818_;
v_isShared_1822_ = v_isSharedCheck_1858_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_a_1819_);
lean_dec(v___x_1818_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1858_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v_queue_1823_; lean_object* v___x_1824_; 
v_queue_1823_ = lean_ctor_get(v_a_1819_, 11);
lean_inc(v_queue_1823_);
lean_dec(v_a_1819_);
v___x_1824_ = l_Std_DTreeMap_Internal_Impl_minKey_x3f___redArg(v_queue_1823_);
lean_dec(v_queue_1823_);
if (lean_obj_tag(v___x_1824_) == 1)
{
lean_object* v_val_1825_; lean_object* v___f_1826_; lean_object* v___x_1827_; 
lean_del_object(v___x_1821_);
v_val_1825_ = lean_ctor_get(v___x_1824_, 0);
lean_inc(v_val_1825_);
v___f_1826_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1826_, 0, v_val_1825_);
v___x_1827_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_1826_, v_a_1806_, v_a_1807_, v_a_1816_);
if (lean_obj_tag(v___x_1827_) == 0)
{
lean_object* v___x_1828_; lean_object* v___x_1829_; 
lean_dec_ref(v___x_1827_);
v___x_1828_ = lean_unsigned_to_nat(1u);
v___x_1829_ = l_Lean_Meta_Grind_Arith_CommRing_incSteps___redArg(v___x_1828_, v_a_1807_, v_a_1816_);
if (lean_obj_tag(v___x_1829_) == 0)
{
lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1836_ == 0)
{
lean_object* v_unused_1837_; 
v_unused_1837_ = lean_ctor_get(v___x_1829_, 0);
lean_dec(v_unused_1837_);
v___x_1831_ = v___x_1829_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_dec(v___x_1829_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1824_);
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v___x_1824_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
else
{
lean_object* v_a_1838_; lean_object* v___x_1840_; uint8_t v_isShared_1841_; uint8_t v_isSharedCheck_1845_; 
lean_dec_ref(v___x_1824_);
v_a_1838_ = lean_ctor_get(v___x_1829_, 0);
v_isSharedCheck_1845_ = !lean_is_exclusive(v___x_1829_);
if (v_isSharedCheck_1845_ == 0)
{
v___x_1840_ = v___x_1829_;
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
else
{
lean_inc(v_a_1838_);
lean_dec(v___x_1829_);
v___x_1840_ = lean_box(0);
v_isShared_1841_ = v_isSharedCheck_1845_;
goto v_resetjp_1839_;
}
v_resetjp_1839_:
{
lean_object* v___x_1843_; 
if (v_isShared_1841_ == 0)
{
v___x_1843_ = v___x_1840_;
goto v_reusejp_1842_;
}
else
{
lean_object* v_reuseFailAlloc_1844_; 
v_reuseFailAlloc_1844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1844_, 0, v_a_1838_);
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
else
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1853_; 
lean_dec_ref(v___x_1824_);
v_a_1846_ = lean_ctor_get(v___x_1827_, 0);
v_isSharedCheck_1853_ = !lean_is_exclusive(v___x_1827_);
if (v_isSharedCheck_1853_ == 0)
{
v___x_1848_ = v___x_1827_;
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1827_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1853_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
lean_object* v___x_1851_; 
if (v_isShared_1849_ == 0)
{
v___x_1851_ = v___x_1848_;
goto v_reusejp_1850_;
}
else
{
lean_object* v_reuseFailAlloc_1852_; 
v_reuseFailAlloc_1852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1852_, 0, v_a_1846_);
v___x_1851_ = v_reuseFailAlloc_1852_;
goto v_reusejp_1850_;
}
v_reusejp_1850_:
{
return v___x_1851_;
}
}
}
}
else
{
lean_object* v___x_1854_; lean_object* v___x_1856_; 
lean_dec(v___x_1824_);
v___x_1854_ = lean_box(0);
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 0, v___x_1854_);
v___x_1856_ = v___x_1821_;
goto v_reusejp_1855_;
}
else
{
lean_object* v_reuseFailAlloc_1857_; 
v_reuseFailAlloc_1857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1857_, 0, v___x_1854_);
v___x_1856_ = v_reuseFailAlloc_1857_;
goto v_reusejp_1855_;
}
v_reusejp_1855_:
{
return v___x_1856_;
}
}
}
}
else
{
lean_object* v_a_1859_; lean_object* v___x_1861_; uint8_t v_isShared_1862_; uint8_t v_isSharedCheck_1866_; 
v_a_1859_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1866_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1866_ == 0)
{
v___x_1861_ = v___x_1818_;
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
else
{
lean_inc(v_a_1859_);
lean_dec(v___x_1818_);
v___x_1861_ = lean_box(0);
v_isShared_1862_ = v_isSharedCheck_1866_;
goto v_resetjp_1860_;
}
v_resetjp_1860_:
{
lean_object* v___x_1864_; 
if (v_isShared_1862_ == 0)
{
v___x_1864_ = v___x_1861_;
goto v_reusejp_1863_;
}
else
{
lean_object* v_reuseFailAlloc_1865_; 
v_reuseFailAlloc_1865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1865_, 0, v_a_1859_);
v___x_1864_ = v_reuseFailAlloc_1865_;
goto v_reusejp_1863_;
}
v_reusejp_1863_:
{
return v___x_1864_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f___boxed(lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lean_Meta_Grind_Arith_CommRing_getNext_x3f(v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_);
lean_dec(v_a_1877_);
lean_dec_ref(v_a_1876_);
lean_dec(v_a_1875_);
lean_dec_ref(v_a_1874_);
lean_dec(v_a_1873_);
lean_dec_ref(v_a_1872_);
lean_dec(v_a_1871_);
lean_dec_ref(v_a_1870_);
lean_dec(v_a_1869_);
lean_dec(v_a_1868_);
lean_dec_ref(v_a_1867_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0(lean_object* v_00_u03b2_1880_, lean_object* v_k_1881_, lean_object* v_t_1882_, lean_object* v_h_1883_){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___redArg(v_k_1881_, v_t_1882_);
return v___x_1884_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0___boxed(lean_object* v_00_u03b2_1885_, lean_object* v_k_1886_, lean_object* v_t_1887_, lean_object* v_h_1888_){
_start:
{
lean_object* v_res_1889_; 
v_res_1889_ = l_Std_DTreeMap_Internal_Impl_erase___at___00Lean_Meta_Grind_Arith_CommRing_getNext_x3f_spec__0(v_00_u03b2_1885_, v_k_1886_, v_t_1887_, v_h_1888_);
lean_dec_ref(v_k_1886_);
return v_res_1889_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_1890_, lean_object* v_x_1891_, lean_object* v_x_1892_, lean_object* v_x_1893_){
_start:
{
lean_object* v_ks_1894_; lean_object* v_vs_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1919_; 
v_ks_1894_ = lean_ctor_get(v_x_1890_, 0);
v_vs_1895_ = lean_ctor_get(v_x_1890_, 1);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_x_1890_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1897_ = v_x_1890_;
v_isShared_1898_ = v_isSharedCheck_1919_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_vs_1895_);
lean_inc(v_ks_1894_);
lean_dec(v_x_1890_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1919_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1899_; uint8_t v___x_1900_; 
v___x_1899_ = lean_array_get_size(v_ks_1894_);
v___x_1900_ = lean_nat_dec_lt(v_x_1891_, v___x_1899_);
if (v___x_1900_ == 0)
{
lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1904_; 
lean_dec(v_x_1891_);
v___x_1901_ = lean_array_push(v_ks_1894_, v_x_1892_);
v___x_1902_ = lean_array_push(v_vs_1895_, v_x_1893_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 1, v___x_1902_);
lean_ctor_set(v___x_1897_, 0, v___x_1901_);
v___x_1904_ = v___x_1897_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v___x_1901_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v___x_1902_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
else
{
lean_object* v_k_x27_1906_; uint8_t v___x_1907_; 
v_k_x27_1906_ = lean_array_fget_borrowed(v_ks_1894_, v_x_1891_);
v___x_1907_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_1892_, v_k_x27_1906_);
if (v___x_1907_ == 0)
{
lean_object* v___x_1909_; 
if (v_isShared_1898_ == 0)
{
v___x_1909_ = v___x_1897_;
goto v_reusejp_1908_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_ks_1894_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v_vs_1895_);
v___x_1909_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1908_;
}
v_reusejp_1908_:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = lean_unsigned_to_nat(1u);
v___x_1911_ = lean_nat_add(v_x_1891_, v___x_1910_);
lean_dec(v_x_1891_);
v_x_1890_ = v___x_1909_;
v_x_1891_ = v___x_1911_;
goto _start;
}
}
else
{
lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1917_; 
v___x_1914_ = lean_array_fset(v_ks_1894_, v_x_1891_, v_x_1892_);
v___x_1915_ = lean_array_fset(v_vs_1895_, v_x_1891_, v_x_1893_);
lean_dec(v_x_1891_);
if (v_isShared_1898_ == 0)
{
lean_ctor_set(v___x_1897_, 1, v___x_1915_);
lean_ctor_set(v___x_1897_, 0, v___x_1914_);
v___x_1917_ = v___x_1897_;
goto v_reusejp_1916_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1914_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v___x_1915_);
v___x_1917_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1916_;
}
v_reusejp_1916_:
{
return v___x_1917_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1___redArg(lean_object* v_n_1920_, lean_object* v_k_1921_, lean_object* v_v_1922_){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; 
v___x_1923_ = lean_unsigned_to_nat(0u);
v___x_1924_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1920_, v___x_1923_, v_k_1921_, v_v_1922_);
return v___x_1924_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1925_; 
v___x_1925_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1925_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(lean_object* v_x_1926_, size_t v_x_1927_, size_t v_x_1928_, lean_object* v_x_1929_, lean_object* v_x_1930_){
_start:
{
if (lean_obj_tag(v_x_1926_) == 0)
{
lean_object* v_es_1931_; size_t v___x_1932_; size_t v___x_1933_; size_t v___x_1934_; size_t v___x_1935_; lean_object* v_j_1936_; lean_object* v___x_1937_; uint8_t v___x_1938_; 
v_es_1931_ = lean_ctor_get(v_x_1926_, 0);
v___x_1932_ = ((size_t)5ULL);
v___x_1933_ = ((size_t)1ULL);
v___x_1934_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0_spec__0___redArg___closed__1);
v___x_1935_ = lean_usize_land(v_x_1927_, v___x_1934_);
v_j_1936_ = lean_usize_to_nat(v___x_1935_);
v___x_1937_ = lean_array_get_size(v_es_1931_);
v___x_1938_ = lean_nat_dec_lt(v_j_1936_, v___x_1937_);
if (v___x_1938_ == 0)
{
lean_dec(v_j_1936_);
lean_dec(v_x_1930_);
lean_dec_ref(v_x_1929_);
return v_x_1926_;
}
else
{
lean_object* v___x_1940_; uint8_t v_isShared_1941_; uint8_t v_isSharedCheck_1975_; 
lean_inc_ref(v_es_1931_);
v_isSharedCheck_1975_ = !lean_is_exclusive(v_x_1926_);
if (v_isSharedCheck_1975_ == 0)
{
lean_object* v_unused_1976_; 
v_unused_1976_ = lean_ctor_get(v_x_1926_, 0);
lean_dec(v_unused_1976_);
v___x_1940_ = v_x_1926_;
v_isShared_1941_ = v_isSharedCheck_1975_;
goto v_resetjp_1939_;
}
else
{
lean_dec(v_x_1926_);
v___x_1940_ = lean_box(0);
v_isShared_1941_ = v_isSharedCheck_1975_;
goto v_resetjp_1939_;
}
v_resetjp_1939_:
{
lean_object* v_v_1942_; lean_object* v___x_1943_; lean_object* v_xs_x27_1944_; lean_object* v___y_1946_; 
v_v_1942_ = lean_array_fget(v_es_1931_, v_j_1936_);
v___x_1943_ = lean_box(0);
v_xs_x27_1944_ = lean_array_fset(v_es_1931_, v_j_1936_, v___x_1943_);
switch(lean_obj_tag(v_v_1942_))
{
case 0:
{
lean_object* v_key_1951_; lean_object* v_val_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1962_; 
v_key_1951_ = lean_ctor_get(v_v_1942_, 0);
v_val_1952_ = lean_ctor_get(v_v_1942_, 1);
v_isSharedCheck_1962_ = !lean_is_exclusive(v_v_1942_);
if (v_isSharedCheck_1962_ == 0)
{
v___x_1954_ = v_v_1942_;
v_isShared_1955_ = v_isSharedCheck_1962_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_val_1952_);
lean_inc(v_key_1951_);
lean_dec(v_v_1942_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1962_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
uint8_t v___x_1956_; 
v___x_1956_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_1929_, v_key_1951_);
if (v___x_1956_ == 0)
{
lean_object* v___x_1957_; lean_object* v___x_1958_; 
lean_del_object(v___x_1954_);
v___x_1957_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1951_, v_val_1952_, v_x_1929_, v_x_1930_);
v___x_1958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1958_, 0, v___x_1957_);
v___y_1946_ = v___x_1958_;
goto v___jp_1945_;
}
else
{
lean_object* v___x_1960_; 
lean_dec(v_val_1952_);
lean_dec(v_key_1951_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 1, v_x_1930_);
lean_ctor_set(v___x_1954_, 0, v_x_1929_);
v___x_1960_ = v___x_1954_;
goto v_reusejp_1959_;
}
else
{
lean_object* v_reuseFailAlloc_1961_; 
v_reuseFailAlloc_1961_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1961_, 0, v_x_1929_);
lean_ctor_set(v_reuseFailAlloc_1961_, 1, v_x_1930_);
v___x_1960_ = v_reuseFailAlloc_1961_;
goto v_reusejp_1959_;
}
v_reusejp_1959_:
{
v___y_1946_ = v___x_1960_;
goto v___jp_1945_;
}
}
}
}
case 1:
{
lean_object* v_node_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1973_; 
v_node_1963_ = lean_ctor_get(v_v_1942_, 0);
v_isSharedCheck_1973_ = !lean_is_exclusive(v_v_1942_);
if (v_isSharedCheck_1973_ == 0)
{
v___x_1965_ = v_v_1942_;
v_isShared_1966_ = v_isSharedCheck_1973_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_node_1963_);
lean_dec(v_v_1942_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1973_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
size_t v___x_1967_; size_t v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1971_; 
v___x_1967_ = lean_usize_shift_right(v_x_1927_, v___x_1932_);
v___x_1968_ = lean_usize_add(v_x_1928_, v___x_1933_);
v___x_1969_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(v_node_1963_, v___x_1967_, v___x_1968_, v_x_1929_, v_x_1930_);
if (v_isShared_1966_ == 0)
{
lean_ctor_set(v___x_1965_, 0, v___x_1969_);
v___x_1971_ = v___x_1965_;
goto v_reusejp_1970_;
}
else
{
lean_object* v_reuseFailAlloc_1972_; 
v_reuseFailAlloc_1972_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1972_, 0, v___x_1969_);
v___x_1971_ = v_reuseFailAlloc_1972_;
goto v_reusejp_1970_;
}
v_reusejp_1970_:
{
v___y_1946_ = v___x_1971_;
goto v___jp_1945_;
}
}
}
default: 
{
lean_object* v___x_1974_; 
v___x_1974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1974_, 0, v_x_1929_);
lean_ctor_set(v___x_1974_, 1, v_x_1930_);
v___y_1946_ = v___x_1974_;
goto v___jp_1945_;
}
}
v___jp_1945_:
{
lean_object* v___x_1947_; lean_object* v___x_1949_; 
v___x_1947_ = lean_array_fset(v_xs_x27_1944_, v_j_1936_, v___y_1946_);
lean_dec(v_j_1936_);
if (v_isShared_1941_ == 0)
{
lean_ctor_set(v___x_1940_, 0, v___x_1947_);
v___x_1949_ = v___x_1940_;
goto v_reusejp_1948_;
}
else
{
lean_object* v_reuseFailAlloc_1950_; 
v_reuseFailAlloc_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1950_, 0, v___x_1947_);
v___x_1949_ = v_reuseFailAlloc_1950_;
goto v_reusejp_1948_;
}
v_reusejp_1948_:
{
return v___x_1949_;
}
}
}
}
}
else
{
lean_object* v_ks_1977_; lean_object* v_vs_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_1998_; 
v_ks_1977_ = lean_ctor_get(v_x_1926_, 0);
v_vs_1978_ = lean_ctor_get(v_x_1926_, 1);
v_isSharedCheck_1998_ = !lean_is_exclusive(v_x_1926_);
if (v_isSharedCheck_1998_ == 0)
{
v___x_1980_ = v_x_1926_;
v_isShared_1981_ = v_isSharedCheck_1998_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_vs_1978_);
lean_inc(v_ks_1977_);
lean_dec(v_x_1926_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_1998_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v___x_1983_; 
if (v_isShared_1981_ == 0)
{
v___x_1983_ = v___x_1980_;
goto v_reusejp_1982_;
}
else
{
lean_object* v_reuseFailAlloc_1997_; 
v_reuseFailAlloc_1997_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1997_, 0, v_ks_1977_);
lean_ctor_set(v_reuseFailAlloc_1997_, 1, v_vs_1978_);
v___x_1983_ = v_reuseFailAlloc_1997_;
goto v_reusejp_1982_;
}
v_reusejp_1982_:
{
lean_object* v_newNode_1984_; uint8_t v___y_1986_; size_t v___x_1992_; uint8_t v___x_1993_; 
v_newNode_1984_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1___redArg(v___x_1983_, v_x_1929_, v_x_1930_);
v___x_1992_ = ((size_t)7ULL);
v___x_1993_ = lean_usize_dec_le(v___x_1992_, v_x_1928_);
if (v___x_1993_ == 0)
{
lean_object* v___x_1994_; lean_object* v___x_1995_; uint8_t v___x_1996_; 
v___x_1994_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1984_);
v___x_1995_ = lean_unsigned_to_nat(4u);
v___x_1996_ = lean_nat_dec_lt(v___x_1994_, v___x_1995_);
lean_dec(v___x_1994_);
v___y_1986_ = v___x_1996_;
goto v___jp_1985_;
}
else
{
v___y_1986_ = v___x_1993_;
goto v___jp_1985_;
}
v___jp_1985_:
{
if (v___y_1986_ == 0)
{
lean_object* v_ks_1987_; lean_object* v_vs_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; 
v_ks_1987_ = lean_ctor_get(v_newNode_1984_, 0);
lean_inc_ref(v_ks_1987_);
v_vs_1988_ = lean_ctor_get(v_newNode_1984_, 1);
lean_inc_ref(v_vs_1988_);
lean_dec_ref(v_newNode_1984_);
v___x_1989_ = lean_unsigned_to_nat(0u);
v___x_1990_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___closed__0);
v___x_1991_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg(v_x_1928_, v_ks_1987_, v_vs_1988_, v___x_1989_, v___x_1990_);
lean_dec_ref(v_vs_1988_);
lean_dec_ref(v_ks_1987_);
return v___x_1991_;
}
else
{
return v_newNode_1984_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg(size_t v_depth_1999_, lean_object* v_keys_2000_, lean_object* v_vals_2001_, lean_object* v_i_2002_, lean_object* v_entries_2003_){
_start:
{
lean_object* v___x_2004_; uint8_t v___x_2005_; 
v___x_2004_ = lean_array_get_size(v_keys_2000_);
v___x_2005_ = lean_nat_dec_lt(v_i_2002_, v___x_2004_);
if (v___x_2005_ == 0)
{
lean_dec(v_i_2002_);
return v_entries_2003_;
}
else
{
lean_object* v_k_2006_; lean_object* v_v_2007_; uint64_t v___x_2008_; size_t v_h_2009_; size_t v___x_2010_; lean_object* v___x_2011_; size_t v___x_2012_; size_t v___x_2013_; size_t v___x_2014_; size_t v_h_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v_k_2006_ = lean_array_fget_borrowed(v_keys_2000_, v_i_2002_);
v_v_2007_ = lean_array_fget_borrowed(v_vals_2001_, v_i_2002_);
v___x_2008_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_k_2006_);
v_h_2009_ = lean_uint64_to_usize(v___x_2008_);
v___x_2010_ = ((size_t)5ULL);
v___x_2011_ = lean_unsigned_to_nat(1u);
v___x_2012_ = ((size_t)1ULL);
v___x_2013_ = lean_usize_sub(v_depth_1999_, v___x_2012_);
v___x_2014_ = lean_usize_mul(v___x_2010_, v___x_2013_);
v_h_2015_ = lean_usize_shift_right(v_h_2009_, v___x_2014_);
v___x_2016_ = lean_nat_add(v_i_2002_, v___x_2011_);
lean_dec(v_i_2002_);
lean_inc(v_v_2007_);
lean_inc(v_k_2006_);
v___x_2017_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(v_entries_2003_, v_h_2015_, v_depth_1999_, v_k_2006_, v_v_2007_);
v_i_2002_ = v___x_2016_;
v_entries_2003_ = v___x_2017_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_2019_, lean_object* v_keys_2020_, lean_object* v_vals_2021_, lean_object* v_i_2022_, lean_object* v_entries_2023_){
_start:
{
size_t v_depth_boxed_2024_; lean_object* v_res_2025_; 
v_depth_boxed_2024_ = lean_unbox_usize(v_depth_2019_);
lean_dec(v_depth_2019_);
v_res_2025_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg(v_depth_boxed_2024_, v_keys_2020_, v_vals_2021_, v_i_2022_, v_entries_2023_);
lean_dec_ref(v_vals_2021_);
lean_dec_ref(v_keys_2020_);
return v_res_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg___boxed(lean_object* v_x_2026_, lean_object* v_x_2027_, lean_object* v_x_2028_, lean_object* v_x_2029_, lean_object* v_x_2030_){
_start:
{
size_t v_x_7187__boxed_2031_; size_t v_x_7188__boxed_2032_; lean_object* v_res_2033_; 
v_x_7187__boxed_2031_ = lean_unbox_usize(v_x_2027_);
lean_dec(v_x_2027_);
v_x_7188__boxed_2032_ = lean_unbox_usize(v_x_2028_);
lean_dec(v_x_2028_);
v_res_2033_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(v_x_2026_, v_x_7187__boxed_2031_, v_x_7188__boxed_2032_, v_x_2029_, v_x_2030_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0___redArg(lean_object* v_x_2034_, lean_object* v_x_2035_, lean_object* v_x_2036_){
_start:
{
uint64_t v___x_2037_; size_t v___x_2038_; size_t v___x_2039_; lean_object* v___x_2040_; 
v___x_2037_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_2035_);
v___x_2038_ = lean_uint64_to_usize(v___x_2037_);
v___x_2039_ = ((size_t)1ULL);
v___x_2040_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(v_x_2034_, v___x_2038_, v___x_2039_, v_x_2035_, v_x_2036_);
return v___x_2040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___lam__0(lean_object* v_e_2041_, lean_object* v_ringId_2042_, lean_object* v_s_2043_){
_start:
{
lean_object* v_rings_2044_; lean_object* v_typeIdOf_2045_; lean_object* v_exprToRingId_2046_; lean_object* v_semirings_2047_; lean_object* v_stypeIdOf_2048_; lean_object* v_exprToSemiringId_2049_; lean_object* v_ncRings_2050_; lean_object* v_exprToNCRingId_2051_; lean_object* v_nctypeIdOf_2052_; lean_object* v_ncSemirings_2053_; lean_object* v_exprToNCSemiringId_2054_; lean_object* v_ncstypeIdOf_2055_; lean_object* v_steps_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2064_; 
v_rings_2044_ = lean_ctor_get(v_s_2043_, 0);
v_typeIdOf_2045_ = lean_ctor_get(v_s_2043_, 1);
v_exprToRingId_2046_ = lean_ctor_get(v_s_2043_, 2);
v_semirings_2047_ = lean_ctor_get(v_s_2043_, 3);
v_stypeIdOf_2048_ = lean_ctor_get(v_s_2043_, 4);
v_exprToSemiringId_2049_ = lean_ctor_get(v_s_2043_, 5);
v_ncRings_2050_ = lean_ctor_get(v_s_2043_, 6);
v_exprToNCRingId_2051_ = lean_ctor_get(v_s_2043_, 7);
v_nctypeIdOf_2052_ = lean_ctor_get(v_s_2043_, 8);
v_ncSemirings_2053_ = lean_ctor_get(v_s_2043_, 9);
v_exprToNCSemiringId_2054_ = lean_ctor_get(v_s_2043_, 10);
v_ncstypeIdOf_2055_ = lean_ctor_get(v_s_2043_, 11);
v_steps_2056_ = lean_ctor_get(v_s_2043_, 12);
v_isSharedCheck_2064_ = !lean_is_exclusive(v_s_2043_);
if (v_isSharedCheck_2064_ == 0)
{
v___x_2058_ = v_s_2043_;
v_isShared_2059_ = v_isSharedCheck_2064_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_steps_2056_);
lean_inc(v_ncstypeIdOf_2055_);
lean_inc(v_exprToNCSemiringId_2054_);
lean_inc(v_ncSemirings_2053_);
lean_inc(v_nctypeIdOf_2052_);
lean_inc(v_exprToNCRingId_2051_);
lean_inc(v_ncRings_2050_);
lean_inc(v_exprToSemiringId_2049_);
lean_inc(v_stypeIdOf_2048_);
lean_inc(v_semirings_2047_);
lean_inc(v_exprToRingId_2046_);
lean_inc(v_typeIdOf_2045_);
lean_inc(v_rings_2044_);
lean_dec(v_s_2043_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2064_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v___x_2060_; lean_object* v___x_2062_; 
v___x_2060_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0___redArg(v_exprToRingId_2046_, v_e_2041_, v_ringId_2042_);
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 2, v___x_2060_);
v___x_2062_ = v___x_2058_;
goto v_reusejp_2061_;
}
else
{
lean_object* v_reuseFailAlloc_2063_; 
v_reuseFailAlloc_2063_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_2063_, 0, v_rings_2044_);
lean_ctor_set(v_reuseFailAlloc_2063_, 1, v_typeIdOf_2045_);
lean_ctor_set(v_reuseFailAlloc_2063_, 2, v___x_2060_);
lean_ctor_set(v_reuseFailAlloc_2063_, 3, v_semirings_2047_);
lean_ctor_set(v_reuseFailAlloc_2063_, 4, v_stypeIdOf_2048_);
lean_ctor_set(v_reuseFailAlloc_2063_, 5, v_exprToSemiringId_2049_);
lean_ctor_set(v_reuseFailAlloc_2063_, 6, v_ncRings_2050_);
lean_ctor_set(v_reuseFailAlloc_2063_, 7, v_exprToNCRingId_2051_);
lean_ctor_set(v_reuseFailAlloc_2063_, 8, v_nctypeIdOf_2052_);
lean_ctor_set(v_reuseFailAlloc_2063_, 9, v_ncSemirings_2053_);
lean_ctor_set(v_reuseFailAlloc_2063_, 10, v_exprToNCSemiringId_2054_);
lean_ctor_set(v_reuseFailAlloc_2063_, 11, v_ncstypeIdOf_2055_);
lean_ctor_set(v_reuseFailAlloc_2063_, 12, v_steps_2056_);
v___x_2062_ = v_reuseFailAlloc_2063_;
goto v_reusejp_2061_;
}
v_reusejp_2061_:
{
return v___x_2062_;
}
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__0(void){
_start:
{
lean_object* v___x_2065_; 
v___x_2065_ = lean_mk_string_unchecked("expression in two different rings", 33, 33);
return v___x_2065_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1(void){
_start:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2066_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__0);
v___x_2067_ = l_Lean_stringToMessageData(v___x_2066_);
return v___x_2067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(lean_object* v_e_2068_, lean_object* v_a_2069_, lean_object* v_a_2070_, lean_object* v_a_2071_, lean_object* v_a_2072_, lean_object* v_a_2073_, lean_object* v_a_2074_, lean_object* v_a_2075_, lean_object* v_a_2076_){
_start:
{
lean_object* v___x_2081_; 
v___x_2081_ = l_Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f___redArg(v_e_2068_, v_a_2070_, v_a_2075_, v_a_2076_);
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_object* v_a_2082_; 
v_a_2082_ = lean_ctor_get(v___x_2081_, 0);
lean_inc(v_a_2082_);
lean_dec_ref(v___x_2081_);
if (lean_obj_tag(v_a_2082_) == 1)
{
lean_object* v_ringId_2083_; lean_object* v_val_2084_; uint8_t v___x_2085_; 
v_ringId_2083_ = lean_ctor_get(v_a_2069_, 0);
v_val_2084_ = lean_ctor_get(v_a_2082_, 0);
lean_inc(v_val_2084_);
lean_dec_ref(v_a_2082_);
v___x_2085_ = lean_nat_dec_eq(v_val_2084_, v_ringId_2083_);
lean_dec(v_val_2084_);
if (v___x_2085_ == 0)
{
lean_object* v___x_2086_; 
v___x_2086_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_2071_);
if (lean_obj_tag(v___x_2086_) == 0)
{
lean_object* v_a_2087_; uint8_t v___x_2088_; 
v_a_2087_ = lean_ctor_get(v___x_2086_, 0);
lean_inc(v_a_2087_);
lean_dec_ref(v___x_2086_);
v___x_2088_ = lean_unbox(v_a_2087_);
lean_dec(v_a_2087_);
if (v___x_2088_ == 0)
{
lean_dec_ref(v_e_2068_);
goto v___jp_2078_;
}
else
{
lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2089_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___closed__1);
v___x_2090_ = l_Lean_indentExpr(v_e_2068_);
v___x_2091_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2089_);
lean_ctor_set(v___x_2091_, 1, v___x_2090_);
v___x_2092_ = l_Lean_Meta_Sym_reportIssue(v___x_2091_, v_a_2071_, v_a_2072_, v_a_2073_, v_a_2074_, v_a_2075_, v_a_2076_);
if (lean_obj_tag(v___x_2092_) == 0)
{
lean_dec_ref(v___x_2092_);
goto v___jp_2078_;
}
else
{
return v___x_2092_;
}
}
}
else
{
lean_object* v_a_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2100_; 
lean_dec_ref(v_e_2068_);
v_a_2093_ = lean_ctor_get(v___x_2086_, 0);
v_isSharedCheck_2100_ = !lean_is_exclusive(v___x_2086_);
if (v_isSharedCheck_2100_ == 0)
{
v___x_2095_ = v___x_2086_;
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_a_2093_);
lean_dec(v___x_2086_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2100_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2098_; 
if (v_isShared_2096_ == 0)
{
v___x_2098_ = v___x_2095_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v_a_2093_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
return v___x_2098_;
}
}
}
}
else
{
lean_dec_ref(v_e_2068_);
goto v___jp_2078_;
}
}
else
{
lean_object* v_ringId_2101_; lean_object* v___f_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; 
lean_dec(v_a_2082_);
v_ringId_2101_ = lean_ctor_get(v_a_2069_, 0);
lean_inc(v_ringId_2101_);
v___f_2102_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2102_, 0, v_e_2068_);
lean_closure_set(v___f_2102_, 1, v_ringId_2101_);
v___x_2103_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_2104_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2103_, v___f_2102_, v_a_2070_, v_a_2076_);
return v___x_2104_;
}
}
else
{
lean_object* v_a_2105_; lean_object* v___x_2107_; uint8_t v_isShared_2108_; uint8_t v_isSharedCheck_2112_; 
lean_dec_ref(v_e_2068_);
v_a_2105_ = lean_ctor_get(v___x_2081_, 0);
v_isSharedCheck_2112_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2107_ = v___x_2081_;
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
else
{
lean_inc(v_a_2105_);
lean_dec(v___x_2081_);
v___x_2107_ = lean_box(0);
v_isShared_2108_ = v_isSharedCheck_2112_;
goto v_resetjp_2106_;
}
v_resetjp_2106_:
{
lean_object* v___x_2110_; 
if (v_isShared_2108_ == 0)
{
v___x_2110_ = v___x_2107_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v_a_2105_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
v___jp_2078_:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2079_ = lean_box(0);
v___x_2080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
return v___x_2080_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg___boxed(lean_object* v_e_2113_, lean_object* v_a_2114_, lean_object* v_a_2115_, lean_object* v_a_2116_, lean_object* v_a_2117_, lean_object* v_a_2118_, lean_object* v_a_2119_, lean_object* v_a_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_){
_start:
{
lean_object* v_res_2123_; 
v_res_2123_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(v_e_2113_, v_a_2114_, v_a_2115_, v_a_2116_, v_a_2117_, v_a_2118_, v_a_2119_, v_a_2120_, v_a_2121_);
lean_dec(v_a_2121_);
lean_dec_ref(v_a_2120_);
lean_dec(v_a_2119_);
lean_dec_ref(v_a_2118_);
lean_dec(v_a_2117_);
lean_dec_ref(v_a_2116_);
lean_dec(v_a_2115_);
lean_dec_ref(v_a_2114_);
return v_res_2123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId(lean_object* v_e_2124_, lean_object* v_a_2125_, lean_object* v_a_2126_, lean_object* v_a_2127_, lean_object* v_a_2128_, lean_object* v_a_2129_, lean_object* v_a_2130_, lean_object* v_a_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_){
_start:
{
lean_object* v___x_2137_; 
v___x_2137_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(v_e_2124_, v_a_2125_, v_a_2126_, v_a_2130_, v_a_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_);
return v___x_2137_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___boxed(lean_object* v_e_2138_, lean_object* v_a_2139_, lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_, lean_object* v_a_2149_, lean_object* v_a_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId(v_e_2138_, v_a_2139_, v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_, v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_, v_a_2148_, v_a_2149_);
lean_dec(v_a_2149_);
lean_dec_ref(v_a_2148_);
lean_dec(v_a_2147_);
lean_dec_ref(v_a_2146_);
lean_dec(v_a_2145_);
lean_dec_ref(v_a_2144_);
lean_dec(v_a_2143_);
lean_dec_ref(v_a_2142_);
lean_dec(v_a_2141_);
lean_dec(v_a_2140_);
lean_dec_ref(v_a_2139_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0(lean_object* v_00_u03b2_2152_, lean_object* v_x_2153_, lean_object* v_x_2154_, lean_object* v_x_2155_){
_start:
{
lean_object* v___x_2156_; 
v___x_2156_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0___redArg(v_x_2153_, v_x_2154_, v_x_2155_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0(lean_object* v_00_u03b2_2157_, lean_object* v_x_2158_, size_t v_x_2159_, size_t v_x_2160_, lean_object* v_x_2161_, lean_object* v_x_2162_){
_start:
{
lean_object* v___x_2163_; 
v___x_2163_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___redArg(v_x_2158_, v_x_2159_, v_x_2160_, v_x_2161_, v_x_2162_);
return v___x_2163_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2164_, lean_object* v_x_2165_, lean_object* v_x_2166_, lean_object* v_x_2167_, lean_object* v_x_2168_, lean_object* v_x_2169_){
_start:
{
size_t v_x_7466__boxed_2170_; size_t v_x_7467__boxed_2171_; lean_object* v_res_2172_; 
v_x_7466__boxed_2170_ = lean_unbox_usize(v_x_2166_);
lean_dec(v_x_2166_);
v_x_7467__boxed_2171_ = lean_unbox_usize(v_x_2167_);
lean_dec(v_x_2167_);
v_res_2172_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0(v_00_u03b2_2164_, v_x_2165_, v_x_7466__boxed_2170_, v_x_7467__boxed_2171_, v_x_2168_, v_x_2169_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2173_, lean_object* v_n_2174_, lean_object* v_k_2175_, lean_object* v_v_2176_){
_start:
{
lean_object* v___x_2177_; 
v___x_2177_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1___redArg(v_n_2174_, v_k_2175_, v_v_2176_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2178_, size_t v_depth_2179_, lean_object* v_keys_2180_, lean_object* v_vals_2181_, lean_object* v_heq_2182_, lean_object* v_i_2183_, lean_object* v_entries_2184_){
_start:
{
lean_object* v___x_2185_; 
v___x_2185_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___redArg(v_depth_2179_, v_keys_2180_, v_vals_2181_, v_i_2183_, v_entries_2184_);
return v___x_2185_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2186_, lean_object* v_depth_2187_, lean_object* v_keys_2188_, lean_object* v_vals_2189_, lean_object* v_heq_2190_, lean_object* v_i_2191_, lean_object* v_entries_2192_){
_start:
{
size_t v_depth_boxed_2193_; lean_object* v_res_2194_; 
v_depth_boxed_2193_ = lean_unbox_usize(v_depth_2187_);
lean_dec(v_depth_2187_);
v_res_2194_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__2(v_00_u03b2_2186_, v_depth_boxed_2193_, v_keys_2188_, v_vals_2189_, v_heq_2190_, v_i_2191_, v_entries_2192_);
lean_dec_ref(v_vals_2189_);
lean_dec_ref(v_keys_2188_);
return v_res_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_2195_, lean_object* v_x_2196_, lean_object* v_x_2197_, lean_object* v_x_2198_, lean_object* v_x_2199_){
_start:
{
lean_object* v___x_2200_; 
v___x_2200_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0_spec__0_spec__1_spec__2___redArg(v_x_2196_, v_x_2197_, v_x_2198_, v_x_2199_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__0(lean_object* v_e_2201_, lean_object* v___f_2202_, lean_object* v___f_2203_, lean_object* v_size_2204_, lean_object* v_s_2205_){
_start:
{
lean_object* v_id_2206_; lean_object* v_type_2207_; lean_object* v_u_2208_; lean_object* v_ringInst_2209_; lean_object* v_semiringInst_2210_; lean_object* v_charInst_x3f_2211_; lean_object* v_addFn_x3f_2212_; lean_object* v_mulFn_x3f_2213_; lean_object* v_subFn_x3f_2214_; lean_object* v_negFn_x3f_2215_; lean_object* v_powFn_x3f_2216_; lean_object* v_intCastFn_x3f_2217_; lean_object* v_natCastFn_x3f_2218_; lean_object* v_one_x3f_2219_; lean_object* v_vars_2220_; lean_object* v_varMap_2221_; lean_object* v_denote_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2231_; 
v_id_2206_ = lean_ctor_get(v_s_2205_, 0);
v_type_2207_ = lean_ctor_get(v_s_2205_, 1);
v_u_2208_ = lean_ctor_get(v_s_2205_, 2);
v_ringInst_2209_ = lean_ctor_get(v_s_2205_, 3);
v_semiringInst_2210_ = lean_ctor_get(v_s_2205_, 4);
v_charInst_x3f_2211_ = lean_ctor_get(v_s_2205_, 5);
v_addFn_x3f_2212_ = lean_ctor_get(v_s_2205_, 6);
v_mulFn_x3f_2213_ = lean_ctor_get(v_s_2205_, 7);
v_subFn_x3f_2214_ = lean_ctor_get(v_s_2205_, 8);
v_negFn_x3f_2215_ = lean_ctor_get(v_s_2205_, 9);
v_powFn_x3f_2216_ = lean_ctor_get(v_s_2205_, 10);
v_intCastFn_x3f_2217_ = lean_ctor_get(v_s_2205_, 11);
v_natCastFn_x3f_2218_ = lean_ctor_get(v_s_2205_, 12);
v_one_x3f_2219_ = lean_ctor_get(v_s_2205_, 13);
v_vars_2220_ = lean_ctor_get(v_s_2205_, 14);
v_varMap_2221_ = lean_ctor_get(v_s_2205_, 15);
v_denote_2222_ = lean_ctor_get(v_s_2205_, 16);
v_isSharedCheck_2231_ = !lean_is_exclusive(v_s_2205_);
if (v_isSharedCheck_2231_ == 0)
{
v___x_2224_ = v_s_2205_;
v_isShared_2225_ = v_isSharedCheck_2231_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_denote_2222_);
lean_inc(v_varMap_2221_);
lean_inc(v_vars_2220_);
lean_inc(v_one_x3f_2219_);
lean_inc(v_natCastFn_x3f_2218_);
lean_inc(v_intCastFn_x3f_2217_);
lean_inc(v_powFn_x3f_2216_);
lean_inc(v_negFn_x3f_2215_);
lean_inc(v_subFn_x3f_2214_);
lean_inc(v_mulFn_x3f_2213_);
lean_inc(v_addFn_x3f_2212_);
lean_inc(v_charInst_x3f_2211_);
lean_inc(v_semiringInst_2210_);
lean_inc(v_ringInst_2209_);
lean_inc(v_u_2208_);
lean_inc(v_type_2207_);
lean_inc(v_id_2206_);
lean_dec(v_s_2205_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2231_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2229_; 
lean_inc_ref(v_e_2201_);
v___x_2226_ = l_Lean_PersistentArray_push___redArg(v_vars_2220_, v_e_2201_);
v___x_2227_ = l_Lean_PersistentHashMap_insert___redArg(v___f_2202_, v___f_2203_, v_varMap_2221_, v_e_2201_, v_size_2204_);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 15, v___x_2227_);
lean_ctor_set(v___x_2224_, 14, v___x_2226_);
v___x_2229_ = v___x_2224_;
goto v_reusejp_2228_;
}
else
{
lean_object* v_reuseFailAlloc_2230_; 
v_reuseFailAlloc_2230_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2230_, 0, v_id_2206_);
lean_ctor_set(v_reuseFailAlloc_2230_, 1, v_type_2207_);
lean_ctor_set(v_reuseFailAlloc_2230_, 2, v_u_2208_);
lean_ctor_set(v_reuseFailAlloc_2230_, 3, v_ringInst_2209_);
lean_ctor_set(v_reuseFailAlloc_2230_, 4, v_semiringInst_2210_);
lean_ctor_set(v_reuseFailAlloc_2230_, 5, v_charInst_x3f_2211_);
lean_ctor_set(v_reuseFailAlloc_2230_, 6, v_addFn_x3f_2212_);
lean_ctor_set(v_reuseFailAlloc_2230_, 7, v_mulFn_x3f_2213_);
lean_ctor_set(v_reuseFailAlloc_2230_, 8, v_subFn_x3f_2214_);
lean_ctor_set(v_reuseFailAlloc_2230_, 9, v_negFn_x3f_2215_);
lean_ctor_set(v_reuseFailAlloc_2230_, 10, v_powFn_x3f_2216_);
lean_ctor_set(v_reuseFailAlloc_2230_, 11, v_intCastFn_x3f_2217_);
lean_ctor_set(v_reuseFailAlloc_2230_, 12, v_natCastFn_x3f_2218_);
lean_ctor_set(v_reuseFailAlloc_2230_, 13, v_one_x3f_2219_);
lean_ctor_set(v_reuseFailAlloc_2230_, 14, v___x_2226_);
lean_ctor_set(v_reuseFailAlloc_2230_, 15, v___x_2227_);
lean_ctor_set(v_reuseFailAlloc_2230_, 16, v_denote_2222_);
v___x_2229_ = v_reuseFailAlloc_2230_;
goto v_reusejp_2228_;
}
v_reusejp_2228_:
{
return v___x_2229_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__1(lean_object* v_toPure_2232_, lean_object* v_size_2233_, lean_object* v_____r_2234_){
_start:
{
lean_object* v___x_2235_; 
v___x_2235_ = lean_apply_2(v_toPure_2232_, lean_box(0), v_size_2233_);
return v___x_2235_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__2(lean_object* v_e_2236_, lean_object* v_inst_2237_, lean_object* v_toBind_2238_, lean_object* v___f_2239_, lean_object* v_____r_2240_){
_start:
{
lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2241_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_2242_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_SolverExtension_markTerm___boxed), 14, 3);
lean_closure_set(v___x_2242_, 0, lean_box(0));
lean_closure_set(v___x_2242_, 1, v___x_2241_);
lean_closure_set(v___x_2242_, 2, v_e_2236_);
v___x_2243_ = lean_apply_2(v_inst_2237_, lean_box(0), v___x_2242_);
v___x_2244_ = lean_apply_4(v_toBind_2238_, lean_box(0), lean_box(0), v___x_2243_, v___f_2239_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__3(lean_object* v_inst_2245_, lean_object* v_e_2246_, lean_object* v_toBind_2247_, lean_object* v___f_2248_, lean_object* v_____r_2249_){
_start:
{
lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2250_ = lean_apply_1(v_inst_2245_, v_e_2246_);
v___x_2251_ = lean_apply_4(v_toBind_2247_, lean_box(0), lean_box(0), v___x_2250_, v___f_2248_);
return v___x_2251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__4(lean_object* v___f_2252_, lean_object* v___f_2253_, lean_object* v_e_2254_, lean_object* v_toPure_2255_, lean_object* v_inst_2256_, lean_object* v_toBind_2257_, lean_object* v_inst_2258_, lean_object* v_modifyRing_2259_, lean_object* v_s_2260_){
_start:
{
lean_object* v_vars_2261_; lean_object* v_varMap_2262_; lean_object* v___x_2263_; 
v_vars_2261_ = lean_ctor_get(v_s_2260_, 14);
lean_inc_ref(v_vars_2261_);
v_varMap_2262_ = lean_ctor_get(v_s_2260_, 15);
lean_inc_ref(v_varMap_2262_);
lean_dec_ref(v_s_2260_);
lean_inc_ref(v_e_2254_);
lean_inc_ref(v___f_2253_);
lean_inc_ref(v___f_2252_);
v___x_2263_ = l_Lean_PersistentHashMap_find_x3f___redArg(v___f_2252_, v___f_2253_, v_varMap_2262_, v_e_2254_);
lean_dec_ref(v_varMap_2262_);
if (lean_obj_tag(v___x_2263_) == 1)
{
lean_object* v_val_2264_; lean_object* v___x_2265_; 
lean_dec_ref(v_vars_2261_);
lean_dec(v_modifyRing_2259_);
lean_dec(v_inst_2258_);
lean_dec(v_toBind_2257_);
lean_dec(v_inst_2256_);
lean_dec_ref(v_e_2254_);
lean_dec_ref(v___f_2253_);
lean_dec_ref(v___f_2252_);
v_val_2264_ = lean_ctor_get(v___x_2263_, 0);
lean_inc(v_val_2264_);
lean_dec_ref(v___x_2263_);
v___x_2265_ = lean_apply_2(v_toPure_2255_, lean_box(0), v_val_2264_);
return v___x_2265_;
}
else
{
lean_object* v_size_2266_; lean_object* v___f_2267_; lean_object* v___f_2268_; lean_object* v___f_2269_; lean_object* v___f_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
lean_dec(v___x_2263_);
v_size_2266_ = lean_ctor_get(v_vars_2261_, 2);
lean_inc_n(v_size_2266_, 2);
lean_dec_ref(v_vars_2261_);
lean_inc_ref_n(v_e_2254_, 2);
v___f_2267_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__0), 5, 4);
lean_closure_set(v___f_2267_, 0, v_e_2254_);
lean_closure_set(v___f_2267_, 1, v___f_2252_);
lean_closure_set(v___f_2267_, 2, v___f_2253_);
lean_closure_set(v___f_2267_, 3, v_size_2266_);
v___f_2268_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2268_, 0, v_toPure_2255_);
lean_closure_set(v___f_2268_, 1, v_size_2266_);
lean_inc_n(v_toBind_2257_, 2);
v___f_2269_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__2), 5, 4);
lean_closure_set(v___f_2269_, 0, v_e_2254_);
lean_closure_set(v___f_2269_, 1, v_inst_2256_);
lean_closure_set(v___f_2269_, 2, v_toBind_2257_);
lean_closure_set(v___f_2269_, 3, v___f_2268_);
v___f_2270_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__3), 5, 4);
lean_closure_set(v___f_2270_, 0, v_inst_2258_);
lean_closure_set(v___f_2270_, 1, v_e_2254_);
lean_closure_set(v___f_2270_, 2, v_toBind_2257_);
lean_closure_set(v___f_2270_, 3, v___f_2269_);
v___x_2271_ = lean_apply_1(v_modifyRing_2259_, v___f_2267_);
v___x_2272_ = lean_apply_4(v_toBind_2257_, lean_box(0), lean_box(0), v___x_2271_, v___f_2270_);
return v___x_2272_;
}
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__0(void){
_start:
{
lean_object* v___f_2273_; 
v___f_2273_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1___boxed), 2, 0);
return v___f_2273_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__1(void){
_start:
{
lean_object* v___f_2274_; 
v___f_2274_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_hashPtrExpr_unsafe__1___boxed), 1, 0);
return v___f_2274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg(lean_object* v_inst_2275_, lean_object* v_inst_2276_, lean_object* v_inst_2277_, lean_object* v_inst_2278_, lean_object* v_e_2279_){
_start:
{
lean_object* v_toApplicative_2280_; lean_object* v_toBind_2281_; lean_object* v_getRing_2282_; lean_object* v_modifyRing_2283_; lean_object* v_toPure_2284_; lean_object* v___f_2285_; lean_object* v___f_2286_; lean_object* v___f_2287_; lean_object* v___x_2288_; 
v_toApplicative_2280_ = lean_ctor_get(v_inst_2276_, 0);
lean_inc_ref(v_toApplicative_2280_);
v_toBind_2281_ = lean_ctor_get(v_inst_2276_, 1);
lean_inc_n(v_toBind_2281_, 2);
lean_dec_ref(v_inst_2276_);
v_getRing_2282_ = lean_ctor_get(v_inst_2277_, 0);
lean_inc(v_getRing_2282_);
v_modifyRing_2283_ = lean_ctor_get(v_inst_2277_, 1);
lean_inc(v_modifyRing_2283_);
lean_dec_ref(v_inst_2277_);
v_toPure_2284_ = lean_ctor_get(v_toApplicative_2280_, 1);
lean_inc(v_toPure_2284_);
lean_dec_ref(v_toApplicative_2280_);
v___f_2285_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__0);
v___f_2286_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__1, &l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___closed__1);
v___f_2287_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg___lam__4), 9, 8);
lean_closure_set(v___f_2287_, 0, v___f_2285_);
lean_closure_set(v___f_2287_, 1, v___f_2286_);
lean_closure_set(v___f_2287_, 2, v_e_2279_);
lean_closure_set(v___f_2287_, 3, v_toPure_2284_);
lean_closure_set(v___f_2287_, 4, v_inst_2275_);
lean_closure_set(v___f_2287_, 5, v_toBind_2281_);
lean_closure_set(v___f_2287_, 6, v_inst_2278_);
lean_closure_set(v___f_2287_, 7, v_modifyRing_2283_);
v___x_2288_ = lean_apply_4(v_toBind_2281_, lean_box(0), lean_box(0), v_getRing_2282_, v___f_2287_);
return v___x_2288_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore(lean_object* v_m_2289_, lean_object* v_inst_2290_, lean_object* v_inst_2291_, lean_object* v_inst_2292_, lean_object* v_inst_2293_, lean_object* v_e_2294_){
_start:
{
lean_object* v___x_2295_; 
v___x_2295_ = l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___redArg(v_inst_2290_, v_inst_2291_, v_inst_2292_, v_inst_2293_, v_e_2294_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0(lean_object* v_e_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_){
_start:
{
lean_object* v___x_2309_; 
v___x_2309_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(v_e_2296_, v___y_2297_, v___y_2298_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_, v___y_2306_, v___y_2307_);
return v___x_2309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0___boxed(lean_object* v_e_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0(v_e_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_, v___y_2321_);
lean_dec(v___y_2321_);
lean_dec_ref(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec_ref(v___y_2316_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec_ref(v___y_2311_);
return v_res_2323_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___closed__0(void){
_start:
{
lean_object* v___f_2324_; 
v___f_2324_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___lam__0___boxed), 13, 0);
return v___f_2324_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM(void){
_start:
{
lean_object* v___f_2325_; 
v___f_2325_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___closed__0, &l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___closed__0_once, _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM___closed__0);
return v___f_2325_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0___lam__0(lean_object* v_e_2326_, lean_object* v_size_2327_, lean_object* v_s_2328_){
_start:
{
lean_object* v_toRing_2329_; lean_object* v_invFn_x3f_2330_; lean_object* v_semiringId_x3f_2331_; lean_object* v_commSemiringInst_2332_; lean_object* v_commRingInst_2333_; lean_object* v_noZeroDivInst_x3f_2334_; lean_object* v_fieldInst_x3f_2335_; lean_object* v_powIdentityInst_x3f_2336_; lean_object* v_denoteEntries_2337_; lean_object* v_nextId_2338_; lean_object* v_steps_2339_; lean_object* v_queue_2340_; lean_object* v_basis_2341_; lean_object* v_diseqs_2342_; uint8_t v_recheck_2343_; lean_object* v_invSet_2344_; lean_object* v_powIdentityVarCount_2345_; lean_object* v_numEq0_x3f_2346_; uint8_t v_numEq0Updated_2347_; lean_object* v___x_2349_; uint8_t v_isShared_2350_; uint8_t v_isSharedCheck_2380_; 
v_toRing_2329_ = lean_ctor_get(v_s_2328_, 0);
v_invFn_x3f_2330_ = lean_ctor_get(v_s_2328_, 1);
v_semiringId_x3f_2331_ = lean_ctor_get(v_s_2328_, 2);
v_commSemiringInst_2332_ = lean_ctor_get(v_s_2328_, 3);
v_commRingInst_2333_ = lean_ctor_get(v_s_2328_, 4);
v_noZeroDivInst_x3f_2334_ = lean_ctor_get(v_s_2328_, 5);
v_fieldInst_x3f_2335_ = lean_ctor_get(v_s_2328_, 6);
v_powIdentityInst_x3f_2336_ = lean_ctor_get(v_s_2328_, 7);
v_denoteEntries_2337_ = lean_ctor_get(v_s_2328_, 8);
v_nextId_2338_ = lean_ctor_get(v_s_2328_, 9);
v_steps_2339_ = lean_ctor_get(v_s_2328_, 10);
v_queue_2340_ = lean_ctor_get(v_s_2328_, 11);
v_basis_2341_ = lean_ctor_get(v_s_2328_, 12);
v_diseqs_2342_ = lean_ctor_get(v_s_2328_, 13);
v_recheck_2343_ = lean_ctor_get_uint8(v_s_2328_, sizeof(void*)*17);
v_invSet_2344_ = lean_ctor_get(v_s_2328_, 14);
v_powIdentityVarCount_2345_ = lean_ctor_get(v_s_2328_, 15);
v_numEq0_x3f_2346_ = lean_ctor_get(v_s_2328_, 16);
v_numEq0Updated_2347_ = lean_ctor_get_uint8(v_s_2328_, sizeof(void*)*17 + 1);
v_isSharedCheck_2380_ = !lean_is_exclusive(v_s_2328_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2349_ = v_s_2328_;
v_isShared_2350_ = v_isSharedCheck_2380_;
goto v_resetjp_2348_;
}
else
{
lean_inc(v_numEq0_x3f_2346_);
lean_inc(v_powIdentityVarCount_2345_);
lean_inc(v_invSet_2344_);
lean_inc(v_diseqs_2342_);
lean_inc(v_basis_2341_);
lean_inc(v_queue_2340_);
lean_inc(v_steps_2339_);
lean_inc(v_nextId_2338_);
lean_inc(v_denoteEntries_2337_);
lean_inc(v_powIdentityInst_x3f_2336_);
lean_inc(v_fieldInst_x3f_2335_);
lean_inc(v_noZeroDivInst_x3f_2334_);
lean_inc(v_commRingInst_2333_);
lean_inc(v_commSemiringInst_2332_);
lean_inc(v_semiringId_x3f_2331_);
lean_inc(v_invFn_x3f_2330_);
lean_inc(v_toRing_2329_);
lean_dec(v_s_2328_);
v___x_2349_ = lean_box(0);
v_isShared_2350_ = v_isSharedCheck_2380_;
goto v_resetjp_2348_;
}
v_resetjp_2348_:
{
lean_object* v_id_2351_; lean_object* v_type_2352_; lean_object* v_u_2353_; lean_object* v_ringInst_2354_; lean_object* v_semiringInst_2355_; lean_object* v_charInst_x3f_2356_; lean_object* v_addFn_x3f_2357_; lean_object* v_mulFn_x3f_2358_; lean_object* v_subFn_x3f_2359_; lean_object* v_negFn_x3f_2360_; lean_object* v_powFn_x3f_2361_; lean_object* v_intCastFn_x3f_2362_; lean_object* v_natCastFn_x3f_2363_; lean_object* v_one_x3f_2364_; lean_object* v_vars_2365_; lean_object* v_varMap_2366_; lean_object* v_denote_2367_; lean_object* v___x_2369_; uint8_t v_isShared_2370_; uint8_t v_isSharedCheck_2379_; 
v_id_2351_ = lean_ctor_get(v_toRing_2329_, 0);
v_type_2352_ = lean_ctor_get(v_toRing_2329_, 1);
v_u_2353_ = lean_ctor_get(v_toRing_2329_, 2);
v_ringInst_2354_ = lean_ctor_get(v_toRing_2329_, 3);
v_semiringInst_2355_ = lean_ctor_get(v_toRing_2329_, 4);
v_charInst_x3f_2356_ = lean_ctor_get(v_toRing_2329_, 5);
v_addFn_x3f_2357_ = lean_ctor_get(v_toRing_2329_, 6);
v_mulFn_x3f_2358_ = lean_ctor_get(v_toRing_2329_, 7);
v_subFn_x3f_2359_ = lean_ctor_get(v_toRing_2329_, 8);
v_negFn_x3f_2360_ = lean_ctor_get(v_toRing_2329_, 9);
v_powFn_x3f_2361_ = lean_ctor_get(v_toRing_2329_, 10);
v_intCastFn_x3f_2362_ = lean_ctor_get(v_toRing_2329_, 11);
v_natCastFn_x3f_2363_ = lean_ctor_get(v_toRing_2329_, 12);
v_one_x3f_2364_ = lean_ctor_get(v_toRing_2329_, 13);
v_vars_2365_ = lean_ctor_get(v_toRing_2329_, 14);
v_varMap_2366_ = lean_ctor_get(v_toRing_2329_, 15);
v_denote_2367_ = lean_ctor_get(v_toRing_2329_, 16);
v_isSharedCheck_2379_ = !lean_is_exclusive(v_toRing_2329_);
if (v_isSharedCheck_2379_ == 0)
{
v___x_2369_ = v_toRing_2329_;
v_isShared_2370_ = v_isSharedCheck_2379_;
goto v_resetjp_2368_;
}
else
{
lean_inc(v_denote_2367_);
lean_inc(v_varMap_2366_);
lean_inc(v_vars_2365_);
lean_inc(v_one_x3f_2364_);
lean_inc(v_natCastFn_x3f_2363_);
lean_inc(v_intCastFn_x3f_2362_);
lean_inc(v_powFn_x3f_2361_);
lean_inc(v_negFn_x3f_2360_);
lean_inc(v_subFn_x3f_2359_);
lean_inc(v_mulFn_x3f_2358_);
lean_inc(v_addFn_x3f_2357_);
lean_inc(v_charInst_x3f_2356_);
lean_inc(v_semiringInst_2355_);
lean_inc(v_ringInst_2354_);
lean_inc(v_u_2353_);
lean_inc(v_type_2352_);
lean_inc(v_id_2351_);
lean_dec(v_toRing_2329_);
v___x_2369_ = lean_box(0);
v_isShared_2370_ = v_isSharedCheck_2379_;
goto v_resetjp_2368_;
}
v_resetjp_2368_:
{
lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2374_; 
lean_inc_ref(v_e_2326_);
v___x_2371_ = l_Lean_PersistentArray_push___redArg(v_vars_2365_, v_e_2326_);
v___x_2372_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_CommRing_setTermRingId_spec__0___redArg(v_varMap_2366_, v_e_2326_, v_size_2327_);
if (v_isShared_2370_ == 0)
{
lean_ctor_set(v___x_2369_, 15, v___x_2372_);
lean_ctor_set(v___x_2369_, 14, v___x_2371_);
v___x_2374_ = v___x_2369_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 17, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_id_2351_);
lean_ctor_set(v_reuseFailAlloc_2378_, 1, v_type_2352_);
lean_ctor_set(v_reuseFailAlloc_2378_, 2, v_u_2353_);
lean_ctor_set(v_reuseFailAlloc_2378_, 3, v_ringInst_2354_);
lean_ctor_set(v_reuseFailAlloc_2378_, 4, v_semiringInst_2355_);
lean_ctor_set(v_reuseFailAlloc_2378_, 5, v_charInst_x3f_2356_);
lean_ctor_set(v_reuseFailAlloc_2378_, 6, v_addFn_x3f_2357_);
lean_ctor_set(v_reuseFailAlloc_2378_, 7, v_mulFn_x3f_2358_);
lean_ctor_set(v_reuseFailAlloc_2378_, 8, v_subFn_x3f_2359_);
lean_ctor_set(v_reuseFailAlloc_2378_, 9, v_negFn_x3f_2360_);
lean_ctor_set(v_reuseFailAlloc_2378_, 10, v_powFn_x3f_2361_);
lean_ctor_set(v_reuseFailAlloc_2378_, 11, v_intCastFn_x3f_2362_);
lean_ctor_set(v_reuseFailAlloc_2378_, 12, v_natCastFn_x3f_2363_);
lean_ctor_set(v_reuseFailAlloc_2378_, 13, v_one_x3f_2364_);
lean_ctor_set(v_reuseFailAlloc_2378_, 14, v___x_2371_);
lean_ctor_set(v_reuseFailAlloc_2378_, 15, v___x_2372_);
lean_ctor_set(v_reuseFailAlloc_2378_, 16, v_denote_2367_);
v___x_2374_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
lean_object* v___x_2376_; 
if (v_isShared_2350_ == 0)
{
lean_ctor_set(v___x_2349_, 0, v___x_2374_);
v___x_2376_ = v___x_2349_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 17, 2);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v___x_2374_);
lean_ctor_set(v_reuseFailAlloc_2377_, 1, v_invFn_x3f_2330_);
lean_ctor_set(v_reuseFailAlloc_2377_, 2, v_semiringId_x3f_2331_);
lean_ctor_set(v_reuseFailAlloc_2377_, 3, v_commSemiringInst_2332_);
lean_ctor_set(v_reuseFailAlloc_2377_, 4, v_commRingInst_2333_);
lean_ctor_set(v_reuseFailAlloc_2377_, 5, v_noZeroDivInst_x3f_2334_);
lean_ctor_set(v_reuseFailAlloc_2377_, 6, v_fieldInst_x3f_2335_);
lean_ctor_set(v_reuseFailAlloc_2377_, 7, v_powIdentityInst_x3f_2336_);
lean_ctor_set(v_reuseFailAlloc_2377_, 8, v_denoteEntries_2337_);
lean_ctor_set(v_reuseFailAlloc_2377_, 9, v_nextId_2338_);
lean_ctor_set(v_reuseFailAlloc_2377_, 10, v_steps_2339_);
lean_ctor_set(v_reuseFailAlloc_2377_, 11, v_queue_2340_);
lean_ctor_set(v_reuseFailAlloc_2377_, 12, v_basis_2341_);
lean_ctor_set(v_reuseFailAlloc_2377_, 13, v_diseqs_2342_);
lean_ctor_set(v_reuseFailAlloc_2377_, 14, v_invSet_2344_);
lean_ctor_set(v_reuseFailAlloc_2377_, 15, v_powIdentityVarCount_2345_);
lean_ctor_set(v_reuseFailAlloc_2377_, 16, v_numEq0_x3f_2346_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*17, v_recheck_2343_);
lean_ctor_set_uint8(v_reuseFailAlloc_2377_, sizeof(void*)*17 + 1, v_numEq0Updated_2347_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0(lean_object* v_e_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_getCommRing(v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; lean_object* v___x_2397_; uint8_t v_isShared_2398_; uint8_t v_isSharedCheck_2445_; 
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2445_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2445_ == 0)
{
v___x_2397_ = v___x_2394_;
v_isShared_2398_ = v_isSharedCheck_2445_;
goto v_resetjp_2396_;
}
else
{
lean_inc(v_a_2395_);
lean_dec(v___x_2394_);
v___x_2397_ = lean_box(0);
v_isShared_2398_ = v_isSharedCheck_2445_;
goto v_resetjp_2396_;
}
v_resetjp_2396_:
{
lean_object* v_toRing_2399_; lean_object* v_vars_2400_; lean_object* v_varMap_2401_; lean_object* v___x_2402_; 
v_toRing_2399_ = lean_ctor_get(v_a_2395_, 0);
lean_inc_ref(v_toRing_2399_);
lean_dec(v_a_2395_);
v_vars_2400_ = lean_ctor_get(v_toRing_2399_, 14);
lean_inc_ref(v_vars_2400_);
v_varMap_2401_ = lean_ctor_get(v_toRing_2399_, 15);
lean_inc_ref(v_varMap_2401_);
lean_dec_ref(v_toRing_2399_);
v___x_2402_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_CommRing_getTermRingId_x3f_spec__0___redArg(v_varMap_2401_, v_e_2381_);
lean_dec_ref(v_varMap_2401_);
if (lean_obj_tag(v___x_2402_) == 1)
{
lean_object* v_val_2403_; lean_object* v___x_2405_; 
lean_dec_ref(v_vars_2400_);
lean_dec_ref(v_e_2381_);
v_val_2403_ = lean_ctor_get(v___x_2402_, 0);
lean_inc(v_val_2403_);
lean_dec_ref(v___x_2402_);
if (v_isShared_2398_ == 0)
{
lean_ctor_set(v___x_2397_, 0, v_val_2403_);
v___x_2405_ = v___x_2397_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v_val_2403_);
v___x_2405_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
return v___x_2405_;
}
}
else
{
lean_object* v_size_2407_; lean_object* v___f_2408_; lean_object* v___x_2409_; 
lean_dec(v___x_2402_);
lean_del_object(v___x_2397_);
v_size_2407_ = lean_ctor_get(v_vars_2400_, 2);
lean_inc_n(v_size_2407_, 2);
lean_dec_ref(v_vars_2400_);
lean_inc_ref(v_e_2381_);
v___f_2408_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0___lam__0), 3, 2);
lean_closure_set(v___f_2408_, 0, v_e_2381_);
lean_closure_set(v___f_2408_, 1, v_size_2407_);
v___x_2409_ = l_Lean_Meta_Grind_Arith_CommRing_RingM_modifyCommRing___redArg(v___f_2408_, v___y_2382_, v___y_2383_, v___y_2392_);
if (lean_obj_tag(v___x_2409_) == 0)
{
lean_object* v___x_2410_; 
lean_dec_ref(v___x_2409_);
lean_inc_ref(v_e_2381_);
v___x_2410_ = l_Lean_Meta_Grind_Arith_CommRing_setTermRingId___redArg(v_e_2381_, v___y_2382_, v___y_2383_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v___x_2411_; lean_object* v___x_2412_; 
lean_dec_ref(v___x_2410_);
v___x_2411_ = l_Lean_Meta_Grind_Arith_CommRing_ringExt;
v___x_2412_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_2411_, v_e_2381_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2419_ == 0)
{
lean_object* v_unused_2420_; 
v_unused_2420_ = lean_ctor_get(v___x_2412_, 0);
lean_dec(v_unused_2420_);
v___x_2414_ = v___x_2412_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_dec(v___x_2412_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2417_; 
if (v_isShared_2415_ == 0)
{
lean_ctor_set(v___x_2414_, 0, v_size_2407_);
v___x_2417_ = v___x_2414_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_size_2407_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
}
else
{
lean_object* v_a_2421_; lean_object* v___x_2423_; uint8_t v_isShared_2424_; uint8_t v_isSharedCheck_2428_; 
lean_dec(v_size_2407_);
v_a_2421_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2428_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2428_ == 0)
{
v___x_2423_ = v___x_2412_;
v_isShared_2424_ = v_isSharedCheck_2428_;
goto v_resetjp_2422_;
}
else
{
lean_inc(v_a_2421_);
lean_dec(v___x_2412_);
v___x_2423_ = lean_box(0);
v_isShared_2424_ = v_isSharedCheck_2428_;
goto v_resetjp_2422_;
}
v_resetjp_2422_:
{
lean_object* v___x_2426_; 
if (v_isShared_2424_ == 0)
{
v___x_2426_ = v___x_2423_;
goto v_reusejp_2425_;
}
else
{
lean_object* v_reuseFailAlloc_2427_; 
v_reuseFailAlloc_2427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2427_, 0, v_a_2421_);
v___x_2426_ = v_reuseFailAlloc_2427_;
goto v_reusejp_2425_;
}
v_reusejp_2425_:
{
return v___x_2426_;
}
}
}
}
else
{
lean_object* v_a_2429_; lean_object* v___x_2431_; uint8_t v_isShared_2432_; uint8_t v_isSharedCheck_2436_; 
lean_dec(v_size_2407_);
lean_dec_ref(v_e_2381_);
v_a_2429_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2436_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2436_ == 0)
{
v___x_2431_ = v___x_2410_;
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
else
{
lean_inc(v_a_2429_);
lean_dec(v___x_2410_);
v___x_2431_ = lean_box(0);
v_isShared_2432_ = v_isSharedCheck_2436_;
goto v_resetjp_2430_;
}
v_resetjp_2430_:
{
lean_object* v___x_2434_; 
if (v_isShared_2432_ == 0)
{
v___x_2434_ = v___x_2431_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v_a_2429_);
v___x_2434_ = v_reuseFailAlloc_2435_;
goto v_reusejp_2433_;
}
v_reusejp_2433_:
{
return v___x_2434_;
}
}
}
}
else
{
lean_object* v_a_2437_; lean_object* v___x_2439_; uint8_t v_isShared_2440_; uint8_t v_isSharedCheck_2444_; 
lean_dec(v_size_2407_);
lean_dec_ref(v_e_2381_);
v_a_2437_ = lean_ctor_get(v___x_2409_, 0);
v_isSharedCheck_2444_ = !lean_is_exclusive(v___x_2409_);
if (v_isSharedCheck_2444_ == 0)
{
v___x_2439_ = v___x_2409_;
v_isShared_2440_ = v_isSharedCheck_2444_;
goto v_resetjp_2438_;
}
else
{
lean_inc(v_a_2437_);
lean_dec(v___x_2409_);
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
}
}
}
else
{
lean_object* v_a_2446_; lean_object* v___x_2448_; uint8_t v_isShared_2449_; uint8_t v_isSharedCheck_2453_; 
lean_dec_ref(v_e_2381_);
v_a_2446_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2453_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2453_ == 0)
{
v___x_2448_ = v___x_2394_;
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
else
{
lean_inc(v_a_2446_);
lean_dec(v___x_2394_);
v___x_2448_ = lean_box(0);
v_isShared_2449_ = v_isSharedCheck_2453_;
goto v_resetjp_2447_;
}
v_resetjp_2447_:
{
lean_object* v___x_2451_; 
if (v_isShared_2449_ == 0)
{
v___x_2451_ = v___x_2448_;
goto v_reusejp_2450_;
}
else
{
lean_object* v_reuseFailAlloc_2452_; 
v_reuseFailAlloc_2452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2452_, 0, v_a_2446_);
v___x_2451_ = v_reuseFailAlloc_2452_;
goto v_reusejp_2450_;
}
v_reusejp_2450_:
{
return v___x_2451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0___boxed(lean_object* v_e_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_){
_start:
{
lean_object* v_res_2467_; 
v_res_2467_ = l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0(v_e_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_);
lean_dec(v___y_2465_);
lean_dec_ref(v___y_2464_);
lean_dec(v___y_2463_);
lean_dec_ref(v___y_2462_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec(v___y_2457_);
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
return v_res_2467_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVar(lean_object* v_e_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_, lean_object* v_a_2473_, lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_, lean_object* v_a_2478_, lean_object* v_a_2479_){
_start:
{
lean_object* v___x_2481_; 
v___x_2481_ = l_Lean_Meta_Grind_Arith_CommRing_mkVarCore___at___00Lean_Meta_Grind_Arith_CommRing_mkVar_spec__0(v_e_2468_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, v_a_2473_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_, v_a_2478_, v_a_2479_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_CommRing_mkVar___boxed(lean_object* v_e_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_, lean_object* v_a_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_){
_start:
{
lean_object* v_res_2495_; 
v_res_2495_ = l_Lean_Meta_Grind_Arith_CommRing_mkVar(v_e_2482_, v_a_2483_, v_a_2484_, v_a_2485_, v_a_2486_, v_a_2487_, v_a_2488_, v_a_2489_, v_a_2490_, v_a_2491_, v_a_2492_, v_a_2493_);
lean_dec(v_a_2493_);
lean_dec_ref(v_a_2492_);
lean_dec(v_a_2491_);
lean_dec_ref(v_a_2490_);
lean_dec(v_a_2489_);
lean_dec_ref(v_a_2488_);
lean_dec(v_a_2487_);
lean_dec_ref(v_a_2486_);
lean_dec(v_a_2485_);
lean_dec(v_a_2484_);
lean_dec_ref(v_a_2483_);
return v_res_2495_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadRing(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadCanonRingM);
l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadCommRingRingM);
l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM = _init_l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM();
lean_mark_persistent(l_Lean_Meta_Grind_Arith_CommRing_instMonadSetTermIdRingM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadRing(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_MonadRing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_CommRing_RingM(builtin);
}
#ifdef __cplusplus
}
#endif
