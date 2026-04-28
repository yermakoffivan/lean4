// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.Linear.Util
// Imports: public import Lean.Meta.Tactic.Grind.Arith.Linear.LinearM import Lean.Meta.Tactic.Grind.Arith.Util import Init.Data.Int.Gcd
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
uint64_t l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(lean_object*, lean_object*);
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
lean_object* l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
extern lean_object* l_instInhabitedRat;
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_shrink(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_Arith_Linear_linearExt;
lean_object* l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_Sym_getConfig___redArg(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_reportIssue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Int_gcd(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Arith_Linear_throwNotRing___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
uint8_t l_Bool_toLBool(uint8_t);
uint8_t l_instDecidableEqRat_decEq(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t l_Rat_instDecidableLe(lean_object*, lean_object*);
uint8_t l_Rat_blt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getZero(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getZero___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOne___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isLinearOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__0;
static lean_once_cell_t l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Grind_Linarith_Poly_eval_x3f_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0;
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_eval_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_eval_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Lean_Grind_Linarith_Poly_eval_x3f_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_inconsistent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_inconsistent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_eliminated(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_eliminated___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOccursOf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOccursOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Grind_Linarith_Poly_updateOccs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Linarith_Poly_updateOccs___closed__0;
static lean_once_cell_t l_Lean_Grind_Linarith_Poly_updateOccs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Grind_Linarith_Poly_updateOccs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_updateOccs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_updateOccs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_findVarToSubst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_findVarToSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffsAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffsAux___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_div(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_div___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_pickVarToElim_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getZero(lean_object* v_a_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_){
_start:
{
lean_object* v___x_13_; 
v___x_13_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_, v_a_10_, v_a_11_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_22_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_22_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_22_ == 0)
{
v___x_16_ = v___x_13_;
v_isShared_17_ = v_isSharedCheck_22_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_a_14_);
lean_dec(v___x_13_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_22_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v_zero_18_; lean_object* v___x_20_; 
v_zero_18_ = lean_ctor_get(v_a_14_, 17);
lean_inc_ref(v_zero_18_);
lean_dec(v_a_14_);
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 0, v_zero_18_);
v___x_20_ = v___x_16_;
goto v_reusejp_19_;
}
else
{
lean_object* v_reuseFailAlloc_21_; 
v_reuseFailAlloc_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_21_, 0, v_zero_18_);
v___x_20_ = v_reuseFailAlloc_21_;
goto v_reusejp_19_;
}
v_reusejp_19_:
{
return v___x_20_;
}
}
}
else
{
lean_object* v_a_23_; lean_object* v___x_25_; uint8_t v_isShared_26_; uint8_t v_isSharedCheck_30_; 
v_a_23_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_30_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_30_ == 0)
{
v___x_25_ = v___x_13_;
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
else
{
lean_inc(v_a_23_);
lean_dec(v___x_13_);
v___x_25_ = lean_box(0);
v_isShared_26_ = v_isSharedCheck_30_;
goto v_resetjp_24_;
}
v_resetjp_24_:
{
lean_object* v___x_28_; 
if (v_isShared_26_ == 0)
{
v___x_28_ = v___x_25_;
goto v_reusejp_27_;
}
else
{
lean_object* v_reuseFailAlloc_29_; 
v_reuseFailAlloc_29_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_29_, 0, v_a_23_);
v___x_28_ = v_reuseFailAlloc_29_;
goto v_reusejp_27_;
}
v_reusejp_27_:
{
return v___x_28_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getZero___boxed(lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_){
_start:
{
lean_object* v_res_43_; 
v_res_43_ = l_Lean_Meta_Grind_Arith_Linear_getZero(v_a_31_, v_a_32_, v_a_33_, v_a_34_, v_a_35_, v_a_36_, v_a_37_, v_a_38_, v_a_39_, v_a_40_, v_a_41_);
lean_dec(v_a_41_);
lean_dec_ref(v_a_40_);
lean_dec(v_a_39_);
lean_dec_ref(v_a_38_);
lean_dec(v_a_37_);
lean_dec_ref(v_a_36_);
lean_dec(v_a_35_);
lean_dec_ref(v_a_34_);
lean_dec(v_a_33_);
lean_dec(v_a_32_);
lean_dec(v_a_31_);
return v_res_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOne(lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_);
if (lean_obj_tag(v___x_56_) == 0)
{
lean_object* v_a_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_67_; 
v_a_57_ = lean_ctor_get(v___x_56_, 0);
v_isSharedCheck_67_ = !lean_is_exclusive(v___x_56_);
if (v_isSharedCheck_67_ == 0)
{
v___x_59_ = v___x_56_;
v_isShared_60_ = v_isSharedCheck_67_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_a_57_);
lean_dec(v___x_56_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_67_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v_one_x3f_61_; 
v_one_x3f_61_ = lean_ctor_get(v_a_57_, 19);
lean_inc(v_one_x3f_61_);
lean_dec(v_a_57_);
if (lean_obj_tag(v_one_x3f_61_) == 1)
{
lean_object* v_val_62_; lean_object* v___x_64_; 
v_val_62_ = lean_ctor_get(v_one_x3f_61_, 0);
lean_inc(v_val_62_);
lean_dec_ref(v_one_x3f_61_);
if (v_isShared_60_ == 0)
{
lean_ctor_set(v___x_59_, 0, v_val_62_);
v___x_64_ = v___x_59_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v_val_62_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
else
{
lean_object* v___x_66_; 
lean_dec(v_one_x3f_61_);
lean_del_object(v___x_59_);
v___x_66_ = l_Lean_Meta_Grind_Arith_Linear_throwNotRing___redArg(v_a_51_, v_a_52_, v_a_53_, v_a_54_);
return v___x_66_;
}
}
}
else
{
lean_object* v_a_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_75_; 
v_a_68_ = lean_ctor_get(v___x_56_, 0);
v_isSharedCheck_75_ = !lean_is_exclusive(v___x_56_);
if (v_isSharedCheck_75_ == 0)
{
v___x_70_ = v___x_56_;
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_a_68_);
lean_dec(v___x_56_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_75_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_73_; 
if (v_isShared_71_ == 0)
{
v___x_73_ = v___x_70_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_a_68_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOne___boxed(lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_Meta_Grind_Arith_Linear_getOne(v_a_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_, v_a_84_, v_a_85_, v_a_86_);
lean_dec(v_a_86_);
lean_dec_ref(v_a_85_);
lean_dec(v_a_84_);
lean_dec_ref(v_a_83_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec_ref(v_a_79_);
lean_dec(v_a_78_);
lean_dec(v_a_77_);
lean_dec(v_a_76_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isCommRing(lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_, v_a_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_);
if (lean_obj_tag(v___x_101_) == 0)
{
lean_object* v_a_102_; lean_object* v___x_104_; uint8_t v_isShared_105_; uint8_t v_isSharedCheck_117_; 
v_a_102_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_117_ == 0)
{
v___x_104_ = v___x_101_;
v_isShared_105_ = v_isSharedCheck_117_;
goto v_resetjp_103_;
}
else
{
lean_inc(v_a_102_);
lean_dec(v___x_101_);
v___x_104_ = lean_box(0);
v_isShared_105_ = v_isSharedCheck_117_;
goto v_resetjp_103_;
}
v_resetjp_103_:
{
lean_object* v_ringId_x3f_106_; 
v_ringId_x3f_106_ = lean_ctor_get(v_a_102_, 1);
lean_inc(v_ringId_x3f_106_);
lean_dec(v_a_102_);
if (lean_obj_tag(v_ringId_x3f_106_) == 0)
{
uint8_t v___x_107_; lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_107_ = 0;
v___x_108_ = lean_box(v___x_107_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v___x_108_);
v___x_110_ = v___x_104_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v___x_108_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
else
{
uint8_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_115_; 
lean_dec_ref(v_ringId_x3f_106_);
v___x_112_ = 1;
v___x_113_ = lean_box(v___x_112_);
if (v_isShared_105_ == 0)
{
lean_ctor_set(v___x_104_, 0, v___x_113_);
v___x_115_ = v___x_104_;
goto v_reusejp_114_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v___x_113_);
v___x_115_ = v_reuseFailAlloc_116_;
goto v_reusejp_114_;
}
v_reusejp_114_:
{
return v___x_115_;
}
}
}
}
else
{
lean_object* v_a_118_; lean_object* v___x_120_; uint8_t v_isShared_121_; uint8_t v_isSharedCheck_125_; 
v_a_118_ = lean_ctor_get(v___x_101_, 0);
v_isSharedCheck_125_ = !lean_is_exclusive(v___x_101_);
if (v_isSharedCheck_125_ == 0)
{
v___x_120_ = v___x_101_;
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
else
{
lean_inc(v_a_118_);
lean_dec(v___x_101_);
v___x_120_ = lean_box(0);
v_isShared_121_ = v_isSharedCheck_125_;
goto v_resetjp_119_;
}
v_resetjp_119_:
{
lean_object* v___x_123_; 
if (v_isShared_121_ == 0)
{
v___x_123_ = v___x_120_;
goto v_reusejp_122_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v_a_118_);
v___x_123_ = v_reuseFailAlloc_124_;
goto v_reusejp_122_;
}
v_reusejp_122_:
{
return v___x_123_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isCommRing___boxed(lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Meta_Grind_Arith_Linear_isCommRing(v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_, v_a_133_, v_a_134_, v_a_135_, v_a_136_);
lean_dec(v_a_136_);
lean_dec_ref(v_a_135_);
lean_dec(v_a_134_);
lean_dec_ref(v_a_133_);
lean_dec(v_a_132_);
lean_dec_ref(v_a_131_);
lean_dec(v_a_130_);
lean_dec_ref(v_a_129_);
lean_dec(v_a_128_);
lean_dec(v_a_127_);
lean_dec(v_a_126_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing(lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = l_Lean_Meta_Grind_Arith_Linear_isCommRing(v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; lean_object* v___x_153_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_a_152_);
lean_dec_ref(v___x_151_);
v___x_153_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
if (lean_obj_tag(v___x_153_) == 0)
{
uint8_t v___x_154_; 
v___x_154_ = lean_unbox(v_a_152_);
if (v___x_154_ == 0)
{
lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_161_ == 0)
{
lean_object* v_unused_162_; 
v_unused_162_ = lean_ctor_get(v___x_153_, 0);
lean_dec(v_unused_162_);
v___x_156_ = v___x_153_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_dec(v___x_153_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
lean_ctor_set(v___x_156_, 0, v_a_152_);
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_152_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
else
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_176_; 
v_a_163_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_176_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_176_ == 0)
{
v___x_165_ = v___x_153_;
v_isShared_166_ = v_isSharedCheck_176_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_153_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_176_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v_orderedRingInst_x3f_167_; 
v_orderedRingInst_x3f_167_ = lean_ctor_get(v_a_163_, 14);
lean_inc(v_orderedRingInst_x3f_167_);
lean_dec(v_a_163_);
if (lean_obj_tag(v_orderedRingInst_x3f_167_) == 0)
{
uint8_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_171_; 
lean_dec(v_a_152_);
v___x_168_ = 0;
v___x_169_ = lean_box(v___x_168_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v___x_169_);
v___x_171_ = v___x_165_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v___x_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
else
{
lean_object* v___x_174_; 
lean_dec_ref(v_orderedRingInst_x3f_167_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v_a_152_);
v___x_174_ = v___x_165_;
goto v_reusejp_173_;
}
else
{
lean_object* v_reuseFailAlloc_175_; 
v_reuseFailAlloc_175_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_175_, 0, v_a_152_);
v___x_174_ = v_reuseFailAlloc_175_;
goto v_reusejp_173_;
}
v_reusejp_173_:
{
return v___x_174_;
}
}
}
}
}
else
{
lean_object* v_a_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_184_; 
lean_dec(v_a_152_);
v_a_177_ = lean_ctor_get(v___x_153_, 0);
v_isSharedCheck_184_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_184_ == 0)
{
v___x_179_ = v___x_153_;
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_a_177_);
lean_dec(v___x_153_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_184_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v___x_182_; 
if (v_isShared_180_ == 0)
{
v___x_182_ = v___x_179_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_183_; 
v_reuseFailAlloc_183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_183_, 0, v_a_177_);
v___x_182_ = v_reuseFailAlloc_183_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
return v___x_182_;
}
}
}
}
else
{
return v___x_151_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing___boxed(lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_Meta_Grind_Arith_Linear_isOrderedCommRing(v_a_185_, v_a_186_, v_a_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_, v_a_193_, v_a_194_, v_a_195_);
lean_dec(v_a_195_);
lean_dec_ref(v_a_194_);
lean_dec(v_a_193_);
lean_dec_ref(v_a_192_);
lean_dec(v_a_191_);
lean_dec_ref(v_a_190_);
lean_dec(v_a_189_);
lean_dec_ref(v_a_188_);
lean_dec(v_a_187_);
lean_dec(v_a_186_);
lean_dec(v_a_185_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_, lean_object* v_a_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_198_, v_a_199_, v_a_200_, v_a_201_, v_a_202_, v_a_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_, v_a_208_);
if (lean_obj_tag(v___x_210_) == 0)
{
lean_object* v_a_211_; lean_object* v___x_213_; uint8_t v_isShared_214_; uint8_t v_isSharedCheck_226_; 
v_a_211_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_226_ == 0)
{
v___x_213_ = v___x_210_;
v_isShared_214_ = v_isSharedCheck_226_;
goto v_resetjp_212_;
}
else
{
lean_inc(v_a_211_);
lean_dec(v___x_210_);
v___x_213_ = lean_box(0);
v_isShared_214_ = v_isSharedCheck_226_;
goto v_resetjp_212_;
}
v_resetjp_212_:
{
lean_object* v_isLinearInst_x3f_215_; 
v_isLinearInst_x3f_215_ = lean_ctor_get(v_a_211_, 10);
lean_inc(v_isLinearInst_x3f_215_);
lean_dec(v_a_211_);
if (lean_obj_tag(v_isLinearInst_x3f_215_) == 0)
{
uint8_t v___x_216_; lean_object* v___x_217_; lean_object* v___x_219_; 
v___x_216_ = 0;
v___x_217_ = lean_box(v___x_216_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_217_);
v___x_219_ = v___x_213_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v___x_217_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
else
{
uint8_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_224_; 
lean_dec_ref(v_isLinearInst_x3f_215_);
v___x_221_ = 1;
v___x_222_ = lean_box(v___x_221_);
if (v_isShared_214_ == 0)
{
lean_ctor_set(v___x_213_, 0, v___x_222_);
v___x_224_ = v___x_213_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
else
{
lean_object* v_a_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_234_; 
v_a_227_ = lean_ctor_get(v___x_210_, 0);
v_isSharedCheck_234_ = !lean_is_exclusive(v___x_210_);
if (v_isSharedCheck_234_ == 0)
{
v___x_229_ = v___x_210_;
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_a_227_);
lean_dec(v___x_210_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_234_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_a_227_);
v___x_232_ = v_reuseFailAlloc_233_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
return v___x_232_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isLinearOrder___boxed(lean_object* v_a_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_Meta_Grind_Arith_Linear_isLinearOrder(v_a_235_, v_a_236_, v_a_237_, v_a_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_, v_a_245_);
lean_dec(v_a_245_);
lean_dec_ref(v_a_244_);
lean_dec(v_a_243_);
lean_dec_ref(v_a_242_);
lean_dec(v_a_241_);
lean_dec_ref(v_a_240_);
lean_dec(v_a_239_);
lean_dec_ref(v_a_238_);
lean_dec(v_a_237_);
lean_dec(v_a_236_);
lean_dec(v_a_235_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors(lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_, lean_object* v_a_253_, lean_object* v_a_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_){
_start:
{
lean_object* v___x_260_; 
v___x_260_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_248_, v_a_249_, v_a_250_, v_a_251_, v_a_252_, v_a_253_, v_a_254_, v_a_255_, v_a_256_, v_a_257_, v_a_258_);
if (lean_obj_tag(v___x_260_) == 0)
{
lean_object* v_a_261_; lean_object* v___x_263_; uint8_t v_isShared_264_; uint8_t v_isSharedCheck_276_; 
v_a_261_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_276_ == 0)
{
v___x_263_ = v___x_260_;
v_isShared_264_ = v_isSharedCheck_276_;
goto v_resetjp_262_;
}
else
{
lean_inc(v_a_261_);
lean_dec(v___x_260_);
v___x_263_ = lean_box(0);
v_isShared_264_ = v_isSharedCheck_276_;
goto v_resetjp_262_;
}
v_resetjp_262_:
{
lean_object* v_noNatDivInst_x3f_265_; 
v_noNatDivInst_x3f_265_ = lean_ctor_get(v_a_261_, 11);
lean_inc(v_noNatDivInst_x3f_265_);
lean_dec(v_a_261_);
if (lean_obj_tag(v_noNatDivInst_x3f_265_) == 0)
{
uint8_t v___x_266_; lean_object* v___x_267_; lean_object* v___x_269_; 
v___x_266_ = 0;
v___x_267_ = lean_box(v___x_266_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_267_);
v___x_269_ = v___x_263_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v___x_267_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
else
{
uint8_t v___x_271_; lean_object* v___x_272_; lean_object* v___x_274_; 
lean_dec_ref(v_noNatDivInst_x3f_265_);
v___x_271_ = 1;
v___x_272_ = lean_box(v___x_271_);
if (v_isShared_264_ == 0)
{
lean_ctor_set(v___x_263_, 0, v___x_272_);
v___x_274_ = v___x_263_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v___x_272_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
else
{
lean_object* v_a_277_; lean_object* v___x_279_; uint8_t v_isShared_280_; uint8_t v_isSharedCheck_284_; 
v_a_277_ = lean_ctor_get(v___x_260_, 0);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_260_);
if (v_isSharedCheck_284_ == 0)
{
v___x_279_ = v___x_260_;
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
else
{
lean_inc(v_a_277_);
lean_dec(v___x_260_);
v___x_279_ = lean_box(0);
v_isShared_280_ = v_isSharedCheck_284_;
goto v_resetjp_278_;
}
v_resetjp_278_:
{
lean_object* v___x_282_; 
if (v_isShared_280_ == 0)
{
v___x_282_ = v___x_279_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_a_277_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors___boxed(lean_object* v_a_285_, lean_object* v_a_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_Meta_Grind_Arith_Linear_hasNoNatZeroDivisors(v_a_285_, v_a_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_);
lean_dec(v_a_295_);
lean_dec_ref(v_a_294_);
lean_dec(v_a_293_);
lean_dec_ref(v_a_292_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_290_);
lean_dec(v_a_289_);
lean_dec_ref(v_a_288_);
lean_dec(v_a_287_);
lean_dec(v_a_286_);
lean_dec(v_a_285_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_298_, lean_object* v_vals_299_, lean_object* v_i_300_, lean_object* v_k_301_){
_start:
{
lean_object* v___x_302_; uint8_t v___x_303_; 
v___x_302_ = lean_array_get_size(v_keys_298_);
v___x_303_ = lean_nat_dec_lt(v_i_300_, v___x_302_);
if (v___x_303_ == 0)
{
lean_object* v___x_304_; 
lean_dec(v_i_300_);
v___x_304_ = lean_box(0);
return v___x_304_;
}
else
{
lean_object* v_k_x27_305_; uint8_t v___x_306_; 
v_k_x27_305_ = lean_array_fget_borrowed(v_keys_298_, v_i_300_);
v___x_306_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_k_301_, v_k_x27_305_);
if (v___x_306_ == 0)
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_unsigned_to_nat(1u);
v___x_308_ = lean_nat_add(v_i_300_, v___x_307_);
lean_dec(v_i_300_);
v_i_300_ = v___x_308_;
goto _start;
}
else
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = lean_array_fget_borrowed(v_vals_299_, v_i_300_);
lean_dec(v_i_300_);
lean_inc(v___x_310_);
v___x_311_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_311_, 0, v___x_310_);
return v___x_311_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_312_, lean_object* v_vals_313_, lean_object* v_i_314_, lean_object* v_k_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_312_, v_vals_313_, v_i_314_, v_k_315_);
lean_dec_ref(v_k_315_);
lean_dec_ref(v_vals_313_);
lean_dec_ref(v_keys_312_);
return v_res_316_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__0(void){
_start:
{
size_t v___x_317_; size_t v___x_318_; size_t v___x_319_; 
v___x_317_ = ((size_t)5ULL);
v___x_318_ = ((size_t)1ULL);
v___x_319_ = lean_usize_shift_left(v___x_318_, v___x_317_);
return v___x_319_;
}
}
static size_t _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__1(void){
_start:
{
size_t v___x_320_; size_t v___x_321_; size_t v___x_322_; 
v___x_320_ = ((size_t)1ULL);
v___x_321_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__0);
v___x_322_ = lean_usize_sub(v___x_321_, v___x_320_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg(lean_object* v_x_323_, size_t v_x_324_, lean_object* v_x_325_){
_start:
{
if (lean_obj_tag(v_x_323_) == 0)
{
lean_object* v_es_326_; lean_object* v___x_327_; size_t v___x_328_; size_t v___x_329_; size_t v___x_330_; lean_object* v_j_331_; lean_object* v___x_332_; 
v_es_326_ = lean_ctor_get(v_x_323_, 0);
v___x_327_ = lean_box(2);
v___x_328_ = ((size_t)5ULL);
v___x_329_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__1);
v___x_330_ = lean_usize_land(v_x_324_, v___x_329_);
v_j_331_ = lean_usize_to_nat(v___x_330_);
v___x_332_ = lean_array_get_borrowed(v___x_327_, v_es_326_, v_j_331_);
lean_dec(v_j_331_);
switch(lean_obj_tag(v___x_332_))
{
case 0:
{
lean_object* v_key_333_; lean_object* v_val_334_; uint8_t v___x_335_; 
v_key_333_ = lean_ctor_get(v___x_332_, 0);
v_val_334_ = lean_ctor_get(v___x_332_, 1);
v___x_335_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_325_, v_key_333_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; 
v___x_336_ = lean_box(0);
return v___x_336_;
}
else
{
lean_object* v___x_337_; 
lean_inc(v_val_334_);
v___x_337_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_337_, 0, v_val_334_);
return v___x_337_;
}
}
case 1:
{
lean_object* v_node_338_; size_t v___x_339_; 
v_node_338_ = lean_ctor_get(v___x_332_, 0);
v___x_339_ = lean_usize_shift_right(v_x_324_, v___x_328_);
v_x_323_ = v_node_338_;
v_x_324_ = v___x_339_;
goto _start;
}
default: 
{
lean_object* v___x_341_; 
v___x_341_ = lean_box(0);
return v___x_341_;
}
}
}
else
{
lean_object* v_ks_342_; lean_object* v_vs_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v_ks_342_ = lean_ctor_get(v_x_323_, 0);
v_vs_343_ = lean_ctor_get(v_x_323_, 1);
v___x_344_ = lean_unsigned_to_nat(0u);
v___x_345_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg(v_ks_342_, v_vs_343_, v___x_344_, v_x_325_);
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_346_, lean_object* v_x_347_, lean_object* v_x_348_){
_start:
{
size_t v_x_867__boxed_349_; lean_object* v_res_350_; 
v_x_867__boxed_349_ = lean_unbox_usize(v_x_347_);
lean_dec(v_x_347_);
v_res_350_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg(v_x_346_, v_x_867__boxed_349_, v_x_348_);
lean_dec_ref(v_x_348_);
lean_dec_ref(v_x_346_);
return v_res_350_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg(lean_object* v_x_351_, lean_object* v_x_352_){
_start:
{
uint64_t v___x_353_; size_t v___x_354_; lean_object* v___x_355_; 
v___x_353_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_352_);
v___x_354_ = lean_uint64_to_usize(v___x_353_);
v___x_355_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg(v_x_351_, v___x_354_, v_x_352_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg___boxed(lean_object* v_x_356_, lean_object* v_x_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg(v_x_356_, v_x_357_);
lean_dec_ref(v_x_357_);
lean_dec_ref(v_x_356_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(lean_object* v_e_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = l_Lean_Meta_Grind_Arith_Linear_get_x27___redArg(v_a_360_, v_a_361_, v_a_362_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_374_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_374_ == 0)
{
v___x_367_ = v___x_364_;
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_a_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_374_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v_exprToStructId_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v_exprToStructId_369_ = lean_ctor_get(v_a_365_, 2);
lean_inc_ref(v_exprToStructId_369_);
lean_dec(v_a_365_);
v___x_370_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg(v_exprToStructId_369_, v_e_359_);
lean_dec_ref(v_exprToStructId_369_);
if (v_isShared_368_ == 0)
{
lean_ctor_set(v___x_367_, 0, v___x_370_);
v___x_372_ = v___x_367_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v___x_370_);
v___x_372_ = v_reuseFailAlloc_373_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
return v___x_372_;
}
}
}
else
{
lean_object* v_a_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_382_; 
v_a_375_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_382_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_382_ == 0)
{
v___x_377_ = v___x_364_;
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_a_375_);
lean_dec(v___x_364_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_382_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v___x_380_; 
if (v_isShared_378_ == 0)
{
v___x_380_ = v___x_377_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_a_375_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg___boxed(lean_object* v_e_383_, lean_object* v_a_384_, lean_object* v_a_385_, lean_object* v_a_386_, lean_object* v_a_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(v_e_383_, v_a_384_, v_a_385_, v_a_386_);
lean_dec(v_a_386_);
lean_dec_ref(v_a_385_);
lean_dec(v_a_384_);
lean_dec_ref(v_e_383_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f(lean_object* v_e_389_, lean_object* v_a_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_, lean_object* v_a_396_, lean_object* v_a_397_, lean_object* v_a_398_, lean_object* v_a_399_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(v_e_389_, v_a_390_, v_a_398_, v_a_399_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___boxed(lean_object* v_e_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_, lean_object* v_a_409_, lean_object* v_a_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f(v_e_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_, v_a_409_, v_a_410_, v_a_411_, v_a_412_);
lean_dec(v_a_412_);
lean_dec_ref(v_a_411_);
lean_dec(v_a_410_);
lean_dec_ref(v_a_409_);
lean_dec(v_a_408_);
lean_dec_ref(v_a_407_);
lean_dec(v_a_406_);
lean_dec_ref(v_a_405_);
lean_dec(v_a_404_);
lean_dec(v_a_403_);
lean_dec_ref(v_e_402_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0(lean_object* v_00_u03b2_415_, lean_object* v_x_416_, lean_object* v_x_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___redArg(v_x_416_, v_x_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0___boxed(lean_object* v_00_u03b2_419_, lean_object* v_x_420_, lean_object* v_x_421_){
_start:
{
lean_object* v_res_422_; 
v_res_422_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0(v_00_u03b2_419_, v_x_420_, v_x_421_);
lean_dec_ref(v_x_421_);
lean_dec_ref(v_x_420_);
return v_res_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0(lean_object* v_00_u03b2_423_, lean_object* v_x_424_, size_t v_x_425_, lean_object* v_x_426_){
_start:
{
lean_object* v___x_427_; 
v___x_427_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg(v_x_424_, v_x_425_, v_x_426_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_428_, lean_object* v_x_429_, lean_object* v_x_430_, lean_object* v_x_431_){
_start:
{
size_t v_x_984__boxed_432_; lean_object* v_res_433_; 
v_x_984__boxed_432_ = lean_unbox_usize(v_x_430_);
lean_dec(v_x_430_);
v_res_433_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0(v_00_u03b2_428_, v_x_429_, v_x_984__boxed_432_, v_x_431_);
lean_dec_ref(v_x_431_);
lean_dec_ref(v_x_429_);
return v_res_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_434_, lean_object* v_keys_435_, lean_object* v_vals_436_, lean_object* v_heq_437_, lean_object* v_i_438_, lean_object* v_k_439_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___redArg(v_keys_435_, v_vals_436_, v_i_438_, v_k_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_441_, lean_object* v_keys_442_, lean_object* v_vals_443_, lean_object* v_heq_444_, lean_object* v_i_445_, lean_object* v_k_446_){
_start:
{
lean_object* v_res_447_; 
v_res_447_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0_spec__1(v_00_u03b2_441_, v_keys_442_, v_vals_443_, v_heq_444_, v_i_445_, v_k_446_);
lean_dec_ref(v_k_446_);
lean_dec_ref(v_vals_443_);
lean_dec_ref(v_keys_442_);
return v_res_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_448_, lean_object* v_x_449_, lean_object* v_x_450_, lean_object* v_x_451_){
_start:
{
lean_object* v_ks_452_; lean_object* v_vs_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_477_; 
v_ks_452_ = lean_ctor_get(v_x_448_, 0);
v_vs_453_ = lean_ctor_get(v_x_448_, 1);
v_isSharedCheck_477_ = !lean_is_exclusive(v_x_448_);
if (v_isSharedCheck_477_ == 0)
{
v___x_455_ = v_x_448_;
v_isShared_456_ = v_isSharedCheck_477_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_vs_453_);
lean_inc(v_ks_452_);
lean_dec(v_x_448_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_477_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; uint8_t v___x_458_; 
v___x_457_ = lean_array_get_size(v_ks_452_);
v___x_458_ = lean_nat_dec_lt(v_x_449_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_462_; 
lean_dec(v_x_449_);
v___x_459_ = lean_array_push(v_ks_452_, v_x_450_);
v___x_460_ = lean_array_push(v_vs_453_, v_x_451_);
if (v_isShared_456_ == 0)
{
lean_ctor_set(v___x_455_, 1, v___x_460_);
lean_ctor_set(v___x_455_, 0, v___x_459_);
v___x_462_ = v___x_455_;
goto v_reusejp_461_;
}
else
{
lean_object* v_reuseFailAlloc_463_; 
v_reuseFailAlloc_463_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_463_, 0, v___x_459_);
lean_ctor_set(v_reuseFailAlloc_463_, 1, v___x_460_);
v___x_462_ = v_reuseFailAlloc_463_;
goto v_reusejp_461_;
}
v_reusejp_461_:
{
return v___x_462_;
}
}
else
{
lean_object* v_k_x27_464_; uint8_t v___x_465_; 
v_k_x27_464_ = lean_array_fget_borrowed(v_ks_452_, v_x_449_);
v___x_465_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_450_, v_k_x27_464_);
if (v___x_465_ == 0)
{
lean_object* v___x_467_; 
if (v_isShared_456_ == 0)
{
v___x_467_ = v___x_455_;
goto v_reusejp_466_;
}
else
{
lean_object* v_reuseFailAlloc_471_; 
v_reuseFailAlloc_471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_471_, 0, v_ks_452_);
lean_ctor_set(v_reuseFailAlloc_471_, 1, v_vs_453_);
v___x_467_ = v_reuseFailAlloc_471_;
goto v_reusejp_466_;
}
v_reusejp_466_:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_468_ = lean_unsigned_to_nat(1u);
v___x_469_ = lean_nat_add(v_x_449_, v___x_468_);
lean_dec(v_x_449_);
v_x_448_ = v___x_467_;
v_x_449_ = v___x_469_;
goto _start;
}
}
else
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_475_; 
v___x_472_ = lean_array_fset(v_ks_452_, v_x_449_, v_x_450_);
v___x_473_ = lean_array_fset(v_vs_453_, v_x_449_, v_x_451_);
lean_dec(v_x_449_);
if (v_isShared_456_ == 0)
{
lean_ctor_set(v___x_455_, 1, v___x_473_);
lean_ctor_set(v___x_455_, 0, v___x_472_);
v___x_475_ = v___x_455_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_476_; 
v_reuseFailAlloc_476_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_476_, 0, v___x_472_);
lean_ctor_set(v_reuseFailAlloc_476_, 1, v___x_473_);
v___x_475_ = v_reuseFailAlloc_476_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
return v___x_475_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1___redArg(lean_object* v_n_478_, lean_object* v_k_479_, lean_object* v_v_480_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lean_unsigned_to_nat(0u);
v___x_482_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2___redArg(v_n_478_, v___x_481_, v_k_479_, v_v_480_);
return v___x_482_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(lean_object* v_x_484_, size_t v_x_485_, size_t v_x_486_, lean_object* v_x_487_, lean_object* v_x_488_){
_start:
{
if (lean_obj_tag(v_x_484_) == 0)
{
lean_object* v_es_489_; size_t v___x_490_; size_t v___x_491_; size_t v___x_492_; size_t v___x_493_; lean_object* v_j_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v_es_489_ = lean_ctor_get(v_x_484_, 0);
v___x_490_ = ((size_t)5ULL);
v___x_491_ = ((size_t)1ULL);
v___x_492_ = lean_usize_once(&l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__1, &l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f_spec__0_spec__0___redArg___closed__1);
v___x_493_ = lean_usize_land(v_x_485_, v___x_492_);
v_j_494_ = lean_usize_to_nat(v___x_493_);
v___x_495_ = lean_array_get_size(v_es_489_);
v___x_496_ = lean_nat_dec_lt(v_j_494_, v___x_495_);
if (v___x_496_ == 0)
{
lean_dec(v_j_494_);
lean_dec(v_x_488_);
lean_dec_ref(v_x_487_);
return v_x_484_;
}
else
{
lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_533_; 
lean_inc_ref(v_es_489_);
v_isSharedCheck_533_ = !lean_is_exclusive(v_x_484_);
if (v_isSharedCheck_533_ == 0)
{
lean_object* v_unused_534_; 
v_unused_534_ = lean_ctor_get(v_x_484_, 0);
lean_dec(v_unused_534_);
v___x_498_ = v_x_484_;
v_isShared_499_ = v_isSharedCheck_533_;
goto v_resetjp_497_;
}
else
{
lean_dec(v_x_484_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_533_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v_v_500_; lean_object* v___x_501_; lean_object* v_xs_x27_502_; lean_object* v___y_504_; 
v_v_500_ = lean_array_fget(v_es_489_, v_j_494_);
v___x_501_ = lean_box(0);
v_xs_x27_502_ = lean_array_fset(v_es_489_, v_j_494_, v___x_501_);
switch(lean_obj_tag(v_v_500_))
{
case 0:
{
lean_object* v_key_509_; lean_object* v_val_510_; lean_object* v___x_512_; uint8_t v_isShared_513_; uint8_t v_isSharedCheck_520_; 
v_key_509_ = lean_ctor_get(v_v_500_, 0);
v_val_510_ = lean_ctor_get(v_v_500_, 1);
v_isSharedCheck_520_ = !lean_is_exclusive(v_v_500_);
if (v_isSharedCheck_520_ == 0)
{
v___x_512_ = v_v_500_;
v_isShared_513_ = v_isSharedCheck_520_;
goto v_resetjp_511_;
}
else
{
lean_inc(v_val_510_);
lean_inc(v_key_509_);
lean_dec(v_v_500_);
v___x_512_ = lean_box(0);
v_isShared_513_ = v_isSharedCheck_520_;
goto v_resetjp_511_;
}
v_resetjp_511_:
{
uint8_t v___x_514_; 
v___x_514_ = l___private_Lean_Meta_Sym_ExprPtr_0__Lean_Meta_Sym_isSameExpr_unsafe__1(v_x_487_, v_key_509_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; lean_object* v___x_516_; 
lean_del_object(v___x_512_);
v___x_515_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_509_, v_val_510_, v_x_487_, v_x_488_);
v___x_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_516_, 0, v___x_515_);
v___y_504_ = v___x_516_;
goto v___jp_503_;
}
else
{
lean_object* v___x_518_; 
lean_dec(v_val_510_);
lean_dec(v_key_509_);
if (v_isShared_513_ == 0)
{
lean_ctor_set(v___x_512_, 1, v_x_488_);
lean_ctor_set(v___x_512_, 0, v_x_487_);
v___x_518_ = v___x_512_;
goto v_reusejp_517_;
}
else
{
lean_object* v_reuseFailAlloc_519_; 
v_reuseFailAlloc_519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_519_, 0, v_x_487_);
lean_ctor_set(v_reuseFailAlloc_519_, 1, v_x_488_);
v___x_518_ = v_reuseFailAlloc_519_;
goto v_reusejp_517_;
}
v_reusejp_517_:
{
v___y_504_ = v___x_518_;
goto v___jp_503_;
}
}
}
}
case 1:
{
lean_object* v_node_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_531_; 
v_node_521_ = lean_ctor_get(v_v_500_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v_v_500_);
if (v_isSharedCheck_531_ == 0)
{
v___x_523_ = v_v_500_;
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_node_521_);
lean_dec(v_v_500_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_531_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
size_t v___x_525_; size_t v___x_526_; lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_525_ = lean_usize_shift_right(v_x_485_, v___x_490_);
v___x_526_ = lean_usize_add(v_x_486_, v___x_491_);
v___x_527_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(v_node_521_, v___x_525_, v___x_526_, v_x_487_, v_x_488_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_527_);
v___x_529_ = v___x_523_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v___x_527_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
v___y_504_ = v___x_529_;
goto v___jp_503_;
}
}
}
default: 
{
lean_object* v___x_532_; 
v___x_532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_532_, 0, v_x_487_);
lean_ctor_set(v___x_532_, 1, v_x_488_);
v___y_504_ = v___x_532_;
goto v___jp_503_;
}
}
v___jp_503_:
{
lean_object* v___x_505_; lean_object* v___x_507_; 
v___x_505_ = lean_array_fset(v_xs_x27_502_, v_j_494_, v___y_504_);
lean_dec(v_j_494_);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_505_);
v___x_507_ = v___x_498_;
goto v_reusejp_506_;
}
else
{
lean_object* v_reuseFailAlloc_508_; 
v_reuseFailAlloc_508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_508_, 0, v___x_505_);
v___x_507_ = v_reuseFailAlloc_508_;
goto v_reusejp_506_;
}
v_reusejp_506_:
{
return v___x_507_;
}
}
}
}
}
else
{
lean_object* v_ks_535_; lean_object* v_vs_536_; lean_object* v___x_538_; uint8_t v_isShared_539_; uint8_t v_isSharedCheck_556_; 
v_ks_535_ = lean_ctor_get(v_x_484_, 0);
v_vs_536_ = lean_ctor_get(v_x_484_, 1);
v_isSharedCheck_556_ = !lean_is_exclusive(v_x_484_);
if (v_isSharedCheck_556_ == 0)
{
v___x_538_ = v_x_484_;
v_isShared_539_ = v_isSharedCheck_556_;
goto v_resetjp_537_;
}
else
{
lean_inc(v_vs_536_);
lean_inc(v_ks_535_);
lean_dec(v_x_484_);
v___x_538_ = lean_box(0);
v_isShared_539_ = v_isSharedCheck_556_;
goto v_resetjp_537_;
}
v_resetjp_537_:
{
lean_object* v___x_541_; 
if (v_isShared_539_ == 0)
{
v___x_541_ = v___x_538_;
goto v_reusejp_540_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_ks_535_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_vs_536_);
v___x_541_ = v_reuseFailAlloc_555_;
goto v_reusejp_540_;
}
v_reusejp_540_:
{
lean_object* v_newNode_542_; uint8_t v___y_544_; size_t v___x_550_; uint8_t v___x_551_; 
v_newNode_542_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1___redArg(v___x_541_, v_x_487_, v_x_488_);
v___x_550_ = ((size_t)7ULL);
v___x_551_ = lean_usize_dec_le(v___x_550_, v_x_486_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_552_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_542_);
v___x_553_ = lean_unsigned_to_nat(4u);
v___x_554_ = lean_nat_dec_lt(v___x_552_, v___x_553_);
lean_dec(v___x_552_);
v___y_544_ = v___x_554_;
goto v___jp_543_;
}
else
{
v___y_544_ = v___x_551_;
goto v___jp_543_;
}
v___jp_543_:
{
if (v___y_544_ == 0)
{
lean_object* v_ks_545_; lean_object* v_vs_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; 
v_ks_545_ = lean_ctor_get(v_newNode_542_, 0);
lean_inc_ref(v_ks_545_);
v_vs_546_ = lean_ctor_get(v_newNode_542_, 1);
lean_inc_ref(v_vs_546_);
lean_dec_ref(v_newNode_542_);
v___x_547_ = lean_unsigned_to_nat(0u);
v___x_548_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___closed__0);
v___x_549_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg(v_x_486_, v_ks_545_, v_vs_546_, v___x_547_, v___x_548_);
lean_dec_ref(v_vs_546_);
lean_dec_ref(v_ks_545_);
return v___x_549_;
}
else
{
return v_newNode_542_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg(size_t v_depth_557_, lean_object* v_keys_558_, lean_object* v_vals_559_, lean_object* v_i_560_, lean_object* v_entries_561_){
_start:
{
lean_object* v___x_562_; uint8_t v___x_563_; 
v___x_562_ = lean_array_get_size(v_keys_558_);
v___x_563_ = lean_nat_dec_lt(v_i_560_, v___x_562_);
if (v___x_563_ == 0)
{
lean_dec(v_i_560_);
return v_entries_561_;
}
else
{
lean_object* v_k_564_; lean_object* v_v_565_; uint64_t v___x_566_; size_t v_h_567_; size_t v___x_568_; lean_object* v___x_569_; size_t v___x_570_; size_t v___x_571_; size_t v___x_572_; size_t v_h_573_; lean_object* v___x_574_; lean_object* v___x_575_; 
v_k_564_ = lean_array_fget_borrowed(v_keys_558_, v_i_560_);
v_v_565_ = lean_array_fget_borrowed(v_vals_559_, v_i_560_);
v___x_566_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_k_564_);
v_h_567_ = lean_uint64_to_usize(v___x_566_);
v___x_568_ = ((size_t)5ULL);
v___x_569_ = lean_unsigned_to_nat(1u);
v___x_570_ = ((size_t)1ULL);
v___x_571_ = lean_usize_sub(v_depth_557_, v___x_570_);
v___x_572_ = lean_usize_mul(v___x_568_, v___x_571_);
v_h_573_ = lean_usize_shift_right(v_h_567_, v___x_572_);
v___x_574_ = lean_nat_add(v_i_560_, v___x_569_);
lean_dec(v_i_560_);
lean_inc(v_v_565_);
lean_inc(v_k_564_);
v___x_575_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(v_entries_561_, v_h_573_, v_depth_557_, v_k_564_, v_v_565_);
v_i_560_ = v___x_574_;
v_entries_561_ = v___x_575_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_577_, lean_object* v_keys_578_, lean_object* v_vals_579_, lean_object* v_i_580_, lean_object* v_entries_581_){
_start:
{
size_t v_depth_boxed_582_; lean_object* v_res_583_; 
v_depth_boxed_582_ = lean_unbox_usize(v_depth_577_);
lean_dec(v_depth_577_);
v_res_583_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg(v_depth_boxed_582_, v_keys_578_, v_vals_579_, v_i_580_, v_entries_581_);
lean_dec_ref(v_vals_579_);
lean_dec_ref(v_keys_578_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg___boxed(lean_object* v_x_584_, lean_object* v_x_585_, lean_object* v_x_586_, lean_object* v_x_587_, lean_object* v_x_588_){
_start:
{
size_t v_x_7030__boxed_589_; size_t v_x_7031__boxed_590_; lean_object* v_res_591_; 
v_x_7030__boxed_589_ = lean_unbox_usize(v_x_585_);
lean_dec(v_x_585_);
v_x_7031__boxed_590_ = lean_unbox_usize(v_x_586_);
lean_dec(v_x_586_);
v_res_591_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(v_x_584_, v_x_7030__boxed_589_, v_x_7031__boxed_590_, v_x_587_, v_x_588_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0___redArg(lean_object* v_x_592_, lean_object* v_x_593_, lean_object* v_x_594_){
_start:
{
uint64_t v___x_595_; size_t v___x_596_; size_t v___x_597_; lean_object* v___x_598_; 
v___x_595_ = l_Lean_Meta_Sym_hashPtrExpr_unsafe__1(v_x_593_);
v___x_596_ = lean_uint64_to_usize(v___x_595_);
v___x_597_ = ((size_t)1ULL);
v___x_598_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(v_x_592_, v___x_596_, v___x_597_, v_x_593_, v_x_594_);
return v___x_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0(lean_object* v_e_599_, lean_object* v_a_600_, lean_object* v_s_601_){
_start:
{
lean_object* v_structs_602_; lean_object* v_typeIdOf_603_; lean_object* v_exprToStructId_604_; lean_object* v_exprToStructIdEntries_605_; lean_object* v_forbiddenNatModules_606_; lean_object* v_natStructs_607_; lean_object* v_natTypeIdOf_608_; lean_object* v_exprToNatStructId_609_; lean_object* v___x_611_; uint8_t v_isShared_612_; uint8_t v_isSharedCheck_619_; 
v_structs_602_ = lean_ctor_get(v_s_601_, 0);
v_typeIdOf_603_ = lean_ctor_get(v_s_601_, 1);
v_exprToStructId_604_ = lean_ctor_get(v_s_601_, 2);
v_exprToStructIdEntries_605_ = lean_ctor_get(v_s_601_, 3);
v_forbiddenNatModules_606_ = lean_ctor_get(v_s_601_, 4);
v_natStructs_607_ = lean_ctor_get(v_s_601_, 5);
v_natTypeIdOf_608_ = lean_ctor_get(v_s_601_, 6);
v_exprToNatStructId_609_ = lean_ctor_get(v_s_601_, 7);
v_isSharedCheck_619_ = !lean_is_exclusive(v_s_601_);
if (v_isSharedCheck_619_ == 0)
{
v___x_611_ = v_s_601_;
v_isShared_612_ = v_isSharedCheck_619_;
goto v_resetjp_610_;
}
else
{
lean_inc(v_exprToNatStructId_609_);
lean_inc(v_natTypeIdOf_608_);
lean_inc(v_natStructs_607_);
lean_inc(v_forbiddenNatModules_606_);
lean_inc(v_exprToStructIdEntries_605_);
lean_inc(v_exprToStructId_604_);
lean_inc(v_typeIdOf_603_);
lean_inc(v_structs_602_);
lean_dec(v_s_601_);
v___x_611_ = lean_box(0);
v_isShared_612_ = v_isSharedCheck_619_;
goto v_resetjp_610_;
}
v_resetjp_610_:
{
lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_617_; 
lean_inc_n(v_a_600_, 2);
lean_inc_ref(v_e_599_);
v___x_613_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0___redArg(v_exprToStructId_604_, v_e_599_, v_a_600_);
v___x_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_614_, 0, v_e_599_);
lean_ctor_set(v___x_614_, 1, v_a_600_);
v___x_615_ = l_Lean_PersistentArray_push___redArg(v_exprToStructIdEntries_605_, v___x_614_);
if (v_isShared_612_ == 0)
{
lean_ctor_set(v___x_611_, 3, v___x_615_);
lean_ctor_set(v___x_611_, 2, v___x_613_);
v___x_617_ = v___x_611_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_structs_602_);
lean_ctor_set(v_reuseFailAlloc_618_, 1, v_typeIdOf_603_);
lean_ctor_set(v_reuseFailAlloc_618_, 2, v___x_613_);
lean_ctor_set(v_reuseFailAlloc_618_, 3, v___x_615_);
lean_ctor_set(v_reuseFailAlloc_618_, 4, v_forbiddenNatModules_606_);
lean_ctor_set(v_reuseFailAlloc_618_, 5, v_natStructs_607_);
lean_ctor_set(v_reuseFailAlloc_618_, 6, v_natTypeIdOf_608_);
lean_ctor_set(v_reuseFailAlloc_618_, 7, v_exprToNatStructId_609_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0___boxed(lean_object* v_e_620_, lean_object* v_a_621_, lean_object* v_s_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0(v_e_620_, v_a_621_, v_s_622_);
lean_dec(v_a_621_);
return v_res_623_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__0(void){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = lean_mk_string_unchecked("expression in two different structure in linarith module", 56, 56);
return v___x_624_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1(void){
_start:
{
lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_625_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__0, &l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__0);
v___x_626_ = l_Lean_stringToMessageData(v___x_625_);
return v___x_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg(lean_object* v_e_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_){
_start:
{
lean_object* v___x_640_; 
v___x_640_ = l_Lean_Meta_Grind_Arith_Linear_getTermStructId_x3f___redArg(v_e_627_, v_a_629_, v_a_634_, v_a_635_);
if (lean_obj_tag(v___x_640_) == 0)
{
lean_object* v_a_641_; 
v_a_641_ = lean_ctor_get(v___x_640_, 0);
lean_inc(v_a_641_);
lean_dec_ref(v___x_640_);
if (lean_obj_tag(v_a_641_) == 1)
{
lean_object* v_val_642_; uint8_t v___x_643_; 
v_val_642_ = lean_ctor_get(v_a_641_, 0);
lean_inc(v_val_642_);
lean_dec_ref(v_a_641_);
v___x_643_ = lean_nat_dec_eq(v_val_642_, v_a_628_);
lean_dec(v_val_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_Meta_Sym_getConfig___redArg(v_a_630_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v_a_645_; uint8_t v___x_646_; 
v_a_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_a_645_);
lean_dec_ref(v___x_644_);
v___x_646_ = lean_unbox(v_a_645_);
lean_dec(v_a_645_);
if (v___x_646_ == 0)
{
lean_dec_ref(v_e_627_);
goto v___jp_637_;
}
else
{
lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
v___x_647_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1, &l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___closed__1);
v___x_648_ = l_Lean_indentExpr(v_e_627_);
v___x_649_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_649_, 0, v___x_647_);
lean_ctor_set(v___x_649_, 1, v___x_648_);
v___x_650_ = l_Lean_Meta_Sym_reportIssue(v___x_649_, v_a_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_dec_ref(v___x_650_);
goto v___jp_637_;
}
else
{
return v___x_650_;
}
}
}
else
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_658_; 
lean_dec_ref(v_e_627_);
v_a_651_ = lean_ctor_get(v___x_644_, 0);
v_isSharedCheck_658_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_658_ == 0)
{
v___x_653_ = v___x_644_;
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_644_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_658_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_656_; 
if (v_isShared_654_ == 0)
{
v___x_656_ = v___x_653_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_a_651_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
}
else
{
lean_dec_ref(v_e_627_);
goto v___jp_637_;
}
}
else
{
lean_object* v___f_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
lean_dec(v_a_641_);
lean_inc(v_a_628_);
v___f_659_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_659_, 0, v_e_627_);
lean_closure_set(v___f_659_, 1, v_a_628_);
v___x_660_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_661_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_660_, v___f_659_, v_a_629_, v_a_635_);
return v___x_661_;
}
}
else
{
lean_object* v_a_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_669_; 
lean_dec_ref(v_e_627_);
v_a_662_ = lean_ctor_get(v___x_640_, 0);
v_isSharedCheck_669_ = !lean_is_exclusive(v___x_640_);
if (v_isSharedCheck_669_ == 0)
{
v___x_664_ = v___x_640_;
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_a_662_);
lean_dec(v___x_640_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_669_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v___x_667_; 
if (v_isShared_665_ == 0)
{
v___x_667_ = v___x_664_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_668_; 
v_reuseFailAlloc_668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_668_, 0, v_a_662_);
v___x_667_ = v_reuseFailAlloc_668_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
return v___x_667_;
}
}
}
v___jp_637_:
{
lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_638_ = lean_box(0);
v___x_639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_639_, 0, v___x_638_);
return v___x_639_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg___boxed(lean_object* v_e_670_, lean_object* v_a_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_){
_start:
{
lean_object* v_res_680_; 
v_res_680_ = l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg(v_e_670_, v_a_671_, v_a_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_);
lean_dec(v_a_678_);
lean_dec_ref(v_a_677_);
lean_dec(v_a_676_);
lean_dec_ref(v_a_675_);
lean_dec(v_a_674_);
lean_dec_ref(v_a_673_);
lean_dec(v_a_672_);
lean_dec(v_a_671_);
return v_res_680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId(lean_object* v_e_681_, lean_object* v_a_682_, lean_object* v_a_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = l_Lean_Meta_Grind_Arith_Linear_setTermStructId___redArg(v_e_681_, v_a_682_, v_a_683_, v_a_687_, v_a_688_, v_a_689_, v_a_690_, v_a_691_, v_a_692_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_setTermStructId___boxed(lean_object* v_e_695_, lean_object* v_a_696_, lean_object* v_a_697_, lean_object* v_a_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_){
_start:
{
lean_object* v_res_708_; 
v_res_708_ = l_Lean_Meta_Grind_Arith_Linear_setTermStructId(v_e_695_, v_a_696_, v_a_697_, v_a_698_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
lean_dec(v_a_706_);
lean_dec_ref(v_a_705_);
lean_dec(v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec(v_a_702_);
lean_dec_ref(v_a_701_);
lean_dec(v_a_700_);
lean_dec_ref(v_a_699_);
lean_dec(v_a_698_);
lean_dec(v_a_697_);
lean_dec(v_a_696_);
return v_res_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0(lean_object* v_00_u03b2_709_, lean_object* v_x_710_, lean_object* v_x_711_, lean_object* v_x_712_){
_start:
{
lean_object* v___x_713_; 
v___x_713_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0___redArg(v_x_710_, v_x_711_, v_x_712_);
return v___x_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0(lean_object* v_00_u03b2_714_, lean_object* v_x_715_, size_t v_x_716_, size_t v_x_717_, lean_object* v_x_718_, lean_object* v_x_719_){
_start:
{
lean_object* v___x_720_; 
v___x_720_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___redArg(v_x_715_, v_x_716_, v_x_717_, v_x_718_, v_x_719_);
return v___x_720_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0___boxed(lean_object* v_00_u03b2_721_, lean_object* v_x_722_, lean_object* v_x_723_, lean_object* v_x_724_, lean_object* v_x_725_, lean_object* v_x_726_){
_start:
{
size_t v_x_7313__boxed_727_; size_t v_x_7314__boxed_728_; lean_object* v_res_729_; 
v_x_7313__boxed_727_ = lean_unbox_usize(v_x_723_);
lean_dec(v_x_723_);
v_x_7314__boxed_728_ = lean_unbox_usize(v_x_724_);
lean_dec(v_x_724_);
v_res_729_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0(v_00_u03b2_721_, v_x_722_, v_x_7313__boxed_727_, v_x_7314__boxed_728_, v_x_725_, v_x_726_);
return v_res_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_730_, lean_object* v_n_731_, lean_object* v_k_732_, lean_object* v_v_733_){
_start:
{
lean_object* v___x_734_; 
v___x_734_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1___redArg(v_n_731_, v_k_732_, v_v_733_);
return v___x_734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_735_, size_t v_depth_736_, lean_object* v_keys_737_, lean_object* v_vals_738_, lean_object* v_heq_739_, lean_object* v_i_740_, lean_object* v_entries_741_){
_start:
{
lean_object* v___x_742_; 
v___x_742_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___redArg(v_depth_736_, v_keys_737_, v_vals_738_, v_i_740_, v_entries_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_743_, lean_object* v_depth_744_, lean_object* v_keys_745_, lean_object* v_vals_746_, lean_object* v_heq_747_, lean_object* v_i_748_, lean_object* v_entries_749_){
_start:
{
size_t v_depth_boxed_750_; lean_object* v_res_751_; 
v_depth_boxed_750_ = lean_unbox_usize(v_depth_744_);
lean_dec(v_depth_744_);
v_res_751_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__2(v_00_u03b2_743_, v_depth_boxed_750_, v_keys_745_, v_vals_746_, v_heq_747_, v_i_748_, v_entries_749_);
lean_dec_ref(v_vals_746_);
lean_dec_ref(v_keys_745_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_752_, lean_object* v_x_753_, lean_object* v_x_754_, lean_object* v_x_755_, lean_object* v_x_756_){
_start:
{
lean_object* v___x_757_; 
v___x_757_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_Arith_Linear_setTermStructId_spec__0_spec__0_spec__1_spec__2___redArg(v_x_753_, v_x_754_, v_x_755_, v_x_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0(lean_object* v_msgData_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v___x_764_; lean_object* v_env_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v_mctx_768_; lean_object* v_lctx_769_; lean_object* v_options_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_764_ = lean_st_ref_get(v___y_762_);
v_env_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc_ref(v_env_765_);
lean_dec(v___x_764_);
v___x_766_ = lean_st_ref_get(v___y_762_);
lean_dec(v___x_766_);
v___x_767_ = lean_st_ref_get(v___y_760_);
v_mctx_768_ = lean_ctor_get(v___x_767_, 0);
lean_inc_ref(v_mctx_768_);
lean_dec(v___x_767_);
v_lctx_769_ = lean_ctor_get(v___y_759_, 2);
v_options_770_ = lean_ctor_get(v___y_761_, 2);
lean_inc_ref(v_options_770_);
lean_inc_ref(v_lctx_769_);
v___x_771_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_771_, 0, v_env_765_);
lean_ctor_set(v___x_771_, 1, v_mctx_768_);
lean_ctor_set(v___x_771_, 2, v_lctx_769_);
lean_ctor_set(v___x_771_, 3, v_options_770_);
v___x_772_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
lean_ctor_set(v___x_772_, 1, v_msgData_758_);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0___boxed(lean_object* v_msgData_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0(v_msgData_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec_ref(v___y_775_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(lean_object* v_msg_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_ref_787_; lean_object* v___x_788_; lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_797_; 
v_ref_787_ = lean_ctor_get(v___y_784_, 5);
v___x_788_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0_spec__0(v_msg_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
v_a_789_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_797_ == 0)
{
v___x_791_ = v___x_788_;
v_isShared_792_ = v_isSharedCheck_797_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_788_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_797_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_793_; lean_object* v___x_795_; 
lean_inc(v_ref_787_);
v___x_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_793_, 0, v_ref_787_);
lean_ctor_set(v___x_793_, 1, v_a_789_);
if (v_isShared_792_ == 0)
{
lean_ctor_set_tag(v___x_791_, 1);
lean_ctor_set(v___x_791_, 0, v___x_793_);
v___x_795_ = v___x_791_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v___x_793_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg___boxed(lean_object* v_msg_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v_msg_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_);
lean_dec(v___y_802_);
lean_dec_ref(v___y_801_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
return v_res_804_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__0(void){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = lean_mk_string_unchecked("`grind linarith` internal error, structure does not implement `NoNatZeroDivisors`", 81, 81);
return v___x_805_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1(void){
_start:
{
lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_806_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__0);
v___x_807_ = l_Lean_stringToMessageData(v___x_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst(lean_object* v_a_808_, lean_object* v_a_809_, lean_object* v_a_810_, lean_object* v_a_811_, lean_object* v_a_812_, lean_object* v_a_813_, lean_object* v_a_814_, lean_object* v_a_815_, lean_object* v_a_816_, lean_object* v_a_817_, lean_object* v_a_818_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_808_, v_a_809_, v_a_810_, v_a_811_, v_a_812_, v_a_813_, v_a_814_, v_a_815_, v_a_816_, v_a_817_, v_a_818_);
if (lean_obj_tag(v___x_820_) == 0)
{
lean_object* v_a_821_; lean_object* v___x_823_; uint8_t v_isShared_824_; uint8_t v_isSharedCheck_832_; 
v_a_821_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_832_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_832_ == 0)
{
v___x_823_ = v___x_820_;
v_isShared_824_ = v_isSharedCheck_832_;
goto v_resetjp_822_;
}
else
{
lean_inc(v_a_821_);
lean_dec(v___x_820_);
v___x_823_ = lean_box(0);
v_isShared_824_ = v_isSharedCheck_832_;
goto v_resetjp_822_;
}
v_resetjp_822_:
{
lean_object* v_noNatDivInst_x3f_825_; 
v_noNatDivInst_x3f_825_ = lean_ctor_get(v_a_821_, 11);
lean_inc(v_noNatDivInst_x3f_825_);
lean_dec(v_a_821_);
if (lean_obj_tag(v_noNatDivInst_x3f_825_) == 1)
{
lean_object* v_val_826_; lean_object* v___x_828_; 
v_val_826_ = lean_ctor_get(v_noNatDivInst_x3f_825_, 0);
lean_inc(v_val_826_);
lean_dec_ref(v_noNatDivInst_x3f_825_);
if (v_isShared_824_ == 0)
{
lean_ctor_set(v___x_823_, 0, v_val_826_);
v___x_828_ = v___x_823_;
goto v_reusejp_827_;
}
else
{
lean_object* v_reuseFailAlloc_829_; 
v_reuseFailAlloc_829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_829_, 0, v_val_826_);
v___x_828_ = v_reuseFailAlloc_829_;
goto v_reusejp_827_;
}
v_reusejp_827_:
{
return v___x_828_;
}
}
else
{
lean_object* v___x_830_; lean_object* v___x_831_; 
lean_dec(v_noNatDivInst_x3f_825_);
lean_del_object(v___x_823_);
v___x_830_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___closed__1);
v___x_831_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_830_, v_a_815_, v_a_816_, v_a_817_, v_a_818_);
return v___x_831_;
}
}
}
else
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_840_; 
v_a_833_ = lean_ctor_get(v___x_820_, 0);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_820_);
if (v_isSharedCheck_840_ == 0)
{
v___x_835_ = v___x_820_;
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_820_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_840_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v___x_838_; 
if (v_isShared_836_ == 0)
{
v___x_838_ = v___x_835_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_a_833_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst___boxed(lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_, lean_object* v_a_845_, lean_object* v_a_846_, lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_){
_start:
{
lean_object* v_res_853_; 
v_res_853_ = l_Lean_Meta_Grind_Arith_Linear_getNoNatDivInst(v_a_841_, v_a_842_, v_a_843_, v_a_844_, v_a_845_, v_a_846_, v_a_847_, v_a_848_, v_a_849_, v_a_850_, v_a_851_);
lean_dec(v_a_851_);
lean_dec_ref(v_a_850_);
lean_dec(v_a_849_);
lean_dec_ref(v_a_848_);
lean_dec(v_a_847_);
lean_dec_ref(v_a_846_);
lean_dec(v_a_845_);
lean_dec_ref(v_a_844_);
lean_dec(v_a_843_);
lean_dec(v_a_842_);
lean_dec(v_a_841_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0(lean_object* v_00_u03b1_854_, lean_object* v_msg_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_){
_start:
{
lean_object* v___x_868_; 
v___x_868_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v_msg_855_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
return v___x_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___boxed(lean_object* v_00_u03b1_869_, lean_object* v_msg_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_){
_start:
{
lean_object* v_res_883_; 
v_res_883_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0(v_00_u03b1_869_, v_msg_870_, v___y_871_, v___y_872_, v___y_873_, v___y_874_, v___y_875_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
lean_dec(v___y_881_);
lean_dec_ref(v___y_880_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v___y_877_);
lean_dec_ref(v___y_876_);
lean_dec(v___y_875_);
lean_dec_ref(v___y_874_);
lean_dec(v___y_873_);
lean_dec(v___y_872_);
lean_dec(v___y_871_);
return v_res_883_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__0(void){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = lean_mk_string_unchecked("`grind linarith` internal error, structure does not support LE", 62, 62);
return v___x_884_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1(void){
_start:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__0);
v___x_886_ = l_Lean_stringToMessageData(v___x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst(lean_object* v_a_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_);
if (lean_obj_tag(v___x_899_) == 0)
{
lean_object* v_a_900_; lean_object* v___x_902_; uint8_t v_isShared_903_; uint8_t v_isSharedCheck_911_; 
v_a_900_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_911_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_911_ == 0)
{
v___x_902_ = v___x_899_;
v_isShared_903_ = v_isSharedCheck_911_;
goto v_resetjp_901_;
}
else
{
lean_inc(v_a_900_);
lean_dec(v___x_899_);
v___x_902_ = lean_box(0);
v_isShared_903_ = v_isSharedCheck_911_;
goto v_resetjp_901_;
}
v_resetjp_901_:
{
lean_object* v_leInst_x3f_904_; 
v_leInst_x3f_904_ = lean_ctor_get(v_a_900_, 5);
lean_inc(v_leInst_x3f_904_);
lean_dec(v_a_900_);
if (lean_obj_tag(v_leInst_x3f_904_) == 1)
{
lean_object* v_val_905_; lean_object* v___x_907_; 
v_val_905_ = lean_ctor_get(v_leInst_x3f_904_, 0);
lean_inc(v_val_905_);
lean_dec_ref(v_leInst_x3f_904_);
if (v_isShared_903_ == 0)
{
lean_ctor_set(v___x_902_, 0, v_val_905_);
v___x_907_ = v___x_902_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_val_905_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
else
{
lean_object* v___x_909_; lean_object* v___x_910_; 
lean_dec(v_leInst_x3f_904_);
lean_del_object(v___x_902_);
v___x_909_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLEInst___closed__1);
v___x_910_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_909_, v_a_894_, v_a_895_, v_a_896_, v_a_897_);
return v___x_910_;
}
}
}
else
{
lean_object* v_a_912_; lean_object* v___x_914_; uint8_t v_isShared_915_; uint8_t v_isSharedCheck_919_; 
v_a_912_ = lean_ctor_get(v___x_899_, 0);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_899_);
if (v_isSharedCheck_919_ == 0)
{
v___x_914_ = v___x_899_;
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
else
{
lean_inc(v_a_912_);
lean_dec(v___x_899_);
v___x_914_ = lean_box(0);
v_isShared_915_ = v_isSharedCheck_919_;
goto v_resetjp_913_;
}
v_resetjp_913_:
{
lean_object* v___x_917_; 
if (v_isShared_915_ == 0)
{
v___x_917_ = v___x_914_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v_a_912_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLEInst___boxed(lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_, lean_object* v_a_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_Meta_Grind_Arith_Linear_getLEInst(v_a_920_, v_a_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_, v_a_926_, v_a_927_, v_a_928_, v_a_929_, v_a_930_);
lean_dec(v_a_930_);
lean_dec_ref(v_a_929_);
lean_dec(v_a_928_);
lean_dec_ref(v_a_927_);
lean_dec(v_a_926_);
lean_dec_ref(v_a_925_);
lean_dec(v_a_924_);
lean_dec_ref(v_a_923_);
lean_dec(v_a_922_);
lean_dec(v_a_921_);
lean_dec(v_a_920_);
return v_res_932_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__0(void){
_start:
{
lean_object* v___x_933_; 
v___x_933_ = lean_mk_string_unchecked("`grind linarith` internal error, structure does not support LT", 62, 62);
return v___x_933_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_934_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__0);
v___x_935_ = l_Lean_stringToMessageData(v___x_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst(lean_object* v_a_936_, lean_object* v_a_937_, lean_object* v_a_938_, lean_object* v_a_939_, lean_object* v_a_940_, lean_object* v_a_941_, lean_object* v_a_942_, lean_object* v_a_943_, lean_object* v_a_944_, lean_object* v_a_945_, lean_object* v_a_946_){
_start:
{
lean_object* v___x_948_; 
v___x_948_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_936_, v_a_937_, v_a_938_, v_a_939_, v_a_940_, v_a_941_, v_a_942_, v_a_943_, v_a_944_, v_a_945_, v_a_946_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_960_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_960_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_960_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_960_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_960_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v_ltInst_x3f_953_; 
v_ltInst_x3f_953_ = lean_ctor_get(v_a_949_, 6);
lean_inc(v_ltInst_x3f_953_);
lean_dec(v_a_949_);
if (lean_obj_tag(v_ltInst_x3f_953_) == 1)
{
lean_object* v_val_954_; lean_object* v___x_956_; 
v_val_954_ = lean_ctor_get(v_ltInst_x3f_953_, 0);
lean_inc(v_val_954_);
lean_dec_ref(v_ltInst_x3f_953_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v_val_954_);
v___x_956_ = v___x_951_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_val_954_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
else
{
lean_object* v___x_958_; lean_object* v___x_959_; 
lean_dec(v_ltInst_x3f_953_);
lean_del_object(v___x_951_);
v___x_958_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLTInst___closed__1);
v___x_959_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_958_, v_a_943_, v_a_944_, v_a_945_, v_a_946_);
return v___x_959_;
}
}
}
else
{
lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_968_; 
v_a_961_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_968_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_968_ == 0)
{
v___x_963_ = v___x_948_;
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_dec(v___x_948_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_968_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_964_ == 0)
{
v___x_966_ = v___x_963_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v_a_961_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLTInst___boxed(lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_, lean_object* v_a_976_, lean_object* v_a_977_, lean_object* v_a_978_, lean_object* v_a_979_, lean_object* v_a_980_){
_start:
{
lean_object* v_res_981_; 
v_res_981_ = l_Lean_Meta_Grind_Arith_Linear_getLTInst(v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_, v_a_975_, v_a_976_, v_a_977_, v_a_978_, v_a_979_);
lean_dec(v_a_979_);
lean_dec_ref(v_a_978_);
lean_dec(v_a_977_);
lean_dec_ref(v_a_976_);
lean_dec(v_a_975_);
lean_dec_ref(v_a_974_);
lean_dec(v_a_973_);
lean_dec_ref(v_a_972_);
lean_dec(v_a_971_);
lean_dec(v_a_970_);
lean_dec(v_a_969_);
return v_res_981_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__0(void){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = lean_mk_string_unchecked("`grind linarith` internal error, structure does not have a lawful LT instance", 77, 77);
return v___x_982_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1(void){
_start:
{
lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_983_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__0);
v___x_984_ = l_Lean_stringToMessageData(v___x_983_);
return v___x_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst(lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_, lean_object* v_a_990_, lean_object* v_a_991_, lean_object* v_a_992_, lean_object* v_a_993_, lean_object* v_a_994_, lean_object* v_a_995_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_985_, v_a_986_, v_a_987_, v_a_988_, v_a_989_, v_a_990_, v_a_991_, v_a_992_, v_a_993_, v_a_994_, v_a_995_);
if (lean_obj_tag(v___x_997_) == 0)
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1009_; 
v_a_998_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1000_ = v___x_997_;
v_isShared_1001_ = v_isSharedCheck_1009_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_997_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1009_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v_lawfulOrderLTInst_x3f_1002_; 
v_lawfulOrderLTInst_x3f_1002_ = lean_ctor_get(v_a_998_, 7);
lean_inc(v_lawfulOrderLTInst_x3f_1002_);
lean_dec(v_a_998_);
if (lean_obj_tag(v_lawfulOrderLTInst_x3f_1002_) == 1)
{
lean_object* v_val_1003_; lean_object* v___x_1005_; 
v_val_1003_ = lean_ctor_get(v_lawfulOrderLTInst_x3f_1002_, 0);
lean_inc(v_val_1003_);
lean_dec_ref(v_lawfulOrderLTInst_x3f_1002_);
if (v_isShared_1001_ == 0)
{
lean_ctor_set(v___x_1000_, 0, v_val_1003_);
v___x_1005_ = v___x_1000_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_val_1003_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
else
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
lean_dec(v_lawfulOrderLTInst_x3f_1002_);
lean_del_object(v___x_1000_);
v___x_1007_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___closed__1);
v___x_1008_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1007_, v_a_992_, v_a_993_, v_a_994_, v_a_995_);
return v___x_1008_;
}
}
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
v_a_1010_ = lean_ctor_get(v___x_997_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_997_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_997_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_997_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst___boxed(lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_, lean_object* v_a_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l_Lean_Meta_Grind_Arith_Linear_getLawfulOrderLTInst(v_a_1018_, v_a_1019_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_, v_a_1027_, v_a_1028_);
lean_dec(v_a_1028_);
lean_dec_ref(v_a_1027_);
lean_dec(v_a_1026_);
lean_dec_ref(v_a_1025_);
lean_dec(v_a_1024_);
lean_dec_ref(v_a_1023_);
lean_dec(v_a_1022_);
lean_dec_ref(v_a_1021_);
lean_dec(v_a_1020_);
lean_dec(v_a_1019_);
lean_dec(v_a_1018_);
return v_res_1030_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__0(void){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = lean_mk_string_unchecked("`grind linarith` internal error, structure is not a preorder", 60, 60);
return v___x_1031_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1(void){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1032_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__0);
v___x_1033_ = l_Lean_stringToMessageData(v___x_1032_);
return v___x_1033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst(lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_){
_start:
{
lean_object* v___x_1046_; 
v___x_1046_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_);
if (lean_obj_tag(v___x_1046_) == 0)
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1058_; 
v_a_1047_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1058_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1058_ == 0)
{
v___x_1049_ = v___x_1046_;
v_isShared_1050_ = v_isSharedCheck_1058_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1046_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1058_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v_isPreorderInst_x3f_1051_; 
v_isPreorderInst_x3f_1051_ = lean_ctor_get(v_a_1047_, 8);
lean_inc(v_isPreorderInst_x3f_1051_);
lean_dec(v_a_1047_);
if (lean_obj_tag(v_isPreorderInst_x3f_1051_) == 1)
{
lean_object* v_val_1052_; lean_object* v___x_1054_; 
v_val_1052_ = lean_ctor_get(v_isPreorderInst_x3f_1051_, 0);
lean_inc(v_val_1052_);
lean_dec_ref(v_isPreorderInst_x3f_1051_);
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 0, v_val_1052_);
v___x_1054_ = v___x_1049_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v_val_1052_);
v___x_1054_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
return v___x_1054_;
}
}
else
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
lean_dec(v_isPreorderInst_x3f_1051_);
lean_del_object(v___x_1049_);
v___x_1056_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___closed__1);
v___x_1057_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1056_, v_a_1041_, v_a_1042_, v_a_1043_, v_a_1044_);
return v___x_1057_;
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
v_a_1059_ = lean_ctor_get(v___x_1046_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1046_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1046_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst___boxed(lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_, lean_object* v_a_1070_, lean_object* v_a_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_, lean_object* v_a_1074_, lean_object* v_a_1075_, lean_object* v_a_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lean_Meta_Grind_Arith_Linear_getIsPreorderInst(v_a_1067_, v_a_1068_, v_a_1069_, v_a_1070_, v_a_1071_, v_a_1072_, v_a_1073_, v_a_1074_, v_a_1075_, v_a_1076_, v_a_1077_);
lean_dec(v_a_1077_);
lean_dec_ref(v_a_1076_);
lean_dec(v_a_1075_);
lean_dec_ref(v_a_1074_);
lean_dec(v_a_1073_);
lean_dec_ref(v_a_1072_);
lean_dec(v_a_1071_);
lean_dec_ref(v_a_1070_);
lean_dec(v_a_1069_);
lean_dec(v_a_1068_);
lean_dec(v_a_1067_);
return v_res_1079_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__0(void){
_start:
{
lean_object* v___x_1080_; 
v___x_1080_ = lean_mk_string_unchecked("`grind linarith` internal error, structure is not an ordered module", 67, 67);
return v___x_1080_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__0);
v___x_1082_ = l_Lean_stringToMessageData(v___x_1081_);
return v___x_1082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst(lean_object* v_a_1083_, lean_object* v_a_1084_, lean_object* v_a_1085_, lean_object* v_a_1086_, lean_object* v_a_1087_, lean_object* v_a_1088_, lean_object* v_a_1089_, lean_object* v_a_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_){
_start:
{
lean_object* v___x_1095_; 
v___x_1095_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1083_, v_a_1084_, v_a_1085_, v_a_1086_, v_a_1087_, v_a_1088_, v_a_1089_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v___x_1098_; uint8_t v_isShared_1099_; uint8_t v_isSharedCheck_1107_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1107_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1107_ == 0)
{
v___x_1098_ = v___x_1095_;
v_isShared_1099_ = v_isSharedCheck_1107_;
goto v_resetjp_1097_;
}
else
{
lean_inc(v_a_1096_);
lean_dec(v___x_1095_);
v___x_1098_ = lean_box(0);
v_isShared_1099_ = v_isSharedCheck_1107_;
goto v_resetjp_1097_;
}
v_resetjp_1097_:
{
lean_object* v_orderedAddInst_x3f_1100_; 
v_orderedAddInst_x3f_1100_ = lean_ctor_get(v_a_1096_, 9);
lean_inc(v_orderedAddInst_x3f_1100_);
lean_dec(v_a_1096_);
if (lean_obj_tag(v_orderedAddInst_x3f_1100_) == 1)
{
lean_object* v_val_1101_; lean_object* v___x_1103_; 
v_val_1101_ = lean_ctor_get(v_orderedAddInst_x3f_1100_, 0);
lean_inc(v_val_1101_);
lean_dec_ref(v_orderedAddInst_x3f_1100_);
if (v_isShared_1099_ == 0)
{
lean_ctor_set(v___x_1098_, 0, v_val_1101_);
v___x_1103_ = v___x_1098_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v_val_1101_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
else
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
lean_dec(v_orderedAddInst_x3f_1100_);
lean_del_object(v___x_1098_);
v___x_1105_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1);
v___x_1106_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1105_, v_a_1090_, v_a_1091_, v_a_1092_, v_a_1093_);
return v___x_1106_;
}
}
}
else
{
lean_object* v_a_1108_; lean_object* v___x_1110_; uint8_t v_isShared_1111_; uint8_t v_isSharedCheck_1115_; 
v_a_1108_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1110_ = v___x_1095_;
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
else
{
lean_inc(v_a_1108_);
lean_dec(v___x_1095_);
v___x_1110_ = lean_box(0);
v_isShared_1111_ = v_isSharedCheck_1115_;
goto v_resetjp_1109_;
}
v_resetjp_1109_:
{
lean_object* v___x_1113_; 
if (v_isShared_1111_ == 0)
{
v___x_1113_ = v___x_1110_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1108_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___boxed(lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_, lean_object* v_a_1119_, lean_object* v_a_1120_, lean_object* v_a_1121_, lean_object* v_a_1122_, lean_object* v_a_1123_, lean_object* v_a_1124_, lean_object* v_a_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst(v_a_1116_, v_a_1117_, v_a_1118_, v_a_1119_, v_a_1120_, v_a_1121_, v_a_1122_, v_a_1123_, v_a_1124_, v_a_1125_, v_a_1126_);
lean_dec(v_a_1126_);
lean_dec_ref(v_a_1125_);
lean_dec(v_a_1124_);
lean_dec_ref(v_a_1123_);
lean_dec(v_a_1122_);
lean_dec_ref(v_a_1121_);
lean_dec(v_a_1120_);
lean_dec_ref(v_a_1119_);
lean_dec(v_a_1118_);
lean_dec(v_a_1117_);
lean_dec(v_a_1116_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd(lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_, v_a_1139_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v_a_1142_; lean_object* v___x_1144_; uint8_t v_isShared_1145_; uint8_t v_isSharedCheck_1157_; 
v_a_1142_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1157_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1157_ == 0)
{
v___x_1144_ = v___x_1141_;
v_isShared_1145_ = v_isSharedCheck_1157_;
goto v_resetjp_1143_;
}
else
{
lean_inc(v_a_1142_);
lean_dec(v___x_1141_);
v___x_1144_ = lean_box(0);
v_isShared_1145_ = v_isSharedCheck_1157_;
goto v_resetjp_1143_;
}
v_resetjp_1143_:
{
lean_object* v_orderedAddInst_x3f_1146_; 
v_orderedAddInst_x3f_1146_ = lean_ctor_get(v_a_1142_, 9);
lean_inc(v_orderedAddInst_x3f_1146_);
lean_dec(v_a_1142_);
if (lean_obj_tag(v_orderedAddInst_x3f_1146_) == 0)
{
uint8_t v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1150_; 
v___x_1147_ = 0;
v___x_1148_ = lean_box(v___x_1147_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 0, v___x_1148_);
v___x_1150_ = v___x_1144_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
else
{
uint8_t v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1155_; 
lean_dec_ref(v_orderedAddInst_x3f_1146_);
v___x_1152_ = 1;
v___x_1153_ = lean_box(v___x_1152_);
if (v_isShared_1145_ == 0)
{
lean_ctor_set(v___x_1144_, 0, v___x_1153_);
v___x_1155_ = v___x_1144_;
goto v_reusejp_1154_;
}
else
{
lean_object* v_reuseFailAlloc_1156_; 
v_reuseFailAlloc_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1156_, 0, v___x_1153_);
v___x_1155_ = v_reuseFailAlloc_1156_;
goto v_reusejp_1154_;
}
v_reusejp_1154_:
{
return v___x_1155_;
}
}
}
}
else
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1165_; 
v_a_1158_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1165_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1165_ == 0)
{
v___x_1160_ = v___x_1141_;
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v___x_1141_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1165_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1163_; 
if (v_isShared_1161_ == 0)
{
v___x_1163_ = v___x_1160_;
goto v_reusejp_1162_;
}
else
{
lean_object* v_reuseFailAlloc_1164_; 
v_reuseFailAlloc_1164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1164_, 0, v_a_1158_);
v___x_1163_ = v_reuseFailAlloc_1164_;
goto v_reusejp_1162_;
}
v_reusejp_1162_:
{
return v___x_1163_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd___boxed(lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_){
_start:
{
lean_object* v_res_1178_; 
v_res_1178_ = l_Lean_Meta_Grind_Arith_Linear_isOrderedAdd(v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_, v_a_1176_);
lean_dec(v_a_1176_);
lean_dec_ref(v_a_1175_);
lean_dec(v_a_1174_);
lean_dec_ref(v_a_1173_);
lean_dec(v_a_1172_);
lean_dec_ref(v_a_1171_);
lean_dec(v_a_1170_);
lean_dec_ref(v_a_1169_);
lean_dec(v_a_1168_);
lean_dec(v_a_1167_);
lean_dec(v_a_1166_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg___lam__0(lean_object* v_toPure_1179_, lean_object* v_inst_1180_, lean_object* v_inst_1181_, lean_object* v_____do__lift_1182_){
_start:
{
lean_object* v_ltFn_x3f_1183_; 
v_ltFn_x3f_1183_ = lean_ctor_get(v_____do__lift_1182_, 21);
lean_inc(v_ltFn_x3f_1183_);
lean_dec_ref(v_____do__lift_1182_);
if (lean_obj_tag(v_ltFn_x3f_1183_) == 1)
{
lean_object* v_val_1184_; lean_object* v___x_1185_; 
lean_dec_ref(v_inst_1181_);
lean_dec_ref(v_inst_1180_);
v_val_1184_ = lean_ctor_get(v_ltFn_x3f_1183_, 0);
lean_inc(v_val_1184_);
lean_dec_ref(v_ltFn_x3f_1183_);
v___x_1185_ = lean_apply_2(v_toPure_1179_, lean_box(0), v_val_1184_);
return v___x_1185_;
}
else
{
lean_object* v___x_1186_; lean_object* v___x_1187_; 
lean_dec(v_ltFn_x3f_1183_);
lean_dec(v_toPure_1179_);
v___x_1186_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedAddInst___closed__1);
v___x_1187_ = l_Lean_throwError___redArg(v_inst_1180_, v_inst_1181_, v___x_1186_);
return v___x_1187_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg(lean_object* v_inst_1188_, lean_object* v_inst_1189_, lean_object* v_inst_1190_){
_start:
{
lean_object* v_toApplicative_1191_; lean_object* v_toBind_1192_; lean_object* v_toPure_1193_; lean_object* v___f_1194_; lean_object* v___x_1195_; 
v_toApplicative_1191_ = lean_ctor_get(v_inst_1188_, 0);
v_toBind_1192_ = lean_ctor_get(v_inst_1188_, 1);
lean_inc(v_toBind_1192_);
v_toPure_1193_ = lean_ctor_get(v_toApplicative_1191_, 1);
lean_inc(v_toPure_1193_);
v___f_1194_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1194_, 0, v_toPure_1193_);
lean_closure_set(v___f_1194_, 1, v_inst_1188_);
lean_closure_set(v___f_1194_, 2, v_inst_1189_);
v___x_1195_ = lean_apply_4(v_toBind_1192_, lean_box(0), lean_box(0), v_inst_1190_, v___f_1194_);
return v___x_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLtFn(lean_object* v_m_1196_, lean_object* v_inst_1197_, lean_object* v_inst_1198_, lean_object* v_inst_1199_){
_start:
{
lean_object* v___x_1200_; 
v___x_1200_ = l_Lean_Meta_Grind_Arith_Linear_getLtFn___redArg(v_inst_1197_, v_inst_1198_, v_inst_1199_);
return v___x_1200_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = lean_mk_string_unchecked("`grind linarith` internal error, structure is not an ordered int module", 71, 71);
return v___x_1201_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1202_; lean_object* v___x_1203_; 
v___x_1202_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__0);
v___x_1203_ = l_Lean_stringToMessageData(v___x_1202_);
return v___x_1203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0(lean_object* v_toPure_1204_, lean_object* v_inst_1205_, lean_object* v_inst_1206_, lean_object* v_____do__lift_1207_){
_start:
{
lean_object* v_leFn_x3f_1208_; 
v_leFn_x3f_1208_ = lean_ctor_get(v_____do__lift_1207_, 20);
lean_inc(v_leFn_x3f_1208_);
lean_dec_ref(v_____do__lift_1207_);
if (lean_obj_tag(v_leFn_x3f_1208_) == 1)
{
lean_object* v_val_1209_; lean_object* v___x_1210_; 
lean_dec_ref(v_inst_1206_);
lean_dec_ref(v_inst_1205_);
v_val_1209_ = lean_ctor_get(v_leFn_x3f_1208_, 0);
lean_inc(v_val_1209_);
lean_dec_ref(v_leFn_x3f_1208_);
v___x_1210_ = lean_apply_2(v_toPure_1204_, lean_box(0), v_val_1209_);
return v___x_1210_;
}
else
{
lean_object* v___x_1211_; lean_object* v___x_1212_; 
lean_dec(v_leFn_x3f_1208_);
lean_dec(v_toPure_1204_);
v___x_1211_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0___closed__1);
v___x_1212_ = l_Lean_throwError___redArg(v_inst_1205_, v_inst_1206_, v___x_1211_);
return v___x_1212_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg(lean_object* v_inst_1213_, lean_object* v_inst_1214_, lean_object* v_inst_1215_){
_start:
{
lean_object* v_toApplicative_1216_; lean_object* v_toBind_1217_; lean_object* v_toPure_1218_; lean_object* v___f_1219_; lean_object* v___x_1220_; 
v_toApplicative_1216_ = lean_ctor_get(v_inst_1213_, 0);
v_toBind_1217_ = lean_ctor_get(v_inst_1213_, 1);
lean_inc(v_toBind_1217_);
v_toPure_1218_ = lean_ctor_get(v_toApplicative_1216_, 1);
lean_inc(v_toPure_1218_);
v___f_1219_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1219_, 0, v_toPure_1218_);
lean_closure_set(v___f_1219_, 1, v_inst_1213_);
lean_closure_set(v___f_1219_, 2, v_inst_1214_);
v___x_1220_ = lean_apply_4(v_toBind_1217_, lean_box(0), lean_box(0), v_inst_1215_, v___f_1219_);
return v___x_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getLeFn(lean_object* v_m_1221_, lean_object* v_inst_1222_, lean_object* v_inst_1223_, lean_object* v_inst_1224_){
_start:
{
lean_object* v___x_1225_; 
v___x_1225_ = l_Lean_Meta_Grind_Arith_Linear_getLeFn___redArg(v_inst_1222_, v_inst_1223_, v_inst_1224_);
return v___x_1225_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__0(void){
_start:
{
lean_object* v___x_1226_; 
v___x_1226_ = lean_mk_string_unchecked("`grind linarith` internal error, structure is not a linear order", 64, 64);
return v___x_1226_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1(void){
_start:
{
lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1227_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__0);
v___x_1228_ = l_Lean_stringToMessageData(v___x_1227_);
return v___x_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst(lean_object* v_a_1229_, lean_object* v_a_1230_, lean_object* v_a_1231_, lean_object* v_a_1232_, lean_object* v_a_1233_, lean_object* v_a_1234_, lean_object* v_a_1235_, lean_object* v_a_1236_, lean_object* v_a_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_){
_start:
{
lean_object* v___x_1241_; 
v___x_1241_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1229_, v_a_1230_, v_a_1231_, v_a_1232_, v_a_1233_, v_a_1234_, v_a_1235_, v_a_1236_, v_a_1237_, v_a_1238_, v_a_1239_);
if (lean_obj_tag(v___x_1241_) == 0)
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1253_; 
v_a_1242_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1253_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1244_ = v___x_1241_;
v_isShared_1245_ = v_isSharedCheck_1253_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1241_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1253_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v_isLinearInst_x3f_1246_; 
v_isLinearInst_x3f_1246_ = lean_ctor_get(v_a_1242_, 10);
lean_inc(v_isLinearInst_x3f_1246_);
lean_dec(v_a_1242_);
if (lean_obj_tag(v_isLinearInst_x3f_1246_) == 1)
{
lean_object* v_val_1247_; lean_object* v___x_1249_; 
v_val_1247_ = lean_ctor_get(v_isLinearInst_x3f_1246_, 0);
lean_inc(v_val_1247_);
lean_dec_ref(v_isLinearInst_x3f_1246_);
if (v_isShared_1245_ == 0)
{
lean_ctor_set(v___x_1244_, 0, v_val_1247_);
v___x_1249_ = v___x_1244_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_val_1247_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
else
{
lean_object* v___x_1251_; lean_object* v___x_1252_; 
lean_dec(v_isLinearInst_x3f_1246_);
lean_del_object(v___x_1244_);
v___x_1251_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___closed__1);
v___x_1252_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1251_, v_a_1236_, v_a_1237_, v_a_1238_, v_a_1239_);
return v___x_1252_;
}
}
}
else
{
lean_object* v_a_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1261_; 
v_a_1254_ = lean_ctor_get(v___x_1241_, 0);
v_isSharedCheck_1261_ = !lean_is_exclusive(v___x_1241_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1256_ = v___x_1241_;
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_a_1254_);
lean_dec(v___x_1241_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1261_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___x_1259_; 
if (v_isShared_1257_ == 0)
{
v___x_1259_ = v___x_1256_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_a_1254_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst___boxed(lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_, lean_object* v_a_1267_, lean_object* v_a_1268_, lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lean_Meta_Grind_Arith_Linear_getIsLinearOrderInst(v_a_1262_, v_a_1263_, v_a_1264_, v_a_1265_, v_a_1266_, v_a_1267_, v_a_1268_, v_a_1269_, v_a_1270_, v_a_1271_, v_a_1272_);
lean_dec(v_a_1272_);
lean_dec_ref(v_a_1271_);
lean_dec(v_a_1270_);
lean_dec_ref(v_a_1269_);
lean_dec(v_a_1268_);
lean_dec_ref(v_a_1267_);
lean_dec(v_a_1266_);
lean_dec_ref(v_a_1265_);
lean_dec(v_a_1264_);
lean_dec(v_a_1263_);
lean_dec(v_a_1262_);
return v_res_1274_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__0(void){
_start:
{
lean_object* v___x_1275_; 
v___x_1275_ = lean_mk_string_unchecked("`grind linarith` internal error, structure is not a ring", 56, 56);
return v___x_1275_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__0);
v___x_1277_ = l_Lean_stringToMessageData(v___x_1276_);
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst(lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_, lean_object* v_a_1283_, lean_object* v_a_1284_, lean_object* v_a_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_){
_start:
{
lean_object* v___x_1290_; 
v___x_1290_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1278_, v_a_1279_, v_a_1280_, v_a_1281_, v_a_1282_, v_a_1283_, v_a_1284_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_);
if (lean_obj_tag(v___x_1290_) == 0)
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1302_; 
v_a_1291_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1293_ = v___x_1290_;
v_isShared_1294_ = v_isSharedCheck_1302_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1290_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1302_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v_ringInst_x3f_1295_; 
v_ringInst_x3f_1295_ = lean_ctor_get(v_a_1291_, 12);
lean_inc(v_ringInst_x3f_1295_);
lean_dec(v_a_1291_);
if (lean_obj_tag(v_ringInst_x3f_1295_) == 1)
{
lean_object* v_val_1296_; lean_object* v___x_1298_; 
v_val_1296_ = lean_ctor_get(v_ringInst_x3f_1295_, 0);
lean_inc(v_val_1296_);
lean_dec_ref(v_ringInst_x3f_1295_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 0, v_val_1296_);
v___x_1298_ = v___x_1293_;
goto v_reusejp_1297_;
}
else
{
lean_object* v_reuseFailAlloc_1299_; 
v_reuseFailAlloc_1299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1299_, 0, v_val_1296_);
v___x_1298_ = v_reuseFailAlloc_1299_;
goto v_reusejp_1297_;
}
v_reusejp_1297_:
{
return v___x_1298_;
}
}
else
{
lean_object* v___x_1300_; lean_object* v___x_1301_; 
lean_dec(v_ringInst_x3f_1295_);
lean_del_object(v___x_1293_);
v___x_1300_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getRingInst___closed__1);
v___x_1301_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1300_, v_a_1285_, v_a_1286_, v_a_1287_, v_a_1288_);
return v___x_1301_;
}
}
}
else
{
lean_object* v_a_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1310_; 
v_a_1303_ = lean_ctor_get(v___x_1290_, 0);
v_isSharedCheck_1310_ = !lean_is_exclusive(v___x_1290_);
if (v_isSharedCheck_1310_ == 0)
{
v___x_1305_ = v___x_1290_;
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_a_1303_);
lean_dec(v___x_1290_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1310_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1308_; 
if (v_isShared_1306_ == 0)
{
v___x_1308_ = v___x_1305_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_a_1303_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getRingInst___boxed(lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_, lean_object* v_a_1317_, lean_object* v_a_1318_, lean_object* v_a_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_){
_start:
{
lean_object* v_res_1323_; 
v_res_1323_ = l_Lean_Meta_Grind_Arith_Linear_getRingInst(v_a_1311_, v_a_1312_, v_a_1313_, v_a_1314_, v_a_1315_, v_a_1316_, v_a_1317_, v_a_1318_, v_a_1319_, v_a_1320_, v_a_1321_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
lean_dec(v_a_1319_);
lean_dec_ref(v_a_1318_);
lean_dec(v_a_1317_);
lean_dec_ref(v_a_1316_);
lean_dec(v_a_1315_);
lean_dec_ref(v_a_1314_);
lean_dec(v_a_1313_);
lean_dec(v_a_1312_);
lean_dec(v_a_1311_);
return v_res_1323_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__0(void){
_start:
{
lean_object* v___x_1324_; 
v___x_1324_ = lean_mk_string_unchecked("`grind linarith` internal error, structure is not a commutative ring", 68, 68);
return v___x_1324_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1(void){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
v___x_1325_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__0);
v___x_1326_ = l_Lean_stringToMessageData(v___x_1325_);
return v___x_1326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst(lean_object* v_a_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v_a_1333_, lean_object* v_a_1334_, lean_object* v_a_1335_, lean_object* v_a_1336_, lean_object* v_a_1337_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1327_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_, v_a_1333_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_);
if (lean_obj_tag(v___x_1339_) == 0)
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1351_; 
v_a_1340_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1342_ = v___x_1339_;
v_isShared_1343_ = v_isSharedCheck_1351_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1339_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1351_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v_commRingInst_x3f_1344_; 
v_commRingInst_x3f_1344_ = lean_ctor_get(v_a_1340_, 13);
lean_inc(v_commRingInst_x3f_1344_);
lean_dec(v_a_1340_);
if (lean_obj_tag(v_commRingInst_x3f_1344_) == 1)
{
lean_object* v_val_1345_; lean_object* v___x_1347_; 
v_val_1345_ = lean_ctor_get(v_commRingInst_x3f_1344_, 0);
lean_inc(v_val_1345_);
lean_dec_ref(v_commRingInst_x3f_1344_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 0, v_val_1345_);
v___x_1347_ = v___x_1342_;
goto v_reusejp_1346_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1348_, 0, v_val_1345_);
v___x_1347_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1346_;
}
v_reusejp_1346_:
{
return v___x_1347_;
}
}
else
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
lean_dec(v_commRingInst_x3f_1344_);
lean_del_object(v___x_1342_);
v___x_1349_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___closed__1);
v___x_1350_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1349_, v_a_1334_, v_a_1335_, v_a_1336_, v_a_1337_);
return v___x_1350_;
}
}
}
else
{
lean_object* v_a_1352_; lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1359_; 
v_a_1352_ = lean_ctor_get(v___x_1339_, 0);
v_isSharedCheck_1359_ = !lean_is_exclusive(v___x_1339_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1354_ = v___x_1339_;
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
else
{
lean_inc(v_a_1352_);
lean_dec(v___x_1339_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1359_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1357_; 
if (v_isShared_1355_ == 0)
{
v___x_1357_ = v___x_1354_;
goto v_reusejp_1356_;
}
else
{
lean_object* v_reuseFailAlloc_1358_; 
v_reuseFailAlloc_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1358_, 0, v_a_1352_);
v___x_1357_ = v_reuseFailAlloc_1358_;
goto v_reusejp_1356_;
}
v_reusejp_1356_:
{
return v___x_1357_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getCommRingInst___boxed(lean_object* v_a_1360_, lean_object* v_a_1361_, lean_object* v_a_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_){
_start:
{
lean_object* v_res_1372_; 
v_res_1372_ = l_Lean_Meta_Grind_Arith_Linear_getCommRingInst(v_a_1360_, v_a_1361_, v_a_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_);
lean_dec(v_a_1370_);
lean_dec_ref(v_a_1369_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_a_1364_);
lean_dec_ref(v_a_1363_);
lean_dec(v_a_1362_);
lean_dec(v_a_1361_);
lean_dec(v_a_1360_);
return v_res_1372_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__0(void){
_start:
{
lean_object* v___x_1373_; 
v___x_1373_ = lean_mk_string_unchecked("`grind linarith` internal error, structure is not an ordered ring", 65, 65);
return v___x_1373_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1(void){
_start:
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1374_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__0, &l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__0_once, _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__0);
v___x_1375_ = l_Lean_stringToMessageData(v___x_1374_);
return v___x_1375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst(lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v___x_1388_; 
v___x_1388_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_, v_a_1380_, v_a_1381_, v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_);
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1400_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1400_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1400_ == 0)
{
v___x_1391_ = v___x_1388_;
v_isShared_1392_ = v_isSharedCheck_1400_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1388_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1400_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v_orderedRingInst_x3f_1393_; 
v_orderedRingInst_x3f_1393_ = lean_ctor_get(v_a_1389_, 14);
lean_inc(v_orderedRingInst_x3f_1393_);
lean_dec(v_a_1389_);
if (lean_obj_tag(v_orderedRingInst_x3f_1393_) == 1)
{
lean_object* v_val_1394_; lean_object* v___x_1396_; 
v_val_1394_ = lean_ctor_get(v_orderedRingInst_x3f_1393_, 0);
lean_inc(v_val_1394_);
lean_dec_ref(v_orderedRingInst_x3f_1393_);
if (v_isShared_1392_ == 0)
{
lean_ctor_set(v___x_1391_, 0, v_val_1394_);
v___x_1396_ = v___x_1391_;
goto v_reusejp_1395_;
}
else
{
lean_object* v_reuseFailAlloc_1397_; 
v_reuseFailAlloc_1397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1397_, 0, v_val_1394_);
v___x_1396_ = v_reuseFailAlloc_1397_;
goto v_reusejp_1395_;
}
v_reusejp_1395_:
{
return v___x_1396_;
}
}
else
{
lean_object* v___x_1398_; lean_object* v___x_1399_; 
lean_dec(v_orderedRingInst_x3f_1393_);
lean_del_object(v___x_1391_);
v___x_1398_ = lean_obj_once(&l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1, &l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1_once, _init_l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___closed__1);
v___x_1399_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_1398_, v_a_1383_, v_a_1384_, v_a_1385_, v_a_1386_);
return v___x_1399_;
}
}
}
else
{
lean_object* v_a_1401_; lean_object* v___x_1403_; uint8_t v_isShared_1404_; uint8_t v_isSharedCheck_1408_; 
v_a_1401_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1408_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1408_ == 0)
{
v___x_1403_ = v___x_1388_;
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
else
{
lean_inc(v_a_1401_);
lean_dec(v___x_1388_);
v___x_1403_ = lean_box(0);
v_isShared_1404_ = v_isSharedCheck_1408_;
goto v_resetjp_1402_;
}
v_resetjp_1402_:
{
lean_object* v___x_1406_; 
if (v_isShared_1404_ == 0)
{
v___x_1406_ = v___x_1403_;
goto v_reusejp_1405_;
}
else
{
lean_object* v_reuseFailAlloc_1407_; 
v_reuseFailAlloc_1407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1407_, 0, v_a_1401_);
v___x_1406_ = v_reuseFailAlloc_1407_;
goto v_reusejp_1405_;
}
v_reusejp_1405_:
{
return v___x_1406_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst___boxed(lean_object* v_a_1409_, lean_object* v_a_1410_, lean_object* v_a_1411_, lean_object* v_a_1412_, lean_object* v_a_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Lean_Meta_Grind_Arith_Linear_getOrderedRingInst(v_a_1409_, v_a_1410_, v_a_1411_, v_a_1412_, v_a_1413_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_, v_a_1419_);
lean_dec(v_a_1419_);
lean_dec_ref(v_a_1418_);
lean_dec(v_a_1417_);
lean_dec_ref(v_a_1416_);
lean_dec(v_a_1415_);
lean_dec_ref(v_a_1414_);
lean_dec(v_a_1413_);
lean_dec_ref(v_a_1412_);
lean_dec(v_a_1411_);
lean_dec(v_a_1410_);
lean_dec(v_a_1409_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go_spec__0(lean_object* v_a_1422_){
_start:
{
lean_object* v___x_1423_; 
v___x_1423_ = l_Rat_ofInt(v_a_1422_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go(lean_object* v_a_1424_, lean_object* v_v_1425_, lean_object* v_a_1426_){
_start:
{
if (lean_obj_tag(v_a_1426_) == 0)
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1427_, 0, v_v_1425_);
return v___x_1427_;
}
else
{
lean_object* v_k_1428_; lean_object* v_v_1429_; lean_object* v_p_1430_; lean_object* v_size_1431_; uint8_t v___x_1432_; 
v_k_1428_ = lean_ctor_get(v_a_1426_, 0);
lean_inc(v_k_1428_);
v_v_1429_ = lean_ctor_get(v_a_1426_, 1);
lean_inc(v_v_1429_);
v_p_1430_ = lean_ctor_get(v_a_1426_, 2);
lean_inc(v_p_1430_);
lean_dec_ref(v_a_1426_);
v_size_1431_ = lean_ctor_get(v_a_1424_, 2);
v___x_1432_ = lean_nat_dec_lt(v_v_1429_, v_size_1431_);
if (v___x_1432_ == 0)
{
lean_object* v___x_1433_; 
lean_dec(v_p_1430_);
lean_dec(v_v_1429_);
lean_dec(v_k_1428_);
lean_dec_ref(v_v_1425_);
v___x_1433_ = lean_box(0);
return v___x_1433_;
}
else
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v___x_1434_ = l_Rat_ofInt(v_k_1428_);
v___x_1435_ = l_instInhabitedRat;
v___x_1436_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1435_, v_a_1424_, v_v_1429_);
lean_dec(v_v_1429_);
v___x_1437_ = l_Rat_mul(v___x_1434_, v___x_1436_);
lean_dec_ref(v___x_1434_);
v___x_1438_ = l_Rat_add(v_v_1425_, v___x_1437_);
v_v_1425_ = v___x_1438_;
v_a_1426_ = v_p_1430_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go___boxed(lean_object* v_a_1440_, lean_object* v_v_1441_, lean_object* v_a_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go(v_a_1440_, v_v_1441_, v_a_1442_);
lean_dec_ref(v_a_1440_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Grind_Linarith_Poly_eval_x3f_spec__0(lean_object* v_a_1444_){
_start:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1445_ = lean_nat_to_int(v_a_1444_);
v___x_1446_ = l_Rat_ofInt(v___x_1445_);
return v___x_1446_;
}
}
static lean_object* _init_l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0(void){
_start:
{
lean_object* v___x_1447_; lean_object* v___x_1448_; 
v___x_1447_ = lean_unsigned_to_nat(0u);
v___x_1448_ = l_Nat_cast___at___00Lean_Grind_Linarith_Poly_eval_x3f_spec__0(v___x_1447_);
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_eval_x3f(lean_object* v_p_1449_, lean_object* v_a_1450_, lean_object* v_a_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_, lean_object* v_a_1457_, lean_object* v_a_1458_, lean_object* v_a_1459_, lean_object* v_a_1460_){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1450_, v_a_1451_, v_a_1452_, v_a_1453_, v_a_1454_, v_a_1455_, v_a_1456_, v_a_1457_, v_a_1458_, v_a_1459_, v_a_1460_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_object* v_a_1463_; lean_object* v___x_1465_; uint8_t v_isShared_1466_; uint8_t v_isSharedCheck_1473_; 
v_a_1463_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1473_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1473_ == 0)
{
v___x_1465_ = v___x_1462_;
v_isShared_1466_ = v_isSharedCheck_1473_;
goto v_resetjp_1464_;
}
else
{
lean_inc(v_a_1463_);
lean_dec(v___x_1462_);
v___x_1465_ = lean_box(0);
v_isShared_1466_ = v_isSharedCheck_1473_;
goto v_resetjp_1464_;
}
v_resetjp_1464_:
{
lean_object* v_assignment_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1471_; 
v_assignment_1467_ = lean_ctor_get(v_a_1463_, 35);
lean_inc_ref(v_assignment_1467_);
lean_dec(v_a_1463_);
v___x_1468_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0, &l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0_once, _init_l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0);
v___x_1469_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_eval_x3f_go(v_assignment_1467_, v___x_1468_, v_p_1449_);
lean_dec_ref(v_assignment_1467_);
if (v_isShared_1466_ == 0)
{
lean_ctor_set(v___x_1465_, 0, v___x_1469_);
v___x_1471_ = v___x_1465_;
goto v_reusejp_1470_;
}
else
{
lean_object* v_reuseFailAlloc_1472_; 
v_reuseFailAlloc_1472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1472_, 0, v___x_1469_);
v___x_1471_ = v_reuseFailAlloc_1472_;
goto v_reusejp_1470_;
}
v_reusejp_1470_:
{
return v___x_1471_;
}
}
}
else
{
lean_object* v_a_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1481_; 
lean_dec(v_p_1449_);
v_a_1474_ = lean_ctor_get(v___x_1462_, 0);
v_isSharedCheck_1481_ = !lean_is_exclusive(v___x_1462_);
if (v_isSharedCheck_1481_ == 0)
{
v___x_1476_ = v___x_1462_;
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_a_1474_);
lean_dec(v___x_1462_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1481_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1479_; 
if (v_isShared_1477_ == 0)
{
v___x_1479_ = v___x_1476_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_a_1474_);
v___x_1479_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
return v___x_1479_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_eval_x3f___boxed(lean_object* v_p_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_){
_start:
{
lean_object* v_res_1495_; 
v_res_1495_ = l_Lean_Grind_Linarith_Poly_eval_x3f(v_p_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_);
lean_dec(v_a_1493_);
lean_dec_ref(v_a_1492_);
lean_dec(v_a_1491_);
lean_dec_ref(v_a_1490_);
lean_dec(v_a_1489_);
lean_dec_ref(v_a_1488_);
lean_dec(v_a_1487_);
lean_dec_ref(v_a_1486_);
lean_dec(v_a_1485_);
lean_dec(v_a_1484_);
lean_dec(v_a_1483_);
return v_res_1495_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Nat_cast___at___00Lean_Grind_Linarith_Poly_eval_x3f_spec__0_spec__0(lean_object* v_a_1496_){
_start:
{
lean_object* v___x_1497_; 
v___x_1497_ = lean_nat_to_int(v_a_1496_);
return v___x_1497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied(lean_object* v_c_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_, lean_object* v_a_1503_, lean_object* v_a_1504_, lean_object* v_a_1505_, lean_object* v_a_1506_, lean_object* v_a_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_){
_start:
{
lean_object* v_p_1511_; uint8_t v_strict_1512_; lean_object* v___x_1513_; 
v_p_1511_ = lean_ctor_get(v_c_1498_, 0);
lean_inc(v_p_1511_);
v_strict_1512_ = lean_ctor_get_uint8(v_c_1498_, sizeof(void*)*2);
lean_dec_ref(v_c_1498_);
v___x_1513_ = l_Lean_Grind_Linarith_Poly_eval_x3f(v_p_1511_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_, v_a_1503_, v_a_1504_, v_a_1505_, v_a_1506_, v_a_1507_, v_a_1508_, v_a_1509_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1539_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1539_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1539_ == 0)
{
v___x_1516_ = v___x_1513_;
v_isShared_1517_ = v_isSharedCheck_1539_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1513_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1539_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
if (lean_obj_tag(v_a_1514_) == 1)
{
if (v_strict_1512_ == 0)
{
lean_object* v_val_1518_; lean_object* v___x_1519_; uint8_t v___x_1520_; uint8_t v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1524_; 
v_val_1518_ = lean_ctor_get(v_a_1514_, 0);
lean_inc(v_val_1518_);
lean_dec_ref(v_a_1514_);
v___x_1519_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0, &l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0_once, _init_l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0);
v___x_1520_ = l_Rat_instDecidableLe(v_val_1518_, v___x_1519_);
v___x_1521_ = l_Bool_toLBool(v___x_1520_);
v___x_1522_ = lean_box(v___x_1521_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v___x_1522_);
v___x_1524_ = v___x_1516_;
goto v_reusejp_1523_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v___x_1522_);
v___x_1524_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1523_;
}
v_reusejp_1523_:
{
return v___x_1524_;
}
}
else
{
lean_object* v_val_1526_; lean_object* v___x_1527_; uint8_t v___x_1528_; uint8_t v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
v_val_1526_ = lean_ctor_get(v_a_1514_, 0);
lean_inc(v_val_1526_);
lean_dec_ref(v_a_1514_);
v___x_1527_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0, &l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0_once, _init_l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0);
v___x_1528_ = l_Rat_blt(v_val_1526_, v___x_1527_);
v___x_1529_ = l_Bool_toLBool(v___x_1528_);
v___x_1530_ = lean_box(v___x_1529_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v___x_1530_);
v___x_1532_ = v___x_1516_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
else
{
uint8_t v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1537_; 
lean_dec(v_a_1514_);
v___x_1534_ = 2;
v___x_1535_ = lean_box(v___x_1534_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v___x_1535_);
v___x_1537_ = v___x_1516_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v___x_1535_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
return v___x_1537_;
}
}
}
}
else
{
lean_object* v_a_1540_; lean_object* v___x_1542_; uint8_t v_isShared_1543_; uint8_t v_isSharedCheck_1547_; 
v_a_1540_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1547_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1542_ = v___x_1513_;
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
else
{
lean_inc(v_a_1540_);
lean_dec(v___x_1513_);
v___x_1542_ = lean_box(0);
v_isShared_1543_ = v_isSharedCheck_1547_;
goto v_resetjp_1541_;
}
v_resetjp_1541_:
{
lean_object* v___x_1545_; 
if (v_isShared_1543_ == 0)
{
v___x_1545_ = v___x_1542_;
goto v_reusejp_1544_;
}
else
{
lean_object* v_reuseFailAlloc_1546_; 
v_reuseFailAlloc_1546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1546_, 0, v_a_1540_);
v___x_1545_ = v_reuseFailAlloc_1546_;
goto v_reusejp_1544_;
}
v_reusejp_1544_:
{
return v___x_1545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied___boxed(lean_object* v_c_1548_, lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_, lean_object* v_a_1553_, lean_object* v_a_1554_, lean_object* v_a_1555_, lean_object* v_a_1556_, lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_){
_start:
{
lean_object* v_res_1561_; 
v_res_1561_ = l_Lean_Meta_Grind_Arith_Linear_IneqCnstr_satisfied(v_c_1548_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_, v_a_1553_, v_a_1554_, v_a_1555_, v_a_1556_, v_a_1557_, v_a_1558_, v_a_1559_);
lean_dec(v_a_1559_);
lean_dec_ref(v_a_1558_);
lean_dec(v_a_1557_);
lean_dec_ref(v_a_1556_);
lean_dec(v_a_1555_);
lean_dec_ref(v_a_1554_);
lean_dec(v_a_1553_);
lean_dec_ref(v_a_1552_);
lean_dec(v_a_1551_);
lean_dec(v_a_1550_);
lean_dec(v_a_1549_);
return v_res_1561_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied(lean_object* v_c_1562_, lean_object* v_a_1563_, lean_object* v_a_1564_, lean_object* v_a_1565_, lean_object* v_a_1566_, lean_object* v_a_1567_, lean_object* v_a_1568_, lean_object* v_a_1569_, lean_object* v_a_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_){
_start:
{
lean_object* v_p_1575_; lean_object* v___x_1576_; 
v_p_1575_ = lean_ctor_get(v_c_1562_, 0);
lean_inc(v_p_1575_);
lean_dec_ref(v_c_1562_);
v___x_1576_ = l_Lean_Grind_Linarith_Poly_eval_x3f(v_p_1575_, v_a_1563_, v_a_1564_, v_a_1565_, v_a_1566_, v_a_1567_, v_a_1568_, v_a_1569_, v_a_1570_, v_a_1571_, v_a_1572_, v_a_1573_);
if (lean_obj_tag(v___x_1576_) == 0)
{
lean_object* v_a_1577_; lean_object* v___x_1579_; uint8_t v_isShared_1580_; uint8_t v_isSharedCheck_1596_; 
v_a_1577_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1596_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1596_ == 0)
{
v___x_1579_ = v___x_1576_;
v_isShared_1580_ = v_isSharedCheck_1596_;
goto v_resetjp_1578_;
}
else
{
lean_inc(v_a_1577_);
lean_dec(v___x_1576_);
v___x_1579_ = lean_box(0);
v_isShared_1580_ = v_isSharedCheck_1596_;
goto v_resetjp_1578_;
}
v_resetjp_1578_:
{
uint8_t v___y_1582_; 
if (lean_obj_tag(v_a_1577_) == 1)
{
lean_object* v_val_1588_; lean_object* v___x_1589_; uint8_t v___x_1590_; 
v_val_1588_ = lean_ctor_get(v_a_1577_, 0);
lean_inc(v_val_1588_);
lean_dec_ref(v_a_1577_);
v___x_1589_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0, &l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0_once, _init_l_Lean_Grind_Linarith_Poly_eval_x3f___closed__0);
v___x_1590_ = l_instDecidableEqRat_decEq(v_val_1588_, v___x_1589_);
lean_dec(v_val_1588_);
if (v___x_1590_ == 0)
{
uint8_t v___x_1591_; 
v___x_1591_ = 1;
v___y_1582_ = v___x_1591_;
goto v___jp_1581_;
}
else
{
uint8_t v___x_1592_; 
v___x_1592_ = 0;
v___y_1582_ = v___x_1592_;
goto v___jp_1581_;
}
}
else
{
uint8_t v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; 
lean_del_object(v___x_1579_);
lean_dec(v_a_1577_);
v___x_1593_ = 2;
v___x_1594_ = lean_box(v___x_1593_);
v___x_1595_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1595_, 0, v___x_1594_);
return v___x_1595_;
}
v___jp_1581_:
{
uint8_t v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1586_; 
v___x_1583_ = l_Bool_toLBool(v___y_1582_);
v___x_1584_ = lean_box(v___x_1583_);
if (v_isShared_1580_ == 0)
{
lean_ctor_set(v___x_1579_, 0, v___x_1584_);
v___x_1586_ = v___x_1579_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v___x_1584_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
return v___x_1586_;
}
}
}
}
else
{
lean_object* v_a_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1604_; 
v_a_1597_ = lean_ctor_get(v___x_1576_, 0);
v_isSharedCheck_1604_ = !lean_is_exclusive(v___x_1576_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1599_ = v___x_1576_;
v_isShared_1600_ = v_isSharedCheck_1604_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_a_1597_);
lean_dec(v___x_1576_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied___boxed(lean_object* v_c_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_, lean_object* v_a_1608_, lean_object* v_a_1609_, lean_object* v_a_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_){
_start:
{
lean_object* v_res_1618_; 
v_res_1618_ = l_Lean_Meta_Grind_Arith_Linear_DiseqCnstr_satisfied(v_c_1605_, v_a_1606_, v_a_1607_, v_a_1608_, v_a_1609_, v_a_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_);
lean_dec(v_a_1616_);
lean_dec_ref(v_a_1615_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
lean_dec(v_a_1612_);
lean_dec_ref(v_a_1611_);
lean_dec(v_a_1610_);
lean_dec_ref(v_a_1609_);
lean_dec(v_a_1608_);
lean_dec(v_a_1607_);
lean_dec(v_a_1606_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0(lean_object* v_a_1619_, lean_object* v_x_1620_, lean_object* v_s_1621_){
_start:
{
lean_object* v_structs_1622_; lean_object* v_typeIdOf_1623_; lean_object* v_exprToStructId_1624_; lean_object* v_exprToStructIdEntries_1625_; lean_object* v_forbiddenNatModules_1626_; lean_object* v_natStructs_1627_; lean_object* v_natTypeIdOf_1628_; lean_object* v_exprToNatStructId_1629_; lean_object* v___x_1630_; uint8_t v___x_1631_; 
v_structs_1622_ = lean_ctor_get(v_s_1621_, 0);
v_typeIdOf_1623_ = lean_ctor_get(v_s_1621_, 1);
v_exprToStructId_1624_ = lean_ctor_get(v_s_1621_, 2);
v_exprToStructIdEntries_1625_ = lean_ctor_get(v_s_1621_, 3);
v_forbiddenNatModules_1626_ = lean_ctor_get(v_s_1621_, 4);
v_natStructs_1627_ = lean_ctor_get(v_s_1621_, 5);
v_natTypeIdOf_1628_ = lean_ctor_get(v_s_1621_, 6);
v_exprToNatStructId_1629_ = lean_ctor_get(v_s_1621_, 7);
v___x_1630_ = lean_array_get_size(v_structs_1622_);
v___x_1631_ = lean_nat_dec_lt(v_a_1619_, v___x_1630_);
if (v___x_1631_ == 0)
{
return v_s_1621_;
}
else
{
lean_object* v___x_1633_; uint8_t v_isShared_1634_; uint8_t v_isSharedCheck_1693_; 
lean_inc_ref(v_exprToNatStructId_1629_);
lean_inc_ref(v_natTypeIdOf_1628_);
lean_inc_ref(v_natStructs_1627_);
lean_inc_ref(v_forbiddenNatModules_1626_);
lean_inc_ref(v_exprToStructIdEntries_1625_);
lean_inc_ref(v_exprToStructId_1624_);
lean_inc_ref(v_typeIdOf_1623_);
lean_inc_ref(v_structs_1622_);
v_isSharedCheck_1693_ = !lean_is_exclusive(v_s_1621_);
if (v_isSharedCheck_1693_ == 0)
{
lean_object* v_unused_1694_; lean_object* v_unused_1695_; lean_object* v_unused_1696_; lean_object* v_unused_1697_; lean_object* v_unused_1698_; lean_object* v_unused_1699_; lean_object* v_unused_1700_; lean_object* v_unused_1701_; 
v_unused_1694_ = lean_ctor_get(v_s_1621_, 7);
lean_dec(v_unused_1694_);
v_unused_1695_ = lean_ctor_get(v_s_1621_, 6);
lean_dec(v_unused_1695_);
v_unused_1696_ = lean_ctor_get(v_s_1621_, 5);
lean_dec(v_unused_1696_);
v_unused_1697_ = lean_ctor_get(v_s_1621_, 4);
lean_dec(v_unused_1697_);
v_unused_1698_ = lean_ctor_get(v_s_1621_, 3);
lean_dec(v_unused_1698_);
v_unused_1699_ = lean_ctor_get(v_s_1621_, 2);
lean_dec(v_unused_1699_);
v_unused_1700_ = lean_ctor_get(v_s_1621_, 1);
lean_dec(v_unused_1700_);
v_unused_1701_ = lean_ctor_get(v_s_1621_, 0);
lean_dec(v_unused_1701_);
v___x_1633_ = v_s_1621_;
v_isShared_1634_ = v_isSharedCheck_1693_;
goto v_resetjp_1632_;
}
else
{
lean_dec(v_s_1621_);
v___x_1633_ = lean_box(0);
v_isShared_1634_ = v_isSharedCheck_1693_;
goto v_resetjp_1632_;
}
v_resetjp_1632_:
{
lean_object* v_v_1635_; lean_object* v_id_1636_; lean_object* v_ringId_x3f_1637_; lean_object* v_type_1638_; lean_object* v_u_1639_; lean_object* v_intModuleInst_1640_; lean_object* v_leInst_x3f_1641_; lean_object* v_ltInst_x3f_1642_; lean_object* v_lawfulOrderLTInst_x3f_1643_; lean_object* v_isPreorderInst_x3f_1644_; lean_object* v_orderedAddInst_x3f_1645_; lean_object* v_isLinearInst_x3f_1646_; lean_object* v_noNatDivInst_x3f_1647_; lean_object* v_ringInst_x3f_1648_; lean_object* v_commRingInst_x3f_1649_; lean_object* v_orderedRingInst_x3f_1650_; lean_object* v_fieldInst_x3f_1651_; lean_object* v_charInst_x3f_1652_; lean_object* v_zero_1653_; lean_object* v_ofNatZero_1654_; lean_object* v_one_x3f_1655_; lean_object* v_leFn_x3f_1656_; lean_object* v_ltFn_x3f_1657_; lean_object* v_addFn_1658_; lean_object* v_zsmulFn_1659_; lean_object* v_nsmulFn_1660_; lean_object* v_zsmulFn_x3f_1661_; lean_object* v_nsmulFn_x3f_1662_; lean_object* v_homomulFn_x3f_1663_; lean_object* v_subFn_1664_; lean_object* v_negFn_1665_; lean_object* v_vars_1666_; lean_object* v_varMap_1667_; lean_object* v_lowers_1668_; lean_object* v_uppers_1669_; lean_object* v_diseqs_1670_; lean_object* v_assignment_1671_; uint8_t v_caseSplits_1672_; lean_object* v_conflict_x3f_1673_; lean_object* v_diseqSplits_1674_; lean_object* v_elimEqs_1675_; lean_object* v_elimStack_1676_; lean_object* v_occurs_1677_; lean_object* v_ignored_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1692_; 
v_v_1635_ = lean_array_fget(v_structs_1622_, v_a_1619_);
v_id_1636_ = lean_ctor_get(v_v_1635_, 0);
v_ringId_x3f_1637_ = lean_ctor_get(v_v_1635_, 1);
v_type_1638_ = lean_ctor_get(v_v_1635_, 2);
v_u_1639_ = lean_ctor_get(v_v_1635_, 3);
v_intModuleInst_1640_ = lean_ctor_get(v_v_1635_, 4);
v_leInst_x3f_1641_ = lean_ctor_get(v_v_1635_, 5);
v_ltInst_x3f_1642_ = lean_ctor_get(v_v_1635_, 6);
v_lawfulOrderLTInst_x3f_1643_ = lean_ctor_get(v_v_1635_, 7);
v_isPreorderInst_x3f_1644_ = lean_ctor_get(v_v_1635_, 8);
v_orderedAddInst_x3f_1645_ = lean_ctor_get(v_v_1635_, 9);
v_isLinearInst_x3f_1646_ = lean_ctor_get(v_v_1635_, 10);
v_noNatDivInst_x3f_1647_ = lean_ctor_get(v_v_1635_, 11);
v_ringInst_x3f_1648_ = lean_ctor_get(v_v_1635_, 12);
v_commRingInst_x3f_1649_ = lean_ctor_get(v_v_1635_, 13);
v_orderedRingInst_x3f_1650_ = lean_ctor_get(v_v_1635_, 14);
v_fieldInst_x3f_1651_ = lean_ctor_get(v_v_1635_, 15);
v_charInst_x3f_1652_ = lean_ctor_get(v_v_1635_, 16);
v_zero_1653_ = lean_ctor_get(v_v_1635_, 17);
v_ofNatZero_1654_ = lean_ctor_get(v_v_1635_, 18);
v_one_x3f_1655_ = lean_ctor_get(v_v_1635_, 19);
v_leFn_x3f_1656_ = lean_ctor_get(v_v_1635_, 20);
v_ltFn_x3f_1657_ = lean_ctor_get(v_v_1635_, 21);
v_addFn_1658_ = lean_ctor_get(v_v_1635_, 22);
v_zsmulFn_1659_ = lean_ctor_get(v_v_1635_, 23);
v_nsmulFn_1660_ = lean_ctor_get(v_v_1635_, 24);
v_zsmulFn_x3f_1661_ = lean_ctor_get(v_v_1635_, 25);
v_nsmulFn_x3f_1662_ = lean_ctor_get(v_v_1635_, 26);
v_homomulFn_x3f_1663_ = lean_ctor_get(v_v_1635_, 27);
v_subFn_1664_ = lean_ctor_get(v_v_1635_, 28);
v_negFn_1665_ = lean_ctor_get(v_v_1635_, 29);
v_vars_1666_ = lean_ctor_get(v_v_1635_, 30);
v_varMap_1667_ = lean_ctor_get(v_v_1635_, 31);
v_lowers_1668_ = lean_ctor_get(v_v_1635_, 32);
v_uppers_1669_ = lean_ctor_get(v_v_1635_, 33);
v_diseqs_1670_ = lean_ctor_get(v_v_1635_, 34);
v_assignment_1671_ = lean_ctor_get(v_v_1635_, 35);
v_caseSplits_1672_ = lean_ctor_get_uint8(v_v_1635_, sizeof(void*)*42);
v_conflict_x3f_1673_ = lean_ctor_get(v_v_1635_, 36);
v_diseqSplits_1674_ = lean_ctor_get(v_v_1635_, 37);
v_elimEqs_1675_ = lean_ctor_get(v_v_1635_, 38);
v_elimStack_1676_ = lean_ctor_get(v_v_1635_, 39);
v_occurs_1677_ = lean_ctor_get(v_v_1635_, 40);
v_ignored_1678_ = lean_ctor_get(v_v_1635_, 41);
v_isSharedCheck_1692_ = !lean_is_exclusive(v_v_1635_);
if (v_isSharedCheck_1692_ == 0)
{
v___x_1680_ = v_v_1635_;
v_isShared_1681_ = v_isSharedCheck_1692_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_ignored_1678_);
lean_inc(v_occurs_1677_);
lean_inc(v_elimStack_1676_);
lean_inc(v_elimEqs_1675_);
lean_inc(v_diseqSplits_1674_);
lean_inc(v_conflict_x3f_1673_);
lean_inc(v_assignment_1671_);
lean_inc(v_diseqs_1670_);
lean_inc(v_uppers_1669_);
lean_inc(v_lowers_1668_);
lean_inc(v_varMap_1667_);
lean_inc(v_vars_1666_);
lean_inc(v_negFn_1665_);
lean_inc(v_subFn_1664_);
lean_inc(v_homomulFn_x3f_1663_);
lean_inc(v_nsmulFn_x3f_1662_);
lean_inc(v_zsmulFn_x3f_1661_);
lean_inc(v_nsmulFn_1660_);
lean_inc(v_zsmulFn_1659_);
lean_inc(v_addFn_1658_);
lean_inc(v_ltFn_x3f_1657_);
lean_inc(v_leFn_x3f_1656_);
lean_inc(v_one_x3f_1655_);
lean_inc(v_ofNatZero_1654_);
lean_inc(v_zero_1653_);
lean_inc(v_charInst_x3f_1652_);
lean_inc(v_fieldInst_x3f_1651_);
lean_inc(v_orderedRingInst_x3f_1650_);
lean_inc(v_commRingInst_x3f_1649_);
lean_inc(v_ringInst_x3f_1648_);
lean_inc(v_noNatDivInst_x3f_1647_);
lean_inc(v_isLinearInst_x3f_1646_);
lean_inc(v_orderedAddInst_x3f_1645_);
lean_inc(v_isPreorderInst_x3f_1644_);
lean_inc(v_lawfulOrderLTInst_x3f_1643_);
lean_inc(v_ltInst_x3f_1642_);
lean_inc(v_leInst_x3f_1641_);
lean_inc(v_intModuleInst_1640_);
lean_inc(v_u_1639_);
lean_inc(v_type_1638_);
lean_inc(v_ringId_x3f_1637_);
lean_inc(v_id_1636_);
lean_dec(v_v_1635_);
v___x_1680_ = lean_box(0);
v_isShared_1681_ = v_isSharedCheck_1692_;
goto v_resetjp_1679_;
}
v_resetjp_1679_:
{
lean_object* v___x_1682_; lean_object* v_xs_x27_1683_; lean_object* v___x_1684_; lean_object* v___x_1686_; 
v___x_1682_ = lean_box(0);
v_xs_x27_1683_ = lean_array_fset(v_structs_1622_, v_a_1619_, v___x_1682_);
v___x_1684_ = l_Lean_Meta_Grind_Arith_shrink(v_assignment_1671_, v_x_1620_);
if (v_isShared_1681_ == 0)
{
lean_ctor_set(v___x_1680_, 35, v___x_1684_);
v___x_1686_ = v___x_1680_;
goto v_reusejp_1685_;
}
else
{
lean_object* v_reuseFailAlloc_1691_; 
v_reuseFailAlloc_1691_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_1691_, 0, v_id_1636_);
lean_ctor_set(v_reuseFailAlloc_1691_, 1, v_ringId_x3f_1637_);
lean_ctor_set(v_reuseFailAlloc_1691_, 2, v_type_1638_);
lean_ctor_set(v_reuseFailAlloc_1691_, 3, v_u_1639_);
lean_ctor_set(v_reuseFailAlloc_1691_, 4, v_intModuleInst_1640_);
lean_ctor_set(v_reuseFailAlloc_1691_, 5, v_leInst_x3f_1641_);
lean_ctor_set(v_reuseFailAlloc_1691_, 6, v_ltInst_x3f_1642_);
lean_ctor_set(v_reuseFailAlloc_1691_, 7, v_lawfulOrderLTInst_x3f_1643_);
lean_ctor_set(v_reuseFailAlloc_1691_, 8, v_isPreorderInst_x3f_1644_);
lean_ctor_set(v_reuseFailAlloc_1691_, 9, v_orderedAddInst_x3f_1645_);
lean_ctor_set(v_reuseFailAlloc_1691_, 10, v_isLinearInst_x3f_1646_);
lean_ctor_set(v_reuseFailAlloc_1691_, 11, v_noNatDivInst_x3f_1647_);
lean_ctor_set(v_reuseFailAlloc_1691_, 12, v_ringInst_x3f_1648_);
lean_ctor_set(v_reuseFailAlloc_1691_, 13, v_commRingInst_x3f_1649_);
lean_ctor_set(v_reuseFailAlloc_1691_, 14, v_orderedRingInst_x3f_1650_);
lean_ctor_set(v_reuseFailAlloc_1691_, 15, v_fieldInst_x3f_1651_);
lean_ctor_set(v_reuseFailAlloc_1691_, 16, v_charInst_x3f_1652_);
lean_ctor_set(v_reuseFailAlloc_1691_, 17, v_zero_1653_);
lean_ctor_set(v_reuseFailAlloc_1691_, 18, v_ofNatZero_1654_);
lean_ctor_set(v_reuseFailAlloc_1691_, 19, v_one_x3f_1655_);
lean_ctor_set(v_reuseFailAlloc_1691_, 20, v_leFn_x3f_1656_);
lean_ctor_set(v_reuseFailAlloc_1691_, 21, v_ltFn_x3f_1657_);
lean_ctor_set(v_reuseFailAlloc_1691_, 22, v_addFn_1658_);
lean_ctor_set(v_reuseFailAlloc_1691_, 23, v_zsmulFn_1659_);
lean_ctor_set(v_reuseFailAlloc_1691_, 24, v_nsmulFn_1660_);
lean_ctor_set(v_reuseFailAlloc_1691_, 25, v_zsmulFn_x3f_1661_);
lean_ctor_set(v_reuseFailAlloc_1691_, 26, v_nsmulFn_x3f_1662_);
lean_ctor_set(v_reuseFailAlloc_1691_, 27, v_homomulFn_x3f_1663_);
lean_ctor_set(v_reuseFailAlloc_1691_, 28, v_subFn_1664_);
lean_ctor_set(v_reuseFailAlloc_1691_, 29, v_negFn_1665_);
lean_ctor_set(v_reuseFailAlloc_1691_, 30, v_vars_1666_);
lean_ctor_set(v_reuseFailAlloc_1691_, 31, v_varMap_1667_);
lean_ctor_set(v_reuseFailAlloc_1691_, 32, v_lowers_1668_);
lean_ctor_set(v_reuseFailAlloc_1691_, 33, v_uppers_1669_);
lean_ctor_set(v_reuseFailAlloc_1691_, 34, v_diseqs_1670_);
lean_ctor_set(v_reuseFailAlloc_1691_, 35, v___x_1684_);
lean_ctor_set(v_reuseFailAlloc_1691_, 36, v_conflict_x3f_1673_);
lean_ctor_set(v_reuseFailAlloc_1691_, 37, v_diseqSplits_1674_);
lean_ctor_set(v_reuseFailAlloc_1691_, 38, v_elimEqs_1675_);
lean_ctor_set(v_reuseFailAlloc_1691_, 39, v_elimStack_1676_);
lean_ctor_set(v_reuseFailAlloc_1691_, 40, v_occurs_1677_);
lean_ctor_set(v_reuseFailAlloc_1691_, 41, v_ignored_1678_);
lean_ctor_set_uint8(v_reuseFailAlloc_1691_, sizeof(void*)*42, v_caseSplits_1672_);
v___x_1686_ = v_reuseFailAlloc_1691_;
goto v_reusejp_1685_;
}
v_reusejp_1685_:
{
lean_object* v___x_1687_; lean_object* v___x_1689_; 
v___x_1687_ = lean_array_fset(v_xs_x27_1683_, v_a_1619_, v___x_1686_);
if (v_isShared_1634_ == 0)
{
lean_ctor_set(v___x_1633_, 0, v___x_1687_);
v___x_1689_ = v___x_1633_;
goto v_reusejp_1688_;
}
else
{
lean_object* v_reuseFailAlloc_1690_; 
v_reuseFailAlloc_1690_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_1690_, 0, v___x_1687_);
lean_ctor_set(v_reuseFailAlloc_1690_, 1, v_typeIdOf_1623_);
lean_ctor_set(v_reuseFailAlloc_1690_, 2, v_exprToStructId_1624_);
lean_ctor_set(v_reuseFailAlloc_1690_, 3, v_exprToStructIdEntries_1625_);
lean_ctor_set(v_reuseFailAlloc_1690_, 4, v_forbiddenNatModules_1626_);
lean_ctor_set(v_reuseFailAlloc_1690_, 5, v_natStructs_1627_);
lean_ctor_set(v_reuseFailAlloc_1690_, 6, v_natTypeIdOf_1628_);
lean_ctor_set(v_reuseFailAlloc_1690_, 7, v_exprToNatStructId_1629_);
v___x_1689_ = v_reuseFailAlloc_1690_;
goto v_reusejp_1688_;
}
v_reusejp_1688_:
{
return v___x_1689_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0___boxed(lean_object* v_a_1702_, lean_object* v_x_1703_, lean_object* v_s_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0(v_a_1702_, v_x_1703_, v_s_1704_);
lean_dec(v_x_1703_);
lean_dec(v_a_1702_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(lean_object* v_x_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_){
_start:
{
lean_object* v___f_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
lean_inc(v_a_1707_);
v___f_1711_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1711_, 0, v_a_1707_);
lean_closure_set(v___f_1711_, 1, v_x_1706_);
v___x_1712_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_1713_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_1712_, v___f_1711_, v_a_1708_, v_a_1709_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg___boxed(lean_object* v_x_1714_, lean_object* v_a_1715_, lean_object* v_a_1716_, lean_object* v_a_1717_, lean_object* v_a_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(v_x_1714_, v_a_1715_, v_a_1716_, v_a_1717_);
lean_dec(v_a_1717_);
lean_dec(v_a_1716_);
lean_dec(v_a_1715_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom(lean_object* v_x_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v_a_1725_, lean_object* v_a_1726_, lean_object* v_a_1727_, lean_object* v_a_1728_, lean_object* v_a_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___redArg(v_x_1720_, v_a_1721_, v_a_1722_, v_a_1731_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom___boxed(lean_object* v_x_1734_, lean_object* v_a_1735_, lean_object* v_a_1736_, lean_object* v_a_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_, lean_object* v_a_1746_){
_start:
{
lean_object* v_res_1747_; 
v_res_1747_ = l_Lean_Meta_Grind_Arith_Linear_resetAssignmentFrom(v_x_1734_, v_a_1735_, v_a_1736_, v_a_1737_, v_a_1738_, v_a_1739_, v_a_1740_, v_a_1741_, v_a_1742_, v_a_1743_, v_a_1744_, v_a_1745_);
lean_dec(v_a_1745_);
lean_dec_ref(v_a_1744_);
lean_dec(v_a_1743_);
lean_dec_ref(v_a_1742_);
lean_dec(v_a_1741_);
lean_dec_ref(v_a_1740_);
lean_dec(v_a_1739_);
lean_dec_ref(v_a_1738_);
lean_dec(v_a_1737_);
lean_dec(v_a_1736_);
lean_dec(v_a_1735_);
return v_res_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getVar(lean_object* v_x_1748_, lean_object* v_a_1749_, lean_object* v_a_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v_a_1759_){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1749_, v_a_1750_, v_a_1751_, v_a_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_, v_a_1758_, v_a_1759_);
if (lean_obj_tag(v___x_1761_) == 0)
{
lean_object* v_a_1762_; lean_object* v___x_1764_; uint8_t v_isShared_1765_; uint8_t v_isSharedCheck_1778_; 
v_a_1762_ = lean_ctor_get(v___x_1761_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1761_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1764_ = v___x_1761_;
v_isShared_1765_ = v_isSharedCheck_1778_;
goto v_resetjp_1763_;
}
else
{
lean_inc(v_a_1762_);
lean_dec(v___x_1761_);
v___x_1764_ = lean_box(0);
v_isShared_1765_ = v_isSharedCheck_1778_;
goto v_resetjp_1763_;
}
v_resetjp_1763_:
{
lean_object* v_vars_1766_; lean_object* v_size_1767_; lean_object* v___x_1768_; uint8_t v___x_1769_; 
v_vars_1766_ = lean_ctor_get(v_a_1762_, 30);
lean_inc_ref(v_vars_1766_);
lean_dec(v_a_1762_);
v_size_1767_ = lean_ctor_get(v_vars_1766_, 2);
v___x_1768_ = l_Lean_instInhabitedExpr;
v___x_1769_ = lean_nat_dec_lt(v_x_1748_, v_size_1767_);
if (v___x_1769_ == 0)
{
lean_object* v___x_1770_; lean_object* v___x_1772_; 
lean_dec_ref(v_vars_1766_);
v___x_1770_ = l_outOfBounds___redArg(v___x_1768_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v___x_1770_);
v___x_1772_ = v___x_1764_;
goto v_reusejp_1771_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v___x_1770_);
v___x_1772_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1771_;
}
v_reusejp_1771_:
{
return v___x_1772_;
}
}
else
{
lean_object* v___x_1774_; lean_object* v___x_1776_; 
v___x_1774_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1768_, v_vars_1766_, v_x_1748_);
lean_dec_ref(v_vars_1766_);
if (v_isShared_1765_ == 0)
{
lean_ctor_set(v___x_1764_, 0, v___x_1774_);
v___x_1776_ = v___x_1764_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
else
{
lean_object* v_a_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1786_; 
v_a_1779_ = lean_ctor_get(v___x_1761_, 0);
v_isSharedCheck_1786_ = !lean_is_exclusive(v___x_1761_);
if (v_isSharedCheck_1786_ == 0)
{
v___x_1781_ = v___x_1761_;
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_a_1779_);
lean_dec(v___x_1761_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1786_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v___x_1784_; 
if (v_isShared_1782_ == 0)
{
v___x_1784_ = v___x_1781_;
goto v_reusejp_1783_;
}
else
{
lean_object* v_reuseFailAlloc_1785_; 
v_reuseFailAlloc_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1785_, 0, v_a_1779_);
v___x_1784_ = v_reuseFailAlloc_1785_;
goto v_reusejp_1783_;
}
v_reusejp_1783_:
{
return v___x_1784_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getVar___boxed(lean_object* v_x_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_){
_start:
{
lean_object* v_res_1800_; 
v_res_1800_ = l_Lean_Meta_Grind_Arith_Linear_getVar(v_x_1787_, v_a_1788_, v_a_1789_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_);
lean_dec(v_a_1798_);
lean_dec_ref(v_a_1797_);
lean_dec(v_a_1796_);
lean_dec_ref(v_a_1795_);
lean_dec(v_a_1794_);
lean_dec_ref(v_a_1793_);
lean_dec(v_a_1792_);
lean_dec_ref(v_a_1791_);
lean_dec(v_a_1790_);
lean_dec(v_a_1789_);
lean_dec(v_a_1788_);
lean_dec(v_x_1787_);
return v_res_1800_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_inconsistent(lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_){
_start:
{
lean_object* v___x_1813_; 
v___x_1813_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_1802_, v_a_1811_);
if (lean_obj_tag(v___x_1813_) == 0)
{
lean_object* v_a_1814_; uint8_t v___x_1815_; 
v_a_1814_ = lean_ctor_get(v___x_1813_, 0);
lean_inc(v_a_1814_);
v___x_1815_ = lean_unbox(v_a_1814_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; 
lean_dec_ref(v___x_1813_);
v___x_1816_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1801_, v_a_1802_, v_a_1803_, v_a_1804_, v_a_1805_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_, v_a_1811_);
if (lean_obj_tag(v___x_1816_) == 0)
{
lean_object* v_a_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1830_; 
v_a_1817_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1830_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1830_ == 0)
{
v___x_1819_ = v___x_1816_;
v_isShared_1820_ = v_isSharedCheck_1830_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_a_1817_);
lean_dec(v___x_1816_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1830_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v_conflict_x3f_1821_; 
v_conflict_x3f_1821_ = lean_ctor_get(v_a_1817_, 36);
lean_inc(v_conflict_x3f_1821_);
lean_dec(v_a_1817_);
if (lean_obj_tag(v_conflict_x3f_1821_) == 0)
{
lean_object* v___x_1823_; 
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v_a_1814_);
v___x_1823_ = v___x_1819_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1814_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
else
{
uint8_t v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1828_; 
lean_dec_ref(v_conflict_x3f_1821_);
lean_dec(v_a_1814_);
v___x_1825_ = 1;
v___x_1826_ = lean_box(v___x_1825_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set(v___x_1819_, 0, v___x_1826_);
v___x_1828_ = v___x_1819_;
goto v_reusejp_1827_;
}
else
{
lean_object* v_reuseFailAlloc_1829_; 
v_reuseFailAlloc_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1829_, 0, v___x_1826_);
v___x_1828_ = v_reuseFailAlloc_1829_;
goto v_reusejp_1827_;
}
v_reusejp_1827_:
{
return v___x_1828_;
}
}
}
}
else
{
lean_object* v_a_1831_; lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1838_; 
lean_dec(v_a_1814_);
v_a_1831_ = lean_ctor_get(v___x_1816_, 0);
v_isSharedCheck_1838_ = !lean_is_exclusive(v___x_1816_);
if (v_isSharedCheck_1838_ == 0)
{
v___x_1833_ = v___x_1816_;
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
else
{
lean_inc(v_a_1831_);
lean_dec(v___x_1816_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1838_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1836_; 
if (v_isShared_1834_ == 0)
{
v___x_1836_ = v___x_1833_;
goto v_reusejp_1835_;
}
else
{
lean_object* v_reuseFailAlloc_1837_; 
v_reuseFailAlloc_1837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1837_, 0, v_a_1831_);
v___x_1836_ = v_reuseFailAlloc_1837_;
goto v_reusejp_1835_;
}
v_reusejp_1835_:
{
return v___x_1836_;
}
}
}
}
else
{
lean_dec(v_a_1814_);
return v___x_1813_;
}
}
else
{
return v___x_1813_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_inconsistent___boxed(lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_, lean_object* v_a_1848_, lean_object* v_a_1849_, lean_object* v_a_1850_){
_start:
{
lean_object* v_res_1851_; 
v_res_1851_ = l_Lean_Meta_Grind_Arith_Linear_inconsistent(v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_, v_a_1847_, v_a_1848_, v_a_1849_);
lean_dec(v_a_1849_);
lean_dec_ref(v_a_1848_);
lean_dec(v_a_1847_);
lean_dec_ref(v_a_1846_);
lean_dec(v_a_1845_);
lean_dec_ref(v_a_1844_);
lean_dec(v_a_1843_);
lean_dec_ref(v_a_1842_);
lean_dec(v_a_1841_);
lean_dec(v_a_1840_);
lean_dec(v_a_1839_);
return v_res_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_eliminated(lean_object* v_x_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v___x_1865_; 
v___x_1865_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1853_, v_a_1854_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_, v_a_1860_, v_a_1861_, v_a_1862_, v_a_1863_);
if (lean_obj_tag(v___x_1865_) == 0)
{
lean_object* v_a_1866_; lean_object* v___x_1868_; uint8_t v_isShared_1869_; uint8_t v_isSharedCheck_1888_; 
v_a_1866_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1888_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1868_ = v___x_1865_;
v_isShared_1869_ = v_isSharedCheck_1888_;
goto v_resetjp_1867_;
}
else
{
lean_inc(v_a_1866_);
lean_dec(v___x_1865_);
v___x_1868_ = lean_box(0);
v_isShared_1869_ = v_isSharedCheck_1888_;
goto v_resetjp_1867_;
}
v_resetjp_1867_:
{
lean_object* v___y_1871_; lean_object* v_elimEqs_1882_; lean_object* v_size_1883_; lean_object* v___x_1884_; uint8_t v___x_1885_; 
v_elimEqs_1882_ = lean_ctor_get(v_a_1866_, 38);
lean_inc_ref(v_elimEqs_1882_);
lean_dec(v_a_1866_);
v_size_1883_ = lean_ctor_get(v_elimEqs_1882_, 2);
v___x_1884_ = lean_box(0);
v___x_1885_ = lean_nat_dec_lt(v_x_1852_, v_size_1883_);
if (v___x_1885_ == 0)
{
lean_object* v___x_1886_; 
lean_dec_ref(v_elimEqs_1882_);
v___x_1886_ = l_outOfBounds___redArg(v___x_1884_);
v___y_1871_ = v___x_1886_;
goto v___jp_1870_;
}
else
{
lean_object* v___x_1887_; 
v___x_1887_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1884_, v_elimEqs_1882_, v_x_1852_);
lean_dec_ref(v_elimEqs_1882_);
v___y_1871_ = v___x_1887_;
goto v___jp_1870_;
}
v___jp_1870_:
{
if (lean_obj_tag(v___y_1871_) == 0)
{
uint8_t v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1875_; 
v___x_1872_ = 0;
v___x_1873_ = lean_box(v___x_1872_);
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 0, v___x_1873_);
v___x_1875_ = v___x_1868_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v___x_1873_);
v___x_1875_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
return v___x_1875_;
}
}
else
{
uint8_t v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1880_; 
lean_dec_ref(v___y_1871_);
v___x_1877_ = 1;
v___x_1878_ = lean_box(v___x_1877_);
if (v_isShared_1869_ == 0)
{
lean_ctor_set(v___x_1868_, 0, v___x_1878_);
v___x_1880_ = v___x_1868_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
}
else
{
lean_object* v_a_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1896_; 
v_a_1889_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1891_ = v___x_1865_;
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_a_1889_);
lean_dec(v___x_1865_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1896_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1894_; 
if (v_isShared_1892_ == 0)
{
v___x_1894_ = v___x_1891_;
goto v_reusejp_1893_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v_a_1889_);
v___x_1894_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1893_;
}
v_reusejp_1893_:
{
return v___x_1894_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_eliminated___boxed(lean_object* v_x_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_, lean_object* v_a_1908_, lean_object* v_a_1909_){
_start:
{
lean_object* v_res_1910_; 
v_res_1910_ = l_Lean_Meta_Grind_Arith_Linear_eliminated(v_x_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_, v_a_1907_, v_a_1908_);
lean_dec(v_a_1908_);
lean_dec_ref(v_a_1907_);
lean_dec(v_a_1906_);
lean_dec_ref(v_a_1905_);
lean_dec(v_a_1904_);
lean_dec_ref(v_a_1903_);
lean_dec(v_a_1902_);
lean_dec_ref(v_a_1901_);
lean_dec(v_a_1900_);
lean_dec(v_a_1899_);
lean_dec(v_a_1898_);
lean_dec(v_x_1897_);
return v_res_1910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOccursOf(lean_object* v_x_1911_, lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_, lean_object* v_a_1922_){
_start:
{
lean_object* v___x_1924_; 
v___x_1924_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_, v_a_1922_);
if (lean_obj_tag(v___x_1924_) == 0)
{
lean_object* v_a_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1941_; 
v_a_1925_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1941_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1941_ == 0)
{
v___x_1927_ = v___x_1924_;
v_isShared_1928_ = v_isSharedCheck_1941_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_a_1925_);
lean_dec(v___x_1924_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1941_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v_occurs_1929_; lean_object* v_size_1930_; lean_object* v___x_1931_; uint8_t v___x_1932_; 
v_occurs_1929_ = lean_ctor_get(v_a_1925_, 40);
lean_inc_ref(v_occurs_1929_);
lean_dec(v_a_1925_);
v_size_1930_ = lean_ctor_get(v_occurs_1929_, 2);
v___x_1931_ = lean_box(1);
v___x_1932_ = lean_nat_dec_lt(v_x_1911_, v_size_1930_);
if (v___x_1932_ == 0)
{
lean_object* v___x_1933_; lean_object* v___x_1935_; 
lean_dec_ref(v_occurs_1929_);
v___x_1933_ = l_outOfBounds___redArg(v___x_1931_);
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 0, v___x_1933_);
v___x_1935_ = v___x_1927_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1933_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
else
{
lean_object* v___x_1937_; lean_object* v___x_1939_; 
v___x_1937_ = l_Lean_PersistentArray_get_x21___redArg(v___x_1931_, v_occurs_1929_, v_x_1911_);
lean_dec_ref(v_occurs_1929_);
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 0, v___x_1937_);
v___x_1939_ = v___x_1927_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1937_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
v_a_1942_ = lean_ctor_get(v___x_1924_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1924_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1924_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1924_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_getOccursOf___boxed(lean_object* v_x_1950_, lean_object* v_a_1951_, lean_object* v_a_1952_, lean_object* v_a_1953_, lean_object* v_a_1954_, lean_object* v_a_1955_, lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l_Lean_Meta_Grind_Arith_Linear_getOccursOf(v_x_1950_, v_a_1951_, v_a_1952_, v_a_1953_, v_a_1954_, v_a_1955_, v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_, v_a_1960_, v_a_1961_);
lean_dec(v_a_1961_);
lean_dec_ref(v_a_1960_);
lean_dec(v_a_1959_);
lean_dec_ref(v_a_1958_);
lean_dec(v_a_1957_);
lean_dec_ref(v_a_1956_);
lean_dec(v_a_1955_);
lean_dec_ref(v_a_1954_);
lean_dec(v_a_1953_);
lean_dec(v_a_1952_);
lean_dec(v_a_1951_);
lean_dec(v_x_1950_);
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(lean_object* v_k_1964_, lean_object* v_v_1965_, lean_object* v_t_1966_){
_start:
{
if (lean_obj_tag(v_t_1966_) == 0)
{
lean_object* v_size_1967_; lean_object* v_k_1968_; lean_object* v_v_1969_; lean_object* v_l_1970_; lean_object* v_r_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_2252_; 
v_size_1967_ = lean_ctor_get(v_t_1966_, 0);
v_k_1968_ = lean_ctor_get(v_t_1966_, 1);
v_v_1969_ = lean_ctor_get(v_t_1966_, 2);
v_l_1970_ = lean_ctor_get(v_t_1966_, 3);
v_r_1971_ = lean_ctor_get(v_t_1966_, 4);
v_isSharedCheck_2252_ = !lean_is_exclusive(v_t_1966_);
if (v_isSharedCheck_2252_ == 0)
{
v___x_1973_ = v_t_1966_;
v_isShared_1974_ = v_isSharedCheck_2252_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_r_1971_);
lean_inc(v_l_1970_);
lean_inc(v_v_1969_);
lean_inc(v_k_1968_);
lean_inc(v_size_1967_);
lean_dec(v_t_1966_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_2252_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
uint8_t v___x_1975_; 
v___x_1975_ = lean_nat_dec_lt(v_k_1964_, v_k_1968_);
if (v___x_1975_ == 0)
{
uint8_t v___x_1976_; 
v___x_1976_ = lean_nat_dec_eq(v_k_1964_, v_k_1968_);
if (v___x_1976_ == 0)
{
lean_object* v_impl_1977_; lean_object* v___x_1978_; 
lean_dec(v_size_1967_);
v_impl_1977_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(v_k_1964_, v_v_1965_, v_r_1971_);
v___x_1978_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_1970_) == 0)
{
lean_object* v_size_1979_; lean_object* v_size_1980_; lean_object* v_k_1981_; lean_object* v_v_1982_; lean_object* v_l_1983_; lean_object* v_r_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; uint8_t v___x_1987_; 
v_size_1979_ = lean_ctor_get(v_l_1970_, 0);
v_size_1980_ = lean_ctor_get(v_impl_1977_, 0);
lean_inc(v_size_1980_);
v_k_1981_ = lean_ctor_get(v_impl_1977_, 1);
lean_inc(v_k_1981_);
v_v_1982_ = lean_ctor_get(v_impl_1977_, 2);
lean_inc(v_v_1982_);
v_l_1983_ = lean_ctor_get(v_impl_1977_, 3);
lean_inc(v_l_1983_);
v_r_1984_ = lean_ctor_get(v_impl_1977_, 4);
lean_inc(v_r_1984_);
v___x_1985_ = lean_unsigned_to_nat(3u);
v___x_1986_ = lean_nat_mul(v___x_1985_, v_size_1979_);
v___x_1987_ = lean_nat_dec_lt(v___x_1986_, v_size_1980_);
lean_dec(v___x_1986_);
if (v___x_1987_ == 0)
{
lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1991_; 
lean_dec(v_r_1984_);
lean_dec(v_l_1983_);
lean_dec(v_v_1982_);
lean_dec(v_k_1981_);
v___x_1988_ = lean_nat_add(v___x_1978_, v_size_1979_);
v___x_1989_ = lean_nat_add(v___x_1988_, v_size_1980_);
lean_dec(v_size_1980_);
lean_dec(v___x_1988_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 4, v_impl_1977_);
lean_ctor_set(v___x_1973_, 0, v___x_1989_);
v___x_1991_ = v___x_1973_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1992_; 
v_reuseFailAlloc_1992_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1992_, 0, v___x_1989_);
lean_ctor_set(v_reuseFailAlloc_1992_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_1992_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_1992_, 3, v_l_1970_);
lean_ctor_set(v_reuseFailAlloc_1992_, 4, v_impl_1977_);
v___x_1991_ = v_reuseFailAlloc_1992_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
return v___x_1991_;
}
}
else
{
lean_object* v___x_1994_; uint8_t v_isShared_1995_; uint8_t v_isSharedCheck_2056_; 
v_isSharedCheck_2056_ = !lean_is_exclusive(v_impl_1977_);
if (v_isSharedCheck_2056_ == 0)
{
lean_object* v_unused_2057_; lean_object* v_unused_2058_; lean_object* v_unused_2059_; lean_object* v_unused_2060_; lean_object* v_unused_2061_; 
v_unused_2057_ = lean_ctor_get(v_impl_1977_, 4);
lean_dec(v_unused_2057_);
v_unused_2058_ = lean_ctor_get(v_impl_1977_, 3);
lean_dec(v_unused_2058_);
v_unused_2059_ = lean_ctor_get(v_impl_1977_, 2);
lean_dec(v_unused_2059_);
v_unused_2060_ = lean_ctor_get(v_impl_1977_, 1);
lean_dec(v_unused_2060_);
v_unused_2061_ = lean_ctor_get(v_impl_1977_, 0);
lean_dec(v_unused_2061_);
v___x_1994_ = v_impl_1977_;
v_isShared_1995_ = v_isSharedCheck_2056_;
goto v_resetjp_1993_;
}
else
{
lean_dec(v_impl_1977_);
v___x_1994_ = lean_box(0);
v_isShared_1995_ = v_isSharedCheck_2056_;
goto v_resetjp_1993_;
}
v_resetjp_1993_:
{
lean_object* v_size_1996_; lean_object* v_k_1997_; lean_object* v_v_1998_; lean_object* v_l_1999_; lean_object* v_r_2000_; lean_object* v_size_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; uint8_t v___x_2004_; 
v_size_1996_ = lean_ctor_get(v_l_1983_, 0);
v_k_1997_ = lean_ctor_get(v_l_1983_, 1);
v_v_1998_ = lean_ctor_get(v_l_1983_, 2);
v_l_1999_ = lean_ctor_get(v_l_1983_, 3);
v_r_2000_ = lean_ctor_get(v_l_1983_, 4);
v_size_2001_ = lean_ctor_get(v_r_1984_, 0);
v___x_2002_ = lean_unsigned_to_nat(2u);
v___x_2003_ = lean_nat_mul(v___x_2002_, v_size_2001_);
v___x_2004_ = lean_nat_dec_lt(v_size_1996_, v___x_2003_);
lean_dec(v___x_2003_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2032_; 
lean_inc(v_r_2000_);
lean_inc(v_l_1999_);
lean_inc(v_v_1998_);
lean_inc(v_k_1997_);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_l_1983_);
if (v_isSharedCheck_2032_ == 0)
{
lean_object* v_unused_2033_; lean_object* v_unused_2034_; lean_object* v_unused_2035_; lean_object* v_unused_2036_; lean_object* v_unused_2037_; 
v_unused_2033_ = lean_ctor_get(v_l_1983_, 4);
lean_dec(v_unused_2033_);
v_unused_2034_ = lean_ctor_get(v_l_1983_, 3);
lean_dec(v_unused_2034_);
v_unused_2035_ = lean_ctor_get(v_l_1983_, 2);
lean_dec(v_unused_2035_);
v_unused_2036_ = lean_ctor_get(v_l_1983_, 1);
lean_dec(v_unused_2036_);
v_unused_2037_ = lean_ctor_get(v_l_1983_, 0);
lean_dec(v_unused_2037_);
v___x_2006_ = v_l_1983_;
v_isShared_2007_ = v_isSharedCheck_2032_;
goto v_resetjp_2005_;
}
else
{
lean_dec(v_l_1983_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2032_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___y_2011_; lean_object* v___y_2012_; lean_object* v___y_2013_; lean_object* v___y_2022_; 
v___x_2008_ = lean_nat_add(v___x_1978_, v_size_1979_);
v___x_2009_ = lean_nat_add(v___x_2008_, v_size_1980_);
lean_dec(v_size_1980_);
if (lean_obj_tag(v_l_1999_) == 0)
{
lean_object* v_size_2030_; 
v_size_2030_ = lean_ctor_get(v_l_1999_, 0);
lean_inc(v_size_2030_);
v___y_2022_ = v_size_2030_;
goto v___jp_2021_;
}
else
{
lean_object* v___x_2031_; 
v___x_2031_ = lean_unsigned_to_nat(0u);
v___y_2022_ = v___x_2031_;
goto v___jp_2021_;
}
v___jp_2010_:
{
lean_object* v___x_2014_; lean_object* v___x_2016_; 
v___x_2014_ = lean_nat_add(v___y_2011_, v___y_2013_);
lean_dec(v___y_2013_);
lean_dec(v___y_2011_);
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 4, v_r_1984_);
lean_ctor_set(v___x_2006_, 3, v_r_2000_);
lean_ctor_set(v___x_2006_, 2, v_v_1982_);
lean_ctor_set(v___x_2006_, 1, v_k_1981_);
lean_ctor_set(v___x_2006_, 0, v___x_2014_);
v___x_2016_ = v___x_2006_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v___x_2014_);
lean_ctor_set(v_reuseFailAlloc_2020_, 1, v_k_1981_);
lean_ctor_set(v_reuseFailAlloc_2020_, 2, v_v_1982_);
lean_ctor_set(v_reuseFailAlloc_2020_, 3, v_r_2000_);
lean_ctor_set(v_reuseFailAlloc_2020_, 4, v_r_1984_);
v___x_2016_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
lean_object* v___x_2018_; 
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v___x_2016_);
lean_ctor_set(v___x_1994_, 3, v___y_2012_);
lean_ctor_set(v___x_1994_, 2, v_v_1998_);
lean_ctor_set(v___x_1994_, 1, v_k_1997_);
lean_ctor_set(v___x_1994_, 0, v___x_2009_);
v___x_2018_ = v___x_1994_;
goto v_reusejp_2017_;
}
else
{
lean_object* v_reuseFailAlloc_2019_; 
v_reuseFailAlloc_2019_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2019_, 0, v___x_2009_);
lean_ctor_set(v_reuseFailAlloc_2019_, 1, v_k_1997_);
lean_ctor_set(v_reuseFailAlloc_2019_, 2, v_v_1998_);
lean_ctor_set(v_reuseFailAlloc_2019_, 3, v___y_2012_);
lean_ctor_set(v_reuseFailAlloc_2019_, 4, v___x_2016_);
v___x_2018_ = v_reuseFailAlloc_2019_;
goto v_reusejp_2017_;
}
v_reusejp_2017_:
{
return v___x_2018_;
}
}
}
v___jp_2021_:
{
lean_object* v___x_2023_; lean_object* v___x_2025_; 
v___x_2023_ = lean_nat_add(v___x_2008_, v___y_2022_);
lean_dec(v___y_2022_);
lean_dec(v___x_2008_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 4, v_l_1999_);
lean_ctor_set(v___x_1973_, 0, v___x_2023_);
v___x_2025_ = v___x_1973_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2023_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2029_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2029_, 3, v_l_1970_);
lean_ctor_set(v_reuseFailAlloc_2029_, 4, v_l_1999_);
v___x_2025_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2026_; 
v___x_2026_ = lean_nat_add(v___x_1978_, v_size_2001_);
if (lean_obj_tag(v_r_2000_) == 0)
{
lean_object* v_size_2027_; 
v_size_2027_ = lean_ctor_get(v_r_2000_, 0);
lean_inc(v_size_2027_);
v___y_2011_ = v___x_2026_;
v___y_2012_ = v___x_2025_;
v___y_2013_ = v_size_2027_;
goto v___jp_2010_;
}
else
{
lean_object* v___x_2028_; 
v___x_2028_ = lean_unsigned_to_nat(0u);
v___y_2011_ = v___x_2026_;
v___y_2012_ = v___x_2025_;
v___y_2013_ = v___x_2028_;
goto v___jp_2010_;
}
}
}
}
}
else
{
lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2042_; 
lean_del_object(v___x_1973_);
v___x_2038_ = lean_nat_add(v___x_1978_, v_size_1979_);
v___x_2039_ = lean_nat_add(v___x_2038_, v_size_1980_);
lean_dec(v_size_1980_);
v___x_2040_ = lean_nat_add(v___x_2038_, v_size_1996_);
lean_dec(v___x_2038_);
lean_inc_ref(v_l_1970_);
if (v_isShared_1995_ == 0)
{
lean_ctor_set(v___x_1994_, 4, v_l_1983_);
lean_ctor_set(v___x_1994_, 3, v_l_1970_);
lean_ctor_set(v___x_1994_, 2, v_v_1969_);
lean_ctor_set(v___x_1994_, 1, v_k_1968_);
lean_ctor_set(v___x_1994_, 0, v___x_2040_);
v___x_2042_ = v___x_1994_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v___x_2040_);
lean_ctor_set(v_reuseFailAlloc_2055_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2055_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2055_, 3, v_l_1970_);
lean_ctor_set(v_reuseFailAlloc_2055_, 4, v_l_1983_);
v___x_2042_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
lean_object* v___x_2044_; uint8_t v_isShared_2045_; uint8_t v_isSharedCheck_2049_; 
v_isSharedCheck_2049_ = !lean_is_exclusive(v_l_1970_);
if (v_isSharedCheck_2049_ == 0)
{
lean_object* v_unused_2050_; lean_object* v_unused_2051_; lean_object* v_unused_2052_; lean_object* v_unused_2053_; lean_object* v_unused_2054_; 
v_unused_2050_ = lean_ctor_get(v_l_1970_, 4);
lean_dec(v_unused_2050_);
v_unused_2051_ = lean_ctor_get(v_l_1970_, 3);
lean_dec(v_unused_2051_);
v_unused_2052_ = lean_ctor_get(v_l_1970_, 2);
lean_dec(v_unused_2052_);
v_unused_2053_ = lean_ctor_get(v_l_1970_, 1);
lean_dec(v_unused_2053_);
v_unused_2054_ = lean_ctor_get(v_l_1970_, 0);
lean_dec(v_unused_2054_);
v___x_2044_ = v_l_1970_;
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
else
{
lean_dec(v_l_1970_);
v___x_2044_ = lean_box(0);
v_isShared_2045_ = v_isSharedCheck_2049_;
goto v_resetjp_2043_;
}
v_resetjp_2043_:
{
lean_object* v___x_2047_; 
if (v_isShared_2045_ == 0)
{
lean_ctor_set(v___x_2044_, 4, v_r_1984_);
lean_ctor_set(v___x_2044_, 3, v___x_2042_);
lean_ctor_set(v___x_2044_, 2, v_v_1982_);
lean_ctor_set(v___x_2044_, 1, v_k_1981_);
lean_ctor_set(v___x_2044_, 0, v___x_2039_);
v___x_2047_ = v___x_2044_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v___x_2039_);
lean_ctor_set(v_reuseFailAlloc_2048_, 1, v_k_1981_);
lean_ctor_set(v_reuseFailAlloc_2048_, 2, v_v_1982_);
lean_ctor_set(v_reuseFailAlloc_2048_, 3, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2048_, 4, v_r_1984_);
v___x_2047_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
return v___x_2047_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2062_; 
v_l_2062_ = lean_ctor_get(v_impl_1977_, 3);
lean_inc(v_l_2062_);
if (lean_obj_tag(v_l_2062_) == 0)
{
lean_object* v_r_2063_; lean_object* v_k_2064_; lean_object* v_v_2065_; lean_object* v___x_2067_; uint8_t v_isShared_2068_; uint8_t v_isSharedCheck_2088_; 
v_r_2063_ = lean_ctor_get(v_impl_1977_, 4);
v_k_2064_ = lean_ctor_get(v_impl_1977_, 1);
v_v_2065_ = lean_ctor_get(v_impl_1977_, 2);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_impl_1977_);
if (v_isSharedCheck_2088_ == 0)
{
lean_object* v_unused_2089_; lean_object* v_unused_2090_; 
v_unused_2089_ = lean_ctor_get(v_impl_1977_, 3);
lean_dec(v_unused_2089_);
v_unused_2090_ = lean_ctor_get(v_impl_1977_, 0);
lean_dec(v_unused_2090_);
v___x_2067_ = v_impl_1977_;
v_isShared_2068_ = v_isSharedCheck_2088_;
goto v_resetjp_2066_;
}
else
{
lean_inc(v_r_2063_);
lean_inc(v_v_2065_);
lean_inc(v_k_2064_);
lean_dec(v_impl_1977_);
v___x_2067_ = lean_box(0);
v_isShared_2068_ = v_isSharedCheck_2088_;
goto v_resetjp_2066_;
}
v_resetjp_2066_:
{
lean_object* v_k_2069_; lean_object* v_v_2070_; lean_object* v___x_2072_; uint8_t v_isShared_2073_; uint8_t v_isSharedCheck_2084_; 
v_k_2069_ = lean_ctor_get(v_l_2062_, 1);
v_v_2070_ = lean_ctor_get(v_l_2062_, 2);
v_isSharedCheck_2084_ = !lean_is_exclusive(v_l_2062_);
if (v_isSharedCheck_2084_ == 0)
{
lean_object* v_unused_2085_; lean_object* v_unused_2086_; lean_object* v_unused_2087_; 
v_unused_2085_ = lean_ctor_get(v_l_2062_, 4);
lean_dec(v_unused_2085_);
v_unused_2086_ = lean_ctor_get(v_l_2062_, 3);
lean_dec(v_unused_2086_);
v_unused_2087_ = lean_ctor_get(v_l_2062_, 0);
lean_dec(v_unused_2087_);
v___x_2072_ = v_l_2062_;
v_isShared_2073_ = v_isSharedCheck_2084_;
goto v_resetjp_2071_;
}
else
{
lean_inc(v_v_2070_);
lean_inc(v_k_2069_);
lean_dec(v_l_2062_);
v___x_2072_ = lean_box(0);
v_isShared_2073_ = v_isSharedCheck_2084_;
goto v_resetjp_2071_;
}
v_resetjp_2071_:
{
lean_object* v___x_2074_; lean_object* v___x_2076_; 
v___x_2074_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_2063_, 2);
if (v_isShared_2073_ == 0)
{
lean_ctor_set(v___x_2072_, 4, v_r_2063_);
lean_ctor_set(v___x_2072_, 3, v_r_2063_);
lean_ctor_set(v___x_2072_, 2, v_v_1969_);
lean_ctor_set(v___x_2072_, 1, v_k_1968_);
lean_ctor_set(v___x_2072_, 0, v___x_1978_);
v___x_2076_ = v___x_2072_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v___x_1978_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2083_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2083_, 3, v_r_2063_);
lean_ctor_set(v_reuseFailAlloc_2083_, 4, v_r_2063_);
v___x_2076_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
lean_object* v___x_2078_; 
lean_inc(v_r_2063_);
if (v_isShared_2068_ == 0)
{
lean_ctor_set(v___x_2067_, 3, v_r_2063_);
lean_ctor_set(v___x_2067_, 0, v___x_1978_);
v___x_2078_ = v___x_2067_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v___x_1978_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v_k_2064_);
lean_ctor_set(v_reuseFailAlloc_2082_, 2, v_v_2065_);
lean_ctor_set(v_reuseFailAlloc_2082_, 3, v_r_2063_);
lean_ctor_set(v_reuseFailAlloc_2082_, 4, v_r_2063_);
v___x_2078_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
lean_object* v___x_2080_; 
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 4, v___x_2078_);
lean_ctor_set(v___x_1973_, 3, v___x_2076_);
lean_ctor_set(v___x_1973_, 2, v_v_2070_);
lean_ctor_set(v___x_1973_, 1, v_k_2069_);
lean_ctor_set(v___x_1973_, 0, v___x_2074_);
v___x_2080_ = v___x_1973_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v___x_2074_);
lean_ctor_set(v_reuseFailAlloc_2081_, 1, v_k_2069_);
lean_ctor_set(v_reuseFailAlloc_2081_, 2, v_v_2070_);
lean_ctor_set(v_reuseFailAlloc_2081_, 3, v___x_2076_);
lean_ctor_set(v_reuseFailAlloc_2081_, 4, v___x_2078_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
}
}
else
{
lean_object* v_r_2091_; 
v_r_2091_ = lean_ctor_get(v_impl_1977_, 4);
lean_inc(v_r_2091_);
if (lean_obj_tag(v_r_2091_) == 0)
{
lean_object* v_k_2092_; lean_object* v_v_2093_; lean_object* v___x_2095_; uint8_t v_isShared_2096_; uint8_t v_isSharedCheck_2104_; 
v_k_2092_ = lean_ctor_get(v_impl_1977_, 1);
v_v_2093_ = lean_ctor_get(v_impl_1977_, 2);
v_isSharedCheck_2104_ = !lean_is_exclusive(v_impl_1977_);
if (v_isSharedCheck_2104_ == 0)
{
lean_object* v_unused_2105_; lean_object* v_unused_2106_; lean_object* v_unused_2107_; 
v_unused_2105_ = lean_ctor_get(v_impl_1977_, 4);
lean_dec(v_unused_2105_);
v_unused_2106_ = lean_ctor_get(v_impl_1977_, 3);
lean_dec(v_unused_2106_);
v_unused_2107_ = lean_ctor_get(v_impl_1977_, 0);
lean_dec(v_unused_2107_);
v___x_2095_ = v_impl_1977_;
v_isShared_2096_ = v_isSharedCheck_2104_;
goto v_resetjp_2094_;
}
else
{
lean_inc(v_v_2093_);
lean_inc(v_k_2092_);
lean_dec(v_impl_1977_);
v___x_2095_ = lean_box(0);
v_isShared_2096_ = v_isSharedCheck_2104_;
goto v_resetjp_2094_;
}
v_resetjp_2094_:
{
lean_object* v___x_2097_; lean_object* v___x_2099_; 
v___x_2097_ = lean_unsigned_to_nat(3u);
if (v_isShared_2096_ == 0)
{
lean_ctor_set(v___x_2095_, 4, v_l_2062_);
lean_ctor_set(v___x_2095_, 2, v_v_1969_);
lean_ctor_set(v___x_2095_, 1, v_k_1968_);
lean_ctor_set(v___x_2095_, 0, v___x_1978_);
v___x_2099_ = v___x_2095_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_1978_);
lean_ctor_set(v_reuseFailAlloc_2103_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2103_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2103_, 3, v_l_2062_);
lean_ctor_set(v_reuseFailAlloc_2103_, 4, v_l_2062_);
v___x_2099_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
lean_object* v___x_2101_; 
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 4, v_r_2091_);
lean_ctor_set(v___x_1973_, 3, v___x_2099_);
lean_ctor_set(v___x_1973_, 2, v_v_2093_);
lean_ctor_set(v___x_1973_, 1, v_k_2092_);
lean_ctor_set(v___x_1973_, 0, v___x_2097_);
v___x_2101_ = v___x_1973_;
goto v_reusejp_2100_;
}
else
{
lean_object* v_reuseFailAlloc_2102_; 
v_reuseFailAlloc_2102_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2102_, 0, v___x_2097_);
lean_ctor_set(v_reuseFailAlloc_2102_, 1, v_k_2092_);
lean_ctor_set(v_reuseFailAlloc_2102_, 2, v_v_2093_);
lean_ctor_set(v_reuseFailAlloc_2102_, 3, v___x_2099_);
lean_ctor_set(v_reuseFailAlloc_2102_, 4, v_r_2091_);
v___x_2101_ = v_reuseFailAlloc_2102_;
goto v_reusejp_2100_;
}
v_reusejp_2100_:
{
return v___x_2101_;
}
}
}
}
else
{
lean_object* v___x_2108_; lean_object* v___x_2110_; 
v___x_2108_ = lean_unsigned_to_nat(2u);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 4, v_impl_1977_);
lean_ctor_set(v___x_1973_, 3, v_r_2091_);
lean_ctor_set(v___x_1973_, 0, v___x_2108_);
v___x_2110_ = v___x_1973_;
goto v_reusejp_2109_;
}
else
{
lean_object* v_reuseFailAlloc_2111_; 
v_reuseFailAlloc_2111_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2111_, 0, v___x_2108_);
lean_ctor_set(v_reuseFailAlloc_2111_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2111_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2111_, 3, v_r_2091_);
lean_ctor_set(v_reuseFailAlloc_2111_, 4, v_impl_1977_);
v___x_2110_ = v_reuseFailAlloc_2111_;
goto v_reusejp_2109_;
}
v_reusejp_2109_:
{
return v___x_2110_;
}
}
}
}
}
else
{
lean_object* v___x_2113_; 
lean_dec(v_v_1969_);
lean_dec(v_k_1968_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 2, v_v_1965_);
lean_ctor_set(v___x_1973_, 1, v_k_1964_);
v___x_2113_ = v___x_1973_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_size_1967_);
lean_ctor_set(v_reuseFailAlloc_2114_, 1, v_k_1964_);
lean_ctor_set(v_reuseFailAlloc_2114_, 2, v_v_1965_);
lean_ctor_set(v_reuseFailAlloc_2114_, 3, v_l_1970_);
lean_ctor_set(v_reuseFailAlloc_2114_, 4, v_r_1971_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
else
{
lean_object* v_impl_2115_; lean_object* v___x_2116_; 
lean_dec(v_size_1967_);
v_impl_2115_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(v_k_1964_, v_v_1965_, v_l_1970_);
v___x_2116_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_1971_) == 0)
{
lean_object* v_size_2117_; lean_object* v_size_2118_; lean_object* v_k_2119_; lean_object* v_v_2120_; lean_object* v_l_2121_; lean_object* v_r_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; uint8_t v___x_2125_; 
v_size_2117_ = lean_ctor_get(v_r_1971_, 0);
v_size_2118_ = lean_ctor_get(v_impl_2115_, 0);
lean_inc(v_size_2118_);
v_k_2119_ = lean_ctor_get(v_impl_2115_, 1);
lean_inc(v_k_2119_);
v_v_2120_ = lean_ctor_get(v_impl_2115_, 2);
lean_inc(v_v_2120_);
v_l_2121_ = lean_ctor_get(v_impl_2115_, 3);
lean_inc(v_l_2121_);
v_r_2122_ = lean_ctor_get(v_impl_2115_, 4);
lean_inc(v_r_2122_);
v___x_2123_ = lean_unsigned_to_nat(3u);
v___x_2124_ = lean_nat_mul(v___x_2123_, v_size_2117_);
v___x_2125_ = lean_nat_dec_lt(v___x_2124_, v_size_2118_);
lean_dec(v___x_2124_);
if (v___x_2125_ == 0)
{
lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2129_; 
lean_dec(v_r_2122_);
lean_dec(v_l_2121_);
lean_dec(v_v_2120_);
lean_dec(v_k_2119_);
v___x_2126_ = lean_nat_add(v___x_2116_, v_size_2118_);
lean_dec(v_size_2118_);
v___x_2127_ = lean_nat_add(v___x_2126_, v_size_2117_);
lean_dec(v___x_2126_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 3, v_impl_2115_);
lean_ctor_set(v___x_1973_, 0, v___x_2127_);
v___x_2129_ = v___x_1973_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v___x_2127_);
lean_ctor_set(v_reuseFailAlloc_2130_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2130_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2130_, 3, v_impl_2115_);
lean_ctor_set(v_reuseFailAlloc_2130_, 4, v_r_1971_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
else
{
lean_object* v___x_2132_; uint8_t v_isShared_2133_; uint8_t v_isSharedCheck_2196_; 
v_isSharedCheck_2196_ = !lean_is_exclusive(v_impl_2115_);
if (v_isSharedCheck_2196_ == 0)
{
lean_object* v_unused_2197_; lean_object* v_unused_2198_; lean_object* v_unused_2199_; lean_object* v_unused_2200_; lean_object* v_unused_2201_; 
v_unused_2197_ = lean_ctor_get(v_impl_2115_, 4);
lean_dec(v_unused_2197_);
v_unused_2198_ = lean_ctor_get(v_impl_2115_, 3);
lean_dec(v_unused_2198_);
v_unused_2199_ = lean_ctor_get(v_impl_2115_, 2);
lean_dec(v_unused_2199_);
v_unused_2200_ = lean_ctor_get(v_impl_2115_, 1);
lean_dec(v_unused_2200_);
v_unused_2201_ = lean_ctor_get(v_impl_2115_, 0);
lean_dec(v_unused_2201_);
v___x_2132_ = v_impl_2115_;
v_isShared_2133_ = v_isSharedCheck_2196_;
goto v_resetjp_2131_;
}
else
{
lean_dec(v_impl_2115_);
v___x_2132_ = lean_box(0);
v_isShared_2133_ = v_isSharedCheck_2196_;
goto v_resetjp_2131_;
}
v_resetjp_2131_:
{
lean_object* v_size_2134_; lean_object* v_size_2135_; lean_object* v_k_2136_; lean_object* v_v_2137_; lean_object* v_l_2138_; lean_object* v_r_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; uint8_t v___x_2142_; 
v_size_2134_ = lean_ctor_get(v_l_2121_, 0);
v_size_2135_ = lean_ctor_get(v_r_2122_, 0);
v_k_2136_ = lean_ctor_get(v_r_2122_, 1);
v_v_2137_ = lean_ctor_get(v_r_2122_, 2);
v_l_2138_ = lean_ctor_get(v_r_2122_, 3);
v_r_2139_ = lean_ctor_get(v_r_2122_, 4);
v___x_2140_ = lean_unsigned_to_nat(2u);
v___x_2141_ = lean_nat_mul(v___x_2140_, v_size_2134_);
v___x_2142_ = lean_nat_dec_lt(v_size_2135_, v___x_2141_);
lean_dec(v___x_2141_);
if (v___x_2142_ == 0)
{
lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2171_; 
lean_inc(v_r_2139_);
lean_inc(v_l_2138_);
lean_inc(v_v_2137_);
lean_inc(v_k_2136_);
v_isSharedCheck_2171_ = !lean_is_exclusive(v_r_2122_);
if (v_isSharedCheck_2171_ == 0)
{
lean_object* v_unused_2172_; lean_object* v_unused_2173_; lean_object* v_unused_2174_; lean_object* v_unused_2175_; lean_object* v_unused_2176_; 
v_unused_2172_ = lean_ctor_get(v_r_2122_, 4);
lean_dec(v_unused_2172_);
v_unused_2173_ = lean_ctor_get(v_r_2122_, 3);
lean_dec(v_unused_2173_);
v_unused_2174_ = lean_ctor_get(v_r_2122_, 2);
lean_dec(v_unused_2174_);
v_unused_2175_ = lean_ctor_get(v_r_2122_, 1);
lean_dec(v_unused_2175_);
v_unused_2176_ = lean_ctor_get(v_r_2122_, 0);
lean_dec(v_unused_2176_);
v___x_2144_ = v_r_2122_;
v_isShared_2145_ = v_isSharedCheck_2171_;
goto v_resetjp_2143_;
}
else
{
lean_dec(v_r_2122_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2171_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___y_2149_; lean_object* v___y_2150_; lean_object* v___y_2151_; lean_object* v___x_2159_; lean_object* v___y_2161_; 
v___x_2146_ = lean_nat_add(v___x_2116_, v_size_2118_);
lean_dec(v_size_2118_);
v___x_2147_ = lean_nat_add(v___x_2146_, v_size_2117_);
lean_dec(v___x_2146_);
v___x_2159_ = lean_nat_add(v___x_2116_, v_size_2134_);
if (lean_obj_tag(v_l_2138_) == 0)
{
lean_object* v_size_2169_; 
v_size_2169_ = lean_ctor_get(v_l_2138_, 0);
lean_inc(v_size_2169_);
v___y_2161_ = v_size_2169_;
goto v___jp_2160_;
}
else
{
lean_object* v___x_2170_; 
v___x_2170_ = lean_unsigned_to_nat(0u);
v___y_2161_ = v___x_2170_;
goto v___jp_2160_;
}
v___jp_2148_:
{
lean_object* v___x_2152_; lean_object* v___x_2154_; 
v___x_2152_ = lean_nat_add(v___y_2149_, v___y_2151_);
lean_dec(v___y_2151_);
lean_dec(v___y_2149_);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 4, v_r_1971_);
lean_ctor_set(v___x_2144_, 3, v_r_2139_);
lean_ctor_set(v___x_2144_, 2, v_v_1969_);
lean_ctor_set(v___x_2144_, 1, v_k_1968_);
lean_ctor_set(v___x_2144_, 0, v___x_2152_);
v___x_2154_ = v___x_2144_;
goto v_reusejp_2153_;
}
else
{
lean_object* v_reuseFailAlloc_2158_; 
v_reuseFailAlloc_2158_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2158_, 0, v___x_2152_);
lean_ctor_set(v_reuseFailAlloc_2158_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2158_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2158_, 3, v_r_2139_);
lean_ctor_set(v_reuseFailAlloc_2158_, 4, v_r_1971_);
v___x_2154_ = v_reuseFailAlloc_2158_;
goto v_reusejp_2153_;
}
v_reusejp_2153_:
{
lean_object* v___x_2156_; 
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 4, v___x_2154_);
lean_ctor_set(v___x_2132_, 3, v___y_2150_);
lean_ctor_set(v___x_2132_, 2, v_v_2137_);
lean_ctor_set(v___x_2132_, 1, v_k_2136_);
lean_ctor_set(v___x_2132_, 0, v___x_2147_);
v___x_2156_ = v___x_2132_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2157_; 
v_reuseFailAlloc_2157_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2157_, 0, v___x_2147_);
lean_ctor_set(v_reuseFailAlloc_2157_, 1, v_k_2136_);
lean_ctor_set(v_reuseFailAlloc_2157_, 2, v_v_2137_);
lean_ctor_set(v_reuseFailAlloc_2157_, 3, v___y_2150_);
lean_ctor_set(v_reuseFailAlloc_2157_, 4, v___x_2154_);
v___x_2156_ = v_reuseFailAlloc_2157_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
return v___x_2156_;
}
}
}
v___jp_2160_:
{
lean_object* v___x_2162_; lean_object* v___x_2164_; 
v___x_2162_ = lean_nat_add(v___x_2159_, v___y_2161_);
lean_dec(v___y_2161_);
lean_dec(v___x_2159_);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 4, v_l_2138_);
lean_ctor_set(v___x_1973_, 3, v_l_2121_);
lean_ctor_set(v___x_1973_, 2, v_v_2120_);
lean_ctor_set(v___x_1973_, 1, v_k_2119_);
lean_ctor_set(v___x_1973_, 0, v___x_2162_);
v___x_2164_ = v___x_1973_;
goto v_reusejp_2163_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2162_);
lean_ctor_set(v_reuseFailAlloc_2168_, 1, v_k_2119_);
lean_ctor_set(v_reuseFailAlloc_2168_, 2, v_v_2120_);
lean_ctor_set(v_reuseFailAlloc_2168_, 3, v_l_2121_);
lean_ctor_set(v_reuseFailAlloc_2168_, 4, v_l_2138_);
v___x_2164_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2163_;
}
v_reusejp_2163_:
{
lean_object* v___x_2165_; 
v___x_2165_ = lean_nat_add(v___x_2116_, v_size_2117_);
if (lean_obj_tag(v_r_2139_) == 0)
{
lean_object* v_size_2166_; 
v_size_2166_ = lean_ctor_get(v_r_2139_, 0);
lean_inc(v_size_2166_);
v___y_2149_ = v___x_2165_;
v___y_2150_ = v___x_2164_;
v___y_2151_ = v_size_2166_;
goto v___jp_2148_;
}
else
{
lean_object* v___x_2167_; 
v___x_2167_ = lean_unsigned_to_nat(0u);
v___y_2149_ = v___x_2165_;
v___y_2150_ = v___x_2164_;
v___y_2151_ = v___x_2167_;
goto v___jp_2148_;
}
}
}
}
}
else
{
lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2182_; 
lean_del_object(v___x_1973_);
v___x_2177_ = lean_nat_add(v___x_2116_, v_size_2118_);
lean_dec(v_size_2118_);
v___x_2178_ = lean_nat_add(v___x_2177_, v_size_2117_);
lean_dec(v___x_2177_);
v___x_2179_ = lean_nat_add(v___x_2116_, v_size_2117_);
v___x_2180_ = lean_nat_add(v___x_2179_, v_size_2135_);
lean_dec(v___x_2179_);
lean_inc_ref(v_r_1971_);
if (v_isShared_2133_ == 0)
{
lean_ctor_set(v___x_2132_, 4, v_r_1971_);
lean_ctor_set(v___x_2132_, 3, v_r_2122_);
lean_ctor_set(v___x_2132_, 2, v_v_1969_);
lean_ctor_set(v___x_2132_, 1, v_k_1968_);
lean_ctor_set(v___x_2132_, 0, v___x_2180_);
v___x_2182_ = v___x_2132_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2195_; 
v_reuseFailAlloc_2195_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2195_, 0, v___x_2180_);
lean_ctor_set(v_reuseFailAlloc_2195_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2195_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2195_, 3, v_r_2122_);
lean_ctor_set(v_reuseFailAlloc_2195_, 4, v_r_1971_);
v___x_2182_ = v_reuseFailAlloc_2195_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
lean_object* v___x_2184_; uint8_t v_isShared_2185_; uint8_t v_isSharedCheck_2189_; 
v_isSharedCheck_2189_ = !lean_is_exclusive(v_r_1971_);
if (v_isSharedCheck_2189_ == 0)
{
lean_object* v_unused_2190_; lean_object* v_unused_2191_; lean_object* v_unused_2192_; lean_object* v_unused_2193_; lean_object* v_unused_2194_; 
v_unused_2190_ = lean_ctor_get(v_r_1971_, 4);
lean_dec(v_unused_2190_);
v_unused_2191_ = lean_ctor_get(v_r_1971_, 3);
lean_dec(v_unused_2191_);
v_unused_2192_ = lean_ctor_get(v_r_1971_, 2);
lean_dec(v_unused_2192_);
v_unused_2193_ = lean_ctor_get(v_r_1971_, 1);
lean_dec(v_unused_2193_);
v_unused_2194_ = lean_ctor_get(v_r_1971_, 0);
lean_dec(v_unused_2194_);
v___x_2184_ = v_r_1971_;
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
else
{
lean_dec(v_r_1971_);
v___x_2184_ = lean_box(0);
v_isShared_2185_ = v_isSharedCheck_2189_;
goto v_resetjp_2183_;
}
v_resetjp_2183_:
{
lean_object* v___x_2187_; 
if (v_isShared_2185_ == 0)
{
lean_ctor_set(v___x_2184_, 4, v___x_2182_);
lean_ctor_set(v___x_2184_, 3, v_l_2121_);
lean_ctor_set(v___x_2184_, 2, v_v_2120_);
lean_ctor_set(v___x_2184_, 1, v_k_2119_);
lean_ctor_set(v___x_2184_, 0, v___x_2178_);
v___x_2187_ = v___x_2184_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v___x_2178_);
lean_ctor_set(v_reuseFailAlloc_2188_, 1, v_k_2119_);
lean_ctor_set(v_reuseFailAlloc_2188_, 2, v_v_2120_);
lean_ctor_set(v_reuseFailAlloc_2188_, 3, v_l_2121_);
lean_ctor_set(v_reuseFailAlloc_2188_, 4, v___x_2182_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_2202_; 
v_l_2202_ = lean_ctor_get(v_impl_2115_, 3);
lean_inc(v_l_2202_);
if (lean_obj_tag(v_l_2202_) == 0)
{
lean_object* v_r_2203_; lean_object* v_k_2204_; lean_object* v_v_2205_; lean_object* v___x_2207_; uint8_t v_isShared_2208_; uint8_t v_isSharedCheck_2216_; 
v_r_2203_ = lean_ctor_get(v_impl_2115_, 4);
v_k_2204_ = lean_ctor_get(v_impl_2115_, 1);
v_v_2205_ = lean_ctor_get(v_impl_2115_, 2);
v_isSharedCheck_2216_ = !lean_is_exclusive(v_impl_2115_);
if (v_isSharedCheck_2216_ == 0)
{
lean_object* v_unused_2217_; lean_object* v_unused_2218_; 
v_unused_2217_ = lean_ctor_get(v_impl_2115_, 3);
lean_dec(v_unused_2217_);
v_unused_2218_ = lean_ctor_get(v_impl_2115_, 0);
lean_dec(v_unused_2218_);
v___x_2207_ = v_impl_2115_;
v_isShared_2208_ = v_isSharedCheck_2216_;
goto v_resetjp_2206_;
}
else
{
lean_inc(v_r_2203_);
lean_inc(v_v_2205_);
lean_inc(v_k_2204_);
lean_dec(v_impl_2115_);
v___x_2207_ = lean_box(0);
v_isShared_2208_ = v_isSharedCheck_2216_;
goto v_resetjp_2206_;
}
v_resetjp_2206_:
{
lean_object* v___x_2209_; lean_object* v___x_2211_; 
v___x_2209_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_2203_);
if (v_isShared_2208_ == 0)
{
lean_ctor_set(v___x_2207_, 3, v_r_2203_);
lean_ctor_set(v___x_2207_, 2, v_v_1969_);
lean_ctor_set(v___x_2207_, 1, v_k_1968_);
lean_ctor_set(v___x_2207_, 0, v___x_2116_);
v___x_2211_ = v___x_2207_;
goto v_reusejp_2210_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v___x_2116_);
lean_ctor_set(v_reuseFailAlloc_2215_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2215_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2215_, 3, v_r_2203_);
lean_ctor_set(v_reuseFailAlloc_2215_, 4, v_r_2203_);
v___x_2211_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2210_;
}
v_reusejp_2210_:
{
lean_object* v___x_2213_; 
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 4, v___x_2211_);
lean_ctor_set(v___x_1973_, 3, v_l_2202_);
lean_ctor_set(v___x_1973_, 2, v_v_2205_);
lean_ctor_set(v___x_1973_, 1, v_k_2204_);
lean_ctor_set(v___x_1973_, 0, v___x_2209_);
v___x_2213_ = v___x_1973_;
goto v_reusejp_2212_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v___x_2209_);
lean_ctor_set(v_reuseFailAlloc_2214_, 1, v_k_2204_);
lean_ctor_set(v_reuseFailAlloc_2214_, 2, v_v_2205_);
lean_ctor_set(v_reuseFailAlloc_2214_, 3, v_l_2202_);
lean_ctor_set(v_reuseFailAlloc_2214_, 4, v___x_2211_);
v___x_2213_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2212_;
}
v_reusejp_2212_:
{
return v___x_2213_;
}
}
}
}
else
{
lean_object* v_r_2219_; 
v_r_2219_ = lean_ctor_get(v_impl_2115_, 4);
lean_inc(v_r_2219_);
if (lean_obj_tag(v_r_2219_) == 0)
{
lean_object* v_k_2220_; lean_object* v_v_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2244_; 
v_k_2220_ = lean_ctor_get(v_impl_2115_, 1);
v_v_2221_ = lean_ctor_get(v_impl_2115_, 2);
v_isSharedCheck_2244_ = !lean_is_exclusive(v_impl_2115_);
if (v_isSharedCheck_2244_ == 0)
{
lean_object* v_unused_2245_; lean_object* v_unused_2246_; lean_object* v_unused_2247_; 
v_unused_2245_ = lean_ctor_get(v_impl_2115_, 4);
lean_dec(v_unused_2245_);
v_unused_2246_ = lean_ctor_get(v_impl_2115_, 3);
lean_dec(v_unused_2246_);
v_unused_2247_ = lean_ctor_get(v_impl_2115_, 0);
lean_dec(v_unused_2247_);
v___x_2223_ = v_impl_2115_;
v_isShared_2224_ = v_isSharedCheck_2244_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_v_2221_);
lean_inc(v_k_2220_);
lean_dec(v_impl_2115_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2244_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v_k_2225_; lean_object* v_v_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2240_; 
v_k_2225_ = lean_ctor_get(v_r_2219_, 1);
v_v_2226_ = lean_ctor_get(v_r_2219_, 2);
v_isSharedCheck_2240_ = !lean_is_exclusive(v_r_2219_);
if (v_isSharedCheck_2240_ == 0)
{
lean_object* v_unused_2241_; lean_object* v_unused_2242_; lean_object* v_unused_2243_; 
v_unused_2241_ = lean_ctor_get(v_r_2219_, 4);
lean_dec(v_unused_2241_);
v_unused_2242_ = lean_ctor_get(v_r_2219_, 3);
lean_dec(v_unused_2242_);
v_unused_2243_ = lean_ctor_get(v_r_2219_, 0);
lean_dec(v_unused_2243_);
v___x_2228_ = v_r_2219_;
v_isShared_2229_ = v_isSharedCheck_2240_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_v_2226_);
lean_inc(v_k_2225_);
lean_dec(v_r_2219_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2240_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___x_2230_; lean_object* v___x_2232_; 
v___x_2230_ = lean_unsigned_to_nat(3u);
if (v_isShared_2229_ == 0)
{
lean_ctor_set(v___x_2228_, 4, v_l_2202_);
lean_ctor_set(v___x_2228_, 3, v_l_2202_);
lean_ctor_set(v___x_2228_, 2, v_v_2221_);
lean_ctor_set(v___x_2228_, 1, v_k_2220_);
lean_ctor_set(v___x_2228_, 0, v___x_2116_);
v___x_2232_ = v___x_2228_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2239_; 
v_reuseFailAlloc_2239_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2239_, 0, v___x_2116_);
lean_ctor_set(v_reuseFailAlloc_2239_, 1, v_k_2220_);
lean_ctor_set(v_reuseFailAlloc_2239_, 2, v_v_2221_);
lean_ctor_set(v_reuseFailAlloc_2239_, 3, v_l_2202_);
lean_ctor_set(v_reuseFailAlloc_2239_, 4, v_l_2202_);
v___x_2232_ = v_reuseFailAlloc_2239_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
lean_object* v___x_2234_; 
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 4, v_l_2202_);
lean_ctor_set(v___x_2223_, 2, v_v_1969_);
lean_ctor_set(v___x_2223_, 1, v_k_1968_);
lean_ctor_set(v___x_2223_, 0, v___x_2116_);
v___x_2234_ = v___x_2223_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v___x_2116_);
lean_ctor_set(v_reuseFailAlloc_2238_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2238_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2238_, 3, v_l_2202_);
lean_ctor_set(v_reuseFailAlloc_2238_, 4, v_l_2202_);
v___x_2234_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
lean_object* v___x_2236_; 
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 4, v___x_2234_);
lean_ctor_set(v___x_1973_, 3, v___x_2232_);
lean_ctor_set(v___x_1973_, 2, v_v_2226_);
lean_ctor_set(v___x_1973_, 1, v_k_2225_);
lean_ctor_set(v___x_1973_, 0, v___x_2230_);
v___x_2236_ = v___x_1973_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2230_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v_k_2225_);
lean_ctor_set(v_reuseFailAlloc_2237_, 2, v_v_2226_);
lean_ctor_set(v_reuseFailAlloc_2237_, 3, v___x_2232_);
lean_ctor_set(v_reuseFailAlloc_2237_, 4, v___x_2234_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
}
}
}
else
{
lean_object* v___x_2248_; lean_object* v___x_2250_; 
v___x_2248_ = lean_unsigned_to_nat(2u);
if (v_isShared_1974_ == 0)
{
lean_ctor_set(v___x_1973_, 4, v_r_2219_);
lean_ctor_set(v___x_1973_, 3, v_impl_2115_);
lean_ctor_set(v___x_1973_, 0, v___x_2248_);
v___x_2250_ = v___x_1973_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v___x_2248_);
lean_ctor_set(v_reuseFailAlloc_2251_, 1, v_k_1968_);
lean_ctor_set(v_reuseFailAlloc_2251_, 2, v_v_1969_);
lean_ctor_set(v_reuseFailAlloc_2251_, 3, v_impl_2115_);
lean_ctor_set(v_reuseFailAlloc_2251_, 4, v_r_2219_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2253_ = lean_unsigned_to_nat(1u);
v___x_2254_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2254_, 0, v___x_2253_);
lean_ctor_set(v___x_2254_, 1, v_k_1964_);
lean_ctor_set(v___x_2254_, 2, v_v_1965_);
lean_ctor_set(v___x_2254_, 3, v_t_1966_);
lean_ctor_set(v___x_2254_, 4, v_t_1966_);
return v___x_2254_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(lean_object* v_k_2255_, lean_object* v_t_2256_){
_start:
{
if (lean_obj_tag(v_t_2256_) == 0)
{
lean_object* v_k_2257_; lean_object* v_l_2258_; lean_object* v_r_2259_; uint8_t v___x_2260_; 
v_k_2257_ = lean_ctor_get(v_t_2256_, 1);
v_l_2258_ = lean_ctor_get(v_t_2256_, 3);
v_r_2259_ = lean_ctor_get(v_t_2256_, 4);
v___x_2260_ = lean_nat_dec_lt(v_k_2255_, v_k_2257_);
if (v___x_2260_ == 0)
{
uint8_t v___x_2261_; 
v___x_2261_ = lean_nat_dec_eq(v_k_2255_, v_k_2257_);
if (v___x_2261_ == 0)
{
v_t_2256_ = v_r_2259_;
goto _start;
}
else
{
return v___x_2261_;
}
}
else
{
v_t_2256_ = v_l_2258_;
goto _start;
}
}
else
{
uint8_t v___x_2264_; 
v___x_2264_ = 0;
return v___x_2264_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg___boxed(lean_object* v_k_2265_, lean_object* v_t_2266_){
_start:
{
uint8_t v_res_2267_; lean_object* v_r_2268_; 
v_res_2267_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(v_k_2265_, v_t_2266_);
lean_dec(v_t_2266_);
lean_dec(v_k_2265_);
v_r_2268_ = lean_box(v_res_2267_);
return v_r_2268_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2(lean_object* v_y_2269_, lean_object* v_x_2270_, size_t v_x_2271_, size_t v_x_2272_){
_start:
{
if (lean_obj_tag(v_x_2270_) == 0)
{
lean_object* v_cs_2273_; size_t v_j_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; 
v_cs_2273_ = lean_ctor_get(v_x_2270_, 0);
v_j_2274_ = lean_usize_shift_right(v_x_2271_, v_x_2272_);
v___x_2275_ = lean_usize_to_nat(v_j_2274_);
v___x_2276_ = lean_array_get_size(v_cs_2273_);
v___x_2277_ = lean_nat_dec_lt(v___x_2275_, v___x_2276_);
if (v___x_2277_ == 0)
{
lean_dec(v___x_2275_);
lean_dec(v_y_2269_);
return v_x_2270_;
}
else
{
lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2295_; 
lean_inc_ref(v_cs_2273_);
v_isSharedCheck_2295_ = !lean_is_exclusive(v_x_2270_);
if (v_isSharedCheck_2295_ == 0)
{
lean_object* v_unused_2296_; 
v_unused_2296_ = lean_ctor_get(v_x_2270_, 0);
lean_dec(v_unused_2296_);
v___x_2279_ = v_x_2270_;
v_isShared_2280_ = v_isSharedCheck_2295_;
goto v_resetjp_2278_;
}
else
{
lean_dec(v_x_2270_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2295_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
size_t v___x_2281_; size_t v___x_2282_; size_t v___x_2283_; size_t v_i_2284_; size_t v___x_2285_; size_t v_shift_2286_; lean_object* v_v_2287_; lean_object* v___x_2288_; lean_object* v_xs_x27_2289_; lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2293_; 
v___x_2281_ = ((size_t)1ULL);
v___x_2282_ = lean_usize_shift_left(v___x_2281_, v_x_2272_);
v___x_2283_ = lean_usize_sub(v___x_2282_, v___x_2281_);
v_i_2284_ = lean_usize_land(v_x_2271_, v___x_2283_);
v___x_2285_ = ((size_t)5ULL);
v_shift_2286_ = lean_usize_sub(v_x_2272_, v___x_2285_);
v_v_2287_ = lean_array_fget(v_cs_2273_, v___x_2275_);
v___x_2288_ = lean_box(0);
v_xs_x27_2289_ = lean_array_fset(v_cs_2273_, v___x_2275_, v___x_2288_);
v___x_2290_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2(v_y_2269_, v_v_2287_, v_i_2284_, v_shift_2286_);
v___x_2291_ = lean_array_fset(v_xs_x27_2289_, v___x_2275_, v___x_2290_);
lean_dec(v___x_2275_);
if (v_isShared_2280_ == 0)
{
lean_ctor_set(v___x_2279_, 0, v___x_2291_);
v___x_2293_ = v___x_2279_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v___x_2291_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
else
{
lean_object* v_vs_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; uint8_t v___x_2300_; 
v_vs_2297_ = lean_ctor_get(v_x_2270_, 0);
v___x_2298_ = lean_usize_to_nat(v_x_2271_);
v___x_2299_ = lean_array_get_size(v_vs_2297_);
v___x_2300_ = lean_nat_dec_lt(v___x_2298_, v___x_2299_);
if (v___x_2300_ == 0)
{
lean_dec(v___x_2298_);
lean_dec(v_y_2269_);
return v_x_2270_;
}
else
{
lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2315_; 
lean_inc_ref(v_vs_2297_);
v_isSharedCheck_2315_ = !lean_is_exclusive(v_x_2270_);
if (v_isSharedCheck_2315_ == 0)
{
lean_object* v_unused_2316_; 
v_unused_2316_ = lean_ctor_get(v_x_2270_, 0);
lean_dec(v_unused_2316_);
v___x_2302_ = v_x_2270_;
v_isShared_2303_ = v_isSharedCheck_2315_;
goto v_resetjp_2301_;
}
else
{
lean_dec(v_x_2270_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2315_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v_v_2304_; lean_object* v___x_2305_; lean_object* v_xs_x27_2306_; lean_object* v___y_2308_; uint8_t v___x_2313_; 
v_v_2304_ = lean_array_fget(v_vs_2297_, v___x_2298_);
v___x_2305_ = lean_box(0);
v_xs_x27_2306_ = lean_array_fset(v_vs_2297_, v___x_2298_, v___x_2305_);
v___x_2313_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(v_y_2269_, v_v_2304_);
if (v___x_2313_ == 0)
{
lean_object* v___x_2314_; 
v___x_2314_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(v_y_2269_, v___x_2305_, v_v_2304_);
v___y_2308_ = v___x_2314_;
goto v___jp_2307_;
}
else
{
lean_dec(v_y_2269_);
v___y_2308_ = v_v_2304_;
goto v___jp_2307_;
}
v___jp_2307_:
{
lean_object* v___x_2309_; lean_object* v___x_2311_; 
v___x_2309_ = lean_array_fset(v_xs_x27_2306_, v___x_2298_, v___y_2308_);
lean_dec(v___x_2298_);
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 0, v___x_2309_);
v___x_2311_ = v___x_2302_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2309_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2___boxed(lean_object* v_y_2317_, lean_object* v_x_2318_, lean_object* v_x_2319_, lean_object* v_x_2320_){
_start:
{
size_t v_x_6038__boxed_2321_; size_t v_x_6039__boxed_2322_; lean_object* v_res_2323_; 
v_x_6038__boxed_2321_ = lean_unbox_usize(v_x_2319_);
lean_dec(v_x_2319_);
v_x_6039__boxed_2322_ = lean_unbox_usize(v_x_2320_);
lean_dec(v_x_2320_);
v_res_2323_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2(v_y_2317_, v_x_2318_, v_x_6038__boxed_2321_, v_x_6039__boxed_2322_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2(lean_object* v_y_2324_, lean_object* v_t_2325_, lean_object* v_i_2326_){
_start:
{
lean_object* v_root_2327_; lean_object* v_tail_2328_; lean_object* v_size_2329_; size_t v_shift_2330_; lean_object* v_tailOff_2331_; lean_object* v___x_2333_; uint8_t v_isShared_2334_; uint8_t v_isSharedCheck_2358_; 
v_root_2327_ = lean_ctor_get(v_t_2325_, 0);
v_tail_2328_ = lean_ctor_get(v_t_2325_, 1);
v_size_2329_ = lean_ctor_get(v_t_2325_, 2);
v_shift_2330_ = lean_ctor_get_usize(v_t_2325_, 4);
v_tailOff_2331_ = lean_ctor_get(v_t_2325_, 3);
v_isSharedCheck_2358_ = !lean_is_exclusive(v_t_2325_);
if (v_isSharedCheck_2358_ == 0)
{
v___x_2333_ = v_t_2325_;
v_isShared_2334_ = v_isSharedCheck_2358_;
goto v_resetjp_2332_;
}
else
{
lean_inc(v_tailOff_2331_);
lean_inc(v_size_2329_);
lean_inc(v_tail_2328_);
lean_inc(v_root_2327_);
lean_dec(v_t_2325_);
v___x_2333_ = lean_box(0);
v_isShared_2334_ = v_isSharedCheck_2358_;
goto v_resetjp_2332_;
}
v_resetjp_2332_:
{
uint8_t v___x_2335_; 
v___x_2335_ = lean_nat_dec_le(v_tailOff_2331_, v_i_2326_);
if (v___x_2335_ == 0)
{
size_t v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2339_; 
v___x_2336_ = lean_usize_of_nat(v_i_2326_);
v___x_2337_ = l_Lean_PersistentArray_modifyAux___at___00Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2_spec__2(v_y_2324_, v_root_2327_, v___x_2336_, v_shift_2330_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 0, v___x_2337_);
v___x_2339_ = v___x_2333_;
goto v_reusejp_2338_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v___x_2337_);
lean_ctor_set(v_reuseFailAlloc_2340_, 1, v_tail_2328_);
lean_ctor_set(v_reuseFailAlloc_2340_, 2, v_size_2329_);
lean_ctor_set(v_reuseFailAlloc_2340_, 3, v_tailOff_2331_);
lean_ctor_set_usize(v_reuseFailAlloc_2340_, 4, v_shift_2330_);
v___x_2339_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2338_;
}
v_reusejp_2338_:
{
return v___x_2339_;
}
}
else
{
lean_object* v___x_2341_; lean_object* v___x_2342_; uint8_t v___x_2343_; 
v___x_2341_ = lean_nat_sub(v_i_2326_, v_tailOff_2331_);
v___x_2342_ = lean_array_get_size(v_tail_2328_);
v___x_2343_ = lean_nat_dec_lt(v___x_2341_, v___x_2342_);
if (v___x_2343_ == 0)
{
lean_object* v___x_2345_; 
lean_dec(v___x_2341_);
lean_dec(v_y_2324_);
if (v_isShared_2334_ == 0)
{
v___x_2345_ = v___x_2333_;
goto v_reusejp_2344_;
}
else
{
lean_object* v_reuseFailAlloc_2346_; 
v_reuseFailAlloc_2346_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2346_, 0, v_root_2327_);
lean_ctor_set(v_reuseFailAlloc_2346_, 1, v_tail_2328_);
lean_ctor_set(v_reuseFailAlloc_2346_, 2, v_size_2329_);
lean_ctor_set(v_reuseFailAlloc_2346_, 3, v_tailOff_2331_);
lean_ctor_set_usize(v_reuseFailAlloc_2346_, 4, v_shift_2330_);
v___x_2345_ = v_reuseFailAlloc_2346_;
goto v_reusejp_2344_;
}
v_reusejp_2344_:
{
return v___x_2345_;
}
}
else
{
lean_object* v_v_2347_; lean_object* v___x_2348_; lean_object* v_xs_x27_2349_; lean_object* v___y_2351_; uint8_t v___x_2356_; 
v_v_2347_ = lean_array_fget(v_tail_2328_, v___x_2341_);
v___x_2348_ = lean_box(0);
v_xs_x27_2349_ = lean_array_fset(v_tail_2328_, v___x_2341_, v___x_2348_);
v___x_2356_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(v_y_2324_, v_v_2347_);
if (v___x_2356_ == 0)
{
lean_object* v___x_2357_; 
v___x_2357_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(v_y_2324_, v___x_2348_, v_v_2347_);
v___y_2351_ = v___x_2357_;
goto v___jp_2350_;
}
else
{
lean_dec(v_y_2324_);
v___y_2351_ = v_v_2347_;
goto v___jp_2350_;
}
v___jp_2350_:
{
lean_object* v___x_2352_; lean_object* v___x_2354_; 
v___x_2352_ = lean_array_fset(v_xs_x27_2349_, v___x_2341_, v___y_2351_);
lean_dec(v___x_2341_);
if (v_isShared_2334_ == 0)
{
lean_ctor_set(v___x_2333_, 1, v___x_2352_);
v___x_2354_ = v___x_2333_;
goto v_reusejp_2353_;
}
else
{
lean_object* v_reuseFailAlloc_2355_; 
v_reuseFailAlloc_2355_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_2355_, 0, v_root_2327_);
lean_ctor_set(v_reuseFailAlloc_2355_, 1, v___x_2352_);
lean_ctor_set(v_reuseFailAlloc_2355_, 2, v_size_2329_);
lean_ctor_set(v_reuseFailAlloc_2355_, 3, v_tailOff_2331_);
lean_ctor_set_usize(v_reuseFailAlloc_2355_, 4, v_shift_2330_);
v___x_2354_ = v_reuseFailAlloc_2355_;
goto v_reusejp_2353_;
}
v_reusejp_2353_:
{
return v___x_2354_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2___boxed(lean_object* v_y_2359_, lean_object* v_t_2360_, lean_object* v_i_2361_){
_start:
{
lean_object* v_res_2362_; 
v_res_2362_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2(v_y_2359_, v_t_2360_, v_i_2361_);
lean_dec(v_i_2361_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0(lean_object* v_a_2363_, lean_object* v_y_2364_, lean_object* v_x_2365_, lean_object* v_s_2366_){
_start:
{
lean_object* v_structs_2367_; lean_object* v_typeIdOf_2368_; lean_object* v_exprToStructId_2369_; lean_object* v_exprToStructIdEntries_2370_; lean_object* v_forbiddenNatModules_2371_; lean_object* v_natStructs_2372_; lean_object* v_natTypeIdOf_2373_; lean_object* v_exprToNatStructId_2374_; lean_object* v___x_2375_; uint8_t v___x_2376_; 
v_structs_2367_ = lean_ctor_get(v_s_2366_, 0);
v_typeIdOf_2368_ = lean_ctor_get(v_s_2366_, 1);
v_exprToStructId_2369_ = lean_ctor_get(v_s_2366_, 2);
v_exprToStructIdEntries_2370_ = lean_ctor_get(v_s_2366_, 3);
v_forbiddenNatModules_2371_ = lean_ctor_get(v_s_2366_, 4);
v_natStructs_2372_ = lean_ctor_get(v_s_2366_, 5);
v_natTypeIdOf_2373_ = lean_ctor_get(v_s_2366_, 6);
v_exprToNatStructId_2374_ = lean_ctor_get(v_s_2366_, 7);
v___x_2375_ = lean_array_get_size(v_structs_2367_);
v___x_2376_ = lean_nat_dec_lt(v_a_2363_, v___x_2375_);
if (v___x_2376_ == 0)
{
lean_dec(v_y_2364_);
return v_s_2366_;
}
else
{
lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2438_; 
lean_inc_ref(v_exprToNatStructId_2374_);
lean_inc_ref(v_natTypeIdOf_2373_);
lean_inc_ref(v_natStructs_2372_);
lean_inc_ref(v_forbiddenNatModules_2371_);
lean_inc_ref(v_exprToStructIdEntries_2370_);
lean_inc_ref(v_exprToStructId_2369_);
lean_inc_ref(v_typeIdOf_2368_);
lean_inc_ref(v_structs_2367_);
v_isSharedCheck_2438_ = !lean_is_exclusive(v_s_2366_);
if (v_isSharedCheck_2438_ == 0)
{
lean_object* v_unused_2439_; lean_object* v_unused_2440_; lean_object* v_unused_2441_; lean_object* v_unused_2442_; lean_object* v_unused_2443_; lean_object* v_unused_2444_; lean_object* v_unused_2445_; lean_object* v_unused_2446_; 
v_unused_2439_ = lean_ctor_get(v_s_2366_, 7);
lean_dec(v_unused_2439_);
v_unused_2440_ = lean_ctor_get(v_s_2366_, 6);
lean_dec(v_unused_2440_);
v_unused_2441_ = lean_ctor_get(v_s_2366_, 5);
lean_dec(v_unused_2441_);
v_unused_2442_ = lean_ctor_get(v_s_2366_, 4);
lean_dec(v_unused_2442_);
v_unused_2443_ = lean_ctor_get(v_s_2366_, 3);
lean_dec(v_unused_2443_);
v_unused_2444_ = lean_ctor_get(v_s_2366_, 2);
lean_dec(v_unused_2444_);
v_unused_2445_ = lean_ctor_get(v_s_2366_, 1);
lean_dec(v_unused_2445_);
v_unused_2446_ = lean_ctor_get(v_s_2366_, 0);
lean_dec(v_unused_2446_);
v___x_2378_ = v_s_2366_;
v_isShared_2379_ = v_isSharedCheck_2438_;
goto v_resetjp_2377_;
}
else
{
lean_dec(v_s_2366_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2438_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v_v_2380_; lean_object* v_id_2381_; lean_object* v_ringId_x3f_2382_; lean_object* v_type_2383_; lean_object* v_u_2384_; lean_object* v_intModuleInst_2385_; lean_object* v_leInst_x3f_2386_; lean_object* v_ltInst_x3f_2387_; lean_object* v_lawfulOrderLTInst_x3f_2388_; lean_object* v_isPreorderInst_x3f_2389_; lean_object* v_orderedAddInst_x3f_2390_; lean_object* v_isLinearInst_x3f_2391_; lean_object* v_noNatDivInst_x3f_2392_; lean_object* v_ringInst_x3f_2393_; lean_object* v_commRingInst_x3f_2394_; lean_object* v_orderedRingInst_x3f_2395_; lean_object* v_fieldInst_x3f_2396_; lean_object* v_charInst_x3f_2397_; lean_object* v_zero_2398_; lean_object* v_ofNatZero_2399_; lean_object* v_one_x3f_2400_; lean_object* v_leFn_x3f_2401_; lean_object* v_ltFn_x3f_2402_; lean_object* v_addFn_2403_; lean_object* v_zsmulFn_2404_; lean_object* v_nsmulFn_2405_; lean_object* v_zsmulFn_x3f_2406_; lean_object* v_nsmulFn_x3f_2407_; lean_object* v_homomulFn_x3f_2408_; lean_object* v_subFn_2409_; lean_object* v_negFn_2410_; lean_object* v_vars_2411_; lean_object* v_varMap_2412_; lean_object* v_lowers_2413_; lean_object* v_uppers_2414_; lean_object* v_diseqs_2415_; lean_object* v_assignment_2416_; uint8_t v_caseSplits_2417_; lean_object* v_conflict_x3f_2418_; lean_object* v_diseqSplits_2419_; lean_object* v_elimEqs_2420_; lean_object* v_elimStack_2421_; lean_object* v_occurs_2422_; lean_object* v_ignored_2423_; lean_object* v___x_2425_; uint8_t v_isShared_2426_; uint8_t v_isSharedCheck_2437_; 
v_v_2380_ = lean_array_fget(v_structs_2367_, v_a_2363_);
v_id_2381_ = lean_ctor_get(v_v_2380_, 0);
v_ringId_x3f_2382_ = lean_ctor_get(v_v_2380_, 1);
v_type_2383_ = lean_ctor_get(v_v_2380_, 2);
v_u_2384_ = lean_ctor_get(v_v_2380_, 3);
v_intModuleInst_2385_ = lean_ctor_get(v_v_2380_, 4);
v_leInst_x3f_2386_ = lean_ctor_get(v_v_2380_, 5);
v_ltInst_x3f_2387_ = lean_ctor_get(v_v_2380_, 6);
v_lawfulOrderLTInst_x3f_2388_ = lean_ctor_get(v_v_2380_, 7);
v_isPreorderInst_x3f_2389_ = lean_ctor_get(v_v_2380_, 8);
v_orderedAddInst_x3f_2390_ = lean_ctor_get(v_v_2380_, 9);
v_isLinearInst_x3f_2391_ = lean_ctor_get(v_v_2380_, 10);
v_noNatDivInst_x3f_2392_ = lean_ctor_get(v_v_2380_, 11);
v_ringInst_x3f_2393_ = lean_ctor_get(v_v_2380_, 12);
v_commRingInst_x3f_2394_ = lean_ctor_get(v_v_2380_, 13);
v_orderedRingInst_x3f_2395_ = lean_ctor_get(v_v_2380_, 14);
v_fieldInst_x3f_2396_ = lean_ctor_get(v_v_2380_, 15);
v_charInst_x3f_2397_ = lean_ctor_get(v_v_2380_, 16);
v_zero_2398_ = lean_ctor_get(v_v_2380_, 17);
v_ofNatZero_2399_ = lean_ctor_get(v_v_2380_, 18);
v_one_x3f_2400_ = lean_ctor_get(v_v_2380_, 19);
v_leFn_x3f_2401_ = lean_ctor_get(v_v_2380_, 20);
v_ltFn_x3f_2402_ = lean_ctor_get(v_v_2380_, 21);
v_addFn_2403_ = lean_ctor_get(v_v_2380_, 22);
v_zsmulFn_2404_ = lean_ctor_get(v_v_2380_, 23);
v_nsmulFn_2405_ = lean_ctor_get(v_v_2380_, 24);
v_zsmulFn_x3f_2406_ = lean_ctor_get(v_v_2380_, 25);
v_nsmulFn_x3f_2407_ = lean_ctor_get(v_v_2380_, 26);
v_homomulFn_x3f_2408_ = lean_ctor_get(v_v_2380_, 27);
v_subFn_2409_ = lean_ctor_get(v_v_2380_, 28);
v_negFn_2410_ = lean_ctor_get(v_v_2380_, 29);
v_vars_2411_ = lean_ctor_get(v_v_2380_, 30);
v_varMap_2412_ = lean_ctor_get(v_v_2380_, 31);
v_lowers_2413_ = lean_ctor_get(v_v_2380_, 32);
v_uppers_2414_ = lean_ctor_get(v_v_2380_, 33);
v_diseqs_2415_ = lean_ctor_get(v_v_2380_, 34);
v_assignment_2416_ = lean_ctor_get(v_v_2380_, 35);
v_caseSplits_2417_ = lean_ctor_get_uint8(v_v_2380_, sizeof(void*)*42);
v_conflict_x3f_2418_ = lean_ctor_get(v_v_2380_, 36);
v_diseqSplits_2419_ = lean_ctor_get(v_v_2380_, 37);
v_elimEqs_2420_ = lean_ctor_get(v_v_2380_, 38);
v_elimStack_2421_ = lean_ctor_get(v_v_2380_, 39);
v_occurs_2422_ = lean_ctor_get(v_v_2380_, 40);
v_ignored_2423_ = lean_ctor_get(v_v_2380_, 41);
v_isSharedCheck_2437_ = !lean_is_exclusive(v_v_2380_);
if (v_isSharedCheck_2437_ == 0)
{
v___x_2425_ = v_v_2380_;
v_isShared_2426_ = v_isSharedCheck_2437_;
goto v_resetjp_2424_;
}
else
{
lean_inc(v_ignored_2423_);
lean_inc(v_occurs_2422_);
lean_inc(v_elimStack_2421_);
lean_inc(v_elimEqs_2420_);
lean_inc(v_diseqSplits_2419_);
lean_inc(v_conflict_x3f_2418_);
lean_inc(v_assignment_2416_);
lean_inc(v_diseqs_2415_);
lean_inc(v_uppers_2414_);
lean_inc(v_lowers_2413_);
lean_inc(v_varMap_2412_);
lean_inc(v_vars_2411_);
lean_inc(v_negFn_2410_);
lean_inc(v_subFn_2409_);
lean_inc(v_homomulFn_x3f_2408_);
lean_inc(v_nsmulFn_x3f_2407_);
lean_inc(v_zsmulFn_x3f_2406_);
lean_inc(v_nsmulFn_2405_);
lean_inc(v_zsmulFn_2404_);
lean_inc(v_addFn_2403_);
lean_inc(v_ltFn_x3f_2402_);
lean_inc(v_leFn_x3f_2401_);
lean_inc(v_one_x3f_2400_);
lean_inc(v_ofNatZero_2399_);
lean_inc(v_zero_2398_);
lean_inc(v_charInst_x3f_2397_);
lean_inc(v_fieldInst_x3f_2396_);
lean_inc(v_orderedRingInst_x3f_2395_);
lean_inc(v_commRingInst_x3f_2394_);
lean_inc(v_ringInst_x3f_2393_);
lean_inc(v_noNatDivInst_x3f_2392_);
lean_inc(v_isLinearInst_x3f_2391_);
lean_inc(v_orderedAddInst_x3f_2390_);
lean_inc(v_isPreorderInst_x3f_2389_);
lean_inc(v_lawfulOrderLTInst_x3f_2388_);
lean_inc(v_ltInst_x3f_2387_);
lean_inc(v_leInst_x3f_2386_);
lean_inc(v_intModuleInst_2385_);
lean_inc(v_u_2384_);
lean_inc(v_type_2383_);
lean_inc(v_ringId_x3f_2382_);
lean_inc(v_id_2381_);
lean_dec(v_v_2380_);
v___x_2425_ = lean_box(0);
v_isShared_2426_ = v_isSharedCheck_2437_;
goto v_resetjp_2424_;
}
v_resetjp_2424_:
{
lean_object* v___x_2427_; lean_object* v_xs_x27_2428_; lean_object* v___x_2429_; lean_object* v___x_2431_; 
v___x_2427_ = lean_box(0);
v_xs_x27_2428_ = lean_array_fset(v_structs_2367_, v_a_2363_, v___x_2427_);
v___x_2429_ = l_Lean_PersistentArray_modify___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__2(v_y_2364_, v_occurs_2422_, v_x_2365_);
if (v_isShared_2426_ == 0)
{
lean_ctor_set(v___x_2425_, 40, v___x_2429_);
v___x_2431_ = v___x_2425_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2436_; 
v_reuseFailAlloc_2436_ = lean_alloc_ctor(0, 42, 1);
lean_ctor_set(v_reuseFailAlloc_2436_, 0, v_id_2381_);
lean_ctor_set(v_reuseFailAlloc_2436_, 1, v_ringId_x3f_2382_);
lean_ctor_set(v_reuseFailAlloc_2436_, 2, v_type_2383_);
lean_ctor_set(v_reuseFailAlloc_2436_, 3, v_u_2384_);
lean_ctor_set(v_reuseFailAlloc_2436_, 4, v_intModuleInst_2385_);
lean_ctor_set(v_reuseFailAlloc_2436_, 5, v_leInst_x3f_2386_);
lean_ctor_set(v_reuseFailAlloc_2436_, 6, v_ltInst_x3f_2387_);
lean_ctor_set(v_reuseFailAlloc_2436_, 7, v_lawfulOrderLTInst_x3f_2388_);
lean_ctor_set(v_reuseFailAlloc_2436_, 8, v_isPreorderInst_x3f_2389_);
lean_ctor_set(v_reuseFailAlloc_2436_, 9, v_orderedAddInst_x3f_2390_);
lean_ctor_set(v_reuseFailAlloc_2436_, 10, v_isLinearInst_x3f_2391_);
lean_ctor_set(v_reuseFailAlloc_2436_, 11, v_noNatDivInst_x3f_2392_);
lean_ctor_set(v_reuseFailAlloc_2436_, 12, v_ringInst_x3f_2393_);
lean_ctor_set(v_reuseFailAlloc_2436_, 13, v_commRingInst_x3f_2394_);
lean_ctor_set(v_reuseFailAlloc_2436_, 14, v_orderedRingInst_x3f_2395_);
lean_ctor_set(v_reuseFailAlloc_2436_, 15, v_fieldInst_x3f_2396_);
lean_ctor_set(v_reuseFailAlloc_2436_, 16, v_charInst_x3f_2397_);
lean_ctor_set(v_reuseFailAlloc_2436_, 17, v_zero_2398_);
lean_ctor_set(v_reuseFailAlloc_2436_, 18, v_ofNatZero_2399_);
lean_ctor_set(v_reuseFailAlloc_2436_, 19, v_one_x3f_2400_);
lean_ctor_set(v_reuseFailAlloc_2436_, 20, v_leFn_x3f_2401_);
lean_ctor_set(v_reuseFailAlloc_2436_, 21, v_ltFn_x3f_2402_);
lean_ctor_set(v_reuseFailAlloc_2436_, 22, v_addFn_2403_);
lean_ctor_set(v_reuseFailAlloc_2436_, 23, v_zsmulFn_2404_);
lean_ctor_set(v_reuseFailAlloc_2436_, 24, v_nsmulFn_2405_);
lean_ctor_set(v_reuseFailAlloc_2436_, 25, v_zsmulFn_x3f_2406_);
lean_ctor_set(v_reuseFailAlloc_2436_, 26, v_nsmulFn_x3f_2407_);
lean_ctor_set(v_reuseFailAlloc_2436_, 27, v_homomulFn_x3f_2408_);
lean_ctor_set(v_reuseFailAlloc_2436_, 28, v_subFn_2409_);
lean_ctor_set(v_reuseFailAlloc_2436_, 29, v_negFn_2410_);
lean_ctor_set(v_reuseFailAlloc_2436_, 30, v_vars_2411_);
lean_ctor_set(v_reuseFailAlloc_2436_, 31, v_varMap_2412_);
lean_ctor_set(v_reuseFailAlloc_2436_, 32, v_lowers_2413_);
lean_ctor_set(v_reuseFailAlloc_2436_, 33, v_uppers_2414_);
lean_ctor_set(v_reuseFailAlloc_2436_, 34, v_diseqs_2415_);
lean_ctor_set(v_reuseFailAlloc_2436_, 35, v_assignment_2416_);
lean_ctor_set(v_reuseFailAlloc_2436_, 36, v_conflict_x3f_2418_);
lean_ctor_set(v_reuseFailAlloc_2436_, 37, v_diseqSplits_2419_);
lean_ctor_set(v_reuseFailAlloc_2436_, 38, v_elimEqs_2420_);
lean_ctor_set(v_reuseFailAlloc_2436_, 39, v_elimStack_2421_);
lean_ctor_set(v_reuseFailAlloc_2436_, 40, v___x_2429_);
lean_ctor_set(v_reuseFailAlloc_2436_, 41, v_ignored_2423_);
lean_ctor_set_uint8(v_reuseFailAlloc_2436_, sizeof(void*)*42, v_caseSplits_2417_);
v___x_2431_ = v_reuseFailAlloc_2436_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
lean_object* v___x_2432_; lean_object* v___x_2434_; 
v___x_2432_ = lean_array_fset(v_xs_x27_2428_, v_a_2363_, v___x_2431_);
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 0, v___x_2432_);
v___x_2434_ = v___x_2378_;
goto v_reusejp_2433_;
}
else
{
lean_object* v_reuseFailAlloc_2435_; 
v_reuseFailAlloc_2435_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_2435_, 0, v___x_2432_);
lean_ctor_set(v_reuseFailAlloc_2435_, 1, v_typeIdOf_2368_);
lean_ctor_set(v_reuseFailAlloc_2435_, 2, v_exprToStructId_2369_);
lean_ctor_set(v_reuseFailAlloc_2435_, 3, v_exprToStructIdEntries_2370_);
lean_ctor_set(v_reuseFailAlloc_2435_, 4, v_forbiddenNatModules_2371_);
lean_ctor_set(v_reuseFailAlloc_2435_, 5, v_natStructs_2372_);
lean_ctor_set(v_reuseFailAlloc_2435_, 6, v_natTypeIdOf_2373_);
lean_ctor_set(v_reuseFailAlloc_2435_, 7, v_exprToNatStructId_2374_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0___boxed(lean_object* v_a_2447_, lean_object* v_y_2448_, lean_object* v_x_2449_, lean_object* v_s_2450_){
_start:
{
lean_object* v_res_2451_; 
v_res_2451_ = l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0(v_a_2447_, v_y_2448_, v_x_2449_, v_s_2450_);
lean_dec(v_x_2449_);
lean_dec(v_a_2447_);
return v_res_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc(lean_object* v_x_2452_, lean_object* v_y_2453_, lean_object* v_a_2454_, lean_object* v_a_2455_, lean_object* v_a_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_, lean_object* v_a_2464_){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = l_Lean_Meta_Grind_Arith_Linear_getOccursOf(v_x_2452_, v_a_2454_, v_a_2455_, v_a_2456_, v_a_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_, v_a_2463_, v_a_2464_);
if (lean_obj_tag(v___x_2466_) == 0)
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2479_; 
v_a_2467_ = lean_ctor_get(v___x_2466_, 0);
v_isSharedCheck_2479_ = !lean_is_exclusive(v___x_2466_);
if (v_isSharedCheck_2479_ == 0)
{
v___x_2469_ = v___x_2466_;
v_isShared_2470_ = v_isSharedCheck_2479_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2466_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2479_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
uint8_t v___x_2471_; 
v___x_2471_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(v_y_2453_, v_a_2467_);
lean_dec(v_a_2467_);
if (v___x_2471_ == 0)
{
lean_object* v___f_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; 
lean_del_object(v___x_2469_);
lean_inc(v_a_2454_);
v___f_2472_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Arith_Linear_addOcc___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2472_, 0, v_a_2454_);
lean_closure_set(v___f_2472_, 1, v_y_2453_);
lean_closure_set(v___f_2472_, 2, v_x_2452_);
v___x_2473_ = l_Lean_Meta_Grind_Arith_Linear_linearExt;
v___x_2474_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_SolverExtension_modifyStateImpl___redArg(v___x_2473_, v___f_2472_, v_a_2455_, v_a_2464_);
return v___x_2474_;
}
else
{
lean_object* v___x_2475_; lean_object* v___x_2477_; 
lean_dec(v_y_2453_);
lean_dec(v_x_2452_);
v___x_2475_ = lean_box(0);
if (v_isShared_2470_ == 0)
{
lean_ctor_set(v___x_2469_, 0, v___x_2475_);
v___x_2477_ = v___x_2469_;
goto v_reusejp_2476_;
}
else
{
lean_object* v_reuseFailAlloc_2478_; 
v_reuseFailAlloc_2478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2478_, 0, v___x_2475_);
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
else
{
lean_object* v_a_2480_; lean_object* v___x_2482_; uint8_t v_isShared_2483_; uint8_t v_isSharedCheck_2487_; 
lean_dec(v_y_2453_);
lean_dec(v_x_2452_);
v_a_2480_ = lean_ctor_get(v___x_2466_, 0);
v_isSharedCheck_2487_ = !lean_is_exclusive(v___x_2466_);
if (v_isSharedCheck_2487_ == 0)
{
v___x_2482_ = v___x_2466_;
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
else
{
lean_inc(v_a_2480_);
lean_dec(v___x_2466_);
v___x_2482_ = lean_box(0);
v_isShared_2483_ = v_isSharedCheck_2487_;
goto v_resetjp_2481_;
}
v_resetjp_2481_:
{
lean_object* v___x_2485_; 
if (v_isShared_2483_ == 0)
{
v___x_2485_ = v___x_2482_;
goto v_reusejp_2484_;
}
else
{
lean_object* v_reuseFailAlloc_2486_; 
v_reuseFailAlloc_2486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2486_, 0, v_a_2480_);
v___x_2485_ = v_reuseFailAlloc_2486_;
goto v_reusejp_2484_;
}
v_reusejp_2484_:
{
return v___x_2485_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_Linear_addOcc___boxed(lean_object* v_x_2488_, lean_object* v_y_2489_, lean_object* v_a_2490_, lean_object* v_a_2491_, lean_object* v_a_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_, lean_object* v_a_2498_, lean_object* v_a_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = l_Lean_Meta_Grind_Arith_Linear_addOcc(v_x_2488_, v_y_2489_, v_a_2490_, v_a_2491_, v_a_2492_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_, v_a_2498_, v_a_2499_, v_a_2500_);
lean_dec(v_a_2500_);
lean_dec_ref(v_a_2499_);
lean_dec(v_a_2498_);
lean_dec_ref(v_a_2497_);
lean_dec(v_a_2496_);
lean_dec_ref(v_a_2495_);
lean_dec(v_a_2494_);
lean_dec_ref(v_a_2493_);
lean_dec(v_a_2492_);
lean_dec(v_a_2491_);
lean_dec(v_a_2490_);
return v_res_2502_;
}
}
LEAN_EXPORT uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0(lean_object* v_00_u03b2_2503_, lean_object* v_k_2504_, lean_object* v_t_2505_){
_start:
{
uint8_t v___x_2506_; 
v___x_2506_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___redArg(v_k_2504_, v_t_2505_);
return v___x_2506_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0___boxed(lean_object* v_00_u03b2_2507_, lean_object* v_k_2508_, lean_object* v_t_2509_){
_start:
{
uint8_t v_res_2510_; lean_object* v_r_2511_; 
v_res_2510_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__0(v_00_u03b2_2507_, v_k_2508_, v_t_2509_);
lean_dec(v_t_2509_);
lean_dec(v_k_2508_);
v_r_2511_ = lean_box(v_res_2510_);
return v_r_2511_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1(lean_object* v_00_u03b2_2512_, lean_object* v_k_2513_, lean_object* v_v_2514_, lean_object* v_t_2515_, lean_object* v_hl_2516_){
_start:
{
lean_object* v___x_2517_; 
v___x_2517_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Meta_Grind_Arith_Linear_addOcc_spec__1___redArg(v_k_2513_, v_v_2514_, v_t_2515_);
return v___x_2517_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go(lean_object* v_y_2518_, lean_object* v_p_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_, lean_object* v_a_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_, lean_object* v_a_2527_, lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_){
_start:
{
if (lean_obj_tag(v_p_2519_) == 1)
{
lean_object* v_v_2532_; lean_object* v_p_2533_; lean_object* v___x_2534_; 
v_v_2532_ = lean_ctor_get(v_p_2519_, 1);
lean_inc(v_v_2532_);
v_p_2533_ = lean_ctor_get(v_p_2519_, 2);
lean_inc(v_p_2533_);
lean_dec_ref(v_p_2519_);
lean_inc(v_y_2518_);
v___x_2534_ = l_Lean_Meta_Grind_Arith_Linear_addOcc(v_v_2532_, v_y_2518_, v_a_2520_, v_a_2521_, v_a_2522_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_, v_a_2527_, v_a_2528_, v_a_2529_, v_a_2530_);
if (lean_obj_tag(v___x_2534_) == 0)
{
lean_dec_ref(v___x_2534_);
v_p_2519_ = v_p_2533_;
goto _start;
}
else
{
lean_dec(v_p_2533_);
lean_dec(v_y_2518_);
return v___x_2534_;
}
}
else
{
lean_object* v___x_2536_; lean_object* v___x_2537_; 
lean_dec(v_p_2519_);
lean_dec(v_y_2518_);
v___x_2536_ = lean_box(0);
v___x_2537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2537_, 0, v___x_2536_);
return v___x_2537_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go___boxed(lean_object* v_y_2538_, lean_object* v_p_2539_, lean_object* v_a_2540_, lean_object* v_a_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go(v_y_2538_, v_p_2539_, v_a_2540_, v_a_2541_, v_a_2542_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_);
lean_dec(v_a_2550_);
lean_dec_ref(v_a_2549_);
lean_dec(v_a_2548_);
lean_dec_ref(v_a_2547_);
lean_dec(v_a_2546_);
lean_dec_ref(v_a_2545_);
lean_dec(v_a_2544_);
lean_dec_ref(v_a_2543_);
lean_dec(v_a_2542_);
lean_dec(v_a_2541_);
lean_dec(v_a_2540_);
return v_res_2552_;
}
}
static lean_object* _init_l_Lean_Grind_Linarith_Poly_updateOccs___closed__0(void){
_start:
{
lean_object* v___x_2553_; 
v___x_2553_ = lean_mk_string_unchecked("`grind linarith` internal error, unexpected constant polynomial", 63, 63);
return v___x_2553_;
}
}
static lean_object* _init_l_Lean_Grind_Linarith_Poly_updateOccs___closed__1(void){
_start:
{
lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2554_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_updateOccs___closed__0, &l_Lean_Grind_Linarith_Poly_updateOccs___closed__0_once, _init_l_Lean_Grind_Linarith_Poly_updateOccs___closed__0);
v___x_2555_ = l_Lean_stringToMessageData(v___x_2554_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_updateOccs(lean_object* v_p_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_){
_start:
{
if (lean_obj_tag(v_p_2556_) == 1)
{
lean_object* v_v_2569_; lean_object* v_p_2570_; lean_object* v___x_2571_; 
v_v_2569_ = lean_ctor_get(v_p_2556_, 1);
lean_inc(v_v_2569_);
v_p_2570_ = lean_ctor_get(v_p_2556_, 2);
lean_inc(v_p_2570_);
lean_dec_ref(v_p_2556_);
v___x_2571_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_updateOccs_go(v_v_2569_, v_p_2570_, v_a_2557_, v_a_2558_, v_a_2559_, v_a_2560_, v_a_2561_, v_a_2562_, v_a_2563_, v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_);
return v___x_2571_;
}
else
{
lean_object* v___x_2572_; lean_object* v___x_2573_; 
lean_dec(v_p_2556_);
v___x_2572_ = lean_obj_once(&l_Lean_Grind_Linarith_Poly_updateOccs___closed__1, &l_Lean_Grind_Linarith_Poly_updateOccs___closed__1_once, _init_l_Lean_Grind_Linarith_Poly_updateOccs___closed__1);
v___x_2573_ = l_Lean_throwError___at___00Lean_Meta_Grind_Arith_Linear_getNoNatDivInst_spec__0___redArg(v___x_2572_, v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_);
return v___x_2573_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_updateOccs___boxed(lean_object* v_p_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_, lean_object* v_a_2586_){
_start:
{
lean_object* v_res_2587_; 
v_res_2587_ = l_Lean_Grind_Linarith_Poly_updateOccs(v_p_2574_, v_a_2575_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_, v_a_2580_, v_a_2581_, v_a_2582_, v_a_2583_, v_a_2584_, v_a_2585_);
lean_dec(v_a_2585_);
lean_dec_ref(v_a_2584_);
lean_dec(v_a_2583_);
lean_dec_ref(v_a_2582_);
lean_dec(v_a_2581_);
lean_dec_ref(v_a_2580_);
lean_dec(v_a_2579_);
lean_dec_ref(v_a_2578_);
lean_dec(v_a_2577_);
lean_dec(v_a_2576_);
lean_dec(v_a_2575_);
return v_res_2587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_findVarToSubst(lean_object* v_p_2588_, lean_object* v_a_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_){
_start:
{
if (lean_obj_tag(v_p_2588_) == 0)
{
lean_object* v___x_2601_; lean_object* v___x_2602_; 
v___x_2601_ = lean_box(0);
v___x_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2601_);
return v___x_2602_;
}
else
{
lean_object* v_k_2603_; lean_object* v_v_2604_; lean_object* v_p_2605_; lean_object* v___x_2606_; 
v_k_2603_ = lean_ctor_get(v_p_2588_, 0);
v_v_2604_ = lean_ctor_get(v_p_2588_, 1);
v_p_2605_ = lean_ctor_get(v_p_2588_, 2);
v___x_2606_ = l_Lean_Meta_Grind_Arith_Linear_LinearM_getStruct(v_a_2589_, v_a_2590_, v_a_2591_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_, v_a_2599_);
if (lean_obj_tag(v___x_2606_) == 0)
{
lean_object* v_a_2607_; lean_object* v___x_2609_; uint8_t v_isShared_2610_; uint8_t v_isSharedCheck_2633_; 
v_a_2607_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2633_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2633_ == 0)
{
v___x_2609_ = v___x_2606_;
v_isShared_2610_ = v_isSharedCheck_2633_;
goto v_resetjp_2608_;
}
else
{
lean_inc(v_a_2607_);
lean_dec(v___x_2606_);
v___x_2609_ = lean_box(0);
v_isShared_2610_ = v_isSharedCheck_2633_;
goto v_resetjp_2608_;
}
v_resetjp_2608_:
{
lean_object* v___y_2612_; lean_object* v_elimEqs_2627_; lean_object* v_size_2628_; lean_object* v___x_2629_; uint8_t v___x_2630_; 
v_elimEqs_2627_ = lean_ctor_get(v_a_2607_, 38);
lean_inc_ref(v_elimEqs_2627_);
lean_dec(v_a_2607_);
v_size_2628_ = lean_ctor_get(v_elimEqs_2627_, 2);
v___x_2629_ = lean_box(0);
v___x_2630_ = lean_nat_dec_lt(v_v_2604_, v_size_2628_);
if (v___x_2630_ == 0)
{
lean_object* v___x_2631_; 
lean_dec_ref(v_elimEqs_2627_);
v___x_2631_ = l_outOfBounds___redArg(v___x_2629_);
v___y_2612_ = v___x_2631_;
goto v___jp_2611_;
}
else
{
lean_object* v___x_2632_; 
v___x_2632_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2629_, v_elimEqs_2627_, v_v_2604_);
lean_dec_ref(v_elimEqs_2627_);
v___y_2612_ = v___x_2632_;
goto v___jp_2611_;
}
v___jp_2611_:
{
if (lean_obj_tag(v___y_2612_) == 1)
{
lean_object* v_val_2613_; lean_object* v___x_2615_; uint8_t v_isShared_2616_; uint8_t v_isSharedCheck_2625_; 
v_val_2613_ = lean_ctor_get(v___y_2612_, 0);
v_isSharedCheck_2625_ = !lean_is_exclusive(v___y_2612_);
if (v_isSharedCheck_2625_ == 0)
{
v___x_2615_ = v___y_2612_;
v_isShared_2616_ = v_isSharedCheck_2625_;
goto v_resetjp_2614_;
}
else
{
lean_inc(v_val_2613_);
lean_dec(v___y_2612_);
v___x_2615_ = lean_box(0);
v_isShared_2616_ = v_isSharedCheck_2625_;
goto v_resetjp_2614_;
}
v_resetjp_2614_:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2620_; 
lean_inc(v_v_2604_);
v___x_2617_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2617_, 0, v_v_2604_);
lean_ctor_set(v___x_2617_, 1, v_val_2613_);
lean_inc(v_k_2603_);
v___x_2618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2618_, 0, v_k_2603_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
if (v_isShared_2616_ == 0)
{
lean_ctor_set(v___x_2615_, 0, v___x_2618_);
v___x_2620_ = v___x_2615_;
goto v_reusejp_2619_;
}
else
{
lean_object* v_reuseFailAlloc_2624_; 
v_reuseFailAlloc_2624_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2624_, 0, v___x_2618_);
v___x_2620_ = v_reuseFailAlloc_2624_;
goto v_reusejp_2619_;
}
v_reusejp_2619_:
{
lean_object* v___x_2622_; 
if (v_isShared_2610_ == 0)
{
lean_ctor_set(v___x_2609_, 0, v___x_2620_);
v___x_2622_ = v___x_2609_;
goto v_reusejp_2621_;
}
else
{
lean_object* v_reuseFailAlloc_2623_; 
v_reuseFailAlloc_2623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2623_, 0, v___x_2620_);
v___x_2622_ = v_reuseFailAlloc_2623_;
goto v_reusejp_2621_;
}
v_reusejp_2621_:
{
return v___x_2622_;
}
}
}
}
else
{
lean_dec(v___y_2612_);
lean_del_object(v___x_2609_);
v_p_2588_ = v_p_2605_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2641_; 
v_a_2634_ = lean_ctor_get(v___x_2606_, 0);
v_isSharedCheck_2641_ = !lean_is_exclusive(v___x_2606_);
if (v_isSharedCheck_2641_ == 0)
{
v___x_2636_ = v___x_2606_;
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_a_2634_);
lean_dec(v___x_2606_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2641_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
lean_object* v___x_2639_; 
if (v_isShared_2637_ == 0)
{
v___x_2639_ = v___x_2636_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2640_; 
v_reuseFailAlloc_2640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2640_, 0, v_a_2634_);
v___x_2639_ = v_reuseFailAlloc_2640_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
return v___x_2639_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_findVarToSubst___boxed(lean_object* v_p_2642_, lean_object* v_a_2643_, lean_object* v_a_2644_, lean_object* v_a_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_){
_start:
{
lean_object* v_res_2655_; 
v_res_2655_ = l_Lean_Grind_Linarith_Poly_findVarToSubst(v_p_2642_, v_a_2643_, v_a_2644_, v_a_2645_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_, v_a_2650_, v_a_2651_, v_a_2652_, v_a_2653_);
lean_dec(v_a_2653_);
lean_dec_ref(v_a_2652_);
lean_dec(v_a_2651_);
lean_dec_ref(v_a_2650_);
lean_dec(v_a_2649_);
lean_dec_ref(v_a_2648_);
lean_dec(v_a_2647_);
lean_dec_ref(v_a_2646_);
lean_dec(v_a_2645_);
lean_dec(v_a_2644_);
lean_dec(v_a_2643_);
lean_dec(v_p_2642_);
return v_res_2655_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffsAux(lean_object* v_x_2656_, lean_object* v_x_2657_){
_start:
{
if (lean_obj_tag(v_x_2656_) == 0)
{
return v_x_2657_;
}
else
{
lean_object* v_k_2658_; lean_object* v_p_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v_k_2658_ = lean_ctor_get(v_x_2656_, 0);
v_p_2659_ = lean_ctor_get(v_x_2656_, 2);
v___x_2660_ = lean_nat_to_int(v_x_2657_);
v___x_2661_ = l_Int_gcd(v_k_2658_, v___x_2660_);
lean_dec(v___x_2660_);
v_x_2656_ = v_p_2659_;
v_x_2657_ = v___x_2661_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffsAux___boxed(lean_object* v_x_2663_, lean_object* v_x_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Lean_Grind_Linarith_Poly_gcdCoeffsAux(v_x_2663_, v_x_2664_);
lean_dec(v_x_2663_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffs(lean_object* v_p_2666_){
_start:
{
if (lean_obj_tag(v_p_2666_) == 0)
{
lean_object* v___x_2667_; 
v___x_2667_ = lean_unsigned_to_nat(1u);
return v___x_2667_;
}
else
{
lean_object* v_k_2668_; lean_object* v_p_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v_k_2668_ = lean_ctor_get(v_p_2666_, 0);
v_p_2669_ = lean_ctor_get(v_p_2666_, 2);
v___x_2670_ = lean_nat_abs(v_k_2668_);
v___x_2671_ = l_Lean_Grind_Linarith_Poly_gcdCoeffsAux(v_p_2669_, v___x_2670_);
return v___x_2671_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_gcdCoeffs___boxed(lean_object* v_p_2672_){
_start:
{
lean_object* v_res_2673_; 
v_res_2673_ = l_Lean_Grind_Linarith_Poly_gcdCoeffs(v_p_2672_);
lean_dec(v_p_2672_);
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_div(lean_object* v_p_2674_, lean_object* v_k_2675_){
_start:
{
if (lean_obj_tag(v_p_2674_) == 0)
{
return v_p_2674_;
}
else
{
lean_object* v_k_2676_; lean_object* v_v_2677_; lean_object* v_p_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2687_; 
v_k_2676_ = lean_ctor_get(v_p_2674_, 0);
v_v_2677_ = lean_ctor_get(v_p_2674_, 1);
v_p_2678_ = lean_ctor_get(v_p_2674_, 2);
v_isSharedCheck_2687_ = !lean_is_exclusive(v_p_2674_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2680_ = v_p_2674_;
v_isShared_2681_ = v_isSharedCheck_2687_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_p_2678_);
lean_inc(v_v_2677_);
lean_inc(v_k_2676_);
lean_dec(v_p_2674_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2687_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2685_; 
v___x_2682_ = lean_int_ediv(v_k_2676_, v_k_2675_);
lean_dec(v_k_2676_);
v___x_2683_ = l_Lean_Grind_Linarith_Poly_div(v_p_2678_, v_k_2675_);
if (v_isShared_2681_ == 0)
{
lean_ctor_set(v___x_2680_, 2, v___x_2683_);
lean_ctor_set(v___x_2680_, 0, v___x_2682_);
v___x_2685_ = v___x_2680_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v___x_2682_);
lean_ctor_set(v_reuseFailAlloc_2686_, 1, v_v_2677_);
lean_ctor_set(v_reuseFailAlloc_2686_, 2, v___x_2683_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_div___boxed(lean_object* v_p_2688_, lean_object* v_k_2689_){
_start:
{
lean_object* v_res_2690_; 
v_res_2690_ = l_Lean_Grind_Linarith_Poly_div(v_p_2688_, v_k_2689_);
lean_dec(v_k_2689_);
return v_res_2690_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0(void){
_start:
{
lean_object* v___x_2691_; lean_object* v___x_2692_; 
v___x_2691_ = lean_unsigned_to_nat(1u);
v___x_2692_ = lean_nat_to_int(v___x_2691_);
return v___x_2692_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1(void){
_start:
{
lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2693_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0);
v___x_2694_ = lean_int_neg(v___x_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go(lean_object* v_k_2695_, lean_object* v_x_2696_, lean_object* v_p_2697_){
_start:
{
uint8_t v___y_2699_; lean_object* v___x_2710_; uint8_t v___x_2711_; 
v___x_2710_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__0);
v___x_2711_ = lean_int_dec_eq(v_k_2695_, v___x_2710_);
if (v___x_2711_ == 0)
{
lean_object* v___x_2712_; uint8_t v___x_2713_; 
v___x_2712_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go___closed__1);
v___x_2713_ = lean_int_dec_eq(v_k_2695_, v___x_2712_);
v___y_2699_ = v___x_2713_;
goto v___jp_2698_;
}
else
{
v___y_2699_ = v___x_2711_;
goto v___jp_2698_;
}
v___jp_2698_:
{
if (v___y_2699_ == 0)
{
if (lean_obj_tag(v_p_2697_) == 0)
{
lean_object* v___x_2700_; 
v___x_2700_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2700_, 0, v_k_2695_);
lean_ctor_set(v___x_2700_, 1, v_x_2696_);
return v___x_2700_;
}
else
{
lean_object* v_k_2701_; lean_object* v_v_2702_; lean_object* v_p_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; uint8_t v___x_2706_; 
v_k_2701_ = lean_ctor_get(v_p_2697_, 0);
lean_inc(v_k_2701_);
v_v_2702_ = lean_ctor_get(v_p_2697_, 1);
lean_inc(v_v_2702_);
v_p_2703_ = lean_ctor_get(v_p_2697_, 2);
lean_inc(v_p_2703_);
lean_dec_ref(v_p_2697_);
v___x_2704_ = lean_nat_abs(v_k_2701_);
v___x_2705_ = lean_nat_abs(v_k_2695_);
v___x_2706_ = lean_nat_dec_lt(v___x_2704_, v___x_2705_);
lean_dec(v___x_2705_);
lean_dec(v___x_2704_);
if (v___x_2706_ == 0)
{
lean_dec(v_v_2702_);
lean_dec(v_k_2701_);
v_p_2697_ = v_p_2703_;
goto _start;
}
else
{
lean_dec(v_x_2696_);
lean_dec(v_k_2695_);
v_k_2695_ = v_k_2701_;
v_x_2696_ = v_v_2702_;
v_p_2697_ = v_p_2703_;
goto _start;
}
}
}
else
{
lean_object* v___x_2709_; 
lean_dec(v_p_2697_);
v___x_2709_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2709_, 0, v_k_2695_);
lean_ctor_set(v___x_2709_, 1, v_x_2696_);
return v___x_2709_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_Linarith_Poly_pickVarToElim_x3f(lean_object* v_p_2714_){
_start:
{
if (lean_obj_tag(v_p_2714_) == 0)
{
lean_object* v___x_2715_; 
v___x_2715_ = lean_box(0);
return v___x_2715_;
}
else
{
lean_object* v_k_2716_; lean_object* v_v_2717_; lean_object* v_p_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; 
v_k_2716_ = lean_ctor_get(v_p_2714_, 0);
lean_inc(v_k_2716_);
v_v_2717_ = lean_ctor_get(v_p_2714_, 1);
lean_inc(v_v_2717_);
v_p_2718_ = lean_ctor_get(v_p_2714_, 2);
lean_inc(v_p_2718_);
lean_dec_ref(v_p_2714_);
v___x_2719_ = l___private_Lean_Meta_Tactic_Grind_Arith_Linear_Util_0__Lean_Grind_Linarith_Poly_pickVarToElim_x3f_go(v_k_2716_, v_v_2717_, v_p_2718_);
v___x_2720_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2720_, 0, v___x_2719_);
return v___x_2720_;
}
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Int_Gcd(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Int_Gcd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* initialize_Init_Data_Int_Gcd(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Arith_Linear_LinearM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Int_Gcd(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_Linear_Util(builtin);
}
#ifdef __cplusplus
}
#endif
